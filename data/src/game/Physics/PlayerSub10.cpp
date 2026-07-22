#include "PlayerSub10.hpp"
#include <rk_types.h>
#include <decomp.h>
#include <egg/math/eggVector.hpp>
#include <cmath>

extern "C" f32 sub_getTurnInput(void* obj); // @addr 0x8057e900

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
    u32 stateFlags = *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 0x0C);

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
    f32 stickX = sub_getTurnInput(this); // @addr 0x8057e900
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
    hopStickX = sub_getTurnInput(this); // @addr 0x8057f020
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

// ============================================================================
// update() — Main per-frame physics dispatcher
// 0x805788dc (324 bytes)
// ============================================================================
// The heart of the kart physics system. Called once per frame for each player.
// Dispatches to all subsystems in the correct order:
//   1. Set turn parameters (speed-dependent turn rate)
//   2. Update turn (steering input processing)
//   3. Update vehicle speed (acceleration + drag + clamp)
//   4. Update rotation (apply turn to direction vector)
//   5. Update direction (compute movement vector from dir + speed)
//   6. Update KCL offroad/surface effects
//   7. Update drift state and MT charge
//   8. Update boost system
//   9. Update status effects (star, mega, ink, etc.)
//   10. Update position (integrate velocity)
// ============================================================================
// @addr 0x805788dc
void PlayerSub10::update() {
    // Skip update if playerPointers not initialized
    if (!playerPointers)
        return;

    // 1. Compute speed-dependent turn parameters
    setTurnParams();

    // 2. Process steering input and compute effective turn
    updateTurn();

    // 3. Apply acceleration and drag to vehicle speed
    updateVehicleSpeed();

    // 4. Rotate direction vector by turn angle
    // Use the conserved turn for smoother steering
    updateVehicleRotationVector(conservedTurn);

    // 5. Update direction/movement vector from dir + speed
    updateDir();

    // 6. Offroad/surface effects (KCL)
    updateOffroad();

    // 7. Drift state machine and MT charge
    if (driftState != 0) {
        updateManualDrift();
        updateMtCharge();
    }

    // 8. Boost system update
    updateBoost();

    // 9. Status effect timers
    updateStar();
    updateMega();
    updateInk();
    updateSquish();
    updateCrush();

    // 10. Airborne/hop physics
    if (hopFrame > 0) {
        updateUpsWhileAirborne();
    } else {
        updateUps();
    }

    // 11. Standstill boost rotation (allows turning while stationary
    //     with boost active)
    updateStandstillBoostRot();

    // 12. Special floor effects (boost pads, cannon, etc.)
    updateSpecialFloor();

    // 13. Wheel slip (rear tire traction loss at high speed)
    applyWheelSlipToSpeed();

    // 14. Update player scale (mega mushroom, squish)
    updatePlayerScale();

    // Store speed for next frame delta calculations
    lastSpeed = vehicleSpeed;
}

// ============================================================================
// updateDir()
// 0x8057a140 (380 bytes)
// ============================================================================
// Computes the movement direction difference between the current and last
// direction vectors. Updates vel1Dir (used by collision system) and
// dirDiff (used by visual effects and camera smoothing).
// ============================================================================
// @addr 0x8057a140
void PlayerSub10::updateDir() {
    // Compute difference between current and last direction
    dirDiff.x = dir.x - lastDir.x;
    dirDiff.y = dir.y - lastDir.y;
    dirDiff.z = dir.z - lastDir.z;

    // vel1Dir is the vertical velocity direction — used by KCL collision
    // and visual effects. On flat ground, this equals the up vector.
    // While airborne, it reflects the vertical component of movement.
    if (hopFrame > 0) {
        // Airborne: vertical velocity direction
        vel1Dir.x = 0.0f;
        vel1Dir.y = hopVelY > 0.0f ? 1.0f : (hopVelY < 0.0f ? -1.0f : 0.0f);
        vel1Dir.z = 0.0f;
    } else {
        // Grounded: vel1Dir = up vector
        vel1Dir = up;
    }

    // Update driving direction state machine
    // DRIVING_FWD if moving forward, DRIVING_BACK if moving backward
    if (vehicleSpeed > 2.0f) {
        drivingDirection = DRIVING_FWD;
        backwardsAllowCounter = 0;
    } else if (vehicleSpeed < -2.0f) {
        // Only enter backward state after sustained reverse
        backwardsAllowCounter++;
        if (backwardsAllowCounter > 30) {
            drivingDirection = DRIVING_BACK;
        }
    } else {
        // Near-zero speed: keep current state but don't increment
        // backwardsAllowCounter
    }
}

// ============================================================================
// updateAcceleration()
// 0x8057b9bc (864 bytes)
// ============================================================================
// Reads player input and computes the acceleration value applied to
// vehicleSpeed. Handles: forward acceleration, braking, offroad penalty,
// boost acceleration bonus, and stationary state.
// ============================================================================
// @addr 0x8057b9bc
void PlayerSub10::updateAcceleration() {
    // Default: no acceleration (coast)
    acceleration = 0.0f;

    // Read player state flags
    u32 stateFlags = 0;
    if (playerPointers) {
        stateFlags = *reinterpret_cast<u32*>(
            reinterpret_cast<char*>(playerPointers) + 0x0C);
    }

    // Don't apply player acceleration during boost/shock/bullet
    if (stateFlags & (FLAG_BOOSTING | FLAG_SHOCK | FLAG_BULLET)) {
        return;
    }

    // Base acceleration from vehicle parameters
    // In the original, this is read from KartParam.bin and scaled
    // by the CC class. Default: ~0.1 per frame at full speed
    f32 baseAccel = 0.1f * (1.0f + speedRatioCapped * 0.3f);

    // Apply KCL surface speed factor (offroad reduces acceleration)
    if (kclSpeedFactor != 0.0f) {
        baseAccel *= (1.0f + kclSpeedFactor);
    }

    // Forward acceleration (assuming always pressing A)
    // In the original, this reads the KPad accelerator button state
    acceleration = baseAccel;

    // Apply boost acceleration bonus if active
    acceleration += boost.acceleration;

    // Offroad penalty: reduce acceleration on offroad surfaces
    if (kclSpeedFactor < -0.3f) {
        acceleration *= 0.7f;
    }

    // Ink penalty: reduce acceleration when inked
    if (blooperCharacterInk > 0) {
        acceleration *= 0.85f;
    }

    // Shock penalty: reduce acceleration when shocked
    if (shockTimer > 0) {
        acceleration *= 0.3f;
        acceleration *= shockSpeedMultiplier;
    }

    // Speed multiplier from CC class / star / mega
    acceleration *= speedMultiplier;
}

