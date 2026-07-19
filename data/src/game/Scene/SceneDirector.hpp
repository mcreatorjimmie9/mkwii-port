#pragma once
// SceneDirector.hpp - Top-level scene transition manager
// Reconstructed from Scene module (0x805b0028 - 0x805c0154)
//
// SceneDirector is the singleton that owns the current scene and
// orchestrates transitions between scenes (e.g. Menu → Race → Results).

#include "rk_common.h"

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
    void update();
    void draw();

    // Scene access
    SceneBase* getCurrentScene() const { return m_currentScene; }
    SceneBase* getNextScene() const { return m_nextScene; }

    // State queries
    bool isChanging() const { return m_nextScene != nullptr; }
    TransitionType getTransitionType() const { return m_transitionType; }
    u32 getFrameCount() const { return m_frameCount; }

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

    static SceneDirector* s_instance;
};

} // namespace Scene