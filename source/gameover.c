#include "gameover.h"

#include "airport.h"
#include "dcInput.h"
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
    FntPrint("GAME OVER! FINAL SCORE: %d\n", score);  
    FntPrint("PRESS START TO EXIT\n");  
}