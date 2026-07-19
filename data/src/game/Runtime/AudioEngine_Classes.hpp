#pragma once
// ============================================================================
// AudioEngine_Classes.hpp — NW4R / EGG Audio Engine Class Hierarchy
// Address range: 0x80580000 - 0x805a0000 (264 functions)
//
// Hierarchy:
//   nw4r::audio::SoundPlayer (base)
//     +-- nw4r::audio::WavePlayer   — wave data playback
//     +-- nw4r::audio::SeqPlayer    — MIDI sequence playback
//     +-- nw4r::audio::StreamPlayer — streaming audio from disc
//   nw4r::audio::SoundHandle        — reference to a playing sound instance
//   nw4r::audio::SoundCategory      — volume/priority grouping (BGM, SFX, etc.)
//   nw4r::audio::SoundArchive       — loaded BRSAR sound archive
//   nw4r::audio::DSPManager         — DSP hardware interface
//   nw4r::audio::AudioSystem        — singleton audio manager (top-level)
//
// Categorization: GENESIS Phase 8 (Runtime Module — AudioEngine Classes)
// ============================================================================
#include "rk_types.h"

namespace nw4r {
namespace audio {

// Forward declarations
class SoundPlayer;
class WavePlayer;
class SeqPlayer;
class StreamPlayer;
class SoundHandle;
class SoundCategory;
class SoundArchive;
class DSPManager;
class AudioSystem;

// ============================================================================
// SoundPlayer — Base class for all sound playback
// ============================================================================
// Base class providing common sound playback controls. All player types
// (wave, sequence, stream) inherit from this.
//
// Layout (estimated from function analysis):
//   0x00  vtable
//   0x04  mState         — playback state (0=stopped, 1=playing, 2=paused)
//   0x08  mVolume        — master volume (0.0 – 1.0)
//   0x0C  mPitch         — pitch multiplier (1.0 = normal)
//   0x10  mPan           — stereo pan (-1.0 – 1.0)
//   0x14  mPriority      — playback priority
//   0x18  mSoundId       — sound ID from archive
//   0x1C  mHandle        — associated SoundHandle*
//   0x20  mCategory      — owning SoundCategory*
//   0x24  mFlags         — player state flags
// Total size: ~0x28
// ============================================================================
class SoundPlayer {
public:
    enum State {
        STATE_STOPPED = 0,
        STATE_PLAYING = 1,
        STATE_PAUSED  = 2,
        STATE_FADEOUT = 3,
    };

    enum Flag {
        FLAG_LOOPING    = BIT(0),
        FLAG_AUTO_STOP  = BIT(1),
        FLAG_3D_POSITION= BIT(2),
        FLAG_PRIORITY   = BIT(3),
    };

    // --- Virtual methods (vtable) ---
    virtual ~SoundPlayer() {}

    // @addr 0x805842d4 — base player tick/update
    virtual void update() = 0;

    // @addr 0x80584924 — start playback
    virtual bool start(u32 soundId) = 0;

    // @addr 0x805857c0 — stop playback
    virtual void stop() = 0;

    // @addr 0x8058521c — pause playback
    virtual void pause() = 0;

    // @addr 0x80585284 — resume from pause
    virtual void resume() = 0;

    // --- Non-virtual interface ---
    // @addr 0x80583970 — set player active/inactive
    void setActive(bool active);

    // @addr 0x8058399c — reset player state
    void resetState();

    // @addr 0x80583aac — set volume
    void setVolume(f32 volume);

    // @addr 0x8058550c — set pitch
    void setPitch(f32 pitch);

    // @addr 0x80586908 — set pan
    void setPan(f32 pan);

    // @addr 0x80586b34 — set priority
    u32 setPriority(u32 priority, s32 categoryIdx);

    // @addr 0x80586bd4 — set looping
    void setLooping(bool loop);

