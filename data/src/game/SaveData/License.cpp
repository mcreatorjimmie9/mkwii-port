// ============================================================================
// License.cpp — Player License Implementation
//
// Serialization layout for a single license (~16 KB):
//   [0x000] Name (11 bytes, null-terminated, zero-padded)
//   [0x00B] VR (u16 BE)
//   [0x00D] BR (u16 BE)
//   [0x00F] Stats (sizeof(LicenseStats) bytes)
//   [0x00F + statsSize] Records (32 × RecordData::SAVE_SIZE = 640 bytes)
//   [recordsEnd]          Ghost data (36 × GHOST_FILE_SIZE = 245,760 bytes)
// ============================================================================

#include "License.hpp"
#include <cstring>
#include <cstdio>

// Suppress -Wdelete-incomplete: Mii destructor is inline in decompiled header
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdelete-incomplete"
#include <system/Mii.hpp>
#pragma GCC diagnostic pop

// ============================================================================
// Constructor / Destructor
// ============================================================================

License::License()
    : mMiiData(nullptr)
    , mVR(DEFAULT_VR)
    , mBR(DEFAULT_BR)
    , mGhostCount(0)
    , mStats()
    , mDirty(false)
    , mCreatedYear(0)
    , mCreatedMonth(0)
    , mCreatedDay(0)
{
    mName[0] = '\0';
    memset(&mStats, 0, sizeof(LicenseStats));

    for (u32 i = 0; i < MAX_RECORDS; i++) {
        mRecords[i].reset();
    }
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

// ============================================================================
// Identity
// ============================================================================

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
    // Note: Mii is forward-declared; just take ownership of the pointer
    mMiiData = mii;
    mDirty = true;
}

// ============================================================================
// Rating — VR / BR adjustment with clamping
// ============================================================================

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

// ============================================================================
// Time Trial Records
// ============================================================================

void License::setRecord(u32 courseIndex, const System::Time& time, bool isStaffGhost) {
    if (courseIndex >= MAX_RECORDS) return;

    RecordMeta meta;
    memset(&meta, 0, sizeof(RecordMeta));
    meta.isStaffGhost = isStaffGhost ? 1 : 0;
    // Character, vehicle, controller, and date are filled by the caller
    // via getMeta() after setRecord returns

    mRecords[courseIndex].setRecord(time, meta);
    mDirty = true;
}

// ============================================================================
// Ghost Management
// ============================================================================

s32 License::saveGhost(const System::RawGhostFile& raw) {
    // Find an empty slot
    u32 slot = MAX_GHOSTS_PER_LICENSE;
    for (u32 i = 0; i < MAX_GHOSTS_PER_LICENSE; i++) {
        if (mGhosts[i].isEmpty()) {
            slot = i;
            break;
        }
    }

    // All slots full — replace the oldest (slot 0, FIFO)
    if (slot == MAX_GHOSTS_PER_LICENSE) {
        slot = 0;
    }

    // Parse the raw ghost into the slot
    if (!mGhosts[slot].read(raw)) {
        return -1; // invalid ghost data
    }

    // Update ghost count
    if (slot + 1 > mGhostCount) {
        mGhostCount = slot + 1;
    }

    mDirty = true;
    return 0;
}

