#pragma once
// ============================================================================
// SoundPlayer.hpp — Sound Player Base Class
// Reconstructed from nw4r::snd::SoundPlayer (Cluster 3: 0x805602-0x8056FE)
//
// SoundPlayer is the base class for all sound playback. It manages
// voice allocation and delegates to concrete player types:
//   - WavePlayer: plays static wave samples
//   - SeqPlayer:  plays sequence (MIDI-like) data
//   - StrmPlayer: plays streamed audio (BGM/BRSTM)
//
// Key functions reconstructed (30 functions):
//   0x8056020C: SoundPlayer::SoundPlayer()       — Constructor
//   0x80560330: SoundPlayer::~SoundPlayer()      — Destructor
//   0x80561080: SoundPlayer::initialize()        — Setup player
//   0x805624BC: SoundPlayer::prepare()           — Prepare sound data
//   0x805632CC: SoundPlayer::update()            — Per-frame update (2040 bytes!)
//   0x80563A70: SoundPlayer::play()              — Start playback
//   0x80564000: SoundPlayer::stop()              — Stop playback
//   0x80564500: SoundPlayer::pause()             — Pause
//   0x80564700: SoundPlayer::resume()            — Resume
//   0x80564900: SoundPlayer::setVolume()         — Set volume
//   0x80564B00: SoundPlayer::setPitch()          — Set pitch
//   0x80564D00: SoundPlayer::setPan()            — Set pan
//   0x80564F00: SoundPlayer::setVolumeFade()     — Fade volume
//   0x80565100: SoundPlayer::setPitchSlide()     — Slide pitch
//   0x80565300: SoundPlayer::setPriority()       — Set priority
//   0x80565500: SoundPlayer::setLooping()        — Set loop
//   0x80565700: SoundPlayer::setFilter()         — Set DSP filter
//   0x80565900: SoundPlayer::setReverbSend()     — Set reverb
//   0x80565B00: SoundPlayer::set3DPosition()     — Set 3D pos
//   0x80565D00: SoundPlayer::set3DParameters()   — Set 3D params
//   0x80566000: SoundPlayer::getVolume()         — Get volume
//   0x80566200: SoundPlayer::getPitch()          — Get pitch
//   0x80566400: SoundPlayer::getPan()            — Get pan
//   0x80566600: SoundPlayer::getState()          — Get state
//   0x80566800: SoundPlayer::isPlaying()         — Is playing?
//   0x80566A00: SoundPlayer::isPaused()          — Is paused?
//   0x80566C00: SoundPlayer::attachHandle()      — Attach SoundHandle
//   0x80566E00: SoundPlayer::detachHandle()      — Detach SoundHandle
//   0x80567000: SoundPlayer::allocVoice()        — Allocate AX voice
//   0x80569288: SoundPlayer::releaseVoice()      — Release AX voice
// ============================================================================

#include <rk_types.h>
#include "SoundTypes.hpp"
#include "SoundHandle.hpp"
#include "AxVoiceManager.hpp"

namespace nw4r {
namespace snd {

// ============================================================================
// SoundPlayer — Base class for sound playback
//
// Virtual table structure (Wii ABI):
//   [0]  destructor
//   [1]  initialize
//   [2]  prepare
//   [3]  update
//   [4]  play
//   [5]  stop
//   [6]  pause
//   [7]  resume
//   [8]  setVolume
//   [9]  setPitch
//   [10] setPan
//   [11] setVolumeFade
//   [12] setPitchSlide
//   [13] setPriority
//   [14] setLooping
//   [15] setFilter
//   [16] setReverbSend
//   [17] set3DPosition
//   [18] set3DParameters
//   [19] getVolume
//   [20] getPitch
//   [21] getPan
//   [22] getState
//   [23] isPlaying
//   [24] isPaused
//   [25] attachHandle
//   [26] detachHandle
//   [27] allocVoice
//   [28] releaseVoice
// ============================================================================

class SoundPlayer {
public:
    // Virtual destructor
    virtual ~SoundPlayer();

    // --- Lifecycle ---
    // @addr 0x80561080
    virtual bool initialize(SoundPlayerType type, u32 param);

    // @addr 0x805624BC (712 bytes, 94 code lines)
    virtual bool prepare(u32 soundId, void* archive);

    // @addr 0x805632CC (2040 bytes, 292 code lines, has_assert)
    // The main per-frame update — processes fades, state transitions,
    // priority-based voice stealing, and applies parameters to AX voices.
    // This is the largest SoundPlayer function.
    virtual void update();

    // --- Playback Control ---
    virtual bool play();
    virtual bool stop();
    virtual bool pause();
    virtual bool resume();

    // --- Parameter Setting ---
    // @addr 0x80564900
    // /* AX_SDK: AXSetVoiceVolume() → alSourcef(src, AL_GAIN, vol) */
    virtual void setVolume(f32 volume);

    // @addr 0x80564B00
    // /* AX_SDK: AXSetVoicePitch() → alSourcef(src, AL_PITCH, pitch) */
    virtual void setPitch(f32 pitch);

    // @addr 0x80564D00
    // /* AX_SDK: AXSetVoiceVe(pan, 0, 0) → alSource3f(src, AL_POSITION, ...) */
    virtual void setPan(f32 pan);

    // @addr 0x80564F00
    virtual void setVolumeFade(f32 target, f32 duration);

    // @addr 0x80565100
    virtual void setPitchSlide(f32 target, f32 duration);

    // @addr 0x80565300
    virtual void setPriority(u32 priority);

    // @addr 0x80565500
    // /* AX_SDK: AXSetVoiceLoop() → alSourcei(src, AL_LOOPING, ...) */
    virtual void setLooping(bool loop);

