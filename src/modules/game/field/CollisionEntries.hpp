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

// =============================================================================
// KCL attribute extraction macros — Community-verified from decompiled game
// The attribute field encodes: bits 0-4 = type (5-bit), bits 5-7 = variant,
// bits 8-10 = reserved, bits 11-12 = sink depth.
// =============================================================================
#define KCL_ATTRIBUTE_TYPE(x)         ((x) & 0x1f)
#define KCL_ATTRIBUTE_VARIANT(x)      (((x) >> 5) & 0x7)
#define KCL_ATTRIBUTE_SINK_DEPTH(x)   (((x) >> 0xb) & 0x3)
#define KCL_TYPE_BIT(x)              (1u << (x))
#define KCL_ATTRIBUTE_TYPE_BIT(x)    KCL_TYPE_BIT(KCL_ATTRIBUTE_TYPE(x))

// =============================================================================
// KCL collision type enum (5-bit field, 32 types)
// Extracted from the original game binary.
// =============================================================================
typedef enum {
    COL_TYPE_ROAD = 0,
    COL_TYPE_SLIPPERY_ROAD = 1,
    COL_TYPE_WEAK_OFF_ROAD = 2,
    COL_TYPE_OFF_ROAD = 3,
    COL_TYPE_HEAVY_OFF_ROAD = 4,
    COL_TYPE_SLIPPERY_ROAD_2 = 5,
    COL_TYPE_BOOST_PAD = 6,
    COL_TYPE_BOOST_RAMP = 7,
    COL_TYPE_JUMP_PAD = 8,
    COL_TYPE_ITEM_ROAD = 9,

    COL_TYPE_SOLID_OOB = 0xa,
    COL_TYPE_MOVING_WATER = 0xb,

    COL_TYPE_WALL = 0xc,
    COL_TYPE_INVISIBLE_WALL = 0xd,
    COL_TYPE_ITEM_WALL = 0xe,
    COL_TYPE_WALL_2 = 0xf,

    COL_TYPE_FALL_BOUNDARY = 0x10,
    COL_TYPE_CANNON_TRIGGER = 0x11,
    COL_TYPE_FORCE_RECALCULATE_ROUTE = 0x12,
    COL_TYPE_HALFPIPE_RAMP = 0x13,
    COL_TYPE_PLAYER_WALL = 0x14,
    COL_TYPE_MOVING_ROAD = 0x15,
    COL_TYPE_STICKY_ROAD = 0x16,
    COL_TYPE_ROAD2 = 0x17,
    COL_TYPE_SOUND_TRIGGER = 0x18,
    COL_TYPE_WEAK_WALL = 0x19,
    COL_TYPE_EFFECT_TRIGGER = 0x1a,
    COL_TYPE_ITEM_STATE_MODIFIER = 0x1b,

    COL_TYPE_HALFPIPE_INVISIBLE_WALL = 0x1c,
    COL_TYPE_ROTATING_ROAD = 0x1d,
    COL_TYPE_SPECIAL_WALL = 0x1e,
    COL_TYPE_INVISIBLE_WALL2 = 0x1f,

    COL_TYPE_COUNT
} KColType;

// =============================================================================
// KCL type bitmasks — Using direct numeric values to avoid namespace issues
// with macro expansion. Each is a bitmask of (1 << type) for groups of types.
// =============================================================================

// All floor/drivable surface types
#define KCL_TYPE_FLOOR (\
    (1u << 0)  | /* COL_TYPE_ROAD */ \
    (1u << 1)  | /* COL_TYPE_SLIPPERY_ROAD */ \
    (1u << 2)  | /* COL_TYPE_WEAK_OFF_ROAD */ \
    (1u << 3)  | /* COL_TYPE_OFF_ROAD */ \
    (1u << 4)  | /* COL_TYPE_HEAVY_OFF_ROAD */ \
    (1u << 5)  | /* COL_TYPE_SLIPPERY_ROAD_2 */ \
    (1u << 6)  | /* COL_TYPE_BOOST_PAD */ \
    (1u << 7)  | /* COL_TYPE_BOOST_RAMP */ \
    (1u << 8)  | /* COL_TYPE_JUMP_PAD */ \
    (1u << 9)  | /* COL_TYPE_ITEM_ROAD */ \
    (1u << 0xa)| /* COL_TYPE_SOLID_OOB */ \
    (1u << 0xb)| /* COL_TYPE_MOVING_WATER */ \
    (1u << 0x13)| /* COL_TYPE_HALFPIPE_RAMP */ \
    (1u << 0x15)| /* COL_TYPE_MOVING_ROAD */ \
    (1u << 0x16)| /* COL_TYPE_STICKY_ROAD */ \
    (1u << 0x17)| /* COL_TYPE_ROAD2 */ \
    (1u << 0x1d))  /* COL_TYPE_ROTATING_ROAD */

// All off-road types (weak, standard, heavy)
#define KCL_TYPE_OFFROAD_ANY (\
    (1u << 2)  | /* COL_TYPE_WEAK_OFF_ROAD */ \
    (1u << 3)  | /* COL_TYPE_OFF_ROAD */ \
    (1u << 4))    /* COL_TYPE_HEAVY_OFF_ROAD */