    // --- Accessors ---
    State getState() const { return static_cast<State>(mState); }
    f32 getVolume() const  { return mVolume; }
    f32 getPitch() const   { return mPitch; }
    f32 getPan() const     { return mPan; }
    u32  getSoundId() const { return mSoundId; }
    bool isPlaying() const { return mState == STATE_PLAYING; }

    // --- Member data ---
    u32           mState;       // 0x04
    f32           mVolume;      // 0x08
    f32           mPitch;       // 0x0C
    f32           mPan;         // 0x10
    u32           mPriority;    // 0x14
    u32           mSoundId;     // 0x18
    SoundHandle*  mHandle;      // 0x1C
    SoundCategory* mCategory;   // 0x20
    u32           mFlags;       // 0x24

protected:
    SoundPlayer();
};

// ============================================================================
// WavePlayer — Plays PCM wave data from memory
// ============================================================================
// Handles playback of pre-loaded wave sound effects (SFX).
// Used for short sound effects loaded from the sound archive.
//
// Extends SoundPlayer with:
//   0x28  mWaveData      — pointer to wave data buffer
//   0x2C  mWaveSize      — size of wave data in bytes
//   0x30  mSampleRate    — playback sample rate
//   0x34  mChannels      — channel count (1=mono, 2=stereo)
//   0x38  mBitDepth      — bits per sample (8 or 16)
//   0x3C  mLoopStart     — loop start sample offset
//   0x40  mLoopEnd       — loop end sample offset
//   0x44  mCurrentSample — current playback position
// Total size: ~0x48
// ============================================================================
class WavePlayer : public SoundPlayer {
public:
    // @addr 0x80588b88 — constructor
    WavePlayer();

    virtual ~WavePlayer() {}

    // @addr 0x805898c8 — update wave playback
    virtual void update() override;

    // @addr 0x8058a350 — start wave playback
    virtual bool start(u32 soundId) override;

    // @addr 0x8058a52c — stop wave playback
    virtual void stop() override;

    // @addr 0x8058a80c — pause wave
    virtual void pause() override;

    // @addr 0x8058a958 — resume wave
    virtual void resume() override;

    // @addr 0x8058ad2c — set wave data buffer
    void setWaveData(void* data, u32 size);

    // @addr 0x8058afac — set sample rate
    void setSampleRate(u32 rate);

    // @addr 0x8058b360 — set loop points
    void setLoopPoints(u32 start, u32 end);

    // @addr 0x8058b710 — get current sample position
    u32 getCurrentSample() const;

    // @addr 0x8058bc58 — get total sample count
    u32 getTotalSamples() const;

    // --- Member data ---
    void* mWaveData;      // 0x28
    u32   mWaveSize;      // 0x2C
    u32   mSampleRate;    // 0x30
    u32   mChannels;      // 0x34
    u32   mBitDepth;      // 0x38
    u32   mLoopStart;     // 0x3C
    u32   mLoopEnd;       // 0x40
    u32   mCurrentSample; // 0x44
};

// ============================================================================
// SeqPlayer — Plays MIDI sequence data
// ============================================================================
// Handles playback of MIDI sequences for background music.
// MKWii uses the NW4R sequencer for BGM and orchestrated music.
//
// Extends SoundPlayer with:
//   0x28  mSeqData       — pointer to sequence data
//   0x2C  mSeqSize       — sequence data size
//   0x30  mTempo         — BPM tempo
//   0x34  mTrackCount    — number of MIDI tracks
//   0x38  mTickPosition  — current tick in sequence
//   0x3C  mTickLength    — total ticks in sequence
//   0x40  mFadeVolume    — fade target volume
//   0x44  mFadeSpeed     — fade speed per frame
// Total size: ~0x48
// ============================================================================
class SeqPlayer : public SoundPlayer {
public:
    // @addr 0x8058bdd4 — constructor
    SeqPlayer();

    virtual ~SeqPlayer() {}

