#include "GXDisplayList.hpp"
#include "RenderUtil.hpp"
#include <common.h>
#include <gx.hpp>
#include <cstring>

// ============================================================================
// Global display list compiler state
// ============================================================================
static DLCompiler sDLCompiler;  // @addr 0x80520800

// Global cache linked list head
static DLCache* sDLCacheHead = nullptr;   // @addr 0x80520820
static DLCache* sDLCacheTail = nullptr;   // @addr 0x80520824
static u32 sDLCacheCount = 0;             // @addr 0x80520828
static const u32 MAX_CACHE_ENTRIES = 64;  // @addr 0x8052082C

// ============================================================================
// GXDL_Init()
// 0x80520000 (64 bytes)
// ============================================================================
// Initialize a display list with the given buffer.
// Sets up the write pointer to the start of the buffer and clears
// all metadata fields.
//
// @param dl     Display list structure to initialize
// @param buffer Aligned memory buffer for command storage
// @param size   Size of the buffer in bytes
// ============================================================================
void GXDL_Init(GXDisplayList* dl, void* buffer, u32 size) {
    dl->buffer = buffer;
    dl->writePtr = static_cast<u8*>(buffer);
    dl->bufferSize = size;
    dl->commandCount = 0;
    dl->flags = 0;
    dl->fifoBackup = nullptr;
    dl->_12 = 0;
    dl->_18 = 0;
}

// ============================================================================
// GXDL_Begin()
// 0x80520040 (128 bytes)
// ============================================================================
// Begin recording GX commands into a display list.
// Redirects the GX command FIFO to write into the display list buffer
// instead of hardware. Increments the nesting depth counter.
//
// The original code saves the current FIFO write pointer and swaps
// it with the display list's buffer, so subsequent GX calls are
// captured into the buffer.
//
// @param dl  Display list to begin recording into
// ============================================================================
void GXDL_Begin(GXDisplayList* dl) {
    // Reset write pointer to start of buffer
    dl->writePtr = static_cast<u8*>(dl->buffer);
    dl->commandCount = 0;

    // Set recording flag
    dl->flags |= 1;

    // Update compiler state
    sDLCompiler.current = dl;
    sDLCompiler.nestingDepth++;

    /* WII_GX: In the original, this swaps the FIFO write pointer
       so that GX commands go into dl->buffer instead of hardware.
       On PC (shim), GX commands are already no-ops, so we just
       track the state for correctness. */
}

// ============================================================================
// GXDL_End()
// 0x805200C0 (128 bytes)
// ============================================================================
// End recording and finalize the display list.
// Restores the previous FIFO write pointer and decrements the
// nesting counter. If we're back to depth 0, clears the compiler state.
//
// @param dl  Display list that was being recorded
// ============================================================================
void GXDL_End(GXDisplayList* dl) {
    // Clear recording flag
    dl->flags &= ~1u;

    // Decrement nesting depth
    if (sDLCompiler.nestingDepth > 0) {
        sDLCompiler.nestingDepth--;
    }

    // Calculate total bytes written
    u32 bytesWritten = static_cast<u32>(
        dl->writePtr - static_cast<u8*>(dl->buffer));
    sDLCompiler.totalBytes += bytesWritten;

    // Track peak usage
    if (bytesWritten > sDLCompiler.peakUsage) {
        sDLCompiler.peakUsage = bytesWritten;
    }

    // Restore compiler state if nesting is done
    if (sDLCompiler.nestingDepth == 0) {
        sDLCompiler.current = nullptr;
    }
}

// ============================================================================
// GXDL_Call()
// 0x80520140 (96 bytes)
// ============================================================================
// Execute a compiled display list by feeding its commands into the GX FIFO.
// This replays all previously recorded commands as if they were issued
// directly to the hardware.
//
// On Wii, this uses GXCallDisplayList which sends a CP command to read
// from the display list buffer directly. On PC shims, this is a no-op.
//
// @param dl  Compiled display list to execute
// ============================================================================
void GXDL_Call(const GXDisplayList* dl) {
    if (dl == nullptr || dl->buffer == nullptr) {
        return;
    }

    u32 size = static_cast<u32>(
        dl->writePtr - static_cast<const u8*>(dl->buffer));

    if (size == 0) {
        return;
    }

    /* WII_GX: GXCallDisplayList(dl->buffer, size);
       The hardware reads commands directly from the buffer.
       On PC shims, no rendering occurs. */
}

