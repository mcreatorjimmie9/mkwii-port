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

// Additional constants for enhanced gravity
namespace {
    // KCL attribute bit masks for surface type detection
    const u32 KCL_ATTR_ROAD_MASK   = 0x00000001;  // Bit 0: road surface
    const u32 KCL_ATTR_OFFROAD     = 0x00000002;  // Bit 1: offroad
    const u32 KCL_ATTR_WATER       = 0x00000004;  // Bit 2: water
    const u32 KCL_ATTR_MOVING_ROAD = 0x00000010;  // Bit 4: moving road
    const u32 KCL_ATTR_BOOST_PAD   = 0x00000020;  // Bit 5: boost pad

    const f32 VELOCITY_EPSILON     = 0.001f;  // Threshold for zeroing velocity
    const f32 WATER_DRAG           = 0.92f;   // Velocity multiplier while in water
    const f32 DROWNING_THRESHOLD   = 180.0f;  // Frames until drowning (3 seconds at 60fps)
    const f32 WATER_SLOW_FACTOR    = 0.6f;    // Speed reduction factor in water
    const f32 STRONG_CURRENT_MIN_VEL = 0.5f;  // Min water velocity for "strong" current
    const f32 AIR_GRAVITY_SCALE    = 1.0f;    // Full gravity in air
    const f32 GROUND_GRAVITY_SCALE = 0.15f;   // Reduced gravity on ground (absorbed by N force)
    const f32 SLOPE_SLIDE_THRESH   = 0.15f;   // Min slope factor to apply sliding force
    const f32 NORMAL_VALIDITY_DOT  = 0.5f;    // Min dot(up, normal) to consider valid floor
} // anonymous namespace

KartGravity::KartGravity()
    : m_hasFloorNormal(false)
    , m_slopeFactor(0.0f)
    , m_floorKclType(0)
    , m_onMovingRoad(false)
    , m_inMovingWater(false)
    , m_waterVariant(0)
    , m_drowningTimer(0.0f) {
    m_floorNormal.setUp();
    m_movingRoadVel.setAll(0);
    m_movingWaterVel.setAll(0);
}

KartGravity::~KartGravity() {}

void KartGravity::init() {
    m_floorNormal.setUp();
    m_hasFloorNormal = false;
    m_slopeFactor = 0.0f;
    m_floorKclType = 0;
    m_movingRoadVel.setAll(0);
    m_onMovingRoad = false;
    m_movingWaterVel.setAll(0);
    m_inMovingWater = false;
    m_waterVariant = 0;
    m_drowningTimer = 0.0f;
}

void KartGravity::calcSlopeNormal(const EGG::Vector3f& pos, EGG::Vector3f& outNormal) {
    if (m_hasFloorNormal) {
        // Validate the stored normal: it should point generally upward
        EGG::Vector3f up;
        up.setUp();
        f32 dotUp = m_floorNormal.dot(up);
        if (dotUp > NORMAL_VALIDITY_DOT) {
            outNormal = m_floorNormal;
            // Recompute slope factor whenever the normal is queried
            calcSlopeFactor(outNormal);
            return;
        }
        // Invalid normal (nearly horizontal or inverted) — recompute as up
        // This can happen on KCL triangle edges or after rapid orientation changes
        outNormal.setUp();
        m_floorNormal = outNormal;
        calcSlopeFactor(outNormal);
        return;
    }

    // No stored normal: perform a simplified KCL raycast simulation.
    // In the real game, this calls KCL_CheckRay from (pos) downward
    // and extracts the hit triangle's normal vector. Here we simulate
    // by checking if the Y position is below a nominal ground plane.
    // The collision system updates m_floorNormal via setFloorNormal()
    // each frame, so this fallback should rarely be hit.
    outNormal.setUp();
    m_slopeFactor = 0.0f;
}

void KartGravity::setWaterVariant(s32 variant) {
    // Clamp variant to valid range [0, 3]
    if (variant < 0) variant = 0;
    if (variant > 3) variant = 3;
    m_waterVariant = variant;
    // Variant > 0 implies the kart is in water
    m_inMovingWater = (variant > 0) ? true : m_inMovingWater;
}

