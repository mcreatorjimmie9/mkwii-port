#pragma once
// Layout.hpp - MKW Layout container
// Represents a loaded .brlyt layout with its pane tree and animations
// Address range: 0x8050b218 - 0x8050d554

#include "rk_common.h"

namespace UI {

class PaneWrapper;

enum LayoutState {
    LAYOUT_STATE_INACTIVE = 0,
    LAYOUT_STATE_LOADING = 1,
    LAYOUT_STATE_ACTIVE = 2,
    LAYOUT_STATE_TRANSITIONING_OUT = 3,
    LAYOUT_STATE_TRANSITIONING_IN = 4,
};

enum LayoutGroup {
    LAYOUT_GROUP_MAIN = 0,
    LAYOUT_GROUP_OVERLAY = 1,
    LAYOUT_GROUP_CURSOR = 2,
    LAYOUT_GROUP_WINDOW = 3,
    LAYOUT_GROUP_PICTURE = 4,
};

class Layout {
public:
    Layout();
    virtual ~Layout();

    // @addr 0x8050b218
    void* construct();
    // @addr 0x8050b2a4
    void* destroy(s32 freeMemory);

    // @addr 0x8050b324
    virtual void onLoad();

    // @addr 0x8050b420
    virtual void configureForScene();

    // @addr 0x8050b5a8
    virtual void setupTextBox();

    // @addr 0x8050b8f4
    virtual void onPaneEvent(u32 paneId);

    // @addr 0x8050ba28
    virtual void onInit();

    // @addr 0x8050bbb4
    static void configureWindowBounds();

    // @addr 0x8050bc00
    void resetWindowBounds(u32 param);

    // Layout tree operations
    PaneWrapper* findPaneByName(const char* name);
    void attachChild(PaneWrapper* child, LayoutGroup group);
    void detachChild(PaneWrapper* child);
    void setRootPane(PaneWrapper* root);

    // Animation operations
    void bindAnimation(const char* animName, u32 frame);
    void unbindAnimation(const char* animName);
    void updateAnimations(f32 deltaTime);

    // State queries
    bool isActive() const { return mState == LAYOUT_STATE_ACTIVE; }
    LayoutState getState() const { return mState; }
    void setState(LayoutState state) { mState = state; }

    // @addr 0x8050b940
    void* constructWithTextBox();

protected:
    u32 mVtable;               // 0x000
    u32 mLayoutData;           // 0x004 - nw4r::lyt::Layout pointer
    u32 mResourceHolder;       // 0x008
    u32 mPaneTree;             // 0x00C - root pane reference
    u32 mTextBoxCtrl;          // 0x044 - text box animation controller
    u32 mPicturePane;          // 0x0A0 - picture pane for icons
    u32 mWindowPane;           // 0x190 - window/background pane
    u32 mCursorPane;           // 0x304 - cursor indicator pane
    u32 mMainGroupPane;        // 0x478 - main content group
    LayoutState mState;        // 0x6B0
    u32 mTag;                  // 0x6B4
    u8 mFlags;                 // 0x6B5
    u8 _6B6[2];
    u32 mGroupCount;           // 0x6B8
};

} // namespace UI