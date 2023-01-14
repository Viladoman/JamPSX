#include "airport.h"

#include <stdio.h>

#include "dcInput.h"

#include "suitcase.h"

#include "meshes/Exit_P1.h"
#include "meshes/Exit_P2.h"
#include "meshes/Path_P1.h"
#include "meshes/Path_P2.h"
#include "meshes/Scanner_P1.h"
#include "meshes/Scanner_P2.h"
#include "meshes/Game_Ground.h"

static int gSpawnTimerBase  = 300; //5 * 250; 
static int gSpawnTimerRange = 1; //3 * 250; 
static int gScannerWaitTime = 150; //3 * 250; 
static int gSuitcaseSpeed   = 2; 

typedef struct 
{
    unsigned char beltId; 
    unsigned char prevNode; 
    unsigned char nextNode;
    int           timer; 
    int           totalTimer; 
} SuitcaseState;

typedef struct
{
    SDC_Input input[2];
    unsigned char level; 
    int scanners[2];
    int outputs[2];
    int nextSpawn[2];
    unsigned char beltSize[2];

    SuitcaseState gSuitcaseStates[MAX_SUITCASES];
} Airport;

static Airport gAirport; 

VECTOR gNodesA[] = { 
    {-957,81,-390},
    {-402,81,-390},
    {-27,81,-390},
    {-27,81,-211},
    {-166,81,-169},
    {-166,81,192},
    {124,81,212},
    {167,81,394},
    {678,81,394},
    {934,81,394}
};

VECTOR gNodesB[] = { {-1000,0,0}, {1000,0,0} };

VECTOR* GetNodes(unsigned char beltId)
{ 
    return beltId == 0? gNodesA : gNodesB;
}

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

    gAirport.beltSize[0] = sizeof(gNodesA)/sizeof(gNodesA[0]);
    gAirport.beltSize[1] = 2; 

    gAirport.scanners[0] = 1;
    gAirport.scanners[1] = 1;

    gAirport.outputs[0] = 1;
    gAirport.outputs[1] = 1;
}

void StartAirport(unsigned char level)
{
    ResetSuitcases(); 
    gAirport.level = level; 
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
        SetupSuitcase(newSuitcase, GetRandomNumber(0,MAX_SHAPES), GetRandomNumber(0,MAX_PATTERNS), GetRandomNumber(0,2));

        const int suitcaseIndex = GetSuitcaseIndex(newSuitcase);
        gAirport.gSuitcaseStates[suitcaseIndex].beltId   = beltId;
        gAirport.gSuitcaseStates[suitcaseIndex].prevNode = -1;
        gAirport.gSuitcaseStates[suitcaseIndex].nextNode = 0;
        gAirport.gSuitcaseStates[suitcaseIndex].timer    = 0; //force recompute

        //Locate initial suitcase position
        //newSuitcase->yaw = GetRandomNumber();
        newSuitcase->position = GetNodes(beltId)[0];
    }
}

bool IsSpawnNode(int nodeId)
{
    return nodeId == 0;
}

bool IsScannerNode(int beltId, int nodeId )
{
    return gAirport.scanners[beltId] == nodeId;
}

bool IsOutputNode(int beltId, int nodeId)
{
    return gAirport.outputs[beltId] == nodeId;
}

int FindNextNode(int beltId, int nodeId)
{
    int newNodeId = nodeId + 1; 
    return newNodeId < gAirport.beltSize[beltId] ? newNodeId : -1;
}

void MoveSuitcase(int index, int elapsed)
{
    if ( !IsSuitcaseActive(index) )
    { 
        return;
    }

    int belt     = gAirport.gSuitcaseStates[index].beltId; 
    int prevNode = gAirport.gSuitcaseStates[index].prevNode; 
    int nextNode = gAirport.gSuitcaseStates[index].nextNode; 

    FntPrint("Case at %d - %d - %d\n", index, prevNode, nextNode );

    gAirport.gSuitcaseStates[index].timer -= elapsed; 
    if (gAirport.gSuitcaseStates[index].timer <= 0)
    { 
        //State change 
        const int extraElapsed = -gAirport.gSuitcaseStates[index].timer;
        gAirport.gSuitcaseStates[index].prevNode = nextNode; //Advance node 

        GetSuitcase(index)->position = GetNodes(belt)[nextNode];

        if ( IsScannerNode(belt,nextNode) && prevNode != nextNode )
        { 
            //We jsut arrived to a scanner

            //TODO ~ ramonv ~ perform scanner wait 
            
            gAirport.gSuitcaseStates[index].timer = gScannerWaitTime; 
            gAirport.gSuitcaseStates[index].totalTimer = gScannerWaitTime;
            MoveSuitcase(index, extraElapsed);
        }
        else if ( IsOutputNode(belt,nextNode) && prevNode != nextNode )
        {
            //We just arrives to the output

            //TODO ~ ramonv ~ perform output check 

            MoveSuitcase(index, extraElapsed);
        }
        else 
        { 
            int newNextNode = FindNextNode(belt, nextNode); 
            int newPrevNode = nextNode; 
            gAirport.gSuitcaseStates[index].nextNode = newNextNode; 

            if ( newNextNode < 0 )
            { 
                //Path Termination / Despawn 
                DestroySuitcase( GetSuitcase(index) ); 
            }
            else 
            { 
                VECTOR prevPos = GetNodes(belt)[newPrevNode];
                VECTOR nextPos = GetNodes(belt)[newNextNode];

                //Regular advance
                long dx = nextPos.vx - prevPos.vx; 
                long dy = nextPos.vy - prevPos.vy; 
                long dz = nextPos.vz - prevPos.vz; 
                long distance2 = dx*dx + dy*dy + dz*dz; 
                long distance = csqrt(distance2 << 12) >> 12;
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

        VECTOR prevPos = GetNodes(belt)[prevNode];
        VECTOR nextPos = GetNodes(belt)[nextNode];

        //move positions to the positive space, interpolate and bring back 

        const long positiveOffset = 4096; 

        Suitcase* suitcase = GetSuitcase(index);
        suitcase->position.vx = lerpS(prevPos.vx + positiveOffset,nextPos.vx + positiveOffset,factor) - positiveOffset;
        suitcase->position.vy = lerpS(prevPos.vy + positiveOffset,nextPos.vy + positiveOffset,factor) - positiveOffset;
        suitcase->position.vz = lerpS(prevPos.vz + positiveOffset,nextPos.vz + positiveOffset,factor) - positiveOffset;

        //FntPrint("Intepol %d -> %d | %d\n", prevNode, nextNode, factor );

        //TODO ~ ramonv ~ orient yaw ( optional )
    } 
}

//bool hack = false; 

void UpdateAirport(int elapsed)
{
    // Move current suitcases

    for (int i=0;i<MAX_SUITCASES;++i)
    { 
        MoveSuitcase(i, elapsed); 
    }    

    // Trigger new spawns 
    //for (int i=0;i<2;++i)
    int i=0; 
    { 
        gAirport.nextSpawn[i] -= elapsed;

        if ( gAirport.nextSpawn[i] < 0 )
        {           
            //reset timer
            gAirport.nextSpawn[i] = GetRandomNumber(gSpawnTimerBase,gSpawnTimerRange);
            TrySpawnSuitcaseAtBelt(i);
        }
    }

   //if ( !hack)
   //{
   //    hack = true; 
   //    TrySpawnSuitcaseAtBelt(0);
   //}
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