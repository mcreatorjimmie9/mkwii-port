#pragma once
// decomp.h — Decompilation support macros and utilities for MKWii PC port
// Provides address-to-symbol helpers and decompilation annotations

#include "rk_types.h"

// ============================================================================
// Address annotation macros
// ============================================================================

#define DECOMP_ADDR(addr)  /* Original address: 0x%08X */ static_cast<void>(0)
#define DECOMP_SYM(name, addr) /* name @ 0x%08X */
#define DECOMP_VTABLE(addr) /* vtable @ 0x%08X */
#define DECOMP_DATA(addr)  /* data @ 0x%08X */

// ============================================================================
// Unresolved / placeholder markers
// ============================================================================

#define DECOMP_UNIMPLEMENTED() /* TODO: decompilation incomplete */
#define DECOMP_GUESSED_SIG()  /* WARNING: signature may be inaccurate */
#define DECOMP_REVIEW()       /* REVIEW: possible decompilation error */
#define DECOMP_INLINE_ASM(comment) /* ASM: comment */

// ============================================================================
// Type utilities
// ============================================================================

#define BITFIELD(val, start, len) (((val) >> (start)) & ((1U << (len)) - 1))
#define SIGN_EXTEND(val, bits) \
    (((s32)(val) << (32 - (bits))) >> (32 - (bits)))

// ============================================================================
// Common decompilation patterns
// ============================================================================

typedef void (*DestructorFunc)(void*);
typedef s32  (*CompareFunc)(const void*, const void*);
typedef void (*CallbackFunc)(void*);
typedef void* HeapHandle;

// ============================================================================
// FR (Frame Rate) / Timing constants
// NOTE: DEG_TO_RAD/RAD_TO_DEG are defined as variables in EGG/math.h
// to avoid macro conflicts. Use those instead of macros here.
// ============================================================================
#ifndef FRAC_ONE
#define FRAC_ONE     (1 << 16)
#endif
#ifndef FRAC_HALF
#define FRAC_HALF    (1 << 15)
#endif
