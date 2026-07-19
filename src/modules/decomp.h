#pragma once
// decomp.h — Decomposition helpers for reconstructed MKWii code
// Provides macros and utilities commonly used in decompiled output

#include "types.h"
#include "rk_types.h"

// UNUSED parameter macro (common in decompiled code)
#define UNUSED(x) ((void)(x))

// UNRECOVERABLE — marks code that cannot be reached (like OSPanic thunks)
#define UNREACHABLE() __builtin_unreachable()

// FUNCTION_PTR — typed function pointer for vtable entries
#define FUNCTION_PTR(ret, ...) ret (*)( __VA_ARGS__ )

// INLINE_ASM markers for PPC instructions that have no C equivalent
#define INLINE_ASM(description) /* PPC inline asm: description */

// FIXED_POINT markers for values needing float conversion verification
#define FIXED_POINT(desc) /* FIXED_POINT: desc */

// PAL address reference (for documentation)
#define PAL_ADDR(addr) /* PAL address: 0x ## addr */

// Padding/alignment bytes in structures
// Use these when reconstructing structs that have unknown padding
#define PAD_BYTES(n) u8 _pad##n[n]

// Bitfield helpers
#define BITFIELD(type, name, hi, lo) type name : (hi - lo + 1)

// Common decompilation patterns
#define PARAM(n) param##n
#define LOCAL(n) local##n
#define REG(n) reg##n

// Address annotation macro
#define AT_ADDR(addr) /* @addr 0x addr */

// Suppress warnings for decompiled code patterns
#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#pragma GCC diagnostic ignored "-Wunused-function"
#endif

// Common SDK function stubs that decompiled code references
#include <cstring>
