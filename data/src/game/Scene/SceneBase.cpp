// SceneBase.cpp - Base scene class implementation
// Reconstructed from Scene module

#include "SceneBase.hpp"

namespace Scene {

SceneBase::SceneBase()
    : m_state(STATE_UNINITIALIZED)
    , m_isTransitioning(false)
    , m_transitionFlags(0)
    , m_loadStatus(0)
    , m_loadSubStatus(0)
    , m_alphaFade(0xFF)
    , m_fadeTimerA(-1)
    , m_fadeTimerB(-1)
    , m_fadeCompleteA(0)
    , m_fadeCompleteB(0)
    , m_frameCount(0)
    , m_sceneId(0)
    , m_userData(nullptr) {}

SceneBase::~SceneBase() {}

void SceneBase::load() {
    // Default: mark as loading
    m_state = STATE_LOADING;
    m_loadStatus = 0;
}

void SceneBase::unload() {
    m_state = STATE_UNINITIALIZED;
}

void SceneBase::reset() {
    m_frameCount = 0;
    m_fadeTimerA = -1;
    m_fadeTimerB = -1;
    m_fadeCompleteA = 0;
    m_fadeCompleteB = 0;
    m_loadStatus = 0;
    m_loadSubStatus = 0;
    m_transitionFlags = 0;
    m_isTransitioning = false;
    m_alphaFade = 0xFF;
}

void SceneBase::beginTransition() {
    m_isTransitioning = true;
    m_fadeTimerA = 0;
    m_fadeCompleteA = 0;
}

void SceneBase::endTransition() {
    m_isTransitioning = false;
    m_fadeTimerB = -1;
    m_fadeCompleteB = 0;
    m_state = STATE_ACTIVE;
}

} // namespace Scene