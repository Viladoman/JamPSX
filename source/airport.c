#include "airport.h"

#include "dcInput.h"

#include "suitcase.h"

#include "meshes/Exit_P1.h"
#include "meshes/Exit_P2.h"
#include "meshes/Path_P1.h"
#include "meshes/Path_P2.h"
#include "meshes/Scanner_P1.h"
#include "meshes/Scanner_P2.h"
#include "meshes/Game_Ground.h"

static int gSpawnTimerBase  = 5 * 250; 
static int gSpawnTimerRange = 3 * 250; 
static int gScannerWaitTime = 3 * 250; 
static int gSuitcaseSpeed   = 1; 

struct BeltNodeDef
{ 
    VECTOR*             position; 
    struct BeltNodeDef* next[2];
}; 
typedef struct BeltNodeDef BeltNode; 

typedef struct 
{
    BeltNode* prevNode; 
    BeltNode* nextNode;
    int       timer; 
    int       totalTimer; 
} SuitcaseState;

typedef struct
{
    SDC_Input input[2];
    unsigned char level; 
    BeltNode* spawnPoints[2];
    BeltNode* scanners[2];
    BeltNode* outputs[2];
    int       nextSpawn[2];

    SuitcaseState gSuitcaseStates[MAX_SUITCASES];
} Airport;

static Airport gAirport; 

VECTOR gNodesA[] = { {-1000,0,-100}, {1000,0,100} };
VECTOR gNodesB[] = { {-1000,0,0}, {1000,0,0} };
BeltNode gNodeStorage[4]; 

//BeltNode 

int GetRandomNumber(int base, int range) 
{ 
    return base + (rand() % range); 
}

int lerpS(int start, int dest, unsigned pos) {
    return (start * (256 - pos) + dest * pos) >> 8; 
};

void CreateGraph()
{
    //TODO ~ ramonv ~ manual graph 

    gNodeStorage[0].next[1] = NULL;
    gNodeStorage[1].next[1] = NULL;
    gNodeStorage[2].next[1] = NULL;
    gNodeStorage[3].next[1] = NULL;

    gNodeStorage[0].position = &gNodesA[0];
    gNodeStorage[1].position = &gNodesA[1];
    gNodeStorage[2].position = &gNodesB[0];
    gNodeStorage[3].position = &gNodesB[1];

    gNodeStorage[0].next[0] = &(gNodeStorage[1]);
    gNodeStorage[2].next[1] = &(gNodeStorage[3]);

    gAirport.spawnPoints[0] = &gNodeStorage[0];
    gAirport.spawnPoints[1] = &gNodeStorage[2];
}

void StartAirport()
{
    ResetSuitcases(); 
    gAirport.level = 0; 
    dcInput_InitializePad(&(gAirport.input[0]), 0);
    dcInput_InitializePad(&(gAirport.input[1]), 1);    

    CreateGraph(); 

    for (int i=0;i<2;++i)
    { 
        gAirport.nextSpawn[i] = GetRandomNumber(gSpawnTimerBase,gSpawnTimerRange);
    }
}

void TrySpawnSuitcaseAtBelt(unsigned char beltId)
{
    Suitcase* newSuitcase = SpawnSuitcase();
    if ( newSuitcase )
    { 
        //Setup Suitcase 
        //TODO ~ ramonv ~ difficulty adjustment and shuffles 
        SetupSuitcase(newSuitcase, GetRandomNumber(0,2), GetRandomNumber(0,2), GetRandomNumber(0,2));

        const int suitcaseIndex = GetSuitcaseIndex(newSuitcase);
        gAirport.gSuitcaseStates[suitcaseIndex].prevNode = NULL;
        gAirport.gSuitcaseStates[suitcaseIndex].nextNode = gAirport.spawnPoints[beltId];
        gAirport.gSuitcaseStates[suitcaseIndex].timer    = 0; //force recompute

        //Locate initial suitcase position
        //newSuitcase->yaw = GetRandomNumber();
        newSuitcase->position = *gAirport.spawnPoints[beltId]->position;
    }
}

bool IsSpawnNode(BeltNode* node)
{
    return node && ( node == gAirport.spawnPoints[0] || node == gAirport.spawnPoints[1] );
}

bool IsScannerNode(BeltNode* node)
{
    return node && ( node == gAirport.scanners[0] || node == gAirport.scanners[1] );
}

bool IsOutputNode(BeltNode* node)
{
    return node && ( node == gAirport.outputs[0] || node == gAirport.outputs[1] );
}

BeltNode* FindNextNode(BeltNode* node)
{
    if ( node->next[0] == NULL)
    { 
        return node->next[1]? node->next[1] : NULL; 
    }

    if ( node->next[1] == NULL)
    {
        return node->next[0]? node->next[0] : NULL; 
    }

    return node->next[GetRandomNumber(0,2)];
}

