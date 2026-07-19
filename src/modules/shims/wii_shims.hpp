#pragma once
// wii_shims.hpp — Master shim header for the MKWii PC port (BRIDGE layer)
//
// This is the single include point that brings in all Wii SDK compatibility
// shims. Including this header allows decompiled Wii code to compile on PC.
//
// Order matters:
//   1. rk_types.h   — fundamental types (u8..u64, BOOL, etc.)
//   2. os_memory.hpp — OSAlloc/OSFree, OSReport, OSPanic
//   3. os_thread.hpp — OSGetTick, OSDisableInterrupts, OSThread, OSCreateThread
//   4. os_mutex.hpp  — OSMutex, OSMessageQueue, OSInitMutex/OSLockMutex
//   5. gx.hpp        — all GX types, enums, and function stubs
//   6. vi.hpp        — VI types/enums + SC functions (depends on GXRenderModeObj)
//   7. dvd.hpp       — DVD file I/O
//   8. exi.hpp       — EXI bus (memory cards, RTC)
//   9. pad.hpp       — GameCube controller + Wii Remote types/stubs
//   10. audio.hpp    — AX audio SDK
//
// Usage:
//   #include "shims/wii_shims.hpp"   // everything in one include
//
//   Or include individual shims if you want minimal dependencies:
//   #include "shims/os_memory.hpp"
//   #include "shims/os_thread.hpp"

// Ensure rk_types.h is included first (provides u8, u16, u32, s8..s64, f32, f64, BOOL)
#include "rk_types.h"

// OS subsystem shims
#include "os_memory.hpp"
#include "os_thread.hpp"
#include "os_mutex.hpp"

// Graphics shims (GX types needed by VI)
#include "gx.hpp"

// Video Interface + System Config (uses GXRenderModeObj from gx.hpp)
#include "vi.hpp"

// I/O and peripheral shims
#include "dvd.hpp"
#include "exi.hpp"
#include "pad.hpp"
#include "audio.hpp"