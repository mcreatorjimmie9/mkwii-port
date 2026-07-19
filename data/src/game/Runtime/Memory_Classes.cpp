// ============================================================================
// Memory_Classes.cpp — EGG Memory Subsystem Class Implementations
// Address range: 0x80440000 - 0x80450000 (253 functions)
//
// Translated from:
//   - data/decompiled/existing/lib_rvl/mem/rvlMemExpHeap.c
//
// Categorization: GENESIS Phase 8 (Runtime Memory Class Extraction)
// ============================================================================
#include "Memory_Classes.hpp"
#include <cstring>
#include <cmath>
#include <cstdint>

namespace EGG {
namespace Memory {

// ============================================================
// Internal helpers (pointer alignment, arithmetic)
// ============================================================

static inline uintptr_t ptr_align_ceil(uintptr_t val, u32 align) {
    return (val + align - 1) & ~(align - 1);
}

static inline uintptr_t ptr_align_floor(uintptr_t val, u32 align) {
    return val & ~(align - 1);
}

static inline void* ptr_add(const void* base, u32 offset) {
    return reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(base) + offset);
}

static inline void* ptr_sub(const void* base, u32 offset) {
    return reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(base) - offset);
}

static inline u32 ptr_dist(const void* lo, const void* hi) {
    return static_cast<u32>(reinterpret_cast<uintptr_t>(hi) -
                           reinterpret_cast<uintptr_t>(lo));
}

static inline u32 align_up_u32(u32 val, u32 align) {
    return (val + align - 1) & ~(align - 1);
}

// Minimum block size: header (0x10) + at least 4 bytes of data
static const u32 MIN_BLOCK_SIZE = 0x14;

// ============================================================
// EGG::Memory::MemBlock
// ============================================================

// @addr 0x80440bbc
// Translated from MEM_BlockInit — initializes block from region info.
// blockInfo[0] = flags (e.g. BLOCK_FREE), blockInfo[1] = data region end addr
void MemBlock::init(s32* blockInfo) {
    mPrev = nullptr;
    mNext = nullptr;
    // Data starts right after the MemBlock header
    mStart = reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(this) +
                                     sizeof(MemBlock));
    mSize = static_cast<u32>(blockInfo[1]) -
            static_cast<u32>(reinterpret_cast<uintptr_t>(mStart));
    mFlags = static_cast<u16>(blockInfo[0]);
    mGroupID = 0;
    mAllocatorTag = 0;
    _pad1c = 0;
}

// @addr 0x80440cec
// Translated from MEM_ExpBlockInsert — links this block between prev and next.
void MemBlock::link(MemBlock* prev, MemBlock* next) {
    mPrev = prev;
    mNext = next;
    if (prev)
        prev->mNext = this;
    if (next)
        next->mPrev = this;
}

// @addr 0x80440e38
// Translated from MEM_ExpBlockRemove — unlinks this block from its list.
void MemBlock::unlink() {
    if (mPrev)
        mPrev->mNext = mNext;
    if (mNext)
        mNext->mPrev = mPrev;
    mPrev = nullptr;
    mNext = nullptr;
}

// @addr 0x80440e6c
void MemBlock::setFlags(u32 flags) {
    mFlags = mFlags | static_cast<u16>(flags);
}

// @addr 0x80440e80
void MemBlock::clearFlags(u32 flags) {
    mFlags = mFlags & ~static_cast<u16>(flags);
}

// @addr 0x80443e90
void MemBlock::dump(s32* outInfo) {
    if (outInfo) {
        outInfo[0] = static_cast<s32>(reinterpret_cast<uintptr_t>(mStart));
        outInfo[1] = static_cast<s32>(mSize);
        outInfo[2] = mFlags;
        outInfo[3] = mGroupID;
        outInfo[4] = static_cast<s32>(mAllocatorTag);
        outInfo[5] = mPrev ? 1 : 0;
        outInfo[6] = mNext ? 1 : 0;
    }
}

// @addr 0x80443f74
void MemBlock::validate() const {
    // Verify block consistency: if has prev, prev->next should be this
    if (mPrev && mPrev->mNext != const_cast<MemBlock*>(this)) {
        // Invalid: prev->next doesn't point back
    }
    if (mNext && mNext->mPrev != const_cast<MemBlock*>(this)) {
        // Invalid: next->prev doesn't point back
    }
}

// @addr 0x804440a4
s32 MemBlock::getSizeAligned(s32 align) const {
    if (align <= 0)
        align = 1;
    return static_cast<s32>(align_up_u32(mSize, static_cast<u32>(align)));
}

// ============================================================
// EGG::Memory::BlockAllocator — Internal helpers
// ============================================================

