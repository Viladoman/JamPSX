#include "airport.h"

#include <stdio.h>

#include "dcInput.h"
#include "dcFont.h"

#include "suitcase.h"
#include "gamestate.h"

#include "meshes/Exit_P1.h"
#include "meshes/Exit_P2.h"
#include "meshes/Path_P1.h"
#include "meshes/Path_P2.h"

#include "meshes/Scanner_P1.h"
#include "meshes/Scanner_P2.h"

#include "meshes/Game_Ground_P1.h"
#include "meshes/Game_Ground_P2.h"

#include "meshes/ScannerQuad_P1.h"
#include "meshes/ScannerQuad_P2.h"

#include "meshes/Plane001.h"

static int gSpawnTimerBase  = 100; //5 * 250; 
static int gSpawnTimerRange = 1; //3 * 250; 
static int gScannerWaitTime = 50; //3 * 250; 
static int gSuitcaseSpeed   = 6; 
static int gStartLives      = 50; 

extern unsigned long _binary_data_Path_Texture_tim_start[];

extern unsigned long _binary_data_BombaAzul_tim_start[];
extern unsigned long _binary_data_BombaRoja_tim_start[];
extern unsigned long _binary_data_MarihuanaAzul_tim_start[];
extern unsigned long _binary_data_MarihuanaRojo_tim_start[];
extern unsigned long _binary_data_OsitoAzul_tim_start[];
extern unsigned long _binary_data_OsitoRojo_tim_start[];
extern unsigned long _binary_data_ZapatoAzul_tim_start[];
extern unsigned long _binary_data_ZapatoRojo_tim_start[];
TIM_IMAGE gImageOk, gImageBad;

typedef struct 
{
    unsigned char beltId; 
    char          prevNode; 
    char          nextNode;
    int           timer; 
    int           totalTimer; 
} SuitcaseState;

typedef struct
{
    SDC_Input input[2];
    int scanners[2];
    int outputs[2];
    int nextSpawn[2];
    unsigned char beltSize[2];
    TIM_IMAGE pathTexture;

    SuitcaseState gSuitcaseStates[MAX_SUITCASES];

    int score; 
    int lives; 

    bool paused; 

} Airport;

static Airport gAirport; 

VECTOR gNodesA[] = {
{-957, 81, -390}, // _NodeA_01_0_0
{-470, 81, -390}, // _NodeA_02_0_1
{-60, 81, -390}, // _NodeA_03_0_2
{-32, 81, -378}, // _NodeA_03_0_3
{-20, 81, -351}, // _NodeA_03_0_4
{-20, 81, -230}, // _NodeA_04_0_2
{-39, 81, -205}, // _NodeA_04_0_3
{-63, 81, -188}, // _NodeA_04_0_4
{-152, 81, -182}, // _NodeA_05_0_0
{-166, 81, -169}, // _NodeA_05_0_001
{-190, 81, -150}, // _NodeA_05_0_002
{-189, 81, 175}, // _NodeA_06_0_0
{-174, 81, 199}, // _NodeA_06_0_001
{-150, 81, 215}, // _NodeA_06_0_002
{119, 81, 213}, // _NodeA_07_0_0
{144, 81, 230}, // _NodeA_07_0_001
{160, 81, 254}, // _NodeA_07_0_002
{160, 81, 359}, // _NodeA_08_0_0
{175, 81, 383}, // _NodeA_08_0_001
{200, 81, 400}, // _NodeA_08_0_002
{678, 81, 394}, // _NodeA_09_0_1
{934, 81, 394} // _NodeA_10_0_2
};
VECTOR gNodesB[] = {
{957, 12, -396}, // _NodeB_01_0_001
{545, 20, -400}, // _NodeB_01_0_002
{169, 12, -400}, // _NodeB_01_0_003
{144, 12, -386}, // _NodeB_01_0_004
{131, 12, -359}, // _NodeB_01_0_005
{129, 12, -240}, // _NodeB_01_0_006
{149, 12, -211}, // _NodeB_01_0_007
{169, 12, -200}, // _NodeB_01_0_008
{300, 12, -200}, // _NodeB_01_0_009
{324, 12, -184}, // _NodeB_01_0_010
{340, 12, -160}, // _NodeB_01_0_011
{340, 12, -31}, // _NodeB_01_0_012
{324, 12, -6}, // _NodeB_01_0_013
{299, 12, 9}, // _NodeB_01_0_014
{-310, 12, 9}, // _NodeB_01_0_015
{-335, 12, 26}, // _NodeB_01_0_016
{-350, 12, 49}, // _NodeB_01_0_017
{-349, 12, 340}, // _NodeB_01_0_018
{-365, 12, 364}, // _NodeB_01_0_019
{-389, 12, 380}, // _NodeB_01_0_020
{-680, 12, 380}, // _NodeB_01_0_021
{-943, 12, 379} // _NodeB_01_0_022
};

