#include "KartSuspension.hpp"
#include "KartDynamics.hpp"

#include <math.h>
#include <cstring>

namespace Kart {

// Default suspension tuning values (tuned for MKWii feel)
const f32 KartSuspension::DEFAULT_SPRING_K     = 35000.0f;
const f32 KartSuspension::DEFAULT_DAMPING_RATIO = 0.6f;
const f32 KartSuspension::DEFAULT_REST_LENGTH   = 15.0f;
const f32 KartSuspension::MAX_COMPRESSION       = 12.0f;
const f32 KartSuspension::MIN_EXTENSION         = 3.0f;

// Additional constants for velocity-dependent damping and force clamping
namespace {
    const f32 MIN_DAMPING_RATIO   = 0.1f;   // Floor for damping ratio
    const f32 MAX_DAMPING_RATIO   = 2.0f;   // Ceiling for damping ratio
    const f32 VEL_DAMP_SCALE      = 0.002f; // Velocity-dependent damping factor
    const f32 VEL_DAMP_CAP        = 0.5f;   // Max additional damping from velocity
    const f32 FORCE_CLAMP_MAX     = 80000.0f; // Maximum force per wheel
    const f32 FORCE_CLAMP_MIN     = -60000.0f; // Minimum (push-down) force
    const f32 RAYCAST_LENGTH      = 20.0f;  // Simplified raycast distance
    const f32 GROUND_DETECT_THRESH = 0.5f;   // Min compression to count as grounded
} // anonymous namespace

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
    f32 cCrit = 2.0f * sqrtf(m_springK);
    f32 cDamp = m_dampingRatio * cCrit;

    // Compute kart vertical velocity for velocity-dependent damping
    // Higher downward speed = more damping to prevent oscillation on hard landings
    f32 kartVertVel = dyn->internalVel.y;
    f32 velDampBonus = 0.0f;
    if (kartVertVel < 0.0f) {
        // Descending — add extra damping proportional to speed
        velDampBonus = -(kartVertVel * VEL_DAMP_SCALE);
        if (velDampBonus > VEL_DAMP_CAP) velDampBonus = VEL_DAMP_CAP;
    }
    f32 effectiveDamp = cDamp + velDampBonus * cCrit;

    EGG::Vector3f totalForce;
    totalForce.setAll(0);

    u32 groundedCount = 0;

