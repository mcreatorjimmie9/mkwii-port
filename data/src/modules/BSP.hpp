#pragma once
#include "rk_types.h"
#include <egg/math/eggVector.hpp>

static const u32 BSP_HITBOX_COUNT = 8;

struct BspHitbox {
    EGG::Vector3f pos;
    f32 radius;
    bool enabled;
};

struct BspWheel {
    f32 maxTravel;
    f32 wheelRadius;
};

// Wii SDK function stub
inline void VEC3Transform(EGG::Vector3f* out, const EGG::Matrix34f* mtx, const EGG::Vector3f* v) {
    if (!out || !mtx || !v) return;
    out->x = mtx->m[0][0]*v->x + mtx->m[0][1]*v->y + mtx->m[0][2]*v->z + mtx->m[0][3];
    out->y = mtx->m[1][0]*v->x + mtx->m[1][1]*v->y + mtx->m[1][2]*v->z + mtx->m[1][3];
    out->z = mtx->m[2][0]*v->x + mtx->m[2][1]*v->y + mtx->m[2][2]*v->z + mtx->m[2][3];
}