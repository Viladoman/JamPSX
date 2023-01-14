#include "main_menu.h"

#include "dcInput.h"
#include "gamestate.h"

SDC_Input inputMenu[2];

void InitMainMenu() 
{
    dcInput_InitializePad(&inputMenu[0], 0);
    dcInput_InitializePad(&inputMenu[1], 1);
}

void UpdateMainMenu(int elapsed) 
{
    dcInput_UpdateInput(&inputMenu[0]);
    dcInput_UpdateInput(&inputMenu[1]);

    if ( dcInput_BecomesPressed(&inputMenu[0],PADstart) ||  dcInput_BecomesPressed(&inputMenu[1],PADstart) )
    {
        GameState_ChangeGameState(AIRPORT_GAMESTATE);
    }
}

void RenderMainMenu(SDC_Render* render, SDC_Camera* camera) {
    FntPrint("Destruction Extra Super Convoluted Obuscated Neural Turbo Recursive Operatations Laboratory\n");  
    FntPrint("PRESS START TO BEGIN.\n");  
}