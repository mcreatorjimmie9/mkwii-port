#include "InputManager.hpp"
#include <decomp.h>
#include <cstring>
#include <cmath>

namespace Field {

InputManager* InputManager::sInstance = nullptr;

// ============================================================================
// Construction / Destruction
// ============================================================================

InputManager::InputManager()
    : mMaxPlayers(4)
    , mFrameCount(0) {
    memset(mControllers, 0, sizeof(mControllers));
    for (s32 i = 0; i < MAX_PLAYERS; i++) {
        mEnabled[i] = true;
        mControllers[i].connected = false;
        mControllers[i].rumblePattern = 0;
        mControllers[i].rumbleTimer = 0;
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

    memset(mControllers, 0, sizeof(mControllers));
    mFrameCount = 0;
    mMaxPlayers = 4;

    for (s32 i = 0; i < MAX_PLAYERS; i++) {
        mEnabled[i] = true;
        mControllers[i].connected = (i == 0); // Default: player 1 connected
        mControllers[i].rumblePattern = 0;
        mControllers[i].rumbleTimer = 0;
        mControllers[i].raceInput.mStick.set(0.0f, 0.0f);
        mControllers[i].raceInput.buttons = 0;
        mControllers[i].raceInput.currentInputState.mStick.set(0.0f, 0.0f);
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

} // namespace Field