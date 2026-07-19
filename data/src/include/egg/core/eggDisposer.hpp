#pragma once
// Stub: EGG Disposer — base class for objects that need explicit destruction ordering
#include "rk_types.h"

namespace EGG {

class Disposer {
public:
    virtual ~Disposer() {}
};

} // namespace EGG
