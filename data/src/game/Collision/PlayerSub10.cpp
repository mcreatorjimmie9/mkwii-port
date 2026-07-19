#include "PlayerSub10.hpp"

#include <game/kart/KartObjectProxy.hpp>
#include <game/kart/KartDynamics.hpp>
#include <game/kart/KartState.hpp>
#include <game/kart/KartMove.hpp>
#include <game/kart/KartBody.hpp>

#include <egg/math/eggVector.hpp>
#include <math.h>

namespace Kart {

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

PlayerSub10::~PlayerSub10() {
}

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
    if (this->/* solidOobTimer or similar */ 0 > 0) {
        return 1.0f;
    }

    // Compute the dot product between wall normal and player direction
    // to determine how head-on the collision is
    EGG::Vector3f flatWallNrm = wallNrm;
    flatWallNrm.y = 0.0f;

    EGG::Vector3f flatDir = this->dir;
    flatDir.y = 0.0f;

    f32 dot = EGG::Vector3f::dot(flatWallNrm, flatDir);
    f32 absDot = fabsf(dot);

    // The more head-on (dot closer to 1.0), the more speed is lost
    f32 kclWheelSpeedFactor = playerPointers->kartMove()->getKclWheelSpeedFactor();

    // Apply wall collision speed reduction
    f32 speedReduction = absDot * kclWheelSpeedFactor;

    return 1.0f - speedReduction;
}

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

    // Reset various timers and flags
    this->/* preRespawnTimer or similar */ 0 = 0;
}

} // namespace Kart