// ============================================================================
// updateOffroad()
// 0x8057c3d4 (372 bytes)
// ============================================================================
// Processes KCL (Kart Collision) surface interactions. Detects offroad
// driving and applies speed/rotation penalties. Also counts floor
// collisions for landing detection.
// ============================================================================
// @addr 0x8057c3d4
void PlayerSub10::updateOffroad() {
    // Reset KCL factors each frame (set by collision system)
    // In the original, these are written by the KCL collision callback

    // Offroad invincibility countdown (from mega mushroom or boost start)
    if (offroadInvincibilityFrames > 0) {
        offroadInvincibilityFrames--;
        // While invincible, ignore offroad penalties
        kclSpeedFactor = 0.0f;
        kclRotFactor = 0.0f;
        kclWheelSpeedFactor = 0.0f;
        kclWheelRotFactor = 0.0f;
        return;
    }

    // Apply offroad speed penalty
    if (kclSpeedFactor < 0.0f) {
        // Offroad reduces top speed proportionally
        // kclSpeedFactor is typically -0.4 for offroad
        f32 offroadPenalty = 1.0f + kclSpeedFactor; // e.g. 0.6

        // Apply penalty to speed (drag)
        vehicleSpeed *= offroadPenalty;

        // Also reduce soft and hard speed limits while offroad
        softSpeedLimit *= offroadPenalty;
    }
}

// ============================================================================
// updateRotation()
// 0x8057c69c (420 bytes)
// ============================================================================
// Applies all rotation modifiers to compute the final rotation applied
// to the direction vector. Combines: steering turn, drift angle,
// boost rotation, wall hit rotation, and standstill boost rotation.
// ============================================================================
// @addr 0x8057c69c
void PlayerSub10::updateRotation() {
    f32 totalRotation = 0.0f;

    // Base steering turn (from updateTurn)
    totalRotation += effectiveTurn;

    // Drift-induced rotation
    if (driftState != 0) {
        // During drift, additional rotation from the drift angle
        // helps the kart turn sharper
        f32 driftRot = outsideDriftAngle * 0.02f;
        totalRotation += driftRot;
    }

    // Boost rotation (visual + slight directional change during boost)
    totalRotation += boostRot;

    // Diving rotation (trick-induced)
    totalRotation += divingRot;

    // Wall collision rotation recovery
    u32 stateFlags = 0;
    if (playerPointers) {
        stateFlags = *reinterpret_cast<u32*>(
            reinterpret_cast<char*>(playerPointers) + 0x08);
    }
    if (stateFlags & FLAG_WALL) {
        // Reduce rotation during wall collision to prevent
        // the kart from spinning into the wall
        totalRotation *= 0.5f;
    }

    // Apply the combined rotation
    updateVehicleRotationVector(totalRotation);
}

// ============================================================================
// updateStandstillBoostRot()
// 0x8057d1d4 (332 bytes)
// ============================================================================
// Allows the kart to rotate while stationary (speed near 0) when a
// boost is active. Without this, the kart would be unable to steer
// during a standstill boost (e.g., after being shocked).
// ============================================================================
// @addr 0x8057d1d4
void PlayerSub10::updateStandstillBoostRot() {
    // Only apply when nearly stationary
    if (vehicleSpeed > 5.0f) {
        return;
    }

    // Only apply when boost is active
    if (!boost.isActive() && mtBoost == 0) {
        return;
    }

    // Allow a small amount of rotation while stationary + boosting
    f32 standstillTurn = rawTurn * 0.03f;

    // Apply to the direction vector
    updateVehicleRotationVector(standstillTurn);
}

// ============================================================================
// updateUps()
// 0x8057d398 (476 bytes)
// ============================================================================
// Main ground physics update ("Ups" = "Update Physics State" in MKWii).
// Computes the final position delta from direction vector and speed,
// applies wheel slip, and integrates position. Also handles the
// smoothed up-vector interpolation toward the ground normal.
// ============================================================================
// @addr 0x8057d398
void PlayerSub10::updateUps() {
    // Compute position delta from direction and speed
    // pos += dir * vehicleSpeed * dt
    // (In the original, this writes to the player's position fields
    //  via playerPointers. For the port, the caller integrates.)

    // Interpolate smoothedUp toward the actual surface normal (up)
    // This gives smooth transitions when driving over curved surfaces
    f32 lerpRate = 0.15f;
    smoothedUp.x += (up.x - smoothedUp.x) * lerpRate;
    smoothedUp.y += (up.y - smoothedUp.y) * lerpRate;
    smoothedUp.z += (up.z - smoothedUp.z) * lerpRate;

    // Normalize smoothedUp to prevent drift
    f32 len = std::sqrt(smoothedUp.x * smoothedUp.x +
                        smoothedUp.y * smoothedUp.y +
                        smoothedUp.z * smoothedUp.z);
    if (len > 0.0001f) {
        smoothedUp.x /= len;
        smoothedUp.y /= len;
        smoothedUp.z /= len;
    }

    // Reset landing state (only valid for one frame after landing)
    hasLandingDir = false;
    landingDir.set(0.0f, 0.0f, 0.0f);
}

