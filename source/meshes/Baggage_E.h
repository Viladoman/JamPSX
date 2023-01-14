#ifndef _BAGGAGE_E_MESH_
#define _BAGGAGE_E_MESH_

#include <types.h>
#include "dcRender.h"

static SDC_VertexTexturedNormal Baggage_E_Vertices[] = {
    { 65, 24, 24, 0, 2939, 102, 2850, 0, -139, 16 },
    { 72, 6, 12, 0, 3965, 138, 1014, 0, -131, 10 },
    { 72, 23, 12, 0, 3965, 138, 1014, 0, -138, 10 },
    { 66, 4, 24, 0, 2939, 102, 2850, 0, -131, 16 },
    { 72, 23, -12, 0, 3965, 138, -1014, 0, -138, 31 },
    { 72, 6, -12, 0, 3965, 138, -1014, 0, -131, 31 },
    { 72, 23, -12, 0, 3965, 138, -1014, 0, -145, 30 },
    { 66, 4, -24, 0, 2939, 102, -2850, 0, -137, 25 },
    { 65, 24, -24, 0, 2939, 102, -2850, 0, -145, 24 },
    { 72, 6, -12, 0, 3965, 138, -1014, 0, -138, 31 },
    { 52, 24, -32, 0, 1089, 38, -3948, 0, -145, 18 },
    { 53, 3, -32, 0, 1089, 38, -3948, 0, -136, 18 },
    { 33, 3, -32, 0, -486, -16, -4067, 0, -136, 10 },
    { 33, 23, -32, 0, -486, -16, -4067, 0, -145, 9 },
    { 16, 3, -28, 0, -1417, -49, -3842, 0, -136, 2 },
    { 16, 22, -28, 0, -1417, -49, -3842, 0, -144, 2 },
    { -6, 3, -16, 0, -1469, -51, -3822, 0, -136, 22 },
    { -6, 20, -16, 0, -1469, -51, -3822, 0, -143, 21 },
    { -29, 4, -10, 0, -536, -18, -4060, 0, -136, 11 },
    { -29, 18, -10, 0, -536, -18, -4060, 0, -142, 11 },
    { -64, 16, -10, 0, -1180, -41, -3922, 0, -141, 27 },
    { -64, 3, -10, 0, -1180, -41, -3922, 0, -135, 27 },
    { -73, 16, -4, 0, -3606, -125, -1938, 0, -141, 22 },
    { -72, 2, -4, 0, -3606, -125, -1938, 0, -135, 23 },
    { -72, 2, 4, 0, -3606, -125, 1938, 0, -135, 18 },
    { -73, 16, 4, 0, -3606, -125, 1938, 0, -141, 18 },
    { -64, 3, 10, 0, -1180, -41, 3922, 0, -135, 13 },
    { -64, 16, 10, 0, -1180, -41, 3922, 0, -141, 13 },
    { -29, 4, 10, 0, -536, -18, 4060, 0, -134, 30 },
    { -29, 18, 10, 0, -536, -18, 4060, 0, -140, 30 },
    { -6, 20, 16, 0, -1469, -51, 3822, 0, -140, 19 },
    { -6, 3, 16, 0, -1469, -51, 3822, 0, -133, 19 },
    { 16, 22, 28, 0, -1417, -49, 3842, 0, -140, 7 },
    { 16, 3, 28, 0, -1417, -49, 3842, 0, -132, 8 },
    { 33, 23, 32, 0, -486, -16, 4067, 0, -140, 0 },
    { 33, 3, 32, 0, -486, -16, 4067, 0, -131, 0 },
    { 53, 3, 32, 0, 1089, 38, 3948, 0, -131, 23 },
    { 52, 24, 32, 0, 1089, 38, 3948, 0, -140, 23 },
    { -69, 0, -3, 0, 142, -4093, 0, 0, -138, 30 },
    { -63, 0, -7, 0, 141, -4093, 0, 0, -140, 0 },
    { -69, 0, 3, 0, 142, -4093, 0, 0, -136, 30 },
    { -63, 0, 7, 0, 141, -4093, 0, 0, -134, 1 },
    { -63, 20, 7, 0, -144, 4093, 0, 0, -140, 1 },
    { -29, 21, 7, 0, -260, 4087, 0, 0, -140, 16 },
    { -29, 21, -7, 0, -260, 4087, 0, 0, -134, 16 },
    { -63, 20, -7, 0, -144, 4093, 0, 0, -134, 1 },
    { -5, 23, 13, 0, -346, 4081, 0, 0, -143, 27 },
    { -5, 23, -13, 0, -346, 4081, 0, 0, -132, 27 },
    { 17, 25, 25, 0, -345, 4081, 0, 0, -148, 5 },
    { 17, 25, -25, 0, -345, 4081, 0, 0, -128, 6 },
    { 33, 26, 29, 0, -310, 4084, 0, 0, -150, 13 },
    { 33, 26, -29, 0, -310, 4084, 0, 0, -126, 13 },
    { 51, 28, 29, 0, -56, 4095, 0, 0, -150, 20 },
    { 51, 28, -29, 0, -56, 4095, 0, 0, -127, 21 },
    { 68, 26, 11, 0, 282, 4086, 0, 0, -143, 28 },
    { 62, 27, 22, 0, 282, 4086, 0, 0, -147, 25 },
    { 68, 26, -11, 0, 282, 4086, 0, 0, -134, 28 },
    { 62, 27, -22, 0, 282, 4086, 0, 0, -129, 26 },
    { -70, 20, -3, 0, -142, 4093, 0, 0, -135, 30 },
    { -70, 20, 3, 0, -142, 4093, 0, 0, -138, 30 },
    { -28, 0, 7, 0, 25, -4095, 0, 0, -134, 16 },
    { -28, 0, -7, 0, 25, -4095, 0, 0, -140, 16 },
    { -4, 0, -13, 0, -61, -4095, 0, 0, -143, 27 },
    { -4, 0, 13, 0, -61, -4095, 0, 0, -132, 27 },
    { 17, 0, -25, 0, -59, -4095, 0, 0, -148, 6 },
    { 17, 0, 25, 0, -59, -4095, 0, 0, -128, 6 },
    { 34, 0, -29, 0, -21, -4095, 0, 0, -150, 13 },
    { 34, 0, 29, 0, -21, -4095, 0, 0, -126, 13 },
    { 52, 0, -29, 0, 157, -4092, 0, 0, -150, 21 },
    { 52, 0, 29, 0, 157, -4092, 0, 0, -126, 21 },
    { 63, 1, -22, 0, 465, -4069, 0, 0, -147, 26 },
    { 63, 1, 22, 0, 465, -4069, 0, 0, -129, 26 },
    { 69, 2, -11, 0, 845, -4007, 0, 0, -143, 28 },
    { 69, 2, 11, 0, 845, -4007, 0, 0, -133, 28 },
    { 63, 1, 22, 0, 2391, -2718, 1914, 0, 0, 30 },
    { 72, 6, 12, 0, 3127, -2572, 615, 0, 0, 31 },
    { 66, 4, 24, 0, 2430, -2712, 1872, 0, 1, 30 },
    { 69, 2, 11, 0, 3121, -2573, 640, 0, 0, 31 },
    { 53, 3, 32, 0, 933, -2876, 2762, 0, 1, 30 },
    { 52, 0, 29, 0, 913, -2878, 2767, 0, 1, 29 },
    { 33, 3, 32, 0, -369, -2894, 2874, 0, 1, 28 },
    { 34, 0, 29, 0, -359, -2894, 2876, 0, 1, 28 },
    { 16, 3, 28, 0, -1048, -2904, 2690, 0, 1, 27 },
    { 17, 0, 25, 0, -1039, -2904, 2694, 0, 1, 27 },
    { -6, 3, 16, 0, -1062, -2903, 2686, 0, 0, 26 },
    { -4, 0, 13, 0, -1071, -2903, 2683, 0, 0, 26 },
    { -29, 4, 10, 0, -343, -2906, 2865, 0, 0, 24 },
    { -28, 0, 7, 0, -349, -2906, 2864, 0, 0, 24 },
    { -64, 3, 10, 0, -713, -2972, 2725, 0, 0, 22 },
    { -63, 0, 7, 0, -721, -2973, 2723, 0, 0, 22 },
    { -69, 0, 3, 0, -2296, -3137, 1286, 0, 0, 22 },
    { -72, 2, 4, 0, -2293, -3137, 1292, 0, 0, 22 },
    { -69, 0, -3, 0, -2296, -3137, -1286, 0, 0, 22 },
    { -72, 2, -4, 0, -2293, -3137, -1292, 0, 0, 22 },
    { -64, 3, -10, 0, -713, -2972, -2725, 0, 0, 22 },
    { -63, 0, -7, 0, -721, -2973, -2723, 0, 0, 22 },
    { -29, 4, -10, 0, -343, -2906, -2865, 0, 0, 24 },
    { -28, 0, -7, 0, -349, -2906, -2864, 0, 0, 24 },
    { -4, 0, -13, 0, -1071, -2903, -2683, 0, 0, 26 },
    { -6, 3, -16, 0, -1062, -2903, -2686, 0, 0, 26 },
    { 17, 0, -25, 0, -1039, -2904, -2694, 0, 0, 27 },
    { 16, 3, -28, 0, -1048, -2904, -2690, 0, 0, 27 },
    { 34, 0, -29, 0, -359, -2894, -2876, 0, 0, 28 },
    { 33, 3, -32, 0, -369, -2894, -2874, 0, 0, 28 },
    { 52, 0, -29, 0, 913, -2878, -2767, 0, 0, 29 },
    { 53, 3, -32, 0, 933, -2876, -2762, 0, 0, 30 },
    { 63, 1, -22, 0, 2391, -2718, -1914, 0, 0, 30 },
    { 66, 4, -24, 0, 2430, -2712, -1872, 0, 0, 30 },
    { 72, 6, -12, 0, 3127, -2572, -615, 0, 0, 31 },
    { 69, 2, -11, 0, 3121, -2573, -640, 0, 0, 31 },
    { 62, 27, 22, 0, 2162, 2931, 1873, 0, 0, 30 },
    { 72, 23, 12, 0, 2841, 2891, 582, 0, 0, 31 },
    { 68, 26, 11, 0, 2836, 2891, 607, 0, 0, 31 },
    { 65, 24, 24, 0, 2204, 2930, 1825, 0, 0, 30 },
    { 72, 23, -12, 0, 2841, 2891, -582, 0, 0, 31 },
    { 68, 26, -11, 0, 2836, 2891, -607, 0, 0, 31 },
    { 62, 27, -22, 0, 2162, 2931, -1873, 0, 0, 30 },
    { 65, 24, -24, 0, 2204, 2930, -1825, 0, 1, 30 },
    { 52, 24, -32, 0, 731, 2941, -2754, 0, 1, 30 },
    { 51, 28, -29, 0, 710, 2941, -2760, 0, 1, 30 },
    { 33, 23, -32, 0, -570, 2858, -2877, 0, 1, 28 },
    { 33, 26, -29, 0, -561, 2858, -2879, 0, 1, 28 },
    { 16, 22, -28, 0, -1248, 2824, -2690, 0, 1, 27 },
    { 17, 25, -25, 0, -1239, 2825, -2694, 0, 1, 27 },
    { -6, 20, -16, 0, -1262, 2822, -2686, 0, 0, 26 },
    { -5, 23, -13, 0, -1271, 2821, -2683, 0, 0, 26 },
    { -29, 18, -10, 0, -545, 2875, -2865, 0, 0, 24 },
    { -29, 21, -7, 0, -551, 2875, -2864, 0, 0, 24 },
    { -63, 20, -7, 0, -927, 2915, -2723, 0, 0, 22 },
    { -64, 16, -10, 0, -919, 2915, -2725, 0, 0, 22 },
    { -70, 20, -3, 0, -2510, 2970, -1286, 0, 0, 22 },
    { -73, 16, -4, 0, -2506, 2970, -1292, 0, 0, 22 },
    { -73, 16, 4, 0, -2506, 2970, 1292, 0, 0, 22 },
    { -70, 20, 3, 0, -2510, 2970, 1286, 0, 0, 22 },
    { -64, 16, 10, 0, -919, 2915, 2725, 0, 0, 22 },
    { -63, 20, 7, 0, -927, 2915, 2723, 0, 0, 22 },
    { -29, 18, 10, 0, -545, 2875, 2865, 0, 0, 24 },
    { -29, 21, 7, 0, -551, 2875, 2864, 0, 0, 24 },
    { -5, 23, 13, 0, -1271, 2821, 2683, 0, 0, 26 },
    { -6, 20, 16, 0, -1262, 2822, 2686, 0, 0, 26 },
    { 17, 25, 25, 0, -1239, 2825, 2694, 0, 0, 27 },
    { 16, 22, 28, 0, -1248, 2824, 2690, 0, 0, 27 },
    { 33, 26, 29, 0, -561, 2858, 2879, 0, 0, 28 },
    { 33, 23, 32, 0, -570, 2858, 2877, 0, 0, 28 },
    { 51, 28, 29, 0, 710, 2941, 2760, 0, 0, 29 },
    { 52, 24, 32, 0, 731, 2941, 2754, 0, 0, 30 },
    { -25, 12, 24, 0, -274, 4046, 572, 0, -154, 12 },
    { -13, 13, 27, 0, -304, 4045, 567, 0, -154, 13 },
    { -23, 13, 19, 0, -264, 4051, 538, 0, -154, 12 },
    { -12, 14, 21, 0, -297, 4052, 515, 0, -154, 13 },
    { -12, 9, 21, 0, -18, 0, -4095, 0, -153, 13 },
    { -23, 13, 19, 0, 1951, 68, -3600, 0, -154, 12 },
    { -12, 14, 21, 0, -18, 0, -4095, 0, -154, 13 },
    { -23, 8, 19, 0, 1951, 68, -3600, 0, -153, 12 },
    { -13, 10, 27, 0, -21, -4056, 567, 0, -154, 13 },
    { -23, 8, 19, 0, 18, -4060, 538, 0, -153, 12 },
    { -12, 9, 21, 0, -14, -4063, 515, 0, -153, 13 },
    { -25, 9, 24, 0, 8, -4055, 572, 0, -154, 12 },
    { -25, 12, 24, 0, -1811, -63, 3673, 0, -154, 12 },
    { -13, 10, 27, 0, -245, -8, 4088, 0, -154, 13 },
    { -13, 13, 27, 0, -245, -8, 4088, 0, -154, 13 },
    { -25, 9, 24, 0, -1811, -63, 3673, 0, -154, 12 },
    { -40, 13, 10, 0, -142, 4093, 0, 0, -154, 10 },
    { -35, 13, 16, 0, -184, 4085, 221, 0, -154, 11 },
    { -32, 13, 10, 0, -179, 4087, 195, 0, -154, 11 },
    { -40, 8, 10, 0, 142, -4093, 0, 0, -154, 10 },
    { -32, 8, 10, 0, 106, -4089, 195, 0, -153, 11 },
    { -35, 8, 16, 0, 101, -4088, 221, 0, -154, 11 },
    { -1, 14, 26, 0, -222, 4084, 204, 0, -154, 14 },
    { 6, 14, 23, 0, -142, 4093, 0, 0, -154, 14 },
    { 0, 14, 19, 0, -214, 4086, 182, 0, -154, 14 },
    { -1, 9, 26, 0, 62, -4090, 204, 0, -154, 14 },
    { 0, 9, 19, 0, 71, -4091, 182, 0, -153, 14 },
    { 6, 9, 23, 0, 142, -4093, 0, 0, -154, 14 },
    { -35, 13, 16, 0, -2890, -100, 2900, 0, -154, 11 },
    { -40, 13, 10, 0, -3245, -113, 2496, 0, -154, 10 },
    { -40, 8, 10, 0, -3245, -113, 2496, 0, -154, 10 },
    { -35, 8, 16, 0, -2890, -100, 2900, 0, -154, 11 },
    { -1, 14, 26, 0, 1041, 36, 3961, 0, -154, 14 },
    { 6, 9, 23, 0, 1505, 52, 3808, 0, -154, 14 },
    { 6, 14, 23, 0, 1505, 52, 3808, 0, -154, 14 },
    { -1, 9, 26, 0, 1041, 36, 3961, 0, -154, 14 },
    { 0, 9, 19, 0, -964, -33, -3980, 0, -153, 14 },
    { 0, 14, 19, 0, -964, -33, -3980, 0, -154, 14 },
    { -32, 8, 10, 0, 2834, 98, -2955, 0, -153, 11 },
    { -32, 13, 10, 0, 2834, 98, -2955, 0, -154, 11 }
};
static u_short Baggage_E_Indices[] = {
    0, 2, 1, 1, 3, 0, 4, 1, 2, 4, 5, 1, 6, 8, 7, 7, 9, 6, 10, 7, 8, 10, 11, 7, 10, 13, 12, 12, 11, 10, 13, 15, 14, 
    14, 12, 13, 15, 17, 16, 16, 14, 15, 17, 19, 18, 18, 16, 17, 20, 18, 19, 20, 21, 18, 22, 21, 20, 22, 23, 21, 22, 25, 24, 24, 23, 
    22, 25, 27, 26, 26, 24, 25, 27, 29, 28, 28, 26, 27, 30, 28, 29, 30, 31, 28, 32, 31, 30, 32, 33, 31, 34, 33, 32, 34, 35, 33, 34, 
    37, 36, 36, 35, 34, 0, 36, 37, 0, 3, 36, 38, 40, 39, 39, 40, 41, 42, 44, 43, 42, 45, 44, 43, 44, 46, 46, 44, 47, 48, 46, 49, 
    46, 47, 49, 49, 50, 48, 50, 49, 51, 51, 52, 50, 52, 51, 53, 54, 55, 52, 52, 53, 56, 56, 54, 52, 53, 57, 56, 42, 59, 58, 58, 45, 
    42, 60, 61, 41, 39, 41, 61, 62, 61, 63, 61, 60, 63, 62, 63, 64, 64, 63, 65, 66, 64, 67, 64, 65, 67, 68, 66, 69, 66, 67, 69, 69, 
    70, 68, 69, 71, 70, 71, 72, 70, 71, 73, 72, 74, 76, 75, 75, 77, 74, 78, 76, 74, 74, 79, 78, 80, 78, 79, 79, 81, 80, 81, 83, 82, 
    82, 80, 81, 83, 85, 84, 84, 82, 83, 85, 87, 86, 86, 84, 85, 86, 89, 88, 86, 87, 89, 90, 88, 89, 88, 90, 91, 92, 93, 91, 91, 90, 
    92, 92, 95, 94, 94, 93, 92, 96, 94, 95, 95, 97, 96, 98, 96, 97, 96, 98, 99, 100, 99, 98, 99, 100, 101, 102, 101, 100, 101, 102, 103, 104, 
    105, 103, 103, 102, 104, 106, 107, 105, 105, 104, 106, 108, 107, 106, 106, 109, 108, 77, 75, 108, 108, 109, 77, 110, 112, 111, 111, 113, 110, 112, 115, 114, 
    114, 111, 112, 116, 114, 115, 114, 116, 117, 118, 117, 116, 116, 119, 118, 119, 121, 120, 120, 118, 119, 121, 123, 122, 122, 120, 121, 123, 125, 124, 124, 122, 
    123, 125, 127, 126, 126, 124, 125, 128, 126, 127, 126, 128, 129, 130, 129, 128, 129, 130, 131, 132, 131, 130, 130, 133, 132, 133, 135, 134, 134, 132, 133, 135, 
    137, 136, 136, 134, 135, 138, 136, 137, 136, 138, 139, 140, 139, 138, 139, 140, 141, 142, 141, 140, 141, 142, 143, 144, 143, 142, 143, 144, 145, 110, 113, 145, 
    145, 144, 110, 146, 148, 147, 147, 148, 149, 150, 152, 151, 151, 153, 150, 154, 156, 155, 155, 157, 154, 158, 160, 159, 159, 161, 158, 162, 164, 163, 165, 167, 
    166, 168, 170, 169, 171, 173, 172, 174, 176, 175, 174, 177, 176, 178, 180, 179, 179, 181, 178, 168, 147, 149, 149, 170, 168, 163, 164, 148, 148, 146, 163, 182, 
    183, 152, 152, 150, 182, 151, 185, 184, 184, 153, 151, 171, 172, 156, 156, 154, 171, 167, 157, 155, 155, 166, 167, 160, 178, 181, 181, 159, 160, 177, 174, 161, 
    158, 161, 174
};
static SDC_Mesh3D Baggage_E_Mesh = {Baggage_E_Vertices, Baggage_E_Indices, NULL, 516, 186, POLIGON_VERTEX_TEXTURED_NORMAL};
#endif