// ============================================================================
// GhostFile.cpp — Ghost Replay Data Implementation
// ============================================================================

#include "GhostFile.hpp"
#include <cstring>

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

bool GhostFile::read(const RawGhostFile& raw) {
    // Copy header from raw data
    memcpy(&mHeader, raw._00, sizeof(GhostHeader));

    // Copy input data
    u32 inputSize = mHeader.inputSize;
    if (inputSize > sizeof(mInputData)) {
        inputSize = sizeof(mInputData);
    }
    memcpy(mInputData, raw._00 + sizeof(GhostHeader), inputSize);

    return isValid();
}

bool GhostFile::write(RawGhostFile& raw) const {
    // Copy header
    memcpy(raw._00, &mHeader, sizeof(GhostHeader));

    // Copy input data
    u32 inputSize = mHeader.inputSize;
    if (inputSize > sizeof(mInputData)) {
        inputSize = sizeof(mInputData);
    }
    memcpy(raw._00 + sizeof(GhostHeader), mInputData, inputSize);

    // Zero remaining
    u32 total = sizeof(GhostHeader) + inputSize;
    if (total < sizeof(raw._00)) {
        memset(raw._00 + total, 0, sizeof(raw._00) - total);
    }

    return true;
}

u16 GhostFile::getInputAtFrame(u32 frame) const {
    // Each frame's input is 2 bytes (packed stick/buttons)
    u32 offset = frame * 2;
    if (offset + 1 >= mHeader.inputSize) return 0;
    return (u16)mInputData[offset] | ((u16)mInputData[offset + 1] << 8);
}

u32 GhostFile::getTotalFrames() const {
    // 2 bytes per frame
    return mHeader.inputSize / 2;
}

bool GhostFile::isValid() const {
    // Basic validation:
    // - Course ID should be < 32 (or some reasonable range)
    // - Character and vehicle IDs should be valid
    // - Input size should not exceed buffer
    // - Checksum should match

    if (mHeader.courseId >= 64) return false;
    if (mHeader.inputSize > sizeof(mInputData)) return false;
    if (mHeader.inputSize == 0) return false; // empty ghost is not valid

    return verifyChecksum();
}

bool GhostFile::verifyChecksum() const {
    if (mHeader.checksum == 0 && mHeader.inputSize == 0) return true;
    return calculateChecksum() == mHeader.checksum;
}

u32 GhostFile::calculateChecksum() const {
    // CRC32 over input data
    // Stubbed implementation
    u32 crc = 0;
    for (u32 i = 0; i < mHeader.inputSize; i++) {
        crc ^= mInputData[i];
        crc = (crc >> 1) ^ (0xEDB88320 & (-(crc & 1)));
    }
    return crc;
}

} // namespace System