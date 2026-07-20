#pragma once
// PageController.hpp - Central page lifecycle coordinator
// Manages page creation, transitions, brlan binding, and overlay stacking
// Address range: 0x8060A194 - 0x8061A000

#include "rk_common.h"

namespace UI {

class MenuPage;
class Layout;
class PaneWrapper;
class AnimationController;
class PageManager;

// Controller-level page states (separate from MenuPage::PageState)
enum PageCtrlState {
    PCTRL_UNINITIALIZED = 0,
    PCTRL_LOADING = 1,
    PCTRL_ENTERING = 2,
    PCTRL_ACTIVE = 3,
    PCTRL_EXITING = 4,
    PCTRL_DESTROYED = 5,
};

// Internal controller phase for state machine processing
enum ControllerPhase {
    CTRLPHASE_IDLE = 0,
    CTRLPHASE_LOAD_PENDING = 1,
    CTRLPHASE_LOAD_IN_PROGRESS = 2,
    CTRLPHASE_ENTER_PENDING = 3,
    CTRLPHASE_ENTER_ANIMATING = 4,
    CTRLPHASE_EXIT_PENDING = 5,
    CTRLPHASE_EXIT_ANIMATING = 6,
    CTRLPHASE_DESTROY_PENDING = 7,
};

// Transition types for page changes
enum PageTransitionType {
    PAGE_TRANS_NONE = 0,
    PAGE_TRANS_FADE = 1,
    PAGE_TRANS_SLIDE_LEFT = 2,
    PAGE_TRANS_SLIDE_RIGHT = 3,
    PAGE_TRANS_SLIDE_UP = 4,
    PAGE_TRANS_SLIDE_DOWN = 5,
    PAGE_TRANS_WIPE_H = 6,
    PAGE_TRANS_WIPE_V = 7,
    PAGE_TRANS_DISSOLVE = 8,
};

// Transition information between pages
struct TransitionInfo {
    PageTransitionType type;
    f32 duration;
    f32 progress;
    u32 sourcePageId;
    u32 targetPageId;
    u8 isActive;
    u8 _pad[3];
};

// Per-page tracking entry
struct PageEntry {
    MenuPage* page;
    PageCtrlState state;
    ControllerPhase phase;
    Layout* boundLayout;
    u32 animGroupRef;
    u32 frameCtrlRef;
    f32 stateTimer;
    TransitionInfo transition;
    u8 isVisible;
    u8 inputEnabled;
    u8 overlayLayer;
    u8 _pad;
};

class PageController {
public:
    PageController();
    ~PageController();

    // Singleton
    static PageController* getInstance();
    static void createInstance();
    static void destroyInstance();

    // --- Initialization ---
    // @addr 0x8060A194
    void init(PageManager* pageManager);
    // @addr 0x8060A3B0
    void shutdown();

    // --- Page lifecycle ---
    // @addr 0x8060A540
    MenuPage* createPage(u32 pageId, u32 param);
    // @addr 0x8060A700
    void destroyPage(MenuPage* page);
    // @addr 0x8060A8C4
    void destroyAllPages();

    // --- Transitions ---
    // @addr 0x8060AB30
    void transitionTo(u32 targetPageId, PageTransitionType transType, f32 duration);
    // @addr 0x8060AD20
    void transitionImmediate(u32 targetPageId);

    // --- Overlay management ---
    // @addr 0x8060AEC0
    void pushOverlay(MenuPage* overlay, f32 enterDuration);
    // @addr 0x8060B030
    void popOverlay(f32 exitDuration);
    // @addr 0x8060B180
    MenuPage* getTopOverlay() const;
    s32 getOverlayCount() const { return mOverlayCount; }

    // --- Layout/animation binding ---
    // @addr 0x8060B300
    void bindLayout(MenuPage* page, Layout* layout);
    // @addr 0x8060B4A0
    void unbindLayout(MenuPage* page);
    // @addr 0x8060B600
    void bindAnimationGroup(MenuPage* page, u32 groupId, u32 animId);
    // @addr 0x8060B780
    void unbindAnimationGroup(MenuPage* page, u32 groupId);

    // --- State queries ---
    // @addr 0x8060B900
    MenuPage* getActivePage() const;
    // @addr 0x8060BA50
    MenuPage* findPageById(u32 pageId) const;
    bool isTransitioning() const { return mTransitionActive; }
    f32 getTransitionProgress() const { return mCurrentTransition.progress; }

    // --- Update/draw ---
    // @addr 0x8060BB80
    void update(f32 deltaTime);
    // @addr 0x8060BD20
    void draw();

    // --- Transition control ---
    void setTransitionSpeed(f32 speed) { mTransitionSpeed = speed; }
    // @addr 0x8060BE90
    void skipTransition();
    // @addr 0x8060BFC0
    void suppressInput(bool suppress);

    // --- Visibility ---
    // @addr 0x8060C100
    void setPageAlpha(MenuPage* page, f32 alpha);
    // @addr 0x8060C280
    void setPageVisible(MenuPage* page, bool visible);

    // --- Frame control ---
    // @addr 0x8060C400
    u32 getFrameController(MenuPage* page) const;
    // @addr 0x8060C540
    void setFrameController(MenuPage* page, u32 frameCtrl);

    // --- Input ---
    bool isInputSuppressed() const { return mInputSuppressed; }

    // --- Configuration ---
    void setMaxPages(u32 max) { UNUSED(max); }
    u32 getManagedCount() const { return mManagedCount; }

private:
    static PageController* sInstance;
    static const u32 MAX_MANAGED_PAGES = 16;
    static const u32 MAX_OVERLAY_DEPTH = 4;

    // Page pool
    PageEntry mPages[MAX_MANAGED_PAGES];
    u32 mManagedCount;

    // Overlay stack (indices into mPages)
    s32 mOverlayStack[MAX_OVERLAY_DEPTH];
    s32 mOverlayCount;

    // Active page index (-1 if none)
    s32 mActivePageIndex;

    // Transition state
    TransitionInfo mCurrentTransition;
    bool mTransitionActive;
    f32 mTransitionSpeed;

    // Input suppression
    bool mInputSuppressed;
    u32 mInputSuppressTimer;

    // Page manager reference
    PageManager* mPageManager;

    // Internal state machine
    ControllerPhase mPhase;
    u32 mPendingPageId;
    PageTransitionType mPendingTransType;
    f32 mPendingDuration;

    // State machine helpers
    void processState(f32 deltaTime);
    void processPhase(ControllerPhase phase, f32 deltaTime);
    void transitionEnterState(PageEntry& entry, f32 deltaTime);
    void transitionExitState(PageEntry& entry, f32 deltaTime);
    void transitionLoadState(PageEntry& entry, f32 deltaTime);

    // Page management helpers
    s32 findPageIndex(MenuPage* page) const;
    s32 findFreeSlot() const;
    PageEntry* allocateEntry();
    void freeEntry(PageEntry& entry);

    // Layout helpers
    Layout* loadLayoutForResource(u32 resourceId);
    void releaseLayout(Layout* layout);
};

} // namespace UI