#include "PlayerSub10.hpp"

// ============================================================================
// PlayerSub10 — Core Update Chain
// Addresses 0x80577fc4 - 0x8057c3d4
// ============================================================================

// NOTE: Many sub-calls here are to external systems (collision, KCL, input,
// sound, effects). These are represented as extern function stubs that will
// be resolved when those modules are reconstructed.

extern "C" {
// Collision / KCL query system — gets surface info
void* sub_getKclInfo(void* p);                           // 0x8059040c
void* sub_getKclVehicleType(void* p);                    // 0x805908b4
void  sub_getKclGravity(void* p);                        // 0x80590a50
void* sub_getPhysicsInput(void* p);                      // 0x80590a9c
void  sub_getScale(void* p);                             // 0x805907d4
void  sub_setScale(void* p, f32);                        // 0x805907a4
void  sub_setEffect(void* p, s32);                       // 0x805907f0
void  sub_playBoostSound(void* p, s32);                  // 0x80708a6c
void  sub_playStartBoostSound(void* p);                  // 0x80708c08
void  sub_getRumble(void* p, s32);                       // 0x806a5d24
void  sub_setRumble(void* p, s32);                       // 0x806a5ea0
void  sub_setSoundAttr(void* p, s32, u32, u32);          // 0x80591084
void  sub_setSoundAttr2(void* p, s32, u32, u32);         // 0x8059045c
void  sub_triggerSound(void* p, s32);                    // 0x80590a80
void  sub_eggVec3Normalize(EGG::Vector3f* out, const EGG::Vector3f* in); // 0x80555bf4
void  sub_eggVec3Cross(EGG::Vector3f* out, const EGG::Vector3f* a, const EGG::Vector3f* b); // 0x805aa328
void  sub_eggVec3Dot(f32* out, const EGG::Vector3f* a, const EGG::Vector3f* b); // 0x805aa4c4
void  sub_setSound2(void* p, s32);                       // 0x807cbb5c
void  sub_getInputState(void* p, s32);                   // 0x80590aac
void  sub_setSound3(void* p, s32);                       // 0x807be818
void  sub_playSoundId(void* p, s32);                     // 0x80591800
void  sub_getBodyInfo(void* p);                          // 0x8059148c
void  sub_setMegaScale(void* p, f32);                    // 0x80598378
void* sub_getRacerInfo(void* p);                         // 0x8059088c
void* sub_getHitboxGroup(void* p);                       // 0x805b4f48
void* sub_getEffectGroup(void* p);                       // 0x805b4e74
void* sub_getEffectGroup2(void* p);                      // 0x805b4e40
void* sub_getEffectGroup3(void* p);                      // 0x805b4ff8
void  sub_updateScaleAnim(void* p, f32);                 // 0x805916a4
void  sub_playEffectSound(void* p, s32);                 // 0x805b4d94
void  sub_clearInk(void* p);                              // 0x80795f64
void  sub_playCrushSound(void* p, s32);                  // 0x807960a0
void  sub_playMegaSound(void* p, s32);                   // 0x806acf84
void  sub_playEffectSound2(void* p, s32);                // 0x80796288
void  sub_playItemSound(void* p, s32);                   // 0x8070ec70
void  sub_clearAnim(void* p, s32);                       // 0x805917c4
void  sub_updateInvisibility(void* p);                   // 0x80595cf4
void  sub_tryStartWheelie(void* p);                      // 0x80590d60
void  sub_endDriftEffect(void* p);                       // 0x80590d9c
void  sub_getSpeed(void* p);                             // 0x806a320
void  sub_startEffect(void* p, s32, u32, u32);           // 0x8059148c → 0x805e7f4
void  sub_initWheelie(void* p);                          // 0x80590e80
void  sub_getStickyRoad(void* p);                        // 0x8059032c
void  sub_getAirState(void* p);                          // 0x805903ec
void  sub_getDriftDir(void* p);                          // 0x80590a80
void  sub_playSoundAttr(void* p, s32);                   // 0x80590a9c
void  sub_clearStatus(void* p);                          // 0x80590a9c
void  sub_eggVec3Lerp(EGG::Vector3f* out, const EGG::Vector3f* a, const EGG::Vector3f* b, f32 t); // 0x805aa50c
void  sub_getTurnInput(void* p);                         // 0x80590acc
void  sub_startSquishSound(void* p, s32);                // 0x80591834
void  sub_getScaleAnim(void* p, s32, s32);               // 0x805910cc
void  sub_endSquishSound(void* p, s32);                  // 0x8056c7e4
void  sub_startSquishEffect(void* p, s32);               // 0x8056c7d4
void  sub_getNoInputSquish(void* p, s32);                // 0x80591498
} // extern "C"

