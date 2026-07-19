#pragma once
// ============================================================================
// os_arena.hpp — Wii OS Arena Management Bridge Shims
// MEM1 arena low/high water marks for heap initialization
// ============================================================================

#include <cstdint>

// Static arena pointers — simulate Wii's MEM1 region (24MB)
static void* sArenaLo = nullptr;
static void* sArenaHi = nullptr;

// OSInit — Initialize the OS kernel
// On Wii: initializes OS, sets up default arena, clears BSS
// On PC: no-op (everything already initialized by CRT)
inline void OSInit(void) {
    // Arena setup would be done by application init on PC
}

// OSGetArenaLo — Get low-water mark of MEM1 arena
inline void* OSGetArenaLo(void) { return sArenaLo; }

// OSGetArenaHi — Get high-water mark of MEM1 arena
inline void* OSGetArenaHi(void) { return sArenaHi; }

// OSSetArenaLo — Set low-water mark
inline void OSSetArenaLo(void* ptr) { sArenaLo = ptr; }

// OSSetArenaHi — Set high-water mark
inline void OSSetArenaHi(void* ptr) { sArenaHi = ptr; }