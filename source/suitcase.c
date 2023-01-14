#include "suitcase.h"

#include <stdbool.h>
#include <stddef.h>

#include "dcMisc.h"

#define MAX_SUITCASES 20
#define MAX_SHAPES    2
#define MAX_PATTERNS  2

/* placeholder */

#define CUBESIZE 196 

static SDC_Vertex cube_vertices[] = {
    { {-CUBESIZE / 2, -CUBESIZE / 2, -CUBESIZE / 2, 0} }, { {CUBESIZE / 2, -CUBESIZE / 2, -CUBESIZE / 2, 0} },
    { {CUBESIZE / 2, CUBESIZE / 2, -CUBESIZE / 2, 0  } }, { {-CUBESIZE / 2, CUBESIZE / 2, -CUBESIZE / 2, 0  } },
    { {-CUBESIZE / 2, -CUBESIZE / 2, CUBESIZE / 2, 0 } }, { {CUBESIZE / 2, -CUBESIZE / 2, CUBESIZE / 2, 0   } },
    { {CUBESIZE / 2, CUBESIZE / 2, CUBESIZE / 2, 0   } }, { {-CUBESIZE / 2, CUBESIZE / 2, CUBESIZE / 2, 0   } },
};

static u_short cube_indices[] = {
    0, 2, 1, 2, 0, 3,  1, 6, 5, 6, 1, 2,  5, 7, 4, 7, 5, 6,  4, 3, 0, 3, 4, 7,  4, 1, 5, 1, 4, 0,  6, 3, 7, 3, 6, 2,
};

static SDC_Mesh3D cubeMesh = { cube_vertices, cube_indices, NULL, 36, 8, POLIGON_VERTEX };

/* end placeholder */

SDC_Mesh3D* gSuitcaseShapes[MAX_SHAPES] = { &cubeMesh, &cubeMesh }; //TODO ~ ramonv ~ to be implemented
TIM_IMAGE* gSuitcasesPatterns[MAX_PATTERNS] = { NULL, NULL}; //TODO ~ ramonv ~ to be implemented

Suitcase gSuitcases[MAX_SUITCASES];
bool     gSuitcasesActives[MAX_SUITCASES];

void ResetSuitcases()
{ 
    for (int i = 0; i< MAX_SUITCASES; ++i)
    { 
        gSuitcasesActives[i] = false; 
    }
} 

void ResetSuitcase(Suitcase* suitcase)
{
    suitcase->position.vx = 0; 
    suitcase->position.vy = 0; 
    suitcase->position.vz = 0; 

    suitcase->yaw = 0; 
    suitcase->pitch = 0; 
}

Suitcase* SpawnSuitcase()
{ 
    for (int i = 0; i< MAX_SUITCASES; ++i)
    { 
        if ( !gSuitcasesActives[i] )
        { 
            gSuitcasesActives[i] = true;
            ResetSuitcase(&(gSuitcases[i]));
            return &(gSuitcases[i]);
        }
    }

    return NULL;
}

void DestroySuitcase(Suitcase* input)
{ 
    for (int i = 0; i< MAX_SUITCASES; ++i)
    {
        if ( input == &(gSuitcases[i]) )
        {
            gSuitcasesActives[i] = false;
            return;
        }
    }
}

void SetupSuitcase(Suitcase* suitcase, unsigned int shape, unsigned int pattern, unsigned char content)
{
    suitcase->content = content; 
    suitcase->mesh = gSuitcaseShapes[shape % MAX_SHAPES];
    suitcase->pattern = gSuitcasesPatterns[pattern % MAX_PATTERNS];
}

void RenderSuitcase(SDC_Render* render, SDC_Camera* camera, Suitcase* suitcase)
{
    SDC_DrawParams drawParams = {
        .tim = suitcase->pattern,
        .constantColor = {255, 255, 255},
        .bLighting = 1,
        .bUseConstantColor = 1
    };

//HACK
    if ( suitcase->content )
    { 
        drawParams.constantColor.g = 0;
    }
//END HACK

    MATRIX transform; 
    SVECTOR rotation = {.vx = suitcase->pitch, .vy = suitcase->yaw, .vz = 0};
    RotMatrix(&rotation,&transform);
    TransMatrix(&transform, &(suitcase->position));
    dcCamera_ApplyCameraTransform(camera, &transform, &transform);
    dcRender_DrawMesh(render, suitcase->mesh, &transform, &drawParams);
}

void RenderSuitcases(SDC_Render* render, SDC_Camera* camera)
{
    for (int i = 0; i< MAX_SUITCASES; ++i)
    {
        if (gSuitcasesActives[i])
        { 
            RenderSuitcase(render, camera, &(gSuitcases[i])); 
        }
    }
}