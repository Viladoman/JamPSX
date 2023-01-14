#ifndef _PLANE001_MESH_
#define _PLANE001_MESH_

#include <types.h>
#include "dcRender.h"

static SDC_VertexTexturedNormal Plane001_Vertices[] = {
    { -14, 5, -754, 0, 0, 4096, 0, 0, 0, 0 },
    { -14, 5, 754, 0, 0, 4096, 0, 0, 0, 63 },
    { 14, 5, -754, 0, 0, 4096, 0, 0, 63, 0 },
    { 14, 5, 754, 0, 0, 4096, 0, 0, 63, 63 }
};
static u_short Plane001_Indices[] = {
    0, 2, 1, 2, 3, 1
};
static SDC_Mesh3D Plane001_Mesh = {Plane001_Vertices, Plane001_Indices, NULL, 6, 4, POLIGON_VERTEX_TEXTURED_NORMAL};
#endif