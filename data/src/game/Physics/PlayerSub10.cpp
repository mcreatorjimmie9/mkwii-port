#include "PlayerSub10.hpp"
#include <rk_types.h>
#include <decomp.h>
#include <egg/math/eggVector.hpp>
#include <cmath>

// ============================================================================
// PlayerSub10 — Base Virtual Methods, Constructor, and Destructor
// Addresses: 0x80577fc4 (ctor), 0x80587b78 (dtor), 0x805784d4 (init),
//            0x8057829c (setTurnParams), and remaining base virtuals
// ============================================================================

// Driving direction constants
enum DrivingDir {
    DRIVING_IDLE   = 2,
    DRIVING_FWD    = 0,
    DRIVING_BACK   = 1,
};

// Drift turbo charge thresholds
enum MtLevel {
    MT_LEVEL_NONE   = 0,
    MT_LEVEL_1      = 300,   // First mini-turbo level
    MT_LEVEL_2      = 500,   // Second mini-turbo level
    MT_LEVEL_3      = 650,   // Super mini-turbo (SMT)
};

// State flag bit positions (for playerState at playerPointers + 0x04)
enum StateFlags08 {
    FLAG_BULLET     = 0x00000001u,  // bit 0: bullet bill
    FLAG_BOOST      = 0x00000080u,  // bit 7: boosting
    FLAG_SHOCK      = 0x00000800u,  // bit 11: shock
    FLAG_ZIPPER     = 0x00002000u,  // bit 13: zipper boost
    FLAG_TABLE_STATE= 0x08000000u,  // bit 27: in some table state
    FLAG_INVINCIBLE = 0x10000000u,  // bit 28: star/mega invincibility
    FLAG_WALL       = 0x20000000u,  // bit 29: wall collision
};

enum StateFlags0C {
    FLAG_BOOSTING   = 0x00000010u,  // bit 4: currently boosting
    FLAG_INK        = 0x00000080u,  // bit 7: ink active
    FLAG_MEGA       = 0x00008000u,  // bit 15: mega mushroom
    FLAG_CRUSH      = 0x00100000u,  // bit 20: crushed
    FLAG_HAS_INK    = 0x01000000u,  // bit 24: has gesso/ink
};

