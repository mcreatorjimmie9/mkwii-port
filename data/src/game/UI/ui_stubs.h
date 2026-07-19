#pragma once
// ui_stubs.h — Stub declarations for external UI system functions
// These represent nw4r::lyt, EGG, and game-system APIs called by the UI module.

#include <cassert>
#include <algorithm>
#include <cstring>

// =============================================================================
// Forward declarations for external types
// =============================================================================
class Page;  // nw4r::lyt page base class used in page-group lookups

// Minimal Page stub for page-group interactions
class Page {
public:
    virtual ~Page() {}
    virtual s32 getAsyncLoadFlag() { return 0; }
    virtual void setAsyncLoadFlag(s32) {}
    virtual void setReplayMode(s32) {}
    virtual void setPageVisible(bool) {}
    virtual void setUpdateFlag(u32) {}
    virtual void setOverlayActive(u32) {}
    virtual bool isOverlayActive() { return false; }
    virtual u32 getOverlayFlag() { return 0; }
    virtual bool isPageInList() { return true; }
    virtual void onClose() {}
    virtual void setParentGroup(u32) {}
    u32 mCursorIndex;
};

// Scene::SceneDirector — forward-declared with the fields UI code accesses
class SceneDirector {
public:
    static SceneDirector* getInstance() { static SceneDirector s; return &s; }
    u32 mRaceResultType;
    u32 mRaceResultSubType;
    u32* mResultData;
    u32 mOnlineSceneId;
    u32 mOnlinePlayerCount;
    u32 mTargetScene;
    u32 mNetworkState;
    u32 mNetworkSubState;
};

// =============================================================================
// Inline stubs — layout pane / animation / text binding system
// =============================================================================

// Vtable / memory management
inline void initVtable() {}
inline void clearVtable() {}
inline void destroyChild(u32, s32) {}
inline void destroyChild(void*, s32) {}

// Pane reference management
inline void initPaneReference(void*) {}
inline void initPaneReference(u32) {}
inline void destroyPaneReference(void*, s32) {}
inline void destroyPaneReference(u32, s32) {}

// Text control management
inline void initTextCtrl(void*) {}
inline void initTextCtrl(u32) {}
inline void destroyTextCtrl(void*, s32) {}
inline void destroyTextCtrl(u32, s32) {}

// Animation group management
inline void initAnimGroup(void*) {}
inline void initAnimGroup(u32) {}
inline void destroyAnimGroup(void*, s32) {}
inline void destroyAnimGroup(u32, s32) {}

// Picture control management
inline void initPictureCtrl(void*) {}
inline void destroyPictureCtrl(void*, s32) {}

// Color group management
inline void initColorGroup(void*) {}
inline void initColorGroup(u32) {}

// Linked list management
inline void initLinkedList(u32) {}
inline void initLinkedListNode(void*) {}
inline void initLinkedListNode(u32) {}

// Animation frame management
inline void initAnimationFrame(u32) {}

// Animation playback
inline void stopAnimation(u32, s32, u32) {}
inline void stopAnimation(void*, s32, u32) {}
inline void unbindAnimationFrame(void*, u32) {}
inline void unbindAnimationFrame(u32, u32) {}
inline void clearAnimationFrameRef(void*, u32) {}
inline void clearAnimationFrameRef(u32, u32) {}
inline void setupColorAnimation(u32, u32, u32, u32) {}
inline void setActiveGroup(u32, s32) {}
inline void setActiveGroup(void*, s32) {}
inline void attachToGroup(void*, s32, u32, u32) {}
inline void attachToGroup(void*, s32, void*, u32) {}

// Window / pane management
inline void setWindowAlpha(u32, u32) {}
inline void setWindowFade(u32, u32) {}
inline void setAnimationFrameGroup(u32, u32, s32) {}

// Text binding
inline void setTextBinding(u32, u32, void*) {}
inline void setTextBinding(void*, u32, void*) {}
inline void clearTextBinding(u32, u32) {}
inline void clearTextBinding(void*, u32) {}

// Animation frame
inline void setAnimationFrame(u32, u32, u32) {}
inline void setAnimationFrame(void*, u32, u32) {}
inline void setAnimationFrameActive(u32, u32) {}
inline void setAnimFrameCount(u32, u32, u32) {}
inline void setAnimFrameRate(u32*, s32) {}
inline void setFrameRate(u32*, s32) {}
inline void initGridBounds(u32*, u32) {}

