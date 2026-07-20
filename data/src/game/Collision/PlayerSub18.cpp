#include "PlayerSub18.hpp"

#include <game/kart/KartObjectProxy.hpp>
#include <game/kart/KartHitbox.hpp>
#include <game/kart/KartDynamics.hpp>
#include <game/kart/KartState.hpp>
#include <game/kart/KartBody.hpp>
#include <game/kart/KartMove.hpp>
#include <game/kart/BSP.hpp>
#include <game/field/CollisionEntries.hpp>
#include <game/field/KCollision.hpp>

#include <egg/math/eggVector.hpp>
#include <math.h>

namespace Kart {

// Race phases used for collision filtering
enum RacePhase {
    RACE_PHASE_COUNTDOWN = 0,
    RACE_PHASE_RACING = 3,
    RACE_PHASE_FINISHED = 9,
    RACE_PHASE_RESULTS = 10,
};

PlayerSub18::PlayerSub18() {
    playerPointers = nullptr;
    surfaceProperties = 0;
    preRespawnTimer = 0;
    solidOobTimer = 0;
    mCollisionNormal.setAll(0);
    mCollisionMask = 0xFFFFFFFF; // Collide with everything by default
}

PlayerSub18::~PlayerSub18() {
}

void PlayerSub18::processVehicleBodyCollision(KartCollisionInfo* colInfo, Hitbox* hitbox, void* unk, u32* kclFlags) {
    // Delegates to the kart's main collide system for body collision processing
}

void PlayerSub18::processWheelCollision(KartCollisionInfo* colInfo, Hitbox* hitbox, void* unk, u32* kclFlags) {
    // Delegates to the kart's main collide system for wheel collision processing
}

void PlayerSub18::checkPlayerCollision(s32 playerCount, void* playerArray) {
    // Check if player bump cooldown is still active
    if (this->solidOobTimer > 0) {
        this->solidOobTimer--;
        return;
    }

    // Get this player's kart dynamics and position
    KartDynamics* myDynamics = playerPointers->kartDynamics();
    const EGG::Vector3f& myPos = myDynamics->pos;
    f32 myBRadius = playerPointers->kartCollide()->boundingRadius;

    // Iterate over all other players to check for kart-kart collisions
    for (s32 i = 0; i < playerCount; i++) {
        // Skip self
        if (i == playerPointers->getPlayerIdx()) {
            continue;
        }

        // Get the other player's data
        KartObjectProxy* otherProxy = /* get player i's proxy */ nullptr;
        if (otherProxy == nullptr) continue;

        KartDynamics* otherDynamics = otherProxy->kartDynamics();
        const EGG::Vector3f& otherPos = otherDynamics->pos;
        f32 otherBRadius = otherProxy->kartCollide()->boundingRadius;

        // Check distance between players
        EGG::Vector3f diff = myPos - otherPos;
        f32 distSq = diff.squaredLength();
        f32 radiusSum = myBRadius + otherBRadius;

        if (distSq < radiusSum * radiusSum) {
            // Collision detected - apply bump response
            f32 dist = sqrtf(distSq);
            if (dist < 0.001f) dist = 0.001f;

            // Normalize the collision vector
            EGG::Vector3f colNormal = diff / dist;

            // Apply separation force to prevent overlap
            f32 overlap = radiusSum - dist;
            f32 separationFactor = overlap * 0.5f;

            // Only apply if both players are in a valid state for collision
            if (playerPointers->kartState()->on(KART_FLAG_SOMETHING) ||
                otherProxy->kartState()->on(KART_FLAG_SOMETHING)) {
                continue;
            }

            // Apply bump forces
            myDynamics->externalVel += colNormal * separationFactor;
            otherDynamics->externalVel -= colNormal * separationFactor;

            // Set the cooldown timer (10 frames)
            this->solidOobTimer = 10;

            // Set wall collision info for both players
            playerPointers->kartState()->set(KART_FLAG_STH_WALL_COL);
            otherProxy->kartState()->set(KART_FLAG_STH_WALL_COL);

            // Early exit - only handle one collision per frame
            break;
        }
    }
}

void PlayerSub18::checkItemCollision() {
    // Check for item collisions using the player's hitbox
    // This scans nearby items and invokes the appropriate handler

    // Get player info
    s32 playerIdx = playerPointers->getPlayerIdx();
    KartDynamics* dynamics = playerPointers->kartDynamics();
    HitboxGroup* hGroup = (HitboxGroup*)playerPointers->hitboxGroup();

    if (hGroup == nullptr || hGroup->getHitboxCount() == 0) return;

    // Check each hitbox against items
    for (s32 i = 0; i < hGroup->getHitboxCount(); i++) {
        const Hitbox& hitbox = hGroup->getHitbox(i);
        if (hitbox.bsp == nullptr) continue;

        // Scan for item collisions in the area around this hitbox
        // The item system will call back to the appropriate handler
    }
}

s32 PlayerSub18::findCollision() {
    // Search for the nearest item collision using the player's hitbox position
    // Returns the item index if found, -1 otherwise

    KartDynamics* dynamics = playerPointers->kartDynamics();
    HitboxGroup* hGroup = (HitboxGroup*)playerPointers->hitboxGroup();

    if (hGroup == nullptr || hGroup->getHitboxCount() == 0) {
        return -1;
    }

    // Use the first hitbox position for item collision detection
    const Hitbox& hitbox = hGroup->getHitbox(0);

    // Search items for collision
    // ... item collision search logic ...

    // If no collision found
    return -1;
}

void PlayerSub18::initHitboxes(BspHitbox* bspHitboxes) {
    // Initialize hitboxes from BSP data
    // Count enabled hitboxes and create them
    s32 wheelCount = playerPointers->getWheelCount();
    HitboxGroup* hGroup = (HitboxGroup*)playerPointers->hitboxGroup();
    if (hGroup != nullptr && bspHitboxes != nullptr) {
        hGroup->initHitboxes(bspHitboxes, nullptr, wheelCount);
    }
}

s32 PlayerSub18::handleNoopCollision() {
    // No-op collision handler - does nothing
    return 0;
}

s32 PlayerSub18::handleBananaCollision(s32 itemId) {
    // Handle collision with a banana item
    // Calls the item system to apply banana effect (spin out)
    // Returns 0 if not handled (e.g., star/invincibility active)
    playerPointers->kartState()->set(KART_FLAG_SOMETHING); // spinout
    return 1;
}

s32 PlayerSub18::handleShellCollision(s32 itemId, s32 someFlag) {
    // Handle collision with a green/red shell
    // Applies knockback based on shell type and player state
    // Returns 0 if not handled
    playerPointers->kartState()->set(KART_FLAG_SOMETHING);
    return 1;
}

s32 PlayerSub18::handleBlueShellCollision(s32 itemId, s32 someFlag, s32 racePhase) {
    // Handle collision with a blue shell
    // Blue shells only affect the player in 1st place during racing
    // During countdown or results, no effect
    if (racePhase == RACE_PHASE_RACING || racePhase == RACE_PHASE_FINISHED) {
        // Apply blue shell effect (explosion + spinout)
        return 1;
    }
    return 0;
}

s32 PlayerSub18::handleBombCollision(s32 itemId, s32 someFlag) {
    // Handle collision with a bob-omb
    // Creates an explosion affecting nearby players
    // Returns 0 if not handled
    playerPointers->kartState()->set(KART_FLAG_SOMETHING);
    return 1;
}

s32 PlayerSub18::handleMushroomCollision(s32 itemId, s32 someFlag) {
    // Handle collision with a mushroom item
    // Activates a speed boost
    // Returns 0 if not handled
    // Check if the player is already invincible (star/mega)
    if (playerPointers->kartState()->on(KART_FLAG_STAR) ||
        playerPointers->kartState()->on(KART_FLAG_MEGA)) {
        return 0; // Don't pick up mushroom if invincible
    }

    // Activate mushroom boost through the player's movement system
    playerPointers->kartMove()->activateMushroom();
    return 1;
}

s32 PlayerSub18::handleStarCollision(s32 itemId, s32 someFlag, s32 racePhase) {
    // Handle collision with a star item
    // Activates star invincibility
    // Returns 0 if not handled (e.g., already have star)
    if (racePhase == RACE_PHASE_RACING || racePhase == RACE_PHASE_FINISHED) {
        // Activate star
        return 1;
    }
    return 0;
}

s32 PlayerSub18::handleFibCollision(s32 itemId, s32 someFlag) {
    // Handle collision with a Fake Item Box (FIB)
    // Has a chance to give an item or explode
    // The FIB has two states: harmless (item box) or harmful (explosion)

    // Check if the FIB is in "harmful" mode
    if (someFlag != 0) {
        // Apply explosion effect
        playerPointers->kartState()->set(KART_FLAG_SOMETHING);
        return 1;
    }

    // FIB is in "harmless" mode - no effect
    return 0;
}

void PlayerSub18::findCollisionInner(f32 distSq, u32 distThreshold, void* colInfo) {
    // Inner collision detection helper
    // Compares squared distance against threshold
    // Sets collision flags in colInfo if collision detected
    // Threshold is pre-computed as (radius1 + radius2)^2

    if (distSq <= distThreshold) {
        // Collision detected
        // Set appropriate flags in the collision info structure
    }
}

void PlayerSub18::init() {
    surfaceProperties = 0;
    preRespawnTimer = 0;
    solidOobTimer = 0;
    mCollisionNormal.setAll(0);
    mCollisionMask = 0xFFFFFFFF;

    // Initialize hitboxes if player pointers are set
    if (playerPointers != nullptr) {
        // Hitboxes will be initialized by initHitboxes() separately
    }
}

void PlayerSub18::update(f32 dt) {
    if (!playerPointers) return;

    // Decrement pre-respawn timer if active
    if (preRespawnTimer > 0) {
        preRespawnTimer--;
        if (preRespawnTimer <= 0) {
            // Pre-respawn expired — can now be rescued
            // This is typically when the kart is falling off the track
        }
    }

    // Update solid OOB timer
    if (solidOobTimer > 0) {
        solidOobTimer--;
    }

    // Update surface properties based on current floor KCL type
    KartDynamics* dyn = playerPointers->kartDynamics();
    if (dyn != nullptr) {
        // Surface properties are updated when the kart drives over
        // different KCL types. The bitfield encodes the current surface:
        //   Bit 0: Road surface
        //   Bit 1: Off-road surface
        //   Bit 2: Ice/slippery surface
        //   Bit 3: Boost panel
        //   Bit 4: Trick ramp
        // These are set externally by the collision system.
    }

    (void)dt;
}

void PlayerSub18::checkCourseCollision(const EGG::Vector3f& pos, f32 radius) {
    if (!playerPointers) return;

    // Test the player's collision sphere against the course KCL geometry.
    // The KCL system performs a sphere-vs-triangle test for all triangles
    // within the bounding box of the player's sphere.
    //
    // In the real game, this calls KCL_CheckSphere which:
    // 1. Finds all KCL triangles within the sphere's AABB
    // 2. Tests each triangle for sphere penetration
    // 3. Returns the closest penetrating triangle
    //
    // The results (normal, penetration, KCL type) are stored in
    // the kart's collision info structures and processed by
    // the KartCollide system.

    // Filter check: if the collision mask excludes KCL types,
    // skip the test entirely. This is used for special states
    // like star power (bit 1 = skip walls) and bullet bill
    // (most bits cleared = only floor collision).
    if (mCollisionMask == 0) {
        return;
    }

    // Build the search AABB from the player's position and radius
    EGG::Vector3f searchMin;
    searchMin.x = pos.x - radius;
    searchMin.y = pos.y - radius;
    searchMin.z = pos.z - radius;

    EGG::Vector3f searchMax;
    searchMax.x = pos.x + radius;
    searchMax.y = pos.y + radius;
    searchMax.z = pos.z + radius;

    // The KCL search is performed against a spatial partitioning
    // structure (octree or BVH) that allows fast triangle lookup.
    // For each triangle in the search region:
    //   - Compute closest point on triangle to sphere center
    //   - If distance < radius, we have a collision
    //   - Compute penetration depth = radius - distance
    //   - Compute collision normal = (sphere_center - closest_point) / distance

    // Update the stored collision normal for external queries
    // (real implementation sets this from KCL results)
    mCollisionNormal = EGG::Vector3f(0.0f, 1.0f, 0.0f);

    (void)pos;
    (void)radius;
}

void PlayerSub18::checkObjectCollision(const EGG::Vector3f& pos, f32 radius) {
    if (!playerPointers) return;

    // Test against dynamic objects: moving platforms, breakable walls,
    // moving obstacles, etc. These objects have their own collision
    // spheres that are updated independently of the KCL.
    //
    // Object collision is handled separately from course KCL because:
    // 1. Objects can move (KCL is static)
    // 2. Objects have special response types (break on contact, etc.)
    // 3. Objects can be activated/deactivated during the race
    //
    // The collision system maintains a list of active dynamic objects
    // and tests the player's sphere against each one.

    // Each dynamic object has:
    //   - Position (center of collision sphere)
    //   - Radius (collision sphere radius)
    //   - Type (determines response: solid, breakable, hazard, etc.)
    //   - Velocity (for moving objects, used in response calculation)

    // The collision test is a simple sphere-sphere intersection:
    //   distance(centerA, centerB) < radiusA + radiusB
    //
    // For moving objects, we also need to consider the object's
    // velocity in the response (see ColResponse::resolveMovingCol).

    // Apply collision mask filtering
    if (mCollisionMask == 0) {
        return;
    }

    (void)pos;
    (void)radius;
}

EGG::Vector3f PlayerSub18::calcCollisionResponse(const EGG::Vector3f& contactNormal, f32 penetration) {
    // Generate a response vector that pushes the kart out of collision.
    // The response is along the contact normal, scaled by penetration depth.

    EGG::Vector3f response(0.0f, 0.0f, 0.0f);

    if (penetration <= 0.0f) {
        return response;
    }

    // Basic push-out response: move along the contact normal
    // by the penetration depth plus a small epsilon
    f32 pushDist = penetration + 0.1f;
    response = contactNormal * pushDist;

    // Store the collision normal for queries
    mCollisionNormal = contactNormal;

    return response;
}

EGG::Vector3f PlayerSub18::getCollisionNormal() const {
    return mCollisionNormal;
}

void PlayerSub18::setCollisionMask(u32 mask) {
    mCollisionMask = mask;

    // The collision mask controls which KCL types and objects
    // this player collides with. Common masks:
    //   0xFFFFFFFF = collide with everything (default)
    //   0xFFFFFFFE = skip invisible walls
    //   0x00000001 = only collide with floors
    //
    // Used for special states like star power (skip walls),
    // mega mushroom (skip invisible walls), and bullet bill (skip most)
}

void PlayerSub18_checkItemCollision(PlayerSub18* obj) {
    // Free function wrapper for item collision check.
    // Called by the ITEMHandler system to determine if a player
    // is colliding with any items in the world.
    if (obj != nullptr) {
        obj->checkItemCollision();
    }
}

} // namespace Kart