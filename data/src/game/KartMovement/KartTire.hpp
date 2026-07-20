#pragma once

#include <rk_types.h>
#include <decomp.h>
#include <egg/math/eggVector.hpp>

namespace Kart {

class BspWheel;
class KartWheelPhysics;

// Road surface types for tire interaction
enum SurfaceType {
    SURFACE_NORMAL  = 0x00,
    SURFACE_OFFROAD = 0x01,
    SURFACE_BOOST   = 0x02,
    SURFACE_ICE     = 0x03,
    SURFACE_TRICK   = 0x04,
    SURFACE_HALFPIPE = 0x05,
};

// ===== KartTire =====
class KartTire {
public:
    // 0x8059cf2c - KartTire_ct
    KartTire();

    // 0x8059cf98 - KartTire_init
    void init();

    // 0x8059cffc - KartTire_createPhysics
    void createPhysics();

    // 0x8059d050 - KartTire_initBsp
    void initBsp();

    // Compute tire friction forces based on surface and slip
    // @addr 0x8059d058
    void calcTireForces(f32 normalForce, f32 slipAngle, f32 forwardSpeed);

    // Return current road surface type
    SurfaceType getSurfaceType() const { return mSurfaceType; }

    // Update contact state from collision
    void setContact(f32 depth, const EGG::Vector3f& normal);

    // Check if tire has ground contact
    bool isInContact() const { return mInContact; }

    // Accessors for per-wheel tuning data
    f32 getSteerRatio() const { return mSteerRatio; }
    f32 getDriveRatio() const { return mDriveRatio; }
    f32 getBrakeBias() const { return mBrakeBias; }
    void setSteerRatio(f32 r) { mSteerRatio = r; }
    void setDriveRatio(f32 r) { mDriveRatio = r; }
    void setBrakeBias(f32 b) { mBrakeBias = b; }

    u32 getWheelIdx() const { return mWheelIdx; }
    void setWheelIdx(u32 idx) { mWheelIdx = idx; }

    KartWheelPhysics* getWheelPhysics() const { return mWheelPhysics; }

private:
    u32 mWheelIdx;           // 0x00: wheel index (0-3 for karts)
    s32 mBspWheelIdx;        // 0x04: BSP collision wheel index
    KartWheelPhysics* mWheelPhysics; // 0x08: physics sub-object
    BspWheel* mBspWheel;     // 0x0C: BSP wheel for collision
    f32 mTireRadius;         // 0x10: tire radius (default 0.35f)
    f32 mTireWidth;          // 0x14: tire width
    f32 mGrip;               // 0x18: grip factor (default 1.0f)
    f32 mSuspTravel;         // 0x1C: suspension travel (default 0.1f)
    SurfaceType mSurfaceType;// 0x20: current road surface
    f32 mContactDepth;       // 0x24: penetration depth
    EGG::Vector3f mContactNormal; // 0x28: contact normal vector
    bool mInContact;         // 0x34: ground contact flag
    u8 _35[3];               // padding
    EGG::Vector3f mContactPointOffset; // 0x38: contact point offset from wheel center
    f32 mNormalForce;        // 0x44: accumulated normal force
    f32 mSteerRatio;         // 0x48: steering ratio for this wheel
    f32 mDriveRatio;         // 0x4C: drive ratio (1.0 for driven wheels)
    f32 mBrakeBias;          // 0x50: brake bias factor
    f32 mFriction;           // 0x54: contact friction coefficient
    f32 mRestitution;        // 0x58: contact restitution
    u32 mColBitmask;         // 0x5C: collision bitmask
};

// ===== KartTirePhysics (used in PlayerKart_createTires) =====

// 0x80590ef4 - PlayerKart_createTires
void PlayerKart_createTires();
// Size: 508 bytes, Calls: 0x805a22e4

// External: accumulate force setup for wheel initialization
// @addr 0x805a22e4
void accumulateForce(void* wheelPhysics, f32 force);

} // namespace Kart