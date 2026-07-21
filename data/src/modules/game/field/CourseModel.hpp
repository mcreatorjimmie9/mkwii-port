#pragma once
// CourseModel.hpp — Course Model collision query bridge
// Provides collision queries that combine CourseColManager (KCL) and
// ObjDrivableManager (drivable objects).
// This is the module-level stub used by decompiled code (e.g. KartCollide).
// The full implementation lives in data/src/field/CourseModel.cpp.

#include "rk_types.h"
#include <egg/math/eggVector.hpp>

namespace Field {

// Forward declarations for collision info types used by the full interface
class ColInfoPartial;

class CourseModel {
public:
    static CourseModel* spInstance;

    CourseModel() : softWallColInfo(nullptr) {}

    // =========================================================================
    // checkSphereCachedPartial — 6-param variant (called by port KartCollide)
    //
    // Performs a filtered sphere collision test against KCL triangles matching
    // the given typeMask.  Wires to CourseColManager::checkSphereFiltered().
    //
    // In the original game, this also queries ObjDrivableManager for drivable
    // objects and combines results with soft wall info. For the PC port, we
    // delegate directly to CourseColManager.
    //
    // @param pos       Sphere center position
    // @param lastPos   Previous frame position (for movement-aware checks)
    // @param typeMask  KCL type bitmask to filter (e.g. KCL_TYPE_DRIVER_WALL)
    // @param outInfo   Output collision info (ColInfoPartial* or void*)
    // @param radius    Sphere radius
    // @param param     Additional parameter (start index, unused here)
    // @return true if collision found
    // =========================================================================
    bool checkSphereCachedPartial(const EGG::Vector3f& pos, const EGG::Vector3f& lastPos,
                                   u32 typeMask, void* outInfo, f32 radius, s32 param) {
        (void)lastPos; (void)param;

        // Zero-initialize output info if provided
        if (outInfo) {
            // ColInfoPartial has bboxLow, bboxHigh, tangentOff — zero them
            // Since outInfo is void*, we need the actual type. The KartCollide
            // caller passes ColInfoPartial*, so we cast and zero.
            // For safety, memset the expected size.
            __builtin_memset(outInfo, 0, sizeof(f32) * 9); // 3 Vec3 fields
        }

        // Delegate to CourseColManager's filtered sphere check
        // CourseColManager is in data/src/game/Field/CourseColManager.hpp
        // We include it here to avoid circular deps in the module layer
        #include "../../../game/Field/CourseColManager.hpp"

        Field::SphereColResult result;
        bool hit = Field::CourseColManager::instance()->checkSphereFiltered(
            pos.x, pos.y, pos.z, radius, typeMask, &result);

        if (hit && outInfo) {
            // Fill bboxLow/bboxHigh with collision normal offset info
            // This mimics the original's tangentOff = bboxLow + bboxHigh
            f32* info = static_cast<f32*>(outInfo);
            // bboxLow = contact point offset
            info[0] = result.normal.x * (-result.dist);
            info[1] = result.normal.y * (-result.dist);
            info[2] = result.normal.z * (-result.dist);
            // bboxHigh = contact point offset (duplicate for tangentOff = low + high)
            info[3] = result.normal.x * (-result.dist);
            info[4] = result.normal.y * (-result.dist);
            info[5] = result.normal.z * (-result.dist);
        }

        return hit;
    }

private:
    void* softWallColInfo; // Soft wall collision info (unused in port)
};

CourseModel* CourseModel::spInstance = nullptr;

} // namespace Field
