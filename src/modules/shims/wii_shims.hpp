#pragma once
// wii_shims.hpp — Master shim header for the MKWii PC port (BRIDGE layer)
//
// This is the single include point that brings in all Wii SDK compatibility
// shims. Including this header allows decompiled Wii code to compile on PC.
//
// Order matters (dependencies flow downward):
//   1. rk_types.h      — fundamental types (u8..u64, BOOL, OSTime, etc.)
//   2. os_memory.hpp   — OSAlloc/OSFree, OSReport, OSPanic
//   3. os_arena.hpp    — OSInit, OSGetArenaLo/Hi (arena memory boundaries)
//   4. os_thread.hpp   — OSGetTick, OSDisableInterrupts, OSThread, OSCreateThread
//   5. os_mutex.hpp    — OSMutex, OSMessageQueue, OSInitMutex/OSLockMutex
//   6. os_cache.hpp    — DCFlushRange, DCInvalidateRange, ICInvalidateRange
//   7. os_time.hpp     — OSGetTime, OSTime conversion functions
//   8. os_alarm.hpp    — OSCreateAlarm, OSSetAlarm, alarm management
//   9. gx.hpp          — all GX types, enums, and function stubs
//  10. vi.hpp          — VI types/enums + SC functions (depends on GXRenderModeObj)
//  11. dvd.hpp         — DVD file I/O
//  12. nand.hpp        — NAND storage (save data)
//  13. isfs.hpp        — ISFS file system (Wii internal storage)
//  14. exi.hpp         — EXI bus (memory cards, RTC)
//  15. pad.hpp         — GameCube controller + Wii Remote types/stubs
//  16. audio.hpp       — AX audio SDK
//
// Usage:
//   #include "shims/wii_shims.hpp"   // everything in one include
//
//   Or include individual shims if you want minimal dependencies:
//   #include "shims/os_memory.hpp"
//   #include "shims/os_thread.hpp"

// Ensure rk_types.h is included first (provides u8, u16, u32, s8..s64, f32, f64, BOOL, OSTime)
#include "rk_types.h"

// OS subsystem shims — core
#include "os_memory.hpp"
#include "os_arena.hpp"
#include "os_thread.hpp"
#include "os_mutex.hpp"

// OS subsystem shims — cache and timing
#include "os_cache.hpp"
#include "os_time.hpp"
#include "os_alarm.hpp"

// Graphics shims (GX types needed by VI)
#include "gx.hpp"

// Video Interface + System Config (uses GXRenderModeObj from gx.hpp)
#include "vi.hpp"

// Storage shims
#include "dvd.hpp"
#include "nand.hpp"
#include "isfs.hpp"

// I/O and peripheral shims
#include "exi.hpp"
#include "pad.hpp"
#include "audio.hpp"
