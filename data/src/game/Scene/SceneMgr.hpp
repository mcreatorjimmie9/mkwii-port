#pragma once
// SceneMgr.hpp — Scene Lifecycle Manager with Stack Support
// Address range: 0x8060E000 - 0x80614000 (Gap 1 — scene lifecycle)
//
// SceneMgr is the central orchestrator for scene management in MKWii.
// It extends the simpler SceneDirector with:
//   - A scene stack (up to 4 deep) for pause/sub-menu support
//   - Integration with SceneCreator factory for scene instantiation
//   - Integration with SceneTransition for visual transitions
//   - Per-frame calc() / draw() dispatching
//   - Loading state management for async scene creation
//
// The real SceneMgr sits at a known global pointer (referenced via
// r13-based addressing in the DOL). All scene switching goes through
// this singleton.

#include "rk_common.h"
#include "SceneCreator.hpp"  // For SceneArgs (used by value)

namespace Scene {

class SceneBase;
class SceneTransition;
class SceneCreator;

// =============================================================================
// SceneStackEntry — One frame on the scene stack
//
// Stores the scene pointer, its ID, and a saved state so that when
// a scene is popped, it can be restored exactly.
// =============================================================================
struct SceneStackEntry {
    SceneBase* scene;        // Scene instance (owned)
    u32        sceneId;      // Scene type ID
    u32        savedState;   // Saved scene state for restoration
    u32        reserved;     // Padding
};

// =============================================================================
// SceneMgr — Central scene lifecycle manager
//
// Owns the scene stack, the current transition, and dispatches
// calc/draw each frame. This is the EGG::SceneManager equivalent.
//
// Key addresses:
//   0x8060E000 — SceneMgr::init
//   0x8060E100 — SceneMgr::calc
//   0x8060E300 — SceneMgr::draw
//   0x8060E480 — SceneMgr::changeScene
//   0x8060E680 — SceneMgr::pushScene
//   0x8060E800 — SceneMgr::popScene
//   0x8060E980 — SceneMgr::getCurrentScene
//   0x8060EA00 — SceneMgr::isLoading
//   0x8060EA80 — SceneMgr::updateLoading
//   0x8060EB00 — SceneMgr::onSceneLoaded
//   0x8060EC00 — SceneMgr::getStackDepth
//   0x8060EC40 — SceneMgr::peekStack
//   0x8060ED00 — SceneMgr::clearStack
//   0x8060ED80 — SceneMgr::isTransitioning
//   0x8060EE00 — SceneMgr::getTransition
//   0x8060EE80 — SceneMgr::setTransitionSpeed
//   0x8060EF00 — SceneMgr::skipTransition
//   0x8060EF80 — SceneMgr::onVBlank
//   0x8060F000 — SceneMgr::shutdown
//   0x8060F100 — SceneMgr::reset
//   0x8060F200 — SceneMgr::getSceneById
//   0x8060F300 — SceneMgr::getSceneCount
//   0x8060F400 — SceneMgr::dumpStack
//   0x8060F500 — SceneMgr::preDestroyScene
// =============================================================================
class SceneMgr {
public:
    static const u32 MAX_STACK_DEPTH = 4;

    enum LoadState {
        LOAD_IDLE       = 0,  // No loading in progress
        LOAD_REQUESTED  = 1,  // Scene change requested
        LOAD_CREATING   = 2,  // Factory creating scene
        LOAD_INITING    = 3,  // Scene initializing resources
        LOAD_READY      = 4,  // Scene ready to activate
        LOAD_FAILED     = 5,  // Scene creation failed
    };

    SceneMgr();
    ~SceneMgr();

    // --- Lifecycle ---

    /// Initialize the scene manager (called once at startup).
    /// Sets up the initial scene (usually Title).
    /// @addr 0x8060E000
    void init();

    /// Per-frame update. Drives the loading state machine, updates
    /// the current transition, and dispatches calc() to the active scene.
    /// @addr 0x8060E100
    void calc();

    /// Per-frame draw. Dispatches draw() to the active scene and
    /// renders any active transition overlay.
    /// @addr 0x8060E300
    void draw();

    /// Shutdown the scene manager, destroying all scenes.
    /// @addr 0x8060F000
    void shutdown();