void MoveSuitcase(int index, int elapsed)
{
    if ( !IsSuitcaseActive(index) )
    { 
        return;
    }

    BeltNode* prevNode = gAirport.gSuitcaseStates[index].prevNode; 
    BeltNode* nextNode = gAirport.gSuitcaseStates[index].nextNode; 

    gAirport.gSuitcaseStates[index].timer -= elapsed; 
    if (gAirport.gSuitcaseStates[index].timer <= 0)
    { 
        //State change 
        const int extraElapsed = -gAirport.gSuitcaseStates[index].timer;
        gAirport.gSuitcaseStates[index].prevNode = nextNode; //Advance node 

        GetSuitcase(index)->position = *(nextNode->position);

        if ( IsScannerNode(nextNode) && prevNode != nextNode )
        { 
            //We jsut arrived to a scanner

            //TODO ~ ramonv ~ perform scanner wait 
            
            gAirport.gSuitcaseStates[index].timer = gScannerWaitTime; 
            gAirport.gSuitcaseStates[index].totalTimer = gScannerWaitTime;
            MoveSuitcase(index, extraElapsed);
        }
        else if ( IsOutputNode(nextNode) && prevNode != nextNode )
        {
            //We just arrives to a scanner 

            //TODO ~ ramonv ~ perform output check 

            MoveSuitcase(index, extraElapsed);
        }
        else 
        { 
            BeltNode* newNextNode = FindNextNode(nextNode); 
            BeltNode* newPrevNode = nextNode; 
            gAirport.gSuitcaseStates[index].nextNode = newNextNode; 

            if ( newNextNode == NULL)
            { 
                //Path Termination / Despawn 
                DestroySuitcase( GetSuitcase(index) ); 
            }
            else 
            { 
                //Regular advance
                long dx = newNextNode->position->vx - newPrevNode->position->vx; 
                long dy = newNextNode->position->vy - newPrevNode->position->vy; 
                long dz = newNextNode->position->vz - newPrevNode->position->vz; 
                long distance = csqrt(dx*dx + dy*dy + dz*dz);
                int timeToNext = distance / gSuitcaseSpeed; 

                gAirport.gSuitcaseStates[index].timer      = timeToNext; 
                gAirport.gSuitcaseStates[index].totalTimer = timeToNext;

                MoveSuitcase(index, extraElapsed);
            }
        }
    }
    else if ( prevNode != nextNode )
    { 
        //interpolate between first position and the last 

        const int totalTime = gAirport.gSuitcaseStates[index].totalTimer;
        const int remainingtime =  gAirport.gSuitcaseStates[index].timer;
        const int factor = (256*(totalTime - remainingtime)) / totalTime; 

        Suitcase* suitcase = GetSuitcase(index);
        suitcase->position.vx = lerpS(prevNode->position->vx,nextNode->position->vx,factor);
        suitcase->position.vy = lerpS(prevNode->position->vy,nextNode->position->vy,factor);
        suitcase->position.vz = lerpS(prevNode->position->vz,nextNode->position->vz,factor);

        //TODO ~ ramonv ~ orient yaw ( optional )
    } 
}

void UpdateAirport(int elapsed)
{
    // Move current suitcases

    for (int i=0;i<MAX_SUITCASES;++i)
    { 
        MoveSuitcase(i, elapsed); 
    }    

    // Trigger new spawns 
    for (int i=0;i<2;++i)
    { 
        gAirport.nextSpawn[i] -= elapsed;

        if ( gAirport.nextSpawn[i] < 0 )
        {           
            //reset timer
            gAirport.nextSpawn[i] = GetRandomNumber(gSpawnTimerBase,gSpawnTimerRange);
            TrySpawnSuitcaseAtBelt(i);
        }
    }
}

void RenderBackground(SDC_Render* render, SDC_Camera* camera) {
    SDC_DrawParams drawParams = {
        .tim = NULL,
        .constantColor = {255, 255, 255},
        .bLighting = 1,
        .bUseConstantColor = 1
    };

    SVECTOR rotation = {0};
    VECTOR translation = {0, 0, 0, 0};
    MATRIX transform;

    RotMatrix(&rotation, &transform);
    TransMatrix(&transform, &translation);

    MATRIX MVP;
    dcCamera_ApplyCameraTransform(camera, &transform, &MVP);

    dcRender_DrawMesh(render, &Exit_P1_Mesh, &MVP, &drawParams );
    dcRender_DrawMesh(render, &Exit_P2_Mesh, &MVP, &drawParams );

    dcRender_DrawMesh(render, &Scanner_P1_Mesh, &MVP, &drawParams );
    dcRender_DrawMesh(render, &Scanner_P2_Mesh, &MVP, &drawParams );

    dcRender_DrawMesh(render, &Path_P1_Mesh, &MVP, &drawParams );
    dcRender_DrawMesh(render, &Path_P2_Mesh, &MVP, &drawParams );
}

void RenderAirport(SDC_Render* render, SDC_Camera* camera)
{
    RenderBackground(render, camera); 

    RenderSuitcases(render, camera);
}