#pragma once
// game/kart/KartObjectProxy.hpp — Kart entity proxy (full stub)
#include "../../rk_types.h"
#include <egg/math/eggVector.hpp>
#include <egg/math/eggQuat.hpp>
#include <egg/math/eggMatrix.hpp>
#include <KPadController.hpp> // For System::KPadRaceInputState

namespace Kart {

// ===== Minimal stubs =====
// These classes are defined in more detail in the GENESIS module headers.
// Only define them here when NOT already defined by a GENESIS module.

#ifndef GENESIS_KART_STATE_DEFINED
#define GENESIS_KART_STATE_DEFINED
class KartState {
public:
    virtual ~KartState() {}
    bool on(int f) const { return (mFlags >> f) & 1; }
    void set(int f) { mFlags |= (1u << f); }
    void setBoostRampType(s32 t) { (void)t; }
    void setJumpPadType(s32 t) { (void)t; }
    void setHalfpipeInvisibilityTimer(s32 t) { (void)t; }
    void setCannonPointId(s32 id) { (void)id; }
    u32 mFlags;
};
#endif

#ifndef GENESIS_KART_MOVE_DEFINED
#define GENESIS_KART_MOVE_DEFINED
class KartMove {
public:
    virtual ~KartMove() {}
    virtual f32 totalScale() { return 1.0f; }
    virtual const EGG::Vector3f& dir() { static EGG::Vector3f d; return d; }
    virtual f32 getLeanRot() { return 0.0f; }
    virtual f32 hitboxScale() { return 1.0f; }
    virtual f32 getKclWheelSpeedFactor() { return 1.0f; }
    virtual void setPadType(s32) {}
    virtual KartState* kartState() { return nullptr; }
    virtual void activateMushroom() {}
};
#endif

#ifndef GENESIS_KART_BODY_DEFINED
#define GENESIS_KART_BODY_DEFINED
class KartBody {
public:
    virtual ~KartBody() {}
    virtual f32 getSinkDepth() { return 0.0f; }
    virtual void requireSinkDepth(f32 d) { (void)d; }
};
#endif

#ifndef GENESIS_KART_DYNAMICS_DEFINED
#define GENESIS_KART_DYNAMICS_DEFINED
class KartDynamics {
public:
    virtual ~KartDynamics() {}
    EGG::Vector3f pos;
    EGG::Vector3f externalVel;
    EGG::Vector3f externalVelBody;
    EGG::Vector3f internalVel;
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
#endif

#ifndef GENESIS_KART_PHYSICS_ENGINE_DEFINED
#define GENESIS_KART_PHYSICS_ENGINE_DEFINED
class KartPhysicsEngine {
public:
    virtual ~KartPhysicsEngine() {}
    virtual f32 getYScale() { return 1.0f; }
    virtual void registerSuspLimits(const EGG::Vector3f& v) { (void)v; }
};
#endif

#ifndef GENESIS_KART_STATS_DEFINED
#define GENESIS_KART_STATS_DEFINED
class KartStats {
public:
    virtual ~KartStats() {}
    virtual f32 getSpeedFactor(u32 type) { (void)type; return 1.0f; }
    virtual f32 getHandlingFactor(u32 type) { (void)type; return 0.0f; }
};
#endif

#ifndef GENESIS_KART_COLLIDE_DEFINED
#define GENESIS_KART_COLLIDE_DEFINED
class KartCollide {
public:
    virtual ~KartCollide() {}
    f32 boundingRadius;
    virtual f32 get1c() const { return 0.8f; }
    virtual const EGG::Vector3f& getMovement() const { static EGG::Vector3f m; return m; }
};
#endif

struct PlayerPointers {
    virtual ~PlayerPointers() {}
    virtual s32 getPlayerIdx() { return -1; }
    virtual KartState* kartState() { return nullptr; }
    virtual KartMove* kartMove() { return nullptr; }
    virtual KartBody* kartBody() { return nullptr; }
    virtual KartDynamics* kartDynamics() { return nullptr; }
    virtual KartCollide* kartCollide() { return nullptr; }
    virtual void* hitboxGroup() { return nullptr; }
    virtual s32 getWheelCount() { return 4; }
};

struct BspWheel {
    f32 maxTravel;
    f32 wheelRadius;
};

class KartWheel {
public:
    virtual ~KartWheel() {}
};

class KartObjectProxy {
public:
    virtual ~KartObjectProxy() {}
    virtual s32 getPlayerIdx() const { return -1; }
    virtual KartState* kartState() { return nullptr; }
    virtual KartMove* kartMove() { return nullptr; }
    virtual KartBody* kartBody() { return nullptr; }
    virtual KartDynamics* kartDynamics() { return nullptr; }
    virtual KartCollide* kartCollide() { return nullptr; }
    virtual KartPhysicsEngine* kartPhysicsEngine() { return nullptr; }
    virtual KartStats* kartStats() { return nullptr; }
    virtual const EGG::Vector3f& getPos() const { static EGG::Vector3f p; return p; }
    virtual const EGG::Vector3f& getScale() const { static EGG::Vector3f s(1,1,1); return s; }
    virtual void getBodyForward(EGG::Vector3f& out) const { out.setZero(); out.z = 1.0f; }
    virtual void setInput(const System::KPadRaceInputState& input) { (void)input; }
    virtual const System::KPadRaceInputState& getInput() const {
        static System::KPadRaceInputState s; return s;
    }
    virtual BspWheel* bspWheel(s32 idx) { (void)idx; return nullptr; }
    virtual void* hitboxGroup() { return nullptr; }
    virtual s32 getWheelCount() { return 4; }
    virtual bool isCpu() const { return true; }
};

} // namespace Kart