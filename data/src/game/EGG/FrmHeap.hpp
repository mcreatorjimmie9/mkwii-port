// ============================================================================
// FrmHeap.hpp — EGG::FrmHeap (frame heap) + MemBlockAllocator
// Address range: 0x8016E000 - 0x80170000 (DOL)
// Corresponding ELF range: ~0x805B0E30 - 0x805B8E30
//
// FrmHeap: One-shot heap — allocations cannot be individually freed.
// Calling destroy() frees the entire heap in one operation.
// Used for per-frame temporary allocations in MKWii.
//
// MemBlockAllocator: Fixed-block-size allocator that fronts a heap.
// Used for efficient allocation of uniform-sized objects.
//
// GENESIS Phase 20 — EGG Framework Utility Layer
// ============================================================================
#pragma once

#include "rk_common.h"

// Forward declarations
typedef struct MEMiHeapHead MEMiHeapHead;
typedef MEMiHeapHead* MEMHeapHandle;

namespace EGG {

class Heap;

// ============================================================================
// MemBlockAllocator — Fixed-size block allocator
// ============================================================================
class MemBlockAllocator {
public:
    // @addr 0x8016E008
    MemBlockAllocator();
    // @addr 0x8016E050
    ~MemBlockAllocator();

    // @addr 0x8016E0A0
    void init(Heap* heap, u32 blockSize, s32 align);
    // @addr 0x8016E120
    void* alloc();
    // @addr 0x8016E180
    void free(void* block);
    // @addr 0x8016E1E0
    u32 getFreeBlockCount() const;
    // @addr 0x8016E220
    void reset();
    // @addr 0x8016E280
    u32 getUsedBlockCount() const;
    // @addr 0x8016E2C0
    bool isValid() const;

    Heap* getHeap() const { return mHeap; }
    u32 getBlockSize() const { return mBlockSize; }

private:
    void* mFreeList;    // 0x00 — linked list of free blocks
    Heap* mHeap;        // 0x04 — backing heap
    u32 mBlockSize;     // 0x08 — size of each block
    u32 mTotalBlocks;   // 0x0C — total blocks allocated
    u32 mFreeCount;     // 0x10 — currently free blocks
    u32 mUsedCount;     // 0x14 — currently used blocks
};

// ============================================================================
// FrmHeap — Frame heap (one-shot allocation, bulk destroy)
// ============================================================================
class FrmHeap {
public:
    enum HeapKind {
        HEAP_KIND_FRAME = 2
    };

    // @addr 0x8016E300
    FrmHeap(MEMHeapHandle handle);
    // @addr 0x8016E380
    ~FrmHeap();

    // --- Static factory ---
    // @addr 0x8016E400
    static FrmHeap* create(void* block, u32 size, u16 attr);
    // @addr 0x8016E480
    static FrmHeap* create(u32 size, Heap* parent, u16 attr);

    // --- Heap interface ---
    // @addr 0x8016E500
    void* alloc(u32 size, s32 align);
    // @addr 0x8016E580
    void free(void* block);
    // @addr 0x8016E600
    void destroy();
    // @addr 0x8016E680
    u32 getAllocatableSize(s32 align) const;
    // @addr 0x8016E700
    u32 getTotalFreeSize() const;
    // @addr 0x8016E780
    void adjust();
    // @addr 0x8016E800
    void freeAll();
    // @addr 0x8016E860
    u32 resizeForMBlock(void* block, u32 size);

    // --- State ---
    // @addr 0x8016E8C0
    void initAllocator(MemBlockAllocator* allocator, s32 align);
    // @addr 0x8016E940
    Heap* getParentHeap() const;
    // @addr 0x8016E9A0
    void becomeCurrentHeap();
    // @addr 0x8016EA00
    const char* getName() const;

    MEMHeapHandle getHandle() const { return mHandle; }

private:
    MEMHeapHandle mHandle;   // 0x00 — underlying MEM heap
    void* mParentBlock;      // 0x04 — parent's mem block
    Heap* mParentHeap;       // 0x08 — parent EGG heap
    u16 mFlag;               // 0x0C
    u16 mAttr;               // 0x0E
    void* mState;            // 0x10 — frame heap state pointer
    const char* mName;       // 0x14 — heap name (default "NoName")
    void* mChildList;        // 0x18 — linked list of child disposers
};

} // namespace EGG