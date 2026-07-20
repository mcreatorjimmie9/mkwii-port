#pragma once
// ============================================================================
// ItemSystem module — ItemObjFib
// ============================================================================
// Feather (FOIL) item object. Spawns at a point on the track and floats
// with a bobbing animation. When a player passes within collection range,
// the feather is picked up and grants the player a brief flight/glide
// boost, similar to the Feather item from other MK titles.
//
// Address range: 0x807a9d90 — ItemObjFib_makeArray (152 bytes)
// ============================================================================

#include <rk_types.h>
#include "egg/math/eggVector.hpp"

namespace Item {

// Forward declarations for class table lookup in makeArray
struct ClassEntry {
    u8 mClassCount;   // Number of registered item object classes
    u8 mVariantField; // Variant selector at offset +0xf4 in class data
};

class ItemObjFib {
public:
    // ========================================================================
    // Construction / Destruction
    // ========================================================================

    ItemObjFib();
    ~ItemObjFib();

    // ========================================================================
    // Array factory
    // ========================================================================

    // Create and initialize an array of feather item objects.
    // Determines variant (normal/special) via class table lookup.
    // @addr 0x807a9d90
    // @param array       Output array pointer (pre-allocated)
    // @param count       Number of feathers to initialize
    // @param maxCount    Maximum capacity of the array
    // @param globalCfg   Pointer to the global item config (offset 0x74 → class table)
    // @param classIdx    Class index byte from the item slot data (offset 0x6c)
    // @param classTable  Pointer to the class entry table (indexed by classIdx * 0xF0)
    // @param variantFlags Bit flags at offset 0x78 used to select variant override
    // @param speed       Base movement/fall speed for the feather object
    // @return 0 on success
    static s32 makeArray(ItemObjFib* array, u32 count, u32 maxCount,
        void* globalCfg, u8 classIdx, ClassEntry* classTable,
        u32 variantFlags, f32 speed);

    // ========================================================================
    // Per-instance methods
    // ========================================================================

    // Initialize feather state: position, bob timer, lifetime, speed.
    // @param pos   Spawn position in world space
    // @param speed Fall/float speed
    void init(const EGG::Vector3f& pos, f32 speed);

    // Per-frame update: bob animation, proximity check, lifetime tick.
    void update();

    // Set the player ID this feather targets (0xFF = none/any).
    void setTarget(u8 playerId) { mTargetId = playerId; }

    // Get the current target player ID.
    u8 getTarget() const { return mTargetId; }

    // Check if this feather is still active on the field.
    bool isActive() const { return mAlive; }

    // Remove feather from the field (mark inactive, stop rendering).
    void removeFromField();

    // Get the current world-space position.
    const EGG::Vector3f& getPosition() const { return mPosition; }

    // Get the remaining lifetime in frames.
    s32 getLifetime() const { return mLifetime; }

    // ========================================================================
    // Constants
    // ========================================================================

    static const f32 BOB_AMPLITUDE;       // Height oscillation amplitude
    static const f32 BOB_FREQUENCY;       // Oscillation frequency (cycles per second)
    static const f32 COLLECT_RADIUS;      // Distance at which player can collect
    static const s32 DEFAULT_LIFETIME;    // Frames before feather despawns
    static const u8  INVALID_TARGET;      // 0xFF — no specific target
    static const u8  VARIANT_NORMAL;      // Variant ID 2 (default)
    static const u8  VARIANT_SPECIAL;     // Variant ID 3 (special/class-dependent)
    static const u8  VARIANT_ALT;         // Variant ID 4 (alternate)

private:
    // Current world-space position
    EGG::Vector3f mPosition;

    // Original spawn position (center of bob)
    EGG::Vector3f mBasePosition;

    // Speed of the item (fall/float speed)
    f32 mSpeed;

    // Timer tracking bob animation phase
    f32 mBobTimer;

    // Remaining frames before the feather expires
    s32 mLifetime;

    // Player ID that can collect this feather (INVALID_TARGET = any)
    u8 mTargetId;

    // Variant type determined during makeArray
    u8 mVariant;

    // Whether the feather is active on the field
    bool mAlive;
};

} // namespace Item