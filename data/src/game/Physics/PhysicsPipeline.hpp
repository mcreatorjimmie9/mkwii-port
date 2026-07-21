#pragma once
// PhysicsPipeline.hpp — MKWii-faithful physics integration pipeline
//
// This module connects the port's PlayerPhysics (stat-based coordinator) with
// KartDynamics (rigid body engine from decompiled code) in a way faithful to
// the original MKWii architecture.
//
// In the original MKWii:
//   PlayerSub10::update() computes vehicleSpeed, boost, drift state
//     → writes vehicleSpeed to KartDynamics.internalVel
//     → collision system writes forces/torques to KartDynamics
//     → KartDynamics::calc() integrates all velocity components into position
//
// In the port:
//   PlayerPhysics computes speed/acceleration/handling stats
//     → PhysicsPipeline syncs results to KartDynamics
//     → KartDynamics::calc() handles rigid body integration
//
// Data flow:
//   PlayerPhysics::update(dt)
//     → extract speed, position, yaw
//     → PhysicsPipeline::syncToDynamics()
//       → dynamics->internalVel = forward * speed
//       → dynamics->pos = physics position
//       → dynamics->mainRot = yaw quaternion
//     → KartDynamics::calc(dt, maxSpeed, air)
//       → final pos, rot computed
//     → PhysicsPipeline::syncFromDynamics()
//       → update PlayerPhysics frame position from dynamics result

#include "PlayerPhysics.hpp"
#include "Collision/KartDynamics.hpp"
#include "rk_types.h"

