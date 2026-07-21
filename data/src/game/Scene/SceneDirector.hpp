#pragma once
// SceneDirector.hpp - Top-level scene transition manager
// Reconstructed from Scene module (0x805b0028 - 0x805c0154)
//
// SceneDirector is the singleton that owns the current scene and
// orchestrates transitions between scenes (e.g. Menu → Race → Results).

#include "rk_common.h"
#include "SceneCreator.hpp"  // SceneId, SceneArgs for factory-based transitions

namespace Scene {

class SceneBase;

// =============================================================================
// SceneDirector — Manages scene lifecycle and transitions
//
// This is the EGG::Scene equivalent for MKWii. It holds the current
// and next scene, drives the state machine for fade-in/fade-out
// transitions, and delegates calc()/draw() to the active scene.
// =============================================================================
class SceneDirector {
public:
    enum TransitionType {
        TRANS_NONE = 0,
        TRANS_FADE_OUT = 1,
        TRANS_FADE_IN = 2,
        TRANS_WIPE = 3,
        TRANS_IMMEDIATE = 4,
    };

    static SceneDirector* getInstance();

    SceneDirector();
    ~SceneDirector();

    // Scene management
    void changeScene(SceneBase* nextScene, TransitionType type);
    void changeScene(SceneId sceneId, const SceneArgs* args = nullptr,
                     TransitionType type = TRANS_FADE_OUT);
    void update();
    void draw();

    // Scene stack operations (for overlays / pause menus)
    void pushScene(SceneId sceneId, const SceneArgs* args = nullptr);
    void popScene();

    // Scene access
    SceneBase* getCurrentScene() const { return m_currentScene; }
    SceneBase* getNextScene() const { return m_nextScene; }
    SceneBase* getPreviousScene() const;

    // Register scene factory
    void registerScene(SceneId sceneId);

    // Scene ready callback
    void onSceneReady(SceneBase* scene);

    // Fade accessors
    u8 getFadeAlpha() const;
    void setFadeColor(u8 r, u8 g, u8 b);
    f32 getFadeProgress() const;

    // Scene lookup
    SceneBase* getSceneByID(SceneId sceneId) const;

    // Fade management
    void updateFade();
    bool isTransitioning() const { return m_isFadingOut != 0 || m_isFadingIn != 0; }

    /// Render full-screen fade overlay quad via OpenGL.
    void renderFadeOverlay();

    // Scene teardown
    void destroyCurrentScene();

    // State queries
    bool isChanging() const { return m_nextScene != nullptr; }
    TransitionType getTransitionType() const { return m_transitionType; }
    u32 getFrameCount() const { return m_frameCount; }
    u32 getSceneCount() const;
    bool hasScene(SceneId sceneId) const;

    // Init / shutdown
    void init();
    void shutdown();

private:
    void updateTransition();
    void startFadeOut();
    void startFadeIn();
    void finalizeTransition();

    SceneBase* m_currentScene;   // Active scene being rendered
    SceneBase* m_nextScene;      // Scene being transitioned to
    TransitionType m_transitionType;
    u32 m_frameCount;
    u8 m_fadeProgress;           // 0-61 fade step counter
    u8 m_maxFadeSteps;           // 0x3D = 61 max steps
    u8 m_isFadingOut;
    u8 m_isFadingIn;
    u32 m_reserved[8];           // Padding for alignment

    // Scene stack for push/pop (overlays, pause menus)
    static const u32 MAX_SCENE_STACK = 4;
    SceneBase* m_sceneStack[MAX_SCENE_STACK];
    u32 m_stackTop;

    // Fade overlay state
    u8 m_fadeAlpha;               // Current overlay alpha (0-255)
    u8 m_fadeColorR;              // Fade color R
    u8 m_fadeColorG;              // Fade color G
    u8 m_fadeColorB;              // Fade color B

    static SceneDirector* s_instance;
};

} // namespace Scene