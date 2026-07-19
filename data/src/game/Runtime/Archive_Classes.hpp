#pragma once
// ============================================================================
// Archive_Classes.hpp — EGG Resource Archive Class Hierarchy
// Address range: 0x804C0000 - 0x804E0000 (490 functions)
//
// Hierarchy:
//   EGG::Archive (base, abstract)
//     +-- EGG::BurstArchive  — reads Nintendo BURST (.arc) format
//     +-- EGG::MemArchive   — memory-backed archive
//     +-- EGG::DvdArchive   — DVD file-backed archive
//   EGG::ArchiveMgr — singleton manager for archives
//
// The BURST format is Nintendo's resource archive format (.arc / .szs).
// It uses LZ77 compression and contains a directory tree + file entries.
//
// Categorization: GENESIS Phase 5 (Runtime Module, Task 2b)
// ============================================================================
#include "rk_common.h"

namespace EGG {

// Forward declarations
class Heap;
class Archive;
class BurstArchive;
class MemArchive;
class DvdArchive;
class ArchiveMgr;

// ============================================================
// EGG::Archive — Base archive class (abstract)
// ============================================================
// Provides a file-system-like interface for reading resources
// from an archive container.
//
// Layout:
//   0x00  vtable
//   0x04  mParentArchive  — parent archive (for nested archives)
//   0x08  mHeap           — heap used for allocations
//   0x0C  mRefCount       — reference count
//   0x10  mFlags          — archive state flags
//   0x14  mFileCount      — number of files in archive
//   0x18  mDirCount       — number of directories
//   0x1C  mDataStart      — offset to file data section
//   0x20  mMountCount     — number of times mounted
//
// Key virtuals:
//   vtable[0]  ~Archive()
//   vtable[1]  open(void*)            — open from buffer/stream
//   vtable[2]  close()                — close archive
//   vtable[3]  getFileSize(u32 id)    — get file size by ID
//   vtable[4]  readFile(u32 id, void*, u32) — read file data
//   vtable[5]  findFile(const char*)  — find file by path
//   vtable[6]  findDir(const char*)   — find directory by path
//   vtable[7]  getDirCount() const
//   vtable[8]  getFileCount() const
// ============================================================
class Archive {
public:
    // --- File/Dir ID constants ---
    static const u32 ID_INVALID = 0xFFFFFFFF;

    // --- Flags ---
    enum Flag {
        FLAG_MOUNTED  = BIT(0),
        FLAG_LOADED   = BIT(1),
        FLAG_COMPRESSED = BIT(2),
        FLAG_DVD_BACKED = BIT(3),
    };

    virtual ~Archive();

    // --- Pure virtual: core archive interface ---
    // @addr 0x804c0c30 — open archive from path
    virtual bool open(const char* path) = 0;
    // @addr 0x804c0294 — close archive
    virtual void close() = 0;
    // @addr 0x804c1964 — get file size
    virtual u32 getFileSize(u32 fileId) const = 0;
    // @addr 0x804c1a74 — read file into buffer
    virtual u32 readFile(u32 fileId, void* buf, u32 bufSize) = 0;
    // @addr 0x804c1194 — find file, return file ID
    virtual u32 findFile(const char* path) const = 0;
    // @addr 0x804c11cc — find directory, return dir ID
    virtual u32 findDir(const char* path) const = 0;

    // --- Optional virtuals ---
    virtual u32 getFileCount() const { return mFileCount; }
    virtual u32 getDirCount() const  { return mDirCount; }

    // @addr 0x804c0818 — check if any file is mounted/loaded
    virtual bool hasLoadedFile() const { return (mFlags & FLAG_LOADED) != 0; }

    // --- Non-virtual helpers ---
    // @addr 0x804c07c4 — get file entry pointer by index
    void* getFileEntry(u32 index) const;
    // @addr 0x804c07ec — get file entry flag byte
    u8    getFileEntryFlags(u32 index) const;

    // @addr 0x804c1224 — get total file count (delegates to virtual)
    s32   countFiles() const;

    // --- Accessors ---
    Heap* getHeap() const          { return mHeap; }
    u32   getRefCount() const      { return mRefCount; }
    bool  isMounted() const        { return (mFlags & FLAG_MOUNTED) != 0; }

    void addRef()  { mRefCount++; }
    void release() { if (--mRefCount == 0) close(); }

protected:
    Archive();
    Archive(Heap* heap);

