#include <game/kart/BSP.hpp>
#pragma once

// Define all GENESIS guards BEFORE including KartObjectProxy.hpp
// to prevent redefinition of classes that GENESIS modules define in detail.
#define GENESIS_KART_STATE_DEFINED
#define GENESIS_KART_MOVE_DEFINED
#define GENESIS_KART_BODY_DEFINED
#define GENESIS_KART_DYNAMICS_DEFINED
#define GENESIS_KART_PHYSICS_ENGINE_DEFINED
#define GENESIS_KART_STATS_DEFINED
#define GENESIS_KART_COLLIDE_DEFINED

#include <rk_types.h>
#include <decomp.h>
#include <egg/math/eggVector.hpp>
#include <egg/math/eggMatrix.hpp>

#include "KartHitbox.hpp"
#include "KartDynamics.hpp"

#include <game/kart/KartObjectProxy.hpp>

namespace Kart {

enum KartWheelType {
    KART_WHEEL_KART_LEFT,
    KART_WHEEL_KART_RIGHT,
    KART_WHEEL_BIKE,
};

class KartSusPhysics;

class KartWheelPhysics {
public:
    virtual ~KartWheelPhysics() {}

    // __ct__Q24Kart16KartWheelPhysicsFUll  0x8059b8f4
    KartWheelPhysics(u32 wheelIdx, s32 bspWheelIdx);

    // init__Q24Kart16KartWheelPhysicsFv  0x8059b958
    void init();
    // setBsp__Q24Kart16KartWheelPhysicsFv  0x8059b9bc
    void setBsp();
    // reset__Q24Kart16KartWheelPhysicsFv  0x8059b9f0
    void reset();
    // setColState__Q24Kart16KartWheelPhysicsFffRCQ23EGG8Vector3f  0x8059baa8
    void setColState(f32 dt, f32 travel, const EGG::Vector3f& colForce);
    // calcCollision__Q24Kart16KartWheelPhysicsFRCQ23EGG8Vector3fRCQ23EGG8Vector3f  0x8059bb78
    void calcCollision(const EGG::Vector3f& bottom, const EGG::Vector3f& topmostPos);
    // calc__Q24Kart16KartWheelPhysicsFRCQ23EGG8Vector3fRCQ23EGG8Vector3f  0x8059bfb8
    void calc(const EGG::Vector3f& down, const EGG::Vector3f& vehicleMovement);
    // updateEffectiveRadius__Q24Kart16KartWheelPhysicsFv  0x8059c284
    void updateEffectiveRadius();
    // u80599dc0__Q24Kart16KartWheelPhysicsFRCQ23EGG8Vector3f  0x8059c2a8
    void applyFloorMoment(const EGG::Vector3f& front);
    // hasFloorCollision__Q24Kart16KartWheelPhysicsCFv  0x8059c394
    bool hasFloorCollision() const;
    // getCollisionFloorNrm__Q24Kart16KartWheelPhysicsCFv  0x8059c3a4
    const EGG::Vector3f& getCollisionFloorNrm() const;
    // getKartCollisionInfo__Q24Kart16KartWheelPhysicsCFv  0x8059c3b0
    const KartCollisionInfo& getKartCollisionInfo() const;

    f32 getSusTravel() const { return susTravel; }
    void setWheelPos(const EGG::Vector3f& wheelPos) { this->wheelPos = wheelPos; }

    u32 wheelIdx;
    u32 bspWheelIdx;
    BspWheel* bspWheel;
    HitboxGroup* hitboxGroup;
    EGG::Vector3f wheelPos;
    EGG::Vector3f prevWheelPos;
    EGG::Vector3f prevWheelOffset;
    f32 susTravel;
    EGG::Vector3f colVel;
    EGG::Vector3f speed;
    EGG::Vector3f wheelEdgePos;
    f32 effectiveRadius;
    f32 targetEffectiveRadius;
    f32 isAtSuspLimit;
    EGG::Vector3f suspTop;
};
// static_assert(sizeof(KartWheelPhysics) == 0x84);

class KartSusPhysics {
public:
    KartSusPhysics(u32 wheelIdx, KartWheelType wheelType, s32 bspWheelIdx);
    void reset();
    void init();
    void setInitialState();
    void calcCollision(const EGG::Vector3f& gravity, const EGG::Matrix34f& mtx, f32 dt);
    void calc(const EGG::Vector3f& forward, const EGG::Vector3f& movement);

    BspWheel* bspWheel;
    KartWheelPhysics* wheelPhysics;
    KartWheelType wheelType;
    u32 bspWheelIdx;
    u32 wheelIdx;
    EGG::Vector3f suspTop;
    f32 maxTravelScaled;
    bool hasFloorCol;
    s16 _36;
    f32 _38;
    EGG::Vector3f downDir;
};
// static_assert(sizeof(KartSusPhysics) == 0x48);

} // namespace Kart