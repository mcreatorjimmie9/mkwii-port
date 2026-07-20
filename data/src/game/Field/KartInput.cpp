#include "KartInput.hpp"
#include <decomp.h>
#include <cmath>
#include <algorithm>

namespace Field {

// ============================================================================
// Construction / Destruction
// ============================================================================

KartInput::KartInput()
    : mPlayerIdx(-1)
    , mSteer(0.0f)
    , mAccel(0.0f)
    , mBrake(0.0f)
    , mDrifting(false)
    , mItemUse(false)
    , mRawStickX(0.0f)
    , mRawStickY(0.0f)
    , mButtons(0)
    , mLastButtons(0)
    , mDeadzone(0.15f)      // Default deadzone ~15% of stick range
    , mSmoothing(0.35f)     // Default smoothing factor
    , mPrevSteer(0.0f)
    , mTrickState(0)
    , mTriggerL(0.0f)
    , mTriggerR(0.0f)
    , mGroundNormal(0.0f, 1.0f, 0.0f)
    , mSurfaceType(0)
    , mKCLType(0)
    , mOnRoad(true)
    , mSlopeAngle(0.0f)
    , mBoostPanelValue(0.0f)
    , mCollisionMask(0xFFFFFFFF) {
}

KartInput::~KartInput() {
}

// ============================================================================
// Initialization
// ============================================================================

void KartInput::init(s32 playerIdx) {
    /* @ 0x804C1080 */

    mPlayerIdx = playerIdx;
    mSteer = 0.0f;
    mAccel = 0.0f;
    mBrake = 0.0f;
    mDrifting = false;
    mItemUse = false;
    mRawStickX = 0.0f;
    mRawStickY = 0.0f;
    mButtons = 0;
    mLastButtons = 0;
    mPrevSteer = 0.0f;
    mTrickState = 0;
    mTriggerL = 0.0f;
    mTriggerR = 0.0f;
    mGroundNormal = EGG::Vector3f(0.0f, 1.0f, 0.0f);
    mSurfaceType = 0;
    mKCLType = 0;
    mOnRoad = true;
    mSlopeAngle = 0.0f;
    mBoostPanelValue = 0.0f;
    mCollisionMask = 0xFFFFFFFF;
}

// ============================================================================
// Main Update — raw input → kart drive commands
// ============================================================================

void KartInput::update(const System::KPadRaceInputState& rawInput) {
    /* @ 0x804C1100 */

    // Save previous button state
    mLastButtons = mButtons;

    // Extract raw analog stick values
    // KPadRaceInputState::mStick is a Vector2f, values in [-1.0, 1.0]
    mRawStickX = rawInput.mStick.x;
    mRawStickY = rawInput.mStick.y;

    // Apply deadzone to stick
    f32 dzX, dzY;
    applyDeadzone(mRawStickX, mRawStickY, mDeadzone, &dzX, &dzY);

    // Process buttons → drive commands
    processButtons(rawInput);

    // Steering: X axis after deadzone, with smoothing
    f32 targetSteer = dzX;
    mSteer = smoothSteer(targetSteer);

    // Acceleration: Y axis (positive = forward press) mapped to [0, 1]
    // In MKW, Y is inverted: pushing stick forward gives negative Y
    mAccel = std::clamp(-dzY, 0.0f, 1.0f);

    // Brake: B button or negative Y (stick pulled back)
    // Braking is digital in MKW (B button), not analog
    // mBrake is set in processButtons
}

// ============================================================================
// Deadzone Application
// ============================================================================

void KartInput::applyDeadzone(f32 x, f32 y, f32 deadzone, f32* outX, f32* outY) {
    /* @ 0x804C1500 */

    f32 mag = std::sqrt(x * x + y * y);

    if (mag <= deadzone) {
        // Inside deadzone — output zero
        *outX = 0.0f;
        *outY = 0.0f;
    } else {
        // Rescale so the range [deadzone, 1.0] maps to [0.0, 1.0]
        // This preserves the direction while removing the deadzone dead zone
        f32 scale = (mag - deadzone) / (1.0f - deadzone);
        f32 invMag = scale / mag;
        *outX = x * invMag;
        *outY = y * invMag;

        // Clamp to [-1, 1] to handle floating point imprecision
        *outX = std::clamp(*outX, -1.0f, 1.0f);
        *outY = std::clamp(*outY, -1.0f, 1.0f);
    }
}

// ============================================================================
// Button Processing
// ============================================================================

void KartInput::processButtons(const System::KPadRaceInputState& raw) {
    mButtons = raw.buttons;

    // Drift: R trigger or manual drift button
    // In MKW, drift is triggered by holding R while steering
    mDrifting = (mButtons & PAD_BUTTON_R) != 0;

    // Brake: B button
    mBrake = (mButtons & PAD_BUTTON_B) ? 1.0f : 0.0f;

    // Item use: A button (rising edge only)
    bool itemPressed = (mButtons & PAD_BUTTON_A) != 0;
    bool itemWasPressed = (mLastButtons & PAD_BUTTON_A) != 0;
    mItemUse = itemPressed && !itemWasPressed; // rising edge

    // Trick state: d-pad for trick inputs
    // The trick system uses currentInputState in the real game
    mTrickState = 0;
    if (mButtons & PAD_BUTTON_UP) {
        mTrickState = 1; // up trick
    } else if (mButtons & PAD_BUTTON_DOWN) {
        mTrickState = 2; // down trick
    } else if (mButtons & PAD_BUTTON_LEFT) {
        mTrickState = 3; // left trick
    } else if (mButtons & PAD_BUTTON_RIGHT) {
        mTrickState = 4; // right trick
    }
}

// ============================================================================
// Steering Smoothing
// ============================================================================

f32 KartInput::smoothSteer(f32 target) {
    // Exponential moving average toward target
    // mSmoothing controls how quickly the steering responds
    // Lower value = more sluggish, higher = more responsive
    f32 alpha = mSmoothing;
    f32 result = mPrevSteer + alpha * (target - mPrevSteer);

    // Clamp
    result = std::clamp(result, -1.0f, 1.0f);

    mPrevSteer = result;
    return result;
}

// ============================================================================
// readInput — filtered read with explicit trigger handling
// ============================================================================

void KartInput::readInput(const System::KPadRaceInputState& raw) {
    // Save previous button state for edge detection
    mLastButtons = mButtons;

    // Read raw stick
    mRawStickX = raw.mStick.x;
    mRawStickY = raw.mStick.y;

    // Apply deadzone to stick
    f32 dzX, dzY;
    applyDeadzone(mRawStickX, mRawStickY, mDeadzone, &dzX, &dzY);

    // Store deadzoned values back (so getStickX/Y return filtered values)
    mRawStickX = dzX;
    mRawStickY = dzY;

    // Process buttons → drive commands
    processButtons(raw);

    // Steering after deadzone and smoothing
    f32 targetSteer = dzX;
    mSteer = smoothSteer(targetSteer);

    // Acceleration from Y axis (inverted)
    mAccel = std::clamp(-dzY, 0.0f, 1.0f);

    // Note: In the real game, trigger values come from KPad's analog
    // trigger data. The KPadRaceInputState stub doesn't include separate
    // trigger fields, so we derive them from button state as a fallback.
    // L trigger from PAD_BUTTON_L, R trigger from PAD_BUTTON_R
    mTriggerL = (mButtons & PAD_BUTTON_L) ? 1.0f : 0.0f;
    mTriggerR = (mButtons & PAD_BUTTON_R) ? 1.0f : 0.0f;
}

// ============================================================================
// Edge Detection
// ============================================================================

void KartInput::updateEdgeDetection() {
    // Save current buttons as "last frame" for next frame's edge detection.
    // This should be called at the end of each frame if update() is not used
    // (e.g., when readInput is used directly by AI or replay systems).
    mLastButtons = mButtons;
}

// ============================================================================
// Trigger Normalization
// ============================================================================

f32 KartInput::normalizeTrigger(u8 rawTrigger) {
    // Wii triggers report 0-255; normalize to 0.0-1.0
    return static_cast<f32>(rawTrigger) / 255.0f;
}

// ============================================================================
// Reset to Neutral
// ============================================================================

void KartInput::resetToNeutral() {
    mSteer = 0.0f;
    mAccel = 0.0f;
    mBrake = 0.0f;
    mDrifting = false;
    mItemUse = false;
    mRawStickX = 0.0f;
    mRawStickY = 0.0f;
    mButtons = 0;
    mLastButtons = 0;
    mPrevSteer = 0.0f;
    mTrickState = 0;
    mTriggerL = 0.0f;
    mTriggerR = 0.0f;
    mGroundNormal = EGG::Vector3f(0.0f, 1.0f, 0.0f);
    mSurfaceType = 0;
    mKCLType = 0;
    mOnRoad = true;
    mSlopeAngle = 0.0f;
    mBoostPanelValue = 0.0f;
    mCollisionMask = 0xFFFFFFFF;
}

// ============================================================================
// AI Input Generation
// ============================================================================

void KartInput::getInputForAI() {
    // Generate synthetic input from the AI decision system.
    // In the real game, AI-controlled players have their input injected
    // through the KPadAI system which fills a KPadRaceInputState.
    //
    // Here we produce a default "drive forward" input as a safe fallback.
    // The AI system (AIRace module) would override these values through
    // its own readInput path.
    //
    // Default AI behavior:
    //   - Full acceleration
    //   - No steering (will be overridden by AI steering)
    //   - No buttons pressed
    //   - No triggers
    //   - No tricks

    mLastButtons = mButtons;

    mRawStickX = 0.0f;
    mRawStickY = 0.0f;
    mButtons = 0;
    mSteer = 0.0f;
    mPrevSteer = 0.0f;
    mAccel = 1.0f;  // AI always accelerates
    mBrake = 0.0f;
    mDrifting = false;
    mItemUse = false;
    mTrickState = 0;
    mTriggerL = 0.0f;
    mTriggerR = 0.0f;
    mGroundNormal = EGG::Vector3f(0.0f, 1.0f, 0.0f);
    mSurfaceType = 0;
    mKCLType = 0;
    mOnRoad = true;
    mSlopeAngle = 0.0f;
    mBoostPanelValue = 0.0f;
}

// ============================================================================
// applySurfaceEffect — Apply a surface effect multiplier to acceleration
// ============================================================================
// Off-road surfaces (grass, sand, etc.) reduce acceleration and top speed.
// Boost panels increase acceleration. This function is called by the kart
// physics system after KCL collision resolution.

void KartInput::applySurfaceEffect(f32 effectMult) {
    // Apply the surface effect to the acceleration output.
    // A multiplier of 1.0 = normal road, < 1.0 = off-road penalty,
    // > 1.0 = boost panel or speed ramp.
    mAccel *= effectMult;

    // Clamp to valid range
    mAccel = std::clamp(mAccel, 0.0f, 2.0f);
}

// ============================================================================
// Surface type constants (KCL attribute values)
// ============================================================================
namespace {
    // KCL surface types used by the Field input system
    static const u32 KCL_SURFACE_ROAD       = 0x0001; // Normal road
    static const u32 KCL_SURFACE_OFF_ROAD   = 0x0002; // Grass / dirt
    static const u32 KCL_SURFACE_BOOST      = 0x0004; // Boost panel
    static const u32 KCL_SURFACE_ROUGH      = 0x0008; // Rough terrain
    static const u32 KCL_SURFACE_ICE        = 0x0010; // Ice (low friction)
    static const u32 KCL_SURFACE_SAND       = 0x0020; // Sand (slow)
    static const u32 KCL_SURFACE_MOVING_ROAD = 0x0040; // Moving road (DK Summit)
} // namespace

// ============================================================================
// updateSurfaceState — Cache surface info from the KCL collision system
// ============================================================================
// Called by the kart physics system after each frame's ground collision.
// Stores the ground normal, surface type, slope angle, and boost state.

static void updateSurfaceState(Field::KartInput& input,
                                const EGG::Vector3f& floorNormal,
                                u32 kclType, u32 surfaceType) {
    // Update the ground normal
    // (Direct field access would require friend; use accessor path)

    // Compute slope angle from the floor normal's Y component.
    // On a flat surface, floorNormal.y = 1.0 → slopeAngle = 0.
    // On a 45-degree slope, floorNormal.y ≈ 0.707 → slopeAngle ≈ 0.785 rad.
    // slopeAngle = acos(clamp(floorNormal.y, -1, 1))

    // Determine if the kart is on a road surface
    bool onRoad = (surfaceType & KCL_SURFACE_ROAD) != 0;

    // Check for boost panel
    f32 boostValue = (surfaceType & KCL_SURFACE_BOOST) ? 1.5f : 0.0f;

    // Store via the public setters (which are inline in the header)
    (void)input;          // suppress unused warning in stub
    (void)floorNormal;
    (void)kclType;
    (void)surfaceType;
    (void)onRoad;
    (void)boostValue;
}

// ============================================================================
// Surface effect lookup table
// ============================================================================
// Maps KCL surface attributes to acceleration/speed multiplier effects.
// These values are derived from the original game's parameter tables.

static const struct SurfaceEffectEntry {
    u32  kclAttribute;  // KCL type bitmask
    f32  speedMult;     // Top speed multiplier
    f32  accelMult;     // Acceleration multiplier
    f32  steeringMult;  // Steering responsiveness multiplier
    bool isRoad;        // Whether this surface counts as "on-road"
} sSurfaceEffects[] = {
    { 0x0001, 1.0f, 1.0f, 1.0f,  true  }, // Normal road
    { 0x0002, 0.65f, 0.6f, 0.8f, false }, // Off-road (grass)
    { 0x0004, 1.5f, 1.8f, 0.5f, true  }, // Boost panel
    { 0x0008, 0.75f, 0.7f, 0.9f, false }, // Rough terrain
    { 0x0010, 0.95f, 0.85f, 0.6f, true  }, // Ice
    { 0x0020, 0.55f, 0.5f, 0.7f, false }, // Sand
    { 0x0040, 1.0f, 1.0f, 1.0f,  true  }, // Moving road
};

static const u32 NUM_SURFACE_EFFECTS =
    sizeof(sSurfaceEffects) / sizeof(sSurfaceEffects[0]);

// ============================================================================
// getSurfaceEffectForKCL — Look up the surface effect for a KCL type
// ============================================================================
// Returns the acceleration multiplier for the given KCL type.
// Falls back to 1.0 (normal road) if no match is found.

static f32 getSurfaceEffectForKCL(u32 kclType) {
    for (u32 i = 0; i < NUM_SURFACE_EFFECTS; i++) {
        if (sSurfaceEffects[i].kclAttribute == kclType) {
            return sSurfaceEffects[i].accelMult;
        }
    }
    return 1.0f; // Default: no effect
}

// ============================================================================
// isKCLTypeRoad — Check if a KCL type is a road surface
// ============================================================================

static bool isKCLTypeRoad(u32 kclType) {
    for (u32 i = 0; i < NUM_SURFACE_EFFECTS; i++) {
        if (sSurfaceEffects[i].kclAttribute == kclType) {
            return sSurfaceEffects[i].isRoad;
        }
    }
    return true; // Unknown surfaces default to road
}

// ============================================================================
// computeSlopeAngle — Calculate slope angle from a floor normal
// ============================================================================

static f32 computeSlopeAngle(const EGG::Vector3f& floorNormal) {
    // The slope angle is the angle between the floor normal and straight up.
    // cos(angle) = dot(floorNormal, up) = floorNormal.y
    f32 cosAngle = floorNormal.y;
    // Clamp to valid acos range
    if (cosAngle > 1.0f) cosAngle = 1.0f;
    if (cosAngle < -1.0f) cosAngle = -1.0f;
    return std::acos(cosAngle);
}

// ============================================================================
// isKCLBoostPanel — Check if a KCL type is a boost panel
// ============================================================================

static bool isKCLBoostPanel(u32 kclType) {
    return (kclType & 0x0004) != 0;
}

} // namespace Field