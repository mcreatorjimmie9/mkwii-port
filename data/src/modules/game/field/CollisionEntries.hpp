#pragma once
#include "rk_types.h"

namespace Field {

struct ColInfo {
    f32 colPerpendicularity;
    EGG::Vector3f tangentOff;
};

struct ColInfoPartial {
    EGG::Vector3f bboxLow;
    EGG::Vector3f bboxHigh;
};

struct CollisionEntry {
    u32 typeMask;
    u32 attribute;
};

// KCL attribute extraction macros
#define KCL_ATTRIBUTE_TYPE(attr)   ((attr) & 0xFF)
#define KCL_ATTRIBUTE_VARIANT(attr) (((attr) >> 8) & 0xFF)
#define KCL_ATTRIBUTE_SINK_DEPTH(attr) (((attr) >> 16) & 0xFF)

// KCL type masks
#define KCL_TYPE_FLOOR            0x0001
#define KCL_TYPE_PLAYER_WALL_CAT1 0x0002
#define KCL_TYPE_PLAYER_WALL_CAT2 0x0004
#define KCL_TYPE_OFFROAD_ANY      0x0008
#define KCL_BOOST_PAD_MASK        0x0010
#define KCL_BOOST_RAMP_MASK       0x0020
#define KCL_HALFPIPE_RAMP_MASK    0x0040
#define KCL_JUMP_PAD_MASK         0x0080
#define KCL_MOVING_WATER_MASK     0x0100
#define KCL_MOVING_ROAD_MASK      0x0200
#define KCL_CANNON_TRIGGER_MASK   0x0400
#define KCL_SOFT_WALL_MASK        0x0800
#define KCL_TRICKABLE_MASK        0x1000
#define KCL_REJECT_ROAD_MASK      0x2000
#define KCL_TYPE_DRIVER_WALL      0x4000
#define KCL_STICKY_ROAD_MASK      0x8000

// Global collision entry pointer
static CollisionEntry* closestCollisionEntry = nullptr;

inline bool lookupCollisionEntry(u32* typeMask, u32 mask) {
    if ((*typeMask & mask) != 0 && closestCollisionEntry) {
        *typeMask &= ~mask; // consume the mask
        return true;
    }
    return false;
}

// Enum for pad types used by KartMove
enum {
    PAD_TYPE_BOOST_PANEL = 0,
    PAD_TYPE_BOOST_RAMP = 1,
    PAD_TYPE_JUMP_PAD = 2,
};

} // namespace Field