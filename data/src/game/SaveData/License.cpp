// ============================================================================
// License.cpp — Player License Implementation
// ============================================================================

#include "License.hpp"
#include <cstring>

License::License()
    : mMiiData(nullptr)
    , mVR(DEFAULT_VR)
    , mBR(DEFAULT_BR)
    , mGhostCount(0)
    , mStats()
    , mDirty(false)
{
    mName[0] = '\0';
    memset(&mStats, 0, sizeof(LicenseStats));

    // Initialize all records
    for (u32 i = 0; i < MAX_RECORDS; i++) {
        mRecords[i].reset();
    }
    // Initialize all ghost slots
    for (u32 i = 0; i < MAX_GHOSTS_PER_LICENSE; i++) {
        mGhosts[i].reset();
    }
}

License::~License() {
    if (mMiiData) {
        delete mMiiData;
        mMiiData = nullptr;
    }
}

void License::setName(const char* name) {
    if (!name) return;
    for (u32 i = 0; i < LICENSE_NAME_MAX; i++) {
        mName[i] = name[i];
        if (name[i] == '\0') break;
    }
    mName[LICENSE_NAME_MAX] = '\0';
    mDirty = true;
}

void License::setMii(System::Mii* mii) {
    if (mMiiData) {
        delete mMiiData;
        mMiiData = nullptr;
    }
    if (mii) {
        mMiiData = new System::Mii(*mii);
    }
    mDirty = true;
}

void License::adjustVR(s32 delta) {
    s32 newVR = (s32)mVR + delta;
    if (newVR < 1000) newVR = 1000;
    if (newVR > (s32)MAX_VR) newVR = MAX_VR;
    mVR = (u32)newVR;
    mDirty = true;
}

void License::adjustBR(s32 delta) {
    s32 newBR = (s32)mBR + delta;
    if (newBR < 1000) newBR = 1000;
    if (newBR > (s32)MAX_BR) newBR = MAX_BR;
    mBR = (u32)newBR;
    mDirty = true;
}

void License::setRecord(u32 courseIndex, const System::Time& time, bool isStaffGhost) {
    if (courseIndex >= MAX_RECORDS) return;

    RecordMeta meta;
    memset(&meta, 0, sizeof(RecordMeta));
    meta.isStaffGhost = isStaffGhost ? 1 : 0;
    // TODO: fill in character, vehicle, controller, date from current context

    mRecords[courseIndex].setRecord(time, meta);
    mDirty = true;
}

s32 License::saveGhost(const System::RawGhostFile& raw) {
    // Find an empty slot or replace oldest
    u32 slot = MAX_GHOSTS_PER_LICENSE;
    for (u32 i = 0; i < MAX_GHOSTS_PER_LICENSE; i++) {
        if (mGhosts[i].isEmpty()) {
            slot = i;
            break;
        }
    }

    if (slot == MAX_GHOSTS_PER_LICENSE) {
        // All slots full — replace slot 0 (oldest)
        slot = 0;
    }

    mGhosts[slot].read(raw);
    mGhostCount = (slot + 1 > mGhostCount) ? slot + 1 : mGhostCount;
    mDirty = true;
    return 0;
}

s32 License::deleteGhost(u32 ghostIdx) {
    if (ghostIdx >= MAX_GHOSTS_PER_LICENSE) return -1;
    if (mGhosts[ghostIdx].isEmpty()) return -2;

    mGhosts[ghostIdx].reset();

    // Recalculate ghost count
    mGhostCount = 0;
    for (u32 i = MAX_GHOSTS_PER_LICENSE; i > 0; i--) {
        if (!mGhosts[i - 1].isEmpty()) {
            mGhostCount = i;
            break;
        }
    }

    mDirty = true;
    return 0;
}

void License::recordRaceFinish(u32 position) {
    mStats.totalRaces++;
    if (position == 1) mStats.totalWins++;
    else if (position == 2) mStats.total2nd++;
    else if (position == 3) mStats.total3rd++;
    mDirty = true;
}

void License::recordGrandPrix(u32 overallPosition) {
    mStats.totalGPPlayed++;
    if (overallPosition == 1) mStats.totalGPWins++;
    mDirty = true;
}

void License::recordDisconnect() {
    mStats.totalDisconnects++;
    mDirty = true;
}

u32 License::serialize(u8* buffer, u32 bufferSize) const {
    if (!buffer || bufferSize < 0x100) return 0;

    u32 offset = 0;

    // Name (LICENSE_NAME_MAX + 1 = 11 bytes)
    memcpy(buffer + offset, mName, LICENSE_NAME_MAX + 1);
    offset += LICENSE_NAME_MAX + 1;

    // VR and BR
    buffer[offset++] = (u8)(mVR & 0xFF);
    buffer[offset++] = (u8)((mVR >> 8) & 0xFF);
    buffer[offset++] = (u8)(mBR & 0xFF);
    buffer[offset++] = (u8)((mBR >> 8) & 0xFF);

    // Stats
    memcpy(buffer + offset, &mStats, sizeof(LicenseStats));
    offset += sizeof(LicenseStats);

    // Records
    for (u32 i = 0; i < MAX_RECORDS; i++) {
        offset += mRecords[i].serialize(buffer + offset, bufferSize - offset);
    }

    return offset;
}

u32 License::deserialize(const u8* buffer, u32 bufferSize) {
    if (!buffer || bufferSize < 0x100) return 0;

    u32 offset = 0;

    // Name
    memcpy(mName, buffer + offset, LICENSE_NAME_MAX + 1);
    mName[LICENSE_NAME_MAX] = '\0';
    offset += LICENSE_NAME_MAX + 1;

    // VR and BR
    mVR = buffer[offset] | ((u32)buffer[offset + 1] << 8);
    offset += 2;
    mBR = buffer[offset] | ((u32)buffer[offset + 1] << 8);
    offset += 2;

    // Stats
    memcpy(&mStats, buffer + offset, sizeof(LicenseStats));
    offset += sizeof(LicenseStats);

    // Records
    for (u32 i = 0; i < MAX_RECORDS; i++) {
        offset += mRecords[i].deserialize(buffer + offset, bufferSize - offset);
    }

    mDirty = false;
    return offset;
}