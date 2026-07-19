#pragma once
// ============================================================================
// Memory_Classes.hpp — EGG Memory Subsystem Class Hierarchy
// Address range: 0x80440000 - 0x80450000 (253 functions)
//
// Hierarchy:
//   EGG::Memory::MemBlock        — intrusive linked-list node for memory blocks
//   EGG::Memory::BlockAllocator  — block-based memory allocator (s32 handles)
//   EGG::Memory::MemCache        — cache-line flush / invalidation
//   EGG::Memory::MemoryProfiler  — allocation statistics and diagnostics
//
// Categorization: GENESIS Phase 8 (Runtime Memory Class Extraction)
// ============================================================================
#include "rk_types.h"

namespace EGG {
namespace Memory {

// Forward declarations
class MemBlock;
class BlockAllocator;
class MemCache;
class MemoryProfiler;

// ============================================================
// EGG::Memory::MemBlock — Intrusive node for memory block lists
// ============================================================
// Used by BlockAllocator to track allocated and free memory
// blocks in a doubly-linked intrusive list.
//
// Layout (~0x1C bytes):
//   0x00  mPrev           — previous block in list
//   0x04  mNext           — next block in list
//   0x08  mStart          — start address of the block's data
//   0x0C  mSize           — size of the block in bytes
//   0x10  mFlags          — block state flags (free/used/first/last)
//   0x14  mGroupID        — allocation group identifier
//   0x18  mAllocatorTag   — tag identifying the owning allocator
//   0x1C  _pad1c          — padding
//
// Maps functions: 0x80440bbc – 0x80440e80, 0x80443e90 – 0x804440a4
// ============================================================
class MemBlock {
public:
    enum BlockFlag {
        BLOCK_FREE       = BIT(0),
        BLOCK_USED       = BIT(1),
        BLOCK_FIRST      = BIT(2),
        BLOCK_LAST       = BIT(3),
        BLOCK_GROUP_START = BIT(4),
        BLOCK_GROUP_END   = BIT(5),
    };

    // --- List manipulation ---
    // @addr 0x80440bbc
    void init(s32* blockInfo);
    // @addr 0x80440cec
    void link(MemBlock* prev, MemBlock* next);
    // @addr 0x80440e38
    void unlink();
    // @addr 0x80440e6c
    void setFlags(u32 flags);
    // @addr 0x80440e80
    void clearFlags(u32 flags);

    // --- Debug / profiling ---
    // @addr 0x80443e90
    void dump(s32* outInfo);
    // @addr 0x80443f74
    void validate() const;
    // @addr 0x804440a4
    s32 getSizeAligned(s32 align) const;

    // --- Accessors ---
    MemBlock* getPrev() const { return mPrev; }
    MemBlock* getNext() const { return mNext; }
    void*     getStart() const { return mStart; }
    u32       getSize() const { return mSize; }
    u16       getFlags() const { return mFlags; }
    u16       getGroupID() const { return mGroupID; }
    bool      isFree() const { return (mFlags & BLOCK_FREE) != 0; }
    bool      isUsed() const { return (mFlags & BLOCK_USED) != 0; }

    // --- Member data ---
    MemBlock* mPrev;          // 0x00
    MemBlock* mNext;          // 0x04
    void*     mStart;         // 0x08
    u32       mSize;          // 0x0C
    u16       mFlags;         // 0x10
    u16       mGroupID;       // 0x12
    u32       mAllocatorTag;  // 0x14
    u32       _pad1c;         // 0x18
};

// ============================================================
// EGG::Memory::BlockAllocator — Block-based memory allocator
// ============================================================
// Allocates memory in discrete blocks tracked by s32 handles.
// Used for fixed-size allocations (e.g. particle systems, UI).
//
// Layout (~0x60 bytes):
//   0x00  vtable
//   0x04  mBlockHead      — head of block linked list
//   0x08  mBlockTail      — tail of block linked list
//   0x0C  mFreeHead       — head of free block list
//   0x10  mFreeCount      — number of free blocks
//   0x14  mUsedCount      — number of used blocks
//   0x18  mTotalSize      — total managed memory size
//   0x1C  mUsedSize       — total used memory
//   0x20  mPeakUsedSize   — peak used memory
//   0x24  mBlockSize      — default block size for this allocator
//   0x28  mAlignment      — default alignment
//   0x2C  mGroupID        — current allocation group
//   0x30  mFlags          — allocator flags
//   0x34  mAllocCount     — total allocations performed
//   0x38  mFreeCountTotal — total frees performed
//   0x3C  _pad3c[8]       — reserved
//
// Maps functions: 0x80440ed8 – 0x80442288
// ============================================================
class BlockAllocator {
public:
    virtual ~BlockAllocator();

