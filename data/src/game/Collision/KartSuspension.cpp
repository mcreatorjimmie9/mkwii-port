#include "KartSuspension.hpp"
#include "KartDynamics.hpp"

#include <math.h>

namespace Kart {

// Default suspension tuning values (tuned for MKWii feel)
const f32 KartSuspension::DEFAULT_SPRING_K     = 35000.0f;
const f32 KartSuspension::DEFAULT_DAMPING_RATIO = 0.6f;
const f32 KartSuspension::DEFAULT_REST_LENGTH   = 15.0f;
const f32 KartSuspension::MAX_COMPRESSION       = 12.0f;
const f32 KartSuspension::MIN_EXTENSION         = 3.0f;

KartSuspension::KartSuspension()
    : m_springK(DEFAULT_SPRING_K)
    , m_dampingRatio(DEFAULT_DAMPING_RATIO)
    , m_restLength(DEFAULT_REST_LENGTH) {
    for (u32 i = 0; i < WHEEL_COUNT; i++) {
        m_wheels[i].contactPoint.setAll(0);
        m_wheels[i].localOffset.setAll(0);
        m_wheels[i].compression = 0.0f;
        m_wheels[i].compressionVel = 0.0f;
        m_wheels[i].appliedForce = 0.0f;
        m_wheels[i].grounded = false;
        m_wheelGrounded[i] = false;
        m_wheelForce[i] = 0.0f;
    }
}

KartSuspension::~KartSuspension() {}

void KartSuspension::init() {
    m_springK = DEFAULT_SPRING_K;
    m_dampingRatio = DEFAULT_DAMPING_RATIO;
    m_restLength = DEFAULT_REST_LENGTH;

    for (u32 i = 0; i < WHEEL_COUNT; i++) {
        m_wheels[i].contactPoint.setAll(0);
        m_wheels[i].localOffset.setAll(0);
        m_wheels[i].compression = 0.0f;
        m_wheels[i].compressionVel = 0.0f;
        m_wheels[i].appliedForce = 0.0f;
        m_wheels[i].grounded = false;
        m_wheelGrounded[i] = false;
        m_wheelForce[i] = 0.0f;
    }
}

void KartSuspension::update(f32 dt, KartDynamics* dyn) {
    if (!dyn || dt <= 0.0f) return;

    // Critical damping coefficient: c_crit = 2 * sqrt(k * m)
    // We assume unit mass for the spring model and scale by kart mass externally
    f32 cCrit = 2.0f * sqrtf(m_springK);
    f32 cDamp = m_dampingRatio * cCrit;

    EGG::Vector3f totalForce;
    totalForce.setAll(0);

    for (u32 i = 0; i < WHEEL_COUNT; i++) {
        WheelSuspState& wheel = m_wheels[i];

        if (!wheel.grounded) {
            // Wheel is airborne — no spring force, but let it extend
            wheel.compression = 0.0f;
            wheel.compressionVel = 0.0f;
            wheel.appliedForce = 0.0f;
            m_wheelGrounded[i] = false;
            m_wheelForce[i] = 0.0f;
            continue;
        }

        // Spring force: F = -k * x (Hooke's law)
        // compression > 0 means the spring is compressed
        f32 springForce = -m_springK * wheel.compression;

        // Damper force: F = -c * v
        f32 damperForce = -cDamp * wheel.compressionVel;

        // Total vertical force on kart from this wheel
        f32 totalWheelForce = springForce + damperForce;

        // Clamp compression to physical limits
        if (wheel.compression > MAX_COMPRESSION) {
            wheel.compression = MAX_COMPRESSION;
            wheel.compressionVel = 0.0f;
        }
        if (wheel.compression < -MIN_EXTENSION) {
            // Over-extension — apply extra restoring force
            totalWheelForce += m_springK * MIN_EXTENSION * 2.0f;
            wheel.compression = -MIN_EXTENSION;
        }

        // Apply force at the wheel contact point
        wheel.appliedForce = totalWheelForce;
        m_wheelForce[i] = totalWheelForce;
        m_wheelGrounded[i] = true;

        // Accumulate vertical force
        totalForce.y += totalWheelForce;

        // Update compression velocity (for damper calculation next frame)
        // This is a simplified model — real MKWii updates from wheel position delta
        wheel.compressionVel *= 0.95f; // Damping decay
    }

    // Apply accumulated suspension forces to kart dynamics
    dyn->addForce(totalForce);
}

void KartSuspension::applyWheelForce(s32 wheelIdx, f32 force) {
    if (wheelIdx < 0 || (u32)wheelIdx >= WHEEL_COUNT) return;
    m_wheels[wheelIdx].appliedForce = force;
    m_wheelForce[wheelIdx] = force;
}

void KartSuspension::getWheelContactPoint(s32 idx, f32* outPos) {
    if (idx < 0 || (u32)idx >= WHEEL_COUNT || !outPos) return;
    outPos[0] = m_wheels[idx].contactPoint.x;
    outPos[1] = m_wheels[idx].contactPoint.y;
    outPos[2] = m_wheels[idx].contactPoint.z;
}

f32 KartSuspension::getCompression(s32 idx) const {
    if (idx < 0 || (u32)idx >= WHEEL_COUNT) return 0.0f;
    return m_wheels[idx].compression;
}

} // namespace Kart