#ifndef _BAGGAGE_C_MESH_
#define _BAGGAGE_C_MESH_

#include <types.h>
#include "dcRender.h"

static SDC_VertexColorNormal Baggage_C_Vertices[] = {
    { -33, 51, -17, 0, -1552, 3646, -1034, 0, 73, 69, 38, 0 },
    { 33, 51, 13, 0, 1552, 3646, 1034, 0, 67, 185, 142, 0 },
    { 33, 51, -17, 0, 1552, 3646, -1034, 0, 250, 155, 205, 0 },
    { -33, 51, 13, 0, -1552, 3646, 1034, 0, 50, 243, 12, 0 },
    { 48, 19, 15, 0, 4096, 0, 0, 0, 137, 26, 122, 0 },
    { 48, 19, -19, 0, 4096, 0, 0, 0, 20, 20, 111, 0 },
    { 48, 34, 15, 0, 4096, 0, 0, 0, 66, 145, 192, 0 },
    { 48, 34, -19, 0, 4096, 0, 0, 0, 151, 235, 16, 0 },
    { 25, 34, -45, 0, 0, 0, -4096, 0, 66, 48, 97, 0 },
    { -25, 19, -45, 0, 0, 0, -4096, 0, 148, 35, 200, 0 },
    { -25, 34, -45, 0, 0, 0, -4096, 0, 75, 80, 151, 0 },
    { 25, 19, -45, 0, 0, 0, -4095, 0, 72, 77, 227, 0 },
    { -48, 19, -19, 0, -4096, 0, 0, 0, 216, 122, 151, 0 },
    { -48, 19, 15, 0, -4096, 0, 0, 0, 248, 208, 102, 0 },
    { -48, 34, -19, 0, -4096, 0, 0, 0, 232, 37, 173, 0 },
    { -48, 34, 15, 0, -4096, 0, 0, 0, 1, 227, 184, 0 },
    { -25, 34, 41, 0, 0, 0, 4096, 0, 234, 236, 183, 0 },
    { 25, 19, 41, 0, 0, 0, 4095, 0, 245, 39, 79, 0 },
    { 25, 34, 41, 0, 0, 0, 4096, 0, 89, 174, 163, 0 },
    { -25, 19, 41, 0, 0, 0, 4096, 0, 139, 36, 36, 0 },
    { 25, 41, 31, 0, 933, 3331, 2193, 0, 153, 111, 184, 0 },
    { 25, 34, 41, 0, 693, 3359, 2239, 0, 244, 232, 82, 0 },
    { 34, 34, 34, 0, 2045, 2867, 2089, 0, 243, 61, 112, 0 },
    { 25, 41, -35, 0, 933, 3331, -2193, 0, 208, 72, 37, 0 },
    { 34, 34, -38, 0, 2045, 2867, -2089, 0, 215, 128, 93, 0 },
    { 25, 34, -45, 0, 693, 3359, -2239, 0, 90, 197, 132, 0 },
    { -25, 41, 31, 0, -933, 3331, 2192, 0, 98, 154, 56, 0 },
    { -34, 34, 34, 0, -2045, 2867, 2089, 0, 44, 89, 92, 0 },
    { -25, 34, 41, 0, -693, 3359, 2239, 0, 254, 106, 239, 0 },
    { -25, 41, -35, 0, -933, 3331, -2192, 0, 135, 218, 122, 0 },
    { -25, 34, -45, 0, -693, 3359, -2239, 0, 210, 228, 133, 0 },
    { -34, 34, -38, 0, -2045, 2867, -2089, 0, 191, 228, 99, 0 },
    { 48, 34, -19, 0, 2773, 2853, -971, 0, 29, 180, 114, 0 },
    { 48, 34, 15, 0, 2773, 2853, 971, 0, 251, 197, 80, 0 },
    { -48, 34, -19, 0, -2773, 2853, -971, 0, 64, 176, 139, 0 },
    { -48, 34, 15, 0, -2773, 2853, 971, 0, 98, 205, 227, 0 },
    { 34, 34, -38, 0, 2968, 0, -2822, 0, 181, 79, 132, 0 },
    { 25, 19, -45, 0, 2625, 0, -3143, 0, 201, 250, 77, 0 },
    { 25, 34, -45, 0, 2625, 0, -3143, 0, 40, 132, 119, 0 },
    { 34, 19, -38, 0, 2968, 0, -2822, 0, 103, 14, 240, 0 },
    { 34, 34, 34, 0, 2968, 0, 2822, 0, 1, 7, 184, 0 },
    { 25, 34, 41, 0, 2625, 0, 3143, 0, 202, 178, 31, 0 },
    { 25, 19, 41, 0, 2625, 0, 3143, 0, 196, 4, 10, 0 },
    { 34, 19, 34, 0, 2968, 0, 2822, 0, 90, 192, 180, 0 },
    { -25, 34, -45, 0, -2625, 0, -3143, 0, 211, 207, 39, 0 },
    { -34, 19, -38, 0, -2968, 0, -2822, 0, 184, 253, 142, 0 },
    { -34, 34, -38, 0, -2968, 0, -2822, 0, 54, 64, 238, 0 },
    { -25, 19, -45, 0, -2625, 0, -3143, 0, 226, 207, 251, 0 },
    { -34, 34, 34, 0, -2968, 0, 2822, 0, 180, 238, 206, 0 },
    { -25, 19, 41, 0, -2625, 0, 3143, 0, 35, 122, 42, 0 },
    { -25, 34, 41, 0, -2625, 0, 3143, 0, 168, 28, 37, 0 },
    { -34, 19, 34, 0, -2968, 0, 2822, 0, 248, 184, 163, 0 },
    { -19, 34, 60, 0, -410, 4073, -116, 0, 221, 19, 61, 0 },
    { -9, 36, 53, 0, -223, 4084, 208, 0, 91, 157, 63, 0 },
    { -19, 34, 38, 0, -410, 4073, -116, 0, 214, 165, 204, 0 },
    { -7, 34, 38, 0, -410, 4073, -116, 0, 167, 151, 4, 0 },
    { -9, 36, 53, 0, 4058, 0, 555, 0, 158, 232, 125, 0 },
    { -9, 17, 53, 0, 4058, 0, 555, 0, 215, 21, 26, 0 },
    { -7, 34, 38, 0, 4058, 0, 555, 0, 13, 209, 61, 0 },
    { -7, 19, 38, 0, 4058, 0, 555, 0, 225, 132, 90, 0 },
    { -19, 34, 38, 0, -4095, 0, -9, 0, 220, 173, 184, 0 },
    { -19, 19, 60, 0, -4095, 0, -9, 0, 47, 194, 111, 0 },
    { -19, 34, 60, 0, -4095, 0, -9, 0, 126, 36, 81, 0 },
    { -19, 19, 38, 0, -4095, 0, -9, 0, 71, 124, 62, 0 },
    { 14, 34, 66, 0, 0, 4052, 592, 0, 54, 94, 158, 0 },
    { 9, 36, 53, 0, 223, 4084, 208, 0, 14, 184, 111, 0 },
    { -14, 34, 66, 0, 0, 4052, 592, 0, 10, 237, 145, 0 },
    { 9, 36, 53, 0, 0, 0, -4096, 0, 215, 65, 177, 0 },
    { 9, 17, 53, 0, 0, 0, -4096, 0, 122, 240, 251, 0 },
    { -9, 36, 53, 0, 0, 0, -4096, 0, 112, 75, 203, 0 },
    { -9, 17, 53, 0, 0, 0, -4096, 0, 215, 227, 223, 0 },
    { -14, 34, 66, 0, 0, 0, 4095, 0, 107, 15, 211, 0 },
    { 14, 19, 66, 0, 0, 0, 4095, 0, 241, 81, 133, 0 },
    { 14, 34, 66, 0, 0, 0, 4096, 0, 227, 162, 197, 0 },
    { -14, 19, 66, 0, 0, 0, 4096, 0, 207, 163, 191, 0 },
    { 19, 34, 38, 0, 409, 4073, -116, 0, 236, 120, 75, 0 },
    { 7, 34, 38, 0, 409, 4073, -116, 0, 62, 124, 210, 0 },
    { 19, 34, 60, 0, 409, 4073, -116, 0, 37, 83, 8, 0 },
    { 7, 34, 38, 0, -4058, 0, 555, 0, 106, 92, 67, 0 },
    { 9, 17, 53, 0, -4058, 0, 555, 0, 50, 196, 229, 0 },
    { 9, 36, 53, 0, -4058, 0, 555, 0, 64, 229, 1, 0 },
    { 7, 19, 38, 0, -4058, 0, 555, 0, 104, 239, 93, 0 },
    { 19, 34, 60, 0, 4095, 0, -9, 0, 82, 208, 95, 0 },
    { 19, 19, 38, 0, 4095, 0, -9, 0, 249, 73, 8, 0 },
    { 19, 34, 38, 0, 4095, 0, -9, 0, 201, 45, 123, 0 },
    { 19, 19, 60, 0, 4095, 0, -9, 0, 132, 154, 17, 0 },
    { -19, 34, 60, 0, -532, 4042, 386, 0, 80, 195, 15, 0 },
    { -14, 34, 66, 0, -532, 4042, 386, 0, 205, 97, 107, 0 },
    { -9, 36, 53, 0, -532, 4042, 386, 0, 147, 41, 236, 0 },
    { 14, 34, 66, 0, 532, 4042, 386, 0, 235, 4, 249, 0 },
    { 19, 34, 60, 0, 532, 4042, 386, 0, 139, 155, 160, 0 },
    { 9, 36, 53, 0, 532, 4042, 386, 0, 112, 38, 71, 0 },
    { -19, 34, 60, 0, -3316, 0, 2404, 0, 47, 214, 190, 0 },
    { -14, 19, 66, 0, -3316, 0, 2404, 0, 161, 236, 20, 0 },
    { -14, 34, 66, 0, -3316, 0, 2404, 0, 128, 204, 6, 0 },
    { -19, 19, 60, 0, -3316, 0, 2404, 0, 128, 128, 89, 0 },
    { 14, 34, 66, 0, 3316, 0, 2404, 0, 253, 188, 76, 0 },
    { 14, 19, 66, 0, 3316, 0, 2404, 0, 143, 128, 143, 0 },
    { 19, 34, 60, 0, 3316, 0, 2404, 0, 204, 206, 128, 0 },
    { 19, 19, 60, 0, 3316, 0, 2404, 0, 122, 35, 120, 0 },
    { 48, 34, 15, 0, 3272, 0, 2463, 0, 84, 201, 18, 0 },
    { 48, 19, 15, 0, 3272, 0, 2463, 0, 114, 42, 209, 0 },
    { 48, 34, -19, 0, 3272, 0, -2463, 0, 164, 177, 150, 0 },
    { 48, 19, -19, 0, 3272, 0, -2463, 0, 217, 168, 27, 0 },
    { -48, 34, -19, 0, -3272, 0, -2463, 0, 221, 65, 1, 0 },
    { -48, 19, -19, 0, -3272, 0, -2463, 0, 58, 202, 192, 0 },
    { -48, 34, 15, 0, -3272, 0, 2463, 0, 153, 150, 12, 0 },
    { -48, 19, 15, 0, -3272, 0, 2463, 0, 223, 73, 126, 0 }
};
static u_short Baggage_C_Indices[] = {
    0, 2, 1, 1, 3, 0, 4, 6, 5, 7, 5, 6, 8, 10, 9, 9, 11, 8, 12, 14, 13, 15, 13, 14, 16, 18, 17, 17, 19, 16, 20, 22, 21, 
    23, 25, 24, 26, 28, 27, 29, 31, 30, 1, 2, 32, 32, 33, 1, 29, 30, 25, 25, 23, 29, 3, 35, 34, 34, 0, 3, 28, 26, 21, 26, 20, 
    21, 36, 38, 37, 37, 39, 36, 40, 42, 41, 40, 43, 42, 44, 46, 45, 45, 47, 44, 48, 50, 49, 49, 51, 48, 52, 54, 53, 54, 55, 53, 56, 
    58, 57, 58, 59, 57, 60, 62, 61, 61, 63, 60, 53, 65, 64, 64, 66, 53, 67, 69, 68, 69, 70, 68, 71, 73, 72, 72, 74, 71, 65, 76, 75, 
    75, 77, 65, 78, 80, 79, 79, 81, 78, 82, 84, 83, 83, 85, 82, 86, 88, 87, 89, 91, 90, 92, 94, 93, 93, 95, 92, 96, 98, 97, 98, 99, 
    97, 0, 29, 23, 0, 23, 2, 3, 1, 20, 20, 26, 3, 100, 101, 40, 40, 101, 43, 102, 36, 39, 39, 103, 102, 104, 105, 46, 46, 105, 45, 106, 
    48, 51, 51, 107, 106, 2, 23, 24, 24, 32, 2, 1, 33, 22, 22, 20, 1, 26, 27, 3, 35, 3, 27, 31, 29, 0, 0, 34, 31
};
static SDC_Mesh3D Baggage_C_Mesh = {Baggage_C_Vertices, Baggage_C_Indices, NULL, 222, 108, POLIGON_VERTEX_COLOR_NORMAL};
#endif