// ============================================================================
// PlayerSub10() — Constructor
// 0x80577fc4 (344 bytes)
// ============================================================================
// Zero-initializes all physics fields. The vtable is set by the most-derived
// class constructor. Speed defaults to 0.0 with a multiplier of 1.0; the
// actual base speed is loaded in init() from vehicle parameters.
// ============================================================================
// @addr 0x80577fc4
PlayerSub10::PlayerSub10() {
    // The vtable pointer at 0x00C is set by the derived class (e.g.
    // PlayerSub10RealLocal or PlayerSub10Remote) via their constructors.

    // Speed parameters
    speedMultiplier = 1.0f;
    baseSpeed = 0.0f;
    softSpeedLimit = 80.0f;
    vehicleSpeed = 0.0f;
    lastSpeed = 0.0f;
    hardSpeedLimit = 100.0f;
    acceleration = 0.0f;
    speedDragMultiplier = 1.0f;

    // Direction and orientation vectors — default to world axes
    smoothedUp.set(0.0f, 1.0f, 0.0f);
    up.set(0.0f, 1.0f, 0.0f);
    landingDir.set(0.0f, 0.0f, 0.0f);
    dir.set(1.0f, 0.0f, 0.0f);
    lastDir.set(1.0f, 0.0f, 0.0f);
    vel1Dir.set(0.0f, 0.0f, 0.0f);
    _080.set(0.0f, 0.0f, 0.0f);
    dirDiff.set(0.0f, 0.0f, 0.0f);

    // Landing and drift state
    hasLandingDir = false;
    outsideDriftAngle = 0.0f;
    landingAngle = 0.0f;
    outsideDriftLastDir.set(0.0f, 0.0f, 0.0f);

    // Speed ratios
    speedRatioCapped = 0.0f;
    speedRatio = 0.0f;

    // KCL surface factors
    kclSpeedFactor = 0.0f;
    kclRotFactor = 0.0f;
    kclWheelSpeedFactor = 0.0f;
    kclWheelRotFactor = 0.0f;

    // Floor collision
    floorCollisionCount = 0;

    // Hop state
    hopStickX = 0;
    hopFrame = 0;
    hopUp.set(0.0f, 1.0f, 0.0f);
    hopDir.set(0.0f, 1.0f, 0.0f);
    hopVelY = 0.0f;
    hopPosY = 0.0f;
    hopGravity = -0.8f;

    // Slipstream
    slipstreamCharge = 0;
    _0F0 = 0.0f;

    // Rotation modifiers
    divingRot = 0.0f;
    boostRot = 0.0f;

    // Drift and mini-turbo state
    driftState = 0;
    mtCharge = 0;
    smtCharge = 0;
    mtBoost = 0;
    outsideDriftBonus = 0.0f;

    // Boost system (PlayerBoost at 0x108, size 0x24)
    boost.types = 0;
    for (s32 i = 0; i < 6; i++) {
        boost.frames[i] = 0;
    }
    boost.multiplier = 0.0f;
    boost.acceleration = 0.0f;
    boost.speedLimit = 0.0f;

    // Zipper boost
    zipperBoost = 0;
    zipperBoostMax = 0;

    // Offroad invincibility
    offroadInvincibilityFrames = 0;
    _14A = 0;
    ssmtCharge = 0;

    // Turn parameters
    effectiveTurn = 0.0f;
    conservedTurn = 0.0f;
    rawTurn = 0.0f;
    _28C = 0.0f;

    // Scale
    scale.set(1.0f, 1.0f, 1.0f);
    _170 = 0.0f;
    someScale = 1.0f;
    shockSpeedMultiplier = 1.0f;
    megaScale = 1.0f;

    // Status effect timers
    mushroomBoost2 = 0;
    starTimer = 0;
    shockTimer = 0;
    blooperCharacterInk = 0;
    field_0x190 = 0;
    _191 = 0;
    crushTimer = 0;
    MegaTimer = 0;
    _196 = 0;

    // Jump pad properties
    jumpPadMinSpeed = 0.0f;
    jumpPadMaxSpeed = 0.0f;
    _1B8 = 0.0f;
    _1BC = 0.0f;
    jumpPadProperties.minSpeed = 0.0f;
    jumpPadProperties.maxSpeed = 0.0f;
    jumpPadProperties.velY = 0.0f;
    rampBoost = 0;

    // Driving state
    drivingDirection = DRIVING_IDLE;
    backwardsAllowCounter = 0;
    _24E = 0;
    _24F = 0;
    specialFloor = 0;

    // Sub-object pointers — initialized in init()
    trick = nullptr;
    zipper = nullptr;

    // Ghost vanish
    ghostVanishTimer = 0;
    _292[0] = 0;
    _292[1] = 0;

    // Clear padding regions
    for (u32 i = 0; i < sizeof(_004); i++)  _004[i] = 0;
    for (u32 i = 0; i < sizeof(_008); i++)  _008[i] = 0;
    for (u32 i = 0; i < sizeof(_099); i++)  _099[i] = 0;
    for (u32 i = 0; i < sizeof(_130); i++)  _130[i] = 0;
    for (u32 i = 0; i < sizeof(_180); i++)  _180[i] = 0;
    for (u32 i = 0; i < sizeof(_197); i++)  _197[i] = 0;
    for (u32 i = 0; i < sizeof(_1CE); i++)  _1CE[i] = 0;
    for (u32 i = 0; i < sizeof(_232); i++)  _232[i] = 0;
    for (u32 i = 0; i < sizeof(_254); i++)  _254[i] = 0;
    for (u32 i = 0; i < sizeof(_260); i++)  _260[i] = 0;
}

