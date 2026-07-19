#pragma once

#include <rk_types.h>
#include <decomp.h>
#include <egg/math/eggVector.hpp>
#include <egg/math/eggQuat.hpp>
#include <egg/math/eggMatrix.hpp>

#define GENESIS_KART_DYNAMICS_DEFINED

namespace Kart {

class KartDynamics {
public:
    virtual ~KartDynamics() {}
    virtual void stabilize();
    virtual void forceUpright();

    KartDynamics() {} // Default constructor for KartDynamicsKart
    void setDefault();
    void reset();
    void init();
    void setBspParams(const EGG::Vector3f& m, const EGG::Vector3f& n, bool skipInertia, float angVel0Factor);
    void setInertia(const EGG::Vector3f& m, const EGG::Vector3f& n);
    void updateInertiaTensorInverse();
    void composeQuat(EGG::Quatf& dst, const EGG::Quatf& q1, const EGG::Vector3f& v);
    void calc(float dt, float maxSpeed, int air);
    void applyWrenchScaled(const EGG::Vector3f& r, const EGG::Vector3f& F, float bumpDeviation);
    void applyTorqueWorld(const EGG::Vector3f& r, const EGG::Vector3f& F);
    void addTorque(const EGG::Vector3f&);
    void addForce(const EGG::Vector3f&);
    void getAngAcc(EGG::Vector3f& out, const EGG::Vector3f& v);
    void applySuspensionWrench(const EGG::Vector3f& p, const EGG::Vector3f& Flinear, const EGG::Vector3f& Frot, bool ignoreX);
    void applyWrench(const EGG::Vector3f& r, const EGG::Vector3f& F);

    // NOTE: The following functions were previously listed here but actually belong
    // to KartPhysicsEngine or a related class, NOT KartDynamics itself.
    // They have been REMOVED to match the community header:
    //   initInternal, initVec3Array, initVec3Array2, vec3InitWrapper,
    //   setupPhysics, updateSpeed, update, scaleAndTransformPoints,
    //   transformSinglePoint, copyPointsToArray, calcSpeedInternal,
    //   calcSteeringInternal, accumulateForce, calcTransformMatrix,
    //   updatePositionAfterCollision, debugGetParamY, debugGetField68,
    //   toggleInvisibleFlag, initAllFields, calcAngularVelocity,
    //   calcLinearVelocity, applyGravity, applyFriction,
    //   updateBothVelocities, physicsDataTable
    // These operate on Vec3 arrays (count-based) and BSP data which
    // KartDynamics does not own.

    // Community-verified members (field offsets match community header)
    // Vtable at 0x00 (implicit, 3 entries: dtor, stabilize, forceUpright)
    // Phase 6b: Verified against decompiled Physics/ files. The decompiled code
    // does not directly access KartDynamics fields (it goes through accessors and
    // BSP data arrays owned by KartPhysicsEngine). Layout confirmed by community.
    EGG::Matrix34f inertiaTensor;     // 0x04: inertia tensor matrix (0x30 bytes)
    EGG::Matrix34f invInertiaTensor;  // 0x34: inverse inertia tensor (0x30 bytes)

    f32 angVel0Factor;                 // 0x64: angular velocity Y scaling factor
    EGG::Vector3f pos;                // 0x68: kart world position
    EGG::Vector3f externalVel;        // 0x74: velocity from dynamic interactions
    EGG::Vector3f acceleration;       // 0x80: linear acceleration
    EGG::Vector3f externalVelBody;    // 0x8C: external velocity in body frame
    EGG::Vector3f _98;                // 0x98: unknown velocity component
    EGG::Vector3f angVel0;            // 0xA4: primary angular velocity
    EGG::Vector3f movingRoadVel;      // 0xB0: velocity from moving road surface
    EGG::Vector3f angVel1;            // 0xBC: secondary angular velocity
    EGG::Vector3f movingWaterVel;     // 0xC8: velocity from water current
    EGG::Vector3f speed;              // 0xD4: total speed (external + internal + road + water)
    f32 speedNorm;                     // 0xE0: scalar speed magnitude
    EGG::Vector3f angVel2;            // 0xE4: tertiary angular velocity
    EGG::Quatf mainRot;               // 0xF0: main rotation quaternion
    EGG::Quatf fullRot;               // 0x100: full rotation (main * special * extra)
    EGG::Vector3f totalForce;         // 0x110: accumulated force
    EGG::Vector3f totalTorque;        // 0x11C: accumulated torque
    EGG::Quatf specialRot;            // 0x128: rotation from stunts/tricks
    EGG::Quatf extraRot;              // 0x138: rotation from collision animations
    f32 gravity;                       // 0x148: gravity multiplier (default -1.0f)
    EGG::Vector3f internalVel;        // 0x14C: velocity from engine power

    EGG::Vector3f up;                 // 0x158: current up vector (from mainRot)
    u8 _168[0x170 - 0x164];          // 0x164: 0xC bytes (may contain quaternion part or alignment)
    // Phase 6b: The 4 bools below are at individual byte addresses (not bitfields).
    // The decompiled calc() function checks these via lbz+clrlwi patterns.
    bool _forceUpright;                // 0x170: whether to force upright orientation
    bool noGravity;                    // 0x171: disable gravity
    bool isHit;                        // 0x172: hit by item/object, zeros Y vel
    bool force0xVelY;                  // 0x173: force external vel Y to 0
    bool inBullet;                     // 0x174: inside bullet bill cannon
    f32 stabilizationFactor;           // 0x178: up-vector stabilization strength (default 0.1f)
    f32 speedFix;                      // 0x17C: speed correction factor
    EGG::Vector3f upInterpolated;     // 0x180: interpolated up vector for stabilization
    EGG::Vector3f _18c;               // 0x18C: unknown (possibly previous-frame up vector for interpolation)
    EGG::Vector3f _198;               // 0x198: unknown (possibly target up vector for stabilization)
    f32 angVel0YFactor;                // 0x1A4: Y component damping for angVel0
    EGG::Vector3f scale;              // 0x1A8: model scale (affects max speed limit)
};
// static_assert(sizeof(KartDynamics) == 0x1B4);  // Phase 6b: 0x1A8 + 12 = 0x1B4

// Phase 6b NOTE: The Physics/ decompiled files (0x8056731c, 0x80567514, etc.)
// mostly operate on KartPhysicsEngine/BSP arrays, not KartDynamics fields
// directly. The KartDynamics class is used via its virtual interface (calc,
// applyWrench, etc.) and pointer-based field access in KartPhysicsEngine.

// NOTE: KartDynamicsKart has a parameterized constructor:
// KartDynamicsKart(const EGG::Vector3f& param, int count)
// which was incorrectly listed under KartDynamics in the old GENESIS header.
// It initializes angVel0Factor=1.0f, identity tensors, then calls setDefault().
class KartDynamicsKart : public KartDynamics {
public:
    KartDynamicsKart(const EGG::Vector3f& param, int count);
    virtual ~KartDynamicsKart() {}
};

class KartDynamicsBike : public KartDynamicsKart {
public:
    virtual ~KartDynamicsBike();
    virtual void stabilize() override;
    virtual void forceUpright() override;
};

} // namespace Kart