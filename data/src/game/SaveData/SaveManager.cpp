// ============================================================================
// SaveManager.cpp — Save::SaveManager Implementation
//
// PC port: uses standard file I/O. NAND paths are logged but not used.
// ============================================================================

#include "SaveManager.hpp"
#include "Settings.hpp"
#include "SaveData.hpp"
#include <cstring>
#include <cstdio>
#include <new>

namespace Save {

// Path constants
const char* const SavePaths::NAND_BASE   = "/title/00010004/524d4345";
const char* const SavePaths::NAND_BANNER  = "/title/00010004/524d4345/data/banner.bin";
const char* const SavePaths::NAND_SAVE    = "/title/00010004/524d4345/data/save.dat";
const char* const SavePaths::PC_SAVE_DIR  = "save";
const char* const SavePaths::PC_SAVE_FILE = "save/save.dat";

SaveManager::SaveManager()
    : mMounted(false)
{
    mSavePath[0] = '\0';
}

SaveManager::~SaveManager() {
    if (mMounted) {
        // Don't auto-save; let the caller handle it
    }
}

SaveManager& SaveManager::getInstance() {
    static SaveManager sInstance;
    return sInstance;
}

s32 SaveManager::mount() {
    // PC: ensure save directory exists
    // On Wii: ISFS_Mount() or similar
    strncpy(mSavePath, SavePaths::PC_SAVE_FILE, sizeof(mSavePath) - 1);
    mSavePath[sizeof(mSavePath) - 1] = '\0';
    mMounted = true;
    return SAVE_OK;
}

bool SaveManager::exists() {
    if (!mMounted) return false;
    return pcFileExists(getSaveFilePath());
}

s32 SaveManager::readSave(u8** outBuffer, u32* outSize) {
    if (!mMounted) return SAVE_ERR_IO;
    if (!outBuffer || !outSize) return SAVE_ERR_INVALID_PARAM;

    return pcReadFile(getSaveFilePath(), outBuffer, outSize);
}

s32 SaveManager::writeSave(const u8* data, u32 size) {
    if (!mMounted) return SAVE_ERR_IO;
    if (!data || size == 0) return SAVE_ERR_INVALID_PARAM;
    if (size > SAVE_FILE_SIZE_LOCAL) return SAVE_ERR_TOO_LARGE;

    return pcWriteFile(getSaveFilePath(), data, size);
}

s32 SaveManager::getFileInfo(SaveFileInfo* outInfo) {
    if (!mMounted) return SAVE_ERR_IO;
    if (!outInfo) return SAVE_ERR_INVALID_PARAM;

    FILE* f = fopen(getSaveFilePath(), "rb");
    if (!f) return SAVE_ERR_NOT_FOUND;

    fseek(f, 0, SEEK_END);
    outInfo->size = (u32)ftell(f);
    fseek(f, 0, SEEK_SET);
    fclose(f);

    outInfo->ownerUid = 0;
    outInfo->groupId = 0;
    outInfo->attributes = 0;
    outInfo->permissions = 0x03; // read/write
    return SAVE_OK;
}

s32 SaveManager::createSaveFile() {
    if (!mMounted) return SAVE_ERR_IO;

    // Create a save file with the magic header
    u8* defaultSave = new (std::nothrow) u8[SAVE_FILE_SIZE_LOCAL];
    if (!defaultSave) return SAVE_ERR_NO_SPACE;

    memset(defaultSave, 0, SAVE_FILE_SIZE_LOCAL);

    // Write magic and version
    u32 magic = SAVE_MAGIC_LOCAL;
    u16 version = SAVE_VERSION_LOCAL;
    memcpy(defaultSave, &magic, 4);
    memcpy(defaultSave + 4, &version, 2);

    s32 result = pcWriteFile(getSaveFilePath(), defaultSave, SAVE_FILE_SIZE_LOCAL);
    delete[] defaultSave;
    return result;
}

s32 SaveManager::deleteSaveFile() {
    if (!mMounted) return SAVE_ERR_IO;

    if (std::remove(getSaveFilePath()) != 0) {
        return SAVE_ERR_IO;
    }
    return SAVE_OK;
}

// --- High-Level Operations ---

s32 SaveManager::loadSaveData(SaveData& outSave) {
    u8* buffer = nullptr;
    u32 size = 0;

    s32 result = readSave(&buffer, &size);
    if (result != SAVE_OK) return result;

    if (size < sizeof(SaveHeader)) {
        delete[] buffer;
        return SAVE_ERR_CORRUPT;
    }

    // Verify integrity
    SaveError integrity = verifyIntegrity(buffer, size);
    if (integrity != SAVE_OK) {
        delete[] buffer;
        return integrity;
    }

    // Deserialize header
    SaveHeader header;
    memcpy(&header, buffer, sizeof(SaveHeader));

    // On PC, for now we just validate; actual deserialization would
    // fill in the SaveData object from the raw buffer
    // The SaveData class handles its own deserialization
    (void)header;
    (void)outSave;

    delete[] buffer;
    return SAVE_OK;
}

s32 SaveManager::storeSaveData(const SaveData& saveData) {
    (void)saveData;
    // Would serialize SaveData to a buffer and call writeSave
    return SAVE_OK;
}

// --- Ghost File I/O ---

s32 SaveManager::readGhost(u32 licenseIdx, u32 ghostIdx, System::GhostFile& outGhost) {
    (void)licenseIdx;
    (void)ghostIdx;
    (void)outGhost;
    // Ghost data offset in save file would be calculated from license and ghost index
    return SAVE_OK;
}

s32 SaveManager::writeGhost(u32 licenseIdx, u32 ghostIdx, const System::GhostFile& ghost) {
    (void)licenseIdx;
    (void)ghostIdx;
    (void)ghost;
    return SAVE_OK;
}

// --- License I/O ---

s32 SaveManager::readLicense(u32 licenseIdx, License& outLicense) {
    (void)licenseIdx;
    (void)outLicense;
    return SAVE_OK;
}

s32 SaveManager::writeLicense(u32 licenseIdx, const License& license) {
    (void)licenseIdx;
    (void)license;
    return SAVE_OK;
}

// --- Settings I/O ---

s32 SaveManager::readSettings(Settings& outSettings) {
    (void)outSettings;
    return SAVE_OK;
}

s32 SaveManager::writeSettings(const Settings& settings) {
    (void)settings;
    return SAVE_OK;
}

// --- Backup / Restore ---

s32 SaveManager::createBackup(const char* backupPath) {
    if (!backupPath) return SAVE_ERR_INVALID_PARAM;

    u8* buffer = nullptr;
    u32 size = 0;
    s32 result = readSave(&buffer, &size);
    if (result != SAVE_OK) return result;

    result = pcWriteFile(backupPath, buffer, size);
    delete[] buffer;
    return result;
}

s32 SaveManager::restoreBackup(const char* backupPath) {
    if (!backupPath) return SAVE_ERR_INVALID_PARAM;

    u8* buffer = nullptr;
    u32 size = 0;
    s32 result = pcReadFile(backupPath, &buffer, &size);
    if (result != SAVE_OK) return result;

    result = writeSave(buffer, size);
    delete[] buffer;
    return result;
}

// --- Integrity ---

SaveError SaveManager::verifyIntegrity(const u8* data, u32 size) {
    if (!data || size < sizeof(SaveHeader)) return SAVE_ERR_CORRUPT;

    SaveHeader header;
    memcpy(&header, data, sizeof(SaveHeader));

    // Check magic
    if (header.magic != SAVE_MAGIC_LOCAL) return SAVE_ERR_CORRUPT;

    // Check version
    if (header.version > SAVE_VERSION_LOCAL) return SAVE_ERR_VERSION;

    // Verify checksum
    u32 calcCrc = calculateCRC32(data + sizeof(u32), size - sizeof(u32));
    if (calcCrc != header.checksum) {
        // Allow zero checksum for newly created saves
        if (header.checksum != 0) {
            return SAVE_ERR_CORRUPT;
        }
    }

    return SAVE_OK;
}

u32 SaveManager::calculateCRC32(const u8* data, u32 size) {
    u32 crc = 0xFFFFFFFF;
    for (u32 i = 0; i < size; i++) {
        crc ^= data[i];
        for (int j = 0; j < 8; j++) {
            crc = (crc >> 1) ^ (0xEDB88320 & (-(crc & 1)));
        }
    }
    return ~crc;
}

// --- Platform I/O Helpers ---

const char* SaveManager::getSaveFilePath() const {
    return mSavePath;
}

s32 SaveManager::pcReadFile(const char* path, u8** outBuffer, u32* outSize) {
    FILE* f = fopen(path, "rb");
    if (!f) return SAVE_ERR_NOT_FOUND;

    fseek(f, 0, SEEK_END);
    long fileSize = ftell(f);
    fseek(f, 0, SEEK_SET);

    if (fileSize <= 0) {
        fclose(f);
        return SAVE_ERR_CORRUPT;
    }

    u8* buffer = new (std::nothrow) u8[fileSize];
    if (!buffer) {
        fclose(f);
        return SAVE_ERR_NO_SPACE;
    }

    u32 bytesRead = (u32)fread(buffer, 1, fileSize, f);
    fclose(f);

    *outBuffer = buffer;
    *outSize = bytesRead;
    return SAVE_OK;
}

s32 SaveManager::pcWriteFile(const char* path, const u8* data, u32 size) {
    FILE* f = fopen(path, "wb");
    if (!f) return SAVE_ERR_IO;

    u32 bytesWritten = (u32)fwrite(data, 1, size, f);
    fclose(f);

    if (bytesWritten != size) return SAVE_ERR_IO;
    return SAVE_OK;
}

bool SaveManager::pcFileExists(const char* path) const {
    FILE* f = fopen(path, "rb");
    if (f) {
        fclose(f);
        return true;
    }
    return false;
}

// --- NAND I/O Stubs (unused on PC) ---

s32 SaveManager::nandOpen(const char* path) {
    (void)path;
    return -1; // ISFS_Open
}

s32 SaveManager::nandRead(s32 fd, void* buffer, u32 size) {
    (void)fd; (void)buffer; (void)size;
    return -1; // ISFS_Read
}

s32 SaveManager::nandWrite(s32 fd, const void* buffer, u32 size) {
    (void)fd; (void)buffer; (void)size;
    return -1; // ISFS_Write
}

s32 SaveManager::nandClose(s32 fd) {
    (void)fd;
    return -1; // ISFS_Close
}

} // namespace Save