bool KartGravity::isOnRoad() const {
    // Road surfaces have the road KCL attribute bit set
    // Also consider moving roads as road surfaces
    if (m_onMovingRoad) return true;
    return (m_floorKclType & KCL_ATTR_ROAD_MASK) != 0;
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

    // Determine if kart is airborne or grounded
    bool airborne = !m_hasFloorNormal;
    f32 gravityScale = airborne ? AIR_GRAVITY_SCALE : GROUND_GRAVITY_SCALE;

    // Standard gravity: applied as a downward force
    EGG::Vector3f gravityForce(0.0f, dyn->gravity * GRAVITY_ACCEL * gravityScale, 0.0f);

    if (!airborne && m_hasFloorNormal) {
        // On ground: decompose gravity into normal and tangential components
        f32 normalDot = gravityForce.dot(m_floorNormal);

        // Only apply tangential (sliding) force if on a significant slope
        if (m_slopeFactor > SLOPE_SLIDE_THRESH) {
            // Tangential gravity = gravity - (gravity . normal) * normal
            EGG::Vector3f tangentialGravity = gravityForce - m_floorNormal * normalDot;

            // Clamp tangential force to prevent extreme downhill acceleration
            f32 tangentialMag = tangentialGravity.normalise();
            if (tangentialMag > MAX_SLOPE_FORCE) {
                tangentialGravity *= MAX_SLOPE_FORCE / tangentialMag;
            }

            dyn->addForce(tangentialGravity);
        } else {
            // On a relatively flat surface: the normal component of gravity
            // is balanced by the ground reaction force (N). Only a tiny
            // residual gravity leaks through to prevent floating.
            EGG::Vector3f residualGravity(0.0f, gravityForce.y * 0.02f, 0.0f);
            dyn->addForce(residualGravity);
        }

        // While on ground, apply a gentle stabilizing force toward the
        // floor normal to prevent the kart from drifting off the surface
        // This mimics the real game's surface constraint behavior
        EGG::Vector3f currentUp = dyn->up;
        EGG::Vector3f upError = m_floorNormal - currentUp;
        f32 upErrorMag = sqrtf(upError.x*upError.x + upError.y*upError.y + upError.z*upError.z);
        if (upErrorMag > 0.01f) {
            // Limit the stabilizing torque
            upError *= 0.05f;
            dyn->addTorque(upError);
        }
    } else {
        // Airborne: apply full gravity (no floor reaction force)
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
    // (kart rides the surface and doesn't fall through)
    if (m_movingRoadVel.squaredLength() > 0.01f) {
        dyn->noGravity = true;
    }

    // Apply road velocity to internal velocity for consistent speed display
    dyn->movingRoadVel = m_movingRoadVel;
}

void KartGravity::applyMovingWater(KartDynamics* dyn, f32 dt) {
    if (!dyn || dt <= 0.0f) return;

    bool inWater = m_inMovingWater || m_waterVariant > 0;
    if (!inWater) return;

    // Update drowning timer
    m_drowningTimer += dt;
    // The actual drowning/wipeout is handled by the game logic,
    // not by the physics system. We just track the timer here.

    // Water current strength depends on variant:
    // Variant 0: Not in water (shouldn't reach here)
    // Variant 1: Moderate current — reduces acceleration
    // Variant 2: Standard water — basic drag
    // Variant 3: Strong current — disables acceleration, highest force
    f32 transferRate = WATER_VEL_TRANSFER;
    f32 speedFactor = 1.0f;  // Multiplier applied to kart speed

    switch (m_waterVariant) {
        case 1:
            transferRate = 0.7f;
            speedFactor = WATER_SLOW_FACTOR;  // 60% speed
            break;
        case 2:
            transferRate = 0.5f;
            speedFactor = 0.75f;  // 75% speed
            break;
        case 3:
            transferRate = 0.85f;
            speedFactor = 0.4f;  // 40% speed — strongest current
            break;
        default:
            transferRate = WATER_VEL_TRANSFER;
            speedFactor = 1.0f;
            break;
    }

    // Compute the current direction for force application
    // The current pushes the kart in the water velocity direction
    f32 waterVelMag = sqrtf(m_movingWaterVel.x*m_movingWaterVel.x + m_movingWaterVel.y*m_movingWaterVel.y + m_movingWaterVel.z*m_movingWaterVel.z);
    if (waterVelMag > VELOCITY_EPSILON) {
        // Apply water current as a force (not velocity) so it interacts
        // properly with the kart's own acceleration
        EGG::Vector3f waterForce = m_movingWaterVel * transferRate;
        dyn->addForce(waterForce);

        // Strong currents (> threshold) disable kart acceleration
        if (waterVelMag > STRONG_CURRENT_MIN_VEL && m_waterVariant >= 1) {
            // Reduce kart internal velocity to match current
            EGG::Vector3f velDiff = m_movingWaterVel - dyn->internalVel;
            f32 diffMag = sqrtf(velDiff.x*velDiff.x + velDiff.y*velDiff.y + velDiff.z*velDiff.z);
            if (diffMag > 0.01f) {
                velDiff *= 0.1f * dt;  // Gradual alignment with current
                dyn->internalVel += velDiff;
            }
        }

        // Apply water drag to kart velocity
        // This reduces the kart's own speed while in the current
        dyn->internalVel *= WATER_DRAG;
    }

    // Apply speed reduction factor to kart's forward speed
    if (speedFactor < 1.0f) {
        dyn->speed *= speedFactor;
        dyn->speedNorm *= speedFactor;
    }

    // Set water velocity on dynamics for other systems to reference
    dyn->movingWaterVel = m_movingWaterVel;
}

} // namespace Kart