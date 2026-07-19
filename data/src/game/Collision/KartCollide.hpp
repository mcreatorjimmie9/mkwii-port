// Guard against KartCollideArea redefinition in CourseColManager.hpp
#define __KART_COLLIDE_AREA_DEFINED__
#include <game/field/CourseColManager.hpp>
// GENESIS guards: KartDynamics has a local full definition (KartDynamics.hpp).
// KartCollide has a local full definition (this file).
// All others (KartState, KartMove, KartBody, KartStats, KartPhysicsEngine)
// get stub definitions from KartObjectProxy.hpp.
#ifndef GENESIS_KART_COLLIDE_HPP_GUARD
#define GENESIS_KART_COLLIDE_HPP_GUARD
#define GENESIS_KART_DYNAMICS_DEFINED
#define GENESIS_KART_COLLIDE_DEFINED

#pragma once

#include <decomp.h>
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
class KartCollideAreaBase;

// Forward declaration for KartObjectProxy accessors
class KartObjectProxy;

class IKartCollide {
public:
    virtual void processBody(KartCollisionInfo& kartColInfo, const Hitbox& hitbox, const ::Field::ColInfo & colInfo, u32* colTypeMask) = 0;
    virtual void processWheels(KartCollisionInfo& kartColInfo, const Hitbox& hitbox, const ::Field::ColInfo & colInfo, u32* colTypeMask) = 0;
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

// ===== KartCollideAreaBase =====
// Phase 6b refinement: extracted from community header
// This base class was MISSING from GENESIS — KartCollideArea directly inherited from it
class KartCollideAreaBase : public KartObjectProxy {
public:
    virtual ~KartCollideAreaBase();
    virtual void init();
    virtual void vf10();
    virtual void vf14();

private:
    u8 _10[0x38 - 0x10];
};
// static_assert(sizeof(KartCollideAreaBase) == 0x38);

// ===== KartCollideArea =====
// Phase 6b: now correctly inherits from KartCollideAreaBase
// Size: 0x40 (base 0x38 + 8 bytes derived)
class KartCollideArea : public KartCollideAreaBase {
public:
    KartCollideArea();
    virtual ~KartCollideArea();
    virtual void init() override;
    virtual void vf10() override;
    virtual void vf14() override;

private:
    u8 _38[0x40 - 0x38];
};
// static_assert(sizeof(KartCollideArea) == 0x40);

// ===== KartCollide =====
// Inherits from IKartCollide (pure virtual interface, 2 vtable entries)
// and KartObjectProxy (provides KartAccessor* + nw4r::ut::Node)
class KartCollide : public IKartCollide, public KartObjectProxy {
public:
    KartCollide();
    virtual ~KartCollide();

    virtual void processBody(KartCollisionInfo& kartColInfo, const Hitbox& hitbox, const ::Field::ColInfo & colInfo, u32* colTypeMask) override;
    virtual void processWheels(KartCollisionInfo& kartColInfo, const Hitbox& hitbox, const ::Field::ColInfo & colInfo, u32* colTypeMask) override;

    void init();
    void updateBbox();
    void processMovingWater(KartCollisionInfo& kartColInfo, u32* colTypeMask) NEVER_INLINE;
    void processFloor(KartCollisionInfo& kartColInfo, const Hitbox& hitbox, const ::Field::ColInfo & colInfo, u32* colTypeMask, bool isWheel);
    void checkNeighborhood(KartCollisionInfo& kartColInfo, const Hitbox& hitbox, const ::Field::ColInfo & colInfo);
    void updateHitboxes();
    bool processWall(KartCollisionInfo& kartColInfo, const ::Field::ColInfo& colInfo, u32* colTypeMask);
    void processCannon(u32* kclTypeMask);
    void applySomeFloorMoment(KartDynamics* kartDynamics, HitboxGroup* hitboxGroup,
                    const EGG::Vector3f& forward, const EGG::Vector3f& dir, const EGG::Vector3f& speed,
                    f32 rateForward, f32 rateLateral, bool zeroUp, bool zeroPlane, bool affectAngVel);
    void calcWheelCollision(s8 playerIdx, u32 wheelIdx, KartDynamics* kartDynamics, HitboxGroup* hitboxGroup, const EGG::Vector3f& colForce,
                    const EGG::Vector3f& wheelPos, f32 radius);

    const EGG::Vector3f& getMovement() const { return movement; }
    f32 get1c() const { return wallBounceFactor; }

private:
    // KartObjectProxy provides: vtable_IKartCollide(0x00), vtable_KartObjectProxy(?),
    // KartAccessor*(0x04), nw4r::ut::Node(0x08)
    // After multiple inheritance base data:
    KartCollideArea* kartCollideArea;  // 0x0C: collision area manager
    f32 boundingRadius;                // 0x10: bounding sphere radius (init to 100.0f)
    s16 playerBumpTimer;               // 0x14: player-player collision cooldown
    u8 _16[2];                         // 0x16: padding
    f32 wallBounceFactor;              // 0x18: wall bounce/reflect factor (init to 0.8f; Phase 6b: renamed from _1c)
    EGG::Vector3f initialColNormal;   // 0x1C: initial collision normal (zeroed in init; Phase 6b: renamed from _20)
    u32 surfaceFlags;                  // 0x28: KCL surface type bitmask
    EGG::Vector3f tangentOff;          // 0x2C: tangent offset for offroad
    EGG::Vector3f movement;            // 0x38: current movement vector
    s16 respawnTimer;                  // 0x44: respawn countdown
    s16 solidOobTimer;                 // 0x46: consecutive OOB collision frames (max 3)
    s16 someLightningTimer;            // 0x48: lightning-related timer
    u8 _4a[2];                         // 0x4A: padding
    f32 oobCheckDist;                  // 0x4C: OOB check distance (zeroed in init; Phase 6b: renamed from _50)
    f32 suspBottomHeightSoftWall;      // 0x50: suspension bottom height (soft wall)
    s16 someSoftWallTimer;             // 0x54: soft wall collision timer
    u8 _56[2];                         // 0x56: padding
    f32 suspBottomHeightNonSoftWall;   // 0x58: suspension bottom height (non-soft wall)
    s16 someNonSoftWallTimer;          // 0x5C: non-soft wall timer
    s16 someAngVel3FrameTimer;         // 0x5E: 3-frame angular velocity timer
    f32 someYawAngVel;                 // 0x60: yaw angular velocity for wall hit
    f32 maxColPerp;                    // 0x64: max collision perpendicularity seen (zeroed in init; Phase 6b: renamed from _68)
    s16 oobAreaIdx;                    // 0x68: OOB area index (init to -1)
    u8 _6a[2];                         // 0x6A: padding
    f32 _6c;                           // 0x6C: unknown (zeroed in init)
};

} // namespace Kart

#endif // GENESIS_KART_COLLIDE_HPP_GUARD