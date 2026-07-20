// SceneDirector.cpp - Scene transition manager implementation
// Reconstructed from scene_ObjectDirector_* functions (0x805b0028 - 0x805c0154)

#include "SceneDirector.hpp"
#include "SceneBase.hpp"
#include "SceneCreator.hpp"
#include <cstring>
#include <math.h>

namespace Scene {

SceneDirector* SceneDirector::s_instance = nullptr;

// =============================================================================
// Singleton accessor
// =============================================================================
SceneDirector* SceneDirector::getInstance() {
    if (!s_instance) {
        s_instance = new SceneDirector();
    }
    return s_instance;
}

// =============================================================================
// Constructor / Destructor
// =============================================================================
SceneDirector::SceneDirector()
    : m_currentScene(nullptr)
    , m_nextScene(nullptr)
    , m_transitionType(TRANS_NONE)
    , m_frameCount(0)
    , m_fadeProgress(0)
    , m_maxFadeSteps(0x3D)
    , m_isFadingOut(0)
    , m_isFadingIn(0)
    , m_stackTop(0)
    , m_fadeAlpha(0)
    , m_fadeColorR(0)
    , m_fadeColorG(0)
    , m_fadeColorB(0) {
    for (u32 i = 0; i < 8; i++) m_reserved[i] = 0;
    for (u32 i = 0; i < MAX_SCENE_STACK; i++) {
        m_sceneStack[i] = nullptr;
    }
}

SceneDirector::~SceneDirector() {
    shutdown();
    s_instance = nullptr;
}

// =============================================================================
// init — Initialize scene stack, set up factory, prepare for first scene
// =============================================================================
void SceneDirector::init() {
    m_frameCount = 0;
    m_fadeProgress = 0;
    m_isFadingOut = 0;
    m_isFadingIn = 0;
    m_transitionType = TRANS_NONE;
    m_currentScene = nullptr;
    m_nextScene = nullptr;
    m_stackTop = 0;
    m_fadeAlpha = 0;
    m_fadeColorR = 0;
    m_fadeColorG = 0;
    m_fadeColorB = 0;

    // Clear the scene stack
    for (u32 i = 0; i < MAX_SCENE_STACK; i++) {
        m_sceneStack[i] = nullptr;
    }

    // Ensure the scene factory is initialized so scenes can be created
    SceneCreator::initGlobal();

    // The boot/menu scene is not created here — the boot sequence will call
    // changeScene(SCENE_TITLE) or changeScene(SCENE_MENU_TOP) to set the
    // initial scene. The factory is now ready for that call.
}

// =============================================================================
// shutdown — Tear down all scenes and the factory
// =============================================================================
void SceneDirector::shutdown() {
    // Destroy all scenes on the stack (top-down)
    while (m_stackTop > 0) {
        m_stackTop--;
        if (m_sceneStack[m_stackTop]) {
            m_sceneStack[m_stackTop]->unload();
            delete m_sceneStack[m_stackTop];
            m_sceneStack[m_stackTop] = nullptr;
        }
    }

    // Destroy the active and pending scenes
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

    SceneCreator::shutdownGlobal();
}

// =============================================================================
// changeScene (SceneBase*) — Direct scene swap with transition
// =============================================================================
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

// =============================================================================
// changeScene (SceneId) — Factory-based scene transition
//
// Uses SceneCreator to instantiate the new scene by ID, then delegates
// to the SceneBase* overload. This is the primary interface used by
// gameplay code to switch scenes.
// =============================================================================
void SceneDirector::changeScene(SceneId sceneId, const SceneArgs* args,
                                TransitionType type) {
    if (m_nextScene) return;

    // Look up the scene factory
    SceneCreator* factory = SceneCreator::getInstance();
    if (!factory || !factory->isRegistered(sceneId)) return;

    // Build default args if none provided
    SceneArgs defaultArgs;
    defaultArgs.sceneId = static_cast<u32>(sceneId);
    const SceneArgs& finalArgs = (args != nullptr) ? *args : defaultArgs;

    // Create the next scene via the factory
    SceneBase* nextScene = factory->createScene(sceneId, finalArgs);
    if (!nextScene) return;

    // Delegate to the SceneBase* overload
    changeScene(nextScene, type);
}

// =============================================================================
// update (calc) — Per-frame: advance fade, update transition, calc scene
// =============================================================================
void SceneDirector::update() {
    m_frameCount++;

    // Update the fade overlay alpha every frame
    updateFade();

    // Drive the transition state machine
    if (isChanging()) {
        updateTransition();
    }

    // Update the active scene
    if (m_currentScene && m_currentScene->isActive()) {
        m_currentScene->calc();
    }
}

// =============================================================================
// draw — Per-frame: draw active scene, then fade overlay if transitioning
// =============================================================================
void SceneDirector::draw() {
    if (m_currentScene) {
        m_currentScene->draw();
    }

    // During a fade transition, a full-screen overlay is drawn on top.
    // The renderer reads m_fadeAlpha (0-255) and m_fadeColorR/G/B to
    // composite the overlay.  The actual GX/OpenGL draw call is handled
    // by the graphics backend; we only set the state here.
    if (isTransitioning() && m_fadeAlpha > 0) {
        (void)m_fadeColorR;
        (void)m_fadeColorG;
        (void)m_fadeColorB;
    }
}

// =============================================================================
// pushScene — Push current scene onto stack, create new scene on top
//
// Used for overlays and pause menus. The current scene is saved on the
// stack with its state preserved. When popScene() is called, the old
// scene is restored exactly.
// =============================================================================
void SceneDirector::pushScene(SceneId sceneId, const SceneArgs* args) {
    if (m_stackTop >= MAX_SCENE_STACK) return;
    if (!m_currentScene) return;

    // Save the current scene on the stack
    m_sceneStack[m_stackTop] = m_currentScene;
    m_stackTop++;

    // Pause the pushed scene (it stays in memory but stops updating)
    m_currentScene->setState(SceneBase::STATE_READY);

    // Clear current so changeScene can set a new one
    m_currentScene = nullptr;
    m_nextScene = nullptr;

    // Create the new top scene via the factory
    changeScene(sceneId, args, TRANS_FADE_OUT);
}

// =============================================================================
// popScene — Pop top scene, restore previous scene from stack
//
// Destroys the current overlay scene and resumes the scene that was
// pushed. A fade-in transition plays so the restore looks smooth.
// =============================================================================
void SceneDirector::popScene() {
    if (m_stackTop == 0) return;

    // Tear down the current top scene
    destroyCurrentScene();

    // Restore the previous scene from the stack
    m_stackTop--;
    m_currentScene = m_sceneStack[m_stackTop];
    m_sceneStack[m_stackTop] = nullptr;

    if (m_currentScene) {
        m_currentScene->setState(SceneBase::STATE_ACTIVE);
        m_currentScene->beginTransition();
        startFadeIn();
    }

    m_transitionType = TRANS_FADE_IN;
}

// =============================================================================
// getSceneByID — Search current, next, and stack for a scene by ID
// =============================================================================
SceneBase* SceneDirector::getSceneByID(SceneId sceneId) const {
    // Check current scene
    if (m_currentScene &&
        m_currentScene->getSceneId() == static_cast<u32>(sceneId)) {
        return m_currentScene;
    }

    // Check the pending next scene
    if (m_nextScene &&
        m_nextScene->getSceneId() == static_cast<u32>(sceneId)) {
        return m_nextScene;
    }

    // Search the scene stack (bottom to top)
    for (u32 i = 0; i < m_stackTop; i++) {
        if (m_sceneStack[i] &&
            m_sceneStack[i]->getSceneId() == static_cast<u32>(sceneId)) {
            return m_sceneStack[i];
        }
    }

    return nullptr;
}

// =============================================================================
// updateFade — Manage fade-in/fade-out alpha overlay
//
// Converts the step counter (m_fadeProgress / m_maxFadeSteps) into a
// 0-255 alpha value for the overlay quad.
// =============================================================================
void SceneDirector::updateFade() {
    if (m_maxFadeSteps == 0) {
        m_fadeAlpha = 0;
        return;
    }

    f32 t = static_cast<f32>(m_fadeProgress) / static_cast<f32>(m_maxFadeSteps);

    if (m_isFadingOut) {
        // Fade-out: alpha ramps 0 → 255 (screen goes black)
        f32 alpha = t * 255.0f;
        if (alpha > 255.0f) alpha = 255.0f;
        m_fadeAlpha = static_cast<u8>(alpha);
    } else if (m_isFadingIn) {
        // Fade-in: alpha ramps 255 → 0 (screen reveals)
        f32 alpha = (1.0f - t) * 255.0f;
        if (alpha < 0.0f) alpha = 0.0f;
        if (alpha > 255.0f) alpha = 255.0f;
        m_fadeAlpha = static_cast<u8>(alpha);
    } else {
        m_fadeAlpha = 0;
    }
}

// =============================================================================
// destroyCurrentScene — Safely tear down current scene and all resources
// =============================================================================
void SceneDirector::destroyCurrentScene() {
    if (!m_currentScene) return;

    // Transition to shutdown state so the scene can release resources
    m_currentScene->setState(SceneBase::STATE_SHUTDOWN);
    m_currentScene->unload();
    delete m_currentScene;
    m_currentScene = nullptr;
}

// =============================================================================
// Internal transition helpers
// =============================================================================
void SceneDirector::startFadeOut() {
    m_isFadingOut = 1;
    m_isFadingIn = 0;
    m_fadeProgress = 0;
    // Default fade to black
    m_fadeColorR = 0;
    m_fadeColorG = 0;
    m_fadeColorB = 0;
}

void SceneDirector::startFadeIn() {
    m_isFadingOut = 0;
    m_isFadingIn = 1;
    m_fadeProgress = 0;
    // Fade color is preserved from the fade-out phase
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

    // Initialize the new scene
    if (m_currentScene) {
        m_currentScene->load();
        m_currentScene->init();
        m_currentScene->setState(SceneBase::STATE_ACTIVE);
    }

    m_fadeProgress = 0;
    m_isFadingOut = 0;
}

// @addr 0x805c0100 (estimated)
// getPreviousScene — Get the scene that was active before the current one.
// Returns nullptr if there was no previous scene or the stack is empty.
SceneBase* SceneDirector::getPreviousScene() const {
    if (m_stackTop > 0) {
        return m_sceneStack[m_stackTop - 1];
    }
    return nullptr;
}

// @addr 0x805c0120 (estimated)
// registerScene — Register a scene factory function for a given SceneId.
// This is typically called during game startup to register all available scenes.
void SceneDirector::registerScene(SceneId sceneId) {
    // In the full implementation, this registers a scene factory function
    // with the SceneCreator singleton so that changeScene(id) can create it.
    // The actual registration happens during game startup in SceneCreator::initGlobal().
    (void)sceneId;
}

// @addr 0x805c0140 (estimated)
// onSceneReady — Called by a scene when it has finished loading.
// Transitions the scene from READY to ACTIVE state.
void SceneDirector::onSceneReady(SceneBase* scene) {
    if (!scene) return;
    if (scene == m_currentScene) {
        scene->setState(SceneBase::STATE_ACTIVE);
    }
}

// @addr 0x805c0160 (estimated)
// getFadeAlpha — Get the current fade overlay alpha value.
u8 SceneDirector::getFadeAlpha() const {
    return m_fadeAlpha;
}

// @addr 0x805c0170 (estimated)
// setFadeColor — Set the fade transition color.
void SceneDirector::setFadeColor(u8 r, u8 g, u8 b) {
    m_fadeColorR = r;
    m_fadeColorG = g;
    m_fadeColorB = b;
}

// @addr 0x805c0180 (estimated)
// getSceneCount — Get the number of scenes on the stack.
u32 SceneDirector::getSceneCount() const {
    return m_stackTop;
}

// @addr 0x805c0190 (estimated)
// hasScene — Check if a scene with the given ID exists in the stack.
bool SceneDirector::hasScene(SceneId sceneId) const {
    return getSceneByID(sceneId) != nullptr;
}

// @addr 0x805c01A0 (estimated)
// getFadeProgress — Get the fade transition progress [0.0, 1.0].
f32 SceneDirector::getFadeProgress() const {
    if (m_maxFadeSteps == 0) return 0.0f;
    return static_cast<f32>(m_fadeProgress) / static_cast<f32>(m_maxFadeSteps);
}

} // namespace Scene