// PlayerSub10::PlayerSub10() moved to PlayerSub10.cpp

// PlayerSub10::init() moved to PlayerSub10.cpp
/* void PlayerSub10::init(bool isBike, bool isRemote) {
    // Call sub_0x0005e018 — base init

    // Read vehicle parameter from global
    // baseSpeed = param->speed * speedMultiplier
    // Store to vehicleSpeed (0x020), lastSpeed (0x024), hardSpeedLimit (0x02C)

    // Set acceleration from vehicle params
    // speedDragMultiplier from vehicle params

    // Initialize direction vectors to (1,0,0), (0,1,0), (0,0,1) identities
    // smoothedUp = up = landingDir = dir = lastDir = vel1Dir = {0,1,0}
    // hasLandingDir = false
    // outsideDriftAngle = 0, landingAngle = 0
    // outsideDriftLastDir = {0,0,0}
    // speedRatioCapped = 0, speedRatio = 0
    // kclSpeedFactor = 0, kclRotFactor = 0
    // kclWheelSpeedFactor = 0, kclWheelRotFactor = 0

    if (!isRemote) {
        // Zero drift-related state
        floorCollisionCount = 0;
        hopStickX = 0;
        hopFrame = 0;
        hopUp = {0, 1, 0};
        hopDir = {0, 1, 0};
        slipstreamCharge = 0;
        // _0F0 = 0
        divingRot = 0;
        boostRot = 0;
        driftState = 0;
        mtCharge = 0;
        smtCharge = 0;
        mtBoost = 0;
        outsideDriftBonus = 0;

        // Initialize boost (PlayerBoost at 0x108)
        // boost.reset() or similar

        // Zero more fields
        offroadInvincibilityFrames = 0;
        ssmtCharge = 0;
        effectiveTurn = 0;
        conservedTurn = 0;
        scale = {1, 1, 1};
        someScale = 1.0f;
        shockSpeedMultiplier = 1.0f;
        megaScale = 1.0f;
        mushroomBoost2 = 0;
        starTimer = 0;
        shockTimer = 0;
        blooperCharacterInk = 0;
        field_0x190 = 0;
        crushTimer = 0;
        MegaTimer = 0;
        _196 = 0;

        // JumpPadProperties from vehicle param
        jumpPadMinSpeed = 0;
        jumpPadMaxSpeed = 0;
        rampBoost = 0;

        // Hop physics
        hopVelY = 0;
        hopPosY = 0;
        hopGravity = 0;

        // Driving state
        drivingDirection = 0;
        backwardsAllowCounter = 0;
        specialFloor = 0;

        // Create sub-objects
        // trick = new PlayerTrick (or PlayerTrickBike);
        // zipper = new PlayerZipper;

        // rawTurn = 0
        // ghostVanishTimer = 0
    }

    // Read global CC-class specific gravity
    // Store to some field

    // Call sub_0x0005e67c (some post-init setup)
} */

