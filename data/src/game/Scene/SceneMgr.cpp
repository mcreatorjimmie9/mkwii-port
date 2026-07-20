// SceneMgr.cpp — Scene Lifecycle Manager with Stack Support
// Address range: 0x8060E000 - 0x80614000 (Gap 1 — scene lifecycle)

#include "SceneMgr.hpp"
#include "SceneBase.hpp"
#include "SceneCreator.hpp"
#include "SceneTransition.hpp"
#include <cstring>

namespace Scene {

SceneMgr* SceneMgr::s_instance = nullptr;

SceneMgr::SceneMgr()
    : m_currentScene(nullptr)
    , m_transition(nullptr)
    , m_stackTop(0)
    , m_loadState(LOAD_IDLE)
    , m_pendingSceneId(-1)
    , m_frameCount(0)
    , m_transitionSpeed(1.0f)
    , m_flags(0) {
    std::memset(m_stack, 0, sizeof(m_stack));
    std::memset(m_pad, 0, sizeof(m_pad));
}

SceneMgr::~SceneMgr() {
    shutdown();
}

// @addr 0x8060E000
void SceneMgr::init() {
    m_frameCount = 0;
    m_loadState = LOAD_IDLE;
    m_pendingSceneId = -1;
    m_transitionSpeed = 1.0f;
    m_flags = 0;
    m_stackTop = 0;

    // Create the transition controller
    if (!m_transition) {
        m_transition = new SceneTransition();
    }

    // Clear the stack
    for (u32 i = 0; i < MAX_STACK_DEPTH; i++) {
        m_stack[i].scene = nullptr;
        m_stack[i].sceneId = 0;
        m_stack[i].savedState = 0;
        m_stack[i].reserved = 0;
    }
}

// @addr 0x8060E100
void SceneMgr::calc() {
    m_frameCount++;

    // Update the loading state machine first
    if (m_loadState != LOAD_IDLE) {
        updateLoading();
    }

    // Update the transition effect
    if (m_transition) {
        m_transition->calc();
    }

    // Dispatch calc to the current scene
    if (m_currentScene && m_currentScene->isActive()) {
        m_currentScene->calc();
    }
}

// @addr 0x8060E300
void SceneMgr::draw() {
    // Draw the current scene
    if (m_currentScene) {
        m_currentScene->draw();
    }

    // Draw transition overlay on top
    if (m_transition && m_transition->isActive()) {
        m_transition->draw();
    }
}

// @addr 0x8060F000
void SceneMgr::shutdown() {
    // Destroy the current scene
    destroyCurrentScene();

    // Pop and destroy all stacked scenes
    clearStack();

    // Destroy transition
    if (m_transition) {
        delete m_transition;
        m_transition = nullptr;
    }

    m_loadState = LOAD_IDLE;
}

// @addr 0x8060F100
void SceneMgr::reset() {
    shutdown();
    init();
}

// @addr 0x8060E480
void SceneMgr::changeScene(s32 id, const SceneArgs* args) {
    if (m_loadState != LOAD_IDLE) return;

    m_pendingSceneId = id;
    if (args) {
        m_pendingArgs = *args;
    } else {
        m_pendingArgs = SceneArgs();
    }
    m_pendingArgs.sceneId = static_cast<u32>(id);
    m_loadState = LOAD_REQUESTED;
}

// @addr 0x8060E500
void SceneMgr::changeSceneImmediate(s32 id, const SceneArgs* args) {
    if (m_loadState != LOAD_IDLE) return;

    // Create the new scene via factory
    SceneCreator* creator = SceneCreator::getInstance();
    SceneArgs sceneArgs;
    if (args) {
        sceneArgs = *args;
    }
    sceneArgs.sceneId = static_cast<u32>(id);

    SceneBase* newScene = creator->createScene(static_cast<SceneId>(id), sceneArgs);
    if (newScene) {
        performSceneSwap(newScene);
    }
}

// @addr 0x8060E680
void SceneMgr::pushScene(s32 id, const SceneArgs* args) {
    if (m_stackTop >= MAX_STACK_DEPTH) return;
    if (!m_currentScene) return;

    // Push current scene onto stack
    SceneStackEntry& entry = m_stack[m_stackTop];
    entry.scene = m_currentScene;
    entry.sceneId = m_currentScene->getSceneId();
    entry.savedState = static_cast<u32>(m_currentScene->getState());
    entry.reserved = 0;
    m_stackTop++;

    // Save current args for potential restore
    m_savedArgs = m_pendingArgs;

    // Clear current (now on stack)
    m_currentScene = nullptr;

    // Switch to new scene
    changeScene(id, args);
}

// @addr 0x8060E800
void SceneMgr::popScene() {
    if (m_stackTop == 0) return;

    // Destroy current scene
    destroyCurrentScene();

    // Pop from stack
    m_stackTop--;
    SceneStackEntry& entry = m_stack[m_stackTop];
    m_currentScene = entry.scene;
    entry.scene = nullptr;

    // Restore the scene state
    if (m_currentScene) {
        m_currentScene->setState(
            static_cast<SceneBase::SceneState>(entry.savedState));
        m_currentScene->endTransition();
    }

    // Restore pending args
    m_pendingArgs = m_savedArgs;
}

// @addr 0x8060E980
SceneBase* SceneMgr::getCurrentScene() const {
    return m_currentScene;
}

// @addr 0x8060EA00
bool SceneMgr::isLoading() const {
    return m_loadState != LOAD_IDLE;
}

// @addr 0x8060EA80
void SceneMgr::updateLoading() {
    switch (m_loadState) {
    case LOAD_REQUESTED: {
        // Start creating the scene via factory
        m_loadState = LOAD_CREATING;

        SceneCreator* creator = SceneCreator::getInstance();
        SceneBase* newScene = creator->createScene(
            static_cast<SceneId>(m_pendingSceneId), m_pendingArgs);

        if (newScene) {
            m_loadState = LOAD_INITING;
            onSceneLoaded(newScene);
        } else {
            m_loadState = LOAD_FAILED;
            onSceneLoadFailed(m_pendingSceneId);
        }
        break;
    }

    case LOAD_CREATING:
        // Waiting for factory (synchronous in this implementation)
        break;

    case LOAD_INITING:
        // Scene is initializing; wait for it to become ready
        if (m_currentScene && m_currentScene->getState() != SceneBase::STATE_LOADING) {
            m_loadState = LOAD_READY;
        }
        break;

    case LOAD_READY:
        // Scene is fully loaded and ready
        m_loadState = LOAD_IDLE;
        if (m_currentScene) {
            m_currentScene->setState(SceneBase::STATE_ACTIVE);
        }
        break;

    case LOAD_FAILED:
        // Stay in failed state; could retry or go to error scene
        break;

    case LOAD_IDLE:
    default:
        break;
    }
}

// @addr 0x8060EB00
void SceneMgr::onSceneLoaded(SceneBase* scene) {
    if (!scene) return;

    // Start fade-out transition if one is active
    if (m_transition) {
        m_transition->fadeOut(30);  // ~0.5 seconds
    }

    // Destroy old scene
    destroyCurrentScene();

    // Set new scene as current
    m_currentScene = scene;
    scene->load();
    scene->init();
    scene->beginTransition();
    scene->setState(SceneBase::STATE_READY);

    // Start fade-in after a brief delay
    if (m_transition) {
        m_transition->fadeIn(30);
    }
}

void SceneMgr::onSceneLoadFailed(s32 id) {
    (void)id;
    // In the real game, this would show an error or fall back to title
    // For now, reset to idle
    m_loadState = LOAD_IDLE;
}

// @addr 0x8060EC00
u32 SceneMgr::getStackDepth() const {
    return m_stackTop;
}

// @addr 0x8060EC40
SceneBase* SceneMgr::peekStack(u32 depth) const {
    if (depth >= m_stackTop) return nullptr;
    u32 idx = m_stackTop - 1 - depth;
    return m_stack[idx].scene;
}

// @addr 0x8060ED00
void SceneMgr::clearStack() {
    for (u32 i = 0; i < m_stackTop; i++) {
        if (m_stack[i].scene) {
            m_stack[i].scene->unload();
            SceneCreator* creator = SceneCreator::getInstance();
            creator->destroyScene(m_stack[i].scene);
            m_stack[i].scene = nullptr;
        }
    }
    m_stackTop = 0;
}

// @addr 0x8060ED80
bool SceneMgr::isTransitioning() const {
    if (m_transition) {
        return m_transition->isActive();
    }
    return false;
}

// @addr 0x8060EE00
SceneTransition* SceneMgr::getTransition() const {
    return m_transition;
}

// @addr 0x8060EE80
void SceneMgr::setTransitionSpeed(f32 speed) {
    m_transitionSpeed = speed;
    if (m_transition) {
        m_transition->setSpeed(speed);
    }
}

// @addr 0x8060EF00
void SceneMgr::skipTransition() {
    if (m_transition) {
        m_transition->skip();
    }
}

// @addr 0x8060EF80
void SceneMgr::onVBlank() {
    // Called at the end of each frame
    // Used for double-buffer swap coordination
    if (m_currentScene) {
        m_currentScene->incrementFrame();
    }
}

// @addr 0x8060F200
SceneBase* SceneMgr::getSceneById(s32 id) const {
    if (m_currentScene && static_cast<s32>(m_currentScene->getSceneId()) == id) {
        return m_currentScene;
    }
    for (u32 i = 0; i < m_stackTop; i++) {
        if (m_stack[i].scene &&
            static_cast<s32>(m_stack[i].scene->getSceneId()) == id) {
            return m_stack[i].scene;
        }
    }
    return nullptr;
}

// @addr 0x8060F300
u32 SceneMgr::getSceneCount() const {
    u32 count = (m_currentScene ? 1 : 0);
    count += m_stackTop;
    return count;
}

// @addr 0x8060F400
void SceneMgr::dumpStack() const {
    // Debug: dump stack contents
    (void)m_stackTop;
}

// @addr 0x8060F500
void SceneMgr::preDestroyScene(SceneBase* scene) {
    if (!scene) return;

    // Allow the scene to perform any pre-destruction cleanup
    scene->unload();
    scene->setState(SceneBase::STATE_DESTROYED);
}

void SceneMgr::performSceneSwap(SceneBase* newScene) {
    destroyCurrentScene();
    m_currentScene = newScene;
    if (m_currentScene) {
        m_currentScene->load();
        m_currentScene->init();
        m_currentScene->setState(SceneBase::STATE_ACTIVE);
    }
}

void SceneMgr::destroyCurrentScene() {
    if (m_currentScene) {
        preDestroyScene(m_currentScene);
        SceneCreator* creator = SceneCreator::getInstance();
        creator->destroyScene(m_currentScene);
        m_currentScene = nullptr;
    }
}

SceneMgr* SceneMgr::getInstance() {
    if (!s_instance) {
        s_instance = new SceneMgr();
    }
    return s_instance;
}

} // namespace Scene