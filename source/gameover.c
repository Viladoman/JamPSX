#include "gameover.h"

#include <stdio.h>

#include "airport.h"
#include "dcInput.h"
#include "dcFont.h"
#include "gamestate.h"

SDC_Input input[2]; 

void InitGameOver() {
    dcInput_InitializePad(&input[0], 0);
    dcInput_InitializePad(&input[1], 1);
}

void UpdateGameOver(int elapsed) {
    dcInput_UpdateInput(&input[0]);
    dcInput_UpdateInput(&input[1]);

    if ( dcInput_BecomesPressed(&input[0],PADstart) ||  dcInput_BecomesPressed(&input[1],PADstart) )
    {
        GameState_ChangeGameState(MAINMENU_GAMESTATE);
    }
}

void RenderGameOver(SDC_Render* render, SDC_Camera* camera) 
{
    int score = GetAirportScore();

    //Render UI / Score
    CVECTOR color = {127, 127, 127};
    char txt[256];

    dcFont_Print(render,256,50,&color,"GAME OVER"); 
    sprintf(txt, "FINAL SCORE: %d \n", score);
    dcFont_Print(render, 256, 120, &color, txt);
    dcFont_Print(render, 256, 220, &color, "PRESS START TO EXIT\n");
}