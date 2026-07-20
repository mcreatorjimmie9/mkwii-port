// UIControl.cpp - Interactive UI control base class implementation
// Address range: 0x80647974 - 0x8066dc00

#include "UIControl.hpp"
#include "Layout.hpp"
#include "AnimationController.hpp"
#include "ui_stubs.h"

namespace UI {

UIControl::UIControl()
    : mVtable(0)
    , mSceneRef(0)
    , mType(CTRL_TYPE_BUTTON)
    , mState(CTRL_STATE_HIDDEN)
    , mFlags(0)
    , _012(0)
    , mPosX(0.0f)
    , mPosY(0.0f)
    , mPosZ(0.0f)
    , mCursorX(0.0f)
    , mCursorY(0.0f)
    , mAppearDuration(0.0f)
    , mAnimTimer(0.0f)
    , mDisappearDuration(0.0f)
    , mTotalAnimDuration(0.0f)
    , mAnimStateCount(0)
    , mControlArray(nullptr)
    , mControlCount(0)
    , mMaxControlIndex(0)
    , mChildControls(nullptr)
    , mChildCount(0)
    , mActiveChildIndex(0)
    , mNextControl(nullptr)
    , mPrevControl(nullptr)
    , mInputFlags(0)
    , mInputTimer(0)
    , mInputCooldown(0)
    , mInitialized(0)
    , mInputCaptured(0)
    , _pad{0,0}
    , mSceneGroupPane(nullptr)
    , mPanelCount(0)
    , mResultValue(0) {
}

UIControl::~UIControl() {
}

void UIControl::onLoad() {
    // Base initialization
    mFlags = 1;
    mControlCount = 1;
    mPanelCount = 12;
}

void UIControl::onInit() {
}

void UIControl::onActivate() {
}

void UIControl::onUpdate(f32 deltaTime) {
    // Base update - advance animation state
    if (mState == CTRL_STATE_APPEARING) {
        mAnimTimer += deltaTime;
        if (mAnimTimer >= mAppearDuration) {
            mState = CTRL_STATE_ACTIVE;
            mAnimTimer = 0.0f;
        }
    } else if (mState == CTRL_STATE_DISAPPEARING) {
        mAnimTimer += deltaTime;
        if (mAnimTimer >= mDisappearDuration) {
            mState = CTRL_STATE_HIDDEN;
            mAnimTimer = 0.0f;
        }
    }
}

void UIControl::onDeactivate() {
    mState = CTRL_STATE_DISAPPEARING;
    mAnimTimer = 0.0f;
}

void UIControl::onDestroy() {
    mState = CTRL_STATE_HIDDEN;
}

// @addr 0x80647c28
u32 UIControl::handleInput(u32 input, u32 param, s32 type) {
    // Handle confirm/cancel input types
    if (type == 3 || type == 5) {
        onActivate();
    }
    return param;
}

// @addr 0x80647e6c
void UIControl::onPointerDown(f32 x, f32 y) {
    // Read current pointer position from scene
    mPosX = getPointerX();
    mPosY = getPointerY();
    mPosZ = getPointerZ();

    // Set active flag
    mFlags |= 1;

    // Update scene transform
    updateSceneTransform(mSceneRef, x, y);
}

// @addr 0x80647db0
void UIControl::processInput() {
    switch (mInputTimer) {
    case 0: {
        // Waiting for input start
        s32 inputResult = readInputState(mSceneRef);
        if (inputResult == 1) {
            mInputTimer = 1;
        }

        // Update position from scene
        mPosX = getScenePositionX(mSceneRef);
        mPosY = getScenePositionY(mSceneRef);
        mPosZ = getScenePositionZ(mSceneRef);
        mFlags |= 1;
        break;
    }
    case 1:
        // Input started - process
        onAppearAnimation();
        break;
    case 2:
        // In animation
        onSlideAnimation();
        break;
    case 3:
        // Animation complete
        onAppearAnimation();
        break;
    }
}

// @addr 0x80647b98
void UIControl::startAppearAnimation() {
    if (mInitialized) return;

    mState = CTRL_STATE_PRESSED;
    mCursorY = getGlobalTime();
    mResultValue = readInputState(mSceneRef);
    setVolume(mSceneRef, 3);

    mInitialized = 1;
    mInputTimer = 0x3C; // 60 frames
}

// @addr 0x806491a8
void UIControl::applyPosition(u32* positionData) {
    mPosX = (f32)positionData[0];
    mPosY = (f32)positionData[1];
    mPosZ = (f32)positionData[2];

    f32 yPlus = mPosZ + getGlobalTime();
    f32 yMinus = mPosZ - getGlobalTime();

    // Apply to first child control
    if (mMaxControlIndex < 1) {
        mSceneGroupPane->onActivate();
    }
    UIControl* child0 = mControlArray[0];
    child0->mFlags |= 1;
    child0->mPosX = mPosX;
    child0->mPosY = mPosY;
    child0->mPosZ = yPlus;

    // Apply to second child control (mirrored Y)
    if (mMaxControlIndex < 2) {
        mSceneGroupPane->onActivate();
    }
    UIControl* child1 = mControlArray[1];
    child1->mFlags |= 1;
    child1->mPosX = mPosX;
    child1->mPosY = mPosY;
    child1->mPosZ = yMinus;

    // Store reference position
    mPosZ = mPosZ;
    mActiveChildIndex = 1;
    mInputCaptured = 0;
    mInputTimer = 0;
    mInputFlags = 0;
    mInputCooldown = 0;

    // Set initial highlight
    f32 uVar3 = mPosX;
    f32 uVar4 = mPosY;
    mPosX = uVar3;
    mPosY = uVar4;
    f32 z = mPosZ + getGlobalTime();
    if (mMaxControlIndex < 1) {
        mSceneGroupPane->onActivate();
    }
    UIControl* c0 = mControlArray[0];
    c0->mFlags |= 1;
    c0->mPosX = uVar3;
    c0->mPosY = uVar4;
    c0->mPosZ = z;

    f32 zMirror = mPosZ - getGlobalTime();
    if (mMaxControlIndex < 2) {
        mSceneGroupPane->onActivate();
    }
    UIControl* c1 = mControlArray[1];
    c1->mFlags |= 1;
    c1->mPosX = uVar3;
    c1->mPosY = uVar4;
    c1->mPosZ = zMirror;
}

void UIControl::setPosition(f32 x, f32 y, f32 z) {
    mPosX = x;
    mPosY = y;
    mPosZ = z;
}

void UIControl::getPosition(f32& x, f32& y, f32& z) const {
    x = mPosX;
    y = mPosY;
    z = mPosZ;
}

// @addr 0x80649500
void UIControl::checkPointerHit(f32 x, f32 y) {
    if (!mInputCaptured) {
        s32 hitIndex = findHitPane(mSceneRef, 0x30, y);
        if (hitIndex >= 0) {
            mResultValue = getColorFromHitIndex(hitIndex);
            mState = CTRL_STATE_ACTIVE;
            mInputTimer = 0;
            mInputFlags = 0;
        }
    } else {
        // Cooldown
        s32 remaining = mInputCooldown - 1;
        mInputCooldown = remaining;
        if (remaining == 0) {
            mState = CTRL_STATE_ACTIVE;
            mInputTimer = 0;
            mInputFlags = 0;
        }
    }

    // Check for active input
    if (mInputFlags) {
        // Check for confirm input on active pane
        s16 inputState = readPaneInputState(mSceneRef);
        if (inputState == 1 && !mInitialized) {
            mInitialized = 1;
            mResultValue = 0;
        }
        return;
    }

    // Continue processing hit target
    processHitTarget(mResultValue);
}

// @addr 0x80649644
void UIControl::updateInputState() {
    s32 timer = mInputTimer + 1;
    mInputTimer = timer;

    if (!mInputCooldown) {
        if (timer == getRepeatDelay()) {
            mInputCooldown = 1;
        }
    } else {
        // Trigger repeat action
        onRepeatAction();
    }

    // Handle active state
    if (mInputFlags) {
        s16 inputState = readPaneInputState(mSceneRef);
        if (inputState == 1 && !mInitialized) {
            mInitialized = 1;
            mResultValue = 0;
        }
        return;
    }

    processHitTarget(mResultValue);
}

// ===========================================================================
// Extended UIControl Implementation
// ===========================================================================

// @addr 0x80647e00 — Initialize callback (called after layout load)
void UIControl::onCalc() {
    // Base calc: update animation state
    if (mState == CTRL_STATE_APPEARING) {
        mAnimTimer += mAppearDuration > 0.0f ? 1.0f / mAppearDuration : 0.0f;
        if (mAnimTimer >= 1.0f) {
            mState = CTRL_STATE_ACTIVE;
            mAnimTimer = 0.0f;
        }
    } else if (mState == CTRL_STATE_DISAPPEARING) {
        mAnimTimer += mDisappearDuration > 0.0f ? 1.0f / mDisappearDuration : 0.0f;
        if (mAnimTimer >= 1.0f) {
            mState = CTRL_STATE_HIDDEN;
            mAnimTimer = 0.0f;
        }
    }
}

// @addr 0x80647e30 — Draw the control and its children
void UIControl::onDraw() {
    if (mChildControls == nullptr || mChildCount == 0) return;
}

// @addr 0x80647e60 — Add a child control to this control
void UIControl::addChild(UIControl* child) {
    if (child == nullptr) return;
    child->mNextControl = nullptr;
    child->mPrevControl = nullptr;
    mChildCount++;
}

// @addr 0x80647e90 — Remove a child control from this control
void UIControl::removeChild(UIControl* child) {
    if (child == nullptr) return;
    if (mChildCount == 0) return;
    mChildCount--;
    if (mChildCount < 0) mChildCount = 0;
}

// @addr 0x80647ec0 — Set visibility of this control
void UIControl::setVisible(bool visible) {
    if (visible) {
        mState = CTRL_STATE_INACTIVE;
    } else {
        mState = CTRL_STATE_HIDDEN;
    }
}

// @addr 0x80647ef0 — Set alpha on this control
void UIControl::setAlpha(u8 alpha) {
    (void)alpha;
}

// @addr 0x80647f20 — Get the primary pane for this control
PaneWrapper* UIControl::getPane() const {
    return nullptr;
}

// @addr 0x80647f50 — Find a child control by name
UIControl* UIControl::findControl(const char* name) const {
    if (name == nullptr) return nullptr;
    if (mChildControls == nullptr) return nullptr;
    (void)name;
    return nullptr;
}

// @addr 0x80647f80 — Start a transition-in animation
void UIControl::transitionIn(f32 duration) {
    mState = CTRL_STATE_APPEARING;
    mAnimTimer = 0.0f;
    mAppearDuration = duration > 0.0f ? duration : 0.3f;
}

// @addr 0x80647fb0 — Start a transition-out animation
void UIControl::transitionOut(f32 duration) {
    mState = CTRL_STATE_DISAPPEARING;
    mAnimTimer = 0.0f;
    mDisappearDuration = duration > 0.0f ? duration : 0.3f;
}

// @addr 0x80647fe0 — Get the result value
u32 UIControl::getResultValue() const {
    return mResultValue;
}

// @addr 0x80648000 — Check if this control is enabled
bool UIControl::isEnabled() const {
    return mState != CTRL_STATE_HIDDEN && mState != CTRL_STATE_DISABLED;
}

// @addr 0x80648020 — Enable or disable the control
void UIControl::setEnabled(bool enabled) {
    if (!enabled) {
        mState = CTRL_STATE_DISABLED;
    } else if (mState == CTRL_STATE_DISABLED) {
        mState = CTRL_STATE_INACTIVE;
    }
}

// @addr 0x80648040 — Get the scene reference
u32 UIControl::getSceneRef() const {
    return mSceneRef;
}

// @addr 0x80648060 — Set the scene reference
void UIControl::setSceneRef(u32 sceneRef) {
    mSceneRef = sceneRef;
}

// @addr 0x80648080 — Get child count
u32 UIControl::getChildCount() const {
    return mChildCount;
}

// @addr 0x806480a0 — Get active child index
u32 UIControl::getActiveChildIndex() const {
    return mActiveChildIndex;
}

// @addr 0x806480c0 — Set active child index
void UIControl::setActiveChildIndex(u32 index) {
    mActiveChildIndex = index;
}

// @addr 0x806480e0 — Get panel count
u32 UIControl::getPanelCount() const {
    return mPanelCount;
}

// @addr 0x80648100 — Check if input is captured
bool UIControl::isInputCaptured() const {
    return mInputCaptured != 0;
}

// @addr 0x80648120 — Set the animation state count
void UIControl::setAnimStateCount(u32 count) {
    mAnimStateCount = count;
}

// @addr 0x80648140 — Get the animation state count
u32 UIControl::getAnimStateCount() const {
    return mAnimStateCount;
}

// @addr 0x80648160 — Get the total animation duration
f32 UIControl::getTotalAnimDuration() const {
    return mTotalAnimDuration;
}

// @addr 0x80648180 — Get the current animation timer value
f32 UIControl::getAnimTimer() const {
    return mAnimTimer;
}

} // namespace UI