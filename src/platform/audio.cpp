// audio.cpp — OpenAL audio initialization via runtime loader
// MAESTRO Phase 7, Milestone M2: Platform Abstraction Layer
//
// Uses OpenALLoader (dlopen/dlsym against libopenal.so.1) so no
// compile-time OpenAL dependency is needed.

#include "platform/audio.hpp"
#include "platform/openal_stub.h"
#include <cstdio>

namespace Platform {

void* Audio::s_device  = nullptr;
void* Audio::s_context = nullptr;

bool Audio::initialize() {
    // Load OpenAL via runtime dlopen
    if (!OpenALLoader::init()) {
        printf("  Audio: Failed to load OpenAL (libopenal.so.1 not found)\n");
        printf("  Audio: Running in silent mode\n");
        return true;  // Non-fatal — game runs without audio
    }

    // Open default audio device
    s_device = static_cast<void*>(OpenALLoader::alcOpenDevice(nullptr));
    if (s_device == nullptr) {
        printf("  Audio: alcOpenDevice failed (error 0x%04X)\n",
               (unsigned)OpenALLoader::alcGetError(static_cast<ALCdevice*>(s_device)));
        return true;
    }

    // Create OpenAL context
    s_context = static_cast<void*>(
        OpenALLoader::alcCreateContext(static_cast<ALCdevice*>(s_device), nullptr)
    );
    if (s_context == nullptr) {
        printf("  Audio: alcCreateContext failed\n");
        OpenALLoader::alcCloseDevice(static_cast<ALCdevice*>(s_device));
        s_device = nullptr;
        return true;
    }

    // Make context current
    if (OpenALLoader::alcMakeContextCurrent(static_cast<ALCcontext*>(s_context)) == ALC_FALSE) {
        printf("  Audio: alcMakeContextCurrent failed\n");
        OpenALLoader::alcDestroyContext(static_cast<ALCcontext*>(s_context));
        OpenALLoader::alcCloseDevice(static_cast<ALCdevice*>(s_device));
        s_context = nullptr;
        s_device = nullptr;
        return true;
    }

    // Configure distance model for 3D audio (matches MKWii)
    OpenALLoader::alDistanceModel(AL_INVERSE_DISTANCE_CLAMPED);
    OpenALLoader::alDopplerFactor(1.0f);
    OpenALLoader::alSpeedOfSound(343.3f);  // m/s at 20°C

    printf("  Audio: OpenAL initialized (runtime dlopen)\n");
    if (OpenALLoader::hasEFX()) {
        printf("  Audio: EFX reverb extension available\n");
    }
    return true;
}

void Audio::shutdown() {
    if (s_context != nullptr) {
        OpenALLoader::alcMakeContextCurrent(nullptr);
        OpenALLoader::alcDestroyContext(static_cast<ALCcontext*>(s_context));
        s_context = nullptr;
    }
    if (s_device != nullptr) {
        OpenALLoader::alcCloseDevice(static_cast<ALCdevice*>(s_device));
        s_device = nullptr;
    }

    // Unload the OpenAL library
    OpenALLoader::shutdown();
    printf("  Audio: Shutdown complete\n");
}

void Audio::setMasterVolume(f32 volume) {
    // Clamp to valid range
    if (volume < 0.0f) volume = 0.0f;
    if (volume > 1.0f) volume = 1.0f;

    if (OpenALLoader::isInitialized()) {
        OpenALLoader::alListenerf(AL_GAIN, volume);
    }
}

} // namespace Platform
