#pragma once
// ============================================================================
// Sequencer.hpp — Note/Event Sequencer for BGM
// Reconstructed from nw4r::snd::detail::Sequencer
//
// The Sequencer processes MIDI-like sequence data for BGM playback.
// It reads note-on, note-off, tempo change, volume, and program change
// events from the BRSAR sequence data and drives the AxVoiceManager.
//
// Key functions reconstructed:
//   0x80568000: Sequencer::Sequencer()           — Constructor
//   0x80568200: Sequencer::init()                — Initialize with sequence data
//   0x80568500: Sequencer::update()              — Per-frame tick (advance cursor)
//   0x80568A00: Sequencer::setTempo()            — Set playback tempo
//   0x80568C00: Sequencer::seek()                — Seek to tick position
//   0x80569000: Sequencer::stop()                — Stop sequencer
//   0x80569200: Sequencer::getTickPosition()     — Get current tick
//   0x80569400: Sequencer::getTempo()            — Get current tempo
//   0x80569600: Sequencer::isFinished()          — Check if sequence ended
//   0x80569800: Sequencer::processEvent()        — Process one sequence event
//   0x8056A000: Sequencer::handleNoteOn()        — Handle note-on event
//   0x8056A200: Sequencer::handleNoteOff()       — Handle note-off event
// ============================================================================

#include <rk_types.h>
#include "SoundTypes.hpp"

namespace nw4r {
namespace snd {

// ============================================================================
// Sequence Event Types (from BRSAR SEQ format)
// ============================================================================
enum SeqEventType {
    SEQ_EVENT_NOTE_OFF      = 0x00,
    SEQ_EVENT_NOTE_ON       = 0x10,
    SEQ_EVENT_PROGRAM_CHANGE = 0x20,
    SEQ_EVENT_VOLUME        = 0x30,
    SEQ_EVENT_PAN           = 0x40,
    SEQ_EVENT_PITCH_BEND    = 0x50,
    SEQ_EVENT_TEMPO         = 0x60,
    SEQ_EVENT_LOOP_START    = 0x70,
    SEQ_EVENT_LOOP_END      = 0x80,
    SEQ_EVENT_END_OF_TRACK  = 0xFF
};

// ============================================================================
// Sequence Event — One parsed event from the sequence data
// ============================================================================
struct SeqEvent {
    u32 tick;              // Tick position in the sequence
    SeqEventType type;     // Event type
    u8  channel;           // MIDI channel (0-15)
    u8  note;              // Note number (0-127)
    u8  velocity;          // Velocity (0-127)
    u16 value;             // Generic value (program, volume, etc.)
    u32 data;              // Extended data
};

// ============================================================================
// Track State — Per-track playback state for multi-track sequences
// ============================================================================
struct SeqTrackState {
    u32 cursorOffset;      // Current byte offset in track data
    u32 currentTick;       // Current tick position
    u32 nextEventTick;     // Tick of the next event to process
    u8  channel;           // MIDI channel for this track
    u8  active;            // Track is active
    u8  muted;             // Track is muted
    u8  _pad;
    u32 loopStartTick;     // Loop start tick (for loop points)
    u32 loopEndTick;       // Loop end tick
    u32 loopCount;         // Remaining loop iterations (-1 = infinite)
};

// ============================================================================
// Sequencer — Processes sequence events for BGM playback
//
// MKWii sequences are stored in the BRSAR as multi-track MIDI-like data.
// The sequencer advances through ticks, firing events at the right time.
// ============================================================================
class Sequencer {
public:
    Sequencer();
    ~Sequencer();

    // --- Initialization ---
    // @addr 0x80568200 (456 bytes, 72 code lines)
    // Initializes the sequencer with raw sequence data from the BRSAR.
    // trackData: pointer to the beginning of the sequence data block.
    // dataSize:  size of the sequence data in bytes.
    bool init(const void* trackData, u32 dataSize);

    // @addr 0x80568400 (240 bytes)
    // Shuts down the sequencer and releases track state.
    void shutdown();

    // --- Playback Control ---
    // @addr 0x80568500 (1120 bytes, 168 code lines, has_assert)
    // Advances the sequencer by the given number of delta ticks.
    // Processes all events that fall within the advanced range.
    void update(u32 deltaTicks);

    // @addr 0x80569000 (320 bytes)
    // Stops all tracks and resets cursor positions.
    void stop();

    // @addr 0x80568C00 (416 bytes)
    // Seeks to a specific tick position in the sequence.
    // Resets all track cursors and processes events up to the target tick.
    bool seek(u32 tickPosition);

    // --- Parameter Setting ---
    // @addr 0x80568A00 (200 bytes)
    // Sets the playback tempo in BPM (beats per minute).
    // Default is 120 BPM. Range: 20-300.
    void setTempo(f32 bpm);