// ============================================================================
// ~PlayerSub10() — Virtual Destructor
// 0x80587b78
// ============================================================================
// Base class destructor. Sub-objects (trick, zipper) are destroyed by the
// derived class destructors. The base destructor body is effectively empty
// in the original binary.
// ============================================================================
// @addr 0x80587b78
PlayerSub10::~PlayerSub10() {
    // Intentionally empty — derived classes handle sub-object cleanup
}

// ============================================================================
// init(isBike, isRemote)
// 0x805784d4 (1032 bytes)
// ============================================================================
// Full initialization of all physics fields after construction. Sets up
// speed parameters based on vehicle type (bike vs kart), initializes
// direction vectors, KCL factors, drift state, timers, and creates
// sub-objects (PlayerTrick, PlayerZipper).
// ============================================================================
// @addr 0x805784d4
void PlayerSub10::init(bool isBike, bool isRemote) {
    // Base speed differs between bikes and karts in the original.
    // These are default values; the real init reads from vehicle parameter
    // tables and multiplies by the CC-class speedMultiplier.
    baseSpeed = isBike ? 85.0f : 80.0f;

    // Store base speed into vehicle speed fields
    vehicleSpeed = baseSpeed;
    lastSpeed = baseSpeed;

    // Speed limits derived from base speed
    softSpeedLimit = baseSpeed * 1.2f;    // 102.0 (kart) or 102.0 (bike)
    hardSpeedLimit = baseSpeed * 1.5f;    // 120.0 (kart) or 127.5 (bike)

    // Default drag and acceleration
    speedDragMultiplier = 0.998f;          // Very slight per-frame drag
    acceleration = 0.0f;

    // Direction vectors — aligned to world axes on spawn
    smoothedUp.set(0.0f, 1.0f, 0.0f);
    up.set(0.0f, 1.0f, 0.0f);
    dir.set(1.0f, 0.0f, 0.0f);
    lastDir.set(1.0f, 0.0f, 0.0f);
    vel1Dir.set(0.0f, 1.0f, 0.0f);

    // Landing state
    landingDir.set(0.0f, 0.0f, 0.0f);
    hasLandingDir = false;
    outsideDriftAngle = 0.0f;
    landingAngle = 0.0f;
    outsideDriftLastDir.set(0.0f, 0.0f, 0.0f);

    // Speed ratios reset
    speedRatioCapped = 0.0f;
    speedRatio = 0.0f;

    // KCL surface factors reset
    kclSpeedFactor = 0.0f;
    kclRotFactor = 0.0f;
    kclWheelSpeedFactor = 0.0f;
    kclWheelRotFactor = 0.0f;

    if (!isRemote) {
        // === Local player only initialization ===

        floorCollisionCount = 0;
        hopStickX = 0;
        hopFrame = 0;
        hopUp.set(0.0f, 1.0f, 0.0f);
        hopDir.set(0.0f, 1.0f, 0.0f);
        slipstreamCharge = 0;
        _0F0 = 0.0f;
        divingRot = 0.0f;
        boostRot = 0.0f;

        // Drift state
        driftState = 0;
        mtCharge = 0;
        smtCharge = 0;
        mtBoost = 0;
        outsideDriftBonus = 0.0f;

        // Reset boost system
        boost.types = 0;
        for (s32 i = 0; i < 6; i++) {
            boost.frames[i] = 0;
        }
        boost.multiplier = 0.0f;
        boost.acceleration = 0.0f;
        boost.speedLimit = 0.0f;

        offroadInvincibilityFrames = 0;
        _14A = 0;
        ssmtCharge = 0;

        // Turn parameters
        effectiveTurn = 0.0f;
        conservedTurn = 0.0f;

        // Scale and shock
        scale.set(1.0f, 1.0f, 1.0f);
        someScale = 1.0f;
        shockSpeedMultiplier = 1.0f;
        megaScale = 1.0f;

        // Status effect timers
        mushroomBoost2 = 0;
        starTimer = 0;
        shockTimer = 0;
        blooperCharacterInk = 0;
        field_0x190 = 0;
        crushTimer = 0;
        MegaTimer = 0;
        _196 = 0;

        // Jump pad defaults
        jumpPadMinSpeed = 0.0f;
        jumpPadMaxSpeed = 0.0f;
        rampBoost = 0;

        // Hop physics constants
        hopGravity = -0.8f;
        hopVelY = 0.0f;
        hopPosY = 0.0f;

        // Driving direction starts at IDLE
        drivingDirection = DRIVING_IDLE;
        backwardsAllowCounter = 0;
        specialFloor = 0;

        // Sub-object pointers — allocated by derived classes
        trick = nullptr;
        zipper = nullptr;

        // Raw turn and ghost
        rawTurn = 0.0f;
        _28C = 0.0f;
        ghostVanishTimer = 0;
    }

    // CC-class gravity is read from a global parameter table.
    // The real init reads globalParamTable[ccClass].gravity and stores
    // it to an internal field used by updateUpsWhileAirborne().
}