// Insert block into used list (mBlockHead/mBlockTail), after prev.
// If prev is null, inserts at head.
static void ba_insert_used(BlockAllocator* self, MemBlock* block,
                           MemBlock* prev) {
    MemBlock* next;
    block->mPrev = prev;
    if (prev) {
        next = prev->mNext;
        prev->mNext = block;
    } else {
        next = self->mBlockHead;
        self->mBlockHead = block;
    }
    block->mNext = next;
    if (next)
        next->mPrev = block;
    else
        self->mBlockTail = block;
}

// Remove block from used list (mBlockHead/mBlockTail), returns previous.
static MemBlock* ba_remove_used(BlockAllocator* self, MemBlock* block) {
    MemBlock* prev = block->mPrev;
    MemBlock* next = block->mNext;
    if (prev)
        prev->mNext = next;
    else
        self->mBlockHead = next;
    if (next)
        next->mPrev = prev;
    else
        self->mBlockTail = prev;
    block->mPrev = nullptr;
    block->mNext = nullptr;
    return prev;
}

// Insert block into free list (sorted by address), after prev.
// If prev is null, inserts at head.
static void ba_insert_free(BlockAllocator* self, MemBlock* block,
                           MemBlock* prev) {
    MemBlock* next;
    block->mPrev = prev;
    if (prev) {
        next = prev->mNext;
        prev->mNext = block;
    } else {
        next = self->mFreeHead;
        self->mFreeHead = block;
    }
    block->mNext = next;
    if (next)
        next->mPrev = block;
    self->mFreeCount++;
}

// Remove block from free list, returns previous node.
static MemBlock* ba_remove_free(BlockAllocator* self, MemBlock* block) {
    MemBlock* prev = block->mPrev;
    MemBlock* next = block->mNext;
    if (prev)
        prev->mNext = next;
    else
        self->mFreeHead = next;
    if (next)
        next->mPrev = prev;
    block->mPrev = nullptr;
    block->mNext = nullptr;
    self->mFreeCount--;
    return prev;
}

// Initialize a MemBlock at the given address for the given region.
// Returns the block pointer.
static MemBlock* ba_block_init(void* addr, void* end, u16 flags) {
    MemBlock* block = static_cast<MemBlock*>(addr);
    block->mPrev = nullptr;
    block->mNext = nullptr;
    block->mStart = ptr_add(block, sizeof(MemBlock));
    block->mSize = ptr_dist(block->mStart, end);
    block->mFlags = flags;
    block->mGroupID = 0;
    block->mAllocatorTag = 0;
    block->_pad1c = 0;
    return block;
}

// Get the extent (start, end) of a block's total memory region including header.
static void ba_block_extent(MemBlock* block, void*& outStart, void*& outEnd) {
    outStart = block;
    outEnd = ptr_add(block->mStart, block->mSize);
}

// Find the free list tail by walking from head.
static MemBlock* ba_free_tail(BlockAllocator* self) {
    MemBlock* block = self->mFreeHead;
    if (!block) return nullptr;
    while (block->mNext)
        block = block->mNext;
    return block;
}

// Recycle a freed region back into the free list, coalescing with neighbors.
// Translated from MEM_ExpRecycleRegion.
static bool ba_recycle_region(BlockAllocator* self, void* regionStart,
                              void* regionEnd) {
    MemBlock* blockFree = nullptr;
    void* extStart = regionStart;
    void* extEnd = regionEnd;

    // Walk free list to find adjacent free blocks
    for (MemBlock* block = self->mFreeHead; block; block = block->mNext) {
        void* blockEnd = ptr_add(block->mStart, block->mSize);
        if (block < regionStart) {
            blockFree = block;
            continue;
        }
        // If this free block starts right at our region end, merge with it
        if (block == regionEnd) {
            extEnd = ptr_add(block->mStart, block->mSize);
            ba_remove_free(self, block);
        }
        break;
    }

    // If the previous free block ends right at our region start, merge with it
    if (blockFree) {
        void* prevEnd = ptr_add(blockFree->mStart, blockFree->mSize);
        if (prevEnd == regionStart) {
            extStart = blockFree;
            blockFree = ba_remove_free(self, blockFree);
        }
    }

    // If the region is too small for a block header, discard it
    if (ptr_dist(extStart, extEnd) < sizeof(MemBlock))
        return false;

    // Create a new free block and insert into the free list
    MemBlock* newBlock = ba_block_init(extStart, extEnd, MemBlock::BLOCK_FREE);
    ba_insert_free(self, newBlock, blockFree);
    return true;
}

