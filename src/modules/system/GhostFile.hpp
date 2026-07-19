#pragma once
#include "../rk_types.h"

namespace System {

class RawGhostFile {
public:
    void reset() { /* TODO */ }
    bool isValid() const { return false; }

    u8 data[0x2800];
};

class GhostFile {
public:
    void read(RawGhostFile& raw) { (void)raw; }

    u8 mCourseId;
    u8 mCharacterId;
    u8 mVehicleId;
    u8 mControllerId;
    bool mDriftIsAuto;
    u8* mInputs;
};

} // namespace System