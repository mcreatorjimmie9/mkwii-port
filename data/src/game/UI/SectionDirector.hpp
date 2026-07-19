#pragma once
// SectionDirector.hpp - Manages page/scene flow and transitions
// The central coordinator for switching between UI screens
// Address range: 0x8071dde4 - 0x8071e8b8

#include "rk_common.h"

namespace UI {

class MenuPage;
class Layout;

// Scene flow constants
enum SceneFlow {
    SCENE_FLOW_NONE = -1,
    SCENE_FLOW_FORWARD = 0,
    SCENE_FLOW_BACK = 1,
    SCENE_FLOW_REPLACE = 2,
    SCENE_FLOW_OVERLAY = 3,
    SCENE_FLOW_POPUP = 4,
};

// Scene routing categories for the director
enum SceneCategory {
    SCENE_CAT_TITLE = 0,
    SCENE_CAT_MENU = 1,
    SCENE_CAT_CHARACTER_SELECT = 2,
    SCENE_CAT_KART_SELECT = 3,
    SCENE_CAT_COURSE_SELECT = 4,
    SCENE_CAT_RACE = 5,
    SCENE_CAT_RESULT = 6,
    SCENE_CAT_ONLINE = 7,
    SCENE_CAT_SETTINGS = 8,
    SCENE_CAT_AWARDS = 9,
    SCENE_CAT_COUNT = 10,
};

// Section director state
enum DirectorState {
    DIRECTOR_IDLE = 0,
    DIRECTOR_TRANSITIONING = 1,
    DIRECTOR_LOADING = 2,
    DIRECTOR_WAITING = 3,
};

class SectionDirector {
public:
    SectionDirector();
    ~SectionDirector();

    // Singleton
    static SectionDirector* getInstance();
    static void createInstance();
    static void destroyInstance();

    // --- Scene management ---
    // @addr 0x8071dde4
    void changeScene(u32 param, MenuPage* page, u32 playerMask);

    // @addr 0x8071e06c
    void onSceneChange(MenuPage* page, s32 sceneId, s32 param);

    // @addr 0x8071e188
    void requestOverlay(MenuPage* page);

    // @addr 0x8071e50c
    void setPageTransitionId(MenuPage* page, s32 transitionId);

    // @addr 0x8071e624
    void resolveCourseAssignments();

    // @addr 0x8071e758
    void refreshCourseList();

    // @addr 0x8071e7f8
    void updateGhostData(MenuPage* page);

    // @addr 0x8071e858
    void updateReplayData(MenuPage* page);

    // --- State queries ---
    DirectorState getState() const { return mState; }
    u32 getCurrentSceneId() const { return mCurrentSceneId; }
    u32 getTargetSceneId() const { return mTargetSceneId; }
    bool isTransitioning() const { return mState == DIRECTOR_TRANSITIONING; }

    // --- Page lookup ---
    // @addr 0x8071e25c
    MenuPage* findPageByAnimGroup(s32 sceneType, u32 groupIdx, u32 animIdx);
    // @addr 0x8071e38c
    MenuPage* findPageByPane(s32 sceneType, s32 paneIndex);

    // --- Configuration ---
    void setSceneCount(u32 count) { mSceneCount = count; }
    u32 getSceneCount() const { return mSceneCount; }

    // Course assignment data
    struct CourseAssignment {
        u8 courseId;
        u8 isConfirmed;
        u8 _pad[2];
    };

    CourseAssignment mCourseAssignments[12]; // 0x308
    u32 mTargetSceneId;          // 0x6F4

private:
    static SectionDirector* sInstance;

    // Scene stack
    static const u32 MAX_SCENE_STACK = 12;
    u32 mSceneStack[MAX_SCENE_STACK];
    u32 mSceneStackDepth;

    // Current state
    DirectorState mState;
    u32 mCurrentSceneId;
    u32 mPreviousSceneId;
    u32 mPendingSceneId;

    // Scene configuration
    u32 mSceneCount;              // 0xA08
    u32 mActivePlayerMask;
    SceneCategory mSceneCategory;
    u32 mTransitionFlags;
    u32 mNetworkState;            // Used for online scene routing

    // Layout
    Layout* mSceneLayout;         // 0x024
    u32 mHUDInstanceCount;        // 0x08

    // Timing
    f32 mTransitionTimer;

    // Internal routing
    s32 routeSpecialScene(u32 sceneId);
    s32 routeGhostScene(u32 sceneId);
    s32 routeTournamentScene(u32 sceneId);
    void executeSceneChange(u32 targetScene, u32 playerMask);

    // @addr 0x8070f680
    u32 getSceneNameMessageId(u32 sceneId);
};

} // namespace UI