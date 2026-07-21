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

// Decompiled subsystems
#include "KartMovement/KartMove.hpp"
#include "Physics/PlayerPhysics.hpp"
#include "Collision/KartDynamics.hpp"

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
    , m_usePlayerPhysics(true) {}

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

    // By default, PlayerPhysics drives physics for human players
    // AI players still use KartEntity for now (AI controller drives directly)
    m_usePlayerPhysics = !isAI;
}

// =============================================================================
// update — Per-frame physics and AI update
// =============================================================================

void Player::update(f32 dt, const void* inputState) {
    if (!m_active || !m_kartEntity) return;

    auto* kart = static_cast<KartEntity*>(m_kartEntity);

    if (m_isAI && m_aiController) {
        // AI: controller drives KartEntity directly
        // (AI path-following uses KartEntity's simpler physics)
        m_aiController->updateKart(*kart, dt);
    } else if (inputState != nullptr) {
        const auto& input = *static_cast<const Platform::InputState*>(inputState);

        if (m_usePlayerPhysics && m_playerPhysics) {
            updateWithPlayerPhysics(dt, inputState);
        } else if (m_useKartDynamics && m_kartDynamics) {
            stepKartDynamics(input.accelerate, input.steer, dt);
            // Sync KartDynamics position back to KartEntity for rendering
            auto* kart = static_cast<KartEntity*>(m_kartEntity);
            kart->setPosition(m_kartDynamics->pos.x,
                              m_kartDynamics->pos.y,
                              m_kartDynamics->pos.z);
            kart->setSpeed(m_kartDynamics->speedNorm);
            // Extract yaw from quaternion
            f32 yawDeg = EGG::RadToDeg(std::atan2(
                2.0f * (m_kartDynamics->mainRot.z * m_kartDynamics->mainRot.w +
                        m_kartDynamics->mainRot.x * m_kartDynamics->mainRot.y),
                1.0f - 2.0f * (m_kartDynamics->mainRot.y * m_kartDynamics->mainRot.y +
                                m_kartDynamics->mainRot.z * m_kartDynamics->mainRot.z)));
            kart->setYawDeg(yawDeg);
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
    m_kartDynamics->gravity = -1.0f;
    m_kartDynamics->mass = mass;

    EGG::Vector3f dims(halfW, halfH, halfD);
    EGG::Vector3f offset(0.0f, 0.0f, 0.0f);
    m_kartDynamics->setBspParams(dims, offset, false, 1.0f);

    if (m_kartEntity) {
        m_kartDynamics->pos = static_cast<KartEntity*>(m_kartEntity)->getPosition();
    }

    if (m_kartEntity) {
        f32 yaw = EGG::DegToRad(static_cast<KartEntity*>(m_kartEntity)->getYaw());
        m_kartDynamics->mainRot = EGG::Quatf(0.0f, 0.0f, std::sin(yaw * 0.5f), std::cos(yaw * 0.5f));
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

} // namespace Game
