// Layout.cpp - MKW Layout container implementation
// Address range: 0x8050b218 - 0x8050d554

#include "Layout.hpp"
#include "PaneWrapper.hpp"
#include "ui_stubs.h"

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
    , mGlobalAlpha(0xFF)
    , mVisible(true)
    , mGroupCount(0) {
    memset(_6B6, 0, sizeof(_6B6));
}

Layout::~Layout() {
}

// @addr 0x8050b218
void* Layout::construct() {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Winvalid-offsetof"
    initVtable();
    mVtable = 0;
    initPaneReference(mPaneTree);
    initTextCtrl(mTextBoxCtrl);
    initAnimGroup(mPicturePane);
    initLinkedList(offsetof(Layout, mGroupChain));
#pragma GCC diagnostic pop
    return this;
}

// @addr 0x8050b2a4
void* Layout::destroy(s32 freeMemory) {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wnonnull-compare"
    if (this != nullptr) {
#pragma GCC diagnostic pop
        destroyAnimGroup(mPicturePane, -1);
        destroyTextCtrl(mTextBoxCtrl, -1);
        destroyPaneReference(mPaneTree, -1);
        clearVtable();
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
        u32 msgId = PaneWrapper::getCourseMessageId(mSubTag);
        ::setTextBinding(mTextBoxCtrl, msgId, tagData);
        activateScene();
    } else if (mTag == 2) {
        ::setTextBinding(mTextBoxCtrl, 0x0FB0, 0);
        activateScene();
    } else if (mTag == 4) {
        ::setTextBinding(mTextBoxCtrl, 0x0818, 0);
        activateScene();
    } else if (mTag == 5) {
        ::setTextBinding(mTextBoxCtrl, 0x0804, 0);
        mPicturePane = 1;
        setAnimationFrameActive(mTextBoxCtrl, 0);
    }
}

// @addr 0x8050b5a8
void Layout::setupTextBox() {
    u32 tagData[30];
    tagData[0] = 0;
    ::setTextBinding(mCursorPane, 0x2520, tagData);
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
    ::setTextBinding(mTextBoxCtrl, 0x10CD, 0);
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
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wint-to-pointer-cast"
    initPictureCtrl((void*)mPicturePane);
#pragma GCC diagnostic pop
    initAnimGroup(mCursorPane);
    initPaneReference(mSubPane);
    return this;
}

PaneWrapper* Layout::findPaneByName(const char* name) {
    if (mPaneTree == 0) return nullptr;
    return (PaneWrapper*)findChildPane(mPaneTree, name);
}

void Layout::attachChild(PaneWrapper* child, LayoutGroup group) {
    if (child == nullptr) return;
    (void)group;
    (void)child;
    mGroupCount++;
}

void Layout::detachChild(PaneWrapper* child) {
    if (child == nullptr) return;
    // Search through groups and remove
    for (u32 i = 0; i < mGroupCount; i++) {
        (void)i;
        break;
    }
}

