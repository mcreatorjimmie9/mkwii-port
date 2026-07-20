#pragma once
// ============================================================================
// MathUtil_Classes.hpp — Additional Math/Utility classes from Runtime range
// Address range: 0x80460000 - 0x80480000
//
// NOTE: The 0x80460000-0x80480000 range is labeled "MathUtil" in the subsystem
// categorization but analysis reveals it is NOT pure math. It primarily contains
// OS-level, DVD, and audio/video thread management functions. The core EGG math
// types (Vector3f, Matrix34f, Quaternion) are already defined in EGG/math.h.
//
// This file captures ADDITIONAL utility structures discovered in this range that
// have math-adjacent functionality (interpolation, bounds checking, etc.)
//
// Categorization: GENESIS Phase 5 (Runtime Module — Task 3a)
// ============================================================================

#include "rk_types.h"
#include <cstring>

namespace EGG {

// ---------------------------------------------------------------------------
// InterpState — Generic interpolation / animation state machine
// Found across the MathUtil and Gfx ranges; used by DVD, audio, and video
// subsystems for frame-based transitions.
//
// Key addresses:
//   0x8046064c — clamp/update timer from global frame delta
//   0x804606d4 — transition to a new state (sets up state machine)
//   0x80470040 — tick countdown, auto-reset when done
//   0x80470108 — complex state machine with DVD/Audio sync
//   0x80470614 — force-stop with event dispatch
//   0x80470670 — frame advance with loop logic
//   0x80471008 — full reset of all sub-states
// ---------------------------------------------------------------------------
class InterpState {
public:
    // Flag bits for m_flags
    enum Flag {
        FLAG_NONE    = 0,
        FLAG_ACTIVE  = BIT(0),   // 0x01 — currently animating
        FLAG_LOOP    = BIT(1),   // 0x02 — loop when complete
        FLAG_PAUSE   = BIT(4),   // 0x10 — paused
        FLAG_DONE    = BIT(8),   // 0x100 — completed
        FLAG_DIRTY   = BIT(16),  // 0x10000 — needs update
        FLAG_AUTO    = BIT(24),  // 0x1000000 — auto-reset
        FLAG_EXPAND  = BIT(25),  // 0x2000000 — expanded state
        FLAG_REVERSE = BIT(29),  // 0x20000000 — reverse direction
    };

    u32 m_vtable;       // 0x00
    u32 m_innerPtr;     // 0x04 — pointer to inner state block
    u32 m_flags;        // 0x08 — state machine flags (see Flag enum)
    f32 m_timer;        // 0x0C — accumulated time / progress
    f32 m_maxTimer;     // 0x10 — duration
    s16 m_countdown;    // 0x14 — frame countdown
    u8  m_subState;     // 0x16 — sub-state index
    u8  m_pad17;        // 0x17
    u16 m_state;        // 0x18 — current major state
    u8  m_pad1A;        // 0x1A
    u8  m_pad1B;        // 0x1B
    s16 m_repeatCount;  // 0x1C — repeat/loop counter
    u16 m_pad1E;        // 0x1E
    s32 m_field20;      // 0x20
    u32 m_field24;      // 0x24
    u32 m_field28;      // 0x28
    u32 m_field2C;      // 0x2C
    // ... additional fields up to 0x150+

    InterpState() { std::memset(this, 0, sizeof(*this)); }

    // @addr 0x80470040 — Tick the countdown; returns 1 when finished
    u32 tickCountdown();

    // @addr 0x80470614 — Force stop the current operation
    void forceStop();

    // @addr 0x80470670 — Advance one frame with loop support
    void advanceFrame();

    // @addr 0x80471008 — Full reset of all sub-states
    void resetAll();

    bool isActive()  const { return (m_flags & FLAG_ACTIVE) != 0; }
    bool isDone()    const { return (m_flags & FLAG_DONE) != 0; }
    bool isPaused()  const { return (m_flags & FLAG_PAUSE) != 0; }
};

// ---------------------------------------------------------------------------
// BoundsCheck — Simple guard utility found in the MathUtil range
// Many functions in 0x80460844-0x80464490 follow the pattern:
//   if (param_1 != 0 && 0 < param_2) { panic(); }
//   return param_1;
// This is the SDK's OS report / assertion mechanism.
// ---------------------------------------------------------------------------

// @addr 0x80460844, 0x80463240, 0x80464338, 0x80464490
// Assert that (ptr != null && size >= 0), else fatal error.
// Returns ptr if valid.
void* assertValidRange(void* ptr, s32 size);

// ---------------------------------------------------------------------------
// Vector3 component extraction helpers
// Found at 0x80462770 and 0x804626b4 — these extract 3-float values
// from structures at offsets 0x10/0x14/0x18.
// ---------------------------------------------------------------------------

// @addr 0x80462770 — Extract a Vec3 from a structure at offsets +0x10,+0x14,+0x18
void extractVec3(f32* dst, const void* src);

// ---------------------------------------------------------------------------
// MathUtil free functions (organized by category)
//
// These are utility functions discovered in the range that don't clearly
// belong to a class but provide math-adjacent services.
// ---------------------------------------------------------------------------

namespace MathUtil {

// --- Interpolation ---

// @addr 0x80462644 — Get interpolated position for a node
// Sets dst = interpolated position based on node index and time
void getNodePosition(f32* dst, void* context, u32 nodeIndex);

// @addr 0x80462918 — Add interpolated position delta to accumulator
void addNodePositionDelta(void* context, u32 nodeIndex);

// --- Video/Audio frame utilities ---
// These are frame-rate and timing utilities used by the video thread.

// @addr 0x8046064c — Clamp timer based on global frame delta and state
void clampTimer(void* context);

// @addr 0x804606d4 — Transition to new state with optional loop
void transitionState(void* context, s32 param1, s32 loop);

// @addr 0x80460fe8 — Process frame with sync check
void processFrame(void* context, u32* syncFlags, s32 param);

} // namespace MathUtil

} // namespace EGG