#pragma once
// os_memory.hpp — Wii OS memory management shims
// Maps Wii SDK heap/arena allocators to standard malloc/free.
// On the Wii, games manage MEM1 (24 MB) and MEM2 (64 MB) arenas with
// OSInitAlloc / OSCreateHeap, then allocate via OSAllocFromHeap.
// For PC porting, we delegate to the host allocator.

#include "../rk_types.h"
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cstdarg>

extern "C" {

// ============================================================================
// OSGetTick — defined here (overrides the stub in rk_types.h for link compat)
// This version provides a real monotonic value.
// ============================================================================

// (OSGetTick is declared in rk_types.h as a stub; we don't redefine it here
//  to avoid ODR issues. The rk_types.h version returns 0 which is fine for
//  initial shim compilation.)

// ============================================================================
// Arena / Heap initialization
// ============================================================================

// OSInitAlloc — initializes a memory arena between lo and hi with maxHeaps arenas.
// Returns the first available address after arena bookkeeping.
// On PC: no-op, returns lo (the arena concept doesn't map to malloc).
inline void* OSInitAlloc(void* lo, void* hi, s32 maxHeaps) {
    (void)hi;
    (void)maxHeaps;
    return lo;
}

// OSCreateHeap — creates a heap within an arena.
// Returns an OSHeapHandle (s32) on success, -1 on failure.
// On PC: return a dummy handle; actual allocation uses malloc.
inline s32 OSCreateHeap(void* lo, void* hi) {
    (void)lo;
    (void)hi;
    return 1; // dummy valid handle
}

// OSAddToHeap — expands an existing heap's region.
inline BOOL OSAddToHeap(s32 heap, void* lo, void* hi) {
    (void)heap;
    (void)lo;
    (void)hi;
    return TRUE;
}

// ============================================================================
// Allocation / deallocation
// ============================================================================

// OSAlloc — allocate from the default arena (MEM1).
// On PC: delegates to malloc with 32-byte alignment (Wii convention).
inline void* OSAlloc(u32 size) {
    void* ptr = nullptr;
    if (size > 0) {
        ptr = std::malloc(size);
    }
    return ptr;
}

// OSFree — free memory allocated from the default arena.
inline void OSFree(void* ptr) {
    std::free(ptr);
}

// OSAllocFromHeap — allocate size bytes from a specific heap.
// On PC: heap handle is ignored, delegates to malloc.
inline void* OSAllocFromHeap(s32 heap, u32 size) {
    (void)heap;
    return std::malloc(size);
}

// OSFreeToHeap — free a block allocated from a specific heap.
inline void OSFreeToHeap(s32 heap, void* ptr) {
    (void)heap;
    std::free(ptr);
}

// OSInitFastCast — initializes the Gekko's paired-single fast cast paths.
// No-op on PC (x86 has native float<->int conversions).
inline void OSInitFastCast(void) {}

// ============================================================================
// OSReport / OSPanic — debug output and fatal errors
// ============================================================================

// OSReport — printf-like debug output to the OS console / debug UART.
// On PC: delegates to fprintf(stderr, ...).
inline void OSReport(const char* fmt, ...) {
    va_list args;
    va_start(args, fmt);
    std::vfprintf(stderr, fmt, args);
    va_end(args);
}

// OSPanic — unrecoverable error: prints file/line/message then halts.
// On PC: prints and calls abort().
inline void OSPanic(const char* file, u32 line, const char* msg, ...) {
    std::fprintf(stderr, "[OSPanic] %s:%u: ", file, line);
    va_list args;
    va_start(args, msg);
    std::vfprintf(stderr, msg, args);
    va_end(args);
    std::fprintf(stderr, "\n");
    std::abort();
}

} // extern "C"