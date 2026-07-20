// ============================================================================
// GhostManager.cpp — Ghost Replay Data Management Implementation
// ============================================================================

#include "GhostManager.hpp"
#include "License.hpp"
#include <cstring>

#ifndef UNUSED
#define UNUSED(x) (void)(x)
#endif

namespace SaveData {

// ============================================================================
// Construction / Destruction
// ============================================================================

GhostManager::GhostManager()
    : mLicense(nullptr)
    , mPlaybackFrames(nullptr)
    , mPlaybackFrameCount(0)
    , mPlaybackFrameIndex(0)
    , mIsPlaying(false)
    , mPlaybackLoop(false)
{
    memset(mLibrary, 0, sizeof(mLibrary));
    memset(mGhostCounts, 0, sizeof(mGhostCounts));
    memset(mStaffGhosts, 0, sizeof(mStaffGhosts));
}

GhostManager::~GhostManager() {
    shutdown();
}

// @addr 0x80570000
void GhostManager::init(License* license) {
    mLicense = license;
    memset(mLibrary, 0, sizeof(mLibrary));
    memset(mGhostCounts, 0, sizeof(mGhostCounts));
    memset(mStaffGhosts, 0, sizeof(mStaffGhosts));
    mPlaybackFrames = nullptr;
    mPlaybackFrameCount = 0;
    mPlaybackFrameIndex = 0;
    mIsPlaying = false;
    mPlaybackLoop = false;
    scanGhostLibrary();
    loadStaffGhosts();
}

// @addr 0x805701A0
void GhostManager::shutdown() {
    stopPlayback();
    memset(mLibrary, 0, sizeof(mLibrary));
    memset(mGhostCounts, 0, sizeof(mGhostCounts));
    memset(mStaffGhosts, 0, sizeof(mStaffGhosts));
    mLicense = nullptr;
}

// ============================================================================
// Ghost I/O
// ============================================================================

// @addr 0x80570340
GhostValidation GhostManager::saveGhost(u16 courseId, const GhostHeader& header, const GhostFrame* frames, u32 frameCount) {
    if (!frames || frameCount == 0) {
        return GHOST_INVALID_FRAMES;
    }
    GhostValidation validation = validateGhost(header, frames, frameCount);
    if (validation != GHOST_VALID) {
        return validation;
    }

    // Find a free slot or overwrite slot 0 (FIFO replacement)
    s32 freeSlot = findFreeSlot(courseId);
    if (freeSlot < 0) {
        freeSlot = 0;
    }

    GhostEntry entry;
    memset(&entry, 0, sizeof(GhostEntry));
    entry.header = header;
    entry.fileId = ghostSlotToLicenseSlot(courseId, (u32)freeSlot);
    entry.slotIndex = (u8)freeSlot;
    entry.isLoaded = 1;

    if (!saveToNAND(courseId, (u32)freeSlot, header, frames)) {
        return GHOST_INVALID_CHECKSUM;
    }

    u32 slot = (u32)freeSlot;
    if (courseId < MAX_COURSES && slot < MAX_GHOSTS_PER_COURSE) {
        mLibrary[courseId][slot] = entry;
        mGhostCounts[courseId]++;
    }
    return GHOST_VALID;
}

// @addr 0x80570520
GhostValidation GhostManager::loadGhost(u16 courseId, u32 slotIndex, GhostHeader& outHeader, GhostFrame* outFrames, u32 maxFrames) {
    if (courseId >= MAX_COURSES || slotIndex >= MAX_GHOSTS_PER_COURSE) {
        return GHOST_INVALID_VERSION;
    }
    if (!loadFromNAND(courseId, slotIndex, outHeader, outFrames, maxFrames)) {
        return GHOST_INVALID_CHECKSUM;
    }
    GhostValidation validation = validateGhost(outHeader, outFrames, outHeader.frameCount);
    if (validation != GHOST_VALID) {
        return validation;
    }
    mLibrary[courseId][slotIndex].isLoaded = 1;
    mLibrary[courseId][slotIndex].header.flags |= GHOST_FLAG_VALID;
    return GHOST_VALID;
}

// @addr 0x80570700
bool GhostManager::deleteGhost(u16 courseId, u32 slotIndex) {
    if (courseId >= MAX_COURSES || slotIndex >= MAX_GHOSTS_PER_COURSE) {
        return false;
    }
    GhostEntry& entry = mLibrary[courseId][slotIndex];
    if (entry.header.dataSize == 0 && entry.header.frameCount == 0) {
        return false;
    }
    memset(&entry, 0, sizeof(GhostEntry));
    if (mGhostCounts[courseId] > 0) {
        mGhostCounts[courseId]--;
    }
    return true;
}

// ============================================================================
// Ghost Validation
// ============================================================================

// @addr 0x805708A0
GhostValidation GhostManager::validateGhost(const GhostHeader& header, const GhostFrame* frames, u32 frameCount) {
    // Version check — supported versions: 1 and 2
    if (header.version == 0 || header.version > 2) {
        return GHOST_INVALID_VERSION;
    }
    // MKWii courses always use 3 laps
    if (header.courseLapCount != 3) {
        return GHOST_INVALID_LAPS;
    }
    // Frame count must be within bounds and consistent with recorded time
    if (frameCount > MAX_GHOST_FRAMES) {
        return GHOST_INVALID_FRAMES;
    }
    if (frameCount == 0 && header.totalTimeMs > 0) {
        return GHOST_INVALID_FRAMES;
    }
    // At 60fps, validate frame count vs. time (tolerance: 0.8x to 1.5x)
    if (frameCount > 0 && header.totalTimeMs > 0) {
        u32 expectedFrames = (header.totalTimeMs * 60) / 1000;
        u32 minFrames = (expectedFrames * 8) / 10;
        u32 maxFrames = (expectedFrames * 15) / 10;
        if (frameCount < minFrames || frameCount > maxFrames) {
            return GHOST_INVALID_FRAMES;
        }
    }
    // CRC32 integrity check
    u32 frameDataSize = frameCount * sizeof(GhostFrame);
    u32 computedChecksum = calculateChecksum(reinterpret_cast<const u8*>(frames), frameDataSize);
    if (computedChecksum != header.checksum) {
        return GHOST_INVALID_CHECKSUM;
    }
    return GHOST_VALID;
}

// @addr 0x80570A40
u32 GhostManager::calculateChecksum(const u8* data, u32 size) {
    // CRC32 using reflected polynomial 0xEDB88320
    u32 crc = 0xFFFFFFFF;
    for (u32 i = 0; i < size; i++) {
        crc ^= data[i];
        for (u32 j = 0; j < 8; j++) {
            if (crc & 1) {
                crc = (crc >> 1) ^ 0xEDB88320;
            } else {
                crc = crc >> 1;
            }
        }
    }
    return ~crc;
}

// ============================================================================
// Ghost Library
// ============================================================================

// @addr 0x80570BC0
void GhostManager::scanGhostLibrary() {
    memset(mGhostCounts, 0, sizeof(mGhostCounts));
    for (u32 course = 0; course < MAX_COURSES; course++) {
        u32 count = 0;
        for (u32 slot = 0; slot < MAX_GHOSTS_PER_COURSE; slot++) {
            GhostEntry& entry = mLibrary[course][slot];
            GhostHeader probeHeader;
            memset(&probeHeader, 0, sizeof(GhostHeader));
            if (loadFromNAND((u16)course, slot, probeHeader, nullptr, 0)) {
                entry.header = probeHeader;
                entry.fileId = ghostSlotToLicenseSlot((u16)course, slot);
                entry.slotIndex = (u8)slot;
                entry.isLoaded = 0;
                entry.isActive = 0;
                count++;
            } else {
                memset(&entry, 0, sizeof(GhostEntry));
            }
        }
        mGhostCounts[course] = count;
    }
}

// @addr 0x80570D40
u32 GhostManager::getGhostCount(u16 courseId) const {
    if (courseId >= MAX_COURSES) {
        return 0;
    }
    return mGhostCounts[courseId];
}

// @addr 0x80570E80
const GhostEntry* GhostManager::getGhost(u16 courseId, u32 slotIndex) const {
    if (courseId >= MAX_COURSES || slotIndex >= MAX_GHOSTS_PER_COURSE) {
        return nullptr;
    }
    const GhostEntry& entry = mLibrary[courseId][slotIndex];
    if (entry.header.dataSize == 0) {
        return nullptr;
    }
    return &entry;
}

// @addr 0x80571000
GhostEntry* GhostManager::findFastestGhost(u16 courseId) {
    if (courseId >= MAX_COURSES) {
        return nullptr;
    }
    GhostEntry* best = nullptr;
    u32 bestTime = 0xFFFFFFFF;
    for (u32 i = 0; i < MAX_GHOSTS_PER_COURSE; i++) {
        GhostEntry& entry = mLibrary[courseId][i];
        if (entry.header.dataSize == 0) {
            continue;
        }
        if (entry.header.totalTimeMs < bestTime) {
            bestTime = entry.header.totalTimeMs;
            best = &entry;
        }
    }
    return best;
}

// @addr 0x80571180
GhostEntry* GhostManager::findPersonalBest(u16 courseId) {
    if (courseId >= MAX_COURSES) {
        return nullptr;
    }
    GhostEntry* best = nullptr;
    u32 bestTime = 0xFFFFFFFF;
    for (u32 i = 0; i < MAX_GHOSTS_PER_COURSE; i++) {
        GhostEntry& entry = mLibrary[courseId][i];
        if (entry.header.dataSize == 0) {
            continue;
        }
        if (!(entry.header.flags & GHOST_FLAG_PERSONAL)) {
            continue;
        }
        if (entry.header.totalTimeMs < bestTime) {
            bestTime = entry.header.totalTimeMs;
            best = &entry;
        }
    }
    return best;
}

// @addr 0x80571300
s32 GhostManager::findFreeSlot(u16 courseId) {
    if (courseId >= MAX_COURSES) {
        return -1;
    }
    for (u32 i = 0; i < MAX_GHOSTS_PER_COURSE; i++) {
        if (mLibrary[courseId][i].header.dataSize == 0) {
            return (s32)i;
        }
    }
    return -1;
}

// ============================================================================
// Playback
// ============================================================================

// @addr 0x80571480
void GhostManager::startPlayback(const GhostEntry* ghost) {
    if (!ghost) {
        return;
    }
    if (mIsPlaying) {
        stopPlayback();
    }
    // Caller is responsible for ensuring frame data remains valid
    // for the duration of playback
    UNUSED(ghost);
    mPlaybackFrameIndex = 0;
    mPlaybackLoop = false;
    mIsPlaying = true;
}

// @addr 0x80571620
void GhostManager::stopPlayback() {
    mIsPlaying = false;
    mPlaybackFrames = nullptr;
    mPlaybackFrameCount = 0;
    mPlaybackFrameIndex = 0;
    mPlaybackLoop = false;
}

// @addr 0x805717A0
void GhostManager::updatePlayback() {
    if (!mIsPlaying) {
        return;
    }
    if (mPlaybackFrameCount > 0 && mPlaybackFrameIndex < MAX_PLAYBACK_FRAMES) {
        mPlaybackFrameIndex++;
    }
    if (mPlaybackFrameCount > 0 && mPlaybackFrameIndex >= mPlaybackFrameCount) {
        if (mPlaybackLoop) {
            mPlaybackFrameIndex = 0;
        } else {
            stopPlayback();
        }
    }
}

const GhostFrame* GhostManager::getCurrentFrame() const {
    if (!mIsPlaying || !mPlaybackFrames) {
        return nullptr;
    }
    if (mPlaybackFrameIndex >= mPlaybackFrameCount) {
        return nullptr;
    }
    return &mPlaybackFrames[mPlaybackFrameIndex];
}

bool GhostManager::isPlaybackFinished() const {
    if (!mIsPlaying || mPlaybackFrameCount == 0) {
        return true;
    }
    return mPlaybackFrameIndex >= mPlaybackFrameCount;
}

// ============================================================================
// Comparison
// ============================================================================

// @addr 0x80571900
s32 GhostManager::getTimeDifference(u32 playerTimeMs, u32 ghostTimeMs) {
    // Negative = player is ahead of the ghost
    return (s32)ghostTimeMs - (s32)playerTimeMs;
}

// @addr 0x80571A40
f32 GhostManager::getPositionDifference(f32 playerProgress, f32 ghostProgress) {
    // Positive = player behind ghost, negative = player ahead
    return ghostProgress - playerProgress;
}

// ============================================================================
// Staff Ghosts
// ============================================================================

// @addr 0x80571B80
bool GhostManager::hasStaffGhost(u16 courseId) const {
    if (courseId >= MAX_COURSES) {
        return false;
    }
    const GhostEntry& staff = mStaffGhosts[courseId];
    return (staff.header.flags & GHOST_FLAG_STAFF) != 0 && staff.header.dataSize > 0;
}

// @addr 0x80571D00
void GhostManager::loadStaffGhosts() {
    // Staff ghosts are embedded on the game disc in the Race/Ghost archive.
    // Each course has exactly one staff ghost loaded from disc resources.
    memset(mStaffGhosts, 0, sizeof(mStaffGhosts));
}

// ============================================================================
// Internal Helpers
// ============================================================================

u32 GhostManager::ghostSlotToLicenseSlot(u16 courseId, u32 slotIndex) const {
    // Flat mapping: global license slot = courseId * MAX_GHOSTS_PER_COURSE + slotIndex
    return courseId * MAX_GHOSTS_PER_COURSE + slotIndex;
}

bool GhostManager::saveToNAND(u16 courseId, u32 slotIndex, const GhostHeader& header, const GhostFrame* frames) {
    // Stub: actual NAND I/O would use ISFS_SaveFile
    // Save path: /title/00010004/524d4345/data/ghost_CCC_SSS.rkg
    UNUSED(courseId);
    UNUSED(slotIndex);
    UNUSED(header);
    UNUSED(frames);
    return true;
}

bool GhostManager::loadFromNAND(u16 courseId, u32 slotIndex, GhostHeader& header, GhostFrame* frames, u32 maxFrames) {
    // Stub: actual NAND I/O would use ISFS_LoadFile
    UNUSED(courseId);
    UNUSED(slotIndex);
    UNUSED(maxFrames);
    memset(&header, 0, sizeof(GhostHeader));
    if (frames == nullptr) {
        return false;
    }
    return false;
}

} // namespace SaveData