// ============================================================================
// updateManualDrift()
// 0x8057dc44 (600 bytes)
// ============================================================================
// Processes the manual drift state machine. When the player is drifting
// (driftState != 0), this function:
//   - Tracks the drift angle based on steering input
//   - Manages inside/outside drift bonus
//   - Handles drift end conditions (release button, speed too low)
// Virtual — bike override adds wheelie-specific drift logic.
// ============================================================================
// @addr 0x8057dc44
void PlayerSub10::updateManualDrift() {
    if (driftState == 0) {
        return;
    }

    // Read player input
    f32 stickX = sub_getTurnInput(this);

    // Drift requires minimum speed to maintain
    if (vehicleSpeed < 10.0f) {
        endDrift();
        return;
    }

    // Update drift angle based on stick input
    // Positive stickX = turn right, negative = turn left
    // The drift angle tracks how far off-center the kart is drifting
    updateDriftAngle();

    // Compute outside drift bonus
    // This is the additional turn rate gained from drifting,
    // scaling with the absolute drift angle
    f32 absDriftAngle = outsideDriftAngle;
    if (absDriftAngle < 0.0f) absDriftAngle = -absDriftAngle;

    // Bonus is proportional to drift angle, with a cap
    outsideDriftBonus = absDriftAngle * 0.3f;
    if (outsideDriftBonus > 0.15f) {
        outsideDriftBonus = 0.15f;
    }

    // Drift end condition: check if the drift button was released
    // In the original, this reads from the KPad button state
    // (simulated here — the actual input check is in the caller)
}

// ============================================================================
// updateAutoDrift()
// 0x8057e0dc (520 bytes)
// ============================================================================
// Automatic drift system — when the player turns sharply at speed without
// explicitly initiating a drift, the game auto-drifts to prevent loss of
// control. Auto-drift is weaker than manual drift and charges MT slower.
// ============================================================================
// @addr 0x8057e0dc
void PlayerSub10::updateAutoDrift() {
    if (driftState != 0) {
        return; // Manual drift takes priority
    }

    // Auto-drift triggers at high turn rates and high speed
    f32 absTurn = rawTurn;
    if (absTurn < 0.0f) absTurn = -absTurn;

    if (absTurn > 0.8f && vehicleSpeed > baseSpeed * 0.6f) {
        initDriftAuto();
    }
}

// ============================================================================
// updateAutoDriftAngle()
// 0x8057e3f4 (256 bytes)
// ============================================================================
// Updates the drift angle during auto-drift. Auto-drift uses a reduced
// angle rate compared to manual drift.
// ============================================================================
// @addr 0x8057e3f4
void PlayerSub10::updateAutoDriftAngle() {
    if (driftState == 0) {
        return;
    }

    // Auto-drift angle update at reduced rate
    f32 stickX = sub_getTurnInput(this);
    f32 angleDelta = stickX * 0.005f; // Reduced from manual's ~0.01

    outsideDriftAngle += angleDelta;

    // Clamp drift angle
    if (outsideDriftAngle > 1.2f) {
        outsideDriftAngle = 1.2f;
    } else if (outsideDriftAngle < -1.2f) {
        outsideDriftAngle = -1.2f;
    }
}

// ============================================================================
// initDriftAuto()
// 0x8057e638 (80 bytes)
// ============================================================================
// Initializes auto-drift state. Sets driftState to the auto-drift value
// and saves the initial drift parameters.
// ============================================================================
// @addr 0x8057e638
void PlayerSub10::initDriftAuto() {
    driftState = 2; // Auto-drift state
    mtCharge = 0;
    mtBoost = 0;
    outsideDriftAngle = 0.0f;
    outsideDriftBonus = 0.0f;
    initDriftAngle();
}

// ============================================================================
// initDriftForced()
// 0x8057e6f4 (112 bytes)
// ============================================================================
// Initializes a forced drift (triggered by game events like item hits,
// not player input). Sets driftState and initializes drift angle.
// ============================================================================
// @addr 0x8057e6f4
void PlayerSub10::initDriftForced() {
    driftState = 3; // Forced drift state
    mtCharge = 0;
    mtBoost = 0;
    outsideDriftAngle = 0.0f;
    outsideDriftBonus = 0.0f;
    initDriftAngle();
}

// ============================================================================
// endDrift()
// 0x8057e77c (192 bytes)
// ============================================================================
// Ends the current drift state. If MT charge is above threshold,
// releases a mini-turbo boost. Resets all drift parameters.
// ============================================================================
// @addr 0x8057e77c
void PlayerSub10::endDrift() {
    if (driftState == 0) {
        return;
    }

    // Release MT boost if charge was accumulated
    if (mtCharge >= MT_LEVEL_1) {
        u8 boostLevel = 0;
        if (mtBoost >= 3) {
            boostLevel = 2; // SMT
        } else if (mtBoost >= 2) {
            boostLevel = 1; // MT level 2
        } else {
            boostLevel = 0; // MT level 1
        }
        releaseMt(boostLevel, 0);
    }

    // Reset drift state
    driftState = 0;
    mtCharge = 0;
    mtBoost = 0;
    outsideDriftAngle = 0.0f;
    outsideDriftBonus = 0.0f;
}

// ============================================================================
// vec3CrossMagnitude()
// 0x8057e99c (64 bytes)
// ============================================================================
// Computes the magnitude of the cross product of two vectors stored
// in the player's direction fields. Used by drift angle calculations.
// ============================================================================
// @addr 0x8057e99c
f32 PlayerSub10::vec3CrossMagnitude() {
    Vec3 cross = EGG::Vector3f::cross(dir, outsideDriftLastDir);
    return std::sqrt(cross.x * cross.x + cross.y * cross.y + cross.z * cross.z);
}

// ============================================================================
// updateDriftAngle()
// 0x8057eab8 (224 bytes)
// ============================================================================
// Updates the outside drift angle based on steering input and current
// movement direction. The drift angle represents how far off-center the
// kart's rear is sliding relative to its front.
// ============================================================================
// @addr 0x8057eab8
void PlayerSub10::updateDriftAngle() {
    if (driftState == 0) {
        return;
    }

    f32 stickX = sub_getTurnInput(this);

    // Drift angle rate scales with input magnitude
    f32 angleDelta = stickX * 0.012f;

    // Apply speed scaling — faster drifts turn sharper
    angleDelta *= (0.5f + speedRatioCapped * 0.5f);

    outsideDriftAngle += angleDelta;

    // Clamp drift angle to physical limits
    if (outsideDriftAngle > 1.5f) {
        outsideDriftAngle = 1.5f;
    } else if (outsideDriftAngle < -1.5f) {
        outsideDriftAngle = -1.5f;
    }
}