// ============================================================================
// GXDL_Reset()
// 0x805201A0 (64 bytes)
// ============================================================================
// Reset the display list write pointer for re-recording.
// Does not free the buffer; allows the same buffer to be reused.
//
// @param dl  Display list to reset
// ============================================================================
void GXDL_Reset(GXDisplayList* dl) {
    dl->writePtr = static_cast<u8*>(dl->buffer);
    dl->commandCount = 0;
    dl->flags = 0;
    dl->fifoBackup = nullptr;
}

// ============================================================================
// GXDL_WriteU8()
// 0x805201E0 (64 bytes)
// ============================================================================
// Write a raw u8 value into the display list buffer.
//
// @param dl    Display list being recorded
// @param value Byte value to write
// ============================================================================
void GXDL_WriteU8(GXDisplayList* dl, u8 value) {
    if (dl == nullptr || dl->writePtr == nullptr) {
        return;
    }
    u32 remaining = GXDL_GetRemaining(dl);
    if (remaining < sizeof(u8)) {
        return;
    }
    *dl->writePtr = value;
    dl->writePtr += sizeof(u8);
    dl->commandCount++;
}

// ============================================================================
// GXDL_WriteU16()
// 0x80520220 (64 bytes)
// ============================================================================
// Write a raw u16 value into the display list buffer.
// The value is written in big-endian order (Wii is big-endian).
//
// @param dl    Display list being recorded
// @param value Halfword value to write
// ============================================================================
void GXDL_WriteU16(GXDisplayList* dl, u16 value) {
    if (dl == nullptr || dl->writePtr == nullptr) {
        return;
    }
    u32 remaining = GXDL_GetRemaining(dl);
    if (remaining < sizeof(u16)) {
        return;
    }
    // Big-endian write
    dl->writePtr[0] = static_cast<u8>(value >> 8);
    dl->writePtr[1] = static_cast<u8>(value & 0xFF);
    dl->writePtr += sizeof(u16);
    dl->commandCount++;
}

// ============================================================================
// GXDL_WriteU32()
// 0x80520260 (64 bytes)
// ============================================================================
// Write a raw u32 value into the display list buffer.
//
// @param dl    Display list being recorded
// @param value Word value to write
// ============================================================================
void GXDL_WriteU32(GXDisplayList* dl, u32 value) {
    if (dl == nullptr || dl->writePtr == nullptr) {
        return;
    }
    u32 remaining = GXDL_GetRemaining(dl);
    if (remaining < sizeof(u32)) {
        return;
    }
    // Big-endian write
    dl->writePtr[0] = static_cast<u8>(value >> 24);
    dl->writePtr[1] = static_cast<u8>(value >> 16);
    dl->writePtr[2] = static_cast<u8>(value >> 8);
    dl->writePtr[3] = static_cast<u8>(value & 0xFF);
    dl->writePtr += sizeof(u32);
    dl->commandCount++;
}

// ============================================================================
// GXDL_WriteF32()
// 0x805202C0 (64 bytes)
// ============================================================================
// Write a float value into the display list buffer.
// Reinterpreted as u32 for byte-level writes.
//
// @param dl    Display list being recorded
// @param value Float value to write
// ============================================================================
void GXDL_WriteF32(GXDisplayList* dl, f32 value) {
    u32 asU32;
    std::memcpy(&asU32, &value, sizeof(f32));
    GXDL_WriteU32(dl, asU32);
}

// ============================================================================
// GXDL_EmitTriangleStrip()
// 0x80520300 (256 bytes)
// ============================================================================
// Emit a GX_TRIANGLE_STRIP primitive into the display list.
// Each vertex is expected to have position (3 x f32) and normal (3 x f32)
// packed at the given stride.
//
// The function writes:
//   GXBegin(GX_TRIANGLE_STRIP, fmt, vertCount)
//   For each vertex:
//     GXPosition3f32(x, y, z)
//     GXNormal3f32(nx, ny, nz)
//   GXEnd()
//
// @param dl         Display list being recorded
// @param vertices   Pointer to vertex data
// @param vertCount  Number of vertices in the strip
// @param vertStride Byte stride between vertices
// ============================================================================
void GXDL_EmitTriangleStrip(GXDisplayList* dl, void* vertices, u32 vertCount, u32 vertStride) {
    if (dl == nullptr || vertices == nullptr || vertCount < 3) {
        return;
    }

    u8* v = static_cast<u8*>(vertices);

    // Write GXBegin command
    GXDL_WriteU8(dl, static_cast<u8>(GX_TRIANGLE_STRIP)); // prim type
    GXDL_WriteU8(dl, 0);   // vertex format index
    GXDL_WriteU16(dl, static_cast<u16>(vertCount));

    // Write each vertex: position (3f32) + normal (3f32)
    for (u32 i = 0; i < vertCount; i++) {
        f32 px, py, pz, nx, ny, nz;
        std::memcpy(&px, v, sizeof(f32));
        std::memcpy(&py, v + 4, sizeof(f32));
        std::memcpy(&pz, v + 8, sizeof(f32));
        std::memcpy(&nx, v + 12, sizeof(f32));
        std::memcpy(&ny, v + 16, sizeof(f32));
        std::memcpy(&nz, v + 20, sizeof(f32));

        GXDL_WriteF32(dl, px);
        GXDL_WriteF32(dl, py);
        GXDL_WriteF32(dl, pz);
        GXDL_WriteF32(dl, nx);
        GXDL_WriteF32(dl, ny);
        GXDL_WriteF32(dl, nz);

        v += vertStride;
    }
}

