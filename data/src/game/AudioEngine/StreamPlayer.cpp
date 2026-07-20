// ============================================================================
// StreamPlayer.cpp — Streaming Audio Player Implementation
// Reconstructed from nw4r::snd::detail::StreamPlayer
// ============================================================================

#include "StreamPlayer.hpp"
#include "SoundArchive.hpp"
#include "AxVoiceManager.hpp"
#include <cstring>
#include <cstdlib>
#include <algorithm>

// AX SDK shim
#include <shims/ax_audio/ax_shim.h>

namespace nw4r {
namespace snd {

// ============================================================================
// StreamPlayer()
// @addr 0x80570000 (constructor area)
// ============================================================================
StreamPlayer::StreamPlayer()
    : SoundPlayer()
    , m_brstmData(nullptr)
    , m_brstmSize(0)
    , m_currentBuffer(0)
    , m_playBuffer(0)
    , m_currentBlock(0)
    , m_currentSample(0)
    , m_samplesInBuffer(0)
    , m_bufferSize(0x4000)  // 16KB default
    , m_blocksPerBuffer(0)
    , m_loopStartSample(0)
    , m_loopEndSample(0)
    , m_loopEnabled(1)
    , m_eof(0)
    , m_voiceMgr(nullptr)
{
    m_type = SOUND_PLAYER_TYPE_STRM;
    m_category = SOUND_CAT_BGM;
    m_priority = SOUND_PRIORITY_HIGH;

    std::memset(&m_header, 0, sizeof(m_header));
    std::memset(&m_audioInfo, 0, sizeof(m_audioInfo));
    std::memset(m_adpcmInfo, 0, sizeof(m_adpcmInfo));
    std::memset(m_buffers, 0, sizeof(m_buffers));
}

// ============================================================================
// ~StreamPlayer()
// ============================================================================
StreamPlayer::~StreamPlayer() {
    stop();

    // Free aligned buffers
    for (u32 i = 0; i < 2; i++) {
        if (m_buffers[i].data != nullptr) {
            freeAligned(m_buffers[i].data);
            m_buffers[i].data = nullptr;
        }
    }
}

// ============================================================================
// init(brstmData, brstmSize, voiceMgr)
// @addr 0x80570200 (480 bytes, 76 code lines, has_assert)
//
// Initializes the stream player with BRSTM file data.
// Parses the BRSTM header and allocates streaming buffers.
// ============================================================================
bool StreamPlayer::init(const void* brstmData, u32 brstmSize,
                         AxVoiceManager* voiceMgr) {
    if (brstmData == nullptr || brstmSize < sizeof(BRSTMHeader)) {
        return false;
    }

    m_brstmData = (const u8*)brstmData;
    m_brstmSize = brstmSize;
    m_voiceMgr = voiceMgr;

    // Parse the BRSTM header
    if (!parseBRSTMHeader()) {
        m_brstmData = nullptr;
        m_brstmSize = 0;
        return false;
    }

    // Allocate double-buffered streaming buffers
    // On Wii, these must be 32-byte aligned for DSP DMA
    for (u32 i = 0; i < 2; i++) {
        m_buffers[i].data = allocAligned(m_bufferSize);
        if (m_buffers[i].data == nullptr) {
            // Out of memory
            for (u32 j = 0; j < i; j++) {
                freeAligned(m_buffers[j].data);
                m_buffers[j].data = nullptr;
            }
            m_brstmData = nullptr;
            return false;
        }
        m_buffers[i].size = m_bufferSize;
        m_buffers[i].filled = 0;
        m_buffers[i].consumed = 0;
        m_buffers[i].ready = 0;
        m_buffers[i].active = 0;
    }

    // Calculate blocks per buffer
    if (m_audioInfo.blockSize > 0) {
        m_blocksPerBuffer = m_bufferSize / (m_audioInfo.blockSize * m_audioInfo.channelCount);
        if (m_blocksPerBuffer == 0) m_blocksPerBuffer = 1;
    }

    // Set default loop points
    m_loopStartSample = m_audioInfo.loopStartSample;
    m_loopEndSample = m_audioInfo.totalSamples;
    m_loopEnabled = m_audioInfo.loopFlag ? 1 : 0;

    m_state = 1; // Prepared
    return true;
}

// ============================================================================
// prepare(soundId, archive)
// @addr 0x80570600 (620 bytes, 98 code lines)
//
// Prepares the player by looking up stream data in the BRSAR.
// ============================================================================
bool StreamPlayer::prepare(u32 soundId, void* archive) {
    if (archive == nullptr) return false;

    SoundArchive* sar = (SoundArchive*)archive;
    u32 streamSize = 0;
    const void* streamData = sar->getStreamData(soundId, &streamSize);

    if (streamData == nullptr || streamSize == 0) {
        // Try wave data as fallback
        streamData = sar->getWaveData(soundId, &streamSize);
    }

    if (streamData == nullptr) return false;

    return init(streamData, streamSize, m_voiceMgr);
}

// ============================================================================
// play()
// @addr 0x80570A00 (720 bytes, 112 code lines, has_assert)
//
// Starts streaming playback.
// 1. Allocates an AX voice
// 2. Fills both streaming buffers
// 3. Uploads the first buffer to the voice
// 4. Starts playback
//
// /* AX_SDK: AXSetVoiceAddr() → alBufferData() */
// /* AX_SDK: AXPlayVoice() → alSourcePlay() */
// ============================================================================
bool StreamPlayer::play() {
    if (m_state == 0) return false;

    // Reset position
    m_currentBlock = 0;
    m_currentSample = 0;
    m_eof = 0;

    // Fill both buffers
    m_currentBuffer = 0;
    for (u32 i = 0; i < 2; i++) {
        m_buffers[i].filled = 0;
        m_buffers[i].consumed = 0;
        m_buffers[i].ready = 0;
        m_buffers[i].active = 0;

        u32 decoded = refillBuffer(m_buffers[i]);
        m_buffers[i].filled = decoded;
        m_buffers[i].ready = (decoded > 0) ? 1 : 0;
    }

    // Allocate voice and upload first buffer
    if (!SoundPlayer::allocVoice(m_priority)) return false;

    if (m_voiceMgr != nullptr && m_voiceIndex >= 0) {
        // Upload the first buffer to the voice
        if (m_buffers[0].ready) {
            /* AX_SDK: AXSetVoiceAddr() → alBufferData() */
            m_voiceMgr->setAddr((u32)m_voiceIndex,
                               m_buffers[0].data, m_buffers[0].filled,
                               m_audioInfo.sampleRate,
                               (u16)m_audioInfo.channelCount, 0);
            /* AX_SDK: AXSetVoiceLoop() → alSourcei(src, AL_LOOPING, ...) */
            m_voiceMgr->setLoop((u32)m_voiceIndex, false);
        }

        /* AX_SDK: AXPlayVoice() → alSourcePlay() */
        m_voiceMgr->startVoice((u32)m_voiceIndex);
    }

    m_playBuffer = 0;
    m_paused = false;
    m_state = 1;

    return true;
}

// ============================================================================
// stop()
// @addr 0x80570E00 (440 bytes, 68 code lines)
// /* AX_SDK: AXStopVoice() → alSourceStop() */
// ============================================================================
bool StreamPlayer::stop() {
    // Release voice
    if (m_voiceMgr != nullptr && m_voiceIndex >= 0) {
        /* AX_SDK: AXStopVoice() → alSourceStop() */
        m_voiceMgr->stopVoice((u32)m_voiceIndex);
        m_voiceIndex = -1;
    }

    // Reset buffers
    for (u32 i = 0; i < 2; i++) {
        m_buffers[i].filled = 0;
        m_buffers[i].consumed = 0;
        m_buffers[i].ready = 0;
        m_buffers[i].active = 0;
    }

    m_currentBlock = 0;
    m_currentSample = 0;
    m_eof = 0;
    m_state = 0;

    return true;
}

// ============================================================================
// pause()
// ============================================================================
bool StreamPlayer::pause() {
    if (m_paused) return true;
    m_paused = true;
    return SoundPlayer::pause();
}

// ============================================================================
// resume()
// ============================================================================
bool StreamPlayer::resume() {
    if (!m_paused) return true;
    m_paused = false;
    return SoundPlayer::resume();
}

// ============================================================================
// update()
// @addr 0x80571400 (1080 bytes, 168 code lines, has_assert)
//
// The main per-frame streaming update. This:
// 1. Checks if the current playback buffer has been consumed
// 2. Refills the consumed buffer
// 3. Swaps buffers if the filled buffer is ready
// 4. Uploads new data to the voice
// 5. Handles loop points and end-of-stream
//
// On Wii, buffer consumption is tracked by the AX DSP via
// the ADMA (Audio DMA) progress register.
// On PC, we simulate this based on time elapsed.
// ============================================================================
void StreamPlayer::update() {
    if (m_state == 0 || m_paused || m_eof) {
        SoundPlayer::update();
        return;
    }

    // Estimate consumed samples based on time and sample rate
    f32 secondsPerFrame = 1.0f / 60.0f;
    u32 samplesPerFrame = (u32)((f32)m_audioInfo.sampleRate * secondsPerFrame);

    // Simulate buffer consumption
    StreamBuffer& playBuf = m_buffers[m_playBuffer];
    u32 bytesPerFrame = samplesPerFrame * m_audioInfo.channelCount * sizeof(s16);
    playBuf.consumed += bytesPerFrame;

    // Check if the playback buffer needs to be swapped
    if (playBuf.consumed >= playBuf.filled) {
        // Switch to the other buffer
        u32 nextBuf = m_playBuffer ^ 1;
        StreamBuffer& nextBufRef = m_buffers[nextBuf];

        if (nextBufRef.ready && nextBufRef.filled > 0) {
            // Upload the next buffer to the voice
            if (m_voiceMgr != nullptr && m_voiceIndex >= 0) {
                /* AX_SDK: AXSetVoiceAddr() → alBufferData() */
                m_voiceMgr->setAddr((u32)m_voiceIndex,
                                   nextBufRef.data, nextBufRef.filled,
                                   m_audioInfo.sampleRate,
                                   (u16)m_audioInfo.channelCount, 0);
            }

            // Swap buffers
            m_playBuffer = nextBuf;
            m_currentSample += (playBuf.consumed /
                               (m_audioInfo.channelCount * sizeof(s16)));

            // Reset consumed buffer
            playBuf.consumed = 0;
            playBuf.filled = 0;
            playBuf.ready = 0;
            playBuf.active = 0;

            // Refill the now-free buffer
            u32 decoded = refillBuffer(playBuf);
            playBuf.filled = decoded;
            playBuf.ready = (decoded > 0) ? 1 : 0;
        } else {
            // No buffer ready — stream underrun or end of data
            if (m_eof) {
                if (m_loopEnabled) {
                    // Loop back to start
                    seek(m_loopStartSample);
                } else {
                    // Stream finished
                    m_state = 0;

                    // Notify handles
                    for (u32 i = 0; i < m_handleCount; i++) {
                        if (m_handles[i] != nullptr) {
                            m_handles[i]->detach();
                            m_handles[i] = nullptr;
                        }
                    }
                    m_handleCount = 0;
                }
            }
        }
    }

    // Update base class (handles fades, 3D)
    SoundPlayer::update();
}

// ============================================================================
// seek(samplePosition)
// @addr 0x80571800 (640 bytes, 100 code lines)
// ============================================================================
bool StreamPlayer::seek(u32 samplePosition) {
    if (m_audioInfo.blockSize == 0 || m_audioInfo.samplesPerBlock == 0) {
        return false;
    }

    // Calculate the block containing the target sample
    u32 blockIndex = samplePosition / m_audioInfo.samplesPerBlock;
    if (blockIndex >= m_audioInfo.blockCount) {
        blockIndex = m_audioInfo.blockCount - 1;
    }

    m_currentBlock = blockIndex;
    m_currentSample = samplePosition;
    m_eof = 0;

    // Refill both buffers from the new position
    for (u32 i = 0; i < 2; i++) {
        m_buffers[i].filled = 0;
        m_buffers[i].consumed = 0;
        m_buffers[i].ready = 0;

        u32 decoded = refillBuffer(m_buffers[i]);
        m_buffers[i].filled = decoded;
        m_buffers[i].ready = (decoded > 0) ? 1 : 0;
    }

    return true;
}

// ============================================================================
// getSampleRate()
// @addr 0x80571A00 (68 bytes)
// ============================================================================
u32 StreamPlayer::getSampleRate() const {
    return m_audioInfo.sampleRate;
}

// ============================================================================
// getChannelCount()
// @addr 0x80571A40 (68 bytes)
// ============================================================================
u32 StreamPlayer::getChannelCount() const {
    return m_audioInfo.channelCount;
}

// ============================================================================
// getTotalSamples()
// @addr 0x80571A80 (68 bytes)
// ============================================================================
u32 StreamPlayer::getTotalSamples() const {
    return m_audioInfo.totalSamples;
}

// ============================================================================
// getCurrentSample()
// @addr 0x80571AC0 (92 bytes)
// ============================================================================
u32 StreamPlayer::getCurrentSample() const {
    return m_currentSample;
}

// ============================================================================
// isFinished()
// ============================================================================
bool StreamPlayer::isFinished() const {
    return m_eof && !m_loopEnabled;
}

// ============================================================================
// setLoopPoints(loopStart, loopEnd)
// @addr 0x80571B00 (200 bytes)
// ============================================================================
void StreamPlayer::setLoopPoints(u32 loopStart, u32 loopEnd) {
    m_loopStartSample = loopStart;
    m_loopEndSample = (loopEnd == 0) ? m_audioInfo.totalSamples : loopEnd;
    m_loopEnabled = 1;
}

// ============================================================================
// setBufferSize(size)
// ============================================================================
void StreamPlayer::setBufferSize(u32 size) {
    if (m_state != 0) return; // Can't change while playing
    m_bufferSize = ALIGN32(size);
    if (m_bufferSize < 0x2000) m_bufferSize = 0x2000;  // Min 8KB
    if (m_bufferSize > 0x10000) m_bufferSize = 0x10000; // Max 64KB
}

// ============================================================================
// parseBRSTMHeader()
// @addr 0x80571C00 (560 bytes, 88 code lines)
//
// Parses the BRSTM file header. The BRSTM format has:
//   - Header with magic "RSTM"
//   - HEAD section with audio format info
//   - ADPC section with ADPCM coefficients
//   - DATA section with the actual audio blocks
// ============================================================================
bool StreamPlayer::parseBRSTMHeader() {
    if (m_brstmSize < 0x40) return false;

    // Read header magic
    std::memcpy(m_header.magic, m_brstmData, 4);
    if (std::memcmp(m_header.magic, "RSTM", 4) != 0) return false;

    m_header.fileSize = *(const u32*)(m_brstmData + 0x04);
    m_header.version  = *(const u16*)(m_brstmData + 0x08);
    m_header.headerSize = *(const u16*)(m_brstmData + 0x0A);
    m_header.sections = *(const u16*)(m_brstmData + 0x0C);

    // Parse HEAD section (audio info)
    // The HEAD section offset is at header offset 0x10
    if (m_brstmSize < 0x40) return false;

    // HEAD section typically starts at offset 0x48 in the file
    u32 headOffset = 0x48;
    if (headOffset + sizeof(BRSTMAudioInfo) > m_brstmSize) return false;

    std::memcpy(&m_audioInfo, m_brstmData + headOffset + 0x08,
                sizeof(BRSTMAudioInfo));

    // Validate audio info
    if (m_audioInfo.sampleRate == 0) return false;
    if (m_audioInfo.channelCount == 0 || m_audioInfo.channelCount > 2) return false;
    if (m_audioInfo.blockSize == 0) return false;

    // Parse ADPC section (ADPCM coefficients)
    u32 adpcOffset = 0x90; // Approximate offset
    if (adpcOffset + sizeof(BRSTMADPCMInfo) * 2 <= m_brstmSize) {
        for (u32 ch = 0; ch < m_audioInfo.channelCount && ch < 2; ch++) {
            std::memcpy(&m_adpcmInfo[ch],
                       m_brstmData + adpcOffset + 0x10 + ch * sizeof(BRSTMADPCMInfo),
                       sizeof(BRSTMADPCMInfo));
        }
    }

    return true;
}

// ============================================================================
// decodeBlock(outBuffer, blockIndex)
// @addr 0x80572000 (840 bytes, 132 code lines, has_assert)
//
// Decodes one ADPCM block from the BRSTM data.
// On Wii, the AX DSP hardware does this automatically.
// On PC, we need a software DSP-ADPCM decoder.
//
// /* AX_SDK: Hardware ADPCM decode → software decode_adpcm() */
// ============================================================================
u32 StreamPlayer::decodeBlock(void* outBuffer, u32 blockIndex) {
    if (blockIndex >= m_audioInfo.blockCount) {
        m_eof = 1;
        return 0;
    }

    // Determine number of samples in this block
    u32 numSamples = m_audioInfo.samplesPerBlock;
    u32 bytesPerBlock = m_audioInfo.blockSize;

    if (blockIndex == m_audioInfo.blockCount - 1) {
        // Last block may be shorter
        numSamples = m_audioInfo.lastBlockSamples;
        bytesPerBlock = m_audioInfo.lastBlockSize;
    }

    // On Wii, the DSP hardware decodes ADPCM directly.
    // For the PC port, we output silence as a placeholder.
    // A full implementation would decode DSP-ADPCM here.
    //
    // /* AX_SDK: AXSetVoiceSrcType(voice, AX_SRC_TYPE_ADPCM) handles this on Wii */
    u32 pcmSize = numSamples * m_audioInfo.channelCount * sizeof(s16);
    if (outBuffer != nullptr) {
        std::memset(outBuffer, 0, pcmSize);
    }

    return pcmSize;
}

// ============================================================================
// refillBuffer(buffer)
// @addr 0x80572400 (780 bytes, 120 code lines)
//
// Fills a streaming buffer by decoding ADPCM blocks until full.
// Returns the number of bytes decoded.
// ============================================================================
u32 StreamPlayer::refillBuffer(StreamBuffer& buffer) {
    if (buffer.data == nullptr || m_eof) return 0;

    u8* dest = (u8*)buffer.data;
    u32 totalDecoded = 0;
    u32 maxBytes = buffer.size;

    while (totalDecoded < maxBytes && m_currentBlock < m_audioInfo.blockCount) {
        // Decode one block
        u32 decoded = decodeBlock(dest, m_currentBlock);
        if (decoded == 0) break;

        dest += decoded;
        totalDecoded += decoded;
        m_currentBlock++;
        m_currentSample += m_audioInfo.samplesPerBlock;

        // Check loop point
        if (m_currentSample >= m_loopEndSample && m_loopEnabled) {
            m_currentBlock = m_loopStartSample / m_audioInfo.samplesPerBlock;
            m_currentSample = m_loopStartSample;
            break;
        }
    }

    return totalDecoded;
}

// ============================================================================
// allocAligned(size)
//
// Allocates 32-byte aligned memory for DMA buffers.
// On Wii: uses OSAllocAligned(32).
// On PC: uses aligned_alloc or posix_memalign.
// ============================================================================
void* StreamPlayer::allocAligned(u32 size) {
    // Ensure size is 32-byte aligned
    size = ALIGN32(size);

    // Use std::aligned_alloc (C++17)
    void* ptr = std::aligned_alloc(32, size);
    if (ptr != nullptr) {
        std::memset(ptr, 0, size);
    }
    return ptr;
}

// ============================================================================
// freeAligned(ptr)
// ============================================================================
void StreamPlayer::freeAligned(void* ptr) {
    if (ptr != nullptr) {
        std::free(ptr); // aligned_alloc memory is freed with free()
    }
}

} // namespace snd
} // namespace nw4r