#pragma once
// InputManager.hpp — Global Input Manager
// GENESIS Phase 16: Manages all controller channels, PAD scanning, and
// rumble. Provides per-player input state for the game.
// Original addresses: 0x804Dxxxx

#include <rk_types.h>
#include <EGG/math.h>
#include <KPadController.hpp>

namespace Field {

// Per-controller state (maps to Wii PAD channel)
struct ControllerState {
    bool connected;                     // Controller is connected
    System::KPadRaceInputState raceInput; // Processed race input
    u8 rumblePattern;                    // Current rumble pattern
    u8 rumbleTimer;                      // Rumble duration counter (frames)
};

class InputManager {
public:
    /* InputManager_ctor @ 0x804D1000 */
    InputManager();
    /* InputManager_dtor @ 0x804D1040 */
    ~InputManager();

    // Singleton access
    /* InputManager_instance @ 0x804D1080 */
    static InputManager* instance();

    // Initialize PAD SDK — set up all 4 controller channels
    /* InputManager_init @ 0x804D10A0 */
    void init();

    // Scan all controllers — call once per frame
    // Reads PADStatus from each channel and converts to KPadRaceInputState
    /* InputManager_scan @ 0x804D1100 */
    void scan();

    // Update all controllers, apply deadzones, smoothing
    // Alias for scan() with additional post-processing
    /* InputManager_update @ 0x804D10A0 */
    void update() { scan(); }

    // Shutdown input system, release resources
    /* InputManager_shutdown @ 0x804D1450 */
    void shutdown();

    // Get processed race input for player (u8 overload)
    const System::KPadRaceInputState& getInputState(u8 playerIdx) const;

    // Get raw (pre-processing) input state
    const System::KPadRaceInputState& getRawInput(u8 playerIdx) const;

    // Set rumble with intensity and duration
    /* InputManager_setRumble @ 0x804D1300 */
    void setRumble(u8 playerIdx, f32 intensity, f32 duration);

    // Get controller type: 0=GC, 1=Wheel, 2=Nunchuk, 3=Classic, 0xFF=none
    /* InputManager_getType @ 0x804D1500 */
    u8 getType(u8 playerIdx) const;

    // Get processed race input for a specific player
    /* InputManager_getInput @ 0x804D1200 */
    const System::KPadRaceInputState& getInput(s32 playerIdx) const;

    // Get mutable race input (for AI injection etc.)
    System::KPadRaceInputState& getMutableInput(s32 playerIdx);

    // Trigger rumble on a controller
    /* InputManager_rumble @ 0x804D1300 */
    void rumble(s32 playerIdx, u8 pattern);

    // Check if a controller is connected
    /* InputManager_isConnected @ 0x804D1400 */
    bool isConnected(s32 playerIdx) const;

    // Get raw button state for a player
    u32 getButtons(s32 playerIdx) const;

    // Get the number of connected controllers
    s32 getConnectedCount() const;

    // Set maximum number of players to scan
    void setMaxPlayers(s32 count) { mMaxPlayers = count; }

    // Enable/disable input for a player (e.g., during countdown)
    void setEnabled(s32 playerIdx, bool enabled);
    bool isEnabled(s32 playerIdx) const;

    // Apply circular deadzone to stick input
    /* InputManager_applyDeadzone @ 0x804D1600 */
    static void applyDeadzone(f32& stickX, f32& stickY);

    // Apply exponential smoothing to an input value
    /* InputManager_applySmoothing @ 0x804D1640 */
    static void applySmoothing(f32& value, f32 prev, f32 factor);

private:
    // Process raw PADStatus into KPadRaceInputState
    void processPADStatus(s32 channel, const u8* padStatus);

    // Convert raw stick value (0-255) to float [-1, 1]
    static f32 convertStick(u8 raw);

    // Update rumble timers
    void updateRumble();

    static const s32 MAX_PLAYERS = 4;
    static const f32 DEADZONE_RADIUS;    // ~0.15 normalized
    static const f32 SMOOTH_FACTOR;      // 0.3 default smoothing

    ControllerState mControllers[MAX_PLAYERS]; // Per-controller state
    s32 mMaxPlayers;                           // Max players to scan
    bool mEnabled[MAX_PLAYERS];                // Per-player enable flags
    u32 mFrameCount;                           // Frame counter
    u8 mControllerTypes[MAX_PLAYERS];          // Controller type per player

    // Singleton
    static InputManager* sInstance;
};

// Singleton accessor (free function style)
/* InputManager_getInstance @ 0x804D1080 */
inline InputManager* InputManager_getInstance() { return InputManager::instance(); }

} // namespace Field