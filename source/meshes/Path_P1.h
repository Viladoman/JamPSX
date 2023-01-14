#ifndef _PATH_P1_MESH_
#define _PATH_P1_MESH_

#include <types.h>
#include "dcRender.h"

static SDC_VertexTexturedNormal Path_P1_Vertices[] = {
    { -108, 69, -390, 0, 0, 4096, 0, 0, 12, 32 },
    { -108, 69, -359, 0, 0, 4095, 0, 0, 12, 16 },
    { -72, 69, -359, 0, -26, 4095, -11, 0, 41, 16 },
    { -60, 69, -390, 0, -25, 4095, -10, 0, 41, 32 },
    { -401, 69, -450, 0, 0, 0, -4096, 0, 22, 4 },
    { -401, 0, -450, 0, 0, 0, -4095, 0, 22, 59 },
    { -544, 0, -450, 0, 0, 0, -4096, 0, 23, 59 },
    { -544, 69, -450, 0, 0, 0, -4095, 0, 23, 4 },
    { -401, 0, -329, 0, 0, 0, 4096, 0, 8, 59 },
    { -401, 69, -329, 0, 0, 0, 4095, 0, 8, 4 },
    { -544, 69, -329, 0, 0, 0, 4096, 0, 7, 4 },
    { -544, 0, -329, 0, 0, 0, 4095, 0, 7, 59 },
    { -58, 70, -351, 0, -14, 4095, 14, 0, 58, 16 },
    { -35, 70, -374, 0, -14, 4095, 14, 0, 58, 32 },
    { 11, 70, -421, 0, 2897, -1, -2895, 0, 18, 4 },
    { 11, 0, -421, 0, 2896, -1, -2895, 0, 18, 59 },
    { -35, 0, -450, 0, 1094, 0, -3946, 0, 19, 59 },
    { -35, 69, -450, 0, 1103, 0, -3944, 0, 19, 4 },
    { -81, 0, -328, 0, -2896, 1, 2896, 0, 11, 59 },
    { -81, 70, -328, 0, -2896, 1, 2896, 0, 11, 4 },
    { -84, 69, -329, 0, -1088, 1, 3948, 0, 11, 4 },
    { -84, 0, -329, 0, -1097, 0, 3946, 0, 11, 59 },
    { -20, 69, -290, 0, 0, 4096, 0, 0, 47, 32 },
    { -50, 69, -289, 0, 0, 4096, 0, 0, 47, 16 },
    { -50, 69, -242, 0, -11, 4095, 26, 0, 19, 16 },
    { -20, 69, -230, 0, -10, 4095, 25, 0, 19, 32 },
    { 39, 69, -290, 0, 4096, 0, 0, 0, 18, 4 },
    { 39, 0, -290, 0, 4096, 0, 0, 0, 18, 59 },
    { 39, 0, -374, 0, 3946, 0, -1095, 0, 18, 59 },
    { 39, 69, -374, 0, 3944, 0, -1103, 0, 18, 4 },
    { -80, 0, -289, 0, -4096, 0, 0, 0, 12, 59 },
    { -80, 69, -289, 0, -4096, 0, 0, 0, 12, 4 },
    { -80, 69, -325, 0, -3949, 0, 1086, 0, 11, 4 },
    { -80, 0, -325, 0, -3946, 1, 1096, 0, 11, 59 },
    { -58, 69, -228, 0, 14, 4095, 14, 0, 36, 16 },
    { -35, 69, -205, 0, 14, 4095, 14, 0, 36, 32 },
    { 11, 69, -158, 0, 2896, 0, 2896, 0, 17, 4 },
    { 11, 0, -158, 0, 2896, 0, 2896, 0, 17, 59 },
    { 39, 0, -205, 0, 3944, 0, 1103, 0, 17, 59 },
    { 39, 69, -205, 0, 3947, 0, 1093, 0, 17, 4 },
    { -81, 0, -251, 0, -2896, 0, -2895, 0, 13, 59 },
    { -81, 69, -251, 0, -2896, 0, -2895, 0, 13, 4 },
    { -80, 69, -254, 0, -3947, 0, -1091, 0, 12, 4 },
    { -80, 0, -254, 0, -3943, 0, -1105, 0, 12, 59 },
    { -150, 69, -190, 0, 0, 4096, 0, 0, 43, 32 },
    { -105, 69, -190, 0, 0, 4095, 0, 0, 16, 32 },
    { -105, 69, -220, 0, 0, 4096, 0, 0, 16, 16 },
    { -162, 69, -220, 0, 0, 4096, 0, 0, 43, 16 },
    { -105, 69, -129, 0, 0, 0, 4096, 0, 16, 4 },
    { -105, 0, -129, 0, 0, 0, 4096, 0, 16, 59 },
    { -35, 0, -129, 0, 1103, 0, 3944, 0, 17, 59 },
    { -35, 69, -129, 0, 1094, 0, 3947, 0, 17, 4 },
    { -105, 0, -250, 0, 0, 0, -4096, 0, 13, 59 },
    { -105, 69, -250, 0, 0, 0, -4096, 0, 13, 4 },
    { -84, 69, -250, 0, -1091, 0, -3947, 0, 13, 4 },
    { -84, 0, -250, 0, -1106, 0, -3943, 0, 13, 59 },
    { -174, 69, -174, 0, 0, 4096, 0, 0, 60, 32 },
    { -198, 69, -198, 0, 0, 4096, 0, 0, 60, 16 },
    { -128, 69, -128, 0, 2895, -1, 2896, 0, 16, 4 },
    { -128, 0, -128, 0, 2895, -1, 2896, 0, 16, 59 },
    { -125, 0, -129, 0, 1077, -1, 3951, 0, 16, 59 },
    { -125, 69, -130, 0, 1101, 0, 3945, 0, 16, 4 },
    { -221, 0, -221, 0, -2896, 1, -2895, 0, 14, 59 },
    { -221, 69, -221, 0, -2896, 1, -2895, 0, 14, 4 },
    { -174, 69, -250, 0, -1098, 0, -3945, 0, 14, 4 },
    { -174, 0, -249, 0, -1097, 0, -3946, 0, 14, 59 },
    { -129, 69, -125, 0, 3945, -1, 1100, 0, 15, 4 },
    { -129, 69, -114, 0, 4096, 0, 0, 0, 15, 4 },
    { -129, 11, -114, 0, 4096, 0, 0, 0, 15, 61 },
    { -129, 0, -125, 0, 3952, 0, 1076, 0, 15, 59 },
    { -250, 11, -114, 0, -4096, 0, 0, 0, 14, 61 },
    { -250, 69, -114, 0, -4096, 0, 0, 0, 14, 4 },
    { -250, 69, -174, 0, -3945, 0, -1099, 0, 14, 4 },
    { -250, 0, -174, 0, -3945, 0, -1098, 0, 14, 59 },
    { -174, 69, 199, 0, 0, 4096, 0, 0, 33, 32 },
    { -190, 69, 175, 0, 0, 4096, 0, 0, 16, 32 },
    { -219, 69, 187, 0, 0, 4096, 0, 0, 16, 16 },
    { -198, 69, 223, 0, 0, 4096, 0, 0, 33, 16 },
    { -128, 69, 153, 0, 2896, -1, -2895, 0, 12, 4 },
    { -128, 0, 153, 0, 2896, -1, -2895, 0, 12, 59 },
    { -130, 0, 150, 0, 3951, -1, -1077, 0, 13, 59 },
    { -130, 69, 150, 0, 3945, 0, -1101, 0, 13, 4 },
    { -221, 0, 246, 0, -2895, 1, 2896, 0, 17, 59 },
    { -221, 69, 246, 0, -2895, 1, 2896, 0, 17, 4 },
    { -249, 69, 199, 0, -3945, 0, 1098, 0, 17, 4 },
    { -249, 0, 199, 0, -3946, 0, 1097, 0, 17, 59 },
    { -117, 69, 215, 0, 0, 4096, 0, 0, 5, 32 },
    { -117, 69, 245, 0, 0, 4096, 0, 0, 5, 16 },
    { 87, 69, 245, 0, 0, 4096, 0, 0, 0, 16 },
    { 87, 69, 214, 0, 0, 4096, 0, 0, 0, 32 },
    { 87, 69, 154, 0, 0, 0, -4096, 0, 10, 4 },
    { 87, 0, 154, 0, 0, 0, -4096, 0, 10, 59 },
    { -117, 0, 154, 0, 0, 0, -4096, 0, 12, 59 },
    { -117, 69, 154, 0, 0, 0, -4095, 0, 12, 4 },
    { 87, 0, 275, 0, 0, 0, 4096, 0, 20, 59 },
    { 87, 69, 275, 0, 0, 0, 4096, 0, 20, 4 },
    { -117, 69, 275, 0, 0, 0, 4096, 0, 18, 4 },
    { -117, 0, 275, 0, 0, 0, 4096, 0, 18, 59 },
    { 120, 69, 214, 0, 0, 4096, 0, 0, 19, 32 },
    { 107, 69, 245, 0, 0, 4096, 0, 0, 19, 16 },
    { 121, 69, 253, 0, 0, 4096, 0, 0, 36, 16 },
    { 144, 69, 230, 0, 0, 4096, 0, 0, 36, 32 },
    { 191, 69, 183, 0, 2896, -1, -2895, 0, 10, 4 },
    { 191, 0, 183, 0, 2896, -1, -2895, 0, 10, 59 },
    { 144, 0, 154, 0, 1098, 0, -3945, 0, 10, 59 },
    { 144, 69, 154, 0, 1097, 0, -3946, 0, 10, 4 },
    { 98, 0, 276, 0, -2895, 1, 2896, 0, 20, 59 },
    { 98, 69, 276, 0, -2895, 1, 2896, 0, 20, 4 },
    { 95, 69, 275, 0, -1077, 1, 3951, 0, 20, 4 },
    { 95, 0, 275, 0, -1101, 0, 3945, 0, 20, 59 },
    { 159, 69, 359, 0, 0, 4096, 0, 0, 52, 32 },
    { 160, 69, 307, 0, 0, 4096, 0, 0, 21, 32 },
    { 130, 69, 307, 0, 0, 4096, 0, 0, 21, 16 },
    { 130, 69, 372, 0, 0, 4096, 0, 0, 52, 16 },
    { 219, 69, 307, 0, 4095, 0, 0, 0, 9, 4 },
    { 219, 0, 307, 0, 4096, 0, 0, 0, 9, 59 },
    { 219, 0, 230, 0, 3945, 0, -1099, 0, 9, 59 },
    { 219, 69, 230, 0, 3945, 0, -1098, 0, 9, 4 },
    { 100, 0, 307, 0, -4096, 0, 0, 0, 21, 59 },
    { 100, 69, 307, 0, -4096, 0, 0, 0, 21, 4 },
    { 100, 69, 279, 0, -3952, 0, 1076, 0, 20, 4 },
    { 100, 0, 279, 0, -3945, 1, 1100, 0, 20, 59 },
    { 175, 69, 384, 0, 0, 4096, 0, 0, 5, 32 },
    { 151, 69, 408, 0, 0, 4096, 0, 0, 5, 16 },
    { 221, 69, 338, 0, 2897, -1, -2895, 0, 8, 4 },
    { 221, 0, 338, 0, 2897, -1, -2895, 0, 8, 59 },
    { 219, 0, 335, 0, 3951, -1, -1077, 0, 9, 59 },
    { 219, 69, 335, 0, 3945, 0, -1101, 0, 9, 4 },
    { 128, 0, 431, 0, -2895, 1, 2896, 0, 21, 59 },
    { 128, 69, 431, 0, -2895, 1, 2896, 0, 21, 4 },
    { 100, 69, 384, 0, -3945, 0, 1098, 0, 21, 4 },
    { 100, 0, 384, 0, -3946, 0, 1097, 0, 21, 59 },
    { 671, 69, 400, 0, 0, 4096, 0, 0, 19, 32 },
    { 671, 69, 430, 0, 0, 4096, 0, 0, 19, 16 },
    { 816, 69, 430, 0, 0, 4096, 0, 0, 12, 16 },
    { 816, 69, 400, 0, 0, 4096, 0, 0, 12, 32 },
    { 231, 69, 339, 0, 0, 0, -4096, 0, 8, 4 },
    { 231, 0, 339, 0, 0, 0, -4095, 0, 8, 59 },
    { 224, 0, 339, 0, 1076, 0, -3952, 0, 8, 59 },
    { 224, 69, 339, 0, 1100, -1, -3945, 0, 8, 4 },
    { 231, 0, 460, 0, 0, 0, 4096, 0, 22, 59 },
    { 231, 69, 460, 0, 0, 0, 4095, 0, 22, 4 },
    { 175, 69, 460, 0, -1099, 0, 3945, 0, 22, 4 },
    { 175, 0, 460, 0, -1098, 0, 3945, 0, 22, 59 },
    { -20, 69, -350, 0, 10, 4095, 25, 0, 11, 32 },
    { -50, 69, -337, 0, 11, 4095, 26, 0, 11, 16 },
    { -60, 69, -190, 0, 25, 4095, -10, 0, 53, 32 },
    { -72, 69, -220, 0, 26, 4095, -11, 0, 53, 16 },
    { -220, 69, -162, 0, 0, 4096, 0, 0, 13, 16 },
    { -190, 69, -149, 0, 0, 4096, 0, 0, 13, 32 },
    { -162, 69, 245, 0, 0, 4096, 0, 0, 50, 16 },
    { -150, 69, 215, 0, 0, 4096, 0, 0, 50, 32 },
    { -125, 69, 154, 0, 1100, -1, -3945, 0, 12, 4 },
    { -125, 0, 154, 0, 1076, 0, -3952, 0, 12, 59 },
    { -174, 0, 275, 0, -1098, 0, 3945, 0, 17, 59 },
    { -174, 69, 275, 0, -1099, 0, 3945, 0, 17, 4 },
    { 160, 69, 255, 0, 0, 4096, 0, 0, 53, 32 },
    { 130, 69, 267, 0, 0, 4096, 0, 0, 53, 16 },
    { 187, 69, 430, 0, 0, 4096, 0, 0, 22, 16 },
    { 200, 69, 400, 0, 0, 4096, 0, 0, 22, 32 },
    { -190, 69, 146, 0, 0, 4096, 0, 0, 5, 32 },
    { -219, 69, 146, 0, 0, 4096, 0, 0, 4, 16 },
    { -249, 53, 87, 0, -4096, 0, 0, 0, 16, 2 },
    { -249, 0, 87, 0, -4096, 0, 0, 0, 16, 59 },
    { -249, 0, 146, 0, -4096, 0, 0, 0, 17, 59 },
    { -249, 10, 146, 0, -4096, 0, 0, 0, 17, 61 },
    { -220, 69, -114, 0, 0, 4096, 0, 0, 25, 16 },
    { -190, 69, -114, 0, 0, 4096, 0, 0, 24, 32 },
    { -129, 53, -62, 0, 0, 0, 4096, 0, 15, 2 },
    { -250, 53, -62, 0, 0, 0, 4096, 0, 15, 2 },
    { -250, 0, -62, 0, 0, 0, 4095, 0, 15, 59 },
    { -250, 0, -62, 0, 0, 0, 4096, 0, 15, 59 },
    { -129, 0, -62, 0, 0, 0, 4096, 0, 15, 59 },
    { -129, 53, -62, 0, 0, 0, 4096, 0, 15, 2 },
    { -130, 0, 87, 0, 0, 0, -4096, 0, 16, 59 },
    { -249, 0, 87, 0, 0, 0, -4096, 0, 16, 59 },
    { -249, 53, 87, 0, 0, 0, -4096, 0, 16, 2 },
    { -130, 53, 87, 0, 0, 0, -4096, 0, 16, 2 },
    { -130, 53, 87, 0, 0, -4096, 0, 0, 16, 2 },
    { -249, 53, 87, 0, 0, -4096, 0, 0, 16, 2 },
    { -250, 53, -62, 0, 0, -4096, 0, 0, 15, 2 },
    { -129, 53, -62, 0, 0, -4096, 0, 0, 15, 2 },
    { -130, 0, 146, 0, 4096, 0, 0, 0, 13, 59 },
    { -130, 10, 146, 0, 4096, 0, 0, 0, 13, 61 },
    { -129, 53, -62, 0, 4096, 0, 0, 0, 15, 2 },
    { -129, 0, -62, 0, 4096, 0, 0, 0, 15, 59 },
    { -129, 0, -114, 0, 4096, 0, 0, 0, 15, 59 },
    { -250, 0, -114, 0, -4096, 0, 0, 0, 14, 59 },
    { -249, 69, 146, 0, -4095, 0, 0, 0, 17, 4 },
    { -47, 69, -420, 0, -25, 4095, -10, 0, 41, 48 },
    { -108, 69, -420, 0, 0, 4096, 0, 0, 12, 48 },
    { -11, 70, -398, 0, -14, 4095, 14, 0, 58, 48 },
    { 9, 69, -217, 0, -10, 4095, 25, 0, 19, 48 },
    { 9, 69, -290, 0, 0, 4096, 0, 0, 47, 48 },
    { -11, 69, -181, 0, 14, 4095, 14, 0, 36, 48 },
    { -137, 69, -160, 0, 0, 4096, 0, 0, 43, 48 },
    { -105, 69, -160, 0, 0, 4096, 0, 0, 16, 48 },
    { -151, 69, -151, 0, 0, 4096, 0, 0, 60, 48 },
    { -151, 69, 176, 0, 0, 4096, 0, 0, 33, 48 },
    { -160, 69, 162, 0, 0, 4095, 0, 0, 16, 48 },
    { -117, 69, 154, 0, 0, 4096, 0, 0, 5, 63 },
    { -117, 69, 184, 0, 0, 4096, 0, 0, 5, 48 },
    { 87, 69, 184, 0, 0, 4096, 0, 0, 0, 48 },
    { 87, 69, 154, 0, 0, 4096, 0, 0, 0, 63 },
    { 168, 69, 206, 0, 0, 4096, 0, 0, 36, 48 },
    { 132, 69, 184, 0, 0, 4096, 0, 0, 19, 48 },
    { 189, 69, 347, 0, 0, 4096, 0, 0, 52, 48 },
    { 189, 69, 307, 0, 0, 4095, 0, 0, 21, 48 },
    { 198, 69, 361, 0, 0, 4095, 0, 0, 5, 48 },
    { 671, 69, 369, 0, 0, 4096, 0, 0, 19, 48 },
    { 816, 69, 370, 0, 0, 4096, 0, 0, 12, 48 },
    { 9, 69, -362, 0, 10, 4095, 25, 0, 11, 48 },
    { -47, 69, -160, 0, 25, 4095, -10, 0, 53, 48 },
    { -159, 69, -137, 0, 0, 4096, 0, 0, 13, 48 },
    { -137, 69, 184, 0, 0, 4095, 0, 0, 50, 48 },
    { 189, 69, 242, 0, 0, 4096, 0, 0, 53, 48 },
    { 212, 69, 369, 0, 0, 4096, 0, 0, 22, 48 },
    { -160, 69, 146, 0, 0, 4096, 0, 0, 6, 48 },
    { -159, 69, -114, 0, 0, 4096, 0, 0, 23, 48 },
    { -401, 69, -390, 0, 0, 4096, 0, 0, 29, 32 },
    { -401, 69, -359, 0, 0, 4096, 0, 0, 29, 16 },
    { -258, 69, -359, 0, 0, 4096, 0, 0, 50, 16 },
    { -258, 69, -390, 0, 0, 4095, 0, 0, 50, 32 },
    { -108, 0, -450, 0, 0, 0, -4096, 0, 19, 59 },
    { -108, 69, -450, 0, 0, 0, -4096, 0, 19, 4 },
    { -108, 69, -329, 0, 0, 0, 4096, 0, 11, 4 },
    { -108, 0, -329, 0, 0, 0, 4096, 0, 11, 59 },
    { -401, 69, -450, 0, 0, 4096, 0, 0, 29, 63 },
    { -401, 69, -420, 0, 0, 4096, 0, 0, 29, 48 },
    { -258, 69, -420, 0, 0, 4096, 0, 0, 50, 48 },
    { -258, 69, -450, 0, 0, 4096, 0, 0, 50, 63 },
    { -130, 69, 146, 0, 4096, 0, 0, 0, 13, 4 },
    { -130, 53, 87, 0, 4096, 0, 0, 0, 13, 2 },
    { -250, 53, -62, 0, -4096, 0, 0, 0, 15, 2 },
    { -250, 0, -62, 0, -4096, 0, 0, 0, 15, 59 },
    { -129, 69, -125, 0, 0, 4096, 0, 0, 13, 63 },
    { -129, 69, -114, 0, 0, 4096, 0, 0, 22, 63 },
    { -105, 69, -129, 0, 0, 4096, 0, 0, 16, 63 },
    { -35, 69, -129, 0, 27, 4095, -11, 0, 53, 63 },
    { -130, 0, 87, 0, 4096, 0, 0, 0, 13, 59 },
    { -130, 69, 146, 0, 0, 4096, 0, 0, 7, 63 },
    { 95, 69, 275, 0, 0, 4095, 0, 0, 19, 1 },
    { 87, 69, 275, 0, 0, 4096, 0, 0, 0, 1 },
    { -125, 69, 154, 0, 0, 4096, 0, 0, 50, 63 },
    { 39, 69, -290, 0, 0, 4095, 0, 0, 47, 63 },
    { 39, 69, -374, 0, 11, 4095, 27, 0, 11, 63 },
    { 219, 69, 307, 0, 0, 4096, 0, 0, 21, 63 },
    { 219, 69, 230, 0, 0, 4096, 0, 0, 53, 63 },
    { 231, 69, 430, 0, 0, 4096, 0, 0, 38, 16 },
    { 231, 69, 400, 0, 0, 4096, 0, 0, 38, 32 },
    { 671, 69, 339, 0, 0, 0, -4096, 0, 5, 4 },
    { 671, 0, 339, 0, 0, 0, -4096, 0, 5, 59 },
    { 527, 0, 339, 0, 0, 0, -4096, 0, 6, 59 },
    { 527, 69, 339, 0, 0, 0, -4095, 0, 6, 4 },
    { 671, 0, 460, 0, 0, 0, 4096, 0, 24, 59 },
    { 671, 69, 460, 0, 0, 0, 4096, 0, 24, 4 },
    { 527, 69, 460, 0, 0, 0, 4096, 0, 24, 4 },
    { 527, 0, 460, 0, 0, 0, 4095, 0, 24, 59 },
    { 224, 69, 339, 0, 0, 4095, 0, 0, 22, 63 },
    { 231, 69, 369, 0, 0, 4096, 0, 0, 38, 48 },
    { 231, 69, 339, 0, 0, 4096, 0, 0, 38, 63 },
    { -108, 69, -329, 0, 0, 4096, 0, 0, 12, 1 },
    { -84, 69, -329, 0, -29, 4095, -12, 0, 41, 1 },
    { -81, 70, -328, 0, -17, 4095, 17, 0, 58, 1 },
    { -80, 69, -289, 0, 0, 4096, 0, 0, 47, 1 },
    { -80, 69, -254, 0, -11, 4095, 28, 0, 19, 1 },
    { -81, 69, -251, 0, 17, 4095, 17, 0, 36, 1 },
    { -105, 69, -250, 0, 0, 4096, 0, 0, 16, 1 },
    { -174, 69, -250, 0, 0, 4096, 0, 0, 43, 1 },
    { -221, 69, -221, 0, 0, 4096, 0, 0, 60, 1 },
    { -249, 69, 199, 0, 0, 4096, 0, 0, 16, 1 },
    { -221, 69, 246, 0, 0, 4096, 0, 0, 33, 1 },
    { -117, 69, 275, 0, 0, 4096, 0, 0, 5, 1 },
    { 98, 69, 276, 0, 0, 4096, 0, 0, 36, 1 },
    { 100, 69, 307, 0, 0, 4096, 0, 0, 21, 1 },
    { 100, 69, 384, 0, 0, 4096, 0, 0, 52, 1 },
    { 128, 69, 431, 0, 0, 4096, 0, 0, 5, 1 },
    { 671, 69, 460, 0, 0, 4095, 0, 0, 19, 1 },
    { 527, 69, 430, 0, 0, 4096, 0, 0, 27, 16 },
    { 527, 69, 460, 0, 0, 4095, 0, 0, 27, 1 },
    { -80, 69, -325, 0, 12, 4095, 29, 0, 11, 1 },
    { -84, 69, -250, 0, 28, 4095, -11, 0, 53, 1 },
    { -250, 69, -174, 0, 0, 4096, 0, 0, 13, 1 },
    { -174, 69, 275, 0, 0, 4096, 0, 0, 50, 1 },
    { 100, 69, 279, 0, 0, 4096, 0, 0, 53, 1 },
    { 175, 69, 460, 0, 0, 4096, 0, 0, 22, 1 },
    { -249, 69, 146, 0, 0, 4096, 0, 0, 4, 1 },
    { -250, 69, -114, 0, 0, 4096, 0, 0, 25, 1 },
    { -35, 69, -450, 0, -27, 4095, -11, 0, 41, 63 },
    { -108, 69, -450, 0, 0, 4095, 0, 0, 12, 63 },
    { 11, 70, -421, 0, -14, 4095, 14, 0, 58, 63 },
    { 39, 69, -205, 0, -11, 4095, 27, 0, 19, 63 },
    { 11, 69, -158, 0, 14, 4095, 14, 0, 36, 63 },
    { -125, 69, -130, 0, 0, 4096, 0, 0, 43, 63 },
    { -128, 69, -128, 0, 0, 4096, 0, 0, 60, 63 },
    { -128, 69, 153, 0, 0, 4096, 0, 0, 33, 63 },
    { -130, 69, 150, 0, 0, 4096, 0, 0, 16, 63 },
    { 191, 69, 183, 0, 0, 4096, 0, 0, 36, 63 },
    { 144, 69, 154, 0, 0, 4096, 0, 0, 19, 63 },
    { 219, 69, 335, 0, 0, 4095, 0, 0, 52, 63 },
    { 221, 69, 338, 0, 0, 4096, 0, 0, 5, 63 },
    { 671, 69, 339, 0, 0, 4096, 0, 0, 19, 63 },
    { 816, 69, 339, 0, 0, 4096, 0, 0, 12, 63 },
    { -401, 69, -329, 0, 0, 4096, 0, 0, 29, 1 },
    { -544, 69, -359, 0, 0, 4096, 0, 0, 7, 16 },
    { -544, 69, -329, 0, 0, 4095, 0, 0, 7, 1 },
    { -544, 69, -420, 0, 0, 4095, 0, 0, 7, 48 },
    { -544, 69, -390, 0, 0, 4096, 0, 0, 7, 32 },
    { 231, 69, 460, 0, 0, 4096, 0, 0, 38, 1 },
    { -258, 0, -450, 0, 0, 0, -4096, 0, 20, 59 },
    { -258, 69, -450, 0, 0, 0, -4096, 0, 20, 4 },
    { -1000, 0, -450, 0, 0, 0, -4096, 0, 27, 59 },
    { -1000, 69, -450, 0, 0, 0, -4096, 0, 27, 4 },
    { -258, 69, -329, 0, 0, 0, 4096, 0, 9, 4 },
    { -258, 0, -329, 0, 0, 0, 4096, 0, 9, 59 },
    { -1000, 69, -329, 0, 0, 0, 4096, 0, 3, 4 },
    { -1000, 0, -329, 0, 0, 0, 4096, 0, 3, 59 },
    { -1000, 69, -390, 0, 0, 4095, 0, 0, 53, 32 },
    { -1000, 69, -360, 0, 0, 4096, 0, 0, 53, 16 },
    { -1000, 69, -450, 0, 0, 4096, 0, 0, 53, 63 },
    { -1000, 69, -420, 0, 0, 4096, 0, 0, 53, 48 },
    { -544, 69, -450, 0, 0, 4096, 0, 0, 7, 63 },
    { -258, 69, -329, 0, 0, 4096, 0, 0, 50, 1 },
    { -1000, 69, -329, 0, 0, 4096, 0, 0, 53, 1 },
    { 527, 69, 400, 0, 0, 4096, 0, 0, 27, 32 },
    { 1000, 69, 430, 0, 0, 4096, 0, 0, 21, 16 },
    { 999, 69, 400, 0, 0, 4096, 0, 0, 21, 32 },
    { 527, 69, 369, 0, 0, 4096, 0, 0, 27, 48 },
    { 999, 69, 370, 0, 0, 4096, 0, 0, 21, 48 },
    { 999, 69, 340, 0, 0, 0, -4096, 0, 4, 4 },
    { 999, 0, 340, 0, 0, 0, -4096, 0, 4, 59 },
    { 816, 0, 339, 0, 0, 0, -4096, 0, 5, 59 },
    { 816, 69, 339, 0, 0, 0, -4096, 0, 5, 4 },
    { 1000, 0, 460, 0, 0, 0, 4096, 0, 26, 59 },
    { 1000, 69, 460, 0, 0, 0, 4096, 0, 26, 4 },
    { 816, 69, 460, 0, 0, 0, 4096, 0, 25, 4 },
    { 816, 0, 460, 0, 0, 0, 4096, 0, 25, 59 },
    { 1000, 69, 460, 0, 0, 4096, 0, 0, 21, 1 },
    { 816, 69, 460, 0, 0, 4095, 0, 0, 12, 1 },
    { 527, 69, 339, 0, 0, 4096, 0, 0, 27, 63 },
    { 999, 69, 340, 0, 0, 4096, 0, 0, 21, 63 }
};
static u_short Path_P1_Indices[] = {
    0, 2, 1, 2, 0, 3, 4, 6, 5, 6, 4, 7, 8, 10, 9, 10, 8, 11, 3, 12, 2, 12, 3, 13, 14, 16, 15, 16, 14, 17, 18, 20, 19, 
    20, 18, 21, 22, 24, 23, 24, 22, 25, 26, 28, 27, 28, 26, 29, 30, 32, 31, 32, 30, 33, 25, 34, 24, 34, 25, 35, 36, 38, 37, 38, 36, 
    39, 40, 42, 41, 42, 40, 43, 44, 46, 45, 46, 44, 47, 48, 50, 49, 50, 48, 51, 52, 54, 53, 54, 52, 55, 56, 47, 44, 47, 56, 57, 58, 
    60, 59, 60, 58, 61, 62, 64, 63, 64, 62, 65, 66, 68, 67, 68, 66, 69, 70, 72, 71, 72, 70, 73, 74, 76, 75, 76, 74, 77, 78, 80, 79, 
    80, 78, 81, 82, 84, 83, 84, 82, 85, 86, 88, 87, 88, 86, 89, 90, 92, 91, 92, 90, 93, 94, 96, 95, 96, 94, 97, 98, 100, 99, 100, 98, 
    101, 102, 104, 103, 104, 102, 105, 106, 108, 107, 108, 106, 109, 110, 112, 111, 112, 110, 113, 114, 116, 115, 116, 114, 117, 118, 120, 119, 120, 118, 121, 122, 
    113, 110, 113, 122, 123, 124, 126, 125, 126, 124, 127, 128, 130, 129, 130, 128, 131, 132, 134, 133, 134, 132, 135, 136, 138, 137, 138, 136, 139, 140, 142, 141, 
    142, 140, 143, 144, 12, 13, 12, 144, 145, 29, 15, 28, 15, 29, 14, 33, 19, 32, 19, 33, 18, 146, 34, 35, 34, 146, 147, 51, 37, 50, 37, 51, 
    36, 55, 41, 54, 41, 55, 40, 56, 148, 57, 148, 56, 149, 66, 59, 69, 59, 66, 58, 73, 63, 72, 63, 73, 62, 74, 150, 77, 150, 74, 151, 152, 
    79, 153, 79, 152, 78, 154, 83, 155, 83, 154, 82, 156, 100, 101, 100, 156, 157, 117, 103, 116, 103, 117, 102, 121, 107, 120, 107, 121, 106, 122, 158, 123, 
    158, 122, 159, 139, 125, 138, 125, 139, 124, 143, 129, 142, 129, 143, 128, 75, 161, 160, 161, 75, 76, 162, 164, 163, 164, 162, 165, 166, 160, 161, 160, 166, 
    167, 168, 170, 169, 171, 173, 172, 174, 176, 175, 176, 174, 177, 178, 180, 179, 180, 178, 181, 80, 183, 182, 184, 186, 185, 186, 184, 68, 73, 70, 187, 84, 
    165, 188, 165, 84, 85, 3, 190, 189, 190, 3, 0, 13, 189, 191, 189, 13, 3, 25, 193, 192, 193, 25, 22, 35, 192, 194, 192, 35, 25, 195, 45, 196, 
    45, 195, 44, 197, 44, 195, 44, 197, 56, 198, 75, 199, 75, 198, 74, 200, 202, 201, 202, 200, 203, 101, 205, 204, 205, 101, 98, 206, 111, 207, 111, 206, 
    110, 208, 110, 206, 110, 208, 122, 209, 135, 132, 135, 209, 210, 211, 13, 191, 13, 211, 144, 212, 35, 194, 35, 212, 146, 149, 197, 213, 197, 149, 56, 151, 
    198, 214, 198, 151, 74, 215, 101, 204, 101, 215, 156, 159, 208, 216, 208, 159, 122, 199, 160, 217, 160, 199, 75, 217, 167, 218, 167, 217, 160, 219, 221, 220, 
    221, 219, 222, 17, 223, 16, 223, 17, 224, 21, 225, 20, 225, 21, 226, 227, 229, 228, 229, 227, 230, 149, 166, 148, 166, 149, 167, 231, 232, 183, 231, 184, 
    232, 67, 184, 231, 67, 68, 184, 162, 188, 165, 233, 188, 162, 233, 71, 188, 70, 71, 233, 186, 68, 69, 233, 187, 70, 187, 233, 234, 235, 218, 213, 218, 
    235, 236, 45, 147, 146, 147, 45, 46, 61, 49, 60, 49, 61, 48, 65, 53, 64, 53, 65, 52, 237, 212, 238, 212, 237, 196, 81, 183, 80, 183, 81, 231, 
    164, 165, 85, 232, 182, 183, 182, 232, 239, 218, 240, 217, 240, 218, 236, 151, 87, 150, 87, 151, 86, 241, 88, 99, 88, 241, 242, 105, 91, 104, 91, 105, 
    90, 153, 93, 152, 93, 153, 92, 109, 95, 108, 95, 109, 94, 155, 97, 154, 97, 155, 96, 243, 201, 214, 201, 243, 200, 98, 202, 205, 202, 98, 89, 22, 
    145, 144, 145, 22, 23, 39, 27, 38, 27, 39, 26, 43, 31, 42, 31, 43, 30, 244, 211, 245, 211, 244, 193, 111, 157, 156, 157, 111, 112, 127, 115, 126, 
    115, 127, 114, 131, 119, 130, 119, 131, 118, 246, 215, 247, 215, 246, 207, 159, 248, 158, 248, 159, 249, 250, 252, 251, 252, 250, 253, 254, 256, 255, 256, 254, 
    257, 258, 259, 216, 259, 258, 260, 1, 262, 261, 262, 1, 2, 2, 263, 262, 263, 2, 12, 23, 265, 264, 265, 23, 24, 24, 266, 265, 266, 24, 34, 267, 
    47, 268, 47, 267, 46, 268, 57, 269, 57, 268, 47, 270, 77, 271, 77, 270, 76, 272, 88, 242, 88, 272, 87, 99, 273, 241, 273, 99, 100, 274, 113, 275, 
    113, 274, 112, 275, 123, 276, 123, 275, 113, 277, 278, 133, 278, 277, 279, 263, 145, 280, 145, 263, 12, 266, 147, 281, 147, 266, 34, 57, 282, 269, 282, 57, 
    148, 77, 283, 271, 283, 77, 150, 273, 157, 284, 157, 273, 100, 123, 285, 276, 285, 123, 158, 286, 76, 270, 76, 286, 161, 166, 286, 287, 286, 166, 161, 189, 
    289, 288, 289, 189, 190, 191, 288, 290, 288, 191, 189, 192, 244, 291, 244, 192, 193, 194, 291, 292, 291, 194, 192, 293, 196, 237, 196, 293, 195, 294, 195, 293, 
    195, 294, 197, 295, 199, 296, 199, 295, 198, 86, 202, 89, 202, 86, 201, 204, 298, 297, 298, 204, 205, 299, 207, 246, 207, 299, 206, 300, 206, 299, 206, 300, 
    208, 301, 210, 209, 210, 301, 302, 245, 191, 290, 191, 245, 211, 238, 194, 292, 194, 238, 212, 213, 294, 235, 294, 213, 197, 214, 295, 243, 295, 214, 198, 247, 
    204, 297, 204, 247, 215, 216, 300, 258, 300, 216, 208, 296, 217, 240, 217, 296, 199, 303, 304, 220, 304, 303, 305, 219, 306, 228, 306, 219, 307, 148, 287, 282, 
    287, 148, 166, 213, 167, 149, 167, 213, 218, 281, 46, 267, 46, 281, 147, 146, 196, 45, 196, 146, 212, 150, 272, 283, 272, 150, 87, 99, 89, 98, 89, 99, 
    88, 214, 86, 151, 86, 214, 201, 205, 203, 298, 203, 205, 202, 280, 23, 264, 23, 280, 145, 144, 193, 22, 193, 144, 211, 284, 112, 274, 112, 284, 157, 156, 
    207, 111, 207, 156, 215, 158, 308, 285, 308, 158, 248, 216, 249, 159, 249, 216, 259, 224, 309, 223, 309, 224, 310, 310, 5, 309, 5, 310, 4, 311, 7, 312, 
    7, 311, 6, 226, 313, 225, 313, 226, 314, 314, 9, 313, 9, 314, 8, 315, 11, 316, 11, 315, 10, 317, 304, 318, 304, 317, 307, 219, 304, 307, 304, 219, 
    220, 1, 222, 0, 222, 1, 221, 319, 306, 320, 306, 319, 321, 321, 228, 306, 228, 321, 227, 190, 230, 289, 230, 190, 229, 261, 221, 1, 221, 261, 322, 322, 
    220, 221, 220, 322, 303, 318, 305, 323, 305, 318, 304, 0, 229, 190, 229, 0, 222, 219, 229, 222, 229, 219, 228, 320, 307, 317, 307, 320, 306, 249, 278, 248, 
    278, 249, 324, 324, 133, 278, 133, 324, 132, 325, 135, 326, 135, 325, 134, 259, 324, 249, 324, 259, 327, 327, 132, 324, 132, 327, 209, 326, 210, 328, 210, 326, 
    135, 329, 331, 330, 331, 329, 332, 332, 251, 331, 251, 332, 250, 137, 253, 136, 253, 137, 252, 333, 335, 334, 335, 333, 336, 336, 255, 335, 255, 336, 254, 141, 
    257, 140, 257, 141, 256, 337, 134, 325, 134, 337, 338, 338, 133, 134, 133, 338, 277, 248, 279, 308, 279, 248, 278, 260, 327, 259, 327, 260, 339, 301, 327, 339, 
    327, 301, 209, 328, 302, 340, 302, 328, 210
};
static SDC_Mesh3D Path_P1_Mesh = {Path_P1_Vertices, Path_P1_Indices, NULL, 1290, 341, POLIGON_VERTEX_TEXTURED_NORMAL};
#endif