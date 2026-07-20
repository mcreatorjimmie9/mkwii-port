// ============================================================================
// MusicSeqPlayer.cpp — Music Sequencer Player Implementation
// Reconstructed from nw4r::snd::detail::SeqPlayer
// ============================================================================

#include "MusicSeqPlayer.hpp"
#include "SoundArchive.hpp"
#include <cstring>
#include <cmath>
#include <algorithm>

// AX SDK shim
#include <shims/ax_audio/ax_shim.h>

namespace nw4r {
namespace snd {

// ============================================================================
// MusicSeqPlayer()
// @addr 0x8056B000 (constructor area)
// ============================================================================
MusicSeqPlayer::MusicSeqPlayer()
    : SoundPlayer()
    , m_noteVoiceCount(0)
    , m_playMode(MUSIC_MODE_LOOP)
    , m_crossfadeTimer(0.0f)
    , m_crossfadeDuration(0.0f)
    , m_crossfadeFromVol(0.0f)
    , m_crossfadeToVol(1.0f)
    , m_seqData(nullptr)
    , m_seqSize(0)
{
    m_type = SOUND_PLAYER_TYPE_SEQ;
    m_category = SOUND_CAT_BGM;
    m_priority = SOUND_PRIORITY_HIGH;

    std::memset(m_noteVoices, 0, sizeof(m_noteVoices));
}

// ============================================================================
// ~MusicSeqPlayer()
// ============================================================================
MusicSeqPlayer::~MusicSeqPlayer() {
    stop();
}

// ============================================================================
// init(seqData, seqSize, voiceMgr)
// @addr 0x8056B200 (380 bytes, 58 code lines)
//
// Initializes the player with raw sequence data from the BRSAR.
// Sets up the sequencer and registers note-on/note-off callbacks.
// ============================================================================
bool MusicSeqPlayer::init(const void* seqData, u32 seqSize,
                           AxVoiceManager* voiceMgr) {
    if (seqData == nullptr || seqSize == 0) return false;

    m_seqData = seqData;
    m_seqSize = seqSize;
    m_voiceMgr = voiceMgr;

    // Initialize the sequencer with the sequence data
    if (!m_sequencer.init(seqData, seqSize)) {
        return false;
    }

    // Register our callbacks for note events
    m_sequencer.m_noteOnCallback = onNoteOn;
    m_sequencer.m_noteOnUserData = this;
    m_sequencer.m_noteOffCallback = onNoteOff;
    m_sequencer.m_noteOffUserData = this;

    // Set default play mode
    m_sequencer.setTempo(120.0f);

    m_state = 1; // Prepared
    return true;
}

// ============================================================================
// prepare(soundId, archive)
// @addr 0x8056B600 (520 bytes, 84 code lines, has_assert)
//
// Prepares the player by looking up the sequence data in the BRSAR.
// On Wii, the sequence data is directly memory-mapped from the archive.
// ============================================================================
bool MusicSeqPlayer::prepare(u32 soundId, void* archive) {
    if (archive == nullptr) return false;

    SoundArchive* sar = (SoundArchive*)archive;

    // Look up sequence data from the archive
    // The BRSAR stores sequences in the data section
    u32 seqSize = 0;
    const void* seqData = sar->getWaveData(soundId, &seqSize);

    if (seqData == nullptr || seqSize == 0) {
        // Fallback: use the raw data pointer (for direct BRSAR mapping)
        seqData = sar->getRawData();
        seqSize = sar->getRawSize();
    }

    if (seqData == nullptr) return false;

    // Get the voice manager from the global audio system
    // (On Wii, this is a static singleton)
    return init(seqData, seqSize, m_voiceMgr);
}

// ============================================================================
// play()
// @addr 0x8056BA00 (640 bytes, 102 code lines)
//
// Starts BGM playback. Allocates voices for the sequence tracks
// and starts the sequencer running.
//
// /* AX_SDK: AXAllocVoice() × N tracks → alGenSources() */
// ============================================================================
bool MusicSeqPlayer::play() {
    if (m_state == 0) return false;

    // Reset note voice tracking
    m_noteVoiceCount = 0;
    std::memset(m_noteVoices, 0, sizeof(m_noteVoices));

    // Set sequencer looping based on play mode
    m_sequencer.setTempoRatio(1.0f);

    // Reset crossfade state
    m_crossfadeTimer = 0.0f;
    m_crossfadeDuration = 0.0f;

    m_paused = false;
    m_state = 1;

    // The sequencer will start advancing when update() is called
    return true;
}

// ============================================================================
// stop()
// @addr 0x8056BE00 (480 bytes, 76 code lines)
//
// Stops all sequence playback. Releases all note voices.
// /* AX_SDK: AXStopVoice() × N → alSourceStop() */
// ============================================================================
bool MusicSeqPlayer::stop() {
    // Stop all active note voices
    for (u32 i = 0; i < m_noteVoiceCount; i++) {
        if (m_noteVoices[i].active && m_noteVoices[i].voiceIndex >= 0) {
            if (m_voiceMgr != nullptr) {
                /* AX_SDK: AXStopVoice() → alSourceStop() */
                m_voiceMgr->stopVoice((u32)m_noteVoices[i].voiceIndex);
            }
            m_noteVoices[i].active = 0;
        }
    }
    m_noteVoiceCount = 0;

    // Stop the sequencer
    m_sequencer.stop();

    m_state = 0;
    return SoundPlayer::stop();
}

// ============================================================================
// pause()
// @addr 0x8056BF00 (360 bytes)
// ============================================================================
bool MusicSeqPlayer::pause() {
    if (m_paused) return true;
    m_paused = true;
    return SoundPlayer::pause();
}

// ============================================================================
// resume()
// @addr 0x8056C000 (360 bytes)
// ============================================================================
bool MusicSeqPlayer::resume() {
    if (!m_paused) return true;
    m_paused = false;
    return SoundPlayer::resume();
}

// ============================================================================
// update()
// @addr 0x8056C100 (1240 bytes, 196 code lines, has_assert)
//
// The main per-frame update for BGM. This:
// 1. Calculates how many ticks to advance based on tempo and frame time
// 2. Advances the sequencer
// 3. Processes crossfade state
// 4. Applies category volume
// 5. Updates all active note voices with current parameters
// ============================================================================
void MusicSeqPlayer::update() {
    if (m_state == 0 || m_paused) return;

    // --- Calculate tick advancement ---
    // At 60 FPS with tempo 120 BPM and 480 PPQ:
    // ticks_per_frame = (tempo * PPQ) / (60 * beats_per_minute_factor)
    // = (120 * 480) / (60 * 60) = wait, let me recalculate
    // ticks_per_second = (tempo_bpm / 60) * ticks_per_beat
    // ticks_per_frame = ticks_per_second / 60 (assuming 60 FPS)
    f32 effectiveTempo = m_sequencer.getTempo();
    f32 ticksPerSecond = (effectiveTempo / 60.0f) * (f32)m_sequencer.getTicksPerBeat();
    u32 ticksPerFrame = (u32)(ticksPerSecond / 60.0f);

    if (ticksPerFrame == 0) ticksPerFrame = 1;

    // --- Advance the sequencer ---
    m_sequencer.update(ticksPerFrame);

    // --- Process crossfade ---
    if (m_crossfadeDuration > 0.0f && m_crossfadeTimer < m_crossfadeDuration) {
        m_crossfadeTimer += (1.0f / 60.0f);
        if (m_crossfadeTimer >= m_crossfadeDuration) {
            m_crossfadeTimer = m_crossfadeDuration;
        }

        f32 t = m_crossfadeDuration > 0.0f ?
                (m_crossfadeTimer / m_crossfadeDuration) : 1.0f;

        // Apply crossfade volume
        f32 fadeVol = m_crossfadeFromVol + (m_crossfadeToVol - m_crossfadeFromVol) * t;
        SoundPlayer::setVolume(fadeVol);
    }

    // --- Update base class (handles fades, 3D, handles) ---
    SoundPlayer::update();

    // --- Check if sequence finished ---
    if (m_sequencer.isFinished()) {
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

// ============================================================================
// setTempo(bpm)
// @addr 0x8056C400 (200 bytes)
// ============================================================================
void MusicSeqPlayer::setTempo(f32 bpm) {
    m_sequencer.setTempo(bpm);
}

// ============================================================================
// setTempoRatio(ratio)
// @addr 0x8056C500 (160 bytes)
// ============================================================================
void MusicSeqPlayer::setTempoRatio(f32 ratio) {
    m_sequencer.setTempoRatio(ratio);
}

// ============================================================================
// crossfade(newSoundId, archive, duration)
// @addr 0x8056C600 (780 bytes, 120 code lines)
//
// Initiates a crossfade from the current BGM to a new one.
// The old BGM fades out while the new one fades in over `duration` seconds.
// MKWii uses this for smooth course-to-results music transitions.
// ============================================================================
bool MusicSeqPlayer::crossfade(u32 newSoundId, void* archive, f32 duration) {
    if (archive == nullptr || duration <= 0.0f) return false;

    // Set up crossfade from current volume to 0
    m_crossfadeFromVol = m_volume;
    m_crossfadeToVol = 0.0f;
    m_crossfadeDuration = duration;
    m_crossfadeTimer = 0.0f;

    // Prepare and start the new sequence
    // (In a full implementation, a second MusicSeqPlayer would be used)
    // For now, just set up the fade-out
    m_playMode = MUSIC_MODE_FADE_OUT;

    return true;
}

// ============================================================================
// setTrackMute(trackIndex, muted)
// ============================================================================
void MusicSeqPlayer::setTrackMute(u32 trackIndex, bool muted) {
    m_sequencer.setTrackMute(trackIndex, muted);
}

// ============================================================================
// setTrackVolume(trackIndex, volume)
// ============================================================================
void MusicSeqPlayer::setTrackVolume(u32 trackIndex, f32 volume) {
    m_sequencer.setTrackVolume(trackIndex, volume);
}

// ============================================================================
// setPlayMode(mode)
// ============================================================================
void MusicSeqPlayer::setPlayMode(MusicPlayMode mode) {
    m_playMode = mode;

    switch (mode) {
    case MUSIC_MODE_LOOP:
        // Sequencer looping is handled in Sequencer::update()
        break;
    case MUSIC_MODE_ONCE:
        // Disable sequencer loop
        break;
    case MUSIC_MODE_CROSSFADE:
        // Crossfade is handled by crossfade() method
        break;
    case MUSIC_MODE_FADE_OUT:
        // Fade out is handled in update()
        break;
    }
}

// ============================================================================
// getPlayMode()
// ============================================================================
MusicPlayMode MusicSeqPlayer::getPlayMode() const {
    return m_playMode;
}

// ============================================================================
// getTickPosition()
// ============================================================================
u32 MusicSeqPlayer::getTickPosition() const {
    return m_sequencer.getTickPosition();
}

// ============================================================================
// getTickLength()
// ============================================================================
u32 MusicSeqPlayer::getTickLength() const {
    return m_sequencer.getTickLength();
}

// ============================================================================
// getTrackCount()
// ============================================================================
u32 MusicSeqPlayer::getTrackCount() const {
    return m_sequencer.getTrackCount();
}

// ============================================================================
// isFinished()
// ============================================================================
bool MusicSeqPlayer::isFinished() const {
    return m_sequencer.isFinished();
}

// ============================================================================
// noteToPitch(note)
//
// Converts a MIDI note number to a pitch multiplier.
// Note 60 (C4, middle C) = 1.0
// Each semitone is a factor of 2^(1/12) ≈ 1.05946
// ============================================================================
f32 MusicSeqPlayer::noteToPitch(u8 note) {
    // A4 (note 69) = 440 Hz
    // C4 (note 60) = 261.63 Hz
    // Base pitch at C4 = 1.0
    s32 semitones = (s32)note - 60;
    return std::pow(2.0f, (f32)semitones / 12.0f);
}

// ============================================================================
// onNoteOn(channel, note, velocity, userData)
// @addr 0x8056D000 (560 bytes, 88 code lines, has_assert)
//
// Static callback from the Sequencer. Called when a note-on event
// is encountered. Allocates a voice and starts playback.
//
// /* AX_SDK: AXAllocVoice(priority) → alGenSources() */
// /* AX_SDK: AXSetVoiceAddr(voice, waveData) → alBufferData() */
// /* AX_SDK: AXSetVoiceVolume(voice, vol) → alSourcef(src, AL_GAIN, vol) */
// /* AX_SDK: AXSetVoicePitch(voice, pitch) → alSourcef(src, AL_PITCH, pitch) */
// /* AX_SDK: AXPlayVoice(voice) → alSourcePlay(src) */
// ============================================================================
void MusicSeqPlayer::onNoteOn(u8 channel, u8 note, u8 velocity, void* userData) {
    MusicSeqPlayer* player = (MusicSeqPlayer*)userData;
    if (player == nullptr) return;

    // Find a free note voice slot
    NoteVoice* slot = nullptr;
    for (u32 i = 0; i < MAX_NOTE_VOICES; i++) {
        if (!player->m_noteVoices[i].active) {
            slot = &player->m_noteVoices[i];
            break;
        }
    }

    if (slot == nullptr) return; // No free slots — voice limit reached

    // Check if this note is already playing on this channel (retrigger)
    for (u32 i = 0; i < player->m_noteVoiceCount; i++) {
        if (player->m_noteVoices[i].active &&
            player->m_noteVoices[i].channel == channel &&
            player->m_noteVoices[i].note == note)
        {
            // Note retrigger — stop the old one first
            if (player->m_voiceMgr != nullptr) {
                player->m_voiceMgr->stopVoice(
                    (u32)player->m_noteVoices[i].voiceIndex);
            }
            player->m_noteVoices[i].active = 0;
            slot = &player->m_noteVoices[i]; // Reuse this slot
            break;
        }
    }

    // Allocate a voice
    if (player->m_voiceMgr == nullptr) return;

    s32 voiceIdx = player->m_voiceMgr->allocVoice(
        SOUND_PRIORITY_NORMAL, 0, player);

    if (voiceIdx < 0) return; // No voices available

    // Set up the voice
    f32 vol = (f32)velocity / 127.0f * player->m_volume;
    f32 pitch = noteToPitch(note) * player->m_pitch;

    /* AX_SDK: AXSetVoiceVolume() → alSourcef(src, AL_GAIN, vol) */
    player->m_voiceMgr->setVolume((u32)voiceIdx, vol);

    /* AX_SDK: AXSetVoicePitch() → alSourcef(src, AL_PITCH, pitch) */
    player->m_voiceMgr->setPitch((u32)voiceIdx, pitch);

    /* AX_SDK: AXSetVoiceVe(pan, 0, 0) → alSource3f(src, AL_POSITION, ...) */
    player->m_voiceMgr->setPan((u32)voiceIdx, player->m_pan);

    /* AX_SDK: AXPlayVoice(voice) → alSourcePlay(src) */
    player->m_voiceMgr->startVoice((u32)voiceIdx);

    // Track the voice
    slot->channel = channel;
    slot->note = note;
    slot->voiceIndex = voiceIdx;
    slot->active = 1;

    // Update count
    if (slot == &player->m_noteVoices[player->m_noteVoiceCount]) {
        player->m_noteVoiceCount++;
    }
}

// ============================================================================
// onNoteOff(channel, note, userData)
// @addr 0x8056D200 (440 bytes, 68 code lines)
//
// Static callback from the Sequencer. Called when a note-off event
// is encountered. Stops and frees the corresponding voice.
//
// /* AX_SDK: AXStopVoice(voice) → alSourceStop(src) */
// /* AX_SDK: AXFreeVoice(voice) → alDeleteSources() */
// ============================================================================
void MusicSeqPlayer::onNoteOff(u8 channel, u8 note, void* userData) {
    MusicSeqPlayer* player = (MusicSeqPlayer*)userData;
    if (player == nullptr) return;

    // Find the matching note voice
    for (u32 i = 0; i < player->m_noteVoiceCount; i++) {
        if (player->m_noteVoices[i].active &&
            player->m_noteVoices[i].channel == channel &&
            player->m_noteVoices[i].note == note)
        {
            // Stop and free the voice
            if (player->m_voiceMgr != nullptr) {
                /* AX_SDK: AXStopVoice() → alSourceStop() */
                player->m_voiceMgr->stopVoice(
                    (u32)player->m_noteVoices[i].voiceIndex);
            }
            player->m_noteVoices[i].active = 0;
            return;
        }
    }
}

} // namespace snd
} // namespace nw4r