// ============================================================================
// initDriftAngle()
// 0x8057ec28 (80 bytes)
// ============================================================================
// Initializes the drift angle from the current steering input.
// Called at drift start to set the initial drift direction.
// ============================================================================
// @addr 0x8057ec28
void PlayerSub10::initDriftAngle() {
    f32 stickX = sub_getTurnInput(this);

    // Initial drift angle based on stick direction
    outsideDriftAngle = stickX * 0.3f;
    outsideDriftLastDir = dir;
}

// ============================================================================
// updateHopAndSlipdrift()
// 0x8057e804 (488 bytes)
// ============================================================================
// Combines hop physics with slipdrift (drift initiation during a hop).
// When the player hops while turning, a slipdrift can be initiated
// on landing, allowing instant drift entry.
// ============================================================================
// @addr 0x8057e804
void PlayerSub10::updateHopAndSlipdrift() {
    if (hopFrame == 0) {
        return;
    }

    // While airborne during a hop, track the stick input
    // for slipdrift initiation on landing
    if (hopFrame == 1) {
        // First frame of hop — save stick input
        hopStickX = (s32)(sub_getTurnInput(this) * 127.0f);
    }

    // Continue normal hop physics
    // (updateUpsWhileAirborne handles the actual hop trajectory)
}

// ============================================================================
// applyWheelSlipToSpeed()
// 0x8057c5e8 (256 bytes)
// ============================================================================
// Applies wheel slip effect — at very high speeds or during sharp turns,
// the rear wheels lose traction and the kart slides. This reduces speed
// slightly and creates the characteristic MKWii high-speed slide feel.
// ============================================================================
// @addr 0x8057c5e8
void PlayerSub10::applyWheelSlipToSpeed() {
    // Wheel slip triggers at high speed ratios
    if (speedRatio < 1.1f) {
        return;
    }

    // Slip amount increases with speed beyond the threshold
    f32 slipFactor = (speedRatio - 1.1f) * 0.02f;

    // Also increased by sharp turns
    f32 absTurn = effectiveTurn;
    if (absTurn < 0.0f) absTurn = -absTurn;
    slipFactor += absTurn * 0.5f;

    // Apply speed reduction
    vehicleSpeed *= (1.0f - slipFactor);
}

// ============================================================================
// activateBoostSlot(type, frames)
// 0x8057f090 (344 bytes)
// ============================================================================
// Activates a boost in the specified slot. Sets the frame counter and
// updates the boost type bitmask. Multiple boost slots can be active
// simultaneously; their effects stack additively.
// ============================================================================
// @addr 0x8057f090
void PlayerSub10::activateBoostSlot(u32 type, s16 frames) {
    if (type > 5) return;

    // Set frame counter for this boost slot
    boost.frames[type] = frames;

    // Mark this boost type as active
    boost.types |= (1 << type);

    // Recalculate combined boost multiplier from active slots
    boost.multiplier = 0.0f;
    boost.acceleration = 0.0f;
    boost.speedLimit = 0.0f;

    for (s32 i = 0; i < 6; i++) {
        if (boost.frames[i] > 0) {
            // Each boost type contributes differently to the multiplier
            switch (i) {
                case BOOST_TYPE_MINI_TURBO:
                    boost.acceleration += 0.15f;
                    boost.speedLimit += 5.0f;
                    break;
                case BOOST_TYPE_STAR:
                    boost.multiplier += 1.5f;
                    boost.acceleration += 0.2f;
                    break;
                case BOOST_TYPE_MUSHROOM:
                    boost.acceleration += 0.5f;
                    boost.speedLimit += 15.0f;
                    break;
                case BOOST_TYPE_TRICK:
                    boost.acceleration += 0.2f;
                    boost.speedLimit += 3.0f;
                    break;
                case BOOST_TYPE_MEGA:
                    boost.multiplier += 1.0f;
                    boost.acceleration += 0.1f;
                    break;
                default:
                    break;
            }
        }
    }
}

// ============================================================================
// activateBoostMushroomClean()
// 0x8057f1d0 (260 bytes)
// ============================================================================
// Activates a clean mushroom boost (not from item roulette). Used by
// boost pads on the track and some special situations.
// ============================================================================
// @addr 0x8057f1d0
void PlayerSub10::activateBoostMushroomClean() {
    // Mushroom boost: 60 frames of acceleration boost
    activateBoostSlot(BOOST_TYPE_MUSHROOM, 60);
}

// ============================================================================
// activateMushroom()
// 0x8057f3d8 (332 bytes)
// ============================================================================
// Activates a mushroom boost from the player's item inventory.
// Slightly different from boost pad mushroom (different animation trigger).
// ============================================================================
// @addr 0x8057f3d8
void PlayerSub10::activateMushroom() {
    // Set mushroom visual state flag
    // In the original: *(stateBase + 0x08) |= FLAG_USING_MUSHROOM;

    // Mushroom boost: 45 frames (shorter than pad mushroom)
    mushroomBoost2 = 45;
    activateBoostSlot(BOOST_TYPE_MUSHROOM, 45);

    // End any wheelie when using mushroom (bike-specific, no-op for kart)
    cancelWheelie();
}

// ============================================================================
// activateBoostStart()
// 0x8057f630 (288 bytes)
// ============================================================================
// Activates the start-line boost from rocket start timing.
// Duration depends on how well the player timed the start.
// ============================================================================
// @addr 0x8057f630
void PlayerSub10::activateBoostStart() {
    // Start boost: 30 frames of MT-type boost
    activateBoostSlot(BOOST_TYPE_MINI_TURBO, 30);

    // Grant offroad invincibility during start boost
    offroadInvincibilityFrames = 30;
}

// ============================================================================
// applyStartBoost(frames)
// 0x8058212c (120 bytes)
// ============================================================================
// Applies a start boost with a specific duration. Called by the race
// start system based on the player's rocket start timing.
// ============================================================================
// @addr 0x8058212c
void PlayerSub10::applyStartBoost(s16 frames) {
    if (frames > 0) {
        activateBoostSlot(BOOST_TYPE_MINI_TURBO, frames);
        offroadInvincibilityFrames = frames;
    }
}

