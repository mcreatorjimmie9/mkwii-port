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

// System::Time and System::RawGhostFile are defined in rk_common.h

// ============================================================================
// Ghost Header — First 0x100 bytes of ghost data
// ============================================================================

#pragma pack(push, 1)

struct GhostHeader {
    u8  courseId;
    u8  characterId;
    u8  vehicleId;
    u8  controllerId;
    u8  driftIsAuto;
    u8  _pad0[0x03];

    s16 finishMinutes;
    u8  finishSeconds;
    u8  finishMillis;

    struct {
        s16 minutes;
        u8  seconds;
        u8  millis;
    } lapTimes[3];

    char miiName[0x10];

    u32 checksum;
    u32 inputSize;
    u32 lapFrameCounts[3];
    u32 lapOffsets[3];

    u8  _pad1[0x70];
};

#pragma pack(pop)

// ============================================================================
// GhostFile — Parsed Ghost Replay
// ============================================================================

namespace System {

static const u8 GHOST_MAX_COURSE_ID = 31;
static const u8 GHOST_MAX_CHARACTER_ID = 24;
static const u8 GHOST_MAX_VEHICLE_ID = 35;
static const u8 GHOST_MAX_CONTROLLER_ID = 3;

static const u32 GHOST_FILE_SIZE = 0x2800;
static const u32 GHOST_HEADER_SIZE = 0x100;
static const u32 GHOST_INPUT_MAX = 0x2700;

static const u32 GHOST_CRC32_POLY = 0xEDB88320u;

class GhostFile {
public:
    GhostFile();
    ~GhostFile();

    bool read(const RawGhostFile& raw);
    bool write(RawGhostFile& raw) const;

    const GhostHeader& getHeader() const { return mHeader; }
    GhostHeader& getHeader() { return mHeader; }

    u8  getCourseId() const { return mHeader.courseId; }
    u8  getCharacterId() const { return mHeader.characterId; }
    u8  getVehicleId() const { return mHeader.vehicleId; }
    u8  getControllerId() const { return mHeader.controllerId; }
    bool isDriftAuto() const { return mHeader.driftIsAuto != 0; }

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

    const u8* getInputData() const { return mInputData; }
    u32 getInputSize() const { return mHeader.inputSize; }

    u16 getInputAtFrame(u32 frame) const;
    bool setFrameInput(u32 frame, u16 input);
    u32 getTotalFrames() const;

    bool isValid() const;
    bool verifyChecksum() const;
    u32 calculateChecksum() const;

    bool isEmpty() const { return mHeader.inputSize == 0; }
    void reset();

    // Extended API
    void init();
    bool load(const void* data, u32 size);
    bool save(void* data) const;
    const u8* getData() const;
    u32 getSize() const;
    u32 compress(u8* outBuf, u32 outSize) const;
    bool decompress(const u8* compressed, u32 compSize);

    const char* getHeaderInfo(char* buf, u32 bufSize) const;

    void setCourseId(u8 courseId) { mHeader.courseId = courseId; }
    void setCharacterId(u8 charId) { mHeader.characterId = charId; }
    void setVehicleId(u8 vehicleId) { mHeader.vehicleId = vehicleId; }
    void setControllerId(u8 ctrlId) { mHeader.controllerId = ctrlId; }
    void setDriftAuto(bool autoDrift) { mHeader.driftIsAuto = autoDrift ? 1 : 0; }
    void setFinishTime(const System::Time& t);
    void setLapTime(u32 lapIndex, const System::Time& t);
    void setMiiName(const char* name);
    void setInputSize(u32 size);
    void setLapFrameCount(u32 lap, u32 count);
    void setLapOffset(u32 lap, u32 offset);
    void updateChecksum();

private:
    GhostHeader mHeader;
    u8          mInputData[0x2700];
};

} // namespace System

// Verify ghost file magic/header validity (free function)
// @addr 0x80542120
bool GhostFile_verifyMagic(const void* data, u32 size);