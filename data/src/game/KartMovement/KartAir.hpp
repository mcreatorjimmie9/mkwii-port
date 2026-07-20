#pragma once
// KartAir.hpp — Airborne / Trick State Machine
// GENESIS Phase 30: Manages kart behavior while airborne (off ramps,
// after being hit, falling off edges). Includes:
//   - Airborne detection and state management
//   - Trick system (perform stunts during airtime for speed boost)
//   - Landing detection and impact handling
//   - Fall boundary detection and Lakitu rescue trigger
// Original addresses: 0x805Dxxxx-0x805Exxxx

#include <rk_types.h>
#include <rk_common.h>
#include <egg/math/eggVector.hpp>

namespace Kart {

// Airborne state enum
enum AirState {
    AIR_STATE_GROUNDED   = 0,  // On the ground
    AIR_STATE_RISING     = 1,  // Going up (after ramp launch)
    AIR_STATE_APEX       = 2,  // At peak of arc
    AIR_STATE_FALLING    = 3,  // Coming down
    AIR_STATE_TRICK      = 4,  // Performing a trick (mid-air animation)
    AIR_STATE_LANDED     = 5,  // Just landed (landing lag)
};

// Trick type enum
enum TrickType {
    TRICK_NONE          = 0,
    TRICK_FRONT_FLIP    = 1,  // D-pad Up + shake
    TRICK_BACK_FLIP     = 2,  // D-pad Down + shake
    TRICK_LEFT_SPIN     = 3,  // D-pad Left + shake
    TRICK_RIGHT_SPIN    = 4,  // D-pad Right + shake
    TRICK_SIDE_FLIP_L   = 5,  // Side flip left
    TRICK_SIDE_FLIP_R   = 6,  // Side flip right
};

// Trick result
struct TrickResult {
    TrickType type;
    f32 speedBoostMultiplier;   // Speed boost after landing
    f32 trickScore;             // Points awarded for trick (VS mode)
    u32 animationFrames;        // Duration of trick animation
};

// Air configuration
struct AirConfig {
    f32 gravity;                 // Gravity acceleration
    f32 maxFallSpeed;            // Terminal velocity
    f32 trickWindowStart;        // Time after launch when tricks are possible (frames)
    f32 trickWindowEnd;          // Time before landing when tricks are locked (frames)
    f32 landingLagTime;         // Landing recovery time (frames)
    f32 bumpLaunchUpSpeed;      // Upward speed when bumped
    f32 normalLaunchUpSpeed;    // Upward speed from normal ramp
    f32 boostRampUpSpeed;       // Upward speed from boost ramp
};

// Per-frame air state
struct AirStateData {
    AirState mState;
    f32 airTime;                 // Total time spent airborne (seconds)
    f32 stateTimer;              // Time in current state
    EGG::Vector3f velocity;      // Current air velocity
    EGG::Vector3f lastGroundPos; // Last ground contact position
    f32 launchHeight;            // Height at launch
    f32 maxHeight;               // Maximum height reached
    TrickType trickType;         // Selected trick type
    bool mbTrickPerformed;       // Trick successfully performed
    bool mbTrickWindowOpen;      // Can still perform a trick
    f32 landingLagTimer;         // Landing recovery timer
    f32 trickBoostTimer;         // Trick speed boost timer
    f32 trickBoostMultiplier;   // Current trick boost multiplier
};

// KartAir — manages airborne behavior
class KartAir {
public:
    /* KartAir_ctor @ 0x805D1000 */
    KartAir();
    /* KartAir_dtor @ 0x805D1040 */
    ~KartAir();

    // Initialize air system
    /* KartAir_init @ 0x805D1080 */
    void init(const AirConfig& config);

    // Launch the kart into the air (from ramp, bump, etc.)
    /* KartAir_launch @ 0x805D1100 */
    void launch(const EGG::Vector3f& position, const EGG::Vector3f& velocity,
                f32 upSpeed, bool fromBoostRamp);

    // Update air state each frame
    /* KartAir_update @ 0x805D1200 */
    void update(const EGG::Vector3f& position, bool groundContact,
                f32 groundHeight);

    // Attempt a trick (called when player shakes Wii Remote + D-pad)
    /* KartAir_attemptTrick @ 0x805D1300 */
    bool attemptTrick(TrickType trickType);

    // Get current air state
    AirState getAirState() const { return mState.mState; }

    // Check if currently airborne
    bool isAirborne() const {
        return mState.mState != AIR_STATE_GROUNDED &&
               mState.mState != AIR_STATE_LANDED;
    }

    // Check if in trick window
    bool isTrickWindowOpen() const { return mState.mbTrickWindowOpen; }

    // Get trick speed boost (if any)
    f32 getTrickBoost() const { return mState.trickBoostMultiplier; }

    // Check if trick boost is active
    bool hasTrickBoost() const { return mState.trickBoostTimer > 0.0f; }

    // Get total air time
    /* KartAir_getAirTime @ 0x805D1350 */
    f32 getAirTime() const { return mState.airTime; }

    // Get total number of tricks performed (across entire race)
    /* KartAir_getTrickCount @ 0x805D1360 */
    u32 getTrickCount() const { return mTotalTrickCount; }

    // Get the height difference (maxHeight - launchHeight)
    /* KartAir_getHeightDifference @ 0x805D1370 */
    f32 getHeightDifference() const;

    // Check if trick window is currently open
    /* KartAir_isTrickWindowOpen @ 0x805D1380 */
    bool isTrickWindowOpenImpl() const;

    // Get current air velocity vector
    /* KartAir_getVelocity @ 0x805D1390 */
    const EGG::Vector3f& getVelocity() const;

    // Force immediate landing (used by Lakitu respawn)
    /* KartAir_forceLand @ 0x805D13A0 */
    void forceLand();

    // Debug helper: returns current air state name string
    /* KartAir_getAirStateName @ 0x805D13B0 */
    const char* getAirStateName() const;

    // Calculate landing speed penalty based on air time and trick result
    /* KartAir_calcLandingPenalty @ 0x805D13C0 */
    f32 calcLandingPenalty() const;

    // Get the trick result for the last performed trick
    TrickResult getLastTrickResult() const;

    // Default air config
    static AirConfig getDefaultConfig();

    // Default trick result for each trick type
    static TrickResult getTrickResult(TrickType type);

    // Extended state queries
    f32 getStateTime() const;
    f32 getLaunchSpeed() const;
    bool isLanding() const;
    f32 getLandingLagTime() const;
    bool isTrickBoostActive() const;
    f32 getTrickBoostTime() const;
    f32 getSquashProgress() const;
    f32 getMaxHeight() const;
    f32 getLaunchHeight() const;
    void reset();
    void setConfig(const AirConfig& config);

private:
    AirStateData mState;
    AirConfig mConfig;
    u32 mTotalTrickCount;        // Total tricks performed (across race)
    f32 mLandingSquashTimer;     // Landing squash animation timer
    f32 mMinAirTime;             // Minimum air time tracking (for trick eligibility)
};

// Free function: returns trick type name string for debug/logging
/* KartAir_getTrickName @ 0x805D1400 */
const char* KartAir_getTrickName(TrickType type);
bool KartAir_isFlipTrick(TrickType type);
bool KartAir_isSpinTrick(TrickType type);
f32 KartAir_getTrickScore(TrickType type);

} // namespace Kart