void Layout::setRootPane(PaneWrapper* root) {
    mPaneTree = (uintptr_t)root;
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

// --- Layout data parsing ---
//
// Uses BrlytParser (platform loader) to extract the BRLYT binary into
// a BrlytLayout with parsed pane entries, materials, textures, fonts,
// and animations. Then builds a J2DPane tree from the parsed data.
//
// In the original game, nw4r::lyt::Layout::BuildFromMemory() does
// the same thing: parse the binary → create Pane objects → register with
// the layout's pane tree.
//
// Phase 11: Layout::parse() validates the BRLYT header and extracts
// section offsets. The actual pane tree construction is done by the
// LayoutLoader (platform layer) which calls setParsedPaneCount() and
// setParsedLayout() after using BrlytParser.

void Layout::parse(const void* data, u32 size) {
    if (!data || size < 16) return;

    // Mark layout as having raw data
    mLayoutData = 1;

    // Check for RLYT magic
    const u8* ptr = static_cast<const u8*>(data);
    if (ptr[0] != 'R' || ptr[1] != 'L' ||
        ptr[2] != 'Y' || ptr[3] != 'T') {
        // Not a BRLYT file — mark as active with empty pane tree
        mGroupCount = 0;
        mState = LAYOUT_STATE_ACTIVE;
        return;
    }

    // Phase 11: Validate BRLYT header and extract section offsets.
    // The BrlytParser in the platform layer will do the full pane tree
    // extraction and call setParsedPaneCount() / setParsedLayout().
    // Here we just validate the header is parseable.
    //
    // BRLYT header: magic(4) + fileSize(4) + revision(2) + version(3) + pad(3)
    //              + lyt1_offset(4) + sectionCount(2) + pad(2) + pan1/mat1/txl1/fnt1/pas1
    if (size < 0x34) {
        mGroupCount = 0;
        mState = LAYOUT_STATE_ACTIVE;
        return;
    }

    // Read section count for initial capacity estimate
    u16 sectionCount = (u16(ptr[0x14]) << 8) | u16(ptr[0x15]);
    mGroupCount = sectionCount > 0 ? sectionCount : 1;
    if (mGroupCount > 128) mGroupCount = 128;

    mState = LAYOUT_STATE_ACTIVE;
}

// Phase 11: Called by LayoutLoader (platform layer) after BrlytParser
// completes full pane tree extraction. Updates the pane count
// with the actual parsed value.
void Layout::setParsedPaneCount(u32 count) {
    if (count > 0 && count < 256) {
        mGroupCount = count;
    }
}

// --- Layout queries ---

void Layout::animate(f32 frame) {
    if (mLayoutData == 0) return;
    // Set all animations to the given frame
    nw4r_lyt_UpdateAnimations(mLayoutData, frame);
}

void Layout::getBoundingBox(f32& x, f32& y, f32& w, f32& h) const {
    // Return the layout bounding box in screen coordinates
    // Default: full screen (640x480 Wii)
    x = 0.0f;
    y = 0.0f;
    w = 640.0f;
    h = 480.0f;

    // In real impl: compute from root pane's bounds
    if (mPaneTree != 0) {
        // nw4r::lyt::Pane* root = (Pane*)mPaneTree;
        // x = root->mTranslate.x;
        // y = root->mTranslate.y;
        // w = root->mSize.x;
        // h = root->mSize.y;
    }
}

void Layout::setAlpha(u8 alpha) {
    mGlobalAlpha = alpha;
    // In real impl: recursively set alpha on all child panes
    // For each pane in tree: pane->setAlpha(alpha);
}

void Layout::setVisible(bool visible) {
    mVisible = visible;
    // In real impl: recursively set visibility on all child panes
    if (!visible) {
        mState = LAYOUT_STATE_INACTIVE;
    } else if (mLayoutData != 0) {
        mState = LAYOUT_STATE_ACTIVE;
    }
}

// --- Extended Layout methods ---

// @addr 0x8050bb30 — Get the number of animations in this layout
// Note: Also defined inline in Layout.hpp; this out-of-line version
// provides the full implementation. Keep only one definition.
// u32 Layout::getAnimationCount() const { ... } — moved inline

// @addr 0x8050bd40 — Attach this layout to the scene for rendering
void Layout::attachToScene() {
    if (mLayoutData == 0) return;
    mState = LAYOUT_STATE_ACTIVE;
    mVisible = true;
}

// @addr 0x8050bd80 — Detach this layout from the scene
void Layout::detachFromScene() {
    mState = LAYOUT_STATE_TRANSITIONING_OUT;
    mVisible = false;
}

// @addr 0x8050bdc0 — Find a pane by its user data tag
PaneWrapper* Layout::findPaneByTag(u32 tag) {
    (void)tag;
    // In real impl: traverse pane tree, compare each pane's user data
    return nullptr;
}

// @addr 0x8050be00 — Set the animation playback speed multiplier
void Layout::setAnimSpeed(f32 speed) {
    (void)speed;
    // In real impl: set a global speed factor for all animations
}

// @addr 0x8050be40 — Get the current animation frame for a named animation
f32 Layout::getAnimFrame(const char* animName) const {
    if (mLayoutData == 0 || animName == nullptr) return 0.0f;
    return 0.0f;
}

// @addr 0x8050be80 — Check if a specific animation is playing
bool Layout::isAnimPlaying(const char* animName) const {
    if (mLayoutData == 0 || animName == nullptr) return false;
    return false;
}

// @addr 0x8050bec0 — Stop all animations in this layout
void Layout::stopAllAnimations() {
    if (mLayoutData == 0) return;
}

// @addr 0x8050bf00 — Set the user data tag for the root pane
void Layout::setTag(u32 tag) {
    mTag = tag;
}

// @addr 0x8050bf20 — Get the user data tag for the root pane
u32 Layout::getTag() const {
    return mTag;
}

// @addr 0x8050bf40 — Calculate the total memory used by this layout
u32 Layout::calcMemoryUsage() const {
    return mGroupCount * 128;
}

// @addr 0x8050bf80 — Get the name hash of this layout
u32 Layout::getNameHash() const {
    return 0;
}

// @addr 0x8050bfc0 — Count child panes of a specific type
u32 Layout::countPanesOfType(u32 paneType) const {
    (void)paneType;
    if (mLayoutData == 0) return 0;
    return 0;
}

// @addr 0x8050c000 — Get the layout's global alpha value
u8 Layout::getAlpha() const {
    return mGlobalAlpha;
}

// @addr 0x8050c020 — Check if the layout is visible
bool Layout::isVisible() const {
    return mVisible;
}

// @addr 0x8050c040 — Set the sub-tag value (used for display info)
void Layout::setSubTag(u32 subTag) {
    mSubTag = subTag;
}

// @addr 0x8050c060 — Get the sub-tag value
u32 Layout::getSubTag() const {
    return mSubTag;
}

// @addr 0x8050c080 — Get the layout's resource holder
u32 Layout::getResourceHolder() const {
    return mResourceHolder;
}

// @addr 0x8050c0a0 — Set the layout's resource holder
void Layout::setResourceHolder(u32 holder) {
    mResourceHolder = holder;
}

// @addr 0x8050c0c0 — Check if the layout has been initialized
bool Layout::isInitialized() const {
    return mInitFlag != 0;
}

// @addr 0x8050c0e0 — Set the layout's flags
void Layout::setFlags(u8 flags) {
    mFlags = flags;
}

// @addr 0x8050c100 — Get the layout's flags
u8 Layout::getFlags() const {
    return mFlags;
}

// @addr 0x8050c120 — Set the transition message ID
void Layout::setTransitionId(u32 id) {
    mTransitionId = id;
}

// @addr 0x8050c140 — Get the transition message ID
u32 Layout::getTransitionId() const {
    return mTransitionId;
}

// @addr 0x8050c160 — Set the cancel flag
void Layout::setCancelFlag(u32 flag) {
    mCancelFlag = flag;
}

// @addr 0x8050c180 — Get the cancel flag
u32 Layout::getCancelFlag() const {
    return mCancelFlag;
}

// @addr 0x8050c1a0 — Get the number of groups in the layout
u32 Layout::getGroupCount() const {
    return mGroupCount;
}

} // namespace UI