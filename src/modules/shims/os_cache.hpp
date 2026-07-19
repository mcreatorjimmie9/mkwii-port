#pragma once
// ============================================================================
// os_cache.hpp — Wii OS Cache Management Bridge Shims
// PPC cache operations mapped to x86 equivalents
// ============================================================================

#include <cstdint>
#include <cstring>
#include <atomic>
#include "rk_types.h"

// DCFlushRange — Flush data cache to memory
// On Wii: executes dcbf instruction for each cache line
// On x86: compiler memory barrier (write-combining already coherent)
inline void DCFlushRange(const void* addr, u32 size) {
    std::atomic_thread_fence(std::memory_order_release);
    (void)addr; (void)size;
}

// DCInvalidateRange — Invalidate data cache lines
// On Wii: executes dcbi instruction for each cache line
// On x86: no-op (cache coherent), but compiler barrier for safety
inline void DCInvalidateRange(const void* addr, u32 size) {
    std::atomic_thread_fence(std::memory_order_acquire);
    (void)addr; (void)size;
}

// ICInvalidateRange — Invalidate instruction cache lines
// On Wii: executes icbi instruction
// On x86: not needed (unified cache), but clear cache for JIT scenarios
inline void ICInvalidateRange(const void* addr, u32 size) {
    __builtin___clear_cache(reinterpret_cast<char*>(const_cast<void*>(addr)),
                           reinterpret_cast<char*>(const_cast<void*>(addr)) + size);
}

// LCEnable — Enable locked cache (MEM2 region on Wii)
// On x86: no-op (no locked cache concept)
inline void LCEnable(void) {}

// LCDisable — Disable locked cache
// On x86: no-op
inline void LCDisable(void) {}