#pragma once
#include <rk_types.h>
#include <decomp.h>
#include <egg/math/eggVector.hpp>
#include <egg/math/eggMatrix.hpp>

namespace Kart {

class KartObjectProxy;
class KartPhysicsEngine;
class KartSusPhysics;
class BspWheel;
class HitboxGroup;

// =============================================================================
// KartWheelPhysics — Per-wheel physics state
// Handles wheel contact detection, collision response, and effective radius.
// Total size: 0x84 bytes
// Address range: 0x8058e638-0x8058f5f4 (individual methods)
// =============================================================================

enum KartWheelType {
    KART_WHEEL_KART_LEFT,
    KART_WHEEL_KART_RIGHT,
    KART_WHEEL_BIKE,
};

class KartWheelPhysics : public KartObjectProxy {
public:
    virtual ~KartWheelPhysics() {}

    KartWheelPhysics(u32 wheelIdx, s32 bspWheelIdx);
    void init();
    void setBsp();
    void reset();
    void setInitialState();

    // Collision computation — called from KartSusPhysics::calcCollision
    void calcCollision(const EGG::Vector3f& bottom,
                       const EGG::Vector3f& topmostPos);

    // Main per-frame wheel update — called from KartSusPhysics::calc
    void calc(const EGG::Vector3f& down, const EGG::Vector3f& vehicleMovement);

    // Update effective radius (tire squish on hard impacts)
    void updateEffectiveRadius();

    // Inline in KartSusPhysics::calc — compute lateral force
    void computeLateralForce(const EGG::Vector3f& front);

    // Inline in KartSusPhysics::calcCollision — set collision state
    void setColState(f32 dt, f32 travel, const EGG::Vector3f& colForce);

    // Queries
    bool hasFloorCollision() const;
    const EGG::Vector3f& getCollisionFloorNrm() const;
    const void* getKartCollisionInfo() const;

    // Accessors
    f32 getSusTravel() const { return susTravel; }
    void setWheelPos(const EGG::Vector3f& wheelPos) { this->wheelPos = wheelPos; }
    inline f32 getYScale() { return kartPhysicsEngine()->getYScale(); }
    inline const HitboxGroup* getHitbox() const { return hitboxGroup; }
    inline HitboxGroup* getHitbox() { return hitboxGroup; }

public:
    u32 wheelIdx;              // 0x00: Index of this wheel (0-3)
    u32 bspWheelIdx;           // 0x04: Index into BSP wheel table
    BspWheel* bspWheel;        // 0x08: Pointer to BSP wheel data
    HitboxGroup* hitboxGroup;  // 0x0C: Pointer to hitbox for collision checks

    // Positions are in world space unless noted otherwise
    EGG::Vector3f wheelPos;       // 0x10: Current wheel center position
    EGG::Vector3f prevWheelPos;   // 0x1C: Previous frame wheel position
    EGG::Vector3f prevWheelOffset; // 0x28: Previous wheel offset from suspension top

    f32 susTravel;                  // 0x34: Current suspension travel distance
    EGG::Vector3f colVel;          // 0x38: Collision velocity vector
    EGG::Vector3f speed;           // 0x44: Wheel speed vector

    // Bottom of wheel (contact point with ground)
    EGG::Vector3f wheelEdgePos;    // 0x50: Bottom wheel edge position

    // Tire squish on hard floor collisions
    f32 effectiveRadius;           // 0x5C: Current effective radius
    f32 targetEffectiveRadius;      // 0x60: Target effective radius (for interpolation)
    f32 isAtSuspLimit;             // 0x64: Whether suspension is at max travel

    // Topmost point of suspension the wheel can reach
    EGG::Vector3f suspTop;         // 0x68: Suspension top anchor point
};
// static_assert(sizeof(KartWheelPhysics) == 0x84);

// =============================================================================
// KartSusPhysics — Per-wheel suspension physics
// Handles suspension travel, collision detection against BSP, and
// determines whether each wheel is in contact with the floor.
// Total size: 0x48 bytes
// Address range: 0x8058e638-0x8058ff20 (individual methods)
// =============================================================================

class KartSusPhysics : public KartObjectProxy {
public:
    virtual ~KartSusPhysics() {}

    KartSusPhysics(u32 wheelIdx, KartWheelType wheelType, s32 bspWheelIdx);
    void reset();
    void init();
    void setInitialState();

    // Main per-frame suspension update
    // forward: vehicle forward direction
    // vehicleMovement: vehicle movement vector this frame
    void calc(const EGG::Vector3f& forward,
              const EGG::Vector3f& vehicleMovement);

    // Collision detection — cast ray from top to bottom of suspension
    void calcCollision(const EGG::Vector3f& gravity,
                       const EGG::Matrix34f& mtx, f32 dt);

public:
    BspWheel* bspWheel;              // 0x00: Pointer to BSP wheel collision data
    KartWheelPhysics* wheelPhysics;  // 0x04: Corresponding wheel physics

private:
    KartWheelType wheelType;         // 0x08: Left/right/bike type
    u32 bspWheelIdx;                 // 0x0C: BSP wheel index
    u32 wheelIdx;                    // 0x10: Wheel index (0-3)
    // Topmost point of the suspension the wheel can reach
    EGG::Vector3f suspTop;           // 0x14: Suspension top anchor (world space)
    // BSP max suspension travel after vehicle scale is applied
    f32 maxTravelScaled;             // 0x20: Max travel distance (scaled)
    bool hasFloorCol;                // 0x24: Whether this wheel has floor contact
    s16 _36;                         // 0x26: Unknown
    f32 _38;                         // 0x28: Unknown float
    EGG::Vector3f downDir;           // 0x2C: Down direction for ray cast
};
// static_assert(sizeof(KartSusPhysics) == 0x48);

} // namespace Kart