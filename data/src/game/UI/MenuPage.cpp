// MenuPage.cpp - Base menu page implementation
// Address range: 0x8050dca4 - 0x8060a194

#include "MenuPage.hpp"
#include "Layout.hpp"
#include "LayoutLoader.hpp"
#include "ui_stubs.h"
#include <KPadController.hpp>
#include <string.h>

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
    , _FBA(0)
    , mItemCount(0)
    , mSelectionAnimProgress(0.0f)
    , mSelectionTargetY(0.0f) {
    memset(mItems, 0, sizeof(mItems));
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
    setTextBounds(mTextGroup0, 0, 0xA7, 0xAE);
    bindAnimationFrame(mTextGroup0, (void*)((u8*)this + 0x44), 0);
    bindPositionRef(mTextGroup0, (void*)((u8*)this + 0x6C));

    // Set player name in text group 0
    u32 playerNameTag[13];
    initPlayerNameTag(playerNameTag);
    ::setTextBinding(mTextGroup0, 0x0D1, playerNameTag);

    // Group 1: Secondary text content
    attachToGroup(this, 1, mTextGroup1, 0);
    setTextBounds(mTextGroup1, 0xD4, 0xDB, 0xEE);
    bindAnimationFrame(mTextGroup1, (void*)((u8*)this + 0x44), 0);
    bindPositionRef(mTextGroup1, (void*)((u8*)this + 0x6C));

    // Set secondary player name
    u32 playerTag[13];
    initPlayerNameTag(playerTag);
    ::setTextBinding(mTextGroup1, 0x0FB, playerTag);

    // Group 2: Tertiary content
    attachToGroup(this, 2, mTextGroup2, 0);
    setTextBounds(mTextGroup2, 0xFE, 0x105, 0x10A);
    bindAnimationFrame(mTextGroup2, (void*)((u8*)this + 0x58), 0);
    bindPositionRef(mTextGroup2, (void*)((u8*)this + 0x6C));

    // Group 3: Picture/icon content
    attachToGroup(this, 3, mSubPageLayout, 0);
    initPictureGroup(mSubPageLayout);

    // Configure window to track layout bounds
    bindWindowToGroup(mWindowPane, 1, (void*)((u8*)this + 0x80), 0, 0);

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
    resolveTransitionParam((void*)&nextPage);
    setLayoutReady(this, 1);
}