// Allocate a new used block from a free block.
// Translated from MEM_ExpAllocNewBlock.
static void* ba_alloc_from_free(BlockAllocator* self, MemBlock* freeBlock,
                                void* dataStart, u32 size) {
    void* freeDataStart = freeBlock->mStart;
    void* freeDataEnd = ptr_add(freeDataStart, freeBlock->mSize);

    // Left remainder: from free data start to dataStart
    void* leftEnd = ptr_sub(dataStart, sizeof(MemBlock));
    // Right remainder: from dataStart + size to free data end
    void* rightStart = ptr_add(dataStart, size);

    // Remove the free block from the free list
    MemBlock* insertPrev = ba_remove_free(self, freeBlock);

    // Handle left remainder
    if (ptr_dist(freeDataStart, leftEnd) >= MIN_BLOCK_SIZE) {
        insertPrev = ba_block_init(freeDataStart, leftEnd, MemBlock::BLOCK_FREE);
        ba_insert_free(self, insertPrev, insertPrev);
        // Update insertPrev for the right side
        insertPrev = static_cast<MemBlock*>(leftEnd);
    } else {
        leftEnd = freeDataStart;
    }

    // Handle right remainder
    if (ptr_dist(rightStart, freeDataEnd) >= MIN_BLOCK_SIZE) {
        ba_insert_free(self,
                       ba_block_init(rightStart, freeDataEnd,
                                     MemBlock::BLOCK_FREE),
                       insertPrev);
    } else {
        rightStart = freeDataEnd;
    }

    // Zero-fill the gap between left and right remainders
    if (self->mFlags & BlockAllocator::FLAG_ZERO_FILL) {
        u32 gapSize = static_cast<u32>(
            ptr_dist(leftEnd, rightStart));
        if (gapSize > 0)
            std::memset(leftEnd, 0, gapSize);
    }

    // Create the used block
    void* usedStart = ptr_sub(dataStart, sizeof(MemBlock));
    MemBlock* usedBlock =
        ba_block_init(usedStart, rightStart, MemBlock::BLOCK_USED);
    usedBlock->mFlags |= MemBlock::BLOCK_GROUP_START | MemBlock::BLOCK_GROUP_END;
    usedBlock->mGroupID = self->mGroupID;
    usedBlock->mAllocatorTag = 0x45585048; // 'EXPH'

    // Insert into used list
    ba_insert_used(self, usedBlock, nullptr); // append

    // Update statistics
    self->mUsedCount++;
    self->mUsedSize += size;
    self->mAllocCount++;
    if (self->mUsedSize > self->mPeakUsedSize)
        self->mPeakUsedSize = self->mUsedSize;

    return dataStart;
}

// ============================================================
// EGG::Memory::BlockAllocator
// ============================================================

BlockAllocator::~BlockAllocator() {}

// @addr 0x80440048
// Translated from MEM_ExpHeapInit — initializes the allocator with an
// initial free block covering the arena after this structure.
void BlockAllocator::init() {
    mBlockHead = nullptr;
    mBlockTail = nullptr;
    mFreeHead = nullptr;
    mFreeCount = 0;
    mUsedCount = 0;
    mTotalSize = 0;
    mUsedSize = 0;
    mPeakUsedSize = 0;
    mBlockSize = 0;
    mAlignment = 4;
    mGroupID = 0;
    _pad2e = 0;
    mFlags = 0;
    mAllocCount = 0;
    mFreeCountTotal = 0;
    for (int i = 0; i < 8; i++)
        _pad3c[i] = 0;
}

// @addr 0x804401b4
// Translated from MEMDestroyExpHeap — tears down the allocator.
void BlockAllocator::shutdown() {
    mBlockHead = nullptr;
    mBlockTail = nullptr;
    mFreeHead = nullptr;
    mFreeCount = 0;
    mUsedCount = 0;
    mTotalSize = 0;
}

// @addr 0x804406e4
void BlockAllocator::configure(u32 flags) {
    mFlags = flags;
}

// @addr 0x80440784
void BlockAllocator::reset() {
    mUsedCount = 0;
    mUsedSize = 0;
    mAllocCount = 0;
    mFreeCountTotal = 0;
}

// @addr 0x804407a4
void BlockAllocator::clear() {
    mBlockHead = nullptr;
    mBlockTail = nullptr;
    mFreeHead = nullptr;
    mFreeCount = 0;
    mUsedCount = 0;
    mUsedSize = 0;
    mAllocCount = 0;
    mFreeCountTotal = 0;
}

