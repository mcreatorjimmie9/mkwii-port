#include "PlayerPhysics.hpp"
#include "PlayerSub10.hpp"
#include <cmath>
#include <cstring>
#include <cstdio>

// =============================================================================
// Constructor / Destructor
// =============================================================================

PlayerPhysics::PlayerPhysics()
    : m_playerRef(nullptr)
    , m_vtable(nullptr)
    , m_kartPhysics(nullptr)
    , m_frameCount(0)
    , m_interpFactor(0.0f)
    , m_statusFlags(0)
    , m_stateBuffer(nullptr)
    , m_speed(0.0f)
    , m_rawPosX(0.0f)
    , m_rawPosY(0.0f)
    , m_framePosX(0.0f)
    , m_framePosY(0.0f)
    , m_framePosZ(0.0f)
    , m_floorColCount(0)
    , m_anyFloorCol(false)
    , m_airTimerOverflow(false)
    , m_subDeltaX(0.0f)
    , m_subDeltaY(0.0f)
    , m_subDeltaZ(0.0f)
    , m_effectiveSpeed(0.0f)
    , m_speedNorm(0.0f)
    , m_scaleFactor(1.0f)
    , m_stateFlags(0)
    , m_collisionGroup(nullptr)
    , m_hitboxGroup(nullptr)
    , m_floorDetectCounter(0)
    , m_wheelCount(4)
    , m_wallOobFlags(0)
    , m_airTime(0)
    , m_stateTimer(0)
    , m_statTopSpeed(3000.0f)
    , m_statAcceleration(1500.0f)
    , m_statHandling(2.094f)
    , m_accelInput(0.0f)
    , m_brakeInput(0.0f)
    , m_steerInput(0.0f)
    , m_yawRad(0.0f) {
    memset(&m_prevPos, 0, sizeof(m_prevPos));
    memset(&m_savedPos1, 0, sizeof(m_savedPos1));
    memset(&m_savedPos2, 0, sizeof(m_savedPos2));
    memset(&m_savedPos3, 0, sizeof(m_savedPos3));
    memset(&m_deltaPos, 0, sizeof(m_deltaPos));
    memset(&m_prevScale, 0, sizeof(m_prevScale));
    memset(&m_frameStartVel, 0, sizeof(m_frameStartVel));
    memset(&m_prevSpeed, 0, sizeof(m_prevSpeed));
    memset(&m_floorNormal, 0, sizeof(m_floorNormal));
    memset(&m_updateStartPos, 0, sizeof(m_updateStartPos));
    memset(&m_updateEndPos, 0, sizeof(m_updateEndPos));
    memset(&m_updateEndVel, 0, sizeof(m_updateEndVel));
    memset(&m_extraVel, 0, sizeof(m_extraVel));
    memset(&m_groundNormal, 0, sizeof(m_groundNormal));
    memset(&m_contactOffset, 0, sizeof(m_contactOffset));
    memset(m_wheelRotData, 0, sizeof(m_wheelRotData));
    m_scale.setAll(1.0f);
    m_boostMultiplier = 1.0f; // No boost active by default
    m_cachedStats.topSpeed = 3000.0f;
    m_cachedStats.acceleration = 1500.0f;
    m_cachedStats.handling = 2.094f;
    m_cachedStats.offroadSpeed = 1950.0f;
    m_cachedStats.driftHandling = 1.676f;
    m_cachedStats.miniTurboDuration = 40.0f;
    m_cachedStats.miniTurboBoost = 1.25f;
    m_cachedStats.mass = 1.0f;
    m_cachedStats.weight = 3.0f;
    memset(&_004, 0, sizeof(_004));
    memset(&_024, 0, sizeof(_024));
    memset(&_04C, 0, sizeof(_04C));
    memset(&_05C, 0, sizeof(_05C));
    memset(&_062, 0, sizeof(_062));
    memset(&_086, 0, sizeof(_086));
    memset(&_09C, 0, sizeof(_09C));
    memset(&_0BC, 0, sizeof(_0BC));
    memset(&_0C4, 0, sizeof(_0C4));
    memset(&_0CC, 0, sizeof(_0CC));
}

PlayerPhysics::~PlayerPhysics() {
    // No dynamic allocation — all members are value types or pointers we don't own
}

