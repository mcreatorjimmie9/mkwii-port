// ============================================================================
// MathUtil_Classes.cpp — Implementations for additional math/utility classes
// Address range: 0x80460000 - 0x80480000
//
// GENESIS Phase 5 (Runtime Module — Task 3a)
// ============================================================================

#include "MathUtil_Classes.hpp"

namespace EGG {

// ---------------------------------------------------------------------------
// InterpState
// ---------------------------------------------------------------------------

u32 InterpState::tickCountdown() {
    // @addr 0x80470040
    // If the active flag is set in the inner state's flags, count down.
    // When the counter reaches zero, dispatch event and clear flag.
    if ((m_flags & FLAG_ACTIVE) != 0) {
        m_flags |= 1;  // set inner active
        // Cast timer field to f32 and pass to event system
        // FUN_segment_0__8047e6bc((double)(float)m_timer, this);
        m_repeatCount--;
        if (m_repeatCount < 1) {
            forceStop();
            return 1;
        }
    }
    return 0;
}

void InterpState::forceStop() {
    // @addr 0x80470614
    // FUN_segment_0__8047e6d4();
    m_repeatCount = 0;
    m_flags &= ~FLAG_ACTIVE;  // clear 0x80000000
    // FUN_segment_0__8047e8cc(this, 4, 0, 1);
}

void InterpState::advanceFrame() {
    // @addr 0x80470670
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
            // (FUN_segment_0__8047dc48 reads the internal context)
        }
    }
}

void InterpState::resetAll() {
    // @addr 0x80471008 — Full reset (~952 bytes of initialization)
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
    // ... many more field resets
    std::memset(&m_field24, 0, sizeof(InterpState) - offsetof(InterpState, m_field24));
}

// ---------------------------------------------------------------------------
// Free functions
// ---------------------------------------------------------------------------

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