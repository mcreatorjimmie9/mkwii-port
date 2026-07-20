#pragma once
// ============================================================================
// MusicSeqPlayer.hpp — Music Sequencer Player (BGM, Fanfare, Jingle)
// Reconstructed from nw4r::snd::detail::SeqPlayer
//
// MusicSeqPlayer handles playback of sequenced music from the BRSAR.
// It wraps the Sequencer and manages voice allocation for the
// multi-track sequence. MKWii uses this for:
//   - Course BGM (looping)
//   - Race fanfares (countdown, lap, finish)
//   - Menu jingles
//   - Channel (online lobby) music
//
// Key functions reconstructed:
//   0x8056B000: MusicSeqPlayer::MusicSeqPlayer()  — Constructor
//   0x8056B200: MusicSeqPlayer::init()           — Initialize with sequence
//   0x8056B600: MusicSeqPlayer::prepare()        — Prepare sequence for playback
//   0x8056BA00: MusicSeqPlayer::play()           — Start BGM playback
//   0x8056BE00: MusicSeqPlayer::stop()           — Stop BGM
//   0x8056C000: MusicSeqPlayer::update()         — Per-frame update
//   0x8056C400: MusicSeqPlayer::setTempo()       — Set BGM tempo
//   0x8056C600: MusicSeqPlayer::crossfade()      — Crossfade to new BGM
//   0x8056D000: MusicSeqPlayer::onNoteOn()       — Sequencer note-on callback
//   0x8056D200: MusicSeqPlayer::onNoteOff()      — Sequencer note-off callback
// ============================================================================

#include <rk_types.h>
#include "SoundTypes.hpp"
#include "SoundPlayer.hpp"
#include "Sequencer.hpp"

namespace nw4r {
namespace snd {

// ============================================================================
// Music Playback Mode — How the sequence should behave
// ============================================================================
enum MusicPlayMode {
    MUSIC_MODE_ONCE       = 0,  // Play once, stop at end
    MUSIC_MODE_LOOP       = 1,  // Loop continuously
    MUSIC_MODE_CROSSFADE  = 2,  // Crossfade to new track
    MUSIC_MODE_FADE_OUT   = 3   // Fade out and stop
};

// ============================================================================
// MusicSeqPlayer — Plays sequenced music (BGM, fanfares, jingles)
//
// This is the primary BGM player for MKWii. It wraps the low-level
// Sequencer and adds voice management, crossfading, and category control.
// Inherits from SoundPlayer for volume/pitch/pan/fade support.
//
// On Wii, the Sequencer callback directly calls AXAllocVoice/AXPlayVoice.
// On PC, it maps to the AxVoiceManager.
// ============================================================================
class MusicSeqPlayer : public SoundPlayer {
public:
    MusicSeqPlayer();
    virtual ~MusicSeqPlayer() override;

    // --- Lifecycle ---
    // @addr 0x8056B200 (380 bytes, 58 code lines)
    // Initializes the player with a sequence from the BRSAR.
    // seqData: pointer to the sequence data block in the archive.
    // seqSize: size of the sequence data.
    bool init(const void* seqData, u32 seqSize, AxVoiceManager* voiceMgr);

    // @addr 0x8056B600 (520 bytes, 84 code lines, has_assert)
    // Prepares the player with a sound ID and archive reference.
    // Looks up the sequence data in the BRSAR and initializes the sequencer.
    virtual bool prepare(u32 soundId, void* archive) override;

    // --- Playback Control ---
    // @addr 0x8056BA00 (640 bytes, 102 code lines)
    // Starts BGM playback. If already playing, stops and restarts.
    // /* AX_SDK: AXAllocVoice() × N tracks → alGenSources() */
    virtual bool play() override;

    // @addr 0x8056BE00 (480 bytes, 76 code lines)
    // Stops BGM playback. Fades out over the given duration if > 0.
    // /* AX_SDK: AXStopVoice() × N → alSourceStop() */
    virtual bool stop() override;