// @addr 0x8060a194
void MenuPage::setNavigationTarget(MenuPage* page, u16 param) {
    if (mInitFlag == 0) {
        s16 pageType = page->getLayoutType();
        initNavigationEntry((uintptr_t)mNavigationList, (void*)page, pageType);

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

// --- Menu item management ---

void MenuPage::addItem(u16 itemId, const char* text, u16 xPos, u16 yPos) {
    if (mItemCount >= MAX_MENU_ITEMS) return;

    MenuItem& item = mItems[mItemCount];
    item.itemId = itemId;
    item.xPos = xPos;
    item.yPos = yPos;
    item.textMsgId = 0; // Will be set by text binding
    item.active = true;
    mItemCount++;
}

void MenuPage::removeItem(u16 itemId) {
    for (u32 i = 0; i < mItemCount; i++) {
        if (mItems[i].itemId == itemId) {
            // Shift remaining items down
            for (u32 j = i; j < mItemCount - 1; j++) {
                mItems[j] = mItems[j + 1];
            }
            mItems[mItemCount - 1].active = false;
            mItemCount--;
            return;
        }
    }
}

void MenuPage::selectItem(u16 index) {
    if (index >= mItemCount) return;
    mSelectedIndex = (s32)index;
    mSelectionAnimProgress = 0.0f;
    mSelectionTargetY = (f32)mItems[index].yPos;
    mCursorY = mItems[index].yPos;
}

s32 MenuPage::getSelectedItem() const {
    return mSelectedIndex;
}

void MenuPage::handleInput(const System::KPadRaceInputState& input) {
    if (!isActive() || mCursorLocked) return;

    // Check stick Y for up/down navigation
    f32 stickY = input.stickY;

    // Digital button checks
    if (input.buttons & PAD_BUTTON_UP || stickY > 0.5f) {
        if (mSelectedIndex > 0) {
            selectItem((u16)(mSelectedIndex - 1));
            onCursorMove(-1);
        }
    } else if (input.buttons & PAD_BUTTON_DOWN || stickY < -0.5f) {
        if (mSelectedIndex < (s32)(mItemCount - 1)) {
            selectItem((u16)(mSelectedIndex + 1));
            onCursorMove(1);
        }
    }

    // Confirm (A button)
    if (input.buttons & PAD_BUTTON_A) {
        if (mSelectedIndex >= 0 && mSelectedIndex < (s32)mItemCount) {
            onConfirm();
        }
    }

    // Cancel (B button)
    if (input.buttons & PAD_BUTTON_B) {
        onCancel();
    }
}

void MenuPage::animateSelection(f32 dt) {
    if (mSelectionAnimProgress >= 1.0f) return;

    mSelectionAnimProgress += dt * 8.0f; // Animation speed
    if (mSelectionAnimProgress > 1.0f) mSelectionAnimProgress = 1.0f;

    // Smoothstep easing
    f32 t = mSelectionAnimProgress;
    t = t * t * (3.0f - 2.0f * t);

    // Interpolate cursor Y position
    f32 currentY = (f32)mCursorY;
    currentY += (mSelectionTargetY - currentY) * t;
    mCursorY = (u32)currentY;
}

void MenuPage::scrollToItem(u16 index) {
    if (index >= mItemCount) return;
    mSelectionTargetY = (f32)mItems[index].yPos;
    mSelectionAnimProgress = 0.0f;
    selectItem(index);
}

u32 MenuPage::getItemCount() const {
    return mItemCount;
}

// @addr 0x8060a1C0
MenuPage* MenuPage::getSubPage() const {
    // In the real game, sub-pages are child layouts managed by the
    // layout system. The sub-page layout reference (mSubPageLayout)
    // is used to look up the corresponding MenuPage object.
    // The sub-page is typically an embedded child layout that appears
    // as an overlay (e.g., character detail panel within character select).
    //
    // The lookup walks the active page list via the PageManager
    // and matches the layout group reference stored in mSubPageLayout.
    // If no sub-page is attached, returns nullptr.
    if (mSubPageLayout == 0) {
        return nullptr;
    }
    // Stub: return nullptr since we don't have the PageManager lookup.
    return nullptr;
}

// @addr 0x8060a1E0
bool MenuPage::hasSubPage() const {
    // A sub-page exists if the sub-page layout reference is non-zero
    // and the layout has been initialized.
    return mSubPageLayout != 0 && mInitFlag != 0;
}

// @addr 0x8060a200
void MenuPage::clearItems() {
    // Clear all menu items without destroying the page
    for (u32 i = 0; i < mItemCount; i++) {
        mItems[i].active = false;
        mItems[i].itemId = 0;
        mItems[i].xPos = 0;
        mItems[i].yPos = 0;
        mItems[i].textMsgId = 0;
    }
    mItemCount = 0;
    mSelectedIndex = 0;
    mSelectionAnimProgress = 0.0f;
    mSelectionTargetY = 0.0f;
}

// @addr 0x8060a220
void MenuPage::setCursorVisible(bool visible) {
    mIsVisible = visible ? 1 : 0;
    if (!visible) {
        mCursorAnimating = 0;
    }
}

// @addr 0x8060a240
bool MenuPage::isCursorVisible() const {
    return mIsVisible != 0;
}

// @addr 0x8060a260
void MenuPage::lockCursor(bool locked) {
    mCursorLocked = locked ? 1 : 0;
}

// @addr 0x8060a280
void MenuPage::setNavigationTargetDirect(u32 pageId, u16 param) {
    mNavigationTarget = pageId;
    mNavParam = param;
}

// @addr 0x8060a2A0
u32 MenuPage::getNavigationTarget() const {
    return mNavigationTarget;
}

// @addr 0x8060a2C0
u16 MenuPage::getNavParam() const {
    return mNavParam;
}

// @addr 0x8060a2E0
void MenuPage::setTransitionId(s32 id) {
    mTransitionId = id;
}

// @addr 0x8060a300
s32 MenuPage::getTransitionId() const {
    return mTransitionId;
}

// @addr 0x8060a320
void MenuPage::setItemText(u16 itemId, u32 textMsgId) {
    for (u32 i = 0; i < mItemCount; i++) {
        if (mItems[i].itemId == itemId) {
            mItems[i].textMsgId = textMsgId;
            return;
        }
    }
}

// @addr 0x8060a340
const MenuPage::MenuItem* MenuPage::getItem(u16 index) const {
    if (index >= mItemCount) return nullptr;
    return &mItems[index];
}

// @addr 0x8060a360
void MenuPage::setPrevPageId(u32 prevPageId) {
    mPrevPageId = prevPageId;
}

// @addr 0x8060a380
u32 MenuPage::getPrevPageId() const {
    return mPrevPageId;
}

} // namespace UI