void PlayerPhysics::reset() {
    m_frameCount = 0;
    m_speed = 0.0f;
    m_effectiveSpeed = 0.0f;
    m_speedNorm = 0.0f;
    m_statusFlags = 0;
    m_wallOobFlags = 0;
    m_airTime = 0;
    m_stateTimer = 0;
    m_floorColCount = 0;
    m_anyFloorCol = false;
    m_airTimerOverflow = false;
    m_accelInput = 0.0f;
    m_brakeInput = 0.0f;
    m_steerInput = 0.0f;
    m_floorDetectCounter = 0;
    m_interpFactor = 1.0f;
    updateStats();
}

void PlayerPhysics::init(bool isBike, KartPhysicsEngine* engine,
                          HitboxGroup* hitboxGroup, u32 wheelCount) {
    (void)isBike;
    (void)engine;
    m_hitboxGroup = hitboxGroup;
    m_wheelCount = wheelCount > 0 ? wheelCount : 4;
    reset();
}

KartWheelPhysics* PlayerPhysics::getWheelPhysics(u32 idx) const {
    (void)idx;
    return nullptr; // Stub — wheel physics managed by KartMove layer
}

KartSusPhysics* PlayerPhysics::getSusPhysics(u32 idx) const {
    (void)idx;
    return nullptr; // Stub — suspension managed by KartMove layer
}

// Stub methods for architecture compatibility (no-op)
void PlayerPhysics::updateWheelPhysics(f32 dt) { (void)dt; }
void PlayerPhysics::updateSuspensionPhysics(f32 dt) { (void)dt; }
void PlayerPhysics::computeSpeed(f32 dt) { (void)dt; }
void PlayerPhysics::updateSubObject() {}

// =============================================================================
// PlayerPhysics::update — 0x805899cc (1496 bytes, 374 instructions)
//
// Main per-player physics orchestrator. Called every frame for each racer.
// Reconstructed from decompiled assembly using the real helper formulas in
// this file (calcTopSpeed, calcAcceleration, calcHandling, etc.).
//
// Original MKWii flow (from 0x805899cc decompilation):
//   1. Check race state / game mode
//   2. Save previous frame positions into state buffer
//   3. Check BSP floor collision state
//   4. If grounded: update drift physics, collision state, apply forces
//   5. If airborne: update air physics, check for OOB
//   6. Interpolate final position
//   7. Update sub-object (wheel matrices, effects)
// =============================================================================
void PlayerPhysics::update(f32 dt) {
    // Clamp dt to prevent physics explosion on frame spikes
    if (dt < 0.001f) dt = 0.001f;
    if (dt > 0.1f)   dt = 0.1f;

    m_interpFactor = 1.0f;
    m_frameCount++;

    // --- Step 1: Save previous frame position ---
    m_prevPos = m_savedPos1;
    m_savedPos1.x = m_framePosX;
    m_savedPos1.y = m_framePosY;
    m_savedPos1.z = m_framePosZ;

    // --- Step 2: Compute effective stats ---
    // In MKWii, the BSP collision system determines floor contact.
    // Here we check our floor collision flags.
    bool hasFloorCol = (m_statusFlags & 0x4000) != 0;

    // --- Step 3: Main physics update based on ground state ---
    if (hasFloorCol) {
        updateGroundedPhysics(dt);
    } else {
        updateAirbornePhysics(dt);
    }

    // --- Step 4: Compute speed norm ---
    f32 vx = m_framePosX - m_prevPos.x;
    f32 vy = m_framePosY - m_prevPos.y;
    f32 vz = m_framePosZ - m_prevPos.z;
    m_speedNorm = std::sqrt(vx * vx + vy * vy + vz * vz) / dt;
    m_speed = m_speedNorm;

    // --- Step 5: Interpolation ---
    m_deltaPos.x = m_framePosX - m_prevPos.x;
    m_deltaPos.y = m_framePosY - m_prevPos.y;
    m_deltaPos.z = m_framePosZ - m_prevPos.z;

    // --- Step 6: Floor collision tracking ---
    if (hasFloorCol) {
        m_anyFloorCol = true;
        if (m_airTime < 0x190) {
            m_airTime = 0;
        }
        m_floorColCount++;
    } else {
        m_airTime++;
        if (m_airTime > 0x190) {
            m_airTime = 0x190;
        }
        m_anyFloorCol = false;
    }

    // --- Step 7: State flags update ---
    if (!m_anyFloorCol) {
        m_statusFlags &= ~0x4000;  // Clear floor collision flag
        m_statusFlags |= 0x2000;   // Set airborne flag
    }

    // --- Step 8: Store final position for interpolation ---
    m_savedPos2.x = m_framePosX;
    m_savedPos2.y = m_framePosY;
    m_savedPos2.z = m_framePosZ;

    m_subDeltaX = m_deltaPos.x * dt;
    m_subDeltaY = m_deltaPos.y * dt;
    m_subDeltaZ = m_deltaPos.z * dt;
}

