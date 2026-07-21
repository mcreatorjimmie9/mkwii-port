#ifndef MKWII_PORT_OPENAL_STUB_H
#define MKWII_PORT_OPENAL_STUB_H

/*
 * Minimal self-contained OpenAL header for the mkwii-port project.
 * No OpenAL dev headers required — all symbols are declared here and
 * resolved at runtime via dlopen/dlsym against libopenal.so.1.
 *
 * Usage:
 *   #include "platform/openal_stub.h"
 *   if (!OpenALLoader::init()) { ... handle failure ... }
 *   // Now alcOpenDevice, alGenSources, etc. are usable.
 */

#include <cstdlib>
#include <dlfcn.h>
#include <cstdint>

// ---------------------------------------------------------------------------
// ALC types (OpenAL Context)
// ---------------------------------------------------------------------------
struct ALCdevice;
typedef struct ALCdevice ALCdevice;
struct ALCcontext;
typedef struct ALCcontext ALCcontext;
typedef char ALCboolean;
typedef int ALCenum;
typedef int ALCint;
typedef char ALCchar;

// ALC constants
#define ALC_FALSE                          0
#define ALC_TRUE                           1
#define ALC_FREQUENCY                      0x1007
#define ALC_REFRESH                        0x1008
#define ALC_SYNC                           0x1009
#define ALC_MONO_SOURCES                   0x1010
#define ALC_STEREO_SOURCES                 0x1011
#define ALC_NO_ERROR                       ALC_FALSE
#define ALC_INVALID_DEVICE                0xA001
#define ALC_INVALID_CONTEXT                0xA002
#define ALC_INVALID_ENUM                    0xA003
#define ALC_INVALID_VALUE                  0xA004
#define ALC_OUT_OF_MEMORY                  0xA005

// ---------------------------------------------------------------------------
// AL types
// ---------------------------------------------------------------------------
typedef unsigned int ALuint;
typedef int ALenum;
typedef int ALint;
typedef unsigned int ALsizei;
typedef float ALfloat;
typedef double ALdouble;
typedef char ALboolean;
typedef void ALvoid;

// AL boolean
#define AL_TRUE                            1
#define AL_FALSE                           0

// AL error values
#define AL_NO_ERROR                        0
#define AL_INVALID_NAME                    0xA001
#define AL_INVALID_ENUM                    0xA002
#define AL_INVALID_VALUE                   0xA003
#define AL_INVALID_OPERATION               0xA004
#define AL_OUT_OF_MEMORY                  0xA005

// AL source state values
#define AL_SOURCE_STATE                     0x1010
#define AL_INITIAL                         0x1011
#define AL_PLAYING                         0x1012
#define AL_PAUSED                          0x1013
#define AL_STOPPED                         0x1014

// AL source property IDs
#define AL_POSITION                        0x1004
#define AL_VELOCITY                        0x1006
#define AL_GAIN                            0x100A
#define AL_PITCH                           0x1003
#define AL_DIRECTION                       0x1005
#define AL_LOOPING                         0x1007
#define AL_BUFFER                          0x1009
#define AL_REFERENCE_DISTANCE              0x0C20
#define AL_ROLLOFF_FACTOR                  0x0C21
#define AL_MAX_DISTANCE                    0x0C22
#define AL_MIN_GAIN                        0x0C26
#define AL_MAX_GAIN                        0x0C27
#define AL_SEC_OFFSET                      0x1024
#define AL_SAMPLE_OFFSET                   0x1025
#define AL_BYTE_OFFSET                     0x1026
#define AL_BUFFERS_QUEUED                  0x1015
#define AL_BUFFERS_PROCESSED               0x1016

// AL buffer property IDs
#define AL_FREQUENCY                       0x2001
#define AL_BITS                            0x2002
#define AL_CHANNELS                        0x2003
#define AL_SIZE                            0x2004
#define AL_DATA                            0x2005
#define AL_FORMAT                          0x2006

// AL buffer format
#define AL_FORMAT_MONO8                    0x1100
#define AL_FORMAT_MONO16                   0x1101
#define AL_FORMAT_STEREO8                  0x1102
#define AL_FORMAT_STEREO16                0x1103