    // @addr 0x80568A80 (160 bytes)
    // Sets the tempo ratio (1.0 = normal, 0.5 = half speed, 2.0 = double).
    void setTempoRatio(f32 ratio);

    // --- Track Control ---
    // Mutes or unmutes a specific track.
    void setTrackMute(u32 trackIndex, bool muted);

    // Sets the volume for a specific track (0.0 - 1.0).
    void setTrackVolume(u32 trackIndex, f32 volume);

    // --- Queries ---
    // @addr 0x80569200 (68 bytes)
    // Returns the current tick position.
    u32 getTickPosition() const;

    // @addr 0x80569400 (68 bytes)
    // Returns the current tempo in BPM.
    f32 getTempo() const;

    // @addr 0x80569600 (92 bytes)
    // Returns true if the sequence has reached the end.
    bool isFinished() const;

    // @addr 0x80569680 (68 bytes)
    // Returns the total tick length of the sequence.
    u32 getTickLength() const;

    // @addr 0x80569700 (68 bytes)
    // Returns the number of tracks in this sequence.
    u32 getTrackCount() const;

    // @addr 0x80569780 (68 bytes)
    // Returns ticks per quarter note (PPQ).
    u32 getTicksPerBeat() const { return m_ticksPerBeat; }

    // --- Callbacks ---
    // Callback for note-on events. Called when the sequencer
    // encounters a note-on event. The voice manager uses this
    // to allocate voices and start playback.
    // On Wii: directly calls AXAllocVoice + AXPlayVoice.
    // /* AX_SDK: AXAllocVoice() → alGenSources() */
    void (*m_noteOnCallback)(u8 channel, u8 note, u8 velocity, void* userData);
    void* m_noteOnUserData;

    // Callback for note-off events.
    // /* AX_SDK: AXStopVoice() → alSourceStop() */
    void (*m_noteOffCallback)(u8 channel, u8 note, void* userData);
    void* m_noteOffUserData;

private:
    // --- Internal event processing ---
    // @addr 0x80569800 (680 bytes, 112 code lines)
    // Reads and processes one event from the current track data.
    bool processEvent(SeqTrackState& track);

    // @addr 0x8056A000 (840 bytes, 140 code lines, has_assert)
    // Handles a note-on event: allocates a voice and starts playback.
    // /* AX_SDK: AXAllocVoice() + AXSetVoiceAddr() + AXPlayVoice() */
    void handleNoteOn(const SeqEvent& event);

    // @addr 0x8056A200 (520 bytes, 88 code lines)
    // Handles a note-off event: stops the corresponding voice.
    // /* AX_SDK: AXStopVoice() + AXFreeVoice() */
    void handleNoteOff(const SeqEvent& event);

    // @addr 0x8056A400 (380 bytes, 60 code lines)
    // Handles a program change event (instrument switch).
    void handleProgramChange(const SeqEvent& event);

    // @addr 0x8056A600 (280 bytes, 44 code lines)
    // Handles a tempo change event.
    void handleTempoChange(const SeqEvent& event);

    // @addr 0x8056A800 (200 bytes)
    // Reads a variable-length quantity from the sequence data.
    u32 readVariableLength(const u8*& ptr);

    // @addr 0x8056A900 (160 bytes)
    // Reads a 16-bit big-endian value.
    u16 readBE16(const u8* ptr);

    // @addr 0x8056AA00 (160 bytes)
    // Reads a 32-bit big-endian value.
    u32 readBE32(const u8* ptr);

    // @addr 0x8056AA80 (120 bytes)
    // Reads a 24-bit big-endian value (for tempo events).
    u32 readBE24(const u8*& ptr);

    // Sequence data
    const u8* m_data;              // 0x00: Pointer to sequence data
    u32 m_dataSize;                // 0x04: Size of sequence data

    // Playback state
    f32 m_tempo;                   // 0x08: Current tempo (BPM)
    f32 m_tempoRatio;              // 0x0C: Tempo ratio multiplier
    u32 m_tickPosition;            // 0x10: Current global tick
    u32 m_tickLength;              // 0x14: Total tick length
    u32 m_ticksPerBeat;            // 0x18: Ticks per quarter note (PPQ)
    u8  m_state;                   // 0x1C: 0=stopped, 1=playing, 2=paused
    u8  m_looping;                 // 0x1D: Loop enabled
    u8  _pad[2];                   // 0x1E: Padding

    // Track state (MKWii sequences typically have 8-16 tracks)
    static const u32 MAX_TRACKS = 16;
    SeqTrackState m_tracks[MAX_TRACKS]; // 0x20: Per-track state
    u32 m_trackCount;             // 0x120: Number of active tracks
    f32 m_trackVolumes[MAX_TRACKS]; // 0x124: Per-track volumes
};

} // namespace snd
} // namespace nw4r