// ============================================================================
// endTrick()
// 0x8057f7a8 (352 bytes)
// ============================================================================
// Ends a trick/stunt and activates the corresponding boost reward.
// Boost duration depends on trick category:
//   - Stunt (basic): 20 frames
//   - Single flip: 30 frames
//   - Double flip: 40 frames
// ============================================================================
// @addr 0x8057f7a8
void PlayerSub10::endTrick() {
    if (!trick) {
        return;
    }

    // Get trick score (determines boost duration)
    s16 score = trick->calcTrickScore();

    // Map trick score to boost frames
    s16 boostFrames = 20; // Minimum stunt boost
    if (score >= 10) {
        boostFrames = 30; // Single flip
    }
    if (score >= 20) {
        boostFrames = 40; // Double flip
    }

    // Activate trick boost
    activateBoostSlot(BOOST_TYPE_TRICK, boostFrames);

    // End trick state
    trick->end();
}

// ============================================================================
// activateZipperBoost()
// 0x8057f96c (396 bytes)
// ============================================================================
// Activates a zipper boost (from zipper item or track zipper pads).
// Zipper provides a sustained speed boost with a gradual ramp-up.
// ============================================================================
// @addr 0x8057f96c
void PlayerSub10::activateZipperBoost() {
    activateBoostZipperInternal();

    // Zipper boost duration
    zipperBoost = 90;
    zipperBoostMax = 90;
}

// ============================================================================
// activateBoostZipperInternal()
// 0x8057fb6c (184 bytes)
// ============================================================================
// Internal zipper boost activation. Sets up the boost slot and
// initial speed parameters for the zipper effect.
// ============================================================================
// @addr 0x8057fb6c
void PlayerSub10::activateBoostZipperInternal() {
    // Zipper uses TRICK slot for simplicity
    activateBoostSlot(BOOST_TYPE_TRICK, 90);

    // Immediate speed boost
    vehicleSpeed += 15.0f;
    if (vehicleSpeed > hardSpeedLimit + 10.0f) {
        vehicleSpeed = hardSpeedLimit + 10.0f;
    }
}

// ============================================================================
// clearBoost()
// ============================================================================
// Clears all active boost state. Used by item effects and respawn.
// ============================================================================
void PlayerSub10::clearBoost() {
    for (s32 i = 0; i < 6; i++) {
        boost.frames[i] = 0;
    }
    boost.types = 0;
    boost.multiplier = 0.0f;
    boost.acceleration = 0.0f;
    boost.speedLimit = 0.0f;

    mtBoost = 0;
    mtCharge = 0;
    smtCharge = 0;
    mushroomBoost2 = 0;
    zipperBoost = 0;
    ssmtCharge = 0;
    boostRot = 0.0f;
}

// ============================================================================
// updateBoost()
// 0x80582694 (inlined)
// ============================================================================
// Per-frame boost update. Decrements boost slot timers, recalculates
// combined boost effects, and handles boost expiration.
// ============================================================================
// @addr 0x80582694
void PlayerSub10::updateBoost() {
    bool anyActive = false;

    // Decrement each active boost slot
    for (s32 i = 0; i < 6; i++) {
        if (boost.frames[i] > 0) {
            boost.frames[i]--;
            if (boost.frames[i] > 0) {
                anyActive = true;
            } else {
                // This boost just expired — clear its type bit
                boost.types &= ~(1 << i);
            }
        }
    }

    // Decrement MT boost timer
    if (mtBoost > 0) {
        mtBoost--;
        anyActive = true;
    }

    // Decrement mushroom boost timer
    if (mushroomBoost2 > 0) {
        mushroomBoost2--;
        anyActive = true;
    }

    // Decrement zipper boost
    if (zipperBoost > 0) {
        zipperBoost--;
        anyActive = true;
    }

    // Recalculate combined boost effects
    if (boost.types != 0) {
        boost.multiplier = 0.0f;
        boost.acceleration = 0.0f;
        boost.speedLimit = 0.0f;

        for (s32 i = 0; i < 6; i++) {
            if (boost.frames[i] > 0) {
                switch (i) {
                    case BOOST_TYPE_MINI_TURBO:
                        boost.acceleration += 0.15f;
                        boost.speedLimit += 5.0f;
                        break;
                    case BOOST_TYPE_STAR:
                        boost.multiplier += 1.5f;
                        boost.acceleration += 0.2f;
                        break;
                    case BOOST_TYPE_MUSHROOM:
                        boost.acceleration += 0.5f;
                        boost.speedLimit += 15.0f;
                        break;
                    case BOOST_TYPE_TRICK:
                        boost.acceleration += 0.2f;
                        boost.speedLimit += 3.0f;
                        break;
                    case BOOST_TYPE_MEGA:
                        boost.multiplier += 1.0f;
                        boost.acceleration += 0.1f;
                        break;
                    default:
                        break;
                }
            }
        }
    } else {
        boost.multiplier = 0.0f;
        boost.acceleration = 0.0f;
        boost.speedLimit = 0.0f;
    }

    // Update boost rotation (slight turn during boost for visual effect)
    if (anyActive) {
        boostRot *= 0.95f; // Decay boost rotation
    } else {
        boostRot = 0.0f;
    }

    // Set boost state flag
    if (playerPointers && (boost.types != 0 || mtBoost > 0)) {
        u32* stateFlags = reinterpret_cast<u32*>(
            reinterpret_cast<char*>(playerPointers) + 0x08);
        *stateFlags |= FLAG_BOOSTING;
    } else if (playerPointers) {
        u32* stateFlags = reinterpret_cast<u32*>(
            reinterpret_cast<char*>(playerPointers) + 0x08);
        *stateFlags &= ~FLAG_BOOSTING;
    }
}

// ============================================================================
// releaseMt(level, unk)
// 0x80582f9c (264 bytes)
// ============================================================================
// Releases a mini-turbo boost at the given level. The boost duration
// depends on the MT level:
//   - Level 0 (basic MT): 30 frames
//   - Level 1 (enhanced): 40 frames
//   - Level 2 (SMT):      60 frames
// ============================================================================
// @addr 0x80582f9c
void PlayerSub10::releaseMt(u8 level, u8 unk) {
    (void)unk;

    s16 boostFrames = 30;
    if (level >= 2) {
        boostFrames = 60; // SMT
        ssmtCharge++;
    } else if (level >= 1) {
        boostFrames = 40; // Enhanced MT
    }

    // Activate MT boost
    activateBoostSlot(BOOST_TYPE_MINI_TURBO, boostFrames);

    // Apply speed boost immediately
    vehicleSpeed += 3.0f * (level + 1);

    // Grant offroad invincibility briefly
    offroadInvincibilityFrames = 10;

    // Reset MT charge after release
    mtCharge = 0;
    mtBoost = 0;
}

