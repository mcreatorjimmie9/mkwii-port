// MenuPage.cpp - Base menu page implementation
// Address range: 0x8050dca4 - 0x8060a194

#include "MenuPage.hpp"
#include "Layout.hpp"
#include "LayoutLoader.hpp"

namespace UI {

MenuPage::MenuPage()
    : mVtable(0)
    , mPageId(0)
    , mPrevPageId(-1)
    , mState(PAGE_STATE_UNINITIALIZED)
    , mTransition(TRANSITION_NONE)
    , mInitFlag(0)
    , _15(0)
    , mTransitionParam(0)
    , mLayout(nullptr)
    , mLayoutCtrl(0)
    , mWindowPane(0)
    , mTextGroup0(0)
    , mTextGroup1(0)
    , mTextGroup2(0)
    , mAnimGroup(0)
    , mChildLayout(0)
    , mSubPageLayout(0)
    , mOverlayLayout(0)
    , mTransitionId(-1)
    , mSelectedIndex(0)
    , mNavigationTarget(0)
    , mNavParam(0)
    , mIsVisible(0)
    , _FAF(0)
    , mCursorX(0)
    , mCursorY(0)
    , mCursorAnimating(0)
    , mCursorLocked(0)
    , _FBA(0) {
}

MenuPage::~MenuPage() {
}

// @addr 0x8050dca4
void MenuPage::onLoad() {
    // Initialize the page layout and child panes
    // This is the main setup function called when a page is first created

    // Initialize the base layout with window pane
    initVtable();
    mVtable = 0;
    initPaneReference(mWindowPane);
    initTextCtrl(mTextGroup0);
    initTextCtrl(mTextGroup1);
    initTextCtrl(mTextGroup2);
    initAnimGroup(mAnimGroup);
    initPaneReference(mChildLayout);
    initAnimGroup(mSubPageLayout);
    initPaneReference(mOverlayLayout);

    mInitFlag = 1;
    mState = PAGE_STATE_ACTIVE;
}

// @addr 0x8050d284
void MenuPage::onInit() {
    Page* page = getActivePageFromGroup(0x244);
    if (page == nullptr || !isPageInList(page)) {
        return;
    }

    // Set up initial text visibility based on async load flag
    if (page->getAsyncLoadFlag() == 0) {
        setAnimFrameCount(mTextGroup0, 4000, 0);
    } else {
        setAnimFrameCount(mTextGroup0, 0x0FA1, 0);
    }

    // Initialize sub-page layout if not yet initialized
    if (mInitFlag == 0) {
        clearTextBinding(mTextGroup1, 0);
        setAnimationFrame(mSubPageLayout, 0x10DA, 0);
    }

    mTransitionId = -1;
}

// @addr 0x8050cfac
void MenuPage::setupLayoutGroups() {
    u32 isMultiplayer = 0;
    s32 sceneId = getCurrentSceneId();

    // Determine if in multiplayer mode (channel select range)
    if (sceneId > 0x5A && sceneId < 0x5E) {
        isMultiplayer = 1;
    }

    // Configure window pane (group index 5)
    stopAnimation(mWindowPane, 1, isMultiplayer);
    unbindAnimationFrame(this, mWindowPane);
    setActiveGroup(mWindowPane, 2);

    // Group 0: Primary text content
    attachToGroup(this, 0, mTextGroup0, 0);
    initPictureGroup(mTextGroup0);
    setTextBounds(mTextGroup0, 0, 0xA7, 0xAE, 0xC1, 1, 0, 0);
    bindAnimationFrame(mTextGroup0, this + 0x44, 0);
    bindPositionRef(mTextGroup0, this + 0x6C);

    // Set player name in text group 0
    u32 playerNameTag[13];
    initPlayerNameTag(playerNameTag);
    setTextBinding(mTextGroup0, 0x0D1, 0x106A, playerNameTag);

    // Group 1: Secondary text content
    attachToGroup(this, 1, mTextGroup1, 0);
    setTextBounds(mTextGroup1, 0xD4, 0xDB, 0xEE, 1, 0, 0);
    bindAnimationFrame(mTextGroup1, this + 0x44, 0);
    bindPositionRef(mTextGroup1, this + 0x6C);

    // Set secondary player name
    u32 playerTag[13];
    initPlayerNameTag(playerTag);
    setTextBinding(mTextGroup1, 0x0FB, 0x106B, playerTag);

    // Group 2: Tertiary content
    attachToGroup(this, 2, mTextGroup2, 0);
    setTextBounds(mTextGroup2, 0xFE, 0x105, 0x10A, 1, 0, 1);
    bindAnimationFrame(mTextGroup2, this + 0x58, 0);
    bindPositionRef(mTextGroup2, this + 0x6C);

    // Group 3: Picture/icon content
    attachToGroup(this, 3, mSubPageLayout, 0);
    initPictureGroup(mSubPageLayout);

    // Configure window to track layout bounds
    bindWindowToGroup(mWindowPane, 1, this + 0x80, 0, 0);

    // Hide text groups initially
    hideTextGroup(mTextGroup0);
    setAnimationFrame(mSubPageLayout, 0x10DA, 0);
}

// @addr 0x8050d39c
void MenuPage::onTransitionComplete(PageState state, void* param) {
    Page* page = getActivePageFromGroup(0x244);
    if (page == nullptr || !isPageInList(page)) {
        return;
    }

    s32 transitionResult = ((s32*)param)[0x240 / 4];
    if (transitionResult == 1) {
        page->setReplayMode(0);
    } else if (transitionResult == 2) {
        page->setReplayMode(1);
    }

    mTransitionId = 0x8F;
    resolveTransitionParam(param);
    setLayoutReady(this, 0);
}

// @addr 0x8050d4a4
void MenuPage::requestTransition(u32 nextPage, u32 param) {
    mTransitionId = 0x8B;
    resolveTransitionParam(param);
    setLayoutReady(this, 1);
}

// @addr 0x8060a194
void MenuPage::setNavigationTarget(MenuPage* page, u16 param) {
    if (mInitFlag == 0) {
        s16 pageType = page->getLayoutType();
        initNavigationEntry(mNavigationList, page, pageType);

        // Find matching page type in lookup table
        for (s32 i = 0; i < 12; i++) {
            if (pageType == sPageTypeTable[i]) {
                mNavigationTarget = sPageIdTable[i];
                break;
            }
        }

        // Remap certain page types based on context
        if (mNavigationTarget == 0x222) {
            s32 mode = getSystemMode();
            if (mode == 0x10) {
                mNavigationTarget = 0x362; // Single player variant
            } else if (mode == 0x17) {
                mNavigationTarget = 0x381; // Multiplayer variant
            }
        }

        mNavParam = param;
    }
}

void MenuPage::onActivate() {
    mState = PAGE_STATE_ACTIVE;
    mIsVisible = 1;
}

void MenuPage::onDeactivate() {
    mState = PAGE_STATE_EXITING;
}

void MenuPage::onUpdate(f32 dt) {
    // Base update - derived pages override
}

void MenuPage::onDraw() {
    // Base draw - derived pages override
}

void MenuPage::onDestroy() {
    mState = PAGE_STATE_DESTROYED;
    if (mLayout != nullptr) {
        mLayout->setState(LAYOUT_STATE_INACTIVE);
    }
}

void MenuPage::onCursorMove(s32 direction) {
    // Base cursor move - derived pages override
}

void MenuPage::onConfirm() {
    // Base confirm - derived pages override
}

void MenuPage::onCancel() {
    // Base cancel - triggers back navigation
    onBack();
}

void MenuPage::onBack() {
    // Default back behavior: return to previous page
    if (mPrevPageId != -1) {
        requestTransition(mPrevPageId, 0);
    }
}

} // namespace UI