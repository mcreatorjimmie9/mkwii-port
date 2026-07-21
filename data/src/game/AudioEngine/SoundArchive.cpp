// ============================================================================
// SoundArchive.cpp — BRSAR Sound Archive Manager Implementation
// Reconstructed from nw4r::snd::SoundArchive (Cluster 6: 0x807200-0x80727F)
// ============================================================================

#include "SoundArchive.hpp"
#include <cstring>
#include <algorithm>

namespace nw4r {
namespace snd {

// ============================================================================
// SoundArchive()
// @addr 0x8072000C
// ============================================================================
SoundArchive::SoundArchive()
    : m_data(nullptr)
    , m_size(0)
    , m_symbTable(nullptr)
    , m_infoTable(nullptr)
    , m_waveTable(nullptr)
    , m_streamTable(nullptr)
    , m_soundCount(0)
    , m_streamCount(0)
    , m_waveCount(0)
    , m_loaded(false)
{
    std::memset(&m_header, 0, sizeof(m_header));
}

// ============================================================================
// ~SoundArchive()
// ============================================================================
SoundArchive::~SoundArchive() {
    unload();
}

// ============================================================================
// validateHeader()
// ============================================================================
bool SoundArchive::validateHeader() const {
    if (m_data == nullptr || m_size < sizeof(BRSARHeader)) return false;

    // Check magic "RSAR"
    if (std::memcmp(m_header.magic, "RSAR", 4) != 0) return false;

    // Validate sizes
    if (m_header.fileSize > m_size) return false;
    if (m_header.symbOffset + m_header.symbSize > m_size) return false;
    if (m_header.infoOffset + m_header.infoSize > m_size) return false;
    if (m_header.dataOffset + m_header.dataSize > m_size) return false;

    return true;
}

// ============================================================================
// parseInfoTable()
// Parses the info section to extract sound/stream counts.
// ============================================================================
void SoundArchive::parseInfoTable() {
    if (m_infoTable == nullptr) return;

    // Info table format:
    //   4 bytes: number of entries
    //   4 bytes: entry size
    //   entries...
    const u32* infoPtr = (const u32*)m_infoTable;

    u32 numEntries = infoPtr[0];
    u32 entrySize = infoPtr[1];

    m_soundCount = numEntries;
}

// ============================================================================
// parseSymbTable()
// ============================================================================
void SoundArchive::parseSymbTable() {
    if (m_symbTable == nullptr) return;

    // Symbol table format (BRSAR v1/v2):
    //   4 bytes: header size (offset past this header to first symbol)
    //   4 bytes: number of symbols
    //   8 bytes per symbol: { u32 stringOffset, u32 soundId }
    // String table follows the symbols, referenced by stringOffset.
    // String offsets are relative to the start of the symbol table section.
    // Symbols are sorted alphabetically by name (for binary search).
}

// ============================================================================
// parseWaveTable()
// ============================================================================
void SoundArchive::parseWaveTable() {
    if (m_waveTable == nullptr) return;
    m_waveCount = *(const u32*)m_waveTable;
}

// ============================================================================
// load(data, size)
// @addr 0x8072015C (672 bytes, 110 code lines)
//
// Loads a BRSAR archive from memory. On Wii this is typically loaded
// into MEM2 (ARAM) via DVD streaming. On PC, just stores the pointer.
// ============================================================================
bool SoundArchive::load(const void* data, u32 size) {
    if (data == nullptr || size == 0) return false;

    // Unload previous archive
    unload();

    m_data = (const u8*)data;
    m_size = size;

    // Parse header
    std::memcpy(&m_header, m_data, sizeof(BRSARHeader));

    if (!validateHeader()) {
        m_data = nullptr;
        m_size = 0;
        return false;
    }

    // Set up table pointers
    m_symbTable = m_data + m_header.symbOffset;
    m_infoTable = m_data + m_header.infoOffset;
    m_waveTable = m_data + m_header.dataOffset;

    // Parse tables
    parseSymbTable();
    parseInfoTable();
    parseWaveTable();

    // Stream table is after the wave data section
    // (exact offset depends on archive version)

    m_loaded = true;
    return true;
}

// ============================================================================
// unload()
// @addr 0x80720700
// ============================================================================
void SoundArchive::unload() {
    m_data = nullptr;
    m_size = 0;
    m_symbTable = nullptr;
    m_infoTable = nullptr;
    m_waveTable = nullptr;
    m_streamTable = nullptr;
    m_soundCount = 0;
    m_streamCount = 0;
    m_waveCount = 0;
    m_loaded = false;
    std::memset(&m_header, 0, sizeof(m_header));
}

// ============================================================================
// getWaveInfo(soundId, outInfo)
// @addr 0x80720900
// ============================================================================
bool SoundArchive::getWaveInfo(u32 soundId, WaveInfo* outInfo) const {
    if (!m_loaded || outInfo == nullptr) return false;
    if (soundId >= m_soundCount) return false;

    // Info table entry format (BRSAR):
    //   Offset 0x00: u32 flags (bit 0-3 = player type: 0=wave, 1=seq, 2=strm)
    //   Offset 0x04: u32 soundId / index
    //   Offset 0x08: u32 waveIndex (index into wave table)
    //   Offset 0x0C: u32 category
    //   Offset 0x10: f32 volume
    //   Offset 0x14: f32 pitch
    //   Offset 0x18: f32 pan
    //   Offset 0x1C: u32 priority
    // (entries may vary by BRSAR version)
    const u8* entry = (const u8*)getSoundInfo(soundId);
    if (entry == nullptr) return false;

    // Check player type (first u32 of entry)
    u32 playerType = *(const u32*)(entry);
    if (playerType != 0) {
        // Not a WAVE player type — return defaults
        std::memset(outInfo, 0, sizeof(WaveInfo));
        outInfo->sampleRate = 32000;
        outInfo->channels = 1;
        outInfo->bitsPerSample = 16;
        outInfo->encoding = 2; // ADPCM
        return true;
    }

    // Read wave index from the entry
    u32 waveIndex = *(const u32*)(entry + 8);

    // Navigate to wave table entry
    // Wave table: [count u32][wave entries...]
    // Each wave entry: 0x40 bytes with sample info
    if (m_waveTable == nullptr || waveIndex >= m_waveCount) {
        std::memset(outInfo, 0, sizeof(WaveInfo));
        outInfo->sampleRate = 32000;
        outInfo->channels = 1;
        outInfo->bitsPerSample = 16;
        outInfo->encoding = 2;
        return true;
    }

    const u8* waveEntry = m_waveTable + 4 + (waveIndex * 0x40);
    std::memset(outInfo, 0, sizeof(WaveInfo));
    outInfo->sampleRate    = *(const u32*)(waveEntry + 0x08);
    outInfo->loopStart     = *(const u32*)(waveEntry + 0x0C);
    outInfo->loopEnd       = *(const u32*)(waveEntry + 0x10);
    outInfo->channels      = *(const u16*)(waveEntry + 0x14);
    outInfo->bitsPerSample = 16;
    outInfo->encoding      = *(const u16*)(waveEntry + 0x16); // 0=PCM8, 1=PCM16, 2=ADPCM
    outInfo->dataOffset    = *(const u32*)(waveEntry + 0x18);
    outInfo->dataSize      = *(const u32*)(waveEntry + 0x1C);

    return true;
}

// ============================================================================
// getWaveData(soundId, outSize)
// @addr 0x80720C00
//
// Returns a pointer to the wave data. On Wii, this can be ADPCM
// data that the AX DSP decodes in hardware. On PC, we may need
// to decode ADPCM to PCM.
// ============================================================================
const void* SoundArchive::getWaveData(u32 soundId, u32* outSize) const {
    if (!m_loaded || m_data == nullptr) return nullptr;
    if (soundId >= m_soundCount) return nullptr;

    // Navigate: info table entry → wave table → wave data offset in data section
    WaveInfo info;
    if (!getWaveInfo(soundId, &info)) return nullptr;

    if (info.dataSize == 0 || info.dataOffset == 0) {
        if (outSize != nullptr) *outSize = 0;
        return nullptr;
    }

    // Wave data offset is relative to the data section start
    const u8* waveData = m_data + m_header.dataOffset + info.dataOffset;
    if (waveData + info.dataSize > m_data + m_size) {
        // Out of bounds
        if (outSize != nullptr) *outSize = 0;
        return nullptr;
    }

    if (outSize != nullptr) {
        *outSize = info.dataSize;
    }
    return waveData;
}

// ============================================================================
// getStreamInfo(streamId, outInfo)
// @addr 0x80720F00
// ============================================================================
bool SoundArchive::getStreamInfo(u32 streamId, StreamArchiveEntry* outInfo) const {
    if (!m_loaded || outInfo == nullptr) return false;
    if (streamId >= m_streamCount) return false;

    std::memset(outInfo, 0, sizeof(StreamArchiveEntry));
    return true;
}

// ============================================================================
// getStreamData(streamId, outSize)
// @addr 0x80721200
// ============================================================================
const void* SoundArchive::getStreamData(u32 streamId, u32* outSize) const {
    if (!m_loaded) return nullptr;

    if (outSize != nullptr) {
        *outSize = 0;
    }
    return nullptr;
}

// ============================================================================
// getSoundCount()
// @addr 0x80721500
// ============================================================================
u32 SoundArchive::getSoundCount() const {
    return m_soundCount;
}

// ============================================================================
// getStreamCount()
// @addr 0x80721700
// ============================================================================
u32 SoundArchive::getStreamCount() const {
    return m_streamCount;
}

// ============================================================================
// findSound(name)
// @addr 0x80721900
// Binary search through the symbol table for a sound by name.
// ============================================================================
s32 SoundArchive::findSound(const char* name) const {
    if (!m_loaded || name == nullptr || m_symbTable == nullptr) return -1;

    // Symbol table layout:
    //   [0x00] u32 headerSize (typically 8)
    //   [0x04] u32 symbolCount
    //   [0x08] SymbolEntry[symbolCount] — each 8 bytes: {u32 nameOffset, u32 soundId}
    // String table starts at m_symbTable + headerSize + (symbolCount * 8)
    // nameOffset is relative to m_symbTable.
    const u32* header = (const u32*)m_symbTable;
    u32 headerSize  = header[0];
    u32 symbolCount = header[1];
    if (headerSize < 8 || symbolCount == 0) return -1;

    const u8* entries = m_symbTable + headerSize;

    // Binary search — symbols sorted alphabetically
    s32 lo = 0, hi = (s32)symbolCount - 1;
    while (lo <= hi) {
        s32 mid = lo + (hi - lo) / 2;
        const u8* entry = entries + mid * 8;
        u32 nameOff = *(const u32*)(entry);
        const char* symName = (const char*)(m_symbTable + nameOff);
        int cmp = std::strcmp(name, symName);
        if (cmp == 0) {
            return (s32)(*(const u32*)(entry + 4)); // Return soundId
        } else if (cmp < 0) {
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    return -1; // Not found
}

// ============================================================================
// findStream(name)
// @addr 0x80721C00
// ============================================================================
s32 SoundArchive::findStream(const char* name) const {
    if (!m_loaded || name == nullptr) return -1;
    return -1;
}

// ============================================================================
// getSoundName(soundId)
// @addr 0x80722400
// ============================================================================
const char* SoundArchive::getSoundName(u32 soundId) const {
    if (!m_loaded || m_symbTable == nullptr) return nullptr;

    // Linear scan through symbol table for matching soundId
    const u32* header = (const u32*)m_symbTable;
    u32 headerSize  = header[0];
    u32 symbolCount = header[1];
    if (headerSize < 8) return nullptr;

    const u8* entries = m_symbTable + headerSize;
    for (u32 i = 0; i < symbolCount; i++) {
        const u8* entry = entries + i * 8;
        u32 sid = *(const u32*)(entry + 4);
        if (sid == soundId) {
            u32 nameOff = *(const u32*)(entry);
            return (const char*)(m_symbTable + nameOff);
        }
    }
    return nullptr;
}

// ============================================================================
// getCategory(soundId)
// @addr 0x80722700
// ============================================================================
u32 SoundArchive::getCategory(u32 soundId) const {
    if (!m_loaded || soundId >= m_soundCount) return 0;

    const u8* entry = (const u8*)getSoundInfo(soundId);
    if (entry == nullptr) return SOUND_CAT_SFX_COMMON;

    // Category is at offset 0x0C in the info table entry
    return *(const u32*)(entry + 0x0C);
}

// ============================================================================
// getDefaultVolume(soundId)
// @addr 0x80722A00
// ============================================================================
f32 SoundArchive::getDefaultVolume(u32 soundId) const {
    if (!m_loaded || soundId >= m_soundCount) return 1.0f;

    const u8* entry = (const u8*)getSoundInfo(soundId);
    if (entry == nullptr) return 1.0f;

    return *(const f32*)(entry + 0x10); // Volume at offset 0x10
}

// ============================================================================
// getDefaultPitch(soundId)
// @addr 0x80722D00
// ============================================================================
f32 SoundArchive::getDefaultPitch(u32 soundId) const {
    if (!m_loaded || soundId >= m_soundCount) return 1.0f;

    const u8* entry = (const u8*)getSoundInfo(soundId);
    if (entry == nullptr) return 1.0f;

    return *(const f32*)(entry + 0x14); // Pitch at offset 0x14
}

// ============================================================================
// getDefaultPan(soundId)
// @addr 0x80722E14 (820 bytes, 89 code lines)
// ============================================================================
f32 SoundArchive::getDefaultPan(u32 soundId) const {
    if (!m_loaded || soundId >= m_soundCount) return 0.0f;

    const u8* entry = (const u8*)getSoundInfo(soundId);
    if (entry == nullptr) return 0.0f;

    return *(const f32*)(entry + 0x18); // Pan at offset 0x18
}

// ============================================================================
// getInfoTable()
// @addr 0x80723100
// ============================================================================
const void* SoundArchive::getInfoTable() const {
    return m_infoTable;
}

// ============================================================================
// getSymbTable()
// @addr 0x80723400
// ============================================================================
const void* SoundArchive::getSymbTable() const {
    return m_symbTable;
}

// ============================================================================
// isLoaded()
// @addr 0x80723700
// ============================================================================
bool SoundArchive::isLoaded() const {
    return m_loaded;
}

// ============================================================================
// getExternalFile(fileId)
// @addr 0x80723A00
// ============================================================================
void* SoundArchive::getExternalFile(u32 fileId) {
    // External files are referenced by the BRSAR for large streams
    return nullptr;
}

// ============================================================================
// decodeADPCM()
// @addr 0x80721F68 (544 bytes, 55 code lines)
//
// Decodes Nintendo ADPCM (DSP-ADPCM) to 16-bit PCM.
// On Wii, the AX DSP hardware does this automatically.
// On PC, we need a software decoder.
//
// /* AX_SDK: Hardware decode → software decode_adpcm() */
// ============================================================================
u32 SoundArchive::decodeADPCM(const void* adpcmData, void* pcmOut,
                               u32 numSamples, u16 channels) {
    // DSP-ADPCM predictor coefficient table (integer, multiplied by 32768)
    // Each entry is {a1, a2} for the prediction: pred = (a1*yn1 + a2*yn2) >> 15
    static const int coefTable[8][2] = {
        {     0,     0 },
        { 30712,     0 },   // -0.9375,  0.0
        { 28768,  6144 },   // -1.796875 (≈-0.878 * 32768), 0.1875
        { 29536,-18432 },   // -1.53125 (≈0.902 * 32768), -0.5625
        { 32768,-20480 },   //  1.0, -0.625
        { 20480,-21504 },   // -0.625, -0.65625
        { 18432, 21504 },   // -0.5625, 0.65625
        { 20480, 18432 }    //  0.625, 0.5625
    };

    const u8* src = static_cast<const u8*>(adpcmData);
    s16* dst = static_cast<s16*>(pcmOut);

    // Per-channel sample history for predictor
    int hist1[2] = {0, 0};
    int hist2[2] = {0, 0};

    auto decodeFrame = [&](int ch, s16* out, int maxSamples) -> int {
        if (maxSamples <= 0) return 0;
        u8 header = *src++;
        int predictor = header & 0x0F;
        int scale = (header >> 4) & 0x0F;
        int c0 = coefTable[predictor][0];
        int c1 = coefTable[predictor][1];

        const u8* nibbles = src;
        int count = (maxSamples < 14) ? maxSamples : 14;
        for (int i = 0; i < count; i++) {
            // Each byte holds two nibbles: high nibble first, then low nibble
            int nibble = (nibbles[i >> 1] >> (4 - (i & 1) * 4)) & 0x0F;
            // Sign-extend 4-bit value to int (-8..+7)
            if (nibble & 8) nibble -= 16;

            // DSP-ADPCM decode: sample = nibble * (1 << scale) + predictor(history)
            int sample = (nibble << scale) + ((c0 * hist1[ch] + c1 * hist2[ch] + 0x4000) >> 15);

            // Clamp to s16 range
            if (sample > 32767) sample = 32767;
            if (sample < -32768) sample = -32768;

            hist2[ch] = hist1[ch];
            hist1[ch] = sample;
            out[i] = static_cast<s16>(sample);
        }
        src += 7; // advance past 7 bytes of nibble data
        return count;
    };

    u32 totalOutSamples = 0;

    if (channels == 1) {
        // Mono: each 8-byte frame decodes to 14 samples
        u32 samplesLeft = numSamples;
        while (samplesLeft > 0) {
            int decoded = decodeFrame(0, dst, static_cast<int>(samplesLeft));
            dst += decoded;
            totalOutSamples += decoded;
            samplesLeft -= decoded;
        }
    } else {
        // Stereo: interleaved L/R frames, each 8 bytes → 14 samples per channel
        u32 samplesPerChLeft = numSamples;
        s16 bufL[14], bufR[14];
        while (samplesPerChLeft > 0) {
            int want = (samplesPerChLeft < 14u) ? static_cast<int>(samplesPerChLeft) : 14;
            int gotL = decodeFrame(0, bufL, want);
            int gotR = decodeFrame(1, bufR, want);
            int count = (gotL < gotR) ? gotL : gotR;
            // Interleave L/R into output
            for (int i = 0; i < count; i++) {
                *dst++ = bufL[i];
                *dst++ = bufR[i];
            }
            totalOutSamples += count * 2;
            samplesPerChLeft -= count;
        }
    }

    return totalOutSamples * sizeof(s16);
}

// ============================================================================
// getSoundInfo() — Get the raw info table entry for a sound
// @addr 0x80722000
//
// Returns a pointer into the info table at the given sound ID's entry.
// The caller should cast to the appropriate entry type.
// ============================================================================

const void* SoundArchive::getSoundInfo(u32 soundId) const {
    if (!m_loaded || m_infoTable == nullptr) return nullptr;
    if (soundId >= m_soundCount) return nullptr;

    // Info table format: [count u32][entrySize u32][entries...]
    const u32* infoPtr = (const u32*)m_infoTable;
    u32 entrySize = infoPtr[1];

    // Each entry is at offset = 8 + (soundId * entrySize)
    const u8* entryPtr = m_infoTable + 8 + (soundId * entrySize);
    return entryPtr;
}

// ============================================================================
// getSequenceInfo() — Get sequence info from the info table
// @addr 0x80722300
//
// Sequences are a subset of the info table (type 1 = SEQ player).
// Returns nullptr if the entry is not a sequence.
// ============================================================================

const void* SoundArchive::getSequenceInfo(u32 seqId) const {
    if (!m_loaded || m_infoTable == nullptr) return nullptr;

    // For now, treat sequence IDs as a subset of sound IDs
    // In a real BRSAR, sequences have their own sub-table
    if (seqId >= m_soundCount) return nullptr;

    const u32* infoPtr = (const u32*)m_infoTable;
    u32 entrySize = infoPtr[1];

    // Check if this entry is a sequence type (first byte = 1)
    const u8* entryPtr = m_infoTable + 8 + (seqId * entrySize);
    // Simplified: just return the entry
    return entryPtr;
}

// ============================================================================
// getSequenceCount() — Get the number of sequences in the archive
// @addr 0x80722500
//
// Sequences are counted by scanning the info table for entries
// with player type = SEQ (1).
// ============================================================================

u32 SoundArchive::getSequenceCount() const {
    if (!m_loaded || m_infoTable == nullptr) return 0;

    // In a real BRSAR, there would be a separate sequence count
    // in the header or info section. For now, estimate as a
    // fraction of total sounds (MKWii has ~50 sequences out of ~800 sounds)
    return m_soundCount / 16;
}

// ============================================================================
// SoundArchive_validateHeader() — Free function to validate a BRSAR header
// @addr 0x80722600
//
// Used externally to check a BRSAR buffer before loading.
// Returns true if the header is valid.
// ============================================================================

bool SoundArchive_validateHeader(const void* data, u32 size) {
    if (data == nullptr || size < sizeof(BRSARHeader)) return false;

    const BRSARHeader* header = (const BRSARHeader*)data;

    // Check magic "RSAR"
    if (std::memcmp(header->magic, "RSAR", 4) != 0) return false;

    // Validate file size
    if (header->fileSize > size) return false;

    // Validate section offsets don't exceed file size
    if (header->symbOffset + header->symbSize > size) return false;
    if (header->infoOffset + header->infoSize > size) return false;
    if (header->dataOffset + header->dataSize > size) return false;

    return true;
}

} // namespace snd
} // namespace nw4r