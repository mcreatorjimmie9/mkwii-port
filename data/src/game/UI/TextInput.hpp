#pragma once
// TextInput.hpp - Text input dialog for name entry
// Used in license settings and ghost data naming
// Address range: 0x8050ee3c - 0x8050f820

#include "rk_common.h"

namespace UI {

class Layout;

enum TextInputState {
    TEXTINPUT_INACTIVE = 0,
    TEXTINPUT_ENTERING = 1,
    TEXTINPUT_ACTIVE = 2,
    TEXTINPUT_CONFIRMING = 3,
    TEXTINPUT_EXITING = 4,
};

enum TextInputMode {
    TEXTINPUT_MODE_NAME = 0,
    TEXTINPUT_MODE_GHOST = 1,
};

// Character grid for text input
struct CharGridEntry {
    u16 character;       // Unicode character
    u16 page;            // Which page of the grid
};

class TextInput {
public:
    TextInput();
    virtual ~TextInput();

    // @addr 0x8050ee3c
    virtual void onLoad();
    // @addr 0x8050f164
    virtual void onInit();
    // @addr 0x8050f27c
    virtual void onUpdate(f32 deltaTime);

    // @addr 0x8050f41c
    void handleInput(u32 input);

    // Confirmation
    virtual void onConfirm() {}

    // @addr 0x8050f598
    void setConfirmEnabled(bool enabled);
    // @addr 0x8050f678
    void setBackEnabled(bool enabled);

    // @addr 0x8050fac0
    void configure();

    // Text buffer access
    void setText(const char* text);
    const char* getText() const { return mTextBuffer; }
    u16 getTextLength() const { return mTextLength; }

    // Cursor position
    void moveCursor(s32 dx, s32 dy);
    s32 getCursorX() const { return mCursorCol; }
    s32 getCursorY() const { return mCursorRow; }

    // @addr 0x8050f75c
    void* construct();

    // State
    TextInputState getState() const { return mState; }
    TextInputMode getMode() const { return mMode; }
    void setMode(TextInputMode mode) { mMode = mode; }

    static const u16 MAX_TEXT_LENGTH = 10;

private:
    static const u32 GRID_COLS = 12;
    static const u32 GRID_ROWS = 8;

    u32 mVtable;               // 0x000
    u32 mLinkedList;           // 0x004
    u32 mLinkedListAlt;        // 0x008
    u32 mAnimGroupPane;        // 0x01C
    u32 mPictureGroup;         // 0x0A5
    u32 mTextCtrl1;            // 0x102
    u32 mTextCtrl2;            // 0x197

    TextInputState mState;     // 0x20C
    TextInputMode mMode;       // 0x210
    u32 mConfirmButtonId;      // 0x214
    u32 mBackButtonId;         // 0x218

    // Character grid
    CharGridEntry mGrid[GRID_COLS * GRID_ROWS];
    s32 mGridPage;
    s32 mCursorCol;
    s32 mCursorRow;

    // Text buffer
    char mTextBuffer[MAX_TEXT_LENGTH + 1];
    u16 mTextLength;

    // Timing
    f32 mEnterTimer;
    f32 mExitTimer;
    f32 mBlinkTimer;

    // Layout references
    Layout* mLayout;
    u32 mWindowPane;           // 0x294
    u32 mMainTextPane;         // 0x408
    u32 mSubTextPane;          // 0x65C

    // Flags
    u32 mIsWidePane;           // 0x694
    u8 mConfirmAllowed;        // 0x6B0
    u8 _6B1[3];

    // Cursor animation
    f32 mCursorAnimTime;       // 0x2C7
    u8 mCursorConfirmed;       // 0x2C6
    u8 mInitFlag;              // initialization flag
    u32 mNavigationTarget;     // navigation target ID
    u8 _pad[1];
};

} // namespace UI