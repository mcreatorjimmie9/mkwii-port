#pragma once
// ParameterFile.hpp — Parameter file loader shim
#include "../rk_types.h"

class ParameterFile {
public:
    bool load(const char* path);
    f32 getFloat(const char* key, f32 defaultVal = 0.0f);
    s32 getInt(const char* key, s32 defaultVal = 0);
};
