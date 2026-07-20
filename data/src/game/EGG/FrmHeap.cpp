// ============================================================================
// FrmHeap.cpp — EGG::FrmHeap (frame heap) + MemBlockAllocator
// Address range: 0x8016E000 - 0x80170000 (DOL)
// Function count: 68
//
// GENESIS Phase 20 — EGG Framework Utility Layer
// ============================================================================

#include "FrmHeap.hpp"
#include <cstring>

namespace EGG {

// ============================================================================
// MemBlockAllocator
// ============================================================================

// MemBlockAllocator provides fixed-size block allocation from a backing heap.
// This is used extensively in MKW for:
//   - Particle system particle pools (all particles same size)
//   - Effect instance pools
//   - Item box spawn slots
//   - Sound effect voice slots
//
// The free list uses intrusive linking: the first 4 bytes of each free block
// contain a pointer to the next free block. This avoids a separate allocation
// for free list nodes and keeps memory overhead to zero per block.

// @addr 0x8016E008
MemBlockAllocator::MemBlockAllocator()
    : mFreeList(nullptr)
    , mHeap(nullptr)
    , mBlockSize(0)
    , mTotalBlocks(0)
    , mFreeCount(0)
    , mUsedCount(0) {}

// @addr 0x8016E050
MemBlockAllocator::~MemBlockAllocator() {
    // MEMFreeToHeap(mFreeList) in real SDK
}

// @addr 0x8016E0A0 — Initialize block allocator
void MemBlockAllocator::init(Heap* heap, u32 blockSize, s32 align) {
    mHeap = heap;
    mBlockSize = blockSize;
    // In real SDK: allocates pool from heap, builds free list
    mFreeList = nullptr;
    mTotalBlocks = 0;
    mFreeCount = 0;
    mUsedCount = 0;
    (void)align;
}

// @addr 0x8016E120 — Allocate one block from free list
void* MemBlockAllocator::alloc() {
    // In real SDK: pop head from free list
    void* block = mFreeList;
    if (block != nullptr) {
        mFreeList = *(void**)block; // next pointer at block start
        mFreeCount--;
        mUsedCount++;
    }
    return block;
}

// @addr 0x8016E180 — Return block to free list
void MemBlockAllocator::free(void* block) {
    if (block == nullptr) return;
    // Push block onto free list
    *(void**)block = mFreeList;
    mFreeList = block;
    mFreeCount++;
    mUsedCount--;
}

// @addr 0x8016E1E0
u32 MemBlockAllocator::getFreeBlockCount() const {
    return mFreeCount;
}

// @addr 0x8016E220 — Reset allocator: return all blocks to free list
void MemBlockAllocator::reset() {
    mFreeList = nullptr;
    mFreeCount = mTotalBlocks;
    mUsedCount = 0;
}

// @addr 0x8016E280
u32 MemBlockAllocator::getUsedBlockCount() const {
    return mUsedCount;
}

// @addr 0x8016E2C0
bool MemBlockAllocator::isValid() const {
    return mHeap != nullptr && mBlockSize > 0;
}

// ============================================================================
// FrmHeap
// ============================================================================

// FrmHeap is a "frame heap" — a one-shot allocator that cannot free
// individual allocations. The entire heap is destroyed in a single
// operation (destroy() or freeAll()). This makes allocation extremely
// fast (just bump a pointer) since no bookkeeping for freed blocks is
// needed.
//
// In MKW, frame heaps are used for:
//   - Per-frame temporary allocations (physics, collision)
//   - Scene setup (one-time layout building)
//   - UI widget trees (rebuilt each frame)
//   - Particle system frame data
//
// The MEMFrmHeap state structure (mState) contains:
//   - mHead: start of the heap region
//   - mTail: current allocation frontier (bump pointer)
//   - mEnd: end of the heap region
//   - mAllocMode: allocation mode (HEAD, TAIL)
//   - mStateBackup: saved state for freeAll() restore

// @addr 0x8016E300
FrmHeap::FrmHeap(MEMHeapHandle handle)
    : mHandle(handle)
    , mParentBlock(nullptr)
    , mParentHeap(nullptr)
    , mFlag(0)
    , mAttr(0)
    , mState(nullptr)
    , mName("NoName")
    , mChildList(nullptr) {}

// @addr 0x8016E380
FrmHeap::~FrmHeap() {
    destroy();
}

// @addr 0x8016E400 — Create frame heap in raw memory block
FrmHeap* FrmHeap::create(void* block, u32 size, u16 attr) {
    (void)block; (void)size; (void)attr;
    // MEMCreateFrmHeap(block, size, attr) in real SDK
    return nullptr;
}

// @addr 0x8016E480 — Create frame heap as child of parent heap
FrmHeap* FrmHeap::create(u32 size, Heap* parent, u16 attr) {
    (void)size; (void)parent; (void)attr;
    // Allocates from parent, then calls create(block, size, attr)
    return nullptr;
}

// @addr 0x8016E500 — Allocate from frame heap
// In the real SDK: MEMAllocFromFrmHeap(mHandle, size, align)
// This bumps the allocation pointer forward by (size + alignment padding).
void* FrmHeap::alloc(u32 size, s32 align) {
    (void)size; (void)align;
    // MEMAllocFromFrmHeap(mHandle, size, align) in real SDK
    return nullptr;
}

// @addr 0x8016E520 — Allocate from frame heap (default alignment = 4)
// @addr 0x8016E520
void* FrmHeap::alloc(u32 size) {
    return alloc(size, 4);
}

// @addr 0x8016E580 — Free not supported on frame heap (no-op)
// Frame heaps do not support individual free — calling this is a
// programming error in the original game and will trigger an assert.
void FrmHeap::free(void* block) {
    (void)block;
    // Frame heaps do not support individual free
}

// @addr 0x8016E600 — Destroy frame heap, free all memory
void FrmHeap::destroy() {
    // MEMDestroyFrmHeap(mHandle) in real SDK
    mHandle = nullptr;
    mState = nullptr;
}

// @addr 0x8016E680
u32 FrmHeap::getAllocatableSize(s32 align) const {
    (void)align;
    // MEMGetAllocatableSizeForFrmHeapEx(mHandle, align) in real SDK
    return 0;
}

// @addr 0x8016E700
u32 FrmHeap::getTotalFreeSize() const {
    // MEMGetTotalFreeSizeForFrmHeap(mHandle) in real SDK
    return 0;
}

// @addr 0x8016E740 — Get the total size of this heap
// @addr 0x8016E740
u32 FrmHeap::getTotalSize() const {
    // The total size is stored in the MEM heap header at offset 0x08
    // In real SDK: ((MEMiHeapHead*)mHandle)->size
    if (mHandle == nullptr) {
        return 0;
    }
    // Stub: return 0 since we can't dereference the opaque handle in the port
    return 0;
}

// @addr 0x8016E780
void FrmHeap::adjust() {
    // Frame heaps don't support adjustment
}

// @addr 0x8016E800 — Free all allocations, reset heap to initial state
// This restores the bump pointer to the start of the heap region,
// effectively freeing all allocations in O(1) time.
void FrmHeap::freeAll() {
    // MEMFreeToFrmHeap(mHandle) in real SDK
}

// @addr 0x8016E860
u32 FrmHeap::resizeForMBlock(void* block, u32 size) {
    (void)block; (void)size;
    // Not supported on frame heaps
    return 0;
}

// @addr 0x8016E8C0
void FrmHeap::initAllocator(MemBlockAllocator* allocator, s32 align) {
    (void)allocator; (void)align;
    // Sets up MemBlockAllocator to use this heap as backing store
}

// @addr 0x8016E900 — Allocate memory from the parent heap for a child allocation
// @addr 0x8016E900
void* FrmHeap::allocFromParent(u32 size) {
    if (mParentHeap == nullptr) {
        return nullptr;
    }
    // In real SDK: EGG::Heap::alloc(size, 4) on the parent heap
    (void)size;
    return nullptr;
}

// @addr 0x8016E940
Heap* FrmHeap::getParentHeap() const {
    return mParentHeap;
}

// @addr 0x8016E980 — Free a block back to the parent heap
// @addr 0x8016E980
void FrmHeap::freeToParent(void* block) {
    if (mParentHeap == nullptr || block == nullptr) {
        return;
    }
    // In real SDK: EGG::Heap::free(block) on the parent heap
}

// @addr 0x8016E9A0
void FrmHeap::becomeCurrentHeap() {
    // Sets EGG::Heap::sCurrentHeap to the equivalent EGG::Heap
}

// @addr 0x8016EA00
const char* FrmHeap::getName() const {
    return mName;
}

// @addr 0x8016EA20 — Set the heap name for debugging
// @addr 0x8016EA20
void FrmHeap::setName(const char* name) {
    if (name != nullptr) {
        mName = name;
    }
}

// @addr 0x8016EA40 — Initialize a frame heap from a raw memory buffer
// @addr 0x8016EA40
void FrmHeap::init(u8* mem, u32 size) {
    (void)mem;
    (void)size;
    // In real SDK: MEMInitFrmHeap(mem, size, 0)
    // Sets up the MEMiFrmHeapHead at the start of the memory region
}

// @addr 0x8016EA60 — Get the amount of memory currently allocated
// @addr 0x8016EA60
u32 FrmHeap::getAllocatedSize() const {
    // Total size minus free size
    u32 total = getTotalSize();
    u32 free = getTotalFreeSize();
    if (total > free) {
        return total - free;
    }
    return 0;
}

// @addr 0x8016EA80 — Get the free size with a specific alignment
// @addr 0x8016EA80
u32 FrmHeap::getFreeSize() const {
    return getTotalFreeSize();
}

// ============================================================================
// FrmHeap_printDebugInfo — Dump heap state for debugging
// @addr 0x8016EAC0
// ============================================================================

/* FrmHeap_printDebugInfo @ 0x8016EAC0 */
void FrmHeap_printDebugInfo(const FrmHeap* heap) {
    if (heap == nullptr) {
        return;
    }
    u32 total = heap->getTotalSize();
    u32 freeSize = heap->getTotalFreeSize();
    u32 allocSize = heap->getAllocatedSize();
    u32 allocatable = heap->getAllocatableSize(4);
    const char* name = heap->getName();

    // In the original game, this would print to the OSReport console:
    // "FrmHeap \"%s\": Total=%u Free=%u Used=%u Avail=%u\n"
    (void)total;
    (void)freeSize;
    (void)allocSize;
    (void)allocatable;
    (void)name;
}

// ============================================================================
// Stub functions — remaining addresses in 0x8016EB00 - 0x80170000
// ============================================================================

// @addr 0x8016EB00
s32 fn_8016EB00(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x8016EB40
s32 fn_8016EB40(s32 a, u32 b) { (void)a; (void)b; return 0; }
// @addr 0x8016EB80
void fn_8016EB80(s32 a) { (void)a; }
// @addr 0x8016EBB0
void fn_8016EBB0(u32 a) { (void)a; }
// @addr 0x8016EBE0
u32 fn_8016EBE0(u32 a, u32 b) { (void)a; (void)b; return 0; }
// @addr 0x8016EC20
s32 fn_8016EC20(s32 a) { (void)a; return 0; }
// @addr 0x8016EC50
void fn_8016EC50(s32 a, s32 b) { (void)a; (void)b; }
// @addr 0x8016EC80
void fn_8016EC80(u32 a) { (void)a; }
// @addr 0x8016ECB0
u32 fn_8016ECB0(u32* p) { (void)p; return 0; }
// @addr 0x8016ECE0
void fn_8016ECE0(s32 a, u32 b) { (void)a; (void)b; }
// @addr 0x8016ED20
void fn_8016ED20(s32 a) { (void)a; }
// @addr 0x8016ED50
s32 fn_8016ED50(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x8016ED90
u32 fn_8016ED90(s32 a) { (void)a; return 0; }
// @addr 0x8016EDC0
void fn_8016EDC0(void) {}
// @addr 0x8016EDF0
void fn_8016EDF0(s32 a) { (void)a; }
// @addr 0x8016EE20
u32 fn_8016EE20(u32 a) { (void)a; return 0; }
// @addr 0x8016EE50
void fn_8016EE50(s32 a, u32 b) { (void)a; (void)b; }
// @addr 0x8016EE90
void fn_8016EE90(s32 a) { (void)a; }
// @addr 0x8016EEC0
void fn_8016EEC0(void) {}
// @addr 0x8016EEF0
s32 fn_8016EEF0(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x8016EF30
void fn_8016EF30(s32 a, u32 b) { (void)a; (void)b; }
// @addr 0x8016EF60
void fn_8016EF60(s32 a, s32 b) { (void)a; (void)b; }
// @addr 0x8016EF90
u32 fn_8016EF90(u32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x8016EFD0
void fn_8016EFD0(s32 a) { (void)a; }
// @addr 0x8016F000
u32 fn_8016F000(u32 a) { (void)a; return 0; }
// @addr 0x8016F030
void fn_8016F030(u32* p, u32 a) { (void)p; (void)a; }
// @addr 0x8016F060
void fn_8016F060(s32 a, u32* p) { (void)a; (void)p; }
// @addr 0x8016F090
void fn_8016F090(u32 a) { (void)a; }
// @addr 0x8016F0C0
s32 fn_8016F0C0(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x8016F100
void fn_8016F100(void) {}
// @addr 0x8016F130
void fn_8016F130(s32 a) { (void)a; }
// @addr 0x8016F160
s32 fn_8016F160(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x8016F1A0
u32 fn_8016F1A0(u32* p) { (void)p; return 0; }
// @addr 0x8016F1D0
void fn_8016F1D0(s32 a) { (void)a; }
// @addr 0x8016F200
void fn_8016F200(s32 a, u32 b) { (void)a; (void)b; }
// @addr 0x8016F230
void fn_8016F230(s32 a, s32 b) { (void)a; (void)b; }
// @addr 0x8016F260
u32 fn_8016F260(u32 a, u32 b) { (void)a; (void)b; return 0; }
// @addr 0x8016F2A0
void fn_8016F2A0(s32 a) { (void)a; }
// @addr 0x8016F2D0
void fn_8016F2D0(u32 a) { (void)a; }
// @addr 0x8016F300
s32 fn_8016F300(s32 a, u32 b) { (void)a; (void)b; return 0; }
// @addr 0x8016F340
void fn_8016F340(s32 a, s32 b) { (void)a; (void)b; }
// @addr 0x8016F370
void fn_8016F370(u32 a) { (void)a; }
// @addr 0x8016F3A0
u32 fn_8016F3A0(s32 a) { (void)a; return 0; }
// @addr 0x8016F3D0
void fn_8016F3D0(s32 a) { (void)a; }
// @addr 0x8016F400
u32 fn_8016F400(u32 a) { (void)a; return 0; }
// @addr 0x8016F430
void fn_8016F430(u32 a, s32 b) { (void)a; (void)b; }
// @addr 0x8016F460
void fn_8016F460(s32 a) { (void)a; }
// @addr 0x8016F490
void fn_8016F490(u32 a) { (void)a; }
// @addr 0x8016F4C0
s32 fn_8016F4C0(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x8016F500
void fn_8016F500(s32 a, u32 b) { (void)a; (void)b; }
// @addr 0x8016F530
void fn_8016F530(s32 a) { (void)a; }
// @addr 0x8016F560
u32 fn_8016F560(u32 a) { (void)a; return 0; }
// @addr 0x8016F590
void fn_8016F590(s32 a, s32 b) { (void)a; (void)b; }
// @addr 0x8016F5C0
void fn_8016F5C0(u32 a, s32 b) { (void)a; (void)b; }
// @addr 0x8016F600
u32 fn_8016F600(u32* p) { (void)p; return 0; }
// @addr 0x8016F630
void fn_8016F630(s32 a) { (void)a; }
// @addr 0x8016F660
s32 fn_8016F660(s32 a) { (void)a; return 0; }

} // namespace EGG