// ============================================================================
// setTurnParams()
// 0x8057829c (virtual)
// ============================================================================
// Configures the turning parameters for the current frame based on the
// vehicle's speed ratio. The effective turn rate increases linearly with
// speed so that faster karts can steer more responsively, up to a cap.
// Virtual — bike override adds wheelie lean parameters.
// ============================================================================
// @addr 0x8057829c
void PlayerSub10::setTurnParams() {
    // effectiveTurn scales with speed: at speedRatio=0 it is 0.01,
    // at speedRatio=1 it is 0.04. This gives the kart some minimal
    // turn authority even when stationary.
    effectiveTurn = 0.03f * speedRatio + 0.01f;

    // conservedTurn tracks the turn input that carries over from the
    // previous frame (used for drift angle smoothing and wall recovery).
    conservedTurn = 0.0f;
}

// ============================================================================
// updateVehicleSpeed()
// 0x8057ab68 (1216 bytes, virtual)
// ============================================================================
// Applies accumulated acceleration to vehicleSpeed, then applies per-frame
// drag, and clamps the result to [0, hardSpeedLimit]. Also computes
// speedRatio and speedRatioCapped for use by other systems (turn rate,
// offroad penalty, etc.).
// Virtual — bike override adds wheelie soft speed limit bonus.
// ============================================================================
// @addr 0x8057ab68
void PlayerSub10::updateVehicleSpeed() {
    // Apply acceleration (positive = accelerating, negative = braking)
    vehicleSpeed += acceleration;

    // Per-frame drag — simulates air/rolling resistance
    vehicleSpeed *= speedDragMultiplier;

    // Clamp to valid range: speed cannot go below 0 (no reversing via
    // physics) and cannot exceed the hard speed limit
    if (vehicleSpeed < 0.0f) {
        vehicleSpeed = 0.0f;
    }
    if (vehicleSpeed > hardSpeedLimit) {
        vehicleSpeed = hardSpeedLimit;
    }

    // Compute speed ratio (fraction of base speed) — used by many
    // systems to scale their behavior with vehicle speed
    if (baseSpeed > 0.0f) {
        speedRatio = vehicleSpeed / baseSpeed;
    } else {
        speedRatio = 0.0f;
    }

    // Cap the speed ratio to [0.0, 1.5] for turn rate lookups and
    // other parameter tables that assume this range
    if (speedRatio < 0.0f) {
        speedRatioCapped = 0.0f;
    } else if (speedRatio > 1.5f) {
        speedRatioCapped = 1.5f;
    } else {
        speedRatioCapped = speedRatio;
    }
}

