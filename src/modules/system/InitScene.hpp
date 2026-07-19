#pragma once
#include "../rk_types.h"

class EGG_Heap;

class HeapCollection {
public:
    enum { HEAP_ID_MEM2 = 1 };
    EGG_Heap* mpHeaps[4];
};

namespace System {
class InitScene {
public:
    virtual ~InitScene() {}
    static InitScene* spInstance;
    HeapCollection mHeapCollection;
};
}