    enum Flag {
        FLAG_THREAD_SAFE  = BIT(0),
        FLAG_ZERO_FILL    = BIT(1),
        FLAG_DEBUG_FILL   = BIT(2),
        FLAG_ALLOW_RELOC  = BIT(3),
    };

    // --- Lifecycle ---
    // @addr 0x80440048
    void init();
    // @addr 0x804401b4
    void shutdown();
    // @addr 0x804406e4
    void configure(u32 flags);
    // @addr 0x80440784
    void reset();
    // @addr 0x804407a4
    void clear();

    // --- Allocation ---
    // @addr 0x80440ed8
    virtual s32 alloc(s32 size);
    // @addr 0x80440fbc
    virtual u32 allocAligned(u32 size, u32 align);
    // @addr 0x80440fe0
    virtual u32 allocBlock(u32 size, u32 flags);
    // @addr 0x80441180
    virtual u32 realloc(u32 handle, u32 newSize);
    // @addr 0x804417d4
    virtual u32 getAllocatableSize(u32 align);
    // @addr 0x80441914
    virtual s32 freeBlock(s32 handle, s32 flags);
    // @addr 0x80441c54
    virtual u32 getBlockSize(u32* handle) const;

    // --- Block management ---
    // @addr 0x804407ec
    void insertBlock(MemBlock* block);
    // @addr 0x804408dc
    void removeBlock(MemBlock* block);
    // @addr 0x80440924
    void coalesceFreeBlocks();
    // @addr 0x80440958
    void splitBlock(u32 blockAddr, u32 splitSize);
    // @addr 0x8044096c
    void mergeBlocks();
    // @addr 0x804409a0
    void defragment(u32 flags);
    // @addr 0x804409b4
    void compact(u32 flags, s32 mode);

    // --- Group management ---
    // @addr 0x80440a88
    void beginGroup();
    // @addr 0x80440aa8
    void endGroup();
    // @addr 0x80440af0
    void freeGroup(u16 groupID);

    // --- Debug / info ---
    // @addr 0x804412c8
    void dumpState();
    // @addr 0x8044145c
    void validateHeap();
    // @addr 0x804416ac
    void dumpBlocks(u32 flags, u32 maxCount);
    // @addr 0x804418d0
    void getStatistics();
    // @addr 0x8044196c
    void setDebugName(u32 name);
    // @addr 0x80441a38
    void enableDebug();
    // @addr 0x80441b08
    void disableDebug();
    // @addr 0x80441b48
    void dumpAllocations();
    // @addr 0x80441b90
    void dumpFreeList();
    // @addr 0x80441c08
    void getBlockInfo(u32* outInfo);
    // @addr 0x80441cd0
    void findLargestFreeBlock();
    // @addr 0x80442288
    void optimizeLayout(u32 flags);

    // --- Accessors ---
    MemBlock* getBlockHead() const { return mBlockHead; }
    MemBlock* getBlockTail() const { return mBlockTail; }
    MemBlock* getFreeHead() const  { return mFreeHead; }
    u32       getFreeCount() const { return mFreeCount; }
    u32       getUsedCount() const { return mUsedCount; }
    u32       getTotalSize() const { return mTotalSize; }
    u32       getUsedSize() const  { return mUsedSize; }
    u32       getPeakUsedSize() const { return mPeakUsedSize; }