// ============================================================================
// updateTurn()
// 0x8057a8b4 (692 bytes, virtual)
// ============================================================================
// Processes steering input for the current frame. Reads the analog stick
// X value, applies the effective turn rate from setTurnParams(), and
// accounts for drift state, offroad penalties, and wall collision
// direction reversal.
// Virtual — bike override adds wheelie lean turn reduction.
// ============================================================================
// @addr 0x8057a8b4
void PlayerSub10::updateTurn() {
    // Reset per-frame turn values
    rawTurn = 0.0f;
    f32 frameTurn = 0.0f;

    // Read player state flags to check for blocked/special states
    // (In the original, these are read from playerPointers + 0x04 + 0x08/0x0C)
    u32 stateFlags = 0; // TODO: read from playerState->flags

    // Block turning if in bullet bill state
    if (stateFlags & FLAG_BULLET) {
        effectiveTurn = 0.0f;
        conservedTurn = 0.0f;
        return;
    }

    // Block turning if in table/state machine state
    if (stateFlags & FLAG_TABLE_STATE) {
        effectiveTurn = 0.0f;
        conservedTurn = 0.0f;
        return;
    }

    // Read analog stick X input (range -1.0 to 1.0, 0 = centered)
    // In the original this comes from KPadDirector via playerPointers
    f32 stickX = 0.0f; // TODO: sub_getTurnInput(this) -> stickX
    rawTurn = stickX;

    // Compute raw turn from input * turn rate
    frameTurn = stickX * effectiveTurn;

    // Apply drift turn bonus — when drifting, the turn rate is
    // enhanced to allow tighter cornering
    if (driftState != 0) {
        // Drift bonus scales with the absolute drift angle
        f32 driftBonus = outsideDriftBonus * 0.5f;
        if (stickX > 0.0f) {
            frameTurn += driftBonus;
        } else if (stickX < 0.0f) {
            frameTurn -= driftBonus;
        }
    }

    // Apply offroad rotation penalty — reduces turn authority on
    // offroad surfaces (kclRotFactor < 0 when offroad)
    if (kclRotFactor < 0.0f) {
        f32 offroadPenalty = 1.0f + kclRotFactor; // e.g. 0.6 if kclRotFactor = -0.4
        frameTurn *= offroadPenalty;
    }

    // Wall collision reversal — if hitting a wall, flip the turn
    // direction to push the kart away from the wall
    if (stateFlags & FLAG_WALL) {
        frameTurn = -frameTurn;
    }

    // Clamp effective turn to reasonable bounds
    // (In the original this uses a parameter table indexed by speedRatioCapped)
    f32 maxTurn = 0.06f * speedRatioCapped + 0.02f;
    if (frameTurn > maxTurn) {
        frameTurn = maxTurn;
    } else if (frameTurn < -maxTurn) {
        frameTurn = -maxTurn;
    }

    // Apply the computed turn to the outside drift angle
    // (used by the drift system for angle tracking)
    if (!(stateFlags & FLAG_WALL)) {
        outsideDriftAngle += frameTurn;
    }

    // Smoothly interpolate conservedTurn toward the current frame turn.
    // This prevents instant direction changes and gives a "weighty" feel.
    conservedTurn = conservedTurn * 0.8f + frameTurn * 0.2f;

    // Store final effective turn for the rotation update
    effectiveTurn = frameTurn;
}

