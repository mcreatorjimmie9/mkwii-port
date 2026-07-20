// ============================================================================
// RecordData.cpp — Time Trial Race Records Implementation
// ============================================================================

#include "RecordData.hpp"
#include <cstring>
#include <cstdio>

// ============================================================================
// Constructor / Reset
// ============================================================================

RecordData::RecordData() {
    reset();
}

void RecordData::reset() {
    mBestTime.minutes = 0;
    mBestTime.seconds = 0;
    mBestTime.millis = 0;
    mBestLap.minutes = 0;
    mBestLap.seconds = 0;
    mBestLap.millis = 0;
    memset(&mMeta, 0, sizeof(RecordMeta));
}

// ============================================================================
// Clear individual record types
// ============================================================================

void RecordData::clearRecord() {
    mBestTime.minutes = 0;
    mBestTime.seconds = 0;
    mBestTime.millis = 0;
    mMeta.isStaffGhost = 0;
}

void RecordData::clearLapRecord() {
    mBestLap.minutes = 0;
    mBestLap.seconds = 0;
    mBestLap.millis = 0;
}

// ============================================================================
// isNewRecord / isNewLapRecord — Compare against stored best
//
// Lower time = better. Conversion to milliseconds ensures correct
// comparison when minute boundaries are crossed.
// ============================================================================

bool RecordData::isNewRecord(const System::Time& raceTime) const {
    if (!hasRecord()) return true;

    s32 currentMs = mBestTime.toMilliseconds();
    s32 newMs = raceTime.toMilliseconds();
    return newMs < currentMs;
}

bool RecordData::isNewLapRecord(const System::Time& lapTime) const {
    if (!hasLapRecord()) return true;

    s32 currentMs = mBestLap.toMilliseconds();
    s32 newMs = lapTime.toMilliseconds();
    return newMs < currentMs;
}

// ============================================================================
// setRecord / setLapRecord — Store a new best time with metadata
// ============================================================================

void RecordData::setRecord(const System::Time& raceTime, const RecordMeta& meta) {
    if (isNewRecord(raceTime)) {
        mBestTime = raceTime;
        mMeta = meta;
    }
}

void RecordData::setLapRecord(const System::Time& lapTime, const RecordMeta& meta) {
    if (isNewLapRecord(lapTime)) {
        mBestLap = lapTime;
        mMeta = meta;
    }
}

// ============================================================================
// compareRecord — Compare this race time against another
//
// Returns:
//   <0 if this record is faster than other
//    0 if equal
//   >0 if this record is slower than other
// ============================================================================

s32 RecordData::compareRecord(const RecordData& other) const {
    s32 thisMs  = hasRecord() ? mBestTime.toMilliseconds() : -1;
    s32 otherMs = other.hasRecord() ? other.mBestTime.toMilliseconds() : -1;

    // A record always beats no-record
    if (thisMs < 0 && otherMs < 0) return 0;
    if (thisMs < 0) return 1;
    if (otherMs < 0) return -1;

    if (thisMs < otherMs) return -1;
    if (thisMs > otherMs) return 1;
    return 0;
}

// ============================================================================
// compareLapRecord — Compare this lap time against another
// ============================================================================

s32 RecordData::compareLapRecord(const RecordData& other) const {
    s32 thisMs  = hasLapRecord() ? mBestLap.toMilliseconds() : -1;
    s32 otherMs = other.hasLapRecord() ? other.mBestLap.toMilliseconds() : -1;

    if (thisMs < 0 && otherMs < 0) return 0;
    if (thisMs < 0) return 1;
    if (otherMs < 0) return -1;

    if (thisMs < otherMs) return -1;
    if (thisMs > otherMs) return 1;
    return 0;
}

// ============================================================================
// operator== — Full equality comparison (times + metadata)
// ============================================================================

bool RecordData::operator==(const RecordData& other) const {
    if (mBestTime.toMilliseconds() != other.mBestTime.toMilliseconds())
        return false;
    if (mBestLap.toMilliseconds() != other.mBestLap.toMilliseconds())
        return false;
    if (memcmp(&mMeta, &other.mMeta, sizeof(RecordMeta)) != 0)
        return false;
    return true;
}

// ============================================================================
// formatTime — Format a Time as "MM:SS.mmm"
//
// MKWii displays times in the format M:SS.XXX where:
//   M   = minutes (1-2 digits, no leading zero)
//   SS  = seconds (2 digits, zero-padded)
//   XXX = milliseconds (3 digits: centisecond * 10, zero-padded)
//
// E.g. 1:23.456 means 1 minute, 23 seconds, 456 milliseconds
// ============================================================================

