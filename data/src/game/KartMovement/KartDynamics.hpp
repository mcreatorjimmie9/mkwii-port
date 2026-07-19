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

    // KartMovement module functions (mangled names from symbols)
    // These belong to a body-physics/dynamics sub-system at 0x805a1xxx-0x805a6xxx
    KartDynamics(const EGG::Vector3f& param, int count);
    void initInternal(const EGG::Vector3f& param, int count);
    void initVec3Array(int count);
    void initVec3Array2(int count);
    void vec3InitWrapper(int count);
    void setupPhysics();
    void updateSpeed();
    void update();
    void scaleAndTransformPoints();
    void transformSinglePoint();
    void copyPointsToArray();
    void calcSpeedInternal(float param);
    void calcSteeringInternal(float param1, float param2);
    void accumulateForce(int idx, float val);
    void calcTransformMatrix(EGG::Vector3f& out);
    void updatePositionAfterCollision();
    void debugGetParamY();
    void debugGetField68();
    void toggleInvisibleFlag();
    void initAllFields();
    void calcAngularVelocity();
    void calcLinearVelocity();
    void applyGravity();
    void applyFriction();
    void updateBothVelocities();
    void physicsDataTable();

    // Community-verified members
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
};

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