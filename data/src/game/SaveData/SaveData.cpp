// ============================================================================
// SaveData.cpp — Wii Save File Manager Implementation
//
// PC port: save data is stored as a flat file in the config directory
// instead of Wii NAND. The layout mirrors the Wii save format.
//
// On Wii, the save file is at:
//   /title/00010004/524d4345/data/save.dat
//
// NAND operations (ISFS_Read, ISFS_Write, ISFS_CreateFile, ISFS_Delete)
// are simulated with file I/O on PC.
//
// Save file layout:
//   0x0000 – 0x003F  SaveHeader (64 bytes)
//   0x0040 – 0x004F  SaveOptions (16 bytes)
//   0x0050 – 0x005F  UnlockedData (16 bytes)
//   0x0060 – ...     License data (up to 3 licenses, ~83 KB each)
// ============================================================================

#include "SaveData.hpp"
#include "License.hpp"
#include <cstring>
#include <cstdio>
#include <cstdlib>

// ============================================================================
// CRC32 table for save file checksum
// ============================================================================

static u32 s_crc32Table[256];
static bool s_crc32TableInit = false;

static void initCRC32Table() {
    if (s_crc32TableInit) return;

    for (u32 i = 0; i < 256; i++) {
        u32 crc = i;
        for (s32 j = 0; j < 8; j++) {
            if (crc & 1)
                crc = (crc >> 1) ^ 0xEDB88320u;
            else
                crc = crc >> 1;
        }
        s_crc32Table[i] = crc;
    }
    s_crc32TableInit = true;
}

static u32 crc32Update(u32 crc, const u8* data, u32 length) {
    for (u32 i = 0; i < length; i++) {
        crc = s_crc32Table[(crc ^ data[i]) & 0xFF] ^ (crc >> 8);
    }
    return crc;
}

// ============================================================================
// Constructor / Destructor
// ============================================================================

