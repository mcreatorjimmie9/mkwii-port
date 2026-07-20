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

// Handling stats returned by KartSettings::getHandlingStats
// These correspond to the seven visible stat bars in MKW's vehicle
// select screen. Values are in the internal stat scale used by the
// physics engine (not the 1-5 display bars).
struct HandlingStats {
    f32 topSpeed;       // Maximum forward speed
    f32 acceleration;   // Rate of speed increase
    f32 weight;         // Mass / collision weight
    f32 handling;       // Ground steering responsiveness
    f32 drift;          // Drift steering responsiveness
    f32 offroad;        // Off-road speed retention
    f32 miniTurbo;      // Mini-turbo boost power
};

// ===== KartSettings =====
class KartSettings {
public:
    // 0x805954a8 - __ct__Q24Kart12KartSettingsFv
    // Size: 204 bytes, Calls: 0x80590aac
    KartSettings();

    // Set kart body part by body ID, update wheel/suspension count
    // Bikes get 2 wheels/suspensions, karts get 4
    // @addr 0x80595500
    void setKartBody(u32 bodyId);

    // Set character ID, apply character weight bonuses to stats
    // @addr 0x80595580
    void setKartCharacter(u32 charId);

    // Get current handling stats (base stats + character modifiers)
    // @addr 0x80595600
    HandlingStats getHandlingStats() const;

    // Apply heavy/medium/light weight class modifier to stats
    // @addr 0x80595680
    void applyWeightClassModifier();

    // Check if the current vehicle is a bike
    // @addr 0x80595700
    bool isBikeVehicle() const;

    // Get the number of wheels (2 for bikes, 4 for karts)
    // @addr 0x80595710
    u16 getWheelCount() const;

    // Get the number of suspension components
    // @addr 0x80595720
    u16 getSuspensionCount() const;

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
// static_assert(sizeof(KartSettings) == 0x3c);

} // namespace Kart