// ============================================================================
// updateVehicleRotationVector(turn)
// 0x8057cf0c (virtual)
// ============================================================================
// Rotates the forward direction vector (dir) around the up vector by the
// given turn angle using Rodrigues' rotation formula. This is the core
// of vehicle steering — it updates the kart's facing direction each frame.
// ============================================================================
// @addr 0x8057cf0c
void PlayerSub10::updateVehicleRotationVector(f32 turn) {
    // Save the last direction for interpolation and drift tracking
    lastDir = dir;

    // No rotation needed if turn is zero (or negligible)
    if (turn == 0.0f) {
        return;
    }

    // Rodrigues' rotation: rotate dir around up by angle `turn`
    // v_rot = v * cos(theta) + (axis x v) * sin(theta) + axis * (axis . v) * (1 - cos(theta))
    // Since dir is perpendicular to up (for a flat surface), the last term is ~0.
    f32 cosT = std::cos(turn);
    f32 sinT = std::sin(turn);

    // Compute axis cross dir (up x dir)
    Vec3 cross = EGG::Vector3f::cross(up, dir);

    // Apply rotation
    Vec3 rotated;
    rotated.x = dir.x * cosT + cross.x * sinT;
    rotated.y = dir.y * cosT + cross.y * sinT;
    rotated.z = dir.z * cosT + cross.z * sinT;

    // Normalize to prevent drift in vector length due to floating point
    f32 len = std::sqrt(rotated.x * rotated.x + rotated.y * rotated.y + rotated.z * rotated.z);
    if (len > 0.0001f) {
        dir.x = rotated.x / len;
        dir.y = rotated.y / len;
        dir.z = rotated.z / len;
    }

    // Update the outside drift last direction for drift angle tracking
    outsideDriftLastDir = dir;
}

// ============================================================================
// updateUpsWhileAirborne()
// 0x8057d888 (virtual)
// ============================================================================
// Airborne physics update — simplified movement without ground friction,
// KCL collision, or drift. Applies gravity to vertical velocity and
// updates position along the current direction. Also manages hop state.
// Virtual — bike override adds wheelie recovery logic.
// ============================================================================
// @addr 0x8057d888
void PlayerSub10::updateUpsWhileAirborne() {
    // Get delta-time factor (1.0 at 60fps, scales for variable framerate)
    // In the original this is read from a global timing variable
    f32 dt = 1.0f;

    // === Hop physics ===
    if (hopFrame > 0) {
        // Apply gravity to vertical velocity
        hopVelY += hopGravity * dt;

        // Update vertical position (relative to hop start)
        f32 verticalDelta = hopVelY * dt;

        // If we've fallen back to or below the hop origin, end the hop
        if (hopPosY + verticalDelta <= 0.0f && hopVelY < 0.0f) {
            // Landed — reset hop state
            hopFrame = 0;
            hopVelY = 0.0f;
            hopPosY = 0.0f;

            // Restore the ground up vector
            up = hopUp;
            hasLandingDir = true;
            landingDir = hopDir;
        } else {
            // Still airborne — update vertical offset
            hopPosY += verticalDelta;
        }

        // Rotate the up vector to simulate air tilt during the hop
        // The up vector interpolates from the surface normal toward the
        // world up (0,1,0) while airborne, giving a natural arc feel
        if (hopFrame > 0) {
            f32 lerpFactor = 0.1f; // Per-frame lerp rate
            up.x += (0.0f - up.x) * lerpFactor;
            up.y += (1.0f - up.y) * lerpFactor;
            up.z += (0.0f - up.z) * lerpFactor;
        }

        hopFrame++;
    }

    // === Simplified airborne movement ===
    // While airborne, the kart continues moving along its direction vector
    // at the current speed, without ground friction or KCL influence.

    // Apply reduced speed drag in the air (slightly less than ground drag)
    f32 airDrag = 0.999f;
    vehicleSpeed *= airDrag;

    // No ground turn while airborne — effective turn is damped
    // The dir vector is preserved from the last ground frame, with only
    // minor adjustments from air control (handled elsewhere)
}