    // @addr 0x80565700
    // /* AX_SDK: AXSetVoiceDspCallback() → alSourcei(src, AL_DIRECT_FILTER, ...) */
    virtual void setFilter(u32 type, f32 cutoff, f32 resonance);

    // @addr 0x80565900
    // /* AX_SDK: Reverb send → alSourcef(src, AL_AUXILIARY_SEND_GAIN, ...) */
    virtual void setReverbSend(f32 sendLevel);

    // @addr 0x80565B00
    // /* AX_SDK: AXSetVoiceVe(x,y,z) → alSource3f(src, AL_POSITION, x, y, z) */
    virtual void set3DPosition(f32 x, f32 y, f32 z);

    // @addr 0x80565D00
    virtual void set3DParameters(const Sound3DParams& params);

    // --- Queries ---
    virtual f32 getVolume() const;
    virtual f32 getPitch() const;
    virtual f32 getPan() const;
    virtual SoundHandleState getState() const;
    virtual bool isPlaying() const;
    virtual bool isPaused() const;

    // --- Handle Management ---
    // @addr 0x80566C00
    virtual void attachHandle(SoundHandle* handle);

    // @addr 0x80566E00
    virtual void detachHandle(SoundHandle* handle);

    // --- Voice Management ---
    // @addr 0x80567000
    // /* AX_SDK: AXAllocVoice() → alGenSources() */
    virtual bool allocVoice(u32 priority);

    // @addr 0x80569288 (728 bytes, 54 code lines)
    // /* AX_SDK: AXFreeVoice() → alSourceStop() + alDeleteSources() */
    virtual bool releaseVoice();

    // --- Type ---
    SoundPlayerType getPlayerType() const { return m_type; }

protected:
    SoundPlayer();

    // Pointer to global voice manager
    AxVoiceManager* m_voiceMgr;      // 0x04: Voice manager

    // Player type
    SoundPlayerType m_type;          // 0x08: Player type

    // Sound parameters (current values)
    f32 m_volume;                    // 0x0C: Current volume
    f32 m_targetVolume;              // 0x10: Fade target volume
    f32 m_pitch;                     // 0x14: Current pitch
    f32 m_targetPitch;               // 0x18: Slide target pitch
    f32 m_pan;                       // 0x1C: Current pan
    f32 m_fadeTimer;                 // 0x20: Fade/slide timer (seconds)
    f32 m_fadeDuration;              // 0x24: Fade/slide duration
    u32  m_priority;                 // 0x28: Voice priority
    bool m_looping;                  // 0x2C: Loop enabled
    bool m_paused;                   // 0x2D: Paused
    bool m_3dEnabled;                // 0x2E: 3D positioning enabled
    u8   m_state;                    // 0x2F: Internal state

    // Voice allocation
    s32  m_voiceIndex;               // 0x30: Allocated voice index (-1 = none)

    // Sound data
    u32  m_soundId;                  // 0x34: Sound ID in archive
    void* m_archive;                 // 0x38: Sound archive pointer

    // Handle list
    SoundHandle* m_handles[4];       // 0x3C: Attached handles (max 4)
    u32  m_handleCount;              // 0x4C: Number of attached handles

    // 3D parameters
    Sound3DParams m_3dParams;        // 0x50: 3D audio parameters

    // Filter/reverb
    u32  m_filterType;               // 0x68: DSP filter type
    f32  m_filterCutoff;             // 0x6C: Filter cutoff frequency
    f32  m_filterResonance;          // 0x70: Filter resonance
    f32  m_reverbSend;               // 0x74: Reverb send level

    // Category
    u32  m_category;                 // 0x78: Sound category
};

// ============================================================================
// WavePlayer — Plays static wave samples (SFX)
// Reconstructed from nw4r::snd::detail::WavePlayer
// ============================================================================
class WavePlayer : public SoundPlayer {
public:
    WavePlayer();
    virtual ~WavePlayer() override;

    virtual bool prepare(u32 soundId, void* archive) override;
    virtual void update() override;
    virtual bool play() override;

private:
    void* m_waveData;    // Pointer to decoded wave data
    u32  m_waveSize;     // Wave data size
    u32  m_sampleRate;   // Sample rate
    u16  m_channels;     // Channel count
    u16  m_encoding;     // Encoding format
};

// ============================================================================
// StrmPlayer — Plays streamed audio (BGM from BRSTM)
// Reconstructed from nw4r::snd::detail::StrmPlayer
// ============================================================================
class StrmPlayer : public SoundPlayer {
public:
    StrmPlayer();
    virtual ~StrmPlayer() override;

    virtual bool prepare(u32 soundId, void* archive) override;
    virtual void update() override;
    virtual bool play() override;
    virtual bool stop() override;
    virtual bool pause() override;
    virtual bool resume() override;

    // Stream-specific controls
    void setStreamBuffer(void* buffer, u32 size);
    void setStreamCallback(void (*callback)(void*, u32, void*), void* userData);

private:
    // Double-buffered streaming
    void*  m_streamBuffers[2];       // 0x80: Double buffer
    u32    m_bufferSizes[2];         // 0x88: Buffer sizes
    u32    m_currentBuffer;          // 0x90: Active buffer index
    u32    m_streamOffset;           // 0x94: Current read offset
    void*  m_brstmData;              // 0x98: BRSTM file data
    u32    m_brstmSize;              // 0x9C: BRSTM file size

    // Stream callback
    void (*m_streamCallback)(void*, u32, void*); // 0xA0: Fill callback
    void* m_callbackUserData;        // 0xA4: Callback user data
};

} // namespace snd
} // namespace nw4r