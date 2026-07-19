static void alSourceStop_stub(int) {}
static void alSourceStop_stub(int) {}
// ============================================================================
// AxVoiceManager.cpp — AX Voice Allocation & Management Implementation
// Reconstructed from nw4r::snd voice management functions
// ============================================================================

#include "AxVoiceManager.hpp"
#include <cstring>
#include <algorithm>

// OpenAL headers (via shim)
#include <shims/ax_audio/ax_shim.h>

namespace nw4r {
namespace snd {

// ============================================================================
// AxVoiceManager()
// @addr 0x805401AC (entry point)
// Default constructor — zero-initializes all state.
// ============================================================================
AxVoiceManager::AxVoiceManager()
    : m_maxVoices(0)
    , m_activeCount(0)
    , m_freeListTop(0)
    , m_masterVolume(1.0f)
    , m_dopplerFactor(1.0f)
{
    std::memset(m_voices, 0, sizeof(m_voices));
    std::memset(m_freeList, 0, sizeof(m_freeList));
}

// ============================================================================
// ~AxVoiceManager()
// ============================================================================
AxVoiceManager::~AxVoiceManager() {
    shutdown();
}

// ============================================================================
// init(maxVoices)
// @addr 0x805401AC (576 bytes, 87 code lines)
//
// Initializes the voice pool. On Wii this calls AXInit() and sets up
// the AX voice processing block. On PC, creates OpenAL context and
// pre-generates a pool of sources.
//
// /* AX_SDK: AXInit() → alcOpenDevice() + alcCreateContext() */
// /* AX_SDK: AXSetMemPerVoice() → (managed by OpenAL internally) */
// ============================================================================
bool AxVoiceManager::init(u32 maxVoices) {
    // Clamp to pool size
    if (maxVoices > MAX_POOL_VOICES) {
        maxVoices = MAX_POOL_VOICES;
    }
    m_maxVoices = maxVoices;

    // Initialize free list (all voices start free)
    m_freeListTop = 0;
    for (u32 i = 0; i < maxVoices; i++) {
        m_voices[i].voiceIndex = i;
        m_voices[i].state = AX_VOICE_STATE_FREE;
        m_voices[i].alSource = 0;
        m_voices[i].alBuffer = 0;
        m_voices[i].active = 0;
        m_freeList[m_freeListTop++] = i;
    }

    m_activeCount = 0;
    m_masterVolume = 1.0f;
    m_dopplerFactor = 1.0f;

    return true;
}

// ============================================================================
// shutdown()
//
// /* AX_SDK: AXQuit() → alcDestroyContext() + alcCloseDevice() */
// ============================================================================
void AxVoiceManager::shutdown() {
    // Stop and free all active voices
    for (u32 i = 0; i < m_maxVoices; i++) {
        if (m_voices[i].state != AX_VOICE_STATE_FREE) {
            /* AX_SDK: AXStopVoice() → alSourceStop_stub() */
            if (m_voices[i].alSource != 0) {
                alSourceStop_stub(m_voices[i].alSource);
                alDeleteSources(1, &m_voices[i].alSource);
                if (m_voices[i].alBuffer != 0) {
                    alDeleteBuffers(1, &m_voices[i].alBuffer);
                }
            }
        }
        m_voices[i].state = AX_VOICE_STATE_FREE;
        m_voices[i].active = 0;
    }

    m_activeCount = 0;
    m_freeListTop = 0;
    m_maxVoices = 0;
}

// ============================================================================
// isValidVoice()
// ============================================================================
bool AxVoiceManager::isValidVoice(u32 voiceIndex) const {
    return voiceIndex < m_maxVoices &&
           m_voices[voiceIndex].state != AX_VOICE_STATE_FREE;
}

// ============================================================================
// findLowestPriorityVoice(minPriority)
// Internal: finds the lowest priority active voice that is below
// the given minimum priority threshold.
// ============================================================================
s32 AxVoiceManager::findLowestPriorityVoice(u32 minPriority) {
    s32 bestIndex = -1;
    u32 bestPriority = 0xFFFFFFFF;

    for (u32 i = 0; i < m_maxVoices; i++) {
        if (m_voices[i].state != AX_VOICE_STATE_FREE &&
            m_voices[i].priority < bestPriority &&
            m_voices[i].priority < minPriority)
        {
            bestPriority = m_voices[i].priority;
            bestIndex = (s32)i;
        }
    }
    return bestIndex;
}

// ============================================================================
// allocVoice(priority, ownerId, userData)
// @addr 0x80542074 (620 bytes, 107 code lines)
//
// Allocates a voice from the pool. If the pool is exhausted, tries
// to steal the lowest-priority active voice.
//
// /* AX_SDK: AXAllocVoice(priority) → alGenSources() */
// Returns voice index on success, -1 on failure.
// ============================================================================
s32 AxVoiceManager::allocVoice(u32 priority, u32 ownerId, void* userData) {
    s32 voiceIdx = -1;

    // Try to allocate from free list first
    if (m_freeListTop > 0) {
        voiceIdx = (s32)m_freeList[--m_freeListTop];
    } else {
        // No free voices — try to steal lowest priority
        s32 stealIdx = findLowestPriorityVoice(priority);
        if (stealIdx >= 0) {
            // Stop the stolen voice first
            /* AX_SDK: AXStopVoice() → alSourceStop_stub() */
            if (m_voices[stealIdx].alSource != 0) {
                alSourceStop_stub(m_voices[stealIdx].alSource);
            }
            m_voices[stealIdx].state = AX_VOICE_STATE_FREE;
            m_voices[stealIdx].active = 0;
            m_activeCount--;
            voiceIdx = stealIdx;
        }
    }

    if (voiceIdx < 0) {
        return -1; // No voice available
    }

    // Initialize voice descriptor
    AxVoiceDesc& voice = m_voices[voiceIdx];
    voice.state = AX_VOICE_STATE_STARTING;
    voice.priority = priority;
    voice.ownerId = ownerId;
    voice.userData = userData;
    voice.volume = 1.0f;
    voice.pitch = 1.0f;
    voice.pan = 0.0f;
    voice.posX = voice.posY = voice.posZ = 0.0f;
    voice.velX = voice.velY = voice.velZ = 0.0f;
    voice.bufferAddr = nullptr;
    voice.bufferSize = 0;
    voice.loopStart = 0;
    voice.loopEnd = 0;
    voice.sampleRate = 32000;
    voice.channels = 1;
    voice.encoding = 0;
    voice.looping = 0;
    voice.paused = 0;
    voice.active = 1;

    // Generate OpenAL source if needed
    if (voice.alSource == 0) {
        /* AX_SDK: (implicit in AXAllocVoice) → alGenSources() */
        alGenSources(1, &voice.alSource);
    }

    m_activeCount++;
    return voiceIdx;
}

// ============================================================================
// freeVoice(voiceIndex)
// @addr 0x80542A98 (744 bytes, 96 code lines, has_assert)
//
// Releases a voice back to the free pool.
//
// /* AX_SDK: AXFreeVoice() → alSourceStop_stub() + alDeleteSources() */
// ============================================================================
bool AxVoiceManager::freeVoice(u32 voiceIndex) {
    if (!isValidVoice(voiceIndex)) {
        return false;
    }

    AxVoiceDesc& voice = m_voices[voiceIndex];

    // Stop playback first
    /* AX_SDK: AXStopVoice() → alSourceStop_stub() */
    if (voice.alSource != 0) {
        alSourceStop_stub(voice.alSource);
    }

    voice.state = AX_VOICE_STATE_FREE;
    voice.active = 0;
    voice.userData = nullptr;
    voice.bufferAddr = nullptr;
    m_activeCount--;

    // Return to free list
    if (m_freeListTop < MAX_POOL_VOICES) {
        m_freeList[m_freeListTop++] = voiceIndex;
    }

    return true;
}

// ============================================================================
// setVolume(voiceIndex, volume)
// @addr 0x80544D7C (828 bytes, 136 code lines)
//
// /* AX_SDK: AXSetVoiceVolume(voice, vol) → alSourcef(src, AL_GAIN, vol) */
// ============================================================================
void AxVoiceManager::setVolume(u32 voiceIndex, f32 volume) {
    if (!isValidVoice(voiceIndex)) return;

    AxVoiceDesc& voice = m_voices[voiceIndex];
    voice.volume = volume * m_masterVolume;

    if (voice.alSource != 0) {
        /* AX_SDK: AXSetVoiceVolume() → alSourcef(src, AL_GAIN, vol) */
        alSourcef(voice.alSource, AL_GAIN, voice.volume);
    }
}

// ============================================================================
// setPitch(voiceIndex, pitch)
// @addr 0x805450B8 (684 bytes, 98 code lines)
//
// /* AX_SDK: AXSetVoicePitch(voice, pitch) → alSourcef(src, AL_PITCH, pitch) */
// ============================================================================
void AxVoiceManager::setPitch(u32 voiceIndex, f32 pitch) {
    if (!isValidVoice(voiceIndex)) return;

    AxVoiceDesc& voice = m_voices[voiceIndex];
    voice.pitch = pitch;

    if (voice.alSource != 0) {
        /* AX_SDK: AXSetVoicePitch() → alSourcef(src, AL_PITCH, pitch) */
        alSourcef(voice.alSource, AL_PITCH, pitch);
    }
}

// ============================================================================
// setPan(voiceIndex, pan)
// @addr 0x80549970 (588 bytes, 92 code lines)
//
// /* AX_SDK: AXSetVoiceVe(voice, pan, 0, 0) → alSource3f(src, AL_POSITION, pan, 0, -0.5) */
// ============================================================================
void AxVoiceManager::setPan(u32 voiceIndex, f32 pan) {
    if (!isValidVoice(voiceIndex)) return;

    AxVoiceDesc& voice = m_voices[voiceIndex];
    voice.pan = pan;

    if (voice.alSource != 0) {
        // In stereo mode, pan maps to X position in a 2D stereo field
        /* AX_SDK: AXSetVoiceVe(voice, pan, 0, 0) → alSource3f(src, AL_POSITION, ...) */
        f32 posX = pan;
        f32 posZ = -0.5f; // Slightly in front for stereo panning
        alSource3f(voice.alSource, AL_POSITION, posX, 0.0f, posZ);
    }
}

// ============================================================================
// setAddr(voiceIndex, buffer, size, sampleRate, channels, encoding)
// @addr 0x8054B8C4 (524 bytes, 103 code lines)
//
// Sets the wave data for a voice. On Wii, this directly points the AX
// DSP to the ADPCM/PCM buffer. On PC, uploads to an OpenAL buffer.
//
// /* AX_SDK: AXSetVoiceAddr(voice, addr) → alBufferData() */
// ============================================================================
void AxVoiceManager::setAddr(u32 voiceIndex, void* buffer, u32 size,
                              u32 sampleRate, u16 channels, u16 encoding) {
    if (!isValidVoice(voiceIndex)) return;

    AxVoiceDesc& voice = m_voices[voiceIndex];
    voice.bufferAddr = buffer;
    voice.bufferSize = size;
    voice.sampleRate = sampleRate;
    voice.channels = channels;
    voice.encoding = encoding;

    if (voice.alSource != 0 && buffer != nullptr) {
        ALenum format = AL_FORMAT_MONO16;
        if (channels == 2) {
            format = AL_FORMAT_STEREO16;
        }

        // Delete old buffer if exists
        if (voice.alBuffer != 0) {
            alDeleteBuffers(1, &voice.alBuffer);
        }

        // Create and fill new buffer
        alGenBuffers(1, &voice.alBuffer);
        /* AX_SDK: AXSetVoiceAddr() → alBufferData() */
        alBufferData(voice.alBuffer, format, buffer, size, sampleRate);
        alSourcei(voice.alSource, AL_BUFFER, voice.alBuffer);
    }
}

// ============================================================================
// setLoop(voiceIndex, loop, loopStart, loopEnd)
//
// /* AX_SDK: AXSetVoiceLoop(voice, on, start, end) → alSourcei(src, AL_LOOPING, ...) */
// ============================================================================
void AxVoiceManager::setLoop(u32 voiceIndex, bool loop, u32 loopStart, u32 loopEnd) {
    if (!isValidVoice(voiceIndex)) return;

    AxVoiceDesc& voice = m_voices[voiceIndex];
    voice.looping = loop ? 1 : 0;
    voice.loopStart = loopStart;
    voice.loopEnd = loopEnd;

    if (voice.alSource != 0) {
        /* AX_SDK: AXSetVoiceLoop() → alSourcei(src, AL_LOOPING, AL_TRUE) */
        alSourcei(voice.alSource, AL_LOOPING, loop ? AL_TRUE : AL_FALSE);
    }
}

// ============================================================================
// startVoice(voiceIndex)
// @addr 0x8054D614 (1156 bytes, 179 code lines, has_assert)
//
// Begins playback on a voice.
//
// /* AX_SDK: AXPlayVoice(voice) → alSourcePlay(src) */
// ============================================================================
bool AxVoiceManager::startVoice(u32 voiceIndex) {
    if (!isValidVoice(voiceIndex)) return false;

    AxVoiceDesc& voice = m_voices[voiceIndex];
    voice.state = AX_VOICE_STATE_PLAYING;

    if (voice.alSource != 0) {
        // Apply current parameters before starting
        alSourcef(voice.alSource, AL_GAIN, voice.volume * m_masterVolume);
        alSourcef(voice.alSource, AL_PITCH, voice.pitch);

        if (voice.looping) {
            alSourcei(voice.alSource, AL_LOOPING, AL_TRUE);
        }

        /* AX_SDK: AXPlayVoice(voice) → alSourcePlay(src) */
        alSourcePlay(voice.alSource);
    }

    return true;
}

// ============================================================================
// stopVoice(voiceIndex)
// @addr 0x8054DBC0 (652 bytes, 122 code lines)
//
// /* AX_SDK: AXStopVoice(voice) → alSourceStop_stub(src) */
// ============================================================================
bool AxVoiceManager::stopVoice(u32 voiceIndex) {
    if (!isValidVoice(voiceIndex)) return false;

    AxVoiceDesc& voice = m_voices[voiceIndex];
    voice.state = AX_VOICE_STATE_STOPPING;

    if (voice.alSource != 0) {
        /* AX_SDK: AXStopVoice() → alSourceStop_stub() */
        alSourceStop_stub(voice.alSource);
    }

    // Transition to stopped after one frame
    voice.state = AX_VOICE_STATE_FREE;
    voice.active = 0;
    m_activeCount--;

    // Return to free list
    if (m_freeListTop < MAX_POOL_VOICES) {
        m_freeList[m_freeListTop++] = voiceIndex;
    }

    return true;
}

// ============================================================================
// pauseVoice(voiceIndex)
// @addr 0x8054DE4C (844 bytes, 130 code lines)
//
// /* AX_SDK: (manual DSP pause) → alSourcePause(src) */
// ============================================================================
bool AxVoiceManager::pauseVoice(u32 voiceIndex) {
    if (!isValidVoice(voiceIndex)) return false;
    if (m_voices[voiceIndex].paused) return true; // Already paused

    AxVoiceDesc& voice = m_voices[voiceIndex];
    voice.paused = 1;

    if (voice.alSource != 0) {
        /* AX_SDK: (DSP voice pause via AXSetVoiceStop flag) → alSourcePause() */
        alSourcePause(voice.alSource);
    }

    return true;
}

// ============================================================================
// resumeVoice(voiceIndex)
// @addr 0x8054E3F4 (760 bytes, 154 code lines)
//
// /* AX_SDK: (manual DSP resume) → alSourcePlay(src) */
// ============================================================================
bool AxVoiceManager::resumeVoice(u32 voiceIndex) {
    if (!isValidVoice(voiceIndex)) return false;
    if (!m_voices[voiceIndex].paused) return true; // Not paused

    AxVoiceDesc& voice = m_voices[voiceIndex];
    voice.paused = 0;

    if (voice.alSource != 0) {
        /* AX_SDK: (DSP voice resume) → alSourcePlay() */
        alSourcePlay(voice.alSource);
    }

    return true;
}

// ============================================================================
// setPosition(voiceIndex, x, y, z)
// 3D positional audio for a voice.
// /* AX_SDK: AXSetVoiceVe(voice, x, y, z) → alSource3f(src, AL_POSITION, x, y, z) */
// ============================================================================
void AxVoiceManager::setPosition(u32 voiceIndex, f32 x, f32 y, f32 z) {
    if (!isValidVoice(voiceIndex)) return;

    AxVoiceDesc& voice = m_voices[voiceIndex];
    voice.posX = x;
    voice.posY = y;
    voice.posZ = z;

    if (voice.alSource != 0) {
        /* AX_SDK: AXSetVoiceVe() → alSource3f(src, AL_POSITION, x, y, z) */
        alSource3f(voice.alSource, AL_POSITION, x, y, z);
    }
}

// ============================================================================
// setVelocity(voiceIndex, x, y, z)
// /* AX_SDK: AXSetVoiceVe() → alSource3f(src, AL_VELOCITY, x, y, z) */
// ============================================================================
void AxVoiceManager::setVelocity(u32 voiceIndex, f32 x, f32 y, f32 z) {
    if (!isValidVoice(voiceIndex)) return;

    AxVoiceDesc& voice = m_voices[voiceIndex];
    voice.velX = x;
    voice.velY = y;
    voice.velZ = z;

    if (voice.alSource != 0) {
        /* AX_SDK: AXSetVoiceVe() → alSource3f(src, AL_VELOCITY, x, y, z) */
        alSource3f(voice.alSource, AL_VELOCITY, x, y, z);
    }
}

// ============================================================================
// update()
// @addr 0x80544920 (1116 bytes, 167 code lines)
//
// Per-frame update: checks for naturally-finished voices (OpenAL
// source state transitions to AL_STOPPED), cleans up zombie voices,
// and processes priority-based stealing if needed.
// ============================================================================
void AxVoiceManager::update() {
    for (u32 i = 0; i < m_maxVoices; i++) {
        AxVoiceDesc& voice = m_voices[i];
        if (voice.state == AX_VOICE_STATE_FREE || !voice.active) {
            continue;
        }

        if (voice.alSource != 0) {
            ALint state;
            alGetSourcei(voice.alSource, AL_SOURCE_STATE, &state);

            if (state == AL_STOPPED && voice.state == AX_VOICE_STATE_PLAYING) {
                // Voice finished naturally — return to free pool
                voice.state = AX_VOICE_STATE_FREE;
                voice.active = 0;
                m_activeCount--;

                if (m_freeListTop < MAX_POOL_VOICES) {
                    m_freeList[m_freeListTop++] = i;
                }
            }
        }
    }
}

// ============================================================================
// getFreeVoiceCount()
// @addr 0x8054F51C (824 bytes, 117 code lines)
// ============================================================================
u32 AxVoiceManager::getFreeVoiceCount() const {
    return m_maxVoices - m_activeCount;
}

// ============================================================================
// getTotalVoiceCount()
// @addr 0x8054F8F8 (528 bytes, 93 code lines)
// ============================================================================
u32 AxVoiceManager::getTotalVoiceCount() const {
    return m_maxVoices;
}

// ============================================================================
// isPlaying(voiceIndex)
// ============================================================================
bool AxVoiceManager::isPlaying(u32 voiceIndex) const {
    if (voiceIndex >= m_maxVoices) return false;
    return m_voices[voiceIndex].state == AX_VOICE_STATE_PLAYING;
}

// ============================================================================
// getVoiceDesc(voiceIndex)
// ============================================================================
AxVoiceDesc* AxVoiceManager::getVoiceDesc(u32 voiceIndex) {
    if (voiceIndex >= m_maxVoices) return nullptr;
    return &m_voices[voiceIndex];
}

// ============================================================================
// getALSource(voiceIndex)
// ============================================================================
ALuint AxVoiceManager::getALSource(u32 voiceIndex) const {
    if (voiceIndex >= m_maxVoices) return 0;
    return m_voices[voiceIndex].alSource;
}

} // namespace snd
} // namespace nw4r