#ifndef _SUITCASE_H_
#define _SUITCASE_H_

#include <stdbool.h>

#include "dcRender.h"
#include "dcCamera.h"

#define MAX_SUITCASES 10
#define MAX_SHAPES    5
#define MAX_PATTERNS  5

typedef struct 
{
    SDC_Mesh3D*    mesh;
    TIM_IMAGE*     pattern;
    short          yaw; 
    short          pitch; 
    VECTOR         position;  
    unsigned char  content;
} Suitcase; 

void ResetSuitcases();

Suitcase* SpawnSuitcase();
int  GetSuitcaseIndex(Suitcase* suitcase);
Suitcase* GetSuitcase(int index);
bool IsSuitcaseActive(int index);
void DestroySuitcase(Suitcase* input);
void SetupSuitcase(Suitcase* suitcase, unsigned int shape, unsigned int pattern, unsigned char content);
void RenderSuitcase(SDC_Render* render, SDC_Camera* camera, Suitcase* suitcase);
void RenderSuitcases(SDC_Render* render, SDC_Camera* camera);

#endif //_SUITCASE_H