    /// Reset to initial state (used when returning to title).
    /// @addr 0x8060F100
    void reset();

    // --- Scene switching ---

    /// Request a transition to a new scene.
    /// @param id    Target scene ID
    /// @param args  Scene creation parameters
    /// @addr 0x8060E480
    void changeScene(s32 id, const SceneArgs* args = nullptr);

    /// Request immediate transition (no fade, instant swap).
    /// @addr 0x8060E500
    void changeSceneImmediate(s32 id, const SceneArgs* args = nullptr);

    // --- Stack operations ---

    /// Push the current scene onto the stack and switch to a new one.
    /// Used for sub-menus, pause screens, etc.
    /// @addr 0x8060E680
    void pushScene(s32 id, const SceneArgs* args = nullptr);

    /// Pop the top scene and restore the previous one.
    /// @addr 0x8060E800
    void popScene();

    /// Get the current depth of the scene stack.
    /// @addr 0x8060EC00
    u32 getStackDepth() const;

    /// Peek at a scene on the stack without popping.
    /// @param depth  0 = top, 1 = one below, etc.
    /// @addr 0x8060EC40
    SceneBase* peekStack(u32 depth = 0) const;

    /// Clear the entire scene stack, destroying all scenes.
    /// @addr 0x8060ED00
    void clearStack();

    // --- Queries ---

    /// Get the currently active scene.
    /// @addr 0x8060E980
    SceneBase* getCurrentScene() const;

    /// Check if the scene manager is currently loading a new scene.
    /// @addr 0x8060EA00
    bool isLoading() const;

    /// Get the current load state.
    LoadState getLoadState() const { return m_loadState; }

    /// Check if a transition is active.
    /// @addr 0x8060ED80
    bool isTransitioning() const;

    /// Get the current transition controller.
    /// @addr 0x8060EE00
    SceneTransition* getTransition() const;

    // --- Transition control ---

    /// Set the transition speed multiplier.
    /// @addr 0x8060EE80
    void setTransitionSpeed(f32 speed);

    /// Skip the current transition (force complete).
    /// @addr 0x8060EF00
    void skipTransition();

    // --- Frame callbacks ---

    /// Called on VBlank interrupt (end of frame).
    /// @addr 0x8060EF80
    void onVBlank();

    // --- Scene lookup ---

    /// Find a scene on the stack by its ID.
    /// @addr 0x8060F200
    SceneBase* getSceneById(s32 id) const;

    /// Get total number of scenes (active + on stack).
    /// @addr 0x8060F300
    u32 getSceneCount() const;

    /// Debug: dump the scene stack to log.
    /// @addr 0x8060F400
    void dumpStack() const;

    // --- Pre-destroy ---

    /// Called before destroying a scene to allow cleanup.
    /// @addr 0x8060F500
    void preDestroyScene(SceneBase* scene);

    // --- Singleton ---

    static SceneMgr* getInstance();

private:
    // --- Internal loading state machine ---

    /// @addr 0x8060EA80
    void updateLoading();

    /// @addr 0x8060EB00
    void onSceneLoaded(SceneBase* scene);

    /// Called when the scene factory fails to create a scene.
    void onSceneLoadFailed(s32 id);

    // --- Internal scene swap ---

    void performSceneSwap(SceneBase* newScene);
    void destroyCurrentScene();

    // --- Members ---

    SceneBase*         m_currentScene;      // 0x00 — Active scene
    SceneTransition*   m_transition;        // 0x04 — Current transition effect
    SceneStackEntry    m_stack[MAX_STACK_DEPTH]; // 0x08 — Scene stack
    u32                m_stackTop;          // Stack pointer
    LoadState          m_loadState;         // Loading state machine
    s32                m_pendingSceneId;    // Scene ID to load
    SceneArgs          m_pendingArgs;       // Args for pending scene
    SceneArgs          m_savedArgs;         // Saved args for stack restore
    u32                m_frameCount;        // Global frame counter
    f32                m_transitionSpeed;   // Transition speed multiplier
    u32                m_flags;             // Manager flags
    u8                 m_pad[12];           // Padding

    static SceneMgr* s_instance;
};

} // namespace Scene