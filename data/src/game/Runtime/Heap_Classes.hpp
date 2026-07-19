#pragma once
// ============================================================================
// Heap_Classes.hpp — EGG Heap Allocator Class Hierarchy
// Address range: 0x80450000 - 0x80460000 (293 functions)
//
// Hierarchy:
//   EGG::Heap (base)
//     +-- EGG::ExpHeap  (general-purpose, free-list based)
//     +-- EGG::FrameHeap (LIFO frame allocator)
//     +-- EGG::AdminHeap (root/admin heap wrapping OS heap)
//
// EGG::Heap::MemoryBlock — intrusive linked-list node for allocated blocks
//
// Categorization: GENESIS Phase 5 (Runtime Module, Task 2b)
// ============================================================================
#include "rk_types.h"
#define UNUSED(x) (void)(x)

namespace EGG {

// Forward declarations
class Heap;
class ExpHeap;
class FrameHeap;
class AdminHeap;

// ============================================================
// EGG::Heap — Base heap class
// ============================================================
// Layout (based on MKWii reverse engineering):
//   0x00  vtable
//   0x04  mParent         — parent heap pointer
//   0x08  mChildHead      — head of child heap list
//   0x0C  mChildTail      — tail of child heap list
//   0x10  mPrev           — previous sibling heap
//   0x14  mNext           — next sibling heap
//   0x18  mStart          — heap memory region start
//   0x1C  mEnd            — heap memory region end
//   0x20  mState          — allocation state flags
//   0x24  mFlags          — heap attribute flags
//   0x28  mName[0x20]     — heap name (up to 32 chars)
//   0x48  mSize           — total heap size
//   0x4C  mAllocatedSize  — currently allocated size
// Total size: ~0x50
// ============================================================
class Heap {
public:
    // --- Flags ---
    enum Flag {
        FLAG_ZERO_FILL   = BIT(0),  // zero-fill allocations
        FLAG_DEBUG_FILL  = BIT(1),  // fill freed memory with 0xBAADF00D
        FLAG_THREAD_SAFE = BIT(2),  // enable mutex for thread safety
        FLAG_LOCKED      = BIT(3),  // heap is currently locked
        FLAG_UNKNOWN     = BIT(4),
    };

    // --- Allocation alignment hint ---
    enum AllocDir {
        ALLOC_TOP    = 0,  // allocate from top (high addresses)
        ALLOC_BOTTOM = 1,  // allocate from bottom (low addresses)
    };

    // --- Virtual methods (vtable) ---
    virtual ~Heap() {}
    virtual void* alloc(u32 size, s32 align) = 0;
    virtual void  free(void* ptr) = 0;
    virtual void  destroy() = 0;
    virtual u32   getAllocatableSize(s32 align) const = 0;
    virtual u32   getTotalFreeSize() const = 0;
    virtual void  init(void* start, u32 size) = 0;
    virtual void  dump() const = 0;

    // --- Non-virtual interface ---
    void* alloc(u32 size)                       { return alloc(size, 4); }
    void* allocAligned(u32 size, s32 alignment) { return alloc(size, alignment); }

    // @addr 0x80450014 — Heap null-check / size validation (operator new pattern)
    // Used by EGG heap allocators as a placement new validator
    static void* operatorValidate(void* ptr, u32 size);

    // --- Accessors ---
    Heap* getParent() const     { return mParent; }
    Heap* getChildHead() const  { return mChildHead; }
    Heap* getChildTail() const  { return mChildTail; }
    Heap* getPrev() const       { return mPrev; }
    Heap* getNext() const       { return mNext; }
    void*  getStart() const     { return mStart; }
    void*  getEnd() const       { return mEnd; }
    u32    getSize() const      { return static_cast<u32>((u8*)mEnd - (u8*)mStart); }
    u32    getFlags() const     { return mFlags; }
    const char* getName() const { return mName; }

    void setParent(Heap* parent) { mParent = parent; }