// AL listener property IDs
#define AL_GAIN                            0x100A
#define AL_POSITION                        0x1004
#define AL_VELOCITY                        0x1006
#define AL_ORIENTATION                     0x100F

// AL distance model
#define AL_DISTANCE_MODEL                  0xD000
#define AL_INVERSE_DISTANCE                0xD001
#define AL_INVERSE_DISTANCE_CLAMPED        0xD002
#define AL_LINEAR_DISTANCE                 0xD003
#define AL_LINEAR_DISTANCE_CLAMPED         0xD004
#define AL_EXPONENT_DISTANCE               0xD005
#define AL_EXPONENT_DISTANCE_CLAMPED       0xD006
#define AL_DOPPLER_FACTOR                  0xC000
#define AL_SPEED_OF_SOUND                 0xC003

// AL filter type
#define AL_FILTER_TYPE                     0x8001
#define AL_FILTER_NULL                     0x0000
#define AL_FILTER_LOWPASS                  0x0001
#define AL_FILTER_HIGHPASS                 0x0002
#define AL_FILTER_BANDPASS                 0x0003

// AL lowpass filter parameters
#define AL_LOWPASS_GAIN                    0x0001
#define AL_LOWPASS_GAINHF                  0x0002

// AL effect type (EFX extension)
#define AL_EFFECT_TYPE                     0x8001
#define AL_EFFECT_REVERB                    0x0001
#define AL_EFFECTSLOT_EFFECT                0x0001
#define AL_AUXILIARY_SEND_FILTER           0x0003

// EFX reverb parameters
#define AL_REVERB_DENSITY                  0x0001
#define AL_REVERB_DIFFUSION                0x0002
#define AL_REVERB_GAIN                     0x0003
#define AL_REVERB_GAINHF                  0x0004
#define AL_REVERB_DECAY_TIME               0x0005
#define AL_REVERB_DECAY_HFRATIO            0x0006
#define AL_REVERB_REFLECTIONS_GAIN          0x0007
#define AL_REVERB_REFLECTIONS_DELAY         0x0008
#define AL_REVERB_REFLECTIONS_PAN           0x0009
#define AL_REVERB_LATE_REVERB_GAIN          0x000A
#define AL_REVERB_LATE_REVERB_DELAY         0x000B
#define AL_REVERB_LATE_REVERB_PAN           0x000C
#define AL_REVERB_ECHO_TIME                 0x000D
#define AL_REVERB_ECHO_DEPTH                0x000E
#define AL_REVERB_MODULATION_TIME           0x000F
#define AL_REVERB_MODULATION_DEPTH         0x0010
#define AL_REVERB_AIR_ABSORPTION_GAINHF     0x0011
#define AL_REVERB_HFREFERENCE              0x0012
#define AL_REVERB_LFREFERENCE              0x0013
#define AL_REVERB_ROOM_ROLLOFF_FACTOR       0x0014
#define AL_REVERB_DECAY_HFLIMIT            0x0015

