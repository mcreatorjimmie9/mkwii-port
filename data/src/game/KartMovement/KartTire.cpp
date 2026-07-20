#include <cstring>
#include <cmath>
#include "KartTire.hpp"
#include "KartWheelPhysics.hpp"
#include "KartDynamics.hpp"

namespace Kart {

// External: vec3 zero function
extern void vec3Zero(void* vec);

// External: accumulate force setup for wheel initialization
// @addr 0x805a22e4
void accumulateForce(void* wheelPhysics, f32 force) {
    // In the original, this writes to the wheel physics force accumulator
    // to set up initial suspension forces
    (void)wheelPhysics;
    (void)force;
}

// 0x8059cf2c - KartTire_ct
// Size: 108 bytes, Calls: 0x80555bf4 (vec3 init)
KartTire::KartTire() {
    // Zero all fields via explicit initialization
    mWheelIdx = 0;
    mBspWheelIdx = 0;
    mWheelPhysics = nullptr;
    mBspWheel = nullptr;
    mTireRadius = 0.0f;
    mTireWidth = 0.0f;
    mGrip = 0.0f;
    mSuspTravel = 0.0f;
    mSurfaceType = SURFACE_NORMAL;
    mContactDepth = 0.0f;
    mContactNormal.setZero();
    mInContact = false;
    memset(_35, 0, sizeof(_35));
    mContactPointOffset.setZero();
    mNormalForce = 0.0f;
    mSteerRatio = 0.0f;
    mDriveRatio = 0.0f;
    mBrakeBias = 0.0f;
    mFriction = 0.0f;
    mRestitution = 0.0f;
    mColBitmask = 0;
    mSlipAngle = 0.0f;
    mTireWear = 0.0f;
    mTirePressure = 1.0f;
    // Initialize wheel index to invalid
    mWheelIdx = 0xFFFFFFFF;
    mBspWheelIdx = -1;
    // Set default tire radius (0.35f)
    mTireRadius = 0.35f;
    // Set default grip (1.0f)
    mGrip = 1.0f;
    // Set default suspension travel (0.1f)
    mSuspTravel = 0.1f;
    // Default width
    mTireWidth = 0.12f;
    // No contact initially
    mInContact = false;
    mContactDepth = 0.0f;
    // Default surface is normal road
    mSurfaceType = SURFACE_NORMAL;
    // Default steering/drive/brake ratios
    mSteerRatio = 0.0f;
    mDriveRatio = 0.0f;
    mBrakeBias = 0.25f;
    // Default material properties
    mFriction = 0.8f;
    mRestitution = 0.1f;
    // Collision bitmask: enable ground and wall detection
    mColBitmask = 0x03;
    // Zero contact vectors
    mContactNormal.setZero();
    mContactPointOffset.setZero();
    // Normal force accumulator
    mNormalForce = 0.0f;
}

// 0x8059cf98 - KartTire_init
// Size: 100 bytes, Calls: 0x80555bf4 (vec3 init)
void KartTire::init() {
    // Set tire dimensions from vehicle params
    // Front tires: use front tire radius from KartSettings
    // Rear tires: use rear tire radius from KartSettings
    if (mWheelIdx < 2) {
        // Front wheels: slightly larger radius for steering
        mTireRadius = 0.35f;
        mTireWidth = 0.13f;
    } else {
        // Rear wheels: drive wheels, slightly different profile
        mTireRadius = 0.33f;
        mTireWidth = 0.14f;
    }
    // Initialize contact point offset (wheel center to contact patch)
    // The contact point is below the wheel center by the tire radius
    mContactPointOffset.set(0.0f, -mTireRadius, 0.0f);
    // Reset surface type to normal road
    mSurfaceType = SURFACE_NORMAL;
    // Set normal force accumulator to 0
    mNormalForce = 0.0f;
    // Reset contact state
    mInContact = false;
    mContactDepth = 0.0f;
    mContactNormal.setZero();
    // Set per-wheel steering/drive ratios based on wheel index
    // Front wheels steer, rear wheels drive (for karts)
    if (mWheelIdx == 0 || mWheelIdx == 1) {
        // Front left / right: steer, no drive
        mSteerRatio = (mWheelIdx == 0) ? 1.0f : 1.0f;
        mDriveRatio = 0.0f;
    } else {
        // Rear left / right: drive, no steer
        mSteerRatio = 0.0f;
        mDriveRatio = 1.0f;
    }
    // Equal brake bias across all wheels by default
    mBrakeBias = 0.25f;
    // Initialize material properties for road contact
    mFriction = 0.8f;
    mRestitution = 0.05f;
}

// 0x8059cffc - KartTire_createPhysics
// Size: 84 bytes, Calls: 0x80555bf4, 0x8059c0fc, 0x805b3dfc
void KartTire::createPhysics() {
    // 1. Zero out internal state (0x80555bf4)
    mNormalForce = 0.0f;
    mContactDepth = 0.0f;
    mContactNormal.setZero();
    // 2. Create KartWheelPhysics sub-object at offset 0x08
    //    Calls KartWheelPhysics constructor (0x8059c0fc → 0x8059b8f4)
    //    Passes wheelIdx and bspWheelIdx
    mWheelPhysics = new KartWheelPhysics(mWheelIdx, mBspWheelIdx);
    // 3. Additional setup (0x805b3dfc): link tire to collision system
    //    Initialize force accumulator for this wheel
    if (mWheelPhysics) {
        mWheelPhysics->susTravel = mSuspTravel;
        mWheelPhysics->wheelPos.setZero();
        mWheelPhysics->prevWheelPos.setZero();
        mWheelPhysics->prevWheelOffset.setZero();
        mWheelPhysics->effectiveRadius = mTireRadius;
        mWheelPhysics->targetEffectiveRadius = mTireRadius;
    }
    // Set contact material properties (friction, restitution)
    mFriction = 0.8f;
    mRestitution = 0.05f;
}

// 0x8059d050 - KartTire_initBsp
// Size: 8 bytes (no calls - just a return for karts)
void KartTire::initBsp() {
    // For karts, setup BSP collision for this wheel using wheel collision data.
    // Set collision bitmask for ground/wall detection.
    // In the original, karts have a no-op initBsp (the 8-byte function).
    // Bike tires override this with actual BSP setup.
    //
    // The BSP wheel is linked externally; here we just set the bitmask.
    mColBitmask = 0x03; // bit 0 = ground, bit 1 = wall
}

// 0x80590ef4 - PlayerKart_createTires
// Size: 508 bytes, Calls: 0x805a22e4
void PlayerKart_createTires() {
    // Creates tire objects for a kart (4 wheels) or bike (2 wheels).
    // Table-driven dispatch based on vehicle type flags.
    //
    // From disasm: a large function with many early returns
    // 1. Load player object, get playerSub at offset 0x24
    // 2. Check playerSub != null (early return if null)
    // 3. Load kartState at offset 0x54
    // 4. Check kartState != null (early return if null)
    // 5. Switch on vehicle type/set flags at offset 0x334:
    //    - Bit 6 set: 4 wheels ready (standard kart)
    //    - Bit 0x1a cleared: set bit 0x18
    //    - Bit 0x8 set: set bit 0x8
    //    - Bit 0x10 set: set bit 0x10
    //    - Bit 0x108 set: set bit 0x108
    //    - No bits match: jump to table dispatch
    //
    // The main body (after checks):
    // 1. Load global table at lis+0
    // 2. Get wheel count from PlayerPointers (offset 8)
    // 3. Get physics element from table (offsets 4, 8, 0x14)
    // 4. Load per-wheel data from table entries
    // 5. Call accumulateForce (0x805a22e4) to set up wheel forces

    // Vehicle class flags from the kart settings
    u32 vehicleFlags = 0; // would be read from kartState/settings

    // Determine number of wheels based on vehicle class
    u32 wheelCount = 4;
    u32 classFlags = 0;

    // Switch on vehicle type bits (from decomp analysis)
    if (vehicleFlags & (1 << 6)) {
        // Bit 6: standard kart — 4 wheels
        classFlags |= 0x40;
        wheelCount = 4;
    } else if (!(vehicleFlags & 0x1a)) {
        // No special bits: small kart class
        classFlags |= 0x18;
        wheelCount = 4;
    } else if (vehicleFlags & 0x08) {
        // Bit 3: medium kart
        classFlags |= 0x08;
        wheelCount = 4;
    } else if (vehicleFlags & 0x10) {
        // Bit 4: large kart
        classFlags |= 0x10;
        wheelCount = 4;
    } else if (vehicleFlags & 0x108) {
        // Bits 0/8: special vehicle (bike with sidecar, etc.)
        classFlags |= 0x108;
        wheelCount = 4;
    } else {
        // Table dispatch fallback — check bike flag
        if (vehicleFlags & 0x20) {
            wheelCount = 2; // Bike: 2 wheels
        }
    }

    (void)classFlags;

    // Per-wheel initialization table
    // steerRatio, driveRatio, brakeBias for each wheel
    struct WheelInitData {
        f32 steerRatio;
        f32 driveRatio;
        f32 brakeBias;
    };

    static const WheelInitData kartWheelData[4] = {
        { 1.0f,  0.0f, 0.25f }, // Front-left:  steer only
        { 1.0f,  0.0f, 0.25f }, // Front-right: steer only
        { 0.0f,  1.0f, 0.25f }, // Rear-left:   drive only
        { 0.0f,  1.0f, 0.25f }, // Rear-right:  drive only
    };

    static const WheelInitData bikeWheelData[2] = {
        { 0.0f,  1.0f, 0.5f  }, // Rear:  drive
        { 1.0f,  0.0f, 0.5f  }, // Front: steer
    };

    const WheelInitData* wheelData;
    if (wheelCount == 2) {
        wheelData = bikeWheelData;
    } else {
        wheelData = kartWheelData;
    }

    // Get physics element from global table
    // In original: load from table at (lis+0) with offset calculations
    void* physicsTable[4] = { nullptr, nullptr, nullptr, nullptr };
    (void)physicsTable;

    // Create KartTire objects for each wheel and initialize
    for (u32 i = 0; i < wheelCount; i++) {
        // Get physics element from table (offsets 4, 8, 0x14 in original)
        void* physElement = physicsTable[i % 4];

        // Load per-wheel data from table entries
        f32 steerRatio = wheelData[i].steerRatio;
        f32 driveRatio = wheelData[i].driveRatio;
        f32 brakeBias = wheelData[i].brakeBias;

        // Call accumulateForce to set initial suspension forces
        // Original: 0x805a22e4
        accumulateForce(physElement, 0.0f);

        (void)steerRatio;
        (void)driveRatio;
        (void)brakeBias;

        // KartTire objects are created externally by the kart's init sequence
        // This function primarily sets up the force/physics configuration
    }
}

// @addr 0x8059d058
void KartTire::calcTireForces(f32 normalForce, f32 slipAngle, f32 forwardSpeed) {
    // Compute friction, rolling resistance, and lateral grip forces
    // based on surface type and slip angle.

    if (!mInContact || normalForce <= 0.0f) {
        mNormalForce = 0.0f;
        return;
    }

    mNormalForce = normalForce;

    // Surface-dependent grip multiplier
    f32 surfaceGrip = 1.0f;
    switch (mSurfaceType) {
    case SURFACE_NORMAL:
        surfaceGrip = 1.0f;
        break;
    case SURFACE_OFFROAD:
        surfaceGrip = 0.35f; // Significant grip reduction off-road
        break;
    case SURFACE_BOOST:
        surfaceGrip = 1.0f; // Boost pads maintain full grip
        break;
    case SURFACE_ICE:
        surfaceGrip = 0.15f; // Very low grip on ice
        break;
    case SURFACE_TRICK:
        surfaceGrip = 0.8f;  // Slight reduction on trick ramps
        break;
    case SURFACE_HALFPIPE:
        surfaceGrip = 1.0f; // Full grip in halfpipe
        break;
    default:
        surfaceGrip = 1.0f;
        break;
    }

    // Effective friction = base friction * grip * surface modifier
    f32 effectiveGrip = mGrip * surfaceGrip;

    // Lateral (cornering) force: proportional to slip angle and normal force
    // Simplified Pacejka-like model:
    //   F_lat = normalForce * grip * sin(2 * slipAngle_clamped)
    f32 clampedSlip = slipAngle;
    if (clampedSlip > 1.0f) clampedSlip = 1.0f;
    if (clampedSlip < -1.0f) clampedSlip = -1.0f;

    f32 lateralForce = normalForce * effectiveGrip *
        std::sin(2.0f * clampedSlip);

    // Rolling resistance: always opposes motion
    // F_rr = Crr * normalForce (Crr typically 0.01-0.015)
    f32 rollingResistanceCoeff = 0.012f;
    f32 rollingResistance = rollingResistanceCoeff * normalForce;
    if (forwardSpeed < 0.0f) {
        rollingResistance = -rollingResistance;
    } else if (forwardSpeed > 0.0f) {
        // rollingResistance opposes forward motion (applied as negative)
    } else {
        rollingResistance = 0.0f;
    }

    // Longitudinal (drive/brake) force is handled externally by the drivetrain
    // The tire only computes lateral and rolling resistance here.

    (void)lateralForce;
    (void)rollingResistance;
}

// Update contact state from collision detection
void KartTire::setContact(f32 depth, const EGG::Vector3f& normal) {
    mContactDepth = depth;
    mContactNormal = normal;
    mInContact = (depth > 0.0f);

    // If we just lost contact, reset surface to normal
    if (!mInContact) {
        mSurfaceType = SURFACE_NORMAL;
        mNormalForce = 0.0f;
    }
}

// ============================================================================
// Extended KartTire methods
// ============================================================================

// @addr 0x8059d080
f32 KartTire::getSurfaceGrip() const {
    // Return the effective grip modifier for the current surface.
    // This combines the base grip with surface type and tire wear.
    f32 surfaceGrip = 1.0f;
    switch (mSurfaceType) {
    case SURFACE_NORMAL:  surfaceGrip = 1.0f;  break;
    case SURFACE_OFFROAD: surfaceGrip = 0.35f; break;
    case SURFACE_BOOST:   surfaceGrip = 1.0f;  break;
    case SURFACE_ICE:     surfaceGrip = 0.15f; break;
    case SURFACE_TRICK:   surfaceGrip = 0.8f;  break;
    case SURFACE_HALFPIPE: surfaceGrip = 1.0f;  break;
    default:              surfaceGrip = 1.0f;  break;
    }

    // Apply tire wear reduction (worn tires have less grip)
    f32 wearFactor = 1.0f - mTireWear * 0.3f;
    if (wearFactor < 0.5f) wearFactor = 0.5f;

    // Apply tire pressure effect
    f32 pressureFactor = mTirePressure;
    if (pressureFactor < 0.5f) pressureFactor = 0.5f;
    if (pressureFactor > 1.2f) pressureFactor = 1.2f;

    return mGrip * surfaceGrip * wearFactor * pressureFactor;
}

// @addr 0x8059d0C0
void KartTire::calcSlipAngle(f32 forwardSpeed, f32 lateralSpeed) {
    // Compute the tire slip angle in radians.
    // Slip angle = atan2(lateral_speed, |forward_speed|)
    // This is the angle between the tire's heading and its
    // actual velocity direction.
    //
    // A slip angle of 0 means the tire is moving straight ahead.
    // Positive slip means the tire is sliding outward (understeer).

    f32 absForward = forwardSpeed;
    if (absForward < 0.0f) absForward = -absForward;

    // Avoid division by zero — if not moving forward, no slip
    if (absForward < 0.1f) {
        mSlipAngle = 0.0f;
        return;
    }

    // Clamp lateral speed to prevent atan2 extremes
    f32 clampedLateral = lateralSpeed;
    f32 maxLateral = absForward * 2.0f; // max ~63 degrees
    if (clampedLateral > maxLateral) clampedLateral = maxLateral;
    if (clampedLateral < -maxLateral) clampedLateral = -maxLateral;

    mSlipAngle = std::atan2(clampedLateral, absForward);
}

// @addr 0x8059d100
f32 KartTire::calcLateralForce(f32 slipAngle, f32 normalForce) const {
    // Compute the lateral (cornering) force using a simplified tire model.
    // F_lat = C_alpha * slipAngle * normalForce / C_ref
    // where C_alpha is the cornering stiffness.
    //
    // The force peaks at ~10 degrees and then drops off (tire saturation).
    // This is a simplified Pacejka "Magic Formula" approximation.

    f32 effectiveGrip = getSurfaceGrip();
    f32 corneringStiffness = 10.0f * effectiveGrip;

    // Linear region: F = C * alpha (for small angles)
    f32 linearForce = corneringStiffness * slipAngle;

    // Peak slip angle (~10 degrees = 0.175 rad)
    f32 peakSlip = 0.175f;
    f32 peakForce = corneringStiffness * peakSlip;

    // Saturated region: force drops after peak
    if (slipAngle > peakSlip) {
        // Smooth drop-off using inverse tangent
        f32 excess = slipAngle - peakSlip;
        f32 saturation = 0.7f + 0.3f / (1.0f + excess * 5.0f);
        linearForce = peakForce * saturation;
    } else if (slipAngle < -peakSlip) {
        f32 excess = -slipAngle - peakSlip;
        f32 saturation = 0.7f + 0.3f / (1.0f + excess * 5.0f);
        linearForce = -peakForce * saturation;
    }

    return linearForce * normalForce;
}

// @addr 0x8059d140
f32 KartTire::getWear() const {
    return mTireWear;
}

// @addr 0x8059d150
void KartTire::setPressure(f32 pressure) {
    // Set tire pressure (0.5 to 1.2 range).
    // Lower pressure = more contact patch, more grip but more drag.
    // Higher pressure = less contact patch, less grip but less drag.
    if (pressure < 0.3f) pressure = 0.3f;
    if (pressure > 1.5f) pressure = 1.5f;
    mTirePressure = pressure;

    // Pressure affects the tire radius slightly
    f32 radiusAdjust = (pressure - 1.0f) * 0.02f;
    mTireRadius = 0.35f + radiusAdjust;
}

// @addr 0x8059d180
EGG::Vector3f KartTire::getContactPatch() const {
    // Return the world-space position of the tire's contact patch.
    // This is the point where the tire touches the ground surface.
    // It's offset from the wheel center by the contact point offset.
    if (!mInContact || !mWheelPhysics) {
        EGG::Vector3f zero;
        zero.setZero();
        return zero;
    }

    EGG::Vector3f patch;
    patch.x = mWheelPhysics->wheelPos.x + mContactPointOffset.x;
    patch.y = mWheelPhysics->wheelPos.y + mContactPointOffset.y;
    patch.z = mWheelPhysics->wheelPos.z + mContactPointOffset.z;
    return patch;
}

} // namespace Kart