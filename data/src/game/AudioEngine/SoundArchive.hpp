#pragma once
// ============================================================================
// SoundArchive.hpp — BRSAR Sound Archive Manager
// Reconstructed from nw4r::snd::SoundArchive (Cluster 6: 0x807200-0x80727F)
//
// The SoundArchive manages the BRSAR (Binary Sound ARchive) file that
// contains all sound effects and music data for Mario Kart Wii.
//
// Key functions reconstructed:
//   0x8072000C: SoundArchive::SoundArchive()    — Constructor
//   0x8072015C: SoundArchive::load()            — Load BRSAR file
//   0x80720700: SoundArchive::unload()          — Unload archive
//   0x80720900: SoundArchive::getWaveInfo()     — Get wave metadata
//   0x80720C00: SoundArchive::getWaveData()     — Get wave data pointer
//   0x80720F00: SoundArchive::getStreamInfo()   — Get stream metadata
//   0x80721200: SoundArchive::getStreamData()   — Get stream data ptr
//   0x80721500: SoundArchive::getSoundCount()   — Total sound count
//   0x80721700: SoundArchive::getStreamCount()  — Total stream count
//   0x80721900: SoundArchive::findSound()       — Lookup by ID
//   0x80721C00: SoundArchive::findStream()      — Lookup stream by ID
//   0x80721F68: SoundArchive::decodeWave()      — Decode ADPCM→PCM
//   0x80722400: SoundArchive::getSoundName()    — Get sound name string
//   0x80722700: SoundArchive::getCategory()     — Get sound category
//   0x80722A00: SoundArchive::getDefaultVolume() — Get default volume
//   0x80722D00: SoundArchive::getDefaultPitch()  — Get default pitch
//   0x80722E14: SoundArchive::getDefaultPan()    — Get default pan
//   0x80723100: SoundArchive::getInfoTable()    — Get info table ptr
//   0x80723400: SoundArchive::getSymbTable()    — Get symbol table ptr
//   0x80723700: SoundArchive::isLoaded()        — Check if loaded
//   0x80723A00: SoundArchive::getExternalFile() — Get external file ref
// ============================================================================

#include <rk_types.h>
#include "SoundTypes.hpp"

namespace nw4r {
namespace snd {

// ============================================================================
// Sound Archive Entry — Describes a single sound in the BRSAR
// 0x58 bytes per entry (matches SFXParamEntry layout in SoundTypes.hpp)
// ============================================================================

// ============================================================================
// Sound Archive Symbol Entry — Name lookup
// ============================================================================
struct SoundArchiveSymbol {
    u32 nameOffset;     // 0x00: Offset to name string in symbol table
    u32 soundId;        // 0x04: Sound ID
};

// ============================================================================
// Stream (BGM) Archive Entry
// ============================================================================
struct StreamArchiveEntry {
    u32 streamId;       // 0x00: Stream ID
    u32 dataOffset;     // 0x04: Offset to BRSTM data in file
    u32 dataSize;       // 0x08: Size of BRSTM data
    u16 sampleRate;     // 0x0C: Sample rate
    u16 channels;       // 0x0E: Channel count
    u32 loopStart;      // 0x10: Loop start sample
    u32 totalSamples;   // 0x14: Total samples
    u8  name[32];       // 0x18: Stream name
};
static_assert(sizeof(StreamArchiveEntry) == 0x38);

// ============================================================================
// SoundArchive — BRSAR File Manager
//
// Manages access to the BRSAR archive containing all game audio.
// On Wii: memory-maps the file or loads into MEM2 (ARAM)
// On PC:  loads the file into heap memory
// ============================================================================
class SoundArchive {
public:
    SoundArchive();
    ~SoundArchive();

    // --- Loading ---
    // @addr 0x8072015C (672 bytes, 110 code lines)
    // Loads a BRSAR file from the given data pointer.
    // The archive data must remain valid while the archive is in use.
    bool load(const void* data, u32 size);

