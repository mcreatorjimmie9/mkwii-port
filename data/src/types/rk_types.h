#pragma once
// Basic Wii/GameCube type definitions for MKWii PC port
// These replace the Nintendo SDK's built-in types

#include <cstdint>
#include <cstddef>

// Basic integer types (matching PPC/SDK conventions)
typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef int8_t   s8;
typedef int16_t  s16;
typedef int32_t  s32;
typedef int64_t  s64;

// Floating point
typedef float  f32;
typedef double f64;

// Boolean
typedef u8 BOOL;
#define TRUE  1
#define FALSE 0

// NULL
#ifndef NULL
#define NULL nullptr
#endif

// Size type
typedef u32 size_t_wii;

// Common constants
#define BIT(n) (1 << (n))
enum { PAD_BUTTON_A = 0x0100, PAD_BUTTON_B = 0x0200, PAD_BUTTON_X = 0x0400,
       PAD_BUTTON_Y = 0x0800, PAD_BUTTON_START = 0x1000, PAD_BUTTON_L = 0x0020,
       PAD_BUTTON_R = 0x0010, PAD_BUTTON_Z = 0x2000, PAD_BUTTON_UP = 0x0001,
       PAD_BUTTON_DOWN = 0x0002, PAD_BUTTON_LEFT = 0x0004, PAD_BUTTON_RIGHT = 0x0008 };

// Memory alignment (Wii requires 32-byte alignment for many buffers)
#define ALIGN32(val) (((val) + 31) & ~31)
#define ALIGN16(val) (((val) + 15) & ~15)