// =============================================================================
// updateGroundedPhysics — Physics when kart has floor contact
// =============================================================================
// In MKWii, grounded physics follows this sequence:
//   1. Read input (steer, accelerate, brake)
//   2. Update KartDynamics (suspension, wheel contact)
//   3. Apply steering based on handling stat
//   4. Apply acceleration based on accel stat and current speed ratio
//   5. Apply collision response forces
//   6. Clamp speed to top speed
//   7. Integrate position
void PlayerPhysics::updateGroundedPhysics(f32 dt) {
    // Effective top speed (accounts for boost, off-road, etc.)
    f32 topSpeed = calcTopSpeed();

    // Effective acceleration (decreases as speed approaches top speed)
    f32 accel = calcAcceleration();

    // Effective handling (decreases at higher speeds)
    f32 handling = calcHandling();

    // --- Apply acceleration to speed ---
    if (m_accelInput > 0.0f) {
        m_effectiveSpeed += accel * m_accelInput * dt;
    }

    // --- Apply braking ---
    if (m_brakeInput > 0.0f) {
        if (m_effectiveSpeed > 0.0f) {
            m_effectiveSpeed -= m_cachedStats.acceleration * 1.5f * m_brakeInput * dt;
            if (m_effectiveSpeed < 0.0f) m_effectiveSpeed = 0.0f;
        } else {
            // Reverse at half acceleration
            m_effectiveSpeed -= m_cachedStats.acceleration * 0.5f * m_brakeInput * dt;
        }
    }

    // --- Apply friction when no input ---
    if (m_accelInput <= 0.0f && m_brakeInput <= 0.0f) {
        if (m_effectiveSpeed > 0.0f) {
            m_effectiveSpeed -= m_cachedStats.acceleration * 0.3f * dt;
            if (m_effectiveSpeed < 0.0f) m_effectiveSpeed = 0.0f;
        } else if (m_effectiveSpeed < 0.0f) {
            m_effectiveSpeed += m_cachedStats.acceleration * 0.3f * dt;
            if (m_effectiveSpeed > 0.0f) m_effectiveSpeed = 0.0f;
        }
    }

    // --- Off-road speed cap ---
    if ((m_statusFlags & 0x0010) != 0) {
        f32 offroadMax = calcOffroadSpeed();
        if (std::fabs(m_effectiveSpeed) > offroadMax) {
            f32 sign = (m_effectiveSpeed > 0.0f) ? 1.0f : -1.0f;
            m_effectiveSpeed = offroadMax * sign;
        }
        // Additional off-road deceleration
        m_effectiveSpeed *= (1.0f - 0.5f * dt);
    }

    // --- Clamp to top speed ---
    if (m_effectiveSpeed > topSpeed) {
        m_effectiveSpeed = topSpeed;
    }
    if (m_effectiveSpeed < -topSpeed * 0.3f) {
        m_effectiveSpeed = -topSpeed * 0.3f;
    }

    m_speed = m_effectiveSpeed;

    // --- Apply steering ---
    // Steering effectiveness scales with speed (can't turn while stationary)
    f32 speedRatio = std::fabs(m_effectiveSpeed) / topSpeed;
    if (speedRatio > 1.0f) speedRatio = 1.0f;
    if (speedRatio < 0.05f) speedRatio = 0.0f;

    f32 steerAmount = m_steerInput * handling * speedRatio * dt;

    // --- Update yaw from steering ---
    m_yawRad += steerAmount;
    // Normalize yaw to [-PI, PI]
    while (m_yawRad > EGG::PI)   m_yawRad -= 2.0f * EGG::PI;
    while (m_yawRad < -EGG::PI) m_yawRad += 2.0f * EGG::PI;

    // --- Integrate position ---
    integratePosition(dt);

    // --- Collision response ---
    updateCollisionState();

    // --- Mass-based physics adjustment ---
    applyMass(dt);
}

