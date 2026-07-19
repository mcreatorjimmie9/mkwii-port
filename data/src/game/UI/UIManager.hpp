#pragma once
// UIManager.hpp - Top-level UI manager for Mario Kart Wii
// Manages the page stack, input routing, and global UI state
// Address range: spans the entire UI module

#include "rk_common.h"

namespace UI {

class MenuPage;
class Layout;
class AnimationController;

// Global UI state flags
enum UIFlag {
    UI_FLAG_INPUT_ENABLED = 0x01,
    UI_FLAG_TRANSITIONING = 0x02,
    UI_FLAG_FADING = 0x04,
    UI_FLAG_SUSPENDED = 0x08,
    UI_FLAG_ONLINE = 0x10,
    UI_FLAG_DEMO_MODE = 0x20,
};

struct CallbackSystem {
    void onSceneComplete(u32 mask) { (void)mask; }
};

struct GlobalUIState {
    u32 sceneId;               // Current scene/page ID
    u32 prevSceneId;           // Previous scene
    f32 globalTime;            // Running time for animations
    f32 deltaTime;             // Frame delta time
    u32 flags;                 // UIFlag bitmask
    u32 inputState;            // Current input state
    u32 heldButtons;           // Buttons held this frame
    u32 pressedButtons;        // Buttons pressed this frame
    u32 releasedButtons;       // Buttons released this frame
    u8 playerCount;            // Active player count (1-4)
    u8 localPlayerCount;       // Local player count
    u8 _pad[2];
    void* callbackSystem;      // Optional callback system pointer (actually CallbackSystem*)
};

class UIManager {
public:
    UIManager();
    ~UIManager();

    // Singleton access
    static UIManager* getInstance();
    static void createInstance();
    static void destroyInstance();

    // --- Main loop ---
    // @addr 0x8071e858
    void update();
    void draw();

    // --- Page management ---
    // @addr 0x8071e50c
    void pushPage(MenuPage* page, s32 transitionId);
    // @addr 0x8071dde4
    void popPage(u32 param, u32 playerMask);
    void replacePage(MenuPage* page, s32 transitionId);

    MenuPage* getActivePage() const { return mActivePage; }
    MenuPage* getTopPage() const;
    s32 getPageStackDepth() const { return mPageStackDepth; }

    // --- Layout management ---
    Layout* getActiveLayout() const { return mActiveLayout; }

    // --- Animation ---
    AnimationController* getAnimController() const { return mAnimController; }

    // --- Input ---
    void setInputEnabled(bool enabled);
    bool isInputEnabled() const { return (mFlags & UI_FLAG_INPUT_ENABLED) != 0; }

    // --- Global state ---
    const GlobalUIState& getGlobalState() const { return mGlobalState; }
    GlobalUIState& getGlobalStateMutable() { return mGlobalState; }

    u32 getSceneId() const { return mGlobalState.sceneId; }
    void setSceneId(u32 sceneId) { mGlobalState.sceneId = sceneId; }

    bool isOnline() const { return (mFlags & UI_FLAG_ONLINE) != 0; }
    bool isTransitioning() const { return (mFlags & UI_FLAG_TRANSITIONING) != 0; }
    bool isDemoMode() const { return (mFlags & UI_FLAG_DEMO_MODE) != 0; }

    // @addr 0x8050a7b8
    void handleOverlayInput();

    // @addr 0x8050a9bc
    void resetOverlayInput();

    // --- System ---
    void initSystems();
    void shutdown();

private:
    static UIManager* sInstance;

    // Page stack
    static const u32 MAX_PAGE_STACK = 8;
    MenuPage* mPageStack[MAX_PAGE_STACK];
    s32 mPageStackDepth;
    MenuPage* mActivePage;
    u32 mFlags;

    // Layout
    Layout* mActiveLayout;
    AnimationController* mAnimController;

    // Global state
    GlobalUIState mGlobalState;

    // Timing
    f32 mFrameTimer;
    u32 mFrameCount;
    u32 mHUDInstanceCount;     // number of HUD instances
    u32 mSceneChangeTarget;     // target scene for onSceneChange

    // Internal
    void updateInput();
    void updatePages(f32 dt);
    void drawPages();
    void processTransition(f32 dt);

    // @addr 0x8071e06c
    void onSceneChange(MenuPage* page, s32 sceneId, s32 param);
};

} // namespace UI