// ============================================================================
// update()
// 0x805788dc (4304 bytes — MAIN TICK FUNCTION)
// ============================================================================
// This is the primary per-frame update. It orchestrates the entire physics
// pipeline: state checks, input processing, speed/rotation updates, drift
// management, boost processing, status effects, and scale updates.
//
// Due to the massive size (4304 bytes, 1076 instructions), this function
// is reconstructed at a high level with inline comments describing the
// decompiled control flow. The full low-level reconstruction requires
// resolving ~35 external call targets.
// ============================================================================
void PlayerSub10::update() {
    // sub_0x00063358(); // Stack canary check

    // Check if player is in "playerIndex locked" state
    // Read flags from playerState->flags bit 18
    // If not locked: call sub_0x000671b4 (global system update)
    //   call sub_0x0005e200 (get some state)
    //   Set global flag = 1
    //   goto main_update_body
    //
    // If locked:
    //   sub_0x0006db70(); // zero vec3
    //   Zero fields at 0x14C-0x154 (some position)
    //   goto main_update_body
    //
    // main_update_body:
    //   Reset some flags
    //   Update driving direction (backwards detection)
    //   Update airtime tracking
    //   Update sticky road
    //   Update slipstream
    //   Update special floor state
    //   updateHopAndSlipdrift()
    //   If not bullet bill:
    //     Check respawn state
    //     updateTurn()
    //     updateVehicleSpeed()
    //     updateAcceleration()
    //     updateOffroad()
    //     applyWheelSlipToSpeed()
    //     updateRotation()
    //     updateStandstillBoostRot()
    //     updateUps()
    //     updateVehicleRotationVector()
    //     If not airborne:
    //       updateManualDrift() or updateAutoDrift()
    //     Else:
    //       updateUpsWhileAirborne()
    //   Else:
    //     Bullet bill path logic
    //
    //   updateBoost()
    //   updateDir()
    //   updateVehicleRotationVector() — apply rotation
    //   updatePlayerScale()
    //   Update sub-objects (trick, zipper)
    //   updateDiving()
    //   updateStickyRoad()
    //   tryEndJumpPad()
    //   Update drivingDirection from speed
    //   Update hitbox scale from someScale
    //
    //   // Status effect ticks
    //   updateStar()
    //   updateMega()
    //   updateCrush()
    //   updateInvincibility()
    //   updateSquish()
    //   updateInk()
    //
    //   // Store lastSpeed for next frame
    //   lastSpeed = vehicleSpeed;
    //
    //   // Sync KartPhysics pose
    //   sub_0x0006db70(); // get some physics data
    //   Store to some position fields
}

// ============================================================================
// updateDir()
// 0x8057a140 (1908 bytes)
// ============================================================================
// Updates the vehicle's forward direction vector based on the current
// rotation matrix and KCL surface normal. Handles landing direction
// blending, wall collision direction correction, and smoothing.
// ============================================================================
void PlayerSub10::updateDir() {
    // Get KCL surface info at 0xF0
    // Get the rotation matrix from KartPhysics
    // Compute forward direction from pose
    // If airborne or special conditions:
    //   dir = rotated forward direction
    // Else:
    //   Blend dir with surface-aligned direction
    //   Use KCL normal and speed to compute projected direction
    //   Cross product to get perpendicular component
    //   Clamp direction change rate

    // Store normalized direction to this->dir
    // Update lastDir
}

// ============================================================================
// updateTurn()
// 0x8057a8b4 (692 bytes, virtual)
// ============================================================================
// Reads stick input, applies turn rate modifiers (drift, offroad, etc.),
// and computes effectiveTurn. Virtual — bike override adds wheelie logic.
// ============================================================================
// PlayerSub10::updateTurn() moved to PlayerSub10.cpp
/*
    // updateTurn: moved to PlayerSub10.cpp
    // 0x8057a8b4 — steer processing
*/

