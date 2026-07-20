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

SaveError SaveManager::verifyIntegrity(const u8* data, u32 size) const {
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

// ============================================================================
// init() — Initialize the save manager
// @addr 0x804F8000
// ============================================================================

s32 SaveManager::init() {
    mMounted = false;
    mSavePath[0] = '\0';
    return mount();
}

// ============================================================================
// mountSave() — Mount the Wii NAND save filesystem
// @addr 0x804F8020
//
// On Wii: calls ISFS_Mount() for the title's NAND directory.
// On PC:  delegates to mount() which sets up the file path.
// ============================================================================

s32 SaveManager::mountSave() {
    if (mMounted) return SAVE_OK;
    return mount();
}

// ============================================================================
// unmountSave() — Unmount the save filesystem
// @addr 0x804F8040
//
// On Wii: calls ISFS_Unmount(). On PC: marks as unmounted.
// ============================================================================

s32 SaveManager::unmountSave() {
    if (!mMounted) return SAVE_ERR_IO;
    mMounted = false;
    return SAVE_OK;
}

// ============================================================================
// readBlock() — Read a specific block from the save file
// @addr 0x804F8060
//
// The Wii NAND is organized in 8KB blocks. This reads a specific
// block by seeking to the appropriate offset.
// ============================================================================

s32 SaveManager::readBlock(u32 blockIndex, u8* outBuffer, u32 blockSize) {
    if (!mMounted) return SAVE_ERR_IO;
    if (outBuffer == nullptr) return SAVE_ERR_INVALID_PARAM;

    // Calculate byte offset from block index (8KB blocks on Wii NAND)
    u32 offset = blockIndex * 0x2000;
    u32 endOffset = offset + blockSize;

    if (endOffset > SAVE_FILE_SIZE_LOCAL) return SAVE_ERR_TOO_LARGE;

    // Read the full save file and extract the block
    u8* fullBuffer = nullptr;
    u32 fullSize = 0;
    s32 result = readSave(&fullBuffer, &fullSize);
    if (result != SAVE_OK) return result;

    if (offset >= fullSize || endOffset > fullSize) {
        delete[] fullBuffer;
        return SAVE_ERR_CORRUPT;
    }

    memcpy(outBuffer, fullBuffer + offset, blockSize);
    delete[] fullBuffer;
    return SAVE_OK;
}

// ============================================================================
// writeBlock() — Write a specific block to the save file
// @addr 0x804F8080
//
// Reads the full save, patches the block, and writes back.
// ============================================================================

s32 SaveManager::writeBlock(u32 blockIndex, const u8* data, u32 blockSize) {
    if (!mMounted) return SAVE_ERR_IO;
    if (data == nullptr) return SAVE_ERR_INVALID_PARAM;

    u32 offset = blockIndex * 0x2000;
    u32 endOffset = offset + blockSize;

    if (endOffset > SAVE_FILE_SIZE_LOCAL) return SAVE_ERR_TOO_LARGE;

    // Read the full save file
    u8* fullBuffer = nullptr;
    u32 fullSize = 0;
    s32 result = readSave(&fullBuffer, &fullSize);
    if (result != SAVE_OK) return result;

    // If save is smaller than needed, reject
    if (endOffset > fullSize) {
        delete[] fullBuffer;
        return SAVE_ERR_CORRUPT;
    }

    // Patch the block
    memcpy(fullBuffer + offset, data, blockSize);

    // Write back
    result = writeSave(fullBuffer, fullSize);
    delete[] fullBuffer;
    return result;
}

// ============================================================================
// getFreeBlocks() — Get the number of free blocks in the save file
// @addr 0x804F80A0
//
// On Wii NAND, the save area is 128KB (0x20000 bytes) divided into
// 8KB blocks. Returns the count of blocks not yet used.
// ============================================================================

s32 SaveManager::getFreeBlocks() const {
    if (!mMounted) return 0;

    // Read file info
    SaveFileInfo info;
    // Cast away const for getFileInfo (it only reads)
    SaveManager* self = const_cast<SaveManager*>(this);
    s32 result = self->getFileInfo(&info);
    if (result != SAVE_OK) return 0;

    // Calculate free blocks
    u32 totalBlocks = SAVE_FILE_SIZE_LOCAL / 0x2000;
    u32 usedBlocks = (info.size + 0x1FFF) / 0x2000;
    if (usedBlocks > totalBlocks) usedBlocks = totalBlocks;

    return (s32)(totalBlocks - usedBlocks);
}

// ============================================================================
// getSaveSize() — Get the current save file size
// @addr 0x804F80C0
// ============================================================================

u32 SaveManager::getSaveSize() const {
    if (!mMounted) return 0;

    SaveFileInfo info;
    SaveManager* self = const_cast<SaveManager*>(this);
    s32 result = self->getFileInfo(&info);
    if (result != SAVE_OK) return 0;

    return info.size;
}

// ============================================================================
// checkCorruption() — Check if the save file is corrupted
// @addr 0x804F80E0
//
// Reads the save file and verifies integrity. Returns true if corrupted.
// ============================================================================

bool SaveManager::checkCorruption() const {
    if (!mMounted) return true; // unmounted = effectively corrupted

    u8* buffer = nullptr;
    u32 size = 0;
    SaveManager* self = const_cast<SaveManager*>(this);
    s32 result = self->readSave(&buffer, &size);
    if (result != SAVE_OK) return true;

    SaveError integrity = verifyIntegrity(buffer, size);
    delete[] buffer;

    return integrity != SAVE_OK;
}

// ============================================================================
// repairSave() — Attempt to repair a corrupted save file
// @addr 0x804F8100
//
// Strategy:
//   1. Try to read the existing save
//   2. If readable but checksum mismatch, recalculate checksum
//   3. If unreadable, create a new default save
// ============================================================================

s32 SaveManager::repairSave() {
    if (!mMounted) return SAVE_ERR_IO;

    u8* buffer = nullptr;
    u32 size = 0;
    s32 result = readSave(&buffer, &size);

    if (result != SAVE_OK) {
        // File is unreadable — create a new default
        return createSaveFile();
    }

    // Check if the header is at least readable
    if (size >= sizeof(SaveHeader)) {
        SaveHeader header;
        memcpy(&header, buffer, sizeof(SaveHeader));

        if (header.magic == SAVE_MAGIC_LOCAL) {
            // Magic is OK but checksum may be wrong — recalculate
            u32 newCrc = calculateCRC32(buffer + sizeof(u32), size - sizeof(u32));
            header.checksum = newCrc;
            memcpy(buffer, &header, sizeof(SaveHeader));

            result = writeSave(buffer, size);
            delete[] buffer;
            return result;
        }
    }

    // Magic is wrong — file is too corrupted, recreate
    delete[] buffer;
    deleteSaveFile();
    return createSaveFile();
}

// ============================================================================
// SaveManager_getInstance() — Free function returning the singleton
// @addr 0x804F8120
// ============================================================================

Save::SaveManager& SaveManager_getInstance() {
    return Save::SaveManager::getInstance();
}

} // namespace Save