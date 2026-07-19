// SceneDirector.cpp - Scene transition manager implementation
// Reconstructed from scene_ObjectDirector_* functions (0x805b0028 - 0x805c0154)

#include "SceneDirector.hpp"
#include "SceneBase.hpp"

namespace Scene {

SceneDirector* SceneDirector::s_instance = nullptr;

SceneDirector* SceneDirector::getInstance() {
    if (!s_instance) {
        s_instance = new SceneDirector();
    }
    return s_instance;
}

SceneDirector::SceneDirector()
    : m_currentScene(nullptr)
    , m_nextScene(nullptr)
    , m_transitionType(TRANS_NONE)
    , m_frameCount(0)
    , m_fadeProgress(0)
    , m_maxFadeSteps(0x3D)
    , m_isFadingOut(0)
    , m_isFadingIn(0) {
    for (u32 i = 0; i < 8; i++) m_reserved[i] = 0;
}

SceneDirector::~SceneDirector() {
    shutdown();
    s_instance = nullptr;
}

void SceneDirector::init() {
    m_frameCount = 0;
    m_fadeProgress = 0;
    m_isFadingOut = 0;
    m_isFadingIn = 0;
    m_transitionType = TRANS_NONE;
    m_currentScene = nullptr;
    m_nextScene = nullptr;
}

void SceneDirector::shutdown() {
    if (m_currentScene) {
        m_currentScene->unload();
        delete m_currentScene;
        m_currentScene = nullptr;
    }
    if (m_nextScene) {
        m_nextScene->unload();
        delete m_nextScene;
        m_nextScene = nullptr;
    }
}

void SceneDirector::changeScene(SceneBase* nextScene, TransitionType type) {
    if (m_nextScene) return; // Already transitioning
    if (!nextScene) return;

    m_nextScene = nextScene;
    m_transitionType = type;
    m_fadeProgress = 0;

    if (type != TRANS_IMMEDIATE) {
        startFadeOut();
    } else {
        finalizeTransition();
    }
}

void SceneDirector::update() {
    m_frameCount++;

    // Update transition state machine
    if (isChanging()) {
        updateTransition();
    }

    // Update active scene
    if (m_currentScene && m_currentScene->isActive()) {
        m_currentScene->calc();
    }
}

void SceneDirector::draw() {
    if (m_currentScene) {
        m_currentScene->draw();
    }
}

void SceneDirector::startFadeOut() {
    m_isFadingOut = 1;
    m_isFadingIn = 0;
    m_fadeProgress = 0;
}

void SceneDirector::startFadeIn() {
    m_isFadingOut = 0;
    m_isFadingIn = 1;
    m_fadeProgress = 0;
}

void SceneDirector::updateTransition() {
    if (m_isFadingOut) {
        // Advance fade-out counter (max 61 steps)
        if (m_fadeProgress < m_maxFadeSteps) {
            m_fadeProgress++;
        } else {
            // Fade-out complete — swap scenes
            finalizeTransition();
            if (m_transitionType != TRANS_NONE) {
                startFadeIn();
            }
        }
    } else if (m_isFadingIn) {
        // Advance fade-in counter
        if (m_fadeProgress < m_maxFadeSteps) {
            m_fadeProgress++;
        } else {
            // Fade-in complete
            m_isFadingIn = 0;
            m_transitionType = TRANS_NONE;
            if (m_currentScene) {
                m_currentScene->endTransition();
            }
        }
    }
}

void SceneDirector::finalizeTransition() {
    // Tear down old scene
    if (m_currentScene) {
        m_currentScene->unload();
        delete m_currentScene;
    }

    // Promote next to current
    m_currentScene = m_nextScene;
    m_nextScene = nullptr;

    // Initialize new scene
    if (m_currentScene) {
        m_currentScene->load();
        m_currentScene->setState(SceneBase::STATE_ACTIVE);
    }

    m_fadeProgress = 0;
    m_isFadingOut = 0;
}

} // namespace Scene