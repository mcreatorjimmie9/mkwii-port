// Player.cpp — Per-player kart entity implementation
//
// Bridges the decompiled architecture (PlayerPhysics, KartDynamics)
// with the working reimplemented systems (KartEntity, AIController, CollisionSystem).
//
// Physics pipeline (faithful to MKWii):
//   Platform input → PlayerPhysics::setAccelInput/setSteerInput/setBrakeInput
//   → PlayerPhysics::update()
//   → KartEntity::queryCollision() for KCL feedback
//   → PlayerPhysics collision flags updated
//   → Sync position/yaw/speed back to KartEntity for rendering

#include "Player/Player.hpp"
#include "game/KartEntity.hpp"
#include "game/AIController.hpp"
#include "game/CollisionSystem.hpp"
#include "game/ItemBox.hpp"
#include "game/RaceSession.hpp"

#include <cstdio>
#include <cstring>
#include <cmath>

// Decompiled subsystems — MUST be included BEFORE AIRace headers so that
// GENESIS_KART_STATE_DEFINED / GENESIS_KART_MOVE_DEFINED / GENESIS_KART_DYNAMICS_DEFINED
// guards in KartObjectProxy.hpp don't define stub classes that conflict.
#include "KartMovement/KartMove.hpp"
#include "KartMovement/KartState.hpp"
#include "Physics/PlayerPhysics.hpp"
#include <Physics/PlayerSub10.hpp>
#include "Physics/PhysicsPipeline.hpp"
#include "Collision/KartDynamics.hpp"
#include "PlayerPointers.hpp"

// Forward declaration of bridge functions (defined in pad_bridge.cpp / ai_bridge.cpp)
extern "C" void sub_setAIPlayerInput(u32 playerIdx, f32 steer, f32 accel, f32 brake, bool drift);
extern "C" void updateAIForPlayer(u32 playerId);

// Decompiled AI subsystems (included after GENESIS headers to avoid ODR)
#include "AIRace/AIManager.hpp"
#include "AIRace/AI.hpp"
#include "AIRace/AIInfo.hpp"