    // @addr 0x8058bf04 — update sequence playback
    virtual void update() override;

    // @addr 0x8058c260 — start sequence
    virtual bool start(u32 soundId) override;

    // @addr 0x8058c408 — stop sequence
    virtual void stop() override;

    // @addr 0x8058cb30 — pause sequence
    virtual void pause() override;

    // @addr 0x8058ccd4 — resume sequence
    virtual void resume() override;

    // @addr 0x8058d7bc — set tempo
    void setTempo(f32 bpm);

    // @addr 0x8058df1c — seek to tick position
    void seekToTick(u32 tick);

    // @addr 0x8058e12c — get current tick
    u32 getCurrentTick() const;

    // @addr 0x8058e4c4 — get total ticks
    u32 getTotalTicks() const;

    // @addr 0x8058cd38 — check if sequence has ended
    u8 isFinished() const;

    // @addr 0x8058d754 — check if sequence is fading
    bool isFading() const;

    // --- Member data ---
    void* mSeqData;       // 0x28
    u32   mSeqSize;       // 0x2C
    f32   mTempo;         // 0x30
    u32   mTrackCount;    // 0x34
    u32   mTickPosition;  // 0x38
    u32   mTickLength;    // 0x3C
    f32   mFadeVolume;    // 0x40
    f32   mFadeSpeed;     // 0x44
};

// ============================================================================
// StreamPlayer — Streams audio from disc (BRSTM/BRSSTM)
// ============================================================================
// Handles streaming audio playback for longer music tracks.
// MKWii uses this for course BGM and video audio.
//
// Extends SoundPlayer with:
//   0x28  mStreamHandle  — OS file stream handle
//   0x2C  mBufferSize    — streaming buffer size
//   0x30  mReadOffset    — current read offset in file
//   0x34  mFileSize      — total file size
//   0x38  mBuffer[2]     — double-buffer pointers
//   0x40  mActiveBuf     — which buffer is currently playing (0 or 1)
//   0x44  mBytesStreamed — total bytes streamed
//   0x48  mLoopPoint     — stream loop offset
// Total size: ~0x4C
// ============================================================================
class StreamPlayer : public SoundPlayer {
public:
    // @addr 0x8058e774 — constructor
    StreamPlayer();

    virtual ~StreamPlayer() {}

    // @addr 0x8058f034 — update streaming (refill buffers)
    virtual void update() override;

    // @addr 0x8058f2a8 — start streaming
    virtual bool start(u32 soundId) override;

    // @addr 0x8058f530 — stop streaming
    virtual void stop() override;

    // @addr 0x8058f908 — pause streaming
    virtual void pause() override;

    // @addr 0x8058fefc — resume streaming
    virtual void resume() override;

    // @addr 0x8058ff88 — set buffer size
    void setBufferSize(u32 size);

    // @addr 0x80590040 — set stream loop point
    void setLoopPoint(u32 offset);

    // @addr 0x8058f034 — get bytes streamed
    u32 getBytesStreamed() const;

    // --- Member data ---
    void* mStreamHandle;  // 0x28
    u32   mBufferSize;    // 0x2C
    u32   mReadOffset;    // 0x30
    u32   mFileSize;      // 0x34
    void* mBuffer[2];     // 0x38
    u32   mActiveBuf;     // 0x40
    u32   mBytesStreamed; // 0x44
    u32   mLoopPoint;     // 0x48
};

// ============================================================================
// SoundHandle — Handle to a playing sound instance
// ============================================================================
// Lightweight reference object that clients use to control a playing sound.
// Internally maps to a SoundPlayer via the audio system's player pool.
//
// Layout:
//   0x00  mPlayerId      — index into player pool
//   0x04  mSoundId       — sound ID that was started
//   0x08  mPriority      — priority at start time
//   0x0C  mCategoryIdx   — category index
//   0x10  mAllocated     — whether this handle is in use
// Total size: ~0x14
// ============================================================================
class SoundHandle {
public:
    // @addr 0x80590764 — default constructor
    SoundHandle();