// ============================================================================
// updateVehicleSpeed()
// 0x8057ab68 (1216 bytes, virtual)
// ============================================================================
// Computes vehicleSpeed from baseSpeed, boost multiplier, KCL factors,
// and various state modifiers. Virtual — bike override adds wheelie bonus.
// ============================================================================
// PlayerSub10::updateVehicleSpeed() moved to PlayerSub10.cpp
/*
    // updateVehicleSpeed: moved to PlayerSub10.cpp
    // 0x8057ab68 — speed processing
*/

// ============================================================================
// updateAcceleration()
// 0x8057b9bc (2584 bytes)
// ============================================================================
// Updates vehicleSpeed based on acceleration input, deceleration from
// offroad/drifting, and speed limits. Complex multi-branch logic.
// ============================================================================
void PlayerSub10::updateAcceleration() {
    // Store previous speed: lastSpeed = vehicleSpeed

    // Check player state for acceleration blocking conditions
    // If blocked (wall collision, etc.): return

    // Get acceleration from vehicle params
    // Apply input (A button), braking (B button)
    // Compute target speed change

    // If offroad: apply offroad deceleration
    // If drifting: apply drift speed penalty
    // If boosting: apply boost acceleration from PlayerBoost

    // Clamp vehicleSpeed to [0, softSpeedLimit]
    // Apply hard speed limit checks
}

// ============================================================================
// updateOffroad()
// 0x8057c3d4 (532 bytes)
// ============================================================================
// Checks if player is on offroad surface, applies speed/rotation penalties
// and starts the offroad invincibility counter.
// ============================================================================
void PlayerSub10::updateOffroad() {
    // Read player state flags
    // Check if on offroad (bit 24 of some flags, NOT on boost panel/ramp)
    // If on offroad:
    //   Increment floorCollisionCount
    //   Compute kclSpeedFactor and kclRotFactor from surface params
    //   If speed ratio changes: trigger offroad sound
    //   If not invincible from offroad:
    //     Set offroadInvincibilityFrames

    // If NOT on offroad:
    //   kclSpeedFactor = 0 (no penalty)
    //   kclRotFactor = 0
    //   Reset offroad invincibility if expired
}

// ============================================================================
// updateRotation()
// 0x8057c69c (1848 bytes)
// ============================================================================
// Core rotation update. Computes the turn angle based on input,
// vehicle speed, KCL surface properties, drift state, and applies
// it through the rotation matrix. Very complex vector math.
// ============================================================================
void PlayerSub10::updateRotation() {
    // Determine if drifting (for inside/outside drift)
    // Read base turn rate from vehicle params at 0x4C-0x58
    // Apply KCL rotation factor, offroad factor
    // Apply speed-dependent turn scaling

    // Compute rotation magnitude from turn input
    // If wall collision or special state: override rotation

    // Apply rotation to direction vector
    // Update dir, lastDir, outsideDriftLastDir
    // Compute cross product for drift angle tracking

    // If debug mode: apply additional rotation correction
    // Store final rotation angle to boostRot (0xF8)
}

