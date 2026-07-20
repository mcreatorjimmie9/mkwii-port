// ============================================================================
// AudioEngine_Classes.cpp — NW4R / EGG Audio Engine Implementations
// Address range: 0x80580000 - 0x805a0000 (264 functions)
//
// Implementations derived from decompiled RVL AX audio SDK sources:
//   rvlAx.c    — AXIsInit, global init flag
//   rvlAxVpb.c — voice parameter block constants (2*PI, 32000Hz, 32768)
//   rvlAxAlloc.c — voice pool allocation bitmasks
//   rvlAxSpb.c  — studio parameter block init (__AXSPBInit zeros all SPB fields)
//   rvlAxOut.c  — triple-buffered output, frame counting (__AXOutFrame)
//   rvlAxComp.c — ADPCM compressor table (used for voice decode type)
//   rvlAxAux.c  — auxiliary send levels (16 aux channels)
//
// The AX library runs on the Wii DSP coprocessor. These C++ methods map
// the NW4R/EGG audio class API to AX voice and output operations.
//
// Categorization: GENESIS Phase 8 (Runtime Module — AudioEngine Classes)
// ============================================================================
#include "AudioEngine_Classes.hpp"
#include <cstring>
#include <cmath>

namespace nw4r {
namespace audio {

// ============================================================================
// Constants from decompiled rvlAxVpb.c
//   _lit_803884a8 = 2.0f
//   _lit_803884ac = 6.2831855f  (2*PI)
//   _lit_803884b0 = 32000.0f    (AX base sample rate)
//   _lit_803884b4 = 1.0f
//   _lit_803884b8 = 32768.0f    (S16 full-scale)
// ============================================================================
static const f32 AX_TWO           = 2.0f;
static const f32 AX_TWO_PI        = 6.2831855f;
static const f32 AX_BASE_FREQ     = 32000.0f;
static const f32 AX_ONE           = 1.0f;
static const f32 AX_S16_SCALE     = 32768.0f;

// From rvlAxOut.c: output uses 3 buffers of 192 samples at 32kHz
static const u32 AX_OUT_BUFFER_COUNT  = 3;
static const u32 AX_OUT_SAMPLES_PER_BUF = 192;

// From rvlAxAux.c: up to 16 auxiliary send channels
static const u32 AX_MAX_AUX_SENDS = 16;

// ============================================================================
// Helper: clamp float to [0.0, 1.0]
// ============================================================================
static inline f32 clamp01(f32 v) {
    if (v < 0.0f) v = 0.0f;
    if (v > 1.0f) v = 1.0f;
    return v;
}

// ============================================================================
// SoundPlayer — Base class
// ============================================================================

// @addr 0x80583970
SoundPlayer::SoundPlayer()
    : mState(STATE_STOPPED), mVolume(1.0f), mPitch(1.0f), mPan(0.0f)
    , mPriority(0), mSoundId(0), mHandle(nullptr), mCategory(nullptr)
    , mFlags(0) {}

// @addr 0x80583970
void SoundPlayer::setActive(bool active) {
    if (active) {
        mFlags |= 1;
    } else {
        mFlags &= ~1u;
    }
}

// @addr 0x8058399c
void SoundPlayer::resetState() {
    mState = STATE_STOPPED;
    mFlags = 0;
}

// @addr 0x80583aac — maps to AXSetVoiceVolumeF(voice, volume)
// Volume is 0.0..1.0, AX internally converts to u16 0x0000..0x7FFF
void SoundPlayer::setVolume(f32 volume) {
    mVolume = clamp01(volume);
}

// @addr 0x8058550c — maps to AXSetVoicePitch(voice, ratio)
// On AX, pitch ratio is a float where 1.0 = original pitch.
// The DSP converts: ratio = (pitch * srcSampleRate) / AX_BASE_FREQ
void SoundPlayer::setPitch(f32 pitch) {
    mPitch = (pitch < 0.0f) ? 0.0f : pitch;
}

// @addr 0x80586908 — pan maps to left/right volume via cosine/sine law
// AX uses Ve (3D) for panning; here we compute L/R volumes.
// From rvlAxVpb.c: uses _lit_803884ac (2*PI) for angle computation.
void SoundPlayer::setPan(f32 pan) {
    mPan = pan;
    // Pan: -1.0 = full left, 0.0 = center, 1.0 = full right
    // Map to 0..PI range for cos/sin: angle = (pan + 1.0f) * 0.5f * PI
    f32 angle = (pan + AX_ONE) * AX_TWO_PI * 0.25f;
    // Left volume = cos(angle), Right volume = sin(angle)
    // These would be set via AXSetVoiceVe on real hardware
}

// @addr 0x80586b34 — priority affects voice stealing (from rvlAxAlloc.c pool)
// Higher priority = less likely to be stolen.
u32 SoundPlayer::setPriority(u32 priority, s32 categoryIdx) {
    mPriority = priority;
    // If category is provided, re-sort within category
    if (categoryIdx >= 0 && mCategory) {
        // Priority-based voice stealing: compare with lowest-priority
        // player in the category. From AX: voices are sorted by priority
        // in the allocation bitmask (__unk_802f40c0/__unk_802f4140 arrays).
    }
    return 0;
}

// @addr 0x80586bd4 — maps to AXSetVoiceLoop(voice, loop, startAddr, endAddr)
void SoundPlayer::setLooping(bool loop) {
    if (loop) {
        mFlags |= FLAG_LOOPING;
    } else {
        mFlags &= ~FLAG_LOOPING;
    }
}

// ============================================================================
// WavePlayer
// ============================================================================

// @addr 0x80588b88
WavePlayer::WavePlayer()
    : SoundPlayer(), mWaveData(nullptr), mWaveSize(0), mSampleRate(32000)
    , mChannels(1), mBitDepth(16), mLoopStart(0), mLoopEnd(0)
    , mCurrentSample(0) {}

// @addr 0x805898c8 — per-frame update for wave playback
// Advances sample position and checks for end-of-stream or loop.
// On AX, the DSP advances the voice read pointer each frame
// (AX_OUT_SAMPLES_PER_BUF = 192 samples at 32kHz per frame).
void WavePlayer::update() {
    if (mState != STATE_PLAYING)
        return;

    u32 totalSamples = getTotalSamples();
    if (totalSamples == 0)
        return;

    // Advance by pitch-scaled samples per frame
    // AX internally: samples_per_frame = 192 * pitch_ratio
    u32 advance = (u32)((f32)AX_OUT_SAMPLES_PER_BUF * mPitch);

    if (mFlags & FLAG_LOOPING && mLoopEnd > mLoopStart) {
        // Looping playback — wrap around loop region
        mCurrentSample += advance;
        if (mCurrentSample >= mLoopEnd) {
            mCurrentSample = mLoopStart + ((mCurrentSample - mLoopStart) % (mLoopEnd - mLoopStart));
        }
    } else {
        // One-shot playback
        mCurrentSample += advance;
        if (mCurrentSample >= totalSamples) {
            mCurrentSample = totalSamples;
            mState = STATE_STOPPED;
        }
    }
}

// @addr 0x8058a350 — start wave playback
// Maps to: AXAllocVoice → AXSetVoiceAddr → AXSetVoiceSrcType → AXPlayVoice
// From rvlAxAlloc.c: voice allocation checks the 32-entry bitmasks.
bool WavePlayer::start(u32 soundId) {
    mSoundId = soundId;
    mCurrentSample = 0;

    // On real AX: allocate voice with current priority
    // AXVPB voice = AXAllocVoice((u16)mPriority);
    // if (!voice) return false;  // no free voices

    // Configure voice for this wave data
    // AXSetVoiceAddr(voice, mWaveData);
    // AXSetVoiceSrcType(voice, (mBitDepth == 4) ? AX_SRC_TYPE_ADPCM : AX_SRC_TYPE_PCM);
    // AXSetVoicePitch(voice, mPitch * (f32)mSampleRate / AX_BASE_FREQ);
    // AXSetVoiceVolumeF(voice, mVolume);

    if (mFlags & FLAG_LOOPING) {
        // AXSetVoiceLoop(voice, TRUE,
        //     (u8*)mWaveData + mLoopStart * mChannels * (mBitDepth / 8),
        //     (u8*)mWaveData + mLoopEnd   * mChannels * (mBitDepth / 8));
    }

    // AXPlayVoice(voice);
    mState = STATE_PLAYING;
    return true;
}

// @addr 0x8058a52c — maps to AXStopVoice + AXFreeVoice
void WavePlayer::stop() {
    if (mState == STATE_STOPPED)
        return;

    // On real AX: AXStopVoice(voice); AXFreeVoice(voice);
    mState = STATE_STOPPED;
    mCurrentSample = 0;
}

// @addr 0x8058a80c — maps to AXSetVoiceState(voice, 0)
void WavePlayer::pause() {
    if (mState != STATE_PLAYING)
        return;
    mState = STATE_PAUSED;
    // On real AX: AXSetVoiceState(voice, 0); // 0 = stopped/paused
}

// @addr 0x8058a958 — maps to AXSetVoiceState(voice, 1)
void WavePlayer::resume() {
    if (mState != STATE_PAUSED)
        return;
    mState = STATE_PLAYING;
    // On real AX: AXPlayVoice(voice); // restart from paused position
}

// @addr 0x8058ad2c — set wave data buffer (used before start)
// The wave data pointer is passed to AXSetVoiceAddr
void WavePlayer::setWaveData(void* data, u32 size) {
    mWaveData = data;
    mWaveSize = size;
}

// @addr 0x8058afac — set sample rate
// AX pitch is computed as: ratio = sampleRate / AX_BASE_FREQ (from rvlAxVpb.c)
void WavePlayer::setSampleRate(u32 rate) {
    mSampleRate = rate > 0 ? rate : 32000;
}

// @addr 0x8058b360 — maps to AXSetVoiceLoop startAddr/endAddr
void WavePlayer::setLoopPoints(u32 start, u32 end) {
    mLoopStart = start;
    mLoopEnd = end;
    // On real AX: if voice is playing, update loop dynamically
    // AXSetVoiceLoop(voice, TRUE, startPtr, endPtr);
}

// @addr 0x8058b710 — return current sample position
u32 WavePlayer::getCurrentSample() const {
    return mCurrentSample;
}

// @addr 0x8058bc58 — compute total sample count from wave size
u32 WavePlayer::getTotalSamples() const {
    u32 bytesPerSample = mChannels * (mBitDepth / 8);
    if (bytesPerSample == 0)
        return 0;
    return mWaveSize / bytesPerSample;
}

// ============================================================================
// SeqPlayer
// ============================================================================

// @addr 0x8058bdd4
SeqPlayer::SeqPlayer()
    : SoundPlayer(), mSeqData(nullptr), mSeqSize(0), mTempo(120.0f)
    , mTrackCount(0), mTickPosition(0), mTickLength(0)
    , mFadeVolume(0.0f), mFadeSpeed(0.0f) {}

// @addr 0x8058bf04 — sequence player per-frame update
// Processes MIDI-like events and advances the tick counter.
// The NW4R sequencer reads from the BRSAR sequence data and issues
// note-on/note-off/program-change events which map to AX voices.
void SeqPlayer::update() {
    if (mState != STATE_PLAYING)
        return;

    // Advance tick position based on tempo
    // At 120 BPM with 480 ticks/beat: 480 * 120 / 60 = 960 ticks/sec
    // Per frame (1/60s): 960/60 = 16 ticks per frame at 120BPM
    // Generalized: ticksPerFrame = (mTempo * ticksPerBeat) / (60.0 * 60.0)
    // Using standard 480 ticks per quarter note:
    f32 ticksPerBeat = 480.0f;
    f32 ticksPerFrame = (mTempo * ticksPerBeat) / (60.0f * 60.0f);

    mTickPosition += (u32)ticksPerFrame;

    // Process fade if active
    if (mFadeSpeed != 0.0f) {
        mVolume += mFadeSpeed;
        if (mFadeSpeed > 0.0f && mVolume >= mFadeVolume) {
            mVolume = mFadeVolume;
            mFadeSpeed = 0.0f;
        } else if (mFadeSpeed < 0.0f && mVolume <= mFadeVolume) {
            mVolume = mFadeVolume;
            mFadeSpeed = 0.0f;
            // If faded to zero, stop
            if (mVolume <= 0.0f) {
                mState = STATE_STOPPED;
                return;
            }
        }
    }

    // Check for sequence end
    if (mTickPosition >= mTickLength) {
        if (mFlags & FLAG_LOOPING) {
            mTickPosition = mTickPosition % mTickLength;
        } else {
            mTickPosition = mTickLength;
            mState = STATE_STOPPED;
        }
    }
}

// @addr 0x8058c260 — start sequence playback
// Allocates AX voices for each MIDI track, sets up the sequencer
// read pointer into the BRSAR sequence data section.
bool SeqPlayer::start(u32 soundId) {
    mSoundId = soundId;
    mTickPosition = 0;

    if (!mSeqData || mSeqSize == 0)
        return false;

    // On real NW4R: parse sequence header from mSeqData
    // Extract track count, tick length, initial tempo
    // For each track, allocate an AX voice for note playback:
    //   AXVPB voice = AXAllocVoice((u16)mPriority);
    //   AXSetVoiceSrcType(voice, AX_SRC_TYPE_ADPCM); // sequences use ADPCM
    //   AXSetVoiceVolumeF(voice, mVolume);
    //   AXSetVoicePitch(voice, mPitch);

    mState = STATE_PLAYING;
    return true;
}

// @addr 0x8058c408 — stop sequence, release all track voices
void SeqPlayer::stop() {
    if (mState == STATE_STOPPED)
        return;

    // On real NW4R: for each active track voice:
    //   AXStopVoice(voice);
    //   AXFreeVoice(voice);

    mState = STATE_STOPPED;
    mTickPosition = 0;
    mFadeSpeed = 0.0f;
}

// @addr 0x8058cb30 — pause all track voices
void SeqPlayer::pause() {
    if (mState != STATE_PLAYING)
        return;
    mState = STATE_PAUSED;
    // On real AX: AXSetVoiceState(voice, 0) for each track voice
}

// @addr 0x8058ccd4 — resume all track voices
void SeqPlayer::resume() {
    if (mState != STATE_PAUSED)
        return;
    mState = STATE_PLAYING;
    // On real AX: AXPlayVoice(voice) for each track voice
}

// @addr 0x8058d7bc — set sequence tempo (BPM)
// Tempo affects tick advancement rate. AX voices are re-pitched
// for each note event, so tempo doesn't directly affect pitch.
void SeqPlayer::setTempo(f32 bpm) {
    if (bpm < 1.0f)
        bpm = 1.0f;
    if (bpm > 500.0f)
        bpm = 500.0f;
    mTempo = bpm;
}

// @addr 0x8058df1c — seek to tick position in sequence
void SeqPlayer::seekToTick(u32 tick) {
    if (mTickLength > 0) {
        mTickPosition = tick % mTickLength;
    } else {
        mTickPosition = tick;
    }
    // On real NW4R: re-parse sequence from new tick position,
    // update all track voice states
}

// @addr 0x8058e12c
u32 SeqPlayer::getCurrentTick() const {
    return mTickPosition;
}

// @addr 0x8058e4c4
u32 SeqPlayer::getTotalTicks() const {
    return mTickLength;
}

// @addr 0x8058cd38
u8 SeqPlayer::isFinished() const {
    return (mTickPosition >= mTickLength) ? 1 : 0;
}

// @addr 0x8058d754
bool SeqPlayer::isFading() const {
    return mFadeSpeed != 0.0f;
}

// ============================================================================
// StreamPlayer
// ============================================================================

// @addr 0x8058e774
StreamPlayer::StreamPlayer()
    : SoundPlayer(), mStreamHandle(nullptr), mBufferSize(0x4000)
    , mReadOffset(0), mFileSize(0), mActiveBuf(0)
    , mBytesStreamed(0), mLoopPoint(0) {
    mBuffer[0] = nullptr;
    mBuffer[1] = nullptr;
}

// @addr 0x8058f034 — streaming per-frame update
// Implements double-buffered streaming similar to rvlAxOut.c's
// triple-buffered output. When the DSP finishes consuming one buffer,
// refill it from disc and swap.
void StreamPlayer::update() {
    if (mState != STATE_PLAYING)
        return;

    // Check if the active buffer has been consumed
    // (on real AX, this is driven by the DSP frame callback)
    // When consumed, swap buffers and refill:
    //   1. Calculate remaining bytes in file
    //   2. Read next chunk from disc into inactive buffer
    //   3. Swap active/inactive buffer pointers
    //   4. Update AX voice address to new buffer

    u32 samplesPerFrame = AX_OUT_SAMPLES_PER_BUF;
    u32 bytesPerFrame = samplesPerFrame * 2 * 2; // stereo * 16-bit

    mBytesStreamed += bytesPerFrame;
    mReadOffset += bytesPerFrame;

    // Handle stream loop point
    if (mLoopPoint > 0 && mReadOffset >= mFileSize) {
        mReadOffset = mLoopPoint;
        mBytesStreamed = mLoopPoint;
    }

    // Handle end of stream
    if (mReadOffset >= mFileSize && mLoopPoint == 0) {
        if (mFlags & FLAG_LOOPING) {
            mReadOffset = 0;
            mBytesStreamed = 0;
        } else {
            mState = STATE_STOPPED;
        }
    }

    // Swap double buffer
    mActiveBuf = 1 - mActiveBuf;
}

// @addr 0x8058f2a8 — start streaming
// Allocates double buffers, opens file, and starts AX voice in stream mode
bool StreamPlayer::start(u32 soundId) {
    mSoundId = soundId;
    mReadOffset = 0;
    mBytesStreamed = 0;
    mActiveBuf = 0;

    if (mFileSize == 0)
        return false;

    // On real AX streaming:
    // 1. Allocate two aligned buffers of mBufferSize
    // 2. Open the BRSTM file via DVD
    // 3. Prefill both buffers
    // 4. Allocate voice: AXAllocVoice(priority)
    // 5. Set voice to stream mode: AXSetVoiceSrcType(voice, AX_SRC_TYPE_STREAM)
    // 6. Set initial buffer: AXSetVoiceAddr(voice, mBuffer[0])
    // 7. AXPlayVoice(voice)

    mState = STATE_PLAYING;
    return true;
}

// @addr 0x8058f530 — stop streaming, free buffers
void StreamPlayer::stop() {
    if (mState == STATE_STOPPED)
        return;

    // On real AX: AXStopVoice(voice); AXFreeVoice(voice);
    // Close file handle, free double buffers
    mState = STATE_STOPPED;
    mReadOffset = 0;
    mActiveBuf = 0;
}

// @addr 0x8058f908
void StreamPlayer::pause() {
    if (mState != STATE_PLAYING)
        return;
    mState = STATE_PAUSED;
}

// @addr 0x8058fefc
void StreamPlayer::resume() {
    if (mState != STATE_PAUSED)
        return;
    mState = STATE_PLAYING;
}

// @addr 0x8058ff88
void StreamPlayer::setBufferSize(u32 size) {
    // Align to 32 bytes as required by AX DMA (from rvlAxOut.c __attribute__((aligned(32))))
    mBufferSize = (size + 31) & ~31u;
}

// @addr 0x80590040
void StreamPlayer::setLoopPoint(u32 offset) {
    mLoopPoint = offset;
}

// @addr 0x8058f034
u32 StreamPlayer::getBytesStreamed() const {
    return mBytesStreamed;
}

// ============================================================================
// SoundHandle
// ============================================================================

// @addr 0x80590764
SoundHandle::SoundHandle()
    : mPlayerId(0xFFFFFFFF), mSoundId(0), mPriority(0)
    , mCategoryIdx(0), mAllocated(0) {}

// @addr 0x80590bf4
void SoundHandle::init(u32 playerId, u32 soundId, u32 priority, u32 categoryIdx) {
    mPlayerId = playerId;
    mSoundId = soundId;
    mPriority = priority;
    mCategoryIdx = categoryIdx;
    mAllocated = 1;
}

// @addr 0x80591278
void SoundHandle::detach() {
    mPlayerId = 0xFFFFFFFF;
    mAllocated = 0;
}

// @addr 0x80591420
void SoundHandle::setExternalPriority(u16 priority) {
    mPriority = priority;
}

// @addr 0x80591438
bool SoundHandle::isValid() const {
    return mAllocated != 0 && mPlayerId != 0xFFFFFFFF;
}

// @addr 0x80591550
SoundPlayer* SoundHandle::getPlayer() const {
    // Requires AudioSystem access to look up player pool by mPlayerId
    // Return nullptr as the base implementation; AudioSystem overrides
    // this lookup via the player pools.
    return nullptr;
}

// ============================================================================
// SoundCategory
// ============================================================================

// @addr 0x805915f0
SoundCategory::SoundCategory()
    : mId(0), mVolume(1.0f), mTargetVolume(1.0f), mFadeSpeed(0.0f)
    , mPlayerCount(0), mMaxPlayers(MAX_PLAYERS)
    , mPaused(0), mMuted(0) {
    std::memset(mPlayers, 0, sizeof(mPlayers));
}

// @addr 0x80591780
void SoundCategory::setVolume(f32 volume) {
    mVolume = clamp01(volume);
    mTargetVolume = mVolume;
    // Apply volume to all players in this category
    // On real AX: for each player, AXSetVoiceVolumeF(voice, mVolume * player->mVolume)
    for (u32 i = 0; i < mPlayerCount; i++) {
        if (mPlayers[i]) {
            // The effective volume is category_volume * player_volume
            // mPlayers[i]->setVolume(mPlayers[i]->mVolume); // triggers AX update
        }
    }
}

// @addr 0x805918e0
void SoundCategory::fadeVolume(f32 target, f32 speed) {
    mTargetVolume = clamp01(target);
    mFadeSpeed = speed;
}

// @addr 0x80591934 — maps to AXSetVoiceState(0) for all category voices
void SoundCategory::pauseAll() {
    mPaused = 1;
    for (u32 i = 0; i < mPlayerCount; i++) {
        if (mPlayers[i]) {
            mPlayers[i]->pause();
        }
    }
}

// @addr 0x80591988 — maps to AXPlayVoice for all paused category voices
void SoundCategory::resumeAll() {
    mPaused = 0;
    for (u32 i = 0; i < mPlayerCount; i++) {
        if (mPlayers[i]) {
            mPlayers[i]->resume();
        }
    }
}

// @addr 0x80591a64
void SoundCategory::stopAll() {
    for (u32 i = 0; i < mPlayerCount; i++) {
        if (mPlayers[i]) {
            mPlayers[i]->stop();
            mPlayers[i] = nullptr;
        }
    }
    mPlayerCount = 0;
}

// @addr 0x80591ac8
void SoundCategory::setMuted(bool muted) {
    mMuted = muted ? 1 : 0;
    if (muted) {
        // On real AX: set all category voices volume to 0
        for (u32 i = 0; i < mPlayerCount; i++) {
            if (mPlayers[i]) {
                // AXSetVoiceVolumeF(voice, 0.0f);
            }
        }
    } else {
        // Restore volumes
        for (u32 i = 0; i < mPlayerCount; i++) {
            if (mPlayers[i]) {
                // AXSetVoiceVolumeF(voice, mVolume * mPlayers[i]->mVolume);
            }
        }
    }
}

// @addr 0x80591bf0
void SoundCategory::registerPlayer(SoundPlayer* player) {
    if (mPlayerCount < MAX_PLAYERS) {
        mPlayers[mPlayerCount++] = player;
    }
}

// @addr 0x80591ccc
void SoundCategory::unregisterPlayer(SoundPlayer* player) {
    for (u32 i = 0; i < mPlayerCount; i++) {
        if (mPlayers[i] == player) {
            // Shift remaining players down
            for (u32 j = i; j < mPlayerCount - 1; j++) {
                mPlayers[j] = mPlayers[j + 1];
            }
            mPlayers[--mPlayerCount] = nullptr;
            return;
        }
    }
}

// @addr 0x80591d30 — process volume fade each frame
void SoundCategory::update() {
    if (mFadeSpeed != 0.0f) {
        if (mVolume < mTargetVolume) {
            mVolume += mFadeSpeed;
            if (mVolume >= mTargetVolume) {
                mVolume = mTargetVolume;
                mFadeSpeed = 0.0f;
            }
        } else if (mVolume > mTargetVolume) {
            mVolume -= mFadeSpeed;
            if (mVolume <= mTargetVolume) {
                mVolume = mTargetVolume;
                mFadeSpeed = 0.0f;
            }
        }

        // Update all player volumes with new category volume
        if (!mMuted) {
            for (u32 i = 0; i < mPlayerCount; i++) {
                if (mPlayers[i]) {
                    // AXSetVoiceVolumeF(voice, mVolume * mPlayers[i]->mVolume);
                }
            }
        }
    }
}

// @addr 0x80591e0c
u32 SoundCategory::getActivePlayerCount() const {
    return mPlayerCount;
}

// @addr 0x80591e70
bool SoundCategory::isFull() const {
    return mPlayerCount >= mMaxPlayers;
}

// ============================================================================
// SoundArchive
// ============================================================================

// @addr 0x8059203c
SoundArchive::SoundArchive()
    : mData(nullptr), mDataSize(0), mWaveBase(0), mSeqBase(0)
    , mStreamBase(0), mEntryCount(0), mInfoTable(nullptr), mLoaded(0) {}

// @addr 0x805920a0
bool SoundArchive::load(const char* path) {
    (void)path;
    // On Wii: opens the BRSAR file via DVD and maps it into memory.
    // The BRSAR header contains offsets to the wave, sequence, and stream
    // sections as well as the sound info lookup table.
    // For now, this requires a file I/O backend.
    return false;
}

// @addr 0x80592204
bool SoundArchive::loadFromMemory(void* data, u32 size, u32 offset) {
    if (!data || size < 16)
        return false;

    mData = data;
    mDataSize = size;

    // Parse BRSAR header to extract section offsets.
    // BRSAR format (simplified):
    //   0x00: 'RSAR' magic
    //   0x04: header size
    //   0x08: version
    //   0x0C: section count
    //   0x10: section offsets (file size, wave base, seq base, stream base, info table)
    u8* header = static_cast<u8*>(data);

    // Read section offsets from header (after the 16-byte BRSAR header)
    if (size >= 48) {
        // Use the provided offset as base for section offset table
        u32* offsets = static_cast<u32*>(static_cast<void*>(header + offset));
        mWaveBase   = offsets[0];
        mSeqBase    = offsets[1];
        mStreamBase = offsets[2];

        // Info table at offset+12
        mInfoTable = header + offsets[3];
    }

    mLoaded = 1;
    return true;
}

// @addr 0x805922b8
void SoundArchive::unload() {
    mData = nullptr;
    mDataSize = 0;
    mWaveBase = 0;
    mSeqBase = 0;
    mStreamBase = 0;
    mEntryCount = 0;
    mInfoTable = nullptr;
    mLoaded = 0;
}

// @addr 0x80592398 — look up wave data by sound ID
// The info table maps sound IDs to (type, section_offset, data_size) tuples.
void* SoundArchive::getWaveData(u32 soundId) const {
    if (!mLoaded || !mData || soundId >= mEntryCount)
        return nullptr;
    // Navigate info table: entry = mInfoTable + soundId * entry_stride
    // Extract section offset, return mData + mWaveBase + section_offset
    return nullptr;
}

// @addr 0x805923fc
u32 SoundArchive::getWaveSize(u32 soundId) const {
    if (!mLoaded || soundId >= mEntryCount)
        return 0;
    // Look up size from info table entry
    (void)soundId;
    return 0;
}

// @addr 0x80592524
void* SoundArchive::getSeqData(u32 soundId) const {
    if (!mLoaded || !mData || soundId >= mEntryCount)
        return nullptr;
    // return mData + mSeqBase + seq_offset_for_soundId;
    return nullptr;
}

// @addr 0x80592604
u32 SoundArchive::getSeqSize(u32 soundId) const {
    if (!mLoaded || soundId >= mEntryCount)
        return 0;
    (void)soundId;
    return 0;
}

// @addr 0x80592668
void SoundArchive::getStreamInfo(u32 soundId) const {
    if (!mLoaded || soundId >= mEntryCount)
        return;
    // Extract stream info: file path, loop point, codec type
    (void)soundId;
}

// @addr 0x80592790
void SoundArchive::getEntryInfo(u32 soundId, u32* type, u32* offset,
                                 u32* size, u32 extra) const {
    if (!mLoaded || soundId >= mEntryCount) {
        if (type) *type = 0;
        if (offset) *offset = 0;
        if (size) *size = 0;
        return;
    }
    // Parse info table entry
    // Each entry: u32 type (0=wave, 1=seq, 2=stream), u32 offset, u32 size, u32 extra
    (void)extra;
    if (type) *type = 0;
    if (offset) *offset = 0;
    if (size) *size = 0;
}

// @addr 0x80592848 — linear scan of info table for name hash match
s32 SoundArchive::findSound(u32 nameHash) const {
    if (!mLoaded || !mInfoTable || mEntryCount == 0)
        return -1;

    // Info table entries are sorted by hash value for binary search,
    // but we do a linear scan here for correctness.
    for (u32 i = 0; i < mEntryCount; i++) {
        // Each entry starts with a u32 name hash
        u32* entry = static_cast<u32*>(mInfoTable) + i * 4; // approximate stride
        if (entry[0] == nameHash) {
            return (s32)i;
        }
    }
    return -1;
}

// @addr 0x805928fc
u32 SoundArchive::getEntryCount() const {
    return mEntryCount;
}

// ============================================================================
// DSPManager
// ============================================================================
// Manages the Wii DSP for audio output. Derived from rvlAxOut.c which shows:
//   - Triple-buffered output (3 × 192 samples at 32kHz)
//   - Frame counter (__AXOutFrame)
//   - DSP init/done flags (__AXDSPInitFlag, __AXDSPDoneFlag)
//   - Output buffer mode (__AXOutputBufferMode)
// And from rvlAx.c: AXIsInit() checks _unk_80386488 flag.
// ============================================================================

// @addr 0x80592a1c
DSPManager::DSPManager()
    : mInitialized(0), mSampleRate(RATE_32000), mFrameCount(0)
    , mMixBuffer(nullptr), mMixBufferSize(0)
    , mOutputBuffer(nullptr), mOutputSize(0)
    , mDSPCallback(nullptr), mActiveChannels(0), mMasterVolume(0xFF) {}

// @addr 0x80592b38 — initialize the DSP audio subsystem
// Maps to AXInit() from rvlAx.c which sets _unk_80386488 = 1 (AXIsInit).
// Also initializes the studio parameter block via __AXSPBInit() from rvlAxSpb.c.
bool DSPManager::init(SampleRate rate) {
    if (mInitialized)
        return true;

    mSampleRate = rate;

    // Calculate buffer sizes based on sample rate
    // At 32kHz: 192 samples/frame × 4 bytes/sample (stereo 16-bit) = 768 bytes
    // At 48kHz: 288 samples/frame × 4 bytes/sample = 1152 bytes
    u32 samplesPerBuf = (rate == RATE_48000) ? 288 : AX_OUT_SAMPLES_PER_BUF;
    u32 frameSize = samplesPerBuf * 2 * sizeof(s16); // stereo × 16-bit

    // Allocate mix buffer (all voices sum into this)
    // Aligned to 32 bytes for DSP DMA (from rvlAxOut.c alignment requirements)
    mMixBufferSize = frameSize * AX_OUT_BUFFER_COUNT;
    // mMixBuffer = aligned_alloc(32, mMixBufferSize); // requires allocator
    mMixBuffer = nullptr;

    // Allocate triple-buffered output (from rvlAxOut.c: s16 __AXOutBuffer[3][192])
    mOutputSize = frameSize * AX_OUT_BUFFER_COUNT;
    // mOutputBuffer = aligned_alloc(32, mOutputSize);
    mOutputBuffer = nullptr;

    // On real AX: AXInit();  // loads DSP ucode, sets AXIsInit = TRUE
    // Also: __AXSPBInit();   // zeros all studio parameter block fields
    //   (from rvlAxSpb.c: zeros AL, AR, AS, AAL, AAR, AAS, ABL, ABR, ABS,
    //    ACL, ACR, ACS, Main0-3, Aux0-3 = 16 u32 fields total)

    mInitialized = 1;
    mFrameCount = 0;
    return true;
}

// @addr 0x92d50 — maps to AXQuit() from rvlAx.c (clears AXIsInit flag)
void DSPManager::shutdown() {
    if (!mInitialized)
        return;

    // On real AX: AXQuit(); // unloads DSP ucode, sets _unk_80386488 = 0

    // Free mix and output buffers
    mMixBuffer = nullptr;
    mMixBufferSize = 0;
    mOutputBuffer = nullptr;
    mOutputSize = 0;
    mDSPCallback = nullptr;
    mActiveChannels = 0;

    mInitialized = 0;
}

// @addr 0x80592d9c — maps to AI/DSP output volume
// Master volume is 0x00..0xFF, where 0xFF = full volume
void DSPManager::setMasterVolume(u32 volume) {
    mMasterVolume = volume & 0xFF;
    // On real Wii: AISetDSPStreamVol(AI_STREAM_MAX, volume);
    // This sets the hardware DAC output volume.
}

// @addr 0x80592e84
u32 DSPManager::getMasterVolume() const {
    return mMasterVolume;
}

// @addr 0x80592fcc — process one DSP frame
// From rvlAxOut.c: each frame the DSP mixes all active voices into the
// output buffer and signals completion via __AXDSPDoneFlag.
// The CPU then submits the completed buffer to the AI (audio interface)
// and advances __AXOutFrame modulo 3 (triple buffering).
void DSPManager::processFrame() {
    if (!mInitialized)
        return;

    // 1. If DSP callback is set, invoke it (from rvlAxOut.c: __AXUserFrameCallback)
    if (mDSPCallback) {
        mDSPCallback(nullptr);
    }

    // 2. Wait for DSP to finish processing current frame
    // On real AX: while (!__AXDSPDoneFlag) { /* spin */ }

    // 3. Submit completed output buffer to AI
    // On real AX: AISetStreamBuffer(buffer, size);
    // Buffer index = __AXOutFrame % AX_OUT_BUFFER_COUNT (triple buffering)

    // 4. Advance frame counter
    mFrameCount++;
}

// @addr 0x805930bc — register frame callback
// Maps to AXRegisterCallback from rvlAx.c / rvlAxOut.c
void DSPManager::setCallback(void (*callback)(void*)) {
    mDSPCallback = callback;
    // On real AX: AXRegisterCallback(callback);
    // The callback fires once per audio frame (~5.5ms at 32kHz)
}

// @addr 0x805931e4 — set which output channels are active
// Maps to AXSetMode which configures stereo/surround output
void DSPManager::setChannelMask(u32 mask) {
    mActiveChannels = mask;
    // On real AX: AXSetMode(mask);
    // Common modes: 0 = mono, 1 = stereo, 2 = surround
}

// @addr 0x80593230
u32 DSPManager::getFrameCount() const {
    return mFrameCount;
}

// @addr 0x805932e0 — maps to AXIsInit() from rvlAx.c
bool DSPManager::isInitialized() const {
    return mInitialized != 0;
}

// ============================================================================
// AudioSystem — Singleton
// ============================================================================
// Central audio system derived from the pattern in rvlAx.c where
// AXIsInit() guards all operations against the global _unk_80386488 flag.
// ============================================================================

AudioSystem* AudioSystem::sInstance = nullptr;

// @addr 0x805934fc
AudioSystem::AudioSystem()
    : mDSP(nullptr), mArchive(nullptr), mCategories(nullptr)
    , mCategoryCount(SoundCategory::CAT_COUNT)
    , mInitialized(0), mActiveSounds(0), mFrameCounter(0) {
    std::memset(mWavePlayers, 0, sizeof(mWavePlayers));
    std::memset(mSeqPlayers, 0, sizeof(mSeqPlayers));
    std::memset(mStreamPlayers, 0, sizeof(mStreamPlayers));
    std::memset(mHandles, 0, sizeof(mHandles));
}

// @addr 0x80593560
AudioSystem::~AudioSystem() {
    shutdown();
}

// @addr 0x805933d0
AudioSystem* AudioSystem::getInstance() {
    return sInstance;
}

// @addr 0x80593434
AudioSystem* AudioSystem::createInstance() {
    if (!sInstance) {
        sInstance = new AudioSystem();
    }
    return sInstance;
}

// @addr 0x805934b0
void AudioSystem::destroyInstance() {
    if (sInstance) {
        delete sInstance;
        sInstance = nullptr;
    }
}

// @addr 0x805936dc — initialize the full audio system
// Maps to AXInit() (rvlAx.c) + __AXSPBInit() (rvlAxSpb.c) + output setup (rvlAxOut.c)
bool AudioSystem::init(u16 sampleRate) {
    if (mInitialized)
        return true;

    // 1. Initialize DSP via AXInit
    mDSP = new DSPManager();
    if (!mDSP || !mDSP->init(static_cast<DSPManager::SampleRate>(sampleRate))) {
        return false;
    }

    // 2. Allocate category array
    mCategories = new SoundCategory[mCategoryCount];
    for (u32 i = 0; i < mCategoryCount; i++) {
        mCategories[i].mId = i;
    }

    // 3. Initialize player pools — construct all players
    for (u32 i = 0; i < MAX_WAVE_PLAYERS; i++) {
        mWavePlayers[i] = WavePlayer();
        mWavePlayers[i].mCategory = &mCategories[SoundCategory::CAT_SFX];
    }
    for (u32 i = 0; i < MAX_SEQ_PLAYERS; i++) {
        mSeqPlayers[i] = SeqPlayer();
        mSeqPlayers[i].mCategory = &mCategories[SoundCategory::CAT_BGM];
    }
    for (u32 i = 0; i < MAX_STREAM_PLAYERS; i++) {
        mStreamPlayers[i] = StreamPlayer();
        mStreamPlayers[i].mCategory = &mCategories[SoundCategory::CAT_STREAM];
    }

    // 4. Initialize handle pool
    for (u32 i = 0; i < MAX_HANDLES; i++) {
        mHandles[i] = SoundHandle();
        mHandles[i].mPlayerId = 0xFFFFFFFF;
    }

    // 5. On real AX: set output mode
    // AXSetMode(1); // stereo
    // AXRegisterCallback(audioFrameCallback);
    // __AXSPBInit(); // zero all SPB fields (from rvlAxSpb.c)

    mInitialized = 1;
    return true;
}

// @addr 0x80593960 — maps to AXQuit() from rvlAx.c
void AudioSystem::shutdown() {
    if (!mInitialized)
        return;

    // Stop all playing sounds first
    stopAllSounds(0xFFFFFFFF); // all categories

    // On real AX: AXQuit(); // sets _unk_80386488 = 0

    if (mDSP) {
        mDSP->shutdown();
        delete mDSP;
        mDSP = nullptr;
    }
    if (mCategories) {
        delete[] mCategories;
        mCategories = nullptr;
    }
    if (mArchive) {
        mArchive->unload();
        delete mArchive;
        mArchive = nullptr;
    }

    mInitialized = 0;
    mActiveSounds = 0;
    mFrameCounter = 0;
}

// --- Sound playback API ---

// @addr 0x80593ba8
SoundHandle* AudioSystem::startSound(u32 soundId, u32 categoryIdx) {
    return startSound(soundId, categoryIdx, 0);
}

// @addr 0x80593c38 — start a sound with priority
// This is the main sound dispatch function. It:
// 1. Looks up the sound type from the archive
// 2. Finds a free player of the appropriate type
// 3. Configures and starts playback
// 4. Allocates a handle and returns it
SoundHandle* AudioSystem::startSound(u32 soundId, u32 categoryIdx, u32 priority) {
    if (!mInitialized || !mArchive || !mArchive->mLoaded)
        return nullptr;
    if (categoryIdx >= mCategoryCount)
        return nullptr;

    // Check if category is full
    if (mCategories[categoryIdx].isFull())
        return nullptr;

    // Look up entry type from archive
    u32 entryType = 0;
    mArchive->getEntryInfo(soundId, &entryType, nullptr, nullptr, 0);

    SoundPlayer* player = nullptr;

    switch (entryType) {
        case 0: { // Wave
            WavePlayer* wp = allocWavePlayer();
            if (!wp) return nullptr;

            void* waveData = mArchive->getWaveData(soundId);
            u32 waveSize = mArchive->getWaveSize(soundId);
            if (!waveData || waveSize == 0) {
                releaseWavePlayer(wp);
                return nullptr;
            }
            wp->setWaveData(waveData, waveSize);
            player = wp;
            break;
        }
        case 1: { // Sequence
            SeqPlayer* sp = allocSeqPlayer();
            if (!sp) return nullptr;

            void* seqData = mArchive->getSeqData(soundId);
            u32 seqSize = mArchive->getSeqSize(soundId);
            if (!seqData || seqSize == 0) {
                releaseSeqPlayer(sp);
                return nullptr;
            }
            sp->mSeqData = seqData;
            sp->mSeqSize = seqSize;
            player = sp;
            break;
        }
        case 2: { // Stream
            StreamPlayer* stp = allocStreamPlayer();
            if (!stp) return nullptr;

            mArchive->getStreamInfo(soundId);
            player = stp;
            break;
        }
        default:
            return nullptr;
    }

    // Configure player
    player->setPriority(priority, (s32)categoryIdx);
    player->mCategory = &mCategories[categoryIdx];

    // Start playback
    if (!player->start(soundId)) {
        // Cleanup on failure
        if (entryType == 0) releaseWavePlayer(static_cast<WavePlayer*>(player));
        else if (entryType == 1) releaseSeqPlayer(static_cast<SeqPlayer*>(player));
        else if (entryType == 2) releaseStreamPlayer(static_cast<StreamPlayer*>(player));
        return nullptr;
    }

    // Allocate handle
    SoundHandle* handle = allocHandle();
    if (!handle) {
        player->stop();
        if (entryType == 0) releaseWavePlayer(static_cast<WavePlayer*>(player));
        else if (entryType == 1) releaseSeqPlayer(static_cast<SeqPlayer*>(player));
        else if (entryType == 2) releaseStreamPlayer(static_cast<StreamPlayer*>(player));
        return nullptr;
    }

    // Determine player pool index for the handle
    u32 playerId = 0xFFFFFFFF;
    if (entryType == 0) {
        playerId = (u32)(static_cast<WavePlayer*>(player) - mWavePlayers);
    } else if (entryType == 1) {
        playerId = MAX_WAVE_PLAYERS + (u32)(static_cast<SeqPlayer*>(player) - mSeqPlayers);
    } else if (entryType == 2) {
        playerId = MAX_WAVE_PLAYERS + MAX_SEQ_PLAYERS +
                    (u32)(static_cast<StreamPlayer*>(player) - mStreamPlayers);
    }
    handle->init(playerId, soundId, priority, categoryIdx);
    player->mHandle = handle;

    // Register with category
    mCategories[categoryIdx].registerPlayer(player);
    mActiveSounds++;

    return handle;
}

// @addr 0x80593cc8 — stop a sound by handle
void AudioSystem::stopSound(SoundHandle* handle) {
    if (!handle || !handle->isValid())
        return;

    // Find and stop the player
    SoundPlayer* player = nullptr;
    u32 pid = handle->mPlayerId;

    if (pid < MAX_WAVE_PLAYERS) {
        player = &mWavePlayers[pid];
    } else if (pid < MAX_WAVE_PLAYERS + MAX_SEQ_PLAYERS) {
        player = &mSeqPlayers[pid - MAX_WAVE_PLAYERS];
    } else if (pid < MAX_WAVE_PLAYERS + MAX_SEQ_PLAYERS + MAX_STREAM_PLAYERS) {
        player = &mStreamPlayers[pid - MAX_WAVE_PLAYERS - MAX_SEQ_PLAYERS];
    }

    if (player && player->isPlaying()) {
        // Unregister from category
        if (player->mCategory) {
            player->mCategory->unregisterPlayer(player);
        }
        player->stop();
        mActiveSounds--;
    }

    handle->detach();
    // Note: player pool slot is freed lazily on next alloc
}

// @addr 0x80593d64
void AudioSystem::stopAllSounds(u32 categoryIdx) {
    if (categoryIdx == 0xFFFFFFFF) {
        // Stop all categories
        for (u32 i = 0; i < mCategoryCount; i++) {
            stopAllSounds(i);
        }
        return;
    }
    if (categoryIdx >= mCategoryCount)
        return;

    mCategories[categoryIdx].stopAll();
    mActiveSounds = 0; // approximate: recount would be more accurate

    // Detach all handles referencing players in this category
    for (u32 i = 0; i < MAX_HANDLES; i++) {
        if (mHandles[i].isValid() && mHandles[i].mCategoryIdx == categoryIdx) {
            mHandles[i].detach();
        }
    }
}

// @addr 0x80593e60
void AudioSystem::pauseAllSounds(u32 categoryIdx) {
    if (categoryIdx >= mCategoryCount)
        return;
    mCategories[categoryIdx].pauseAll();
}

// @addr 0x80593f30
void AudioSystem::resumeAllSounds(u32 categoryIdx) {
    if (categoryIdx >= mCategoryCount)
        return;
    mCategories[categoryIdx].resumeAll();
}

// @addr 0x80593fcc — set master volume via DSP
void AudioSystem::setMasterVolume(f32 volume) {
    if (!mDSP)
        return;
    // Convert 0.0..1.0 to 0x00..0xFF
    u32 hwVol = (u32)(clamp01(volume) * 255.0f);
    mDSP->setMasterVolume(hwVol);
}

// @addr 0x805940c8
void AudioSystem::setCategoryVolume(u32 categoryIdx, f32 volume) {
    if (categoryIdx >= mCategoryCount)
        return;
    mCategories[categoryIdx].setVolume(volume);
}

// @addr 0x80594198
void AudioSystem::fadeCategoryVolume(u32 categoryIdx, f32 target, f32 speed) {
    if (categoryIdx >= mCategoryCount)
        return;
    mCategories[categoryIdx].fadeVolume(target, speed);
}

// --- Player management ---

// @addr 0x80594234 — find a free wave player from the pool
WavePlayer* AudioSystem::allocWavePlayer() {
    for (u32 i = 0; i < MAX_WAVE_PLAYERS; i++) {
        if (mWavePlayers[i].getState() == SoundPlayer::STATE_STOPPED &&
            !mWavePlayers[i].mHandle) {
            // Reset player state for reuse
            mWavePlayers[i].resetState();
            mWavePlayers[i].mSampleRate = 32000;
            mWavePlayers[i].mChannels = 1;
            mWavePlayers[i].mBitDepth = 16;
            mWavePlayers[i].mWaveData = nullptr;
            mWavePlayers[i].mWaveSize = 0;
            mWavePlayers[i].mCurrentSample = 0;
            return &mWavePlayers[i];
        }
    }
    return nullptr; // all players in use — voice stealing would go here
}

// @addr 0x80594330 — find a free sequence player from the pool
SeqPlayer* AudioSystem::allocSeqPlayer() {
    for (u32 i = 0; i < MAX_SEQ_PLAYERS; i++) {
        if (mSeqPlayers[i].getState() == SoundPlayer::STATE_STOPPED &&
            !mSeqPlayers[i].mHandle) {
            mSeqPlayers[i].resetState();
            mSeqPlayers[i].mSeqData = nullptr;
            mSeqPlayers[i].mSeqSize = 0;
            mSeqPlayers[i].mTempo = 120.0f;
            mSeqPlayers[i].mTrackCount = 0;
            mSeqPlayers[i].mTickPosition = 0;
            mSeqPlayers[i].mTickLength = 0;
            mSeqPlayers[i].mFadeVolume = 0.0f;
            mSeqPlayers[i].mFadeSpeed = 0.0f;
            return &mSeqPlayers[i];
        }
    }
    return nullptr;
}

// @addr 0x80594400 — find a free stream player from the pool
StreamPlayer* AudioSystem::allocStreamPlayer() {
    for (u32 i = 0; i < MAX_STREAM_PLAYERS; i++) {
        if (mStreamPlayers[i].getState() == SoundPlayer::STATE_STOPPED &&
            !mStreamPlayers[i].mHandle) {
            mStreamPlayers[i].resetState();
            mStreamPlayers[i].mStreamHandle = nullptr;
            mStreamPlayers[i].mBufferSize = 0x4000;
            mStreamPlayers[i].mReadOffset = 0;
            mStreamPlayers[i].mFileSize = 0;
            mStreamPlayers[i].mBuffer[0] = nullptr;
            mStreamPlayers[i].mBuffer[1] = nullptr;
            mStreamPlayers[i].mActiveBuf = 0;
            mStreamPlayers[i].mBytesStreamed = 0;
            mStreamPlayers[i].mLoopPoint = 0;
            return &mStreamPlayers[i];
        }
    }
    return nullptr;
}

// @addr 0x80594488
void AudioSystem::releaseWavePlayer(WavePlayer* player) {
    if (!player)
        return;
    player->stop();
    player->mHandle = nullptr;
    player->mCategory = nullptr;
}

// @addr 0x80594538
void AudioSystem::releaseSeqPlayer(SeqPlayer* player) {
    if (!player)
        return;
    player->stop();
    player->mHandle = nullptr;
    player->mCategory = nullptr;
}

// @addr 0x805945e0
void AudioSystem::releaseStreamPlayer(StreamPlayer* player) {
    if (!player)
        return;
    player->stop();
    player->mHandle = nullptr;
    player->mCategory = nullptr;
}

// @addr 0x80594690 — allocate a handle from the pool
SoundHandle* AudioSystem::allocHandle() {
    for (u32 i = 0; i < MAX_HANDLES; i++) {
        if (!mHandles[i].isValid()) {
            mHandles[i] = SoundHandle();
            mHandles[i].mPlayerId = 0xFFFFFFFF;
            return &mHandles[i];
        }
    }
    return nullptr;
}

// @addr 0x80594738
void AudioSystem::releaseHandle(SoundHandle* handle) {
    if (!handle)
        return;
    handle->detach();
}

// --- Frame update ---

// @addr 0x805947ac — main audio frame update
// Called once per game frame (~60Hz). Drives the entire audio pipeline:
// 1. Update all players (advance playback)
// 2. Update all categories (process fades)
// 3. Update DSP (submit output buffers)
void AudioSystem::update() {
    if (!mInitialized)
        return;

    mFrameCounter++;
    updatePlayers();
    updateCategories();
    updateDSP();
}

// @addr 0x80594850 — update all player types
void AudioSystem::updatePlayers() {
    // Update wave players
    for (u32 i = 0; i < MAX_WAVE_PLAYERS; i++) {
        WavePlayer& wp = mWavePlayers[i];
        if (wp.getState() != SoundPlayer::STATE_STOPPED) {
            wp.update();

            // Auto-stop: if player finished and handle is attached, detach
            if (wp.getState() == SoundPlayer::STATE_STOPPED && wp.mHandle) {
                if (wp.mCategory) {
                    wp.mCategory->unregisterPlayer(&wp);
                }
                wp.mHandle->detach();
                wp.mHandle = nullptr;
                if (mActiveSounds > 0)
                    mActiveSounds--;
            }
        }
    }

    // Update sequence players
    for (u32 i = 0; i < MAX_SEQ_PLAYERS; i++) {
        SeqPlayer& sp = mSeqPlayers[i];
        if (sp.getState() != SoundPlayer::STATE_STOPPED) {
            sp.update();

            if (sp.getState() == SoundPlayer::STATE_STOPPED && sp.mHandle) {
                if (sp.mCategory) {
                    sp.mCategory->unregisterPlayer(&sp);
                }
                sp.mHandle->detach();
                sp.mHandle = nullptr;
                if (mActiveSounds > 0)
                    mActiveSounds--;
            }
        }
    }

    // Update stream players
    for (u32 i = 0; i < MAX_STREAM_PLAYERS; i++) {
        StreamPlayer& stp = mStreamPlayers[i];
        if (stp.getState() != SoundPlayer::STATE_STOPPED) {
            stp.update();

            if (stp.getState() == SoundPlayer::STATE_STOPPED && stp.mHandle) {
                if (stp.mCategory) {
                    stp.mCategory->unregisterPlayer(&stp);
                }
                stp.mHandle->detach();
                stp.mHandle = nullptr;
                if (mActiveSounds > 0)
                    mActiveSounds--;
            }
        }
    }
}

// @addr 0x80594900 — update all categories
void AudioSystem::updateCategories() {
    for (u32 i = 0; i < mCategoryCount; i++) {
        mCategories[i].update();
    }
}

// @addr 0x805949c4 — process one DSP frame
void AudioSystem::updateDSP() {
    if (mDSP) {
        mDSP->processFrame();
    }
}

// --- Archive management ---

// @addr 0x80594a74
bool AudioSystem::loadArchive(const char* path) {
    if (!mArchive) {
        mArchive = new SoundArchive();
    }
    return mArchive->load(path);
}

// @addr 0x80594b38
void AudioSystem::unloadArchive() {
    if (mArchive) {
        mArchive->unload();
        delete mArchive;
        mArchive = nullptr;
    }
}

// @addr 0x80594be8
bool AudioSystem::isArchiveLoaded() const {
    return mArchive && mArchive->mLoaded;
}

// --- 3D Audio ---

// @addr 0x80594cac — maps to AXSetVoiceVe for listener position
// The 3D audio system uses distance attenuation and doppler calculations.
// On AX, 3D is implemented via per-voice volume/pan adjustments (Ve).
void AudioSystem::setListenerPosition(f32 x, f32 y, f32 z) {
    // Store listener position for 3D distance calculations
    // On real NW4R: updates internal 3D listener state
    // Distance attenuation: vol = refDist / (refDist + rolloff * (dist - refDist))
    // Pan: computed from angle between listener forward and source direction
    (void)x; (void)y; (void)z;
}

// @addr 0x80594d5c
void AudioSystem::setListenerOrientation(f32 fwdX, f32 fwdY, f32 fwdZ,
                                          f32 upX, f32 upY, f32 upZ) {
    // Update listener orientation vectors for 3D panning
    // Forward vector determines "front" for pan calculation
    // Up vector determines elevation
    (void)fwdX; (void)fwdY; (void)fwdZ;
    (void)upX; (void)upY; (void)upZ;
}

// @addr 0x80594e20 — set 3D position of a sound
void AudioSystem::setSoundPosition(SoundHandle* handle, f32 x, f32 y, f32 z) {
    if (!handle || !handle->isValid())
        return;

    // Find the player for this handle
    SoundPlayer* player = nullptr;
    u32 pid = handle->mPlayerId;

    if (pid < MAX_WAVE_PLAYERS) {
        player = &mWavePlayers[pid];
    } else if (pid < MAX_WAVE_PLAYERS + MAX_SEQ_PLAYERS) {
        player = &mSeqPlayers[pid - MAX_WAVE_PLAYERS];
    } else if (pid < MAX_WAVE_PLAYERS + MAX_SEQ_PLAYERS + MAX_STREAM_PLAYERS) {
        player = &mStreamPlayers[pid - MAX_WAVE_PLAYERS - MAX_SEQ_PLAYERS];
    }

    if (player) {
        player->mFlags |= SoundPlayer::FLAG_3D_POSITION;
        // On real AX:
        // f32 dx = x - listenerX, dy = y - listenerY, dz = z - listenerZ;
        // f32 dist = sqrtf(dx*dx + dy*dy + dz*dz);
        // f32 vol = clamp01(refDist / (refDist + rolloff * (dist - refDist)));
        // AXSetVoiceVe(voice, dx, dy, dz);
        // AXSetVoiceVolumeF(voice, vol * player->mVolume);
    }
    (void)x; (void)y; (void)z;
}

// @addr 0x80594ef0 — update 3D audio for all active sounds
void AudioSystem::update3DAudio() {
    // For each active sound with FLAG_3D_POSITION set:
    //   1. Compute distance from listener
    //   2. Apply distance attenuation to volume
    //   3. Compute pan from angle
    //   4. Apply doppler shift to pitch if moving
    //   5. Update AX voice via AXSetVoiceVe, AXSetVoiceVolumeF, AXSetVoicePitch
}

// --- Diagnostic ---

// @addr 0x80594f94
u32 AudioSystem::getActiveSoundCount() const {
    return mActiveSounds;
}

// @addr 0x805950e8
u32 AudioSystem::getFrameCounter() const {
    return mFrameCounter;
}

} // namespace audio
} // namespace nw4r

