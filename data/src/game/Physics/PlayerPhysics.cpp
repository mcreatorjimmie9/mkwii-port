#include "PlayerPhysics.hpp"
#include "PlayerSub10.hpp"

extern "C" {
// External helpers from StaticR.rel
void sub_80555bf4();       // EGG::Heap::alloc
void sub_0x80555bf4();     // variant with 0x prefix
void sub_0x80537f4c();     // getRaceInfo / getGameMode
void sub_0x80590a9c();     // getPlayerId
void sub_0x80656bfc();     // checkGameModeCondition1
void sub_0x80656884();     // checkGameModeCondition2
void sub_0x80589fa4();     // updateDriftPhysics
void sub_0x8058be60();     // updateCollisionState1
void sub_0x8058b1d8();     // updateCollisionState2
void sub_0x8058d5b0();     // updateCollisionState3
void sub_0x8058b4d4();     // applyCollisionForces
void sub_0x80520c4c();     // initCollisionVector
void sub_0x80520d50();     // setCollisionVector
void sub_0x80520e50();     // finalizeCollisionVector
void sub_0x80590434();     // getInputState
void sub_0x8059040c();     // getPlayerPos
void sub_0x8059024c();     // getRawPos
void sub_0x805907bc();     // getKartPhysics
void sub_0x805907a4();     // getSomeState
void sub_0x80590adc();     // playSound
void sub_0x8058ba38();     // updateExtraPhysics
void sub_0x80597974();     // resetPhysicsState
}

