#ifndef _GAMESTATE_
#define _GAMESTATE_

#include "dcRender.h"
#include "dcCamera.h"

typedef struct {
    void (*InitFunc)();
    void (*UpdateFunc)(int);
    void (*RenderFunc)(SDC_Render* render, SDC_Camera* camera);
} SGameState;

void GameState_ChangeGameState(SGameState *NewGameState);
void GameState_Update(int elapsed);
void GameState_Render(SDC_Render* render, SDC_Camera* camera);

#endif