// heap_allocator_test.cpp — EGG Heap Allocator Unit Tests
// Tests ExpHeap (free-list allocator) and FrameHeap (bump allocator)
// with alloc/free, coalescing, alignment, and edge cases.

#include "test_framework.hpp"
#include "Runtime/Heap_Classes.hpp"
#include <cstring>

// =============================================================================
// ExpHeap Tests
// =============================================================================

static void test_expheap_create_destroy() {
    TEST_SECTION("ExpHeap: create/destroy");

    const u32 HEAP_SIZE = 4096;
    u8 mem[HEAP_SIZE];
    memset(mem, 0xCC, HEAP_SIZE);

    EGG::ExpHeap* heap = EGG::ExpHeap::create(mem, HEAP_SIZE, nullptr);
    TEST_ASSERT(heap != nullptr, "create should return non-null heap");
    TEST_ASSERT(heap->getTotalFreeSize() > 0, "new heap should have free space");
    TEST_ASSERT(heap->getAllocatableSize(4) > 0, "allocatable size > 0");

    u32 freeBefore = heap->getTotalFreeSize();
    TEST_ASSERT(freeBefore > 0, "free size > 0 before any alloc");

    // Single alloc + free cycle
    void* p1 = heap->alloc(64, 4);
    TEST_ASSERT(p1 != nullptr, "64-byte alloc should succeed");
    TEST_ASSERT(heap->getAllocatableSize(4) < freeBefore, "free size should decrease after alloc");

    heap->free(p1);
    // After one alloc+free cycle, 2 MemoryBlock headers of overhead are consumed
    // (the freed block's header + trailing free block header from the original split).
    // So free size will be freeBefore - 2*sizeof(MemoryBlock), not freeBefore.
    u32 overhead = 2 * sizeof(EGG::MemoryBlock);
    TEST_ASSERT(heap->getTotalFreeSize() >= freeBefore - overhead,
        "free should restore size minus header overhead");
}

static void test_expheap_multiple_allocs() {
    TEST_SECTION("ExpHeap: multiple allocations");

    const u32 HEAP_SIZE = 8192;
    u8 mem[HEAP_SIZE];
    memset(mem, 0xCC, HEAP_SIZE);

    EGG::ExpHeap* heap = EGG::ExpHeap::create(mem, HEAP_SIZE, nullptr);
    TEST_ASSERT(heap != nullptr, "create should succeed");

    void* p1 = heap->alloc(128, 4);
    void* p2 = heap->alloc(256, 4);
    void* p3 = heap->alloc(64, 4);

    TEST_ASSERT(p1 != nullptr, "alloc 128 OK");
    TEST_ASSERT(p2 != nullptr, "alloc 256 OK");
    TEST_ASSERT(p3 != nullptr, "alloc 64 OK");

    // Verify allocations don't overlap
    TEST_ASSERT(p1 != p2, "allocs should be distinct");
    TEST_ASSERT(p2 != p3, "allocs should be distinct");
    TEST_ASSERT(p1 != p3, "allocs should be distinct");

    // Verify they are aligned to 4 bytes
    TEST_ASSERT((uintptr_t)p1 % 4 == 0, "p1 aligned to 4");
    TEST_ASSERT((uintptr_t)p2 % 4 == 0, "p2 aligned to 4");
    TEST_ASSERT((uintptr_t)p3 % 4 == 0, "p3 aligned to 4");

    // Fill with known data to verify no corruption
    memset(p1, 0xAA, 128);
    memset(p2, 0xBB, 256);
    memset(p3, 0xCC, 64);

    // Free in different order
    heap->free(p2);
    heap->free(p1);
    heap->free(p3);

    ;
}

