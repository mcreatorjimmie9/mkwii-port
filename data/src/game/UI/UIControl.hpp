#pragma once
// UIControl.hpp - Base class for interactive UI controls
// Buttons, sliders, scroll lists, etc. derive from this
// Address range: 0x80647974 - 0x8066dc00

#include "rk_common.h"

namespace UI {

class Layout;
class PaneWrapper;

// Control states
enum ControlState {
    CTRL_STATE_HIDDEN = -1,
    CTRL_STATE_INACTIVE = 0,
    CTRL_STATE_APPEARING = 1,
    CTRL_STATE_ACTIVE = 2,
    CTRL_STATE_HIGHLIGHTED = 3,
    CTRL_STATE_PRESSED = 4,
    CTRL_STATE_DISAPPEARING = 5,
    CTRL_STATE_DISABLED = 6,
};

// Control types
enum ControlType {
    CTRL_TYPE_BUTTON = 0,
    CTRL_TYPE_SLIDER = 1,
    CTRL_TYPE_SCROLL_LIST = 2,
    CTRL_TYPE_RADIO_GROUP = 3,
    CTRL_TYPE_CHECKBOX = 4,
    CTRL_TYPE_PICTURE_BUTTON = 5,
};

class UIControl {
public:
    UIControl();
    virtual ~UIControl();

    // --- Lifecycle ---
    virtual void onLoad();
    virtual void onInit();
    virtual void onActivate();
    virtual void onUpdate(f32 deltaTime);
    virtual void onDeactivate();
    virtual void onDestroy();

    // --- Input ---
    // @addr 0x80647c28
    virtual u32 handleInput(u32 input, u32 param, s32 type);

    // @addr 0x80647e6c
    virtual void onPointerDown(f32 x, f32 y);

    // @addr 0x80647db0
    void processInput();

    // --- State ---
    ControlState getState() const { return mState; }
    ControlType getType() const { return mType; }
    bool isVisible() const { return mState != CTRL_STATE_HIDDEN; }
    bool isActive() const {
        return mState >= CTRL_STATE_APPEARING &&
               mState <= CTRL_STATE_PRESSED;
    }
    bool isHighlighted() const { return mState == CTRL_STATE_HIGHLIGHTED; }

    void setState(ControlState state) { mState = state; }
    void setType(ControlType type) { mType = type; }

    // --- Cursor ---
    void setCursorPosition(f32 x, f32 y) { mCursorX = x; mCursorY = y; }
    f32 getCursorX() const { return mCursorX; }
    f32 getCursorY() const { return mCursorY; }

    // --- Animation ---
    void setAppearDuration(f32 duration) { mAppearDuration = duration; }
    void setDisappearDuration(f32 duration) { mDisappearDuration = duration; }

    // --- Position ---
    void setPosition(f32 x, f32 y, f32 z);
    void getPosition(f32& x, f32& y, f32& z) const;

    // --- Linked controls ---
    void setNextControl(UIControl* next) { mNextControl = next; }
    void setPrevControl(UIControl* prev) { mPrevControl = prev; }
    UIControl* getNextControl() const { return mNextControl; }
    UIControl* getPrevControl() const { return mPrevControl; }

    // @addr 0x80647b98
    void startAppearAnimation();

    // @addr 0x806491a8
    void applyPosition(u32* positionData);

protected:
    u32 mVtable;               // 0x000
    u32 mSceneRef;             // 0x004
    ControlType mType;         // 0x008
    ControlState mState;       // 0x00C
    u16 mFlags;                // 0x010
    u16 _012;

    // Transform
    f32 mPosX;                 // 0x030
    f32 mPosY;                 // 0x034
    f32 mPosZ;                 // 0x038

    // Cursor
    f32 mCursorX;              // 0xF8
    f32 mCursorY;              // 0xFC

    // Animation
    f32 mAppearDuration;       // 0x100
    f32 mAnimTimer;            // 0x104
    f32 mDisappearDuration;    // 0x108
    f32 mTotalAnimDuration;    // 0x10C
    u32 mAnimStateCount;       // 0x110

    // Linked controls (for focus chain)
    UIControl** mControlArray; // 0xB8
    u32 mControlCount;         // 0xBC
    u32 mMaxControlIndex;      // 0xB4

    // Child controls
    UIControl* mChildControls; // 0xE4
    u32 mChildCount;           // 0xE0
    u32 mActiveChildIndex;     // 0xDC

    // Navigation
    UIControl* mNextControl;   // 0x120
    UIControl* mPrevControl;   // 0x124

    // Input handling
    u32 mInputFlags;           // 0x0D0
    u32 mInputTimer;           // 0xD4
    u32 mInputCooldown;        // 0xD1

    // State flags
    u8 mInitialized;           // 0x54
    u8 mInputCaptured;         // 0xD8
    u8 _pad[2];

    // Scene interaction
    u32 mSceneGroupPane;       // 0xB0
    u32 mPanelCount;           // 0xEC
    u32 mResultValue;          // 0xF0

    // @addr 0x80649500
    void checkPointerHit(f32 x, f32 y);
    // @addr 0x80649644
    void updateInputState();
};

} // namespace UI