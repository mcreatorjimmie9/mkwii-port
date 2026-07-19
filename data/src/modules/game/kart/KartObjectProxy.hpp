#pragma once
#include "rk_types.h"
#include <egg/math/eggVector.hpp>
#include <egg/math/eggQuat.hpp>
#include <egg/math/eggMatrix.hpp>

namespace System {
struct KPadRaceInputState;
}

namespace Kart {

// Kart state flags
enum KartFlag {
    KART_FLAG_TOUCHING_GROUND = 0,
    KART_FLAG_ALL_WHEELS_COLLISION,
    KART_FLAG_DRIFTING_ON_GROUND,
    KART_FLAG_HOPPING,
    KART_FLAG_AUTO_DRIFT,
    KART_FLAG_IN_BULLET,
    KART_FLAG_STAR,
    KART_FLAG_MEGA,
    KART_FLAG_BULLET,
    KART_FLAG_CANNON_START,
    KART_FLAG_IN_A_BULLET,
    KART_FLAG_STH_3,
    KART_FLAG_STH_5,
    KART_FLAG_STH_WALL_COL,
    KART_FLAG_SOMETHING,
    KART_FLAG_SKIP_WHEEL_CALC,
    KART_FLAG_COL_INVISIBILITY,
    KART_FLAG_STH_KILLER,
    KART_FLAG_HALFPIPE_MIDAIR,
    KART_FLAG_IN_CANNON,
    KART_FLAG_STH_61,
    KART_FLAG_LARGE_FLIP_HIT,
    KART_FLAG_WHEELIE_ROT,
    KART_FLAG_AIR_START,
    KART_FLAG_JUMPPAD,
    KART_FLAG_HIT_ITEM_OR_OBJ,
    KART_FLAG_RESPAWN_INVINCIBLE,
    KART_FLAG_REJECT_ROAD,
    KART_FLAG_STICKY_ROAD,
    KART_FLAG_HALFPIPE_RAMP,
    KART_FLAG_ONLINE_REMOTE,
    KART_FLAG_HALFPIPE_RAMP_LOCAL,
    KART_FLAG_AT_SUSP_LIMIT,
    KART_FLAG_JUMPPAD_VELY_INCREASE,
};

// Aliases used in code as Kart::KART_FLAG_*
static const KartFlag KART_FLAG_AIR_START = ::Kart::KART_FLAG_AIR_START;
static const KartFlag KART_FLAG_JUMPPAD = ::Kart::KART_FLAG_JUMPPAD;
static const KartFlag KART_FLAG_HIT_ITEM_OR_OBJ = ::Kart::KART_FLAG_HIT_ITEM_OR_OBJ;
// ... more aliases are implicitly available via the enum

class KartState {
public:
    virtual ~KartState() {}
    bool on(KartFlag f) const { return (mFlags >> (int)f) & 1; }
    void set(KartFlag f) { mFlags |= (1u << (int)f); }
    void setBoostRampType(s32 t) { (void)t; }
    void setJumpPadType(s32 t) { (void)t; }
    void setHalfpipeInvisibilityTimer(s32 t) { (void)t; }
    void setCannonPointId(s32 id) { (void)id; }
    u32 mFlags;
};

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

class KartBody {
public:
    virtual ~KartBody() {}
    virtual f32 getSinkDepth() { return 0.0f; }
    virtual void requireSinkDepth(f32 d) { (void)d; }
};

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
    EGG::Vector3f acceleration;
};

class KartPhysicsEngine {
public:
    virtual ~KartPhysicsEngine() {}
    virtual f32 getYScale() { return 1.0f; }
    virtual void registerSuspLimits(const EGG::Vector3f& v) { (void)v; }
};

class KartStats {
public:
    virtual ~KartStats() {}
    virtual f32 getSpeedFactor(u32 type) { (void)type; return 1.0f; }
    virtual f32 getHandlingFactor(u32 type) { (void)type; return 0.0f; }
};

class KartCollide {
public:
    virtual ~KartCollide() {}
    f32 boundingRadius;
    virtual f32 get1c() const { return 0.8f; }
    virtual const EGG::Vector3f& getMovement() const { static EGG::Vector3f m; return m; }
};

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
    virtual bool isCpu() { return true; }
};

class KartWheel {
public:
    virtual ~KartWheel() {}
};

} // namespace Kart