// Layout.cpp - MKW Layout container implementation
// Address range: 0x8050b218 - 0x8050d554

#include "Layout.hpp"
#include "PaneWrapper.hpp"

namespace UI {

Layout::Layout()
    : mVtable(0)
    , mLayoutData(0)
    , mResourceHolder(0)
    , mPaneTree(0)
    , mTextBoxCtrl(0)
    , mPicturePane(0)
    , mWindowPane(0)
    , mCursorPane(0)
    , mMainGroupPane(0)
    , mState(LAYOUT_STATE_INACTIVE)
    , mTag(0)
    , mFlags(0)
    , mGroupCount(0) {
    memset(_6B6, 0, sizeof(_6B6));
}

Layout::~Layout() {
}

// @addr 0x8050b218
void* Layout::construct() {
    initVtable();
    mVtable = 0;
    initPaneReference(mPaneTree);
    initTextCtrl(mTextBoxCtrl);
    initAnimGroup(mPicturePane);
    initLinkedList(offsetof(Layout, mGroupChain));
    return this;
}

// @addr 0x8050b2a4
void* Layout::destroy(s32 freeMemory) {
    if (this != nullptr) {
        destroyAnimGroup(mPicturePane, -1);
        destroyTextCtrl(mTextBoxCtrl, -1);
        destroyPaneReference(mPaneTree, -1);
        clearVtable();
        if (freeMemory > 0) {
            freeMemory(this);
        }
    }
    return this;
}

// @addr 0x8050b324
void Layout::onLoad() {
    u32 colorAnimData[12];

    // Configure window/background pane with color animation
    stopAnimation(mTextBoxCtrl, 1, 0);
    unbindAnimationFrame(this, mTextBoxCtrl);
    setupColorAnimation(mTextBoxCtrl, 0, mMainGroupPane, 0);

    // Set up layout state
    setActiveGroup(this, 2);

    // Configure cursor pane bounds
    attachToGroup(this, 0, mCursorPane, 0);
    initColorBounds(colorAnimData, mCursorPane);
    setBounds(colorAnimData, 0x2B, 0x3A, 0x40, 0);
    setAnimFrameRate(colorAnimData, -1);

    // Register update callback
    registerUpdateCallback(this, 5, 0);
}

// @addr 0x8050b420
void Layout::configureForScene() {
    u32 tagData[13];

    mPicturePane = 0;
    s32 sceneId = getCurrentSceneId();

    if (sceneId == 0x79) {
        // Title/awards scene - use specific layout
        activateScene();
        setTextBinding(mTextBoxCtrl, 0x0FB2, 0);
    } else if (sceneId == 0x78 || sceneId == 0x98) {
        // Race result scenes - use stored result data
        SceneDirector* director = getSceneDirector();
        mTag = director->mRaceResultType;
        mSubTag = director->mRaceResultSubType;
        clearResultData(director->mResultData);
    } else {
        // Other scenes - get current display info
        u64 displayInfo = getDisplayInfo();
        mTag = (u32)(displayInfo >> 32);
        mSubTag = (u32)displayInfo;
    }

    if (mTag == 1) {
        // Course select display
        initTagData(tagData);
        tagData[0] = mSubTag;
        u32 msgId = getCourseMessageId(mSubTag);
        setTextBinding(mTextBoxCtrl, msgId, tagData);
        activateScene();
    } else if (mTag == 2) {
        setTextBinding(mTextBoxCtrl, 0x0FB0, 0);
        activateScene();
    } else if (mTag == 4) {
        setTextBinding(mTextBoxCtrl, 0x0818, 0);
        activateScene();
    } else if (mTag == 5) {
        setTextBinding(mTextBoxCtrl, 0x0804, 0);
        mPicturePane = 1;
        setAnimationFrameActive(mTextBoxCtrl, 0);
    }
}

// @addr 0x8050b5a8
void Layout::setupTextBox() {
    u32 tagData[30];
    tagData[0] = 0;
    setTextBinding(mCursorPane, 0x2520, tagData);
}

// @addr 0x8050ba28
void Layout::onInit() {
    // Configure picture pane
    stopAnimation(mTextBoxCtrl, 0, 0);
    unbindAnimationFrame(this, mTextBoxCtrl);
    setActiveGroup(this, 3);

    // Set up main content group (group 0)
    attachToGroup(this, 0, mPaneTree, 0);
    setTextBounds(mPaneTree, 0, 0x0F, 0x1A);

    // Set up text control group (group 1)
    attachToGroup(this, 1, mTextBoxCtrl, 0);
    setTextBounds(mTextBoxCtrl, 0x25, 0x34, 0x42);

    // Set up cursor group (group 2)
    attachToGroup(this, 2, mCursorPane, 0);
    setTextBounds(mCursorPane, 0x55, 0x60, 0x69);

    // Initialize default text message
    mTagDefault = 0;
    setTextBinding(mTextBoxCtrl, 0x10CD, 0);
}

// @addr 0x8050bbb4
void Layout::configureWindowBounds() {
    setWindowAlpha(0xCF, 0);
    setWindowFade(3, 0x1E);
}

// @addr 0x8050bc00
void Layout::resetWindowBounds(u32 param) {
    setAnimationFrameGroup(param, 0x1E, -1);
    setWindowAlpha(0xCF, 0);
    setWindowFade(3, 0);
}

// @addr 0x8050b940
void* Layout::constructWithTextBox() {
    initVtable();
    mVtable = 0;
    initTextCtrl(mPaneTree);
    initPictureCtrl(mPicturePane);
    initAnimGroup(mCursorPane);
    initPaneReference(mSubPane);
    return this;
}

PaneWrapper* Layout::findPaneByName(const char* name) {
    if (mPaneTree == 0) return nullptr;
    return findChildPane(mPaneTree, name);
}

void Layout::attachChild(PaneWrapper* child, LayoutGroup group) {
    if (child == nullptr) return;
    // Group 0: pane tree, Group 1: text, Group 2: cursor, etc.
    u32* groupArray = getGroupArray(group);
    *groupArray = (u32)child;
    mGroupCount++;
}

void Layout::detachChild(PaneWrapper* child) {
    if (child == nullptr) return;
    // Search through groups and remove
    for (u32 i = 0; i < mGroupCount; i++) {
        if (getGroupChild(i) == child) {
            getGroupChild(i) = nullptr;
            break;
        }
    }
}

void Layout::setRootPane(PaneWrapper* root) {
    mPaneTree = (u32)root;
}

void Layout::bindAnimation(const char* animName, u32 frame) {
    // Bind a layout animation by name to a specific frame
    if (mLayoutData == 0) return;
    nw4r_lyt_BindAnimation(mLayoutData, animName, frame);
}

void Layout::unbindAnimation(const char* animName) {
    if (mLayoutData == 0) return;
    nw4r_lyt_UnbindAnimation(mLayoutData, animName);
}

void Layout::updateAnimations(f32 deltaTime) {
    if (mLayoutData == 0) return;
    nw4r_lyt_UpdateAnimations(mLayoutData, deltaTime);
}

} // namespace UI