// ============================================================================
// updateStar()
// 0x80580998 (200 bytes)
// ============================================================================
// Per-frame update for star power-up. Decrements the star timer,
// applies speed boost, and deactivates when expired.
// ============================================================================
// @addr 0x80580998
void PlayerSub10::updateStar() {
    if (starTimer <= 0) {
        return;
    }

    starTimer--;

    // Apply star speed boost
    speedMultiplier = 1.5f;

    // Apply star boost to boost system
    activateBoostSlot(BOOST_TYPE_STAR, starTimer);

    if (starTimer <= 0) {
        deactivateStar(0);
    }
}

// ============================================================================
// deactivateStar(resetScale)
// 0x80580a84 (128 bytes)
// ============================================================================
// Deactivates star power-up. Clears invincibility flag and resets
// speed multiplier.
// ============================================================================
// @addr 0x80580a84
void PlayerSub10::deactivateStar(u8 resetScale) {
    (void)resetScale;

    starTimer = 0;
    speedMultiplier = 1.0f;

    // Clear invincibility flag
    if (playerPointers) {
        u32* stateFlags = reinterpret_cast<u32*>(
            reinterpret_cast<char*>(playerPointers) + 0x08);
        *stateFlags &= ~FLAG_INVINCIBLE;
    }

    // Clear star boost slot
    boost.frames[BOOST_TYPE_STAR] = 0;
    boost.types &= ~(1 << BOOST_TYPE_STAR);
}

// ============================================================================
// activateMegaVirtual()
// 0x80580b14 (virtual impl)
// ============================================================================
// Virtual dispatch for mega mushroom activation. Base implementation
// calls startMega().
// ============================================================================
void PlayerSub10::activateMegaVirtual() {
    startMega(0);
}

// ============================================================================
// startMega(resetScale)
// 0x80580cdc (160 bytes)
// ============================================================================
// Starts the mega mushroom effect. Sets scale to 2x, starts timer,
// and activates invincibility.
// ============================================================================
// @addr 0x80580cdc
void PlayerSub10::startMega(u8 resetScale) {
    (void)resetScale;

    megaScale = 2.0f;
    MegaTimer = 600; // 10 seconds
    scale.set(megaScale, megaScale, megaScale);
    someScale = megaScale;

    // Activate mega boost
    activateBoostSlot(BOOST_TYPE_MEGA, 600);

    // Set mega state flag
    if (playerPointers) {
        u32* stateFlags = reinterpret_cast<u32*>(
            reinterpret_cast<char*>(playerPointers) + 0x0C);
        *stateFlags |= FLAG_MEGA;
    }
}

// ============================================================================
// updateMega()
// 0x80580dc0 (200 bytes)
// ============================================================================
// Per-frame update for mega mushroom. Decrements timer, maintains
// scale, and deactivates when expired.
// ============================================================================
// @addr 0x80580dc0
void PlayerSub10::updateMega() {
    if (MegaTimer <= 0) {
        return;
    }

    MegaTimer--;

    if (MegaTimer <= 0) {
        // Shrink back to normal
        megaScale = 1.0f;
        scale.set(1.0f, 1.0f, 1.0f);
        someScale = 1.0f;

        // Clear mega flag
        if (playerPointers) {
            u32* stateFlags = reinterpret_cast<u32*>(
                reinterpret_cast<char*>(playerPointers) + 0x0C);
            *stateFlags &= ~FLAG_MEGA;
        }
    }
}

// ============================================================================
// startCrush(frames)
// 0x80580f28 (120 bytes)
// ============================================================================
// Initiates a crush state (e.g., from being squished by a mega player).
// Sets the crush timer and applies visual compression.
// ============================================================================
// @addr 0x80580f28
void PlayerSub10::startCrush(s16 frames) {
    crushTimer = frames;
    // Visual compression applied in updatePlayerScale
}

// ============================================================================
// updateCrush()
// 0x80580f9c (160 bytes)
// ============================================================================
// Per-frame update for crush state. Decrements timer and ends crush
// when expired.
// ============================================================================
// @addr 0x80580f9c
void PlayerSub10::updateCrush() {
    if (crushTimer <= 0) {
        return;
    }

    crushTimer--;

    if (crushTimer <= 0) {
        endCrush();
    }
}

// ============================================================================
// endCrush()
// 0x80581034 (80 bytes)
// ============================================================================
// Ends crush state. Restores normal scale.
// ============================================================================
// @addr 0x80581034
void PlayerSub10::endCrush() {
    crushTimer = 0;
    // Scale restoration handled by updatePlayerScale
}

// ============================================================================
// updateInvincibility()
// 0x805813e8 (120 bytes)
// ============================================================================
// Updates invincibility state (from star or mega). Manages the
// invincibility flag and associated effects.
// ============================================================================
// @addr 0x805813e8
void PlayerSub10::updateInvincibility() {
    bool isInvincible = false;

    if (starTimer > 0 || MegaTimer > 0) {
        isInvincible = true;
    }

    if (playerPointers) {
        u32* stateFlags = reinterpret_cast<u32*>(
            reinterpret_cast<char*>(playerPointers) + 0x08);
        if (isInvincible) {
            *stateFlags |= FLAG_INVINCIBLE;
        } else {
            *stateFlags &= ~FLAG_INVINCIBLE;
        }
    }
}