    // @addr 0x80590bf4 — initialize handle with sound info
    void init(u32 playerId, u32 soundId, u32 priority, u32 categoryIdx);

    // @addr 0x80591278 — detach handle from player
    void detach();

    // @addr 0x80591420 — set external priority
    void setExternalPriority(u16 priority);

    // @addr 0x80591438 — get current state
    bool isValid() const;

    // @addr 0x80591550 — get player pointer
    SoundPlayer* getPlayer() const;

    // --- Member data ---
    u32  mPlayerId;     // 0x00
    u32  mSoundId;      // 0x04
    u32  mPriority;     // 0x08
    u32  mCategoryIdx;  // 0x0C
    u32  mAllocated;    // 0x10
};

// ============================================================================
// SoundCategory — Volume/priority group for sounds
// ============================================================================
// MKWii uses sound categories to group sounds by type and control
// their volumes independently. Common categories:
//   0 = BGM, 1 = SFX, 2 = Stream, etc.
//
// Layout:
//   0x00  mId            — category index
//   0x04  mVolume         — master volume (0.0 – 1.0)
//   0x08  mTargetVolume   — volume being faded to
//   0x0C  mFadeSpeed      — volume fade speed
//   0x10  mPlayerCount    — active player count in this category
//   0x14  mMaxPlayers     — max concurrent players
//   0x18  mPaused         — is category paused
//   0x1C  mMuted          — is category muted
//   0x20  mPlayers[16]    — pointers to active SoundPlayers
// Total size: ~0x60
// ============================================================================
class SoundCategory {
public:
    enum CategoryId {
        CAT_BGM     = 0,
        CAT_SFX     = 1,
        CAT_STREAM  = 2,
        CAT_VOICE   = 3,
        CAT_UI      = 4,
        CAT_COUNT   = 5,
    };

    static const u32 MAX_PLAYERS = 16;

    // @addr 0x805915f0 — constructor
    SoundCategory();

    // @addr 0x80591780 — set category volume
    void setVolume(f32 volume);

    // @addr 0x805918e0 — fade volume to target
    void fadeVolume(f32 target, f32 speed);

    // @addr 0x80591934 — pause all sounds in category
    void pauseAll();

    // @addr 0x80591988 — resume all sounds in category
    void resumeAll();

    // @addr 0x80591a64 — stop all sounds in category
    void stopAll();

    // @addr 0x80591ac8 — mute/unmute category
    void setMuted(bool muted);

    // @addr 0x80591bf0 — register a player
    void registerPlayer(SoundPlayer* player);

    // @addr 0x80591ccc — unregister a player
    void unregisterPlayer(SoundPlayer* player);

    // @addr 0x80591d30 — update category (process fades)
    void update();

    // @addr 0x80591e0c — get active player count
    u32 getActivePlayerCount() const;

    // @addr 0x80591e70 — check if category is full
    bool isFull() const;

    // --- Member data ---
    u32           mId;            // 0x00
    f32           mVolume;        // 0x04
    f32           mTargetVolume;  // 0x08
    f32           mFadeSpeed;     // 0x0C
    u32           mPlayerCount;   // 0x10
    u32           mMaxPlayers;    // 0x14
    u32           mPaused;        // 0x18
    u32           mMuted;         // 0x1C
    SoundPlayer*  mPlayers[MAX_PLAYERS]; // 0x20
};

// ============================================================================
// SoundArchive — Manages loaded BRSAR sound archive
// ============================================================================
// The BRSAR (Binary Revolution Sound Archive) contains all game sounds.
// This class manages loading and accessing sounds from the archive.
//
// Layout:
//   0x00  vtable
//   0x04  mData          — pointer to archive data
//   0x08  mDataSize      — archive size in bytes
//   0x0C  mWaveBase      — offset to wave data section
//   0x10  mSeqBase       — offset to sequence data section
//   0x14  mStreamBase    — offset to stream info section
//   0x18  mEntryCount    — total sound entries
//   0x1C  mInfoTable     — pointer to sound info table
//   0x20  mLoaded        — archive is loaded
// Total size: ~0x24
// ============================================================================
class SoundArchive {
public:
    // @addr 0x8059203c — constructor
    SoundArchive();

