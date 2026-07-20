// ============================================================================
// Heap_Classes.cpp — EGG Heap Allocator Implementations
// Address range: 0x80450000 - 0x80460000 (293 functions)
//
// Implementations adapted from decompiled EGG framework sources:
//   - eggHeap.cpp    (base Heap class: create, destroy, alloc, freeAll)
//   - eggExpHeap.cpp (ExpHeap: create, destroy, alloc, free, sizing)
//
// NOTE: The decompiled EGG code wraps Nintendo SDK MEM* functions
// (MEMAllocFromExpHeapEx, MEMFreeToExpHeap, etc.). Those SDK internals
// are not available here, so the free-list logic (alloc, free) is
// reimplemented using our EGG::MemoryBlock fields to match the same
// external behavior.
//
// Categorization: GENESIS Phase 5 (Runtime Module, Task 2b)
// ============================================================================
#include "Heap_Classes.hpp"
#include "rk_types.h"
#include <cstring>
#include <cstdint>
#include <new>

namespace EGG {

// ============================================================
// EGG::Heap
// ============================================================

// Static heap state — in the original EGG this is per-thread (OS-specific storage).
// For the PC port, a single global suffices since we don't have thread-local storage.
Heap* Heap::sCurrentHeap = nullptr;

// @addr 0x80450014 — null-check validator used by placement new
// In the original EGG, this is called by operator new(size, Heap*, align)
// to validate the allocation result.
void* Heap::operatorValidate(void* ptr, u32 size) {
    // Original: if allocation failed, OSPanic would be called
    UNUSED(size);
    return ptr;
}

// ============================================================
// EGG::ExpHeap
// ============================================================

// @addr 0x80455c90 — create ExpHeap from parent heap
// Based on decompiled ExpHeap::create(u32 size, Heap* heap, u16 attr):
//   - If size == -1, use parent's full allocatable space
//   - Allocate from parent, then construct ExpHeap in-place
//   - On failure, free the allocated block
ExpHeap* ExpHeap::create(Heap* parent, u32 size, s32 align) {
    ExpHeap* newHeap = nullptr;

    if (size == static_cast<u32>(-1))
        size = parent->getAllocatableSize(4);

    void* block = parent->alloc(size, align);
    if (block) {
        newHeap = ExpHeap::create(block, size, parent);

        if (newHeap)
            newHeap->setParent(parent);
        else
            parent->free(block);
    }

    return newHeap;
}

// @addr 0x80455bac — create ExpHeap at a specific address
// Based on decompiled ExpHeap::create(void* block, u32 size, u16 attr):
//   - Rounds start/end to 4-byte alignment (EXP_HEAP_ALIGN = 4)
//   - Validates minimum size (sizeof(ExpHeap) + sizeof(MemoryBlock) + 4)
//   - Placement-new the ExpHeap object at the region start
//   - Initializes the managed memory as a single free MemoryBlock
ExpHeap* ExpHeap::create(void* addr, u32 size, Heap* parent) {
    ExpHeap* heap = nullptr;

    // Round to 4-byte alignment (matches EXP_HEAP_ALIGN in decompiled code)
    u32 heapEnd = (static_cast<u32>(reinterpret_cast<uintptr_t>(addr) + size)) & ~3u;
    u32 heapStart = (static_cast<u32>(reinterpret_cast<uintptr_t>(addr)) + 3u) & ~3u;

    // Minimum: ExpHeap object + one MemoryBlock header + at least 4 bytes data
    u32 minSize = sizeof(ExpHeap) + sizeof(MemoryBlock) + 4;

    if (heapStart > heapEnd || heapEnd - heapStart < minSize) {
        return nullptr;
    }

    // Placement-new the ExpHeap at the aligned start
    heap = new (reinterpret_cast<void*>(heapStart)) ExpHeap();

    // Managed memory region starts after the ExpHeap object
    u8* memStart = reinterpret_cast<u8*>(heapStart) + sizeof(ExpHeap);
    u8* memEnd = reinterpret_cast<u8*>(heapEnd);
    u32 memSize = static_cast<u32>(memEnd - memStart);

    heap->mStart = memStart;
    heap->mEnd = memEnd;
    heap->mSize = memSize;
    heap->mAllocatedSize = 0;

    // Create initial free block spanning the entire managed region
    // Layout: [MemoryBlock header (0x18 bytes)][free data ...]
    MemoryBlock* freeBlock = reinterpret_cast<MemoryBlock*>(memStart);
    freeBlock->mPrev = nullptr;
    freeBlock->mNext = nullptr;
    freeBlock->mStart = memStart + sizeof(MemoryBlock);
    freeBlock->mEnd = memEnd;
    freeBlock->mFlags = MemoryBlock::BLOCK_FREE
                      | MemoryBlock::BLOCK_FIRST
                      | MemoryBlock::BLOCK_LAST;
    freeBlock->mPadding = 0;
    freeBlock->mGroupID = 0;

    heap->mFreeHead = freeBlock;
    heap->mUsedHead = nullptr;
    heap->mAllocDir = ALLOC_BOTTOM;
    heap->mGroupID = 0;
    heap->mTotalFreeSize = static_cast<u32>(memEnd - (memStart + sizeof(MemoryBlock)));

    heap->setParent(parent);
    heap->mName[0] = '\0';

    return heap;
}

// @addr 0x80459cd0 / 0x80459c4c — allocate from this ExpHeap
// Based on decompiled ExpHeap::alloc(u32 size, s32 align):
//   - Checks HEAP_FLAG_LOCKED (original: OSPanic("DAME DAME"))
//   - Dispatches to allocFromTop or allocFromBottom based on mAllocDir
//   - Original delegates to MEMAllocFromExpHeapEx; here we use our
//     MemoryBlock free list.
void* ExpHeap::alloc(u32 size, s32 align) {
    // Lock check — from decompiled: if (mFlag & HEAP_FLAG_LOCKED) OSPanic(...)
    if (hasFlag(FLAG_LOCKED))
        return nullptr;

    if (align <= 0)
        align = 4;

    if (mAllocDir == ALLOC_TOP)
        return allocFromTop(size, align);
    else
        return allocFromBottom(size, align);
}

// @addr 0x80459c4c — allocate from bottom (low addresses toward high)
// Reimplements MEMAllocFromExpHeapEx bottom-alloc path using MemoryBlock list.
void* ExpHeap::allocFromBottom(u32 size, s32 align) {
    // First-fit search through free list
    for (MemoryBlock* freeBlock = mFreeHead; freeBlock != nullptr;
         freeBlock = freeBlock->mNext) {
        u8* regionStart = static_cast<u8*>(freeBlock->mStart);
        u8* regionEnd = static_cast<u8*>(freeBlock->mEnd);

        if (regionEnd - regionStart < static_cast<s32>(sizeof(MemoryBlock)))
            continue;

        // Compute the aligned user-data address within this free block.
        // The MemoryBlock header will be placed immediately before it.
        uintptr_t startVal = reinterpret_cast<uintptr_t>(regionStart);
        uintptr_t alignedVal = (startVal + static_cast<uintptr_t>(align) - 1)
                               & ~(static_cast<uintptr_t>(align) - 1);
        u8* userAddr = reinterpret_cast<u8*>(alignedVal);

        // Ensure the MemoryBlock header fits before userAddr
        if (userAddr - regionStart < static_cast<s32>(sizeof(MemoryBlock)))
            userAddr = regionStart + sizeof(MemoryBlock);

        // Recompute alignment after potential adjustment
        uintptr_t userVal = reinterpret_cast<uintptr_t>(userAddr);
        if (align > 4) {
            userVal = (userVal + static_cast<uintptr_t>(align) - 1)
                      & ~(static_cast<uintptr_t>(align) - 1);
            userAddr = reinterpret_cast<u8*>(userVal);
        }

        u8* userEnd = userAddr + size;

        // Check if the user region + trailing free block fits
        u8* freeBlockEnd = static_cast<u8*>(freeBlock->mEnd);
        if (userEnd > freeBlockEnd)
            continue;

        // We can use this free block. Create the used MemoryBlock header.
        MemoryBlock* usedBlock = reinterpret_cast<MemoryBlock*>(
            userAddr - sizeof(MemoryBlock));

        usedBlock->mPrev = nullptr;
        usedBlock->mNext = nullptr;
        usedBlock->mStart = userAddr;
        usedBlock->mEnd = userEnd;
        usedBlock->mFlags = MemoryBlock::BLOCK_USED;
        usedBlock->mPadding = 0;
        usedBlock->mGroupID = mGroupID;

        // Update free list: remove old free block, possibly insert remainder
        MemoryBlock* freePrev = freeBlock->mPrev;
        MemoryBlock* freeNext = freeBlock->mNext;

        u8* usedHeaderStart = reinterpret_cast<u8*>(usedBlock);

        if (usedHeaderStart > regionStart && freePrev == nullptr) {
            // Gap between region start and used header — wasted (or future coalesce)
        }

        // Check if there's enough space after userEnd for a new free block
        if (userEnd + static_cast<s32>(sizeof(MemoryBlock)) <= freeBlockEnd) {
            MemoryBlock* newFree = reinterpret_cast<MemoryBlock*>(userEnd);
            newFree->mPrev = freePrev;
            newFree->mNext = freeNext;
            newFree->mStart = userEnd + sizeof(MemoryBlock);
            newFree->mEnd = freeBlockEnd;
            newFree->mFlags = MemoryBlock::BLOCK_FREE;
            newFree->mPadding = 0;
            newFree->mGroupID = 0;

            // Link new free block into free list
            if (newFree->mPrev)
                newFree->mPrev->mNext = newFree;
            else
                mFreeHead = newFree;
            if (newFree->mNext)
                newFree->mNext->mPrev = newFree;

            // Update free size (subtract: used data + used header overhead
            // that was part of the old free block's data area)
            u32 usedDataSize = static_cast<u32>(userEnd - userAddr);
            mTotalFreeSize -= (usedDataSize
                + static_cast<u32>(userAddr - regionStart) // gap / header space
                + sizeof(MemoryBlock));  // new free block header
        } else {
            // Not enough space for a trailing free block — give remainder to used
            usedBlock->mEnd = freeBlockEnd;
            u32 totalConsumed = static_cast<u32>(freeBlockEnd - regionStart);

            if (freePrev)
                freePrev->mNext = freeNext;
            else
                mFreeHead = freeNext;
            if (freeNext)
                freeNext->mPrev = freePrev;

            u32 usedDataSize = static_cast<u32>(
                static_cast<u8*>(usedBlock->mEnd) - userAddr);
            mTotalFreeSize -= usedDataSize;
        }

        // Add used block to head of used list
        usedBlock->mNext = mUsedHead;
        if (mUsedHead)
            mUsedHead->mPrev = usedBlock;
        mUsedHead = usedBlock;

        // Update allocated size
        u32 blockSize = static_cast<u32>(
            static_cast<u8*>(usedBlock->mEnd) - userAddr);
        mAllocatedSize += blockSize;

        // Zero-fill if requested
        if (hasFlag(FLAG_ZERO_FILL))
            std::memset(userAddr, 0, size);

        return userAddr;
    }

    return nullptr;
}

// @addr 0x80459cd0 — allocate from top (high addresses toward low)
// Reimplements MEMAllocFromExpHeapEx top-alloc path using MemoryBlock list.
void* ExpHeap::allocFromTop(u32 size, s32 align) {
    // Search free list for the best-fit block from the top
    for (MemoryBlock* freeBlock = mFreeHead; freeBlock != nullptr;
         freeBlock = freeBlock->mNext) {
        u8* regionStart = static_cast<u8*>(freeBlock->mStart);
        u8* regionEnd = static_cast<u8*>(freeBlock->mEnd);

        if (regionEnd - regionStart < static_cast<s32>(sizeof(MemoryBlock)))
            continue;

        // For top allocation: align the END of the user region, then derive start
        uintptr_t endVal = reinterpret_cast<uintptr_t>(regionEnd);
        uintptr_t alignedEndVal = endVal & ~(static_cast<uintptr_t>(align) - 1);
        u8* userEnd = reinterpret_cast<u8*>(alignedEndVal);
        u8* userStart = userEnd - size;

        // Ensure user start is within the region and header fits before it
        if (userStart < regionStart)
            continue;

        MemoryBlock* usedBlock = reinterpret_cast<MemoryBlock*>(
            userStart - sizeof(MemoryBlock));
        if (reinterpret_cast<u8*>(usedBlock) < regionStart)
            continue;

        // Create the used MemoryBlock header
        usedBlock->mPrev = nullptr;
        usedBlock->mNext = nullptr;
        usedBlock->mStart = userStart;
        usedBlock->mEnd = userEnd;
        usedBlock->mFlags = MemoryBlock::BLOCK_USED;
        usedBlock->mPadding = 0;
        usedBlock->mGroupID = mGroupID;

        MemoryBlock* freePrev = freeBlock->mPrev;
        MemoryBlock* freeNext = freeBlock->mNext;
        u8* usedHeaderStart = reinterpret_cast<u8*>(usedBlock);

        // Check if there's space before the used block for a new free block
        if (regionStart + sizeof(MemoryBlock) <= usedHeaderStart) {
            MemoryBlock* newFree = reinterpret_cast<MemoryBlock*>(regionStart);
            newFree->mPrev = freePrev;
            newFree->mNext = freeNext;
            newFree->mStart = regionStart + sizeof(MemoryBlock);
            newFree->mEnd = usedHeaderStart;
            newFree->mFlags = MemoryBlock::BLOCK_FREE;
            newFree->mPadding = 0;
            newFree->mGroupID = 0;

            if (newFree->mPrev)
                newFree->mPrev->mNext = newFree;
            else
                mFreeHead = newFree;
            if (newFree->mNext)
                newFree->mNext->mPrev = newFree;

            u32 usedDataSize = static_cast<u32>(userEnd - userStart);
            u32 headerSpace = static_cast<u32>(usedHeaderStart - regionStart);
            mTotalFreeSize -= (usedDataSize + headerSpace + sizeof(MemoryBlock));
        } else {
            // No room for a leading free block — consume entire region
            usedBlock->mStart = regionStart + sizeof(MemoryBlock);
            if (freePrev)
                freePrev->mNext = freeNext;
            else
                mFreeHead = freeNext;
            if (freeNext)
                freeNext->mPrev = freePrev;

            u32 usedDataSize = static_cast<u32>(
                static_cast<u8*>(usedBlock->mEnd) - static_cast<u8*>(usedBlock->mStart));
            mTotalFreeSize -= usedDataSize;
        }

        // Add used block to head of used list
        usedBlock->mNext = mUsedHead;
        if (mUsedHead)
            mUsedHead->mPrev = usedBlock;
        mUsedHead = usedBlock;

        u32 blockSize = static_cast<u32>(
            static_cast<u8*>(usedBlock->mEnd) - static_cast<u8*>(usedBlock->mStart));
        mAllocatedSize += blockSize;

        if (hasFlag(FLAG_ZERO_FILL))
            std::memset(usedBlock->mStart, 0, size);

        return usedBlock->mStart;
    }

    return nullptr;
}

// @addr 0x8045b284 — free an allocated block
// Based on decompiled ExpHeap::free(void* block) which calls MEMFreeToExpHeap.
// Here we manipulate the MemoryBlock linked lists directly.
void ExpHeap::free(void* ptr) {
    if (!ptr)
        return;

    // The MemoryBlock header is stored immediately before the user data
    MemoryBlock* block = reinterpret_cast<MemoryBlock*>(
        static_cast<u8*>(ptr) - sizeof(MemoryBlock));

    // Update accounting
    u32 blockSize = static_cast<u32>(
        static_cast<u8*>(block->mEnd) - static_cast<u8*>(block->mStart));
    mAllocatedSize -= blockSize;
    mTotalFreeSize += blockSize;

    // Remove from used list
    if (block->mPrev)
        block->mPrev->mNext = block->mNext;
    else
        mUsedHead = block->mNext;
    if (block->mNext)
        block->mNext->mPrev = block->mPrev;

    // Mark as free
    block->mFlags = MemoryBlock::BLOCK_FREE;
    block->mGroupID = 0;

    // Insert at head of free list
    block->mPrev = nullptr;
    block->mNext = mFreeHead;
    if (mFreeHead)
        mFreeHead->mPrev = block;
    mFreeHead = block;

    // Debug fill pattern (original: 0xBAADF00D)
    if (hasFlag(FLAG_DEBUG_FILL))
        std::memset(block->mStart, 0xBA, blockSize);
}

// @addr 0x8045b070 — destroy this ExpHeap
// Based on decompiled ExpHeap::destroy():
//   Heap* parentHeap = findParentHeap();
//   (*this).~ExpHeap();
//   if (parentHeap) parentHeap->free(this);
void ExpHeap::destroy() {
    Heap* parentHeap = getParent();

    // Explicit destructor call — cleans up children, frees MEM heap
    this->~ExpHeap();

    if (parentHeap)
        parentHeap->free(this);
}

// @addr 0x8045c6c0 — get allocatable size for a given alignment
// Based on decompiled ExpHeap::getAllocatableSize(s32 align) which calls
// MEMGetAllocatableSizeForExpHeapEx(mHeapHandle, align).
// We walk the free list to find the maximum contiguous region that can
// satisfy the alignment constraint.
u32 ExpHeap::getAllocatableSize(s32 align) const {
    if (align <= 0)
        align = 4;

    u32 maxAllocatable = 0;

    for (const MemoryBlock* block = mFreeHead; block != nullptr;
         block = block->mNext) {
        u8* dataStart = static_cast<u8*>(block->mStart);
        u8* dataEnd = static_cast<u8*>(block->mEnd);

        // Compute aligned start within this free region
        uintptr_t startVal = reinterpret_cast<uintptr_t>(dataStart);
        uintptr_t alignedVal = (startVal + static_cast<uintptr_t>(align) - 1)
                               & ~(static_cast<uintptr_t>(align) - 1);

        // Account for MemoryBlock header overhead
        if (alignedVal + sizeof(MemoryBlock) > reinterpret_cast<uintptr_t>(dataEnd))
            continue;

        u8* userStart = reinterpret_cast<u8*>(alignedVal + sizeof(MemoryBlock));
        // Re-align user start
        uintptr_t userVal = (reinterpret_cast<uintptr_t>(userStart)
            + static_cast<uintptr_t>(align) - 1)
            & ~(static_cast<uintptr_t>(align) - 1);
        userStart = reinterpret_cast<u8*>(userVal);

        if (userStart >= dataEnd)
            continue;

        u32 available = static_cast<u32>(dataEnd - userStart);
        if (available > maxAllocatable)
            maxAllocatable = available;
    }

    return maxAllocatable;
}

// @addr 0x8045c890 — get total free size
// Based on decompiled ExpHeap::getTotalFreeSize():
//   return MEMGetTotalFreeSizeForExpHeap(mHeapHandle);
u32 ExpHeap::getTotalFreeSize() const {
    return mTotalFreeSize;
}

// @addr 0x8045cbe8 — initialize heap from a memory region
// Based on decompiled init patterns: sets up start/end, creates
// a single free MemoryBlock spanning the region.
void ExpHeap::init(void* start, u32 size) {
    mStart = start;
    mEnd = static_cast<u8*>(start) + size;
    mSize = size;
    mAllocatedSize = 0;

    u8* memStart = static_cast<u8*>(start);
    u8* memEnd = memStart + size;

    if (static_cast<s32>(memEnd - memStart) >= static_cast<s32>(sizeof(MemoryBlock) + 1)) {
        MemoryBlock* freeBlock = reinterpret_cast<MemoryBlock*>(memStart);
        freeBlock->mPrev = nullptr;
        freeBlock->mNext = nullptr;
        freeBlock->mStart = memStart + sizeof(MemoryBlock);
        freeBlock->mEnd = memEnd;
        freeBlock->mFlags = MemoryBlock::BLOCK_FREE
                          | MemoryBlock::BLOCK_FIRST
                          | MemoryBlock::BLOCK_LAST;
        freeBlock->mPadding = 0;
        freeBlock->mGroupID = 0;

        mFreeHead = freeBlock;
        mTotalFreeSize = static_cast<u32>(memEnd - (memStart + sizeof(MemoryBlock)));
    } else {
        mFreeHead = nullptr;
        mTotalFreeSize = 0;
    }

    mUsedHead = nullptr;
}

// @addr 0x8045ab60 — free all allocated blocks
// Based on decompiled ExpHeap::freeAll():
//   Heap::dispose();
//   MEMVisitAllocatedForExpHeap(mHeapHandle, &free_all_visitor, 0);
// Disposes children, then returns all used blocks to the free list.
void ExpHeap::freeAll() {
    // Move all used blocks back to the free list
    MemoryBlock* block = mUsedHead;
    while (block != nullptr) {
        MemoryBlock* next = block->mNext;

        u32 blockSize = static_cast<u32>(
            static_cast<u8*>(block->mEnd) - static_cast<u8*>(block->mStart));
        mAllocatedSize -= blockSize;
        mTotalFreeSize += blockSize;

        block->mFlags = MemoryBlock::BLOCK_FREE;
        block->mGroupID = 0;
        block->mPrev = nullptr;
        block->mNext = mFreeHead;
        if (mFreeHead)
            mFreeHead->mPrev = block;
        mFreeHead = block;

        block = next;
    }
    mUsedHead = nullptr;

    // Coalesce adjacent free blocks into a single block.
    // Walk the free list and merge any pair of adjacent blocks
    // where block1->mEnd == block2->mStart. This matches the
    // MEMVisitAllocatedForExpHeap + free_all_visitor behavior.
    if (!mFreeHead)
        return;

    // Sort free blocks by address so we can check adjacency.
    // Simple insertion sort — the free list is usually small after freeAll().
    MemoryBlock* sorted = nullptr;
    for (MemoryBlock* block = mFreeHead; block != nullptr; ) {
        MemoryBlock* next = block->mNext;
        block->mPrev = nullptr;
        block->mNext = nullptr;

        if (!sorted || block->mStart < sorted->mStart) {
            block->mNext = sorted;
            if (sorted) sorted->mPrev = block;
            sorted = block;
        } else {
            MemoryBlock* cur = sorted;
            while (cur->mNext && cur->mNext->mStart < block->mStart)
                cur = cur->mNext;
            block->mNext = cur->mNext;
            block->mPrev = cur;
            if (cur->mNext) cur->mNext->mPrev = block;
            cur->mNext = block;
        }
        block = next;
    }

    // Merge adjacent blocks
    MemoryBlock* merged = sorted;
    MemoryBlock* prev = nullptr;
    while (merged) {
        MemoryBlock* next = merged->mNext;
        while (next && merged->mEnd == next->mStart) {
            // Extend current block to cover next block
            merged->mEnd = next->mEnd;
            // Remove next from list
            merged->mNext = next->mNext;
            if (next->mNext) next->mNext->mPrev = merged;
            next = merged->mNext;
        }
        merged->mPrev = prev;
        if (prev) prev->mNext = merged;
        prev = merged;
        merged = next;
    }

    mFreeHead = sorted;
}

// @addr 0x8045ccd8 — debug dump
void ExpHeap::dump() const {
    // No decompiled source available
}

// @addr 0x8045a84c — reallocate a block
// No direct decompiled source. Follows standard realloc pattern:
// allocate new, copy, free old.
void* ExpHeap::realloc(void* ptr, u32 newSize) {
    if (!ptr)
        return alloc(newSize, 4);
    if (newSize == 0) {
        free(ptr);
        return nullptr;
    }

    // Find current allocation size
    MemoryBlock* block = reinterpret_cast<MemoryBlock*>(
        static_cast<u8*>(ptr) - sizeof(MemoryBlock));
    u32 currentSize = static_cast<u32>(
        static_cast<u8*>(block->mEnd) - static_cast<u8*>(block->mStart));

    if (newSize <= currentSize)
        return ptr;

    void* newPtr = alloc(newSize, 4);
    if (newPtr) {
        std::memcpy(newPtr, ptr, currentSize);
        free(ptr);
    }
    return newPtr;
}

// @addr 0x8045aaf8 — get total used size
// Based on decompiled pattern: MEMVisitAllocatedForExpHeap to sum sizes.
u32 ExpHeap::getTotalUsedSize() const {
    return mAllocatedSize;
}

// @addr 0x8045a88c — free all blocks in a group
// No direct decompiled source.
void ExpHeap::freeGroup(u16 groupID) {
    UNUSED(groupID);
    // Would iterate mUsedHead and free blocks where mGroupID matches
}

// @addr 0x8045973c — find the heap containing a pointer
// Original uses MEMFindContainHeap (SDK). Not implementable without SDK.
Heap* ExpHeap::findContainHeap(const void* ptr) {
    UNUSED(ptr);
    return nullptr;
}

// @addr 0x80455828 — placement new validator (top alloc path)
void* ExpHeap::operatorValidateTop(void* ptr, u32 size) {
    UNUSED(size);
    return ptr;
}

// @addr 0x80455868 — placement new validator (bottom alloc path)
void* ExpHeap::operatorValidateBottom(void* ptr, u32 size) {
    UNUSED(size);
    return ptr;
}

// ============================================================
// EGG::FrameHeap
// ============================================================
// NOTE: No decompiled source available for FrameHeap.
// Functional stubs: create/init/saveState/restoreState/freeAll are implemented;
// alloc/free are no-ops (LIFO frame allocator requires full watermark tracking).

FrameHeap* FrameHeap::create(Heap* parent, u32 size, s32 align) {
    if (size == static_cast<u32>(-1))
        size = parent->getAllocatableSize(4);

    // Size includes the FrameHeap object (matches ExpHeap convention)
    void* mem = parent->alloc(size, align);
    if (!mem) return nullptr;

    FrameHeap* heap = new (mem) FrameHeap();
    heap->setParent(parent);
    heap->mStart = static_cast<u8*>(mem) + sizeof(FrameHeap);
    heap->mEnd = static_cast<u8*>(mem) + size;
    heap->mSize = size - sizeof(FrameHeap);
    heap->mWatermark = heap->mStart;
    heap->mFrameWatermark = heap->mStart;
    return heap;
}

void* FrameHeap::alloc(u32 size, s32 align) {
    // @addr 0x8045cb40 — no decompiled source
    UNUSED(size); UNUSED(align);
    return nullptr;
}

void FrameHeap::free(void* ptr) {
    // @addr 0x8045cb80 — no decompiled source
    UNUSED(ptr);
}

void FrameHeap::destroy() {
    // @addr 0x8045b170
    if (mParent) {
        mParent->free(this);
    }
}

u32 FrameHeap::getAllocatableSize(s32 align) const {
    // @addr 0x8045d468
    UNUSED(align);
    u32 used = static_cast<u32>((u8*)mWatermark - (u8*)mStart);
    return mSize - used;
}

u32 FrameHeap::getTotalFreeSize() const {
    return getAllocatableSize(4);
}

void FrameHeap::init(void* start, u32 size) {
    // @addr 0x8045d210 — no decompiled source
    mStart = start;
    mEnd = static_cast<u8*>(start) + size;
    mSize = size;
    mWatermark = start;
    mFrameWatermark = start;
}

void FrameHeap::dump() const {
    // @addr 0x8045d284 — no decompiled source
}

void FrameHeap::saveState() {
    // @addr 0x8045d67c — no decompiled source
    mFrameWatermark = mWatermark;
}

void FrameHeap::restoreState() {
    // @addr 0x8045d724 — no decompiled source
    mWatermark = mFrameWatermark;
}

void FrameHeap::freeAll() {
    // @addr 0x8045d834 — no decompiled source
    mWatermark = mStart;
    mFrameWatermark = mStart;
}

u32 FrameHeap::getFreeSize() const {
    // @addr 0x8045d468
    return getAllocatableSize(4);
}

void* FrameHeap::operatorValidate(void* ptr, u32 size) {
    // @addr 0x80456390
    UNUSED(size);
    return ptr;
}

// ============================================================
// EGG::AdminHeap
// ============================================================
// NOTE: No decompiled source available for AdminHeap.
// Functional stubs: create returns nullptr (requires OSCreateHeap from SDK).
// All virtual methods return safe default values (nullptr / 0).

AdminHeap* AdminHeap::create(u32 size, s32 align) {
    // @addr 0x80451668 — original calls OSCreateHeap
    UNUSED(size); UNUSED(align);
    return nullptr;
}

void* AdminHeap::alloc(u32 size, s32 align) {
    // @addr 0x80450068 — no decompiled source
    UNUSED(size); UNUSED(align);
    return nullptr;
}

void AdminHeap::free(void* ptr) {
    // @addr 0x80451b60 — no decompiled source
    UNUSED(ptr);
}

void AdminHeap::destroy() {
    // @addr 0x8045100c — no decompiled source
}

u32 AdminHeap::getAllocatableSize(s32 align) const {
    // @addr 0x80451d84 — no decompiled source
    UNUSED(align);
    return 0;
}

u32 AdminHeap::getTotalFreeSize() const {
    return 0;
}

void AdminHeap::init(void* start, u32 size) {
    // @addr 0x8045a5bc — no decompiled source
    mStart = start;
    mEnd = static_cast<u8*>(start) + size;
    UNUSED(size);
}

void AdminHeap::dump() const {
    // @addr 0x8045a190 — no decompiled source
}

void* AdminHeap::operatorValidate(void* ptr, u32 size) {
    // @addr 0x80450014
    UNUSED(size);
    return ptr;
}

} // namespace EGG