    // --- Member data ---
    MemBlock* mBlockHead;       // 0x04
    MemBlock* mBlockTail;       // 0x08
    MemBlock* mFreeHead;        // 0x0C
    u32       mFreeCount;       // 0x10
    u32       mUsedCount;       // 0x14
    u32       mTotalSize;       // 0x18
    u32       mUsedSize;        // 0x1C
    u32       mPeakUsedSize;    // 0x20
    u32       mBlockSize;       // 0x24
    u32       mAlignment;       // 0x28
    u16       mGroupID;         // 0x2C
    u16       _pad2e;           // 0x2E
    u32       mFlags;           // 0x30
    u32       mAllocCount;      // 0x34
    u32       mFreeCountTotal;  // 0x38
    u32       _pad3c[8];        // 0x3C
};

// ============================================================
// EGG::Memory::MemCache — Cache-line management
// ============================================================
// Wraps Wii DC (data cache) flush/invalidate operations
// and provides cache-aligned allocation helpers.
//
// Layout (~0x40 bytes):
//   0x00  vtable
//   0x04  mCacheLineSize  — system cache line size (typically 32)
//   0x08  mCacheSize      — total data cache size
//   0x0C  mFlushCount     — number of flushes performed
//   0x10  mInvalidateCount — number of invalidates performed
//   0x14  mStoreCount     — number of store operations
//   0x18  mIsEnabled      — cache ops enabled flag
//   0x1C  _pad1c[9]       — reserved
//
// Maps functions: 0x8044be08 – 0x8044c65c, 0x8044b784 – 0x8044bc30
// ============================================================
class MemCache {
public:
    virtual ~MemCache();

    // --- Lifecycle ---
    // @addr 0x8044b784
    void init(u32 cacheLineSize, u32 cacheSize);
    // @addr 0x8044b7c0
    void shutdown();
    // @addr 0x8044ba20
    void reset();
    // @addr 0x8044bbf4
    void enable();
    // @addr 0x8044bc30
    void disable();

    // --- Flush / invalidate ---
    // @addr 0x8044be08
    void flush(void* addr, u32 size, u32 flags);
    // @addr 0x8044bef0
    void invalidate(void* addr, u32 size, u32 flags);
    // @addr 0x8044bfd8
    void flushAndInvalidate(void* addr, u32 size, u32 flags);
    // @addr 0x8044c038
    void store(void* addr, u32 size, u32 flags);
    // @addr 0x8044c098
    void sync(void* addr, u32 size, u32 flags);
    // @addr 0x8044c16c
    void prefetch(void* addr, u32 size, u32 flags);
    // @addr 0x8044c240
    void zeroLine(void* addr, u32 size, u32 flags);
    // @addr 0x8044c2a0
    void flushAll();

    // --- Cache-line allocation helpers ---
    // @addr 0x8044c514
    s32 allocCacheAligned(s32 size, u32 align);
    // @addr 0x8044c5e4
    void freeCacheAligned(s32 handle);
    // @addr 0x8044c65c
    void prepareRegion(u32 addr, u32 size);

    // --- Prefetch / streaming ---
    // @addr 0x8044c710
    void prefetchData(s32 addr, u32 size);
    // @addr 0x8044c828
    void prefetchInstruction(s32 addr, u32 size);
    // @addr 0x8044c92c
    void streamData(s32* addrs, u32 count);
    // @addr 0x8044ca00
    void touchRange(s32 addr, u32 size);
    // @addr 0x8044ca18
    void lockRange(s32 addr, u32 size);
    // @addr 0x8044ca50
    void unlockRange(s32 addr, u32 size);

    // --- Advanced ---
    // @addr 0x8044ca88
    void batchFlush(s32 addr, s32* ranges, s32 count, s32 flags);
    // @addr 0x8044cba4
    void waitForStore(s32 channel);
    // @addr 0x8044cc28
    void enableStream(s32 channel);
    // @addr 0x8044ccb0
    void disableStream(u32 channel, u32 flags);
    // @addr 0x8044cd5c
    void setStreamTarget(u32 channel, u32 flags);
    // @addr 0x8044ce14
    void streamControl(u32 channel, u32 flags, u32 mode);

    // --- Accessors ---
    u32  getCacheLineSize() const { return mCacheLineSize; }
    u32  getCacheSize() const     { return mCacheSize; }
    u32  getFlushCount() const    { return mFlushCount; }
    bool isEnabled() const        { return mIsEnabled != 0; }