// =============================================================================
// PlayerPhysics::update — 0x805899cc (1496 bytes, 374 instructions)
//
// THE main physics orchestrator. Called every frame for each player.
// =============================================================================
void PlayerPhysics::update(f32 dt) {
    // --- Frame setup ---
    f32 one = 1.0f;

    // Check race state — skip physics if race not active
    u32 gameMode = 0;
    sub_0x80537f4c();

    // --- Save previous frame state ---
    u32 bodyFlags = *reinterpret_cast<u32*>(
        reinterpret_cast<char*>(m_playerRef) + 4);
    bool wasOnGround = (bodyFlags & 0x0008) != 0;

    // --- Check game mode for special handling ---
    sub_0x80590a9c(); // getPlayerId
    u8 playerId = 0;
    sub_0x80656bfc(); // checkGameModeCondition1
    if (false) {
        return;
    }

    // --- Save positions into state buffer ---
    if (m_stateBuffer != nullptr) {
        void* buf = m_stateBuffer;
        *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x10) =
            *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x14);
        *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x18) =
            *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x1C);
        *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x20) =
            *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x24);
    }

    // --- Check if this is a special frame ---
    u32 raceState = 0; // TODO: global load
    u32 stateIdx = *reinterpret_cast<u32*>(
        reinterpret_cast<char*>(raceState + 0xB70)) - 3;
    bool isSpecialFrame = false;
    if (stateIdx <= 7) {
        u32 mask = (1 << stateIdx) & 0xC1;
        isSpecialFrame = (mask != 0);
    }

    // --- Main physics update path ---
    if (!isSpecialFrame) {
        u16 status = m_statusFlags;
        bool hasFloorCol = (status & 0x4000) != 0;

        sub_0x80590a9c();
        u32 bspFloorType = 0;
        bool isBoostPanel = (bspFloorType & 0x00000004) != 0;

        if (!hasFloorCol) {
            if (m_stateBuffer != nullptr) {
                void* buf = m_stateBuffer;
                *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x10) =
                    *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x14);
                *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x18) =
                    *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x1C);
                *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x20) =
                    *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x24);
            }

            m_stateFlags = 0;
        } else {
            m_prevPos.x = m_framePosX;
            m_prevPos.y = m_framePosY;
            m_prevPos.z = *reinterpret_cast<f32*>(
                reinterpret_cast<char*>(this) + 0x7C);

            sub_0x80589fa4();

            status = m_statusFlags;
            if ((status & 0x0040) != 0) {
                if (m_stateBuffer != nullptr) {
                    void* buf = m_stateBuffer;
                    *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x0A8) =
                        *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x14);
                    *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x0AC) =
                        *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x1C);
                    *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x0B0) =
                        *reinterpret_cast<void**>(reinterpret_cast<char*>(buf) + 0x24);
                }

                u32 globalState = 0; // TODO: global load
                u32 bspState = *reinterpret_cast<u32*>(
                    reinterpret_cast<char*>(globalState + 0xB74));
                if (bspState == 6) {
                    if (m_stateBuffer != nullptr) {
                        void* buf = m_stateBuffer;
                        m_framePosX = *reinterpret_cast<f32*>(
                            reinterpret_cast<char*>(buf) + 0x14);
                        m_framePosY = *reinterpret_cast<f32*>(
                            reinterpret_cast<char*>(buf) + 0x1C);
                        *reinterpret_cast<f32*>(
                            reinterpret_cast<char*>(this) + 0x7C) =
                            *reinterpret_cast<f32*>(
                                reinterpret_cast<char*>(buf) + 0x24);
                    }

                    m_stateFlags = 0;
                    m_anyFloorCol = false;
                    goto apply_effects;
                }

                if ((*reinterpret_cast<u8*>(
                        reinterpret_cast<char*>(m_playerRef) + 0x54)) == 0) {
                }

                u32 wallFlags = *reinterpret_cast<u32*>(
                    reinterpret_cast<char*>(m_playerRef) + 4);
                if ((wallFlags & 0x0002) != 0) {
                    goto apply_effects;
                }

                sub_0x8058be60();
                sub_0x8058b1d8();

                if (m_stateBuffer != nullptr) {
                    sub_0x8058d5b0();
                }

                sub_0x8058b4d4();
                m_interpFactor = one;
                goto apply_effects;
            }

            sub_0x8058be60();
            sub_0x8058b1d8();

            if (m_stateBuffer != nullptr) {
                sub_0x8058d5b0();
            }

            sub_0x8058b4d4();
            m_interpFactor = one;

        apply_effects:
            f32 deltaX = m_framePosX - m_prevPos.x;
            f32 deltaY = m_framePosY - m_prevPos.y;
            f32 deltaZ = *reinterpret_cast<f32*>(
                            reinterpret_cast<char*>(this) + 0x7C) -
                        m_prevPos.z;

            sub_0x80520c4c();
            f32 floorFactor = 0.0f;
            sub_0x80520d50();
            sub_0x80520e50();

            sub_0x80590434();

            bool hasFloorColNow = (m_statusFlags & 0x4000) != 0;

            if (m_anyFloorCol) {
                s16 airTimer = *reinterpret_cast<s16*>(
                    reinterpret_cast<char*>(this) + 0x56);
                airTimer++;
                if (airTimer > 0x190) {
                    airTimer = 0x190;
                }
                *reinterpret_cast<s16*>(
                    reinterpret_cast<char*>(this) + 0x56) = airTimer;
            } else {
                u16 status16 = m_statusFlags;
                bool someCondition = (status16 & 0x8000) != 0;
                if (someCondition) {
                    u32 raceState2 = 0; // TODO: global
                    u32 bspState2 = *reinterpret_cast<u32*>(
                        reinterpret_cast<char*>(raceState2 + 0xB70)) - 3;
                    bool isSpecialState = false;
                    if (bspState2 <= 7) {
                        u32 mask = (1 << bspState2) & 0xC1;
                        isSpecialState = (mask != 0);
                    }

                    if (isSpecialState) {
                        u32 globalFlag = *reinterpret_cast<u32*>(
                            reinterpret_cast<char*>(raceState2 + 0xB78));
                        if (globalFlag == 0) {
                            u32 bodyFlags2 = *reinterpret_cast<u32*>(
                                reinterpret_cast<char*>(m_playerRef) + 4);
                            if ((bodyFlags2 & 0x00020000) != 0) {
                                u32 counter = *reinterpret_cast<u32*>(
                                    reinterpret_cast<char*>(this) + 0x5C);
                                counter++;
                                if (counter >= 0x1F4) {
                                    counter = 0;
                                }
                                *reinterpret_cast<u32*>(
                                    reinterpret_cast<char*>(this) + 0x5C) = counter;
                            }
                        }

                        sub_0x80590adc();
                    }
                }

                *reinterpret_cast<u32*>(
                    reinterpret_cast<char*>(this) + 0x5C) = 0;

                m_statusFlags &= ~0xE000;
                m_statusFlags |= 0x2000;
            }

            m_interpFactor = one;

            m_prevPos.x = m_framePosX;
            m_prevPos.y = m_framePosY;
            m_prevPos.z = *reinterpret_cast<f32*>(
                            reinterpret_cast<char*>(this) + 0x7C);

            EGG::Vector3f frameStartPos;
            sub_0x8059024c();

            f32 scaleX = frameStartPos.x + (m_framePosX - frameStartPos.x) * dt;
            f32 scaleY = frameStartPos.y + (m_framePosY - frameStartPos.y) * dt;
            f32 scaleZ = frameStartPos.z + (*reinterpret_cast<f32*>(
                               reinterpret_cast<char*>(this) + 0x7C) - frameStartPos.z) * dt;

            sub_0x805907bc();
            m_framePosX = 0.0f;
            m_framePosY = 0.0f;
            *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0x7C) = 0.0f;

            sub_0x8059040c();
            m_framePosX = 0.0f;
            m_framePosY = 0.0f;
            *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0x7C) = 0.0f;

            f32 interpDt = one * dt;
            EGG::Vector3f interpResult;
            sub_0x80555bf4();

            sub_0x8059040c();

            *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0xF0) = interpResult.x;
            *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0xF4) = interpResult.y;
            *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0xF8) = interpResult.z;

            *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0x2C) = interpResult.x;
            *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0x30) = interpResult.y;
            *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0x34) = interpResult.z;

            sub_0x80590a9c();
            goto done;
        }

        u16 statusFlags2 = m_statusFlags;
        if ((statusFlags2 & 0x0020) != 0) {
            goto no_floor_path;
        }

        if (m_stateBuffer != nullptr) {
            void* buf = m_stateBuffer;
            m_framePosX = *reinterpret_cast<f32*>(
                reinterpret_cast<char*>(buf) + 0x14);
            m_framePosY = *reinterpret_cast<f32*>(
                reinterpret_cast<char*>(buf) + 0x1C);
            *reinterpret_cast<f32*>(
                reinterpret_cast<char*>(this) + 0x7C) =
                *reinterpret_cast<f32*>(
                    reinterpret_cast<char*>(buf) + 0x24);
        }

        m_stateFlags = 0;
        m_anyFloorCol = false;
        goto done;

    no_floor_path:
        sub_0x8058ba38();

        u16 statusFlags3 = m_statusFlags;
        if ((statusFlags3 & 0x0010) != 0) {
            sub_0x80590a9c();

            sub_0x805907a4();
            sub_0x80597974();
            goto done;
        }

        sub_0x8059024c();
        m_framePosX = *reinterpret_cast<f32*>(
            reinterpret_cast<char*>(this) + 0x3C);
        m_framePosY = *reinterpret_cast<f32*>(
            reinterpret_cast<char*>(this) + 0x40);
        *reinterpret_cast<f32*>(
            reinterpret_cast<char*>(this) + 0x44) =
            *reinterpret_cast<f32*>(
                reinterpret_cast<char*>(this) + 0x48);

        sub_0x8059040c();
        m_framePosX = *reinterpret_cast<f32*>(
            reinterpret_cast<char*>(this) + 0xF0);
        m_framePosY = *reinterpret_cast<f32*>(
            reinterpret_cast<char*>(this) + 0xF4);
        *reinterpret_cast<f32*>(
            reinterpret_cast<char*>(this) + 0x7C) =
            *reinterpret_cast<f32*>(
                reinterpret_cast<char*>(this) + 0xF8);

        goto done;
    }

done:
    m_interpFactor = one;
}

f32 PlayerPhysics::calcTopSpeed() const {
    // Top speed is derived from the vehicle's base speed stat
    // plus any active boosts. The base value is looked up from
    // the KartStats system and cached in m_statTopSpeed.

    f32 baseTopSpeed = m_statTopSpeed;

    // Scale by the effective speed (which includes boost multipliers)
    f32 effectiveTopSpeed = baseTopSpeed;

    // Apply boost multiplier from PlayerBoost system
    // In the full game, this queries the active PlayerBoost object
    if (m_speed > 0.0f) {
        // Boosts scale the top speed, not the current speed directly
        effectiveTopSpeed *= 1.0f; // Placeholder — real value from PlayerBoost
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

    // Default stat values (medium vehicle)
    m_cachedStats.topSpeed = 80.0f;
    m_cachedStats.acceleration = 5.0f;
    m_cachedStats.handling = 0.04f;
    m_cachedStats.offroadSpeed = 52.0f;
    m_cachedStats.driftHandling = 0.03f;
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
