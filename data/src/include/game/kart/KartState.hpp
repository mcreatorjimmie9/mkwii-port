#pragma once
// Stub: game/kart/KartState.hpp — placeholder for Phase 4 (BRIDGE) implementation
#include "rk_types.h"
namespace Kart {

enum KartFlags {
    KART_FLAG_HOPPING = 3,
    KART_FLAG_STAR = 4,
    KART_FLAG_MEGA = 5,
    KART_FLAG_RESPAWN_INVINCIBLE = 6,
    KART_FLAG_THUNDER = 7,
    KART_FLAG_TRICK_BOOST = 8,
    KART_FLAG_MUSHROOM = 9,
    KART_FLAG_MINI_TURBO = 10,
    KART_FLAG_OOB = 11,
    KART_FLAG_STH_3 = 12,
    KART_FLAG_STH_5 = 13,
    KART_FLAG_CANNON_START = 14,
    KART_FLAG_ALL_WHEELS_COLLISION = 15,
    KART_FLAG_STICKY_ROAD = 16,
    KART_FLAG_TOUCHING_GROUND = 18,
    KART_FLAG_AUTO_DRIFT = 19,
    KART_FLAG_AIR_START = 23,
    KART_FLAG_LARGE_FLIP_HIT = 25,
    KART_FLAG_BULLET = 27,
    KART_FLAG_IN_A_BULLET = 28,
    KART_FLAG_JUMPPAD = 30,
    KART_FLAG_GHOST = 31,
    KART_FLAG_CPU = 32,
};

class KartState {
public:
    bool on(KartFlags flag) const { return (mFlags & (1u << flag)) != 0; }
    void set(KartFlags flag) { mFlags |= (1u << flag); }
    void reset(KartFlags flag) { mFlags &= ~(1u << flag); }
private:
    u32 mFlags;
};

}
