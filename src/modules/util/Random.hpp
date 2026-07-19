#pragma once
#include "../rk_types.h"

namespace Util {
class Random {
public:
    u32 state;
    Random() : state(0) {}
    u32 next() { state = state * 1103515245 + 12345; return state; }
    s32 nextS32() { return (s32)next(); }
    f32 nextF32() { return (f32)next() / (f32)0xFFFFFFFF; }
};
}