#pragma once
// KartWheelie.hpp — Bike Wheelie Mechanics
// GENESIS Phase 30: Manages the wheelie state machine for bike-type vehicles.
// In MKW, bikes can perform wheelies on straights for a speed boost,
// but they lose traction during the wheelie and are vulnerable to
// being bumped (instant spin-out). The wheelie state machine handles:
//   - Wheelie initiation (hold joystick up on a bike)
//   - Wheelie maintenance (continued speed boost while held)
//   - Wheelie cancellation (joystick released, turning, or bumped)
//   - Wheelie wobble (camera shake, instability at low speed)
// Original addresses: 0x805Bxxxx-0x805Cxxxx

#include <rk_types.h>
#include <rk_common.h>
#include <egg/math/eggVector.hpp>

namespace Kart {

// Wheelie state enum
enum WheelieState {
    WHEELIE_STATE_NONE       = 0,  // Not in wheelie
    WHEELIE_STATE_STARTING   = 1,  // Transition: normal → wheelie
    WHEELIE_STATE_ACTIVE     = 2,  // Full wheelie — speed boost active
    WHEELIE_STATE_ENDING     = 3,  // Transition: wheelie → normal
    WHEELIE_STATE_CANCELLED  = 4,  // Forced cancel (bump/crash)
};

// Wheelie configuration (per-vehicle)
struct WheelieConfig {
    f32 startupTime;           // Frames to enter wheelie (0.2s = 12 frames)
    f32 endLagTime;            // Frames to end wheelie (0.15s = 9 frames)
    f32 speedBoost;            // Speed multiplier during wheelie (1.15 = +15%)
    f32 turnRateMultiplier;    // Steering rate during wheelie (0.3 = -70% turning)
    f32 bumpVulnerability;     // 1.0 = always spin out when bumped in wheelie
    f32 minSpeed;              // Minimum speed to start wheelie (km/h)
    f32 wobbleAmplitude;       // Visual wobble intensity at low speed
    f32 maxWheelieAngle;       // Maximum pitch angle (radians)
};

// Wheelie runtime state data
struct WheelieRuntimeState {
    WheelieState mState;
    f32 timer;                  // Time in current state
    f32 currentAngle;           // Current wheelie pitch angle (radians)
    f32 currentBoost;           // Current speed boost multiplier
    f32 bumpCooldownTimer;      // Invulnerability after forced cancel
    bool mbCanBeBumped;         // True when in active wheelie
    bool mbIsBike;              // Only bikes can wheelie
};

// KartWheelie — manages wheelie state machine for bikes
class KartWheelie {
public:
    /* KartWheelie_ctor @ 0x805B1000 */
    KartWheelie();
    /* KartWheelie_dtor @ 0x805B1040 */
    ~KartWheelie();

    // Initialize wheelie system for a vehicle type
    /* KartWheelie_init @ 0x805B1080 */
    void init(bool isBike, const WheelieConfig& config);

    // Update wheelie state each frame
    /* KartWheelie_update @ 0x805B1100 */
    void update(bool inputUp, f32 currentSpeed, f32 steerInput,
                bool isBeingBumped);

    // Force-cancel the wheelie (from item hit, collision, etc.)
    /* KartWheelie_forceCancel @ 0x805B1200 */
    void forceCancel();

    // Begin wheelie: set state to rising, start angle animation
    void startWheelie();

    // End wheelie: set state to falling, restore normal angle
    void endWheelie();

    // Smoothly animate wheelie angle (rising/maintaining/falling)
    void updateAngle();

    // Check if wheelie is in progress (any non-NONE state)
    bool isActive() const;

    // Check conditions: vehicle is bike, speed > threshold, not drifting, not in air, not stunned
    bool canStartWheelie(f32 currentSpeed, f32 steerInput) const;

    // Set wheelie parameters from vehicle stats
    void setWheelieParams(f32 angleMax, u32 riseFrames, f32 speedThreshold);

    // Force-cancel wheelie (alias for forceCancel, from being hit, off-road, etc.)
    void cancelWheelie();

    // Get current wheelie state
    WheelieRuntimeState getState() const { return mState; }
    WheelieState getWheelieState() const { return mState.mState; }

    // Get current speed bonus multiplier (typically +1.5% per frame during active wheelie)
    f32 getSpeedBonus() const;

    // Get current wheelie angle (for visual tilt)
    f32 getWheelieAngle() const;

    // Check if kart can be bumped (spin out vulnerability)
    bool canBeBumped() const { return mState.mbCanBeBumped; }

    // Check if currently in any wheelie state
    bool isInWheelie() const {
        return mState.mState != WHEELIE_STATE_NONE;
    }

    // Get the turn rate multiplier (reduced during wheelie)
    f32 getTurnRateMultiplier() const;

    // Default wheelie config for standard bikes
    static WheelieConfig getDefaultConfig();

    // Get stability metric [0.0, 1.0]
    f32 getStability() const;

    // Check if in active wheelie state
    bool isDoingWheelie() const;

    // Get wheelie balance factor for visual tilt [0.0, 1.0]
    f32 getWheelieBalance() const;

private:
    WheelieRuntimeState mState;
    WheelieConfig mConfig;
    bool mbIsBike;
};

} // namespace Kart
