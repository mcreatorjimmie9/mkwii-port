#pragma once
// PaneWrapper.hpp - MKW UI pane wrapper
// Wraps nw4r::lyt::Pane with MKW-specific extensions
// Address range: 0x8050a144 - 0x8050b420

#include "rk_common.h"

namespace UI {

// Forward declarations
class Layout;
class AnimationController;

enum PaneFlag {
    PANE_FLAG_VISIBLE = 0x01,
    PANE_FLAG_ENABLED = 0x02,
    PANE_FLAG_ANIMATING = 0x04,
};

class PaneWrapper {
public:
    PaneWrapper();
    virtual ~PaneWrapper();

    // @addr 0x8050a144
    virtual void init(u32 layoutGroupId);
    // @addr 0x8050a2b4
    virtual void onActivate();
    // @addr 0x8050a38c
    virtual void onTransitionComplete(s32 transitionState);
    // @addr 0x8050a544
    virtual void setupGroupPane(u32 groupId, u32 animId, u32 tag);

    // @addr 0x8050a678
    void* construct();
    // @addr 0x8050a6f4
    void* destroy(s32 freeMemory);

    // @addr 0x8050a75c
    void detachAnimation();
    // @addr 0x8050a7b8
    void handleOverlayInput();

    // @addr 0x8050ae20
    virtual void update(f32 deltaTime);

    // Pane property accessors
    bool isVisible() const { return (mFlags & PANE_FLAG_VISIBLE) != 0; }
    bool isEnabled() const { return (mFlags & PANE_FLAG_ENABLED) != 0; }
    void setVisible(bool visible);
    void setEnabled(bool enabled);

    // @addr 0x8050b634
    static u32 getCourseMessageId(u16 courseId);

protected:
    u32 mVtable;               // 0x00
    u8 mPaneData[0x10];       // 0x04 - nw4r::lyt::Pane internal
    u32 mAnimationFrameCtrl;  // 0x14
    u16 mGroupId;             // 0x18
    u16 mTag;                 // 0x1A
    PaneFlag mFlags;          // 0x1C
    u8 _1D;
    u8 _1E;
    u8 _1F;
};

} // namespace UI