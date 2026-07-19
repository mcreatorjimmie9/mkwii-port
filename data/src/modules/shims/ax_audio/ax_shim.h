#pragma once
// OpenAL shim — provides AL function stubs for compilation

typedef unsigned int ALuint;
typedef int ALenum;
typedef int ALint;
typedef float ALfloat;
typedef char ALboolean;

// AL enum constants
enum {
    AL_GAIN = 0x100A,
    AL_PITCH = 0x1003,
    AL_POSITION = 0x1004,
    AL_VELOCITY = 0x1006,
    AL_LOOPING = 0x1007,
    AL_BUFFER = 0x1009,
    AL_SOURCE_STATE = 0x1010,
    AL_STOPPED = 0x1011,
    AL_PLAYING = 0x1012,
    AL_PAUSED = 0x1013,
    AL_FORMAT_MONO16 = 0x1101,
    AL_FORMAT_STEREO16 = 0x1103,
    AL_TRUE = 1,
    AL_FALSE = 0,
    AL_FILTER_NULL = 0x0000,
    AL_DIRECT_FILTER = 0x20005,
    AL_AUXILIARY_SEND_GAIN = 0x20006,
};

// AL function stubs
inline void alSourceStop(ALuint) {}
inline void alSourcePlay(ALuint) {}
inline void alSourcePause(ALuint) {}
inline void alSourcef(ALuint, ALenum, ALfloat) {}
inline void alSource3f(ALuint, ALenum, ALfloat, ALfloat, ALfloat) {}
inline void alSourcei(ALuint, ALenum, ALint) {}
inline void alGetSourcei(ALuint, ALenum, ALint*) {}
inline void alGenSources(ALint, ALuint*) {}
inline void alDeleteSources(ALint, const ALuint*) {}
inline void alGenBuffers(ALint, ALuint*) {}
inline void alDeleteBuffers(ALint, const ALuint*) {}
inline void alBufferData(ALuint, ALenum, const void*, ALint, ALint) {}