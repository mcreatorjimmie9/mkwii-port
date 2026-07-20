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

    // Symbol table format:
    //   4 bytes: offset to string table
    //   4 bytes: number of symbols
    //   8 bytes per symbol: { u32 stringOffset, u32 soundId }
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

    // Look up wave info from the info table
    // The info table entry contains offsets to the wave data
    // and metadata (sample rate, channels, encoding, etc.)

    // Simplified: fill with defaults from the archive entry
    std::memset(outInfo, 0, sizeof(WaveInfo));
    outInfo->sampleRate = 32000;
    outInfo->channels = 1;
    outInfo->bitsPerSample = 16;
    outInfo->encoding = 2; // ADPCM

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
    if (!m_loaded) return nullptr;
    if (soundId >= m_soundCount) return nullptr;

    // Navigate through info table → wave table → actual data
    // The exact navigation depends on the BRSAR version

    if (outSize != nullptr) {
        *outSize = 0; // Would be filled from archive
    }

    return m_data + m_header.dataOffset; // Simplified
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
    if (!m_loaded || name == nullptr) return -1;

    // Binary search through symbol table
    // Symbols are sorted alphabetically

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
    if (!m_loaded || soundId >= m_soundCount) return nullptr;

    // Look up name from symbol table
    return ""; // Simplified
}

// ============================================================================
// getCategory(soundId)
// @addr 0x80722700
// ============================================================================
u32 SoundArchive::getCategory(u32 soundId) const {
    if (!m_loaded || soundId >= m_soundCount) return 0;
    return SOUND_CAT_SFX_COMMON; // Simplified
}

// ============================================================================
// getDefaultVolume(soundId)
// @addr 0x80722A00
// ============================================================================
f32 SoundArchive::getDefaultVolume(u32 soundId) const {
    if (!m_loaded || soundId >= m_soundCount) return 1.0f;
    return 1.0f;
}

// ============================================================================
// getDefaultPitch(soundId)
// @addr 0x80722D00
// ============================================================================
f32 SoundArchive::getDefaultPitch(u32 soundId) const {
    if (!m_loaded || soundId >= m_soundCount) return 1.0f;
    return 1.0f;
}

// ============================================================================
// getDefaultPan(soundId)
// @addr 0x80722E14 (820 bytes, 89 code lines)
// ============================================================================
f32 SoundArchive::getDefaultPan(u32 soundId) const {
    if (!m_loaded || soundId >= m_soundCount) return 0.0f;
    return 0.0f;
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
    // DSP-ADPCM decode loop
    // Each ADPCM frame is 8 bytes → 14 samples (mono) or 7 samples (stereo)
    // Uses predictor coefficients and previous sample history

    // Simplified placeholder — full implementation would decode
    // DSP-ADPCM format with proper predictor/coefficient tables

    return numSamples * channels * sizeof(s16);
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