namespace PhysicsPipeline {

// =============================================================================
// syncToDynamics — Write PlayerPhysics output into KartDynamics
//
// This mirrors what PlayerSub10::updateVehicleRotationVector() does in the
// original game: it takes the computed vehicleSpeed and direction and writes
// them into the KartDynamics fields before calc() is called.
// =============================================================================
inline void syncToDynamics(PlayerPhysics* pp, Kart::KartDynamicsKart* dyn) {
    if (!pp || !dyn) return;

    // 1. Write internal velocity from PlayerPhysics speed
    // In MKWii, PlayerSub10 writes vehicleSpeed to KartDynamics.internalVel
    // as a vector in the kart's forward direction.
    f32 speed = pp->getSpeed();
    f32 yaw = pp->getYawRad();

    // Forward direction from yaw (yaw = rotation around Y axis)
    EGG::Vector3f forward(std::sin(yaw), 0.0f, std::cos(yaw));

    // internalVel = vehicleSpeed * forward direction
    // This is the "engine power" velocity component
    dyn->internalVel.x = forward.x * speed;
    dyn->internalVel.y = 0.0f;
    dyn->internalVel.z = forward.z * speed;

    // 2. Set position from PlayerPhysics
    dyn->pos.x = pp->getFramePosX();
    dyn->pos.y = pp->getFramePosY();
    dyn->pos.z = pp->getFramePosZ();

    // 3. Set rotation quaternion from yaw
    // KartDynamics uses mainRot quaternion; yaw quaternion = (0, sin(y/2)*Y, cos(y/2))
    // In MKWii, mainRot represents the kart's primary orientation
    f32 halfYaw = yaw * 0.5f;
    dyn->mainRot.x = 0.0f;
    dyn->mainRot.y = std::sin(halfYaw);
    dyn->mainRot.z = 0.0f;
    dyn->mainRot.w = std::cos(halfYaw);

    // 4. Reset accumulated forces from previous frame
    // (calc() will also clear them, but we ensure clean state)
    // Don't clear totalForce here — collision system may have added forces

    // 5. Set gravity (MKWii default: -1.0, scaled by mass in calc)
    // PlayerPhysics handles gravity internally; KartDynamics applies it
    // if noGravity is false
    dyn->noGravity = false;
}

// =============================================================================
// syncFromDynamics — Read KartDynamics result back into PlayerPhysics
//
// After KartDynamics::calc() runs, the final position and rotation are in
// the dynamics object. We read them back so PlayerPhysics's frame position
// stays in sync with the rigid body result.
// =============================================================================
inline void syncFromDynamics(Kart::KartDynamicsKart* dyn, PlayerPhysics* pp) {
    if (!pp || !dyn) return;

    // 1. Update frame position from dynamics result
    pp->setFramePosition(dyn->pos.x, dyn->pos.y, dyn->pos.z);

    // 2. Extract yaw from mainRot quaternion
    // For a pure yaw rotation: yaw = 2 * atan2(mainRot.y, mainRot.w)
    f32 yawRad = 2.0f * std::atan2(dyn->mainRot.y, dyn->mainRot.w);

    // 3. Update speed from dynamics speedNorm
    // KartDynamics::calc() computes speedNorm which is the total speed
    // including all velocity components. Use this as the authoritative speed.
    // PlayerPhysics speed is overwritten by dynamics result.

    // Note: We update yawRad but not speed directly through the setter
    // because PlayerPhysics doesn't have a setSpeed() — speed is computed
    // internally. Instead, we update the frame position which is the
    // primary output used for rendering.
    (void)yawRad; // Yaw is read from dynamics but PP manages its own yaw
}

// =============================================================================
// applyCollisionForces — Bridge collision results to KartDynamics
//
// In MKWii, KartCollide::processFloor() calls KartDynamics::applySuspensionWrench()
// and applyWrenchScaled() to add contact forces/torques. This function provides
// a simplified version that applies the most important collision effects:
//   - Floor normal force (prevents falling through ground)
//   - Wall bounce (reflects velocity component)
//   - Off-road friction (reduces speed)
// =============================================================================
inline void applyCollisionForces(
    Kart::KartDynamicsKart* dyn,
    bool hasFloor, bool offroad, bool boostPad, bool wallHit,
    f32 wallNX, f32 wallNZ) {

    if (!dyn) return;

    // 1. Floor contact: apply upward normal force
    // In MKWii, WheelPhysicsHolder::applySuspensions() does this per-wheel
    // We approximate with a single vertical support force
    if (hasFloor) {
        // Normal force to counteract gravity
        f32 gravityForce = dyn->gravity * dyn->mass;
        dyn->addForce(EGG::Vector3f(0.0f, -gravityForce, 0.0f));
    } else {
        // Airborne: no ground support, gravity pulls kart down
        // This is handled by calc() when noGravity is false
    }

    // 2. Wall collision: apply bounce force
    if (wallHit) {
        // Compute wall normal (horizontal, normalized)
        f32 wallLenSq = wallNX * wallNX + wallNZ * wallNZ;
        if (wallLenSq > 0.001f) {
            f32 wallLen = sqrtf(wallLenSq);
            f32 wnx = wallNX / wallLen;
            f32 wnz = wallNZ / wallLen;

            // Reflect velocity component along wall normal
            // In MKWii, KartCollide::processWall() modifies speed directly
            f32 velDotWall = dyn->externalVel.x * wnx + dyn->externalVel.z * wnz;
            if (velDotWall < 0.0f) {
                // Remove inward velocity component (bounce)
                dyn->externalVel.x -= wnx * velDotWall * 1.5f;
                dyn->externalVel.z -= wnz * velDotWall * 1.5f;
            }

            // Add small outward push force
            f32 pushForce = 200.0f;
            dyn->addForce(EGG::Vector3f(wnx * pushForce, 0.0f, wnz * pushForce));
        }
    }

    // 3. Off-road: apply friction force opposing motion
    if (offroad) {
        // In MKWii, off-road applies a speed multiplier through KCL factors
        // Here we add a drag force to slow the kart
        f32 offroadDrag = 0.0005f;
        dyn->applyAirDrag(offroadDrag);
    }

    // 4. Boost pad: apply forward force boost
    if (boostPad) {
        // Apply a strong forward force from the boost pad
        EGG::Vector3f boostForce(0.0f, 0.0f, 1.0f);
        dyn->applyEngineForce(80000.0f, boostForce);
    }
}

// =============================================================================
// fullPhysicsStep — Complete per-frame physics update
//
// This is the top-level function that orchestrates the full MKWii physics
// pipeline for one frame. It should be called once per frame for each player.
//
// Pipeline:
//   1. Feed input to PlayerPhysics
//   2. PlayerPhysics::update(dt) — stat-based physics
//   3. Sync PP output → KartDynamics
//   4. Apply collision forces to KartDynamics
//   5. KartDynamics::calc(dt, maxSpeed, air) — rigid body integration
//   6. Sync KartDynamics result → PlayerPhysics (for rendering)
//   7. Extract final position/speed for game logic
// =============================================================================
inline void fullPhysicsStep(
    PlayerPhysics* pp,
    Kart::KartDynamicsKart* dyn,
    // Input
    f32 accelInput, f32 steerInput, f32 brakeInput,
    // Collision state
    bool hasFloor, bool offroad, bool boostPad, bool wallHit,
    f32 wallNX, f32 wallNZ,
    // Timing
    f32 dt,
    // Output (filled by this function)
    f32& outPosX, f32& outPosY, f32& outPosZ,
    f32& outYawDeg, f32& outSpeed) {

    if (!pp) return;

    // 1. Feed input to PlayerPhysics
    pp->setAccelInput(accelInput);
    pp->setSteerInput(steerInput);
    pp->setBrakeInput(brakeInput);

    // 2. Set collision flags
    pp->setFloorCollision(hasFloor);
    pp->setOffroad(offroad);
    if (boostPad) pp->setBoostPad(true);
    if (wallHit) pp->setWallCollision(true);

    // 3. Run PlayerPhysics stat-based update
    pp->update(dt);

    // 4. If KartDynamics is available, use the full pipeline
    if (dyn) {
        // Sync PlayerPhysics output → KartDynamics
        syncToDynamics(pp, dyn);

        // Apply collision forces
        applyCollisionForces(dyn, hasFloor, offroad, boostPad,
                             wallHit, wallNX, wallNZ);

        // Determine if airborne
        s32 air = hasFloor ? 0 : 1;

        // Run KartDynamics rigid body integration
        f32 maxSpeed = pp->getEffectiveSpeed() > 0.0f ?
                       pp->getEffectiveSpeed() : 3000.0f;
        dyn->calc(dt, maxSpeed, air);

        // Read back results
        outPosX = dyn->pos.x;
        outPosY = dyn->pos.y;
        outPosZ = dyn->pos.z;
        outSpeed = dyn->speedNorm;

        // Extract yaw from quaternion
        f32 yawRad = 2.0f * std::atan2(dyn->mainRot.y, dyn->mainRot.w);
        outYawDeg = EGG::RadToDeg(yawRad);

        // Sync back to PlayerPhysics for rendering consistency
        syncFromDynamics(dyn, pp);
    } else {
        // Fallback: read directly from PlayerPhysics
        outPosX = pp->getFramePosX();
        outPosY = pp->getFramePosY();
        outPosZ = pp->getFramePosZ();
        outYawDeg = EGG::RadToDeg(pp->getYawRad());
        outSpeed = pp->getSpeed();
    }
}

} // namespace PhysicsPipeline