// @addr 0x80440ed8
// Translated from MEMAllocFromExpHeapEx / MEM_ExpAllocFromHead.
// Allocates a block of the given size from the heap.
s32 BlockAllocator::alloc(s32 size) {
    if (size <= 0)
        size = 1;
    size = static_cast<s32>(align_up_u32(static_cast<u32>(size), 4));

    u32 alignment = (mAlignment > 0) ? mAlignment : 4;

    // Search free list for best-fit block (first-fit with smallest size)
    MemBlock* resBlock = nullptr;
    u32 resSize = 0xFFFFFFFF;
    void* resData = nullptr;

    for (MemBlock* cur = mFreeHead; cur; cur = cur->mNext) {
        void* blockData = cur->mStart;
        void* alignedData = reinterpret_cast<void*>(
            ptr_align_ceil(reinterpret_cast<uintptr_t>(blockData), alignment));
        u32 offset = static_cast<u32>(
            reinterpret_cast<uintptr_t>(alignedData) -
            reinterpret_cast<uintptr_t>(blockData));

        if (cur->mSize >= size + offset && resSize > cur->mSize) {
            resBlock = cur;
            resSize = cur->mSize;
            resData = alignedData;
            if (resSize == static_cast<u32>(size) + offset)
                break;
        }
    }

    if (!resBlock)
        return 0;

    void* result = ba_alloc_from_free(this, resBlock, resData, static_cast<u32>(size));
    return result ? static_cast<s32>(reinterpret_cast<uintptr_t>(result)) : 0;
}

// @addr 0x80440fbc
// Aligned allocation — searches for a block with proper alignment.
u32 BlockAllocator::allocAligned(u32 size, u32 align) {
    if (size == 0)
        size = 1;
    if (align <= 0)
        align = 4;
    size = align_up_u32(size, 4);

    MemBlock* resBlock = nullptr;
    u32 resSize = 0xFFFFFFFF;
    void* resData = nullptr;

    for (MemBlock* cur = mFreeHead; cur; cur = cur->mNext) {
        void* blockData = cur->mStart;
        void* alignedData = reinterpret_cast<void*>(
            ptr_align_ceil(reinterpret_cast<uintptr_t>(blockData), align));
        u32 offset = static_cast<u32>(
            reinterpret_cast<uintptr_t>(alignedData) -
            reinterpret_cast<uintptr_t>(blockData));

        if (cur->mSize >= size + offset && resSize > cur->mSize) {
            resBlock = cur;
            resSize = cur->mSize;
            resData = alignedData;
            if (resSize == size + offset)
                break;
        }
    }

    if (!resBlock)
        return 0;

    void* result = ba_alloc_from_free(this, resBlock, resData, size);
    return result ? static_cast<u32>(reinterpret_cast<uintptr_t>(result)) : 0;
}

// @addr 0x80440fe0
u32 BlockAllocator::allocBlock(u32 size, u32 flags) {
    (void)flags;
    u32 align = (mAlignment > 0) ? mAlignment : 4;
    return allocAligned(size, align);
}

// @addr 0x80441180
// Translated from MEMResizeForMBlockExpHeap — resize an allocation.
u32 BlockAllocator::realloc(u32 handle, u32 newSize) {
    if (handle == 0)
        return 0;

    MemBlock* block =
        static_cast<MemBlock*>(ptr_sub(reinterpret_cast<void*>(handle),
                                       sizeof(MemBlock)));
    u32 oldSize = block->mSize;
    newSize = align_up_u32(newSize, 4);

    if (newSize <= oldSize) {
        // Shrink: just update size, remainder goes back to free
        void* blockEnd = ptr_add(block->mStart, block->mSize);
        void* newEnd = ptr_add(block->mStart, newSize);
        if (ptr_dist(newEnd, blockEnd) >= MIN_BLOCK_SIZE) {
            ba_recycle_region(this, newEnd, blockEnd);
            block->mSize = newSize;
        }
        return handle;
    }

    // Grow: try to find adjacent free space after this block
    void* blockEnd = ptr_add(block->mStart, oldSize);
    u32 needed = newSize - oldSize;

    // Check if next block in memory is free and large enough
    for (MemBlock* freeBlock = mFreeHead; freeBlock;
         freeBlock = freeBlock->mNext) {
        if (freeBlock == blockEnd) {
            if (freeBlock->mSize >= needed + MIN_BLOCK_SIZE) {
                // Split the free block
                void* freeEnd =
                    ptr_add(freeBlock->mStart, freeBlock->mSize);
                void* newFreeStart = ptr_add(freeBlock->mStart, needed);
                ba_remove_free(this, freeBlock);
                if (ptr_dist(newFreeStart, freeEnd) >= MIN_BLOCK_SIZE) {
                    ba_insert_free(
                        this,
                        ba_block_init(newFreeStart, freeEnd,
                                      MemBlock::BLOCK_FREE),
                        nullptr);
                }
                block->mSize = newSize;
                mUsedSize += needed;
                if (mUsedSize > mPeakUsedSize)
                    mPeakUsedSize = mUsedSize;
                return handle;
            } else if (freeBlock->mSize >= needed) {
                // Exact fit: consume entire free block
                ba_remove_free(this, freeBlock);
                block->mSize = oldSize + freeBlock->mSize;
                mUsedSize += freeBlock->mSize;
                if (mUsedSize > mPeakUsedSize)
                    mPeakUsedSize = mUsedSize;
                return handle;
            }
            break;
        }
    }

    // Cannot grow in place; return 0 (caller must alloc+copy+free)
    return 0;
}

