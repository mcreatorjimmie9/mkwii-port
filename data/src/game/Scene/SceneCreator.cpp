// SceneCreator.cpp — Scene Factory and Registration System
// Address range: 0x8060A194 - 0x8060E000 (Gap 1 — scene management)
//
// Implements the EGG-style scene factory pattern. Each scene type registers
// a creation function at startup; SceneMgr uses the factory to instantiate
// scenes during transitions.

#include "SceneCreator.hpp"
#include "SceneBase.hpp"
#include "SceneRace.hpp"
#include <cstring>

namespace Scene {

// =============================================================================
// Anonymous namespace — Stub scene and factory functions
//
// Concrete scene classes that don't exist yet are represented by StubScene.
// It satisfies the SceneBase pure-virtual interface so the factory can
// return valid instances.  Replace with real scene classes as they are
// implemented.
// =============================================================================
namespace {

// Minimal stub scene for unimplemented scene types.
// Provides no-op implementations of the required interface.
class StubScene : public SceneBase {
public:
    explicit StubScene(u32 id) {
        m_sceneId = id;
        m_state = STATE_ACTIVE;
    }
    virtual ~StubScene() {}

    virtual void init() override {}
    virtual void calc() override {}
    virtual void draw() override {}
    virtual u32 getSceneId() const override { return m_sceneId; }
};

// --- Factory functions for each scene type ---

SceneBase* createTitleScene(const SceneArgs& args) {
    (void)args;
    return new StubScene(SCENE_TITLE);
}

SceneBase* createMenuTopScene(const SceneArgs& args) {
    (void)args;
    return new StubScene(SCENE_MENU_TOP);
}

SceneBase* createMenuGrandPrixScene(const SceneArgs& args) {
    (void)args;
    return new StubScene(SCENE_MENU_GRANDPRIX);
}

SceneBase* createMenuVSScene(const SceneArgs& args) {
    (void)args;
    return new StubScene(SCENE_MENU_VS);
}

SceneBase* createMenuBattleScene(const SceneArgs& args) {
    (void)args;
    return new StubScene(SCENE_MENU_BATTLE);
}

SceneBase* createMenuGhostScene(const SceneArgs& args) {
    (void)args;
    return new StubScene(SCENE_MENU_GHOST);
}

SceneBase* createMenuChannelScene(const SceneArgs& args) {
    (void)args;
    return new StubScene(SCENE_MENU_CHANNEL);
}

SceneBase* createCaryardScene(const SceneArgs& args) {
    (void)args;
    // SceneCaryard does not inherit from SceneBase, so we use a stub
    // until the proper integration is done.
    return new StubScene(SCENE_CARYARD);
}

SceneBase* createCourseSelectScene(const SceneArgs& args) {
    (void)args;
    return new StubScene(SCENE_COURSE_SELECT);
}

// RaceScene is created directly by main.cpp (not via factory) because
// it requires platform headers (TrackManager, KartEntity, etc.) that
// are not available in the mkwii-genesis library. Use a stub here so
// the factory registration doesn't pull in missing symbols.
SceneBase* createRaceScene(const SceneArgs& args) {
    (void)args;
    return new StubScene(SCENE_RACE);
}

SceneBase* createRaceResultScene(const SceneArgs& args) {
    (void)args;
    return new StubScene(SCENE_RACE_RESULT);
}

SceneBase* createReplayScene(const SceneArgs& args) {
    (void)args;
    return new StubScene(SCENE_REPLAY);
}

SceneBase* createAwardScene(const SceneArgs& args) {
    (void)args;
    return new StubScene(SCENE_AWARD);
}

SceneBase* createStaffScene(const SceneArgs& args) {
    (void)args;
    return new StubScene(SCENE_STAFF);
}

SceneBase* createMovieScene(const SceneArgs& args) {
    (void)args;
    return new StubScene(SCENE_MOVIE);
}

SceneBase* createOnlineScene(const SceneArgs& args) {
    (void)args;
    return new StubScene(SCENE_ONLINE);
}

SceneBase* createTournamentScene(const SceneArgs& args) {
    (void)args;
    return new StubScene(SCENE_TOURNAMENT);
}

SceneBase* createMissionScene(const SceneArgs& args) {
    (void)args;
    return new StubScene(SCENE_MISSION);
}

// Custom destroy function for scenes that need extra cleanup.
// Currently all scenes use the default delete path.
void destroySceneDefault(SceneBase* scene) {
    delete scene;
}

// Human-readable scene name table
static const char* s_sceneNames[] = {
    "Title",           // SCENE_TITLE
    "MenuTop",         // SCENE_MENU_TOP
    "MenuGrandPrix",   // SCENE_MENU_GRANDPRIX
    "MenuVS",          // SCENE_MENU_VS
    "MenuBattle",      // SCENE_MENU_BATTLE
    "MenuGhost",       // SCENE_MENU_GHOST
    "MenuChannel",     // SCENE_MENU_CHANNEL
    "Caryard",         // SCENE_CARYARD
    "CourseSelect",    // SCENE_COURSE_SELECT
    "Race",            // SCENE_RACE
    "RaceResult",      // SCENE_RACE_RESULT
    "Replay",          // SCENE_REPLAY
    "Award",           // SCENE_AWARD
    "Staff",           // SCENE_STAFF
    "Movie",           // SCENE_MOVIE
    "Online",          // SCENE_ONLINE
    "Tournament",      // SCENE_TOURNAMENT
    "Mission",         // SCENE_MISSION
};

} // anonymous namespace

SceneCreator* SceneCreator::s_instance = nullptr;

// =============================================================================
// Constructor / Destructor
// =============================================================================
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

// =============================================================================
// createScene — Factory method: instantiate a scene by ID
// @addr 0x8060A194
// =============================================================================
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

// =============================================================================
// destroyScene — Safely destroy a scene instance
// @addr 0x8060A280
// =============================================================================
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

// =============================================================================
// registerCreator / unregisterCreator
// =============================================================================
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

// =============================================================================
// Query methods
// =============================================================================
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

// =============================================================================
// getSceneName — Return human-readable name for a scene ID
// =============================================================================
const char* SceneCreator::getSceneName(SceneId id) const {
    if (id < 0 || id >= SCENE_COUNT) return "Unknown";
    return s_sceneNames[static_cast<u32>(id)];
}

// =============================================================================
// preloadResources — Preload assets for a scene before creating it
//
// In the real game this triggers async DVD reads via the NAND/DVD thread
// so that textures, models, and layouts are in RAM by the time the scene
// is created.  The port stub marks the args as needing preload.
// @addr 0x8060A600
// =============================================================================
void SceneCreator::preloadResources(SceneId id, const SceneArgs& args) {
    if (!isRegistered(id)) return;

    // In the real game:
    // 1. Query the scene's resource manifest (list of archive paths)
    // 2. Submit async load requests to the DVD thread
    // 3. The loading screen scene shows progress until all resources ready
    //
    // For the port, we do nothing here — resources load synchronously
    // or are pre-cached by the asset system.
    (void)args;
}

// =============================================================================
// Singleton and global init/shutdown
// =============================================================================
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