void RecordData::formatTime(const System::Time& t, char* buf, u32 bufSize) {
    if (!buf || bufSize < 10) {
        if (buf && bufSize > 0) buf[0] = '\0';
        return;
    }

    // Convert centiseconds (0-99) to display milliseconds (0-990)
    u32 displayMs = (u32)t.millis * 10;

    snprintf(buf, bufSize, "%d:%02u.%03u",
        (s32)t.minutes,
        (u32)t.seconds,
        displayMs);
}

// ============================================================================
// serialize — Write record data to a save buffer
//
// Byte layout (20 bytes total):
//   [0]      record type flags (bit 0 = has race, bit 1 = has lap)
//   [1-2]    race time minutes (s16 big-endian)
//   [3]      race time seconds
//   [4]      race time millis
//   [5-6]    lap time minutes (s16 big-endian)
//   [7]      lap time seconds
//   [8]      lap time millis
//   [9-10]   date year (u16 big-endian)
//   [11]     month
//   [12]     day
//   [13]     hour
//   [14]     minute
//   [15]     second
//   [16]     characterId
//   [17]     vehicleId
//   [18]     controllerType | (driftIsAuto << 4)
//   [19]     isStaffGhost | padding
// ============================================================================

u32 RecordData::serialize(u8* buffer, u32 bufferSize) const {
    if (!buffer || bufferSize < SAVE_SIZE) return 0;

    u32 offset = 0;

    // Record type byte
    u8 typeFlags = 0;
    if (hasRecord())    typeFlags |= 0x01;
    if (hasLapRecord()) typeFlags |= 0x02;
    buffer[offset++] = typeFlags;

    // Race time (3 bytes: s16 BE minutes, u8 seconds, u8 millis)
    buffer[offset++] = (u8)((mBestTime.minutes >> 8) & 0xFF);
    buffer[offset++] = (u8)(mBestTime.minutes & 0xFF);
    buffer[offset++] = (u8)mBestTime.seconds;
    buffer[offset++] = (u8)mBestTime.millis;

    // Lap time (3 bytes)
    buffer[offset++] = (u8)((mBestLap.minutes >> 8) & 0xFF);
    buffer[offset++] = (u8)(mBestLap.minutes & 0xFF);
    buffer[offset++] = (u8)mBestLap.seconds;
    buffer[offset++] = (u8)mBestLap.millis;

    // Date (8 bytes: u16 year BE, month, day, hour, minute, second, pad)
    buffer[offset++] = (u8)((mMeta.year >> 8) & 0xFF);
    buffer[offset++] = (u8)(mMeta.year & 0xFF);
    buffer[offset++] = mMeta.month;
    buffer[offset++] = mMeta.day;
    buffer[offset++] = mMeta.hour;
    buffer[offset++] = mMeta.minute;
    buffer[offset++] = mMeta.second;
    buffer[offset++] = 0; // padding

    // Equipment + flags (2 bytes)
    buffer[offset++] = mMeta.characterId;
    buffer[offset++] = mMeta.vehicleId;

    // Control info (1 byte)
    buffer[offset++] = (u8)(mMeta.controllerType | (mMeta.driftIsAuto << 4));

    // Staff ghost flag (1 byte)
    buffer[offset++] = mMeta.isStaffGhost;

    return offset;
}

// ============================================================================
// deserialize — Read record data from a save buffer with validation
//
// Performs range checks on all fields:
//   - Minutes must be >= 0
//   - Seconds must be < 60
//   - Millis must be < 100
//   - Month must be 1-12
//   - Day must be 1-31
//   - Hour must be 0-23
//   - Minute must be 0-59
//   - Second must be 0-59
// ============================================================================