    virtual ~SoundArchive() {}

    // @addr 0x805920a0 — load archive from file
    bool load(const char* path);

    // @addr 0x80592204 — load archive from memory
    bool loadFromMemory(void* data, u32 size, u32 offset);

    // @addr 0x805922b8 — unload archive
    void unload();

    // @addr 0x80592398 — get wave data for a sound ID
    void* getWaveData(u32 soundId) const;

    // @addr 0x805923fc — get wave size for a sound ID
    u32 getWaveSize(u32 soundId) const;

    // @addr 0x80592524 — get sequence data for a sound ID
    void* getSeqData(u32 soundId) const;

    // @addr 0x80592604 — get sequence size for a sound ID
    u32 getSeqSize(u32 soundId) const;

    // @addr 0x80592668 — get stream info for a sound ID
    void getStreamInfo(u32 soundId) const;

    // @addr 0x80592790 — get sound entry info
    void getEntryInfo(u32 soundId, u32* type, u32* offset, u32* size, u32 extra) const;

    // @addr 0x80592848 — find sound by name hash
    s32 findSound(u32 nameHash) const;

    // @addr 0x805928fc — get total entry count
    u32 getEntryCount() const;

    // --- Member data ---
    void* mData;        // 0x04
    u32   mDataSize;    // 0x08
    u32   mWaveBase;    // 0x0C
    u32   mSeqBase;     // 0x10
    u32   mStreamBase;  // 0x14
    u32   mEntryCount;  // 0x18
    void* mInfoTable;   // 0x1C
    u32   mLoaded;      // 0x20
};

// ============================================================================
// DSPManager — Interface to Wii DSP hardware
// ============================================================================
// Manages the DSP communication for audio output.
// Handles DSP initialization, buffer management, and mixing.
//
// Layout:
//   0x00  vtable
//   0x04  mInitialized    — DSP init state
//   0x08  mSampleRate     — DSP sample rate (32000 or 48000)
//   0x0C  mFrameCount     — DSP frame counter
//   0x10  mMixBuffer      — main mix buffer
//   0x14  mMixBufferSize  — mix buffer size
//   0x18  mOutputBuffer   — DSP output buffer
//   0x1C  mOutputSize     — output buffer size
//   0x20  mDSPCallback    — DSP callback function
//   0x24  mActiveChannels — number of active DSP channels
//   0x28  mMasterVolume   — hardware master volume
// Total size: ~0x2C
// ============================================================================
class DSPManager {
public:
    enum SampleRate {
        RATE_32000 = 32000,
        RATE_48000 = 48000,
    };

    // @addr 0x80592a1c — constructor
    DSPManager();

    virtual ~DSPManager() {}

    // @addr 0x80592b38 — initialize DSP
    bool init(SampleRate rate);

    // @addr 0x80592d50 — shutdown DSP
    void shutdown();

    // @addr 0x80592d9c — set master volume
    void setMasterVolume(u32 volume);

    // @addr 0x80592e84 — get master volume
    u32 getMasterVolume() const;

    // @addr 0x80592fcc — process one DSP frame
    void processFrame();

    // @addr 0x805930bc — set DSP callback
    void setCallback(void (*callback)(void*));

    // @addr 0x805931e4 — set active channel mask
    void setChannelMask(u32 mask);

    // @addr 0x80593230 — get current frame count
    u32 getFrameCount() const;

    // @addr 0x805932e0 — check if DSP is initialized
    bool isInitialized() const;

