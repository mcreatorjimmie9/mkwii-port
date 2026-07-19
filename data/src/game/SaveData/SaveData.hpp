#pragma once
// ============================================================================
// SaveData.hpp — Wii Save File Manager
//
// MKWii stores game data in the Wii System Menu save file:
//   /title/00010004/524d4345/data/save.dat
//
// The save file contains:
//   - License data (up to 3 licenses: Mii name, settings, records)
//   - Ghost data (up to 36 time trial ghosts)
//   - Trophy data (VR points, race counts)
//   - Unlocked data (characters, vehicles, courses)
//   - Options (drift mode, sound, controls)
//
// On PC, we redirect save I/O to a local file in the user's config
// directory. This header defines the save layout and API.
//
// Categorization: GENESIS Phase 5 (SaveData Module)
// ============================================================================

#include "rk_common.h"
#include "GhostFile.hpp"

// ============================================================================
// Save File Layout Constants
// ============================================================================

static const u32 SAVE_MAGIC         = 0x524D4345; // "RMCE"
static const u32 SAVE_VERSION       = 3;
static const u32 MAX_LICENSES       = 3;
static const u32 MAX_GHOSTS_PER_LICENSE = 36;
static const u32 MAX_RECORDS        = 32; // per course
static const u32 SAVE_FILE_SIZE     = 0x2C000; // ~180 KB (Wii NAND block)

// ============================================================================
// Unlocked Content Bitfields
// ============================================================================

struct UnlockedData {
    u32 characters;    // bitfield: which characters are unlocked
    u32 vehicles;      // bitfield: which vehicles are unlocked
    u32 courses;       // bitfield: which cups/courses are unlocked
    u32 _pad;
};

// ============================================================================
// Save Header — First 0x40 bytes of save file
// ============================================================================

#pragma pack(push, 1)

struct SaveHeader {
    u32  magic;           // 0x00: must be SAVE_MAGIC
    u16  version;         // 0x04: save format version
    u16  _pad0;           // 0x06
    u32  licenseCount;    // 0x08: number of active licenses (1-3)
    u32  activeLicense;   // 0x0C: currently selected license index
    u32  checksum;        // 0x10: CRC32 of data section
    u32  dataSize;        // 0x14: size of data section
    u32  totalPlayTime;   // 0x18: total seconds played
    u32  totalRaceCount;  // 0x1C: total races completed
    u32  totalWinCount;   // 0x20: total races won
    u32  flags;           // 0x24: misc flags (credits seen, etc.)
    u8   _pad1[0x1C];     // 0x28: padding to 0x44
};

// ============================================================================
// Options — Game Settings
// ============================================================================

struct SaveOptions {
    u8  driftMode;        // 0: Manual, 1: Auto
    u8  soundVolume;      // 0-100
    u8  musicVolume;      // 0-100
    u8  sfxVolume;        // 0-100
    u8  rumble;           // 0: Off, 1: On
    u8  controlScheme;    // 0: Wii Wheel, 1: Nunchuk, 2: Classic, 3: GC
    u8  stereoType;       // 0: Mono, 1: Stereo, 2: Surround
    u8  targetFPS;        // 0: 30, 1: 60 (PC-only)
    u8  language;         // 0: English, 1: Japanese, etc.
    u8  _pad[0x07];
};

#pragma pack(pop)

// Forward declaration
class License;

// ============================================================================
// SaveData — Main Save File Manager
// ============================================================================

namespace Save {

class SaveData {
public:
    SaveData();
    ~SaveData();

    // --- File Operations ---
    // Load save from disk (or NAND on Wii)
    // Returns 0 on success, error code on failure
    s32 load();

    // Write save to disk
    s32 save();

    // Check if a save file exists
    bool exists();

    // Create a new default save file
    s32 createDefault();

    // Delete the save file
    s32 erase();

    // --- License Access ---
    License* getLicense(u32 index);
    License* getActiveLicense();
    s32 setActiveLicense(u32 index);
    s32 createLicense(const char* name, System::Mii* mii);
    s32 deleteLicense(u32 index);

    // --- Ghost Data Access ---
    // Ghosts are stored per-license
    System::GhostFile* getGhost(u32 licenseIdx, u32 ghostIdx);
    s32 saveGhost(u32 licenseIdx, const System::RawGhostFile& raw);
    s32 deleteGhost(u32 licenseIdx, u32 ghostIdx);

    // --- Options ---
    SaveOptions* getOptions() { return &mOptions; }

    // --- Unlocked Content ---
    UnlockedData* getUnlocked() { return &mUnlocked; }
    bool isCharacterUnlocked(u32 charId) const;
    bool isVehicleUnlocked(u32 vehicleId) const;
    void unlockCharacter(u32 charId);
    void unlockVehicle(u32 vehicleId);

    // --- Save Info ---
    u32 getTotalPlayTime() const { return mHeader.totalPlayTime; }
    u32 getTotalRaceCount() const { return mHeader.totalRaceCount; }
    void addRaceResult(bool won, u32 secondsPlayed);

    // --- Validation ---
    bool isValid() const;
    bool verifyChecksum();
    u32  calculateChecksum();

private:
    SaveHeader    mHeader;
    SaveOptions   mOptions;
    UnlockedData  mUnlocked;
    License*      mLicenses[MAX_LICENSES];
    bool          mDirty; // true if save needs writing
    u8*           mRawData; // raw save file buffer
};

} // namespace Save