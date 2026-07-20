#pragma once
// ============================================================================
// GXDisplayList — GX Display List Compilation and Execution
// ============================================================================
// Manages pre-compiled GX display lists for rendering optimization.
// Display lists are sequences of GX commands stored in a buffer that can
// be replayed efficiently. Mario Kart Wii uses these extensively for
// course geometry, kart models, and UI elements.
//
// The display list system operates on a command FIFO. Commands are written
// sequentially into a buffer via WGPIPE macros. The buffer is then executed
// by calling GXCallDisplayList, which feeds the pre-recorded commands
// back into the GX hardware pipeline.
//
// Address range: 0x80520000 - 0x8052FFFF
// ============================================================================

#include <types.h>
#include <gx.hpp>

// ============================================================================
// GXDisplayList — A compiled display list buffer
// ============================================================================
// Stores a sequence of GX commands for deferred execution.
// The buffer is written during compilation and read during execution.
//
// Memory layout:
//   0x00: pointer to the command buffer (32-byte aligned)
//   0x04: current write pointer (advances as commands are added)
//   0x08: total buffer size in bytes
//   0x0C: number of commands recorded (for statistics)
//   0x10: flags (bit 0 = isRecording, bit 1 = isLooping)
//   0x14: FIFO object backup (for nested display lists)
//   0x18: padding / reserved
// ============================================================================
struct GXDisplayList {
    void* buffer;           // 0x00: aligned command buffer
    u8*  writePtr;          // 0x04: current write position
    u32  bufferSize;        // 0x08: total buffer capacity
    u32  commandCount;      // 0x0C: number of commands
    u16  flags;             // 0x10: state flags
    u16  _12;               // 0x12: padding
    void* fifoBackup;       // 0x14: saved FIFO for nesting
    u32  _18;               // 0x18: reserved
};

// ============================================================================
// DLCompiler — Display list compiler state machine
// ============================================================================
// Manages the recording state. When recording, GX commands are buffered
// instead of being sent to hardware. Tracks nesting depth for
// display lists that call other display lists.
//
// Size: 0x20 bytes
// ============================================================================
struct DLCompiler {
    GXDisplayList* current; // 0x00: currently recording list
    u32  nestingDepth;      // 0x04: nesting counter
    u32  totalBytes;        // 0x08: total bytes written this frame
    u32  peakUsage;         // 0x0C: peak buffer usage
    f32  _10;               // 0x10: unknown
    f32  _14;               // 0x14: unknown
    u32  _18;               // 0x18: flags
    u32  _1C;               // 0x1C: padding
};

// ============================================================================
// DLCache — Display list cache entry for reused geometry
// ============================================================================
// Caches compiled display lists keyed by resource ID to avoid
// re-compiling static geometry every frame.
//
// Size: 0x1C bytes
// ============================================================================
struct DLCache {
    u32  resourceId;        // 0x00: resource hash/ID
    void* dlBuffer;         // 0x04: cached display list buffer
    u32  dlSize;            // 0x08: size of the display list
    u16  refCount;          // 0x0C: reference count
    u16  _0E;               // 0x0E: padding
    u32  lastFrameUsed;     // 0x10: frame number of last use
    DLCache* next;          // 0x14: next in LRU chain
    DLCache* prev;          // 0x18: prev in LRU chain
};

// ============================================================================
// Function declarations — Display List Management
// ============================================================================

// 0x80520000 — Initialize a display list with the given buffer
// @addr 0x80520000
void GXDL_Init(GXDisplayList* dl, void* buffer, u32 size);

// 0x80520040 — Begin recording commands into a display list
// @addr 0x80520040
void GXDL_Begin(GXDisplayList* dl);

// 0x805200C0 — End recording and finalize the display list
// @addr 0x805200C0
void GXDL_End(GXDisplayList* dl);

// 0x80520140 — Call (execute) a compiled display list
// @addr 0x80520140
void GXDL_Call(const GXDisplayList* dl);

// 0x805201A0 — Reset the display list write pointer for re-recording
// @addr 0x805201A0
void GXDL_Reset(GXDisplayList* dl);

// 0x805201E0 — Write a raw u8 command to the display list
// @addr 0x805201E0
void GXDL_WriteU8(GXDisplayList* dl, u8 value);

// 0x80520220 — Write a raw u16 command to the display list
// @addr 0x80520220
void GXDL_WriteU16(GXDisplayList* dl, u16 value);

// 0x80520260 — Write a raw u32 command to the display list
// @addr 0x80520260
void GXDL_WriteU32(GXDisplayList* dl, u32 value);

// 0x805202C0 — Write a float command to the display list
// @addr 0x805202C0
void GXDL_WriteF32(GXDisplayList* dl, f32 value);

// 0x80520300 — Emit a triangle strip primitive into the display list
// @addr 0x80520300
void GXDL_EmitTriangleStrip(GXDisplayList* dl, void* vertices, u32 vertCount, u32 vertStride);

// 0x80520400 — Emit a quad primitive into the display list
// @addr 0x80520400
void GXDL_EmitQuads(GXDisplayList* dl, void* vertices, u32 vertCount, u32 vertStride);

// 0x80520540 — Get remaining capacity of the display list buffer
// @addr 0x80520540
u32  GXDL_GetRemaining(const GXDisplayList* dl);

// 0x80520570 — Initialize the display list compiler system
// @addr 0x80520570
void DLCompiler_Init(DLCompiler* compiler);

// 0x805205C0 — Shutdown the display list compiler and free resources
// @addr 0x805205C0
void DLCompiler_Shutdown(DLCompiler* compiler);

// 0x80520610 — Allocate a cached display list for a resource
// @addr 0x80520610
DLCache* DLCache_Alloc(u32 resourceId, u32 size);

// 0x805206A0 — Find a cached display list by resource ID
// @addr 0x805206A0
DLCache* DLCache_Find(u32 resourceId);

// 0x80520700 — Evict the least recently used display list from cache
// @addr 0x80520700
void DLCache_EvictLRU(void);