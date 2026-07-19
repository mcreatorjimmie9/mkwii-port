// ============================================================================
// RecordData.cpp — Time Trial Race Records Implementation
// ============================================================================

#include "RecordData.hpp"
#include <cstring>

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

bool RecordData::isNewRecord(const System::Time& raceTime) const {
    if (!hasRecord()) return true;

    // Compare: lower time = better
    // Convert to total milliseconds for comparison
    s32 currentMs = (mBestTime.minutes * 60 + mBestTime.seconds) * 1000 + mBestTime.millis * 10;
    s32 newMs = (raceTime.minutes * 60 + raceTime.seconds) * 1000 + raceTime.millis * 10;
    return newMs < currentMs;
}

bool RecordData::isNewLapRecord(const System::Time& lapTime) const {
    // Check if there's an existing lap record
    bool hasLap = mBestLap.minutes != 0 || mBestLap.seconds != 0 || mBestLap.millis != 0;
    if (!hasLap) return true;

    s32 currentMs = (mBestLap.minutes * 60 + mBestLap.seconds) * 1000 + mBestLap.millis * 10;
    s32 newMs = (lapTime.minutes * 60 + lapTime.seconds) * 1000 + lapTime.millis * 10;
    return newMs < currentMs;
}

void RecordData::setRecord(const System::Time& raceTime, const RecordMeta& meta) {
    if (isNewRecord(raceTime)) {
        mBestTime = raceTime;
        mMeta = meta;
    }
}

void RecordData::setLapRecord(const System::Time& lapTime, const RecordMeta& meta) {
    if (isNewLapRecord(lapTime)) {
        mBestLap = lapTime;
        // Lap record inherits metadata from the race record
        mMeta = meta;
    }
}

u32 RecordData::serialize(u8* buffer, u32 bufferSize) const {
    if (bufferSize < SAVE_SIZE) return 0;

    u32 offset = 0;
    // Best race time (3 bytes)
    buffer[offset++] = (u8)mBestTime.minutes;
    buffer[offset++] = (u8)mBestTime.seconds;
    buffer[offset++] = (u8)mBestTime.millis;
    // Best lap time (3 bytes)
    buffer[offset++] = (u8)mBestLap.minutes;
    buffer[offset++] = (u8)mBestLap.seconds;
    buffer[offset++] = (u8)mBestLap.millis;
    // Metadata
    memcpy(buffer + offset, &mMeta, sizeof(RecordMeta));
    offset += sizeof(RecordMeta);

    return offset;
}

u32 RecordData::deserialize(const u8* buffer, u32 bufferSize) {
    if (bufferSize < SAVE_SIZE) return 0;

    u32 offset = 0;
    mBestTime.minutes = (s16)buffer[offset++];
    mBestTime.seconds = (s8)buffer[offset++];
    mBestTime.millis = (s8)buffer[offset++];
    mBestLap.minutes = (s16)buffer[offset++];
    mBestLap.seconds = (s8)buffer[offset++];
    mBestLap.millis = (s8)buffer[offset++];
    memcpy(&mMeta, buffer + offset, sizeof(RecordMeta));
    offset += sizeof(RecordMeta);

    return offset;
}