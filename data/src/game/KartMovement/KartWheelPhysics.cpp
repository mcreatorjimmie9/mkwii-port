#include "KartWheelPhysics.hpp"
#include <math.h>
#include <float.h>

namespace Kart {

// ===== Constants =====
static f32 rateForward = 0.1f;
static f32 wheelColForceFactor = 10.0f;
static f32 wheelHitboxHeight = 100.0f;
static f32 forwardFactor = 0.3f;
static f32 respawnSuspLimit = 1.0f;
static f32 disableSuspForceVerticalXV = 5.0f;
static f32 unk_suspSpeedRate = 0.3f;

// ===== KartWheelPhysics =====

// 0x8059b8f4 - __ct__Q24Kart16KartWheelPhysicsFUll
KartWheelPhysics::KartWheelPhysics(u32 wheelIdx, s32 bspWheelIdx)
    : wheelIdx(wheelIdx), bspWheelIdx(bspWheelIdx), bspWheel(nullptr) {}

// 0x8059b958 - init__Q24Kart16KartWheelPhysicsFv
void KartWheelPhysics::init() {
    this->hitboxGroup = new HitboxGroup;
    EGG::Vector3f pos(0.0f, 0.0f, 0.0f);
    this->hitboxGroup->createSingleHitbox(pos, 10.0f);
}

// 0x8059b9bc - setBsp__Q24Kart16KartWheelPhysicsFv
void KartWheelPhysics::setBsp() {
    // this->bspWheel = bspWheel(this->bspWheelIdx); // via KartObjectProxy
}

// 0x8059b9f0 - reset__Q24Kart16KartWheelPhysicsFv
void KartWheelPhysics::reset() {
    this->hitboxGroup->reset();
    this->wheelPos.setZero();
    this->prevWheelPos.setZero();
    this->prevWheelOffset.setZero();
    this->susTravel = 0.0f;
    this->colVel.setZero();
    this->speed.setZero();
    this->wheelEdgePos.setZero();
    this->effectiveRadius = 0.0f;
    this->targetEffectiveRadius = 0.0f;
    this->isAtSuspLimit = 0.0f;
    this->suspTop.setZero();
    if (this->bspWheel) {
        this->susTravel = bspWheel->maxTravel;
        this->effectiveRadius = bspWheel->wheelRadius;
    }
}

// 0x8059baa8 - setColState__Q24Kart16KartWheelPhysicsFffRCQ23EGG8Vector3f
void KartWheelPhysics::setColState(f32 dt, f32 travel, const EGG::Vector3f& colForce) {
    f32 maxTravel = this->susTravel + /*getYScale()*/ 1.0f * 5.0f;
    this->susTravel = maxTravel;
    if (maxTravel > travel) {
        this->susTravel = travel;
    }
    if (this->susTravel < 0.0f) {
        this->susTravel = 0.0f;
    }

    f32 factor = dt * wheelColForceFactor;
    this->colVel.x = factor * colForce.x;
    this->colVel.y = factor * colForce.y;
    this->colVel.z = factor * colForce.z;
}

// 0x8059bb78 - calcCollision__Q24Kart16KartWheelPhysicsFRCQ23EGG8Vector3fRCQ23EGG8Vector3f
void KartWheelPhysics::calcCollision(const EGG::Vector3f& downDir, const EGG::Vector3f& suspTop) {
    // Community-adapted from existing KartWheelPhysics::calcCollision
    // Full implementation requires KartObjectProxy, kartCollide, kartState, etc.
    // Stores computed positions, handles collision response via kartCollide
    // Updates effectiveRadius and suspTravel based on collision results

    f32 scaledRadius = effectiveRadius * /*totalScale()*/ 1.0f;
    this->suspTop = suspTop;
    wheelEdgePos = wheelPos + scaledRadius * downDir;
    f32 travel = EGG::Vector3f::dot(downDir, wheelPos - suspTop);
    updateEffectiveRadius();
    this->susTravel = travel;

    if (travel < 0.0f) {
        isAtSuspLimit = 1.0f;
        // kartPhysicsEngine()->registerSuspLimits(travel * downDir);
        // kartState()->set(KART_FLAG_AT_SUSP_LIMIT);
    } else {
        isAtSuspLimit = 0.0f;
    }
}

// 0x8059bfb8 - calc__Q24Kart16KartWheelPhysicsFRCQ23EGG8Vector3fRCQ23EGG8Vector3f
void KartWheelPhysics::calc(const EGG::Vector3f& down, const EGG::Vector3f& movement) {
    EGG::Vector3f topmost;
    topmost.x = suspTop.x + movement.x;
    topmost.y = suspTop.y + movement.y;
    topmost.z = suspTop.z + movement.z;

    EGG::Vector3f susTravelVector;
    susTravelVector.x = wheelPos.x - topmost.x;
    susTravelVector.y = wheelPos.y - topmost.y;
    susTravelVector.z = wheelPos.z - topmost.z;

    susTravel = down.dot(susTravelVector);
    if (susTravel > bspWheel->maxTravel * /*getYScale()*/ 1.0f) {
        susTravel = bspWheel->maxTravel * /*getYScale()*/ 1.0f;
    }
    if (susTravel < 0.0f) {
        susTravel = 0.0f;
    }

    wheelPos.x = susTravel * down.x + topmost.x;
    wheelPos.y = susTravel * down.y + topmost.y;
    wheelPos.z = susTravel * down.z + topmost.z;

    EGG::Vector3f spd;
    spd.x = wheelPos.x - prevWheelPos.x;
    spd.y = wheelPos.y - prevWheelPos.y;
    spd.z = wheelPos.z - prevWheelPos.z;

    speed = spd;
    // speed -= pDynamics->internalVel;
    // speed -= pDynamics->movingRoadVel;
    // speed -= pDynamics->movingWaterVel;
    // speed -= bodyColInfo()->movement;
    // speed -= kartCollide()->getMovement();
    // hitboxGroup->getKartCollisionInfo().vel += speed;
    prevWheelPos = wheelPos;
    prevWheelOffset.x = prevWheelPos.x - topmost.x;
    prevWheelOffset.y = prevWheelPos.y - topmost.y;
    prevWheelOffset.z = prevWheelPos.z - topmost.z;
}

// 0x8059c284 - updateEffectiveRadius__Q24Kart16KartWheelPhysicsFv
void KartWheelPhysics::updateEffectiveRadius() {
    this->effectiveRadius += (targetEffectiveRadius - effectiveRadius) * 0.1f;
}

// 0x8059c2a8 - unk80599dc0__Q24Kart16KartWheelPhysicsFRCQ23EGG8Vector3f
void KartWheelPhysics::applyFloorMoment(const EGG::Vector3f& front) {
    // Applies floor moment via kartCollide
    // Rate depends on wall collision state
}

// 0x8059c394 - hasFloorCollision__Q24Kart16KartWheelPhysicsCFv
bool KartWheelPhysics::hasFloorCollision() const {
    return (hitboxGroup->getKartCollisionInfo().flags & COL_FLAG_FLOOR) != 0;
}

// 0x8059c3a4 - getCollisionFloorNrm__Q24Kart16KartWheelPhysicsCFv
const EGG::Vector3f& KartWheelPhysics::getCollisionFloorNrm() const {
    return this->getKartCollisionInfo().floorNrm;
}

// 0x8059c3b0 - getKartCollisionInfo__Q24Kart16KartWheelPhysicsCFv
const KartCollisionInfo& KartWheelPhysics::getKartCollisionInfo() const {
    return this->hitboxGroup->getKartCollisionInfo();
}

// ===== KartSusPhysics =====

// 0x8059c3bc - __ct__Q24Kart14KartSusPhysicsFUlQ24Kart13KartWheelTypel
KartSusPhysics::KartSusPhysics(u32 wheelIdx, KartWheelType wheelType, s32 bspWheelIdx) {
    this->wheelPhysics = nullptr;
    this->wheelType = wheelType;
    this->bspWheelIdx = bspWheelIdx;
    this->wheelIdx = wheelIdx;
    this->_38 = 1.0f;
}

// 0x8059c43c - reset__Q24Kart14KartSusPhysicsFv
void KartSusPhysics::reset() {
    this->_38 = 1.0f / this->bspWheel->maxTravel;
    this->suspTop.setZero();
    this->maxTravelScaled = 0.0f;
    this->hasFloorCol = false;
    this->_36 = 0;
    this->downDir.setZero();
}

// 0x8059c488 - init__Q24Kart14KartSusPhysicsFv
void KartSusPhysics::init() {
    // this->wheelPhysics = kartWheel(this->wheelIdx)->getPhysics();
    // this->bspWheel = bspWheel(this->bspWheelIdx);
    this->reset();
}

// 0x8059c514 - setInitialState__Q24Kart14KartSusPhysicsFv
void KartSusPhysics::setInitialState() {
    // Community-adapted: sets initial wheel positions from BSP data
    // Transforms BSP wheel positions to world space
    // Sets wheel edge positions and hitbox last positions
}

// 0x8059c760 - calcCollision__Q24Kart14KartSusPhysicsFRCQ23EGG8Vector3fRCQ23EGG9Matrix34ff
void KartSusPhysics::calcCollision(const EGG::Vector3f& gravity, const EGG::Matrix34f& mtx, f32 dt) {
    // this->maxTravelScaled = this->bspWheel->maxTravel * getYScale();
    // Scales BSP wheel center pos, rotates to world space
    // Sets down direction from wheel rotation
    // Calls wheelPhysics->setColState()
    // Sets wheel position, calls wheelPhysics->calcCollision()
}

// 0x8059ca5c - WheelPhysicsHolder_applySuspensions
// (standalone function, not a method of KartSusPhysics)
// Applies suspension forces for all wheels
// Iterates over suspension array, calls calc on each

} // namespace Kart