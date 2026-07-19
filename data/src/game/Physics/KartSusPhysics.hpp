#pragma once
#include <rk_types.h>
#include <decomp.h>
#include <egg/math/eggVector.hpp>
#include <egg/math/eggMatrix.hpp>

#include <game/kart/KartObjectProxy.hpp>
#include "KartWheelPhysics.hpp"
using Kart::KartWheelType;  // For Kart::KartWheelType enum

class KartWheelPhysics;
namespace Kart { class BspWheel; class HitboxGroup; using ::Kart::KartWheelType; }

namespace Kart {
class KartPhysicsEngine;
class KartWheelPhysics;
class BspWheel;
class HitboxGroup;
}

// =============================================================================
// KartSusPhysics — Per-wheel suspension physics
// Handles suspension travel, collision detection against BSP, and
// determines whether each wheel is in contact with the floor.
// Total size: 0x48 bytes
//
// This class is a thin wrapper that owns a KartWheelPhysics instance and
// manages the suspension ray-cast against BSP geometry each frame.
//
// Key address range for implementations: 0x8058e638-0x8058ff20
// =============================================================================
class KartSusPhysics : public ::Kart::KartObjectProxy {
public:
    virtual ~KartSusPhysics() {}

    KartSusPhysics(u32 wheelIdx, KartWheelType wheelType,
                    s32 bspWheelIdx);
    void reset();
    void init();
    void setInitialState();

    // Main per-frame suspension update
    // @param forward     Vehicle forward direction vector
    // @param vehicleMovement Vehicle movement vector this frame
    void calc(const EGG::Vector3f& forward,
              const EGG::Vector3f& vehicleMovement);

    // Collision detection — casts a ray from suspension top downward
    // @param gravity  Gravity direction vector (typically (0, -1, 0))
    // @param mtx      Vehicle rotation matrix (for transforming wheel pos)
    // @param dt       Delta time
    void calcCollision(const EGG::Vector3f& gravity,
                       const EGG::Matrix34f& mtx, f32 dt);

    // Accessors
    Kart::KartWheelPhysics* getWheelPhysics() const { return wheelPhysics; }
    bool hasFloorCollision() const { return hasFloorCol; }
    const EGG::Vector3f& getSuspTop() const { return suspTop; }
    const EGG::Vector3f& getDownDir() const { return downDir; }

public:
    Kart::BspWheel* bspWheel;              // 0x00: BSP wheel collision data
    Kart::KartWheelPhysics* wheelPhysics;  // 0x04: Corresponding wheel physics

private:
    KartWheelType wheelType;         // 0x08: KART_WHEEL_KART_LEFT/RIGHT/BIKE
    u32 bspWheelIdx;                 // 0x0C: BSP wheel table index
    u32 wheelIdx;                    // 0x10: Wheel index (0-3)

    // Suspension geometry
    EGG::Vector3f suspTop;           // 0x14: Suspension top anchor (world space)
    f32 maxTravelScaled;             // 0x20: Max travel distance (after vehicle Y scale)
    bool hasFloorCol;                // 0x24: True if wheel touches floor this frame
    s16 _36;                         // 0x26: Unknown (possibly collision sub-type)
    f32 _38;                         // 0x28: Unknown float (possibly penetration depth)
    EGG::Vector3f downDir;           // 0x2C: Direction of suspension ray (usually down)
};
// static_assert(sizeof(KartSusPhysics) == 0x48);