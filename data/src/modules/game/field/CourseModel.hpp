#pragma once
#include "rk_types.h"
#include <egg/math/eggVector.hpp>

namespace Field {

class CourseModel {
public:
    static CourseModel* spInstance;
    bool checkSphereCachedPartial(const EGG::Vector3f& pos, const EGG::Vector3f& lastPos,
                                   u32 typeMask, void* outInfo, f32 radius, s32 param) {
        (void)pos; (void)lastPos; (void)typeMask; (void)outInfo; (void)radius; (void)param;
        return false;
    }
};

CourseModel* CourseModel::spInstance = nullptr;

} // namespace Field