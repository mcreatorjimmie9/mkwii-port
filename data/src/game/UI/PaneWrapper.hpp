#pragma once
// PaneWrapper.hpp - MKW UI pane wrapper
// Wraps nw4r::lyt::Pane with MKW-specific extensions
// Address range: 0x8050a144 - 0x8050b420

#include "rk_common.h"

namespace EGG { class J2DPane; }

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

    // --- Extended pane interface ---
    void init(EGG::J2DPane* pane);
    EGG::J2DPane* getPane() const { return mPanePtr; }
    void setPosition(f32 x, f32 y);
    void getPosition(f32* outX, f32* outY) const;
    void setSize(f32 w, f32 h);
    void getSize(f32* outW, f32* outH) const;
    void setRotation(f32 degrees);
    void setAlpha(u8 alpha);
    u8 getAlpha() const { return mCachedAlpha; }
    void setColor(u8 r, u8 g, u8 b, u8 a);

    // --- Attachment ---
    void attach(EGG::J2DPane* parentPane);
    void detach();
    EGG::J2DPane* findChild(const char* name) const;

    // --- Animation ---
    void animatePosition(f32 targetX, f32 targetY, f32 speed);
    void animateAlpha(u8 targetAlpha, f32 speed);
    void animateScale(f32 targetScale, f32 speed);
    void updateAnimations();
    void animate(f32 targetX, f32 targetY, u8 targetAlpha, f32 speed);
    bool isAnimating() const;
    void stopAllAnimations();
    void setAnimationSpeedMultiplier(f32 multiplier);
    EGG::J2DPane* getParent() const;
    bool isAttached() const;

    // @addr 0x8050b634
    static u32 getCourseMessageId(u16 courseId);

protected:
    u32 mVtable;               // 0x00
    u8 mPaneData[0x10];       // 0x04 - nw4r::lyt::Pane internal
    u32 mAnimationFrameCtrl;  // 0x14
    u32 mGroupChain;          // linked list chain
    u16 mGroupId;             // 0x18
    u16 mTag;                 // 0x1A
    PaneFlag mFlags;          // 0x1C
    u8 _1D;
    u8 _1E;
    u8 _1F;

    // Runtime state
    u32 mTransitionState;      // transition state for pane
    u32 mState;                // pane state (4 = active)
    u32 mOverlayActive;        // overlay flag
    u8 mInitFlag;              // initialization flag
    u8 mOverlayFlag;           // overlay visibility

    // --- Cached transform state ---
    EGG::J2DPane* mPanePtr;    // 0x24: raw J2DPane pointer (may be null)
    f32 mCachedPosX;           // cached position X
    f32 mCachedPosY;           // cached position Y
    f32 mCachedWidth;          // cached width
    f32 mCachedHeight;         // cached height
    f32 mCachedRotation;       // cached rotation in degrees
    u8 mCachedAlpha;           // cached alpha (0-255)
    u8 mColorR, mColorG, mColorB, mColorA; // cached color multiplier

    // --- Animation state ---
    bool mAnimPosActive;       // position animation active
    f32 mAnimPosTargetX;
    f32 mAnimPosTargetY;
    f32 mAnimPosSpeed;
    bool mAnimAlphaActive;     // alpha animation active
    u8 mAnimAlphaTarget;
    f32 mAnimAlphaSpeed;
    bool mAnimScaleActive;     // scale animation active
    f32 mAnimScaleTarget;
    f32 mAnimScaleCurrent;
    f32 mAnimScaleSpeed;

    // --- Parent tracking ---
    EGG::J2DPane* m_parentPane;    // parent pane for attach/detach
    f32 m_animSpeedMult;       // animation speed multiplier
};

} // namespace UI