#pragma once
// Mario Kart Wii PC Port - Type Definitions
// Basic Wii/PPC type aliases for PC platform

#include <stdint.h>
#include <stddef.h>

// Basic integer types (matching PPC/SDK conventions)
typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef int8_t   s8;
typedef int16_t  s16;
typedef int32_t  s32;
typedef int64_t  s64;

typedef unsigned int uint;
typedef long long llong;

// Floating point
typedef float  f32;
typedef double f64;

// Boolean
typedef u8 BOOL;
#define TRUE  1
#define FALSE 0

// NULL
// NULL is provided by stddef.h

// Size type - use stddef.h's size_t (may differ from Wii u32)

// Memory alignment (Wii requires 32-byte alignment for many buffers)
#define ALIGN32(val) (((val) + 31) & ~31)
#define ALIGN16(val) (((val) + 15) & ~15)

// Common constants
#define BIT(n) (1 << (n))

// Pad buttons
enum {
    PAD_BUTTON_A      = 0x0100,
    PAD_BUTTON_B      = 0x0200,
    PAD_BUTTON_X      = 0x0400,
    PAD_BUTTON_Y      = 0x0800,
    PAD_BUTTON_START  = 0x1000,
    PAD_BUTTON_L      = 0x0020,
    PAD_BUTTON_R      = 0x0010,
    PAD_BUTTON_Z      = 0x2000,
    PAD_BUTTON_UP     = 0x0001,
    PAD_BUTTON_DOWN   = 0x0002,
    PAD_BUTTON_LEFT   = 0x0004,
    PAD_BUTTON_RIGHT  = 0x0008,
};

// Undefined types for decompiled code compatibility
typedef u32 undefined;
typedef u32 undefined4;
typedef u8  undefined1;
typedef s32 long32;
typedef u32 uint;
typedef u16 ushort;
typedef u8 byte;
typedef u16 undefined2;
typedef u64 undefined8;

// Ghidra compatibility
// Ghidra compatibility - code is a generic function pointer (varargs for compatibility)
typedef void (*code)(...);

// Memory base (for Ram references in decompiled code)
#define RAM_BASE 0x80000000U