// ============================================================================
// GXDL_EmitQuads()
// 0x80520400 (336 bytes)
// ============================================================================
// Emit a GX_QUADS primitive into the display list.
// Each vertex has position (3 x f32), normal (3 x f32), and color (u32 RGBA).
//
// @param dl         Display list being recorded
// @param vertices   Pointer to vertex data
// @param vertCount  Number of vertices (must be multiple of 4)
// @param vertStride Byte stride between vertices
// ============================================================================
void GXDL_EmitQuads(GXDisplayList* dl, void* vertices, u32 vertCount, u32 vertStride) {
    if (dl == nullptr || vertices == nullptr) {
        return;
    }

    // Quads require 4 vertices per quad
    u32 quadCount = vertCount / 4;
    if (quadCount == 0) {
        return;
    }

    u8* v = static_cast<u8*>(vertices);

    // Write GXBegin command
    GXDL_WriteU8(dl, static_cast<u8>(GX_QUADS));
    GXDL_WriteU8(dl, 0);
    GXDL_WriteU16(dl, static_cast<u16>(vertCount));

    // Write each vertex: position (3f32) + normal (3f32) + color (u32)
    for (u32 i = 0; i < vertCount; i++) {
        f32 px, py, pz, nx, ny, nz;
        u32 color;

        std::memcpy(&px, v, sizeof(f32));
        std::memcpy(&py, v + 4, sizeof(f32));
        std::memcpy(&pz, v + 8, sizeof(f32));
        std::memcpy(&nx, v + 12, sizeof(f32));
        std::memcpy(&ny, v + 16, sizeof(f32));
        std::memcpy(&nz, v + 20, sizeof(f32));
        std::memcpy(&color, v + 24, sizeof(u32));

        GXDL_WriteF32(dl, px);
        GXDL_WriteF32(dl, py);
        GXDL_WriteF32(dl, pz);
        GXDL_WriteF32(dl, nx);
        GXDL_WriteF32(dl, ny);
        GXDL_WriteF32(dl, nz);
        GXDL_WriteU32(dl, color);

        v += vertStride;
    }
}

// ============================================================================
// GXDL_GetRemaining()
// 0x80520540 (48 bytes)
// ============================================================================
// Get the remaining capacity in the display list buffer.
//
// @param dl  Display list to query
// @return    Number of bytes remaining before buffer overflow
// ============================================================================
u32 GXDL_GetRemaining(const GXDisplayList* dl) {
    if (dl == nullptr || dl->buffer == nullptr) {
        return 0;
    }
    u32 written = static_cast<u32>(
        dl->writePtr - static_cast<const u8*>(dl->buffer));
    if (written >= dl->bufferSize) {
        return 0;
    }
    return dl->bufferSize - written;
}

// ============================================================================
// DLCompiler_Init()
// 0x80520570 (80 bytes)
// ============================================================================
// Initialize the display list compiler system.
// Clears all state and prepares for display list recording.
//
// @param compiler  Compiler state to initialize
// ============================================================================
void DLCompiler_Init(DLCompiler* compiler) {
    compiler->current = nullptr;
    compiler->nestingDepth = 0;
    compiler->totalBytes = 0;
    compiler->peakUsage = 0;
    compiler->_10 = 0.0f;
    compiler->_14 = 0.0f;
    compiler->_18 = 0;
    compiler->_1C = 0;

    // Also reset global cache
    sDLCacheHead = nullptr;
    sDLCacheTail = nullptr;
    sDLCacheCount = 0;
}