VECTOR* GetNodes(unsigned char beltId)
{ 
    return beltId == 0? gNodesA : gNodesB;
}

int GetAirportScore()
{
    return gAirport.score; 
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
    gAirport.beltSize[0] = sizeof(gNodesA)/sizeof(gNodesA[0]);
    gAirport.beltSize[1] = sizeof(gNodesB)/sizeof(gNodesB[0]); 

    gAirport.scanners[0] = 1;
    gAirport.scanners[1] = 1;

    gAirport.outputs[0] = gAirport.beltSize[0] - 2;
    gAirport.outputs[1] = gAirport.beltSize[1] - 2;
}

void StartAirport()
{
    ResetSuitcases(); 
    dcInput_InitializePad(&(gAirport.input[0]), 0);
    dcInput_InitializePad(&(gAirport.input[1]), 1);    

    gAirport.lives = gStartLives; 
    gAirport.score = 0; 
    gAirport.paused = false;

    CreateGraph(); 

    for (int i=0;i<2;++i)
    { 
        gAirport.nextSpawn[i] = GetRandomNumber(gSpawnTimerBase,gSpawnTimerRange);
    }
    // load textures
    dcRender_LoadTexture(&gAirport.pathTexture, _binary_data_Path_Texture_tim_start);

// extern unsigned long _binary_data_BombaAzul_tim_start[];
// extern unsigned long _binary_data_BombaRoja_tim_start[];
// extern unsigned long _binary_data_MarihuanaAzul_tim_start[];
// extern unsigned long _binary_data_MarihuanaRojo_tim_start[];
// extern unsigned long _binary_data_OsitoAzul_tim_start[];
// extern unsigned long _binary_data_OsitoRojo_tim_start[];
// extern unsigned long _binary_data_ZapatoAzul_tim_start[];
// extern unsigned long _binary_data_ZapatoRojo_tim_start[];

    dcRender_LoadTexture(&gImageOk, _binary_data_BombaAzul_tim_start);
    dcRender_LoadTexture(&gImageBad, _binary_data_BombaRoja_tim_start);
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
        gAirport.gSuitcaseStates[suitcaseIndex].totalTimer = 1; //force recompute

        //Locate initial suitcase position
        newSuitcase->position = GetNodes(beltId)[0];
        newSuitcase->yaw = GetRandomNumber(0,4096); 
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

void ValidateSuitcase(int index)
{
    //TODO ~ add some feedback 
    const int beltId = gAirport.gSuitcaseStates[index].beltId;

    unsigned char content = GetSuitcase(index)->content;

    char validator = 0; 
    if ( dcInput_IsPressed(&gAirport.input[beltId], PADRup) )    { validator |= 2; }
    if ( dcInput_IsPressed(&gAirport.input[beltId], PADRdown) )  { validator |= 4; }
    if ( dcInput_IsPressed(&gAirport.input[beltId], PADRleft) )  { validator |= 8; }
    if ( dcInput_IsPressed(&gAirport.input[beltId], PADRright) ) { validator |= 16; }

    char contentMask = content == 0? 0 : 1 << content;

    printf("Validating... %d against %d\n", contentMask, validator);

    if ( contentMask == validator ) 
    { 
        ++gAirport.score;
    }
    else 
    { 
        --gAirport.lives;
        if ( gAirport.lives <= 0 )
        { 
            GameState_ChangeGameState(GAMEOVER_GAMESTATE);
        }
    }
}

void MoveSuitcase(int index, int elapsed)
{
    if ( !IsSuitcaseActive(index) )
    { 
        return;
    }
    
    //FntPrint("Case %d is %d \n", index, GetSuitcase(index)->content );  

    int belt     = gAirport.gSuitcaseStates[index].beltId; 
    int prevNode = gAirport.gSuitcaseStates[index].prevNode; 
    int nextNode = gAirport.gSuitcaseStates[index].nextNode; 

    gAirport.gSuitcaseStates[index].timer -= elapsed; 
    if (gAirport.gSuitcaseStates[index].timer <= 0)
    { 
        //State change 
        const int extraElapsed = -gAirport.gSuitcaseStates[index].timer;
        gAirport.gSuitcaseStates[index].prevNode = nextNode; //Advance node 

        GetSuitcase(index)->position = GetNodes(belt)[nextNode];

        if ( IsScannerNode(belt,nextNode) && prevNode != nextNode )
        { 
            //We just arrived to a scanner

            //TODO ~ ramonv ~ perform scanner wait 
            
            gAirport.gSuitcaseStates[index].timer = gScannerWaitTime; 
            gAirport.gSuitcaseStates[index].totalTimer = gScannerWaitTime;
            MoveSuitcase(index, extraElapsed);
        }
        else 
        { 
            if ( IsOutputNode(belt,nextNode) )
            {
                //We just arrives to the output
                ValidateSuitcase(index); 
            }

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

        //TODO ~ ramonv ~ orient yaw ( optional )
    } 
}

void UpdateAirport(int elapsed)
{
    //Update pause
    if ( dcInput_BecomesPressed(&gAirport.input[0], PADstart) || dcInput_BecomesPressed(&gAirport.input[1], PADstart))
    {
        gAirport.paused = !gAirport.paused;
    }

    if ( gAirport.paused )
    { 
        return; 
    }

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

    drawParams.tim = &gAirport.pathTexture;
    dcRender_DrawMesh(render, &Path_P1_Mesh, &MVP, &drawParams );
    dcRender_DrawMesh(render, &Path_P2_Mesh, &MVP, &drawParams );
    drawParams.tim = NULL;
}

void RenderScanners(SDC_Render* render, SDC_Camera* camera)
{
    for (int i=0;i<MAX_SUITCASES;++i)
    {
        unsigned char beltId = gAirport.gSuitcaseStates[i].beltId;
        char prevNode = gAirport.gSuitcaseStates[i].prevNode;
        char nextNode = gAirport.gSuitcaseStates[i].nextNode;
        if ( prevNode == nextNode && IsScannerNode(beltId, nextNode) )
        {
            unsigned char thisContent = GetSuitcase(i)->content;

            FntPrint("BELT %d has %d\n", beltId, thisContent);  
            //TODO ~ RUBEN ~ AQUI 
            SDC_Mesh3D* mesh = beltId ? &ScannerQuad_P1_Mesh : &ScannerQuad_P2_Mesh;
            TIM_IMAGE* tim = thisContent ? &gImageBad : &gImageOk;

            SDC_DrawParams drawParams = {
                .tim = NULL,
                .constantColor = {127, 127, 127},
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

            drawParams.tim = tim;
            dcRender_DrawMesh(render, mesh, &MVP, &drawParams );

            break;
        }
    }
}

void RenderAirport(SDC_Render* render, SDC_Camera* camera)
{
    for (int i=0;i<2;++i)
    {
        dcInput_UpdateInput(&gAirport.input[i]);
    }

    RenderBackground(render, camera); 
    RenderSuitcases(render, camera);

    RenderScanners(render, camera);

    //Render UI / Score
    CVECTOR color = {127, 127, 127};
    char txt[256];
    sprintf(txt, "LIVES: %d SCORE: %d \n", gAirport.lives, gAirport.score);
    dcFont_Print(render, 256, 220, &color, txt);

    if ( gAirport.paused )
    {
        dcFont_Print(render, 256, 200, &color, "PAUSED");
    }
}