// ============================================================================
// updateStandstillBoostRot()
// 0x8057d1d4 (452 bytes)
// ============================================================================
// When standing still with a boost, applies a rotational effect.
// ============================================================================
void PlayerSub10::updateStandstillBoostRot() {
    f32 turnRate = 0.0f;

    // Read state flags to determine current boost/drift condition
    void* stateBase = *reinterpret_cast<void**>(playerPointers);
    u32 flags8 = *reinterpret_cast<u32*>(
        reinterpret_cast<u8*>(stateBase) + 0x08);
    u32 flagsC = *reinterpret_cast<u32*>(
        reinterpret_cast<u8*>(stateBase) + 0x0C);

    // Check if player has forced drift (bit 18 of 0x08)
    bool hasForcedDrift = (flags8 & 0x40000) != 0;
    // Check if airborne (bit 0 of 0x14)
    u32 flags14 = *reinterpret_cast<u32*>(
        reinterpret_cast<u8*>(stateBase) + 0x14);
    bool isAirborne = (flags14 & 0x01) != 0;
    // Check if in shock state (bit 11 of 0x08)
    bool isShock = (flags8 & 0x800) != 0;
    // Check if in mega state (bit 15 of 0x0C)
    bool isMega = (flagsC & 0x8000) != 0;
    // Check if in star/invincible state (bits 27-28 of 0x08)
    bool isStarOrInvincible = ((flags8 >> 27) & 0x3) != 0;
    // Check if in rapid boost (mushroom) — bit 12 of 0x08
    bool isRapidBoost = (flags8 & 0x1000) != 0;

    // Turn parameter table offsets (from vehicle param struct):
    //   0x4C: standstill boost turn rate base
    //   0x50: shock/off-road turn rate modifier (~0.6)
    //   0x1C: mega turn rate modifier
    //   0x18: rapid boost (special floor) turn modifier (~1.2)
    //   0x5C: online forced-drift turn rate
    //   0x9C: online forced-drift duration factor
    //   0xA4: normal boost (special floor) turn modifier (~0.8)

    if (hasForcedDrift) {
        // Check if online or not (global flag at RaceInfo)
        bool isOnline = false; // from global RaceInfo
        if (isOnline) {
            // Online: use fixed turn rate from param table
            turnRate = -0.04f /* paramTable[0x5C] */ * 1.0f /* paramTable[0x9C] */;
        } else {
            // Local: compute turn rate from boost duration ratio
            // Use the longest remaining boost frame count as the factor
            f32 boostFactor = 0.0f;
            s16 maxFrames = 0;
            for (s32 i = 0; i < 6; i++) {
                if (boost.frames[i] > maxFrames) {
                    maxFrames = boost.frames[i];
                }
            }
            // Normalize: assume max boost duration ~180 frames (3 seconds at 60fps)
            if (maxFrames > 0) {
                boostFactor = static_cast<f32>(maxFrames) / 180.0f;
                if (boostFactor > 1.0f) boostFactor = 1.0f;
            }
            turnRate = 0.04f /* paramTable[0x4C] */ * boostFactor;
        }
        // Read turn rate from 0x284 (turn params) offset 0x0C
    } else if (isAirborne) {
        // No standstill rotation in air — leave turnRate at 0
    } else {
        // Normal standstill rotation from speed delta (lastSpeed - vehicleSpeed)
        f32 speedDelta = lastSpeed - vehicleSpeed;
        // Clamp speedDelta to [-1, 1] range to prevent extreme rotation
        if (speedDelta < -1.0f) speedDelta = -1.0f;
        if (speedDelta > 1.0f) speedDelta = 1.0f;

        turnRate = speedDelta * 0.04f /* paramTable[0x4C] standstill turn rate */;

        // Apply additional factors for shock/mega states
        if (isShock) {
            turnRate *= 0.6f /* paramTable[0x50] shock turn rate modifier */;
        }
        if (isMega || isStarOrInvincible) {
            turnRate *= 0.8f /* paramTable[0x1C] mega/star turn rate modifier */;
        }
    }

    // If on special floor (jump pad): multiply by floor rotation param
    if (specialFloor & 0x100) {
        if (isRapidBoost) {
            turnRate *= 1.2f /* paramTable[0x18] rapid boost (mushroom) turn modifier */;
        } else {
            turnRate *= 0.8f /* paramTable[0xA4] normal boost turn modifier */;
        }
    }

    // Apply turnRate to boostRot (0xF8)
    boostRot = turnRate;
}