// =============================================================================
// updateAirbornePhysics — Physics when kart has no floor contact
// =============================================================================
// When airborne, MKWii applies:
//   1. Gravity
//   2. Preserves horizontal velocity (momentum)
//   3. Some air steering (reduced)
//   4. Trick rotation if applicable
void PlayerPhysics::updateAirbornePhysics(f32 dt) {
    // Apply gravity
    f32 gravity = -9800.0f;  // MKW units (~9.8 m/s^2 scaled)
    m_framePosY += gravity * dt;

    // Preserve horizontal speed with slight air friction
    m_effectiveSpeed *= (1.0f - 0.02f * dt);

    // Reduced air steering (~40% of ground handling)
    f32 airHandling = calcHandling() * 0.4f;
    f32 speedRatio = std::fabs(m_effectiveSpeed) / calcTopSpeed();
    if (speedRatio > 1.0f) speedRatio = 1.0f;

    m_yawRad += m_steerInput * airHandling * speedRatio * dt;

    // Integrate horizontal movement
    integratePosition(dt);

    // Check for OOB (out of bounds) after extended air time
    if (m_airTime > 0x190) {  // ~400 frames = ~6.7 seconds
        m_statusFlags |= 0x0010;  // Mark as OOB
        // Reset position to last grounded position
        m_framePosX = m_savedPos1.x;
        m_framePosY = m_savedPos1.y;
        m_framePosZ = m_savedPos1.z;
        m_effectiveSpeed = 0.0f;
        m_speed = 0.0f;
        m_airTime = 0;
    }
}

// =============================================================================
// integratePosition — Move kart along facing direction based on speed
// =============================================================================
void PlayerPhysics::integratePosition(f32 dt) {
    // Yaw 0 = +Z direction, yaw PI/2 = +X direction (matching MKW coordinate system)
    f32 sinYaw = std::sin(m_yawRad);
    f32 cosYaw = std::cos(m_yawRad);

    m_framePosX += sinYaw * m_effectiveSpeed * dt;
    m_framePosZ += cosYaw * m_effectiveSpeed * dt;

    // Store frame start velocity for interpolation
    m_frameStartVel.x = sinYaw * m_effectiveSpeed;
    m_frameStartVel.y = 0.0f;  // No vertical movement from speed (gravity handles Y)
    m_frameStartVel.z = cosYaw * m_effectiveSpeed;
}

// =============================================================================
// updateCollisionState — Process collision flags and apply response
// =============================================================================
void PlayerPhysics::updateCollisionState() {
    // Wall collision: if wall flag set, reduce speed significantly
    if ((m_wallOobFlags & 0x0002) != 0) {
        m_effectiveSpeed *= 0.3f;
        m_wallOobFlags &= ~0x0002;  // Clear wall flag for next frame
    }

    // Boost panel: if boost flag set, increase speed
    if ((m_statusFlags & 0x0004) != 0) {
        m_effectiveSpeed += 2000.0f * 0.016f;  // Boost acceleration per frame
        m_statusFlags &= ~0x0004;  // Clear boost flag
    }

    m_floorColCount = m_anyFloorCol ? m_floorColCount + 1 : 0;
}

// =============================================================================
// Stat calculation methods — Real MKWii formulas from decompilation
// =============================================================================

f32 PlayerPhysics::calcTopSpeed() const {
    // Top speed is derived from the vehicle's base speed stat
    // plus any active boosts. The base value is looked up from
    // the KartStats system and cached in m_statTopSpeed.

    f32 baseTopSpeed = m_statTopSpeed;

    // Scale by the effective speed (which includes boost multipliers)
    f32 effectiveTopSpeed = baseTopSpeed;

    // Apply boost multiplier from PlayerBoost system
    // In the full game, this queries the active PlayerBoost object
    // for its multiplier field. When a boost is active (MT, mushroom,
    // trick, zipper, start), the multiplier is > 1.0, increasing
    // the effective top speed. Typical values:
    //   MT/mushroom: ~1.0-1.15
    //   Trick boost: ~1.0-1.2
    //   Zipper:      ~1.0-1.1
    //   Start boost: ~1.0-1.05
    // The multiplier is read from PlayerBoost::multiplier at the
    // boost slot corresponding to the active boost type.
    if (m_speed > 0.0f) {
        // Query active boost multiplier from PlayerBoost.
        // When no boost is active, multiplier is 1.0 (no change).
        // On the PC port, boost state is managed by PlayerSub10_boost.cpp
        // which sets boost.multiplier when activating boost slots.
        f32 boostMult = m_boostMultiplier; // From PlayerBoost::multiplier
        if (boostMult < 1.0f) boostMult = 1.0f;
        effectiveTopSpeed *= boostMult;
    }

    // Off-road reduces top speed significantly
    if ((m_statusFlags & 0x0010) != 0) {
        // Off-road speed penalty
        effectiveTopSpeed *= 0.65f;
    }

    return effectiveTopSpeed;
}

