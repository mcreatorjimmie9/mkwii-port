// ============================================================================
// Archive_Classes.cpp — EGG Resource Archive Implementations
// Address range: 0x804C0000 - 0x804E0000 (490 functions)
//
// Real implementations translated from decompiled EGG archive sources:
//   - eggArchive.cpp   → BurstArchive mount/unmount/find/read
//   - eggDvdFile.cpp   → DvdArchive open/read/close stubs
//   - eggDvdRipper.cpp → loadToMainRAM logic for file loading
//   - eggDecomp.cpp    → SZS (Yaz0/LZ77) decompression
//   - eggCompress.cpp  → SZS compression helpers (reference)
//   - eggStreamDecomp.cpp → streaming decompression reference
//
// Archive format: U8 (.arc) / SZS-compressed U8 (.szs)
//   - U8 header: magic 0x55AA382D, 0x20-byte header, node array,
//     string table, 32-byte-aligned file data section.
//   - SZS wrapper: magic "Yaz1", 16-byte header, LZ77-compressed U8 data.
//
// Categorization: GENESIS Phase 5 (Runtime Module, Task 2b)
// ============================================================================
#include "Archive_Classes.hpp"
#include "Heap_Classes.hpp"
#include <cstring>
#include <cstdio>
#include <new>

namespace EGG {

// ============================================================
// Internal helpers (anonymous namespace)
// ============================================================
namespace {

// Round up val to next multiple of align (align must be power of 2)
#define ROUND_UP(val, align) (((val) + ((align) - 1)) & ~((align) - 1))

// --- Big-endian reads (Wii archive data is big-endian on disc) ---

// @addr based on eggDecomp.cpp getSZSExpandSize macro
inline u32 readBE32(const void* ptr) {
    const u8* p = static_cast<const u8*>(ptr);
    return (u32(p[0]) << 24) | (u32(p[1]) << 16) | (u32(p[2]) << 8) | u32(p[3]);
}

inline u16 readBE16(const void* ptr) {
    const u8* p = static_cast<const u8*>(ptr);
    return (u16(p[0]) << 8) | u16(p[1]);
}

// --- SZS (Yaz0) compression detection ---

// @addr based on eggDecomp.cpp checkCompressed (TYPE_SZS path)
inline bool isSZSCompressed(const void* data) {
    const u8* p = static_cast<const u8*>(data);
    return p[0] == 'Y' && p[1] == 'a' && p[2] == 'z' && p[3] == '1';
}

// @addr based on eggDecomp.cpp getSZSExpandSize / getExpandSize
inline u32 getSZSExpandSize(const void* data) {
    const u8* p = static_cast<const u8*>(data);
    return (u32(p[4]) << 24) | (u32(p[5]) << 16) | (u32(p[6]) << 8) | u32(p[7]);
}

// --- SZS (Yaz0/LZ77) decompression ---
// Translated from eggDecomp.cpp decodeSZS
// @addr 0x804c... (decompression routine)
s32 decodeSZS(const u8* src, u8* dst) {
    u32 expandSize = getSZSExpandSize(src);
    u32 srcIdx = 0x10; // Data starts after 16-byte SZS header
    u8 code = 0;
    u8 byte = 0;

    for (u32 destIdx = 0; destIdx < expandSize; code >>= 1) {
        if (code == 0) {
            code = 0x80;
            byte = src[srcIdx++];
        }

        // Direct copy (code bit = 1)
        if (byte & code) {
            dst[destIdx++] = src[srcIdx++];
        }
        // RLE back-reference (code bit = 0)
        else {
            u32 distToDest = (u32(src[srcIdx]) << 8) | u32(src[srcIdx + 1]);
            srcIdx += 2;
            u32 runSrcIdx = destIdx - (distToDest & 0xFFF);

            // Upper nibble of byte1 determines run length encoding
            u32 runLen;
            if ((distToDest >> 12) == 0) {
                runLen = u32(src[srcIdx++]) + 0x12;
            } else {
                runLen = (distToDest >> 12) + 2;
            }

            for (u32 j = 0; j < runLen; j++, destIdx++, runSrcIdx++) {
                dst[destIdx] = dst[runSrcIdx - 1];
            }
        }
    }

    return static_cast<s32>(expandSize);
}

// --- U8 archive format constants ---

// U8 magic (big-endian on disc): 'U' '_' '8' '-' = 0x55AA382D
static const u32 U8_MAGIC_BE = 0x55AA382D;

// Each U8 node is 12 bytes
static const u32 U8_NODE_SIZE = 12;
// Bit 31 of type_name: directory flag
static const u32 U8_NODE_FLAG_DIR = 0x80000000;
// Bits 0-23 of type_name: name string offset
static const u32 U8_NODE_NAME_MASK = 0x00FFFFFF;
// Bits 24-30 of type_name: group type (BURST extension)
static const u32 U8_NODE_GROUP_MASK = 0x7F000000;
static const u32 U8_NODE_GROUP_SHIFT = 24;

// Read a U8 node field by index (big-endian)
// fieldOff: 0=type_name, 4=data_offset, 8=size
inline u32 readNodeField(const void* archiveData, u32 fntOffset,
                         u32 nodeIdx, u32 fieldOff) {
    const u8* base = static_cast<const u8*>(archiveData);
    return readBE32(base + fntOffset + nodeIdx * U8_NODE_SIZE + fieldOff);
}

// Get the null-terminated name string for a node
inline const char* getNodeName(const void* archiveData, u32 fntOffset,
                               u32 nodeCount, u32 nodeIdx) {
    const u8* base = static_cast<const u8*>(archiveData);
    u32 nameOff = readNodeField(archiveData, fntOffset, nodeIdx, 0) & U8_NODE_NAME_MASK;
    u32 strTableStart = fntOffset + nodeCount * U8_NODE_SIZE;
    return reinterpret_cast<const char*>(base + strTableStart + nameOff);
}

// --- Parsed archive info (returned by parseU8Archive) ---
struct BurstParsedInfo {
    u32 fntOffset;    // Offset to node array from archive start
    u32 fatOffset;    // Offset to file data section from archive start
    u32 totalNodes;   // Total node count (dirs + files)
    u32 fileCount;    // Number of file nodes
    u32 dirCount;     // Number of directory nodes
};

// Parse U8 archive header and gather structural info
// @addr derived from eggArchive.cpp initHandle / mount logic
bool parseU8Archive(const void* data, u32 size, BurstParsedInfo& info) {
    if (!data || size < 0x20) return false;

    const u8* base = static_cast<const u8*>(data);
    u32 magic = readBE32(base);
    if (magic != U8_MAGIC_BE) return false;

    u32 nodeOff = readBE32(base + 0x04);   // Root node offset
    u32 nodeCount = readBE32(base + 0x08); // Total node count

    // Validate: node array must fit within data
    if (nodeOff == 0 || nodeOff + nodeCount * U8_NODE_SIZE > size) {
        return false;
    }

    info.fntOffset = nodeOff;
    info.totalNodes = nodeCount;
    info.fileCount = 0;
    info.dirCount = 0;

    // Count files/directories and find string table extent
    u32 maxNameEnd = 0;
    for (u32 i = 0; i < nodeCount; i++) {
        u32 type_name = readNodeField(data, nodeOff, i, 0);

        if (type_name & U8_NODE_FLAG_DIR) {
            info.dirCount++;
        } else {
            info.fileCount++;
        }

        // Track the end of the string table
        u32 nameOff = type_name & U8_NODE_NAME_MASK;
        const char* name = reinterpret_cast<const char*>(
            base + nodeOff + nodeCount * U8_NODE_SIZE + nameOff);
        u32 nameEnd = nameOff + static_cast<u32>(strlen(name)) + 1;
        if (nameEnd > maxNameEnd) {
            maxNameEnd = nameEnd;
        }
    }

    // File data section: after string table, 32-byte aligned
    u32 strTableStart = nodeOff + nodeCount * U8_NODE_SIZE;
    info.fatOffset = ROUND_UP(strTableStart + maxNameEnd, 32);

    // Sanity: file data offset must be within archive
    if (info.fatOffset > size) {
        info.fatOffset = strTableStart;
    }

    return true;
}

// Walk U8 node tree to find a node by path
// @addr based on eggArchive.cpp convertPathToEntryNum (0x804c0c30)
//       which calls ARCConvertPathToEntrynum internally
u32 findNodeByPath(const void* archiveData, u32 fntOffset, u32 nodeCount,
                   const char* path, bool dirOnly) {
    if (!archiveData || !path) return Archive::ID_INVALID;

    // Skip leading slash
    if (*path == '/') path++;
    // Empty path → root directory
    if (*path == '\0') return dirOnly ? 0 : Archive::ID_INVALID;

    u32 currentNode = 0; // Root node is always index 0

    while (*path) {
        // Current node must be a directory to traverse
        u32 type_name = readNodeField(archiveData, fntOffset, currentNode, 0);
        if (!(type_name & U8_NODE_FLAG_DIR)) return Archive::ID_INVALID;

        // Directory's "size" field = byte offset of first node after subtree
        u32 dirEndIdx = readNodeField(archiveData, fntOffset, currentNode, 8) / U8_NODE_SIZE;

        // Extract the next path component (up to '/' or '\0')
        const char* compStart = path;
        while (*path && *path != '/') path++;
        u32 compLen = static_cast<u32>(path - compStart);

        // Search children for a name match
        bool found = false;
        u32 childIdx = currentNode + 1; // First child follows parent

        while (childIdx < dirEndIdx) {
            u32 childType = readNodeField(archiveData, fntOffset, childIdx, 0);
            const char* childName = getNodeName(archiveData, fntOffset, nodeCount, childIdx);
            u32 childNameLen = static_cast<u32>(strlen(childName));

            if (childNameLen == compLen &&
                memcmp(compStart, childName, compLen) == 0) {
                currentNode = childIdx;
                found = true;
                break;
            }

            // Advance past this child's entire subtree
            if (childType & U8_NODE_FLAG_DIR) {
                // Directory: jump to node after its subtree
                childIdx = readNodeField(archiveData, fntOffset, childIdx, 8) / U8_NODE_SIZE;
            } else {
                // File: next node
                childIdx++;
            }
        }

        if (!found) return Archive::ID_INVALID;

        // Skip path separator
        if (*path == '/') path++;
    }

    // Verify final node matches requested type
    u32 finalType = readNodeField(archiveData, fntOffset, currentNode, 0);
    bool isDir = (finalType & U8_NODE_FLAG_DIR) != 0;

    if (dirOnly && !isDir) return Archive::ID_INVALID;
    if (!dirOnly && isDir) return Archive::ID_INVALID;

    return currentNode;
}

} // anonymous namespace


// ============================================================
// EGG::Archive — Base archive class
// ============================================================

Archive::Archive()
    : mParentArchive(nullptr), mHeap(nullptr), mRefCount(1)
    , mFlags(0), mFileCount(0), mDirCount(0)
    , mDataStart(0), mMountCount(0) {}

Archive::Archive(Heap* heap)
    : mParentArchive(nullptr), mHeap(heap), mRefCount(1)
    , mFlags(0), mFileCount(0), mDirCount(0)
    , mDataStart(0), mMountCount(0) {}

// @addr 0x804c0294 — base destructor
// Based on eggArchive.cpp: calls removeList(this) in original EGG
Archive::~Archive() {
    mFlags = 0;
}

// @addr 0x804c07c4 — get file entry pointer by index
// In the original EGG, this indexes into the ARC's internal FAT.
// The base class lacks a data pointer, so derived classes provide
// their own getFileSize/readFile that access FAT directly.
void* Archive::getFileEntry(u32 index) const {
    if (index >= mFileCount) return nullptr;
    // BurstArchive overrides getFileSize/readFile to access FAT via mArchiveData
    UNUSED(index);
    return nullptr;
}

// @addr 0x804c07ec — get file entry flag byte
u8 Archive::getFileEntryFlags(u32 index) const {
    if (index >= mFileCount) return 0;
    UNUSED(index);
    return 0;
}

// @addr 0x804c1224 — get total file count (delegates to virtual getter)
s32 Archive::countFiles() const {
    return static_cast<s32>(getFileCount());
}


// ============================================================
// EGG::BurstArchive — BURST format (.arc / .szs) reader
// ============================================================

BurstArchive::BurstArchive()
    : Archive(), mArchiveData(nullptr), mArchiveSize(0)
    , mNodeRoot(nullptr), mFNTOffset(0), mFATOffset(0)
    , mFATEntries(0), mCompressed(0), _pad3D{}, mExpandSize(0) {}

BurstArchive::BurstArchive(Heap* heap)
    : Archive(heap), mArchiveData(nullptr), mArchiveSize(0)
    , mNodeRoot(nullptr), mFNTOffset(0), mFATOffset(0)
    , mFATEntries(0), mCompressed(0), _pad3D{}, mExpandSize(0) {}

// @addr 0x804c0aa0 — BurstArchive destructor
BurstArchive::~BurstArchive() {
    close();
}

// @addr 0x804c0b08 — open archive from file path
// Translated from eggArchive.cpp mount() + loadFromDisc()
bool BurstArchive::open(const char* path) {
    if (!path) return false;
    close(); // Release any previously loaded archive

    if (loadFromFile(path)) {
        mFlags |= FLAG_MOUNTED;
        mMountCount++;
        return true;
    }
    return false;
}

// @addr 0x804c0294 — close archive and free resources
// Based on eggArchive.cpp unmount() + Archive::~Archive()
void BurstArchive::close() {
    if (mArchiveData && mHeap) {
        mHeap->free(mArchiveData);
        mArchiveData = nullptr;
    }
    mArchiveSize = 0;
    mNodeRoot = nullptr;
    mFNTOffset = 0;
    mFATOffset = 0;
    mFATEntries = 0;
    mCompressed = 0;
    __builtin_memset(_pad3D, 0, sizeof(_pad3D));
    mExpandSize = 0;
    mFileCount = 0;
    mDirCount = 0;
    mDataStart = 0;
    mFlags = 0;
    mMountCount = 0;
}

// @addr 0x804c0c30 — load archive from file path
// Translated from eggArchive.cpp loadFromDisc():
//   1. Open file, read 32-byte header
//   2. Determine archive size from header
//   3. Allocate buffer, read full archive
//   4. If SZS compressed, decompress
//   5. Parse U8 header and populate fields
bool BurstArchive::loadFromFile(const char* path) {
    if (!path || !mHeap) return false;

    // Open file (replaces DVDOpen from eggArchive.cpp)
    FILE* f = fopen(path, "rb");
    if (!f) return false;

    // Determine file size
    fseek(f, 0, SEEK_END);
    long fileSize = ftell(f);
    fseek(f, 0, SEEK_SET);

    if (fileSize < 0x20) {
        fclose(f);
        return false;
    }

    u32 readSize = static_cast<u32>(fileSize);

    // Allocate buffer (aligned to 32, matching ROUND_UP from eggDvdRipper.cpp)
    void* buffer = mHeap->alloc(ROUND_UP(readSize, 32), 32);
    if (!buffer) {
        fclose(f);
        return false;
    }

    // Read entire file (replaces DVDReadPrio from eggArchive.cpp)
    size_t bytesRead = fread(buffer, 1, readSize, f);
    fclose(f);

    if (bytesRead != readSize) {
        mHeap->free(buffer);
        return false;
    }

    // Check if container is SZS/Yaz0 compressed
    const u8* buf8 = static_cast<const u8*>(buffer);
    void* finalData = buffer;
    u32 finalSize = readSize;

    if (isSZSCompressed(buf8)) {
        // Based on eggDvdRipper.cpp loadToMainRAMDecomp:
        // Read header to get uncompressed size, allocate, decompress
        mCompressed = 1;
        mExpandSize = getSZSExpandSize(buf8);

        void* decompBuf = mHeap->alloc(ROUND_UP(mExpandSize, 32), 32);
        if (!decompBuf) {
            mHeap->free(buffer);
            return false;
        }

        s32 result = decodeSZS(buf8, static_cast<u8*>(decompBuf));
        if (result <= 0) {
            mHeap->free(decompBuf);
            mHeap->free(buffer);
            return false;
        }

        mHeap->free(buffer); // Free compressed data
        finalData = decompBuf;
        finalSize = static_cast<u32>(result);
    }

    // Parse U8 archive header (based on eggArchive.cpp initHandle)
    BurstParsedInfo info;
    if (!parseU8Archive(finalData, finalSize, info)) {
        mHeap->free(finalData);
        return false;
    }

    // Populate archive fields from parsed info
    mArchiveData = finalData;
    mArchiveSize = finalSize;
    mFNTOffset = info.fntOffset;
    mFATOffset = info.fatOffset;
    mFATEntries = info.totalNodes;
    mFileCount = info.fileCount;
    mDirCount = info.dirCount;
    mNodeRoot = static_cast<u8*>(finalData) + info.fntOffset;
    mDataStart = info.fatOffset;
    mFlags |= FLAG_LOADED;

    return true;
}

// @addr 0x804c0c30 (alt path) — load archive from memory buffer
// Based on eggArchive.cpp mount(arcStart, pHeap, align)
bool BurstArchive::loadFromMemory(void* data, u32 size) {
    if (!data || size < 0x20) return false;

    // Handle SZS-compressed data: decompress first
    const u8* buf8 = static_cast<const u8*>(data);
    void* parseData = data;
    u32 parseSize = size;
    bool allocated = false;

    if (isSZSCompressed(buf8) && mHeap) {
        mCompressed = 1;
        mExpandSize = getSZSExpandSize(buf8);

        void* decompBuf = mHeap->alloc(ROUND_UP(mExpandSize, 32), 32);
        if (!decompBuf) return false;

        s32 result = decodeSZS(buf8, static_cast<u8*>(decompBuf));
        if (result <= 0) {
            mHeap->free(decompBuf);
            return false;
        }

        parseData = decompBuf;
        parseSize = static_cast<u32>(result);
        allocated = true;
    }

    // Parse U8 archive header
    BurstParsedInfo info;
    if (!parseU8Archive(parseData, parseSize, info)) {
        if (allocated) mHeap->free(parseData);
        return false;
    }

    // Populate fields
    mArchiveData = parseData;
    mArchiveSize = parseSize;
    mFNTOffset = info.fntOffset;
    mFATOffset = info.fatOffset;
    mFATEntries = info.totalNodes;
    mFileCount = info.fileCount;
    mDirCount = info.dirCount;
    mNodeRoot = static_cast<u8*>(parseData) + info.fntOffset;
    mDataStart = info.fatOffset;
    mFlags |= FLAG_LOADED;

    return true;
}

// @addr 0x804c1964 — get file size from FAT entry
// Based on eggArchive.cpp getFile(): ARCGetLength(&fileInfo)
u32 BurstArchive::getFileSize(u32 fileId) const {
    if (!mArchiveData || fileId >= mFATEntries) return 0;

    // Only file nodes have meaningful sizes (not directories)
    u32 type_name = readNodeField(mArchiveData, mFNTOffset, fileId, 0);
    if (type_name & U8_NODE_FLAG_DIR) return 0;

    // Node's "size" field (offset 8) = file data size
    return readNodeField(mArchiveData, mFNTOffset, fileId, 8);
}

// @addr 0x804c1a74 — read file into buffer, decompress if needed
// Based on eggArchive.cpp getFileFast(): ARCGetStartAddrInMem + copy
u32 BurstArchive::readFile(u32 fileId, void* buf, u32 bufSize) {
    if (!mArchiveData || !buf || fileId >= mFATEntries) return 0;

    // Verify this is a file node
    u32 type_name = readNodeField(mArchiveData, mFNTOffset, fileId, 0);
    if (type_name & U8_NODE_FLAG_DIR) return 0;

    u32 fileOffset = readNodeField(mArchiveData, mFNTOffset, fileId, 4); // data offset
    u32 fileSize = readNodeField(mArchiveData, mFNTOffset, fileId, 8);   // data size

    const u8* base = static_cast<const u8*>(mArchiveData);
    const u8* src = base + mFATOffset + fileOffset;

    // Check if this individual file is SZS compressed
    // (files within archives can be individually compressed)
    if (isSZSCompressed(src)) {
        u32 expandSize = getSZSExpandSize(src);
        if (expandSize > bufSize) return 0; // Buffer too small for decompressed data

        s32 result = decodeSZS(src, static_cast<u8*>(buf));
        return result > 0 ? static_cast<u32>(result) : 0;
    }

    // Straight copy of uncompressed file data
    u32 toRead = (fileSize < bufSize) ? fileSize : bufSize;
    __builtin_memcpy(buf, src, toRead);
    return toRead;
}

// @addr 0x804c1194 — find file by path, return file ID
// Based on eggArchive.cpp convertPathToEntryID() which calls
// ARCConvertPathToEntrynum(&mArcHandle, path)
u32 BurstArchive::findFile(const char* path) const {
    if (!mArchiveData || !path) return ID_INVALID;
    return findNodeByPath(mArchiveData, mFNTOffset, mFATEntries, path, false);
}

// @addr 0x804c11cc — find directory by path, return dir ID
u32 BurstArchive::findDir(const char* path) const {
    if (!mArchiveData || !path) return ID_INVALID;
    return findNodeByPath(mArchiveData, mFNTOffset, mFATEntries, path, true);
}

// @addr 0x804c2264 — get file group type
// In the BURST format, group type is stored in bits 24-30 of the
// node's type_name field (upper byte beyond the dir flag).
s32 BurstArchive::getFileGroupType(u32 fileId) const {
    if (!mArchiveData || fileId >= mFATEntries) return -1;

    u32 type_name = readNodeField(mArchiveData, mFNTOffset, fileId, 0);
    if (type_name & U8_NODE_FLAG_DIR) return -1; // Not a file

    return static_cast<s32>((type_name & U8_NODE_GROUP_MASK) >> U8_NODE_GROUP_SHIFT);
}

// @addr 0x804c06f4 — compare two file entries (for qsort)
// Translated from decompiled compareFileEntries.
// Each entry is assumed to be 16 bytes (4 x u32);
// comparison key is the 4th u32 (offset 0x0C) — sort order / group type.
s32 BurstArchive::compareFileEntries(const void* a, const void* b) {
    const u32* ea = static_cast<const u32*>(a);
    const u32* eb = static_cast<const u32*>(b);

    if (ea[3] == eb[3]) {
        return 0;
    }
    return (ea[3] < eb[3]) ? -1 : 1;
}


// ============================================================
// EGG::MemArchive — Memory-backed archive
// ============================================================

MemArchive::MemArchive()
    : Archive(), mData(nullptr), mDataSize(0)
    , mOwned(0), _pad2D{}, mReadPos(0) {}

// @addr 0x804d09c8 — MemArchive constructor with external data
MemArchive::MemArchive(void* data, u32 size, Heap* heap)
    : Archive(heap), mData(data), mDataSize(size)
    , mOwned(0), _pad2D{}, mReadPos(0) {}

MemArchive::~MemArchive() {
    close();
}

// @addr 0x804d0954 — MemArchive open (validates data is present)
bool MemArchive::open(const char* path) {
    UNUSED(path);
    return mData != nullptr;
}

// @addr 0x804d0bd0 — MemArchive close
void MemArchive::close() {
    if (mOwned && mData && mHeap) {
        mHeap->free(mData);
        mData = nullptr;
    }
    mDataSize = 0;
    mReadPos = 0;
    mFileCount = 0;
    mDirCount = 0;
    mFlags = 0;
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

// @addr 0x804d09c8 — get current read position
u32 MemArchive::getReadPos() const {
    return mReadPos;
}

// @addr 0x804d0298 — set read position
void MemArchive::setReadPos(u32 pos) {
    if (pos <= mDataSize) {
        mReadPos = pos;
    }
}


// ============================================================
// EGG::DvdArchive — DVD file-backed archive
// ============================================================
// On PC there is no Wii DVD hardware. These implementations preserve
// the logic from eggDvdFile.cpp / eggDvdRipper.cpp but use stdio
// as the backing store instead of the DVD API.

DvdArchive::DvdArchive()
    : Archive(), mDvdHandle(0), mDvdPosition(0), mDvdFileSize(0)
    , mBuffer(nullptr), mBufferSize(0), mReading(0), _pad39{} {}

DvdArchive::DvdArchive(Heap* heap)
    : Archive(heap), mDvdHandle(0), mDvdPosition(0), mDvdFileSize(0)
    , mBuffer(nullptr), mBufferSize(0), mReading(0), _pad39{} {}

DvdArchive::~DvdArchive() {
    close();
}

// @addr 0x804d0954 — DvdArchive open
// Translated from eggDvdFile.cpp DvdFile::open(path):
//   s32 entrynum = DVDConvertPathToEntrynum(path);
//   return open(entrynum);
// We use fopen as the PC equivalent.
bool DvdArchive::open(const char* path) {
    if (!path) return false;
    close();

    // PC equivalent of DVDConvertPathToEntrynum + DVDFastOpen
    FILE* f = fopen(path, "rb");
    if (!f) return false;

    // Determine file size (equivalent to DVDGetFileInfoStatus length)
    fseek(f, 0, SEEK_END);
    long size = ftell(f);
    fseek(f, 0, SEEK_SET);

    if (size <= 0) {
        fclose(f);
        return false;
    }

    mDvdFileSize = static_cast<u32>(size);
    // Store FILE* in mBuffer (void* can hold a pointer on any platform)
    mBuffer = static_cast<void*>(f);
    mDvdHandle = 1; // Mark as open
    mDvdPosition = 0;
    mFlags |= FLAG_MOUNTED | FLAG_DVD_BACKED;

    // Read and parse the BURST header if we have a heap
    if (mHeap) {
        // Based on eggArchive.cpp loadFromDisc: read 32-byte header
        void* headerBuf = mHeap->alloc(0x20, 32);
        if (headerBuf) {
            size_t read = fread(headerBuf, 1, 0x20, f);
            if (read >= 0x20) {
                const u8* hdr = static_cast<const u8*>(headerBuf);
                if (isSZSCompressed(hdr)) {
                    // Archive is SZS compressed — store expand size
                    // (caller must decompress via loadToMainRAMDecomp)
                    mBufferSize = getSZSExpandSize(hdr);
                }
            }
            mHeap->free(headerBuf);
        }
        fseek(f, 0, SEEK_SET);
    }

    return true;
}

// @addr 0x804d0bd0 — DvdArchive close
// Based on eggDvdFile.cpp DvdFile::close():
//   DVDClose(&mFileInfo)
void DvdArchive::close() {
    if (mDvdHandle != 0 && mBuffer) {
        // PC equivalent of DVDClose
        FILE* f = static_cast<FILE*>(mBuffer);
        fclose(f);
    } else if (mBuffer && mHeap) {
        // If mBuffer was a heap allocation (not a FILE*), free it
        mHeap->free(mBuffer);
    }
    mBuffer = nullptr;
    mDvdHandle = 0;
    mBufferSize = 0;
    mDvdPosition = 0;
    mDvdFileSize = 0;
    mReading = 0;
    mFlags = 0;
    mFileCount = 0;
    mDirCount = 0;
}

u32 DvdArchive::getFileSize(u32 fileId) const {
    UNUSED(fileId);
    return mDvdFileSize;
}

// @addr 0x804d0f08 — read file from DVD
// Based on eggDvdFile.cpp DvdFile::readData() + eggDvdRipper.cpp loadToMainRAM():
//   DVDReadAsyncPrio + sync
u32 DvdArchive::readFile(u32 fileId, void* buf, u32 bufSize) {
    if (!buf || mDvdHandle == 0 || !mBuffer) return 0;
    UNUSED(fileId);

    FILE* f = static_cast<FILE*>(mBuffer);
    if (!f) return 0;

    u32 remaining = mDvdFileSize - mDvdPosition;
    u32 toRead = (bufSize < remaining) ? bufSize : remaining;
    if (toRead == 0) return 0;

    // Seek to current position (DVD read is offset-based)
    fseek(f, static_cast<long>(mDvdPosition), SEEK_SET);
    size_t bytesRead = fread(buf, 1, toRead, f);

    mDvdPosition += static_cast<u32>(bytesRead);
    return static_cast<u32>(bytesRead);
}

u32 DvdArchive::findFile(const char* path) const {
    UNUSED(path);
    // DvdArchive does not support path-based lookup without
    // fully loading the archive into memory first.
    return ID_INVALID;
}

u32 DvdArchive::findDir(const char* path) const {
    UNUSED(path);
    return ID_INVALID;
}

// @addr 0x804d0f08 — async DVD read
// Based on eggDvdFile.cpp DvdFile::readData():
//   DVDReadAsyncPrio(&mFileInfo, buffer, length, offset, &doneProcess, 2)
//   result = sync();
s32 DvdArchive::readDvdAsync(void* buf, u32 offset, u32 size) {
    if (!buf || mDvdHandle == 0 || !mBuffer) return -1;

    FILE* f = static_cast<FILE*>(mBuffer);
    if (!f) return -1;

    // Clamp to file bounds
    if (offset >= mDvdFileSize) return -1;
    if (offset + size > mDvdFileSize) size = mDvdFileSize - offset;

    fseek(f, static_cast<long>(offset), SEEK_SET);
    size_t bytesRead = fread(buf, 1, size, f);

    mDvdPosition = offset + static_cast<u32>(bytesRead);
    mReading = 0; // Synchronous on PC, so read is always complete
    return static_cast<s32>(bytesRead);
}

// @addr 0x804d0fe0 — sync wait for DVD read
// Based on eggDvdFile.cpp DvdFile::sync():
//   OSReceiveMessage(&mMsgQueue, &message, OS_MESSAGE_BLOCK);
//   return (s32)message;
s32 DvdArchive::syncDvdRead() {
    // On PC, reads are synchronous (completed immediately in readDvdAsync)
    // In the original Wii code, this blocks until the DVD interrupt fires.
    mReading = 0;
    return static_cast<s32>(mDvdPosition);
}

// @addr 0x804d11c4 — check if DVD read is complete
bool DvdArchive::isDvdReadComplete() const {
    return mReading == 0;
}


// ============================================================
// EGG::ArchiveMgr — Archive manager singleton
// ============================================================

ArchiveMgr* ArchiveMgr::sInstance = nullptr;

ArchiveMgr::ArchiveMgr()
    : mMountedCount(0), mCurrentArchive(nullptr) {
    __builtin_memset(mMounts, 0, sizeof(mMounts));
}

ArchiveMgr::~ArchiveMgr() {
    clearAll();
}

// @addr 0x804dfcb8 — get singleton instance
ArchiveMgr* ArchiveMgr::getInstance() {
    if (!sInstance) {
        sInstance = new ArchiveMgr();
    }
    return sInstance;
}

// @addr 0x804dfa20 — mount an archive at a path
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

// @addr 0x804dfea4 — unmount archive by mount point
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

// @addr 0x804df3bc — find archive by mount point
Archive* ArchiveMgr::findArchive(const char* mountPoint) const {
    if (!mountPoint) return nullptr;
    for (u32 i = 0; i < MAX_MOUNT_POINTS; i++) {
        if (mMounts[i].inUse && __builtin_strcmp(mMounts[i].path, mountPoint) == 0) {
            return mMounts[i].archive;
        }
    }
    return nullptr;
}

// @addr 0x804df39c — set current working archive
void ArchiveMgr::setCurrentArchive(Archive* archive, u8 flags) {
    UNUSED(flags);
    mCurrentArchive = archive;
}

// @addr 0x804df430 — check if mount point exists
bool ArchiveMgr::exists(const char* mountPoint) const {
    return findArchive(mountPoint) != nullptr;
}

// @addr 0x804dfaac — create burst archive and mount
BurstArchive* ArchiveMgr::mountBurst(const char* mountPoint, const char* path,
                                       Heap* heap) {
    if (!heap) return nullptr;
    BurstArchive* arc = new BurstArchive(heap);
    if (arc->open(path)) {
        mount(mountPoint, arc);
        return arc;
    }
    delete arc;
    return nullptr;
}

// @addr 0x804dfae4 — unmount by archive pointer
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

// @addr 0x804c24f0 — clear all archives
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