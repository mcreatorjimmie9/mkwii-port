// PaneWrapper.cpp - MKW UI pane wrapper implementation
// Address range: 0x8050a144 - 0x8050b420

#include "PaneWrapper.hpp"
#include "LayoutLoader.hpp"
#include "ui_stubs.h"

namespace UI {

PaneWrapper::PaneWrapper()
    : mVtable(0)
    , mAnimationFrameCtrl(0)
    , mGroupId(0)
    , mTag(0)
    , mFlags(PANE_FLAG_VISIBLE)
    , _1D(0)
    , _1E(0)
    , _1F(0) {
    memset(mPaneData, 0, sizeof(mPaneData));
}

PaneWrapper::~PaneWrapper() {
}

// @addr 0x8050a144
void PaneWrapper::init(u32 layoutGroupId) {
    u32 messageId = 0;
    s32 sceneId = getCurrentSceneId();

    // Map scene ID to message ID for layout group
    if (sceneId == 0x55 || sceneId == 0x59) {
        messageId = 0x07F1;
    } else if (sceneId == 0x5B) {
        messageId = 0x07F2;
    } else if (sceneId == 0x7F) {
        messageId = 0x0FA3;
    } else if (sceneId == 0x85 || sceneId == 0xA3) {
        messageId = 0x13BA;
    } else if (sceneId == 0x87) {
        messageId = 0x19CD;
    } else if (sceneId == 0xA1 || sceneId == 0x7D) {
        // No specific message
    } else if (sceneId >= 0xA3 && sceneId <= 0xA5) {
        messageId = 0x13BA;
    }

    LayoutLoader::setTextBinding(this + 0x2A4, messageId, 0);
    mTransitionState = 2;
    if (mInitFlag == 0) {
        LayoutLoader::clearTextBinding(this + 0x7E0, 0);
    }
}

// @addr 0x8050a2b4
void PaneWrapper::onActivate() {
    Page* page = getActivePageFromGroup(0x140);
    if (page == nullptr || !isPageInList(page)) {
        return;
    }

    if (page->getOverlayFlag() == 0) {
        LayoutLoader::setAnimationFrame(this, getGlobalFloat(), 0);
    } else {
        mTransitionState = 2;
    }
}

// @addr 0x8050a678
void* PaneWrapper::construct() {
    initVtable();
    mVtable = 0;
    initAnimationFrame(offsetof(PaneWrapper, mAnimationFrameCtrl));
    initLinkedList(offsetof(PaneWrapper, mGroupChain));
    return this;
}

// @addr 0x8050a6f4
void* PaneWrapper::destroy(s32 shouldFree) {
    if (this != nullptr) {
        clearVtable();
        if (shouldFree > 0) {
            free(this);
        }
    }
    return this;
}

// @addr 0x8050a75c
void PaneWrapper::detachAnimation() {
    stopAnimation(mAnimationFrameCtrl, 0, 0);
    unbindAnimationFrame(this, mAnimationFrameCtrl);
    clearAnimationFrameRef(this, 0);
}

// @addr 0x8050ae20
void PaneWrapper::update(f32 deltaTime) {
    if (mOverlayActive) {
        return;
    }
    if (mState != 4) {
        return;
    }
    if (isDemoMode() && isOnlineMode()) {
        return;
    }

    u64 networkResult = getNetworkStatus();
    s32 networkState = (s32)(networkResult >> 32);

    if (networkState >= 4 && networkState <= 5 || networkState == 0 || networkState == 1) {
        SceneDirector* director = getSceneDirector();
        director->mNetworkState = networkState;
        director->mNetworkSubState = (u32)networkResult;
        onNetworkUpdate(deltaTime, this, 0x78, 0);
    }

    // Check for VS/battle results display
    s32 gameMode = getCurrentGameMode();
    if (isResultsMode(gameMode) && checkReplayData()) {
        LayoutLoader::setAnimationFrame(this, 4000, 0);
        onResultsReady(deltaTime, this, 0x79, 0);
    }
}

// @addr 0x8050b634
u32 PaneWrapper::getCourseMessageId(u16 courseId) {
    // Maps course IDs to message/string IDs for the UI
    if (courseId == 0x4E84) return 0x11F9;
    if (courseId == 0x4E85) return 0x11FA;
    if (courseId >= 0x4E86 && courseId <= 0x4E8E) return 0x11FB;
    if (courseId == 0x4E8E) return 0x11FC;
    if (courseId > 0x4E8F && courseId < 0x4C68) return 0x11FD;
    if (courseId >= 0x59D8 && courseId < 0x5DA0) return 0x11FE;
    if (courseId == 0x7148) return 0x11FF;
    if (courseId == 0x7149) return 0x1200;
    if (courseId >= 0x7918 && courseId < 0x7A30) return 0x1201;
    if (courseId >= 0x80E8 && courseId < 0x8148) return 0x1201;
    if (courseId == 0x7D01) return 0x1203;
    if (courseId == 0x7D02) return 0x1204;
    if (courseId == 0x7D03) return 0x1205;
    if (courseId == 0x7D04) return 0x1206;
    if (courseId >= 0x80E8 && courseId < 0x8148) return 0x1207;
    if (courseId >= 0xC3B4 && courseId < 0xC418) return 0x1208;
    if (courseId >= 0xC418 && courseId < 0xC47C) return 0x1209;
    if (courseId >= 0xC47C && courseId < 0xC4E0) return 0x120A;
    if (courseId >= 0xC4E0 && courseId < 0xC760) return 0x120B;
    if (courseId >= 0xC760 && courseId < 0xC76A) return 0x120D;
    if (courseId >= 0xC760 && courseId < 0xC864) return 0x120C;
    if (courseId >= 0xC864 && courseId < 0xC8C8) return 0x120E;
    if (courseId >= 0xC8C8 && courseId < 0xCBE8) return 0x120F;
    if (courseId >= 0xCBE8 && courseId < 0xCCB0) return 0x1210;
    if (courseId >= 0xCCB0 && courseId < 0xCD14) return 0x1211;
    if (courseId >= 0xCD14 && courseId < 0xCDDC) return 0x1212;
    if (courseId >= 0xCDDC && courseId < 0xD2F0) return 0x1213;
    if (courseId >= 0xD2F0 && courseId < 0xD3D4) return 0x1214;
    if (courseId >= 0x9C40 && courseId < 0xEA60) return 0x1215;
    return 0x11F8;
}

void PaneWrapper::setVisible(bool visible) {
    if (visible) {
        mFlags = (PaneFlag)(mFlags | PANE_FLAG_VISIBLE);
    } else {
        mFlags = (PaneFlag)(mFlags & ~PANE_FLAG_VISIBLE);
    }
}

void PaneWrapper::setEnabled(bool enabled) {
    if (enabled) {
        mFlags = (PaneFlag)(mFlags | PANE_FLAG_ENABLED);
    } else {
        mFlags = (PaneFlag)(mFlags & ~PANE_FLAG_ENABLED);
    }
}

} // namespace UI