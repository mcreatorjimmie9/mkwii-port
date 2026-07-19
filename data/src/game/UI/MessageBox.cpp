// MessageBox.cpp - Message box dialog implementation
// Address range: 0x8050a38c - 0x8050b420

#include "MessageBox.hpp"
#include "Layout.hpp"
#include "LayoutLoader.hpp"
#include "UIManager.hpp"
#include "ui_stubs.h"

namespace UI {

MessageBox::MessageBox()
    : mIsShown(false)
    , mIsAnimating(false)
    , mType(MSGBOX_INFO)
    , mResult(MSGBOX_RESULT_NONE)
    , mShowTimer(0.0f)
    , mAnimTimer(0.0f)
    , mTimeoutFrames(0)
    , mElapsedFrames(0)
    , mLayout(nullptr)
    , mWindowPane(0)
    , mTextPane(0)
    , mOkButtonPane(0)
    , mCancelButtonPane(0)
    , mCallback(nullptr)
    , mUserData(nullptr)
    , mTransitionState(0)
    , mInitFlag(0)
    , mOverlayFlag(0) {
    memset(&mConfig, 0, sizeof(mConfig));
}

MessageBox::~MessageBox() {
    hide();
}

// @addr 0x8050a678
void* MessageBox::construct(void* buffer) {
    initVtable();
    *((u32*)buffer) = 0;
    initPaneReference((u8*)buffer + 0x12);
    initLinkedList((u32)((uintptr_t)((u8*)buffer + 0x16)));
    return buffer;
}

// @addr 0x8050a6f4
void* MessageBox::destroy(void* buffer, s32 freeMem) {
    if (buffer != nullptr) {
        destroyChild((u8*)buffer + 0x48, -1);
        clearVtable();
    }
    return buffer;
}

// @addr 0x8050a38c
void MessageBox::show(const MessageBoxConfig& config) {
    mConfig = config;
    mResult = MSGBOX_RESULT_NONE;
    mElapsedFrames = 0;
    mIsShown = true;

    switch (config.type) {
    case MSGBOX_INFO:
        // Standard message display
        mTransitionState = 0;
        break;
    case MSGBOX_WARNING:
        // Warning with optional action
        mTransitionState = 1;
        break;
    case MSGBOX_ERROR:
    case MSGBOX_CONFIRM:
        // Two-button dialog
        mTransitionState = 2;
        break;
    case MSGBOX_NETWORK_ERROR:
        // Network error with dismiss
        mTransitionState = 4;
        break;
    }

    // Set up the message text
    stopTransition();

    if (mTransitionState == 2) {
        // Two-button dialog - set up buttons
        mInitFlag = 1;
        Page* page = getActivePageFromGroup(0x140);
        if (page != nullptr && isPageInList(page)) {
            page->setPageVisible(true);
            sendPageMessage(page, 0x1CEE, 0);
            sendPageMessage(page, 0x07D2, 0, 0, 0, (void*)((u8*)this + 0x1B));
            sendPageMessage(page, 0x07D3, 0, 0, -1, 0);
            page->setUpdateFlag(1);
            onButtonAction(this, 0x4E, 0);
        }
    } else {
        // Single-action dialog
        setLayoutReady(this, mTransitionState);
    }

    // Set scene flag for message display
    setGlobalFlags(getGlobalFlags() | 0x10);
}

// @addr 0x8050a75c
void MessageBox::hide() {
    if (!mIsShown) return;

    // Stop any active animation
    stopAnimation(mWindowPane, 0, 0);
    unbindAnimationFrame(this, mWindowPane);
    clearAnimationFrameRef(this, 0);

    mIsShown = false;
    mIsAnimating = false;
}

// @addr 0x8050a144
void MessageBox::configureForScene() {
    u32 messageId = 0;
    s32 sceneId = getCurrentSceneId();

    // Map scene to appropriate message ID
    switch (sceneId) {
    case 0x55: messageId = 0x07F1; break;  // Title
    case 0x5B: messageId = 0x07F2; break;  // Character select
    case 0x7F: messageId = 0x0FA3; break;  // Menu character
    case 0x85: messageId = 0x13BA; break;  // Ghost list
    case 0x87: messageId = 0x19CD; break;  // Data management
    case 0xA5:
    case 0xA3: messageId = 0x13BA; break;  // WiFi scenes
    default: break;
    }

    LayoutLoader::setTextBinding((void*)((u8*)this + 0x2A4), messageId, 0);
    mTransitionState = 2;

    if (mInitFlag == 0) {
        LayoutLoader::clearTextBinding((void*)((u8*)this + 0x7E0), 0);
    }
}

void MessageBox::onConfirm() {
    if (!mIsShown || mIsAnimating) return;

    if (mConfig.showOkButton || mConfig.showYesButton) {
        mResult = mConfig.showYesButton ? MSGBOX_RESULT_YES : MSGBOX_RESULT_OK;
    } else {
        // Single-button dismiss
        mResult = MSGBOX_RESULT_OK;
    }

    hide();
    if (mCallback) {
        mCallback(mResult, mUserData);
    }
}

void MessageBox::onCancel() {
    if (!mIsShown || mIsAnimating) return;

    if (mConfig.showCancelButton || mConfig.showNoButton) {
        mResult = mConfig.showNoButton ? MSGBOX_RESULT_NO : MSGBOX_RESULT_CANCEL;
        hide();
        if (mCallback) {
            mCallback(mResult, mUserData);
        }
    }
}

void MessageBox::onUpdate(f32 deltaTime) {
    if (!mIsShown) return;

    if (mIsAnimating) {
        mAnimTimer += deltaTime;
        // Check if animation complete
        if (mAnimTimer >= getAnimDuration(mWindowPane)) {
            if (mTransitionState == 2) {
                onShowAnimationComplete();
            } else {
                onHideAnimationComplete();
            }
            mIsAnimating = false;
        }
        return;
    }

    // Check timeout
    if (mTimeoutFrames > 0) {
        mElapsedFrames++;
        if (mElapsedFrames >= mTimeoutFrames) {
            onTimeout();
        }
    }
}

void MessageBox::setOkText(u32 messageId) {
    mConfig.showOkButton = 1;
    mConfig.messageId = messageId;
}

void MessageBox::setCancelText(u32 messageId) {
    mConfig.showCancelButton = 1;
    mConfig.secondaryMessageId = messageId;
}

void MessageBox::setYesText(u32 messageId) {
    mConfig.showYesButton = 1;
    mConfig.messageId = messageId;
}

void MessageBox::setNoText(u32 messageId) {
    mConfig.showNoButton = 1;
    mConfig.secondaryMessageId = messageId;
}

void MessageBox::startShowAnimation() {
    mIsAnimating = true;
    mAnimTimer = 0.0f;
    mTransitionState = 2;
}

void MessageBox::startHideAnimation() {
    mIsAnimating = true;
    mAnimTimer = 0.0f;
    mTransitionState = 0;
}

void MessageBox::onShowAnimationComplete() {
    // Message box is fully visible
}

void MessageBox::onHideAnimationComplete() {
    mIsShown = false;
}

void MessageBox::onTimeout() {
    mResult = MSGBOX_RESULT_TIMEOUT;
    hide();
    if (mCallback) {
        mCallback(mResult, mUserData);
    }
}

} // namespace UI