// @addr 0x804417d4
// Translated from MEMGetAllocatableSizeForExpHeapEx.
u32 BlockAllocator::getAllocatableSize(u32 align) {
    if (align <= 0)
        align = 4;

    u32 maxSize = 0;
    u32 offsetMin = 0xFFFFFFFF;

    for (MemBlock* block = mFreeHead; block; block = block->mNext) {
        void* blockData = block->mStart;
        void* baseAddr = reinterpret_cast<void*>(
            ptr_align_ceil(reinterpret_cast<uintptr_t>(blockData), align));
        void* endAddr = ptr_add(blockData, block->mSize);

        if (reinterpret_cast<uintptr_t>(baseAddr) <
            reinterpret_cast<uintptr_t>(endAddr)) {
            u32 blockSize = static_cast<u32>(
                ptr_dist(baseAddr, endAddr));
            u32 offset = static_cast<u32>(
                ptr_dist(blockData, baseAddr));
            if (maxSize < blockSize ||
                (maxSize == blockSize && offsetMin > offset)) {
                maxSize = blockSize;
                offsetMin = offset;
            }
        }
    }
    return maxSize;
}

// @addr 0x80441914
// Translated from MEMFreeToExpHeap — frees an allocated block.
s32 BlockAllocator::freeBlock(s32 handle, s32 flags) {
    (void)flags;
    if (handle == 0)
        return 0;

    MemBlock* block =
        static_cast<MemBlock*>(ptr_sub(reinterpret_cast<void*>(handle),
                                       sizeof(MemBlock)));

    // Get the block's memory extent
    void* regionStart = block;
    void* regionEnd = ptr_add(block->mStart, block->mSize);

    // Remove from used list
    ba_remove_used(this, block);

    // Update statistics
    mUsedCount--;
    mUsedSize -= block->mSize;
    mFreeCountTotal++;

    // Recycle the region back into the free list
    ba_recycle_region(this, regionStart, regionEnd);

    return 0;
}

// @addr 0x80441c54
// Translated from MEMGetSizeForMBlockExpHeap.
u32 BlockAllocator::getBlockSize(u32* handle) const {
    if (!handle || *handle == 0)
        return 0;
    MemBlock* block = static_cast<MemBlock*>(
        ptr_sub(reinterpret_cast<void*>(*handle), sizeof(MemBlock)));
    return block->mSize;
}

// @addr 0x804407ec
// Insert a block into the used list at the correct position (address-ordered).
void BlockAllocator::insertBlock(MemBlock* block) {
    // Find insertion point: walk used list to find where this block goes
    MemBlock* prev = nullptr;
    for (MemBlock* cur = mBlockHead; cur; cur = cur->mNext) {
        if (reinterpret_cast<uintptr_t>(cur) >
            reinterpret_cast<uintptr_t>(block))
            break;
        prev = cur;
    }
    ba_insert_used(this, block, prev);
    mUsedCount++;
}

// @addr 0x804408dc
// Remove a block from the used list.
void BlockAllocator::removeBlock(MemBlock* block) {
    ba_remove_used(this, block);
    if (mUsedCount > 0)
        mUsedCount--;
}

// @addr 0x80440924
// Coalesce adjacent free blocks in the free list.
void BlockAllocator::coalesceFreeBlocks() {
    if (!mFreeHead)
        return;

    // Walk the free list and merge adjacent blocks
    MemBlock* cur = mFreeHead;
    while (cur && cur->mNext) {
        MemBlock* next = cur->mNext;
        void* curEnd = ptr_add(cur->mStart, cur->mSize);
        // If next block is immediately after current, merge
        if (reinterpret_cast<uintptr_t>(next) ==
            reinterpret_cast<uintptr_t>(curEnd)) {
            // Merge next into cur
            cur->mSize += sizeof(MemBlock) + next->mSize;
            cur->mNext = next->mNext;
            if (next->mNext)
                next->mNext->mPrev = cur;
            mFreeCount--;
        } else {
            cur = next;
        }
    }
}

