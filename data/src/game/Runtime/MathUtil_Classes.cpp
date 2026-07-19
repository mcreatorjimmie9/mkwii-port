// ============================================================================
// MathUtil_Classes.cpp — Implementations for additional math/utility classes
// Address range: 0x80460000 - 0x80480000
//
// GENESIS Phase 5 (Runtime Module — Task 3a)
//
// Real EGG math implementations sourced from decompiled lib_egg/math:
//   - eggVector.cpp: Vector2f/Vector3f normalise, normalise2
//   - eggQuat.cpp:   Quatf set, setRPY, slerpTo
// ============================================================================

#include "MathUtil_Classes.hpp"
#include "../../EGG/math.h"
#include <cfloat>
#include <cmath>

// ---------------------------------------------------------------------------
// EGG::Mathf — PC port shim for Wii SDK math helpers
// The original SDK used hardware-backed functions (frsqrte, etc.);
// on PC we delegate to <cmath>.
// ---------------------------------------------------------------------------
namespace EGG {
namespace Mathf {

inline f32 cos(f32 x) { return std::cos(x); }
inline f32 sin(f32 x) { return std::sin(x); }
inline f32 sqrt(f32 x) { return std::sqrt(x); }
inline f32 acos(f32 x) { return std::acos(x); }
inline f32 abs(f32 x) { return std::fabs(x); }

// Fast reciprocal square root — hardware instruction on Wii (frsqrte)
inline f32 frsqrt(f32 x) { return 1.0f / std::sqrt(x); }

} // namespace Mathf
} // namespace EGG

// Keep FLT_EPSILON matching the decompiled value (standard IEEE 754)
#ifndef FLT_EPSILON
#define FLT_EPSILON 1.192092896e-07F
#endif