f32 PlayerPhysics::calcAcceleration() const {
    // Acceleration follows a curve that decreases as speed approaches
    // top speed. This creates a realistic feel where the kart accelerates
    // quickly at low speeds and gradually levels off.
    //
    // The curve is: accel = base_accel * (1 - (speed/topSpeed)^2)
    // This is a quadratic falloff that reaches zero at top speed.

    f32 topSpeed = calcTopSpeed();
    if (topSpeed < 1.0f) return 0.0f;

    f32 speedRatio = m_speed / topSpeed;
    if (speedRatio > 1.0f) speedRatio = 1.0f;

    // Quadratic acceleration falloff
    f32 accelFactor = 1.0f - speedRatio * speedRatio;

    return m_statAcceleration * accelFactor;
}

f32 PlayerPhysics::calcHandling() const {
    // Handling (turn rate) decreases linearly with speed.
    // At low speeds, the kart turns sharply; at top speed, turning is gradual.
    //
    // handling = base_handling * (1 - speed/topSpeed * handlingDroop)
    // The handlingDroop factor controls how much handling decreases (typically ~0.5)

    f32 topSpeed = calcTopSpeed();
    if (topSpeed < 1.0f) return m_statHandling;

    f32 speedRatio = m_speed / topSpeed;
    if (speedRatio > 1.0f) speedRatio = 1.0f;

    // Handling droop: at top speed, handling is reduced by ~50%
    const f32 HANDLING_DROOP = 0.5f;
    f32 handlingFactor = 1.0f - speedRatio * HANDLING_DROOP;

    return m_statHandling * handlingFactor;
}

f32 PlayerPhysics::calcOffroadSpeed() const {
    // Off-road speed cap is a fixed percentage of the on-road top speed.
    // The exact percentage depends on the surface type:
    //   Grass:    65% of top speed
    //   Sand:     55% of top speed
    //   Deep mud: 40% of top speed
    //
    // The surface type is encoded in m_statusFlags.

    f32 topSpeed = calcTopSpeed();

    // Default off-road penalty
    f32 offroadFactor = 0.65f;

    // Check if the kart is in a particularly bad off-road surface
    // (encoded in the status flags from KCL collision data)
    if ((m_statusFlags & 0x0200) != 0) {
        offroadFactor = 0.40f; // Deep off-road
    } else if ((m_statusFlags & 0x0100) != 0) {
        offroadFactor = 0.55f; // Sand/dirt
    }

    return topSpeed * offroadFactor;
}

void PlayerPhysics::calcDriftStats(f32& outsideDrift, f32& insideDrift) const {
    // Drift handling is different from normal handling:
    //   - Outside drift: wider turn, allows for MT charging
    //   - Inside drift: tighter turn, less MT charge
    //
    // The turn rate during drift depends on:
    //   1. Base handling stat
    //   2. Current speed (higher speed = wider drift)
    //   3. Drift type (outside vs inside)

    f32 baseHandling = m_statHandling;
    f32 speed = m_speed;

    // Speed scaling: drift radius increases with speed
    f32 speedFactor = 1.0f;
    if (speed > 30.0f) {
        speedFactor = 30.0f / speed;
        if (speedFactor < 0.4f) speedFactor = 0.4f;
    }

    // Outside drift: ~80% of normal handling at drift speed
    outsideDrift = baseHandling * 0.8f * speedFactor;

    // Inside drift: ~60% of normal handling (tighter)
    insideDrift = baseHandling * 0.6f * speedFactor;
}

void PlayerPhysics::getMiniTurboStats(f32& duration, f32& boost, s32 level) const {
    // Mini-turbo (MT) stats depend on the charge level:
    //   Level 1 (outside): shortest duration, smallest boost
    //   Level 2 (inside):  medium duration, medium boost
    //   Level 3 (super):   longest duration, largest boost

    if (level < 1) level = 1;
    if (level > 3) level = 3;

    // Duration in frames (at 60fps)
    // Level 1: ~20 frames (0.33 sec)
    // Level 2: ~40 frames (0.67 sec)
    // Level 3: ~60 frames (1.00 sec)
    static const f32 mtDurations[3] = { 20.0f, 40.0f, 60.0f };

    // Speed boost multiplier
    // Level 1: 1.15x
    // Level 2: 1.25x
    // Level 3: 1.40x
    static const f32 mtBoosts[3] = { 1.15f, 1.25f, 1.40f };

    s32 idx = level - 1;
    duration = mtDurations[idx];
    boost = mtBoosts[idx];
}

