#pragma once
// rk_types.h — Wii SDK / Retro kernel type compatibility shim
// Provides all types referenced by reconstructed MKWii code

#include "types.h"

// Additional SDK types not in types.h
typedef void* HANDLE;
typedef u32 DWORD;
typedef s32 LONG;
typedef u16 WORD;
typedef u8 BYTE;
typedef s32 BOOL_SDK;  // SDK BOOL (may differ from our BOOL)
typedef u32 size;
typedef s32 ssize;

// OS types
typedef void* OSThread;
typedef void* OSMutex;
typedef void* OSAlarm;
typedef void* OSTimer;
typedef void* OSMessageQueue;
typedef void* OSMessage;

// Error codes
typedef s32 OSStatus;
#define OS_STATUS_SUCCESS 0

// Fixed-point types (Wii uses 16.16 and 12.4 formats)
typedef s32 fx16;   // 16.16 fixed point
typedef s32 fx12;   // 12.4 fixed point (common in physics)
#define FX16(val) ((s32)((val) * 65536.0f))
#define FX12(val) ((s32)((val) * 16.0f))
#define FX16_TO_FLOAT(val) ((float)(val) / 65536.0f)
#define FX12_TO_FLOAT(val) ((float)(val) / 16.0f)

// Vec2/Vec3 are defined in EGG/math.h
// Forward declare here to avoid conflict
typedef struct { f32 x, y; } Vec2_t;
typedef struct { f32 x, y, z; } Vec3_t;

// Color types
typedef struct { u8 r, g, b, a; } GXColor;
typedef struct { u16 r, g, b, a; } GXColor16;

// Memory alignment helpers
#define ROUND_UP(val, align) (((val) + (align) - 1) & ~((align) - 1))