    // --- Member data ---
    Archive* mParentArchive; // 0x04
    Heap*    mHeap;          // 0x08
    u32      mRefCount;      // 0x0C
    u32      mFlags;         // 0x10
    u32      mFileCount;     // 0x14
    u32      mDirCount;      // 0x18
    u32      mDataStart;     // 0x1C
    u32      mMountCount;    // 0x20
};

// ============================================================
// EGG::BurstArchive — BURST format (.arc) reader
// ============================================================
// Reads the Nintendo BURST archive format used throughout MKWii.
// Files have the .arc extension (uncompressed) or .szs (compressed).
//
// BURST format header layout:
//   0x00  magic     "BURST" (0x42555253)
//   0x04  fileSz    total file size
//   0x08  hdrSz     header size
//   0x0C  dataSz    compressed data size (0 if uncompressed)
//   ...
//   Then follows the node tree (directories) + file entries + file data
//
// Layout (extends Archive at 0x00-0x23):
//   0x24  mArchiveData  — pointer to loaded archive data
//   0x28  mArchiveSize  — total archive data size
//   0x2C  mNodeRoot     — root directory node
//   0x30  mFNTOffset    — file name table offset
//   0x34  mFATOffset    — file allocation table offset
//   0x38  mFATEntries   — number of FAT entries
//   0x3C  mCompressed   — whether data is LZ77 compressed
//   0x40  mExpandSize   — expanded (decompressed) size
//
// @addr 0x804c0a10 — BurstArchive constructor/init
// @addr 0x804c0aa0 — BurstArchive destructor
// @addr 0x804c0b08 — BurstArchive::open
// ============================================================
class BurstArchive : public Archive {
public:
    // BURST magic number
    static const u32 MAGIC_BURST = 0x54534255; // "TSBU" (little-endian "BURST")

    // @addr 0x804c0a10 — constructor
    BurstArchive();
    BurstArchive(Heap* heap);

    virtual ~BurstArchive();

    // --- Archive interface ---
    // @addr 0x804c0b08 — open from file path
    bool open(const char* path) override;
    // @addr 0x804c0294 — close
    void close() override;
    // @addr 0x804c1964 — get file size from FAT entry
    u32 getFileSize(u32 fileId) const override;
    // @addr 0x804c1a74 — read file, decompress if needed
    u32 readFile(u32 fileId, void* buf, u32 bufSize) override;
    // @addr 0x804c1194 — find file by path in FNT
    u32 findFile(const char* path) const override;
    // @addr 0x804c11cc — find directory by path in FNT
    u32 findDir(const char* path) const override;

    // --- Burst-specific ---
    // @addr 0x804c2264 — get file group type
    s32 getFileGroupType(u32 fileId) const;

    // @addr 0x804c06f4 — compare two file entries (for sorting)
    static s32 compareFileEntries(const void* a, const void* b);

    // --- Loading ---
    // @addr 0x804c0c30 — load archive from file
    bool loadFromFile(const char* path);
    // Load from already-decompressed memory buffer
    bool loadFromMemory(void* data, u32 size);

    // Direct access to archive data
    void*  getArchiveData() const { return mArchiveData; }
    u32    getArchiveSize() const { return mArchiveSize; }
    bool   isCompressed() const   { return mCompressed != 0; }

protected:
    // --- BurstArchive member data ---
    void*  mArchiveData;    // 0x24
    u32    mArchiveSize;    // 0x28
    void*  mNodeRoot;       // 0x2C
    u32    mFNTOffset;      // 0x30
    u32    mFATOffset;      // 0x34
    u32    mFATEntries;     // 0x38
    u8     mCompressed;     // 0x3C
    u8     _pad3D[3];       // 0x3D
    u32    mExpandSize;     // 0x40
};

// ============================================================
// EGG::MemArchive — Memory-backed archive
// ============================================================
// An archive that operates on an already-loaded memory buffer.
// Useful for archives embedded in the DOL or loaded by other means.
//
// Layout (extends Archive at 0x00-0x23):
//   0x24  mData      — pointer to archive data in memory
//   0x28  mDataSize  — size of the data buffer
//   0x2C  mOwned     — whether this archive owns (allocated) the data
//
// @addr 0x804d09c8 — MemArchive constructor
// @addr 0x804d0954 — MemArchive open
// ============================================================
class MemArchive : public Archive {
public:
    MemArchive();
    MemArchive(void* data, u32 size, Heap* heap = nullptr);
    virtual ~MemArchive();

    // --- Archive interface ---
    bool open(const char* path) override;
    void close() override;
    u32 getFileSize(u32 fileId) const override;
    u32 readFile(u32 fileId, void* buf, u32 bufSize) override;
    u32 findFile(const char* path) const override;
    u32 findDir(const char* path) const override;

