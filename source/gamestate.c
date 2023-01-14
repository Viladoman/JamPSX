#include "gamestate.h"
#include <stdlib.h>
#include <libgte.h>
#include <libgpu.h>
#include <libgs.h>

SGameState *CurrentGameState = NULL;

void GameState_ChangeGameState(SGameState *NewGameState) {
    CurrentGameState = NewGameState;
    if(!CurrentGameState)
        return;

    CurrentGameState->InitFunc();
}

void GameState_Update(int elapsed) {
    if(!CurrentGameState)
        return;
    CurrentGameState->UpdateFunc(elapsed);
}

void GameState_Render(SDC_Render* render, SDC_Camera* camera) {
    if(!CurrentGameState)
        return;
    CurrentGameState->RenderFunc(render, camera);
}