s32 License::deleteGhost(u32 ghostIdx) {
    if (ghostIdx >= MAX_GHOSTS_PER_LICENSE) return -1;
    if (mGhosts[ghostIdx].isEmpty()) return -2;

    mGhosts[ghostIdx].reset();

    // Recalculate ghost count (find highest non-empty slot)
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

// ============================================================================
// Statistics
// ============================================================================

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

void License::resetStats() {
    memset(&mStats, 0, sizeof(LicenseStats));
    mDirty = true;
}

// ============================================================================
// Computed Statistics
// ============================================================================

u32 License::getTotalPlayTime() const {
    // Estimate: average race ~2 minutes (120 seconds)
    // Real implementation would track actual play time
    if (mStats.totalRaces == 0) return 0;
    return mStats.totalRaces * 120;
}

u32 License::getWinRate() const {
    if (mStats.totalRaces == 0) return 0;
    // Return win rate as percentage (0-100), with 2 decimal places as fixed point
    // e.g. 1234 = 12.34%
    return (mStats.totalWins * 10000) / mStats.totalRaces;
}

// ============================================================================
// Formatting
// ============================================================================

void License::formatVR(u32 vr, char* buf, u32 bufSize) {
    if (!buf || bufSize < 5) {
        if (buf && bufSize > 0) buf[0] = '\0';
        return;
    }
    // MKWii displays VR as 4-digit, zero-padded: "5000", "9999"
    snprintf(buf, bufSize, "%04u", vr > MAX_VR ? MAX_VR : vr);
}

// ============================================================================
// serialize — Write license data to a save buffer
//
// Layout:
//   0x000: Name (11 bytes)
//   0x00B: VR (2 bytes, big-endian)
//   0x00D: BR (2 bytes, big-endian)
//   0x00F: Stats (sizeof(LicenseStats) bytes)
//   Stats end: Records (32 × 20 = 640 bytes)
//   Records end: Ghost count (4 bytes)
//   GhostCount+4: Ghosts (36 × 0x2800 = 248,832 bytes each, but serialized)
// ============================================================================

u32 License::serialize(u8* buffer, u32 bufferSize) const {
    if (!buffer || bufferSize < 0x100) return 0;

    u32 offset = 0;

    // --- Name (11 bytes, null-padded) ---
    memcpy(buffer + offset, mName, LICENSE_NAME_MAX + 1);
    offset += LICENSE_NAME_MAX + 1;

    // --- VR (2 bytes, big-endian) ---
    buffer[offset++] = (u8)((mVR >> 8) & 0xFF);
    buffer[offset++] = (u8)(mVR & 0xFF);

    // --- BR (2 bytes, big-endian) ---
    buffer[offset++] = (u8)((mBR >> 8) & 0xFF);
    buffer[offset++] = (u8)(mBR & 0xFF);

    // --- Stats ---
    memcpy(buffer + offset, &mStats, sizeof(LicenseStats));
    offset += sizeof(LicenseStats);

    // --- Records (32 courses × 20 bytes each) ---
    for (u32 i = 0; i < MAX_RECORDS; i++) {
        u32 written = mRecords[i].serialize(buffer + offset, bufferSize - offset);
        if (written == 0) return 0;
        offset += written;
    }

    // --- Ghost count (4 bytes) ---
    buffer[offset++] = (u8)((mGhostCount >> 24) & 0xFF);
    buffer[offset++] = (u8)((mGhostCount >> 16) & 0xFF);
    buffer[offset++] = (u8)((mGhostCount >> 8)  & 0xFF);
    buffer[offset++] = (u8)(mGhostCount & 0xFF);

    // --- Ghost data (36 × 0x2800 bytes) ---
    for (u32 i = 0; i < MAX_GHOSTS_PER_LICENSE; i++) {
        if (offset + System::GHOST_FILE_SIZE > bufferSize) return 0;

        System::RawGhostFile rawGhost;
        memset(&rawGhost, 0, sizeof(rawGhost));

        if (!mGhosts[i].isEmpty()) {
            mGhosts[i].write(rawGhost);
        }

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Warray-bounds"
#pragma GCC diagnostic ignored "-Wstringop-overread"
        memcpy(buffer + offset, rawGhost._00, System::GHOST_FILE_SIZE);
#pragma GCC diagnostic pop
        offset += System::GHOST_FILE_SIZE;
    }

    return offset;
}

// ============================================================================
// deserialize — Read license data from a save buffer
// ============================================================================

u32 License::deserialize(const u8* buffer, u32 bufferSize) {
    if (!buffer || bufferSize < 0x100) return 0;

    u32 offset = 0;

    // --- Name ---
    memcpy(mName, buffer + offset, LICENSE_NAME_MAX + 1);
    mName[LICENSE_NAME_MAX] = '\0';
    offset += LICENSE_NAME_MAX + 1;

    // --- VR (big-endian) ---
    mVR = ((u32)buffer[offset] << 8) | (u32)buffer[offset + 1];
    offset += 2;

    // --- BR (big-endian) ---
    mBR = ((u32)buffer[offset] << 8) | (u32)buffer[offset + 1];
    offset += 2;

    // --- Stats ---
    memcpy(&mStats, buffer + offset, sizeof(LicenseStats));
    offset += sizeof(LicenseStats);

    // --- Records ---
    for (u32 i = 0; i < MAX_RECORDS; i++) {
        u32 read = mRecords[i].deserialize(buffer + offset, bufferSize - offset);
        if (read == 0) return 0;
        offset += read;
    }

    // --- Ghost count ---
    mGhostCount = ((u32)buffer[offset] << 24) | ((u32)buffer[offset + 1] << 16) |
                  ((u32)buffer[offset + 2] << 8) | (u32)buffer[offset + 3];
    offset += 4;

    // Clamp ghost count
    if (mGhostCount > MAX_GHOSTS_PER_LICENSE) {
        mGhostCount = MAX_GHOSTS_PER_LICENSE;
    }

    // --- Ghost data ---
    for (u32 i = 0; i < MAX_GHOSTS_PER_LICENSE; i++) {
        if (offset + System::GHOST_FILE_SIZE > bufferSize) break;

        System::RawGhostFile rawGhost;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Warray-bounds"
#pragma GCC diagnostic ignored "-Wstringop-overflow="
        memcpy(rawGhost._00, buffer + offset, System::GHOST_FILE_SIZE);
#pragma GCC diagnostic pop
        offset += System::GHOST_FILE_SIZE;

        mGhosts[i].read(rawGhost);
    }

    mDirty = false;
    return offset;
}

// ============================================================================
// init() — Reset license to default state
// @addr 0x804F7000
// ============================================================================

void License::init() {
    mName[0] = '\0';
    mVR = DEFAULT_VR;
    mBR = DEFAULT_BR;
    mGhostCount = 0;
    mDirty = false;
    mCreatedYear = 0;
    mCreatedMonth = 0;
    mCreatedDay = 0;

    memset(&mStats, 0, sizeof(LicenseStats));

    if (mMiiData) {
        delete mMiiData;
        mMiiData = nullptr;
    }

    for (u32 i = 0; i < MAX_RECORDS; i++) {
        mRecords[i].reset();
    }
    for (u32 i = 0; i < MAX_GHOSTS_PER_LICENSE; i++) {
        mGhosts[i].reset();
    }
}

// ============================================================================
// load() — Load license from a buffer (delegates to deserialize)
// @addr 0x804F7020
// ============================================================================

u32 License::load(const u8* buffer, u32 bufferSize) {
    return deserialize(buffer, bufferSize);
}

// ============================================================================
// save() — Save license to a buffer (delegates to serialize)
// @addr 0x804F7040
// ============================================================================

u32 License::save(u8* buffer, u32 bufferSize) const {
    return serialize(buffer, bufferSize);
}

// ============================================================================
// getMiiData() — Get raw Mii data pointer
// @addr 0x804F70C0
// (Inline in hpp)
// ============================================================================

// ============================================================================
// setMiiData() — Set raw Mii data pointer (takes ownership)
// @addr 0x804F70D0
// (Inline in hpp)
// ============================================================================

// ============================================================================
// getLicenseName() — Get the license display name
// @addr 0x804F7080
// (Inline in hpp)
// ============================================================================

// ============================================================================
// setLicenseName() — Set the license display name
// @addr 0x804F70A0
// (Inline in hpp)
// ============================================================================

// ============================================================================
// isValid() — Check if this license contains valid data
// @addr 0x804F7100
//
// A license is valid if:
//   - It has a non-empty name
//   - VR is within valid range (1000-9999)
//   - BR is within valid range (1000-9999)
// ============================================================================

bool License::isValid() const {
    // Name must not be empty
    if (mName[0] == '\0') return false;

    // VR must be in valid range
    if (mVR < 1000 || mVR > MAX_VR) return false;

    // BR must be in valid range
    if (mBR < 1000 || mBR > MAX_BR) return false;

    return true;
}

// ============================================================================
// getCreatedDate() — Get packed creation date (year | month | day)
// @addr 0x804F7120
//
// Returns a packed u32: bits 16-31 = year, bits 8-15 = month, bits 0-7 = day
// ============================================================================

u32 License::getCreatedDate() const {
    return ((u32)mCreatedYear << 16) | ((u32)mCreatedMonth << 8) | (u32)mCreatedDay;
}

// ============================================================================
// getTotalRaceCount() — Get total number of races completed
// @addr 0x804F7140
// ============================================================================

u32 License::getTotalRaceCount() const {
    return mStats.totalRaces;
}

// ============================================================================
// incrementRaceCount() — Increment the total race counter
// @addr 0x804F7160
// ============================================================================

void License::incrementRaceCount() {
    mStats.totalRaces++;
    mDirty = true;
}

// ============================================================================
// License_resetLicense() — Free function to reset a license to defaults
// @addr 0x804F7180
//
// Used by the save system when creating or resetting a license slot.
// ============================================================================

void License_resetLicense(License* license) {
    if (license == nullptr) return;
    license->init();
}