// Text bounds (multiple overloads)
inline void setTextBounds(u32, u32, u32, u32, u32 = 0, u32 = 0, u32 = 0) {}

// Pane binding
inline void bindAnimationFrame(u32, void*, u32) {}
inline void bindPositionRef(u32, void*) {}
inline void bindWindowToGroup(u32, u32, void*, u32, u32) {}

// Picture group
inline void initPictureGroup(u32) {}

// Color / bounds
inline void initColorBounds(u32*, u32) {}
inline void setBounds(u32*, u32, u32, u32, u32) {}

// Text group visibility
inline void hideTextGroup(u32) {}
inline void clearTextGroup(u32) {}

// Layout group management
inline void initLayoutGroup(u32&) {}
inline void releaseLayoutGroup(u32) {}
inline void setLayoutGroupFrameCount(u32, s32) {}
inline void addLayoutGroupChild(u32, void*) {}
inline void finalizeLayoutGroup(u32) {}

// Page / scene management
inline Page* getActivePageFromGroup(u32) { return nullptr; }
inline bool isPageInList(Page* p) { return p != nullptr; }
inline void sendPageMessage(Page*, u32, u32, s32 = 0, s32 = 0, void* = nullptr) {}
inline void onButtonAction(void*, u32, u32) {}
inline void registerUpdateCallback(void*, u32, u32) {}
inline void setLayoutReady(void*, u32) {}
inline void onPageTransition(void*, u32, u32) {}
inline void activateScene() {}

// System queries
inline s32 getCurrentSceneId() { return 0; }
inline u64 getDisplayInfo() { return 0; }
inline u32 getGlobalFlags() { return 0; }
inline void setGlobalFlags(u32 v) { (void)v; }
inline f32 getGlobalTime() { return 0.0f; }
inline f32 getGlobalFloat() { return 0.0f; }
inline void stopTransition() {}

// Scene / system
inline SceneDirector* getSceneDirector() { return SceneDirector::getInstance(); }
inline bool isSystemBusy() { return false; }
inline void cancelResourceLoad(u32, u32) {}
inline void resolveResourceId(u32) {}

// Resource management
inline void* loadFromArchive(const char*) { return nullptr; }
inline void unloadResource(u32*) {}
inline u32 computeHash(const char*) { return 0; }
inline void evictLRU() {}

// Text system
inline void advanceTextBinding(s32*, u32, s32) {}

// Pane tree operations
inline void* findChildPane(u32, const char*) { return nullptr; }
inline void* findPaneByIndex(void*, u32) { return nullptr; }
inline bool isPaneVisible(void*) { return false; }
inline bool isPaneBound(void*) { return false; }
inline void hidePane(void*, u32, u32) {}
inline void hidePane(void*, s32, s32) {}
inline void showPicturePage(void*, u32) {}

// nw4r::lyt stubs
inline void nw4r_lyt_BindAnimation(u32, const char*, u32) {}
inline void nw4r_lyt_UnbindAnimation(u32, const char*) {}
inline void nw4r_lyt_UpdateAnimations(u32, f32) {}
inline void nw4r_lyt_SetTextBoxString(u32*, const char*, void*) {}
inline void nw4r_lyt_ClearTextAnim(u32*, u32) {}

// Animation controller stubs
inline const char* resolvePaneNameFromId(u32) { return ""; }
inline u32 loadAnimationResource(u32) { return 0; }
inline f32 getAnimDuration(u32) { return 1.0f; }
inline void applyAnimationFrame(void*, u32, f32, f32) {}

// Scene name lookup
inline u32 getSceneNameMessageId(u32) { return 0; }
inline void setMultiHUDNames(void*, u32) {}

// Result data
inline void clearResultData(u32*) {}

// Tag data
inline void initTagData(u32*) {}

// Input / pointer
inline f32 getPointerX() { return 0.0f; }
inline f32 getPointerY() { return 0.0f; }
inline f32 getPointerZ() { return 0.0f; }
inline void updateSceneTransform(u32, f32, f32) {}
inline s32 readInputState(u32) { return 0; }
inline f32 getScenePositionX(u32) { return 0.0f; }
inline f32 getScenePositionY(u32) { return 0.0f; }
inline f32 getScenePositionZ(u32) { return 0.0f; }
inline s16 readPaneInputState(u32) { return 0; }
inline s32 findHitPane(u32, u32, f32) { return -1; }
inline u32 getColorFromHitIndex(s32) { return 0; }
inline void processHitTarget(u32) {}
inline void onAppearAnimation() {}
inline void onSlideAnimation() {}
inline void onRepeatAction() {}
inline void setVolume(u32, u32) {}

