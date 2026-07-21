#pragma once
// CourseColManager stub — minimal declarations for bridge compilation
// Real implementation lives in data/src/game/Field/CourseColManager.cpp
#ifndef __KART_COLLIDE_AREA_DEFINED__
#define __KART_COLLIDE_AREA_DEFINED__
namespace Kart {
class KartCollideArea {
public:
    void init() {}
};
}
#endif

#include <egg/math/eggVector.hpp>

namespace Field {

// Match layout of real SphereColResult from data/src/game/Field/KCollision.hpp
struct SphereColResult {
    f32 dist;
    EGG::Vector3f normal;
    u32 attribute;
    u32 triIdx;
    bool hit;
};

class CourseColManager {
public:
    void init() {}
    static CourseColManager* instance();
    bool isLoaded() const;
    bool checkSphereFiltered(f32 x, f32 y, f32 z, f32 radius,
                             u32 typeMask, SphereColResult* result);
};

} // namespace Field