    bool hasFlag(Flag f) const { return (mFlags & f) != 0; }

protected:
    Heap()
        : mParent(nullptr), mChildHead(nullptr), mChildTail(nullptr)
        , mPrev(nullptr), mNext(nullptr), mStart(nullptr), mEnd(nullptr)
        , mState(0), mFlags(0), mName(), mSize(0), mAllocatedSize(0) {
        mName[0] = '\0';
    }

    // --- Member data ---
    Heap*  mParent;          // 0x04
    Heap*  mChildHead;       // 0x08
    Heap*  mChildTail;       // 0x0C
    Heap*  mPrev;            // 0x10
    Heap*  mNext;            // 0x14
    void*  mStart;           // 0x18
    void*  mEnd;             // 0x1C
    u32    mState;           // 0x20
    u32    mFlags;           // 0x24
    char   mName[32];        // 0x28
    u32    mSize;            // 0x48
    u32    mAllocatedSize;   // 0x4C
};

// ============================================================
// EGG::MemoryBlock — Intrusive node for free/used block lists
// ============================================================
// Used by ExpHeap to track free and allocated memory blocks.
// Layout:
//   0x00  mPrev    — previous block in list
//   0x04  mNext    — next block in list
//   0x08  mStart   — start address of this block's data
//   0x0C  mEnd     — end address of this block's data
//   0x10  mFlags   — block state flags
//   0x14  mGroupID — allocation group identifier
// ============================================================
class MemoryBlock {
public:
    enum BlockFlag {
        BLOCK_FREE     = BIT(0),
        BLOCK_USED     = BIT(1),
        BLOCK_FIRST    = BIT(2),
        BLOCK_LAST     = BIT(3),
        BLOCK_GROUP_START = BIT(4),
        BLOCK_GROUP_END   = BIT(5),
    };

    MemoryBlock* mPrev;      // 0x00
    MemoryBlock* mNext;      // 0x04
    void*        mStart;     // 0x08
    void*        mEnd;       // 0x0C
    u16          mFlags;     // 0x10
    u16          mPadding;   // 0x12
    u32          mGroupID;   // 0x14

    void* getDataPtr() const { return mStart; }
    u32  getSize() const    { return static_cast<u32>((u8*)mEnd - (u8*)mStart); }
    bool isFree() const     { return (mFlags & BLOCK_FREE) != 0; }
};

// ============================================================
// EGG::ExpHeap — General-purpose expanding heap
// ============================================================
// Extends EGG::Heap with a free-list allocator.
// Layout (extends Heap at 0x00-0x4F):
//   0x50  mFreeHead      — head of free block list
//   0x54  mUsedHead      — head of used block list
//   0x58  mAllocDir      — allocation direction (top/bottom)
//   0x5C  mGroupID       — current allocation group
//   0x60  mTotalFreeSize — cached total free size
//   0x64  mMutex         — OS mutex for thread safety
// ============================================================
class ExpHeap : public Heap {
public:
    // --- Factory ---
    // @addr 0x80455c90 — create ExpHeap from parent
    static ExpHeap* create(Heap* parent, u32 size, s32 align = 4);
    // @addr 0x80455bac — create ExpHeap at specific address
    static ExpHeap* create(void* addr, u32 size, Heap* parent = nullptr);

    // --- Virtual overrides ---
    void* alloc(u32 size, s32 align) override;
    void  free(void* ptr) override;
    void  destroy() override;
    u32   getAllocatableSize(s32 align) const override;
    u32   getTotalFreeSize() const override;
    void  init(void* start, u32 size) override;
    void  dump() const override;

    // --- ExpHeap-specific ---
    // @addr 0x80459cd0 — allocate from top
    void* allocFromTop(u32 size, s32 align);
    // @addr 0x80459c4c — allocate from bottom
    void* allocFromBottom(u32 size, s32 align);
    // @addr 0x8045a84c — realloc
    void* realloc(void* ptr, u32 newSize);
    // @addr 0x8045aaf8 — get total used size
    u32   getTotalUsedSize() const;
    // @addr 0x8045a88c — free all blocks in group
    void  freeGroup(u16 groupID);
    // @addr 0x8045ab60 — free all
    void  freeAll();
    // @addr 0x8045973c — find containing heap
    static Heap* findContainHeap(const void* ptr);

