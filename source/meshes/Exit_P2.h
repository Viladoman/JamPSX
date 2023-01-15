#ifndef _EXIT_P2_MESH_
#define _EXIT_P2_MESH_

#include <types.h>
#include "dcRender.h"

static SDC_VertexTexturedNormal Exit_P2_Vertices[] = {
    { 550, 204, 557, 0, 0, 4096, 0, 0, 26, 43 },
    { 800, 204, 557, 0, 0, 4096, 0, 0, 16, 43 },
    { 800, 204, 267, 0, 0, 4096, 0, 0, 16, 54 },
    { 549, 204, 267, 0, 0, 4096, 0, 0, 26, 54 },
    { 800, 184, 253, 0, 0, 0, -4096, 0, 16, 55 },
    { 550, 0, 253, 0, 0, 0, -4096, 0, 26, 62 },
    { 549, 184, 253, 0, 0, 0, -4096, 0, 26, 55 },
    { 800, 0, 253, 0, 0, 0, -4096, 0, 16, 62 },
    { 550, 184, 571, 0, 0, 0, 4095, 0, 26, 42 },
    { 800, 0, 571, 0, 0, 0, 4096, 0, 16, 35 },
    { 800, 184, 571, 0, 0, 0, 4096, 0, 16, 42 },
    { 549, 0, 571, 0, 0, 0, 4096, 0, 26, 35 },
    { 800, 172, 300, 0, 4096, 0, 0, 0, 31, 26 },
    { 800, 0, 253, 0, 4095, 0, 0, 0, 38, 25 },
    { 800, 184, 253, 0, 4096, 0, 0, 0, 31, 25 },
    { 800, -1, 300, 0, 4096, 0, 0, 0, 38, 26 },
    { 800, 204, 557, 0, 4096, 0, 0, 0, 30, 36 },
    { 800, 204, 267, 0, 4096, 0, 0, 0, 30, 25 },
    { 800, 172, 524, 0, 4096, 0, 0, 0, 31, 35 },
    { 800, 0, 571, 0, 4095, 0, 0, 0, 38, 37 },
    { 800, -1, 524, 0, 4095, 0, 0, 0, 38, 35 },
    { 800, 184, 571, 0, 4096, 0, 0, 0, 31, 37 },
    { 800, 172, 300, 0, 0, 0, 4096, 0, 50, 13 },
    { 549, -1, 300, 0, 0, 0, 4096, 0, 57, 22 },
    { 800, -1, 300, 0, 0, 0, 4096, 0, 57, 13 },
    { 549, 172, 300, 0, 0, 0, 4096, 0, 50, 22 },
    { 549, 172, 524, 0, 0, 0, -4096, 0, 60, 28 },
    { 800, -1, 524, 0, 0, 0, -4096, 0, 51, 34 },
    { 549, -1, 524, 0, 0, 0, -4096, 0, 60, 34 },
    { 800, 172, 524, 0, 0, 0, -4096, 0, 51, 28 },
    { 800, 184, 253, 0, 0, 2354, -3351, 0, 16, 55 },
    { 549, 184, 253, 0, 0, 2354, -3351, 0, 26, 55 },
    { 800, 204, 267, 0, 0, 2354, -3351, 0, 16, 54 },
    { 549, 204, 267, 0, 0, 2354, -3351, 0, 26, 54 },
    { 550, 184, 571, 0, 0, 2354, 3351, 0, 26, 42 },
    { 800, 184, 571, 0, 0, 2354, 3351, 0, 16, 42 },
    { 550, 204, 557, 0, 0, 2354, 3351, 0, 26, 43 },
    { 800, 204, 557, 0, 0, 2354, 3351, 0, 16, 43 },
    { 549, 184, 253, 0, -4096, 0, 0, 0, 41, 37 },
    { 550, 0, 253, 0, -4095, 0, 0, 0, 48, 37 },
    { 549, 172, 300, 0, -4096, 0, 0, 0, 42, 35 },
    { 549, -1, 300, 0, -4095, 0, 0, 0, 48, 35 },
    { 550, 204, 557, 0, -4096, 0, 0, 0, 41, 25 },
    { 549, 172, 524, 0, -4096, 0, 0, 0, 42, 27 },
    { 549, 204, 267, 0, -4096, 0, 0, 0, 41, 36 },
    { 549, 0, 571, 0, -4096, 0, 0, 0, 48, 25 },
    { 550, 184, 571, 0, -4096, 0, 0, 0, 41, 25 },
    { 549, -1, 524, 0, -4096, 0, 0, 0, 48, 27 }
};
static u_short Exit_P2_Indices[] = {
    0, 2, 1, 0, 3, 2, 4, 6, 5, 5, 7, 4, 8, 10, 9, 9, 11, 8, 12, 14, 13, 13, 15, 12, 16, 17, 12, 12, 18, 16, 18, 20, 19, 
    19, 21, 18, 22, 24, 23, 23, 25, 22, 26, 28, 27, 27, 29, 26, 17, 14, 12, 16, 18, 21, 30, 32, 31, 33, 31, 32, 34, 36, 35, 37, 35, 
    36, 38, 40, 39, 40, 41, 39, 42, 43, 40, 40, 44, 42, 43, 46, 45, 45, 47, 43, 44, 40, 38, 42, 46, 43
};
static SDC_Mesh3D Exit_P2_Mesh = {Exit_P2_Vertices, Exit_P2_Indices, NULL, 90, 48, POLIGON_VERTEX_TEXTURED_NORMAL};
#endif