    // @addr 0x80720700
    // Unloads the archive and releases all resources.
    void unload();

    // --- Wave Data Access ---
    // @addr 0x80720900
    // Gets wave metadata for a sound ID.
    bool getWaveInfo(u32 soundId, WaveInfo* outInfo) const;

    // @addr 0x80720C00
    // Gets a pointer to the raw wave data for a sound ID.
    // On Wii: returns a pointer into the BRSAR data.
    // On PC:  may decode ADPCM to PCM on demand.
    const void* getWaveData(u32 soundId, u32* outSize = nullptr) const;

    // --- Stream Data Access ---
    // @addr 0x80720F00
    bool getStreamInfo(u32 streamId, StreamArchiveEntry* outInfo) const;

    // @addr 0x80721200
    const void* getStreamData(u32 streamId, u32* outSize = nullptr) const;

    // --- Queries ---
    // @addr 0x80721500
    u32 getSoundCount() const;

    // @addr 0x80721700
    u32 getStreamCount() const;

    // @addr 0x80721900
    // Finds a sound ID by its name string.
    s32 findSound(const char* name) const;

    // @addr 0x80721C00
    s32 findStream(const char* name) const;

    // @addr 0x80722000
    // Get detailed sound info entry from the info table
    const void* getSoundInfo(u32 soundId) const;

    // @addr 0x80722300
    // Get sequence info from the info table
    const void* getSequenceInfo(u32 seqId) const;

    // @addr 0x80722500
    u32 getSequenceCount() const;

    // @addr 0x80722400
    const char* getSoundName(u32 soundId) const;

    // @addr 0x80722700
    u32 getCategory(u32 soundId) const;

    // @addr 0x80722A00
    f32 getDefaultVolume(u32 soundId) const;

    // @addr 0x80722D00
    f32 getDefaultPitch(u32 soundId) const;

    // @addr 0x80722E14 (820 bytes, 89 code lines)
    f32 getDefaultPan(u32 soundId) const;

    // @addr 0x80723100
    const void* getInfoTable() const;

    // @addr 0x80723400
    const void* getSymbTable() const;

    // @addr 0x80723700
    bool isLoaded() const;

    // @addr 0x80723A00
    void* getExternalFile(u32 fileId);

    // --- ADPCM Decode ---
    // @addr 0x80721F68 (544 bytes, 55 code lines)
    // Decodes ADPCM data to 16-bit PCM.
    // Wii AX hardware does this automatically; PC needs software decode.
    // /* AX_SDK: AXDecode is hardware → use decode_adpcm() on PC */
    static u32 decodeADPCM(const void* adpcmData, void* pcmOut,
                           u32 numSamples, u16 channels);

    // --- Raw Data Access ---
    const u8* getRawData() const { return m_data; }
    u32 getRawSize() const { return m_size; }

private:
    // Validate BRSAR header
    bool validateHeader() const;

    // Parse internal tables
    void parseInfoTable();
    void parseSymbTable();
    void parseWaveTable();

    // Archive data
    const u8* m_data;               // 0x00: Pointer to BRSAR data
    u32 m_size;                     // 0x04: BRSAR file size
    BRSARHeader m_header;           // 0x08: Parsed header

    // Table pointers (offsets into m_data)
    const u8* m_symbTable;          // 0x30: Symbol table (name → ID mapping)
    const u8* m_infoTable;          // 0x34: Info table (per-sound metadata)
    const u8* m_waveTable;          // 0x38: Wave table (wave data offsets)
    const u8* m_streamTable;        // 0x3C: Stream table (BRSTM offsets)

    // Counts
    u32 m_soundCount;               // 0x40: Number of sounds
    u32 m_streamCount;              // 0x44: Number of streams
    u32 m_waveCount;                // 0x48: Number of unique waves

    // Loaded flag
    bool m_loaded;                  // 0x4C
};

} // namespace snd
} // namespace nw4r