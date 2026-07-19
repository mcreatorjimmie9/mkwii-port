#pragma once
#include "../rk_types.h"

namespace System {
struct Rating {
    u8 _00[0x08];
    f32 calcNegPoints(const Rating& other) const { (void)other; return 0.0f; }
};
}