    for (u32 i = 0; i < WHEEL_COUNT; i++) {
        WheelSuspState& wheel = m_wheels[i];

        if (!wheel.grounded) {
            // Wheel is airborne — no spring force, but let it extend
            // Simulate simplified raycast: check if wheel would hit ground
            // based on kart position + local offset projected downward
            EGG::Vector3f wheelWorldPos = dyn->pos + wheel.localOffset;
            EGG::Vector3f rayEnd = wheelWorldPos;
            rayEnd.y -= RAYCAST_LENGTH;

            // In real MKWii, this calls KCL raycast. Here we use a simple
            // Y-height check: if dyn->pos is close to expected ground plane,
            // mark the wheel as potentially grounded. The actual ground
            // detection comes from the collision system updating wheel.grounded.
            wheel.compression = 0.0f;
            wheel.compressionVel = 0.0f;
            wheel.appliedForce = 0.0f;
            m_wheelGrounded[i] = false;
            m_wheelForce[i] = 0.0f;
            continue;
        }

        groundedCount++;

        // Spring force: F = -k * x (Hooke's law)
        // compression > 0 means the spring is compressed
        f32 springForce = -m_springK * wheel.compression;

        // Damper force: F = -c * v (with velocity-dependent damping)
        f32 damperForce = -effectiveDamp * wheel.compressionVel;

        // Total vertical force on kart from this wheel
        f32 totalWheelForce = springForce + damperForce;

        // Clamp compression to physical limits
        if (wheel.compression > MAX_COMPRESSION) {
            wheel.compression = MAX_COMPRESSION;
            // Hard stop: zero out velocity and add large restoring impulse
            wheel.compressionVel = -wheel.compressionVel * 0.1f;
            totalWheelForce += m_springK * 2.0f;
        }
        if (wheel.compression < -MIN_EXTENSION) {
            // Over-extension — apply extra restoring force
            totalWheelForce += m_springK * MIN_EXTENSION * 2.0f;
            wheel.compression = -MIN_EXTENSION;
            wheel.compressionVel *= 0.5f;
        }

        // Clamp total force to reasonable bounds
        if (totalWheelForce > FORCE_CLAMP_MAX) {
            totalWheelForce = FORCE_CLAMP_MAX;
        }
        if (totalWheelForce < FORCE_CLAMP_MIN) {
            totalWheelForce = FORCE_CLAMP_MIN;
        }

        // Check if compression is above ground detection threshold
        // A wheel is only truly "grounded" if the spring is meaningfully compressed
        bool meaningfulContact = (wheel.compression > GROUND_DETECT_THRESH) ||
                                 (wheel.compressionVel < -0.5f);

        // Apply force at the wheel contact point
        wheel.appliedForce = totalWheelForce;
        m_wheelForce[i] = totalWheelForce;
        m_wheelGrounded[i] = meaningfulContact;

        // Accumulate vertical force
        totalForce.y += totalWheelForce;

        // Update compression velocity (for damper calculation next frame)
        // This is a simplified model — real MKWii updates from wheel position delta
        f32 decayFactor = 0.95f - (kartVertVel * 0.001f);
        if (decayFactor < 0.80f) decayFactor = 0.80f;
        if (decayFactor > 0.98f) decayFactor = 0.98f;
        wheel.compressionVel *= decayFactor;
    }

    // If only some wheels are grounded, distribute load bias toward
    // the rear wheels for stability (rear-engine feel in MKW)
    if (groundedCount > 0 && groundedCount < WHEEL_COUNT) {
        f32 rearBias = 1.1f;  // 10% more force to rear wheels
        f32 frontBias = 0.9f;
        m_wheelForce[WHEEL_REAR_LEFT]  *= rearBias;
        m_wheelForce[WHEEL_REAR_RIGHT] *= rearBias;
        m_wheelForce[WHEEL_FRONT_LEFT]  *= frontBias;
        m_wheelForce[WHEEL_FRONT_RIGHT] *= frontBias;
        // Recalculate total force after bias adjustment
        totalForce.y = 0.0f;
        for (u32 i = 0; i < WHEEL_COUNT; i++) {
            totalForce.y += m_wheelForce[i];
            m_wheels[i].appliedForce = m_wheelForce[i];
        }
    }

    // Anti-roll bar simulation: equalize left-right compression to reduce
    // body roll during cornering. This mimics the real game's anti-roll
    // behavior which prevents the kart from leaning excessively.
    // For each axle (front/rear), compute compression difference and
    // apply a cross-coupling force.
    f32 antiRollStiffness = m_springK * 0.15f; // 15% of spring constant
    // Rear axle
    {
        f32 diff = m_wheels[WHEEL_REAR_LEFT].compression -
                   m_wheels[WHEEL_REAR_RIGHT].compression;
        f32 antiRollForce = diff * antiRollStiffness;
        if (m_wheelGrounded[WHEEL_REAR_LEFT])
            m_wheelForce[WHEEL_REAR_LEFT] -= antiRollForce;
        if (m_wheelGrounded[WHEEL_REAR_RIGHT])
            m_wheelForce[WHEEL_REAR_RIGHT] += antiRollForce;
    }
    // Front axle
    {
        f32 diff = m_wheels[WHEEL_FRONT_LEFT].compression -
                   m_wheels[WHEEL_FRONT_RIGHT].compression;
        f32 antiRollForce = diff * antiRollStiffness;
        if (m_wheelGrounded[WHEEL_FRONT_LEFT])
            m_wheelForce[WHEEL_FRONT_LEFT] -= antiRollForce;
        if (m_wheelGrounded[WHEEL_FRONT_RIGHT])
            m_wheelForce[WHEEL_FRONT_RIGHT] += antiRollForce;
    }