namespace EGG {

using EGG::Mathf::cos;
using EGG::Mathf::sin;
using EGG::Mathf::sqrt;

// ===========================================================================
// Vector2f implementations (from decompiled eggVector.cpp)
// ===========================================================================

// @addr Vector2f::normalise — normalise in-place, returns original length
template<>
f32 Vector2<f32>::normalise() {
    f32 out = 0.0f;
    f32 lenSq = x * x + y * y;

    if (lenSq > FLT_EPSILON) {
        out = Mathf::sqrt(lenSq);
        f32 inv = 1.0f / out;
        x *= inv;
        y *= inv;
    }

    return out;
}

// @addr Vector2f::normalise2 — normalise in-place using fast rsqrt, no return
template<>
void Vector2<f32>::normalise2() {
    f32 lenSq = x * x + y * y;

    if (lenSq > FLT_EPSILON) {
        f32 inv = Mathf::frsqrt(lenSq);
        x *= inv;
        y *= inv;
    }
}

// ===========================================================================
// Vector3f implementations (from decompiled eggVector.cpp)
// ===========================================================================

// @addr Vector3f::normalise2 — normalise in-place using fast rsqrt, no return
// Note: Vector3f::normalise() is already defined inline in EGG/math.h
template<>
void Vector3<f32>::normalise2() {
    f32 lenSq = x * x + y * y + z * z;

    if (lenSq > FLT_EPSILON) {
        f32 inv = Mathf::frsqrt(lenSq);
        x *= inv;
        y *= inv;
        z *= inv;
    }
}

// ===========================================================================
// Quatf implementations (from decompiled eggQuat.cpp)
// ===========================================================================

// @addr Quatf::set — set quaternion components (w, x, y, z)
template<>
void Quat<f32>::set(f32 a, f32 b, f32 c, f32 d) {
    w = a;
    x = b;
    y = c;
    z = d;
}

// @addr Quatf::setRPY(const Vector3f&) — set from roll-pitch-yaw euler angles
// Uses the ZYX intrinsic rotation order (standard aerospace convention):
//   q = qZ * qY * qX  where half-angles are used
template<>
void Quat<f32>::setRPY(const Vector3f& euler) {
    f32 cosZ = EGG::Mathf::cos(0.5f * euler.z);
    f32 cosY = EGG::Mathf::cos(0.5f * euler.y);
    f32 cosX = EGG::Mathf::cos(0.5f * euler.x);

    f32 sinZ = EGG::Mathf::sin(0.5f * euler.z);
    f32 sinY = EGG::Mathf::sin(0.5f * euler.y);
    f32 sinX = EGG::Mathf::sin(0.5f * euler.x);

    f32 cZcY = cosZ * cosY;
    f32 sZsY = sinZ * sinY;
    this->w = cZcY * cosX + sZsY * sinX;
    this->x = cZcY * sinX - sZsY * cosX;
    f32 cZsY = cosZ * sinY;
    f32 sZcY = sinZ * cosY;
    this->y = cZsY * cosX + sZcY * sinX;
    this->z = sZcY * cosX - cZsY * sinX;
}

// @addr Quatf::setRPY(f32, f32, f32) — convenience overload
// Delegates to the Vector3f overload (matches decompiled inlining behavior)
template<>
void Quat<f32>::setRPY(f32 rx, f32 ry, f32 rz) {
    Vector3<f32> vec;
    vec.x = rx;
    vec.y = ry;
    vec.z = rz;
    this->setRPY(vec);
}

// @addr Quatf::slerpTo — spherical linear interpolation
// Computes dst = slerp(*this, q1, t)
template<>
void Quat<f32>::slerpTo(const Quat<f32>& q1, f32 t, Quat<f32>& dst) const {
    f32 dot = x * q1.x + y * q1.y + z * q1.z + w * q1.w;

    // Clamp dot product to valid acos domain
    if (dot > 1.0f) {
        dot = 1.0f;
    } else if (dot < -1.0f) {
        dot = -1.0f;
    }

    // Flip q1 if negative dot to take shorter arc
    bool bDot;
    if (dot < 0.0f) {
        dot = -dot;
        bDot = true;
    } else {
        bDot = false;
    }

    f32 acosVal = Mathf::acos(dot);
    f32 sinVal = Mathf::sin(acosVal);

    f32 s;
    f32 recip;
    if (Mathf::abs(sinVal) < 0.00001f) {
        // Quaternions are nearly identical; fall back to linear interpolation
        s = 1.0f - t;
        recip = t;
    } else {
        f32 invSin = 1.0f / sinVal;
        f32 tmp0 = t * acosVal;
        s = invSin * Mathf::sin(acosVal - tmp0);
        recip = invSin * Mathf::sin(tmp0);
    }

    if (bDot) recip = -recip;
    dst.x = s * this->x + recip * q1.x;
    dst.y = s * this->y + recip * q1.y;
    dst.z = s * this->z + recip * q1.z;
    dst.w = s * this->w + recip * q1.w;
}

// ===========================================================================
// InterpState implementations
// ===========================================================================

u32 InterpState::tickCountdown() {
    // @addr 0x80470040
    // If the active flag is set, decrement repeat counter.
    // When counter reaches zero, force stop and signal completion.
    if ((m_flags & FLAG_ACTIVE) != 0) {
        m_flags |= 1;  // set inner active
        m_repeatCount--;
        if (m_repeatCount < 1) {
            forceStop();
            return 1;
        }
    }
    return 0;
}

void InterpState::forceStop() {
    // @addr 0x80470614 — Force stop the current operation
    m_repeatCount = 0;
    m_flags &= ~FLAG_ACTIVE;
}

void InterpState::advanceFrame() {
    // @addr 0x80470670 — Advance one frame with loop support
    if ((m_flags & FLAG_AUTO) != 0) {
        m_flags |= 1;
        if ((m_flags & FLAG_EXPAND) == 0) {
            m_subState++;
            if (m_subState >= 10) {
                m_subState = 0;
                m_flags &= ~FLAG_AUTO;
            }
        }
        // If not active and counter < 10, do a data swap
        if (((m_flags & 1) == 0) && (m_subState < 10)) {
            // Read from internal data block and rotate values
        }
    }
}

void InterpState::resetAll() {
    // @addr 0x80471008 — Full reset of all sub-states
    m_state = 0;
    m_flags &= ~FLAG_DONE;
    m_flags &= ~FLAG_DIRTY;
    m_subState = 0;
    m_timer = 0.0f;
    m_flags &= ~FLAG_ACTIVE;
    forceStop();
    m_countdown = 0;
    m_subState = 0;
    m_flags &= ~FLAG_AUTO;
    m_repeatCount = 0;
    m_field20 = 0;
    m_timer = 0.0f;
    // Zero remaining fields from m_field24 onward
    std::memset(&m_field24, 0, sizeof(InterpState) - offsetof(InterpState, m_field24));
}

// ===========================================================================
// Free functions
// ===========================================================================

void* assertValidRange(void* ptr, s32 size) {
    // @addr 0x80460844 (and 0x80463240, 0x80464338, 0x80464490, etc.)
    // Pattern: if (ptr != 0 && 0 < size) { OSReport/panic; }
    // This is the SDK assertion macro expanded.
    // In practice these never trigger in valid code paths.
    if (ptr != nullptr && 0 < size) {
        // OS_panic("invalid range");
    }
    return ptr;
}

void extractVec3(f32* dst, const void* src) {
    // @addr 0x80462770
    // Reads 3 floats from src+0x10, src+0x14, src+0x18 into dst
    const u8* s = static_cast<const u8*>(src);
    dst[0] = *reinterpret_cast<const f32*>(s + 0x10);
    dst[1] = *reinterpret_cast<const f32*>(s + 0x14);
    dst[2] = *reinterpret_cast<const f32*>(s + 0x18);
}

namespace MathUtil {

void getNodePosition(f32* dst, void* context, u32 nodeIndex) {
    // @addr 0x80462644 — get interpolated position
    (void)dst; (void)context; (void)nodeIndex;
    // TODO: Requires inner context resolution
}

void addNodePositionDelta(void* context, u32 nodeIndex) {
    // @addr 0x80462918
    (void)context; (void)nodeIndex;
    // TODO: Accumulates interpolated delta into context+0x20..0x28
}

void clampTimer(void* context) {
    // @addr 0x8046064c
    (void)context;
    // TODO: Reads global frame delta, clamps timer
}

void transitionState(void* context, s32 param1, s32 loop) {
    // @addr 0x804606d4
    (void)context; (void)param1; (void)loop;
    // TODO: State machine transition
}

void processFrame(void* context, u32* syncFlags, s32 param) {
    // @addr 0x80460fe8
    (void)context; (void)syncFlags; (void)param;
    // TODO: Frame processing with sync flag check
}

} // namespace MathUtil
} // namespace EGG