    // Register all scene types with their factory functions.
    // Each scene type gets a CreateFunc and an optional DestroyFunc.
    // The real game registers these during static initialization or
    // early in main() before the title screen is shown.

    // Boot / title screen
    s_instance->registerCreator(SCENE_TITLE, createTitleScene, destroySceneDefault);

    // Menu system
    s_instance->registerCreator(SCENE_MENU_TOP, createMenuTopScene, destroySceneDefault);
    s_instance->registerCreator(SCENE_MENU_GRANDPRIX, createMenuGrandPrixScene, destroySceneDefault);
    s_instance->registerCreator(SCENE_MENU_VS, createMenuVSScene, destroySceneDefault);
    s_instance->registerCreator(SCENE_MENU_BATTLE, createMenuBattleScene, destroySceneDefault);
    s_instance->registerCreator(SCENE_MENU_GHOST, createMenuGhostScene, destroySceneDefault);
    s_instance->registerCreator(SCENE_MENU_CHANNEL, createMenuChannelScene, destroySceneDefault);

    // Character / kart selection
    s_instance->registerCreator(SCENE_CARYARD, createCaryardScene, destroySceneDefault);

    // Course selection wheel
    s_instance->registerCreator(SCENE_COURSE_SELECT, createCourseSelectScene, destroySceneDefault);

    // Race gameplay — uses the real RaceScene class
    s_instance->registerCreator(SCENE_RACE, createRaceScene, destroySceneDefault);

    // Post-race results
    s_instance->registerCreator(SCENE_RACE_RESULT, createRaceResultScene, destroySceneDefault);

    // Replay theater
    s_instance->registerCreator(SCENE_REPLAY, createReplayScene, destroySceneDefault);

    // Trophy / award ceremony
    s_instance->registerCreator(SCENE_AWARD, createAwardScene, destroySceneDefault);

    // Staff credits roll
    s_instance->registerCreator(SCENE_STAFF, createStaffScene, destroySceneDefault);

    // Cutscene playback
    s_instance->registerCreator(SCENE_MOVIE, createMovieScene, destroySceneDefault);

    // Online lobby / matchmaking
    s_instance->registerCreator(SCENE_ONLINE, createOnlineScene, destroySceneDefault);

    // Tournament mode
    s_instance->registerCreator(SCENE_TOURNAMENT, createTournamentScene, destroySceneDefault);

    // Mission mode
    s_instance->registerCreator(SCENE_MISSION, createMissionScene, destroySceneDefault);
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
            const char* name = getSceneName(static_cast<SceneId>(i));
            (void)name;
            // Debug output: registered scene name
        }
    }
}

} // namespace Scene