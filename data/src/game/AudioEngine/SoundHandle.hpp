#pragma once
// ============================================================================
// SoundHandle.hpp — Sound Handle (reference to a playing sound instance)
// Reconstructed from nw4r::snd::SoundHandle (Cluster 1: 0x805100-0x80522F)
//
// SoundHandle is a lightweight object that refers to a currently-playing
// sound instance. It provides volume/pitch/pan control and lifecycle
// management (start, stop, pause, fade).
//
// Key functions reconstructed:
//   0x805100AC: SoundHandle::detach()           — Detach from sound instance
//   0x80510100: SoundHandle::update()           — Per-frame state update
//   0x805103E8: SoundHandle::prepareStart()     — Prepare to start playing
//   0x80510764: SoundHandle::getInternalSound() — Get underlying sound
//   0x80510810: SoundHandle::isAttached()       — Check if handle is valid
//   0x80510968: SoundHandle::start()            — Begin playback
//   0x80510A88: SoundHandle::stop()             — Stop with optional fade
//   0x80510BC0: SoundHandle::stopWithFade()     — Stop with fade-out
//   0x80510FA4: SoundHandle::setVolume()        — Set volume
//   0x80511000: SoundHandle::setPitch()         — Set pitch
//   0x8051152C: SoundHandle::setPan()           — Set stereo pan
//   0x80511880: SoundHandle::getVolume()        — Get current volume
//   0x805118CC: SoundHandle::getPitch()         — Get current pitch
//   0x8051196C: SoundHandle::getPan()           — Get current pan
//   0x80511B68: SoundHandle::setFadeVolume()    — Set volume with fade
//   0x80511BB0: SoundHandle::setFadePitch()     — Set pitch with fade
//   0x80512358: SoundHandle::pause()            — Pause sound
//   0x8051253C: SoundHandle::resume()           — Resume paused sound
//   0x805125E0: SoundHandle::setPriority()      — Set playback priority
//   0x80512ABC: SoundHandle::setLoopCount()     — Set loop iterations
//   0x80512B50: SoundHandle::setLooping()       — Enable/disable looping
//   0x80512C2C: SoundHandle::isPlaying()        — Check if currently playing
//   0x80512C90: SoundHandle::isPaused()         — Check if paused
//   0x80512D04: SoundHandle::getState()         — Get handle state
//   0x80512D8C: SoundHandle::setCategoryVolume() — Set category volume
//   0x805131D4: SoundHandle::setFilter()        — Set DSP filter
//   0x80513218: SoundHandle::setReverb()        — Set reverb send level
//   0x8051326C: SoundHandle::getFilter()        — Get filter settings
//   0x80513300: SoundHandle::resetFilter()      — Reset filter
//   0x80513374: SoundHandle::set3DPosition()    — Set 3D position
//   0x8051357C: SoundHandle::set3DParameters()  — Set full 3D params
//   0x8051375C: SoundHandle::update3D()         — Update 3D position from object
//   0x805138D8: SoundHandle::initExternalPlayer() — Init external player (2644 bytes!)
// ============================================================================

#include <rk_types.h>
#include "SoundTypes.hpp"

namespace nw4r {
namespace snd {

// Forward declarations
class SoundStartable;

// ============================================================================
// SoundHandle — Reference to a playing sound instance
//
// Size: 0x1C bytes (on Wii, matches the vtable + internal pointer + state)
// ============================================================================
class SoundHandle {
public:
    SoundHandle();
    ~SoundHandle();

    // --- Attachment ---
    // @addr 0x80510764 (68 bytes)
    // Gets the internal SoundStartable pointer this handle refers to.
    SoundStartable* getInternalSound() const;

    // @addr 0x80510810 (92 bytes)
    // Returns true if this handle is attached to a valid sound.
    bool isAttached() const;

    // @addr 0x805100AC (84 bytes)
    // Detaches this handle from its sound instance without stopping it.
    void detach();

    // --- Playback Control ---
    // @addr 0x80510968 (148 bytes)
    // Starts playback. Returns true if successfully started.
    bool start();

    // @addr 0x80510A88 (264 bytes)
    // Stops the sound immediately.
    // /* AX_SDK: AXStopVoice() → alSourceStop() */
    void stop();

    // @addr 0x80510BC0 (456 bytes)
    // Stops the sound with a fade-out over the given duration.
    // /* AX_SDK: AXSetVoiceVolume() ramp → alSourcef(AL_GAIN) ramp */
    void stopWithFade(f32 duration, f32 targetVolume = 0.0f);

    // @addr 0x80512358 (484 bytes)
    // Pauses the sound.
    // /* AX_SDK: AX voice pause → alSourcePause() */
    bool pause();

    // @addr 0x8051253C (164 bytes)
    // Resumes a paused sound.
    // /* AX_SDK: AX voice resume → alSourcePlay() */
    bool resume();

