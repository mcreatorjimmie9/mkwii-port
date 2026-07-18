#pragma once

#include <rk_types.h>
#include <decomp.h>

namespace Kart {

class GpStats;
class RaceStats;
class KartParam;
class KartDriverDispParams;
class KartPartsDispParams;
class BikePartsDispParams;
class DriverDispParams;

// ===== KartSettings =====
class KartSettings {
public:
    // 0x805954a8 - __ct__Q24Kart12KartSettingsFv
    // Size: 204 bytes, Calls: 0x80590aac
    KartSettings();

    u32 isBike;
    u32 vehicle;
    u32 character;
    u16 susCount;
    u16 wheelCount;
    u8 playerIdx;
    KartParam* kartParam;
    void* _18;
    KartDriverDispParams* kartDriverDispParams;
    KartPartsDispParams* kartPartsDispParams;
    BikePartsDispParams* bikePartsDispParams;
    DriverDispParams* driverDispParams;
    f32 wheelCountRecip;
    f32 wheelCountPlusOneRecip;
    GpStats* gpStats;
    RaceStats* raceStats;
};
static_assert(sizeof(KartSettings) == 0x3c);

} // namespace Kart