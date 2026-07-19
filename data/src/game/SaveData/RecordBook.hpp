#pragma once
// ============================================================================
// RecordBook.hpp — Save::RecordBook (Race Records Manager)
//
// Manages all time trial records across all courses. Provides:
//   - Per-course best race times and best lap times
//   - Staff ghost comparisons
//   - Record sorting and ranking
//   - Record statistics (total records, beaten staff ghosts, etc.)
//
// MKWii has 32 time-trialable courses:
//   Mushroom Cup (8): 0x00-0x07
//   Flower Cup   (8): 0x08-0x0F
//   Star Cup     (8): 0x10-0x17
//   Special Cup  (8): 0x18-0x1F
//
// The original game stores records in the license data.
// RecordBook provides a convenient query interface.
//
// Referenced in decompiled code:
//   RacedataFactory_packRacedataRecord (0x8055946c area)
//
// Categorization: GENESIS Phase 5 (SaveData Module)
// ============================================================================

#include "rk_common.h"
#include "RecordData.hpp"

namespace Save {

// ============================================================================
// Record Summary Statistics
// ============================================================================

struct RecordSummary {
    u32 totalRecords;         // Courses with at least one record
    u32 totalStaffGhostsBeaten; // Courses where player beat staff ghost
    u32 totalThreeStar;        // Courses with 3-star rating
    u32 totalTwoStar;          // Courses with 2-star rating
    u32 totalOneStar;          // Courses with 1-star rating
    u32 totalNoStar;           // Courses with no stars
    u32 bestCourseId;          // Course with the best relative time
    u32 worstCourseId;         // Course with the worst relative time
};

// ============================================================================
// Record Ranking — Where a time ranks among all records
// ============================================================================

struct RecordRanking {
    u32 position;        // 1 = best, MAX_RECORDS = worst, 0 = no record
    u32 countAhead;      // How many players have better times
    u32 countBehind;     // How many players have worse times
    u32 countTotal;      // Total records for this course
};

// ============================================================================
// Star Rating for a Course
// ============================================================================
// MKWii awards stars based on how close the player's time is
// to the staff ghost time:
//   3 stars: within 3% of staff ghost
//   2 stars: within 7% of staff ghost
//   1 star: within 15% of staff ghost
//   0 stars: worse than 15% or no record

enum StarRating {
    STAR_NONE = 0,
    STAR_ONE  = 1,
    STAR_TWO  = 2,
    STAR_THREE = 3,
};

// ============================================================================
// RecordBook — Race Records Manager
// ============================================================================

class RecordBook {
public:
    RecordBook();
    ~RecordBook();

    // --- Record Access ---
    // Get record data for a specific course
    const RecordData* getRecord(u32 courseIndex) const;
    RecordData* getRecordMutable(u32 courseIndex);

    // Set a record (only if it's better than the current one)
    bool setRecord(u32 courseIndex, const System::Time& raceTime,
                   const System::Time& lapTime, const RecordMeta& meta);

    // Set just the best lap time
    bool setLapRecord(u32 courseIndex, const System::Time& lapTime,
                      const RecordMeta& meta);

    // Clear a course record
    void clearRecord(u32 courseIndex);

    // Check if a time would be a new record
    bool isNewRaceRecord(u32 courseIndex, const System::Time& raceTime) const;
    bool isNewLapRecord(u32 courseIndex, const System::Time& lapTime) const;

    // --- Star Ratings ---
    // Get star rating for a course
    StarRating getStarRating(u32 courseIndex) const;

    // Get star rating based on player time vs staff ghost time
    static StarRating calculateStarRating(const System::Time& playerTime,
                                           const System::Time& staffGhostTime);

    // Set the staff ghost time for a course (for star calculations)
    void setStaffGhostTime(u32 courseIndex, const System::Time& time);

    // --- Statistics ---
    // Compute overall record summary
    void computeSummary(RecordSummary& outSummary) const;

    // Get total number of courses with records
    u32 getRecordCount() const;

    // Count of beaten staff ghosts
    u32 getStaffGhostsBeaten() const;

    // --- Serialization ---
    // Serialize all records to a buffer
    u32 serialize(u8* buffer, u32 bufferSize) const;

    // Deserialize records from a buffer
    u32 deserialize(const u8* buffer, u32 bufferSize);

    // --- Bulk Operations ---
    // Load records from a License's record array
    void loadFromRecords(const RecordData records[32]);

    // Save records to a License's record array
    void saveToRecords(RecordData records[32]) const;

    // Clear all records
    void clearAll();

    // --- Constants ---
    static const u32 COURSE_COUNT = 32;

private:
    // === Data ===
    RecordData  mRecords[COURSE_COUNT];   // Per-course records
    System::Time mStaffGhosts[COURSE_COUNT]; // Staff ghost times (for star calc)
};

} // namespace Save