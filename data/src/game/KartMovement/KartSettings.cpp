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

// Get top speed stat from cached handling stats
f32 KartSettings::getSpeedStat() const {
    return sCachedStats.topSpeed;
}

// Get acceleration stat
f32 KartSettings::getAcceleration() const {
    return sCachedStats.acceleration;
}

// Get handling (ground steering responsiveness)
f32 KartSettings::getHandling() const {
    return sCachedStats.handling;
}

// Get drift stat (drift steering responsiveness)
f32 KartSettings::getDriftStat() const {
    return sCachedStats.drift;
}

// Get off-road speed retention stat
f32 KartSettings::getOffroadStat() const {
    return sCachedStats.offroad;
}

// Get weight class stat
f32 KartSettings::getWeightStat() const {
    return sCachedStats.weight;
}

// Get mini-turbo boost duration stat
f32 KartSettings::getMiniTurboDuration() const {
    f32 base = 1.0f;
    f32 scale = sCachedStats.miniTurbo / 50.0f;
    return base + (scale - 1.0f) * 0.4f;
}

// Get item probability bias based on position/weight
f32 KartSettings::getItemProbability() const {
    f32 weightFactor = sCachedStats.weight / BASE_WEIGHT;
    f32 bias = (weightFactor - 0.8f) * 2.5f;
    if (bias < 0.0f) bias = 0.0f;
    if (bias > 1.0f) bias = 1.0f;
    return bias;
}

// Load vehicle parameters from binary data
void KartSettings::loadFromBinary(const void* data) {
    if (data == nullptr) return;
    const f32* stats = static_cast<const f32*>(data);
    sCachedStats.topSpeed     = stats[0];
    sCachedStats.acceleration = stats[1];
    sCachedStats.weight        = stats[2];
    sCachedStats.handling      = stats[3];
    sCachedStats.drift         = stats[4];
    sCachedStats.offroad       = stats[5];
    sCachedStats.miniTurbo    = stats[6];
}

// Set a single stat by ID
void KartSettings::setStat(s32 statId, f32 value) {
    switch (statId) {
    case STAT_TOP_SPEED:    sCachedStats.topSpeed = value; break;
    case STAT_ACCELERATION: sCachedStats.acceleration = value; break;
    case STAT_WEIGHT:       sCachedStats.weight = value; break;
    case STAT_HANDLING:     sCachedStats.handling = value; break;
    case STAT_DRIFT:        sCachedStats.drift = value; break;
    case STAT_OFFROAD:      sCachedStats.offroad = value; break;
    case STAT_MINI_TURBO:   sCachedStats.miniTurbo = value; break;
    default: break;
    }
}

// Free function: return default kart handling stats
HandlingStats KartSettings_getDefaultKart() {
    HandlingStats stats;
    stats.topSpeed     = BASE_TOP_SPEED;
    stats.acceleration = BASE_ACCELERATION;
    stats.weight        = BASE_WEIGHT;
    stats.handling      = BASE_HANDLING;
    stats.drift         = BASE_DRIFT;
    stats.offroad       = BASE_OFFROAD;
    stats.miniTurbo    = BASE_MINI_TURBO;
    return stats;
}

// Get normalized stat value (0.0 to 1.0) for display purposes
// MKW's 1-5 stat bars map to internal ranges
static f32 normalizeStat(f32 value, f32 minVal, f32 maxVal) {
    if (maxVal <= minVal) return 0.0f;
    f32 norm = (value - minVal) / (maxVal - minVal);
    if (norm < 0.0f) norm = 0.0f;
    if (norm > 1.0f) norm = 1.0f;
    return norm;
}

// Get the display bar value (1-5) for top speed
s32 KartSettings_getSpeedBar(const HandlingStats& stats) {
    f32 norm = normalizeStat(stats.topSpeed, 30.0f, 80.0f);
    return 1 + static_cast<s32>(norm * 4.0f + 0.5f);
}

// Get the display bar value (1-5) for acceleration
s32 KartSettings_getAccelBar(const HandlingStats& stats) {
    f32 norm = normalizeStat(stats.acceleration, 30.0f, 70.0f);
    return 1 + static_cast<s32>(norm * 4.0f + 0.5f);
}

// Get the display bar value (1-5) for handling
s32 KartSettings_getHandlingBar(const HandlingStats& stats) {
    f32 norm = normalizeStat(stats.handling, 30.0f, 80.0f);
    return 1 + static_cast<s32>(norm * 4.0f + 0.5f);
}

// Get the display bar value (1-5) for drift
s32 KartSettings_getDriftBar(const HandlingStats& stats) {
    f32 norm = normalizeStat(stats.drift, 25.0f, 70.0f);
    return 1 + static_cast<s32>(norm * 4.0f + 0.5f);
}

// Get the display bar value (1-5) for off-road
s32 KartSettings_getOffroadBar(const HandlingStats& stats) {
    f32 norm = normalizeStat(stats.offroad, 20.0f, 65.0f);
    return 1 + static_cast<s32>(norm * 4.0f + 0.5f);
}

// Get the display bar value (1-5) for mini-turbo
s32 KartSettings_getMiniTurboBar(const HandlingStats& stats) {
    f32 norm = normalizeStat(stats.miniTurbo, 25.0f, 70.0f);
    return 1 + static_cast<s32>(norm * 4.0f + 0.5f);
}

// Get the weight class index (0=Light, 1=Medium, 2=Heavy) from weight stat
s32 KartSettings_getWeightClassIndex(f32 weight) {
    if (weight < 58.0f) return 0;  // Light
    if (weight < 72.0f) return 1;  // Medium
    return 2;                       // Heavy
}

} // namespace Kart
