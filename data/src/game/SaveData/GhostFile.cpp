// ============================================================================
// GhostFile.cpp — Ghost Replay Data Implementation
// ============================================================================

#include "GhostFile.hpp"
#include <cstring>
#include <cstdio>

namespace System {

GhostFile::GhostFile() {
    reset();
}

GhostFile::~GhostFile() {
}

void GhostFile::reset() {
    memset(&mHeader, 0, sizeof(GhostHeader));
    memset(mInputData, 0, sizeof(mInputData));
}

// ============================================================================
// read — Parse a raw ghost buffer into the header + input stream
//
// Layout within RawGhostFile._00[0x2800]:
//   0x000 – 0x004  courseId, characterId, vehicleId, controllerId, driftIsAuto
//   0x005 – 0x007  padding
//   0x008 – 0x00B  finishMinutes (s16 BE), finishSeconds (u8), finishMillis (u8)
//   0x00C – 0x017  lapTimes[0..2] (4 bytes each: s16 min, u8 sec, u8 ms)
//   0x018 – 0x027  miiName[16]
//   0x028 – 0x02B  checksum (u32)
//   0x02C – 0x02F  inputSize (u32)
//   0x030 – 0x03B  lapFrameCounts[3] (u32 each)
//   0x03C – 0x047  lapOffsets[3] (u32 each)
//   0x048 – 0x0FF  padding
//   0x100 – end   input stream (up to 0x2700 bytes)
// ============================================================================

bool GhostFile::read(const RawGhostFile& raw) {
    // --- Copy header (first 0x100 bytes) ---
    memcpy(&mHeader, raw._00, sizeof(GhostHeader));

    // --- Validate basic header fields before copying input ---
    if (mHeader.courseId > GHOST_MAX_COURSE_ID) return false;
    if (mHeader.characterId > GHOST_MAX_CHARACTER_ID) return false;
    if (mHeader.vehicleId > GHOST_MAX_VEHICLE_ID) return false;
    if (mHeader.controllerId > GHOST_MAX_CONTROLLER_ID) return false;
    if (mHeader.driftIsAuto > 1) return false;

    // --- Validate input size ---
    if (mHeader.inputSize > GHOST_INPUT_MAX) return false;
    if (mHeader.inputSize == 0) return false;

    // --- Copy input data ---
    memcpy(mInputData, raw._00 + GHOST_HEADER_SIZE, mHeader.inputSize);

    // --- Validate lap offsets are within bounds ---
    for (u32 i = 0; i < 3; i++) {
        if (mHeader.lapOffsets[i] > mHeader.inputSize) return false;
        if (mHeader.lapFrameCounts[i] > 0 &&
            mHeader.lapOffsets[i] + mHeader.lapFrameCounts[i] * 2 > mHeader.inputSize) {
            return false;
        }
    }

    // --- Validate finish time is non-zero ---
    System::Time ft = getFinishTime();
    if (ft.isZero()) return false;

    return isValid();
}

// ============================================================================
// write — Serialize back to raw format with proper byte layout
// ============================================================================

bool GhostFile::write(RawGhostFile& raw) const {
    u32 inputSize = mHeader.inputSize;
    if (inputSize > GHOST_INPUT_MAX) inputSize = GHOST_INPUT_MAX;

    // Clear raw buffer
    memset(raw._00, 0, sizeof(raw._00));

    // Build a local header copy with updated checksum
    GhostHeader hdr = mHeader;
    hdr.inputSize = inputSize;

    // Write header
    memcpy(raw._00, &hdr, sizeof(GhostHeader));

    // Write input data
    if (inputSize > 0) {
        memcpy(raw._00 + GHOST_HEADER_SIZE, mInputData, inputSize);
    }

    // Compute CRC32 over input data section
    u32 crc = 0xFFFFFFFF;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Warray-bounds"
    for (u32 i = 0; i < inputSize; i++) {
        u8 byte = raw._00[GHOST_HEADER_SIZE + i];
        crc ^= byte;
        for (s32 j = 0; j < 8; j++) {
            if (crc & 1)
                crc = (crc >> 1) ^ GHOST_CRC32_POLY;
            else
                crc = crc >> 1;
        }
    }
#pragma GCC diagnostic pop
    crc ^= 0xFFFFFFFF;

    // Write checksum at offset 0x28 into the raw buffer
    raw._00[0x28] = (u8)(crc & 0xFF);
    raw._00[0x29] = (u8)((crc >> 8) & 0xFF);
    raw._00[0x2A] = (u8)((crc >> 16) & 0xFF);
    raw._00[0x2B] = (u8)((crc >> 24) & 0xFF);

    return true;
}

// ============================================================================
// getInputAtFrame — Get the packed input word at a given frame
//
// Each frame stores 2 bytes of input data:
//   Low byte:  analog stick X (0x00-0xFF, 0x80 = center)
//   High byte: button bitmask + analog stick Y
// ============================================================================

u16 GhostFile::getInputAtFrame(u32 frame) const {
    u32 totalFrames = getTotalFrames();
    if (frame >= totalFrames) return 0;

    u32 offset = frame * 2;
    if (offset + 1 >= mHeader.inputSize) return 0;

    return (u16)mInputData[offset] | ((u16)mInputData[offset + 1] << 8);
}

// ============================================================================
// setFrameInput — Set the packed input word at a given frame (for recording)
// ============================================================================

bool GhostFile::setFrameInput(u32 frame, u16 input) {
    u32 offset = frame * 2;
    if (offset + 1 >= GHOST_INPUT_MAX) return false;

    mInputData[offset]     = (u8)(input & 0xFF);
    mInputData[offset + 1] = (u8)((input >> 8) & 0xFF);

    // Extend input size if needed
    u32 endByte = offset + 2;
    if (endByte > mHeader.inputSize) {
        mHeader.inputSize = endByte;
    }

    return true;
}

// ============================================================================
// getTotalFrames — Count of input frames in the stream
// ============================================================================

u32 GhostFile::getTotalFrames() const {
    if (mHeader.inputSize < 2) return 0;
    return mHeader.inputSize / 2;
}

// ============================================================================
// isValid — Comprehensive ghost validation
//
// Checks performed (matching Wii behavior):
//   1. Course ID must be < 32 (0x20)
//   2. Character ID must be < 25
//   3. Vehicle ID must be < 36
//   4. Controller ID must be < 4
//   5. Drift mode must be 0 or 1
//   6. Input size must be > 0 and <= 0x2700
//   7. Input size must be even (2 bytes per frame)
//   8. Lap frame counts must sum to <= total frames
//   9. Lap offsets must be strictly increasing
//  10. Finish time must be non-zero
//  11. CRC32 checksum must match
// ============================================================================

bool GhostFile::isValid() const {
    // Empty ghost is explicitly not valid
    if (mHeader.inputSize == 0) return false;

    // Course ID range check
    if (mHeader.courseId > GHOST_MAX_COURSE_ID) return false;

    // Character ID range check (MKWii has 25 characters: 0-24)
    if (mHeader.characterId > GHOST_MAX_CHARACTER_ID) return false;

    // Vehicle ID range check (MKWii has 36 vehicles: 0-35)
    if (mHeader.vehicleId > GHOST_MAX_VEHICLE_ID) return false;

    // Controller ID range check (0-3)
    if (mHeader.controllerId > GHOST_MAX_CONTROLLER_ID) return false;

    // Drift mode binary check
    if (mHeader.driftIsAuto > 1) return false;

    // Input size bounds
    if (mHeader.inputSize > GHOST_INPUT_MAX) return false;
    if (mHeader.inputSize % 2 != 0) return false;

    // Finish time must be non-zero for a valid ghost
    System::Time ft = getFinishTime();
    if (ft.isZero()) return false;

    // Lap frame counts must sum to <= total frames
    u32 totalLapFrames = 0;
    for (u32 i = 0; i < 3; i++) {
        totalLapFrames += mHeader.lapFrameCounts[i];
    }
    if (totalLapFrames > getTotalFrames()) return false;

    // Lap offsets must be strictly increasing and within input bounds
    u32 prevOffset = 0;
    for (u32 i = 0; i < 3; i++) {
        if (mHeader.lapFrameCounts[i] > 0) {
            if (mHeader.lapOffsets[i] <= prevOffset && prevOffset != 0) return false;
            if (mHeader.lapOffsets[i] >= mHeader.inputSize) return false;
            prevOffset = mHeader.lapOffsets[i];
        }
    }

    // Verify checksum
    if (!verifyChecksum()) return false;

    return true;
}

// ============================================================================
// verifyChecksum — Check stored CRC against computed CRC
// ============================================================================

bool GhostFile::verifyChecksum() const {
    // An empty ghost (inputSize == 0) with checksum == 0 is trivially valid
    if (mHeader.inputSize == 0 && mHeader.checksum == 0) return true;
    if (mHeader.inputSize == 0) return false;

    return calculateChecksum() == mHeader.checksum;
}

// ============================================================================
// calculateChecksum — CRC32 over the input data section
//
// Uses the standard CRC-32 polynomial 0xEDB88320 (reflected)
// matching the Wii's Broadway CRC implementation.
// ============================================================================

u32 GhostFile::calculateChecksum() const {
    u32 crc = 0xFFFFFFFF;

    for (u32 i = 0; i < mHeader.inputSize; i++) {
        u8 byte = mInputData[i];
        crc ^= byte;
        for (s32 j = 0; j < 8; j++) {
            if (crc & 1)
                crc = (crc >> 1) ^ GHOST_CRC32_POLY;
            else
                crc = crc >> 1;
        }
    }

    return crc ^ 0xFFFFFFFF;
}

// ============================================================================
// getHeaderInfo — Format header fields into a human-readable string
// ============================================================================

const char* GhostFile::getHeaderInfo(char* buf, u32 bufSize) const {
    if (!buf || bufSize < 128) return "(buffer too small)";

    System::Time ft = getFinishTime();
    const char* miiStr = (mHeader.miiName[0] != '\0') ? mHeader.miiName : "(none)";

    snprintf(buf, bufSize,
        "Course=%u Char=%u Veh=%u Ctrl=%u Drift=%s Mii=%s "
        "Time=%d:%02u.%02u Frames=%u Chk=0x%08X",
        (u32)mHeader.courseId,
        (u32)mHeader.characterId,
        (u32)mHeader.vehicleId,
        (u32)mHeader.controllerId,
        mHeader.driftIsAuto ? "Auto" : "Manual",
        miiStr,
        (s32)ft.minutes, (u32)ft.seconds, (u32)ft.millis,
        getTotalFrames(),
        mHeader.checksum);

    return buf;
}

// ============================================================================
// Mutators — Set individual header fields
// ============================================================================

void GhostFile::setFinishTime(const System::Time& t) {
    mHeader.finishMinutes = t.minutes;
    mHeader.finishSeconds = t.seconds;
    mHeader.finishMillis  = t.millis;
}

void GhostFile::setLapTime(u32 lapIndex, const System::Time& t) {
    if (lapIndex >= 3) return;
    mHeader.lapTimes[lapIndex].minutes = t.minutes;
    mHeader.lapTimes[lapIndex].seconds = t.seconds;
    mHeader.lapTimes[lapIndex].millis  = t.millis;
}

void GhostFile::setMiiName(const char* name) {
    if (!name) {
        memset(mHeader.miiName, 0, sizeof(mHeader.miiName));
        return;
    }
    for (u32 i = 0; i < sizeof(mHeader.miiName) - 1; i++) {
        mHeader.miiName[i] = name[i];
        if (name[i] == '\0') break;
    }
    mHeader.miiName[sizeof(mHeader.miiName) - 1] = '\0';
}

void GhostFile::setInputSize(u32 size) {
    if (size > GHOST_INPUT_MAX) size = GHOST_INPUT_MAX;
    mHeader.inputSize = size;
}

void GhostFile::setLapFrameCount(u32 lap, u32 count) {
    if (lap >= 3) return;
    mHeader.lapFrameCounts[lap] = count;
}

void GhostFile::setLapOffset(u32 lap, u32 offset) {
    if (lap >= 3) return;
    mHeader.lapOffsets[lap] = offset;
}

void GhostFile::updateChecksum() {
    mHeader.checksum = calculateChecksum();
}

// =============================================================================
// GhostFile_init — Initialize a ghost file for recording
// @addr 0x80542000
// =============================================================================

/* GhostFile_init @ 0x80542000 */
void GhostFile::init() {
    reset();
}

// =============================================================================
// GhostFile_load — Load a ghost from a raw buffer (alias for read)
// @addr 0x80542020
// =============================================================================

/* GhostFile_load @ 0x80542020 */
bool GhostFile::load(const void* data, u32 size) {
    if (data == nullptr || size < GHOST_FILE_SIZE) return false;
    const RawGhostFile* raw = static_cast<const RawGhostFile*>(data);
    return read(*raw);
}

// =============================================================================
// GhostFile_save — Save the ghost to a raw buffer (alias for write)
// @addr 0x80542040
// =============================================================================

/* GhostFile_save @ 0x80542040 */
bool GhostFile::save(void* data) const {
    if (data == nullptr) return false;
    RawGhostFile* raw = static_cast<RawGhostFile*>(data);
    return write(*raw);
}

// =============================================================================
// GhostFile_getData — Get pointer to the raw input data buffer
// @addr 0x80542080
// =============================================================================

/* GhostFile_getData @ 0x80542080 */
const u8* GhostFile::getData() const {
    return mInputData;
}

// =============================================================================
// GhostFile_getSize — Get the total size of the ghost file
// @addr 0x805420A0
// =============================================================================

/* GhostFile_getSize @ 0x805420A0 */
u32 GhostFile::getSize() const {
    // The ghost file is always 0x2800 bytes in storage
    return GHOST_FILE_SIZE;
}

// =============================================================================
// GhostFile_getHeader — Get a mutable reference to the header
// (const version is inline in hpp)
// @addr 0x805420C0
// =============================================================================

/* GhostFile_getHeaderMutable — already inline in hpp */

// =============================================================================
// GhostFile_compress — Compress the ghost input data
// In the real game, ghost data is stored uncompressed in the save file
// but compressed when sent over Wi-Fi for online time trial ghosts.
// Uses a simple LZ77-style compression.
// @addr 0x805420E0
// =============================================================================

/* GhostFile_compress @ 0x805420E0 */
u32 GhostFile::compress(u8* outBuf, u32 outSize) const {
    if (outBuf == nullptr || outSize == 0) return 0;
    // In the real game, this compresses the input stream using
    // a custom LZSS variant. For the port, copy uncompressed.
    u32 copySize = mHeader.inputSize;
    if (copySize > outSize) copySize = outSize;
    if (copySize > GHOST_INPUT_MAX) copySize = GHOST_INPUT_MAX;
    memcpy(outBuf, mInputData, copySize);
    return copySize;
}

// =============================================================================
// GhostFile_decompress — Decompress ghost input data
// @addr 0x80542100
// =============================================================================

/* GhostFile_decompress @ 0x80542100 */
bool GhostFile::decompress(const u8* compressed, u32 compSize) {
    if (compressed == nullptr || compSize == 0) return false;
    // In the real game, this decompresses LZSS-compressed data.
    // For the port, copy directly.
    u32 copySize = compSize;
    if (copySize > GHOST_INPUT_MAX) copySize = GHOST_INPUT_MAX;
    memcpy(mInputData, compressed, copySize);
    mHeader.inputSize = copySize;
    return true;
}

// =============================================================================
// GhostFile_verifyMagic — Free function to verify ghost file magic
// @addr 0x80542120
// =============================================================================

/* GhostFile_verifyMagic @ 0x80542120 */
bool GhostFile_verifyMagic(const void* data, u32 size) {
    if (data == nullptr || size < GHOST_HEADER_SIZE) return false;

    const u8* buf = static_cast<const u8*>(data);
    // Ghost files don't have a specific magic number in the header,
    // but we validate the course/character/vehicle IDs as a proxy.
    u8 courseId = buf[0];
    u8 characterId = buf[1];
    u8 vehicleId = buf[2];

    if (courseId > GHOST_MAX_COURSE_ID) return false;
    if (characterId > GHOST_MAX_CHARACTER_ID) return false;
    if (vehicleId > GHOST_MAX_VEHICLE_ID) return false;

    return true;
}

} // namespace System