    // --- Parameter Setting ---
    // @addr 0x80510FA4 (92 bytes)
    // Sets the volume. Range: 0.0 to 1.0.
    // /* AX_SDK: AXSetVoiceVolume() → alSourcef(src, AL_GAIN, vol) */
    void setVolume(f32 volume);

    // @addr 0x80511000 (1324 bytes, 193 code lines)
    // Sets the pitch. Range: 0.25 to 4.0. Default 1.0.
    // /* AX_SDK: AXSetVoicePitch() → alSourcef(src, AL_PITCH, pitch) */
    void setPitch(f32 pitch);

    // @addr 0x8051152C (840 bytes, 114 code lines)
    // Sets the stereo pan. Range: -1.0 (left) to 1.0 (right).
    // /* AX_SDK: AXSetVoiceVe(pan, 0, 0) → alSource3f(AL_POSITION) */
    void setPan(f32 pan);

    // @addr 0x80511B68 (72 bytes)
    // Sets the volume with a smooth fade transition.
    void setFadeVolume(f32 targetVolume, f32 duration);

    // @addr 0x80511BB0 (1400 bytes, 177 code lines)
    // Sets the pitch with a smooth ramp transition.
    void setFadePitch(f32 targetPitch, f32 duration);

    // @addr 0x805125E0 (580 bytes)
    // Sets the playback priority. Higher = less likely to be stolen.
    void setPriority(u32 priority);

    // --- Loop Control ---
    // @addr 0x80512ABC (148 bytes)
    // Sets the number of loop iterations (-1 = infinite).
    void setLoopCount(s32 count);

    // @addr 0x80512B50 (160 bytes)
    // Enables or disables looping.
    void setLooping(bool loop);

    // --- State Queries ---
    // @addr 0x80511880 (60 bytes)
    f32 getVolume() const;

    // @addr 0x805118CC (80 bytes)
    f32 getPitch() const;

    // @addr 0x8051196C (60 bytes)
    f32 getPan() const;

    // @addr 0x80512C2C (92 bytes)
    bool isPlaying() const;

    // @addr 0x80512C90 (116 bytes)
    bool isPaused() const;

    // @addr 0x80512D04 (136 bytes)
    SoundHandleState getState() const;

    // --- DSP Effects ---
    // @addr 0x805131D4 (68 bytes)
    // Sets a low-pass/band-pass/high-pass filter on the voice.
    // /* AX_SDK: AXSetVoiceDspCallback() → OpenAL EFX alSourcei(src, AL_DIRECT_FILTER, filter) */
    void setFilter(u32 filterType, f32 cutoff, f32 resonance);

    // @addr 0x80513218 (68 bytes)
    // Sets the reverb send level (0.0 = dry, 1.0 = full reverb).
    // /* AX_SDK: AXSetVoiceDspCallback() → OpenAL EFX alSourcef(src, AL_AUXILIARY_SEND_GAIN, gain) */
    void setReverb(f32 sendLevel);

    // @addr 0x8051326C (60 bytes)
    u32 getFilter() const;

    // @addr 0x80513300 (116 bytes)
    void resetFilter();

    // --- 3D Positioning ---
    // @addr 0x80513374 (92 bytes)
    // Sets the 3D world-space position for this sound.
    // /* AX_SDK: AXSetVoiceVe() → alSource3f(src, AL_POSITION, x, y, z) */
    void set3DPosition(f32 x, f32 y, f32 z);

    // @addr 0x8051357C (480 bytes)
    // Sets full 3D parameters including inner/outer radius, volume falloff.
    void set3DParameters(const Sound3DParams& params);

    // @addr 0x8051375C (108 bytes)
    // Updates 3D position from an external game object (kart, item, etc).
    void update3D(void* gameObject);

    // --- External Player ---
    // @addr 0x805138D8 (2644 bytes, 160 code lines, has_assert)
    // Initializes an external sound player (for BGM streaming).
    bool initExternalPlayer(SoundPlayerType type, u32 bufferSize = 0x4000);

    // --- Per-Frame Update ---
    // @addr 0x80510100 (656 bytes, 100 code lines)
    // Updates fade/pitch ramp state. Called once per frame.
    void update();

    // --- Internal ---
    void attach(SoundStartable* sound);

private:
    SoundStartable* m_sound;      // 0x00: Internal sound instance
    SoundHandleState m_state;     // 0x04: Handle state
    f32 m_volume;                 // 0x08: Current volume
    f32 m_pitch;                  // 0x0C: Current pitch
    f32 m_pan;                    // 0x10: Current pan
    u32  m_priority;              // 0x14: Priority level
    u32  m_flags;                 // 0x18: Flags (looping, paused, 3D, etc.)
};

static_assert(sizeof(SoundHandle) == 0x1C);

} // namespace snd
} // namespace nw4r