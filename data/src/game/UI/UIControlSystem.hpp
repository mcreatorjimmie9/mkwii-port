#pragma once
// UIControlSystem.hpp - Global input routing and focus management
// Routes Wii Remote input to UI controls, manages cursor and focus chain
// Address range: 0x80621000 - 0x80624000

#include "rk_common.h"

namespace UI {

class UIControl;
class MenuPage;

// Input source types
enum InputSource {
    INPUT_SOURCE_WIIMOTE = 0,
    INPUT_SOURCE_NUNCHUK = 1,
    INPUT_SOURCE_CLASSIC = 2,
    INPUT_SOURCE_GAMECUBE = 3,
    INPUT_SOURCE_TOUCH = 4,
    INPUT_SOURCE_COUNT = 5,
};

// Button IDs (subset of PAD_BUTTON for UI)
enum UIInputButton {
    UIBTN_A = 0x0001,
    UIBTN_B = 0x0002,
    UIBTN_X = 0x0004,
    UIBTN_Y = 0x0008,
    UIBTN_START = 0x0010,
    UIBTN_HOME = 0x0020,
    UIBTN_PLUS = 0x0040,
    UIBTN_MINUS = 0x0080,
    UIBTN_DPAD_UP = 0x0100,
    UIBTN_DPAD_DOWN = 0x0200,
    UIBTN_DPAD_LEFT = 0x0400,
    UIBTN_DPAD_RIGHT = 0x0800,
    UIBTN_L = 0x1000,
    UIBTN_R = 0x2000,
    UIBTN_ZL = 0x4000,
    UIBTN_ZR = 0x8000,
    // Extended
    UIBTN_1 = 0x10000,
    UIBTN_2 = 0x20000,
    UIBTN_C = 0x40000,
    UIBTN_Z = 0x80000,
};

// Input state for a single player
struct PlayerInputState {
    u32 pressed;         // Buttons pressed this frame
    u32 held;           // Buttons held this frame
    u32 released;       // Buttons released this frame
    f32 stickX;         // Analog stick X (-1.0 to 1.0)
    f32 stickY;         // Analog stick Y (-1.0 to 1.0)
    f32 triggerL;       // Left trigger analog
    f32 triggerR;       // Right trigger analog
    u8 isConnected;     // Whether controller is connected
    u8 source;          // InputSource type
    u8 _pad[2];
};

// Cursor state
struct CursorState {
    f32 x;              // Screen position X (0.0-1.0)
    f32 y;              // Screen position Y (0.0-1.0)
    f32 targetX;        // Target X (for smooth movement)
    f32 targetY;        // Target Y
    f32 speed;          // Movement speed
    u8 visible;         // Cursor visibility
    u8 animating;       // Whether cursor is moving to target
    u8 playerIdx;       // Which player owns this cursor
    u8 _pad;
};

// Focus chain configuration
struct FocusConfig {
    u32 maxChainLength;
    u32 wrapAround;      // 1 = wrap at ends, 0 = stop
    u32 directionalNav;  // 1 = use directional nav, 0 = sequential only
    f32 stickThreshold;  // Analog stick dead zone threshold
    f32 repeatDelay;     // Delay before button repeat starts (seconds)
    f32 repeatRate;     // Button repeat rate (times per second)
};

// Focus chain entry
struct FocusEntry {
    UIControl* control;
    s32 index;
    s32 navUp;           // Index of control above (directional)
    s32 navDown;
    s32 navLeft;
    s32 navRight;
    u8 enabled;          // Whether this entry can receive focus
    u8 _pad[3];
};

class UIControlSystem {
public:
    UIControlSystem();
    ~UIControlSystem();

    // Singleton
    static UIControlSystem* getInstance();
    static void createInstance();
    static void destroyInstance();

    // --- Initialization ---
    // @addr 0x80621000
    void init(u32 playerCount);
    // @addr 0x806211A0
    void shutdown();

    // --- Input processing (called once per frame) ---
    // @addr 0x80621330
    void update(f32 deltaTime);
    // @addr 0x80621500
    void processInput(u32 playerMask);

