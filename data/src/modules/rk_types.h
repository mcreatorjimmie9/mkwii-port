#pragma once
#include <cstdint>
#include <cstddef>

typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef int8_t   s8;
typedef int16_t  s16;
typedef int32_t  s32;
typedef int64_t  s64;
typedef float  f32;
typedef double f64;
typedef u8 BOOL;
#define TRUE  1
#define FALSE 0
#ifndef NULL
#define NULL nullptr
#endif
typedef u32 size_t_wii;
#ifndef BIT
#define BIT(n) (1 << (n))
#endif
#define NEVER_INLINE __attribute__((noinline))