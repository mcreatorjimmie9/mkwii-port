// Define GENESIS guards before including KartObjectProxy.hpp
#ifndef GENESIS_KART_COLLIDE_HPP_GUARD
#define GENESIS_KART_COLLIDE_HPP_GUARD
#define GENESIS_KART_STATE_DEFINED
#define GENESIS_KART_MOVE_DEFINED
#define GENESIS_KART_BODY_DEFINED
#define GENESIS_KART_DYNAMICS_DEFINED
#define GENESIS_KART_PHYSICS_ENGINE_DEFINED
#define GENESIS_KART_STATS_DEFINED
#define GENESIS_KART_COLLIDE_DEFINED

#pragma once

#include <rk_types.h>

#include <egg/math/eggVector.hpp>
#include <egg/math/eggQuat.hpp>
#include <egg/math/eggMatrix.hpp>
#include <game/field/CollisionEntries.hpp>
#include <game/kart/KartObjectProxy.hpp>

#include "KartHitbox.hpp"
#include "KartDynamics.hpp"

namespace Kart {

class KartMove;
class KartState;
class KartBody;
class KartPhysicsEngine;
class KartCollideArea;

// Forward declaration for KartObjectProxy accessors
class KartObjectProxy;

class IKartCollide {
public:
    virtual void processBody(KartCollisionInfo& kartColInfo, const Hitbox& hitbox, const Field::ColInfo& colInfo, u32* colTypeMask) = 0;
    virtual void processWheels(KartCollisionInfo& kartColInfo, const Hitbox& hitbox, const Field::ColInfo& colInfo, u32* colTypeMask) = 0;
};

#define SURF_FLAG_WALL                0x1
#define SURF_FLAG_SOLID_OOB           0x2
#define SURF_FLAG_UNK_4               0x4
#define SURF_FLAG_UNK_8               0x8
// KCL boost ramps
#define SURF_FLAG_BOOST_RAMP          0x10
#define SURF_FLAG_GROUND_OFFROAD      0x20
#define SURF_FLAG_OFFROAD             0x40
// "boost panel" here includes KCL boost ramps
#define SURF_FLAG_GROUND_BOOST_PANEL  0x80
#define SURF_FLAG_BOOST_PANEL         0x100
#define SURF_FLAG_HALFPIPE_RAMP       0x200
#define SURF_FLAG_TRICKABLE           0x800
#define SURF_FLAG_NOT_TRICKABLE       0x1000
#define SURF_FLAG_FALL_BOUNDARY_SHORT 0x2000
#define SURF_FLAG_MOVING_ROAD         0x8000
#define SURF_FLAG_HALFPIPE_END        0x10000

class KartCollide : public IKartCollide, public KartObjectProxy {
public:
    KartCollide();
    virtual ~KartCollide();

    virtual void processBody(KartCollisionInfo& kartColInfo, const Hitbox& hitbox, const Field::ColInfo& colInfo, u32* colTypeMask) override;
    virtual void processWheels(KartCollisionInfo& kartColInfo, const Hitbox& hitbox, const Field::ColInfo& colInfo, u32* colTypeMask) override;

    void init();
    void updateBbox();
    void processMovingWater(KartCollisionInfo& kartColInfo, u32* colTypeMask) NEVER_INLINE;
    void processFloor(KartCollisionInfo& kartColInfo, const Hitbox& hitbox, const Field::ColInfo& colInfo, u32* colTypeMask, bool isWheel);
    void checkNeighborhood(KartCollisionInfo& kartColInfo, const Hitbox& hitbox, const Field::ColInfo& colInfo);
    void updateHitboxes();
    bool processWall(KartCollisionInfo& kartColInfo, const Field::ColInfo& colInfo, u32* colTypeMask);
    void processCannon(u32* kclTypeMask);
    void applySomeFloorMoment(KartDynamics* kartDynamics, HitboxGroup* hitboxGroup,
                    const EGG::Vector3f& forward, const EGG::Vector3f& dir, const EGG::Vector3f& speed,
                    f32 rateForward, f32 rateLateral, bool zeroUp, bool zeroPlane, bool affectAngVel);
    void calcWheelCollision(s8 playerIdx, u32 wheelIdx, KartDynamics* kartDynamics, HitboxGroup* hitboxGroup, const EGG::Vector3f& colForce,
                    const EGG::Vector3f& wheelPos, f32 radius);

    const EGG::Vector3f& getMovement() const { return movement; }
    f32 get1c() const { return _1c; }

private:
    KartCollideArea* kartCollideArea;
    f32 boundingRadius;
    /// Collision between two players can't occur more often than every 10 frames, counted by this timer
    s16 playerBumpTimer;
    f32 _1c;
    EGG::Vector3f _20;
    /// Surface effects are determined by this flag
    u32 surfaceFlags;
    EGG::Vector3f tangentOff;
    EGG::Vector3f movement;
    s16 respawnTimer;
    /// Counts 3 frames of consecutive allowed collision with solid OOB
    s16 solidOobTimer;
    s16 someLightningTimer;
    f32 _50;
    f32 suspBottomHeightSoftWall;
    s16 someSoftWallTimer;
    f32 suspBottomHeightNonSoftWall;
    s16 someNonSoftWallTimer;
    s16 someAngVel3FrameTimer;
    f32 someYawAngVel;
    f32 _68;
    s16 oobAreaIdx;
    f32 _70;
};

} // namespace Kart

#endif // GENESIS_KART_COLLIDE_HPP_GUARD