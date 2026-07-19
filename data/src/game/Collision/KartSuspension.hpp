#pragma once

#include <rk_types.h>
#include <egg/math/eggVector.hpp>
#include <egg/math/eggQuat.hpp>
#include <egg/math/eggMatrix.hpp>

namespace Kart {

class KartDynamics;

/// KartSuspension — 4-wheel spring-damper suspension system
/// Manages the vertical spring physics connecting each wheel to the kart body.
/// Each wheel has its own spring constant, damping ratio, and rest length.
/// The suspension applies forces to KartDynamics based on wheel compression.
/// Address range: 0x8049xxxx
class KartSuspension {
public:
    static const u32 WHEEL_COUNT = 4;

    enum WheelIndex {
        WHEEL_REAR_LEFT  = 0,
        WHEEL_REAR_RIGHT = 1,
        WHEEL_FRONT_LEFT = 2,
        WHEEL_FRONT_RIGHT = 3,
    };

    KartSuspension();
    ~KartSuspension();

    /// Initialize all 4 wheel suspensions with default spring/damper values.
    void init();

    /// Per-frame suspension update. Computes spring forces for each wheel
    /// and applies them to the dynamics object.
    /// @param dt  Frame delta time
    /// @param dyn  Kart dynamics to apply forces to
    void update(f32 dt, KartDynamics* dyn);

    /// Apply a vertical force at a specific wheel's contact point.
    /// @param wheelIdx  Which wheel (0-3)
    /// @param force     Force magnitude (positive = upward)
    void applyWheelForce(s32 wheelIdx, f32 force);

    /// Get the world-space ground contact position for a wheel.
    /// @param idx     Wheel index (0-3)
    /// @param outPos  Output XYZ position (must point to 3 floats)
    void getWheelContactPoint(s32 idx, f32* outPos);

    /// Get the current spring compression for a wheel.
    /// @param idx  Wheel index (0-3)
    /// @return Compression distance (0 = at rest length, positive = compressed)
    f32 getCompression(s32 idx) const;

    /// Check if a wheel is touching the ground.
    bool isWheelGrounded(s32 idx) const { return m_wheelGrounded[idx]; }

    /// Get the suspension force being applied to a wheel this frame.
    f32 getWheelForce(s32 idx) const { return m_wheelForce[idx]; }

    /// Suspension parameters (can be tuned per vehicle)
    void setSpringConstant(f32 k) { m_springK = k; }
    void setDampingRatio(f32 zeta) { m_dampingRatio = zeta; }
    void setRestLength(f32 len) { m_restLength = len; }
    f32 getSpringConstant() const { return m_springK; }
    f32 getDampingRatio() const { return m_dampingRatio; }
    f32 getRestLength() const { return m_restLength; }

private:
    static const f32 DEFAULT_SPRING_K;
    static const f32 DEFAULT_DAMPING_RATIO;
    static const f32 DEFAULT_REST_LENGTH;
    static const f32 MAX_COMPRESSION;
    static const f32 MIN_EXTENSION;

    struct WheelSuspState {
        EGG::Vector3f contactPoint;   // World-space contact position
        EGG::Vector3f localOffset;    // Offset from kart center in local space
        f32 compression;              // Current spring compression
        f32 compressionVel;           // Rate of compression change
        f32 appliedForce;             // Force applied this frame
        bool grounded;                // Wheel touching ground
    };

    WheelSuspState m_wheels[WHEEL_COUNT];

    // Suspension parameters
    f32 m_springK;         // Spring constant (N/m equivalent)
    f32 m_dampingRatio;    // Damping ratio (0.0 = no damping, 1.0 = critical)
    f32 m_restLength;      // Natural spring length

    // Per-frame cached values
    bool m_wheelGrounded[WHEEL_COUNT];
    f32 m_wheelForce[WHEEL_COUNT];
};

} // namespace Kart