    // --- Member data ---
    u32  mInitialized;    // 0x04
    u32  mSampleRate;     // 0x08
    u32  mFrameCount;     // 0x0C
    void* mMixBuffer;     // 0x10
    u32  mMixBufferSize;  // 0x14
    void* mOutputBuffer;  // 0x18
    u32  mOutputSize;     // 0x1C
    void (*mDSPCallback)(void*); // 0x20
    u32  mActiveChannels; // 0x24
    u32  mMasterVolume;   // 0x28
};

// ============================================================================
// AudioSystem — Singleton audio manager (top-level EGG audio controller)
// ============================================================================
// Central audio system that owns all players, categories, the archive,
// and the DSP manager. Provides the main API for game code.
//
// Layout (estimated):
//   0x00  vtable
//   0x04  mInstance      — singleton instance pointer
//   0x08  mDSP           — DSP manager (embedded or pointer)
//   0x0C  mArchive       — sound archive (embedded or pointer)
//   0x10  mCategories    — pointer to category array
//   0x14  mCategoryCount — number of categories
//   0x18  mWavePlayers   — wave player pool
//   0x1C  mSeqPlayers    — sequence player pool
//   0x20  mStreamPlayers — stream player pool
//   0x24  mHandlePool    — sound handle pool
//   0x28  mInitialized   — system init state
//   0x2C  mActiveSounds  — count of currently playing sounds
//   0x30  mFrameCounter  — global audio frame counter
// Total size: ~0x34 (without embedded objects)
// ============================================================================
class AudioSystem {
public:
    static const u32 MAX_WAVE_PLAYERS   = 16;
    static const u32 MAX_SEQ_PLAYERS    = 4;
    static const u32 MAX_STREAM_PLAYERS = 2;
    static const u32 MAX_HANDLES        = 64;

    // @addr 0x805933d0 — get singleton instance
    static AudioSystem* getInstance();

    // @addr 0x80593434 — create singleton
    static AudioSystem* createInstance();

    // @addr 0x805934b0 — destroy singleton
    static void destroyInstance();

    // @addr 0x805934fc — constructor
    AudioSystem();

    // @addr 0x80593560 — destructor
    ~AudioSystem();

    // @addr 0x805936dc — initialize the full audio system
    bool init(u16 sampleRate);

    // @addr 0x80593960 — shutdown the audio system
    void shutdown();

    // --- Sound playback API ---
    // @addr 0x80593ba8 — start a sound (auto-select player type)
    SoundHandle* startSound(u32 soundId, u32 categoryIdx);

    // @addr 0x80593c38 — start a sound with priority
    SoundHandle* startSound(u32 soundId, u32 categoryIdx, u32 priority);

    // @addr 0x80593cc8 — stop a sound by handle
    void stopSound(SoundHandle* handle);

    // @addr 0x80593d64 — stop all sounds in category
    void stopAllSounds(u32 categoryIdx);

    // @addr 0x80593e60 — pause all sounds in category
    void pauseAllSounds(u32 categoryIdx);

    // @addr 0x80593f30 — resume all sounds in category
    void resumeAllSounds(u32 categoryIdx);

    // @addr 0x80593fcc — set master volume
    void setMasterVolume(f32 volume);

    // @addr 0x805940c8 — set category volume
    void setCategoryVolume(u32 categoryIdx, f32 volume);

    // @addr 0x80594198 — fade category volume
    void fadeCategoryVolume(u32 categoryIdx, f32 target, f32 speed);

    // --- Player management ---
    // @addr 0x80594234 — allocate a wave player
    WavePlayer* allocWavePlayer();

    // @addr 0x80594330 — allocate a sequence player
    SeqPlayer* allocSeqPlayer();

    // @addr 0x80594400 — allocate a stream player
    StreamPlayer* allocStreamPlayer();

    // @addr 0x80594488 — release a wave player
    void releaseWavePlayer(WavePlayer* player);

