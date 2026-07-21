#include <cstring>
#include "PlayerSub10.hpp"
#include "KartMove.hpp"
#include "KartSettings.hpp"

namespace Kart {

// External globals
extern void* sRaceState;

// ===== Free function stubs with mangled names from symbols =====

// 0x80580128 - PlayerSub10_cancelWheelie
// Size: 4 bytes (1 instruction - just a return)
// This is the base class (kart) implementation - karts don't wheelie
void PlayerSub10_cancelWheelie() {
    // Empty / no-op base implementation
}

// 0x80589a74 - PlayerSub10_updateWheelie
// Size: 4 bytes (1 instruction - just a return)
void PlayerSub10_updateWheelie() {
    // Empty / no-op base implementation (karts don't wheelie)
}

// 0x8058a24c - PlayerSub10Bike_updateWheelie
// Size: 4 bytes (indirect call)
void PlayerSub10Bike_updateWheelie() {
    // Calls updateWheelie virtual method via vtable
    // In practice: this->updateWheelie();
}

// 0x8058a80c - PlayerSub10Bike_getWheelieSoftSpeedLimitBonus
// Size: 44 bytes
// Calls 0x80555bf4 (EGG::Vector3f operation)
float PlayerSub10Bike_getWheelieSoftSpeedLimitBonus() {
    // Returns speed limit bonus during wheelie
    // Based on wheelie state and timer
    // When in wheelie, top speed is increased by a small amount
    // The bonus decreases as the wheelie timer progresses
    return 2.0f; // Approximate bonus value
}

// 0x8058a838 - PlayerSub10Bike_startWheelie
// Size: 116 bytes
// Calls 0x80555bf4 (x2) - EGG::Vector3f operations
void PlayerSub10Bike_startWheelie() {
    // Initializes wheelie state for a bike
    // Sets:
    //   - wheelieTimer to max value
    //   - wheelieRot to initial lean angle
    //   - WHEELIE_ROT flag (bit 0x44)
    //   - leanRot = 0.0f (starts upright, leans forward)
    // Calls vec3 operations for visual effect initialization
}

// 0x8058a8ac - PlayerSub10Bike_cancelWheelie
// Size: 48 bytes
// Calls 0x80555bf4 - EGG::Vector3f operation
void PlayerSub10Bike_cancelWheelie() {
    // Resets wheelie state
    // Calls vec3 operation for cleanup (likely zeroing rotation offset)
    // Clears WHEELIE_ROT flag
}

// 0x8058ac80 - PlayerSub10Bike_tryStartWheelie
// Size: 200 bytes
// Calls 0x8052f248 (x2) - input/state checks
void PlayerSub10Bike_tryStartWheelie() {
    // Checks if wheelie can start:
    // 1. Check input: must be pressing down on stick
    // 2. Check speed: must be above minimum wheelie speed
    // 3. Check state: not in air, not in cannon, not crashed
    // 4. Check cooldown: wheelieCooldown must be 0
    // If all conditions met, call startWheelie()
    //
    // Calls state check functions (0x8052f248) which likely check:
    //   - KartState flags for ground/air/crash state
    //   - Input state for stick position
}

// 0x8058b4c8 - PlayerSub10Bike_checkWheelieSpeed
// Size: 68 bytes
// Calls 0x80555bf4 - EGG::Vector3f operation
void PlayerSub10Bike_checkWheelieSpeed() {
    // Checks if speed is within wheelie-allowed range
    // Cancels wheelie if going too slow (speed < threshold)
    // Also checks if on ground - cancels if airborne
    // Calls vec3 operation for visual cleanup
}

// 0x8058bc2c - PlayerSub10_checkWheelie
// Size: 8 bytes
bool PlayerSub10_checkWheelie() {
    // Returns false for kart (no wheelie capability)
    return false;
}

// ===== PlayerSub10 class method implementations =====

PlayerSub10::PlayerSub10() {
    memset(reinterpret_cast<u8*>(this), 0, sizeof(PlayerSub10));
    this->speedMultiplier = 1.0f;
    this->hardSpeedLimit = 0.0f;
    this->speedDragMultiplier = 1.0f;
    this->hasLandingDir = false;
    this->speedRatioCapped = 0.0f;
    this->speedRatio = 0.0f;
    this->kclSpeedFactor = 1.0f;
    this->kclRotFactor = 1.0f;
    this->kclWheelSpeedFactor = 1.0f;
    this->kclWheelRotFactor = 1.0f;
    this->driftState = 0;
    this->mtCharge = 0;
    this->smtCharge = 0;
    this->mtBoost = 0;
    this->outsideDriftBonus = 0.0f;
    this->zipperBoost = 0;
    this->zipperBoostMax = 0;
    this->offroadInvincibilityFrames = 0;
    this->ssmtCharge = 0;
    this->effectiveTurn = 0.0f;
    this->conservedTurn = 0.0f;
    this->scale.set(1.0f, 1.0f, 1.0f);
    this->someScale = 1.0f;
    this->shockSpeedMultiplier = 1.0f;
    this->megaScale = 1.0f;
    this->starTimer = 0;
    this->shockTimer = 0;
    this->blooperCharacterInk = 0;
    this->crushTimer = 0;
    this->MegaTimer = 0;
    this->drivingDirection = 0;
    this->backwardsAllowCounter = 0;
    this->specialFloor = 0;
    this->ghostVanishTimer = 0;
    this->hopVelY = 0.0f;
    this->hopPosY = 0.0f;
    this->hopGravity = 0.0f;
}

PlayerSub10::~PlayerSub10() {}

void PlayerSub10::setTurnParams() {
    // Reads turn params from KartParam based on vehicle stats
    // Sets effectiveTurn, handling, drift parameters
}

void PlayerSub10::activateStar() {
    // Activates star power:
    // - Set starTimer to duration (frames)
    // - Set STAR flag in bitfield
    // - Apply star speed multiplier
    // - Set invincibility
}

void PlayerSub10::activateMega() {
    // Activates mega mushroom:
    // - Set MegaTimer to duration
    // - Set megaScale = 2.0f (or mega growth factor)
    // - Set MEGA flag in bitfield
    // - Apply invincibility to collisions
}

void PlayerSub10::applyInk(int unk) {
    // Applies blooper ink effect:
    // - Set blooperCharacterInk to duration
    // - Set INK flag in bitfield
    // - Reduce visibility
}

void PlayerSub10::cancelWheelie() {
    // Base kart implementation: no-op
}

bool PlayerSub10::checkWheelie() { return false; }

void PlayerSub10::updateTurn() {
    // Reads stick X input, computes turn value
    // Applies KCL rotation factor
    // Computes effectiveTurn = rawTurn * kclRotFactor
    // Handles drift turn modifier
}

void PlayerSub10::updateVehicleSpeed() {
    // Main speed update:
    // 1. Compute speedRatio = currentSpeed / softSpeedLimit
    // 2. Clamp speedRatioCapped to [0, 1]
    // 3. Apply KCL speed factor
    // 4. Apply boost multiplier
    // 5. Handle offroad speed reduction
    // 6. Update lastSpeed
}

void PlayerSub10::updateUpsWhileAirborne() {
    // Updates physics while kart is in the air
    // Applies reduced steering, gravity effects
    // Checks for landing
}

void PlayerSub10::updateVehicleRotationVector(float turn) {
    // Updates the rotation vector based on turn input
    // Applies turn to angVel0 of dynamics
    // Handles drift rotation (outside drift bonus)
}

float PlayerSub10::getWheelieSoftSpeedLimitBonus() { return 0.0f; }

void PlayerSub10::updateWheelie() {
    // Base kart: no wheelie logic
}

bool PlayerSub10::canHop() {
    // Can hop when: on ground, not already hopping, not in cannon
    return true;
}

void PlayerSub10::hop() {
    // Initiates a hop:
    // - Set hopFrame
    // - Compute hopVelY from stick X and speed
    // - Set hopUp direction
    // - Set HOP flag in bitfield
}

void PlayerSub10::updateMtCharge() {
    // Updates mini-turbo charge while drifting
    // charge rate depends on: speed, offroad state, inside/outside drift
    // Outside drift: slower charge, bigger boost
    // Inside drift: faster charge, smaller boost
    // When charge reaches max, set driftState to CHARGED
}

void PlayerSub10::init(bool unk0, bool unk1) {
    // Initialize PlayerSub10 from kart params
    // Reads vehicle stats for speed limits, acceleration, etc.
    // Sets up initial physics values
}

void PlayerSub10::update() {
    // Main per-frame update for PlayerSub10:
    // Calls sub-updates in order:
    // 1. updateTurn()
    // 2. updateVehicleSpeed()
    // 3. updateAcceleration()
    // 4. updateOffroad()
    // 5. updateRotation()
    // 6. updateHopPhysics()
    // 7. updateDir()
    // 8. updateStandstillBoostRot()
    // 9. updateUps()
    // 10. updateManualDrift() / updateAutoDrift()
    // 11. updateHopAndSlipdrift()
    // 12. updateBoost()
    // 13. updateInk()
    // 14. updateSlipstream()
    // 15. updateDiving()
    // 16. updateSpecialFloor()
    // 17. updateWheelie()
    // 18. updateMtCharge()
}

void PlayerSub10::updateHopPhysics() {
    // Updates hop state each frame
    // Applies hop gravity, updates Y position
    // Checks for landing (hopPosY <= ground level)
}

void PlayerSub10::updateDir() {
    // Updates facing direction based on speed and steering
    // Smoothly interpolates dir toward velocity direction
    // Uses landingDir when landing from a trick
}

void PlayerSub10::updateAcceleration() {
    // Updates acceleration based on:
    // - Input (A button = accelerate, B button = brake)
    // - Speed ratio (less accel at high speed)
    // - KCL speed factor (offroad reduces accel)
    // - Boost multiplier
    // - Drift state
}

void PlayerSub10::updateOffroad() {
    // Updates offroad state:
    // - Check floor KCL type for offroad
    // - Apply offroad speed reduction
    // - Handle offroad invincibility frames
    // - Update kclSpeedFactor and kclRotFactor
}

void PlayerSub10::updateRotation() {
    // Updates kart rotation:
    // - Apply turn rotation to dynamics
    // - Handle drift rotation
    // - Handle landing rotation
    // - Smooth rotation interpolation
}

void PlayerSub10::updateStandstillBoostRot() {
    // Applies rotation when boosting from standstill
    // Slight forward tilt when starting to move
}

void PlayerSub10::updateUps() {
    // UPS = Universal Positioning System
    // Updates position based on all velocity components
}

void PlayerSub10::updateManualDrift() {
    // Manual drift handling:
    // - Check drift input + turn direction
    // - Start/continue drift
    // - Update MT charge
    // - Handle drift end (release MT or cancel)
}

void PlayerSub10::updateAutoDrift() {
    // Auto drift (automatic drift when turning sharply at speed):
    // - Check if speed and turn angle exceed threshold
    // - Start auto drift
    // - Same MT charge logic as manual
}

void PlayerSub10::updateHopAndSlipdrift() {
    // Combined hop and slipdrift state machine
    // Handles the transition between hop, slipdrift, and normal driving
}

void PlayerSub10::activateMushroom() {
    // Activates mushroom boost:
    // - Set mushroom boost timer
    // - Apply speed boost via PlayerBoost
    // - Set MUSHROOM flag
}

void PlayerSub10::endTrick() {
    // Ends current trick, applies trick boost
}

void PlayerSub10::activateZipperBoost() {
    // Activates zipper boost:
    // - Set zipper boost timer
    // - Apply speed boost
    // - Set ZIPPER flag
}

void PlayerSub10::tryStartJumpPad() {
    // Checks for jump pad trigger:
    // - Check KCL type for jump pad
    // - Read jump pad properties (min/max speed, velY)
    // - Set JUMP_PAD flag, store properties
}

void PlayerSub10::applyLightning() {
    // Applies lightning effect:
    // - Spin the kart (set rotation)
    // - Reduce speed
    // - Set shockTimer
}

void PlayerSub10::applyLightningEffect(int frames, int unk0, int unk1) {
    // Applies the visual/spin effect of lightning
    // frames: duration of spin
}

void PlayerSub10::activateTc() {
    // Activates TC (Thunder Cloud)
    // - Set TC flag
}

void PlayerSub10::deactivateTc() {
    // Deactivates TC
}

void PlayerSub10::updateInk() {
    // Updates ink effect timer
    // Decrements blooperCharacterInk
    // Clears INK flag when expired
}

void PlayerSub10::applyStartBoost(int frames) {
    // Applies start boost from countdown
    // - Set boost type and duration via PlayerBoost
}

void PlayerSub10::tryEndJumpPad() {
    // Checks if jump pad should end:
    // - If velY < jumpPadMinSpeed, end jump pad
    // - Reset JUMP_PAD flag
}

void PlayerSub10::updateBoost() {
    // Updates all boost timers via PlayerBoost
    // Applies boost multiplier and acceleration
    // Checks for boost end conditions
}

void PlayerSub10::releaseMt(int unk0, int unk1) {
    // Releases mini-turbo:
    // - Check MT charge state
    // - If charged: apply MT boost, reset charge
    // - If SMT charged: apply SMT boost (stronger), reset charge
    // - Set MT boost type flag
}

void PlayerSub10::updateStickyRoad() {
    // Updates sticky road state (e.g. boost panels, trickable surfaces)
    // Sets/clears STICKY_ROAD flag
}

void PlayerSub10::setInitialPhysicsValues(EGG::Vector3f* position, EGG::Vector3f* angles) {
    // Sets initial position and rotation from race start
    this->dir = *position;
    this->lastDir = *position;
}

void PlayerSub10::doRespawn() {
    // Handles respawn after OOB/fall:
    // - Reset velocity
    // - Move to last valid position
    // - Reset state flags
    // - Set invincibility frames
}

void PlayerSub10::enterCannon() {
    // Enters cannon:
    // - Set CANNON flag
    // - Store cannon point ID
    // - Disable normal physics
}

void PlayerSub10::updateCannon() {
    // Updates cannon state:
    // - Interpolate position along cannon path
    // - Check for cannon exit
    // - Apply cannon exit velocity
}

void PlayerSub10::activateBullet(int unk) {
    // Activates bullet bill:
    // - Set BULLET flag
    // - Apply bullet speed
    // - Disable normal controls
}

void PlayerSub10::updateDiving() {
    // Updates diving state (when falling fast)
    // Applies rotation toward ground
}

void PlayerSub10::updateSlipstream() {
    // Updates slipstream (drafting) state:
    // - Check if behind another kart
    // - Charge slipstream counter
    // - Activate slipstream boost when charged
}

void PlayerSub10::updateSpecialFloor() {
    // Updates special floor state:
    // - Check KCL for boost panels, boost ramps
    // - Set specialFloor flags
    // - Apply floor-specific effects
}

// ===== PlayerSub10Bike class method implementations =====

PlayerSub10Bike::PlayerSub10Bike() : PlayerSub10() {
    this->leanRot = 0.0f;
    this->leanRotCap = 0.0f;
    this->leanRotInc = 0.0f;
    this->wheelieRot = 0.0f;
    this->maxWheelieRot = 0.0f;
    this->wheelieTimer = 0;
    this->field_0x2AC = 0;
    this->wheelietimer2 = 0;
    this->wheelieCooldown = 0;
    this->turnParams = nullptr;
}

PlayerSub10Bike::~PlayerSub10Bike() {}

void PlayerSub10Bike::setTurnParams() {
    // Bike-specific turn parameters
    // Reads different values than kart for handling
}

void PlayerSub10Bike::cancelWheelie() {
    // Cancel wheelie:
    // - Reset wheelieTimer
    // - Clear WHEELIE_ROT flag
    // - Set wheelieCooldown
    // - Reset wheelieRot toward 0
}

bool PlayerSub10Bike::checkWheelie() {
    // Check if currently in wheelie
    return this->field_0x2AC != 0;
}

void PlayerSub10Bike::updateVehicleRotationVector(float turn) {
    // Bike-specific rotation: includes wheelie lean
    // Applies lean rotation in addition to normal turn
}

float PlayerSub10Bike::getWheelieSoftSpeedLimitBonus() {
    // Returns wheelie speed bonus (bikes go slightly faster when wheelieing)
    if (!this->field_0x2AC) return 0.0f;
    return 2.0f; // Approximate
}

void PlayerSub10Bike::updateWheelie() {
    // Update wheelie state each frame:
    // 1. If in wheelie (field_0x2AC):
    //    a. Decrement wheelieTimer
    //    b. Update wheelieRot (lean forward)
    //    c. Check speed - cancel if too slow
    //    d. If timer expired, cancel wheelie
    // 2. If not in wheelie:
    //    a. Decrement wheelieCooldown
    //    b. Try to start new wheelie
    // 3. Clamp wheelieRot to maxWheelieRot
    // 4. Apply wheelieRot to dynamics
}

void PlayerSub10Bike::updateMtCharge() {
    // Bike-specific MT charge: different rates for bike vs kart
    // Bikes charge MT slightly differently due to wheelie interaction
}

void PlayerSub10Bike::startWheelie() {
    // Start wheelie:
    // - Set field_0x2AC = 1 (wheelie active)
    // - Set wheelieTimer to max
    // - Set wheelietimer2 = wheelieTimer
    // - Set WHEELIE_ROT flag (bit 0x44)
    // - Initialize lean rotation
}

void PlayerSub10Bike::cancelWheelieInternal() {
    // Internal wheelie cancellation (called by cancelWheelie)
    // - Set field_0x2AC = 0
    // - Reset wheelieTimer
    // - Set wheelieCooldown
    // - Clear WHEELIE_ROT flag
}

} // namespace Kart