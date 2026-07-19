#pragma once
// Stub: game/field/ — placeholder for Phase 4 (BRIDGE) implementation
#include "rk_types.h"

namespace Field {
struct ColInfo {
    u8 type;
    u8 flags;
    u16 reserved;
    f32 normal[3];
    f32 dist;
};
} // namespace Field

class CourseColManager {};