    // @addr 0x80594538 — release a sequence player
    void releaseSeqPlayer(SeqPlayer* player);

    // @addr 0x805945e0 — release a stream player
    void releaseStreamPlayer(StreamPlayer* player);

    // @addr 0x80594690 — allocate a sound handle
    SoundHandle* allocHandle();

    // @addr 0x80594738 — release a sound handle
    void releaseHandle(SoundHandle* handle);

    // --- Frame update ---
    // @addr 0x805947ac — main audio frame update
    void update();

    // @addr 0x80594850 — update all players
    void updatePlayers();

    // @addr 0x80594900 — update all categories
    void updateCategories();

    // @addr 0x805949c4 — update DSP
    void updateDSP();

    // --- Archive management ---
    // @addr 0x80594a74 — load sound archive
    bool loadArchive(const char* path);

    // @addr 0x80594b38 — unload sound archive
    void unloadArchive();

    // @addr 0x80594be8 — check if archive is loaded
    bool isArchiveLoaded() const;

    // --- 3D Audio ---
    // @addr 0x80594cac — set listener position
    void setListenerPosition(f32 x, f32 y, f32 z);

    // @addr 0x80594d5c — set listener orientation
    void setListenerOrientation(f32 fwdX, f32 fwdY, f32 fwdZ,
                                f32 upX, f32 upY, f32 upZ);

    // @addr 0x80594e20 — set sound 3D position
    void setSoundPosition(SoundHandle* handle, f32 x, f32 y, f32 z);

    // @addr 0x80594ef0 — update 3D audio calculations
    void update3DAudio();

    // --- Diagnostic ---
    // @addr 0x80594f94 — get active sound count
    u32 getActiveSoundCount() const;

    // @addr 0x805950e8 — get frame counter
    u32 getFrameCounter() const;

    // --- Member data ---
    static AudioSystem* sInstance;   // singleton

    DSPManager*    mDSP;            // 0x08
    SoundArchive*  mArchive;        // 0x0C
    SoundCategory* mCategories;     // 0x10
    u32            mCategoryCount;  // 0x14
    WavePlayer     mWavePlayers[MAX_WAVE_PLAYERS]; // 0x18
    SeqPlayer      mSeqPlayers[MAX_SEQ_PLAYERS];   // 0x1C
    StreamPlayer   mStreamPlayers[MAX_STREAM_PLAYERS]; // 0x20
    SoundHandle    mHandles[MAX_HANDLES]; // 0x24
    u32            mInitialized;    // 0x28
    u32            mActiveSounds;   // 0x2C
    u32            mFrameCounter;   // 0x30
};

// ============================================================================
// Additional function mappings from AudioEngine.hpp
// ============================================================================
// These functions map to specific subsystem operations that don't cleanly
// fit into the above classes. They are declared as free functions in the
// EGG::Audio namespace wrapping the NW4R calls.
//
// Sound parameter setters (0x80595278 - 0x80595a4c):
//   0x80595278 — set sound pitch by handle
//   0x80595594 — set sound pan by handle
//   0x80595618 — set sound volume by handle
//   0x805959c8 — set sound priority by handle
//   0x80595a4c — get sound state by handle
//
// DSP filter functions (0x80595dc8 - 0x80596040):
//   0x80595dc8 — set DSP low-pass filter
//   0x80595e4c — set DSP reverb
//   0x80595ebc — apply DSP filter coefficients
//   0x80595ef0 — reset DSP filters
//   0x80595f4c — set DSP echo
//   0x80596040 — get DSP status
//
// Stream management (0x80596204 - 0x80597470):
//   0x80596204 — set stream buffer count
//   0x805962bc — get stream buffer position
//   0x80596644 - 0x80597470 — stream buffer refill, sync, control
//
// Category detail functions (0x8059760c - 0x80598630):
//   Volume fading, pausing, resuming, muting per category
//
// Player pool management (0x805986ec - 0x80599de0):
//   Pool allocation, deallocation, iteration
//
// System-level functions (0x80599e8c - 0x8059a810):
//   Global init, frame processing, shutdown
//
// Sound handle operations (0x8059a8fc - 0x8059b4b8):
//   Handle creation, validation, destruction
//
// Mixing functions (0x8059b774 - 0x8059c734):
//   Mix buffers, apply gains, finalize output
//
// Finalization (0x8059cbd4 - 0x8059ff4c):
//   System flush, cleanup, resource release
// ============================================================================

} // namespace audio
} // namespace nw4r

