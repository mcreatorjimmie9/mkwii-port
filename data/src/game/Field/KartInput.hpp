#pragma once
// KartInput.hpp — Kart Input Processing
// GENESIS Phase 16: Processes raw controller input into kart drive commands
// Original addresses: 0x804Cxxxx
//
// This is the Field-layer input processor that converts raw KPad state
// into smoothed, deadzone-applied, kart-specific drive commands.
// It differs from Kart::KartInput (which is the per-kart state holder).

#include <rk_types.h>
#include <EGG/math.h>
#include <KPadController.hpp>

namespace Field {

class KartInput {
public:
    /* KartInput_ctor @ 0x804C1000 */
    KartInput();
    /* KartInput_dtor @ 0x804C1040 */
    ~KartInput();

    // Initialize for a specific player index
    /* KartInput_init @ 0x804C1080 */
    void init(s32 playerIdx);

    // Process raw controller input → kart drive commands
    // Called once per frame
    /* KartInput_update @ 0x804C1100 */
    void update(const System::KPadRaceInputState& rawInput);

    // ---- Output accessors ----

    // Steering: [-1.0, 1.0], negative = left, positive = right
    /* KartInput_getSteer @ 0x804C1400 */
    f32 getSteer() const { return mSteer; }

    // Acceleration: [0.0, 1.0]
    /* KartInput_getAccel @ 0x804C1410 */
    f32 getAccel() const { return mAccel; }

    // Brake: [0.0, 1.0]
    /* KartInput_getBrake @ 0x804C1420 */
    f32 getBrake() const { return mBrake; }

    // Drift state: true when drift button is held
    /* KartInput_isDrifting @ 0x804C1430 */
    bool isDrifting() const { return mDrifting; }

    // Item use: true when item button pressed (rising edge)
    /* KartInput_isItemUse @ 0x804C1440 */
    bool isItemUse() const { return mItemUse; }

    // Raw stick X: [-1.0, 1.0]
    /* KartInput_getStickX @ 0x804C1450 */
    f32 getStickX() const { return mRawStickX; }

    // Raw stick Y: [-1.0, 1.0]
    /* KartInput_getStickY @ 0x804C1460 */
    f32 getStickY() const { return mRawStickY; }

    // ---- Configuration ----

    // Set analog stick deadzone radius [0.0, 1.0]
    void setDeadzone(f32 radius) { mDeadzone = radius; }
    f32 getDeadzone() const { return mDeadzone; }

    // Set stick smoothing factor [0.0 = no smoothing, 1.0 = max]
    void setSmoothing(f32 factor) { mSmoothing = factor; }

    // Get player index
    s32 getPlayerIdx() const { return mPlayerIdx; }

    // Button state queries
    bool isButtonPressed(u32 buttonMask) const { return (mButtons & buttonMask) != 0; }
    bool wasButtonPressed(u32 buttonMask) const { return (mLastButtons & buttonMask) != 0; }
    bool isButtonRising(u32 buttonMask) const {
        return (mButtons & buttonMask) != 0 && (mLastButtons & buttonMask) == 0;
    }

    // Trick input state
    s32 getTrickState() const { return mTrickState; } // 0=none, 1=up, 2=down, 3=left, 4=right

private:
    // Apply deadzone and rescale analog stick values
    /* KartInput_applyDeadzone @ 0x804C1500 */
    static void applyDeadzone(f32 x, f32 y, f32 deadzone, f32* outX, f32* outY);

    // Map raw button state to kart-specific flags
    void processButtons(const System::KPadRaceInputState& raw);

    // Smooth steering value toward target
    f32 smoothSteer(f32 target);

    s32 mPlayerIdx;          // 0x04: player index [0-3]

    // Processed output values
    f32 mSteer;              // 0x08: final steering [-1, 1]
    f32 mAccel;              // 0x0C: acceleration [0, 1]
    f32 mBrake;              // 0x10: brake [0, 1]
    bool mDrifting;          // 0x14: drift input active
    bool mItemUse;           // 0x15: item use (rising edge)

    // Raw input
    f32 mRawStickX;          // 0x18: raw stick X [-1, 1]
    f32 mRawStickY;          // 0x1C: raw stick Y [-1, 1]
    u32 mButtons;            // 0x20: current button state
    u32 mLastButtons;        // 0x24: previous frame button state

    // Configuration
    f32 mDeadzone;           // 0x28: analog deadzone radius
    f32 mSmoothing;          // 0x2C: steering smoothing factor

    // Internal state
    f32 mPrevSteer;          // 0x30: previous frame steering (for smoothing)
    s32 mTrickState;         // 0x34: trick input state
};

} // namespace Field