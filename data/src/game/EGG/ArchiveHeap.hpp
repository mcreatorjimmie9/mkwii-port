// ============================================================================
// ArchiveHeap.hpp — EGG::ArchiveHeap + EGG::GroupHeap
// Address range: 0x80176000 - 0x80178000 (DOL)
// Corresponding ELF range: ~0x805D0E30 - 0x805D8E30
//
// ArchiveHeap: Heap-backed archive reader. Allocates memory for decompressed
//              archive entries. Used for loading RARC/BRRES resource bundles.
//
// GroupHeap: Tracks allocation groups within a parent heap. Each group has an
//            ID and accumulated size. Used for batch-free of related objects.
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
// ArchiveHeap — Allocates from a heap for archive entry decompression
// ============================================================================
class ArchiveHeap {
public:
    // @addr 0x80176008
    ArchiveHeap();
    // @addr 0x80176060
    ~ArchiveHeap();

    // @addr 0x801760C0
    void init(Heap* heap, u32 maxSize);
    // @addr 0x80176140
    void* alloc(u32 size, s32 align);
    // @addr 0x801761C0
    void free(void* block);
    // @addr 0x80176220
    void destroy();

    // @addr 0x801762A0
    u32 getFreeSize() const;
    // @addr 0x80176300
    u32 getUsedSize() const;
    // @addr 0x80176360
    void reset();

    // @addr 0x801763A0
    u32 getTotalFree() const;
    // @addr 0x801763E0
    u32 getMaxBlock() const;
    // @addr 0x80176420
    u32 getAllocCount() const;

    // @addr 0x80176460
    void init(u8* start, u32 size);

    // Block info for findBlock
    struct BlockInfo {
        void* start;
        u32 size;
        u32 index;
    };

    // @addr 0x801764C0
    BlockInfo findBlock(void* ptr) const;
    // @addr 0x80176520
    u32 defragment();

    // @addr 0x801763C0
    Heap* getBackingHeap() const { return mHeap; }

private:
    Heap* mHeap;           // 0x00 — backing EGG heap
    void* mBufferStart;    // 0x04 — start of allocated region
    void* mBufferEnd;      // 0x08 — end of allocated region
    void* mCurrentPtr;     // 0x0C — current allocation pointer (linear)
    u32 mTotalSize;        // 0x10 — total size of archive buffer
    u32 mUsedSize;         // 0x14 — currently used bytes
};

// ============================================================================
// GroupHeap — Allocation group tracking
//
// Wraps a parent heap and tracks allocations by group ID (u16).
// Enables bulk-free of all allocations in a group, and size reporting
// per group for memory profiling.
// ============================================================================
class GroupHeap {
public:
    // Per-group record
    struct GroupRecord {
        u16 groupId;       // 0x00
        u16 padding;       // 0x02
        u32 totalSize;     // 0x04
        u32 allocCount;    // 0x08
        GroupRecord* next; // 0x0C
    };

    // @addr 0x80176400
    GroupHeap();
    // @addr 0x80176460
    ~GroupHeap();

    // @addr 0x801764C0
    void init(Heap* heap);
    // @addr 0x80176540
    void* alloc(u32 size, s32 align, u16 groupId);
    // @addr 0x80176600
    void free(void* block);
    // @addr 0x80176680
    void freeGroup(u16 groupId);
    // @addr 0x80176700
    void destroy();

    // @addr 0x80176780
    u32 getGroupTotalSize(u16 groupId) const;
    // @addr 0x80176800
    u32 getGroupAllocCount(u16 groupId) const;
    // @addr 0x80176880
    GroupRecord* findGroup(u16 groupId) const;
    // @addr 0x80176900
    void dumpGroupStats() const;

    // @addr 0x80176940
    u32 getTotalAllocCount() const;
    // @addr 0x80176980
    bool hasGroup(u16 groupId) const;
    // @addr 0x801769C0
    bool createGroup(u16 groupId);
    // @addr 0x80176A40
    bool removeGroup(u16 groupId);

    // @addr 0x80176980
    Heap* getBackingHeap() const { return mHeap; }

private:
    Heap* mHeap;           // 0x00 — backing heap
    GroupRecord* mGroups;  // 0x04 — linked list of group records
    u32 mTotalAllocs;      // 0x08
};

// ============================================================================
// Heap tree utilities (called from both coverage gap modules)
// ============================================================================

// @addr 0x80176A00
Heap* findContainHeap(const void* memBlock);
// @addr 0x80176A80
void dumpAllHeaps();
// @addr 0x80176B00
Heap* getCurrentHeap();

} // namespace EGG

// @addr 0x80176580
void ArchiveHeap_printStats(const EGG::ArchiveHeap* heap);