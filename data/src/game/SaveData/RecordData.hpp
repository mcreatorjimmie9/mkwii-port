#pragma once
// ============================================================================
// RecordData.hpp — Time Trial Race Records
//
// Each course has a RecordData entry storing the best lap time,
// best race time, and metadata about the record (character, vehicle,
// controller type, drift setting, date achieved).
//
// MKWii has 32 time-trialable courses:
//   8 Mushroom Cup, 8 Flower Cup, 8 Star Cup, 8 Special Cup
//
// Categorization: GENESIS Phase 5 (SaveData Module)
// ============================================================================

#include "GhostFile.hpp"

// ============================================================================
// Record Metadata
// ============================================================================

#pragma pack(push, 1)

struct RecordMeta {
    u8  characterId;
    u8  vehicleId;
    u8  controllerType;
    u8  driftIsAuto;

    // Date the record was set
    u16 year;
    u8  month;           // 1-12
    u8  day;             // 1-31
    u8  hour;            // 0-23
    u8  minute;          // 0-59
    u8  second;          // 0-59
    u8  _pad[0x01];

    // Staff ghost indicator
    u8  isStaffGhost;    // 1 if this record matches/beats staff ghost
    u8  _pad2[0x03];
};

#pragma pack(pop)

// ============================================================================
// RecordData — Single Course Record
// ============================================================================

class RecordData {
public:
    RecordData();

    // --- Init / Load / Save ---
    void init();
    u32 load(const u8* buffer, u32 bufferSize);
    u32 save(u8* buffer, u32 bufferSize) const;

    // --- Best Times ---
    const System::Time& getBestTime() const { return mBestTime; }
    const System::Time& getBestLap() const { return mBestLap; }

    bool isNewRecord(const System::Time& raceTime) const;
    bool isNewLapRecord(const System::Time& lapTime) const;

    void setRecord(const System::Time& raceTime, const RecordMeta& meta);
    void setLapRecord(const System::Time& lapTime, const RecordMeta& meta);

    void setBestTime(const System::Time& t) { mBestTime = t; }
    void setBestLap(const System::Time& t) { mBestLap = t; }

    // --- Record existence ---
    bool hasRecord() const {
        return mBestTime.minutes != 0 || mBestTime.seconds != 0 || mBestTime.millis != 0;
    }
    bool hasLapRecord() const {
        return mBestLap.minutes != 0 || mBestLap.seconds != 0 || mBestLap.millis != 0;
    }

    // --- Clear ---
    void clearRecord();
    void clearLapRecord();

    // --- Metadata ---
    const RecordMeta& getMeta() const { return mMeta; }
    RecordMeta& getMeta() { return mMeta; }

    // --- Direct time access ---
    // @addr 0x804F6A00
    const System::Time& getTime() const { return mBestTime; }
    // @addr 0x804F6A20
    void setTime(const System::Time& t) { mBestTime = t; }

    // --- Date access ---
    // @addr 0x804F6A40
    void getDate(u16* year, u8* month, u8* day) const;
    // @addr 0x804F6A80
    void setDate(u16 year, u8 month, u8 day);

    // --- Personal best check ---
    // @addr 0x804F6AC0
    bool isPersonalBest() const;

    // --- Comparison ---
    // Returns <0 if this time is faster, 0 if equal, >0 if slower
    s32 compareRecord(const RecordData& other) const;
    s32 compareLapRecord(const RecordData& other) const;
    // @addr 0x804F6B00
    s32 compare(const System::Time& raceTime) const;
    bool operator==(const RecordData& other) const;
    bool operator!=(const RecordData& other) const { return !(*this == other); }

    // --- Utility ---
    void reset();

    // --- Serialization ---
    // Byte layout:
    //   [0]    record type (0x00 = none, 0x01 = race, 0x02 = both)
    //   [1-3]  best race time (minutes s16 BE, seconds u8, millis u8)
    //   [4-6]  best lap time (minutes s16 BE, seconds u8, millis u8)
    //   [7-8]  date: year (u16 BE)
    //   [9]    month, [10] day, [11] hour, [12] minute, [13] second
    //   [14]   characterId, [15] vehicleId, [16] controllerType, [17] driftIsAuto
    //   [18]   isStaffGhost
    //   [19]   padding to 20 bytes
    u32 serialize(u8* buffer, u32 bufferSize) const;
    u32 deserialize(const u8* buffer, u32 bufferSize);

    static const u32 SAVE_SIZE = 20;

    // --- Formatting ---
    // Format a Time as "MM:SS.mmm" into buf (min bufSize = 10)
    static void formatTime(const System::Time& t, char* buf, u32 bufSize);

private:
    System::Time mBestTime;
    System::Time mBestLap;
    RecordMeta   mMeta;
};