namespace Game {

// =============================================================================
// Unit scale notes:
// =============================================================================
// After recalibration, PlayerPhysics and KartEntity use the same speed units
// (game-units per second). No conversion factor is needed for speed sync.

// =============================================================================
// Constructor / Destructor
// =============================================================================

Player::Player()
    : m_lap(0)
    , m_finished(false)
    , m_finishTime(0.0f)
    , m_finishPosition(0)
    , m_distance(0.0f)
    , m_itemSlot(nullptr)
    , m_playerId(0)
    , m_isAI(false)
    , m_active(false)
    , m_kartEntity(nullptr)
    , m_playerPhysics(nullptr)
    , m_aiController(nullptr)
    , m_collision(nullptr)
    , m_kartDynamics(nullptr)
    , m_useKartDynamics(false)
    , m_usePlayerPhysics(true)
    , m_playerPointers(nullptr)
    , m_playerSub10(nullptr)
    , m_kartMove(nullptr)
    , m_kartState(nullptr)
    , m_useDecompiledPhysics(false) {}

Player::~Player() {
    cleanup();
}

// =============================================================================
// init — Initialize from KMP start position
// =============================================================================

void Player::init(u32 playerId, bool isAI,
                  const Loaders::KmpEntry::StartPosition& start) {
    cleanup();

    m_playerId = playerId;
    m_isAI = isAI;
    m_active = true;
    m_lap = 0;
    m_finished = false;
    m_finishTime = 0.0f;
    m_finishPosition = 0;
    m_distance = 0.0f;

    // Allocate and initialize the working KartEntity (rendering + collision)
    auto* kart = new KartEntity();
    kart->initFromKMP(start);
    kart->initGL();
    m_kartEntity = kart;

    // Allocate item slot
    m_itemSlot = new ItemSlot();

    // Initialize PlayerPhysics — the decompiled MKWii physics engine
    m_playerPhysics = new PlayerPhysics();
    m_playerPhysics->updateStats();

    // Set initial position from KMP start position
    // Position coordinates are in the same space (KMP world coords)
    m_playerPhysics->setFramePosition(start.position.x, start.position.y, start.position.z);
    m_playerPhysics->setYaw(start.rotation.y);

    // Calibrate PlayerPhysics stats to match KartEntity's speed scale.
    // KartEntity: topSpeed=3000 units/sec, acceleration=1500 units/sec²
    // PlayerPhysics uses units/frame at 60fps internally.
    // We set stats in KartEntity units (units/sec) and convert in update().
    m_playerPhysics->updateStats();

    // Initialize KartDynamics rigid body (available but not primary)
    initKartDynamics(40.0f, 25.0f, 40.0f, 65.0f);

    // --- Decompiled MKWii subsystems (full physics pipeline) ---
    // Create KartState (driving state flags + effect timers)
    m_kartState = new Kart::KartState(nullptr);
    m_kartState->init();

    // Create KartMove (vehicle movement state: speed, dir, drift)
    m_kartMove = new Kart::KartMove();
    m_kartMove->init();

    // Create PlayerSub10 (main physics controller — 92 methods, full MKWii pipeline)
    m_playerSub10 = new PlayerSub10();
    m_playerSub10->init(false, isAI); // isBike=false, isRemote=isAI

    // Set initial position/direction on PlayerSub10
    {
        EGG::Vector3f pos;
        pos.x = start.position.x;
        pos.y = start.position.y;
        pos.z = start.position.z;
        EGG::Vector3f angles;
        angles.x = start.rotation.x;
        angles.y = start.rotation.y;
        angles.z = start.rotation.z;
        m_playerSub10->setInitialPhysicsValues(&pos, &angles);
    }

    // Create PlayerPointers and wire all subsystems together
    m_playerPointers = new PlayerPointers();
    m_playerPointers->wire(
        m_kartMove,
        m_kartState,
        m_kartDynamics,
        m_playerSub10,
        playerId
    );
    // Set the playerPointers back-reference on PlayerSub10
    m_playerSub10->playerPointers = m_playerPointers;

    // By default, PlayerPhysics drives physics for human players
    // AI players still use KartEntity for now (AI controller drives directly)
    m_usePlayerPhysics = !isAI;

    // Enable decompiled physics pipeline for ALL players (human and AI).
    // In the original MKWii, both human and CPU players use the exact same
    // PlayerSub10 physics engine — the only difference is input source.
    m_useDecompiledPhysics = true;
}

// =============================================================================
// update — Per-frame physics and AI update
// =============================================================================

void Player::update(f32 dt, const void* inputState) {
    if (!m_active || !m_kartEntity) return;

    auto* kart = static_cast<KartEntity*>(m_kartEntity);

    if (m_isAI && m_aiController) {
        // AI player: Phase 22 — Try decompiled AI first, fallback to simple AI.
        // In the original MKWii, CPU players use the EXACT same physics
        // as human players — the only difference is the input source
        // (KPadAI vs KPadHuman). The decompiled AIRace module provides
        // the full AI brain (path-following, PD steering, drift decisions,
        // trick handling, item usage, rubber-banding).
        //
        // Flow: AIEngine::update() → AIInfo::mStickX/mActions
        //       → updateAIForPlayer() → AIInputStore → pad_bridge → PlayerSub10
        //
        // If the decompiled AI manager is available, use it.
        // Otherwise fall back to the simple AIController path-follower.
        bool usedDecompiledAI = false;

        if (Enemy::AIManager::getInstance() &&
            Enemy::AIManager::getInstance()->hasAIForPlayer(m_playerId)) {
            // Use decompiled AI brain
            updateAIForPlayer(m_playerId);
            usedDecompiledAI = true;
        }

        if (!usedDecompiledAI) {
            // Fallback: simple AIController path-follower
            EGG::Vector3f pos = kart->getPosition();
            f32 yaw = kart->getYaw();
            Platform::InputState aiInput = m_aiController->computeInput(pos, yaw, dt);

            // Store AI input in the AIInputStore so the bridge functions
            // (sub_getTurnInput, etc.) return AI-generated values.
            sub_setAIPlayerInput(m_playerId, aiInput.steer, aiInput.accelerate,
                                 aiInput.brake, aiInput.drift);
        }

        // Run the same decompiled physics as human players
        if (m_useDecompiledPhysics && m_playerSub10) {
            updateWithDecompiledPhysics(dt, nullptr); // AI input already in AIInputStore
        } else {
            // Fallback: AI drives KartEntity directly (simpler physics)
            m_aiController->updateKart(*kart, dt);
        }
    } else if (inputState != nullptr) {
        const auto& input = *static_cast<const Platform::InputState*>(inputState);

        if (m_useDecompiledPhysics && m_playerSub10) {
            // Full decompiled MKWii physics pipeline:
            // PlayerSub10::update() reads input via sub_getTurnInput()
            // and drives the entire kart physics chain (turn, accel, drift, boost, etc.)
            updateWithDecompiledPhysics(dt, inputState);
        } else if (m_usePlayerPhysics && m_playerPhysics) {
            // MKWii-faithful physics pipeline:
            // PlayerPhysics (stats) + KartDynamics (rigid body) if available,
            // PlayerPhysics-only fallback if KartDynamics is not initialized.
            if (m_kartDynamics) {
                updateWithFullPipeline(dt, inputState);
            } else {
                updateWithPlayerPhysics(dt, inputState);
            }
        } else if (m_useKartDynamics && m_kartDynamics) {
            stepKartDynamics(input.accelerate, input.steer, dt);
            syncKartDynamicsToEntity();
        } else {
            updateWithKartEntity(dt, inputState);
        }
    }

    // Update race distance for position calculation
    if (!m_finished) {
        m_distance += kart->getSpeed() * dt * 0.001f;
    }
}

// =============================================================================
// updateWithPlayerPhysics — Primary MKWii-faithful physics path
// =============================================================================
// This routes input through the decompiled PlayerPhysics engine:
//   1. Feed input to PlayerPhysics (accel, brake, steer)
//   2. Query collision via KartEntity (KCL ground/wall/surface)
//   3. Update PlayerPhysics collision flags from KCL results
//   4. Run PlayerPhysics::update() (stat-based physics)
//   5. Sync output position/yaw/speed back to KartEntity for rendering

void Player::updateWithPlayerPhysics(f32 dt, const void* inputState) {
    auto* kart = static_cast<KartEntity*>(m_kartEntity);
    auto* pp = m_playerPhysics;
    if (!pp || !kart || !inputState) return;

    const auto& input = *static_cast<const Platform::InputState*>(inputState);

    // 1. Feed input to PlayerPhysics
    pp->setAccelInput(input.accelerate);
    pp->setBrakeInput(input.brake);
    pp->setSteerInput(input.steer);

    // 2. Query collision from KCL system
    bool offroad = false, boostPad = false, wallHit = false;
    f32 wallNX = 0.0f, wallNZ = 0.0f;
    kart->queryCollision(offroad, boostPad, wallHit, wallNX, wallNZ, m_collision);

    // 3. Update PlayerPhysics collision flags
    // Ground collision — we assume grounded unless airborne for too long
    pp->setFloorCollision(true);

    // Off-road surface
    pp->setOffroad(offroad);

    // Boost pad
    if (boostPad) {
        pp->setBoostPad(true);
    }

    // Wall collision
    if (wallHit) {
        pp->setWallCollision(true);
    }

    // 4. Run PlayerPhysics::update()
    pp->update(dt);

    // 5. Sync output back to KartEntity for rendering and camera
    // PlayerPhysics speed is in units/sec (same as KartEntity m_speed)
    // after recalibration — no conversion factor needed.
    f32 posX = pp->getFramePosX();
    f32 posY = pp->getFramePosY();
    f32 posZ = pp->getFramePosZ();
    f32 yawDeg = EGG::RadToDeg(pp->getYawRad());
    f32 speed = pp->getSpeed();

    kart->setPosition(posX, posY, posZ);
    kart->setYawDeg(yawDeg);
    kart->setSpeed(speed);
}

// =============================================================================
// updateWithFullPipeline — MKWii-faithful physics with KartDynamics integration
// =============================================================================
// This mirrors the original MKWii pipeline:
//   PlayerSub10 computes vehicleSpeed → writes to KartDynamics.internalVel
//   Collision system writes forces/torques to KartDynamics
//   KartDynamics::calc() integrates → final position
//
// In the port:
//   PlayerPhysics computes stats-based speed → syncToDynamics
//   Collision forces applied to KartDynamics
//   KartDynamics::calc() handles rigid body integration
//   Results sync back to KartEntity for rendering

void Player::updateWithFullPipeline(f32 dt, const void* inputState) {
    auto* kart = static_cast<KartEntity*>(m_kartEntity);
    auto* pp = m_playerPhysics;
    if (!pp || !kart || !inputState) return;

    const auto& input = *static_cast<const Platform::InputState*>(inputState);

    // 1. Query collision from KCL system
    bool hasFloor = true;
    bool offroad = false, boostPad = false, wallHit = false;
    f32 wallNX = 0.0f, wallNZ = 0.0f;
    kart->queryCollision(offroad, boostPad, wallHit, wallNX, wallNZ, m_collision);

    // 2. Run the full physics pipeline via PhysicsPipeline
    f32 outPosX, outPosY, outPosZ, outYawDeg, outSpeed;
    PhysicsPipeline::fullPhysicsStep(
        pp, m_kartDynamics,
        input.accelerate, input.steer, input.brake,
        hasFloor, offroad, boostPad, wallHit, wallNX, wallNZ,
        dt,
        outPosX, outPosY, outPosZ, outYawDeg, outSpeed);

    // 3. Sync final position/speed to KartEntity for rendering
    kart->setPosition(outPosX, outPosY, outPosZ);
    kart->setYawDeg(outYawDeg);
    kart->setSpeed(outSpeed);
}

// =============================================================================
// syncKartDynamicsToEntity — Sync KartDynamics result to KartEntity
// =============================================================================

void Player::syncKartDynamicsToEntity() {
    if (!m_kartDynamics || !m_kartEntity) return;
    auto* kart = static_cast<KartEntity*>(m_kartEntity);
    kart->setPosition(m_kartDynamics->pos.x,
                      m_kartDynamics->pos.y,
                      m_kartDynamics->pos.z);
    kart->setSpeed(m_kartDynamics->speedNorm);
    // Extract yaw from mainRot quaternion
    f32 yawDeg = EGG::RadToDeg(std::atan2(
        2.0f * (m_kartDynamics->mainRot.y * m_kartDynamics->mainRot.w),
        1.0f - 2.0f * (m_kartDynamics->mainRot.y * m_kartDynamics->mainRot.y)));
    kart->setYawDeg(yawDeg);
}

// =============================================================================
// updateWithKartEntity — Fallback KartEntity physics (no PlayerPhysics)
// =============================================================================

void Player::updateWithKartEntity(f32 dt, const void* inputState) {
    auto* kart = static_cast<KartEntity*>(m_kartEntity);
    if (kart && inputState) {
        const auto& input = *static_cast<const Platform::InputState*>(inputState);
        kart->update(input, dt, m_collision);
    }
}

// =============================================================================
// updateWithDecompiledPhysics — Full MKWii decompiled physics pipeline
// =============================================================================
// Calls PlayerSub10::update() (zero-param, reads everything through
// playerPointers). Input is fed via sub_getTurnInput() bridge in pad_bridge.cpp.
// After update, syncs PlayerSub10 state back to KartEntity for rendering.
//
// Physics flow:
//   Platform::InputManager → sub_getTurnInput() → PlayerSub10::update()
//   → turn, accel, drift, boost, status effects all computed internally
//   → sync vehicleSpeed/dir/scale back to KartEntity

void Player::updateWithDecompiledPhysics(f32 dt, const void* inputState) {
    auto* kart = static_cast<KartEntity*>(m_kartEntity);
    auto* sub10 = m_playerSub10;
    if (!sub10 || !kart || !inputState) return;

    const auto& input = *static_cast<const Platform::InputState*>(inputState);

    // Query collision from KCL system for KartState flags
    bool offroad = false, boostPad = false, wallHit = false;
    f32 wallNX = 0.0f, wallNZ = 0.0f;
    kart->queryCollision(offroad, boostPad, wallHit, wallNX, wallNZ, m_collision);

    // Feed collision state into KartState flags and PlayerSub10 KCL factors
    if (m_kartState) {
        // Ground collision
        m_kartState->set(Kart::KART_FLAG_TOUCHING_GROUND);

        // Off-road — set KCL speed/rotation factors for PlayerSub10
        if (offroad) {
            // KCL offroad penalty factors (typical MKWii values)
            sub10->kclSpeedFactor = -0.4f;    // 40% speed reduction
            sub10->kclRotFactor = -0.3f;      // 30% rotation reduction
            sub10->kclWheelSpeedFactor = -0.2f;
            sub10->kclWheelRotFactor = -0.2f;
        } else {
            sub10->kclSpeedFactor = 0.0f;
            sub10->kclRotFactor = 0.0f;
            sub10->kclWheelSpeedFactor = 0.0f;
            sub10->kclWheelRotFactor = 0.0f;
        }

        // Wall hit
        if (wallHit) {
            m_kartState->set(Kart::KART_FLAG_STH_WALL_COL);
        }

        // Boost pad — activate boost in PlayerSub10's boost system
        // In the original MKWii, boost pad detection triggers
        // activateBoostSlot(BOOST_TYPE_MUSHROOM, 60) via the race system.
        if (boostPad) {
            sub10->activateBoostMushroomClean();
            if (m_kartMove) {
                m_kartMove->setPadType(Kart::PAD_TYPE_BOOST_PANEL);
            }
        }
    }

    // Input is read by PlayerSub10 via extern bridge functions in pad_bridge.cpp:
    //   sub_getTurnInput()  → Platform::InputManager::getState().steer
    //   sub_getAccelInput() → Platform::InputManager::getState().accelerate
    //   sub_getBrakeInput() → Platform::InputManager::getState().brake
    //   sub_getDriftInput() → Platform::InputManager::getState().drift
    // No explicit input feeding needed here — PlayerSub10::update() queries directly.
    (void)input;

    // Run the full MKWii physics tick
    sub10->update();

    // =========================================================================
    // KartDynamics integration (faithful to original MKWii pipeline)
    // =========================================================================
    // In the original game, PlayerSub10 computes vehicleSpeed and dir, then
    // KartDynamics::calc() integrates the final position using:
    //   speed = externalVel * dt + internalVel + movingRoadVel + movingWaterVel
    //   pos += speed
    // The internalVel is the main driving velocity (dir * vehicleSpeed).
    // externalVel handles gravity, collision forces, item hits, etc.
    // mainRot quaternion is updated from angular velocity each frame.
    // =========================================================================

    f32 speed = sub10->vehicleSpeed;
    const auto& dir = sub10->dir;

    if (m_kartDynamics) {
        auto* dyn = m_kartDynamics;

        // 1. Set internal velocity from PlayerSub10 output
        //    PlayerSub10 uses per-frame-at-60fps units. KartDynamics uses
        //    continuous-time (units/second). Conversion: multiply by 60.
        //    internalVel is the displacement per frame in the original game,
        //    so in continuous time it represents velocity (units/second).
        f32 speedPerSec = speed * 60.0f;
        dyn->internalVel.x = dir.x * speedPerSec;
        dyn->internalVel.y = dir.y * speedPerSec;
        dyn->internalVel.z = dir.z * speedPerSec;

        // 2. Set gravity state from KCL collision
        //    In MKWii, noGravity=true means gravity IS applied (confusing name).
        //    Grounded: noGravity=false → calc() skips gravity (KCL floor holds kart)
        //    Airborne: noGravity=true → calc() applies gravity (kart falls)
        bool isAirborne = (sub10->hopFrame > 0);
        dyn->noGravity = isAirborne;

        // When grounded, apply a downward gravity force manually.
        // calc() won't add it since noGravity=false, but the downward force
        // is needed for KCL floor collision response to work correctly.
        if (!isAirborne) {
            // gravity is a pre-scaled force (already incorporates mass in MKWii)
            dyn->totalForce.y += dyn->gravity;
        }

        // 3. Set mainRot quaternion from PlayerSub10's direction vector
        //    In the original, this comes from KartMove's rotation matrix.
        //    We compute yaw from the XZ direction vector.
        f32 yawRad = std::atan2(dir.x, dir.z);
        f32 halfYaw = yawRad * 0.5f;
        f32 cosY = std::cos(halfYaw);
        f32 sinY = std::sin(halfYaw);
        dyn->mainRot = EGG::Quatf(0.0f, sinY, 0.0f, cosY);
        dyn->fullRot = dyn->mainRot;

        // 4. Compute max speed from PlayerSub10's hard speed limit
        //    Convert from per-frame (60fps) to continuous units/sec
        f32 maxSpeed = sub10->hardSpeedLimit * 60.0f;
        if (maxSpeed < 6000.0f) maxSpeed = 7200.0f; // Fallback (120 * 60)

        // 5. Clamp dt to prevent physics explosion on frame drops
        if (dt < 0.001f) dt = 0.001f;
        if (dt > 0.1f)   dt = 0.1f;

        // 6. Run KartDynamics integration
        //    air=1 when airborne (allows vertical velocity), air=0 when grounded
        dyn->calc(dt, maxSpeed, isAirborne ? 1 : 0);

        // 7. Wall collision response (faithful to original MKWii KartCollide::processWall)
        //    After calc(), check if kart is inside a wall via KCL sphere query.
        //    If wall hit: reflect internalVel along wall normal, push kart out,
        //    apply wall bounce factor.
        if (wallHit && m_kartDynamics) {
            // Wall normal from KCL collision query
            EGG::Vector3f wallNrm(wallNX, 0.0f, wallNZ);
            f32 wallNrmLen = std::sqrt(wallNrm.x * wallNrm.x + wallNrm.z * wallNrm.z);
            if (wallNrmLen > 0.001f) {
                wallNrm.x /= wallNrmLen;
                wallNrm.z /= wallNrmLen;

                // Reflect internalVel component along wall normal
                // In the original: KartCollide::resolveCollision()
                f32 velDotWall = dyn->internalVel.x * wallNrm.x
                               + dyn->internalVel.y * wallNrm.y
                               + dyn->internalVel.z * wallNrm.z;

                if (velDotWall < 0.0f) {
                    // Only reflect if moving into the wall
                    f32 bounce = 0.8f; // wallBounceFactor from KartCollide::init()
                    f32 impulse = -(1.0f + bounce) * velDotWall;
                    dyn->internalVel.x += impulse * wallNrm.x;
                    dyn->internalVel.y += impulse * wallNrm.y;
                    dyn->internalVel.z += impulse * wallNrm.z;

                    // Push kart out of wall
                    // In the original, tangentOff from ColInfo is used.
                    // Approximate: push along wall normal by penetration depth.
                    f32 pushDist = std::fabsf(velDotWall) * dt * 2.0f + 5.0f;
                    dyn->pos.x += wallNrm.x * pushDist;
                    dyn->pos.y += wallNrm.y * pushDist;
                    dyn->pos.z += wallNrm.z * pushDist;
                }
            }
        }

        // 8. Read final position from KartDynamics
        f32 posX = dyn->pos.x;
        f32 posY = dyn->pos.y;
        f32 posZ = dyn->pos.z;

        // 8. Compute yaw from KartDynamics mainRot quaternion
        f32 yawDeg = EGG::RadToDeg(std::atan2(
            2.0f * (dyn->mainRot.y * dyn->mainRot.w),
            1.0f - 2.0f * (dyn->mainRot.y * dyn->mainRot.y)));

        kart->setPosition(posX, posY, posZ);
        kart->setYawDeg(yawDeg);
        kart->setSpeed(dyn->speedNorm);
    } else {
        // Fallback: no KartDynamics — simple position integration
        f32 yawRad = std::atan2(dir.x, dir.z);
        f32 yawDeg = EGG::RadToDeg(yawRad);

        auto pos = kart->getPosition();
        f32 posX = pos.x + dir.x * speed * dt;
        f32 posY = pos.y + dir.y * speed * dt;
        f32 posZ = pos.z + dir.z * speed * dt;

        kart->setPosition(posX, posY, posZ);
        kart->setYawDeg(yawDeg);
        kart->setSpeed(speed);
    }

    // Also sync to KartMove for subsystem consistency
    if (m_kartMove) {
        m_kartMove->setSpeed(speed);
    }
}

// =============================================================================
// render — Draw the kart
// =============================================================================

void Player::render(const EGG::Matrix44f& viewProj) const {
    if (!m_active || !m_kartEntity) return;
    auto* kart = static_cast<KartEntity*>(m_kartEntity);
    kart->render(viewProj);
}

// =============================================================================
// cleanup — Release all resources
// =============================================================================

void Player::cleanup() {
    if (m_kartEntity) {
        auto* kart = static_cast<KartEntity*>(m_kartEntity);
        kart->cleanupGL();
        delete kart;
        m_kartEntity = nullptr;
    }

    if (m_playerPhysics) {
        delete m_playerPhysics;
        m_playerPhysics = nullptr;
    }

    if (m_aiController) {
        delete m_aiController;
        m_aiController = nullptr;
    }

    if (m_kartDynamics) {
        delete m_kartDynamics;
        m_kartDynamics = nullptr;
    }

    if (m_itemSlot) {
        delete m_itemSlot;
        m_itemSlot = nullptr;
    }

    // Decompiled MKWii subsystems
    if (m_playerSub10) {
        delete m_playerSub10;
        m_playerSub10 = nullptr;
    }
    if (m_kartMove) {
        delete m_kartMove;
        m_kartMove = nullptr;
    }
    if (m_kartState) {
        delete m_kartState;
        m_kartState = nullptr;
    }
    if (m_playerPointers) {
        delete m_playerPointers;
        m_playerPointers = nullptr;
    }

    m_active = false;
}

// =============================================================================
// Accessors — delegate to KartEntity
// =============================================================================

EGG::Vector3f Player::getPosition() const {
    if (!m_kartEntity) return EGG::Vector3f(0.0f, 0.0f, 0.0f);
    return static_cast<KartEntity*>(m_kartEntity)->getPosition();
}

f32 Player::getSpeed() const {
    if (!m_kartEntity) return 0.0f;
    return static_cast<KartEntity*>(m_kartEntity)->getSpeed();
}

f32 Player::getYaw() const {
    if (!m_kartEntity) return 0.0f;
    return static_cast<KartEntity*>(m_kartEntity)->getYaw();
}

EGG::Vector3f Player::getChaseCamPos(f32 backDist, f32 upOffset) const {
    if (!m_kartEntity) return EGG::Vector3f(0.0f, 0.0f, 0.0f);
    return static_cast<KartEntity*>(m_kartEntity)->getChaseCamPos(backDist, upOffset);
}

// =============================================================================
// Physics state queries — delegate to PlayerPhysics
// =============================================================================

bool Player::isBoosting() const {
    if (!m_playerPhysics) return false;
    return m_playerPhysics->isBoosting();
}

bool Player::isOffRoad() const {
    if (!m_playerPhysics) return false;
    return m_playerPhysics->isOffRoad();
}

bool Player::isWallHit() const {
    if (!m_playerPhysics) return false;
    return m_playerPhysics->isWallHit();
}

// =============================================================================
// initAI — Set up AI controller with path
// =============================================================================

void Player::initAI(const std::vector<Loaders::KmpEntry::PathPoint>& path,
                    u32 startWaypoint, f32 baseSpeed, f32 steerAggro) {
    if (!m_isAI) return;

    if (m_aiController) {
        delete m_aiController;
    }

    m_aiController = new AIController();
    m_aiController->init(path, startWaypoint, baseSpeed, steerAggro);
}

// =============================================================================
// setTintColor — Distinguish AI karts visually
// =============================================================================

void Player::setTintColor(f32 r, f32 g, f32 b) {
    if (!m_kartEntity) return;
    static_cast<KartEntity*>(m_kartEntity)->setTintColor(r, g, b);
}

// =============================================================================
// initKartDynamics — Initialize the KartDynamics rigid body
// =============================================================================

void Player::initKartDynamics(f32 halfW, f32 halfH, f32 halfD, f32 mass) {
    if (m_kartDynamics) {
        delete m_kartDynamics;
    }

    m_kartDynamics = new Kart::KartDynamicsKart();
    m_kartDynamics->setDefault();
    // MKWii gravity: ~0.42 units/frame² at 60fps.
    // Continuous-time conversion: a = 0.42 * 60² = 1512 units/s²
    // This matches the original hop arc height (~120 units) and fall speed.
    m_kartDynamics->gravity = -1512.0f;
    m_kartDynamics->mass = mass;

    EGG::Vector3f dims(halfW, halfH, halfD);
    EGG::Vector3f offset(0.0f, 0.0f, 0.0f);
    m_kartDynamics->setBspParams(dims, offset, false, 1.0f);

    if (m_kartEntity) {
        m_kartDynamics->pos = static_cast<KartEntity*>(m_kartEntity)->getPosition();
    }

    if (m_kartEntity) {
        f32 yaw = EGG::DegToRad(static_cast<KartEntity*>(m_kartEntity)->getYaw());
        f32 halfYaw = yaw * 0.5f;
        // Y-axis rotation quaternion: w=cos(θ/2), x=0, y=sin(θ/2), z=0
        // Field order: x, y, z, w
        m_kartDynamics->mainRot = EGG::Quatf(0.0f, std::sin(halfYaw), 0.0f, std::cos(halfYaw));
    }

    m_useKartDynamics = false;
}

// =============================================================================
// stepKartDynamics — Run one frame of KartDynamics simulation
// =============================================================================

void Player::stepKartDynamics(f32 accelInput, f32 steerInput, f32 dt) {
    if (!m_kartDynamics) return;
    if (dt < 0.001f) dt = 0.001f;
    if (dt > 0.1f)   dt = 0.1f;

    auto* dyn = m_kartDynamics;

    if (accelInput > 0.0f) {
        EGG::Vector3f forward(0.0f, 0.0f, 1.0f);
        f32 engineForce = 60000.0f * accelInput;
        dyn->applyEngineForce(engineForce, forward);
    }

    f32 speedMag = dyn->externalVel.normalise();
    f32 steerTorque = steerInput * 5000.0f * std::min(speedMag / 100.0f, 1.0f);
    dyn->addTorque(EGG::Vector3f(0.0f, steerTorque, 0.0f));

    dyn->applyAirDrag(0.001f);
    dyn->applyRollingResistance(0.02f);

    if (!dyn->noGravity) {
        dyn->addForce(EGG::Vector3f(0.0f, dyn->gravity * dyn->mass, 0.0f));
    }

    f32 maxSpeed = 3000.0f;
    dyn->calc(dt, maxSpeed, 0);
}

// =============================================================================
// resolveKartKartCollisions — Kart-kart collision detection and response
// =============================================================================
// Called by SceneRace after all players have been updated. Checks all player
// pairs for bounding sphere overlap, then applies impulse-based collision
// response. Faithful to KartPhysicsEngine::calcKartCollisions() in MKWii.
//
// Algorithm (matching original):
//   1. For each pair (i, j), check bounding sphere overlap
//   2. If overlapping, compute collision normal (center-to-center, normalized)
//   3. Compute relative speed along collision normal
//   4. Apply impulse to both karts' internalVel
//   5. Separate overlapping karts (position correction)
//   6. Apply player bump cooldown (playerBumpTimer in KartCollide)
// =============================================================================
// @addr 0x805A1800 (estimated)
void Player::resolveKartKartCollisions(Player** players, u32 count) {
    if (!players || count < 2) return;

    // Kart bounding radius — MKWii uses ~65-70 units
    const f32 kartRadius = 65.0f;
    const f32 restitution = 0.3f;  // Kart-kart collision restitution (low bouncy)
    const f32 minBumpInterval = 10; // Frames between bump effects

    for (u32 i = 0; i < count; i++) {
        if (!players[i] || !players[i]->m_active) continue;
        auto* dynA = players[i]->getKartDynamics();
        if (!dynA) continue;

        for (u32 j = i + 1; j < count; j++) {
            if (!players[j] || !players[j]->m_active) continue;
            auto* dynB = players[j]->getKartDynamics();
            if (!dynB) continue;

            // 1. Bounding sphere overlap test
            EGG::Vector3f diff;
            diff.x = dynB->pos.x - dynA->pos.x;
            diff.y = dynB->pos.y - dynA->pos.y;
            diff.z = dynB->pos.z - dynA->pos.z;
            f32 distSq = diff.x * diff.x + diff.y * diff.y + diff.z * diff.z;
            f32 minDist = kartRadius * 2.0f;

            if (distSq >= minDist * minDist || distSq < 0.001f) continue;

            // 2. Compute collision normal (A → B)
            f32 dist = std::sqrt(distSq);
            EGG::Vector3f colNrm;
            colNrm.x = diff.x / dist;
            colNrm.y = diff.y / dist;
            colNrm.z = diff.z / dist;

            // 3. Relative velocity along collision normal
            EGG::Vector3f relVel;
            relVel.x = dynA->internalVel.x - dynB->internalVel.x;
            relVel.y = dynA->internalVel.y - dynB->internalVel.y;
            relVel.z = dynA->internalVel.z - dynB->internalVel.z;
            f32 relSpeedNrm = relVel.x * colNrm.x
                           + relVel.y * colNrm.y
                           + relVel.z * colNrm.z;

            // Only resolve if karts are approaching
            if (relSpeedNrm <= 0.0f) continue;

            // 4. Compute and apply impulse
            //    In the original: KartCollide_calcMomentum()
            //    j = -(1 + e) * v_n / (1/mA + 1/mB)
            f32 massA = dynA->mass;
            f32 massB = dynB->mass;
            f32 invMassSum = 1.0f / massA + 1.0f / massB;
            if (invMassSum < 0.0001f) invMassSum = 0.0001f;
            f32 impulse = -(1.0f + restitution) * relSpeedNrm / invMassSum;

            // Clamp impulse to prevent physics explosion
            if (impulse > 50000.0f) impulse = 50000.0f;
            if (impulse < -50000.0f) impulse = -50000.0f;

            // Apply impulse to kart A (pushed away from B)
            dynA->internalVel.x += (impulse / massA) * colNrm.x;
            dynA->internalVel.y += (impulse / massA) * colNrm.y;
            dynA->internalVel.z += (impulse / massA) * colNrm.z;

            // Apply impulse to kart B (pushed away from A)
            dynB->internalVel.x -= (impulse / massB) * colNrm.x;
            dynB->internalVel.y -= (impulse / massB) * colNrm.y;
            dynB->internalVel.z -= (impulse / massB) * colNrm.z;

            // 5. Position correction (push apart)
            f32 overlap = minDist - dist;
            f32 pushFactor = overlap * 0.5f + 1.0f; // Push slightly extra
            dynA->pos.x -= colNrm.x * pushFactor;
            dynA->pos.y -= colNrm.y * pushFactor;
            dynA->pos.z -= colNrm.z * pushFactor;
            dynB->pos.x += colNrm.x * pushFactor;
            dynB->pos.y += colNrm.y * pushFactor;
            dynB->pos.z += colNrm.z * pushFactor;
        }
    }
}

} // namespace Game
