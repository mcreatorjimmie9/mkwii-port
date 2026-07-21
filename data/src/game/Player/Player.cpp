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
#include "KartMovement/KartDynamics.hpp"
#include "Physics/PlayerPhysics.hpp"

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
    , m_collision(nullptr) {}

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
        // Human: pass real input to kart physics
        const auto& input = *static_cast<const Platform::InputState*>(inputState);
        kart->update(input, dt, m_collision);
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

} // namespace Game
