#ifndef _GAME_GROUND_MESH_
#define _GAME_GROUND_MESH_

#include <types.h>
#include "dcRender.h"

static SDC_VertexNormal Game_Ground_Vertices[] = {
    { 0, 0, -754, 0, 0, 4096, 0, 0 },
    { -1000, 0, -754, 0, 0, 4096, 0, 0 },
    { -1000, 0, 754, 0, 0, 4096, 0, 0 },
    { 0, 0, 754, 0, 0, 4096, 0, 0 },
    { 1000, 0, -754, 0, 0, 4096, 0, 0 },
    { 1000, 0, 754, 0, 0, 4096, 0, 0 }
};
static u_short Game_Ground_Indices[] = {
    0, 2, 1, 0, 3, 2, 4, 3, 0, 4, 5, 3
};
static SDC_Mesh3D Game_Ground_Mesh = {Game_Ground_Vertices, Game_Ground_Indices, NULL, 12, 6, POLIGON_VERTEX_NORMAL};
#endif