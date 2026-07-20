#pragma once

#include <rk_types.h>
#include <decomp.h>
#include <egg/math/eggVector.hpp>
#include <egg/math/eggMatrix.hpp>

namespace Kart {

class KartWheelPhysics;
class BspWheel;

// ===== KartSus =====
// Suspension system for a kart, manages wheel collision detection
// There's one per wheel (4 total for a kart)
// Size: unknown (small - wraps WheelPhysics)
class KartSus {
public:
    // 0x8059aff0 - KartSus_ct
    KartSus();

    // 0x8059b048 - KartSus_init
    void init();

    // 0x8059b0bc - KartSus_initPhysics
    void initPhysics();

    /// Calculate the spring force for a given compression.
    /// @addr estimated
    f32 calcSpringForce(f32 compression) const;

    /// Calculate the damping force for a given compression velocity.
    /// @addr estimated
    f32 calcDampingForce(f32 compressionVel) const;

    /// Per-frame suspension update.
    /// @addr estimated
    void update(f32 dt);

    /// Set the spring stiffness (N/m).
    /// @addr estimated
    void setStiffness(f32 stiffness);

    /// Get the current suspension compression ratio [0, 1].
    /// 0 = fully extended, 1 = fully compressed (bottomed out).
    /// @addr estimated
    f32 getCompression() const;

    /// Check if the suspension is fully compressed (bottomed out).
    /// @addr estimated
    bool isBottomedOut() const;

    /// Handle rough terrain effects (offroad, bumps).
    /// @addr estimated
    void handleRoughTerrain(f32 roughness);

    /// Get the rest length (natural length) of the suspension.
    /// @addr estimated
    f32 getRestLength() const;

    /// Set the rest length (natural length) of the suspension.
    /// @addr estimated
    void setRestLength(f32 length);

private:
    void* vtable;
    void* _04;
    // KartPhysics pointer at 0x08
    void* _08;
    // Wheel count at 0x0c (likely u16 or s16)
    u16 _0c;
    // WheelPhysics pointer at 0x10
    KartWheelPhysics* wheelPhysics;
    // Float fields (physics scale values)
    f32 _2c;
    f32 _3c;
    f32 _4c;
    f32 m_compression;      // current compression [0,1]
    f32 m_compressionVel;   // rate of compression change
    f32 m_restLength;       // suspension rest length
};

// Free function: get default suspension parameters
/// @addr estimated
f32 KartSus_getDefaultStiffness();
f32 KartSus_getDefaultDamping();
f32 KartSus_getDefaultTravel();

// ===== KartPhysics =====
// Main kart physics controller
// Referenced at 0x805a1aa4 as __ct__Q24Kart11KartPhysicsFb
class KartPhysics {
public:
    // 0x805a1aa4 - __ct__Q24Kart11KartPhysicsFb
    KartPhysics(bool isBike);

    void update();

private:
    void* vtable;
    void* _04;
    void* _08;
    // Physics state flags
    u32 _0c;
    // Vehicle type flag (bike = true)
    bool mIsBike;
    // Physics component pointers
    void* _18;
    void* _1c;
    void* _20;
    // Float physics params
    f32 _24;
    f32 _28;
    f32 _2c;
    // BspWheel/suspension system arrays
    void* _30;
    void* _34;
    void* _38;
    void* _3c;
    // Position/velocity accumulators
    f32 _40;
    f32 _44;
    f32 _48;
    f32 _4c;
    f32 _50;
    f32 _54;
    f32 _58;
    f32 _5c;
    f32 _60;
    f32 _64;
    f32 _68;
    f32 _6c;
    // Effect state
    u8 _70;
    u8 _71;
    u8 _72;
    u8 _73;
    // Pointer to physics sub-object array
    void* _78;
    // More physics params
    f32 _7c;
    f32 _80;
    f32 _84;
    f32 _88;
    f32 _8c;
    f32 _90;
    f32 _94;
    f32 _98;
    f32 _9c;
    f32 _a0;
    f32 _a4;
    f32 _a8;
    f32 _ac;
    f32 _b0;
    f32 _b4;
    f32 _b8;
    f32 _bc;
    f32 _c0;
    f32 _c4;
    f32 _c8;
    f32 _cc;
    f32 _d0;
    f32 _d4;
    f32 _d8;
    f32 _dc;
    f32 _e0;
    f32 _e4;
    f32 _e8;
    f32 _ec;
    f32 _f0;
    f32 _f4;
    f32 _f8;
    f32 _fc;
};

// ===== KartSusPhysics (already in KartWheelPhysics.hpp) =====
// Already declared above - see KartWheelPhysics.hpp

} // namespace Kart