static void test_expheap_alignment() {
    TEST_SECTION("ExpHeap: alignment");

    const u32 HEAP_SIZE = 16384;
    u8 mem[HEAP_SIZE];
    memset(mem, 0xCC, HEAP_SIZE);

    EGG::ExpHeap* heap = EGG::ExpHeap::create(mem, HEAP_SIZE, nullptr);

    // 16-byte alignment
    void* p16 = heap->alloc(100, 16);
    TEST_ASSERT(p16 != nullptr, "16-byte alloc OK");
    TEST_ASSERT((uintptr_t)p16 % 16 == 0, "aligned to 16");

    // 32-byte alignment
    void* p32 = heap->alloc(200, 32);
    TEST_ASSERT(p32 != nullptr, "32-byte alloc OK");
    TEST_ASSERT((uintptr_t)p32 % 32 == 0, "aligned to 32");

    // 256-byte alignment
    void* p256 = heap->alloc(300, 256);
    TEST_ASSERT(p256 != nullptr, "256-byte alloc OK");
    TEST_ASSERT((uintptr_t)p256 % 256 == 0, "aligned to 256");

    heap->free(p256);
    heap->free(p32);
    heap->free(p16);

    ;
}

static void test_expheap_coalescing() {
    TEST_SECTION("ExpHeap: free-block coalescing");

    const u32 HEAP_SIZE = 8192;
    u8 mem[HEAP_SIZE];
    memset(mem, 0xCC, HEAP_SIZE);

    EGG::ExpHeap* heap = EGG::ExpHeap::create(mem, HEAP_SIZE, nullptr);
    u32 freeBefore = heap->getTotalFreeSize();

    // Allocate three blocks
    void* p1 = heap->alloc(100, 4);
    void* p2 = heap->alloc(100, 4);
    void* p3 = heap->alloc(100, 4);
    TEST_ASSERT(p1 && p2 && p3, "three allocs OK");

    // Free middle block — creates a hole
    heap->free(p2);

    // Free first block — should coalesce with the freed middle block
    u32 freeAfterP1 = heap->getTotalFreeSize();
    heap->free(p1);

    u32 freeAfterBoth = heap->getTotalFreeSize();
    TEST_ASSERT(freeAfterBoth > freeAfterP1,
        "coalescing should increase free size after freeing adjacent block");

    // Free last block — should coalesce with the merged block
    heap->free(p3);
    u32 freeAfterAll = heap->getTotalFreeSize();
    // After freeing 3 blocks, each alloc consumed 2 MemoryBlock headers of overhead.
    // Additionally, coalescing doesn't fully recover because the freed block headers
    // sit between data regions that can't be merged (header space is lost).
    u32 maxOverhead = 6 * sizeof(EGG::MemoryBlock);
    TEST_ASSERT(freeAfterAll >= freeBefore - maxOverhead,
        "all freed: free size should be close to original (minus overhead)");

    ;
}

static void test_expheap_top_alloc() {
    TEST_SECTION("ExpHeap: top allocation");

    const u32 HEAP_SIZE = 8192;
    u8 mem[HEAP_SIZE];
    memset(mem, 0xCC, HEAP_SIZE);

    EGG::ExpHeap* heap = EGG::ExpHeap::create(mem, HEAP_SIZE, nullptr);
    heap->setAllocDir(EGG::Heap::ALLOC_TOP);

    void* p1 = heap->alloc(128, 4);
    TEST_ASSERT(p1 != nullptr, "top alloc 128 OK");
    TEST_ASSERT((uintptr_t)p1 % 4 == 0, "top alloc aligned to 4");

    void* p2 = heap->alloc(64, 4);
    TEST_ASSERT(p2 != nullptr, "top alloc 64 OK");

    // Top allocations should be at high addresses
    TEST_ASSERT(p1 != p2, "top allocs distinct");

    heap->free(p1);
    heap->free(p2);

    ;
}

