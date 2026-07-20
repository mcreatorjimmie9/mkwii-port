#pragma once
// ============================================================================
// os_time.hpp — Wii OS Time Management Bridge Shims
// Maps Wii's 1/4 bus clock (~40.5ns) to std::chrono
// ============================================================================

#include <cstdint>
#include <chrono>
#include "rk_types.h"

// OSTime — 64-bit time value in units of OS_TIMER_CLOCK (1/4 bus clock)
// On Wii: 1 tick = 1/(OS_TIMER_CLOCK) seconds ≈ 40.5 nanoseconds
// Bus clock = 243MHz (OS_TIMER_CLOCK = OS_BUS_CLOCK / 4 = 60.75MHz)
typedef u64 OSTime;

// Wii constants
#define OS_TIMER_CLOCK    60750000ULL  // OS_BUS_CLOCK / 4
#define OS_BUS_CLOCK      243000000ULL
#define OS_NANOSECONDS_PER_TICK  16ULL  // ~16.4ns per tick

// OSGetTime — Get current time in OSTime units
inline OSTime OSGetTime(void) {
    auto now = std::chrono::high_resolution_clock::now();
    auto ns = std::chrono::duration_cast<std::chrono::nanoseconds>(now.time_since_epoch()).count();
    return static_cast<OSTime>(ns / 16);  // approximate Wii tick conversion
}

// OSMicrosecondsToTicks — Convert microseconds to OSTime ticks
inline OSTime OSMicrosecondsToTicks(u32 us) {
    return static_cast<OSTime>(static_cast<u64>(us) * (OS_TIMER_CLOCK / 1000000ULL));
}

// OSTicksToMicroseconds — Convert OSTime ticks to microseconds
inline u32 OSTicksToMicroseconds(OSTime ticks) {
    return static_cast<u32>(ticks / (OS_TIMER_CLOCK / 1000000ULL));
}

// OSTicksToSeconds — Convert OSTime ticks to seconds
inline u32 OSTicksToSeconds(OSTime ticks) {
    return static_cast<u32>(ticks / OS_TIMER_CLOCK);
}

// OSTimeToNanoseconds — Convert OSTime ticks to nanoseconds
inline u64 OSTimeToNanoseconds(OSTime ticks) {
    return ticks * 1000ULL / (OS_TIMER_CLOCK / 1000000ULL);
}