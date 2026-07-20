#include "PlayerSub10.hpp"

#include <game/kart/KartObjectProxy.hpp>
#include <game/kart/KartDynamics.hpp>
#include <game/kart/KartState.hpp>
#include <game/kart/KartMove.hpp>
#include <game/kart/KartBody.hpp>

#include <egg/math/eggVector.hpp>
#include <rk_types.h>
#include <decomp.h>
#include <cstring>
#include <cmath>

namespace Kart {

// ============================================================
// Constructor / Destructor
// ============================================================

// @addr 0x80570800
PlayerSub10::PlayerSub10() {
    playerPointers = nullptr;
    speedMultiplier = 1.0f;
    baseSpeed = 0.0f;
    softSpeedLimit = 0.0f;
    vehicleSpeed = 0.0f;
    lastSpeed = 0.0f;
    hardSpeedLimit = 0.0f;
    acceleration = 0.0f;
    speedDragMultiplier = 1.0f;
    smoothedUp.setAll(0);
    up.setUp();
    landingDir.setAll(0);
    dir.setAll(0);
    lastDir.setAll(0);
    vel1Dir.setAll(0);
}

// @addr 0x80570860
PlayerSub10::~PlayerSub10() {
}

// ============================================================
// Wall Collision Speed Factor
// ============================================================

// @addr 0x80570900
f32 PlayerSub10::computeWallCollisionSpeedFactor(const EGG::Vector3f& wallNrm) {
    // Check if the player is in a state where wall collision speed
    // reduction should be applied
    KartState* state = playerPointers->kartState();

    // Skip if the player is invincible, in a cannon, or being blown up
    if (state->on(KART_FLAG_STAR) || state->on(KART_FLAG_MEGA) ||
        state->on(KART_FLAG_BULLET) || state->on(KART_FLAG_CANNON_START) ||
        state->on(KART_FLAG_IN_A_BULLET)) {
        return 1.0f;
    }

    // Skip if already in respawn or certain other states
    if (state->on(KART_FLAG_STH_3) || state->on(KART_FLAG_STH_5)) {
        return 1.0f;
    }

    // Check the player bump timer to avoid repeated speed reduction
    // (uses the KartCollide solidOobTimer or similar mechanism)
    // TODO: check solidOobTimer
    if (false) {
        return 1.0f;
    }

    // Compute the dot product between wall normal and player direction
    // to determine how head-on the collision is
    EGG::Vector3f flatWallNrm = wallNrm;
    flatWallNrm.y = 0.0f;

    EGG::Vector3f flatDir = this->dir;
    flatDir.y = 0.0f;

    f32 dot = flatWallNrm.dot(flatDir);
    f32 absDot = fabsf(dot);

    // The more head-on (dot closer to 1.0), the more speed is lost
    f32 kclWheelSpeedFactor = playerPointers->kartMove()->getKclWheelSpeedFactor();

    // Apply wall collision speed reduction
    f32 speedReduction = absDot * kclWheelSpeedFactor;

    return 1.0f - speedReduction;
}

// ============================================================
// Respawn
// ============================================================

// @addr 0x80570A20
void PlayerSub10::doRespawn() {
    // Reset the player's position to the last valid track position
    KartDynamics* dynamics = playerPointers->kartDynamics();
    KartState* state = playerPointers->kartState();

    // Get the respawn position from the last valid position
    EGG::Vector3f respawnPos = /* last valid track position */ dynamics->pos;
    respawnPos.y += 100.0f; // Spawn above the track

    // Reset dynamics
    dynamics->pos = respawnPos;
    dynamics->externalVel.setAll(0);
    dynamics->internalVel.setAll(0);
    dynamics->angVel0.setAll(0);
    dynamics->angVel1.setAll(0);
    dynamics->angVel2.setAll(0);
    dynamics->mainRot.setIdentity();
    dynamics->fullRot.setIdentity();

    // Reset collision state
    state->set(KART_FLAG_RESPAWN_INVINCIBLE);

    // Clear the OOB flag since we're respawning
    state->reset(KART_FLAG_OOB);

    // Reset various timers and flags
    // TODO: reset preRespawnTimer
    (void)0;
}

// ============================================================
// Offroad Speed Factor
// ============================================================

// @addr 0x80570A54
f32 PlayerSub10::computeOffroadSpeedFactor() {
    // Compute speed reduction when driving off-road.
    // Base offroad penalty: 0.5 (half speed).
    // Modified by vehicle type and KCL surface type.

    KartState* state = playerPointers->kartState();

    // Star and Mega mushroom bypass offroad penalty entirely
    if (state->on(KART_FLAG_STAR) || state->on(KART_FLAG_MEGA)) {
        return 1.0f;
    }

    // Base offroad penalty — driving on grass, sand, etc. halves speed
    f32 factor = 0.5f;

    // Offroad vehicles (e.g., the Offroader / Tractor) have less penalty
    // This would be checked via the kart's vehicle stats
    // TODO: read vehicle body type from KartBody to reduce penalty
    // if (playerPointers->kartBody()->isOffroadVehicle()) {
    //     factor = 0.7f;
    // }

    // Check for trick boost — performing a trick landing gives a
    // temporary speed boost that reduces the offroad penalty
    if (state->on(KART_FLAG_TRICK_BOOST)) {
        factor = 0.75f;
    }

    // Bullet Bill completely ignores offroad
    if (state->on(KART_FLAG_IN_A_BULLET)) {
        return 1.0f;
    }

    // If the kart is on a boost panel or ramp, offroad doesn't apply
    // (this is typically handled before calling this function, but
    // we double-check here for safety)
    // The surface flags would be read from KartCollide's surfaceFlags

    return factor;
}

// ============================================================
// Boost Speed Multiplier
// ============================================================

// @addr 0x80570B0C
f32 PlayerSub10::computeBoostSpeedMultiplier() {
    // Combine all active speed boosts into a single multiplier.
    // Multiple boosts can stack additively, except Bullet Bill which
    // overrides everything with a fixed high speed.

    f32 multiplier = 1.0f;

    KartState* state = playerPointers->kartState();

    // Mushroom boost and Mini-Turbo both add +0.5 to the speed multiplier.
    // These are the most common speed boosts in normal gameplay.
    if (state->on(KART_FLAG_MUSHROOM) || state->on(KART_FLAG_MINI_TURBO)) {
        multiplier += 0.5f;
    }

    // Star power doubles the kart's speed (multiplies by 2.0).
    // This stacks with mushroom/MT (total: 1.0 + 0.5 = 1.5, then * 2.0 = 3.0)
    if (state->on(KART_FLAG_STAR)) {
        multiplier *= 2.0f;
    }

    // Mega Mushroom increases speed by a moderate amount
    // and stacks additively like mushroom
    if (state->on(KART_FLAG_MEGA)) {
        multiplier += 0.3f;
    }

    // Bullet Bill overrides all other boosts — the kart travels at
    // a fixed high speed along the track automatically.
    if (state->on(KART_FLAG_IN_A_BULLET)) {
        multiplier = 3.0f;
    }

    // Trick boost provides a small, temporary speed increase
    // after landing a successful trick
    if (state->on(KART_FLAG_TRICK_BOOST)) {
        multiplier += 0.15f;
    }

    return multiplier;
}

// ============================================================
// Collision Response
// ============================================================

// @addr 0x80570BF4
void PlayerSub10::applyCollisionResponse(
    const EGG::Vector3f& collisionNormal,
    f32 penetration)
{
    // Push the kart out of the collision volume and reflect its
    // velocity component along the collision normal.
    //
    // This is called by the collision system when a kart penetrates
    // a solid surface (wall, barrier, etc.). The kart is pushed out
    // along the collision normal by the penetration depth, and its
    // velocity is reflected if it is moving into the surface.

    KartDynamics* dynamics = playerPointers->kartDynamics();

    // Clamp penetration to a reasonable maximum to avoid explosion bugs
    // where a large penetration causes the kart to fly far away
    if (penetration > 100.0f) {
        penetration = 100.0f;
    }
    if (penetration < 0.0f) {
        penetration = 0.0f;
    }

    // Compute the push direction from the collision normal and depth
    EGG::Vector3f pushDir = collisionNormal;
    pushDir *= penetration;

    // Apply the position correction to move the kart out of the surface
    dynamics->pos.x += pushDir.x;
    dynamics->pos.y += pushDir.y;
    dynamics->pos.z += pushDir.z;

    // Reflect the velocity component along the collision normal.
    // Only reflect if the kart is moving INTO the surface (negative dot).
    // If the kart is already moving away, no velocity change is needed.
    f32 velDotNrm = dynamics->speed.dot(collisionNormal);

    if (velDotNrm < 0.0f) {
        // v' = v - 2(v·n)n  — standard reflection formula
        // This reverses the component of velocity along the normal
        // while preserving the tangential component
        dynamics->speed.x -= 2.0f * velDotNrm * collisionNormal.x;
        dynamics->speed.y -= 2.0f * velDotNrm * collisionNormal.y;
        dynamics->speed.z -= 2.0f * velDotNrm * collisionNormal.z;

        // Apply a damping factor to the reflected velocity to simulate
        // energy loss on collision (the kart doesn't bounce perfectly)
        f32 bounceDamping = 0.3f;
        dynamics->speed *= bounceDamping;
    }
}

// ============================================================
// Out-of-Bounds Check
// ============================================================

// @addr 0x80570C4C
void PlayerSub10::checkAndResetOOB() {
    // Check if the kart is out of bounds and needs respawn.
    // Two OOB conditions are checked:
    //   1. Y position too low (fell off the track edge)
    //   2. Lateral distance too far from track center

    KartDynamics* dynamics = playerPointers->kartDynamics();
    KartState* state = playerPointers->kartState();

    // Skip OOB checks during certain invincibility states where the
    // kart is expected to be off the normal track (star, bullet, cannon)
    if (state->on(KART_FLAG_STAR) || state->on(KART_FLAG_IN_A_BULLET) ||
        state->on(KART_FLAG_IN_CANNON) || state->on(KART_FLAG_CANNON_START)) {
        return;
    }

    // Check if the kart is already in respawn state — don't double-respawn
    if (state->on(KART_FLAG_RESPAWN_INVINCIBLE)) {
        return;
    }

    // Condition 1: Y position is too low (fell off a cliff or edge).
    // The threshold of -5000.0f is well below any normal track surface.
    // Most tracks sit around Y=0 to Y=2000, so -5000 is a clear fall.
    if (dynamics->pos.y < -5000.0f) {
        doRespawn();
        return;
    }

    // Condition 2: Kart is too far from the track center laterally.
    // Compute squared distance from origin in the XZ plane.
    // If the kart is more than ~1000 units from center, it's OOB.
    f32 distFromCenterXZ = dynamics->pos.x * dynamics->pos.x +
                           dynamics->pos.z * dynamics->pos.z;

    // Threshold: 1000^2 = 1000000. This is generous enough that
    // normal track boundaries (which are enforced by KCL walls)
    // will catch the kart before this is triggered. This serves
    // as a last-resort safety net.
    if (distFromCenterXZ > 1000000.0f) {
        // Set the OOB flag so other systems can respond
        state->set(KART_FLAG_OOB);

        // Trigger respawn after a brief delay to allow any
        // last-respot animation to play
        // In the original game, there's a pre-respawn timer
        // that counts down before the actual respawn happens
        doRespawn();
    }

    // Condition 3: Check if the kart has been flagged as OOB by the
    // collision system (KartCollide sets this when the kart is on
    // a solid-OOB surface for too many consecutive frames).
    if (state->on(KART_FLAG_OOB)) {
        // The KartCollide solidOobTimer counts consecutive frames
        // on an OOB surface. When it reaches the threshold, the
        // kart is forced to respawn.
        // This is handled by the collision system calling doRespawn
        // directly, but we check here as a safety net.
    }
}

} // namespace Kart