    friend class ::EGG::MemoryBlock;

    void setAllocDir(AllocDir dir) { mAllocDir = static_cast<u8>(dir); }
    AllocDir getAllocDir() const   { return static_cast<AllocDir>(mAllocDir); }

    // @addr 0x80455828/0x80455868 — validation thunks (operator new)
    static void* operatorValidateTop(void* ptr, u32 size);
    static void* operatorValidateBottom(void* ptr, u32 size);

protected:
    ExpHeap() : mFreeHead(nullptr), mUsedHead(nullptr), mAllocDir(0)
               , mGroupID(0), mTotalFreeSize(0), mMutex(0) {}

    // --- ExpHeap member data ---
    ::EGG::MemoryBlock* mFreeHead;      // 0x50
    ::EGG::MemoryBlock* mUsedHead;      // 0x54
    u8           mAllocDir;       // 0x58
    u8           _pad59[3];       // 0x59
    u16          mGroupID;        // 0x5C
    u16          _pad5e[2];       // 0x5E
    u32          mTotalFreeSize;  // 0x60
    u32          mMutex;          // 0x64
};

// ============================================================
// EGG::FrameHeap — LIFO frame-based heap
// ============================================================
// Extends EGG::Heap with a stack-based allocator.
// Each "frame" allocates from a watermark; freeAll pops to last frame.
// Layout (extends Heap at 0x00-0x4F):
//   0x50  mWatermark     — current allocation watermark
//   0x54  mFrameWatermark — saved frame watermark
//   0x58  mStateFlags    — frame state flags
// ============================================================
class FrameHeap : public Heap {
public:
    // --- Factory ---
    // @addr 0x8045d50c — create FrameHeap from parent
    static FrameHeap* create(Heap* parent, u32 size, s32 align = 4);

    // --- Virtual overrides ---
    void* alloc(u32 size, s32 align) override;
    void  free(void* ptr) override;
    void  destroy() override;
    u32   getAllocatableSize(s32 align) const override;
    u32   getTotalFreeSize() const override;
    void  init(void* start, u32 size) override;
    void  dump() const override;

    // --- FrameHeap-specific ---
    // @addr 0x8045d67c — save current state as frame
    void  saveState();
    // @addr 0x8045d724 — restore to last saved frame
    void  restoreState();
    // @addr 0x8045d834 — free all and restore
    void  freeAll();
    // @addr 0x8045d468 — get current free size
    u32   getFreeSize() const;

    // @addr 0x80456390 — validation thunk
    static void* operatorValidate(void* ptr, u32 size);

protected:
    FrameHeap() : mWatermark(nullptr), mFrameWatermark(nullptr), mStateFlags(0) {}

    // --- FrameHeap member data ---
    void* mWatermark;       // 0x50
    void* mFrameWatermark;  // 0x54
    u32   mStateFlags;      // 0x58
};

// ============================================================
// EGG::AdminHeap — Root/admin heap
// ============================================================
// The top-level heap created from the OS heap. Manages child heaps.
// Layout (extends Heap at 0x00-0x4F):
//   0x50  mHandle        — OS heap handle
//   0x54  mOspHeapHead   — OS heap linked list integration
// ============================================================
class AdminHeap : public Heap {
public:
    // --- Factory ---
    // @addr 0x80451668 — create AdminHeap from OS heap
    static AdminHeap* create(u32 size, s32 align = 4);

    // --- Virtual overrides ---
    void* alloc(u32 size, s32 align) override;
    void  free(void* ptr) override;
    void  destroy() override;
    u32   getAllocatableSize(s32 align) const override;
    u32   getTotalFreeSize() const override;
    void  init(void* start, u32 size) override;
    void  dump() const override;

    // @addr 0x80450014 — validation thunk
    static void* operatorValidate(void* ptr, u32 size);

protected:
    AdminHeap() : mHandle(0), mOspHeapHead(nullptr) {}

    // --- AdminHeap member data ---
    OSHeapHandle mHandle;        // 0x50
    void*        mOspHeapHead;   // 0x54
};

} // namespace EGG