    // --- Member data ---
    u32  mCacheLineSize;    // 0x04
    u32  mCacheSize;        // 0x08
    u32  mFlushCount;       // 0x0C
    u32  mInvalidateCount;  // 0x10
    u32  mStoreCount;       // 0x14
    u32  mIsEnabled;        // 0x18
    u32  _pad1c[9];         // 0x1C
};

// ============================================================
// EGG::Memory::MemoryProfiler — Allocation statistics & diagnostics
// ============================================================
// Tracks allocation patterns, peak usage, and provides
// diagnostics for memory analysis. Supports per-group and
// per-allocator tracking.
//
// Layout (~0x60 bytes):
//   0x00  vtable
//   0x04  mTotalAllocs        — total allocations recorded
//   0x08  mTotalFrees         — total frees recorded
//   0x0C  mTotalAllocBytes    — bytes allocated (cumulative)
//   0x10  mTotalFreeBytes     — bytes freed (cumulative)
//   0x14  mCurrentUsage       — current live bytes
//   0x18  mPeakUsage          — peak live bytes
//   0x1C  mPeakUsageAddr      — address at peak
//   0x20  mFragmentCount      — number of free fragments
//   0x24  mSmallestFragment   — smallest free block
//   0x28  mLargestFragment    — largest free block
//   0x2C  mSampleCount        — number of samples taken
//   0x30  mSampleInterval     — sampling interval (frames)
//   0x34  mIsTracking         — tracking active flag
//   0x38  _pad38[10]          — reserved
//
// Maps functions: 0x80442a30 – 0x80443a74
// ============================================================
class MemoryProfiler {
public:
    virtual ~MemoryProfiler();

    // --- Lifecycle ---
    // @addr 0x80442a30
    void init();
    // @addr 0x80442b14
    void configure(u32 flags);
    // @addr 0x80442b54
    void reset();
    // @addr 0x80442d90
    void shutdown();
    // @addr 0x80442e10
    void enable();
    // @addr 0x80442e94
    u8 isEnabled() const;

    // --- Recording ---
    // @addr 0x80442eec
    void recordAlloc(s32 size);
    // @addr 0x804427ac
    void recordFree();
    // @addr 0x80443024
    void sample();
    // @addr 0x804430c0
    void setSampleInterval(u32 interval);
    // @addr 0x80443068
    s32 queryAlloc(s32 size, s32 align);
    // @addr 0x804431d4
    void updateUsage();
    // @addr 0x804432e4
    void computeFragmentation();
    // @addr 0x80443318
    void recordPeak();
    // @addr 0x80443348
    void resetPeak();
    // @addr 0x8044339c
    void clearStats();
    // @addr 0x804433e8
    void updateFragmentInfo();
    // @addr 0x80443430
    void computeAverages();
    // @addr 0x804434e4
    void setReportTarget(u32* target);
    // @addr 0x80443550
    void flushReport();

    // --- Allocation group tracking ---
    // @addr 0x804435b8
    s32 beginGroup(s32 groupId, s32 tag);
    // @addr 0x804435f8
    s32 endGroup(s32 groupId);
    // @addr 0x8044364c
    u32 getGroupUsage(s32 groupId, u32 flags);
    // @addr 0x804436a8
    f64 getGroupUsageF64(s32 groupId);
    // @addr 0x80443728
    f64 getGroupPeakF64(f64 groupId, s32 mode);

    // --- Block-level operations ---
    // @addr 0x804437ac
    void writeBlockData(u8* dst, s32* src);
    // @addr 0x804437d4
    void copyBlock(s32 dstGroup, s32 srcGroup);
    // @addr 0x804438a0
    void readBlockData(u32* dst, s32* src);
    // @addr 0x80443918
    void compareBlockData(u32* a, s32* b, u8 mode);
    // @addr 0x804439d8
    void dumpBlockTable();
    // @addr 0x80443a74
    void validateBlockTable();

    // --- Accessors ---
    u32  getTotalAllocs() const     { return mTotalAllocs; }
    u32  getTotalFrees() const      { return mTotalFrees; }
    u32  getCurrentUsage() const    { return mCurrentUsage; }
    u32  getPeakUsage() const       { return mPeakUsage; }
    u32  getFragmentCount() const   { return mFragmentCount; }
    u32  getSmallestFragment() const { return mSmallestFragment; }
    u32  getLargestFragment() const  { return mLargestFragment; }

    // --- Member data ---
    u32  mTotalAllocs;       // 0x04
    u32  mTotalFrees;        // 0x08
    u32  mTotalAllocBytes;   // 0x0C
    u32  mTotalFreeBytes;    // 0x10
    u32  mCurrentUsage;      // 0x14
    u32  mPeakUsage;         // 0x18
    u32  mPeakUsageAddr;     // 0x1C
    u32  mFragmentCount;     // 0x20
    u32  mSmallestFragment;  // 0x24
    u32  mLargestFragment;   // 0x28
    u32  mSampleCount;       // 0x2C
    u32  mSampleInterval;    // 0x30
    u32  mIsTracking;        // 0x34
    u32  _pad38[10];         // 0x38
};

} // namespace Memory
} // namespace EGG