namespace Save {

SaveData::SaveData()
    : mDirty(false)
    , mRawData(nullptr)
{
    memset(&mHeader, 0, sizeof(SaveHeader));
    mHeader.magic = SAVE_MAGIC;
    mHeader.version = SAVE_VERSION;
    mHeader.licenseCount = 0;
    mHeader.activeLicense = 0;

    mOptions.driftMode = 0;
    mOptions.soundVolume = 80;
    mOptions.musicVolume = 80;
    mOptions.sfxVolume = 80;
    mOptions.rumble = 1;
    mOptions.controlScheme = 0;
    mOptions.stereoType = 1;
    mOptions.targetFPS = 1;
    mOptions.language = 0;
    memset(mOptions._pad, 0, sizeof(mOptions._pad));

    mUnlocked.characters = 0;
    mUnlocked.vehicles = 0;
    mUnlocked.courses = 0;
    mUnlocked._pad = 0;

    for (u32 i = 0; i < MAX_LICENSES; i++)
        mLicenses[i] = nullptr;
}

SaveData::~SaveData() {
    if (mDirty) save();
    for (u32 i = 0; i < MAX_LICENSES; i++) {
        if (mLicenses[i]) {
            delete mLicenses[i];
            mLicenses[i] = nullptr;
        }
    }
    if (mRawData) {
        delete[] mRawData;
        mRawData = nullptr;
    }
}

// ============================================================================
// init — Initialize save data system
//
// On Wii: opens NAND, mounts save file, reads banner.
// On PC: checks for save file, loads if present, creates default if not.
// ============================================================================

s32 SaveData::init() {
    // Initialize CRC table
    initCRC32Table();

    // Allocate raw data buffer
    if (!mRawData) {
        mRawData = new u8[SAVE_FILE_SIZE];
        if (!mRawData) return -1;
        memset(mRawData, 0, SAVE_FILE_SIZE);
    }

    // Try to load existing save
    if (exists()) {
        s32 result = load();
        if (result != 0) {
            // Corrupted save — create fresh
            return createDefault();
        }
    } else {
        // No save file — create default
        return createDefault();
    }

    return 0;
}

// ============================================================================
// load — Read and parse save file from disk
//
// Validation sequence:
//   1. Read SAVE_HEADER_SIZE bytes, check magic
//   2. Check version <= SAVE_VERSION
//   3. Read full file, verify CRC32
//   4. Parse options, unlocked data
//   5. Deserialize each license
// ============================================================================

s32 SaveData::load() {
    // On PC: read from "mkwii_save.bin" in current directory
    // On Wii: ISFS_Read("/title/00010004/524d4345/data/save.dat", ...)
    FILE* fp = fopen("mkwii_save.bin", "rb");
    if (!fp) return -1;

    // Read header
    if (fread(&mHeader, 1, sizeof(SaveHeader), fp) != sizeof(SaveHeader)) {
        fclose(fp);
        return -2;
    }

    // Validate magic
    if (mHeader.magic != SAVE_MAGIC) {
        fclose(fp);
        return -3;
    }

    // Validate version — reject versions newer than we understand
    if (mHeader.version > SAVE_VERSION) {
        fclose(fp);
        return -4;
    }

    // Read rest of file
    if (!mRawData) {
        mRawData = new u8[SAVE_FILE_SIZE];
        if (!mRawData) { fclose(fp); return -5; }
    }
    memset(mRawData, 0, SAVE_FILE_SIZE);

    // Seek back to after header
    fseek(fp, 0, SEEK_END);
    long fileSize = ftell(fp);
    fseek(fp, sizeof(SaveHeader), SEEK_SET);

    long dataLen = fileSize - (long)sizeof(SaveHeader);
    if (dataLen > 0 && dataLen <= (long)(SAVE_FILE_SIZE - SAVE_HEADER_SIZE)) {
        if (fread(mRawData, 1, (size_t)dataLen, fp) != (size_t)dataLen) {
            fclose(fp);
            return -6;
        }
    }
    fclose(fp);

    // Verify checksum
    initCRC32Table();
    mHeader.dataSize = (u32)dataLen;
    if (!verifyChecksum()) {
        return -7; // checksum mismatch
    }

    // --- Parse data section ---
    u32 offset = 0;

    // Options (16 bytes)
    if (offset + SAVE_OPTIONS_SIZE > (u32)dataLen) return -8;
    memcpy(&mOptions, mRawData + offset, SAVE_OPTIONS_SIZE);
    offset += SAVE_OPTIONS_SIZE;

    // Unlocked data (16 bytes)
    if (offset + SAVE_UNLOCKED_SIZE > (u32)dataLen) return -9;
    memcpy(&mUnlocked, mRawData + offset, SAVE_UNLOCKED_SIZE);
    offset += SAVE_UNLOCKED_SIZE;

    // Deserialize licenses
    for (u32 i = 0; i < mHeader.licenseCount && i < MAX_LICENSES; i++) {
        if (mLicenses[i]) {
            delete mLicenses[i];
            mLicenses[i] = nullptr;
        }
        mLicenses[i] = new License();

        u32 read = mLicenses[i]->deserialize(mRawData + offset, (u32)dataLen - offset);
        if (read == 0) {
            // License deserialization failed — delete and stop
            delete mLicenses[i];
            mLicenses[i] = nullptr;
            mHeader.licenseCount = i;
            break;
        }
        offset += read;
    }

    mDirty = false;
    return 0;
}

// ============================================================================
// save — Write save file to disk
//
// Serializes: header → options → unlocked → licenses
// Then computes CRC32 over the data section and writes the final header.
// ============================================================================

s32 SaveData::save() {
    initCRC32Table();

    // Ensure raw buffer exists
    if (!mRawData) {
        mRawData = new u8[SAVE_FILE_SIZE];
        if (!mRawData) return -1;
        memset(mRawData, 0, SAVE_FILE_SIZE);
    }

    u32 offset = 0;

    // --- Options ---
    memcpy(mRawData + offset, &mOptions, SAVE_OPTIONS_SIZE);
    offset += SAVE_OPTIONS_SIZE;

    // --- Unlocked data ---
    memcpy(mRawData + offset, &mUnlocked, SAVE_UNLOCKED_SIZE);
    offset += SAVE_UNLOCKED_SIZE;

    // --- Licenses ---
    for (u32 i = 0; i < mHeader.licenseCount && i < MAX_LICENSES; i++) {
        if (!mLicenses[i]) continue;

        u32 written = mLicenses[i]->serialize(mRawData + offset,
                                               SAVE_FILE_SIZE - offset);
        if (written == 0) return -2;
        offset += written;
    }

    // --- Compute checksum over data section ---
    mHeader.dataSize = offset;
    mHeader.checksum = calculateChecksum();

    // --- Write to file ---
    FILE* fp = fopen("mkwii_save.bin", "wb");
    if (!fp) return -3;

    // Write header
    if (fwrite(&mHeader, 1, sizeof(SaveHeader), fp) != sizeof(SaveHeader)) {
        fclose(fp);
        return -4;
    }

    // Write data section
    if (offset > 0) {
        if (fwrite(mRawData, 1, offset, fp) != offset) {
            fclose(fp);
            return -5;
        }
    }

    fclose(fp);
    mDirty = false;
    return 0;
}

// ============================================================================
// exists — Check if a save file is present
// ============================================================================

bool SaveData::exists() {
    FILE* fp = fopen("mkwii_save.bin", "rb");
    if (!fp) return false;
    fclose(fp);
    return true;
}

// ============================================================================
// createDefault — Create a fresh save with one default license
// ============================================================================

s32 SaveData::createDefault() {
    // Reset header to defaults
    memset(&mHeader, 0, sizeof(SaveHeader));
    mHeader.magic = SAVE_MAGIC;
    mHeader.version = SAVE_VERSION;
    mHeader.licenseCount = 0;
    mHeader.activeLicense = 0;
    mHeader.totalPlayTime = 0;
    mHeader.totalRaceCount = 0;
    mHeader.totalWinCount = 0;
    mHeader.flags = 0;

    // Reset options
    mOptions.driftMode = 0;
    mOptions.soundVolume = 80;
    mOptions.musicVolume = 80;
    mOptions.sfxVolume = 80;
    mOptions.rumble = 1;
    mOptions.controlScheme = 0;
    mOptions.stereoType = 1;
    mOptions.targetFPS = 1;
    mOptions.language = 0;

    // Reset unlocked
    mUnlocked.characters = 0;
    mUnlocked.vehicles = 0;
    mUnlocked.courses = 0;
    mUnlocked._pad = 0;

    // Clean up any existing licenses
    for (u32 i = 0; i < MAX_LICENSES; i++) {
        if (mLicenses[i]) {
            delete mLicenses[i];
            mLicenses[i] = nullptr;
        }
    }

    // Create first license with default name
    s32 result = createLicense("Player", nullptr);
    if (result != 0) return result;

    mDirty = true;
    return save();
}

// ============================================================================
// erase — Delete the save file and all in-memory data
// ============================================================================

s32 SaveData::erase() {
    // Delete file from disk
    remove("mkwii_save.bin");

    // Clear all licenses
    mHeader.licenseCount = 0;
    for (u32 i = 0; i < MAX_LICENSES; i++) {
        if (mLicenses[i]) {
            delete mLicenses[i];
            mLicenses[i] = nullptr;
        }
    }

    // Reset header
    memset(&mHeader, 0, sizeof(SaveHeader));
    mHeader.magic = SAVE_MAGIC;
    mHeader.version = SAVE_VERSION;

    mDirty = false;
    return 0;
}

// ============================================================================
// License Access
// ============================================================================

License* SaveData::getLicense(u32 index) {
    if (index >= MAX_LICENSES) return nullptr;
    return mLicenses[index];
}

License* SaveData::getActiveLicense() {
    if (mHeader.activeLicense >= MAX_LICENSES) return nullptr;
    return mLicenses[mHeader.activeLicense];
}

s32 SaveData::setActiveLicense(u32 index) {
    if (index >= MAX_LICENSES) return -1;
    if (!mLicenses[index]) return -2;
    mHeader.activeLicense = index;
    mDirty = true;
    return 0;
}

s32 SaveData::createLicense(const char* name, System::Mii* mii) {
    u32 slot = MAX_LICENSES;
    for (u32 i = 0; i < MAX_LICENSES; i++) {
        if (mLicenses[i] == nullptr) {
            slot = i;
            break;
        }
    }
    if (slot == MAX_LICENSES) return -1;

    mLicenses[slot] = new License();
    mLicenses[slot]->setName(name);
    if (mii) {
        mLicenses[slot]->setMii(mii);
    }
    mHeader.licenseCount++;

    if (mHeader.activeLicense >= mHeader.licenseCount) {
        mHeader.activeLicense = 0;
    }
    mDirty = true;
    return 0;
}

s32 SaveData::addLicense(const char* name, System::Mii* mii) {
    return createLicense(name, mii);
}

s32 SaveData::deleteLicense(u32 index) {
    if (index >= MAX_LICENSES) return -1;
    if (!mLicenses[index]) return -2;
    if (mHeader.licenseCount <= 1) return -3;

    delete mLicenses[index];
    mLicenses[index] = nullptr;
    mHeader.licenseCount--;

    if (mHeader.activeLicense >= mHeader.licenseCount) {
        mHeader.activeLicense = 0;
    }
    mDirty = true;
    return 0;
}

s32 SaveData::removeLicense(u32 index) {
    return deleteLicense(index);
}

// ============================================================================
// findLicenseByMii — Search for a license by Mii name
// ============================================================================

License* SaveData::findLicenseByMii(const char* miiName) {
    if (!miiName) return nullptr;

    for (u32 i = 0; i < MAX_LICENSES; i++) {
        if (!mLicenses[i]) continue;
        const char* licName = mLicenses[i]->getName();
        if (licName[0] == '\0') continue;
        if (strcmp(licName, miiName) == 0) {
            return mLicenses[i];
        }
    }
    return nullptr;
}

// ============================================================================
// Ghost Data Access
// ============================================================================

System::GhostFile* SaveData::getGhost(u32 licenseIdx, u32 ghostIdx) {
    if (licenseIdx >= MAX_LICENSES) return nullptr;
    if (!mLicenses[licenseIdx]) return nullptr;
    return mLicenses[licenseIdx]->getGhost(ghostIdx);
}

s32 SaveData::saveGhost(u32 licenseIdx, const System::RawGhostFile& raw) {
    if (licenseIdx >= MAX_LICENSES) return -1;
    if (!mLicenses[licenseIdx]) return -2;
    s32 result = mLicenses[licenseIdx]->saveGhost(raw);
    if (result == 0) mDirty = true;
    return result;
}

s32 SaveData::deleteGhost(u32 licenseIdx, u32 ghostIdx) {
    if (licenseIdx >= MAX_LICENSES) return -1;
    if (!mLicenses[licenseIdx]) return -2;
    s32 result = mLicenses[licenseIdx]->deleteGhost(ghostIdx);
    if (result == 0) mDirty = true;
    return result;
}

// ============================================================================
// Unlocked Content
// ============================================================================

bool SaveData::isCharacterUnlocked(u32 charId) const {
    return (mUnlocked.characters & (1U << charId)) != 0;
}

bool SaveData::isVehicleUnlocked(u32 vehicleId) const {
    return (mUnlocked.vehicles & (1U << vehicleId)) != 0;
}

void SaveData::unlockCharacter(u32 charId) {
    mUnlocked.characters |= (1U << charId);
    mDirty = true;
}

void SaveData::unlockVehicle(u32 vehicleId) {
    mUnlocked.vehicles |= (1U << vehicleId);
    mDirty = true;
}

// ============================================================================
// Race Results
// ============================================================================

void SaveData::addRaceResult(bool won, u32 secondsPlayed) {
    mHeader.totalRaceCount++;
    if (won) mHeader.totalWinCount++;
    mHeader.totalPlayTime += secondsPlayed;
    mDirty = true;
}

// ============================================================================
// Size / Capacity
// ============================================================================

const char* SaveData::formatSaveSize(char* buf, u32 bufSize) const {
    if (!buf || bufSize < 16) return "(error)";

    u32 usedKB = getUsedBlocks() * NAND_BLOCK_SIZE / 1024;
    u32 totalKB = SAVE_FILE_SIZE / 1024;
    snprintf(buf, bufSize, "%uKB / %uKB", usedKB, totalKB);
    return buf;
}

u32 SaveData::getFreeBlocks() const {
    u32 used = getUsedBlocks();
    if (used >= NAND_MAX_BLOCKS) return 0;
    return NAND_MAX_BLOCKS - used;
}

u32 SaveData::getUsedBlocks() const {
    // Header + options + unlocked always occupy blocks
    u32 usedBytes = SAVE_HEADER_SIZE + SAVE_OPTIONS_SIZE + SAVE_UNLOCKED_SIZE;

    // Add per-license sizes
    for (u32 i = 0; i < mHeader.licenseCount && i < MAX_LICENSES; i++) {
        if (!mLicenses[i]) continue;
        // Each license: name(11) + vr/br(4) + stats(96) + records(640) +
        //               ghost_count(4) + ghosts(36*0x2800)
        usedBytes += 11 + 4 + sizeof(LicenseStats) +
                     (MAX_RECORDS * RecordData::SAVE_SIZE) +
                     4 + (MAX_GHOSTS_PER_LICENSE * System::GHOST_FILE_SIZE);
    }

    // Convert to NAND blocks (round up)
    return (usedBytes + NAND_BLOCK_SIZE - 1) / NAND_BLOCK_SIZE;
}

// ============================================================================
// Validation
// ============================================================================

bool SaveData::isValid() const {
    return mHeader.magic == SAVE_MAGIC &&
           mHeader.version <= SAVE_VERSION &&
           mHeader.licenseCount <= MAX_LICENSES;
}

bool SaveData::verifyChecksum() {
    if (!mRawData || mHeader.dataSize == 0) return true;
    return calculateChecksum() == mHeader.checksum;
}

u32 SaveData::calculateChecksum() {
    if (!mRawData) return 0;

    initCRC32Table();
    u32 crc = 0xFFFFFFFF;
    crc = crc32Update(crc, mRawData, mHeader.dataSize);
    return crc ^ 0xFFFFFFFF;
}

bool SaveData::validateSave() const {
    // 1. Magic check
    if (mHeader.magic != SAVE_MAGIC) return false;

    // 2. Version check
    if (mHeader.version > SAVE_VERSION) return false;

    // 3. License count check
    if (mHeader.licenseCount > MAX_LICENSES) return false;

    // 4. Active license index check
    if (mHeader.activeLicense >= mHeader.licenseCount) return false;

    // 5. Verify all license slots are populated up to licenseCount
    for (u32 i = 0; i < mHeader.licenseCount; i++) {
        if (!mLicenses[i]) return false;
        // Check name is non-empty
        if (mLicenses[i]->getName()[0] == '\0') return false;
    }

    // 6. Verify no licenses beyond licenseCount
    for (u32 i = mHeader.licenseCount; i < MAX_LICENSES; i++) {
        if (mLicenses[i]) return false;
    }

    // 7. Options range checks
    if (mOptions.driftMode > 1) return false;
    if (mOptions.soundVolume > 100) return false;
    if (mOptions.musicVolume > 100) return false;
    if (mOptions.sfxVolume > 100) return false;
    if (mOptions.rumble > 1) return false;
    if (mOptions.controlScheme > 3) return false;
    if (mOptions.stereoType > 2) return false;
    if (mOptions.language > 7) return false;

    // 8. Checksum verification
    // Note: const method, so we do a local CRC computation
    if (mRawData && mHeader.dataSize > 0) {
        initCRC32Table();
        u32 crc = 0xFFFFFFFF;
        crc = crc32Update(crc, mRawData, mHeader.dataSize);
        crc ^= 0xFFFFFFFF;
        if (crc != mHeader.checksum) return false;
    }

    return true;
}

} // namespace Save