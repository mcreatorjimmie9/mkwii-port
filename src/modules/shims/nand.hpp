#pragma once
// ============================================================================
// nand.hpp — Wii NAND Storage Bridge Shims
// NAND file I/O for Wii system storage (save data, config)
// On PC: all operations return error codes (no NAND hardware)
// ============================================================================

#include <cstdint>

// NAND access modes
#define NAND_ACCESS_READ   0
#define NAND_ACCESS_WRITE  1
#define NAND_ACCESS_READWRITE 3

// NAND error codes
#define NAND_ERROR_BUSY     -1
#define NAND_ERROR_INVALID  -2
#define NAND_ERROR_CORRUPT  -3

// NANDFileInfo — Opaque NAND file handle
struct NANDFileInfo {
    u8 data[0x30];  // internal structure, opaque
};

// NANDOpen — Open a file on NAND storage
inline s32 NANDOpen(const char* path, NANDFileInfo* info, u8 access) {
    (void)path; (void)info; (void)access;
    return NAND_ERROR_INVALID;
}

// NANDClose — Close a NAND file
inline s32 NANDClose(NANDFileInfo* info) {
    (void)info;
    return NAND_ERROR_INVALID;
}

// NANDRead — Read from NAND file
inline s32 NANDRead(NANDFileInfo* info, void* buffer, u32 size) {
    (void)info; (void)buffer; (void)size;
    return NAND_ERROR_INVALID;
}

// NANDWrite — Write to NAND file
inline s32 NANDWrite(NANDFileInfo* info, const void* buffer, u32 size) {
    (void)info; (void)buffer; (void)size;
    return NAND_ERROR_INVALID;
}

// NANDSeek — Seek within NAND file
inline s32 NANDSeek(NANDFileInfo* info, s32 offset, s32 whence) {
    (void)info; (void)offset; (void)whence;
    return NAND_ERROR_INVALID;
}

// NANDSafeOpen — Thread-safe NAND open with retry
inline s32 NANDSafeOpen(const char* path, NANDFileInfo* info, u8 access, void* a4, u8 a5) {
    (void)path; (void)info; (void)access; (void)a4; (void)a5;
    return NAND_ERROR_INVALID;
}

// NANDSafeClose — Thread-safe NAND close
inline s32 NANDSafeClose(NANDFileInfo* info) {
    (void)info;
    return NAND_ERROR_INVALID;
}