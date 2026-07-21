#pragma once
#include <rk_types.h>

namespace Platform {

class Audio {
public:
    static bool initialize();
    static void shutdown();
    static void setMasterVolume(f32 volume); // 0.0 to 1.0

private:
    Audio() = delete;
    ~Audio() = delete;

    static void* s_device;   // ALCdevice* as void*
    static void* s_context;  // ALCcontext* as void*
};

} // namespace Platform