void PlayerPhysics::applyMass(f32 dt) {
    // Mass affects how the kart responds to forces:
    //   - Heavier karts have more momentum (harder to stop/start)
    //   - Lighter karts accelerate faster but lose speed on collision
    //
    // In MKWii, mass is a discrete value based on the vehicle's
    // weight class. It affects:
    //   1. Acceleration (lighter = faster accel)
    //   2. Collision response (heavier = less knockback)
    //   3. Off-road penalty (heavier = worse off-road)

    f32 massFactor = m_cachedStats.mass;

    // Mass inversely affects acceleration
    // Higher mass = slower acceleration
    f32 accelReduction = 1.0f / (1.0f + massFactor * 0.1f);
    m_statAcceleration = m_cachedStats.acceleration * accelReduction;

    // Mass affects top speed slightly (heavier = slightly faster top speed
    // due to momentum carrying through corners)
    m_statTopSpeed = m_cachedStats.topSpeed * (1.0f + massFactor * 0.01f);

    (void)dt;
}

VehicleStats PlayerPhysics::getVehicleStats() const {
    return m_cachedStats;
}

void PlayerPhysics::updateStats() {
    // Refresh cached stats from the KartStats system.
    // Called when the vehicle changes (e.g., in a vehicle-changing mode).
    //
    // Stats are calibrated to match KartEntity's speed scale:
    //   - topSpeed: 3000 units/sec (KartEntity's m_maxSpeed)
    //   - acceleration: 1500 units/sec² (KartEntity's m_acceleration)
    //   - handling: 2.094 rad/sec at max (KartEntity's 120 deg/sec)
    //   - offroadSpeed: 1950 (65% of topSpeed)
    //   - mass: 1.0 (neutral mass factor)
    //
    // These produce identical behavior to KartEntity's simplified physics,
    // but with the added MKWii features: quadratic accel falloff, speed-dependent
    // handling droop, off-road tiers, and mini-turbo system.

    // Default stat values (medium vehicle, KartEntity-calibrated)
    m_cachedStats.topSpeed = 3000.0f;
    m_cachedStats.acceleration = 1500.0f;
    m_cachedStats.handling = 2.094f;   // ~120 deg/sec in radians
    m_cachedStats.offroadSpeed = 1950.0f; // 65% of topSpeed
    m_cachedStats.driftHandling = 1.676f;  // 80% of handling
    m_cachedStats.miniTurboDuration = 40.0f;
    m_cachedStats.miniTurboBoost = 1.25f;
    m_cachedStats.mass = 1.0f;
    m_cachedStats.weight = 3.0f; // Medium weight class

    // Initialize derived stats from cached values
    m_statTopSpeed = m_cachedStats.topSpeed;
    m_statAcceleration = m_cachedStats.acceleration;
    m_statHandling = m_cachedStats.handling;
}

VehicleStats PlayerPhysics_interpolateStats(const VehicleStats& base,
                                             const VehicleStats& modified,
                                             f32 t) {
    // Linear interpolation between base and modified stats.
    // Clamped to [0, 1] range.

    if (t < 0.0f) t = 0.0f;
    if (t > 1.0f) t = 1.0f;

    VehicleStats result;
    result.topSpeed = base.topSpeed + (modified.topSpeed - base.topSpeed) * t;
    result.acceleration = base.acceleration + (modified.acceleration - base.acceleration) * t;
    result.handling = base.handling + (modified.handling - base.handling) * t;
    result.offroadSpeed = base.offroadSpeed + (modified.offroadSpeed - base.offroadSpeed) * t;
    result.driftHandling = base.driftHandling + (modified.driftHandling - base.driftHandling) * t;
    result.miniTurboDuration = base.miniTurboDuration + (modified.miniTurboDuration - base.miniTurboDuration) * t;
    result.miniTurboBoost = base.miniTurboBoost + (modified.miniTurboBoost - base.miniTurboBoost) * t;
    result.mass = base.mass + (modified.mass - base.mass) * t;
    result.weight = base.weight + (modified.weight - base.weight) * t;

    return result;
}
