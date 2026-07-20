#pragma once
// ============================================================================
// StreamPlayer.hpp — Streaming Audio Player (BRSTM/BRSSTR)
// Reconstructed from nw4r::snd::detail::StreamPlayer
//
// StreamPlayer handles playback of streamed audio from BRSTM files
// stored in the BRSAR or loaded as external files. MKWii uses this for:
//   - Course BGM (streamed BRSTM files, typically 32000 Hz stereo)
//   - Long ambient sound effects
//   - Video cutscene audio
//
// The player uses double-buffered DMA transfer on Wii:
//   - One buffer is being played by AX while the other is being filled
//   - Buffers are 32-byte aligned for DSP DMA requirements
//   - BRSTM data is decoded from ADPCM on-the-fly
//
// Key functions reconstructed:
//   0x80570000: StreamPlayer::StreamPlayer()     — Constructor
//   0x80570200: StreamPlayer::init()             — Initialize with BRSTM data
//   0x80570600: StreamPlayer::prepare()          — Prepare stream for playback
//   0x80570A00: StreamPlayer::play()             — Start streaming playback
//   0x80570E00: StreamPlayer::stop()             — Stop streaming
//   0x80571000: StreamPlayer::update()           — Per-frame buffer refill
//   0x80571400: StreamPlayer::seek()             — Seek to position (samples)
//   0x80571800: StreamPlayer::getSampleRate()    — Get sample rate
//   0x80571A00: StreamPlayer::getChannelCount()  — Get channel count
//   0x80571C00: StreamPlayer::decodeBlock()      — Decode one BRSTM block
//   0x80572000: StreamPlayer::refillBuffer()     — Fill streaming buffer
// ============================================================================

#include <rk_types.h>
#include "SoundTypes.hpp"
#include "SoundPlayer.hpp"

namespace nw4r {
namespace snd {

// ============================================================================
// BRSTM Header — Parsed from the beginning of a BRSTM file
// ============================================================================
struct BRSTMHeader {
    char magic[4];        // 0x00: "RSTM"
    u32 fileSize;         // 0x04: Total file size
    u16 version;          // 0x08: File version
    u16 headerSize;       // 0x0A: Size of this header
    u16 sections;         // 0x0C: Number of sections
    u16 pad;
};

// ============================================================================
// BRSTM Audio Info Section
// ============================================================================
struct BRSTMAudioInfo {
    u32 codec;            // 0x00: Codec (0=ADPCM, 1=PCM8, 2=PCM16)
    u32 loopFlag;         // 0x04: Loop flag
    u32 channelCount;     // 0x08: Number of channels
    u32 sampleRate;       // 0x0C: Sample rate in Hz
    u32 loopStartSample;  // 0x10: Loop start sample offset
    u32 totalSamples;     // 0x14: Total sample count
    u32 blockCount;       // 0x18: Number of ADPCM blocks
    u32 blockSize;        // 0x1C: Size of one ADPCM block (bytes)
    u32 samplesPerBlock;  // 0x20: Samples per block
    u32 lastBlockSamples; // 0x24: Samples in the last (partial) block
    u32 lastBlockSize;    // 0x28: Size of the last block
    u32 adpcmCoeffOffset; // 0x2C: Offset to ADPCM coefficient table
    u32 dataOffset;       // 0x30: Offset to audio data
    u32 dataSize;         // 0x34: Size of audio data
};

// ============================================================================
// BRSTM ADPCM Info (per channel)
// ============================================================================
struct BRSTMADPCMInfo {
    u32 coefOffset;       // 0x00: Offset to coefficient table
    u32 gain;             // 0x04: ADPCM gain
    u32 predictScale;     // 0x08: Initial prediction scale
    u32 prevSample;       // 0x0C: Previous sample history
    u32 histOffset;       // 0x10: Offset to sample history buffer
    s16 coefficients[16]; // 0x14: ADPCM predictor coefficients (8 pairs)
};

// ============================================================================
// Stream Buffer — Double-buffered streaming state
// ============================================================================
struct StreamBuffer {
    void* data;           // 0x00: Buffer data (32-byte aligned)
    u32   size;           // 0x04: Buffer capacity in bytes
    u32   filled;         // 0x08: Bytes currently filled
    u32   consumed;       // 0x0C: Bytes consumed by playback
    u8    ready;          // 0x10: Buffer is ready for playback
    u8    active;         // 0x11: Buffer is being played
    u8    _pad[2];
};

// ============================================================================
// StreamPlayer — Plays streamed audio (BRSTM) for BGM
//
// On Wii: Uses double-buffered DMA transfer with AX streaming voices.
// The DSP reads directly from the buffers via DMA.
// On PC: Maps to OpenAL streaming via queue buffers.
//
// BRSTM files contain ADPCM-encoded audio with header metadata.
// MKWii course BGM is typically 32000 Hz, stereo, ~2MB per minute.
// ============================================================================
class StreamPlayer : public SoundPlayer {
public:
    StreamPlayer();
    virtual ~StreamPlayer() override;