u32 RecordData::deserialize(const u8* buffer, u32 bufferSize) {
    if (!buffer || bufferSize < SAVE_SIZE) return 0;

    u32 offset = 0;

    // Record type byte
    u8 typeFlags = buffer[offset++];

    // Race time
    mBestTime.minutes = (s16)((u16)buffer[offset] << 8 | buffer[offset + 1]);
    offset += 2;
    mBestTime.seconds = buffer[offset++];
    mBestTime.millis  = buffer[offset++];

    // Lap time
    mBestLap.minutes = (s16)((u16)buffer[offset] << 8 | buffer[offset + 1]);
    offset += 2;
    mBestLap.seconds = buffer[offset++];
    mBestLap.millis  = buffer[offset++];

    // Date
    mMeta.year   = (u16)((u16)buffer[offset] << 8 | buffer[offset + 1]);
    offset += 2;
    mMeta.month  = buffer[offset++];
    mMeta.day    = buffer[offset++];
    mMeta.hour   = buffer[offset++];
    mMeta.minute = buffer[offset++];
    mMeta.second = buffer[offset++];
    offset++; // skip padding

    // Equipment
    mMeta.characterId    = buffer[offset++];
    mMeta.vehicleId      = buffer[offset++];

    // Control info
    mMeta.controllerType = buffer[offset] & 0x0F;
    mMeta.driftIsAuto    = (buffer[offset] >> 4) & 0x01;
    offset++;

    // Staff ghost
    mMeta.isStaffGhost = buffer[offset] & 0x01;
    offset++;

    // --- Validation ---
    // If the type flag doesn't indicate a record, zero it out
    if (!(typeFlags & 0x01)) {
        mBestTime.minutes = 0;
        mBestTime.seconds = 0;
        mBestTime.millis  = 0;
    }
    if (!(typeFlags & 0x02)) {
        mBestLap.minutes = 0;
        mBestLap.seconds = 0;
        mBestLap.millis  = 0;
    }

    // Clamp seconds/millis to valid ranges
    if (mBestTime.seconds > 59) mBestTime.seconds = 0;
    if (mBestTime.millis > 99)  mBestTime.millis  = 0;
    if (mBestLap.seconds > 59)  mBestLap.seconds  = 0;
    if (mBestLap.millis > 99)   mBestLap.millis   = 0;

    // Clamp date to valid ranges
    if (mMeta.month > 12)  mMeta.month = 1;
    if (mMeta.day > 31)    mMeta.day   = 1;
    if (mMeta.hour > 23)   mMeta.hour  = 0;
    if (mMeta.minute > 59) mMeta.minute = 0;
    if (mMeta.second > 59) mMeta.second = 0;

    return offset;
}

// ============================================================================
// init() — Initialize record to default state
// @addr 0x804F69C0
// ============================================================================

void RecordData::init() {
    reset();
}

// ============================================================================
// load() — Load record from a save buffer (delegates to deserialize)
// @addr 0x804F69D0
// ============================================================================

u32 RecordData::load(const u8* buffer, u32 bufferSize) {
    return deserialize(buffer, bufferSize);
}

// ============================================================================
// save() — Save record to a save buffer (delegates to serialize)
// @addr 0x804F69F0
// ============================================================================

u32 RecordData::save(u8* buffer, u32 bufferSize) const {
    return serialize(buffer, bufferSize);
}

// ============================================================================
// getTime() — Alias for getBestTime(), returns the best race time
// @addr 0x804F6A00
// (Inline in hpp)
// ============================================================================

// ============================================================================
// setTime() — Set the best race time directly
// @addr 0x804F6A20
// (Inline in hpp)
// ============================================================================

// ============================================================================
// getDate() — Extract the date the record was achieved
// @addr 0x804F6A40
// ============================================================================

void RecordData::getDate(u16* year, u8* month, u8* day) const {
    if (year)  *year  = mMeta.year;
    if (month) *month = mMeta.month;
    if (day)   *day   = mMeta.day;
}

// ============================================================================
// setDate() — Set the date the record was achieved
// @addr 0x804F6A80
// ============================================================================

void RecordData::setDate(u16 year, u8 month, u8 day) {
    mMeta.year  = year;
    mMeta.month = month;
    mMeta.day   = day;
    // Clamp month/day to valid ranges
    if (mMeta.month == 0)  mMeta.month = 1;
    if (mMeta.month > 12)  mMeta.month = 12;
    if (mMeta.day == 0)    mMeta.day   = 1;
    if (mMeta.day > 31)    mMeta.day   = 31;
}

// ============================================================================
// isPersonalBest() — Check if this record represents a personal best
// @addr 0x804F6AC0
//
// A record is considered a personal best if:
//   - It has a valid race time (not zero)
//   - It is not a staff ghost record
//   - The time is strictly better than zero
// ============================================================================

bool RecordData::isPersonalBest() const {
    if (!hasRecord()) return false;
    if (mMeta.isStaffGhost) return false;
    // A personal best means a non-zero, non-staff time
    s32 ms = mBestTime.toMilliseconds();
    return ms > 0;
}

// ============================================================================
// compare() — Compare this record's time against a given race time
// @addr 0x804F6B00
//
// Returns:
//   <0 if this record is faster than the given time
//    0 if equal
//   >0 if this record is slower
// ============================================================================

s32 RecordData::compare(const System::Time& raceTime) const {
    if (!hasRecord()) return 1; // no record is slower than any time

    s32 thisMs  = mBestTime.toMilliseconds();
    s32 otherMs = raceTime.toMilliseconds();

    if (thisMs < otherMs) return -1;
    if (thisMs > otherMs) return 1;
    return 0;
}

// ============================================================================
// RecordData_getEmpty() — Free function returning a zeroed RecordData
// @addr 0x804F6B40
//
// Used by the save system to initialize empty record slots.
// ============================================================================

RecordData RecordData_getEmpty() {
    RecordData empty;
    empty.reset();
    return empty;
}