#ifndef _BAGGAGE_D_MESH_
#define _BAGGAGE_D_MESH_

#include <types.h>
#include "dcRender.h"

static SDC_VertexTexturedNormal Baggage_D_Vertices[] = {
    { -10, 57, 0, 0, -32, 702, -4035, 0, 0, 8 },
    { 10, 54, -1, 0, 29, 729, -4030, 0, 0, 10 },
    { -9, 54, -1, 0, -29, 729, -4030, 0, 0, 8 },
    { 11, 57, 0, 0, 32, 702, -4035, 0, 0, 10 },
    { 10, 54, 2, 0, -879, -4000, 0, 0, 1, 10 },
    { -9, 54, -1, 0, 879, -4000, 0, 0, 0, 8 },
    { 10, 54, -1, 0, -879, -4000, 0, 0, 0, 10 },
    { -9, 54, 2, 0, 879, -4000, 0, 0, 1, 9 },
    { 11, 57, 1, 0, 32, 702, 4035, 0, 0, 10 },
    { -10, 57, 1, 0, -32, 702, 4035, 0, 0, 8 },
    { 10, 54, 2, 0, 29, 729, 4030, 0, 1, 10 },
    { -9, 54, 2, 0, -29, 729, 4030, 0, 1, 9 },
    { 11, 57, 0, 0, 646, 4044, 0, 0, 0, 10 },
    { -10, 57, 1, 0, -646, 4044, 0, 0, 0, 8 },
    { 11, 57, 1, 0, 646, 4044, 0, 0, 0, 10 },
    { -10, 57, 0, 0, -646, 4044, 0, 0, 0, 8 },
    { -37, 45, -1, 0, 0, 0, -4096, 0, 0, 7 },
    { -31, 50, -1, 0, 0, 0, -4096, 0, 0, 7 },
    { -28, 45, -1, 0, 0, 0, -4096, 0, 0, 7 },
    { -37, 45, 2, 0, 0, 0, 4096, 0, 0, 7 },
    { -28, 45, 2, 0, 0, 0, 4096, 0, 1, 8 },
    { -31, 50, 2, 0, 0, 0, 4096, 0, 0, 7 },
    { 32, 50, -1, 0, 0, 0, -4096, 0, 0, 11 },
    { 37, 45, -1, 0, 0, 0, -4096, 0, 0, 11 },
    { 29, 45, -1, 0, 0, 0, -4096, 0, 0, 11 },
    { 32, 50, 2, 0, 0, 0, 4096, 0, 0, 11 },
    { 29, 45, 2, 0, 0, 0, 4096, 0, 1, 11 },
    { 37, 45, 2, 0, 0, 0, 4096, 0, 0, 11 },
    { -31, 50, -1, 0, -2737, 3046, 0, 0, 0, 7 },
    { -37, 45, -1, 0, -2737, 3046, 0, 0, 0, 7 },
    { -37, 45, 2, 0, -2737, 3046, 0, 0, 0, 7 },
    { -31, 50, 2, 0, -2737, 3046, 0, 0, 0, 7 },
    { 32, 50, -1, 0, 2824, 2966, 0, 0, 0, 11 },
    { 37, 45, 2, 0, 2824, 2966, 0, 0, 0, 11 },
    { 37, 45, -1, 0, 2824, 2966, 0, 0, 0, 11 },
    { 32, 50, 2, 0, 2824, 2966, 0, 0, 0, 11 },
    { 32, 50, -1, 0, 60, 388, -4077, 0, 0, 11 },
    { 29, 45, -1, 0, 60, 388, -4077, 0, 0, 11 },
    { -31, 50, -1, 0, -60, 388, -4077, 0, 0, 7 },
    { -28, 45, -1, 0, -60, 388, -4077, 0, 0, 7 },
    { 29, 45, 2, 0, -1718, -3718, 0, 0, 1, 11 },
    { 29, 45, -1, 0, -1718, -3718, 0, 0, 0, 11 },
    { -28, 45, 2, 0, 1718, -3718, 0, 0, 1, 8 },
    { -28, 45, -1, 0, 1718, -3718, 0, 0, 0, 7 },
    { 32, 50, 2, 0, 60, 388, 4077, 0, 0, 11 },
    { 29, 45, 2, 0, 60, 388, 4077, 0, 1, 11 },
    { -31, 50, 2, 0, -60, 388, 4077, 0, 0, 7 },
    { -28, 45, 2, 0, -60, 388, 4077, 0, 1, 8 },
    { 32, 50, 2, 0, 1260, 3897, 0, 0, 0, 11 },
    { 32, 50, -1, 0, 1260, 3897, 0, 0, 0, 11 },
    { -31, 50, 2, 0, -1260, 3897, 0, 0, 0, 7 },
    { -31, 50, -1, 0, -1260, 3897, 0, 0, 0, 7 },
    { 47, 33, 18, 0, 4059, 413, -357, 0, 26, 7 },
    { 46, 35, 5, 0, 4082, 270, -184, 0, 18, 6 },
    { 46, 42, 4, 0, 4092, 112, -110, 0, 18, 30 },
    { -13, 44, -6, 0, 154, 3794, -1535, 0, 12, 27 },
    { 15, 44, -6, 0, -137, 3782, -1564, 0, 20, 28 },
    { -12, 32, -19, 0, 161, 2154, -3479, 0, 12, 20 },
    { 16, 31, -18, 0, -161, 2143, -3486, 0, 21, 20 },
    { 16, 11, -25, 0, -185, -819, -4008, 0, 21, 11 },
    { -14, 12, -25, 0, 180, -768, -4019, 0, 12, 11 },
    { -13, 3, -16, 0, 118, -3484, -2149, 0, 12, 5 },
    { 16, 3, -16, 0, -126, -3495, -2130, 0, 21, 5 },
    { -13, 0, -6, 0, 41, -4069, -465, 0, 12, 0 },
    { 16, 0, -6, 0, -38, -4068, -474, 0, 21, 1 },
    { -13, 0, 5, 0, 35, -4074, 414, 0, 12, 29 },
    { 16, 3, 17, 0, -97, -3475, 2164, 0, 21, 24 },
    { -13, 3, 17, 0, 101, -3473, 2168, 0, 12, 24 },
    { 16, 0, 5, 0, -32, -4073, 423, 0, 20, 29 },
    { 14, 13, 26, 0, -175, -747, 4023, 0, 20, 18 },
    { -11, 14, 26, 0, 170, -719, 4028, 0, 12, 18 },
    { 13, 32, 20, 0, -192, 2415, 3302, 0, 20, 10 },
    { -11, 33, 20, 0, 204, 2483, 3250, 0, 12, 9 },
    { 15, 44, 5, 0, -161, 3899, 1242, 0, 20, 2 },
    { -11, 44, 4, 0, 149, 3909, 1212, 0, 12, 1 },
    { -44, 16, 5, 0, -4048, 609, -116, 0, 18, 21 },
    { -44, 33, 18, 0, -4084, 110, -287, 0, 26, 7 },
    { -43, 35, 5, 0, -4086, -202, -184, 0, 18, 6 },
    { -45, 18, 24, 0, -4054, 534, -229, 0, 29, 20 },
    { -40, 45, -6, 0, 255, 3808, -1484, 0, 4, 28 },
    { -41, 32, -21, 0, 264, 2069, -3525, 0, 3, 19 },
    { 41, 46, -6, 0, -319, 3780, -1542, 0, 28, 28 },
    { 43, 32, -21, 0, -376, 2059, -3520, 0, 29, 20 },
    { -43, 13, -26, 0, 326, -668, -4027, 0, 3, 11 },
    { 46, 13, -26, 0, -376, -677, -4021, 0, 30, 12 },
    { -44, 1, -20, 0, 270, -3381, -2295, 0, 3, 5 },
    { 46, 1, -20, 0, -242, -3413, -2251, 0, 30, 6 },
    { -44, 0, -6, 0, 81, -4080, -347, 0, 3, 31 },
    { 46, 0, -6, 0, -75, -4078, -365, 0, 30, 0 },
    { -44, 0, 5, 0, 71, -4082, 325, 0, 3, 31 },
    { -44, 1, 20, 0, 197, -3477, 2154, 0, 3, 25 },
    { 46, 1, 20, 0, -183, -3447, 2203, 0, 30, 25 },
    { 46, 0, 5, 0, -64, -4081, 342, 0, 29, 31 },
    { -41, 17, 29, 0, 365, -509, 4047, 0, 3, 17 },
    { 46, 17, 29, 0, -339, -554, 4043, 0, 30, 18 },
    { -40, 35, 22, 0, 396, 2514, 3209, 0, 4, 9 },
    { 43, 35, 22, 0, -401, 2429, 3273, 0, 29, 10 },
    { -40, 45, 5, 0, 295, 3912, 1174, 0, 4, 1 },
    { 41, 46, 5, 0, -326, 3891, 1237, 0, 28, 2 },
    { 47, 31, -18, 0, 4060, 430, 326, 0, 5, 9 },
    { 46, 42, -4, 0, 4092, 124, 101, 0, 12, 30 },
    { 46, 34, -6, 0, 4082, 278, 179, 0, 12, 6 },
    { -47, 14, -22, 0, -4031, 525, 499, 0, 3, 23 },
    { -44, 15, -6, 0, -4045, 589, 253, 0, 12, 21 },
    { -45, 30, -18, 0, -4036, 158, 675, 0, 5, 9 },
    { -43, 34, -6, 0, -4072, -164, 406, 0, 12, 6 },
    { 46, 0, 5, 0, -64, -4081, 342, 0, 30, 26 },
    { 16, 0, 5, 0, -32, -4073, 423, 0, 21, 27 },
    { -13, 0, 5, 0, 35, -4074, 414, 0, 12, 27 },
    { -44, 0, 5, 0, 71, -4082, 325, 0, 4, 26 },
    { 48, 16, 5, 0, 4055, 551, -158, 0, 18, 21 },
    { 50, 18, 24, 0, 4052, 502, -319, 0, 29, 20 },
    { 48, 15, -6, 0, 4054, 567, 138, 0, 12, 22 },
    { 50, 14, -22, 0, 4052, 527, 282, 0, 2, 22 },
    { 50, 5, 17, 0, 4053, 524, -265, 0, 25, 30 },
    { 50, 4, 5, 0, 4042, 645, -133, 0, 18, 31 },
    { 50, 4, -6, 0, 4041, 659, 109, 0, 12, 31 },
    { 50, 5, -18, 0, 4051, 555, 240, 0, 5, 30 },
    { -44, 42, 4, 0, -4049, -596, -136, 0, 18, 31 },
    { -44, 42, -4, 0, -4049, -564, 246, 0, 12, 31 },
    { -47, 5, -18, 0, -4015, 719, 367, 0, 5, 30 },
    { -47, 4, -6, 0, -3999, 868, 169, 0, 12, 31 },
    { -47, 4, 5, 0, -3986, 933, -101, 0, 18, 31 },
    { -47, 5, 17, 0, -4000, 857, -192, 0, 25, 30 },
    { 47, 31, -18, 0, 2742, 1870, -2398, 0, 0, 25 },
    { 41, 46, -6, 0, 2678, 2942, -970, 0, 0, 22 },
    { 46, 42, -4, 0, 2679, 2939, -978, 0, 0, 23 },
    { 43, 32, -21, 0, 2741, 1888, -2386, 0, 0, 24 },
    { 41, 46, 5, 0, 2635, 3043, 752, 0, 0, 22 },
    { 46, 42, 4, 0, 2635, 3042, 757, 0, 0, 23 },
    { 47, 33, 18, 0, 2741, 2170, 2133, 0, 0, 24 },
    { 43, 35, 22, 0, 2739, 2189, 2115, 0, 0, 24 },
    { 50, 18, 24, 0, 3062, 86, 2718, 0, 0, 27 },
    { 46, 17, 29, 0, 3063, 77, 2718, 0, 1, 27 },
    { 50, 5, 17, 0, 3225, -2071, 1442, 0, 0, 29 },
    { 46, 1, 20, 0, 3227, -2092, 1407, 0, 0, 30 },
    { 46, 0, 5, 0, 3121, -2648, 135, 0, 0, 30 },
    { 50, 4, 5, 0, 3121, -2648, 135, 0, 0, 29 },
    { 46, 0, -6, 0, 3123, -2646, -136, 0, 0, 30 },
    { 50, 4, -6, 0, 3123, -2645, -137, 0, 0, 29 },
    { 50, 5, -18, 0, 3242, -1969, -1544, 0, 0, 29 },
    { 46, 1, -20, 0, 3245, -1999, -1498, 0, 0, 30 },
    { 46, 13, -26, 0, 2979, 40, -2810, 0, 0, 28 },
    { 50, 14, -22, 0, 2978, 47, -2811, 0, 0, 28 },
    { -45, 30, -18, 0, -3021, 1632, -2231, 0, 0, 25 },
    { -44, 42, -4, 0, -2993, 2649, -892, 0, 0, 23 },
    { -40, 45, -6, 0, -2994, 2642, -910, 0, 0, 22 },
    { -41, 32, -21, 0, -3021, 1631, -2232, 0, 0, 25 },
    { -47, 14, -22, 0, -3121, -24, -2651, 0, 0, 28 },
    { -43, 13, -26, 0, -3121, -30, -2651, 0, 0, 28 },
    { -47, 5, -18, 0, -3310, -1919, -1460, 0, 0, 29 },
    { -44, 1, -20, 0, -3311, -1926, -1449, 0, 0, 30 },
    { -44, 0, -6, 0, -3150, -2614, -114, 0, 0, 30 },
    { -47, 4, -6, 0, -3150, -2615, -112, 0, 0, 29 },
    { -44, 0, 5, 0, -3151, -2613, 114, 0, 0, 30 },
    { -47, 4, 5, 0, -3151, -2613, 117, 0, 0, 29 },
    { -47, 5, 17, 0, -3272, -1948, 1507, 0, 0, 29 },
    { -44, 1, 20, 0, -3271, -1938, 1523, 0, 0, 30 },
    { -41, 17, 29, 0, -3022, 142, 2760, 0, 1, 27 },
    { -45, 18, 24, 0, -3025, 106, 2759, 0, 0, 27 },
    { -40, 35, 22, 0, -2880, 1915, 2193, 0, 0, 24 },
    { -44, 33, 18, 0, -2880, 1929, 2180, 0, 0, 24 },
    { -40, 45, 5, 0, -2915, 2759, 813, 0, 0, 22 },
    { -44, 42, 4, 0, -2915, 2760, 811, 0, 0, 23 }
};
static u_short Baggage_D_Indices[] = {
    0, 2, 1, 1, 3, 0, 4, 6, 5, 5, 7, 4, 8, 10, 9, 10, 11, 9, 12, 14, 13, 13, 15, 12, 16, 18, 17, 19, 21, 20, 22, 24, 23, 
    25, 27, 26, 28, 30, 29, 28, 31, 30, 32, 34, 33, 33, 35, 32, 36, 3, 1, 1, 37, 36, 38, 39, 2, 2, 0, 38, 40, 41, 6, 6, 4, 
    40, 5, 43, 42, 42, 7, 5, 44, 45, 10, 10, 8, 44, 46, 9, 11, 11, 47, 46, 12, 49, 48, 48, 14, 12, 50, 51, 15, 15, 13, 50, 52, 
    54, 53, 55, 57, 56, 57, 58, 56, 57, 60, 59, 59, 58, 57, 60, 61, 59, 61, 62, 59, 62, 61, 63, 63, 64, 62, 65, 67, 66, 66, 68, 65, 
    69, 66, 70, 66, 67, 70, 71, 69, 70, 70, 72, 71, 73, 71, 74, 74, 71, 72, 75, 77, 76, 76, 78, 75, 79, 80, 57, 57, 55, 79, 58, 82, 
    81, 81, 56, 58, 80, 83, 60, 60, 57, 80, 59, 82, 58, 59, 84, 82, 83, 85, 61, 61, 60, 83, 59, 62, 84, 62, 86, 84, 61, 85, 87, 87, 
    63, 61, 88, 86, 62, 62, 64, 88, 89, 90, 67, 67, 65, 89, 91, 92, 66, 68, 66, 92, 70, 67, 93, 67, 90, 93, 94, 91, 66, 66, 69, 94, 
    72, 70, 93, 93, 95, 72, 71, 96, 94, 94, 69, 71, 95, 97, 72, 74, 72, 97, 98, 96, 71, 71, 73, 98, 99, 101, 100, 102, 104, 103, 104, 105, 
    103, 97, 79, 55, 55, 74, 97, 106, 88, 64, 64, 107, 106, 74, 55, 56, 56, 73, 74, 73, 56, 81, 81, 98, 73, 107, 64, 108, 63, 108, 64, 108, 
    63, 87, 87, 109, 108, 101, 53, 100, 100, 53, 54, 103, 105, 75, 105, 77, 75, 110, 111, 52, 52, 53, 110, 101, 112, 110, 110, 53, 101, 99, 113, 112, 
    112, 101, 99, 110, 115, 114, 114, 111, 110, 112, 116, 115, 115, 110, 112, 117, 112, 113, 117, 116, 112, 76, 77, 118, 119, 77, 105, 119, 118, 77, 105, 104, 
    119, 102, 103, 120, 120, 103, 121, 121, 103, 122, 103, 75, 122, 75, 78, 123, 123, 122, 75, 124, 126, 125, 125, 127, 124, 126, 129, 128, 128, 125, 126, 130, 
    128, 129, 128, 130, 131, 131, 130, 132, 132, 133, 131, 134, 133, 132, 133, 134, 135, 136, 135, 134, 134, 137, 136, 138, 136, 137, 137, 139, 138, 138, 139, 140, 
    140, 141, 138, 140, 143, 142, 142, 141, 140, 142, 124, 127, 142, 143, 124, 144, 146, 145, 146, 144, 147, 148, 147, 144, 147, 148, 149, 150, 151, 149, 149, 148, 
    150, 150, 153, 152, 152, 151, 150, 153, 155, 154, 154, 152, 153, 156, 154, 155, 154, 156, 157, 158, 157, 156, 156, 159, 158, 159, 161, 160, 160, 158, 159, 162, 
    160, 161, 161, 163, 162, 145, 146, 162, 162, 163, 145
};
static SDC_Mesh3D Baggage_D_Mesh = {Baggage_D_Vertices, Baggage_D_Indices, NULL, 492, 164, POLIGON_VERTEX_TEXTURED_NORMAL};
#endif