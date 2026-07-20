#pragma once
// ============================================================================
// ItemSystem module — PlayerSub18
// ============================================================================
// Player-item collision detection handler. Processes a player's hitbox
// groups against active item objects on the track, performing sphere
// and AABB overlap tests to determine if the player collected, was hit by,
// or interacted with an item.
//
// Address range: 0x80574a64 — PlayerSub18_checkItemCollision (1560 bytes)
// ============================================================================

#include <rk_types.h>
#include <rk_common.h>
#include "egg/math/eggVector.hpp"

namespace Item {

// Result codes for item collision detection
enum CollisionResult {
    COLLISION_NONE        = 0, // No collision detected
    COLLISION_COLLECT     = 1, // Player collected an item (e.g. item box)
    COLLISION_HIT         = 2, // Player was hit by an offensive item
    COLLISION_AVOID       = 3, // Player narrowly avoided an item
    COLLISION_BLOCKED     = 4, // Player blocked/deflected an item
};

// Collision type flags (derived from rlwinm/clrlwi bit extraction)
enum CollisionTypeFlag {
    COLLTYPE_SPHERE  = 0x01, // Sphere-sphere test
    COLLTYPE_AABB    = 0x02, // AABB test
    COLLTYPE_CAPSULE = 0x04, // Capsule test
};

// Hitbox group descriptor — one per collision shape on a player
struct HitboxGroup {
    u32 type;           // Collision type flags (bitfield)
    EGG::Vector3f pos;  // Center position of this hitbox group
    f32 radius;         // Radius for sphere checks (offset 0x8 in original)
    // Extended: for AABB, min/max are computed from pos ± radius
};

class PlayerSub18 {
public:
    // ========================================================================
    // Construction / Destruction
    // ========================================================================

    PlayerSub18();
    ~PlayerSub18();

    // ========================================================================
    // Main collision function
    // ========================================================================

    // Check whether the specified player collides with any active item.
    // Iterates the player's hitbox groups, loads the item object list,
    // and performs per-item overlap tests. Returns the collision result.
    // @addr 0x80574a64
    // @size 1560 bytes
    // @param playerId  Player index [0, MAX_PLAYER_COUNT)
    // @return CollisionResult indicating what happened
    CollisionResult checkItemCollision(u32 playerId);

    // ========================================================================
    // Initialization
    // ========================================================================

    // Initialize collision state, set default hitbox radii.
    void init();

    // ========================================================================
    // Collision mask
    // ========================================================================

    // Set which item types this player can collide with (bitfield).
    void setCollisionMask(u32 mask) { mCollisionMask = mask; }

    // Get the current collision mask.
    u32 getCollisionMask() const { return mCollisionMask; }

    // ========================================================================
    // Result query
    // ========================================================================

    // Return the last collision result type.
    CollisionResult getCollisionResult() const { return mLastResult; }

    // Clear collision state for next frame.
    void resetCollision();

    // ========================================================================
    // Geometry helpers
    // ========================================================================

    // Sphere-sphere intersection test.
    // @return true if the two spheres overlap or touch.
    static bool checkSphereOverlap(const EGG::Vector3f& posA, f32 radA,
                                    const EGG::Vector3f& posB, f32 radB);

    // AABB intersection test for extended hitbox shapes.
    // @param minA/maxA  Extents of box A
    // @param minB/maxB  Extents of box B
    // @return true if the two AABBs overlap.
    static bool checkAABBOverlap(const EGG::Vector3f& minA,
                                  const EGG::Vector3f& maxA,
                                  const EGG::Vector3f& minB,
                                  const EGG::Vector3f& maxB);

private:
    // Bitmask of item types this player can collide with
    u32 mCollisionMask;

    // Last frame's collision result
    CollisionResult mLastResult;

    // Number of hitbox groups on the player
    u32 mHitboxGroupCount;

    // Hitbox group data (simplified — original uses external arrays)
    static const u32 MAX_HITBOX_GROUPS = 4;
    HitboxGroup mHitboxGroups[MAX_HITBOX_GROUPS];
};

} // namespace Item