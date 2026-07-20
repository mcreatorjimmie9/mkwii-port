#include "KartSettings.hpp"
#include "KartState.hpp"
#include <cstring>

namespace Kart {

// ---- Internal constants for MKW vehicle database ----

namespace {

// MKW has 36 vehicle bodies total
// Body IDs 0-23 are karts, 24-35 are bikes
static const u32 FIRST_BIKE_BODY_ID = 24;
static const u32 NUM_VEHICLE_BODIES = 36;

// Wheel counts for vehicle types
static const u16 KART_WHEEL_COUNT = 4;
static const u16 KART_SUS_COUNT = 4;
static const u16 BIKE_WHEEL_COUNT = 2;
static const u16 BIKE_SUS_COUNT = 2;

// Character weight class ranges (24 characters total in MKW)
// IDs 0-7:   Small / Light
// IDs 8-15:  Medium
// IDs 16-23: Large / Heavy
enum WeightClass {
    WEIGHT_CLASS_LIGHT  = 0,
    WEIGHT_CLASS_MEDIUM = 1,
    WEIGHT_CLASS_HEAVY  = 2,
};

// Base handling stats for Standard Kart M (baseline medium vehicle)
// These are in the internal physics scale used by the engine
static const f32 BASE_TOP_SPEED     = 60.0f;
static const f32 BASE_ACCELERATION = 50.0f;
static const f32 BASE_WEIGHT        = 65.0f;
static const f32 BASE_HANDLING      = 55.0f;
static const f32 BASE_DRIFT         = 48.0f;
static const f32 BASE_OFFROAD       = 45.0f;
static const f32 BASE_MINI_TURBO    = 50.0f;

// Base handling stats for Standard Bike M (baseline medium bike)
// Bikes in MKW have different base stats: higher speed, lower handling
static const f32 BIKE_TOP_SPEED     = 63.0f;
static const f32 BIKE_ACCELERATION  = 47.0f;
static const f32 BIKE_WEIGHT         = 63.0f;
static const f32 BIKE_HANDLING      = 50.0f;
static const f32 BIKE_DRIFT         = 46.0f;
static const f32 BIKE_OFFROAD       = 42.0f;
static const f32 BIKE_MINI_TURBO    = 53.0f;

// Weight class stat modifiers applied on top of base vehicle stats
// Heavy characters get speed/weight bonus but handling/accel penalty
// Light characters get the opposite trade-off
struct WeightClassModifier {
    f32 topSpeedDelta;
    f32 accelDelta;
    f32 weightDelta;
    f32 handlingDelta;
    f32 driftDelta;
    f32 offroadDelta;
    f32 miniTurboDelta;
};

static const WeightClassModifier WEIGHT_MODIFIERS[3] = {
    // WEIGHT_CLASS_LIGHT
    { -3.0f,  2.0f, -5.0f,  2.0f,  1.0f,  1.0f,  1.0f },
    // WEIGHT_CLASS_MEDIUM
    {  0.0f,  0.0f,  0.0f,  0.0f,  0.0f,  0.0f,  0.0f },
    // WEIGHT_CLASS_HEAVY
    {  3.0f, -2.0f,  5.0f, -2.0f, -1.0f, -1.0f, -1.0f },
};

// Determine weight class from character ID
// @addr (inline helper)
WeightClass getWeightClass(u32 charId) {
    if (charId < 8) return WEIGHT_CLASS_LIGHT;
    if (charId < 16) return WEIGHT_CLASS_MEDIUM;
    return WEIGHT_CLASS_HEAVY;
}

// Check if a body ID corresponds to a bike
// In MKW, bikes occupy the upper range of body IDs
// @addr (inline helper)
bool isBodyBike(u32 bodyId) {
    return bodyId >= FIRST_BIKE_BODY_ID && bodyId < NUM_VEHICLE_BODIES;
}

} // anonymous namespace

// Cached handling stats (updated when body/character changes)
static HandlingStats sCachedStats;

// 0x805954a8 - __ct__Q24Kart12KartSettingsFv
// Size: 204 bytes, Calls: 0x80590aac
// From disasm: reads kart param, initializes vehicle/character/suspension/wheel counts
KartSettings::KartSettings() {
    // Calls 0x80590aac (get kart param for this player)
    // Initializes vehicle, character, suspension count, wheel count
    // Sets up display params pointers
    // Calculates wheelCountRecip and wheelCountPlusOneRecip
    //
    // From disasm at 0x805954a8:
    // r22 = playerIdx (parameter, checked > 0)
    // Calls 0x80590aac - gets KartParam for playerIdx
    // If result != 1, early return (invalid player)
    // If playerIdx <= 0, also skip
    //
    // Sets field at offset 0x10 (isBike): checks param bit 0xc
    //   - If not online (r21 == 0): set bit 0x10 (isBike?)
    //   - Sets bit 0x8 based on online status
    //
    // Stores wheel count at offset 0x6c from param
    // If not online: doubles wheel count (slwi r0, r0, 1)
    // Reads s16 at 0xa6, decrements by 1
    // Stores back (clamped to 0)
    // If wheel count > 0 and vehicle > 0: set state flags
    this->isBike = 0;
    this->vehicle = 0;
    this->character = 0;
    this->susCount = 0;
    this->wheelCount = 0;
    this->playerIdx = 0;
    this->kartParam = nullptr;
    this->_18 = nullptr;
    this->kartDriverDispParams = nullptr;
    this->kartPartsDispParams = nullptr;
    this->bikePartsDispParams = nullptr;
    this->driverDispParams = nullptr;
    this->wheelCountRecip = 0.0f;
    this->wheelCountPlusOneRecip = 0.0f;
    this->gpStats = nullptr;

    // Initialize cached stats to medium kart defaults
    sCachedStats.topSpeed     = BASE_TOP_SPEED;
    sCachedStats.acceleration = BASE_ACCELERATION;
    sCachedStats.weight        = BASE_WEIGHT;
    sCachedStats.handling      = BASE_HANDLING;
    sCachedStats.drift         = BASE_DRIFT;
    sCachedStats.offroad       = BASE_OFFROAD;
    sCachedStats.miniTurbo    = BASE_MINI_TURBO;
}

// Set kart body part by body ID
// Determines if the body is a bike or kart, sets wheel/suspension counts,
// updates isBike flag, and recalculates reciprocals for the physics engine.
// @addr 0x80595500
void KartSettings::setKartBody(u32 bodyId) {
    this->vehicle = bodyId;

    // Determine vehicle type and set wheel/suspension counts
    bool bike = isBodyBike(bodyId);
    this->isBike = bike ? 1 : 0;

    if (bike) {
        this->wheelCount = BIKE_WHEEL_COUNT;
        this->susCount = BIKE_SUS_COUNT;
    } else {
        this->wheelCount = KART_WHEEL_COUNT;
        this->susCount = KART_SUS_COUNT;
    }

    // Recalculate wheel count reciprocals used by physics
    // wheelCountRecip = 1.0 / wheelCount (for averaging wheel forces)
    // wheelCountPlusOneRecip = 1.0 / (wheelCount + 1) (for stability calc)
    if (this->wheelCount > 0) {
        this->wheelCountRecip = 1.0f / static_cast<f32>(this->wheelCount);
        this->wheelCountPlusOneRecip = 1.0f / static_cast<f32>(this->wheelCount + 1);
    } else {
        this->wheelCountRecip = 0.0f;
        this->wheelCountPlusOneRecip = 0.0f;
    }

    // Recalculate base stats from vehicle body
    if (bike) {
        sCachedStats.topSpeed     = BIKE_TOP_SPEED;
        sCachedStats.acceleration = BIKE_ACCELERATION;
        sCachedStats.weight        = BIKE_WEIGHT;
        sCachedStats.handling      = BIKE_HANDLING;
        sCachedStats.drift         = BIKE_DRIFT;
        sCachedStats.offroad       = BIKE_OFFROAD;
        sCachedStats.miniTurbo    = BIKE_MINI_TURBO;
    } else {
        sCachedStats.topSpeed     = BASE_TOP_SPEED;
        sCachedStats.acceleration = BASE_ACCELERATION;
        sCachedStats.weight        = BASE_WEIGHT;
        sCachedStats.handling      = BASE_HANDLING;
        sCachedStats.drift         = BASE_DRIFT;
        sCachedStats.offroad       = BASE_OFFROAD;
        sCachedStats.miniTurbo    = BASE_MINI_TURBO;
    }

    // Reapply weight class modifier with new base stats
    applyWeightClassModifier();
}

// Set character ID and apply character-specific weight bonuses
// In MKW, character weight class modifies the vehicle's base handling
// stats. Light characters improve handling/accel at cost of speed/weight.
// @addr 0x80595580
void KartSettings::setKartCharacter(u32 charId) {
    this->character = charId;

    // Apply the weight class modifier for this character
    applyWeightClassModifier();
}

// Get current handling stats (base vehicle stats + character weight modifiers)
// Returns a snapshot of the seven core handling parameters used by the
// physics engine for speed calculations, steering, and off-road behavior.
// @addr 0x80595600
HandlingStats KartSettings::getHandlingStats() const {
    return sCachedStats;
}

// Apply heavy/medium/light weight class modifier to cached handling stats
// Reads the current character ID, determines weight class, and applies
// the corresponding stat deltas. Called after setKartBody and
// setKartCharacter to keep stats in sync.
// @addr 0x80595680
void KartSettings::applyWeightClassModifier() {
    WeightClass wc = getWeightClass(this->character);
    const WeightClassModifier& mod = WEIGHT_MODIFIERS[wc];

    // Determine base stats to apply modifier on top of
    // (re-derive from vehicle type to avoid stacking modifiers)
    if (this->isBike) {
        sCachedStats.topSpeed     = BIKE_TOP_SPEED     + mod.topSpeedDelta;
        sCachedStats.acceleration = BIKE_ACCELERATION + mod.accelDelta;
        sCachedStats.weight        = BIKE_WEIGHT        + mod.weightDelta;
        sCachedStats.handling      = BIKE_HANDLING      + mod.handlingDelta;
        sCachedStats.drift         = BIKE_DRIFT         + mod.driftDelta;
        sCachedStats.offroad       = BIKE_OFFROAD       + mod.offroadDelta;
        sCachedStats.miniTurbo    = BIKE_MINI_TURBO    + mod.miniTurboDelta;
    } else {
        sCachedStats.topSpeed     = BASE_TOP_SPEED     + mod.topSpeedDelta;
        sCachedStats.acceleration = BASE_ACCELERATION + mod.accelDelta;
        sCachedStats.weight        = BASE_WEIGHT        + mod.weightDelta;
        sCachedStats.handling      = BASE_HANDLING      + mod.handlingDelta;
        sCachedStats.drift         = BASE_DRIFT         + mod.driftDelta;
        sCachedStats.offroad       = BASE_OFFROAD       + mod.offroadDelta;
        sCachedStats.miniTurbo    = BASE_MINI_TURBO    + mod.miniTurboDelta;
    }
}

// Check if the current vehicle is a bike
// @addr 0x80595700
bool KartSettings::isBikeVehicle() const {
    return this->isBike != 0;
}

// Get the number of wheels (2 for bikes, 4 for karts)
// @addr 0x80595710
u16 KartSettings::getWheelCount() const {
    return this->wheelCount;
}

// Get the number of suspension components (matches wheel count)
// @addr 0x80595720
u16 KartSettings::getSuspensionCount() const {
    return this->susCount;
}

} // namespace Kart