// ============================================================================
// EGG::Audio — EGG Framework audio wrapper namespace
// ============================================================================
namespace EGG {
namespace Audio {

// @addr 0x80586c54 — EGG wrapper: start sound with auto-category
u32 startSound(u32 soundId);

// @addr 0x80586d50 — EGG wrapper: start sound in specific category
u32 startSound(u32 soundId, s32 categoryIdx);

// @addr 0x80586fcc — EGG wrapper: stop sound
u32 stopSound(u32 handleId);

// @addr 0x805870dc — EGG wrapper: check if sound is playing
u32 isSoundPlaying(u32 handleId);

// @addr 0x80586e4c — EGG wrapper: set sound volume
void setSoundVolume(s32 handleId, s32* volData, u32 volCount, s32 flags);

// @addr 0x80586f0c — EGG wrapper: set sound pan
void setSoundPan(s32 handleId, s32* panData, u32 panCount, s32 flags);

// @addr 0x805871ec — EGG wrapper: set sound pitch
void setSoundPitch(u32 soundId, s32 playerType, s32 param1, s32 param2);

// @addr 0x805873a0 — EGG wrapper: set sound 3D position
void setSoundPosition3D(u32 soundId, s32 playerType, s32 param1, s32 param2);

// @addr 0x80587594 — EGG wrapper: update 3D listener
void updateListener3D(u32 soundId, s32 playerType, s32 param1, s32 param2);

// @addr 0x80587608 — EGG wrapper: set sound fade
void setSoundFade(u32 soundId, s32 playerType, s32 param1, s32 param2);

// @addr 0x80587744 — EGG wrapper: set sound loop
void setSoundLoop(u32 soundId, s32 playerType, s32 param1, s32 param2);

// @addr 0x805877f8 — EGG wrapper: sound frame update
void updateSoundFrame(s32 handleId);

// @addr 0x80587c40 — EGG wrapper: process player frame
void processPlayerFrame(s32 playerId);

// @addr 0x8058a80c — EGG wrapper: set wave loop points
void setWaveLoop(s32 playerId);

// @addr 0x80588b88 — EGG wrapper: wave player tick
void wavePlayerTick();

// @addr 0x805898c8 — EGG wrapper: sequence player tick
void seqPlayerTick();

// @addr 0x8058f908 — EGG wrapper: stream player tick
void streamPlayerTick();

// @addr 0x80595ebc — EGG wrapper: apply DSP filter
void applyDSPFilter(f64 cutoff, f32* coeffs, f32* state);

// @addr 0x8059df98 — EGG wrapper: copy DSP buffers
void copyDSPBuffers(u8* dst, u8* src);

// @addr 0x8059e504 — EGG wrapper: final mix
void finalMix(s32 outputBuf, s32 inputBuf);

// @addr 0x8059f0e8 — EGG wrapper: submit DSP buffer
void submitDSPBuffer(s32 bufId, s32 size);

// @addr 0x8059f604 — EGG wrapper: sync DSP
void syncDSP(s32 timeout, s32 flags);

// @addr 0x8059fb28 — EGG wrapper: audio frame boundary
void audioFrameBoundary(s32 frame, s32 flags);

// @addr 0x8059ff4c — EGG wrapper: audio shutdown
void audioShutdown(s32 flags, s32 mode);

} // namespace Audio
} // namespace EGG