    // --- MemArchive-specific ---
    // @addr 0x804d09c8 — get current read position
    u32 getReadPos() const;
    // @addr 0x804d0298 — set read position
    void setReadPos(u32 pos);

    // Direct data access
    void* getData() const  { return mData; }
    u32   getDataSize() const { return mDataSize; }

protected:
    void*  mData;       // 0x24
    u32    mDataSize;   // 0x28
    u8     mOwned;      // 0x2C
    u8     _pad2D[3];   // 0x2D
    u32    mReadPos;    // 0x30
};

// ============================================================
// EGG::DvdArchive — DVD file-backed archive
// ============================================================
// Reads an archive directly from the Wii DVD without loading
// the entire file into memory. Uses DVD async I/O.
//
// Layout (extends Archive at 0x00-0x23):
//   0x24  mDvdHandle     — DVD file handle
//   0x28  mDvdPosition   — current DVD read position
//   0x2C  mDvdFileSize   — file size on disc
//   0x30  mBuffer        — read buffer
//   0x34  mBufferSize    — read buffer size
//
// @addr 0x804d0954 — DvdArchive open
// @addr 0x804d0ab8 — DvdArchive read
// ============================================================
class DvdArchive : public Archive {
public:
    DvdArchive();
    DvdArchive(Heap* heap);
    virtual ~DvdArchive();

    // --- Archive interface ---
    bool open(const char* path) override;
    void close() override;
    u32 getFileSize(u32 fileId) const override;
    u32 readFile(u32 fileId, void* buf, u32 bufSize) override;
    u32 findFile(const char* path) const override;
    u32 findDir(const char* path) const override;

    // --- DvdArchive-specific ---
    // @addr 0x804d0f08 — read from DVD with async
    s32 readDvdAsync(void* buf, u32 offset, u32 size);
    // @addr 0x804d0fe0 — sync wait for DVD read
    s32 syncDvdRead();
    // @addr 0x804d11c4 — check if DVD read is complete
    bool isDvdReadComplete() const;

    u32   getDvdFileSize() const { return mDvdFileSize; }

protected:
    u32   mDvdHandle;     // 0x24
    u32   mDvdPosition;   // 0x28
    u32   mDvdFileSize;   // 0x2C
    void* mBuffer;        // 0x30
    u32   mBufferSize;    // 0x34
    u8    mReading;       // 0x38
    u8    _pad39[3];      // 0x39
};

// ============================================================
// EGG::ArchiveMgr — Archive manager singleton
// ============================================================
// Manages the lifecycle of all open archives.
// Provides a registry for looking up archives by mount point.
//
// @addr 0x804dfcb8 — getInstance
// @addr 0x804dfa20 — mount archive
// @addr 0x804dfea4 — unmount archive
// @addr 0x804df3bc — find archive by name
// @addr 0x804df39c — set current archive
// ============================================================
class ArchiveMgr {
public:
    static const u32 MAX_ARCHIVES = 32;
    static const u32 MAX_MOUNT_POINTS = 16;

    // @addr 0x804dfcb8
    static ArchiveMgr* getInstance();

    // --- Archive management ---
    // @addr 0x804dfa20 — mount an archive at a path
    bool mount(const char* mountPoint, Archive* archive);
    // @addr 0x804dfea4 — unmount archive by mount point
    void unmount(const char* mountPoint);
    // @addr 0x804df3bc — find archive by mount point
    Archive* findArchive(const char* mountPoint) const;
    // @addr 0x804df39c — set current working archive
    void setCurrentArchive(Archive* archive, u8 flags);
    // @addr 0x804df3dc — get current archive
    Archive* getCurrentArchive() const { return mCurrentArchive; }

    // @addr 0x804df430 — check if mount point exists
    bool exists(const char* mountPoint) const;

    // @addr 0x804dfaac — create burst archive and mount
    BurstArchive* mountBurst(const char* mountPoint, const char* path,
                             Heap* heap = nullptr);
    // @addr 0x804dfae4 — unmount by archive pointer
    void unmount(Archive* archive);

    u32 getMountedCount() const { return mMountedCount; }

    // @addr 0x804c24f0 — clear all archives
    void clearAll();

private:
    ArchiveMgr();
    ~ArchiveMgr();

    static ArchiveMgr* sInstance;

    struct MountEntry {
        char  path[64];      // mount point path
        Archive* archive;    // associated archive
        u8    inUse;         // entry is active
    };

    MountEntry mMounts[MAX_MOUNT_POINTS]; // 0x04
    u32        mMountedCount;             // 0x404
    Archive*   mCurrentArchive;           // 0x408
};

} // namespace EGG