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

    // --- Initialization ---
    // Initialize record book from save data buffer
    // @param buffer  Raw save data containing record book section
    // @param size    Size of the buffer in bytes
    void init(const u8* buffer, u32 size);

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

    // --- Ghost Records ---
    // Get the best ghost record for a course (best race time)
    // @return Pointer to the record, or nullptr if no ghost exists
    const RecordData* getGhostRecord(u32 courseId) const;

    // --- Time Records ---
    // Get best race time for a course with a specific engine class
    // @param courseId     Course index (0-31)
    // @param engineClass  Engine class (0=50cc, 1=100cc, 2=150cc, 3=Mirror)
    // @return Best time, or zero time if no record
    System::Time getTimeRecord(u32 courseId, u8 engineClass) const;

    // --- GP Ranks ---
    // Get best GP rank for a cup
    // @param cupId  Cup index (0=Mushroom, 1=Flower, 2=Star, 3=Special)
    // @return Best rank (1=1st, 0=none)
    u8 getGPRank(u32 cupId) const;

    // --- Setters ---
    // Update best time if the new time is faster
    bool setTimeRecord(u32 courseId, u8 engineClass, const System::Time& time,
                       const RecordMeta& meta);

    // Save ghost data for a course
    bool setGhostRecord(u32 courseId, const System::Time& time,
                        const RecordMeta& meta);

    // Update GP rank if the new rank is better
    bool setGPRank(u32 cupId, u8 rank);

    // --- Record Checks ---
    // Check if a time is a new record for the course
    bool isNewRecord(u32 courseId, f32 time) const;

    // --- Statistics ---
    // Compute overall record summary
    void computeSummary(RecordSummary& outSummary) const;

    // Get total number of courses with records
    u32 getRecordCount() const;
    // Get total records across all courses
    u32 getTotalRecords() const;

    // Count of beaten staff ghosts
    u32 getStaffGhostsBeaten() const;

    // --- Persistence ---
    // Load records from NAND/save file
    s32 load(const char* savePath);

    // Write records back to NAND/save file
    s32 save(const char* savePath) const;

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
    static const u32 CUP_COUNT = 4;
    static const u32 ENGINE_CLASS_COUNT = 4;

private:
    // === Data ===
    RecordData  mRecords[COURSE_COUNT];   // Per-course records
    System::Time mStaffGhosts[COURSE_COUNT]; // Staff ghost times (for star calc)
    u8 mGPRanks[CUP_COUNT];              // Best GP rank per cup
    // Per-course per-engine-class best times (COURSE_COUNT * ENGINE_CLASS_COUNT)
    System::Time mEngineRecords[COURSE_COUNT * ENGINE_CLASS_COUNT];
    bool mDirty;                         // True if unsaved changes exist
};

// Validate save data integrity for a record book buffer
// @param buffer  Raw save data
// @param size    Size of the buffer
// @return true if the data is valid
bool RecordBook_verifySave(const u8* buffer, u32 size);

} // namespace Save