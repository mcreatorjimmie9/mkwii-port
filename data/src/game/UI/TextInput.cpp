// TextInput.cpp - Text input dialog implementation
// Address range: 0x8050ee3c - 0x8050f820

#include "TextInput.hpp"
#include "Layout.hpp"
#include "LayoutLoader.hpp"

namespace UI {

TextInput::TextInput()
    : mVtable(0)
    , mLinkedList(0)
    , mLinkedListAlt(0)
    , mAnimGroupPane(0)
    , mPictureGroup(0)
    , mTextCtrl1(0)
    , mTextCtrl2(0)
    , mState(TEXTINPUT_INACTIVE)
    , mMode(TEXTINPUT_MODE_NAME)
    , mConfirmButtonId(0)
    , mBackButtonId(0)
    , mGridPage(0)
    , mCursorCol(0)
    , mCursorRow(0)
    , mTextLength(0)
    , mEnterTimer(0.0f)
    , mExitTimer(0.0f)
    , mBlinkTimer(0.0f)
    , mLayout(nullptr)
    , mWindowPane(0)
    , mMainTextPane(0)
    , mSubTextPane(0)
    , mIsWidePane(0)
    , mConfirmAllowed(0)
    , mCursorAnimTime(0.0f)
    , mCursorConfirmed(0) {
    memset(mGrid, 0, sizeof(mGrid));
    memset(mTextBuffer, 0, sizeof(mTextBuffer));
    memset(_6B1, 0, sizeof(_6B1));
}

TextInput::~TextInput() {
}

// @addr 0x8050f75c
void* TextInput::construct() {
    initVtable();
    mVtable = 0;
    initLinkedListNode(this + 0x11);
    initLinkedListNode(this + 0x16);
    initColorGroup(mAnimGroupPane);
    initPictureGroup(mPictureGroup);
    initTextCtrl(mTextCtrl1);
    initTextCtrl(mTextCtrl2);
    return this;
}

// @addr 0x8050ee3c
void TextInput::onLoad() {
    u32 isWide = 0;
    s32 sceneId = getCurrentSceneId();

    // Determine wide vs narrow layout based on scene
    if (sceneId == 0x68 || sceneId == 0x6C) {
        isWide = 0; // Narrow (single player)
    } else if (sceneId == 0x69 || sceneId == 0x6D) {
        isWide = 1; // Wide (team/multi)
    }

    // Configure window pane
    stopAnimation(mWindowPane, 1, isWide);
    unbindAnimationFrame(this, mWindowPane);
    setActiveGroup(mWindowPane, 2);

    // Group 0: Character grid pane
    attachToGroup(this, 0, mWindowPane, 0);
    u32 gridBounds[12];
    initGridBounds(gridBounds, mWindowPane);
    setBounds(gridBounds, 0x83, 0x8B, 0x9A, 0);
    setFrameRate(gridBounds, -1);

    // Group 1: Main text pane
    attachToGroup(this, 1, mMainTextPane, 0);
    if (sceneId >= 0x68 && sceneId <= 0x69 || sceneId >= 0x6C && sceneId <= 0x6D) {
        setTextBounds(mMainTextPane, 0xCD, 0xD4, 0xE2, 1, 0, 0);
    } else {
        setTextBounds(mMainTextPane, 0xA5, 0xAC, 0xBA, 1, 0, 0);
    }
    bindAnimationFrame(mMainTextPane, this + 0xAD8, 0);

    // Group 2: Sub text pane
    attachToGroup(this, 2, mSubTextPane, 0);
    setTextBounds(mSubTextPane, 0x15E, 0x165, 0x173, 1, 0, 0);
    bindAnimationFrame(mSubTextPane, this + 0xB00, 0);

    // Hide text panes initially
    hideTextGroup(mMainTextPane);
}

// @addr 0x8050f164
void TextInput::onInit() {
    if (mInitFlag != 0) return;

    s32 sceneId = getCurrentSceneId();
    bool isCharacterScene = (sceneId > 0x67 && sceneId < 0x6A) ||
                            (sceneId > 0x6B && sceneId < 0x6E);
    if (!isCharacterScene) return;

    // Set up character grid data
    initCharacterGrid(this + mMainTextPane);

    // Configure window expand/collapse based on grid state
    if (mConfirmAllowed == 0) {
        setActiveGroup(mWindowPane, 1);
    } else {
        setActiveGroup(mWindowPane, 2);
    }

    // Set text for current grid selection
    u32 selectionCount = getPlayerSelectionCount();
    if (selectionCount < 2) {
        clearTextGroup(mWindowPane);
    } else {
        u32 tagData[13];
        initPlayerSelectionTag(tagData);
        setTextBinding(mWindowPane, 0x0407, tagData);
    }
}

// @addr 0x8050f27c
void TextInput::onUpdate(f32 deltaTime) {
    if (mState != TEXTINPUT_ACTIVE) return;

    // Wait for entry animation to complete
    if (deltaTime < mCursorAnimTime) return;

    // Don't process if already confirmed
    if (mCursorConfirmed) return;

    // Check if player has a valid character selected
    if (!isCurrentPlayerCharacterValid()) {
        onConfirm();
        mNavigationTarget = 0x48;
        return;
    }

    // Map scene to transition target
    u32 targetId = -1;
    s32 sceneId = getCurrentSceneId();
    switch (sceneId) {
    case 0x68: targetId = 0x58; break;
    case 0x69: targetId = 0x5E; break;
    case 0x6C: targetId = 0x59; break;
    case 0x6D: targetId = 0x5F; break;
    }

    if (targetId != -1) {
        onTransition(deltaTime, this, targetId, 0);
    }

    // Reset cursor in the linked page
    Page* linkedPage = getActivePageFromGroup(0x11C);
    if (linkedPage != nullptr && isPageInList(linkedPage)) {
        linkedPage->mCursorIndex = 0;
        resetPageCursor(linkedPage + 0x15);
    }
}

// @addr 0x8050f41c
void TextInput::handleInput(u32 input) {
    if (!isCurrentPlayerCharacterValid()) {
        resolveInput(input);
        onConfirm();
        mNavigationTarget = 0x48;
    } else {
        mNavigationTarget = -1;
        u32 targetId = -1;
        s32 sceneId = getCurrentSceneId();
        switch (sceneId) {
        case 0x68: targetId = 0x58; break;
        case 0x69: targetId = 0x5E; break;
        case 0x6C: targetId = 0x59; break;
        case 0x6D: targetId = 0x5F; break;
        }
        resolveInput(input);
        onTransition(this, targetId, 0);
    }
    mCursorConfirmed = 1;

    // Reset cursor in linked page
    Page* linkedPage = getActivePageFromGroup(0x11C);
    if (linkedPage != nullptr && isPageInList(linkedPage)) {
        linkedPage->mCursorIndex = 0;
        resetPageCursor(linkedPage + 0x15);
    }
}

// @addr 0x8050f598
void TextInput::setConfirmEnabled(bool enabled) {
    Page* page = getActivePageFromGroup(0x124);
    if (page != nullptr && isPageInList(page)) {
        page->setPageVisible(true);
    }
    mNavigationTarget = 0x47;
    resolveInput(0);
    setLayoutReady(this, 0);
    mConfirmAllowed = 1;
}

// @addr 0x8050f678
void TextInput::setBackEnabled(bool enabled) {
    Page* page = getActivePageFromGroup(0x124);
    if (page != nullptr && isPageInList(page)) {
        page->setPageVisible(false);
    }
    mNavigationTarget = 0x47;
    resolveInput(0);
    setLayoutReady(this, 0);
    mConfirmAllowed = 1;
}

// @addr 0x8050fac0
void TextInput::configure() {
    mNavigationTarget = -1;
    mCursorAnimTime = 0.0f;
    mConfirmAllowed = 0;

    // Set initial text based on mode
    if (mState == TEXTINPUT_INACTIVE) {
        setTextBinding(mWindowPane, 0x044D, 0);
        setTextBinding(mMainTextPane, 0x03EA, 0);
        setTextBinding(mSubTextPane, 0x03E9, 0);
    } else if (mState == TEXTINPUT_ACTIVE) {
        setTextBinding(mWindowPane, 0x0457, 0);
        setTextBinding(mMainTextPane, 0x0454, 0);
        setTextBinding(mSubTextPane, 0x0455, 0);
    }

    hideTextGroup(mSubTextPane);
}

void TextInput::setText(const char* text) {
    u16 len = 0;
    while (text[len] != '\0' && len < MAX_TEXT_LENGTH) {
        mTextBuffer[len] = text[len];
        len++;
    }
    mTextBuffer[len] = '\0';
    mTextLength = len;
}

void TextInput::moveCursor(s32 dx, s32 dy) {
    mCursorCol += dx;
    mCursorRow += dy;

    // Clamp to grid bounds
    if (mCursorCol < 0) mCursorCol = GRID_COLS - 1;
    if (mCursorCol >= GRID_COLS) mCursorCol = 0;
    if (mCursorRow < 0) mCursorRow = GRID_ROWS - 1;
    if (mCursorRow >= GRID_ROWS) mCursorRow = 0;

    // Update cursor blink
    mBlinkTimer = 0.0f;
}

} // namespace UI