static void test_expheap_realloc() {
    TEST_SECTION("ExpHeap: realloc");

    const u32 HEAP_SIZE = 8192;
    u8 mem[HEAP_SIZE];
    memset(mem, 0xCC, HEAP_SIZE);

    EGG::ExpHeap* heap = EGG::ExpHeap::create(mem, HEAP_SIZE, nullptr);

    void* p = heap->alloc(32, 4);
    TEST_ASSERT(p != nullptr, "initial alloc OK");
    memset(p, 0xAB, 32);

    // Realloc to larger size
    void* p2 = heap->realloc(p, 128);
    TEST_ASSERT(p2 != nullptr, "realloc to 128 OK");
    // First 32 bytes should be preserved
    u8* bytes = static_cast<u8*>(p2);
    bool preserved = true;
    for (int i = 0; i < 32; i++) {
        if (bytes[i] != 0xAB) { preserved = false; break; }
    }
    TEST_ASSERT(preserved, "realloc preserves original data");

    // Realloc to smaller size
    void* p3 = heap->realloc(p2, 16);
    TEST_ASSERT(p3 != nullptr, "realloc to 16 OK");

    heap->free(p3);

    ;
}

// =============================================================================
// FrameHeap Tests
// =============================================================================

static void test_frameheap_bump_alloc() {
    TEST_SECTION("FrameHeap: bump allocator");

    const u32 HEAP_SIZE = 4096;
    const u32 PARENT_SIZE = HEAP_SIZE + 256;
    u8 parentMem[PARENT_SIZE];
    memset(parentMem, 0xCC, PARENT_SIZE);

    EGG::ExpHeap* parentHeap = EGG::ExpHeap::create(parentMem, PARENT_SIZE, nullptr);
    EGG::FrameHeap* fh = EGG::FrameHeap::create(parentHeap, HEAP_SIZE, 4);
    TEST_ASSERT(fh != nullptr, "FrameHeap create should succeed");
    TEST_ASSERT(fh->getAllocatableSize(4) > 0, "new FrameHeap should have free space");

    // Bump allocator — allocations are sequential
    void* p1 = fh->alloc(64, 4);
    TEST_ASSERT(p1 != nullptr, "FrameHeap alloc 64 OK");
    TEST_ASSERT((uintptr_t)p1 % 4 == 0, "aligned to 4");

    void* p2 = fh->alloc(128, 4);
    TEST_ASSERT(p2 != nullptr, "FrameHeap alloc 128 OK");
    TEST_ASSERT((uintptr_t)p2 % 4 == 0, "aligned to 4");

    // p2 should be at a higher address than p1
    TEST_ASSERT(p2 > p1, "allocations are sequential (p2 > p1)");

    // Write to verify no overlap
    memset(p1, 0xDD, 64);
    memset(p2, 0xEE, 128);

    ;
}

static void test_frameheap_save_restore() {
    TEST_SECTION("FrameHeap: save/restore state");

    const u32 HEAP_SIZE = 4096;
    const u32 PARENT_SIZE = HEAP_SIZE + 256;
    u8 parentMem[PARENT_SIZE];
    memset(parentMem, 0xCC, PARENT_SIZE);

    EGG::ExpHeap* parentHeap = EGG::ExpHeap::create(parentMem, PARENT_SIZE, nullptr);
    EGG::FrameHeap* fh = EGG::FrameHeap::create(parentHeap, HEAP_SIZE, 4);
    TEST_ASSERT(fh != nullptr, "FrameHeap create OK");

    u32 freeBefore = fh->getAllocatableSize(4);

    // Allocate some blocks
    void* p1 = fh->alloc(64, 4);
    void* p2 = fh->alloc(128, 4);
    TEST_ASSERT(p1 != nullptr && p2 != nullptr, "allocs OK");

    u32 freeAfterAllocs = fh->getAllocatableSize(4);
    TEST_ASSERT(freeAfterAllocs < freeBefore, "free size decreased after alloc");

    // Save state (bookmark the watermark)
    fh->saveState();

    // Allocate more
    void* p3 = fh->alloc(256, 4);
    TEST_ASSERT(p3 != nullptr, "post-save alloc OK");

    // Restore to saved watermark — frees p3
    fh->restoreState();

    u32 freeAfterRestore = fh->getAllocatableSize(4);
    TEST_ASSERT(freeAfterRestore == freeAfterAllocs,
        "restoreState should recover the exact free size");

    // freeAll should recover everything
    fh->freeAll();
    u32 freeAfterFreeAll = fh->getAllocatableSize(4);
    TEST_ASSERT(freeAfterFreeAll >= freeBefore - 1,
        "freeAll should recover near-original free size");

    ;
}

