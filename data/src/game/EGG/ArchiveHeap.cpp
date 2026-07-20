// ============================================================================
// ArchiveHeap.cpp — EGG::ArchiveHeap + EGG::GroupHeap
// Address range: 0x80176000 - 0x80178000 (DOL)
// Function count: 60
//
// GENESIS Phase 20 — EGG Framework Utility Layer
// ============================================================================

#include "ArchiveHeap.hpp"
#include <cstring>

namespace EGG {

// ============================================================================
// ArchiveHeap
// ============================================================================

// @addr 0x80176008
ArchiveHeap::ArchiveHeap()
    : mHeap(nullptr)
    , mBufferStart(nullptr)
    , mBufferEnd(nullptr)
    , mCurrentPtr(nullptr)
    , mTotalSize(0)
    , mUsedSize(0) {}

// @addr 0x80176060
ArchiveHeap::~ArchiveHeap() {
    destroy();
}

// @addr 0x801760C0 — Initialize archive heap with backing heap
void ArchiveHeap::init(Heap* heap, u32 maxSize) {
    mHeap = heap;
    mTotalSize = maxSize;
    mUsedSize = 0;
    // In real SDK: allocates maxSize bytes from heap
    mBufferStart = nullptr;
    mBufferEnd = nullptr;
    mCurrentPtr = nullptr;
}

// @addr 0x80176140 — Linear allocation from archive buffer
void* ArchiveHeap::alloc(u32 size, s32 align) {
    (void)size; (void)align;
    if (mCurrentPtr == nullptr) return nullptr;

    // Align current pointer
    uintptr_t ptr = reinterpret_cast<uintptr_t>(mCurrentPtr);
    uintptr_t aligned = (ptr + align - 1) & ~(align - 1);

    // Check space
    if (aligned + size > reinterpret_cast<uintptr_t>(mBufferEnd)) {
        return nullptr; // out of space
    }

    mCurrentPtr = reinterpret_cast<void*>(aligned + size);
    mUsedSize += size;
    return reinterpret_cast<void*>(aligned);
}

// @addr 0x801761C0 — Free not supported on archive heap (linear allocator)
void ArchiveHeap::free(void* block) {
    (void)block;
    // Archive heap does not support individual free
}

// @addr 0x80176220 — Destroy archive heap, release backing memory
void ArchiveHeap::destroy() {
    if (mBufferStart != nullptr && mHeap != nullptr) {
        // In real SDK: mHeap->free(mBufferStart)
    }
    mBufferStart = nullptr;
    mBufferEnd = nullptr;
    mCurrentPtr = nullptr;
    mUsedSize = 0;
    mTotalSize = 0;
    mHeap = nullptr;
}

// @addr 0x801762A0
u32 ArchiveHeap::getFreeSize() const {
    if (mTotalSize < mUsedSize) return 0;
    return mTotalSize - mUsedSize;
}

// @addr 0x80176300
u32 ArchiveHeap::getUsedSize() const {
    return mUsedSize;
}

// @addr 0x80176360 — Reset to initial state (free all archive allocations)
void ArchiveHeap::reset() {
    mCurrentPtr = mBufferStart;
    mUsedSize = 0;
}

// ============================================================================
// GroupHeap
// ============================================================================

// @addr 0x80176400
GroupHeap::GroupHeap()
    : mHeap(nullptr)
    , mGroups(nullptr)
    , mTotalAllocs(0) {}

// @addr 0x80176460
GroupHeap::~GroupHeap() {
    destroy();
}

// @addr 0x801764C0 — Initialize with backing heap
void GroupHeap::init(Heap* heap) {
    mHeap = heap;
    mGroups = nullptr;
    mTotalAllocs = 0;
}

// @addr 0x80176540 — Allocate and track by group ID
void* GroupHeap::alloc(u32 size, s32 align, u16 groupId) {
    (void)size; (void)align; (void)groupId;
    if (mHeap == nullptr) return nullptr;

    // Find or create group record
    GroupRecord* grp = findGroup(groupId);
    if (grp == nullptr) {
        // Allocate new record from backing heap
        grp = static_cast<GroupRecord*>(/* mHeap->alloc */ nullptr);
        if (grp == nullptr) return nullptr;
        grp->groupId = groupId;
        grp->padding = 0;
        grp->totalSize = 0;
        grp->allocCount = 0;
        grp->next = mGroups;
        mGroups = grp;
    }

    // Perform actual allocation
    void* block = nullptr; // mHeap->alloc(size, align)
    if (block != nullptr) {
        grp->totalSize += size;
        grp->allocCount++;
        mTotalAllocs++;
    }
    return block;
}

// @addr 0x80176600 — Free individual block
void GroupHeap::free(void* block) {
    (void)block;
    // In real SDK: find block's group, update stats, then mHeap->free(block)
}

// @addr 0x80176680 — Free all blocks in a group
void GroupHeap::freeGroup(u16 groupId) {
    GroupRecord* grp = findGroup(groupId);
    if (grp == nullptr) return;
    // In real SDK: iterate group's allocation list, free each
    grp->totalSize = 0;
    grp->allocCount = 0;
}

// @addr 0x80176700 — Destroy all groups and release records
void GroupHeap::destroy() {
    GroupRecord* current = mGroups;
    while (current != nullptr) {
        GroupRecord* next = current->next;
        // Free record memory
        current = next;
    }
    mGroups = nullptr;
    mTotalAllocs = 0;
    mHeap = nullptr;
}

// @addr 0x80176780
u32 GroupHeap::getGroupTotalSize(u16 groupId) const {
    GroupRecord* grp = findGroup(groupId);
    return grp != nullptr ? grp->totalSize : 0;
}

// @addr 0x80176800
u32 GroupHeap::getGroupAllocCount(u16 groupId) const {
    GroupRecord* grp = findGroup(groupId);
    return grp != nullptr ? grp->allocCount : 0;
}

// @addr 0x80176880 — Find group record by ID
GroupHeap::GroupRecord* GroupHeap::findGroup(u16 groupId) const {
    GroupRecord* current = mGroups;
    while (current != nullptr) {
        if (current->groupId == groupId) return current;
        current = current->next;
    }
    return nullptr;
}

// @addr 0x80176900 — Print group statistics to debug output
void GroupHeap::dumpGroupStats() const {
    GroupRecord* current = mGroups;
    while (current != nullptr) {
        // OSReport("Group %d: %u bytes, %u allocs\n",
        //          current->groupId, current->totalSize, current->allocCount);
        current = current->next;
    }
}

// ============================================================================
// Heap tree utilities
// ============================================================================

// @addr 0x80176A00 — Find which EGG heap contains a memory block
Heap* findContainHeap(const void* memBlock) {
    (void)memBlock;
    // In real SDK: MEMFindContainHeap, then iterate Heap::sHeapList
    return nullptr;
}

// @addr 0x80176A80 — Dump all heap statistics
void dumpAllHeaps() {
    // In real SDK: iterate Heap::sHeapList, print each heap's stats
}

// @addr 0x80176B00 — Get current thread's heap
Heap* getCurrentHeap() {
    // In real SDK: return Heap::sCurrentHeap
    return nullptr;
}

// ============================================================================
// Stub functions — remaining addresses in 0x80176B40 - 0x80178000
// ============================================================================

// @addr 0x80176B40
s32 fn_80176B40(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x80176B80
u32 fn_80176B80(u32* p) { (void)p; return 0; }
// @addr 0x80176BB0
void fn_80176BB0(void) {}
// @addr 0x80176BE0
s32 fn_80176BE0(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x80176C20
u32 fn_80176C20(s32 a, u32 b) { (void)a; (void)b; return 0; }
// @addr 0x80176C60
void fn_80176C60(s32 a) { (void)a; }
// @addr 0x80176C90
void fn_80176C90(u32 a) { (void)a; }
// @addr 0x80176CC0
void fn_80176CC0(s32 a) { (void)a; }
// @addr 0x80176CF0
void fn_80176CF0(u32 a) { (void)a; }
// @addr 0x80176D20
void fn_80176D20(s32 a) { (void)a; }
// @addr 0x80176D50
void fn_80176D50(s32 a, u32 b) { (void)a; (void)b; }
// @addr 0x80176D90
s32 fn_80176D90(s32 a, u32 b) { (void)a; (void)b; return 0; }
// @addr 0x80176DD0
u32 fn_80176DD0(u32 a, u32 b) { (void)a; (void)b; return 0; }
// @addr 0x80176E10
void fn_80176E10(void) {}
// @addr 0x80176E40
void fn_80176E40(u32 a, u32 b, u32 c) { (void)a; (void)b; (void)c; }
// @addr 0x80176E80
s32 fn_80176E80(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x80176EC0
void fn_80176EC0(s32 a, s32 b) { (void)a; (void)b; }
// @addr 0x80176F00
s32 fn_80176F00(s32 a) { (void)a; return 0; }
// @addr 0x80176F30
void fn_80176F30(void) {}
// @addr 0x80176F60
void fn_80176F60(s32 a) { (void)a; }
// @addr 0x80176F90
u32 fn_80176F90(u32 a) { (void)a; return 0; }
// @addr 0x80176FC0
void fn_80176FC0(u32 a) { (void)a; }
// @addr 0x80176FF0
s32 fn_80176FF0(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x80177030
u32 fn_80177030(s32 a) { (void)a; return 0; }
// @addr 0x80177060
void fn_80177060(s32 a, u32 b) { (void)a; (void)b; }
// @addr 0x801770A0
void fn_801770A0(s32 a) { (void)a; }
// @addr 0x801770D0
void fn_801770D0(void) {}
// @addr 0x80177100
s32 fn_80177100(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x80177140
void fn_80177140(s32 a, u32 b) { (void)a; (void)b; }

} // namespace EGG