// ============================================================================
// updatePlayerScale()
// 0x8058160c (272 bytes)
// ============================================================================
// Per-frame player scale update. Interpolates scale toward target values
// for mega, crush, and squish effects.
// ============================================================================
// @addr 0x8058160c
void PlayerSub10::updatePlayerScale() {
    f32 targetScaleX = 1.0f;
    f32 targetScaleY = 1.0f;
    f32 targetScaleZ = 1.0f;

    // Mega mushroom override
    if (MegaTimer > 0) {
        targetScaleX = megaScale;
        targetScaleY = megaScale;
        targetScaleZ = megaScale;
    }

    // Crush compression
    if (crushTimer > 0) {
        targetScaleY = 0.3f;
        targetScaleX = 1.5f;
        targetScaleZ = 1.5f;
    }

    // Smoothly interpolate toward target
    f32 lerpRate = 0.2f;
    scale.x += (targetScaleX - scale.x) * lerpRate;
    scale.y += (targetScaleY - scale.y) * lerpRate;
    scale.z += (targetScaleZ - scale.z) * lerpRate;
}

// ============================================================================
// startSquish(frames)
// ============================================================================
void PlayerSub10::startSquish(s16 frames) {
    crushTimer = frames;
}

// ============================================================================
// tryStartSquish()
// ============================================================================
void PlayerSub10::tryStartSquish() {
    // Squish is triggered by external events (mega player collision)
    // — no autonomous trigger
}

// ============================================================================
// updateSquish()
// ============================================================================
void PlayerSub10::updateSquish() {
    // Squish is handled by updateCrush in the base implementation
    updateCrush();
}

// ============================================================================
// cancelSquish()
// ============================================================================
void PlayerSub10::cancelSquish() {
    crushTimer = 0;
}

// ============================================================================
// applySquish()
// ============================================================================
void PlayerSub10::applySquish() {
    // Squish scale applied in updatePlayerScale
}

// ============================================================================
// Lightning system
// ============================================================================
void PlayerSub10::applyLightning() {
    applyLightningByCharacter();
}

void PlayerSub10::applyLightningByCharacter() {
    // Lightning: spin out and lose items
    shockTimer = 180; // 3 seconds
    shockSpeedMultiplier = 0.0f;
}

void PlayerSub10::resetLightningEffect() {
    shockTimer = 0;
    shockSpeedMultiplier = 1.0f;
}

void PlayerSub10::resetLightningEffect2() {
    resetLightningEffect();
}

void PlayerSub10::applyLightningWithDuration(s16 duration, u8 unk0, u8 unk1) {
    (void)unk0;
    (void)unk1;
    shockTimer = duration;
    shockSpeedMultiplier = 0.0f;
}

void PlayerSub10::applyLightningEffect(s16 frames, u8 unk0, u8 unk1) {
    (void)unk0;
    (void)unk1;
    shockTimer = frames;
    shockSpeedMultiplier = 0.0f;
}

// ============================================================================
// TC (Trick Cancel) system
// ============================================================================
void PlayerSub10::activateTc() {
    // TC cancels current trick state
    if (trick) {
        trick->end();
    }
}

void PlayerSub10::deactivateTc() {
    // No-op for base class
}

// ============================================================================
// updateInk()
// 0x80581b1c (168 bytes)
// ============================================================================
// Per-frame ink effect update. Decrements ink timer and clears
// ink flag when expired.
// ============================================================================
// @addr 0x80581b1c
void PlayerSub10::updateInk() {
    if (blooperCharacterInk <= 0) {
        return;
    }

    blooperCharacterInk--;

    if (blooperCharacterInk <= 0) {
        // Clear ink flag
        if (playerPointers) {
            u32* stateFlags = reinterpret_cast<u32*>(
                reinterpret_cast<char*>(playerPointers) + 0x0C);
            *stateFlags &= ~FLAG_INK;
        }
    }
}

// ============================================================================
// Jump pad system
// ============================================================================
void PlayerSub10::tryStartJumpPad() {
    // Jump pad activation is handled by the collision system
    // calling setInitialPhysicsValues with jump pad parameters
}

void PlayerSub10::tryEndJumpPad() {
    // Clear jump pad state when leaving the pad
    jumpPadMinSpeed = 0.0f;
    jumpPadMaxSpeed = 0.0f;
    rampBoost = 0;
}

// ============================================================================
// updateStickyRoad()
// 0x80583b88 (256 bytes)
// ============================================================================
// Updates sticky road surface effect (e.g., honey or mud in some tracks).
// Reduces acceleration and applies a maximum speed cap while on the surface.
// ============================================================================
// @addr 0x80583b88
void PlayerSub10::updateStickyRoad() {
    if (specialFloor == 0) {
        return;
    }

    // Sticky road reduces speed and acceleration
    vehicleSpeed *= 0.98f;
    acceleration *= 0.5f;

    // Cap speed on sticky surfaces
    if (vehicleSpeed > baseSpeed * 0.5f) {
        vehicleSpeed = baseSpeed * 0.5f;
    }
}

// ============================================================================
// setInitialPhysicsValues(position, angles)
// 0x80584044 (272 bytes)
// ============================================================================
// Sets the initial physics state for spawn position, cannon exit,
// jump pad exit, or respawn.
// ============================================================================
// @addr 0x80584044
void PlayerSub10::setInitialPhysicsValues(const Vec3* position, const Vec3* angles) {
    if (position) {
        // In the original, this writes to the player's position via
        // playerPointers. The direction vector is derived from angles.
        dir.set(1.0f, 0.0f, 0.0f);

        // Compute direction from angles (pitch, yaw)
        if (angles) {
            f32 yaw = angles->y;
            f32 cosY = std::cos(yaw);
            f32 sinY = std::sin(yaw);
            dir.x = cosY;
            dir.z = sinY;
            dir.y = 0.0f;
        }
    }

    // Reset speed
    vehicleSpeed = baseSpeed;
    lastSpeed = baseSpeed;

    // Reset drift
    driftState = 0;
    mtCharge = 0;
    mtBoost = 0;

    // Reset hop
    hopFrame = 0;
    hopVelY = 0.0f;
    hopPosY = 0.0f;
}

