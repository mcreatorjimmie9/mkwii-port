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

} // namespace UI