// ============================================================================
// DLCompiler_Shutdown()
// 0x805205C0 (64 bytes)
// ============================================================================
// Shutdown the display list compiler and free all cached display lists.
//
// @param compiler  Compiler state to shut down
// ============================================================================
void DLCompiler_Shutdown(DLCompiler* compiler) {
    // Free all cached display lists
    DLCache* entry = sDLCacheHead;
    while (entry != nullptr) {
        DLCache* next = entry->next;
        if (entry->dlBuffer != nullptr) {
            EGG::Heap_free(entry->dlBuffer);
        }
        EGG::Heap_free(entry);
        entry = next;
    }

    sDLCacheHead = nullptr;
    sDLCacheTail = nullptr;
    sDLCacheCount = 0;

    compiler->current = nullptr;
    compiler->nestingDepth = 0;
}

// ============================================================================
// DLCache_Alloc()
// 0x80520610 (144 bytes)
// ============================================================================
// Allocate a cached display list for a given resource.
// If the resource is already cached, returns the existing entry.
// If the cache is full, evicts the LRU entry first.
//
// @param resourceId  Unique identifier for the resource
// @param size        Required buffer size in bytes
// @return            Pointer to the cache entry, or nullptr on failure
// ============================================================================
DLCache* DLCache_Alloc(u32 resourceId, u32 size) {
    // Check if already cached
    DLCache* existing = DLCache_Find(resourceId);
    if (existing != nullptr) {
        existing->refCount++;
        return existing;
    }

    // Evict LRU if cache is full
    if (sDLCacheCount >= MAX_CACHE_ENTRIES) {
        DLCache_EvictLRU();
    }

    // Allocate cache entry
    DLCache* entry = static_cast<DLCache*>(
        EGG::Heap_alloc(sizeof(DLCache), 4));
    if (entry == nullptr) {
        return nullptr;
    }

    // Allocate display list buffer (32-byte aligned for GX)
    u32 alignedSize = (size + 31) & ~31u;
    void* buffer = EGG::Heap_alloc(alignedSize, 32);
    if (buffer == nullptr) {
        EGG::Heap_free(entry);
        return nullptr;
    }

    entry->resourceId = resourceId;
    entry->dlBuffer = buffer;
    entry->dlSize = alignedSize;
    entry->refCount = 1;
    entry->_0E = 0;
    entry->lastFrameUsed = 0;
    entry->next = nullptr;
    entry->prev = nullptr;

    // Add to tail of LRU chain
    if (sDLCacheTail != nullptr) {
        sDLCacheTail->next = entry;
        entry->prev = sDLCacheTail;
    } else {
        sDLCacheHead = entry;
    }
    sDLCacheTail = entry;
    sDLCacheCount++;

    return entry;
}

// ============================================================================
// DLCache_Find()
// 0x805206A0 (96 bytes)
// ============================================================================
// Find a cached display list by resource ID.
//
// @param resourceId  Resource ID to search for
// @return            Pointer to the cache entry, or nullptr if not found
// ============================================================================
DLCache* DLCache_Find(u32 resourceId) {
    DLCache* entry = sDLCacheHead;
    while (entry != nullptr) {
        if (entry->resourceId == resourceId) {
            // Move to tail (most recently used)
            if (entry != sDLCacheTail) {
                if (entry->prev != nullptr) {
                    entry->prev->next = entry->next;
                }
                if (entry->next != nullptr) {
                    entry->next->prev = entry->prev;
                }
                if (entry == sDLCacheHead) {
                    sDLCacheHead = entry->next;
                }
                sDLCacheTail->next = entry;
                entry->prev = sDLCacheTail;
                entry->next = nullptr;
                sDLCacheTail = entry;
            }
            return entry;
        }
        entry = entry->next;
    }
    return nullptr;
}

// ============================================================================
// DLCache_EvictLRU()
// 0x80520700 (96 bytes)
// ============================================================================
// Evict the least recently used display list from the cache.
// Frees the buffer memory and removes the entry from the linked list.
// ============================================================================
void DLCache_EvictLRU(void) {
    if (sDLCacheHead == nullptr) {
        return;
    }

    DLCache* victim = sDLCacheHead;
    sDLCacheHead = victim->next;

    if (sDLCacheHead != nullptr) {
        sDLCacheHead->prev = nullptr;
    } else {
        sDLCacheTail = nullptr;
    }

    if (victim->dlBuffer != nullptr) {
        EGG::Heap_free(victim->dlBuffer);
    }
    EGG::Heap_free(victim);
    sDLCacheCount--;
}