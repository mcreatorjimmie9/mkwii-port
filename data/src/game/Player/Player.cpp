// Player.cpp — Per-player kart entity implementation
//
// Bridges the decompiled architecture (KartMove, KartDynamics, PlayerPhysics)
// with the working reimplemented systems (KartEntity, AIController, CollisionSystem).

#include "Player/Player.hpp"
#include "game/KartEntity.hpp"
#include "game/AIController.hpp"
#include "game/CollisionSystem.hpp"
#include "game/ItemBox.hpp"
#include "game/RaceSession.hpp"

#include <cstdio>
#include <cstring>
#include <cmath>

// Decompleted subsystems — architecture references only
#include "KartMovement/KartMove.hpp"
// NOTE: KartMovement/KartDynamics.hpp is NOT included here.
// The KartDynamics from KartMovement/ (Phase 6b) has a different class layout
// without the extended physics methods. We use the Collision/ version instead.
#include "Physics/PlayerPhysics.hpp"

// KartDynamics from Collision module (community-verified version with full calc())
// This is included AFTER KartMove.hpp to avoid the KartMovement/ version.
// The Collision/ version has: calc(), applyEngineForce(), applyAirDrag(),
// applyRollingResistance(), mass field, and full quaternion integration.
#include "Collision/KartDynamics.hpp"

namespace Game {

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
    , m_aiController(nullptr)
    , m_collision(nullptr)
    , m_kartDynamics(nullptr)
    , m_useKartDynamics(false) {}

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

    // Allocate and initialize the working KartEntity
    auto* kart = new KartEntity();
    kart->initFromKMP(start);
    kart->initGL();
    m_kartEntity = kart;

    // Allocate item slot
    m_itemSlot = new ItemSlot();

    // Initialize KartDynamics rigid body
    // MKWii kart dimensions: 80 wide (X), 50 tall (Y), 80 long (Z)
    // Half-extents for inertia calculation
    initKartDynamics(40.0f, 25.0f, 40.0f, 65.0f);

    // AI controller is set up separately via initAI()
}

// =============================================================================
// update — Per-frame physics and AI update
// =============================================================================

void Player::update(f32 dt, const void* inputState) {
    if (!m_active || !m_kartEntity) return;

    auto* kart = static_cast<KartEntity*>(m_kartEntity);

    if (m_isAI && m_aiController) {
        // AI: controller generates input and drives the kart directly
        m_aiController->updateKart(*kart, dt);
    } else if (inputState != nullptr) {
        const auto& input = *static_cast<const Platform::InputState*>(inputState);

        // If KartDynamics is active, use it as the primary physics engine
        if (m_useKartDynamics && m_kartDynamics) {
            stepKartDynamics(input.accelerate, input.steer, dt);
            // Sync KartDynamics position back to KartEntity for rendering
            auto* kart = static_cast<KartEntity*>(m_kartEntity);
            // We can't directly set KartEntity position, so we fall back
            // to letting KartEntity's update handle rendering
            kart->update(input, dt, m_collision);
        } else {
            kart->update(input, dt, m_collision);
        }
    }

    // Update race distance for position calculation
    if (!m_finished) {
        m_distance += kart->getSpeed() * dt * 0.001f;
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
// Sets up the KartDynamicsKart with BSP-based parameters:
//   - halfW, halfH, halfD: kart body half-extents for inertia calculation
//   - mass: vehicle mass for momentum calculations
// The rigid body is positioned at the KartEntity's current position.
void Player::initKartDynamics(f32 halfW, f32 halfH, f32 halfD, f32 mass) {
    if (m_kartDynamics) {
        delete m_kartDynamics;
    }

    m_kartDynamics = new Kart::KartDynamicsKart();
    m_kartDynamics->setDefault();
    m_kartDynamics->gravity = -1.0f;
    m_kartDynamics->mass = mass;

    // Set inertia from kart body dimensions
    // In MKWii, setBspParams computes box inertia tensor
    EGG::Vector3f dims(halfW, halfH, halfD);
    EGG::Vector3f offset(0.0f, 0.0f, 0.0f);
    m_kartDynamics->setBspParams(dims, offset, false, 1.0f);

    // Position at kart entity location
    if (m_kartEntity) {
        m_kartDynamics->pos = static_cast<KartEntity*>(m_kartEntity)->getPosition();
    }

    // Initialize quaternion rotation from yaw
    if (m_kartEntity) {
        f32 yaw = EGG::DegToRad(static_cast<KartEntity*>(m_kartEntity)->getYaw());
        m_kartDynamics->mainRot = EGG::Quatf(0.0f, 0.0f, std::sin(yaw * 0.5f), std::cos(yaw * 0.5f));
    }

    // By default, KartEntity drives physics; KartDynamics is available
    // for when the full MKWii physics pipeline is connected.
    m_useKartDynamics = false;
}

// =============================================================================
// stepKartDynamics — Run one frame of KartDynamics simulation
// =============================================================================
// This drives the decompiled KartDynamics::calc() with input-derived forces:
//   1. Clear accumulated forces/torques from previous frame
//   2. Apply engine force (from acceleration input)
//   3. Apply steering torque (from steering input)
//   4. Apply air drag
//   5. Apply rolling resistance
//   6. Call calc() to integrate
//
// When fully connected, this replaces KartEntity's simplified physics.
void Player::stepKartDynamics(f32 accelInput, f32 steerInput, f32 dt) {
    if (!m_kartDynamics) return;
    if (dt < 0.001f) dt = 0.001f;
    if (dt > 0.1f)   dt = 0.1f;

    auto* dyn = m_kartDynamics;

    // 1. Apply engine force in forward direction
    // MKWii engine force: ~60000 at full throttle for medium kart
    if (accelInput > 0.0f) {
        EGG::Vector3f forward(0.0f, 0.0f, 1.0f); // Body-frame forward (+Z)
        f32 engineForce = 60000.0f * accelInput;
        dyn->applyEngineForce(engineForce, forward);
    }

    // 2. Apply steering as a yaw torque
    // MKWii steering torque depends on speed and handling
    f32 speedMag = dyn->externalVel.normalise();
    f32 steerTorque = steerInput * 5000.0f * std::min(speedMag / 100.0f, 1.0f);
    dyn->addTorque(EGG::Vector3f(0.0f, steerTorque, 0.0f));

    // 3. Apply air drag (quadratic resistance)
    // MKWii drag coefficient ~0.001 for karts
    dyn->applyAirDrag(0.001f);

    // 4. Apply rolling resistance (constant opposing force when grounded)
    // MKWii rolling resistance coefficient ~0.02
    dyn->applyRollingResistance(0.02f);

    // 5. Apply gravity
    if (!dyn->noGravity) {
        dyn->addForce(EGG::Vector3f(0.0f, dyn->gravity * dyn->mass, 0.0f));
    }

    // 6. Integrate (calls calc() internally)
    f32 maxSpeed = 3000.0f; // MKWii medium kart top speed
    dyn->calc(dt, maxSpeed, 0); // air=0 means grounded

    // 7. Sync position back (for camera/accessors)
    // KartEntity reads from its own m_position, so we update that
    // through the stepKartDynamics caller (SceneRace updateRacing)
}

} // namespace Game
