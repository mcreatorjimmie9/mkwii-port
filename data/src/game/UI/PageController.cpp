// PageController.cpp - Central page lifecycle coordinator implementation
// Address range: 0x8060A194 - 0x8061A000

#include "PageController.hpp"
#include "MenuPage.hpp"
#include "PageManager.hpp"
#include "Layout.hpp"
#include "PaneWrapper.hpp"
#include "AnimationController.hpp"
#include "ui_stubs.h"

namespace UI {

PageController* PageController::sInstance = nullptr;

PageController::PageController()
    : mManagedCount(0), mOverlayCount(0), mActivePageIndex(-1)
    , mTransitionActive(false), mTransitionSpeed(1.0f)
    , mInputSuppressed(false), mInputSuppressTimer(0)
    , mPageManager(nullptr), mPhase(CTRLPHASE_IDLE)
    , mPendingPageId(0), mPendingTransType(PAGE_TRANS_NONE)
    , mPendingDuration(0.0f) {
    memset(mPages, 0, sizeof(mPages));
    memset(mOverlayStack, 0xFF, sizeof(mOverlayStack));
    memset(&mCurrentTransition, 0, sizeof(mCurrentTransition));
}

PageController::~PageController() { shutdown(); }
PageController* PageController::getInstance() { return sInstance; }
void PageController::createInstance() { if (!sInstance) sInstance = new PageController(); }
void PageController::destroyInstance() { if (sInstance) { delete sInstance; sInstance = nullptr; } }

// @addr 0x8060A194
void PageController::init(PageManager* pageManager) {
    mPageManager = pageManager;
    mManagedCount = 0; mOverlayCount = 0; mActivePageIndex = -1;
    mPhase = CTRLPHASE_IDLE; mTransitionActive = false;
    mInputSuppressed = false; mInputSuppressTimer = 0;
    mPendingPageId = 0; mPendingTransType = PAGE_TRANS_NONE;
    mPendingDuration = 0.0f; mTransitionSpeed = 1.0f;
    memset(mPages, 0, sizeof(mPages));
    memset(mOverlayStack, 0xFF, sizeof(mOverlayStack));
    memset(&mCurrentTransition, 0, sizeof(mCurrentTransition));
}

// @addr 0x8060A3B0
void PageController::shutdown() {
    while (mOverlayCount > 0) popOverlay(0.0f);
    for (u32 i = 0; i < mManagedCount; i++) {
        PageEntry& e = mPages[i];
        if (e.page) { unbindLayout(e.page); unbindAnimationGroup(e.page, e.animGroupRef);
            e.page->onDestroy(); e.state = PCTRL_DESTROYED; e.page = nullptr; }
    }
    mManagedCount = 0; mActivePageIndex = -1; mPageManager = nullptr;
}

// @addr 0x8060A540
MenuPage* PageController::createPage(u32 pageId, u32 param) {
    s32 slot = findFreeSlot();
    if (slot < 0) return nullptr;
    PageEntry& e = mPages[slot];
    e.page = nullptr; // Actual allocation delegated to PageManager pool
    e.state = PCTRL_LOADING; e.phase = CTRLPHASE_LOAD_PENDING;
    e.boundLayout = nullptr; e.animGroupRef = 0; e.frameCtrlRef = 0;
    e.stateTimer = 0.0f; e.isVisible = 0; e.inputEnabled = 1; e.overlayLayer = 0;
    memset(&e.transition, 0, sizeof(TransitionInfo));
    e.transition.targetPageId = pageId;
    mManagedCount++;
    UNUSED(param);
    return e.page;
}

// @addr 0x8060A700
void PageController::destroyPage(MenuPage* page) {
    s32 idx = findPageIndex(page);
    if (idx < 0) return;
    PageEntry& e = mPages[idx];
    if (idx == mActivePageIndex) mActivePageIndex = -1;
    for (s32 i = 0; i < mOverlayCount; i++) {
        if (mOverlayStack[i] == idx) {
            for (s32 j = i; j < mOverlayCount - 1; j++) mOverlayStack[j] = mOverlayStack[j + 1];
            mOverlayCount--; break;
        }
    }
    if (e.state == PCTRL_ACTIVE || e.state == PCTRL_ENTERING) {
        e.state = PCTRL_EXITING; e.phase = CTRLPHASE_EXIT_PENDING;
        e.transition.type = PAGE_TRANS_FADE; e.transition.duration = 0.3f;
        e.transition.progress = 0.0f; e.transition.isActive = 1; e.stateTimer = 0.0f;
    } else {
        unbindLayout(page); unbindAnimationGroup(page, e.animGroupRef);
        if (e.boundLayout) { releaseLayout(e.boundLayout); e.boundLayout = nullptr; }
        e.page->onDestroy(); freeEntry(e);
    }
}

// @addr 0x8060A8C4
void PageController::destroyAllPages() {
    while (mOverlayCount > 0) {
        s32 oi = mOverlayStack[mOverlayCount - 1];
        if (oi >= 0 && oi < (s32)mManagedCount && mPages[oi].page) {
            unbindLayout(mPages[oi].page); mPages[oi].page->onDestroy(); freeEntry(mPages[oi]);
        }
        mOverlayCount--;
    }
    for (s32 i = (s32)mManagedCount - 1; i >= 0; i--) {
        PageEntry& e = mPages[i];
        if (e.page) {
            unbindLayout(e.page); unbindAnimationGroup(e.page, e.animGroupRef);
            if (e.boundLayout) { releaseLayout(e.boundLayout); e.boundLayout = nullptr; }
            e.page->onDestroy(); freeEntry(e);
        }
    }
    mManagedCount = 0; mActivePageIndex = -1;
}

// @addr 0x8060AB30
void PageController::transitionTo(u32 targetPageId, PageTransitionType transType, f32 duration) {
    if (mTransitionActive) return;
    u32 sourceId = 0;
    if (mActivePageIndex >= 0 && mPages[mActivePageIndex].page)
        sourceId = mPages[mActivePageIndex].page->getPageId();
    mCurrentTransition.type = transType;
    mCurrentTransition.duration = duration > 0.0f ? duration : 0.5f;
    mCurrentTransition.progress = 0.0f;
    mCurrentTransition.sourcePageId = sourceId;
    mCurrentTransition.targetPageId = targetPageId;
    mCurrentTransition.isActive = 1;
    mPendingPageId = targetPageId; mPendingTransType = transType;
    mPendingDuration = mCurrentTransition.duration;
    mPhase = CTRLPHASE_LOAD_PENDING; mTransitionActive = true;
    mInputSuppressed = true; mInputSuppressTimer = 0;
}

// @addr 0x8060AD20
void PageController::transitionImmediate(u32 targetPageId) {
    if (mTransitionActive && mActivePageIndex >= 0) {
        PageEntry& cur = mPages[mActivePageIndex];
        cur.state = PCTRL_EXITING; cur.phase = CTRLPHASE_DESTROY_PENDING;
        cur.page->onDeactivate(); cur.page->onDestroy(); unbindLayout(cur.page);
        if (cur.boundLayout) { releaseLayout(cur.boundLayout); cur.boundLayout = nullptr; }
        freeEntry(cur);
    }
    MenuPage* np = createPage(targetPageId, 0);
    if (!np) return;
    s32 idx = findPageIndex(np);
    if (idx >= 0) {
        PageEntry& e = mPages[idx];
        e.state = PCTRL_ACTIVE; e.phase = CTRLPHASE_IDLE;
        e.isVisible = 1; e.inputEnabled = 1;
        np->onLoad(); np->onInit(); np->onActivate();
    }
    mActivePageIndex = idx; mTransitionActive = false;
    mPhase = CTRLPHASE_IDLE; mCurrentTransition.isActive = 0;
    mCurrentTransition.progress = 1.0f; mInputSuppressed = false;
}

// @addr 0x8060AEC0
void PageController::pushOverlay(MenuPage* overlay, f32 enterDuration) {
    if (mOverlayCount >= MAX_OVERLAY_DEPTH) return;
    s32 idx = findPageIndex(overlay);
    if (idx < 0) return;
    PageEntry& e = mPages[idx];
    e.overlayLayer = (u8)mOverlayCount;
    if (enterDuration > 0.0f) {
        e.transition.type = PAGE_TRANS_FADE; e.transition.duration = enterDuration;
        e.transition.progress = 0.0f; e.transition.isActive = 1;
        e.state = PCTRL_ENTERING; e.phase = CTRLPHASE_ENTER_ANIMATING;
    } else { e.state = PCTRL_ACTIVE; e.phase = CTRLPHASE_IDLE; e.isVisible = 1; }
    mOverlayStack[mOverlayCount] = idx; mOverlayCount++;
    if (overlay) overlay->onActivate();
}

// @addr 0x8060B030
void PageController::popOverlay(f32 exitDuration) {
    if (mOverlayCount <= 0) return;
    s32 topIdx = mOverlayStack[mOverlayCount - 1];
    if (topIdx < 0 || topIdx >= (s32)mManagedCount) { mOverlayCount--; return; }
    PageEntry& e = mPages[topIdx];
    if (exitDuration > 0.0f) {
        e.transition.type = PAGE_TRANS_FADE; e.transition.duration = exitDuration;
        e.transition.progress = 0.0f; e.transition.isActive = 1;
        e.state = PCTRL_EXITING; e.phase = CTRLPHASE_EXIT_ANIMATING; e.stateTimer = 0.0f;
    } else {
        if (e.page) { e.page->onDeactivate(); e.page->onDestroy(); unbindLayout(e.page);
            if (e.boundLayout) { releaseLayout(e.boundLayout); e.boundLayout = nullptr; } }
        freeEntry(e);
    }
    mOverlayCount--;
}

// @addr 0x8060B180
MenuPage* PageController::getTopOverlay() const {
    if (mOverlayCount <= 0) return nullptr;
    s32 ti = mOverlayStack[mOverlayCount - 1];
    return (ti < 0 || ti >= (s32)mManagedCount) ? nullptr : mPages[ti].page;
}

// @addr 0x8060B300
void PageController::bindLayout(MenuPage* page, Layout* layout) {
    if (!page || !layout) return;
    s32 idx = findPageIndex(page); if (idx < 0) return;
    PageEntry& e = mPages[idx];
    if (e.boundLayout) releaseLayout(e.boundLayout);
    e.boundLayout = layout; page->setLayout(layout);
    u32 layoutData = layout ? 0x8060B340 : 0;
    if (layoutData) nw4r_lyt_BindAnimation(layoutData, "RootGroup", e.animGroupRef);
    u32 layoutCtrl = page ? 0x8060B350 : 0;
    if (layoutCtrl) setAnimationFrameActive(layoutCtrl, 1);
}

// @addr 0x8060B4A0
void PageController::unbindLayout(MenuPage* page) {
    if (!page) return;
    s32 idx = findPageIndex(page); if (idx < 0) return;
    PageEntry& e = mPages[idx];
    if (!e.boundLayout) return;
    u32 layoutData = e.boundLayout ? 0x8060B4C0 : 0;
    if (layoutData) nw4r_lyt_UnbindAnimation(layoutData, "RootGroup");
    page->setLayout(nullptr); releaseLayout(e.boundLayout); e.boundLayout = nullptr;
}

// @addr 0x8060B600
void PageController::bindAnimationGroup(MenuPage* page, u32 groupId, u32 animId) {
    if (!page) return;
    s32 idx = findPageIndex(page); if (idx < 0) return;
    PageEntry& e = mPages[idx]; e.animGroupRef = groupId;
    u32 animResource = loadAnimationResource(animId);
    if (animResource) {
        applyAnimationFrame((void*)(uintptr_t)0x8060B610, animResource, 0.0f, 1.0f);
        e.frameCtrlRef = animResource;
        setAnimationFrameGroup(animResource, groupId, 1);
    }
}

// @addr 0x8060B780
void PageController::unbindAnimationGroup(MenuPage* page, u32 groupId) {
    if (!page) return;
    UNUSED(groupId);
    s32 idx = findPageIndex(page); if (idx < 0) return;
    PageEntry& e = mPages[idx];
    if (e.frameCtrlRef) {
        stopAnimation(e.frameCtrlRef, 0, 0);
        unbindAnimationFrame((void*)(uintptr_t)0x8060B790, e.frameCtrlRef);
    }
    e.animGroupRef = 0; e.frameCtrlRef = 0;
}

// @addr 0x8060B900
MenuPage* PageController::getActivePage() const {
    if (mActivePageIndex < 0 || mActivePageIndex >= (s32)mManagedCount) return nullptr;
    return mPages[mActivePageIndex].page;
}

// @addr 0x8060BA50
MenuPage* PageController::findPageById(u32 pageId) const {
    for (u32 i = 0; i < mManagedCount; i++)
        if (mPages[i].page && mPages[i].page->getPageId() == pageId && mPages[i].state != PCTRL_DESTROYED)
            return mPages[i].page;
    return nullptr;
}

// @addr 0x8060BB80
void PageController::update(f32 deltaTime) {
    processState(deltaTime);
    if (mTransitionActive && mCurrentTransition.isActive) {
        mCurrentTransition.progress += (deltaTime / mCurrentTransition.duration) * mTransitionSpeed;
        if (mCurrentTransition.progress >= 1.0f) mCurrentTransition.progress = 1.0f;
    }
    if (mInputSuppressed) { mInputSuppressTimer++; if (!mTransitionActive) { mInputSuppressed = false; mInputSuppressTimer = 0; } }
    for (u32 i = 0; i < mManagedCount; i++) {
        PageEntry& e = mPages[i];
        if (!e.page || e.state == PCTRL_DESTROYED) continue;
        if (e.boundLayout) { u32 ld = 0x8060BB90; if (ld) nw4r_lyt_UpdateAnimations(ld, deltaTime); }
        if (e.state == PCTRL_ACTIVE && !mInputSuppressed) e.page->onUpdate(deltaTime);
    }
}

// @addr 0x8060BD20
void PageController::draw() {
    if (mActivePageIndex >= 0 && mActivePageIndex < (s32)mManagedCount) {
        PageEntry& b = mPages[mActivePageIndex];
        if (b.page && b.isVisible && b.state != PCTRL_DESTROYED) b.page->onDraw();
    }
    for (s32 i = 0; i < mOverlayCount; i++) {
        s32 oi = mOverlayStack[i]; if (oi < 0 || oi >= (s32)mManagedCount) continue;
        PageEntry& e = mPages[oi];
        if (e.page && e.isVisible && e.state != PCTRL_DESTROYED) e.page->onDraw();
    }
    if (mTransitionActive && mCurrentTransition.isActive) {
        for (u32 i = 0; i < mManagedCount; i++) {
            PageEntry& e = mPages[i];
            if (e.state == PCTRL_EXITING && e.isVisible && e.page) {
                setWindowAlpha(e.page ? 0x8060BD30 : 0, (u32)((1.0f - mCurrentTransition.progress) * 255.0f));
                e.page->onDraw();
            }
        }
    }
}

// @addr 0x8060BE90
void PageController::skipTransition() {
    if (!mTransitionActive) return;
    mCurrentTransition.progress = 1.0f; mCurrentTransition.isActive = 0;
    mTransitionActive = false; mInputSuppressed = false; mInputSuppressTimer = 0;
    for (u32 i = 0; i < mManagedCount; i++) {
        PageEntry& e = mPages[i];
        if (e.phase == CTRLPHASE_ENTER_ANIMATING) {
            e.state = PCTRL_ACTIVE; e.phase = CTRLPHASE_IDLE;
            e.isVisible = 1; e.inputEnabled = 1;
            e.transition.progress = 1.0f; e.transition.isActive = 0;
            if (e.page) e.page->onActivate();
        } else if (e.phase == CTRLPHASE_EXIT_ANIMATING) {
            e.state = PCTRL_DESTROYED; e.phase = CTRLPHASE_DESTROY_PENDING;
            e.transition.progress = 1.0f; e.transition.isActive = 0;
        }
    }
    mPhase = CTRLPHASE_IDLE;
}

// @addr 0x8060BFC0
void PageController::suppressInput(bool suppress) { mInputSuppressed = suppress; mInputSuppressTimer = 0; }

// @addr 0x8060C100
void PageController::setPageAlpha(MenuPage* page, f32 alpha) {
    if (!page) return;
    s32 idx = findPageIndex(page); if (idx < 0) return;
    u8 ab = (u8)(alpha * 255.0f); if (ab > 255) ab = 255;
    setWindowAlpha(page ? 0x8060C110 : 0, (u32)ab);
    if (mPages[idx].boundLayout) { u32 ld = 0x8060C120; if (ld) setWindowFade(ld, (u32)ab); }
}

// @addr 0x8060C280
void PageController::setPageVisible(MenuPage* page, bool visible) {
    if (!page) return;
    s32 idx = findPageIndex(page); if (idx < 0) return;
    PageEntry& e = mPages[idx]; e.isVisible = visible ? 1 : 0;
    setAnimationFrame(page ? 0x8060C290 : 0, 0x10DA, visible ? 1 : 0);
    u32 ov = page ? 0x8060C2A0 : 0; if (ov) setActiveGroup(ov, visible ? 1 : 0);
}

// @addr 0x8060C400
u32 PageController::getFrameController(MenuPage* page) const {
    if (!page) return 0;
    s32 idx = findPageIndex(page);
    return idx < 0 ? 0 : mPages[idx].frameCtrlRef;
}

// @addr 0x8060C540
void PageController::setFrameController(MenuPage* page, u32 frameCtrl) {
    if (!page) return;
    s32 idx = findPageIndex(page); if (idx < 0) return;
    PageEntry& e = mPages[idx];
    if (e.frameCtrlRef) unbindAnimationFrame((void*)(uintptr_t)0x8060C550, e.frameCtrlRef);
    e.frameCtrlRef = frameCtrl;
    if (frameCtrl) bindAnimationFrame(frameCtrl, (void*)(uintptr_t)0x8060C560, 0);
}

// @addr 0x8060C700
void PageController::processState(f32 deltaTime) {
    if (mPhase != CTRLPHASE_IDLE) processPhase(mPhase, deltaTime);
}

// @addr 0x8060C900
void PageController::processPhase(ControllerPhase phase, f32 deltaTime) {
    switch (phase) {
    case CTRLPHASE_LOAD_PENDING: {
        MenuPage* np = createPage(mPendingPageId, 0);
        if (np) { s32 i = findPageIndex(np);
            if (i >= 0) { mPages[i].phase = CTRLPHASE_LOAD_IN_PROGRESS; mPhase = CTRLPHASE_LOAD_IN_PROGRESS; }
            else { mPhase = CTRLPHASE_IDLE; mTransitionActive = false; }
        } else { mPhase = CTRLPHASE_IDLE; mTransitionActive = false; mInputSuppressed = false; }
        break;
    }
    case CTRLPHASE_LOAD_IN_PROGRESS:
        for (u32 i = 0; i < mManagedCount; i++)
            if (mPages[i].phase == CTRLPHASE_LOAD_IN_PROGRESS) transitionLoadState(mPages[i], deltaTime);
        break;
    case CTRLPHASE_ENTER_PENDING:
        for (u32 i = 0; i < mManagedCount; i++) {
            PageEntry& e = mPages[i];
            if (e.phase == CTRLPHASE_ENTER_PENDING) {
                e.phase = CTRLPHASE_ENTER_ANIMATING; e.state = PCTRL_ENTERING; e.stateTimer = 0.0f;
                if (e.page) { e.page->onLoad(); e.page->onInit(); }
                mPhase = CTRLPHASE_ENTER_ANIMATING;
            }
        }
        break;
    case CTRLPHASE_ENTER_ANIMATING:
        for (u32 i = 0; i < mManagedCount; i++)
            if (mPages[i].phase == CTRLPHASE_ENTER_ANIMATING) transitionEnterState(mPages[i], deltaTime);
        break;
    case CTRLPHASE_EXIT_PENDING:
        if (mActivePageIndex >= 0) {
            PageEntry& cur = mPages[mActivePageIndex];
            cur.phase = CTRLPHASE_EXIT_ANIMATING; cur.state = PCTRL_EXITING; cur.stateTimer = 0.0f;
            if (cur.page) cur.page->onDeactivate();
            mPhase = CTRLPHASE_EXIT_ANIMATING;
        } else mPhase = CTRLPHASE_IDLE;
        break;
    case CTRLPHASE_EXIT_ANIMATING:
        if (mActivePageIndex >= 0) transitionExitState(mPages[mActivePageIndex], deltaTime);
        break;
    case CTRLPHASE_DESTROY_PENDING:
        for (u32 i = 0; i < mManagedCount; i++) {
            PageEntry& e = mPages[i];
            if (e.phase == CTRLPHASE_DESTROY_PENDING) {
                if (e.boundLayout) { releaseLayout(e.boundLayout); e.boundLayout = nullptr; }
                freeEntry(e);
            }
        }
        mPhase = CTRLPHASE_IDLE; mTransitionActive = false; mInputSuppressed = false;
        break;
    default: break;
    }
}

// @addr 0x8060CB40
void PageController::transitionEnterState(PageEntry& e, f32 deltaTime) {
    if (!e.page) return;
    e.stateTimer += deltaTime;
    f32 dur = e.transition.duration > 0.0f ? e.transition.duration : 0.5f;
    e.transition.progress = e.stateTimer / dur;
    if (e.transition.type == PAGE_TRANS_FADE) {
        setPageAlpha(e.page, e.transition.progress > 1.0f ? 1.0f : e.transition.progress);
    } else if (e.transition.type == PAGE_TRANS_SLIDE_LEFT) {
        updateSceneTransform(e.page ? 0x8060CB50 : 0, (1.0f - e.transition.progress) * 640.0f, 0.0f);
    } else if (e.transition.type == PAGE_TRANS_SLIDE_RIGHT) {
        updateSceneTransform(e.page ? 0x8060CB60 : 0, (e.transition.progress - 1.0f) * 640.0f, 0.0f);
    }
    if (e.transition.progress >= 1.0f) {
        e.transition.progress = 1.0f; e.transition.isActive = 0;
        e.state = PCTRL_ACTIVE; e.phase = CTRLPHASE_IDLE; e.isVisible = 1; e.inputEnabled = 1;
        mActivePageIndex = findPageIndex(e.page);
        if (e.page) e.page->onActivate();
        mPhase = CTRLPHASE_IDLE; mTransitionActive = false; mInputSuppressed = false;
    }
}

// @addr 0x8060CD00
void PageController::transitionExitState(PageEntry& e, f32 deltaTime) {
    if (!e.page) return;
    e.stateTimer += deltaTime;
    f32 dur = e.transition.duration > 0.0f ? e.transition.duration : 0.3f;
    e.transition.progress = e.stateTimer / dur;
    if (e.transition.type == PAGE_TRANS_FADE) {
        f32 a = 1.0f - e.transition.progress; if (a < 0.0f) a = 0.0f; setPageAlpha(e.page, a);
    } else if (e.transition.type == PAGE_TRANS_SLIDE_LEFT) {
        updateSceneTransform(e.page ? 0x8060CD10 : 0, e.transition.progress * -640.0f, 0.0f);
    }
    if (e.transition.progress >= 1.0f) {
        e.transition.progress = 1.0f; e.transition.isActive = 0;
        e.state = PCTRL_DESTROYED; e.phase = CTRLPHASE_DESTROY_PENDING;
        e.page->onDestroy(); unbindLayout(e.page);
        mPhase = CTRLPHASE_DESTROY_PENDING;
    }
}

// @addr 0x8060CE80
void PageController::transitionLoadState(PageEntry& e, f32 deltaTime) {
    UNUSED(deltaTime);
    if (!e.boundLayout) {
        Layout* layout = loadLayoutForResource(e.transition.targetPageId);
        if (layout && e.page) bindLayout(e.page, layout);
    }
    if (e.boundLayout || mPendingTransType == PAGE_TRANS_NONE) {
        e.state = PCTRL_ENTERING; e.phase = CTRLPHASE_ENTER_PENDING; e.isVisible = 1;
        mPhase = CTRLPHASE_ENTER_PENDING;
    }
}

// @addr 0x8060D000
s32 PageController::findPageIndex(MenuPage* page) const {
    for (u32 i = 0; i < mManagedCount; i++)
        if (mPages[i].page == page) return (s32)i;
    return -1;
}

// @addr 0x8060D100
s32 PageController::findFreeSlot() const {
    for (u32 i = 0; i < MAX_MANAGED_PAGES; i++)
        if (!mPages[i].page || mPages[i].state == PCTRL_DESTROYED) return (s32)i;
    return -1;
}

// @addr 0x8060D200
PageEntry* PageController::allocateEntry() {
    s32 slot = findFreeSlot(); return slot >= 0 ? &mPages[slot] : nullptr;
}

// @addr 0x8060D300
void PageController::freeEntry(PageEntry& e) {
    e.page = nullptr; e.state = PCTRL_DESTROYED; e.phase = CTRLPHASE_IDLE;
    e.boundLayout = nullptr; e.animGroupRef = 0; e.frameCtrlRef = 0;
    e.stateTimer = 0.0f; e.isVisible = 0; e.inputEnabled = 0; e.overlayLayer = 0;
    memset(&e.transition, 0, sizeof(TransitionInfo));
}

// @addr 0x8060D400
Layout* PageController::loadLayoutForResource(u32 resourceId) {
    if (!resourceId) return nullptr;
    void* ld = loadFromArchive("UI/Layout"); if (!ld) return nullptr;
    Layout* layout = new Layout(); if (layout) { layout->construct(); layout->onLoad(); }
    UNUSED(ld); return layout;
}

// @addr 0x8060D560
void PageController::releaseLayout(Layout* layout) {
    if (!layout) return;
    layout->setState(LAYOUT_STATE_INACTIVE); layout->destroy(1);
}

} // namespace UI