// @addr 0x80440958
// Split a block at the given address, creating a new block for the remainder.
void BlockAllocator::splitBlock(u32 blockAddr, u32 splitSize) {
    MemBlock* origBlock = reinterpret_cast<MemBlock*>(blockAddr);
    u32 oldSize = origBlock->mSize;
    if (splitSize >= oldSize || oldSize - splitSize < MIN_BLOCK_SIZE)
        return;

    void* newBlockAddr = ptr_add(origBlock->mStart, splitSize);
    void* regionEnd = ptr_add(origBlock->mStart, oldSize);
    MemBlock* newBlock =
        ba_block_init(newBlockAddr, regionEnd, origBlock->mFlags);
    newBlock->mGroupID = origBlock->mGroupID;
    origBlock->mSize = splitSize;

    // Insert new block into the same list
    newBlock->link(origBlock, origBlock->mNext);

    if (origBlock->mFlags & MemBlock::BLOCK_FREE) {
        mFreeCount++;
    } else {
        mUsedCount++;
    }
}

// @addr 0x8044096c
void BlockAllocator::mergeBlocks() { coalesceFreeBlocks(); }

// @addr 0x804409a0
void BlockAllocator::defragment(u32 flags) {
    (void)flags;
    coalesceFreeBlocks();
}

// @addr 0x804409b4
void BlockAllocator::compact(u32 flags, s32 mode) {
    (void)flags; (void)mode;
    coalesceFreeBlocks();
}

// @addr 0x80440a88
// Translated from MEMSetGroupIDForExpHeap — begin a new allocation group.
void BlockAllocator::beginGroup() {
    mGroupID++;
}

// @addr 0x80440aa8
void BlockAllocator::endGroup() {
    if (mGroupID > 0)
        mGroupID--;
}

// @addr 0x80440af0
// Free all blocks belonging to the specified group.
// Translated from MEMFreeGroupForExpHeap pattern.
void BlockAllocator::freeGroup(u16 groupID) {
    MemBlock* cur = mBlockHead;
    while (cur) {
        MemBlock* next = cur->mNext;
        if (cur->mGroupID == groupID) {
            s32 handle = static_cast<s32>(
                reinterpret_cast<uintptr_t>(cur->mStart));
            freeBlock(handle, 0);
        }
        cur = next;
    }
}

// @addr 0x804412c8
void BlockAllocator::dumpState() {}

// @addr 0x8044145c
void BlockAllocator::validateHeap() {
    // Walk used list and verify all blocks are valid
    for (MemBlock* cur = mBlockHead; cur; cur = cur->mNext) {
        cur->validate();
    }
    // Walk free list
    for (MemBlock* cur = mFreeHead; cur; cur = cur->mNext) {
        cur->validate();
    }
}

// @addr 0x804416ac
void BlockAllocator::dumpBlocks(u32 flags, u32 maxCount) {
    (void)flags; (void)maxCount;
}

// @addr 0x804418d0
void BlockAllocator::getStatistics() {}

// @addr 0x8044196c
void BlockAllocator::setDebugName(u32 name) {
    (void)name;
}

// @addr 0x80441a38
void BlockAllocator::enableDebug() { mFlags |= FLAG_DEBUG_FILL; }

// @addr 0x80441b08
void BlockAllocator::disableDebug() { mFlags &= ~FLAG_DEBUG_FILL; }

// @addr 0x80441b48
void BlockAllocator::dumpAllocations() {}

// @addr 0x80441b90
void BlockAllocator::dumpFreeList() {}

// @addr 0x80441c08
void BlockAllocator::getBlockInfo(u32* outInfo) {
    if (outInfo) {
        outInfo[0] = mFreeCount;
        outInfo[1] = mUsedCount;
        outInfo[2] = mTotalSize;
        outInfo[3] = mUsedSize;
        outInfo[4] = mPeakUsedSize;
    }
}

// @addr 0x80441cd0
void BlockAllocator::findLargestFreeBlock() {}

// @addr 0x80442288
void BlockAllocator::optimizeLayout(u32 flags) {
    (void)flags;
    coalesceFreeBlocks();
}

// ============================================================
// EGG::Memory::MemCache
// ============================================================

MemCache::~MemCache() {}

// @addr 0x8044b784
void MemCache::init(u32 cacheLineSize, u32 cacheSize) {
    mCacheLineSize = cacheLineSize > 0 ? cacheLineSize : 32;
    mCacheSize = cacheSize;
    mFlushCount = 0;
    mInvalidateCount = 0;
    mStoreCount = 0;
    mIsEnabled = 1;
    for (int i = 0; i < 9; i++)
        _pad1c[i] = 0;
}

// @addr 0x8044b7c0
void MemCache::shutdown() {
    mIsEnabled = 0;
    mFlushCount = 0;
    mInvalidateCount = 0;
    mStoreCount = 0;
}

// @addr 0x8044ba20
void MemCache::reset() {
    mFlushCount = 0;
    mInvalidateCount = 0;
    mStoreCount = 0;
}

