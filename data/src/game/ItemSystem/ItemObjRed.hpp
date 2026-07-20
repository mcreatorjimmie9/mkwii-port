#pragma once
// ============================================================================
// ItemSystem module — ItemObjRed
// ============================================================================
// Red shell (homing shell) item object. Each instance tracks a single red
// shell in flight. The shell homes toward its target player using a
// configurable homing strength and travels at a given speed.
//
// Address range: 0x807ac4d8 — ItemObjRed_makeArray (456 bytes)
// ============================================================================

#include <rk_types.h>
#include "egg/math/eggVector.hpp"

namespace Item {

class ItemObjRed {
public:
    // ========================================================================
    // Construction / Destruction
    // ========================================================================

    ItemObjRed();
    ~ItemObjRed();

    // ========================================================================
    // Array factory
    // ========================================================================

    // Create and initialize an array of red shell objects.
    // Returns 0 on success, nonzero if count exceeds maxCount or on failure.
    // @addr 0x807ac4d8
    // @param array    Output array pointer (pre-allocated, at least maxCount elements)
    // @param count    Number of shells to initialize
    // @param maxCount Maximum capacity of the array
    // @param speed    Movement speed for each shell (loaded from offset 0x34 of config)
    static s32 makeArray(ItemObjRed* array, u32 count, u32 maxCount, f32 speed);

    // ========================================================================
    // Per-instance methods
    // ========================================================================

    // Initialize shell state for a new spawn: position, direction, target.
    void init(const EGG::Vector3f& pos, const EGG::Vector3f& dir, u8 targetId);

    // Per-frame update: find nearest target ahead, compute homing vector,
    // advance position along trajectory.
    void update();

    // Get the current homing target player ID (0xFF if none).
    u8 getTarget() const { return mTargetId; }

    // Set the movement speed.
    void setSpeed(f32 speed) { mSpeed = speed; }

    // Get the current movement speed.
    f32 getSpeed() const { return mSpeed; }

    // Set the homing strength (how aggressively the shell turns).
    void setHomingStrength(f32 strength) { mHomingStrength = strength; }

    // Get the homing strength.
    f32 getHomingStrength() const { return mHomingStrength; }

    // Get the remaining lifetime in frames.
    s32 getLifetime() const { return mLifetime; }

    // Set the remaining lifetime in frames.
    void setLifetime(s32 frames) { mLifetime = frames; }

    // Get the current position.
    const EGG::Vector3f& getPosition() const { return mPosition; }

    // Get the current direction (unit vector).
    const EGG::Vector3f& getDirection() const { return mDirection; }

    // Check if the shell is still alive (lifetime > 0 and not expired).
    bool isAlive() const { return mAlive; }

    // Mark the shell as destroyed.
    void destroy() { mAlive = false; }

    // ========================================================================
    // Constants
    // ========================================================================

    static const f32 DEFAULT_SPEED;          // ~1.2f — default red shell speed
    static const f32 DEFAULT_HOMING_STRENGTH; // 0.02f — homing turn rate
    static const s32 DEFAULT_LIFETIME;       // 600 frames (10 seconds at 60fps)
    static const u8  INVALID_TARGET;         // 0xFF — no valid target

private:
    // Current world-space position
    EGG::Vector3f mPosition;

    // Current movement direction (unit vector)
    EGG::Vector3f mDirection;

    // Speed of travel (units per frame)
    f32 mSpeed;

    // How strongly the shell curves toward its target (radians per frame)
    f32 mHomingStrength;

    // Remaining frames before the shell expires
    s32 mLifetime;

    // Player ID the shell is homing toward
    u8 mTargetId;

    // Whether the shell is active
    bool mAlive;
};

} // namespace Item