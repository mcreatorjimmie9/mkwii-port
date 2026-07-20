// SceneCreator.cpp — Scene Factory and Registration System
// Address range: 0x8060A194 - 0x8060E000 (Gap 1 — scene management)
//
// Implements the EGG-style scene factory pattern. Each scene type registers
// a creation function at startup; SceneMgr uses the factory to instantiate
// scenes during transitions.

#include "SceneCreator.hpp"
#include "SceneBase.hpp"
#include <cstring>

namespace Scene {

SceneCreator* SceneCreator::s_instance = nullptr;

// @addr 0x8060A194
SceneCreator::SceneCreator()
    : m_registeredCount(0) {
    std::memset(m_entries, 0, sizeof(m_entries));
    for (u32 i = 0; i < MAX_SCENES; i++) {
        m_entries[i].id = SCENE_NONE;
        m_entries[i].registered = false;
        m_entries[i].createFunc = nullptr;
        m_entries[i].destroyFunc = nullptr;
    }
}

SceneCreator::~SceneCreator() {
    // Clear all registrations
    for (u32 i = 0; i < MAX_SCENES; i++) {
        m_entries[i].registered = false;
        m_entries[i].createFunc = nullptr;
        m_entries[i].destroyFunc = nullptr;
    }
    m_registeredCount = 0;
}

// @addr 0x8060A194
SceneBase* SceneCreator::createScene(SceneId id, const SceneArgs& args) {
    // Validate scene ID range
    if (id < 0 || static_cast<u32>(id) >= MAX_SCENES) {
        return nullptr;
    }

    Entry& entry = m_entries[static_cast<u32>(id)];
    if (!entry.registered || !entry.createFunc) {
        return nullptr;
    }

    // Invoke the registered factory function
    SceneBase* scene = entry.createFunc(args);
    return scene;
}

// @addr 0x8060A280
void SceneCreator::destroyScene(SceneBase* scene) {
    if (!scene) return;

    // Look up if this scene type has a custom destructor
    SceneId id = static_cast<SceneId>(scene->getSceneId());

    if (id >= 0 && static_cast<u32>(id) < MAX_SCENES) {
        Entry& entry = m_entries[static_cast<u32>(id)];
        if (entry.registered && entry.destroyFunc) {
            // Use custom destroy function
            entry.destroyFunc(scene);
            return;
        }
    }

    // Default: call virtual destructor then free
    delete scene;
}

// @addr 0x8060A320
void SceneCreator::registerCreator(SceneId id, CreateFunc create, DestroyFunc destroy) {
    if (id < 0 || static_cast<u32>(id) >= MAX_SCENES) return;
    if (!create) return;

    u32 idx = static_cast<u32>(id);
    bool wasRegistered = m_entries[idx].registered;

    m_entries[idx].createFunc = create;
    m_entries[idx].destroyFunc = destroy;
    m_entries[idx].registered = true;
    m_entries[idx].id = id;

    if (!wasRegistered) {
        m_registeredCount++;
    }
}

// @addr 0x8060A3B0
void SceneCreator::unregisterCreator(SceneId id) {
    if (id < 0 || static_cast<u32>(id) >= MAX_SCENES) return;

    u32 idx = static_cast<u32>(id);
    if (m_entries[idx].registered) {
        m_entries[idx].registered = false;
        m_entries[idx].createFunc = nullptr;
        m_entries[idx].destroyFunc = nullptr;
        m_entries[idx].id = SCENE_NONE;
        m_registeredCount--;
    }
}

// @addr 0x8060A440
bool SceneCreator::isRegistered(SceneId id) const {
    if (id < 0 || static_cast<u32>(id) >= MAX_SCENES) return false;
    return m_entries[static_cast<u32>(id)].registered;
}

// @addr 0x8060A4A0
u32 SceneCreator::getRegisteredCount() const {
    return m_registeredCount;
}

CreateFunc SceneCreator::getCreateFunc(SceneId id) const {
    if (id < 0 || static_cast<u32>(id) >= MAX_SCENES) return nullptr;
    if (!m_entries[static_cast<u32>(id)].registered) return nullptr;
    return m_entries[static_cast<u32>(id)].createFunc;
}

DestroyFunc SceneCreator::getDestroyFunc(SceneId id) const {
    if (id < 0 || static_cast<u32>(id) >= MAX_SCENES) return nullptr;
    if (!m_entries[static_cast<u32>(id)].registered) return nullptr;
    return m_entries[static_cast<u32>(id)].destroyFunc;
}

SceneCreator* SceneCreator::getInstance() {
    if (!s_instance) {
        s_instance = new SceneCreator();
    }
    return s_instance;
}

// @addr 0x8060A500
void SceneCreator::initGlobal() {
    if (!s_instance) {
        s_instance = new SceneCreator();
    }
    // In the real game, all scene types register here:
    // registerCreator(SCENE_TITLE, createTitleScene);
    // registerCreator(SCENE_MENU_TOP, createMenuScene);
    // registerCreator(SCENE_RACE, createRaceScene);
    // etc.
}

// @addr 0x8060A560
void SceneCreator::shutdownGlobal() {
    if (s_instance) {
        delete s_instance;
        s_instance = nullptr;
    }
}

// @addr 0x8060A5C0
bool SceneCreator::validateRegistrations() const {
    // Core scenes that must be registered for the game to function
    static const SceneId required[] = {
        SCENE_TITLE,
        SCENE_MENU_TOP,
        SCENE_CARYARD,
        SCENE_COURSE_SELECT,
        SCENE_RACE,
        SCENE_RACE_RESULT,
    };

    for (u32 i = 0; i < ARRAY_COUNT(required); i++) {
        if (!isRegistered(required[i])) {
            return false;
        }
    }
    return true;
}

void SceneCreator::dumpRegistrations() const {
    for (u32 i = 0; i < MAX_SCENES; i++) {
        if (m_entries[i].registered) {
            // Debug: log registered scene
            (void)m_entries[i].id;
        }
    }
}

} // namespace Scene