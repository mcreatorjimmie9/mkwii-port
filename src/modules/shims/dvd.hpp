#pragma once
// dvd.hpp — Wii DVD filesystem access shims
// On the Wii, DVD access reads from the game disc. For PC porting, these
// shims map DVD file operations to host filesystem (stdio) equivalents.
// Eventually this layer will be replaced with a virtual filesystem that
// reads from extracted game files.

#include "../rk_types.h"
#include <cstdio>
#include <cstring>

// DVDCommandBlock — internal DVD command block (opaque for callers).
typedef struct {
    char _[0x20];
} DVDCommandBlock;

// DVDFileInfo — open file handle for DVD access.
typedef struct DVDFileInfo {
    DVDCommandBlock cb;    // 0x00: command block (must be first field)
    char _pad[0x28];       // remaining fields are internal
} DVDFileInfo;

// Callback type for async DVD operations.
typedef void (*DVDCallback)(s32 result, DVDFileInfo* fileInfo);
typedef DVDCallback DVDAsyncCallback;
typedef DVDCallback DVDCBAsyncCallback;

extern "C" {

// ============================================================================
// DVD initialization
// ============================================================================

// DVDInit — initializes the DVD subsystem. Called once at startup.
inline void DVDInit(void) {
    // No-op on PC; filesystem is always available.
}

// ============================================================================
// DVD file operations
// ============================================================================

// DVDConvertPathToEntrynum — converts a file path to a FST entry number.
// On PC: returns a non-negative entry number for any existing file, -1 otherwise.
// For now always return a valid entry since we don't have the FST.
inline s32 DVDConvertPathToEntrynum(const char* path) {
    (void)path;
    return 1; // dummy valid entry number
}

// DVDOpen — opens a file on the disc by path.
// Returns TRUE on success.
inline BOOL DVDOpen(const char* fileName, DVDFileInfo* fileInfo) {
    (void)fileName;
    (void)fileInfo;
    return TRUE; // pretend success
}

// DVDFastOpen — opens a file by pre-resolved entry number (faster than DVDOpen).
// Returns TRUE on success.
inline BOOL DVDFastOpen(s32 entrynum, DVDFileInfo* fileInfo) {
    (void)entrynum;
    (void)fileInfo;
    return TRUE;
}

// DVDClose — closes an open file handle.
inline BOOL DVDClose(DVDFileInfo* fileInfo) {
    (void)fileInfo;
    return TRUE;
}

// DVDReadPrio — reads length bytes from offset into addr.
// Priority controls read ordering (2 = normal).
// Returns number of bytes read, or a negative error code.
inline s32 DVDReadPrio(DVDFileInfo* fileInfo, void* addr, s32 length,
                       s32 offset, s32 prio) {
    (void)fileInfo;
    (void)addr;
    (void)offset;
    (void)prio;
    return length; // pretend all bytes were read
}

// DVDRead — reads from a file (macro that calls DVDReadPrio with prio=2).
// Defined as a macro in the SDK; we provide it as inline for safety.
// #define DVDRead(fileInfo, addr, length, offset) \
//     DVDReadPrio((fileInfo), (addr), (length), (offset), 2)
inline s32 DVDRead(DVDFileInfo* fileInfo, void* addr, s32 length, s32 offset) {
    return DVDReadPrio(fileInfo, addr, length, offset, 2);
}

// DVDReadAsyncPrio — asynchronous read with callback.
// Returns TRUE if the read was successfully queued.
inline BOOL DVDReadAsyncPrio(DVDFileInfo* fileInfo, void* addr, s32 length,
                             s32 offset, DVDCallback callback, s32 prio) {
    // Fire callback immediately with "success"
    if (callback) callback(length, fileInfo);
    (void)fileInfo;
    (void)addr;
    (void)offset;
    (void)prio;
    return TRUE;
}

// DVDGetFileInfoStatus — returns the current status of a file's last command.
inline s32 DVDGetCommandBlockStatus(DVDCommandBlock* block) {
    (void)block;
    return 0; // 0 = done / idle
}

// Convenience macro used in the codebase:
// #define DVDGetFileInfoStatus(fi) DVDGetCommandBlockStatus(&(fi)->cb)

// DVDCancel — cancels a pending async operation on a file.
inline u32 DVDCancel(DVDFileInfo* fileInfo) {
    (void)fileInfo;
    return 1; // 1 = cancelled
}

// DVDCancelAsync — cancels a pending async operation with callback.
inline u32 DVDCancelAsync(DVDFileInfo* fileInfo, DVDCBAsyncCallback callback) {
    if (callback) callback(-1, fileInfo);
    (void)fileInfo;
    return 1;
}

// DVDCancelAll — cancels ALL pending DVD operations.
inline s32 DVDCancelAll(void) {
    return 0; // 0 = success
}

} // extern "C"