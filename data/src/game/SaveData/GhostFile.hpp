#pragma once
// ============================================================================
// GhostFile.hpp — Ghost Replay Data (SaveData Version)
//
// MKWii ghost files store complete time trial replays. Each ghost is
// 0x2800 bytes of raw data containing:
//   - Header: course ID, character, vehicle, controller, drift, time
//   - Input stream: per-frame controller inputs (buttons, stick, wheel)
//   - Validation: checksum, lap markers, finish time
//
// The save file stores up to 36 ghosts per license.
// Staff ghosts are embedded in the game disc, not in the save file.
//
// Categorization: GENESIS Phase 5 (SaveData Module)
// ============================================================================

#include "rk_common.h"

// ============================================================================
// Ghost Header — First 0x100 bytes of ghost data
// ============================================================================

#pragma pack(push, 1)

struct GhostHeader {
    u8  courseId;        // Course the ghost was recorded on
    u8  characterId;     // Character used
    u8  vehicleId;       // Vehicle used
    u8  controllerId;    // 0: Wii Wheel, 1: Nunchuk, 2: Classic, 3: GC
    u8  driftIsAuto;     // 0: Manual, 1: Auto
    u8  _pad0[0x03];

    // Race time
    s16 finishMinutes;
    u8  finishSeconds;
    u8  finishMillis;

    // Lap times (3 laps)
    struct {
        s16 minutes;
        u8  seconds;
        u8  millis;
    } lapTimes[3];

    // Mii name
    char miiName[0x10];

    // Validation
    u32 checksum;        // CRC of the input data section
    u32 inputSize;       // Total bytes of input data
    u32 lapFrameCounts[3]; // Frame count per lap

    // Lap marker offsets into input stream
    u32 lapOffsets[3];

    u8  _pad1[0x70];     // Padding to 0x100
};

#pragma pack(pop)

// Static assert on raw size
// static_assert(sizeof(GhostHeader) == 0x100, "GhostHeader must be 0x100 bytes");

// ============================================================================
// GhostFile — Parsed Ghost Replay
// ============================================================================

namespace System {

class GhostFile {
public:
    GhostFile();
    ~GhostFile();

    // --- Read / Write ---
    // Parse a raw ghost data buffer
    bool read(const RawGhostFile& raw);

    // Serialize back to raw format
    bool write(RawGhostFile& raw) const;

    // --- Header Access ---
    const GhostHeader& getHeader() const { return mHeader; }
    GhostHeader& getHeader() { return mHeader; }

    u8  getCourseId() const { return mHeader.courseId; }
    u8  getCharacterId() const { return mHeader.characterId; }
    u8  getVehicleId() const { return mHeader.vehicleId; }
    u8  getControllerId() const { return mHeader.controllerId; }
    bool isDriftAuto() const { return mHeader.driftIsAuto != 0; }

    // --- Time Access ---
    System::Time getFinishTime() const {
        System::Time t;
        t.minutes = mHeader.finishMinutes;
        t.seconds = mHeader.finishSeconds;
        t.millis  = mHeader.finishMillis;
        return t;
    }

    System::Time getLapTime(u32 lapIndex) const {
        System::Time t;
        if (lapIndex < 3) {
            t.minutes = mHeader.lapTimes[lapIndex].minutes;
            t.seconds = mHeader.lapTimes[lapIndex].seconds;
            t.millis  = mHeader.lapTimes[lapIndex].millis;
        } else {
            t.minutes = 0; t.seconds = 0; t.millis = 0;
        }
        return t;
    }

    // --- Input Stream ---
    const u8* getInputData() const { return mInputData; }
    u32 getInputSize() const { return mHeader.inputSize; }

    // Get input at a specific frame
    u16 getInputAtFrame(u32 frame) const;

    // Get total frame count
    u32 getTotalFrames() const;

    // --- Validation ---
    bool isValid() const;
    bool verifyChecksum() const;
    u32 calculateChecksum() const;

    // --- Utility ---
    bool isEmpty() const { return mHeader.inputSize == 0; }

    void reset();

private:
    GhostHeader mHeader;
    u8          mInputData[0x2700]; // Input data section (0x2800 - 0x100)
};

} // namespace System