// ============================================================================
// activateStar()
// 0x80580268 (virtual)
// ============================================================================
// Activates star power-up invincibility. Sets the star timer to 720 frames
// (12 seconds at 60fps) and sets the invincibility state flag. Star power
// grants immunity to all hazards and provides a speed boost.
// ============================================================================
// @addr 0x80580268
void PlayerSub10::activateStar() {
    // Star lasts 720 frames (12 seconds at 60fps)
    starTimer = 720;

    // Set invincibility flag (bit 28 in state flags 0x08)
    // In the original:
    //   void* stateBase = *(playerPointers + 0x04);
    //   *(stateBase + 0x08) |= FLAG_INVINCIBLE;
}

// ============================================================================
// activateMega()
// 0x80580b14 (virtual)
// ============================================================================
// Activates the Mega Mushroom effect. Scales the player up to 2x,
// starts the mega timer (600 frames = 10 seconds), and updates the
// scale vector uniformly. Virtual — bike override also cancels wheelie
// and stores offroad invincibility frames.
// ============================================================================
// @addr 0x80580b14
void PlayerSub10::activateMega() {
    // Set mega scale to 2.0x (doubles the kart's physical size)
    megaScale = 2.0f;

    // Mega lasts 600 frames (10 seconds at 60fps)
    MegaTimer = 600;

    // Apply uniform scale to all axes
    scale.set(megaScale, megaScale, megaScale);

    // Set the working scale for interpolation
    someScale = megaScale;

    // Set mega state flag (bit 15 in state flags 0x0C)
    // In the original:
    //   void* stateBase = *(playerPointers + 0x04);
    //   *(stateBase + 0x0C) |= FLAG_MEGA;
}

// ============================================================================
// applyInk(unk)
// 0x80581a58 (virtual)
// ============================================================================
// Applies the Blooper ink effect to the player. Sets the ink timer
// to 360 frames (6 seconds at 60fps). While inked, the player's
// view is partially obscured and steering control is reduced.
// ============================================================================
// @addr 0x80581a58
void PlayerSub10::applyInk(int unk) {
    (void)unk;

    // Ink lasts 360 frames (6 seconds at 60fps)
    blooperCharacterInk = 360;

    // Set ink flag (bit 7 in state flags 0x0C)
    // In the original:
    //   void* stateBase = *(playerPointers + 0x04);
    //   *(stateBase + 0x0C) |= FLAG_INK;
    //   *(stateBase + 0x0C) |= FLAG_HAS_INK;
}

// ============================================================================
// canHop()
// 0x8057da18 (virtual)
// ============================================================================
// Checks whether the player can initiate a hop. A hop requires:
//   1. Vehicle speed > 10.0 (must be moving fast enough)
//   2. Not currently in a drift state (driftState == 0)
// Virtual — bike override adds wheelie state check.
// ============================================================================
// @addr 0x8057da18
bool PlayerSub10::canHop() {
    return vehicleSpeed > 10.0f && driftState == 0;
}

// ============================================================================
// hop()
// 0x8057da5c (virtual)
// ============================================================================
// Initiates a hop/jump. Sets the hop frame counter, initial vertical
// velocity, and records the current Y position and up vector for the
// airborne physics. Virtual — bike override stores additional lean state.
// ============================================================================
// @addr 0x8057da5c
void PlayerSub10::hop() {
    // Begin hop sequence
    hopFrame = 1;

    // Initial upward velocity — determines peak height
    // With gravity = -0.8, peak is at t = 2.5/0.8 = 3.125 frames,
    // reaching height = 2.5 * 3.125 - 0.5 * 0.8 * 3.125^2 ≈ 3.9 units
    hopVelY = 2.5f;

    // Record starting Y position (relative to ground)
    hopPosY = 0.0f;

    // Save the current surface normal and direction for landing recovery
    hopUp = up;
    hopDir = dir;

    // Record the stick X input at hop initiation — this determines
    // the initial drift direction when landing
    hopStickX = 0; // TODO: read from input
}

