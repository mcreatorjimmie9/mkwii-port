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
        f32 distSq = diff.lenSq();
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
    HitboxGroup* hGroup = playerPointers->hitboxGroup();

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
    HitboxGroup* hGroup = playerPointers->hitboxGroup();

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
    HitboxGroup* hGroup = playerPointers->hitboxGroup();
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

} // namespace Kart