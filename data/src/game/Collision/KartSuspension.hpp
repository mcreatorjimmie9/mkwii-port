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

    /// Get average compression across all grounded wheels.
    /// @return Average compression (0 if none grounded)
    f32 getCompression() const;

    /// Check if a wheel is touching the ground.
    bool isWheelGrounded(s32 idx) const { return m_wheelGrounded[idx]; }

    /// Get the suspension force being applied to a wheel this frame.
    f32 getWheelForce(s32 idx) const { return m_wheelForce[idx]; }

    /// Compute the damping coefficient for a given wheel.
    /// @param wheelIdx  Wheel index (0-3)
    /// @return Damping coefficient (force per unit velocity)
    f32 computeWheelDamping(s32 wheelIdx) const;

    /// Get the full state of a wheel (compression, velocity, grounded, force).
    /// @param idx       Wheel index (0-3)
    /// @param outComp   Output compression
    /// @param outVel    Output compression velocity
    /// @param outForce  Output applied force
    /// @param outGround Output grounded flag
    void getWheelState(s32 idx, f32* outComp, f32* outVel, f32* outForce, bool* outGround) const;

    /// Reset a single wheel's suspension state to default.
    /// @param idx  Wheel index (0-3)
    void resetWheel(s32 idx);

    /// Set all spring parameters at once for vehicle-specific tuning.
    /// @param k     Spring constant
    /// @param zeta  Damping ratio
    /// @param len   Rest length
    void setSpringParams(f32 k, f32 zeta, f32 len);

    /// Get a bitmask of grounded wheels. Bit i is set if wheel i is grounded.
    /// @return Bitmask (e.g. 0x5 = RL+FL, 0xF = all four)
    u32 getGroundContactMask() const;

    /// Compute spring force for a single wheel (Hooke's law: F = -k * x)
    f32 calcSpringForce(s32 wheelIdx) const;

    /// Compute damping force for a single wheel (F = -c * v)
    f32 calcDampingForce(s32 wheelIdx) const;

    /// Simplified update without dynamics pointer, returns total vertical force
    f32 update();

    /// Set spring stiffness with clamping [1000, 200000]
    void setStiffness(f32 k);

    /// Check if any wheel is at maximum compression
    bool isBottomedOut() const;

    /// Apply rough terrain effects (extra damping, perturbation)
    void handleRoughTerrain(f32 roughness, f32 kartSpeed);

    /// Suspension parameters (can be tuned per vehicle)
    void setSpringConstant(f32 k) { m_springK = k; }
    void setDampingRatio(f32 zeta) { m_dampingRatio = zeta; }
    void setRestLength(f32 len) { m_restLength = len; }
    f32 getSpringConstant() const { return m_springK; }
    f32 getDampingRatio() const { return m_dampingRatio; }
    f32 getRestLength() const { return m_restLength; }

    static const f32 DEFAULT_SPRING_K;
    static const f32 DEFAULT_DAMPING_RATIO;
    static const f32 DEFAULT_REST_LENGTH;
    static const f32 MAX_COMPRESSION;
    static const f32 MIN_EXTENSION;

private:

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

// Free function: return default suspension tuning parameters
void KartSuspension_getDefaultParams(f32* outSpringK, f32* outDampingRatio,
                                      f32* outRestLength);

} // namespace Kart