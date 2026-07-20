#pragma once
// ============================================================================
// isfs.hpp — Wii ISFS (Internal Storage File System) Bridge Shims
// ISFS is the Wii's file system for NAND-based save data
// On PC: all operations return error codes
// ============================================================================

#include <cstdint>

// ISFS file access modes
#define ISFS_OPEN_READ   0
#define ISFS_OPEN_WRITE  1
#define ISFS_OPEN_RW     (ISFS_OPEN_READ | ISFS_OPEN_WRITE)

// ISFS permissions
#define ISFS_PERM_OWNER_READ  0x01
#define ISFS_PERM_OWNER_WRITE 0x02
#define ISFS_PERM_GROUP_READ  0x04
#define ISFS_PERM_GROUP_WRITE 0x08
#define ISFS_PERM_OTHER_READ  0x10
#define ISFS_PERM_OTHER_WRITE 0x20

// ISFS_FileStats — File status information
struct ISFS_FileStats {
    u32 size;        // file size
    u32 owner_id;    // owner UID
    u16 group_id;    // group GID
    u8  attributes;  // file attributes
    u8  permissions; // access permissions (owner/group/other)
};

// ISFS_Open — Open a file, returns file descriptor or negative error
inline s32 ISFS_Open(const char* path, u32 mode) {
    (void)path; (void)mode;
    return -1;
}

// ISFS_Read — Read from file descriptor
inline s32 ISFS_Read(s32 fd, void* buffer, u32 size) {
    (void)fd; (void)buffer; (void)size;
    return -1;
}

// ISFS_Write — Write to file descriptor
inline s32 ISFS_Write(s32 fd, const void* buffer, u32 size) {
    (void)fd; (void)buffer; (void)size;
    return -1;
}

// ISFS_Close — Close file descriptor
inline s32 ISFS_Close(s32 fd) {
    (void)fd;
    return -1;
}

// ISFS_CreateFile — Create a new file
inline s32 ISFS_CreateFile(const char* path, u32 size, u32 owner, u32 group, u8 attr, u8 perm) {
    (void)path; (void)size; (void)owner; (void)group; (void)attr; (void)perm;
    return -1;
}

// ISFS_Delete — Delete a file
inline s32 ISFS_Delete(const char* path) {
    (void)path;
    return -1;
}

// ISFS_GetFileStats — Get file information
inline s32 ISFS_GetFileStats(const char* path, ISFS_FileStats* stats) {
    (void)path; (void)stats;
    return -1;
}

// ISFS_CreateDir — Create a directory
inline s32 ISFS_CreateDir(const char* path, u32 owner, u32 group, u8 attr, u8 perm) {
    (void)path; (void)owner; (void)group; (void)attr; (void)perm;
    return -1;
}

// ISFS_Rename — Rename a file or directory
inline s32 ISFS_Rename(const char* oldPath, const char* newPath) {
    (void)oldPath; (void)newPath;
    return -1;
}