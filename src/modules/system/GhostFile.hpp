#pragma once
#include "../rk_types.h"

namespace System {

struct RawGhostFile;

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