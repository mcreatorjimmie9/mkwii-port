#pragma once
#include "../rk_types.h"

namespace System {

class CourseResLoader {
public:
    virtual ~CourseResLoader() {}
    void preloadCourseAsync(u32 courseId) { (void)courseId; }
};

class ResourceManager {
public:
    virtual ~ResourceManager() {}
    static ResourceManager* spInstance;
    CourseResLoader* nonvol;
};

}