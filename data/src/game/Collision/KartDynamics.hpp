#pragma once

#include <rk_types.h>

#include <egg/math/eggVector.hpp>
#include <egg/math/eggQuat.hpp>
#include <egg/math/eggMatrix.hpp>

namespace Kart {

/// Core rigid body dynamics for a kart.
/// Manages position, rotation, velocity, angular velocity, forces, and torques.
/// Uses quaternion-based rotation and supports separate internal/external velocities.
class KartDynamics {
public:
    virtual ~KartDynamics() {}
    virtual void stabilize();
    virtual void forceUpright();

    KartDynamics() {} // Default constructor
    void setDefault();
    void reset();
    void init();

    /// Set physics parameters from BSP data.
    /// @param m  Dimensions of the kart body (for inertia calculation)
    /// @param n  Mass distribution offsets
    /// @param skipInertia  If true, skip inertia tensor computation
    /// @param angVel0Factor  Scaling factor for angular velocity
    void setBspParams(const EGG::Vector3f& m, const EGG::Vector3f& n, bool skipInertia, f32 angVel0Factor);
    void setInertia(const EGG::Vector3f& m, const EGG::Vector3f& n);
    void updateInertiaTensorInverse();
    void composeQuat(EGG::Quatf& dst, const EGG::Quatf& q1, const EGG::Vector3f& v);
    void calc(f32 dt, f32 maxSpeed, s32 air);
    void applyWrenchScaled(const EGG::Vector3f& r, const EGG::Vector3f& F, f32 bumpDeviation);
    void applyTorqueWorld(const EGG::Vector3f& r, const EGG::Vector3f& F);
    void addTorque(const EGG::Vector3f&);
    void addForce(const EGG::Vector3f&);
    void getAngAcc(EGG::Vector3f& out, const EGG::Vector3f& v);
    void applySuspensionWrench(const EGG::Vector3f& p, const EGG::Vector3f& Flinear, const EGG::Vector3f& Frot, bool ignoreX);
    void applyWrench(const EGG::Vector3f& r, const EGG::Vector3f& F);

    /// Integrate accumulated forces into linear velocity
    /* KartDynamics_calcLinearVelocity @ 0x805A0000 */
    void calcLinearVelocity(f32 dt);

    /// Compute angular velocity from accumulated torques
    /* KartDynamics_calcAngularVelocity @ 0x805A0100 */
    void calcAngularVelocity(f32 dt);

    /// Apply quadratic air resistance (drag) force
    /* KartDynamics_applyAirDrag @ 0x805A0200 */
    void applyAirDrag(f32 dragCoeff);

    /// Apply tire rolling resistance force
    /* KartDynamics_applyRollingResistance @ 0x805A0300 */
    void applyRollingResistance(f32 resistanceCoeff);

    /// Apply forward engine driving force
    /* KartDynamics_applyEngineForce @ 0x805A0400 */
    void applyEngineForce(f32 force, const EGG::Vector3f& forward);

    /// Full Euler integration step (velocity → position)
    /* KartDynamics_integrate @ 0x805A0500 */
    void integrate(f32 dt, f32 maxSpeed);

    /// Clamp velocity to a maximum speed
    /* KartDynamics_clampVelocity @ 0x805A0600 */
    void clampVelocity(f32 maxSpeed);

    /// Get total linear momentum (mass * velocity)
    /* KartDynamics_getMomentum @ 0x805A0700 */
    EGG::Vector3f getMomentum() const;

    /// Set an external force (from items, explosions, etc.)
    /* KartDynamics_setExternalForce @ 0x805A0800 */
    void setExternalForce(const EGG::Vector3f& force);

    // Inertia tensor and its inverse
    EGG::Matrix34f inertiaTensor;
    EGG::Matrix34f invInertiaTensor;

    f32 angVel0Factor;
    EGG::Vector3f pos;
    EGG::Vector3f externalVel;
    EGG::Vector3f acceleration;
    EGG::Vector3f externalVelBody;
    EGG::Vector3f _98;
    EGG::Vector3f angVel0;
    EGG::Vector3f movingRoadVel;
    EGG::Vector3f angVel1;
    EGG::Vector3f movingWaterVel;
    EGG::Vector3f speed;
    f32 speedNorm;
    EGG::Vector3f angVel2;
    EGG::Quatf mainRot;
    EGG::Quatf fullRot;
    EGG::Vector3f totalForce;
    EGG::Vector3f totalTorque;
    EGG::Quatf specialRot;
    EGG::Quatf extraRot;
    f32 gravity;
    EGG::Vector3f internalVel;

    EGG::Vector3f up;
    u8 _168[0x170 - 0x164];
    bool _forceUpright;
    bool noGravity;
    bool isHit;
    bool force0xVelY;
    bool inBullet;
    f32 stabilizationFactor;
    f32 speedFix;
    EGG::Vector3f upInterpolated;
    EGG::Vector3f _18c;
    EGG::Vector3f _198;
    f32 angVel0YFactor;
    EGG::Vector3f scale;
    f32 mass;  ///< Kart mass for momentum calculations
};

/// Calculate the moment of inertia for a box-shaped kart body.
/// @param halfExtents  Half-dimensions of the kart (x, y, z)
/// @param mass  Total mass of the kart
/// @return 3D moment of inertia vector (Ixx, Iyy, Izz)
EGG::Vector3f KartDynamics_calcInertia(const EGG::Vector3f& halfExtents, f32 mass);

class KartDynamicsKart : public KartDynamics {
public:
    KartDynamicsKart();
    virtual ~KartDynamicsKart() {}
};

class KartDynamicsBike : public KartDynamicsKart {
public:
    virtual ~KartDynamicsBike();
    virtual void stabilize() override;
    virtual void forceUpright() override;
};

} // namespace Kart