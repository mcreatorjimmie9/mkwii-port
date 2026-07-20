// ============================================================================
// RecordBook.cpp — Save::RecordBook Implementation
//
// Manages time trial records with star ratings and statistics.
// ============================================================================

#include "RecordBook.hpp"
#include <cstring>
#include <cstdlib>
#include <cstdio>

namespace Save {

RecordBook::RecordBook()
    : mDirty(false) {
    for (u32 i = 0; i < COURSE_COUNT; i++) {
        mRecords[i].reset();
        mStaffGhosts[i].minutes = 0;
        mStaffGhosts[i].seconds = 0;
        mStaffGhosts[i].millis = 0;
    }
    memset(mGPRanks, 0, sizeof(mGPRanks));
    memset(mEngineRecords, 0, sizeof(mEngineRecords));
}

RecordBook::~RecordBook() {
}

// ============================================================================
// init — Initialize record book from save data buffer
// ============================================================================

void RecordBook::init(const u8* buffer, u32 size) {
    if (buffer && size >= COURSE_COUNT * RecordData::SAVE_SIZE) {
        deserialize(buffer, size);
    }
    mDirty = false;
}

// ============================================================================
// load — Load records from NAND/save file
// ============================================================================

s32 RecordBook::load(const char* savePath) {
    if (!savePath) return -1;

    FILE* f = fopen(savePath, "rb");
    if (!f) return -2;

    // Read the record data section from the file
    u8 buffer[COURSE_COUNT * RecordData::SAVE_SIZE];
    size_t bytesRead = fread(buffer, 1, sizeof(buffer), f);
    fclose(f);

    if (bytesRead < sizeof(buffer)) {
        return -3; // Incomplete data
    }

    // Validate before loading
    if (!RecordBook_verifySave(buffer, (u32)bytesRead)) {
        return -4; // Corrupted data
    }

    u32 bytesConsumed = deserialize(buffer, (u32)bytesRead);
    if (bytesConsumed == 0) {
        return -5; // Deserialization failed
    }

    mDirty = false;
    return 0;
}

// ============================================================================
// save — Write records back to NAND/save file
// ============================================================================

s32 RecordBook::save(const char* savePath) const {
    if (!savePath) return -1;

    u8 buffer[COURSE_COUNT * RecordData::SAVE_SIZE];
    u32 bytesWritten = serialize(buffer, sizeof(buffer));
    if (bytesWritten == 0) return -2;

    FILE* f = fopen(savePath, "wb");
    if (!f) return -3;

    size_t written = fwrite(buffer, 1, bytesWritten, f);
    fclose(f);

    if (written != bytesWritten) {
        return -4;
    }

    // Note: const cast to clear dirty flag (called on const in practice)
    RecordBook* self = const_cast<RecordBook*>(this);
    self->mDirty = false;
    return 0;
}

// ============================================================================
// getGhostRecord — Get best ghost for course
// ============================================================================

const RecordData* RecordBook::getGhostRecord(u32 courseId) const {
    if (courseId >= COURSE_COUNT) return nullptr;

    const RecordData* record = &mRecords[courseId];
    if (!record->hasRecord()) return nullptr;

    return record;
}

// ============================================================================
// getTimeRecord — Best time for course and engine class
// ============================================================================

System::Time RecordBook::getTimeRecord(u32 courseId, u8 engineClass) const {
    System::Time zeroTime;
    zeroTime.minutes = 0;
    zeroTime.seconds = 0;
    zeroTime.millis = 0;

    if (courseId >= COURSE_COUNT) return zeroTime;
    if (engineClass >= ENGINE_CLASS_COUNT) return zeroTime;

    return mEngineRecords[courseId * ENGINE_CLASS_COUNT + engineClass];
}

// ============================================================================
// getGPRank — Best GP rank for a cup
// ============================================================================

u8 RecordBook::getGPRank(u32 cupId) const {
    if (cupId >= CUP_COUNT) return 0;
    return mGPRanks[cupId];
}

// ============================================================================
// setTimeRecord — Update best time if faster
// ============================================================================

bool RecordBook::setTimeRecord(u32 courseId, u8 engineClass,
                               const System::Time& time,
                               const RecordMeta& meta) {
    if (courseId >= COURSE_COUNT) return false;
    if (engineClass >= ENGINE_CLASS_COUNT) return false;

    u32 idx = courseId * ENGINE_CLASS_COUNT + engineClass;
    System::Time current = mEngineRecords[idx];

    // Compare: if new time is faster (lower milliseconds)
    if (current.isZero() || time < current) {
        mEngineRecords[idx] = time;
        // Also update the main record if it's better
        setRecord(courseId, time, time, meta);
        mDirty = true;
        return true;
    }

    return false;
}

// ============================================================================
// setGhostRecord — Save ghost data
// ============================================================================

bool RecordBook::setGhostRecord(u32 courseId, const System::Time& time,
                                const RecordMeta& meta) {
    if (courseId >= COURSE_COUNT) return false;

    // Update the record with ghost flag
    RecordMeta ghostMeta = meta;
    ghostMeta.isStaffGhost = 1;

    bool updated = false;
    if (mRecords[courseId].isNewRecord(time)) {
        mRecords[courseId].setRecord(time, ghostMeta);
        updated = true;
    }

    if (updated) {
        mDirty = true;
    }
    return updated;
}

// ============================================================================
// setGPRank — Update GP rank if better
// ============================================================================

bool RecordBook::setGPRank(u32 cupId, u8 rank) {
    if (cupId >= CUP_COUNT) return false;
    if (rank == 0) return false; // Invalid rank

    // Lower rank number is better (1st place = rank 1)
    if (mGPRanks[cupId] == 0 || rank < mGPRanks[cupId]) {
        mGPRanks[cupId] = rank;
        mDirty = true;
        return true;
    }

    return false;
}

// ============================================================================
// isNewRecord — Check if time is a new record
// ============================================================================

bool RecordBook::isNewRecord(u32 courseId, f32 time) const {
    if (courseId >= COURSE_COUNT) return false;

    const RecordData* record = &mRecords[courseId];
    if (!record->hasRecord()) return true; // No existing record

    // Convert time (in seconds) to milliseconds for comparison
    s32 timeMs = (s32)(time * 1000.0f);
    System::Time existing = record->getBestTime();
    s32 existingMs = existing.toMilliseconds();

    return timeMs < existingMs;
}

// ============================================================================
// getTotalRecords — Total record count across all data
// ============================================================================

u32 RecordBook::getTotalRecords() const {
    u32 count = getRecordCount();

    // Count engine-class records that differ from the main record
    for (u32 i = 0; i < COURSE_COUNT; i++) {
        for (u32 j = 0; j < ENGINE_CLASS_COUNT; j++) {
            System::Time t = mEngineRecords[i * ENGINE_CLASS_COUNT + j];
            if (!t.isZero()) {
                count++;
            }
        }
    }

    // Count GP ranks
    for (u32 i = 0; i < CUP_COUNT; i++) {
        if (mGPRanks[i] != 0) {
            count++;
        }
    }

    return count;
}

// --- Record Access ---

const RecordData* RecordBook::getRecord(u32 courseIndex) const {
    if (courseIndex >= COURSE_COUNT) return nullptr;
    return &mRecords[courseIndex];
}

RecordData* RecordBook::getRecordMutable(u32 courseIndex) {
    if (courseIndex >= COURSE_COUNT) return nullptr;
    return &mRecords[courseIndex];
}

bool RecordBook::setRecord(u32 courseIndex, const System::Time& raceTime,
                            const System::Time& lapTime, const RecordMeta& meta) {
    if (courseIndex >= COURSE_COUNT) return false;

    bool updated = false;

    if (mRecords[courseIndex].isNewRecord(raceTime)) {
        mRecords[courseIndex].setRecord(raceTime, meta);
        updated = true;
    }

    if (mRecords[courseIndex].isNewLapRecord(lapTime)) {
        mRecords[courseIndex].setLapRecord(lapTime, meta);
        updated = true;
    }

    if (updated) {
        mDirty = true;
    }

    return updated;
}

bool RecordBook::setLapRecord(u32 courseIndex, const System::Time& lapTime,
                               const RecordMeta& meta) {
    if (courseIndex >= COURSE_COUNT) return false;
    if (!mRecords[courseIndex].isNewLapRecord(lapTime)) return false;

    mRecords[courseIndex].setLapRecord(lapTime, meta);
    mDirty = true;
    return true;
}

void RecordBook::clearRecord(u32 courseIndex) {
    if (courseIndex >= COURSE_COUNT) return;
    mRecords[courseIndex].reset();
    mDirty = true;
}

bool RecordBook::isNewRaceRecord(u32 courseIndex, const System::Time& raceTime) const {
    if (courseIndex >= COURSE_COUNT) return false;
    return mRecords[courseIndex].isNewRecord(raceTime);
}

bool RecordBook::isNewLapRecord(u32 courseIndex, const System::Time& lapTime) const {
    if (courseIndex >= COURSE_COUNT) return false;
    return mRecords[courseIndex].isNewLapRecord(lapTime);
}

// --- Star Ratings ---

StarRating RecordBook::getStarRating(u32 courseIndex) const {
    if (courseIndex >= COURSE_COUNT) return STAR_NONE;

    const RecordData* record = &mRecords[courseIndex];
    if (!record->hasRecord()) return STAR_NONE;

    // If no staff ghost time set, can't calculate stars
    if (mStaffGhosts[courseIndex].minutes == 0 &&
        mStaffGhosts[courseIndex].seconds == 0 &&
        mStaffGhosts[courseIndex].millis == 0) {
        return STAR_NONE;
    }

    return calculateStarRating(record->getBestTime(), mStaffGhosts[courseIndex]);
}

StarRating RecordBook::calculateStarRating(const System::Time& playerTime,
                                             const System::Time& staffGhostTime) {
    // Convert both times to total milliseconds
    s32 playerMs = (playerTime.minutes * 60 + playerTime.seconds) * 1000 + playerTime.millis * 10;
    s32 staffMs  = (staffGhostTime.minutes * 60 + staffGhostTime.seconds) * 1000 + staffGhostTime.millis * 10;

    if (staffMs <= 0) return STAR_NONE;
    if (playerMs <= 0) return STAR_NONE;

    // Calculate how much slower the player is (as a percentage)
    // Positive = player is slower
    s32 diffMs = playerMs - staffMs;
    s32 percentSlower = (diffMs * 1000) / staffMs; // in tenths of a percent

    if (percentSlower <= 30) return STAR_THREE;  // within 3%
    if (percentSlower <= 70) return STAR_TWO;     // within 7%
    if (percentSlower <= 150) return STAR_ONE;    // within 15%
    return STAR_NONE;
}

void RecordBook::setStaffGhostTime(u32 courseIndex, const System::Time& time) {
    if (courseIndex >= COURSE_COUNT) return;
    mStaffGhosts[courseIndex] = time;
}

// --- Statistics ---

void RecordBook::computeSummary(RecordSummary& outSummary) const {
    memset(&outSummary, 0, sizeof(RecordSummary));
    outSummary.bestCourseId = 0xFFFFFFFF;
    outSummary.worstCourseId = 0xFFFFFFFF;

    s32 bestDelta = 0x7FFFFFFF; // closest to staff ghost
    s32 worstDelta = -1;

    for (u32 i = 0; i < COURSE_COUNT; i++) {
        if (mRecords[i].hasRecord()) {
            outSummary.totalRecords++;

            StarRating star = getStarRating(i);
            switch (star) {
                case STAR_THREE: outSummary.totalThreeStar++; break;
                case STAR_TWO:   outSummary.totalTwoStar++;   break;
                case STAR_ONE:   outSummary.totalOneStar++;    break;
                default:         outSummary.totalNoStar++;     break;
            }

            // Calculate delta from staff ghost for best/worst
            if (mStaffGhosts[i].minutes != 0 || mStaffGhosts[i].seconds != 0) {
                s32 playerMs = (mRecords[i].getBestTime().minutes * 60 +
                               mRecords[i].getBestTime().seconds) * 1000 +
                               mRecords[i].getBestTime().millis * 10;
                s32 staffMs  = (mStaffGhosts[i].minutes * 60 +
                               mStaffGhosts[i].seconds) * 1000 +
                               mStaffGhosts[i].millis * 10;

                s32 delta = playerMs - staffMs;
                if (delta < bestDelta) {
                    bestDelta = delta;
                    outSummary.bestCourseId = i;
                }
                if (delta > worstDelta) {
                    worstDelta = delta;
                    outSummary.worstCourseId = i;
                }
            }
        }
    }
}

u32 RecordBook::getRecordCount() const {
    u32 count = 0;
    for (u32 i = 0; i < COURSE_COUNT; i++) {
        if (mRecords[i].hasRecord()) count++;
    }
    return count;
}

u32 RecordBook::getStaffGhostsBeaten() const {
    u32 count = 0;
    for (u32 i = 0; i < COURSE_COUNT; i++) {
        if (mRecords[i].hasRecord()) {
            if (getStarRating(i) >= STAR_ONE) {
                count++;
            }
        }
    }
    return count;
}

// --- Serialization ---

u32 RecordBook::serialize(u8* buffer, u32 bufferSize) const {
    u32 requiredSize = COURSE_COUNT * RecordData::SAVE_SIZE;
    if (!buffer || bufferSize < requiredSize) return 0;

    u32 offset = 0;
    for (u32 i = 0; i < COURSE_COUNT; i++) {
        offset += mRecords[i].serialize(buffer + offset, bufferSize - offset);
    }
    return offset;
}

u32 RecordBook::deserialize(const u8* buffer, u32 bufferSize) {
    u32 requiredSize = COURSE_COUNT * RecordData::SAVE_SIZE;
    if (!buffer || bufferSize < requiredSize) return 0;

    u32 offset = 0;
    for (u32 i = 0; i < COURSE_COUNT; i++) {
        offset += mRecords[i].deserialize(buffer + offset, bufferSize - offset);
    }
    return offset;
}

// --- Bulk Operations ---

void RecordBook::loadFromRecords(const RecordData records[32]) {
    for (u32 i = 0; i < COURSE_COUNT && i < 32; i++) {
        mRecords[i] = records[i];
    }
    mDirty = false;
}

void RecordBook::saveToRecords(RecordData records[32]) const {
    for (u32 i = 0; i < COURSE_COUNT && i < 32; i++) {
        records[i] = mRecords[i];
    }
}

void RecordBook::clearAll() {
    for (u32 i = 0; i < COURSE_COUNT; i++) {
        mRecords[i].reset();
    }
    memset(mGPRanks, 0, sizeof(mGPRanks));
    memset(mEngineRecords, 0, sizeof(mEngineRecords));
    mDirty = true;
}

// ============================================================================
// RecordBook_verifySave — Validate save data integrity
// ============================================================================

bool RecordBook_verifySave(const u8* buffer, u32 size) {
    if (!buffer) return false;

    // Minimum size check: need at least the record book header
    u32 requiredSize = Save::RecordBook::COURSE_COUNT * RecordData::SAVE_SIZE;
    if (size < requiredSize) return false;

    // Validate each record entry
    for (u32 i = 0; i < Save::RecordBook::COURSE_COUNT; i++) {
        u32 offset = i * RecordData::SAVE_SIZE;
        const u8* entry = buffer + offset;

        // Check record type byte (must be 0, 1, or 2)
        u8 recordType = entry[0];
        if (recordType > 2) return false;

        // Validate race time: minutes should be reasonable (0-59)
        s16 minutes = (s16(entry[1]) << 8) | entry[2];
        if (minutes < 0 || minutes > 59) return false;

        // Validate seconds (0-59)
        u8 seconds = entry[3];
        if (seconds > 59) return false;

        // Validate milliseconds (0-99)
        u8 millis = entry[4];
        if (millis > 99) return false;

        // Validate lap time similarly
        s16 lapMinutes = (s16(entry[5]) << 8) | entry[6];
        if (lapMinutes < 0 || lapMinutes > 59) return false;

        u8 lapSeconds = entry[7];
        if (lapSeconds > 59) return false;

        u8 lapMillis = entry[8];
        if (lapMillis > 99) return false;
    }

    return true;
}

} // namespace Save