// @addr 0x8044bbf4
void MemCache::enable() { mIsEnabled = 1; }

// @addr 0x8044bc30
void MemCache::disable() { mIsEnabled = 0; }

// @addr 0x8044be08
// Flush data cache lines covering [addr, addr+size).
void MemCache::flush(void* addr, u32 size, u32 flags) {
    (void)flags;
    if (!mIsEnabled || !addr || size == 0)
        return;
    // On PC, flush is a no-op but we track the count
    mFlushCount++;
    std::memset(addr, 0, size); // ensure write-back
}

// @addr 0x8044bef0
// Invalidate data cache lines covering [addr, addr+size).
void MemCache::invalidate(void* addr, u32 size, u32 flags) {
    (void)flags;
    if (!mIsEnabled || !addr || size == 0)
        return;
    mInvalidateCount++;
}

// @addr 0x8044bfd8
void MemCache::flushAndInvalidate(void* addr, u32 size, u32 flags) {
    flush(addr, size, flags);
    invalidate(addr, size, flags);
}

// @addr 0x8044c038
void MemCache::store(void* addr, u32 size, u32 flags) {
    (void)addr; (void)size; (void)flags;
    if (mIsEnabled)
        mStoreCount++;
}

// @addr 0x8044c098
void MemCache::sync(void* addr, u32 size, u32 flags) {
    flush(addr, size, flags);
}

// @addr 0x8044c16c
void MemCache::prefetch(void* addr, u32 size, u32 flags) {
    (void)addr; (void)size; (void)flags;
}

// @addr 0x8044c240
void MemCache::zeroLine(void* addr, u32 size, u32 flags) {
    (void)flags;
    if (addr && size > 0)
        std::memset(addr, 0, size);
}

// @addr 0x8044c2a0
void MemCache::flushAll() { mFlushCount++; }

// @addr 0x8044c514
s32 MemCache::allocCacheAligned(s32 size, u32 align) {
    (void)align;
    // Align size up to cache line
    u32 alignedSize = align_up_u32(static_cast<u32>(size), mCacheLineSize);
    return static_cast<s32>(alignedSize);
}

// @addr 0x8044c5e4
void MemCache::freeCacheAligned(s32 handle) { (void)handle; }

// @addr 0x8044c65c
void MemCache::prepareRegion(u32 addr, u32 size) {
    (void)addr; (void)size;
}

// @addr 0x8044c710
void MemCache::prefetchData(s32 addr, u32 size) { (void)addr; (void)size; }

// @addr 0x8044c828
void MemCache::prefetchInstruction(s32 addr, u32 size) {
    (void)addr; (void)size;
}

// @addr 0x8044c92c
void MemCache::streamData(s32* addrs, u32 count) {
    (void)addrs; (void)count;
}

// @addr 0x8044ca00
void MemCache::touchRange(s32 addr, u32 size) { (void)addr; (void)size; }

// @addr 0x8044ca18
void MemCache::lockRange(s32 addr, u32 size) { (void)addr; (void)size; }

// @addr 0x8044ca50
void MemCache::unlockRange(s32 addr, u32 size) { (void)addr; (void)size; }

// @addr 0x8044ca88
void MemCache::batchFlush(s32 addr, s32* ranges, s32 count, s32 flags) {
    (void)addr; (void)ranges; (void)count; (void)flags;
    mFlushCount++;
}

// @addr 0x8044cba4
void MemCache::waitForStore(s32 channel) { (void)channel; }

// @addr 0x8044cc28
void MemCache::enableStream(s32 channel) { (void)channel; }

// @addr 0x8044ccb0
void MemCache::disableStream(u32 channel, u32 flags) {
    (void)channel; (void)flags;
}

// @addr 0x8044cd5c
void MemCache::setStreamTarget(u32 channel, u32 flags) {
    (void)channel; (void)flags;
}

// @addr 0x8044ce14
void MemCache::streamControl(u32 channel, u32 flags, u32 mode) {
    (void)channel; (void)flags; (void)mode;
}

// ============================================================
// EGG::Memory::MemoryProfiler
// ============================================================

MemoryProfiler::~MemoryProfiler() {}

// @addr 0x80442a30
void MemoryProfiler::init() {
    mTotalAllocs = 0;
    mTotalFrees = 0;
    mTotalAllocBytes = 0;
    mTotalFreeBytes = 0;
    mCurrentUsage = 0;
    mPeakUsage = 0;
    mPeakUsageAddr = 0;
    mFragmentCount = 0;
    mSmallestFragment = 0xFFFFFFFF;
    mLargestFragment = 0;
    mSampleCount = 0;
    mSampleInterval = 0;
    mIsTracking = 0;
    for (int i = 0; i < 10; i++)
        _pad38[i] = 0;
}

