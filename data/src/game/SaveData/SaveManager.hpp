#pragma once
// ============================================================================
// SaveManager.hpp — Save::SaveManager (Wii Save File Operations)
//
// Low-level save file manager that handles NAND I/O on Wii and
// file I/O on PC. This is distinct from Save::SaveData (which manages
// the in-memory save data structures).
//
// MKWii save file path on Wii:
//   /title/00010004/524d4345/data/save.dat
//   Title ID: 00010004-524D4345 ("RMCE" = Mario Kart Wii)
//
// The Wii NAND save system uses ISFS_* APIs:
//   ISFS_Open, ISFS_Read, ISFS_Write, ISFS_Close, ISFS_CreateFile,
//   ISFS_Delete, ISFS_GetFileStats
//
// Save file permissions on Wii require the encrypted banner.bin
// and tmd for NAND access.
//
// Categorization: GENESIS Phase 5 (SaveData Module)
// ============================================================================

#include "rk_common.h"
#include "GhostFile.hpp"
#include "RecordData.hpp"

class License;

namespace Save {
class Settings;
class SaveData;
}

namespace Save {

// Save file layout constants (duplicated from SaveData.hpp to avoid circular includes)
static const u32 SAVE_FILE_SIZE_LOCAL = 0x2C000;
static const u32 SAVE_MAGIC_LOCAL   = 0x524D4345; // "RMCE"
static const u16 SAVE_VERSION_LOCAL = 3;

// ============================================================================
// Save Error Codes

enum SaveError {
    SAVE_OK              = 0,
    SAVE_ERR_NOT_FOUND   = -1,  // No save file exists
    SAVE_ERR_CORRUPT     = -2,  // Checksum mismatch
    SAVE_ERR_VERSION     = -3,  // Unsupported version
    SAVE_ERR_IO          = -4,  // Read/write failure
    SAVE_ERR_NO_SPACE    = -5,  // Disk full
    SAVE_ERR_PERMISSION  = -6,  // Access denied
    SAVE_ERR_TOO_LARGE   = -7,  // Data exceeds max size
    SAVE_ERR_LICENSE_FULL = -8, // No empty license slots
    SAVE_ERR_GHOST_FULL  = -9,  // No empty ghost slots
    SAVE_ERR_INVALID_PARAM = -10,
};

// ============================================================================
// Save Path Configuration
// ============================================================================

struct SavePaths {
    // Wii NAND paths
    static const char* const NAND_BASE;
    static const char* const NAND_BANNER;
    static const char* const NAND_SAVE;

    // PC save directory (relative to executable or config dir)
    static const char* const PC_SAVE_DIR;
    static const char* const PC_SAVE_FILE;

    // Title ID
    static const u32 TITLE_ID_HI = 0x00010004;
    static const u32 TITLE_ID_LO = 0x524D4345; // "RMCE"
};

// ============================================================================
// File stats (mirrors ISFS_FileStats)
// ============================================================================

struct SaveFileInfo {
    u32 size;
    u32 ownerUid;
    u16 groupId;
    u8  attributes;  // ISFS_FILE_ATTR_*
    u8  permissions;
};

// ============================================================================
// SaveManager — Low-Level Save File Operations
// ============================================================================

class SaveManager {
public:
    SaveManager();
    ~SaveManager();

    // --- Singleton ---
    static SaveManager& getInstance();

    // --- File Operations ---
    // Mount / prepare the save directory
    s32 mount();

    // Check if a save file exists
    bool exists();

    // Read the entire save file into a buffer
    // Caller must free the buffer
    s32 readSave(u8** outBuffer, u32* outSize);

    // Write the entire save file from a buffer
    s32 writeSave(const u8* data, u32 size);

    // Get file stats
    s32 getFileInfo(SaveFileInfo* outInfo);

    // Create a new empty save file with default header
    s32 createSaveFile();

    // Delete the save file
    s32 deleteSaveFile();

    // --- High-Level Operations ---
    // Load save into a SaveData object
    s32 loadSaveData(SaveData& outSave);

    // Save a SaveData object to disk
    s32 storeSaveData(const SaveData& saveData);

    // --- Ghost File I/O ---
    // Load a ghost from the save file by license and ghost index
    s32 readGhost(u32 licenseIdx, u32 ghostIdx, System::GhostFile& outGhost);

    // Write a ghost to the save file
    s32 writeGhost(u32 licenseIdx, u32 ghostIdx, const System::GhostFile& ghost);

    // --- License I/O ---
    // Read a license from the save file
    s32 readLicense(u32 licenseIdx, License& outLicense);

    // Write a license to the save file
    s32 writeLicense(u32 licenseIdx, const License& license);

    // --- Settings I/O ---
    // Read global settings
    s32 readSettings(Save::Settings& outSettings);

    // Write global settings
    s32 writeSettings(const Save::Settings& settings);

    // --- Backup / Restore ---
    // Create a backup of the current save file
    s32 createBackup(const char* backupPath);

    // Restore from a backup
    s32 restoreBackup(const char* backupPath);

    // --- Integrity ---
    // Verify save file integrity (magic + checksum)
    SaveError verifyIntegrity(const u8* data, u32 size);

    // Calculate CRC32 over save data
    static u32 calculateCRC32(const u8* data, u32 size);

    // --- State ---
    bool isMounted() const { return mMounted; }

private:
    // Prevent copying
    SaveManager(const SaveManager&);
    SaveManager& operator=(const SaveManager&);

    // Get the save file path for the current platform
    const char* getSaveFilePath() const;

    // PC file I/O helpers
    s32 pcReadFile(const char* path, u8** outBuffer, u32* outSize);
    s32 pcWriteFile(const char* path, const u8* data, u32 size);
    bool pcFileExists(const char* path) const;

    // NAND I/O helpers (stubs on PC)
    s32 nandOpen(const char* path);
    s32 nandRead(s32 fd, void* buffer, u32 size);
    s32 nandWrite(s32 fd, const void* buffer, u32 size);
    s32 nandClose(s32 fd);

    bool mMounted;
    char mSavePath[256];  // resolved save file path
};

} // namespace Save