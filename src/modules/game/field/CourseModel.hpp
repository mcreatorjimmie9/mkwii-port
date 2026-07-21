#pragma once
#include "rk_types.h"
#include <egg/math/eggVector.hpp>
#include "CourseColManager.hpp"
#include "CollisionEntries.hpp"

namespace Field {

class CourseModel {
public:
    static CourseModel* spInstance;

    bool checkSphereCachedPartial(const EGG::Vector3f& pos, const EGG::Vector3f& lastPos,
                                   u32 typeMask, void* outInfo, f32 radius, s32 param) {
        (void)lastPos;
        (void)param;

        CourseColManager* colMgr = CourseColManager::instance();
        if (!colMgr || !colMgr->isLoaded()) return false;

        // Delegate to CourseColManager's filtered sphere test
        SphereColResult result;
        if (colMgr->checkSphereFiltered(pos.x, pos.y, pos.z, radius, typeMask, &result)) {
            if (result.hit && outInfo != nullptr) {
                ColInfoPartial* info = static_cast<ColInfoPartial*>(outInfo);
                // bboxLow = collision normal
                info->bboxLow = result.normal;
                // bboxHigh = push-out vector (normal * penetration depth)
                f32 pushDist = (result.dist < 0.0f) ? -result.dist : 0.0f;
                info->bboxHigh.x = result.normal.x * pushDist;
                info->bboxHigh.y = result.normal.y * pushDist;
                info->bboxHigh.z = result.normal.z * pushDist;
            }
            return true;
        }
        return false;
    }
};

CourseModel* CourseModel::spInstance = nullptr;

} // namespace Field