// ============================================================================
// RecordBook.cpp — Save::RecordBook Implementation
//
// Manages time trial records with star ratings and statistics.
// ============================================================================

#include "RecordBook.hpp"
#include <cstring>
#include <algorithm>

namespace Save {

RecordBook::RecordBook() {
    for (u32 i = 0; i < COURSE_COUNT; i++) {
        mRecords[i].reset();
        mStaffGhosts[i].minutes = 0;
        mStaffGhosts[i].seconds = 0;
        mStaffGhosts[i].millis = 0;
    }
}

RecordBook::~RecordBook() {
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

    return updated;
}

bool RecordBook::setLapRecord(u32 courseIndex, const System::Time& lapTime,
                               const RecordMeta& meta) {
    if (courseIndex >= COURSE_COUNT) return false;
    if (!mRecords[courseIndex].isNewLapRecord(lapTime)) return false;

    mRecords[courseIndex].setLapRecord(lapTime, meta);
    return true;
}

void RecordBook::clearRecord(u32 courseIndex) {
    if (courseIndex >= COURSE_COUNT) return;
    mRecords[courseIndex].reset();
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
}

} // namespace Save