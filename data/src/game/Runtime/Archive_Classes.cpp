// ============================================================================
// Archive_Classes.cpp — EGG Resource Archive Implementations (stubs)
// Address range: 0x804C0000 - 0x804E0000 (490 functions)
//
// These are stub implementations. Real method bodies require full
// reimplementation from the decompiled Runtime.c.
//
// Categorization: GENESIS Phase 5 (Runtime Module, Task 2b)
// ============================================================================
#include "Archive_Classes.hpp"
#include "Heap_Classes.hpp"
#include <cstring>
#include <new>

namespace EGG {

// ============================================================
// EGG::Archive
// ============================================================

Archive::Archive()
    : mParentArchive(nullptr), mHeap(nullptr), mRefCount(1)
    , mFlags(0), mFileCount(0), mDirCount(0)
    , mDataStart(0), mMountCount(0) {}

Archive::Archive(Heap* heap)
    : mParentArchive(nullptr), mHeap(heap), mRefCount(1)
    , mFlags(0), mFileCount(0), mDirCount(0)
    , mDataStart(0), mMountCount(0) {}

Archive::~Archive() {
    // Cannot call pure virtual close() from base destructor;
    // derived destructors handle their own cleanup.
    mFlags = 0;
}

// @addr 0x804c07c4
void* Archive::getFileEntry(u32 index) const {
    if (index < mFileCount) {
        // In real implementation: index into FAT
        return nullptr;
    }
    return nullptr;
}

// @addr 0x804c07ec
u8 Archive::getFileEntryFlags(u32 index) const {
    if (index < mFileCount) {
        // In real implementation: read flag byte from entry
        return 0;
    }
    return 0;
}

// @addr 0x804c1224
s32 Archive::countFiles() const {
    return static_cast<s32>(mFileCount);
}

// ============================================================
// EGG::BurstArchive
// ============================================================

BurstArchive::BurstArchive()
    : Archive(), mArchiveData(nullptr), mArchiveSize(0)
    , mNodeRoot(nullptr), mFNTOffset(0), mFATOffset(0)
    , mFATEntries(0), mCompressed(0), _pad3D{}, mExpandSize(0) {}

BurstArchive::BurstArchive(Heap* heap)
    : Archive(heap), mArchiveData(nullptr), mArchiveSize(0)
    , mNodeRoot(nullptr), mFNTOffset(0), mFATOffset(0)
    , mFATEntries(0), mCompressed(0), _pad3D{}, mExpandSize(0) {}

BurstArchive::~BurstArchive() {
    close();
}

// @addr 0x804c0b08
bool BurstArchive::open(const char* path) {
    // @addr 0x804c0b08 — full implementation loads BURST from DVD
    UNUSED(path);
    return false;
}

// @addr 0x804c0294
void BurstArchive::close() {
    if (mArchiveData && mHeap) {
        mHeap->free(mArchiveData);
        mArchiveData = nullptr;
    }
    mArchiveSize = 0;
    mFileCount = 0;
    mDirCount = 0;
    mFlags = 0;
}

// @addr 0x804c1964
u32 BurstArchive::getFileSize(u32 fileId) const {
    if (fileId >= mFATEntries) return 0;
    // In real implementation: read from FAT entry
    // FAT entry layout: { u32 offset, u32 size }
    UNUSED(fileId);
    return 0;
}

// @addr 0x804c1a74
u32 BurstArchive::readFile(u32 fileId, void* buf, u32 bufSize) {
    u32 size = getFileSize(fileId);
    if (size > bufSize) size = bufSize;
    if (size == 0) return 0;
    // In real implementation: copy from mArchiveData + FAT offset
    // If compressed, decompress with SZS (LZ77 variant)
    UNUSED(buf); UNUSED(fileId);
    return size;
}

// @addr 0x804c1194
u32 BurstArchive::findFile(const char* path) const {
    if (!mArchiveData || !path) return ID_INVALID;
    // In real implementation: walk FNT node tree
    // FNT uses a string table with null-terminated strings
    // and a node hierarchy for directories
    UNUSED(path);
    return ID_INVALID;
}

// @addr 0x804c11cc
u32 BurstArchive::findDir(const char* path) const {
    if (!mArchiveData || !path) return ID_INVALID;
    UNUSED(path);
    return ID_INVALID;
}

// @addr 0x804c2264
s32 BurstArchive::getFileGroupType(u32 fileId) const {
    UNUSED(fileId);
    return 0;
}

// @addr 0x804c06f4
s32 BurstArchive::compareFileEntries(const void* a, const void* b) {
    // @addr 0x804c06f4 — comparison used for qsort
    // Compares by group type, then by sort order
    const u32* ea = static_cast<const u32*>(a);
    const u32* eb = static_cast<const u32*>(b);
    if (ea[3] == eb[3]) {
        return 0; // simplified
    }
    return (ea[3] < eb[3]) ? -1 : 1;
}

bool BurstArchive::loadFromFile(const char* path) {
    // @addr 0x804c0c30
    UNUSED(path);
    return false;
}

bool BurstArchive::loadFromMemory(void* data, u32 size) {
    if (!data || size < 0x20) return false;
    mArchiveData = data;
    mArchiveSize = size;
    // In real implementation: parse BURST header, build node tree
    return true;
}

// ============================================================
// EGG::MemArchive
// ============================================================

MemArchive::MemArchive()
    : Archive(), mData(nullptr), mDataSize(0)
    , mOwned(0), _pad2D{}, mReadPos(0) {}

MemArchive::MemArchive(void* data, u32 size, Heap* heap)
    : Archive(heap), mData(data), mDataSize(size)
    , mOwned(0), _pad2D{}, mReadPos(0) {}

MemArchive::~MemArchive() {
    close();
}

bool MemArchive::open(const char* path) {
    UNUSED(path);
    return mData != nullptr;
}

void MemArchive::close() {
    if (mOwned && mData && mHeap) {
        mHeap->free(mData);
        mData = nullptr;
    }
    mDataSize = 0;
    mReadPos = 0;
}

u32 MemArchive::getFileSize(u32 fileId) const {
    UNUSED(fileId);
    return mDataSize;
}

u32 MemArchive::readFile(u32 fileId, void* buf, u32 bufSize) {
    UNUSED(fileId);
    u32 remaining = mDataSize - mReadPos;
    u32 toRead = (bufSize < remaining) ? bufSize : remaining;
    if (toRead > 0 && mData && buf) {
        __builtin_memcpy(buf, static_cast<u8*>(mData) + mReadPos, toRead);
        mReadPos += toRead;
    }
    return toRead;
}

u32 MemArchive::findFile(const char* path) const {
    UNUSED(path);
    return mData ? 0 : ID_INVALID;
}

u32 MemArchive::findDir(const char* path) const {
    UNUSED(path);
    return ID_INVALID;
}

// @addr 0x804d09c8
u32 MemArchive::getReadPos() const {
    return mReadPos;
}

// @addr 0x804d0298
void MemArchive::setReadPos(u32 pos) {
    if (pos <= mDataSize) {
        mReadPos = pos;
    }
}

// ============================================================
// EGG::DvdArchive
// ============================================================

DvdArchive::DvdArchive()
    : Archive(), mDvdHandle(0), mDvdPosition(0), mDvdFileSize(0)
    , mBuffer(nullptr), mBufferSize(0), mReading(0), _pad39{} {}

DvdArchive::DvdArchive(Heap* heap)
    : Archive(heap), mDvdHandle(0), mDvdPosition(0), mDvdFileSize(0)
    , mBuffer(nullptr), mBufferSize(0), mReading(0), _pad39{} {}

DvdArchive::~DvdArchive() {
    close();
}

bool DvdArchive::open(const char* path) {
    // @addr 0x804d0954 — DVDOpen, read BURST header
    UNUSED(path);
    return false;
}

void DvdArchive::close() {
    // @addr 0x804d0bd0 — DVDClose
    mDvdHandle = 0;
    if (mBuffer && mHeap) {
        mHeap->free(mBuffer);
        mBuffer = nullptr;
    }
}

u32 DvdArchive::getFileSize(u32 fileId) const {
    UNUSED(fileId);
    return mDvdFileSize;
}

u32 DvdArchive::readFile(u32 fileId, void* buf, u32 bufSize) {
    // @addr 0x804d0f08 — DVDReadAsync + sync
    UNUSED(fileId); UNUSED(buf); UNUSED(bufSize);
    return 0;
}

u32 DvdArchive::findFile(const char* path) const {
    UNUSED(path);
    return ID_INVALID;
}

u32 DvdArchive::findDir(const char* path) const {
    UNUSED(path);
    return ID_INVALID;
}

// @addr 0x804d0f08
s32 DvdArchive::readDvdAsync(void* buf, u32 offset, u32 size) {
    UNUSED(buf); UNUSED(offset); UNUSED(size);
    return -1;
}

// @addr 0x804d0fe0
s32 DvdArchive::syncDvdRead() {
    return 0;
}

// @addr 0x804d11c4
bool DvdArchive::isDvdReadComplete() const {
    return mReading == 0;
}

// ============================================================
// EGG::ArchiveMgr
// ============================================================

ArchiveMgr* ArchiveMgr::sInstance = nullptr;

ArchiveMgr::ArchiveMgr()
    : mMountedCount(0), mCurrentArchive(nullptr) {
    __builtin_memset(mMounts, 0, sizeof(mMounts));
}

ArchiveMgr::~ArchiveMgr() {
    clearAll();
}

// @addr 0x804dfcb8
ArchiveMgr* ArchiveMgr::getInstance() {
    if (!sInstance) {
        sInstance = new ArchiveMgr();
    }
    return sInstance;
}

// @addr 0x804dfa20
bool ArchiveMgr::mount(const char* mountPoint, Archive* archive) {
    if (!mountPoint || !archive) return false;
    if (mMountedCount >= MAX_MOUNT_POINTS) return false;

    for (u32 i = 0; i < MAX_MOUNT_POINTS; i++) {
        if (!mMounts[i].inUse) {
            __builtin_strncpy(mMounts[i].path, mountPoint, sizeof(mMounts[i].path) - 1);
            mMounts[i].path[sizeof(mMounts[i].path) - 1] = '\0';
            mMounts[i].archive = archive;
            mMounts[i].inUse = 1;
            mMountedCount++;
            archive->addRef();
            return true;
        }
    }
    return false;
}

// @addr 0x804dfea4
void ArchiveMgr::unmount(const char* mountPoint) {
    if (!mountPoint) return;
    for (u32 i = 0; i < MAX_MOUNT_POINTS; i++) {
        if (mMounts[i].inUse && __builtin_strcmp(mMounts[i].path, mountPoint) == 0) {
            if (mMounts[i].archive) {
                mMounts[i].archive->release();
            }
            mMounts[i].inUse = 0;
            mMounts[i].path[0] = '\0';
            mMounts[i].archive = nullptr;
            mMountedCount--;
            return;
        }
    }
}

// @addr 0x804df3bc
Archive* ArchiveMgr::findArchive(const char* mountPoint) const {
    if (!mountPoint) return nullptr;
    for (u32 i = 0; i < MAX_MOUNT_POINTS; i++) {
        if (mMounts[i].inUse && __builtin_strcmp(mMounts[i].path, mountPoint) == 0) {
            return mMounts[i].archive;
        }
    }
    return nullptr;
}

// @addr 0x804df39c
void ArchiveMgr::setCurrentArchive(Archive* archive, u8 flags) {
    UNUSED(flags);
    mCurrentArchive = archive;
}

// @addr 0x804df430
bool ArchiveMgr::exists(const char* mountPoint) const {
    return findArchive(mountPoint) != nullptr;
}

// @addr 0x804dfaac
BurstArchive* ArchiveMgr::mountBurst(const char* mountPoint, const char* path,
                                       Heap* heap) {
    if (!heap) return nullptr;
    BurstArchive* arc = new BurstArchive(heap);
    if (arc->open(path)) {
        mount(mountPoint, arc);
        return arc;
    }
    heap->free(arc);
    return nullptr;
}

// @addr 0x804dfae4
void ArchiveMgr::unmount(Archive* archive) {
    if (!archive) return;
    for (u32 i = 0; i < MAX_MOUNT_POINTS; i++) {
        if (mMounts[i].inUse && mMounts[i].archive == archive) {
            archive->release();
            mMounts[i].inUse = 0;
            mMounts[i].path[0] = '\0';
            mMounts[i].archive = nullptr;
            mMountedCount--;
            return;
        }
    }
}

// @addr 0x804c24f0
void ArchiveMgr::clearAll() {
    for (u32 i = 0; i < MAX_MOUNT_POINTS; i++) {
        if (mMounts[i].inUse) {
            if (mMounts[i].archive) {
                mMounts[i].archive->release();
            }
            mMounts[i].inUse = 0;
        }
    }
    mMountedCount = 0;
    mCurrentArchive = nullptr;
}

} // namespace EGG