    // Apply accumulated suspension forces to kart dynamics
    dyn->addForce(totalForce);
}

void KartSuspension::applyWheelForce(s32 wheelIdx, f32 force) {
    if (wheelIdx < 0 || (u32)wheelIdx >= WHEEL_COUNT) return;
    // Clamp the force to physical limits
    if (force > FORCE_CLAMP_MAX) force = FORCE_CLAMP_MAX;
    if (force < FORCE_CLAMP_MIN) force = FORCE_CLAMP_MIN;
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

f32 KartSuspension::computeWheelDamping(s32 wheelIdx) const {
    if (wheelIdx < 0 || (u32)wheelIdx >= WHEEL_COUNT) return 0.0f;
    // Critical damping: c_crit = 2 * sqrt(k)
    f32 cCrit = 2.0f * sqrtf(m_springK);
    // Apply velocity-dependent scaling: higher compression velocity increases damping
    f32 velFactor = 1.0f;
    f32 absVel = (m_wheels[wheelIdx].compressionVel > 0.0f)
                 ? m_wheels[wheelIdx].compressionVel
                 : -m_wheels[wheelIdx].compressionVel;
    if (absVel > 1.0f) {
        velFactor = 1.0f + (absVel - 1.0f) * VEL_DAMP_SCALE;
        if (velFactor > 1.0f + VEL_DAMP_CAP) velFactor = 1.0f + VEL_DAMP_CAP;
    }
    return m_dampingRatio * cCrit * velFactor;
}

void KartSuspension::getWheelState(s32 idx, f32* outComp, f32* outVel,
                                    f32* outForce, bool* outGround) const {
    if (idx < 0 || (u32)idx >= WHEEL_COUNT) {
        if (outComp) *outComp = 0.0f;
        if (outVel) *outVel = 0.0f;
        if (outForce) *outForce = 0.0f;
        if (outGround) *outGround = false;
        return;
    }
    if (outComp) *outComp = m_wheels[idx].compression;
    if (outVel) *outVel = m_wheels[idx].compressionVel;
    if (outForce) *outForce = m_wheels[idx].appliedForce;
    if (outGround) *outGround = m_wheelGrounded[idx];
}

void KartSuspension::resetWheel(s32 idx) {
    if (idx < 0 || (u32)idx >= WHEEL_COUNT) return;
    m_wheels[idx].contactPoint.setAll(0);
    m_wheels[idx].compression = 0.0f;
    m_wheels[idx].compressionVel = 0.0f;
    m_wheels[idx].appliedForce = 0.0f;
    m_wheels[idx].grounded = false;
    m_wheelGrounded[idx] = false;
    m_wheelForce[idx] = 0.0f;
}

void KartSuspension::setSpringParams(f32 k, f32 zeta, f32 len) {
    if (k > 0.0f) m_springK = k;
    if (zeta >= MIN_DAMPING_RATIO && zeta <= MAX_DAMPING_RATIO) {
        m_dampingRatio = zeta;
    } else if (zeta < MIN_DAMPING_RATIO) {
        m_dampingRatio = MIN_DAMPING_RATIO;
    } else {
        m_dampingRatio = MAX_DAMPING_RATIO;
    }
    if (len > 0.0f) m_restLength = len;
}

u32 KartSuspension::getGroundContactMask() const {
    u32 mask = 0;
    for (u32 i = 0; i < WHEEL_COUNT; i++) {
        if (m_wheelGrounded[i]) {
            mask |= (1u << i);
        }
    }
    return mask;
}

} // namespace Kart