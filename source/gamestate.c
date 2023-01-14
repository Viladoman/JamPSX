#include "gamestate.h"
#include <stdlib.h>
#include <libgte.h>
#include <libgpu.h>
#include <libgs.h>

#include "airport.h"
#include "main_menu.h"
#include "gameover.h"

SGameState *CurrentGameState = NULL;

SGameState GameStates[] = { {StartAirport, UpdateAirport, RenderAirport},
                            {InitMainMenu, UpdateMainMenu, RenderMainMenu}, 
                            {InitGameOver, UpdateGameOver, RenderGameOver} };

void GameState_ChangeGameStateEx(SGameState *NewGameState) {
    CurrentGameState = NewGameState;
    if(!CurrentGameState)
        return;

    CurrentGameState->InitFunc();
}

void GameState_ChangeGameState(enum EGameStates state)
{
    GameState_ChangeGameStateEx(&GameStates[state]);
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