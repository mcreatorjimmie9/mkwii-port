#include "KartGravity.hpp"
#include "KartDynamics.hpp"
#include <game/field/CollisionEntries.hpp>
#include <math.h>

namespace Kart {

// Physics constants
const f32 KartGravity::GRAVITY_ACCEL       = 1.0f;
const f32 KartGravity::MAX_SLOPE_FORCE     = 5.0f;
const f32 KartGravity::ROAD_VEL_TRANSFER   = 0.8f;
const f32 KartGravity::WATER_VEL_TRANSFER  = 0.5f;

KartGravity::KartGravity()
    : m_hasFloorNormal(false)
    , m_slopeFactor(0.0f)
    , m_onMovingRoad(false)
    , m_inMovingWater(false)
    , m_waterVariant(0) {
    m_floorNormal.setUp();
    m_movingRoadVel.setAll(0);
    m_movingWaterVel.setAll(0);
}

KartGravity::~KartGravity() {}

void KartGravity::init() {
    m_floorNormal.setUp();
    m_hasFloorNormal = false;
    m_slopeFactor = 0.0f;
    m_movingRoadVel.setAll(0);
    m_onMovingRoad = false;
    m_movingWaterVel.setAll(0);
    m_inMovingWater = false;
    m_waterVariant = 0;
}

void KartGravity::calcSlopeNormal(const EGG::Vector3f& pos, EGG::Vector3f& outNormal) {
    // Cast a ray downward from position and get the floor normal from KCL.
    // In the real game, this uses KCollision sphere/point checks.
    // For now, return the stored floor normal if available, else (0,1,0).
    if (m_hasFloorNormal) {
        outNormal = m_floorNormal;
    } else {
        outNormal.setUp();
    }
}

f32 KartGravity::calcSlopeFactor(const EGG::Vector3f& normal) {
    // Slope factor = 1 - |dot(normal, up)|
    // Flat surface: dot = 1.0, factor = 0.0
    // Vertical wall: dot = 0.0, factor = 1.0
    EGG::Vector3f up;
    up.setUp();

    f32 dot = normal.dot(up);
    if (dot < 0.0f) dot = 0.0f; // Clamp for inverted normals
    if (dot > 1.0f) dot = 1.0f;

    m_slopeFactor = 1.0f - dot;
    return m_slopeFactor;
}

void KartGravity::applyGravity(KartDynamics* dyn, f32 dt) {
    if (!dyn || dt <= 0.0f) return;

    // Standard gravity: applied as a downward force
    // gravity field on KartDynamics is typically -1.0f
    EGG::Vector3f gravityForce(0.0f, dyn->gravity * GRAVITY_ACCEL, 0.0f);

    if (m_hasFloorNormal) {
        // Decompose gravity into normal and tangential components
        // Normal component is cancelled by the floor reaction force
        // Tangential component causes the kart to slide downhill

        f32 normalDot = gravityForce.dot(m_floorNormal);

        // Only apply tangential (sliding) force if on a slope
        if (m_slopeFactor > 0.01f) {
            // Tangential gravity = gravity - (gravity . normal) * normal
            EGG::Vector3f tangentialGravity = gravityForce - m_floorNormal * normalDot;

            // Clamp tangential force to prevent extreme downhill acceleration
            f32 tangentialMag = tangentialGravity.normalise();
            if (tangentialMag > MAX_SLOPE_FORCE) {
                tangentialGravity *= MAX_SLOPE_FORCE / tangentialMag;
            }

            dyn->addForce(tangentialGravity);
        }
    } else {
        // No floor contact — apply full gravity (airborne)
        dyn->addForce(gravityForce);
    }
}

void KartGravity::applyMovingRoad(KartDynamics* dyn, f32 dt) {
    if (!dyn || !m_onMovingRoad || dt <= 0.0f) return;

    // Moving road imparts its velocity to the kart
    // The transfer rate determines how quickly the kart matches road speed
    EGG::Vector3f roadVelDelta = m_movingRoadVel * ROAD_VEL_TRANSFER * dt;

    // Apply as a direct velocity modification (not force — this is a constraint)
    dyn->externalVel += roadVelDelta;

    // Also zero out gravity effects while on moving road
    // (kart rides the surface)
    if (m_movingRoadVel.squaredLength() > 0.01f) {
        dyn->noGravity = true;
    }
}

void KartGravity::applyMovingWater(KartDynamics* dyn, f32 dt) {
    if (!dyn || !m_inMovingWater || dt <= 0.0f) return;

    // Moving water applies a current force to the kart
    // Variant 1: Strong current (disables acceleration, higher force)
    // Variant 2: Moderate current
    // Variant 3: Strongest current (disables acceleration + highest force)
    f32 transferRate = WATER_VEL_TRANSFER;
    if (m_waterVariant == 1) {
        transferRate = 0.7f;
    } else if (m_waterVariant == 3) {
        transferRate = 0.85f;
    }

    // Apply water current as a force
    EGG::Vector3f waterForce = m_movingWaterVel * transferRate;
    dyn->addForce(waterForce);
}

} // namespace Kart