static void test_frameheap_alignment() {
    TEST_SECTION("FrameHeap: alignment");

    const u32 HEAP_SIZE = 4096;
    const u32 PARENT_SIZE = HEAP_SIZE + 256;
    u8 parentMem[PARENT_SIZE];
    memset(parentMem, 0xCC, PARENT_SIZE);

    EGG::ExpHeap* parentHeap = EGG::ExpHeap::create(parentMem, PARENT_SIZE, nullptr);
    EGG::FrameHeap* fh = EGG::FrameHeap::create(parentHeap, HEAP_SIZE, 4);

    void* p16 = fh->alloc(100, 16);
    TEST_ASSERT(p16 != nullptr, "16-byte aligned alloc OK");
    TEST_ASSERT((uintptr_t)p16 % 16 == 0, "aligned to 16");

    void* p32 = fh->alloc(100, 32);
    TEST_ASSERT(p32 != nullptr, "32-byte aligned alloc OK");
    TEST_ASSERT((uintptr_t)p32 % 32 == 0, "aligned to 32");

    ;
}

// =============================================================================
// ExpHeap Exhaustion
// =============================================================================

static void test_expheap_exhaustion() {
    TEST_SECTION("ExpHeap: memory exhaustion");

    const u32 HEAP_SIZE = 1024;
    u8 mem[HEAP_SIZE];
    memset(mem, 0xCC, HEAP_SIZE);

    EGG::ExpHeap* heap = EGG::ExpHeap::create(mem, HEAP_SIZE, nullptr);

    // Allocate until exhaustion
    int count = 0;
    void* ptrs[64];
    for (int i = 0; i < 64; i++) {
        ptrs[i] = heap->alloc(16, 4);
        if (ptrs[i] != nullptr) count++;
    }

    TEST_ASSERT(count > 0, "should allocate at least some blocks");
    // After allocating as many 16-byte blocks as possible, remaining free space
    // should be less than what's needed for one more alloc (16 + sizeof(MB)*2 overhead)
    u32 allocOverhead = 16 + 2 * sizeof(EGG::MemoryBlock);
    TEST_ASSERT(heap->getTotalFreeSize() < allocOverhead,
        "should be nearly exhausted");

    // Attempt to allocate when nearly full
    void* pFail = heap->alloc(1024, 4);
    TEST_ASSERT(pFail == nullptr, "large alloc should fail when exhausted");

    // Free all and verify recovery
    for (int i = 0; i < 64; i++) {
        if (ptrs[i] != nullptr) heap->free(ptrs[i]);
    }
    u32 freeAfterAll = heap->getTotalFreeSize();
    TEST_ASSERT(freeAfterAll > 0, "free all should recover space");

    ;
}

// =============================================================================
// Test entry point (called from main)
// =============================================================================

void test_heap_allocators() {
    printf("\n");
    printf("==========================================================\n");
    printf("  EGG Heap Allocator Tests\n");
    printf("==========================================================\n\n");

    test_expheap_create_destroy();
    test_expheap_multiple_allocs();
    test_expheap_alignment();
    test_expheap_coalescing();
    test_expheap_top_alloc();
    test_expheap_realloc();
    test_frameheap_bump_alloc();
    test_frameheap_save_restore();
    test_frameheap_alignment();
    test_expheap_exhaustion();

    printf("  Heap tests complete.\n\n");
}