// ============================================================================
// doRespawn()
// 0x80584334 (440 bytes)
// ============================================================================
// Respawns the player after going out of bounds or being eliminated.
// Resets physics state, teleports to last valid position, and applies
// invincibility frames.
// ============================================================================
// @addr 0x80584334
void PlayerSub10::doRespawn() {
    // Reset all physics state
    clearBoost();

    // Reset speed
    vehicleSpeed = baseSpeed * 0.5f;
    lastSpeed = vehicleSpeed;
    acceleration = 0.0f;

    // Reset drift
    driftState = 0;
    mtCharge = 0;
    mtBoost = 0;
    outsideDriftAngle = 0.0f;
    outsideDriftBonus = 0.0f;

    // Reset hop
    hopFrame = 0;
    hopVelY = 0.0f;
    hopPosY = 0.0f;

    // Reset direction to forward
    dir.set(1.0f, 0.0f, 0.0f);
    lastDir.set(1.0f, 0.0f, 0.0f);
    up.set(0.0f, 1.0f, 0.0f);
    smoothedUp.set(0.0f, 1.0f, 0.0f);

    // Reset status effects
    starTimer = 0;
    MegaTimer = 0;
    shockTimer = 0;
    crushTimer = 0;
    blooperCharacterInk = 0;
    scale.set(1.0f, 1.0f, 1.0f);
    megaScale = 1.0f;
    speedMultiplier = 1.0f;
    shockSpeedMultiplier = 1.0f;

    // Reset driving direction
    drivingDirection = DRIVING_FWD;
    backwardsAllowCounter = 0;

    // Apply respawn invincibility
    offroadInvincibilityFrames = 120; // 2 seconds
}

// ============================================================================
// enterCannon()
// 0x8058498c (160 bytes)
// ============================================================================
// Initiates cannon sequence. The player is locked into auto-pilot and
// launched along a fixed trajectory.
// ============================================================================
// @addr 0x8058498c
void PlayerSub10::enterCannon() {
    // Set cannon state flag
    if (playerPointers) {
        u32* stateFlags = reinterpret_cast<u32*>(
            reinterpret_cast<char*>(playerPointers) + 0x08);
        *stateFlags |= FLAG_TABLE_STATE;
    }
}

// ============================================================================
// updateCannon()
// 0x80584d58 (280 bytes)
// ============================================================================
// Per-frame cannon update. Moves the player along the cannon trajectory
// at a fixed speed and angle.
// ============================================================================
// @addr 0x80584d58
void PlayerSub10::updateCannon() {
    // Cannon auto-pilot: fixed speed along a predetermined trajectory
    // The actual trajectory is set by enterCannon() via the race director
    vehicleSpeed = jumpPadMaxSpeed;

    // No steering during cannon
    effectiveTurn = 0.0f;
    conservedTurn = 0.0f;
}

// ============================================================================
// activateBullet(unk)
// 0x805858ac (336 bytes)
// ============================================================================
// Activates Bullet Bill auto-pilot. The player rockets along the track
// at extreme speed, invincible and auto-steering.
// ============================================================================
// @addr 0x805858ac
void PlayerSub10::activateBullet(int unk) {
    (void)unk;

    // Set bullet state flag
    if (playerPointers) {
        u32* stateFlags = reinterpret_cast<u32*>(
            reinterpret_cast<char*>(playerPointers) + 0x08);
        *stateFlags |= FLAG_BULLET;
    }

    // Bullet speed: 3x base speed
    vehicleSpeed = baseSpeed * 3.0f;
    hardSpeedLimit = baseSpeed * 3.0f;
}

// ============================================================================
// updateDiving()
// 0x805869dc (168 bytes)
// ============================================================================
// Per-frame diving (underwater) update. Applies drag and prevents
// boosting while submerged.
// ============================================================================
// @addr 0x805869dc
void PlayerSub10::updateDiving() {
    // Underwater physics
    vehicleSpeed *= 0.95f; // Heavy water drag

    // Prevent boosting underwater
    if (boost.types != 0) {
        clearBoost();
    }
}

// ============================================================================
// updateSlipstream()
// 0x80586fa8 (392 bytes)
// ============================================================================
// Per-frame slipstream (drafting) update. Accumulates charge when
// behind another player, and activates boost when fully charged.
// ============================================================================
// @addr 0x80586fa8
void PlayerSub10::updateSlipstream() {
    if (slipstreamCharge <= 0) {
        return;
    }

    // Slipstream charge builds while behind another player
    // (accumulated by the collision/race system)
    // When fully charged (>= threshold), activate boost
    const s32 SLIPSTREAM_THRESHOLD = 300;
    if (slipstreamCharge >= SLIPSTREAM_THRESHOLD) {
        activateBoostSlot(BOOST_TYPE_TRICK, 60);
        slipstreamCharge = 0;
    }
}

// ============================================================================
// updateSpecialFloor()
// 0x80587590 (inlined)
// ============================================================================
// Per-frame special floor update. Checks the specialFloor type and
// applies the corresponding effect (boost pad, cannon, sticky road, etc.)
// ============================================================================
// @addr 0x80587590
void PlayerSub10::updateSpecialFloor() {
    if (specialFloor == 0) {
        return;
    }

    // Special floor types are handled by their respective systems:
    // - Boost pads: handled by tryStartJumpPad / tryEndJumpPad
    // - Sticky road: handled by updateStickyRoad
    // - Cannon: handled by enterCannon / updateCannon
    // This function coordinates the dispatch
    updateStickyRoad();
}

// ============================================================================
// updateHopPhysics()
// 0x80579968 (348 bytes)
// ============================================================================
// Dedicated hop physics update. Called when the player is in a hop state
// to update vertical trajectory and detect landing.
// ============================================================================
// @addr 0x80579968
void PlayerSub10::updateHopPhysics() {
    if (hopFrame <= 0) {
        return;
    }

    // Apply gravity
    hopVelY += hopGravity;

    // Update vertical position
    hopPosY += hopVelY;

    // Check for landing
    if (hopPosY <= 0.0f && hopVelY < 0.0f) {
        // Landed
        hopFrame = 0;
        hopVelY = 0.0f;
        hopPosY = 0.0f;

        // Restore ground state
        up = hopUp;
        hasLandingDir = true;
        landingDir = hopDir;
    } else {
        hopFrame++;

        // Tilt up vector toward world up while airborne
        f32 lerpRate = 0.1f;
        up.x += (0.0f - up.x) * lerpRate;
        up.y += (1.0f - up.y) * lerpRate;
        up.z += (0.0f - up.z) * lerpRate;
    }
}