    // --- Initialization ---
    // @addr 0x80570200 (480 bytes, 76 code lines, has_assert)
    // Initializes the stream player with BRSTM data.
    // brstmData: pointer to the BRSTM file data.
    // brstmSize: size of the BRSTM file.
    // voiceMgr:  pointer to the voice manager for buffer upload.
    bool init(const void* brstmData, u32 brstmSize, AxVoiceManager* voiceMgr);

    // @addr 0x80570600 (620 bytes, 98 code lines)
    // Prepares the player with a stream ID and archive.
    virtual bool prepare(u32 soundId, void* archive) override;

    // --- Playback Control ---
    // @addr 0x80570A00 (720 bytes, 112 code lines, has_assert)
    // Starts streaming playback.
    // Fills both buffers and begins playback on the voice.
    // /* AX_SDK: AXSetVoiceAddr() × 2 → alBufferData() × 2 + alSourceQueueBuffers() */
    virtual bool play() override;

    // @addr 0x80570E00 (440 bytes, 68 code lines)
    // Stops streaming playback.
    // /* AX_SDK: AXStopVoice() → alSourceStop() */
    virtual bool stop() override;

    // @addr 0x80571000 (360 bytes)
    virtual bool pause() override;

    // @addr 0x80571200 (360 bytes)
    virtual bool resume() override;

    // --- Per-Frame Update ---
    // @addr 0x80571400 (1080 bytes, 168 code lines, has_assert)
    // The main per-frame function. Checks if a buffer has been
    // consumed and refills it. Handles loop points and end-of-stream.
    virtual void update() override;

    // --- Seeking ---
    // @addr 0x80571800 (640 bytes, 100 code lines)
    // Seeks to a sample position in the stream.
    // Recalculates the block position and refills buffers.
    bool seek(u32 samplePosition);

    // --- Queries ---
    // @addr 0x80571A00 (68 bytes)
    u32 getSampleRate() const;

    // @addr 0x80571A40 (68 bytes)
    u32 getChannelCount() const;

    // @addr 0x80571A80 (68 bytes)
    u32 getTotalSamples() const;

    // @addr 0x80571AC0 (92 bytes)
    u32 getCurrentSample() const;

    // Returns true if the stream has reached the end (non-looping).
    bool isFinished() const;

    // --- Loop Control ---
    // @addr 0x80571B00 (200 bytes)
    // Sets the loop points. If loopEnd is 0, uses the total length.
    void setLoopPoints(u32 loopStart, u32 loopEnd = 0);

    // --- Buffer Configuration ---
    // Sets the streaming buffer size (default 0x4000 = 16KB).
    void setBufferSize(u32 size);

private:
    // --- Internal BRSTM parsing ---
    // @addr 0x80571C00 (560 bytes, 88 code lines)
    // Parses the BRSTM header and audio info sections.
    bool parseBRSTMHeader();

    // @addr 0x80572000 (840 bytes, 132 code lines, has_assert)
    // Decodes one ADPCM block from the BRSTM data.
    // outBuffer: destination for decoded PCM samples.
    // blockIndex: which block to decode (0-based).
    // Returns the number of samples decoded.
    // /* AX_SDK: Hardware ADPCM decode → software decode */
    u32 decodeBlock(void* outBuffer, u32 blockIndex);

    // @addr 0x80572400 (780 bytes, 120 code lines)
    // Fills a stream buffer with decoded audio data.
    // Decodes as many blocks as fit in the buffer.
    u32 refillBuffer(StreamBuffer& buffer);

    // Allocates 32-byte aligned streaming buffers.
    void* allocAligned(u32 size);

    // Frees an aligned buffer.
    void freeAligned(void* ptr);

    // BRSTM data
    const u8* m_brstmData;        // 0x80: Pointer to BRSTM file data
    u32 m_brstmSize;              // 0x84: BRSTM file size

    // Parsed BRSTM info
    BRSTMHeader m_header;         // 0x88: Parsed header
    BRSTMAudioInfo m_audioInfo;   // 0xA0: Audio info section
    BRSTMADPCMInfo m_adpcmInfo[2]; // 0xD4: ADPCM info per channel (max 2)

    // Streaming state
    StreamBuffer m_buffers[2];    // 0x130: Double buffer
    u32 m_currentBuffer;          // 0x170: Index of the buffer being filled
    u32 m_playBuffer;             // 0x174: Index of the buffer being played

    // Playback position
    u32 m_currentBlock;           // 0x178: Current ADPCM block index
    u32 m_currentSample;          // 0x17C: Current sample position
    u32 m_samplesInBuffer;        // 0x180: Samples remaining in play buffer

    // Buffer configuration
    u32 m_bufferSize;             // 0x184: Buffer size in bytes (default 16KB)
    u32 m_blocksPerBuffer;        // 0x188: Number of blocks per buffer

    // Loop state
    u32 m_loopStartSample;        // 0x18C: Loop start sample
    u32 m_loopEndSample;          // 0x190: Loop end sample
    u8  m_loopEnabled;            // 0x194: Loop enabled
    u8  m_eof;                    // 0x195: End of file reached
    u8  _pad[2];

    // Voice manager reference
    AxVoiceManager* m_voiceMgr;   // 0x198: Voice manager for buffer upload
};

} // namespace snd
} // namespace nw4r