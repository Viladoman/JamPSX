// screw you code formatter, this one needs to stay on top
#include <stdlib.h>
// now we need to have libgte.h
#include <libgte.h>
// then, these can work; the psyq library is badly written and won't include what it uses
#include <libetc.h>
#include <libgpu.h>
#include <stdio.h>
#include <types.h>

#include "dcMath.h"
#include "dcCamera.h"
#include "dcRender.h"
#include "dcMemory.h"
#include "dcMisc.h"
#include "dcCollision.h"
#include "dcInput.h"
#include "dcFont.h"

#include "airport.h"
#include "main_menu.h"
#include "gamestate.h"

#ifdef PAL_256 /* Do we want 256 (PAL) high ? */
 #define FRAME_X 640 /* Assume 320 pixels wide */
 #define FRAME_Y 256 /* Frame is 256 high. */
#else /* Otherwise assume 240 NSTC high */
 #define FRAME_X 640 /* Assume 320 wide display. */
 #define FRAME_Y 240 /* Make frame 240 pixels. */
#endif

int main(void) 
{
    dcMemory_Init();
    dcInput_Init();
    InitGeom();

    SDC_Render render;
    SDC_Camera camera;
    long distance = 1;
    long cameraHeight = 900;
    int  width = FRAME_X;
    int  height = FRAME_Y;

    CVECTOR bgColor = {60, 120, 120};
    dcRender_Init(&render, width, height, bgColor, 4096, 8192*8, RENDER_MODE_NTCS);
    dcCamera_SetScreenResolution(&camera, width, height);
    dcCamera_SetCameraPosition(&camera, 0, cameraHeight, distance);
    dcCamera_LookAt(&camera, &VECTOR_ZERO);

    CVECTOR ambientColor = {0, 0, 0};
    dcRender_SetAmbientColor(&render, &ambientColor );

    SVECTOR lightDir = {DC_ONE, 0, 0 };
    SVECTOR lightColor = {DC_ONE, DC_ONE, DC_ONE};
    dcRender_SetLight(&render, 0, &lightDir, &lightColor);

    SVECTOR lightDir1 = {0, DC_ONE, 0 };
    SVECTOR lightColor1 = {DC_ONE/2, DC_ONE/2, DC_ONE/2};
    dcRender_SetLight(&render, 1, &lightDir1, &lightColor1);

    //GameState_ChangeGameState(MAINMENU_GAMESTATE);
    GameState_ChangeGameState(AIRPORT_GAMESTATE);

    // Font
    dcFont_UseSystemFont();

    while (1) 
    {
        GameState_Update(1);
        GameState_Render(&render, &camera);

        dcRender_ReportPrimitivesSize(&render);
        dcRender_SwapBuffers(&render);
    }

    return 0;
}