// ============================================================================
// updateUps()
// 0x8057d398 (1264 bytes)
// ============================================================================
// Updates Per-Frame Units — the main physics position/velocity update.
// Moves the player along the direction vector at the current speed,
// handles wall collisions, cannon entry, and KCL interactions.
// ============================================================================
void PlayerSub10::updateUps() {
    // Get delta-time factor from global
    // Clear hasLandingDir (0x098)
    // Check if in invincible/star state

    // If in cannon state (bit 9):
    //   Interpolate position from cannon path
    //   Set hasLandingDir = true
    //   Skip normal physics
    //   goto store_position
    //
    // Check if forced drift (bit 9 of state)
    //   If so, skip to special drift handling
    //
    // Check air state, wall collision, etc.
    //   Compute movement vector from dir * speed * dt
    //   Apply KCL collision detection
    //   Handle wall bouncing
    //   Update position
    //
    // store_position:
    //   Call sub_0x0006db70() to get KartPhysics position
    //   Store to this position fields
}

// ============================================================================
// updateUpsWhileAirborne()
// 0x8057d888 (virtual)
// ============================================================================
// Airborne variant of updateUps — simplified physics without ground
// friction, KCL, or drift.
// ============================================================================

// ============================================================================
// hop() (virtual)
// 0x8057da5c
// ============================================================================
// Initiates a hop/jump. Sets hopUp and hopDir, zeroes vertical velocity
// for the hop frame.
// ============================================================================

// ============================================================================
// updateManualDrift()
// 0x8057dc44 (1176 bytes)
// ============================================================================
// Processes manual (player-controlled) drifting. Handles drift initiation,
// drift angle tracking, MT charge, drift direction changes, and drift end
// (MT/SMT release).
// ============================================================================
void PlayerSub10::updateManualDrift() {
    // Call updateHopAndSlipdrift() first
    // Check state flags for cannon/forced drift

    // If player can initiate drift:
    //   Check drift direction from input
    //   Compute cross product for drift angle
    //   Update outsideDriftAngle (0x09C)
    //   Update outsideDriftLastDir

    // Check if drift should end:
    //   If not drifting anymore or special condition
    //     Call endDrift() or releaseMt()

    // If still drifting:
    //   Call updateDriftAngle() to increment drift angle
    //   Update MT charge based on drift angle
    //   Check for SMT threshold
}

// ============================================================================
// updateAutoDrift()
// 0x8057e0dc (792 bytes)
// ============================================================================
// Automatic drift correction when not actively drifting but the kart
// is sliding (e.g., after releasing drift or on certain surfaces).
// ============================================================================
void PlayerSub10::updateAutoDrift() {
    // Check state: must be in drift-capable state
    // If not in appropriate state, return

    // Check if outsideDriftAngle is non-zero
    // If zero: no auto-drift needed

    // Increment auto-drift counter (at 0x1CC)
    // Clamp to max counter

    // If counter exceeded:
    //   Call vtable method to get drift direction
    //   Set drift state flag (bit 12)
    //   Apply drift correction to outsideDriftAngle (0x1C8)

    // If not exceeded:
    //   Clear drift state flags
    //   Decay outsideDriftAngle (0x1C8) toward zero
    //   Clamp with hopUp and hopDir values

    // Apply the rotation correction to direction
}

// ============================================================================
// updateHopAndSlipdrift()
// 0x8057e804
// ============================================================================
// Handles hop physics (vertical movement during a jump) and
// slip-drift (momentum preservation during direction changes).
// ============================================================================

// ============================================================================
// updateAutoDriftAngle()
// 0x8057e3f4
// ============================================================================
// Helper: computes the auto-drift angle adjustment by checking
// if the kart is a bike or kart, doing cross products.
// ============================================================================

// ============================================================================
// initDriftAuto()
// 0x8057e638
// ============================================================================

// ============================================================================
// initDriftForced()
// 0x8057e6f4
// ============================================================================

// ============================================================================
// endDrift()
// 0x8057e77c
// ============================================================================

// ============================================================================
// vec3CrossMagnitude()
// 0x8057e99c
// ============================================================================

// ============================================================================
// updateDriftAngle()
// 0x8057eab8
// ============================================================================

// ============================================================================
// initDriftAngle()
// 0x8057ec28
// ============================================================================

// ============================================================================
// applyWheelSlipToSpeed()
// 0x8057c5e8
// ============================================================================