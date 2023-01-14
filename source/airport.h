#ifndef _INC_AIRPORT_H_
#define _INC_AIRPORT_H_

#include "dcRender.h"
#include "dcCamera.h"

void StartAirport(unsigned char level); 
void UpdateAirport(int elapsed); 
void RenderAirport(SDC_Render* render, SDC_Camera* camera);

#endif //_INC_AIRPORT_H_