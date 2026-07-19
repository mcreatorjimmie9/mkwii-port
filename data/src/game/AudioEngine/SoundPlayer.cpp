// ============================================================================
// SoundPlayer.cpp — Sound Player Implementation
// Reconstructed from nw4r::snd::SoundPlayer (Cluster 3: 0x805602-0x8056FE)
// ============================================================================

#include "SoundPlayer.hpp"
#include "SoundArchive.hpp"
#include <cstring>
#include <cmath>
#include <algorithm>

// OpenAL via shim
#include <shims/ax_audio/ax_shim.h>

namespace nw4r {
namespace snd {

// ============================================================================
// SoundPlayer::SoundPlayer()
// @addr 0x8056020C (constructor area)
// ============================================================================
SoundPlayer::SoundPlayer()
    : m_voiceMgr(nullptr)
    , m_type(SOUND_PLAYER_TYPE_WAVE)
    , m_volume(1.0f)
    , m_targetVolume(1.0f)
    , m_pitch(1.0f)
    , m_targetPitch(1.0f)
    , m_pan(0.0f)
    , m_fadeTimer(0.0f)
    , m_fadeDuration(0.0f)
    , m_priority(SOUND_PRIORITY_NORMAL)
    , m_looping(false)
    , m_paused(false)
    , m_3dEnabled(false)
    , m_state(0)
    , m_voiceIndex(-1)
    , m_soundId(0xFFFFFFFF)
    , m_archive(nullptr)
    , m_handleCount(0)
    , m_filterType(0)
    , m_filterCutoff(20000.0f)
    , m_filterResonance(0.0f)
    , m_reverbSend(0.0f)
    , m_category(SOUND_CAT_SFX_COMMON)
{
    std::memset(m_handles, 0, sizeof(m_handles));
    std::memset(&m_3dParams, 0, sizeof(m_3dParams));
}

// ============================================================================
// SoundPlayer::~SoundPlayer()
// @addr 0x80560330
// ============================================================================
SoundPlayer::~SoundPlayer() {
    // Release voice if still allocated
    releaseVoice();

    // Detach all handles
    for (u32 i = 0; i < m_handleCount; i++) {
        if (m_handles[i] != nullptr) {
            m_handles[i]->detach();
        }
    }
    m_handleCount = 0;
}

// ============================================================================
// SoundPlayer::initialize(type, param)
// @addr 0x80561080
// ============================================================================
bool SoundPlayer::initialize(SoundPlayerType type, u32 param) {
    m_type = type;
    return true;
}

// ============================================================================
// SoundPlayer::prepare(soundId, archive)
// @addr 0x805624BC (712 bytes, 94 code lines)
// Prepares the player with sound data from the archive.
// Looks up the sound in the BRSAR and prepares for playback.
// ============================================================================
bool SoundPlayer::prepare(u32 soundId, void* archive) {
    m_soundId = soundId;
    m_archive = archive;
    m_state = 0;

    // Reset parameters
    m_volume = 1.0f;
    m_targetVolume = 1.0f;
    m_pitch = 1.0f;
    m_targetPitch = 1.0f;
    m_pan = 0.0f;
    m_fadeTimer = 0.0f;
    m_fadeDuration = 0.0f;
    m_paused = false;

    return true;
}

// ============================================================================
// SoundPlayer::update()
// @addr 0x805632CC (2040 bytes, 292 code lines, has_assert)
//
// THE main per-frame update function. This is the heart of the sound
// player state machine. It:
// 1. Processes volume fade ramps
// 2. Processes pitch slide ramps
// 3. Applies 3D position updates
// 4. Updates the AX voice with current parameters
// 5. Checks if the sound has finished naturally
// 6. Updates all attached SoundHandles
// ============================================================================
void SoundPlayer::update() {
    if (m_state == 0) return; // Not prepared

    // --- Process volume fade ---
    if (m_fadeDuration > 0.0f && m_fadeTimer < m_fadeDuration) {
        m_fadeTimer += (1.0f / 60.0f); // Assuming 60 FPS
        if (m_fadeTimer >= m_fadeDuration) {
            m_fadeTimer = m_fadeDuration;
        }

        // Linear interpolation
        f32 t = m_fadeDuration > 0.0f ? (m_fadeTimer / m_fadeDuration) : 1.0f;
        f32 currentVol = m_volume + (m_targetVolume - m_volume) * t;

        // Apply to AX voice
        if (m_voiceIndex >= 0 && m_voiceMgr != nullptr) {
            /* AX_SDK: AXSetVoiceVolume() → alSourcef(src, AL_GAIN, vol) */
            m_voiceMgr->setVolume((u32)m_voiceIndex, currentVol);
        }
    }

    // --- Process pitch slide ---
    if (m_fadeDuration > 0.0f) {
        f32 t = m_fadeDuration > 0.0f ? (m_fadeTimer / m_fadeDuration) : 1.0f;
        f32 currentPitch = m_pitch + (m_targetPitch - m_pitch) * t;

        if (m_voiceIndex >= 0 && m_voiceMgr != nullptr) {
            /* AX_SDK: AXSetVoicePitch() → alSourcef(src, AL_PITCH, pitch) */
            m_voiceMgr->setPitch((u32)m_voiceIndex, currentPitch);
        }
    }

    // --- Apply 3D position if enabled ---
    if (m_3dEnabled && m_voiceIndex >= 0 && m_voiceMgr != nullptr) {
        /* AX_SDK: AXSetVoiceVe() → alSource3f(src, AL_POSITION, x, y, z) */
        m_voiceMgr->setPosition((u32)m_voiceIndex,
            m_3dParams.posX, m_3dParams.posY, m_3dParams.posZ);
    }

    // --- Check if voice has finished ---
    if (m_voiceIndex >= 0 && m_voiceMgr != nullptr) {
        if (!m_voiceMgr->isPlaying((u32)m_voiceIndex) && !m_paused) {
            // Sound finished naturally
            m_state = 0;

            // Notify all attached handles
            for (u32 i = 0; i < m_handleCount; i++) {
                if (m_handles[i] != nullptr) {
                    m_handles[i]->detach();
                    m_handles[i] = nullptr;
                }
            }
            m_handleCount = 0;
        }
    }

    // --- Update attached handles ---
    for (u32 i = 0; i < m_handleCount; i++) {
        if (m_handles[i] != nullptr) {
            m_handles[i]->update();
        }
    }
}

// ============================================================================
// SoundPlayer::play()
// @addr 0x80563A70
// /* AX_SDK: AXPlayVoice() → alSourcePlay() */
// ============================================================================
bool SoundPlayer::play() {
    if (m_state == 0) return false;

    // Allocate voice if not already
    if (m_voiceIndex < 0) {
        if (!allocVoice(m_priority)) {
            return false; // No voice available
        }
    }

    if (m_voiceMgr != nullptr && m_voiceIndex >= 0) {
        /* AX_SDK: AXPlayVoice(voice) → alSourcePlay(src) */
        m_voiceMgr->startVoice((u32)m_voiceIndex);
    }

    m_paused = false;
    return true;
}

// ============================================================================
// SoundPlayer::stop()
// @addr 0x80564000
// /* AX_SDK: AXStopVoice() → alSourceStop() */
// ============================================================================
bool SoundPlayer::stop() {
    if (m_voiceMgr != nullptr && m_voiceIndex >= 0) {
        /* AX_SDK: AXStopVoice(voice) → alSourceStop(src) */
        m_voiceMgr->stopVoice((u32)m_voiceIndex);
    }
    m_voiceIndex = -1;
    m_state = 0;
    return true;
}

// ============================================================================
// SoundPlayer::pause()
// @addr 0x80564500
// /* AX_SDK: AX voice pause → alSourcePause() */
// ============================================================================
bool SoundPlayer::pause() {
    if (m_paused) return true;

    if (m_voiceMgr != nullptr && m_voiceIndex >= 0) {
        /* AX_SDK: (DSP pause) → alSourcePause(src) */
        m_voiceMgr->pauseVoice((u32)m_voiceIndex);
    }

    m_paused = true;
    return true;
}

// ============================================================================
// SoundPlayer::resume()
// @addr 0x80564700
// /* AX_SDK: AX voice resume → alSourcePlay() */
// ============================================================================
bool SoundPlayer::resume() {
    if (!m_paused) return true;

    if (m_voiceMgr != nullptr && m_voiceIndex >= 0) {
        /* AX_SDK: (DSP resume) → alSourcePlay(src) */
        m_voiceMgr->resumeVoice((u32)m_voiceIndex);
    }

    m_paused = false;
    return true;
}

// ============================================================================
// Parameter Setters — all delegate to AxVoiceManager
// ============================================================================

void SoundPlayer::setVolume(f32 volume) {
    m_volume = std::clamp(volume, 0.0f, 1.0f);
    m_targetVolume = m_volume;

    if (m_voiceMgr != nullptr && m_voiceIndex >= 0) {
        /* AX_SDK: AXSetVoiceVolume() → alSourcef(src, AL_GAIN, vol) */
        m_voiceMgr->setVolume((u32)m_voiceIndex, m_volume);
    }
}

void SoundPlayer::setPitch(f32 pitch) {
    m_pitch = std::clamp(pitch, 0.25f, 4.0f);
    m_targetPitch = m_pitch;

    if (m_voiceMgr != nullptr && m_voiceIndex >= 0) {
        /* AX_SDK: AXSetVoicePitch() → alSourcef(src, AL_PITCH, pitch) */
        m_voiceMgr->setPitch((u32)m_voiceIndex, m_pitch);
    }
}

void SoundPlayer::setPan(f32 pan) {
    m_pan = std::clamp(pan, -1.0f, 1.0f);

    if (m_voiceMgr != nullptr && m_voiceIndex >= 0) {
        /* AX_SDK: AXSetVoiceVe(pan, 0, 0) → alSource3f(src, AL_POSITION, pan, 0, -0.5) */
        m_voiceMgr->setPan((u32)m_voiceIndex, m_pan);
    }
}

void SoundPlayer::setVolumeFade(f32 target, f32 duration) {
    m_targetVolume = std::clamp(target, 0.0f, 1.0f);
    m_fadeDuration = duration;
    m_fadeTimer = 0.0f;
}

void SoundPlayer::setPitchSlide(f32 target, f32 duration) {
    m_targetPitch = std::clamp(target, 0.25f, 4.0f);
    m_fadeDuration = duration;
    m_fadeTimer = 0.0f;
}

void SoundPlayer::setPriority(u32 priority) {
    m_priority = priority;
}

void SoundPlayer::setLooping(bool loop) {
    m_looping = loop;
    if (m_voiceMgr != nullptr && m_voiceIndex >= 0) {
        /* AX_SDK: AXSetVoiceLoop(voice, on) → alSourcei(src, AL_LOOPING, AL_TRUE) */
        m_voiceMgr->setLoop((u32)m_voiceIndex, loop);
    }
}

void SoundPlayer::setFilter(u32 type, f32 cutoff, f32 resonance) {
    m_filterType = type;
    m_filterCutoff = cutoff;
    m_filterResonance = resonance;
    // /* AX_SDK: AXSetVoiceDspCallback() → alSourcei(src, AL_DIRECT_FILTER, ...) */
}

void SoundPlayer::setReverbSend(f32 sendLevel) {
    m_reverbSend = sendLevel;
    // /* AX_SDK: Reverb send → alSourcef(src, AL_AUXILIARY_SEND_GAIN, level) */
}

void SoundPlayer::set3DPosition(f32 x, f32 y, f32 z) {
    m_3dParams.posX = x;
    m_3dParams.posY = y;
    m_3dParams.posZ = z;
    m_3dEnabled = true;

    if (m_voiceMgr != nullptr && m_voiceIndex >= 0) {
        /* AX_SDK: AXSetVoiceVe(x, y, z) → alSource3f(src, AL_POSITION, x, y, z) */
        m_voiceMgr->setPosition((u32)m_voiceIndex, x, y, z);
    }
}

void SoundPlayer::set3DParameters(const Sound3DParams& params) {
    m_3dParams = params;
    m_3dEnabled = true;
}

// ============================================================================
// Queries
// ============================================================================

f32 SoundPlayer::getVolume() const { return m_volume; }
f32 SoundPlayer::getPitch() const { return m_pitch; }
f32 SoundPlayer::getPan() const { return m_pan; }

SoundHandleState SoundPlayer::getState() const {
    if (m_state == 0) return SOUND_HANDLE_STATE_FREE;
    if (m_paused) return SOUND_HANDLE_STATE_STOPPED;
    return SOUND_HANDLE_STATE_PLAYING;
}

bool SoundPlayer::isPlaying() const {
    return m_state != 0 && !m_paused;
}

bool SoundPlayer::isPaused() const {
    return m_paused;
}

// ============================================================================
// Handle Management
// ============================================================================

void SoundPlayer::attachHandle(SoundHandle* handle) {
    if (handle == nullptr) return;
    if (m_handleCount >= 4) return; // Max 4 handles

    m_handles[m_handleCount++] = handle;
    handle->attach(nullptr); // Will be connected to this player
}

void SoundPlayer::detachHandle(SoundHandle* handle) {
    for (u32 i = 0; i < m_handleCount; i++) {
        if (m_handles[i] == handle) {
            handle->detach();
            // Shift remaining handles down
            for (u32 j = i; j < m_handleCount - 1; j++) {
                m_handles[j] = m_handles[j + 1];
            }
            m_handles[--m_handleCount] = nullptr;
            return;
        }
    }
}

// ============================================================================
// Voice Management
// ============================================================================

// ============================================================================
// allocVoice(priority)
// @addr 0x80567000
// Allocates an AX voice for this player.
// /* AX_SDK: AXAllocVoice(priority) → alGenSources() */
// ============================================================================
bool SoundPlayer::allocVoice(u32 priority) {
    if (m_voiceMgr == nullptr) return false;

    /* AX_SDK: AXAllocVoice() → alGenSources() */
    s32 voiceIdx = m_voiceMgr->allocVoice(priority, m_soundId, this);
    if (voiceIdx < 0) return false;

    m_voiceIndex = voiceIdx;
    return true;
}

// ============================================================================
// releaseVoice()
// @addr 0x80569288 (728 bytes, 54 code lines)
// Releases the AX voice back to the pool.
// /* AX_SDK: AXFreeVoice() → alSourceStop() + alDeleteSources() */
// ============================================================================
bool SoundPlayer::releaseVoice() {
    if (m_voiceIndex < 0 || m_voiceMgr == nullptr) return false;

    /* AX_SDK: AXFreeVoice(voice) → alSourceStop() + alDeleteSources() */
    bool result = m_voiceMgr->freeVoice((u32)m_voiceIndex);
    m_voiceIndex = -1;
    return result;
}

// ============================================================================
// WavePlayer Implementation
// ============================================================================

WavePlayer::WavePlayer() : SoundPlayer() {
    m_type = SOUND_PLAYER_TYPE_WAVE;
    m_waveData = nullptr;
    m_waveSize = 0;
    m_sampleRate = 32000;
    m_channels = 1;
    m_encoding = 0;
}

WavePlayer::~WavePlayer() {
    // Wave data is owned by the archive, don't free here
}

bool WavePlayer::prepare(u32 soundId, void* archive) {
    if (!SoundPlayer::prepare(soundId, archive)) return false;

    // Look up wave data from the sound archive
    // (Simplified — real implementation reads from BRSAR)
    m_waveData = nullptr;
    m_waveSize = 0;

    return true;
}

void WavePlayer::update() {
    SoundPlayer::update();
}

bool WavePlayer::play() {
    if (!SoundPlayer::allocVoice(m_priority)) return false;

    // Upload wave data to voice
    if (m_voiceMgr != nullptr && m_voiceIndex >= 0 && m_waveData != nullptr) {
        /* AX_SDK: AXSetVoiceAddr() → alBufferData() */
        m_voiceMgr->setAddr((u32)m_voiceIndex, m_waveData, m_waveSize,
                           m_sampleRate, m_channels, m_encoding);
        /* AX_SDK: AXSetVoiceLoop() → alSourcei(src, AL_LOOPING, ...) */
        m_voiceMgr->setLoop((u32)m_voiceIndex, m_looping);
    }

    return SoundPlayer::play();
}

// ============================================================================
// StrmPlayer Implementation (BGM Streaming)
// ============================================================================

StrmPlayer::StrmPlayer() : SoundPlayer() {
    m_type = SOUND_PLAYER_TYPE_STRM;
    m_streamBuffers[0] = nullptr;
    m_streamBuffers[1] = nullptr;
    m_bufferSizes[0] = 0;
    m_bufferSizes[1] = 0;
    m_currentBuffer = 0;
    m_streamOffset = 0;
    m_brstmData = nullptr;
    m_brstmSize = 0;
    m_streamCallback = nullptr;
    m_callbackUserData = nullptr;
}

StrmPlayer::~StrmPlayer() {
    // Release stream buffers
    for (int i = 0; i < 2; i++) {
        if (m_streamBuffers[i] != nullptr) {
            // Free aligned buffer
            // (aligned_free(m_streamBuffers[i]));
            m_streamBuffers[i] = nullptr;
        }
    }
}

bool StrmPlayer::prepare(u32 soundId, void* archive) {
    if (!SoundPlayer::prepare(soundId, archive)) return false;

    // Prepare streaming — allocate double buffers
    // On Wii: these are 32-byte aligned DMA buffers
    // On PC: standard heap allocation (OpenAL handles alignment)

    return true;
}

void StrmPlayer::update() {
    SoundPlayer::update();

    // Streaming update: fill buffers as they're consumed
    if (m_state == 0 || m_paused) return;

    // Check if we need to refill a buffer
    if (m_streamCallback != nullptr) {
        m_streamCallback(m_streamBuffers[m_currentBuffer],
                        m_bufferSizes[m_currentBuffer],
                        m_callbackUserData);
        m_currentBuffer ^= 1; // Toggle buffer
    }
}

bool StrmPlayer::play() {
    if (!SoundPlayer::allocVoice(m_priority)) return false;

    // Set up streaming on the voice
    if (m_voiceMgr != nullptr && m_voiceIndex >= 0) {
        if (m_streamBuffers[0] != nullptr) {
            /* AX_SDK: AXSetVoiceAddr() → alBufferData() for first chunk */
            m_voiceMgr->setAddr((u32)m_voiceIndex,
                               m_streamBuffers[0], m_bufferSizes[0],
                               32000, 2, 0);
        }
        /* AX_SDK: AXSetVoiceLoop() → (streaming doesn't loop at voice level) */
        m_voiceMgr->setLoop((u32)m_voiceIndex, false);
    }

    return SoundPlayer::play();
}

bool StrmPlayer::stop() {
    m_currentBuffer = 0;
    m_streamOffset = 0;
    return SoundPlayer::stop();
}

bool StrmPlayer::pause() {
    return SoundPlayer::pause();
}

bool StrmPlayer::resume() {
    return SoundPlayer::resume();
}

void StrmPlayer::setStreamBuffer(void* buffer, u32 size) {
    // Assign buffer to current slot
    m_streamBuffers[m_currentBuffer] = buffer;
    m_bufferSizes[m_currentBuffer] = size;
    m_currentBuffer ^= 1;
}

void StrmPlayer::setStreamCallback(void (*callback)(void*, u32, void*),
                                    void* userData) {
    m_streamCallback = callback;
    m_callbackUserData = userData;
}

} // namespace snd
} // namespace nw4r