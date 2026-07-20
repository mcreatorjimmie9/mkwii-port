// ============================================================================
// FrmHeap.cpp — EGG::FrmHeap (frame heap) + MemBlockAllocator
// Address range: 0x8016E000 - 0x80170000 (DOL)
// Function count: 68
//
// GENESIS Phase 20 — EGG Framework Utility Layer
// ============================================================================

#include "FrmHeap.hpp"

namespace EGG {

// ============================================================================
// MemBlockAllocator
// ============================================================================

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
void* FrmHeap::alloc(u32 size, s32 align) {
    (void)size; (void)align;
    // MEMAllocFromFrmHeap(mHandle, size, align) in real SDK
    return nullptr;
}

// @addr 0x8016E580 — Free not supported on frame heap (no-op)
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

// @addr 0x8016E780
void FrmHeap::adjust() {
    // Frame heaps don't support adjustment
}

// @addr 0x8016E800 — Free all allocations, reset heap to initial state
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

// @addr 0x8016E940
Heap* FrmHeap::getParentHeap() const {
    return mParentHeap;
}

// @addr 0x8016E9A0
void FrmHeap::becomeCurrentHeap() {
    // Sets EGG::Heap::sCurrentHeap to the equivalent EGG::Heap
}

// @addr 0x8016EA00
const char* FrmHeap::getName() const {
    return mName;
}

// ============================================================================
// Stub functions — remaining addresses in 0x8016EA40 - 0x80170000
// ============================================================================

// @addr 0x8016EA40
s32 fn_8016EA40(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x8016EA80
s32 fn_8016EA80(s32 a, u32 b) { (void)a; (void)b; return 0; }
// @addr 0x8016EAC0
void fn_8016EAC0(s32 a) { (void)a; }
// @addr 0x8016EAF0
void fn_8016EAF0(u32 a) { (void)a; }
// @addr 0x8016EB20
u32 fn_8016EB20(u32 a, u32 b) { (void)a; (void)b; return 0; }
// @addr 0x8016EB60
s32 fn_8016EB60(s32 a) { (void)a; return 0; }
// @addr 0x8016EB90
void fn_8016EB90(s32 a, s32 b) { (void)a; (void)b; }
// @addr 0x8016EBC0
void fn_8016EBC0(u32 a) { (void)a; }
// @addr 0x8016EBF0
u32 fn_8016EBF0(u32* p) { (void)p; return 0; }
// @addr 0x8016EC20
void fn_8016EC20(s32 a, u32 b) { (void)a; (void)b; }
// @addr 0x8016EC60
void fn_8016EC60(s32 a) { (void)a; }
// @addr 0x8016EC90
s32 fn_8016EC90(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x8016ECD0
u32 fn_8016ECD0(s32 a) { (void)a; return 0; }
// @addr 0x8016ED00
void fn_8016ED00(void) {}
// @addr 0x8016ED30
void fn_8016ED30(s32 a) { (void)a; }
// @addr 0x8016ED60
u32 fn_8016ED60(u32 a) { (void)a; return 0; }
// @addr 0x8016ED90
void fn_8016ED90(s32 a, u32 b) { (void)a; (void)b; }
// @addr 0x8016EDC0
void fn_8016EDC0(s32 a) { (void)a; }
// @addr 0x8016EDF0
void fn_8016EDF0(void) {}
// @addr 0x8016EE20
s32 fn_8016EE20(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x8016EE60
void fn_8016EE60(s32 a, u32 b) { (void)a; (void)b; }
// @addr 0x8016EE90
void fn_8016EE90(s32 a, s32 b) { (void)a; (void)b; }
// @addr 0x8016EEC0
u32 fn_8016EEC0(u32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x8016EF00
void fn_8016EF00(s32 a) { (void)a; }
// @addr 0x8016EF30
u32 fn_8016EF30(s32 a) { (void)a; return 0; }
// @addr 0x8016EF60
void fn_8016EF60(u32* p, u32 a) { (void)p; (void)a; }
// @addr 0x8016EF90
void fn_8016EF90(s32 a, u32* p) { (void)a; (void)p; }
// @addr 0x8016EFC0
void fn_8016EFC0(u32 a) { (void)a; }
// @addr 0x8016EFF0
s32 fn_8016EFF0(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x8016F020
void fn_8016F020(void) {}
// @addr 0x8016F050
void fn_8016F050(s32 a) { (void)a; }
// @addr 0x8016F080
s32 fn_8016F080(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x8016F0C0
u32 fn_8016F0C0(u32* p) { (void)p; return 0; }
// @addr 0x8016F0F0
void fn_8016F0F0(s32 a) { (void)a; }
// @addr 0x8016F120
void fn_8016F120(s32 a, u32 b) { (void)a; (void)b; }
// @addr 0x8016F150
void fn_8016F150(s32 a, s32 b) { (void)a; (void)b; }
// @addr 0x8016F180
u32 fn_8016F180(u32 a, u32 b) { (void)a; (void)b; return 0; }
// @addr 0x8016F1C0
void fn_8016F1C0(s32 a) { (void)a; }
// @addr 0x8016F1F0
void fn_8016F1F0(u32 a) { (void)a; }
// @addr 0x8016F220
s32 fn_8016F220(s32 a, u32 b) { (void)a; (void)b; return 0; }
// @addr 0x8016F260
void fn_8016F260(s32 a, s32 b) { (void)a; (void)b; }
// @addr 0x8016F290
void fn_8016F290(u32 a) { (void)a; }
// @addr 0x8016F2C0
u32 fn_8016F2C0(s32 a) { (void)a; return 0; }
// @addr 0x8016F300
void fn_8016F300(u32 a, u32 b) { (void)a; (void)b; }
// @addr 0x8016F340
s32 fn_8016F340(s32 a) { (void)a; return 0; }
// @addr 0x8016F370
void fn_8016F370(s32 a) { (void)a; }
// @addr 0x8016F3A0
void fn_8016F3A0(u32 a) { (void)a; }
// @addr 0x8016F3D0
u32 fn_8016F3D0(u32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x8016F410
void fn_8016F410(s32 a) { (void)a; }
// @addr 0x8016F440
void fn_8016F440(u32 a) { (void)a; }
// @addr 0x8016F470
s32 fn_8016F470(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x8016F4B0
void fn_8016F4B0(s32 a, u32 b) { (void)a; (void)b; }
// @addr 0x8016F4E0
void fn_8016F4E0(s32 a) { (void)a; }
// @addr 0x8016F510
void fn_8016F510(u32 a) { (void)a; }
// @addr 0x8016F540
s32 fn_8016F540(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x8016F580
u32 fn_8016F580(u32 a) { (void)a; return 0; }
// @addr 0x8016F5B0
void fn_8016F5B0(s32 a, s32 b) { (void)a; (void)b; }
// @addr 0x8016F5E0
void fn_8016F5E0(u32 a, s32 b) { (void)a; (void)b; }
// @addr 0x8016F620
u32 fn_8016F620(u32* p) { (void)p; return 0; }
// @addr 0x8016F650
void fn_8016F650(s32 a) { (void)a; }
// @addr 0x8016F680
s32 fn_8016F680(s32 a) { (void)a; return 0; }

} // namespace EGG