// audio.cpp — OpenAL audio initialization shim
// MAESTRO Phase 7, Milestone M2: Platform Abstraction Layer

#include "platform/audio.hpp"
#include <cstdio>

#ifdef HAS_OPENAL
#include <AL/al.h>
#include <AL/alc.h>
#endif

namespace Platform {

void* Audio::s_device  = nullptr;
void* Audio::s_context = nullptr;

bool Audio::initialize() {
#ifdef HAS_OPENAL
    // Open default audio device
    s_device = static_cast<void*>(alcOpenDevice(nullptr));
    if (s_device == nullptr) {
        printf("  Audio: alcOpenDevice failed\n");
        return false;
    }

    // Create OpenAL context
    s_context = static_cast<void*>(
        alcCreateContext(static_cast<ALCdevice*>(s_device), nullptr)
    );
    if (s_context == nullptr) {
        printf("  Audio: alcCreateContext failed\n");
        alcCloseDevice(static_cast<ALCdevice*>(s_device));
        s_device = nullptr;
        return false;
    }

    // Make context current
    if (alcMakeContextCurrent(static_cast<ALCcontext*>(s_context)) == ALC_FALSE) {
        printf("  Audio: alcMakeContextCurrent failed\n");
        alcDestroyContext(static_cast<ALCcontext*>(s_context));
        alcCloseDevice(static_cast<ALCdevice*>(s_device));
        s_context = nullptr;
        s_device = nullptr;
        return false;
    }

    printf("  Audio: OpenAL initialized (default device)\n");
    return true;
#else
    printf("  Audio: Stub mode — OpenAL not available\n");
    return true;
#endif
}

void Audio::shutdown() {
#ifdef HAS_OPENAL
    if (s_context != nullptr) {
        alcMakeContextCurrent(nullptr);
        alcDestroyContext(static_cast<ALCcontext*>(s_context));
        s_context = nullptr;
    }
    if (s_device != nullptr) {
        alcCloseDevice(static_cast<ALCdevice*>(s_device));
        s_device = nullptr;
    }
#else
    // Stub: no cleanup needed
#endif
    printf("  Audio: Shutdown complete\n");
}

void Audio::setMasterVolume(f32 volume) {
    // Clamp to valid range
    if (volume < 0.0f) volume = 0.0f;
    if (volume > 1.0f) volume = 1.0f;

#ifdef HAS_OPENAL
    // Stub: actual alListenerf(AL_GAIN, volume) call
    // alListenerf(AL_GAIN, volume);
#else
    (void)volume; // Suppress unused warning in stub mode
#endif
}

} // namespace Platform