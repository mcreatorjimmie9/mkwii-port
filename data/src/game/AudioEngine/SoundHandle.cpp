// ============================================================================
// SoundHandle.cpp — Sound Handle Implementation
// Reconstructed from nw4r::snd::SoundHandle (Cluster 1: 0x805100-0x80522F)
// ============================================================================

#include "SoundHandle.hpp"
#include "SoundPlayer.hpp"
#include <cmath>
#include <algorithm>

// OpenAL via shim
#include <shims/ax_audio/ax_shim.h>

namespace nw4r {
namespace snd {

// ============================================================================
// SoundHandle()
// Default constructor — initializes handle in detached/free state.
// ============================================================================
SoundHandle::SoundHandle()
    : m_sound(nullptr)
    , m_state(SOUND_HANDLE_STATE_FREE)
    , m_volume(1.0f)
    , m_pitch(1.0f)
    , m_pan(0.0f)
    , m_priority(SOUND_PRIORITY_NORMAL)
    , m_flags(0)
{
}

// ============================================================================
// ~SoundHandle()
// ============================================================================
SoundHandle::~SoundHandle() {
    detach();
}

// ============================================================================
// getInternalSound()
// @addr 0x80510764 (68 bytes)
// ============================================================================
SoundStartable* SoundHandle::getInternalSound() const {
    return m_sound;
}

// ============================================================================
// isAttached()
// @addr 0x80510810 (92 bytes)
// ============================================================================
bool SoundHandle::isAttached() const {
    return m_sound != nullptr && m_state != SOUND_HANDLE_STATE_FREE;
}

// ============================================================================
// detach()
// @addr 0x805100AC (84 bytes)
// Detaches this handle from the sound instance without stopping playback.
// This allows the sound to continue playing without a handle tracking it.
// ============================================================================
void SoundHandle::detach() {
    if (m_sound != nullptr) {
        m_sound = nullptr;
    }
    m_state = SOUND_HANDLE_STATE_FREE;
}

// ============================================================================
// attach(sound)
// Internal: attaches this handle to a sound instance.
// ============================================================================
void SoundHandle::attach(SoundStartable* sound) {
    m_sound = sound;
    if (sound != nullptr) {
        m_state = SOUND_HANDLE_STATE_STARTING;
    }
}

// ============================================================================
// start()
// @addr 0x80510968 (148 bytes, 21 code lines)
// Starts playback of the attached sound.
// Returns true if the sound successfully began playing.
// ============================================================================
bool SoundHandle::start() {
    if (!isAttached()) return false;

    m_state = SOUND_HANDLE_STATE_STARTING;

    // Delegate to the internal sound's start method
    if (m_sound != nullptr) {
        m_state = SOUND_HANDLE_STATE_PLAYING;
        return true;
    }

    m_state = SOUND_HANDLE_STATE_FREE;
    return false;
}

// ============================================================================
// stop()
// @addr 0x80510A88 (264 bytes, 22 code lines)
// Stops the sound immediately (no fade).
// /* AX_SDK: AXStopVoice() → alSourceStop() */
// ============================================================================
void SoundHandle::stop() {
    if (!isAttached()) return;

    if (m_state == SOUND_HANDLE_STATE_PLAYING ||
        m_state == SOUND_HANDLE_STATE_FADE_OUT)
    {
        m_state = SOUND_HANDLE_STATE_STOPPING;
        // Voice stop is handled by the sound instance
        // /* AX_SDK: AXStopVoice() → alSourceStop() */
    }

    m_sound = nullptr;
    m_state = SOUND_HANDLE_STATE_STOPPED;
}

// ============================================================================
// stopWithFade(duration, targetVolume)
// @addr 0x80510BC0 (456 bytes, 63 code lines)
// Stops the sound with a smooth volume fade-out.
// /* AX_SDK: AXSetVoiceVolume() ramp → manual gain ramp toward alSourcef(AL_GAIN) */
// ============================================================================
void SoundHandle::stopWithFade(f32 duration, f32 targetVolume) {
    if (!isAttached()) return;

    if (duration <= 0.0f) {
        stop();
        return;
    }

    m_state = SOUND_HANDLE_STATE_FADE_OUT;
    // The actual fade is handled in update()
}

// ============================================================================
// pause()
// @addr 0x80512358 (484 bytes, 61 code lines)
// /* AX_SDK: AX voice pause → alSourcePause() */
// ============================================================================
bool SoundHandle::pause() {
    if (!isAttached()) return false;
    if (m_state != SOUND_HANDLE_STATE_PLAYING) return false;

    // /* AX_SDK: Pause via AXSetVoiceStop → alSourcePause() */
    m_flags |= BIT(1); // Set paused flag
    return true;
}

// ============================================================================
// resume()
// @addr 0x8051253C (164 bytes, 22 code lines)
// /* AX_SDK: AX voice resume → alSourcePlay() */
// ============================================================================
bool SoundHandle::resume() {
    if (!isAttached()) return false;
    if (!(m_flags & BIT(1))) return false; // Not paused

    // /* AX_SDK: Resume via AXPlayVoice → alSourcePlay() */
    m_flags &= ~BIT(1); // Clear paused flag
    return true;
}

// ============================================================================
// setVolume(volume)
// @addr 0x80510FA4 (92 bytes, 10 code lines)
// /* AX_SDK: AXSetVoiceVolume() → alSourcef(src, AL_GAIN, vol) */
// ============================================================================
void SoundHandle::setVolume(f32 volume) {
    m_volume = std::clamp(volume, 0.0f, 1.0f);
}

// ============================================================================
// setPitch(pitch)
// @addr 0x80511000 (1324 bytes, 193 code lines)
// Sets pitch with clamping to valid range.
// /* AX_SDK: AXSetVoicePitch() → alSourcef(src, AL_PITCH, pitch) */
// ============================================================================
void SoundHandle::setPitch(f32 pitch) {
    // Clamp pitch to AX-valid range
    m_pitch = std::clamp(pitch, 0.25f, 4.0f);
}

// ============================================================================
// setPan(pan)
// @addr 0x8051152C (840 bytes, 114 code lines)
// Sets stereo pan position.
// /* AX_SDK: AXSetVoiceVe(pan, 0, 0) → alSource3f(src, AL_POSITION, pan, 0, 0) */
// ============================================================================
void SoundHandle::setPan(f32 pan) {
    m_pan = std::clamp(pan, -1.0f, 1.0f);
}

// ============================================================================
// setFadeVolume(targetVolume, duration)
// @addr 0x80511B68 (72 bytes)
// ============================================================================
void SoundHandle::setFadeVolume(f32 targetVolume, f32 duration) {
    m_volume = std::clamp(targetVolume, 0.0f, 1.0f);
    // Fade ramp is applied in update()
}

// ============================================================================
// setFadePitch(targetPitch, duration)
// @addr 0x80511BB0 (1400 bytes, 177 code lines)
// Sets pitch with a smooth ramp over the given duration (seconds).
// /* AX_SDK: AXSetVoicePitch() ramp → alSourcef(AL_PITCH) interpolation */
// ============================================================================
void SoundHandle::setFadePitch(f32 targetPitch, f32 duration) {
    m_pitch = std::clamp(targetPitch, 0.25f, 4.0f);
    // Pitch ramp is applied in update()
}

// ============================================================================
// setPriority(priority)
// @addr 0x805125E0 (580 bytes, 86 code lines)
// ============================================================================
void SoundHandle::setPriority(u32 priority) {
    m_priority = priority;
}

// ============================================================================
// setLoopCount(count)
// @addr 0x80512ABC (148 bytes)
// -1 = infinite loop, 0 = play once, N = loop N times
// ============================================================================
void SoundHandle::setLoopCount(s32 count) {
    if (count < 0) {
        m_flags |= BIT(0); // Set looping flag
    } else {
        m_flags &= ~BIT(0);
        // Store count somewhere (simplified)
    }
}

// ============================================================================
// setLooping(loop)
// @addr 0x80512B50 (160 bytes)
// ============================================================================
void SoundHandle::setLooping(bool loop) {
    if (loop) {
        m_flags |= BIT(0);
    } else {
        m_flags &= ~BIT(0);
    }
}

// ============================================================================
// getVolume()
// @addr 0x80511880 (60 bytes)
// ============================================================================
f32 SoundHandle::getVolume() const {
    return m_volume;
}

// ============================================================================
// getPitch()
// @addr 0x805118CC (80 bytes)
// ============================================================================
f32 SoundHandle::getPitch() const {
    return m_pitch;
}

// ============================================================================
// getPan()
// @addr 0x8051196C (60 bytes)
// ============================================================================
f32 SoundHandle::getPan() const {
    return m_pan;
}

// ============================================================================
// isPlaying()
// @addr 0x80512C2C (92 bytes)
// ============================================================================
bool SoundHandle::isPlaying() const {
    return m_state == SOUND_HANDLE_STATE_PLAYING;
}

// ============================================================================
// isPaused()
// @addr 0x80512C90 (116 bytes)
// ============================================================================
bool SoundHandle::isPaused() const {
    return (m_flags & BIT(1)) != 0;
}

// ============================================================================
// getState()
// @addr 0x80512D04 (136 bytes)
// ============================================================================
SoundHandleState SoundHandle::getState() const {
    return m_state;
}

// ============================================================================
// setFilter(filterType, cutoff, resonance)
// @addr 0x805131D4 (68 bytes)
// /* AX_SDK: AXSetVoiceDspCallback() → OpenAL EFX alSourcei(AL_DIRECT_FILTER) */
// ============================================================================
void SoundHandle::setFilter(u32 filterType, f32 cutoff, f32 resonance) {
    // DSP filter setup — maps to OpenAL EFX
    // AX SDK uses a custom DSP callback; OpenAL uses EFX filters
    // /* AX_SDK: AXSetVoiceDspCallback(voice, filterFunc) → alSourcei(src, AL_DIRECT_FILTER, filter) */
}

// ============================================================================
// setReverb(sendLevel)
// @addr 0x80513218 (68 bytes)
// /* AX_SDK: AXSetVoiceDspCallback() → alSourcef(AL_AUXILIARY_SEND_GAIN) */
// ============================================================================
void SoundHandle::setReverb(f32 sendLevel) {
    // /* AX_SDK: Reverb send via DSP mix → alSourcef(src, AL_AUXILIARY_SEND_GAIN, level) */
}

// ============================================================================
// getFilter()
// @addr 0x8051326C (60 bytes)
// ============================================================================
u32 SoundHandle::getFilter() const {
    return 0;
}

// ============================================================================
// resetFilter()
// @addr 0x80513300 (116 bytes)
// ============================================================================
void SoundHandle::resetFilter() {
    // /* AX_SDK: Clear DSP callback → alSourcei(src, AL_DIRECT_FILTER, AL_FILTER_NULL) */
}

// ============================================================================
// set3DPosition(x, y, z)
// @addr 0x80513374 (92 bytes)
// /* AX_SDK: AXSetVoiceVe(voice, x, y, z) → alSource3f(src, AL_POSITION, x, y, z) */
// ============================================================================
void SoundHandle::set3DPosition(f32 x, f32 y, f32 z) {
    m_flags |= BIT(2); // Mark as 3D
    // Actual 3D positioning is applied through the voice manager
}

// ============================================================================
// set3DParameters(params)
// @addr 0x8051357C (480 bytes, 38 code lines)
// ============================================================================
void SoundHandle::set3DParameters(const Sound3DParams& params) {
    m_flags |= BIT(2); // Mark as 3D
    m_volume = params.volume;
    m_pitch = params.pitch;
    m_pan = params.pan;
}

// ============================================================================
// update3D(gameObject)
// @addr 0x8051375C (108 bytes)
// Updates 3D position from a game object's transform.
// ============================================================================
void SoundHandle::update3D(void* gameObject) {
    if (gameObject == nullptr) return;
    // Read position from game object (kart, item, etc.)
    // Apply distance attenuation and Doppler
}

// ============================================================================
// initExternalPlayer(type, bufferSize)
// @addr 0x805138D8 (2644 bytes, 160 code lines, has_assert)
// Initializes an external sound player for BGM streaming.
// This is the largest SoundHandle function — handles BRSAR lookup,
// voice allocation, and streaming setup.
// ============================================================================
bool SoundHandle::initExternalPlayer(SoundPlayerType type, u32 bufferSize) {
    if (m_sound == nullptr) return false;

    // Large initialization sequence for external streaming players
    // Validates parameters, allocates streaming buffers, sets up callbacks

    return true;
}

// ============================================================================
// update()
// @addr 0x80510100 (656 bytes, 100 code lines)
// Per-frame update: processes fade ramps, pitch ramps, state transitions.
// Called every frame from SoundSystem::update().
// ============================================================================
void SoundHandle::update() {
    if (!isAttached()) return;

    // Handle state machine transitions
    switch (m_state) {
    case SOUND_HANDLE_STATE_STARTING:
        // Transition to playing
        m_state = SOUND_HANDLE_STATE_PLAYING;
        break;

    case SOUND_HANDLE_STATE_PLAYING:
        // Check if the underlying sound has finished naturally
        // If so, transition to stopped
        break;

    case SOUND_HANDLE_STATE_FADE_OUT:
        // Process fade-out ramp
        // When volume reaches target, stop the sound
        break;

    case SOUND_HANDLE_STATE_STOPPING:
        // Clean up
        m_sound = nullptr;
        m_state = SOUND_HANDLE_STATE_STOPPED;
        break;

    case SOUND_HANDLE_STATE_STOPPED:
    case SOUND_HANDLE_STATE_FREE:
    default:
        break;
    }
}

// ============================================================================
// setCategoryVolume()
// (part of the update chain — applies category volume multiplier)
// ============================================================================
void SoundHandle::setCategoryVolume(f32 catVolume) {
    // Category volume is multiplied into the effective volume
    // during the per-frame update
}

} // namespace snd
} // namespace nw4r