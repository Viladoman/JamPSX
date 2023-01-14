#ifndef _SCANNER_P1_MESH_
#define _SCANNER_P1_MESH_

#include <types.h>
#include "dcRender.h"

static SDC_VertexNormal Scanner_P1_Vertices[] = {
    { -525, 168, -283, 0, 0, 4096, 0, 0 },
    { -275, 168, -283, 0, 0, 4096, 0, 0 },
    { -275, 168, -496, 0, 0, 4096, 0, 0 },
    { -525, 168, -496, 0, 0, 4096, 0, 0 },
    { -525, 148, -510, 0, 0, 0, -4096, 0 },
    { -275, 148, -510, 0, 0, 0, -4096, 0 },
    { -275, 0, -510, 0, 0, 0, -4096, 0 },
    { -525, 0, -510, 0, 0, 0, -4096, 0 },
    { -275, 148, -269, 0, 0, 0, 4096, 0 },
    { -525, 148, -269, 0, 0, 0, 4096, 0 },
    { -525, 0, -269, 0, 0, 0, 4096, 0 },
    { -275, 0, -269, 0, 0, 0, 4096, 0 },
    { -275, 135, -463, 0, 4096, 0, 0, 0 },
    { -275, 0, -510, 0, 4095, 0, 0, 0 },
    { -275, 148, -510, 0, 4096, 0, 0, 0 },
    { -275, -1, -463, 0, 4096, 0, 0, 0 },
    { -275, 168, -496, 0, 4096, 0, 0, 0 },
    { -275, 168, -283, 0, 4096, 0, 0, 0 },
    { -275, 135, -316, 0, 4096, 0, 0, 0 },
    { -275, 0, -269, 0, 4095, 0, 0, 0 },
    { -275, -1, -316, 0, 4096, 0, 0, 0 },
    { -275, 148, -269, 0, 4096, 0, 0, 0 },
    { -525, 135, -463, 0, 0, 0, 4096, 0 },
    { -275, -1, -463, 0, 0, 0, 4096, 0 },
    { -275, 135, -463, 0, 0, 0, 4096, 0 },
    { -525, -1, -463, 0, 0, 0, 4096, 0 },
    { -275, 135, -316, 0, 0, 0, -4096, 0 },
    { -525, -1, -316, 0, 0, 0, -4096, 0 },
    { -525, 135, -316, 0, 0, 0, -4096, 0 },
    { -275, -1, -316, 0, 0, 0, -4096, 0 },
    { -275, 148, -510, 0, 0, 2354, -3351, 0 },
    { -525, 148, -510, 0, 0, 2354, -3351, 0 },
    { -275, 168, -496, 0, 0, 2354, -3351, 0 },
    { -525, 168, -496, 0, 0, 2354, -3351, 0 },
    { -525, 148, -269, 0, 0, 2354, 3351, 0 },
    { -275, 148, -269, 0, 0, 2354, 3351, 0 },
    { -525, 168, -283, 0, 0, 2354, 3351, 0 },
    { -275, 168, -283, 0, 0, 2354, 3351, 0 },
    { -525, 148, -510, 0, -4096, 0, 0, 0 },
    { -525, 0, -510, 0, -4095, 0, 0, 0 },
    { -525, 135, -463, 0, -4096, 0, 0, 0 },
    { -525, -1, -463, 0, -4096, 0, 0, 0 },
    { -525, 168, -283, 0, -4096, 0, 0, 0 },
    { -525, 168, -496, 0, -4096, 0, 0, 0 },
    { -525, 135, -316, 0, -4096, 0, 0, 0 },
    { -525, 0, -269, 0, -4095, 0, 0, 0 },
    { -525, 148, -269, 0, -4096, 0, 0, 0 },
    { -525, -1, -316, 0, -4096, 0, 0, 0 }
};
static u_short Scanner_P1_Indices[] = {
    0, 2, 1, 0, 3, 2, 4, 6, 5, 4, 7, 6, 8, 10, 9, 8, 11, 10, 12, 14, 13, 13, 15, 12, 16, 18, 17, 16, 12, 18, 18, 20, 19, 
    19, 21, 18, 22, 24, 23, 23, 25, 22, 26, 28, 27, 27, 29, 26, 16, 14, 12, 17, 18, 21, 30, 32, 31, 33, 31, 32, 34, 36, 35, 37, 35, 
    36, 38, 40, 39, 40, 41, 39, 42, 44, 43, 44, 40, 43, 44, 46, 45, 45, 47, 44, 43, 40, 38, 42, 46, 44
};
static SDC_Mesh3D Scanner_P1_Mesh = {Scanner_P1_Vertices, Scanner_P1_Indices, NULL, 90, 48, POLIGON_VERTEX_NORMAL};
#endif