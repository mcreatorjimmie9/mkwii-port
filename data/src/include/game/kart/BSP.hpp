#pragma once
// Stub: game/kart/BSP.hpp — placeholder for Phase 4 (BRIDGE) implementation
#include "rk_types.h"
namespace Kart {
class BSP {};
class BspWheel {
public:
    f32 maxTravel;
    f32 contactDist;
    f32 wheelRadius;
    u8 pad[0x2C];
};
// HitboxGroup defined in KartHitbox.hpp
} // namespace Kart
