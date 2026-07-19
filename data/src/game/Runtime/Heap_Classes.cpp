// ============================================================================
// Heap_Classes.cpp — EGG Heap Allocator Implementations (stubs)
// Address range: 0x80450000 - 0x80460000 (293 functions)
//
// These are stub implementations. Real method bodies require full
// reimplementation from the decompiled Runtime.c.
//
// Categorization: GENESIS Phase 5 (Runtime Module, Task 2b)
// ============================================================================
#include "Heap_Classes.hpp"
#include <cstring>
#include <new>

namespace EGG {

// ============================================================
// EGG::Heap
// ============================================================

// @addr 0x80450014 — null-check validator used by placement new
void* Heap::operatorValidate(void* ptr, u32 size) {
    if (ptr != nullptr && size > 0) {
        // In real code: OSPanic/abort
        return nullptr;
    }
    return ptr;
}

// ============================================================
// EGG::ExpHeap
// ============================================================

ExpHeap* ExpHeap::create(Heap* parent, u32 size, s32 align) {
    void* mem = parent->alloc(size + sizeof(ExpHeap), align);
    if (!mem) return nullptr;
    return create(mem, size, parent);
}

ExpHeap* ExpHeap::create(void* addr, u32 size, Heap* parent) {
    ExpHeap* heap = new (addr) ExpHeap();
    // In real implementation: initialize free list, set up memory block
    UNUSED(size);
    heap->setParent(parent);
    heap->mStart = static_cast<u8*>(addr) + sizeof(ExpHeap);
    heap->mEnd = static_cast<u8*>(addr) + size;
    return heap;
}

void* ExpHeap::alloc(u32 size, s32 align) {
    // @addr 0x80459cd0 / 0x80459c4c — actual implementation in Runtime.c
    UNUSED(size); UNUSED(align);
    return nullptr;
}

void ExpHeap::free(void* ptr) {
    // @addr 0x8045b284
    UNUSED(ptr);
}

void ExpHeap::destroy() {
    // @addr 0x8045b070
    if (mParent) {
        mParent->free(this);
    }
}

u32 ExpHeap::getAllocatableSize(s32 align) const {
    // @addr 0x8045c6c0
    UNUSED(align);
    return mTotalFreeSize;
}

u32 ExpHeap::getTotalFreeSize() const {
    // @addr 0x8045c890
    return mTotalFreeSize;
}

void ExpHeap::init(void* start, u32 size) {
    // @addr 0x8045cbe8
    mStart = start;
    mEnd = static_cast<u8*>(start) + size;
    UNUSED(size);
}

void ExpHeap::dump() const {
    // @addr 0x8045ccd8
}

void* ExpHeap::allocFromTop(u32 size, s32 align) {
    // @addr 0x80459cd0
    return alloc(size, align);
}

void* ExpHeap::allocFromBottom(u32 size, s32 align) {
    // @addr 0x80459c4c
    return alloc(size, align);
}

void* ExpHeap::realloc(void* ptr, u32 newSize) {
    // @addr 0x8045a84c
    UNUSED(ptr); UNUSED(newSize);
    return nullptr;
}

u32 ExpHeap::getTotalUsedSize() const {
    // @addr 0x8045aaf8
    return mAllocatedSize;
}

void ExpHeap::freeGroup(u16 groupID) {
    // @addr 0x8045a88c
    UNUSED(groupID);
}

void ExpHeap::freeAll() {
    // @addr 0x8045ab60
}

Heap* ExpHeap::findContainHeap(const void* ptr) {
    // @addr 0x8045973c
    UNUSED(ptr);
    return nullptr;
}

void* ExpHeap::operatorValidateTop(void* ptr, u32 size) {
    // @addr 0x80455828
    if (ptr != nullptr && size > 0) return nullptr;
    return ptr;
}

void* ExpHeap::operatorValidateBottom(void* ptr, u32 size) {
    // @addr 0x80455868
    if (ptr != nullptr && size > 0) return nullptr;
    return ptr;
}

// ============================================================
// EGG::FrameHeap
// ============================================================

FrameHeap* FrameHeap::create(Heap* parent, u32 size, s32 align) {
    void* mem = parent->alloc(size + sizeof(FrameHeap), align);
    if (!mem) return nullptr;
    FrameHeap* heap = new (mem) FrameHeap();
    heap->setParent(parent);
    heap->mStart = static_cast<u8*>(mem) + sizeof(FrameHeap);
    heap->mEnd = static_cast<u8*>(mem) + size;
    heap->mWatermark = heap->mStart;
    heap->mFrameWatermark = heap->mStart;
    return heap;
}

void* FrameHeap::alloc(u32 size, s32 align) {
    // @addr 0x8045cb40
    UNUSED(size); UNUSED(align);
    return nullptr;
}

void FrameHeap::free(void* ptr) {
    // @addr 0x8045cb80
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
    return static_cast<u32>((u8*)mEnd - (u8*)mStart) - used;
}

u32 FrameHeap::getTotalFreeSize() const {
    return getAllocatableSize(4);
}

void FrameHeap::init(void* start, u32 size) {
    // @addr 0x8045d210
    mStart = start;
    mEnd = static_cast<u8*>(start) + size;
    mWatermark = start;
    mFrameWatermark = start;
    UNUSED(size);
}

void FrameHeap::dump() const {
    // @addr 0x8045d284
}

void FrameHeap::saveState() {
    // @addr 0x8045d67c
    mFrameWatermark = mWatermark;
}

void FrameHeap::restoreState() {
    // @addr 0x8045d724
    mWatermark = mFrameWatermark;
}

void FrameHeap::freeAll() {
    // @addr 0x8045d834
    mWatermark = mStart;
    mFrameWatermark = mStart;
}

u32 FrameHeap::getFreeSize() const {
    // @addr 0x8045d468
    return getAllocatableSize(4);
}

void* FrameHeap::operatorValidate(void* ptr, u32 size) {
    // @addr 0x80456390
    if (ptr != nullptr && size > 0) return nullptr;
    return ptr;
}

// ============================================================
// EGG::AdminHeap
// ============================================================

AdminHeap* AdminHeap::create(u32 size, s32 align) {
    // @addr 0x80451668 — creates heap from OS memory
    // In the real implementation this calls OSCreateHeap
    UNUSED(size); UNUSED(align);
    return nullptr;
}

void* AdminHeap::alloc(u32 size, s32 align) {
    // @addr 0x80450068
    UNUSED(size); UNUSED(align);
    return nullptr;
}

void AdminHeap::free(void* ptr) {
    // @addr 0x80451b60
    UNUSED(ptr);
}

void AdminHeap::destroy() {
    // @addr 0x8045100c
}

u32 AdminHeap::getAllocatableSize(s32 align) const {
    // @addr 0x80451d84
    UNUSED(align);
    return 0;
}

u32 AdminHeap::getTotalFreeSize() const {
    return 0;
}

void AdminHeap::init(void* start, u32 size) {
    // @addr 0x8045a5bc
    mStart = start;
    mEnd = static_cast<u8*>(start) + size;
    UNUSED(size);
}

void AdminHeap::dump() const {
    // @addr 0x8045a190
}

void* AdminHeap::operatorValidate(void* ptr, u32 size) {
    // @addr 0x80450014
    if (ptr != nullptr && size > 0) return nullptr;
    return ptr;
}

} // namespace EGG