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

// Forward-declare Mii (from system/Mii.hpp, not yet ported)
namespace System { class Mii; }

// ============================================================================
// Save File Layout Constants
// ============================================================================

static const u32 SAVE_MAGIC         = 0x524D4345; // "RMCE"
static const u32 SAVE_VERSION       = 3;
static const u32 MAX_LICENSES       = 3;
static const u32 MAX_GHOSTS_PER_LICENSE = 36;
static const u32 MAX_RECORDS        = 32;
static const u32 SAVE_FILE_SIZE     = 0x2C000; // ~180 KB (Wii NAND block)
static const u32 SAVE_HEADER_SIZE   = 0x40;
static const u32 SAVE_OPTIONS_SIZE  = 0x10;
static const u32 SAVE_UNLOCKED_SIZE = 0x10;
static const u32 NAND_BLOCK_SIZE    = 0x200;  // 512 bytes per NAND block
static const u32 NAND_BLOCK_COUNT   = SAVE_FILE_SIZE / NAND_BLOCK_SIZE;
static const u32 NAND_MAX_BLOCKS    = 0x200;  // 128 KB max NAND space for saves

// ============================================================================
// Unlocked Content Bitfields
// ============================================================================

struct UnlockedData {
    u32 characters;
    u32 vehicles;
    u32 courses;
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
    u8  driftMode;
    u8  soundVolume;
    u8  musicVolume;
    u8  sfxVolume;
    u8  rumble;
    u8  controlScheme;
    u8  stereoType;
    u8  targetFPS;
    u8  language;
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

    // --- Initialization ---
    s32 init();

    // --- File Operations ---
    s32 load();
    s32 save();
    bool exists();
    s32 createDefault();
    s32 erase();

    // --- License Access ---
    License* getLicense(u32 index);
    License* getActiveLicense();
    s32 setActiveLicense(u32 index);
    s32 createLicense(const char* name, System::Mii* mii);
    s32 deleteLicense(u32 index);
    s32 addLicense(const char* name, System::Mii* mii);
    s32 removeLicense(u32 index);
    License* findLicenseByMii(const char* miiName);

    // --- Ghost Data Access ---
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
    u32 getTotalWinCount() const { return mHeader.totalWinCount; }
    void addRaceResult(bool won, u32 secondsPlayed);

    // --- Size / Capacity ---
    const char* formatSaveSize(char* buf, u32 bufSize) const;
    u32 getFreeBlocks() const;
    u32 getUsedBlocks() const;

    // --- Validation ---
    bool isValid() const;
    bool verifyChecksum();
    u32  calculateChecksum();
    bool validateSave() const;

private:
    SaveHeader    mHeader;
    SaveOptions   mOptions;
    UnlockedData  mUnlocked;
    License*      mLicenses[MAX_LICENSES];
    bool          mDirty;
    u8*           mRawData;
};

} // namespace Save