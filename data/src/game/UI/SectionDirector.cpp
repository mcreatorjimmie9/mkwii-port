// SectionDirector.cpp - Scene/page flow director implementation
// Address range: 0x8071dde4 - 0x8071e8b8

#include "SectionDirector.hpp"
#include "MenuPage.hpp"
#include "Layout.hpp"
#include "LayoutLoader.hpp"
#include "PaneWrapper.hpp"
#include "ui_stubs.h"

namespace UI {

SectionDirector* SectionDirector::sInstance = nullptr;

SectionDirector::SectionDirector()
    : mState(DIRECTOR_IDLE)
    , mCurrentSceneId(0)
    , mPreviousSceneId(0)
    , mPendingSceneId(0)
    , mSceneCount(0)
    , mActivePlayerMask(0)
    , mSceneCategory(SCENE_CAT_TITLE)
    , mTransitionFlags(0)
    , mNetworkState(0)
    , mSceneLayout(nullptr)
    , mHUDInstanceCount(0)
    , mTransitionTimer(0.0f)
    , mTargetSceneId(0) {
    memset(mSceneStack, 0, sizeof(mSceneStack));
    mSceneStackDepth = 0;
    memset(mCourseAssignments, 0, sizeof(mCourseAssignments));
    memset(mSectionPages, 0, sizeof(mSectionPages));
}

SectionDirector::~SectionDirector() {
}

SectionDirector* SectionDirector::getInstance() {
    return sInstance;
}

void SectionDirector::createInstance() {
    if (sInstance == nullptr) {
        sInstance = new SectionDirector();
    }
}

void SectionDirector::destroyInstance() {
    if (sInstance != nullptr) {
        delete sInstance;
        sInstance = nullptr;
    }
}

// @addr 0x8071dde4
void SectionDirector::changeScene(u32 param, MenuPage* page, u32 playerMask) {
    s32 transitionId = page->mTransitionId;

    if (transitionId == -100) {
        // Special: return to previous scene
        Page* overlayPage = getActivePageFromGroup(0x204);
        if (overlayPage != nullptr && isPageInList(overlayPage)) {
            if (overlayPage->isOverlayActive()) {
                overlayPage->onClose();
            }
        }
        return;
    }

    if (transitionId == -1) {
        // No transition
        return;
    }

    // Store target scene
    mTargetSceneId = transitionId;

    // Route through special handlers
    s32 routed = routeSpecialScene(mCurrentSceneId);
    if (routed == 0) {
        routed = routeGhostScene(mCurrentSceneId);
        if (routed == 0) {
            routed = routeTournamentScene(mCurrentSceneId);
            if (routed == 0) {
                mCourseAssignments[0].courseId = transitionId;
                resolveCourseAssignments();
                performSceneTransition(param, 0x6D, page);
            } else {
                mCourseAssignments[0].courseId = transitionId;
                // Handle tournament scene
                CourseSelectionData selData;
                selData.count = 0;
                selData.data = 0;
                getTournamentCourses(&selData);
                resolveCourseAssignments();

                // Assign courses from selection data
                u32 courseIdx = 0;
                u32 courseCount = 0;
                while (courseCount < selData.count) {
                    u8 courseId = selData.data[courseIdx];
                    if (courseId != 0xFF) {
                        mCourseAssignments[(courseIdx + 1) & 0xFF].courseId = courseId;
                    }
                    courseIdx++;
                    courseCount++;
                }
                performSceneTransition(param, 0x6D, page);
            }
        } else {
            mCourseAssignments[0].courseId = transitionId;
            performSceneTransition(param, 0x6D, page);
        }
    } else {
        // Direct scene routing (e.g. online lobby)
        getSceneDirector()->mOnlineSceneId = transitionId;
        performSceneTransition(param, 0x6D, page);
    }

    // Notify callback system
    notifySceneComplete(playerMask);
}

// @addr 0x8071e06c
void SectionDirector::onSceneChange(MenuPage* page, s32 sceneId, s32 param) {
    if (sceneId == -100) return;

    mTargetSceneId = sceneId;

    // Find and update the scene name pane
    PaneWrapper* namePane = (PaneWrapper*)findPaneByIndex((void*)((u8*)page + 0x24), 0);
    if (namePane != nullptr && isPaneVisible(namePane)) {
        u32 msgId = getSceneNameMessageId(mTargetSceneId);
        setTextBinding(namePane, msgId, 0);

        // Multi-HUD: set names for all instances
        if (mHUDInstanceCount > 1) {
            setMultiHUDNames(this + 0x6F8, mTargetSceneId);
        }
    }
}

// @addr 0x8071e188
void SectionDirector::requestOverlay(MenuPage* page) {
    Page* overlayPage = getActivePageFromGroup(0x204);
    if (overlayPage != nullptr && isPageInList(overlayPage)) {
        if (overlayPage->isOverlayActive()) {
            overlayPage->onClose();
        }
    }
}

// @addr 0x8071e50c
void SectionDirector::setPageTransitionId(MenuPage* page, s32 transitionId) {
    page->mTransitionId = transitionId;

    if (transitionId == -1) {
        // No transition - hide all panes immediately
        hidePane(page, 0xCE, 0);
        hidePane(page, 0xD4, 0);
        hidePane(page, 0xE1, 0);
        hidePane(page, 0xEE, 0);
        hidePane(page, 0xFD, 0);
    } else {
        // Transition animation - show panes
        hidePane(page, 0x10C, 1);
        hidePane(page, 0x112, 1);
        hidePane(page, 0x11F, 1);
        hidePane(page, 0x12C, 1);
        hidePane(page, 0x13B, 1);
        showPicturePage(page, mTargetSceneId);
    }
}

// @addr 0x8071e624
void SectionDirector::resolveCourseAssignments() {
    u8 startIndex, endIndex;
    u8 rangeCount;
    getCourseRange(&startIndex, &endIndex);
    rangeCount = (endIndex - startIndex) + startIndex;

    u8 defaultCourseCount = 2;
    if ((mCurrentSceneId > 0x47 && mCurrentSceneId < 0x4B) || mCurrentSceneId == 0x54) {
        defaultCourseCount = getSceneDirector()->mOnlinePlayerCount;
    }

    for (u8 i = startIndex; i < rangeCount; i++) {
        u8 courseId = mCourseAssignments[i].courseId;
        if (courseId == 1) {
            // Course needs resolution from online/vote data
            u8 resolvedId = resolveOnlineCourse(courseId);
            courseId = resolvedId;
        }

        // Look up the actual course from assignment tables
        u32 courseTableIdx = getCourseTableIndex(courseId);
        u32 tableEntry = getCourseTableEntry(courseTableIdx);

        while (!isValidCourseEntry(tableEntry)) {
            courseTableIdx = getCourseTableIndex(courseId);
            tableEntry = getCourseTableEntry(courseTableIdx);
        }

        mCourseAssignments[i].courseId = tableEntry;
    }
}

// @addr 0x8071e758
void SectionDirector::refreshCourseList() {
    CourseSelectionData selData;
    selData.count = 0;
    selData.data = 0;
    getTournamentCourses(&selData);
    resolveCourseAssignments();

    u32 courseIdx = 0;
    u32 count = 0;
    while (true) {
        u32 maxEntries = 0xB;
        if (selData.count < 0xB) {
            maxEntries = selData.count;
        }
        if ((s32)maxEntries <= count) break;

        u8 courseId = selData.data[count * 2 + 0x29];
        if (courseId != 0xFF) {
            mCourseAssignments[(count + 1) & 0xFF].courseId = courseId;
        }
        count++;
    }
}

// @addr 0x8071e7f8
void SectionDirector::updateGhostData(MenuPage* page) {
    if (page->mInitFlag == 0) {
        setGhostData(page + 0x1BE, page->mPageId);
    } else {
        u32 ghostId = page->getGhostDataId();
        setGhostData(page + 0x1BE, ghostId);
    }
}

// @addr 0x8071e858
void SectionDirector::updateReplayData(MenuPage* page) {
    if (page->mInitFlag == 0) {
        u32 replayId = page->getReplayDataId();
        setReplayData(page + 0x1BE, replayId);
    } else {
        setReplayData(page + 0x1BE, page->mPageId);
    }
}

// @addr 0x8071e25c
MenuPage* SectionDirector::findPageByAnimGroup(s32 sceneType, u32 groupIdx, u32 animIdx) {
    s32 paneIdx = 0;
    do {
        if (paneIdx >= mSceneCount) return nullptr;

        PaneWrapper* pane = (PaneWrapper*)findPaneByIndex((void*)((u8*)mSceneLayout + 0x24),
                                              (sceneType == 2) + 1);
        pane = (PaneWrapper*)findPaneByIndex((void*)((u8*)pane + 0x68), groupIdx);
        MenuPage* page = (MenuPage*)findPaneByIndex((void*)((u8*)pane + 0x68), animIdx);

        if (page != nullptr && isPaneVisible(page)) {
            if (isPaneBound(page)) {
                return page;
            }
        }
        paneIdx++;
    } while (true);
}

// @addr 0x8071e38c
MenuPage* SectionDirector::findPageByPane(s32 sceneType, s32 paneIndex) {
    u32 idx = 0;
    do {
        if (idx < (u32)mSceneCount) return nullptr;

        for (u32 j = 0; j < mSceneCount; j++) {
            PaneWrapper* pane = (PaneWrapper*)findPaneByIndex((void*)((u8*)mSceneLayout + 0x24),
                                                  (sceneType == 2) + 1);
            pane = (PaneWrapper*)findPaneByIndex((void*)((u8*)pane + 0x68), j);
            MenuPage* page = (MenuPage*)findPaneByIndex((void*)((u8*)pane + 0x68), idx);

            if (page != nullptr && isPaneBound(page) &&
                isPaneVisible(page) && page->getPaneIndex() == paneIndex) {
                return page;
            }
        }
        idx++;
    } while (true);
}

s32 SectionDirector::routeSpecialScene(u32 sceneId) {
    // Check if scene requires special routing (awards, channel select, etc.)
    return 0; // Base implementation - derived classes override
}

s32 SectionDirector::routeGhostScene(u32 sceneId) {
    // Check if this is a ghost/replay scene that needs special routing
    return 0;
}

s32 SectionDirector::routeTournamentScene(u32 sceneId) {
    // Check if this is a tournament scene
    return 0;
}

// @addr 0x8070f680
u32 SectionDirector::getSceneNameMessageId(u32 sceneId) {
    // Maps scene/category IDs to message string IDs
    // for displaying scene names in the UI
    switch (sceneId) {
    case 0: return 0x1000;
    case 1: return 0x1001;
    case 2: return 0x1002;
    default: return 0x1000;
    }
}

// ============================================================================
// init() — Reset the section director to initial state
// @addr 0x8071dd80
// ============================================================================

void SectionDirector::init() {
    mState = DIRECTOR_IDLE;
    mCurrentSceneId = 0;
    mPreviousSceneId = 0;
    mPendingSceneId = 0;
    mSceneCount = 0;
    mActivePlayerMask = 0;
    mSceneCategory = SCENE_CAT_TITLE;
    mTransitionFlags = 0;
    mNetworkState = 0;
    mSceneLayout = nullptr;
    mHUDInstanceCount = 0;
    mTransitionTimer = 0.0f;
    mTargetSceneId = 0;

    mSceneStackDepth = 0;
    memset(mSceneStack, 0, sizeof(mSceneStack));
    memset(mCourseAssignments, 0, sizeof(mCourseAssignments));
    memset(mSectionPages, 0, sizeof(mSectionPages));
}

// ============================================================================
// onUpdate() — Per-frame update for the section director
// @addr 0x8071dda0
//
// Updates the transition timer and processes state changes.
// ============================================================================

void SectionDirector::onUpdate(f32 dt) {
    if (mState == DIRECTOR_TRANSITIONING) {
        mTransitionTimer -= dt;
        if (mTransitionTimer <= 0.0f) {
            mTransitionTimer = 0.0f;
            mState = DIRECTOR_IDLE;
        }
    }
}

// ============================================================================
// changeSection() — Switch to a different scene category
// @addr 0x8071DDF0
//
// Updates the current and previous section, and transitions
// to the section's registered page if available.
// ============================================================================

void SectionDirector::changeSection(u32 newSection) {
    if (newSection >= SCENE_CAT_COUNT) return;

    mPreviousSceneId = mCurrentSceneId;
    mSceneCategory = (SceneCategory)newSection;

    // If a page is registered for this section, activate it
    if (mSectionPages[newSection] != nullptr) {
        mState = DIRECTOR_TRANSITIONING;
        mTransitionTimer = 0.5f;
    }
}

// ============================================================================
// getCurrentSection() — Get the current scene category
// @addr 0x8071DE00
// ============================================================================

SceneCategory SectionDirector::getCurrentSection() const {
    return mSceneCategory;
}

// ============================================================================
// getPreviousSection() — Get the previous scene category
// @addr 0x8071DE10
//
// Returns the section that was active before the current one.
// If no previous section exists, returns SCENE_CAT_TITLE.
// ============================================================================

SceneCategory SectionDirector::getPreviousSection() const {
    // Look up the previous scene ID's category from a simple mapping
    // In the real game, this would be tracked via the scene stack
    u32 prev = mPreviousSceneId;
    if (prev < 0x10) return SCENE_CAT_TITLE;
    if (prev < 0x20) return SCENE_CAT_MENU;
    if (prev < 0x30) return SCENE_CAT_CHARACTER_SELECT;
    if (prev < 0x40) return SCENE_CAT_COURSE_SELECT;
    if (prev < 0x50) return SCENE_CAT_RACE;
    if (prev < 0x60) return SCENE_CAT_RESULT;
    if (prev < 0x70) return SCENE_CAT_ONLINE;
    return SCENE_CAT_MENU;
}

// ============================================================================
// registerSection() — Register a page handler for a scene category
// @addr 0x8071DE20
//
// Associates a MenuPage with a section category so that the director
// can automatically activate it during transitions.
// ============================================================================

void SectionDirector::registerSection(SceneCategory cat, MenuPage* page) {
    if (cat >= SCENE_CAT_COUNT) return;
    mSectionPages[cat] = page;
}

// ============================================================================
// unregisterSection() — Remove a section's page handler
// @addr 0x8071DE30
// ============================================================================

void SectionDirector::unregisterSection(SceneCategory cat) {
    if (cat >= SCENE_CAT_COUNT) return;
    mSectionPages[cat] = nullptr;
}

// ============================================================================
// isSectionActive() — Check if a section is currently active
// @addr 0x8071DE40
// ============================================================================

bool SectionDirector::isSectionActive(SceneCategory cat) const {
    return mSceneCategory == cat;
}

} // namespace UI