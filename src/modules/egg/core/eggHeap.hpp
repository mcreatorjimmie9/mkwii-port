#pragma once
#include "rk_types.h"

namespace EGG {
class Heap {
public:
    void* alloc(u32 size, int align = 4) { (void)size; (void)align; return nullptr; }
    void free(void* ptr) { (void)ptr; }
};
} // namespace EGG