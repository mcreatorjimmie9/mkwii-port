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

class LayoutLoader; // friend declaration
class Layout {
    friend class LayoutLoader;
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
    PaneWrapper* getRootPane() const { return reinterpret_cast<PaneWrapper*>(mPaneTree); }
    void attachChild(PaneWrapper* child, LayoutGroup group);
    void detachChild(PaneWrapper* child);
    void setRootPane(PaneWrapper* root);

    // Layout data parsing
    void parse(const void* data, u32 size);

    // Layout queries
    u32 getPaneCount() const { return mGroupCount; }
    u32 getAnimationCount() const { return 0; }
    void animate(f32 frame);
    void getBoundingBox(f32& x, f32& y, f32& w, f32& h) const;
    void setAlpha(u8 alpha);
    void setVisible(bool visible);

    // Animation operations
    void bindAnimation(const char* animName, u32 frame);
    void unbindAnimation(const char* animName);
    void updateAnimations(f32 deltaTime);

    // Extended operations
    // @addr 0x8050bdc0
    PaneWrapper* findPaneByTag(u32 tag);
    // @addr 0x8050be00
    void setAnimSpeed(f32 speed);
    // @addr 0x8050be40
    f32 getAnimFrame(const char* animName) const;
    // @addr 0x8050be80
    bool isAnimPlaying(const char* animName) const;
    // @addr 0x8050bec0
    void stopAllAnimations();
    // @addr 0x8050bf00
    void setTag(u32 tag);
    // @addr 0x8050bf20
    u32 getTag() const;
    // @addr 0x8050bf40
    u32 calcMemoryUsage() const;
    // @addr 0x8050bf80
    u32 getNameHash() const;
    // @addr 0x8050bd40
    void attachToScene();
    // @addr 0x8050bd80
    void detachFromScene();
    // @addr 0x8050bfc0
    u32 countPanesOfType(u32 paneType) const;
    // @addr 0x8050c000
    u8 getAlpha() const;
    // @addr 0x8050c020
    bool isVisible() const;
    // @addr 0x8050c040
    void setSubTag(u32 subTag);
    // @addr 0x8050c060
    u32 getSubTag() const;
    // @addr 0x8050c080
    u32 getResourceHolder() const;
    // @addr 0x8050c0a0
    void setResourceHolder(u32 holder);
    // @addr 0x8050c0c0
    bool isInitialized() const;
    // @addr 0x8050c0e0
    void setFlags(u8 flags);
    // @addr 0x8050c100
    u8 getFlags() const;
    // @addr 0x8050c120
    void setTransitionId(u32 id);
    // @addr 0x8050c140
    u32 getTransitionId() const;
    // @addr 0x8050c160
    void setCancelFlag(u32 flag);
    // @addr 0x8050c180
    u32 getCancelFlag() const;
    // @addr 0x8050c1a0
    u32 getGroupCount() const;

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
    u32 mSubTag;               // sub-tag for display info
    u32 mTagDefault;           // default tag value
    u32 mSubPane;              // sub-pane reference
    u32 mGroupChain;           // linked list chain for groups
    u32 mInitFlag;             // initialization flag
    u32 mTransitionId;         // transition message ID
    u32 mCancelFlag;           // cancellation flag
    u8 mFlags;                 // 0x6B5
    u8 mGlobalAlpha;          // global alpha override
    bool mVisible;             // global visibility
    u8 _6B6[2];
    u32 mGroupCount;           // 0x6B8
};

} // namespace UI