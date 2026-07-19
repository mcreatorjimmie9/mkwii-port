#pragma once
// ParameterFile.hpp — Parameter file loader shim
#include "../rk_types.h"

class EGG_Heap;

class ParameterFile {
public:
    ParameterFile() {}
    ParameterFile(const char* path, s32 flags) { (void)path; (void)flags; }
    virtual ~ParameterFile() {}

    bool load(const char* path);
    f32 getFloat(const char* key, f32 defaultVal = 0.0f);
    s32 getInt(const char* key, s32 defaultVal = 0);

    void append(u32 val, EGG_Heap* heap) { (void)val; (void)heap; }
    void append(s32 val, EGG_Heap* heap) { (void)val; (void)heap; }
    void append(u16 val, EGG_Heap* heap) { (void)val; (void)heap; }
    void append(s16 val, EGG_Heap* heap) { (void)val; (void)heap; }
    void append(u8 val, EGG_Heap* heap) { (void)val; (void)heap; }
    void append(s8 val, EGG_Heap* heap) { (void)val; (void)heap; }
    void read(EGG_Heap* heap) { (void)heap; }

    virtual void emptySub3() {}
    virtual void emptySub2() {}
    virtual void emptySub1() {}
    virtual s32 emptySub0() { return 0; }
};