// Timing
inline s32 getRepeatDelay() { return 30; }

// Sound
inline void playSound(u32, s32) {}
inline void setSoundVolume(u32, u32) {}
// (setVolume is above with input/pointer)

// Network / online
inline u64 getNetworkStatus() { return 0; }
inline void onNetworkUpdate(f32, void*, u32, u32) {}
inline s32 checkOnlineStatus() { return 0; }
inline s32 getOnlineMode() { return 0; }
inline bool isWideScreen() { return false; }
inline bool isDemoMode() { return false; }
inline bool isOnlineMode() { return false; }
inline s32 isResultsMode(s32) { return 0; }
inline bool checkReplayData() { return false; }
inline void onResultsReady(f32, void*, u32, u32) {}

// Transition
inline f32 getTransitionProgress(f32) { return 0.0f; }
inline void onTransition(f32, void*, u32, u32) {}
inline void onTransition(void*, u32, u32) {}

// Course / ghost / replay
inline void getCourseRange(u8*, u8*) {}
inline u8 resolveOnlineCourse(u8) { return 0; }
inline u32 getCourseTableIndex(u8) { return 0; }
inline u32 getCourseTableEntry(u32) { return 0; }
inline bool isValidCourseEntry(u32) { return true; }
inline void getTournamentCourses(void*) { return; }
inline void setGhostData(void*, u32) {}
inline void setReplayData(void*, u32) {}

// Player / character
inline u8 getCurrentCharacter() { return 0; }
inline u8 getCharacterForType(u8) { return 0; }
inline u32 getPlayerSelectionCount() { return 0; }

// Text input
inline void initCharacterGrid(void*) {}
inline void initPlayerSelectionTag(u32*) {}
inline void initPlayerNameTag(u32*) {}
inline void resetPageCursor(void*) {}
inline bool isCurrentPlayerCharacterValid() { return true; }

// Page management
inline void configureDrawOrder(void*, void*) {}
inline void triggerDrawCallback(u32) {}
inline f32 getMaxDrawDistance() { return 100.0f; }
inline void updatePageDrawOrder(u32) {}
inline void updatePage(u32) {}
inline f32 getPageDepth(u32) { return 0.0f; }
inline void setPageDepth(u32, f32) {}
inline u8 getPageTypeFromRef(u32) { return 0; }
inline u32 getAnimGroupRef(void*) { return 0; }
inline void getOnlinePageLayout(s32, s32*) {}
inline s32 getGameDataRow() { return 0; }
inline s32 getLeaderboardRow() { return 0; }

// Group access
inline u32* getGroupArray(u32) { static u32 a = 0; return &a; }
inline u32*& getGroupChild(u32) { static u32* p = nullptr; return p; }

// Menu page
inline void initNavigationEntry(u32, void*, s32) {}
inline void initNavigationEntry(uintptr_t, void*, s32) {}
inline s32 getSystemMode() { return 0; }
inline void notifySceneComplete(u32) {}
inline void notifySceneChange(u32, u32) {}
inline void handleSceneRoute(u32, u32) {}

// Overlay
inline void resetOverlayNavigation() {}

// Input
inline void resolveInput(u32) {}

// Director routing
inline s32 routeSpecialScene(u32) { return 0; }
inline s32 routeGhostScene(u32) { return 0; }
inline s32 routeTournamentScene(u32) { return 0; }

// Course / scene
inline void resolveTransitionParam(void*) {}

// Scene message
inline const char* resolveMessageString(u32) { return ""; }

// Data queries
inline s32 getCurrentGameMode() { return 0; }
inline u32 readHeldButtons() { return 0; }
inline u32 readPressedButtons() { return 0; }
inline u32 readReleasedButtons() { return 0; }

// Clamp helper (for AnimationController)
namespace {
    inline f32 clamp(f32 val, f32 lo, f32 hi) {
        return std::max(lo, std::min(hi, val));
    }
}

// Timer callback
inline void onTimerUpdate() {}
inline void onTimerUpdate(f32) {}

// Page type constants
enum PageType {
    PAGE_TYPE_WIDE = 0,
    PAGE_TYPE_NARROW = 1,
};

// Online page layout data stub
struct StdOnlineData {
    u32 a8;
    u32 ac;
    u32 b0;
    u32 b4;
};

// Course selection data
struct CourseSelectionData {
    u32 count;
    u8* data;
};