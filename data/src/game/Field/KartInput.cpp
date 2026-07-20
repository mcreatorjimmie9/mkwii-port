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
    , mTriggerR(0.0f) {
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
}

} // namespace Field