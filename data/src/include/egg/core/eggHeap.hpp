#pragma once
// Stub: EGG Heap (memory allocator from Nintendo's EGG library)
#include "rk_types.h"
#include <cstdlib>

namespace EGG {

class Heap {
public:
    void* alloc(u32 size, int align = 4) {
        // Stub: delegate to malloc
        (void)align;
        return std::malloc(size);
    }
    void free(void* ptr) {
        std::free(ptr);
    }
    static Heap* getCurrentHeap() {
        static Heap sDefaultHeap;
        return &sDefaultHeap;
    }
};

} // namespace EGG

// Global new/delete operators (Wii SDK uses custom heaps)
inline void* operator new(size_t size) {
    return EGG::Heap::getCurrentHeap()->alloc(static_cast<u32>(size));
}
inline void* operator new[](size_t size) {
    return EGG::Heap::getCurrentHeap()->alloc(static_cast<u32>(size));
}
inline void operator delete(void* ptr) {
    EGG::Heap::getCurrentHeap()->free(ptr);
}
inline void operator delete[](void* ptr) {
    EGG::Heap::getCurrentHeap()->free(ptr);
}
