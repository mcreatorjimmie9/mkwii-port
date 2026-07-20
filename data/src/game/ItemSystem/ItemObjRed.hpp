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

    // Find the nearest kart ahead of the owner and set as target.
    // Returns the new target ID, or INVALID_TARGET if none found.
    // @param ownerPos      Position of the kart that fired the shell
    // @param ownerDir      Forward direction of the owner
    // @param playerCount   Number of players in the race
    // @param playerPositions  Array of all player positions (playerCount entries)
    // @param playerInvincible  Array of invincibility flags (playerCount entries)
    u8 findTarget(const EGG::Vector3f& ownerPos, const EGG::Vector3f& ownerDir,
                  u8 playerCount, const EGG::Vector3f* playerPositions,
                  const u8* playerInvincible);

    // Steer the shell toward the current target with turn rate limiting.
    // @param targetPos  Position of the target kart
    void steerToward(const EGG::Vector3f& targetPos);

    // Check collision against all karts.
    // Returns the ID of the kart hit, or INVALID_TARGET if none.
    // @param playerCount   Number of players
    // @param playerPositions  Array of all player positions
    // @param hitRadius   Collision radius for hit detection
    u8 checkCollision(u8 playerCount, const EGG::Vector3f* playerPositions,
                      f32 hitRadius) const;

    // Called when the shell hits a kart.
    // @param hitPlayerId  The kart that was hit
    // @param outSpinTimer Output spin-out duration in frames
    void onHit(u8 hitPlayerId, s32* outSpinTimer);

    // Called when the shell expires (lifetime reaches zero).
    void onTimeout();

    // Calculate current speed based on distance to target.
    // Shell accelerates when closer to target for more dramatic hits.
    // @param distToTarget  Squared distance to target
    f32 calcSpeed(f32 distToTarget) const;

    // Attempt to bounce the shell off a wall surface.
    // @param wallNormal  Normal of the wall surface
    // @param maxBounces  Maximum number of bounces allowed
    // @return true if the bounce was performed
    bool wallBounce(const EGG::Vector3f& wallNormal, u8 maxBounces);

    // Check if the target kart can dodge (star/mega invincibility).
    // @param targetId  Target player ID
    // @param playerInvincible  Array of invincibility flags
    bool canDodge(u8 targetId, const u8* playerInvincible) const;

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

    // Set the owner player ID (who fired this shell).
    void setOwnerId(u8 id) { mOwnerId = id; }

    // Get the owner player ID.
    u8 getOwnerId() const { return mOwnerId; }

    // Set the number of wall bounces remaining.
    void setBounceCount(u8 count) { mBouncesLeft = count; }

    // Get the number of wall bounces remaining.
    u8 getBounceCount() const { return mBouncesLeft; }

    // ========================================================================
    // Constants
    // ========================================================================

    static const f32 DEFAULT_SPEED;          // ~1.2f — default red shell speed
    static const f32 DEFAULT_HOMING_STRENGTH; // 0.02f — homing turn rate
    static const s32 DEFAULT_LIFETIME;       // 600 frames (10 seconds at 60fps)
    static const u8  INVALID_TARGET;         // 0xFF — no valid target

    static const f32 MAX_TURN_RATE;          // Maximum radians per frame the shell can turn
    static const f32 MIN_SPEED;              // Minimum shell speed
    static const f32 MAX_SPEED;              // Maximum shell speed (when close to target)
    static const f32 CLOSE_DISTANCE_SQ;      // Squared distance threshold for speed boost
    static const f32 HIT_RADIUS;             // Default collision radius
    static const u8  DEFAULT_MAX_BOUNCES;    // Maximum wall bounces before destruction

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

    // Player ID of the kart that fired this shell
    u8 mOwnerId;

    // Number of wall bounces remaining
    u8 mBouncesLeft;
};

// Factory function: create a single red shell instance on the heap.
// @addr 0x807ac610 (estimated)
ItemObjRed* ItemObjRed_create();

} // namespace Item