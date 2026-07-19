// ============================================================================
// SaveData.cpp — Wii Save File Manager Implementation
//
// PC port: save data is stored as a flat file in the config directory
// instead of Wii NAND. The layout mirrors the Wii save format.
// ============================================================================

#include "SaveData.hpp"
#include "License.hpp"

namespace Save {

SaveData::SaveData()
    : mDirty(false)
    , mRawData(nullptr)
{
    // Zero the header
    for (u32 i = 0; i < sizeof(SaveHeader); i++)
        ((u8*)&mHeader)[i] = 0;
    mHeader.magic = SAVE_MAGIC;
    mHeader.version = SAVE_VERSION;
    mHeader.licenseCount = 0;
    mHeader.activeLicense = 0;

    // Default options
    mOptions.driftMode = 0;      // Manual
    mOptions.soundVolume = 80;
    mOptions.musicVolume = 80;
    mOptions.sfxVolume = 80;
    mOptions.rumble = 1;
    mOptions.controlScheme = 0;  // Wii Wheel
    mOptions.stereoType = 1;    // Stereo
    mOptions.targetFPS = 1;     // 60 (PC)
    mOptions.language = 0;      // English

    // Default unlocked data
    mUnlocked.characters = 0;   // Only starter characters
    mUnlocked.vehicles = 0;     // Only starter vehicles
    mUnlocked.courses = 0;      // Only starter cups

    // Initialize license slots
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

s32 SaveData::load() {
    // PC port: read from local file
    // On Wii: ISFS_Read("/title/00010004/524d4345/data/save.dat", ...)
    // For now, return success with defaults
    return 0;
}

s32 SaveData::save() {
    // PC port: write to local file
    // On Wii: ISFS_Write(...)
    if (mRawData) {
        mHeader.checksum = calculateChecksum();
        mHeader.dataSize = SAVE_FILE_SIZE - sizeof(SaveHeader);
    }
    mDirty = false;
    return 0;
}

bool SaveData::exists() {
    // PC port: check if file exists
    return false;
}

s32 SaveData::createDefault() {
    // Create a fresh save with one default license
    mHeader.licenseCount = 0;
    mHeader.activeLicense = 0;
    mHeader.totalPlayTime = 0;
    mHeader.totalRaceCount = 0;
    mHeader.totalWinCount = 0;
    mHeader.flags = 0;

    // Create first license with default name
    s32 result = createLicense("Player", nullptr);
    if (result != 0) return result;

    mDirty = true;
    return save();
}

s32 SaveData::erase() {
    // PC port: delete the save file
    // On Wii: ISFS_Delete(...)
    mHeader.licenseCount = 0;
    for (u32 i = 0; i < MAX_LICENSES; i++) {
        if (mLicenses[i]) {
            delete mLicenses[i];
            mLicenses[i] = nullptr;
        }
    }
    mDirty = false;
    return 0;
}

License* SaveData::getLicense(u32 index) {
    if (index >= MAX_LICENSES) return nullptr;
    return mLicenses[index];
}

License* SaveData::getActiveLicense() {
    return getLicense(mHeader.activeLicense);
}

s32 SaveData::setActiveLicense(u32 index) {
    if (index >= MAX_LICENSES) return -1;
    if (!mLicenses[index]) return -2;
    mHeader.activeLicense = index;
    mDirty = true;
    return 0;
}

s32 SaveData::createLicense(const char* name, System::Mii* mii) {
    // Find an empty slot
    u32 slot = MAX_LICENSES;
    for (u32 i = 0; i < MAX_LICENSES; i++) {
        if (mLicenses[i] == nullptr) {
            slot = i;
            break;
        }
    }
    if (slot == MAX_LICENSES) return -1; // no room

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

s32 SaveData::deleteLicense(u32 index) {
    if (index >= MAX_LICENSES) return -1;
    if (!mLicenses[index]) return -2;
    if (mHeader.licenseCount <= 1) return -3; // can't delete last

    delete mLicenses[index];
    mLicenses[index] = nullptr;
    mHeader.licenseCount--;

    // Adjust active license if needed
    if (mHeader.activeLicense >= mHeader.licenseCount) {
        mHeader.activeLicense = 0;
    }
    mDirty = true;
    return 0;
}

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

void SaveData::addRaceResult(bool won, u32 secondsPlayed) {
    mHeader.totalRaceCount++;
    if (won) mHeader.totalWinCount++;
    mHeader.totalPlayTime += secondsPlayed;
    mDirty = true;
}

bool SaveData::isValid() const {
    return mHeader.magic == SAVE_MAGIC &&
           mHeader.version <= SAVE_VERSION &&
           mHeader.licenseCount <= MAX_LICENSES;
}

bool SaveData::verifyChecksum() {
    if (!mRawData) return true; // no data to verify
    return calculateChecksum() == mHeader.checksum;
}

u32 SaveData::calculateChecksum() {
    // CRC32 over data section
    // Stubbed — returns 0
    return 0;
}

} // namespace Save