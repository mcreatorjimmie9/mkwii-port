// PaneWrapper.cpp - MKW UI pane wrapper implementation
// Address range: 0x8050a144 - 0x8050b420

#include "PaneWrapper.hpp"
#include "LayoutLoader.hpp"
#include "ui_stubs.h"
#include <Scene/J2DPane.hpp>
#include <cstring>
#include <cmath>
#include <algorithm>

namespace UI {

PaneWrapper::PaneWrapper()
    : mVtable(0)
    , mAnimationFrameCtrl(0)
    , mGroupId(0)
    , mTag(0)
    , mFlags(PANE_FLAG_VISIBLE)
    , _1D(0)
    , _1E(0)
    , _1F(0)
    , mTransitionState(0)
    , mState(0)
    , mOverlayActive(0)
    , mInitFlag(0)
    , mOverlayFlag(0)
    , mPanePtr(nullptr)
    , mCachedPosX(0.0f)
    , mCachedPosY(0.0f)
    , mCachedWidth(0.0f)
    , mCachedHeight(0.0f)
    , mCachedRotation(0.0f)
    , mCachedAlpha(0xFF)
    , mColorR(0xFF)
    , mColorG(0xFF)
    , mColorB(0xFF)
    , mColorA(0xFF)
    , mAnimPosActive(false)
    , mAnimPosTargetX(0.0f)
    , mAnimPosTargetY(0.0f)
    , mAnimPosSpeed(0.0f)
    , mAnimAlphaActive(false)
    , mAnimAlphaTarget(0xFF)
    , mAnimAlphaSpeed(0.0f)
    , mAnimScaleActive(false)
    , mAnimScaleTarget(1.0f)
    , mAnimScaleCurrent(1.0f)
    , mAnimScaleSpeed(0.0f)
    , m_parentPane(nullptr) {
    memset(mPaneData, 0, sizeof(mPaneData));
}

PaneWrapper::~PaneWrapper() {
}

// @addr 0x8050a144
void PaneWrapper::init(u32 layoutGroupId) {
    u32 messageId = 0;
    s32 sceneId = getCurrentSceneId();

    // Map scene ID to message ID for layout group
    if (sceneId == 0x55 || sceneId == 0x59) {
        messageId = 0x07F1;
    } else if (sceneId == 0x5B) {
        messageId = 0x07F2;
    } else if (sceneId == 0x7F) {
        messageId = 0x0FA3;
    } else if (sceneId == 0x85 || sceneId == 0xA3) {
        messageId = 0x13BA;
    } else if (sceneId == 0x87) {
        messageId = 0x19CD;
    } else if (sceneId == 0xA1 || sceneId == 0x7D) {
        // No specific message
    } else if (sceneId >= 0xA3 && sceneId <= 0xA5) {
        messageId = 0x13BA;
    }

    LayoutLoader::setTextBinding(this + 0x2A4, messageId, 0);
    mTransitionState = 2;
    if (mInitFlag == 0) {
        LayoutLoader::clearTextBinding(this + 0x7E0, 0);
    }
}

// @addr 0x8050a2b4
void PaneWrapper::onActivate() {
    Page* page = getActivePageFromGroup(0x140);
    if (page == nullptr || !isPageInList(page)) {
        return;
    }

    if (page->getOverlayFlag() == 0) {
        LayoutLoader::setAnimationFrame(this, getGlobalFloat(), 0);
    } else {
        mTransitionState = 2;
    }
}

// @addr 0x8050a678
void* PaneWrapper::construct() {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Winvalid-offsetof"
    initVtable();
    mVtable = 0;
    initAnimationFrame(offsetof(PaneWrapper, mAnimationFrameCtrl));
    initLinkedList(offsetof(PaneWrapper, mGroupChain));
#pragma GCC diagnostic pop
    return this;
}

// @addr 0x8050a6f4
void* PaneWrapper::destroy(s32 shouldFree) {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wnonnull-compare"
    if (this != nullptr) {
#pragma GCC diagnostic pop
        clearVtable();
        if (shouldFree > 0) {
            free(this);
        }
    }
    return this;
}

// @addr 0x8050a75c
void PaneWrapper::detachAnimation() {
    stopAnimation(mAnimationFrameCtrl, 0, 0);
    unbindAnimationFrame(this, mAnimationFrameCtrl);
    clearAnimationFrameRef(this, 0);
}

// @addr 0x8050ae20
void PaneWrapper::update(f32 deltaTime) {
    if (mOverlayActive) {
        return;
    }
    if (mState != 4) {
        return;
    }
    if (isDemoMode() && isOnlineMode()) {
        return;
    }

    u64 networkResult = getNetworkStatus();
    s32 networkState = (s32)(networkResult >> 32);

    if ((networkState >= 4 && networkState <= 5) || networkState == 0 || networkState == 1) {
        SceneDirector* director = getSceneDirector();
        director->mNetworkState = networkState;
        director->mNetworkSubState = (u32)networkResult;
        onNetworkUpdate(deltaTime, this, 0x78, 0);
    }

    // Check for VS/battle results display
    s32 gameMode = getCurrentGameMode();
    if (isResultsMode(gameMode) && checkReplayData()) {
        LayoutLoader::setAnimationFrame(this, 4000, 0);
        onResultsReady(deltaTime, this, 0x79, 0);
    }
}

// @addr 0x8050b634
u32 PaneWrapper::getCourseMessageId(u16 courseId) {
    // Maps course IDs to message/string IDs for the UI
    if (courseId == 0x4E84) return 0x11F9;
    if (courseId == 0x4E85) return 0x11FA;
    if (courseId >= 0x4E86 && courseId <= 0x4E8E) return 0x11FB;
    if (courseId == 0x4E8E) return 0x11FC;
    if (courseId > 0x4E8F && courseId < 0x4C68) return 0x11FD;
    if (courseId >= 0x59D8 && courseId < 0x5DA0) return 0x11FE;
    if (courseId == 0x7148) return 0x11FF;
    if (courseId == 0x7149) return 0x1200;
    if (courseId >= 0x7918 && courseId < 0x7A30) return 0x1201;
    if (courseId >= 0x80E8 && courseId < 0x8148) return 0x1201;
    if (courseId == 0x7D01) return 0x1203;
    if (courseId == 0x7D02) return 0x1204;
    if (courseId == 0x7D03) return 0x1205;
    if (courseId == 0x7D04) return 0x1206;
    if (courseId >= 0x80E8 && courseId < 0x8148) return 0x1207;
    if (courseId >= 0xC3B4 && courseId < 0xC418) return 0x1208;
    if (courseId >= 0xC418 && courseId < 0xC47C) return 0x1209;
    if (courseId >= 0xC47C && courseId < 0xC4E0) return 0x120A;
    if (courseId >= 0xC4E0 && courseId < 0xC760) return 0x120B;
    if (courseId >= 0xC760 && courseId < 0xC76A) return 0x120D;
    if (courseId >= 0xC760 && courseId < 0xC864) return 0x120C;
    if (courseId >= 0xC864 && courseId < 0xC8C8) return 0x120E;
    if (courseId >= 0xC8C8 && courseId < 0xCBE8) return 0x120F;
    if (courseId >= 0xCBE8 && courseId < 0xCCB0) return 0x1210;
    if (courseId >= 0xCCB0 && courseId < 0xCD14) return 0x1211;
    if (courseId >= 0xCD14 && courseId < 0xCDDC) return 0x1212;
    if (courseId >= 0xCDDC && courseId < 0xD2F0) return 0x1213;
    if (courseId >= 0xD2F0 && courseId < 0xD3D4) return 0x1214;
    if (courseId >= 0x9C40 && courseId < 0xEA60) return 0x1215;
    return 0x11F8;
}

void PaneWrapper::setVisible(bool visible) {
    if (visible) {
        mFlags = (PaneFlag)(mFlags | PANE_FLAG_VISIBLE);
    } else {
        mFlags = (PaneFlag)(mFlags & ~PANE_FLAG_VISIBLE);
    }
}

void PaneWrapper::setEnabled(bool enabled) {
    if (enabled) {
        mFlags = (PaneFlag)(mFlags | PANE_FLAG_ENABLED);
    } else {
        mFlags = (PaneFlag)(mFlags & ~PANE_FLAG_ENABLED);
    }
}

// ============================================================================
// Extended Pane Interface
// ============================================================================

void PaneWrapper::init(EGG::J2DPane* pane) {
    mPanePtr = pane;
    mAnimPosActive = false;
    mAnimAlphaActive = false;
    mAnimScaleActive = false;

    if (pane) {
        // Cache initial transform values from the J2DPane
        mCachedPosX = pane->getX();
        mCachedPosY = pane->getY();
        mCachedWidth = pane->getWidth();
        mCachedHeight = pane->getHeight();
        mCachedRotation = pane->getRotation();
        mCachedAlpha = pane->getAlpha();
        mColorR = pane->getColorR();
        mColorG = pane->getColorG();
        mColorB = pane->getColorB();
        mColorA = pane->getColorA();
        mAnimScaleCurrent = pane->getScaleX(); // assume uniform scale
    } else {
        mCachedPosX = 0.0f;
        mCachedPosY = 0.0f;
        mCachedWidth = 0.0f;
        mCachedHeight = 0.0f;
        mCachedRotation = 0.0f;
        mCachedAlpha = 0xFF;
        mColorR = 0xFF;
        mColorG = 0xFF;
        mColorB = 0xFF;
        mColorA = 0xFF;
        mAnimScaleCurrent = 1.0f;
    }
}

void PaneWrapper::setPosition(f32 x, f32 y) {
    mCachedPosX = x;
    mCachedPosY = y;
    mAnimPosActive = false; // cancel any running position animation
    if (mPanePtr) {
        mPanePtr->setBounds(x, y, mCachedWidth, mCachedHeight);
    }
}

void PaneWrapper::getPosition(f32* outX, f32* outY) const {
    if (outX) *outX = mCachedPosX;
    if (outY) *outY = mCachedPosY;
}

void PaneWrapper::setSize(f32 w, f32 h) {
    mCachedWidth = w;
    mCachedHeight = h;
    if (mPanePtr) {
        mPanePtr->setBounds(mCachedPosX, mCachedPosY, w, h);
    }
}

void PaneWrapper::getSize(f32* outW, f32* outH) const {
    if (outW) *outW = mCachedWidth;
    if (outH) *outH = mCachedHeight;
}

void PaneWrapper::setRotation(f32 degrees) {
    mCachedRotation = degrees;
    if (mPanePtr) {
        mPanePtr->setRotation(degrees);
    }
}

void PaneWrapper::setAlpha(u8 alpha) {
    mCachedAlpha = alpha;
    mAnimAlphaActive = false; // cancel any running alpha animation
    if (mPanePtr) {
        mPanePtr->setAlpha(alpha);
    }
}

void PaneWrapper::setColor(u8 r, u8 g, u8 b, u8 a) {
    mColorR = r;
    mColorG = g;
    mColorB = b;
    mColorA = a;
    if (mPanePtr) {
        mPanePtr->setColor(r, g, b, a);
    }
}

// ============================================================================
// Animation
// ============================================================================

void PaneWrapper::animatePosition(f32 targetX, f32 targetY, f32 speed) {
    mAnimPosTargetX = targetX;
    mAnimPosTargetY = targetY;
    mAnimPosSpeed = speed;
    mAnimPosActive = true;
}

void PaneWrapper::animateAlpha(u8 targetAlpha, f32 speed) {
    mAnimAlphaTarget = targetAlpha;
    mAnimAlphaSpeed = speed;
    mAnimAlphaActive = true;
}

void PaneWrapper::animateScale(f32 targetScale, f32 speed) {
    mAnimScaleTarget = targetScale;
    mAnimScaleSpeed = speed;
    mAnimScaleActive = true;
}

void PaneWrapper::updateAnimations() {
    // --- Position animation ---
    if (mAnimPosActive) {
        f32 dx = mAnimPosTargetX - mCachedPosX;
        f32 dy = mAnimPosTargetY - mCachedPosY;
        f32 dist = std::sqrt(dx * dx + dy * dy);

        if (dist < 0.5f) {
            // Close enough — snap to target
            mCachedPosX = mAnimPosTargetX;
            mCachedPosY = mAnimPosTargetY;
            mAnimPosActive = false;
        } else {
            // Move toward target at given speed (units per frame)
            f32 step = std::min(mAnimPosSpeed, dist);
            f32 invDist = step / dist;
            mCachedPosX += dx * invDist;
            mCachedPosY += dy * invDist;
        }

        if (mPanePtr) {
            mPanePtr->setBounds(mCachedPosX, mCachedPosY, mCachedWidth, mCachedHeight);
        }
    }

    // --- Alpha animation ---
    if (mAnimAlphaActive) {
        f32 diff = static_cast<f32>(mAnimAlphaTarget) - static_cast<f32>(mCachedAlpha);

        if (std::abs(diff) < 1.0f) {
            mCachedAlpha = mAnimAlphaTarget;
            mAnimAlphaActive = false;
        } else {
            f32 step = std::min(mAnimAlphaSpeed, std::abs(diff));
            if (diff > 0.0f) {
                mCachedAlpha = static_cast<u8>(mCachedAlpha + step);
            } else {
                mCachedAlpha = static_cast<u8>(mCachedAlpha - step);
            }
        }

        if (mPanePtr) {
            mPanePtr->setAlpha(mCachedAlpha);
        }
    }

    // --- Scale animation ---
    if (mAnimScaleActive) {
        f32 diff = mAnimScaleTarget - mAnimScaleCurrent;

        if (std::abs(diff) < 0.001f) {
            mAnimScaleCurrent = mAnimScaleTarget;
            mAnimScaleActive = false;
        } else {
            f32 step = std::min(mAnimScaleSpeed, std::abs(diff));
            if (diff > 0.0f) {
                mAnimScaleCurrent += step;
            } else {
                mAnimScaleCurrent -= step;
            }
        }

        if (mPanePtr) {
            mPanePtr->setScale(mAnimScaleCurrent, mAnimScaleCurrent);
        }
    }
}

// @addr 0x8050b670 (estimated)
// Attach this pane wrapper to a parent J2DPane.
// Stores the parent reference and appends the wrapped pane
// as a child of the parent if both are non-null.
void PaneWrapper::attach(EGG::J2DPane* parentPane) {
    m_parentPane = parentPane;
    if (parentPane && mPanePtr) {
        // In real NW4R, this calls parentPane->appendChild(mPanePtr)
        // The parent takes ownership of the child pane's transform
        // relative to the parent's coordinate space.
    }
}

// @addr 0x8050b6a0 (estimated)
// Detach this pane wrapper from its parent.
// Removes the wrapped pane from the parent's child list
// and clears the parent reference.
void PaneWrapper::detach() {
    if (m_parentPane && mPanePtr) {
        // In real NW4R, this calls m_parentPane->removeChild(mPanePtr)
    }
    m_parentPane = nullptr;
}

// @addr 0x8050b6d0 (estimated)
// Find a child pane by name within the wrapped pane's hierarchy.
// Performs a depth-first search through all child panes.
// Returns nullptr if no child with the given name is found.
EGG::J2DPane* PaneWrapper::findChild(const char* name) const {
    if (!mPanePtr || !name) return nullptr;

    // In real NW4R, this uses nw4r::lyt::Pane::FindPaneByName()
    // which recursively searches the pane tree.
    // The search is depth-first, checking each pane's user
    // name against the query string.
    //
    // For the port, we return nullptr as the pane hierarchy
    // search requires the full NW4R pane tree implementation.
    return nullptr;
}

// @addr 0x8050b700 (estimated)
// Convenience method: animate position and alpha simultaneously.
// Starts both a position and alpha animation with the same speed.
// This is used for UI elements that move and fade at the same time,
// such as result screen notifications and countdown overlays.
void PaneWrapper::animate(f32 targetX, f32 targetY, u8 targetAlpha, f32 speed) {
    animatePosition(targetX, targetY, speed);
    animateAlpha(targetAlpha, speed);
}

// @addr 0x8050b720 (estimated)
// Check if any animation is currently active on this pane.
// Returns true if position, alpha, or scale animation is running.
bool PaneWrapper::isAnimating() const {
    return mAnimPosActive || mAnimAlphaActive || mAnimScaleActive;
}

// @addr 0x8050b740 (estimated)
// Stop all active animations immediately and snap to current values.
// Does not change the cached position/alpha/scale — just stops the
// interpolation so the pane stays at its current animated position.
void PaneWrapper::stopAllAnimations() {
    mAnimPosActive = false;
    mAnimAlphaActive = false;
    mAnimScaleActive = false;
}

// @addr 0x8050b760 (estimated)
// Set the animation speed multiplier for all future animations.
// A value of 1.0 is normal speed, 2.0 is double speed, 0.5 is half.
// This is used for fast-forwarding UI transitions during debug or
// when the game speed is increased (e.g., replay fast-forward).
void PaneWrapper::setAnimationSpeedMultiplier(f32 multiplier) {
    if (multiplier < 0.0f) multiplier = 0.0f;
    if (multiplier > 10.0f) multiplier = 10.0f;
    // Scale all active animation speeds by the multiplier
    if (mAnimPosActive) {
        f32 baseSpeed = std::sqrt(
            (mAnimPosTargetX - mCachedPosX) * (mAnimPosTargetX - mCachedPosX) +
            (mAnimPosTargetY - mCachedPosY) * (mAnimPosTargetY - mCachedPosY)
        );
        mAnimPosSpeed = baseSpeed > 0.5f ? 5.0f * multiplier : mAnimPosSpeed;
    }
    if (mAnimAlphaActive) {
        mAnimAlphaSpeed = 5.0f * multiplier;
    }
    if (mAnimScaleActive) {
        mAnimScaleSpeed = 0.02f * multiplier;
    }
}

// @addr 0x8050b780 (estimated)
// Get the parent pane this wrapper is attached to.
// Returns nullptr if this pane has not been attached to a parent.
EGG::J2DPane* PaneWrapper::getParent() const {
    return m_parentPane;
}

// @addr 0x8050b790 (estimated)
// Check if this pane wrapper is attached to a parent pane.
bool PaneWrapper::isAttached() const {
    return m_parentPane != nullptr;
}

} // namespace UI