// ============================================================================
// updateMtCharge()
// 0x8057ee50 (virtual)
// ============================================================================
// Updates the mini-turbo (MT) charge counter while the player is drifting.
// Charge accumulates based on the absolute drift angle, clamped to [0, 650].
// When charge reaches threshold values (300, 500, 650), the turbo level
// advances and visual/audio feedback is triggered.
// Virtual — bike override uses different charge rates.
// ============================================================================
// @addr 0x8057ee50
void PlayerSub10::updateMtCharge() {
    // Only accumulate charge while actively drifting
    if (driftState == 0) {
        return;
    }

    // Charge rate scales with the magnitude of the outside drift angle.
    // Larger drift angles (tighter drifting) charge faster.
    f32 absAngle = outsideDriftAngle;
    if (absAngle < 0.0f) {
        absAngle = -absAngle;
    }

    // Convert angle to charge units. In the original this uses a
    // lookup table indexed by the drift angle magnitude.
    // Approximate: ~0.5 charge units per degree of drift per frame
    f32 chargeRate = absAngle * 0.5f;

    // Apply charge
    mtCharge += (s16)chargeRate;

    // Clamp to maximum charge
    if (mtCharge > MT_LEVEL_3) {
        mtCharge = MT_LEVEL_3;
    }
    if (mtCharge < 0) {
        mtCharge = 0;
    }

    // === Turbo level advancement ===
    // When charge crosses a threshold, the turbo level increases.
    // mtBoost tracks the current turbo level (0-3).
    // Level 0: no turbo
    // Level 1: mini-turbo (MT) at 300 charge
    // Level 2: super mini-turbo (SMT) at 500 charge
    // Level 3: ultra mini-turbo at 650 charge

    if (mtCharge >= MT_LEVEL_3 && mtBoost < 3) {
        mtBoost = 3;
        // Trigger SMT visual/audio feedback
        // In the original: play MT level sound, trigger flame effect
    } else if (mtCharge >= MT_LEVEL_2 && mtBoost < 2) {
        mtBoost = 2;
        // Trigger MT level 2 feedback
    } else if (mtCharge >= MT_LEVEL_1 && mtBoost < 1) {
        mtBoost = 1;
        // Trigger MT level 1 feedback
    }
}

// ============================================================================
// getWheelieSoftSpeedLimitBonus()
// 0x8057c3c8 (virtual)
// ============================================================================
// Returns the bonus added to the soft speed limit when a wheelie is active.
// For karts (base class), this always returns 0.0 since karts cannot
// perform wheelies. Virtual — bike override returns 5.0f during wheelie.
// ============================================================================
// @addr 0x8057c3c8
f32 PlayerSub10::getWheelieSoftSpeedLimitBonus() {
    // Karts cannot wheelie — no speed bonus
    return 0.0f;
}

// ============================================================================
// cancelWheelie()
// 0x8057dc40 (virtual)
// ============================================================================
// Cancels any active wheelie state. For karts (base class), this is a
// no-op since karts cannot perform wheelies. Virtual — bike override
// resets wheelie rotation, timer, and state flags.
// ============================================================================
// @addr 0x8057dc40
void PlayerSub10::cancelWheelie() {
    // Base class (kart) has no wheelie state to cancel
}

// ============================================================================
// checkWheelie()
// 0x80589744 (virtual)
// ============================================================================
// Checks whether the player can initiate or maintain a wheelie.
// For karts (base class), this always returns false. Virtual —
// bike override checks speed > 20.0 and that the kart is upright.
// ============================================================================
// @addr 0x80589744
bool PlayerSub10::checkWheelie() {
    // Karts cannot wheelie
    return false;
}

// ============================================================================
// updateWheelie()
// 0x8058758c (virtual)
// ============================================================================
// Per-frame update for the wheelie state. For karts (base class),
// this is a no-op. Virtual — bike override applies wheelie speed
// bonus, updates wheelie rotation animation, and handles cooldown.
// ============================================================================
// @addr 0x8058758c
void PlayerSub10::updateWheelie() {
    // Base class (kart) has no wheelie to update
}