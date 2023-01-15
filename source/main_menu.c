#include "main_menu.h"

#include "dcInput.h"
#include "dcFont.h"
#include "gamestate.h"

SDC_Input inputMenu[2];

int gMenuFlipTextTimer = 0; 
bool gMenuShowPrompt = false;

SDC_TIM_IMAGE gMainMenuLogo;

extern unsigned long _binary_data_DESCONTROL_tim_start[];

void InitMainMenu() 
{
    dcInput_InitializePad(&inputMenu[0], 0);
    dcInput_InitializePad(&inputMenu[1], 1);

    dcRender_LoadTexture(&gMainMenuLogo, _binary_data_DESCONTROL_tim_start);
}

bool menuBecomedPressed(int key)
{
    return dcInput_BecomesPressed(&inputMenu[0],key) ||  dcInput_BecomesPressed(&inputMenu[1],key);
}

void UpdateMainMenu(int elapsed) 
{
    dcInput_UpdateInput(&inputMenu[0]);
    dcInput_UpdateInput(&inputMenu[1]);

    gMenuFlipTextTimer -= elapsed;

    if ( gMenuFlipTextTimer < 0 )
    { 
        gMenuShowPrompt = !gMenuShowPrompt; 
        gMenuFlipTextTimer = gMenuShowPrompt? 50 : 10;
    }

    if ( menuBecomedPressed(PADstart) )
    {
        GameState_ChangeGameState(AIRPORT_GAMESTATE);
    }
}

void RenderMainMenu(SDC_Render* render, SDC_Camera* camera) 
{
    CVECTOR color = {127, 127, 127};

    DVECTOR uv;
    uv.vx = 0;
    uv.vy = 0;
    dcRender_DrawSpriteRect(render, &gMainMenuLogo, 200, 50, 256, 128, &uv, &color);

    if ( gMenuShowPrompt )
    { 
        dcFont_Print(render, 256, 190, &color, "PRESS START TO PLAY\n");
    }
}