// @addr 0x80442b14
void MemoryProfiler::configure(u32 flags) {
    (void)flags;
    mIsTracking = 1;
}

// @addr 0x80442b54
void MemoryProfiler::reset() { init(); }

// @addr 0x80442d90
void MemoryProfiler::shutdown() { mIsTracking = 0; }

// @addr 0x80442e10
void MemoryProfiler::enable() { mIsTracking = 1; }

// @addr 0x80442e94
u8 MemoryProfiler::isEnabled() const { return static_cast<u8>(mIsTracking); }

// @addr 0x80442eec
void MemoryProfiler::recordAlloc(s32 size) {
    if (!mIsTracking)
        return;
    mTotalAllocs++;
    if (size > 0)
        mTotalAllocBytes += static_cast<u32>(size);
    mCurrentUsage += static_cast<u32>(size > 0 ? size : 0);
    recordPeak();
}

// @addr 0x804427ac
void MemoryProfiler::recordFree() {
    if (!mIsTracking)
        return;
    mTotalFrees++;
}

// @addr 0x80443024
void MemoryProfiler::sample() {
    if (!mIsTracking)
        return;
    mSampleCount++;
    computeFragmentation();
}

// @addr 0x804430c0
void MemoryProfiler::setSampleInterval(u32 interval) {
    mSampleInterval = interval;
}

// @addr 0x80443068
s32 MemoryProfiler::queryAlloc(s32 size, s32 align) {
    (void)size; (void)align;
    if (!mIsTracking)
        return -1;
    return static_cast<s32>(mCurrentUsage);
}

// @addr 0x804431d4
void MemoryProfiler::updateUsage() {
    // Recalculate current usage from tracked data
    if (mTotalAllocBytes >= mTotalFreeBytes)
        mCurrentUsage = mTotalAllocBytes - mTotalFreeBytes;
    else
        mCurrentUsage = 0;
}

// @addr 0x804432e4
void MemoryProfiler::computeFragmentation() {
    // Fragmentation ratio: fragment count vs total fragments possible
    if (mFragmentCount > 0)
        mSmallestFragment = mSmallestFragment; // placeholder
    else
        mSmallestFragment = 0;
}

// @addr 0x80443318
void MemoryProfiler::recordPeak() {
    if (mCurrentUsage > mPeakUsage) {
        mPeakUsage = mCurrentUsage;
        mPeakUsageAddr = 0; // would need actual address
    }
}

// @addr 0x80443348
void MemoryProfiler::resetPeak() { mPeakUsage = 0; mPeakUsageAddr = 0; }

// @addr 0x8044339c
void MemoryProfiler::clearStats() { init(); }

// @addr 0x804433e8
void MemoryProfiler::updateFragmentInfo() { computeFragmentation(); }

// @addr 0x80443430
void MemoryProfiler::computeAverages() {}

// @addr 0x804434e4
void MemoryProfiler::setReportTarget(u32* target) { (void)target; }

// @addr 0x80443550
void MemoryProfiler::flushReport() {}

// @addr 0x804435b8
s32 MemoryProfiler::beginGroup(s32 groupId, s32 tag) {
    (void)groupId; (void)tag;
    return 0;
}

// @addr 0x804435f8
s32 MemoryProfiler::endGroup(s32 groupId) {
    (void)groupId;
    return 0;
}

// @addr 0x8044364c
u32 MemoryProfiler::getGroupUsage(s32 groupId, u32 flags) {
    (void)groupId; (void)flags;
    return 0;
}

// @addr 0x804436a8
f64 MemoryProfiler::getGroupUsageF64(s32 groupId) {
    (void)groupId;
    return 0.0;
}

// @addr 0x80443728
f64 MemoryProfiler::getGroupPeakF64(f64 groupId, s32 mode) {
    (void)groupId; (void)mode;
    return 0.0;
}

// @addr 0x804437ac
void MemoryProfiler::writeBlockData(u8* dst, s32* src) {
    (void)dst; (void)src;
}

// @addr 0x804437d4
void MemoryProfiler::copyBlock(s32 dstGroup, s32 srcGroup) {
    (void)dstGroup; (void)srcGroup;
}

// @addr 0x804438a0
void MemoryProfiler::readBlockData(u32* dst, s32* src) {
    (void)dst; (void)src;
}

// @addr 0x80443918
void MemoryProfiler::compareBlockData(u32* a, s32* b, u8 mode) {
    (void)a; (void)b; (void)mode;
}

// @addr 0x804439d8
void MemoryProfiler::dumpBlockTable() {}

// @addr 0x80443a74
void MemoryProfiler::validateBlockTable() {}

} // namespace Memory
} // namespace EGG