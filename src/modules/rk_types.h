#ifndef __RK_TYPES_H_CANONICAL__
#define __RK_TYPES_H_CANONICAL__

// rk_types.h — Canonical Wii SDK type aliases for MKWii PC port
// All type definitions live here to avoid conflicts.

#include <cstdint>
#include <cstddef>

// Basic integer types (matching PPC/SDK conventions — big-endian 32-bit)
typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef int8_t   s8;
typedef int16_t  s16;
typedef int32_t  s32;
typedef int64_t  s64;

// Additional integer convenience types
typedef unsigned int uint;
typedef long long llong;
// ulong is NOT redefined — Linux sys/types.h provides it; use u32 directly instead
// ushort NOT redefined — use u16 directly
// byte NOT redefined — use u8 directly

// Floating point
typedef float  f32;
typedef double f64;

// Boolean (SDK uses u8 as BOOL)
typedef u8 BOOL;
#ifndef TRUE
#define TRUE  1
#endif
#ifndef FALSE
#define FALSE 0
#endif

// NULL (guard for host platform conflicts)
#ifndef NULL
#define NULL nullptr
#endif

// Size type for Wii
typedef u32 size_t_wii;

// Undefined / Ghidra-emit placeholder types
typedef u32 undefined;
typedef u32 undefined4;
typedef u8  undefined1;
typedef u16 undefined2;
typedef u64 undefined8;
typedef s32 long32;

// Ghidra compatibility — code is a generic function pointer
typedef void (*code)(...);

// Memory alignment macros
#ifndef ALIGN32
#define ALIGN32(val) (((val) + 31) & ~31)
#endif
#ifndef ALIGN16
#define ALIGN16(val) (((val) + 15) & ~15)
#endif
#ifndef ALIGN8
#define ALIGN8(val)  (((val) +  7) & ~7)
#endif

// Bit manipulation
#ifndef BIT
#define BIT(n) (1U << (n))
#endif

// Memory base (PPC RAM starts at 0x80000000)
#ifndef RAM_BASE
#define RAM_BASE 0x80000000U
#endif

// Pad button masks
#ifndef __PAD_BUTTON_ENUM_DEFINED__
#define __PAD_BUTTON_ENUM_DEFINED__
enum PadButton {
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
#endif

// Error codes
#ifndef RVLError_None
#define RVLError_None    0
#define RVLError_Memory  (-1)
#endif

// Misc SDK type stubs
typedef void* OSMessage;
typedef u32   OSTick;
typedef s32   OSHeapHandle;

extern "C" inline u32 OSGetTick() { return 0; }

#endif // __RK_TYPES_H_CANONICAL__