// ---------------------------------------------------------------------------
// ALC function pointer types
// ---------------------------------------------------------------------------
extern "C" {
typedef ALCdevice*   (*PFN_alcOpenDevice)(const ALCchar* devicename);
typedef ALCboolean   (*PFN_alcCloseDevice)(ALCdevice* device);
typedef ALCcontext*  (*PFN_alcCreateContext)(ALCdevice* device, const ALCint* attrlist);
typedef ALCboolean   (*PFN_alcMakeContextCurrent)(ALCcontext* context);
typedef void         (*PFN_alcDestroyContext)(ALCcontext* context);
typedef ALCcontext*  (*PFN_alcGetCurrentContext)(void);
typedef ALCenum      (*PFN_alcGetError)(ALCdevice* device);
typedef const ALCchar* (*PFN_alcGetString)(ALCdevice* device, ALCenum param);
typedef ALCint       (*PFN_alcGetInteger)(ALCdevice* device, ALCenum param);

// ---------------------------------------------------------------------------
// AL function pointer types
// ---------------------------------------------------------------------------
typedef void  (*PFN_alGenSources)(ALsizei n, ALuint* sources);
typedef void  (*PFN_alDeleteSources)(ALsizei n, const ALuint* sources);
typedef void  (*PFN_alGenBuffers)(ALsizei n, ALuint* buffers);
typedef void  (*PFN_alDeleteBuffers)(ALsizei n, const ALuint* buffers);
typedef void  (*PFN_alBufferData)(ALuint buffer, ALenum format, const ALvoid* data, ALsizei size, ALsizei freq);
typedef void  (*PFN_alSourcePlay)(ALuint source);
typedef void  (*PFN_alSourceStop)(ALuint source);
typedef void  (*PFN_alSourcePause)(ALuint source);
typedef void  (*PFN_alSourceRewind)(ALuint source);
typedef void  (*PFN_alSourcef)(ALuint source, ALenum param, ALfloat value);
typedef void  (*PFN_alSource3f)(ALuint source, ALenum param, ALfloat v1, ALfloat v2, ALfloat v3);
typedef void  (*PFN_alSourcefv)(ALuint source, ALenum param, const ALfloat* values);
typedef void  (*PFN_alSourcei)(ALuint source, ALenum param, ALint value);
typedef void  (*PFN_alSource3i)(ALuint source, ALenum param, ALint v1, ALint v2, ALint v3);
typedef void  (*PFN_alGetSourcef)(ALuint source, ALenum param, ALfloat* value);
typedef void  (*PFN_alGetSourcei)(ALuint source, ALenum param, ALint* value);
typedef void  (*PFN_alSourceQueueBuffers)(ALuint source, ALsizei nb, const ALuint* buffers);
typedef ALsizei (*PFN_alSourceUnqueueBuffers)(ALuint source, ALsizei nb, ALuint* buffers);
typedef void  (*PFN_alListenerf)(ALenum param, ALfloat value);
typedef void  (*PFN_alListener3f)(ALenum param, ALfloat v1, ALfloat v2, ALfloat v3);
typedef void  (*PFN_alListenerfv)(ALenum param, const ALfloat* values);
typedef void  (*PFN_alListeneri)(ALenum param, ALint value);
typedef void  (*PFN_alDistanceModel)(ALenum distanceModel);
typedef void  (*PFN_alDopplerFactor)(ALfloat value);
typedef void  (*PFN_alDopplerVelocity)(ALfloat value);
typedef void  (*PFN_alSpeedOfSound)(ALfloat value);
typedef void  (*PFN_alGetError)(void);
typedef ALboolean (*PFN_alIsSource)(ALuint source);
typedef ALboolean (*PFN_alIsBuffer)(ALuint buffer);

// AL filter
typedef void  (*PFN_alGenFilters)(ALsizei n, ALuint* filters);
typedef void  (*PFN_alDeleteFilters)(ALsizei n, const ALuint* filters);
typedef void  (*PFN_alFilteri)(ALuint filter, ALenum param, ALint value);
typedef void  (*PFN_alFilterf)(ALuint filter, ALenum param, ALfloat value);

// AL effect (EFX extension — loaded optionally)
typedef void  (*PFN_alGenEffects)(ALsizei n, ALuint* effects);
typedef void  (*PFN_alDeleteEffects)(ALsizei n, const ALuint* effects);
typedef void  (*PFN_alEffecti)(ALuint effect, ALenum param, ALint value);
typedef void  (*PFN_alEffectf)(ALuint effect, ALenum param, ALfloat value);
typedef void  (*PFN_alGenAuxiliaryEffectSlots)(ALsizei n, ALuint* slots);
typedef void  (*PFN_alDeleteAuxiliaryEffectSlots)(ALsizei n, const ALuint* slots);
typedef void  (*PFN_alAuxiliaryEffectSloti)(ALuint slot, ALenum param, ALint value);
} // extern "C"