    // @addr 0x8056BF00 (360 bytes)
    virtual bool pause() override;

    // @addr 0x8056C000 (360 bytes)
    virtual bool resume() override;

    // --- Per-Frame Update ---
    // @addr 0x8056C100 (1240 bytes, 196 code lines, has_assert)
    // Updates the sequencer, processes crossfades, applies category volumes.
    // This is the main per-frame function for BGM playback.
    virtual void update() override;

    // --- Parameter Control ---
    // @addr 0x8056C400 (200 bytes)
    // Sets the BGM tempo in BPM.
    void setTempo(f32 bpm);

    // @addr 0x8056C500 (160 bytes)
    // Sets the tempo ratio for speed adjustment.
    void setTempoRatio(f32 ratio);

    // @addr 0x8056C600 (780 bytes, 120 code lines)
    // Crossfades to a new sequence over the given duration.
    // The old BGM fades out while the new one fades in.
    bool crossfade(u32 newSoundId, void* archive, f32 duration);

    // --- Track Control ---
    // Mutes or unmutes a specific track in the sequence.
    void setTrackMute(u32 trackIndex, bool muted);

    // Sets the volume for a specific track.
    void setTrackVolume(u32 trackIndex, f32 volume);

    // --- Playback Mode ---
    void setPlayMode(MusicPlayMode mode);
    MusicPlayMode getPlayMode() const;

    // --- Queries ---
    // Returns the current tick position in the sequence.
    u32 getTickPosition() const;

    // Returns the total tick length.
    u32 getTickLength() const;

    // Returns the number of tracks.
    u32 getTrackCount() const;

    // Returns true if the BGM has finished (non-looping mode).
    bool isFinished() const;

private:
    // --- Sequencer Callbacks ---
    // @addr 0x8056D000 (560 bytes, 88 code lines, has_assert)
    // Called by the Sequencer when a note-on event is encountered.
    // Allocates a voice and starts playback of the instrument sample.
    // /* AX_SDK: AXAllocVoice() + AXSetVoiceAddr() + AXPlayVoice() */
    static void onNoteOn(u8 channel, u8 note, u8 velocity, void* userData);

    // @addr 0x8056D200 (440 bytes, 68 code lines)
    // Called by the Sequencer when a note-off event is encountered.
    // Stops and frees the corresponding voice.
    // /* AX_SDK: AXStopVoice() + AXFreeVoice() */
    static void onNoteOff(u8 channel, u8 note, void* userData);

    // --- Voice tracking ---
    // Tracks which voices are allocated per channel/note.
    struct NoteVoice {
        u8  channel;
        u8  note;
        s32 voiceIndex;
        u8  active;
        u8  _pad[3];
    };

    // Converts a MIDI note number to a frequency ratio for pitch.
    // Note 60 (C4) = 1.0, each semitone is a factor of 2^(1/12).
    static f32 noteToPitch(u8 note);

    // Sequencer
    Sequencer m_sequencer;         // 0x80: Embedded sequencer

    // Voice tracking for note-on/note-off pairing
    static const u32 MAX_NOTE_VOICES = 64;
    NoteVoice m_noteVoices[MAX_NOTE_VOICES]; // Voice tracking table
    u32 m_noteVoiceCount;          // Active note voices

    // Playback mode
    MusicPlayMode m_playMode;      // 0x180: How the BGM plays

    // Crossfade state
    f32 m_crossfadeTimer;          // 0x184: Crossfade timer
    f32 m_crossfadeDuration;       // 0x188: Crossfade duration
    f32 m_crossfadeFromVol;        // 0x18C: Old volume (fading out)
    f32 m_crossfadeToVol;          // 0x190: New volume (fading in)

    // Sequence data reference
    const void* m_seqData;         // 0x194: Pointer to sequence data
    u32 m_seqSize;                 // 0x198: Sequence data size
};

} // namespace snd
} // namespace nw4r