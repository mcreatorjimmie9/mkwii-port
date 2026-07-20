#include "InputManager.hpp"
#include <decomp.h>
#include <cstring>
#include <cmath>

namespace Field {

// Helper: zero-initialize a ControllerState without memset
// (avoids -Wclass-memaccess warnings for non-trivial types)
static void initControllerState(ControllerState& cs) {
    cs.connected = false;
    cs.rumblePattern = 0;
    cs.rumbleTimer = 0;
    cs.raceInput.mStick.set(0.0f, 0.0f);
    cs.raceInput.buttons = 0;
    cs.raceInput.currentInputState.mStick.set(0.0f, 0.0f);
}

// Static member definitions
/* InputManager_statics @ 0x804D1000 */
InputManager* InputManager::sInstance = nullptr;
const f32 InputManager::DEADZONE_RADIUS = 0.15f;
const f32 InputManager::SMOOTH_FACTOR = 0.3f;

// ============================================================================
// Construction / Destruction
// ============================================================================

InputManager::InputManager()
    : mMaxPlayers(4)
    , mFrameCount(0) {
    for (s32 i = 0; i < MAX_PLAYERS; i++) {
        initControllerState(mControllers[i]);
        mEnabled[i] = true;
        mControllerTypes[i] = 0; // Unknown
    }
}

InputManager::~InputManager() {
}

InputManager* InputManager::instance() {
    if (!sInstance) {
        sInstance = new InputManager();
    }
    return sInstance;
}

// ============================================================================
// Initialization
// ============================================================================

void InputManager::init() {
    /* @ 0x804D10A0 */

    mFrameCount = 0;
    mMaxPlayers = 4;

    for (s32 i = 0; i < MAX_PLAYERS; i++) {
        initControllerState(mControllers[i]);
        mEnabled[i] = true;
        mControllers[i].connected = (i == 0); // Default: player 1 connected
        mControllerTypes[i] = (i == 0) ? 0 : 0xFF; // Player 0 = GC pad
    }

    // In the real game, this calls:
    //   PADInit();
    //   PADSetMax(4);
    // For PC port, we rely on host system input (keyboard/gamepad).
}

// ============================================================================
// Frame Scan — Read all controllers
// ============================================================================

void InputManager::scan() {
    /* @ 0x804D1100 */

    mFrameCount++;

    // In the real Wii game:
    //   PADStatus pads[4];
    //   PADRead(pads);
    //   for each channel, processPADStatus(channel, &pads[channel]);
    //
    // For the PC port, input is provided by the host system
    // (e.g., SDL2, XInput). The actual platform-specific reading
    // happens in host_system/ modules. Here we just update rumble.
    updateRumble();
}

// ============================================================================
// Process PAD Status into KPadRaceInputState
// ============================================================================

void InputManager::processPADStatus(s32 channel, const u8* padStatus) {
    /* @ 0x804D1150 */
    if (channel < 0 || channel >= MAX_PLAYERS) return;

    ControllerState& ctrl = mControllers[channel];

    // Check connected (error == 0)
    // In real Wii: padStatus[channel].err == 0
    // For now, assume connected if padStatus is non-null
    ctrl.connected = (padStatus != nullptr);
    if (!ctrl.connected) return;

    // In the real game, we'd read:
    // padStatus->stickX (0-255, 128 = center)
    // padStatus->stickY (0-255, 128 = center)
    // padStatus->button (bitfield)
    // padStatus->triggerL/R (0-255)
    // padStatus->substickX/Y (C-stick)
    //
    // For the PC port, the host system provides pre-processed input
    // directly into ctrl.raceInput, so this function is a stub that
    // would be filled in when the PAD bridge is implemented.

    (void)padStatus;
}

// ============================================================================
// Stick Value Conversion
// ============================================================================

f32 InputManager::convertStick(u8 raw) {
    // Wii GameCube stick: 0-255, center=128, range ~30-225
    // Map to [-1.0, 1.0]
    f32 centered = f32(raw) - 128.0f;
    // Deadzone and scaling
    const f32 MAX_RANGE = 80.0f; // typical GC stick range from center
    f32 result = centered / MAX_RANGE;
    if (result > 1.0f) result = 1.0f;
    if (result < -1.0f) result = -1.0f;
    return result;
}

// ============================================================================
// Input Accessors
// ============================================================================

const System::KPadRaceInputState& InputManager::getInput(s32 playerIdx) const {
    /* @ 0x804D1200 */
    if (playerIdx >= 0 && playerIdx < MAX_PLAYERS) {
        return mControllers[playerIdx].raceInput;
    }
    // Return a static empty state for invalid indices
    static System::KPadRaceInputState sEmpty;
    return sEmpty;
}

System::KPadRaceInputState& InputManager::getMutableInput(s32 playerIdx) {
    if (playerIdx >= 0 && playerIdx < MAX_PLAYERS) {
        return mControllers[playerIdx].raceInput;
    }
    static System::KPadRaceInputState sEmpty;
    return sEmpty;
}

u32 InputManager::getButtons(s32 playerIdx) const {
    if (playerIdx >= 0 && playerIdx < MAX_PLAYERS) {
        return mControllers[playerIdx].raceInput.buttons;
    }
    return 0;
}

bool InputManager::isConnected(s32 playerIdx) const {
    /* @ 0x804D1400 */
    if (playerIdx >= 0 && playerIdx < MAX_PLAYERS) {
        return mControllers[playerIdx].connected;
    }
    return false;
}

s32 InputManager::getConnectedCount() const {
    s32 count = 0;
    for (s32 i = 0; i < mMaxPlayers; i++) {
        if (mControllers[i].connected) count++;
    }
    return count;
}

// ============================================================================
// Rumble
// ============================================================================

void InputManager::rumble(s32 playerIdx, u8 pattern) {
    /* @ 0x804D1300 */
    if (playerIdx < 0 || playerIdx >= MAX_PLAYERS) return;
    if (!mControllers[playerIdx].connected) return;

    mControllers[playerIdx].rumblePattern = pattern;
    // Pattern 0 = stop, 1-255 = different rumble intensities
    // Duration is set based on pattern
    switch (pattern) {
        case 0: mControllers[playerIdx].rumbleTimer = 0; break;
        case 1: mControllers[playerIdx].rumbleTimer = 5;  break;  // short
        case 2: mControllers[playerIdx].rumbleTimer = 10; break;  // medium
        case 3: mControllers[playerIdx].rumbleTimer = 20; break;  // long
        default: mControllers[playerIdx].rumbleTimer = 8; break;  // default
    }

    // In the real game:
    //   PADControlMotor(channel, &cmd);
    // where cmd has status (on/off) and rumble magnitude
}

void InputManager::updateRumble() {
    for (s32 i = 0; i < MAX_PLAYERS; i++) {
        if (mControllers[i].rumbleTimer > 0) {
            mControllers[i].rumbleTimer--;
            if (mControllers[i].rumbleTimer == 0) {
                mControllers[i].rumblePattern = 0;
                // PADControlMotor(i, PAD_MOTOR_STOP);
            }
        }
    }
}

// ============================================================================
// Enable / Disable
// ============================================================================

void InputManager::setEnabled(s32 playerIdx, bool enabled) {
    if (playerIdx >= 0 && playerIdx < MAX_PLAYERS) {
        mEnabled[playerIdx] = enabled;
        if (!enabled) {
            // Zero out input when disabled
            mControllers[playerIdx].raceInput.mStick.set(0.0f, 0.0f);
            mControllers[playerIdx].raceInput.buttons = 0;
        }
    }
}

bool InputManager::isEnabled(s32 playerIdx) const {
    if (playerIdx >= 0 && playerIdx < MAX_PLAYERS) {
        return mEnabled[playerIdx];
    }
    return false;
}

// ============================================================================
// Phase 37 — InputManager extended methods
// ============================================================================

/* InputManager_shutdown @ 0x804D1450 */
void InputManager::shutdown() {
    // Stop all rumble motors before shutting down the PAD system.
    // This ensures controllers stop vibrating immediately.
    for (s32 i = 0; i < MAX_PLAYERS; i++) {
        if (mControllers[i].connected) {
            mControllers[i].rumblePattern = 0;
            mControllers[i].rumbleTimer = 0;
            // PADControlMotor(i, PAD_MOTOR_STOP);
        }
    }
    // In the real game: PADReset();
    for (s32 i = 0; i < MAX_PLAYERS; i++) {
        initControllerState(mControllers[i]);
        mControllerTypes[i] = 0xFF;
    }
    mFrameCount = 0;
}

/* InputManager_getInputState @ 0x804D1200 */
const System::KPadRaceInputState& InputManager::getInputState(u8 playerIdx) const {
    if (playerIdx < MAX_PLAYERS) {
        return mControllers[playerIdx].raceInput;
    }
    static System::KPadRaceInputState sEmpty;
    return sEmpty;
}

/* InputManager_getRawInput @ 0x804D1230 */
const System::KPadRaceInputState& InputManager::getRawInput(u8 playerIdx) const {
    // Raw input is the same as processed input in the current implementation
    // since the host system provides pre-processed data.
    // In the real game, raw input would be the unfiltered PADStatus values
    // before deadzone/smoothing are applied.
    if (playerIdx < MAX_PLAYERS) {
        return mControllers[playerIdx].raceInput;
    }
    static System::KPadRaceInputState sEmpty;
    return sEmpty;
}

/* InputManager_setRumble @ 0x804D1300 */
void InputManager::setRumble(u8 playerIdx, f32 intensity, f32 duration) {
    if (playerIdx >= MAX_PLAYERS) return;
    if (!mControllers[playerIdx].connected) return;

    // Map intensity (0.0-1.0) to pattern (0-3)
    u8 pattern = 0;
    if (intensity > 0.7f) pattern = 3;       // long
    else if (intensity > 0.4f) pattern = 2;  // medium
    else if (intensity > 0.1f) pattern = 1;  // short

    // Map duration (seconds) to frame count (assuming 60fps)
    u8 frameDuration = (u8)(duration * 60.0f);
    if (frameDuration < 3) frameDuration = 3;

    mControllers[playerIdx].rumblePattern = pattern;
    mControllers[playerIdx].rumbleTimer = frameDuration;

    // In the real game:
    //   PADControlMotor motorCmd;
    //   motorCmd.status = pattern > 0 ? PAD_MOTOR_RUMBLE : PAD_MOTOR_STOP;
    //   motorCmd.rumble = intensity * 255;
    //   PADControlMotor(playerIdx, &motorCmd);
}

/* InputManager_getType @ 0x804D1500 */
u8 InputManager::getType(u8 playerIdx) const {
    if (playerIdx >= MAX_PLAYERS) return 0xFF;
    if (!mControllers[playerIdx].connected) return 0xFF;
    // Controller types:
    //   0 = GameCube (PAD)
    //   1 = Wii Wheel (KPAD_TYPE_WHEEL)
    //   2 = Nunchuk (KPAD_TYPE_NUNCHUK)
    //   3 = Classic Controller (KPAD_TYPE_CLASSIC)
    //   0xFF = None / Unknown
    return mControllerTypes[playerIdx];
}

/* InputManager_applyDeadzone @ 0x804D1600 */
void InputManager::applyDeadzone(f32& stickX, f32& stickY) {
    // Circular deadzone: if the magnitude is below the radius, zero out.
    // Otherwise, rescale to eliminate the "dead zone" feel.
    f32 magSq = stickX * stickX + stickY * stickY;
    f32 radiusSq = DEADZONE_RADIUS * DEADZONE_RADIUS;

    if (magSq < radiusSq) {
        stickX = 0.0f;
        stickY = 0.0f;
    } else {
        // Rescale so the edge of the deadzone maps to 0,
        // and the full range maps to [-1, 1]
        f32 mag = sqrtf(magSq);
        f32 normalizedMag = (mag - DEADZONE_RADIUS) / (1.0f - DEADZONE_RADIUS);
        if (normalizedMag > 1.0f) normalizedMag = 1.0f;
        f32 scale = normalizedMag / mag;
        stickX *= scale;
        stickY *= scale;
    }
}

/* InputManager_applySmoothing @ 0x804D1640 */
void InputManager::applySmoothing(f32& value, f32 prev, f32 factor) {
    // Exponential moving average: value = prev * (1 - factor) + value * factor
    // factor = 0.3 means 30% new, 70% old
    // This prevents sudden input jumps and gives smoother steering.
    if (factor < 0.0f) factor = 0.0f;
    if (factor > 1.0f) factor = 1.0f;
    value = prev * (1.0f - factor) + value * factor;
}

/* InputManager_resetAll @ 0x804D1680 */
void InputManager::resetAll() {
    // Reset all controller states without fully shutting down the PAD system.
    // This is called between races or when returning to the menu.
    // All connected controllers are reset to neutral state (no buttons, centered stick).

    mFrameCount = 0;

    for (s32 i = 0; i < MAX_PLAYERS; i++) {
        // Clear input state
        mControllers[i].raceInput.mStick.set(0.0f, 0.0f);
        mControllers[i].raceInput.buttons = 0;
        mControllers[i].raceInput.currentInputState.mStick.set(0.0f, 0.0f);

        // Reset rumble
        mControllers[i].rumblePattern = 0;
        mControllers[i].rumbleTimer = 0;

        // Re-enable all controllers
        mEnabled[i] = true;
    }

    // In the real game, this would also:
    //   - Clear any buffered inputs
    //   - Reset trigger states (L/R analog)
    //   - Clear the C-stick / Nunchuk stick
    //   - Reset Wiimote pointer and motion data
}

// ============================================================================
// Phase 41 — Input query helpers
// ============================================================================

/* InputManager_getStickMagnitude @ 0x804D1700 */
f32 InputManager::getStickMagnitude(s32 playerIdx) const {
    // Returns the magnitude of the player's stick input.
    // Used by kart movement code to determine steering intensity.
    if (playerIdx < 0 || playerIdx >= MAX_PLAYERS) return 0.0f;
    const ControllerState& ctrl = mControllers[playerIdx];
    if (!ctrl.connected) return 0.0f;
    f32 sx = ctrl.raceInput.mStick.x;
    f32 sy = ctrl.raceInput.mStick.y;
    return sqrtf(sx * sx + sy * sy);
}

/* InputManager_getStickAngle @ 0x804D1740 */
f32 InputManager::getStickAngle(s32 playerIdx) const {
    // Returns the angle of the stick in radians (atan2).
    // Used by kart movement for direction-based handling.
    if (playerIdx < 0 || playerIdx >= MAX_PLAYERS) return 0.0f;
    const ControllerState& ctrl = mControllers[playerIdx];
    if (!ctrl.connected) return 0.0f;
    return atan2f(ctrl.raceInput.mStick.y, ctrl.raceInput.mStick.x);
}

/* InputManager_isButtonHeld @ 0x804D1780 */
bool InputManager::isButtonHeld(s32 playerIdx, u32 buttonMask) const {
    // Check if a specific button mask is currently held down.
    // Unlike wasButtonPressed (rising edge), this is level-triggered.
    if (playerIdx < 0 || playerIdx >= MAX_PLAYERS) return false;
    if (!mControllers[playerIdx].connected) return false;
    return (mControllers[playerIdx].raceInput.buttons & buttonMask) == buttonMask;
}

/* InputManager_getTriggerInput @ 0x804D17C0 */
f32 InputManager::getTriggerInput(s32 playerIdx) const {
    // Get the combined trigger input (L + R analog triggers).
    // In the real game, this reads the analog trigger values from PADStatus
    // and maps them to a 0.0-1.0 range. Used for braking/acceleration.
    if (playerIdx < 0 || playerIdx >= MAX_PLAYERS) return 0.0f;
    if (!mControllers[playerIdx].connected) return 0.0f;
    // Placeholder: return 0 since we don't have analog trigger data yet.
    // When the PAD bridge is implemented, this will read triggerL/triggerR
    // from the raceInput state and average them.
    return 0.0f;
}

} // namespace Field