// All wall types (solid, invisible, item, player, halfpipe, special)
#define KCL_TYPE_WALL (\
    (1u << 0xc)| /* COL_TYPE_WALL */ \
    (1u << 0xd)| /* COL_TYPE_INVISIBLE_WALL */ \
    (1u << 0xe)| /* COL_TYPE_ITEM_WALL */ \
    (1u << 0xf)| /* COL_TYPE_WALL_2 */ \
    (1u << 0x14)| /* COL_TYPE_PLAYER_WALL */ \
    (1u << 0x1c)| /* COL_TYPE_HALFPIPE_INVISIBLE_WALL */ \
    (1u << 0x1e)| /* COL_TYPE_SPECIAL_WALL */ \
    (1u << 0x1f))  /* COL_TYPE_INVISIBLE_WALL2 */

// Driver-blocking walls (walls that physically block the kart)
#define KCL_TYPE_DRIVER_WALL (\
    (1u << 0xc)| /* COL_TYPE_WALL */ \
    (1u << 0xd)| /* COL_TYPE_INVISIBLE_WALL */ \
    (1u << 0xf)| /* COL_TYPE_WALL_2 */ \
    (1u << 0x14)| /* COL_TYPE_PLAYER_WALL */ \
    (1u << 0x1e)| /* COL_TYPE_SPECIAL_WALL */ \
    (1u << 0x1f))  /* COL_TYPE_INVISIBLE_WALL2 */

// Player wall categories (used for wall collision filtering)
#define KCL_TYPE_PLAYER_WALL_CAT1 (\
    (1u << 0xc)| /* COL_TYPE_WALL */ \
    (1u << 0xd)| /* COL_TYPE_INVISIBLE_WALL */ \
    (1u << 0xf)| /* COL_TYPE_WALL_2 */ \
    (1u << 0x14)| /* COL_TYPE_PLAYER_WALL */ \
    (1u << 0x1e))  /* COL_TYPE_SPECIAL_WALL */

#define KCL_TYPE_PLAYER_WALL_CAT2 (\
    (1u << 0xc)| /* COL_TYPE_WALL */ \
    (1u << 0xf)| /* COL_TYPE_WALL_2 */ \
    (1u << 0x14)| /* COL_TYPE_PLAYER_WALL */ \
    (1u << 0x1e)| /* COL_TYPE_SPECIAL_WALL */ \
    (1u << 0x1f))  /* COL_TYPE_INVISIBLE_WALL2 */

// Directional trigger types (one-way collision triggers)
#define KCL_TYPE_DIRECTIONAL (\
    (1u << 0x10)| /* COL_TYPE_FALL_BOUNDARY */ \
    (1u << 0x18)| /* COL_TYPE_SOUND_TRIGGER */ \
    (1u << 0x12)| /* COL_TYPE_FORCE_RECALCULATE_ROUTE */ \
    (1u << 0x1a)| /* COL_TYPE_EFFECT_TRIGGER */ \
    (1u << 0x11))  /* COL_TYPE_CANNON_TRIGGER */

// Solid surface types (all types except directional triggers)
#define KCL_TYPE_SOLID_SURFACE ( \
    0xffffffffu & (\
    ~(1u << 0x10) & /* ~COL_TYPE_FALL_BOUNDARY */ \
    ~(1u << 0x11) & /* ~COL_TYPE_CANNON_TRIGGER */ \
    ~(1u << 0x12) & /* ~COL_TYPE_FORCE_RECALCULATE_ROUTE */ \
    ~(1u << 0x18) & /* ~COL_TYPE_SOUND_TRIGGER */ \
    ~(1u << 0x19) & /* ~COL_TYPE_WEAK_WALL */ \
    ~(1u << 0x1a) & /* ~COL_TYPE_EFFECT_TRIGGER */ \
    ~(1u << 0x1b)))  /* ~COL_TYPE_ITEM_STATE_MODIFIER */

// Extended attribute flags (above the 5-bit type field)
#define KCL_TRICKABLE_MASK   0x2000
#define KCL_REJECT_ROAD_MASK 0x4000
#define KCL_SOFT_WALL_MASK   0x8000

// Individual type bitmasks for specific queries
#define KCL_BOOST_PAD_MASK       (1u << 6)   /* COL_TYPE_BOOST_PAD */
#define KCL_BOOST_RAMP_MASK      (1u << 7)   /* COL_TYPE_BOOST_RAMP */
#define KCL_JUMP_PAD_MASK        (1u << 8)   /* COL_TYPE_JUMP_PAD */
#define KCL_HALFPIPE_RAMP_MASK   (1u << 0x13) /* COL_TYPE_HALFPIPE_RAMP */
#define KCL_CANNON_TRIGGER_MASK  (1u << 0x11) /* COL_TYPE_CANNON_TRIGGER */
#define KCL_STICKY_ROAD_MASK     (1u << 0x16) /* COL_TYPE_STICKY_ROAD */
#define KCL_MOVING_ROAD_MASK     (1u << 0x15) /* COL_TYPE_MOVING_ROAD */
#define KCL_MOVING_WATER_MASK    (1u << 0xb)  /* COL_TYPE_MOVING_WATER */

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