// ============================================================================
// EGG::Audio — EGG Framework audio wrapper implementations
// ============================================================================
// These functions are the EGG framework's thin wrappers around the NW4R
// audio system. Game code calls EGG::Audio which delegates to AudioSystem.
// ============================================================================

namespace EGG {
namespace Audio {

// @addr 0x80586c54 — start sound with auto-category selection
// Typically defaults to SFX category (1) for EGG::Audio calls.
u32 startSound(u32 soundId) {
    nw4r::audio::AudioSystem* sys = nw4r::audio::AudioSystem::getInstance();
    if (!sys || !sys->mInitialized)
        return 0xFFFFFFFF;

    // Default to SFX category for EGG wrapper
    nw4r::audio::SoundHandle* h = sys->startSound(soundId,
        nw4r::audio::SoundCategory::CAT_SFX);
    return h ? h->mPlayerId : 0xFFFFFFFF;
}

// @addr 0x80586d50 — start sound in specific category
u32 startSound(u32 soundId, s32 categoryIdx) {
    nw4r::audio::AudioSystem* sys = nw4r::audio::AudioSystem::getInstance();
    if (!sys || !sys->mInitialized)
        return 0xFFFFFFFF;

    nw4r::audio::SoundHandle* h = sys->startSound(soundId, (u32)categoryIdx);
    return h ? h->mPlayerId : 0xFFFFFFFF;
}

// @addr 0x80586fcc — stop sound by handle ID
u32 stopSound(u32 handleId) {
    nw4r::audio::AudioSystem* sys = nw4r::audio::AudioSystem::getInstance();
    if (!sys)
        return 1;

    // Find handle by player ID
    for (u32 i = 0; i < nw4r::audio::AudioSystem::MAX_HANDLES; i++) {
        // Would need access to mHandles — skip for this wrapper
    }
    (void)handleId;
    return 0;
}

// @addr 0x805870dc — check if a sound is still playing
u32 isSoundPlaying(u32 handleId) {
    nw4r::audio::AudioSystem* sys = nw4r::audio::AudioSystem::getInstance();
    if (!sys || !sys->mInitialized)
        return 0;

    // Map handleId to player and check state
    // For now, return 0 (not playing) as base behavior
    (void)handleId;
    return 0;
}

// @addr 0x80586e4c — set sound volume with interpolation data
// volData is an array of volume keyframes, volCount is the count.
// flags: 0 = immediate, 1 = interpolate over time
void setSoundVolume(s32 handleId, s32* volData, u32 volCount, s32 flags) {
    nw4r::audio::AudioSystem* sys = nw4r::audio::AudioSystem::getInstance();
    if (!sys || !sys->mInitialized)
        return;

    // Map handleId to player, set volume
    // On AX: AXSetVoiceVolumeF(voice, volData[0] / 32768.0f);
    // If flags & 1: setup volume ramp (fade)
    (void)handleId; (void)volData; (void)volCount; (void)flags;
}

// @addr 0x80586f0c — set sound pan with interpolation data
// panData: array of pan keyframes (-1.0..1.0 as s16: -32768..32767)
void setSoundPan(s32 handleId, s32* panData, u32 panCount, s32 flags) {
    nw4r::audio::AudioSystem* sys = nw4r::audio::AudioSystem::getInstance();
    if (!sys || !sys->mInitialized)
        return;

    // Map handleId to player, set pan
    // On AX: f32 pan = (f32)panData[0] / 32768.0f;
    // AXSetVoiceVe(voice, cos_angle, 0.0f, sin_angle); // for 3D panning
    (void)handleId; (void)panData; (void)panCount; (void)flags;
}

// @addr 0x805871ec — set sound pitch
// On AX: AXSetVoicePitch(voice, pitchRatio)
// pitchRatio = (pitch * srcRate) / 32000.0f
void setSoundPitch(u32 soundId, s32 playerType, s32 param1, s32 param2) {
    // On real AX: AXSetVoicePitch(voice, pitch);
    // playerType: 0=wave, 1=seq, 2=stream
    // param1/param2: pitch data (e.g., fixed-point or float pair)
    (void)soundId; (void)playerType; (void)param1; (void)param2;
}

// @addr 0x805873a0 — set 3D position of a sound
// Maps to AXSetVoiceVe(voice, x, y, z) for distance-based attenuation
void setSoundPosition3D(u32 soundId, s32 playerType, s32 param1, s32 param2) {
    nw4r::audio::AudioSystem* sys = nw4r::audio::AudioSystem::getInstance();
    if (!sys || !sys->mInitialized)
        return;

    // param1/param2 encode (x,y,z) position data
    // On AX: AXSetVoiceVe(voice, x, y, z);
    (void)soundId; (void)playerType; (void)param1; (void)param2;
}

// @addr 0x80587594 — update 3D listener
void updateListener3D(u32 soundId, s32 playerType, s32 param1, s32 param2) {
    nw4r::audio::AudioSystem* sys = nw4r::audio::AudioSystem::getInstance();
    if (!sys || !sys->mInitialized)
        return;

    // Updates the global listener position/orientation used for all 3D calculations
    (void)soundId; (void)playerType; (void)param1; (void)param2;
}

// @addr 0x80587608 — set sound fade
void setSoundFade(u32 soundId, s32 playerType, s32 param1, s32 param2) {
    // Setup volume fade on a specific sound
    // param1 = target volume (fixed-point or float)
    // param2 = fade duration/speed
    // On NW4R: maps to SoundPlayer fade mechanism or category fade
    (void)soundId; (void)playerType; (void)param1; (void)param2;
}

// @addr 0x80587744 — set sound loop behavior
// Maps to AXSetVoiceLoop(voice, loop, startAddr, endAddr)
void setSoundLoop(u32 soundId, s32 playerType, s32 param1, s32 param2) {
    nw4r::audio::AudioSystem* sys = nw4r::audio::AudioSystem::getInstance();
    if (!sys || !sys->mInitialized)
        return;

    // param1: 1 = enable loop, 0 = disable
    // param2: loop start sample (for precise loop points)
    // On AX:
    //   if (param1) AXSetVoiceLoop(voice, TRUE, loopStart, loopEnd);
    //   else AXSetVoiceLoop(voice, FALSE, NULL, NULL);
    (void)soundId; (void)playerType; (void)param1; (void)param2;
}

// @addr 0x805877f8 — per-sound frame update
void updateSoundFrame(s32 handleId) {
    nw4r::audio::AudioSystem* sys = nw4r::audio::AudioSystem::getInstance();
    if (!sys || !sys->mInitialized)
        return;

    // Map handleId to player and call player->update()
    // Also process auto-stop, handle detachment, category unregistration
    (void)handleId;
}

// @addr 0x80587c40 — process a single player's frame
void processPlayerFrame(s32 playerId) {
    nw4r::audio::AudioSystem* sys = nw4r::audio::AudioSystem::getInstance();
    if (!sys || !sys->mInitialized)
        return;

    // Direct player update by pool index
    // playerId maps to: 0..15 = wave, 16..19 = seq, 20..21 = stream
    (void)playerId;
}

// @addr 0x8058a80c — set wave loop points (EGG helper)
void setWaveLoop(s32 playerId) {
    nw4r::audio::AudioSystem* sys = nw4r::audio::AudioSystem::getInstance();
    if (!sys || !sys->mInitialized)
        return;

    // Configure loop on the wave player at the given pool index
    // On AX: AXSetVoiceLoop(voice, TRUE, startAddr, endAddr);
    (void)playerId;
}

// @addr 0x80588b88 — wave player system tick
void wavePlayerTick() {
    nw4r::audio::AudioSystem* sys = nw4r::audio::AudioSystem::getInstance();
    if (!sys || !sys->mInitialized)
        return;

    // Update all active wave players
    for (u32 i = 0; i < nw4r::audio::AudioSystem::MAX_WAVE_PLAYERS; i++) {
        // sys->mWavePlayers[i].update();
    }
}

// @addr 0x805898c8 — sequence player system tick
void seqPlayerTick() {
    nw4r::audio::AudioSystem* sys = nw4r::audio::AudioSystem::getInstance();
    if (!sys || !sys->mInitialized)
        return;

    // Update all active sequence players
    for (u32 i = 0; i < nw4r::audio::AudioSystem::MAX_SEQ_PLAYERS; i++) {
        // sys->mSeqPlayers[i].update();
    }
}

// @addr 0x8058f908 — stream player system tick
void streamPlayerTick() {
    nw4r::audio::AudioSystem* sys = nw4r::audio::AudioSystem::getInstance();
    if (!sys || !sys->mInitialized)
        return;

    // Update all active stream players
    for (u32 i = 0; i < nw4r::audio::AudioSystem::MAX_STREAM_PLAYERS; i++) {
        // sys->mStreamPlayers[i].update();
    }
}

// @addr 0x80595ebc — apply DSP filter coefficients
// From rvlAxAux.c: auxiliary processing uses 16 send levels.
// From rvlAxComp.c: ADPCM compression table for voice decode.
void applyDSPFilter(f64 cutoff, f32* coeffs, f32* state) {
    // Apply a biquad or low-pass filter to audio data
    // cutoff: filter cutoff frequency in Hz
    // coeffs: 5 biquad coefficients [b0, b1, b2, a1, a2]
    // state: 4 state variables [x1, x2, y1, y2]
    // Formula: y[n] = b0*x[n] + b1*x[n-1] + b2*x[n-2] - a1*y[n-1] - a2*y[n-2]
    // This is a standard direct form II biquad filter used in the AX DSP ucode
    (void)cutoff; (void)coeffs; (void)state;
}

// @addr 0x8059df98 — copy DSP buffers
// From rvlAxOut.c: output buffers are s16[192] aligned to 32 bytes.
// DCFlushRange is used to flush CPU cache before DSP DMA.
void copyDSPBuffers(u8* dst, u8* src) {
    if (!dst || !src)
        return;
    // Copy one frame of audio data (192 samples × 2 channels × 2 bytes = 768 bytes)
    // On real Wii: DCFlushRange(src, 768) before DSP reads it
    // std::memcpy(dst, src, 768);
    // DCInvalidateRange(dst, 768) after DSP writes
}

// @addr 0x8059e504 — final mix: sum all voice outputs into the output buffer
// From rvlAxOut.c: the DSP performs this mixing in hardware.
// The CPU-side equivalent would sum all active voice buffers.
void finalMix(s32 outputBuf, s32 inputBuf) {
    // Mix all active voice outputs into the final output buffer
    // On real AX: the DSP handles this automatically during frame processing
    // Each voice's output is accumulated into the SPB main L/R buffers
    // (from rvlAxSpb.c: __AXSpbMainL, __AXSpbMainR, __AXSpbMainS)
    // Then the main buffers are copied to the output buffer
    (void)outputBuf; (void)inputBuf;
}

// @addr 0x8059f0e8 — submit a completed DSP buffer to the AI
// From rvlAxOut.c: uses AISetStreamBuffer with the completed frame.
// The output uses triple buffering: 3 × 192-sample buffers.
void submitDSPBuffer(s32 bufId, s32 size) {
    // On real Wii:
    // AISetStreamBuffer(bufId, size);
    // The AI automatically cycles through the triple buffers
    // __AXOutFrame = (__AXOutFrame + 1) % 3;
    (void)bufId; (void)size;
}

// @addr 0x8059f604 — wait for DSP to complete processing
// From rvlAxOut.c: polls __AXDSPDoneFlag
void syncDSP(s32 timeout, s32 flags) {
    // On real Wii:
    // while (!__AXDSPDoneFlag) { /* spin */ }
    // If timeout > 0, bail out after timeout milliseconds
    // flags: 0 = normal, 1 = non-blocking
    (void)timeout; (void)flags;
}

// @addr 0x8059fb28 — audio frame boundary callback
// Called at the boundary between audio frames to synchronize
// the CPU and DSP processing pipelines.
void audioFrameBoundary(s32 frame, s32 flags) {
    // On real AX: this is where the frame callback fires
    // (__AXUserFrameCallback from rvlAxOut.c)
    // frame: current frame number (like __AXOutFrame)
    // flags: 0 = normal, 1 = first frame, 2 = last frame
    (void)frame; (void)flags;
}

// @addr 0x8059ff4c — audio system shutdown
// From rvlAx.c: AXQuit() clears _unk_80386488 (the AXIsInit flag).
// Also resets all SPB fields (rvlAxSpb.c) and frees output buffers.
void audioShutdown(s32 flags, s32 mode) {
    nw4r::audio::AudioSystem* sys = nw4r::audio::AudioSystem::getInstance();
    if (sys) {
        sys->shutdown();
    }

    // On real AX:
    // AXQuit();  // _unk_80386488 = 0
    // __AXSPBInit(); // zero all SPB fields
    // Free output buffers, deregister callbacks
    (void)flags; (void)mode;
}

} // namespace Audio
} // namespace EGG