// ---------------------------------------------------------------------------
// OpenALLoader — resolves all OpenAL symbols at runtime via dlopen/dlsym
// ---------------------------------------------------------------------------
namespace OpenALLoader {

// ALC function pointers (initially nullptr)
inline PFN_alcOpenDevice          alcOpenDevice          = nullptr;
inline PFN_alcCloseDevice         alcCloseDevice         = nullptr;
inline PFN_alcCreateContext        alcCreateContext        = nullptr;
inline PFN_alcMakeContextCurrent   alcMakeContextCurrent   = nullptr;
inline PFN_alcDestroyContext       alcDestroyContext       = nullptr;
inline PFN_alcGetCurrentContext    alcGetCurrentContext    = nullptr;
inline PFN_alcGetError            alcGetError            = nullptr;
inline PFN_alcGetString           alcGetString           = nullptr;
inline PFN_alcGetInteger          alcGetInteger          = nullptr;

// AL core function pointers (initially nullptr)
inline PFN_alGenSources           alGenSources           = nullptr;
inline PFN_alDeleteSources        alDeleteSources        = nullptr;
inline PFN_alGenBuffers          alGenBuffers          = nullptr;
inline PFN_alDeleteBuffers       alDeleteBuffers       = nullptr;
inline PFN_alBufferData          alBufferData          = nullptr;
inline PFN_alSourcePlay           alSourcePlay           = nullptr;
inline PFN_alSourceStop          alSourceStop          = nullptr;
inline PFN_alSourcePause          alSourcePause          = nullptr;
inline PFN_alSourceRewind         alSourceRewind         = nullptr;
inline PFN_alSourcef             alSourcef             = nullptr;
inline PFN_alSource3f            alSource3f            = nullptr;
inline PFN_alSourcefv            alSourcefv            = nullptr;
inline PFN_alSourcei             alSourcei             = nullptr;
inline PFN_alSource3i            alSource3i            = nullptr;
inline PFN_alGetSourcef          alGetSourcef          = nullptr;
inline PFN_alGetSourcei          alGetSourcei          = nullptr;
inline PFN_alSourceQueueBuffers   alSourceQueueBuffers   = nullptr;
inline PFN_alSourceUnqueueBuffers alSourceUnqueueBuffers = nullptr;
inline PFN_alListenerf           alListenerf           = nullptr;
inline PFN_alListener3f          alListener3f          = nullptr;
inline PFN_alListenerfv          alListenerfv          = nullptr;
inline PFN_alListeneri           alListeneri           = nullptr;
inline PFN_alDistanceModel       alDistanceModel       = nullptr;
inline PFN_alDopplerFactor       alDopplerFactor       = nullptr;
inline PFN_alDopplerVelocity     alDopplerVelocity     = nullptr;
inline PFN_alSpeedOfSound       alSpeedOfSound       = nullptr;
inline PFN_alGetError           alGetError           = nullptr;
inline PFN_alIsSource           alIsSource           = nullptr;
inline PFN_alIsBuffer           alIsBuffer           = nullptr;

// AL filter function pointers
inline PFN_alGenFilters          alGenFilters          = nullptr;
inline PFN_alDeleteFilters       alDeleteFilters       = nullptr;
inline PFN_alFilteri            alFilteri            = nullptr;
inline PFN_alFilterf            alFilterf            = nullptr;

// AL EFX extension function pointers (optional, may be nullptr after init)
inline PFN_alGenEffects                  alGenEffects                  = nullptr;
inline PFN_alDeleteEffects               alDeleteEffects               = nullptr;
inline PFN_alEffecti                     alEffecti                     = nullptr;
inline PFN_alEffectf                     alEffectf                     = nullptr;
inline PFN_alGenAuxiliaryEffectSlots     alGenAuxiliaryEffectSlots     = nullptr;
inline PFN_alDeleteAuxiliaryEffectSlots  alDeleteAuxiliaryEffectSlots  = nullptr;
inline PFN_alAuxiliaryEffectSloti        alAuxiliaryEffectSloti        = nullptr;

// Internal handle to the dlopen'd library
inline void* s_handle = nullptr;

// Track whether init succeeded
inline bool s_initialized = false;

/*
 * Load libopenal.so.1 (or alternatives) and resolve all function pointers.
 * Returns true on success (all core functions found), false otherwise.
 * EFX extension functions are optional and may remain nullptr.
 * Safe to call multiple times — subsequent calls return true immediately.
 */
inline bool init() {
    if (s_initialized) return true;

    // Try multiple library names
    static const char* const libNames[] = {
        "libopenal.so.1",      // System package (libopenal1)
        "libopenal.so",         // Development symlink
        "libsoft_oal.so",       // Bundled soft-oal
        nullptr
    };

    for (int i = 0; libNames[i] != nullptr; i++) {
        s_handle = dlopen(libNames[i], RTLD_LAZY | RTLD_GLOBAL);
        if (s_handle) break;
    }

    // Also check environment variable override
    if (!s_handle) {
        const char* envLib = getenv("MKWII_OPENAL_LIB");
        if (envLib && envLib[0] != '\0') {
            s_handle = dlopen(envLib, RTLD_LAZY | RTLD_GLOBAL);
        }
    }

    if (!s_handle) {
        return false;
    }

    // Helper macro — resolves one required symbol. On failure, dlclose and reset.
    #define RESOLVE_AL(var, name)                                        \
        do {                                                             \
            var = reinterpret_cast<PFN_##name>(dlsym(s_handle, #name));  \
            if (!var) {                                                  \
                dlclose(s_handle);                                       \
                s_handle = nullptr;                                      \
                var = nullptr;                                           \
                return false;                                            \
            }                                                            \
        } while (0)

    // Helper for optional symbols — does not fail if missing
    #define RESOLVE_AL_OPT(var, name)                                    \
        do {                                                             \
            var = reinterpret_cast<PFN_##name>(dlsym(s_handle, #name));  \
        } while (0)

    // ALC functions (required)
    RESOLVE_AL(alcOpenDevice,          alcOpenDevice);
    RESOLVE_AL(alcCloseDevice,         alcCloseDevice);
    RESOLVE_AL(alcCreateContext,        alcCreateContext);
    RESOLVE_AL(alcMakeContextCurrent,   alcMakeContextCurrent);
    RESOLVE_AL(alcDestroyContext,       alcDestroyContext);
    RESOLVE_AL(alcGetCurrentContext,    alcGetCurrentContext);
    RESOLVE_AL(alcGetError,            alcGetError);
    RESOLVE_AL(alcGetString,           alcGetString);

    // AL core functions (required)
    RESOLVE_AL(alGenSources,           alGenSources);
    RESOLVE_AL(alDeleteSources,        alDeleteSources);
    RESOLVE_AL(alGenBuffers,          alGenBuffers);
    RESOLVE_AL(alDeleteBuffers,       alDeleteBuffers);
    RESOLVE_AL(alBufferData,          alBufferData);
    RESOLVE_AL(alSourcePlay,           alSourcePlay);
    RESOLVE_AL(alSourceStop,          alSourceStop);
    RESOLVE_AL(alSourcePause,          alSourcePause);
    RESOLVE_AL(alSourceRewind,         alSourceRewind);
    RESOLVE_AL(alSourcef,             alSourcef);
    RESOLVE_AL(alSource3f,            alSource3f);
    RESOLVE_AL(alSourcefv,            alSourcefv);
    RESOLVE_AL(alSourcei,             alSourcei);
    RESOLVE_AL(alSource3i,            alSource3i);
    RESOLVE_AL(alGetSourcef,          alGetSourcef);
    RESOLVE_AL(alGetSourcei,          alGetSourcei);
    RESOLVE_AL(alSourceQueueBuffers,   alSourceQueueBuffers);
    RESOLVE_AL(alSourceUnqueueBuffers, alSourceUnqueueBuffers);
    RESOLVE_AL(alListenerf,           alListenerf);
    RESOLVE_AL(alListener3f,          alListener3f);
    RESOLVE_AL(alListenerfv,          alListenerfv);
    RESOLVE_AL(alListeneri,           alListeneri);
    RESOLVE_AL(alDistanceModel,       alDistanceModel);
    RESOLVE_AL(alDopplerFactor,       alDopplerFactor);
    RESOLVE_AL(alDopplerVelocity,     alDopplerVelocity);
    RESOLVE_AL(alSpeedOfSound,       alSpeedOfSound);
    RESOLVE_AL(alGetError,           alGetError);
    RESOLVE_AL(alIsSource,           alIsSource);
    RESOLVE_AL(alIsBuffer,           alIsBuffer);

    // AL filter functions (required for voice management)
    RESOLVE_AL(alGenFilters,          alGenFilters);
    RESOLVE_AL(alDeleteFilters,       alDeleteFilters);
    RESOLVE_AL(alFilteri,            alFilteri);
    RESOLVE_AL(alFilterf,            alFilterf);

    // EFX extension functions (optional — remain nullptr if unavailable)
    RESOLVE_AL_OPT(alGenEffects,                  alGenEffects);
    RESOLVE_AL_OPT(alDeleteEffects,               alDeleteEffects);
    RESOLVE_AL_OPT(alEffecti,                     alEffecti);
    RESOLVE_AL_OPT(alEffectf,                     alEffectf);
    RESOLVE_AL_OPT(alGenAuxiliaryEffectSlots,     alGenAuxiliaryEffectSlots);
    RESOLVE_AL_OPT(alDeleteAuxiliaryEffectSlots,  alDeleteAuxiliaryEffectSlots);
    RESOLVE_AL_OPT(alAuxiliaryEffectSloti,        alAuxiliaryEffectSloti);

    #undef RESOLVE_AL
    #undef RESOLVE_AL_OPT

    s_initialized = true;
    return true;
}

/*
 * Unload the OpenAL shared library. After calling this, all function
 * pointers are invalid and init() must be called again before use.
 */
inline void shutdown() {
    if (s_handle) {
        dlclose(s_handle);
        s_handle = nullptr;
    }
    s_initialized = false;

    // Null all pointers
    alcOpenDevice          = nullptr;
    alcCloseDevice         = nullptr;
    alcCreateContext        = nullptr;
    alcMakeContextCurrent   = nullptr;
    alcDestroyContext       = nullptr;
    alcGetCurrentContext    = nullptr;
    alcGetError            = nullptr;
    alcGetString           = nullptr;

    alGenSources           = nullptr;
    alDeleteSources        = nullptr;
    alGenBuffers          = nullptr;
    alDeleteBuffers       = nullptr;
    alBufferData          = nullptr;
    alSourcePlay           = nullptr;
    alSourceStop          = nullptr;
    alSourcePause          = nullptr;
    alSourceRewind         = nullptr;
    alSourcef             = nullptr;
    alSource3f            = nullptr;
    alSourcefv            = nullptr;
    alSourcei             = nullptr;
    alSource3i            = nullptr;
    alGetSourcef          = nullptr;
    alGetSourcei          = nullptr;
    alSourceQueueBuffers   = nullptr;
    alSourceUnqueueBuffers = nullptr;
    alListenerf           = nullptr;
    alListener3f          = nullptr;
    alListenerfv          = nullptr;
    alListeneri           = nullptr;
    alDistanceModel       = nullptr;
    alDopplerFactor       = nullptr;
    alDopplerVelocity     = nullptr;
    alSpeedOfSound       = nullptr;
    alGetError           = nullptr;
    alIsSource           = nullptr;
    alIsBuffer           = nullptr;

    alGenFilters          = nullptr;
    alDeleteFilters       = nullptr;
    alFilteri            = nullptr;
    alFilterf            = nullptr;

    alGenEffects                  = nullptr;
    alDeleteEffects               = nullptr;
    alEffecti                     = nullptr;
    alEffectf                     = nullptr;
    alGenAuxiliaryEffectSlots     = nullptr;
    alDeleteAuxiliaryEffectSlots  = nullptr;
    alAuxiliaryEffectSloti        = nullptr;
}

/*
 * Check if OpenAL was successfully initialized.
 */
inline bool isInitialized() { return s_initialized; }

/*
 * Check if EFX (reverb) extension is available.
 */
inline bool hasEFX() { return alGenEffects != nullptr; }

} // namespace OpenALLoader

#endif // MKWII_PORT_OPENAL_STUB_H