    // --- Focus management ---
    // @addr 0x80621680
    void setFocus(UIControl* control);
    // @addr 0x806217A0
    void clearFocus();
    // @addr 0x80621880
    UIControl* getFocusedControl() const;
    // @addr 0x80621940
    void setFocusByIndex(s32 index);
    // @addr 0x80621A20
    s32 getFocusedIndex() const;

    // --- Focus chain ---
    // @addr 0x80621B00
    void buildFocusChain(UIControl** controls, u32 count);
    // @addr 0x80621C80
    void setDirectionalNav(s32 fromIdx, s32 up, s32 down, s32 left, s32 right);
    // @addr 0x80621DA0
    void navigateFocus(s32 direction); // 0=up, 1=down, 2=left, 3=right
    // @addr 0x80621F00
    void nextFocus();
    // @addr 0x80622000
    void prevFocus();

    // --- Cursor management ---
    // @addr 0x80622100
    void setCursorPosition(s32 playerIdx, f32 x, f32 y);
    // @addr 0x80622220
    void moveCursor(s32 playerIdx, f32 dx, f32 dy);
    // @addr 0x80622340
    void animateCursorTo(s32 playerIdx, f32 targetX, f32 targetY);
    // @addr 0x80622460
    const CursorState& getCursor(s32 playerIdx) const;
    // @addr 0x80622540
    void setCursorVisible(s32 playerIdx, bool visible);

    // --- Input lock ---
    // @addr 0x80622640
    void lockInput();
    // @addr 0x80622720
    void unlockInput();
    bool isInputLocked() const { return mInputLocked; }

    // --- Player input state ---
    // @addr 0x80622800
    const PlayerInputState& getPlayerInput(s32 playerIdx) const;

    // --- Configuration ---
    void setFocusConfig(const FocusConfig& config) { mFocusConfig = config; }
    const FocusConfig& getFocusConfig() const { return mFocusConfig; }
    void setStickDeadZone(f32 threshold);
    f32 getStickDeadZone() const;

    // --- Page association ---
    // @addr 0x80622900
    void associatePage(MenuPage* page);
    // @addr 0x80622A00
    void disassociatePage();
    MenuPage* getAssociatedPage() const { return mAssociatedPage; }

    // --- Calibration ---
    void setAnalogCalibration(f32 deadZone, f32 sensitivity);
    // @addr 0x80622B00
    f32 normalizeAnalog(f32 rawValue) const;

    // --- Utility ---
    // @addr 0x80622C40
    static bool isButtonPressed(u32 state, u32 button);
    // @addr 0x80622D00
    static bool isButtonHeld(u32 state, u32 button);
    static bool isButtonReleased(u32 state, u32 button);

private:
    static UIControlSystem* sInstance;
    static const u32 MAX_LOCAL_PLAYERS = 4;
    static const u32 MAX_FOCUS_CHAIN = 64;
    static const u32 MAX_CURSORS = 4;

    // Player input states
    PlayerInputState mPlayerInputs[MAX_LOCAL_PLAYERS];
    u32 mPlayerCount;

    // Focus chain
    FocusEntry mFocusChain[MAX_FOCUS_CHAIN];
    u32 mFocusChainLength;
    s32 mFocusedIndex;

    // Cursor states
    CursorState mCursors[MAX_CURSORS];

    // Input lock
    bool mInputLocked;
    u32 mLockFlags;

    // Configuration
    FocusConfig mFocusConfig;
    f32 mAnalogDeadZone;
    f32 mAnalogSensitivity;

    // Page association
    MenuPage* mAssociatedPage;

    // Button repeat state
    u32 mRepeatButtons;
    f32 mRepeatTimer;
    f32 mRepeatDelayElapsed;

    // Internal helpers
    void updateCursorAnimation(CursorState& cursor, f32 deltaTime);
    void routeInputToFocus(f32 deltaTime);
    void handleDpadRepeat(u32 pressed, f32 deltaTime);
    void handleStickNavigation(f32 stickX, f32 stickY, f32 deltaTime);
    s32 findNextEnabledEntry(s32 currentIndex, s32 direction);
    void clampCursor(CursorState& cursor);
};

} // namespace UI