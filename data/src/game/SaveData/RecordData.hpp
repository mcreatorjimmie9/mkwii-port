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

#include "rk_common.h"

// ============================================================================
// Record Metadata
// ============================================================================

#pragma pack(push, 1)

struct RecordMeta {
    u8  characterId;     // Character used for the record
    u8  vehicleId;       // Vehicle (kart/bike) used
    u8  controllerType;  // 0: Wii Wheel, 1: Nunchuk, 2: Classic, 3: GC
    u8  driftIsAuto;     // 0: Manual, 1: Auto drift

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

    // --- Best Times ---
    // Get best total race time (3 laps, or 2 for some courses)
    const System::Time& getBestTime() const { return mBestTime; }

    // Get best single lap time
    const System::Time& getBestLap() const { return mBestLap; }

    // Check if a time is a new record
    bool isNewRecord(const System::Time& raceTime) const;
    bool isNewLapRecord(const System::Time& lapTime) const;

    // Set new records
    void setRecord(const System::Time& raceTime, const RecordMeta& meta);
    void setLapRecord(const System::Time& lapTime, const RecordMeta& meta);

    // Set time directly (from deserialization)
    void setBestTime(const System::Time& t) { mBestTime = t; }
    void setBestLap(const System::Time& t) { mBestLap = t; }

    // --- Metadata ---
    const RecordMeta& getMeta() const { return mMeta; }
    RecordMeta& getMeta() { return mMeta; }

    // --- Utility ---
    bool hasRecord() const {
        // A record exists if the time is non-zero
        return mBestTime.minutes != 0 || mBestTime.seconds != 0 || mBestTime.millis != 0;
    }

    void reset();

    // --- Serialization ---
    u32 serialize(u8* buffer, u32 bufferSize) const;
    u32 deserialize(const u8* buffer, u32 bufferSize);

    // Size in the save file
    static const u32 SAVE_SIZE = sizeof(System::Time) * 2 + sizeof(RecordMeta);

private:
    System::Time mBestTime;    // Best 3-lap race time
    System::Time mBestLap;     // Best single lap time
    RecordMeta   mMeta;        // Record metadata
};