// =============================================================================
// AIController.cpp — Simple AI kart controller implementation (M7)
// MAESTRO Phase 7, Milestone M7: AI Opponent
// =============================================================================

#include "game/AIController.hpp"
#include "game/KartEntity.hpp"  // Full include needed for updateKart() method calls

#include <cmath>
#include <cstdio>

namespace Game {

// =============================================================================
// Constructor / Destructor
// =============================================================================

AIController::AIController()
    : m_currentWaypoint(0)
    , m_baseSpeed(2500.0f)
    , m_steerAggro(1.0f)
    , m_arrivalDist(300.0f)   // Advance waypoint when within 300 units
    , m_distToNext(0.0f)
    , m_isActive(false) {
}

AIController::~AIController() = default;

// =============================================================================
// init — Set up path and parameters
// =============================================================================

void AIController::init(
        const std::vector<Loaders::KmpEntry::PathPoint>& path,
        u32 startWaypoint,
        f32 baseSpeed,
        f32 steerAggro) {

    m_path = path;
    m_baseSpeed = baseSpeed;
    m_steerAggro = steerAggro;

    if (m_path.empty()) {
        std::printf("  AI: WARNING — empty path, AI will be inactive\n");
        m_isActive = false;
        return;
    }

    // Wrap start waypoint to valid range
    m_currentWaypoint = startWaypoint % static_cast<u32>(m_path.size());

    // Set arrival distance proportional to typical inter-waypoint spacing
    // Use 15% of average segment length, clamped to reasonable range
    f32 totalLen = 0.0f;
    for (size_t i = 0; i < m_path.size(); i++) {
        const auto& p0 = m_path[i].position;
        const auto& p1 = m_path[(i + 1) % m_path.size()].position;
        f32 dx = p1.x - p0.x;
        f32 dy = p1.y - p0.y;
        f32 dz = p1.z - p0.z;
        totalLen += std::sqrt(dx * dx + dy * dy + dz * dz);
    }
    f32 avgLen = totalLen / static_cast<f32>(m_path.size());
    m_arrivalDist = avgLen * 0.15f;
    if (m_arrivalDist < 100.0f) m_arrivalDist = 100.0f;
    if (m_arrivalDist > 500.0f) m_arrivalDist = 500.0f;

    m_isActive = true;
    std::printf("  AI: Initialized with %u waypoints, start=%u, speed=%.0f\n",
               static_cast<u32>(m_path.size()), m_currentWaypoint, m_baseSpeed);
}

// =============================================================================
// angleToTarget — Compute signed angle from kart facing to target
// =============================================================================
// Returns the absolute angle in degrees, and sets outSign to +1 (turn right)
// or -1 (turn left).

f32 AIController::angleToTarget(const EGG::Vector3f& kartPos,
                                  f32 kartYaw,
                                  const EGG::Vector3f& target,
                                  int& outSign) const {
    f32 dx = target.x - kartPos.x;
    f32 dz = target.z - kartPos.z;

    // Angle from kart to target (0 = north/+Z, positive = clockwise/east/+X)
    f32 targetAngle = std::atan2(dx, dz) * (180.0f / 3.14159265358979f);

    // Normalize to [0, 360)
    while (targetAngle < 0.0f)   targetAngle += 360.0f;
    while (targetAngle >= 360.0f) targetAngle -= 360.0f;

    // Normalize kart yaw to [0, 360)
    f32 yaw = kartYaw;
    while (yaw < 0.0f)   yaw += 360.0f;
    while (yaw >= 360.0f) yaw -= 360.0f;

    // Difference: positive = target is clockwise (right) of kart facing
    f32 diff = targetAngle - yaw;

    // Wrap to [-180, +180]
    while (diff > 180.0f)  diff -= 360.0f;
    while (diff < -180.0f) diff += 360.0f;

    // Sign: +1 = steer right (positive diff), -1 = steer left
    outSign = (diff >= 0.0f) ? 1 : -1;

    return std::fabs(diff);
}

// =============================================================================
// advanceWaypoint — Move to the next waypoint (with loop)
// =============================================================================

void AIController::advanceWaypoint() {
    if (m_path.empty()) return;
    m_currentWaypoint = (m_currentWaypoint + 1) % static_cast<u32>(m_path.size());
}

// =============================================================================
// computeInput — Generate an InputState that steers toward the next waypoint
// =============================================================================

Platform::InputState AIController::computeInput(const EGG::Vector3f& kartPos,
                                                   f32 kartYaw,
                                                   f32 dt) {
    Platform::InputState input;

    if (!m_isActive || m_path.empty() || dt < 0.001f) {
        return input;
    }

    // -- 1. Get target waypoint position -------------------------------------
    EGG::Vector3f target;
    {
        const auto& wpPos = m_path[m_currentWaypoint].position;
        target = EGG::Vector3f(wpPos.x, wpPos.y, wpPos.z);
    }

    // -- 2. Calculate distance to target ---------------------------------------
    f32 dx = target.x - kartPos.x;
    f32 dy = target.y - kartPos.y;
    f32 dz = target.z - kartPos.z;
    m_distToNext = std::sqrt(dx * dx + dy * dy + dz * dz);

    // -- 3. Check if we've arrived at the waypoint → advance ------------------
    if (m_distToNext < m_arrivalDist) {
        advanceWaypoint();
        // Recalculate with new target
        const auto& newWpPos = m_path[m_currentWaypoint].position;
        target = EGG::Vector3f(newWpPos.x, newWpPos.y, newWpPos.z);
        dx = target.x - kartPos.x;
        dy = target.y - kartPos.y;
        dz = target.z - kartPos.z;
        m_distToNext = std::sqrt(dx * dx + dy * dy + dz * dz);
    }

    // -- 4. Compute steering angle --------------------------------------------
    int turnSign = 0;
    f32 angle = angleToTarget(kartPos, kartYaw, target, turnSign);

    // Apply steer aggressiveness
    // Map angle to steer magnitude: full steer at 90+ degrees, proportional below
    f32 steerMagnitude = angle / 90.0f;  // 0 at 0 deg, 1.0 at 90 deg
    if (steerMagnitude > 1.0f) steerMagnitude = 1.0f;

    // Apply aggressiveness multiplier
    steerMagnitude *= m_steerAggro;
    if (steerMagnitude > 1.0f) steerMagnitude = 1.0f;

    // Dead zone: don't steer for very small angles (reduces jitter)
    if (angle < 2.0f) {
        steerMagnitude = 0.0f;
    }

    input.steer = turnSign * steerMagnitude;

    // -- 5. Speed control ------------------------------------------------------
    // Slow down for sharp turns (proportional to angle)
    f32 speedFactor = 1.0f;
    if (angle > 30.0f) {
        // Reduce speed for turns sharper than 30 degrees
        speedFactor = 1.0f - (angle - 30.0f) / 150.0f;
        if (speedFactor < 0.3f) speedFactor = 0.3f;
    }

    // Also slow down if the next waypoint is very close (avoid overshoot)
    if (m_distToNext < m_arrivalDist * 2.0f) {
        f32 proximityFactor = m_distToNext / (m_arrivalDist * 2.0f);
        if (proximityFactor < speedFactor) {
            speedFactor = proximityFactor;
        }
    }

    // Apply speed with some randomness for natural feel (slight variation)
    f32 targetSpeed = m_baseSpeed * speedFactor;

    // Accelerate toward target speed
    // Simple approach: if we're below target speed, accelerate; if above, brake
    // We don't have direct speed access here, so we always accelerate at a level
    // proportional to speedFactor. The friction in KartEntity::update() will
    // naturally limit speed.
    input.accelerate = speedFactor;

    // Brake if turning very sharply
    if (angle > 60.0f) {
        input.brake = (angle - 60.0f) / 120.0f * 0.5f;  // Up to 0.5 brake at 120+ deg
        if (input.brake > 0.5f) input.brake = 0.5f;
    }

    return input;
}

// =============================================================================
// updateKart — Convenience wrapper: compute input and apply to kart
// =============================================================================

void AIController::updateKart(::KartEntity& kart, f32 dt) {
    if (!m_isActive || !kart.isActive()) return;

    Platform::InputState input = computeInput(
        kart.getPosition(),
        kart.getYaw(),
        dt
    );

    kart.update(input, dt);
}

} // namespace Game
