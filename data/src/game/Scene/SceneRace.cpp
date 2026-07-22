// SceneRace.cpp — Main Race Scene implementation
// Reconstructed from Scene module (0x8053xxxx)
//
// RaceScene orchestrates the entire race flow: course loading,
// countdown, active racing, and race finish. It manages the
// race timer, position tracking, and camera system during races.
// This is the core gameplay scene that drives the main game loop.
//
// Bridge layer: connects decompiled Scene architecture with
// working platform systems (TrackManager, KartEntity, RaceSession).

#include "SceneRace.hpp"
#include "SceneCamera.hpp"
#include "ObjectDirector.hpp"
#include "Course.hpp"
#include "EffectDirector.hpp"

// Phase 21: RaceManager/RaceConfig — original MKWii race engine wiring
#include "RaceEngine/RaceManager.hpp"
#include "RaceEngine/RaceConfig.hpp"
#include <string.h>
#include <cstdlib>
#include <cstdio>
#include <cstring>

// Platform and reimplemented systems (available in APP_SOURCES)
#include "Player/Player.hpp"
#include "loaders/track_manager.hpp"
#include "game/RaceSession.hpp"
#include "game/ItemBox.hpp"
#include "game/CollisionSystem.hpp"
#include "../Field/CourseColManager.hpp"
#include "platform/graphics.hpp"
#include "platform/input.hpp"
#include "platform/window.hpp"
#include "ai_input_store.hpp"

// HUD overlay
#include "game/HUD.hpp"

// Forward declarations — AI bridge functions (defined in ai_bridge.cpp)
extern "C" void initAIManager();
extern "C" void setAIPlayerBridge(u32 playerId, Game::Player* player);
extern "C" void shutdownAIManager();
extern "C" void pauseAI(bool pause);

namespace Scene {

// =============================================================================
// Constants
// =============================================================================

static const f32 FRAME_TIME = 1.0f / 60.0f;
static const u32 COUNTDOWN_FRAMES_3 = 180;
static const u32 COUNTDOWN_FRAMES_2 = 120;
static const u32 COUNTDOWN_FRAMES_1 = 60;
static const u32 COUNTDOWN_FRAMES_GO = 0;

static const u32 DEFAULT_LAP_COUNT = 3;
static const f32 RACE_TIME_LIMIT = 300.0f;
static const u32 FINISH_DELAY_FRAMES = 180;

static const u8 MAX_LOCAL_PLAYERS = 4;
static const u32 NUM_AI_KARTS = 3;
static const u32 TOTAL_RACERS = 1 + NUM_AI_KARTS;

static const f32 AI_TINT_COLORS[NUM_AI_KARTS][3] = {
    { 1.0f, 0.5f, 0.0f }, { 0.0f, 0.8f, 0.2f }, { 0.7f, 0.2f, 1.0f },
};
static const f32 AI_SPEEDS[NUM_AI_KARTS]     = { 2200.0f, 2500.0f, 2700.0f };
static const f32 AI_STEER_AGGR[NUM_AI_KARTS] = { 0.9f,   1.0f,   1.2f   };

static const f32 CAMERA_BACK_DIST = 500.0f;
static const f32 CAMERA_UP_OFFSET = 300.0f;
static const f32 CAMERA_FOV_DEG   = 60.0f;
static const f32 CAMERA_NEAR      = 1.0f;
static const f32 CAMERA_FAR       = 200000.0f;

static const char* COURSE_URL =
    "https://142.169.46.167:3923/mkwii/DATA/files/Race/beginner_course.szs";
static const char* COURSE_FILE = "/tmp/mkwii_course.szs";

// =============================================================================
// Pimpl — RaceData (platform-specific race state)
// =============================================================================

struct RaceScene::RaceData {
    Loaders::TrackManager* trackManager;
    bool trackLoaded;

    Game::Player players[TOTAL_RACERS];
    u32 playerCount;

    RaceSession raceSession;

    Game::CollisionSystem collisionSystem;

    ItemManager itemManager;
    ItemSlot playerItem;

    // HUD overlay
    HUD hud;
    bool hudInitialized;

    u32 totalLaps;
    bool raceFinishedPrinted;
    int frameLogCounter;

    RaceData()
        : trackManager(nullptr)
        , trackLoaded(false)
        , playerCount(TOTAL_RACERS)
        , hudInitialized(false)
        , totalLaps(DEFAULT_LAP_COUNT)
        , raceFinishedPrinted(false)
        , frameLogCounter(0) {}
};

// =============================================================================
// Anonymous namespace — helper functions
// =============================================================================
namespace {

static const char* posSuffix(u32 pos) {
    static const char* suffix[] = {"st", "nd", "rd", "th",
                                   "th", "th", "th", "th", "th", "th", "th", "th"};
    return suffix[(pos > 4) ? 4 : (pos - 1)];
}

} // anonymous namespace

// =============================================================================
// Constructor / Destructor
// =============================================================================

RaceScene::RaceScene()
    : m_racePhase(PHASE_LOADING)
    , m_courseId(0)
    , m_countdownTimer(0)
    , m_countdownNumber(0)
    , m_raceTime(0.0f)
    , m_camera(nullptr)
    , m_objectDirector(nullptr)
    , m_course(nullptr)
    , m_effectDirector(nullptr)
    , m_totalLaps(DEFAULT_LAP_COUNT)
    , m_currentLap(0)
    , m_raceData(nullptr) {
    setState(STATE_LOADING);
}

RaceScene::~RaceScene() {
    if (m_camera) {
        m_camera->shutdown();
        delete m_camera;
        m_camera = nullptr;
    }
    if (m_objectDirector) {
        delete m_objectDirector;
        m_objectDirector = nullptr;
    }
    if (m_effectDirector) {
        m_effectDirector->shutdown();
        delete m_effectDirector;
        m_effectDirector = nullptr;
    }
    if (m_raceData) {
        if (m_raceData->trackManager) {
            delete m_raceData->trackManager;
            m_raceData->trackManager = nullptr;
        }
        m_raceData->itemManager.cleanupAllGL();
        delete m_raceData;
        m_raceData = nullptr;
    }

    // Phase 21: Destroy RaceManager and RaceConfig on scene teardown.
    // In the original MKWii, RaceManager is destroyed when leaving the race scene
    // (SceneDirector::changeScene). RaceConfig persists across races within a
    // cup but is destroyed when returning to the menu.
    System::RaceManager::destroyInstance();
    // NOTE: RaceConfig is intentionally NOT destroyed here. In the original,
    // it persists across multiple races in a Grand Prix. It will be cleaned up
    // by shutdownSystemSingletons() or on next application launch.
}

// =============================================================================
// init — Initialize the race scene (idempotent)
// =============================================================================

void RaceScene::init() {
    if (m_raceData != nullptr) {
        // Already initialized — SceneDirector calls init() again via
        // finalizeTransition(). Just re-activate the scene.
        setState(STATE_ACTIVE);
        return;
    }

    m_racePhase = PHASE_LOADING;
    m_courseId = 0;
    m_countdownTimer = 0;
    m_countdownNumber = 0;
    m_raceTime = 0.0f;
    m_totalLaps = DEFAULT_LAP_COUNT;
    m_currentLap = 0;

    setState(STATE_LOADING);

    m_camera = nullptr;
    m_objectDirector = nullptr;
    m_course = nullptr;
    m_effectDirector = nullptr;
}

// =============================================================================
// load — SceneBase virtual (no-op)
// =============================================================================

void RaceScene::load() {
    // Course loading handled by loadCourse() called before changeScene().
}

// =============================================================================
// loadCourse — Download SZS, parse KMP/KCL, create players
// =============================================================================

void RaceScene::loadCourse(u32 courseId) {
    m_courseId = courseId;

    if (!m_raceData) {
        m_raceData = new RaceData();
    }

    printf("[RaceScene] Loading course %u...\n", courseId);

    // Download and load course
    m_raceData->trackManager = new Loaders::TrackManager();
    {
        char cmd[512];
        std::snprintf(cmd, sizeof(cmd),
                      "curl -k -s --connect-timeout 30 -o %s '%s'",
                      COURSE_FILE, COURSE_URL);
        if (std::system(cmd) == 0) {
            m_raceData->trackLoaded =
                m_raceData->trackManager->loadFromFile(COURSE_FILE);
        }
    }

    if (m_raceData->trackLoaded) {
        printf("[RaceScene] Track: '%s' — %u starts, %u GOBJ, %u CPs, %u paths\n",
               m_raceData->trackManager->getTrackName().c_str(),
               static_cast<u32>(m_raceData->trackManager->getKmpData().startPositions.size()),
               static_cast<u32>(m_raceData->trackManager->getKmpData().objects.size()),
               static_cast<u32>(m_raceData->trackManager->getKmpData().checkpoints.size()),
               static_cast<u32>(m_raceData->trackManager->getKmpData().paths.size()));

        // Wire raw KCL data into CourseColManager for KCollision queries
        if (m_raceData->trackManager->isKclLoaded()) {
            const auto& kclRaw = m_raceData->trackManager->getKCLRawData();
            if (!kclRaw.empty()) {
                if (Field::CourseColManager::instance()->load(
                        kclRaw.data(), static_cast<u32>(kclRaw.size()))) {
                    printf("[RaceScene] CourseColManager loaded KCL (%u bytes, %u triangles)\n",
                           static_cast<u32>(kclRaw.size()),
                           Field::CourseColManager::instance()->getKCollision()->getTriangleCount());
                } else {
                    printf("[RaceScene] CourseColManager failed to parse KCL data\n");
                }
            }
        }
    } else {
        printf("[RaceScene] Track: Failed to download, using fallback\n");
    }

    initSubsystems();

    m_racePhase = PHASE_LOADED;
    setState(STATE_READY);
    printf("[RaceScene] Course loaded. Ready for countdown.\n");
}

// =============================================================================
// initSubsystems — Create players, collision, items, race session
// =============================================================================

void RaceScene::initSubsystems() {
    if (!m_raceData) return;

    RaceData& d = *m_raceData;
    const auto& kmp = d.trackManager ? d.trackManager->getKmpData()
                                     : Loaders::KmpEntry();

    // Build collision system
    if (d.trackManager && d.trackManager->isKclLoaded()) {
        d.collisionSystem.build(d.trackManager->getCollisionTriangles());
        d.collisionSystem.printStats();
    }

    // Spawn player 0 (human)
    if (d.trackLoaded && !kmp.startPositions.empty()) {
        d.players[0].init(0, false, kmp.startPositions[0]);
        d.players[0].setCollisionSystem(&d.collisionSystem);
        printf("[RaceScene] Player 0 at (%.1f, %.1f, %.1f)\n",
               kmp.startPositions[0].position.x,
               kmp.startPositions[0].position.y,
               kmp.startPositions[0].position.z);
    } else {
        Loaders::KmpEntry::StartPosition sp;
        sp.position.x = 0.0f;
        sp.position.y = 100.0f;
        sp.position.z = 0.0f;
        sp.rotation.x = 0.0f;
        sp.rotation.y = 0.0f;
        sp.rotation.z = 0.0f;
        sp.playerIndex = 0;
        d.players[0].init(0, false, sp);
        printf("[RaceScene] Player 0 at fallback position\n");
    }

    // Spawn AI karts
    const auto& kmpPaths = kmp.paths;
    bool aiHasPath = (!kmpPaths.empty() && !kmpPaths[0].points.empty());

    for (u32 i = 0; i < NUM_AI_KARTS; i++) {
        u32 pidx = i + 1;
        u32 startIdx = pidx % kmp.startPositions.size();

        if (d.trackLoaded && kmp.startPositions.size() > startIdx) {
            d.players[pidx].init(pidx, true, kmp.startPositions[startIdx]);
        } else {
            Loaders::KmpEntry::StartPosition sp;
            sp.position.x = d.players[0].getPosition().x + static_cast<f32>(i + 1) * 200.0f;
            sp.position.y = d.players[0].getPosition().y;
            sp.position.z = d.players[0].getPosition().z - static_cast<f32>(i + 1) * 200.0f;
            sp.rotation.x = 0.0f;
            sp.rotation.y = 0.0f;
            sp.rotation.z = 0.0f;
            sp.playerIndex = static_cast<u16>(pidx);
            d.players[pidx].init(pidx, true, sp);
        }

        d.players[pidx].setTintColor(
            AI_TINT_COLORS[i][0], AI_TINT_COLORS[i][1], AI_TINT_COLORS[i][2]);
        d.players[pidx].setCollisionSystem(&d.collisionSystem);

        if (aiHasPath) {
            u32 startWP = (i * static_cast<u32>(kmpPaths[0].points.size())) / NUM_AI_KARTS;
            d.players[pidx].initAI(kmpPaths[0].points, startWP,
                                    AI_SPEEDS[i], AI_STEER_AGGR[i]);
        }
    }
    printf("[RaceScene] %u AI karts spawned (%s path-following)\n",
           NUM_AI_KARTS, aiHasPath ? "with" : "without");

    // =====================================================================
    // Phase 22: Initialize decompiled AI system (Enemy::AIManager)
    // =====================================================================
    // In the original MKWii, the AI system is initialized when the race scene
    // is set up. The AIManager creates AIEngine instances for each CPU player
    // and coordinates rubber-banding, ranking, and item usage decisions.
    //
    // This replaces the simple AIController with the full decompiled AI brain:
    //   - Path-following with PD steering controller
    //   - Drift decisions (timing, angle thresholds)
    //   - Trick handling (ramp tricks, stunts)
    //   - Item usage logic (when to use/hold items)
    //   - Rubber-banding via AIRankManager
    //   - AI-AI collision avoidance
    initAIManager();

    // Link each AI player to its Game::Player for state queries
    // The KartObjectProxyPC needs live position/yaw data from Player
    // so the AI can make informed steering decisions.
    for (u32 i = 0; i < d.playerCount; i++) {
        if (d.players[i].isAI()) {
            setAIPlayerBridge(i, &d.players[i]);
        }
    }
    printf("[RaceScene] Decompiled AI system active (%u CPU players)\n",
           NUM_AI_KARTS);

    // Spawn item boxes
    if (d.trackLoaded && !kmp.objects.empty()) {
        d.itemManager.spawnFromKMP(kmp.objects);
    } else {
        std::vector<Loaders::KmpEntry::GlobalObject> fallbackBoxes;
        for (int i = 0; i < 8; i++) {
            Loaders::KmpEntry::GlobalObject obj;
            obj.objectId = 0x0002;
            obj.position.x = (i % 4) * 300.0f - 450.0f;
            obj.position.y = d.players[0].getPosition().y + 100.0f;
            obj.position.z = d.players[0].getPosition().z - (i / 4) * 300.0f;
            fallbackBoxes.push_back(obj);
        }
        d.itemManager.spawnFromKMP(fallbackBoxes);
    }
    d.itemManager.initAllGL();
    printf("[RaceScene] %u item boxes\n", d.itemManager.getBoxCount());

    // Initialize SceneCamera — decompiled camera system
    if (!m_camera) {
        m_camera = new SceneCamera();
        m_camera->init(TOTAL_RACERS);
        // Set camera defaults matching MKWii
        m_camera->setFOV(CAMERA_FOV_DEG);
        m_camera->setNearFar(CAMERA_NEAR, CAMERA_FAR);
        m_camera->setSmoothing(0.1f, 0.05f);
    }

    // Initialize ObjectDirector — decompiled object management
    if (!m_objectDirector) {
        m_objectDirector = new ObjectDirector();
        m_objectDirector->init(256);
    }

    // Initialize EffectDirector — decompiled particle system
    if (!m_effectDirector) {
        m_effectDirector = new EffectDirector();
        m_effectDirector->init();
    }

    // Preload particle effects from BREFF/BREFT files in the track archive.
    // In the original game, nw4r::ef::Resource::Add() parses BREFF data
    // during course loading so effects are ready to spawn immediately.
    //
    // Phase 9: Full BREFF parsing pipeline
    //   1. storeLoadedEffect() — retains raw BREFF binary data
    //   2. parseBreffEffect() — extracts EFEM emitter templates (EFRD, PTRP,
    //      DRAW, SHAP parameter blocks) matching nw4r::ef::EffectProject
    //   3. preload() — marks effect as ready for spawning
    //   4. When spawning, if BREFF template is bound, spawnParticleFromBreff()
    //      uses template properties instead of hardcoded defaults.
    if (m_effectDirector && m_raceData && m_raceData->trackManager) {
        auto breffEntries = m_raceData->trackManager->getBreffEntries();
        if (!breffEntries.empty()) {
            printf("[RaceScene] Found %zu BREFF effect files in archive\n",
                   breffEntries.size());
            for (u32 i = 0; i < breffEntries.size() && i < 32; i++) {
                const auto* entry = breffEntries[i];
                if (entry && !entry->data.empty()) {
                    // Store raw BREFF data
                    m_effectDirector->storeLoadedEffect(
                        i, entry->data.data(),
                        static_cast<u32>(entry->data.size()),
                        entry->name.c_str());

                    // Phase 9: Parse BREFF emitter templates (EFEM/EFRD/PTRP/DRAW/SHAP)
                    bool parsed = m_effectDirector->parseBreffEffect(i);
                    if (parsed) {
                        m_effectDirector->preload(i);
                        printf("[RaceScene]   Parsed effect %u: %s (%u bytes) — BREFF template active\n",
                               i, entry->name.c_str(),
                               static_cast<u32>(entry->data.size()));
                    } else {
                        // Fallback: still preload with hardcoded defaults
                        m_effectDirector->preload(i);
                        printf("[RaceScene]   Loaded effect %u: %s (%u bytes) — using hardcoded defaults\n",
                               i, entry->name.c_str(),
                               static_cast<u32>(entry->data.size()));
                    }
                }
            }

            if (m_effectDirector->hasBreffEffects()) {
                printf("[RaceScene] %u BREFF effects successfully parsed — template-driven particles active\n",
                       m_effectDirector->hasBreffEffects());
            }
        } else {
            printf("[RaceScene] No BREFF files found — using hardcoded effects\n");
        }

        // Phase 9: BREFT texture loading
        // Decode BREFT particle textures and store for OpenGL upload.
        // In the original game, nw4r::ef::TextureProject loads TPL textures
        // embedded in BREFT and registers them with the GX texture cache.
        {
            auto breftEntries = m_raceData->trackManager->getBreftEntries();
            if (!breftEntries.empty()) {
                printf("[RaceScene] Found %zu BREFT texture files in archive\n",
                       breftEntries.size());
                // BREFT textures are decoded by BreftLoader in the platform layer.
                // For now, log their presence. Full texture upload will be done
                // when the renderer initializes GL textures for particle billboards.
            }
        }
    }

    // =========================================================================
    // Phase 21: Initialize RaceConfig + RaceManager (original MKWii race engine)
    // =========================================================================
    // In the original MKWii, the initialization order is:
    //   1. RaceConfig::createInstance() + RaceConfig::init()  (menu → race setup)
    //   2. RaceManager::createInstance() + RaceManager::init()  (race scene entry)
    //   3. RaceConfig::initRace()  (copy menu scenario → race scenario)
    //   4. RaceManager::initRace()  (create player array, timer, RNG)
    // RaceConfig::init() reads player count, course, lap count, and
    // initializes the scenario with controller bindings. RaceManager::initRace()
    // creates the RaceManagerPlayer array and TimerManager.
    {
        using namespace System;

        // Create RaceConfig if not already created
        RaceConfig::createInstance();
        RaceConfig::spInstance->init();

        // Override scenario settings to match our actual race setup.
        // The original reads from menu save data; we set directly.
        RaceConfig::spInstance->mMenuScenario.mSettings.mLapCount = DEFAULT_LAP_COUNT;
        RaceConfig::spInstance->mMenuScenario.mSettings.mGameMode =
            RaceConfig::Settings::GAMEMODE_VS_RACE;
        RaceConfig::spInstance->mMenuScenario.mSettings.mCpuMode = 1;
        RaceConfig::spInstance->mMenuScenario.mSettings.mEngineClass = 2;
        RaceConfig::spInstance->mMenuScenario.mPlayerCount = TOTAL_RACERS;
        // Set player types: player 0 = local, rest = CPU
        for (u32 i = 0; i < MAX_PLAYER_COUNT; i++) {
            auto& player = RaceConfig::spInstance->mMenuScenario.getPlayer(i);
            if (i < TOTAL_RACERS) {
                player.mPlayerType = (i == 0)
                    ? RaceConfig::Player::TYPE_REAL_LOCAL
                    : RaceConfig::Player::TYPE_CPU;
            } else {
                player.mPlayerType = RaceConfig::Player::TYPE_NONE;
            }
        }

        // initRace() copies menu scenario to race scenario and sets up
        // controller bindings, RNG seeds, player counts.
        RaceConfig::spInstance->initRace();

        // Create RaceManager
        RaceManager::createInstance();
        RaceManager::spInstance->init();
        RaceManager::spInstance->initRace();

        printf("[RaceScene] RaceConfig + RaceManager initialized\n");
        printf("[RaceScene]   Players: %u, Laps: %u, Mode: VS Race\n",
               RaceConfig::getRacePlayerCount(),
               RaceManager::getLapCount());
    }

    // Initialize race session (platform layer checkpoint tracking)
    d.raceSession.init(TOTAL_RACERS, DEFAULT_LAP_COUNT, kmp.checkpoints);
    d.raceSession.startCountdown();

    // Initialize HUD overlay (OpenGL 2D text rendering)
    d.hud.initGL();
    d.hudInitialized = true;
}

// =============================================================================
// startCountdown — Begin the 3-2-1-GO countdown
// =============================================================================

void RaceScene::startCountdown() {
    m_racePhase = PHASE_COUNTDOWN;
    m_countdownTimer = COUNTDOWN_FRAMES_3;
    m_countdownNumber = 3;
    setState(STATE_ACTIVE);

    printf("[RaceScene] Countdown started (3 seconds)\n");
}

// =============================================================================
// startRace — Begin actual racing
// =============================================================================

void RaceScene::startRace() {
    m_racePhase = PHASE_RACING;
    m_raceTime = 0.0f;
    // Phase 21: Read lap count from RaceManager (100% faithful to original)
    // In the original MKWii, SceneRace reads lap count from
    // RaceConfig::spInstance->mRaceScenario.mSettings.mLapCount.
    m_totalLaps = System::RaceManager::getLapCount();
    m_currentLap = 0;

    if (m_raceData) {
        for (u32 i = 0; i < m_raceData->playerCount; i++) {
            m_raceData->players[i].m_lap = 0;
            m_raceData->players[i].m_finished = false;
            m_raceData->players[i].m_finishTime = 0.0f;
            m_raceData->players[i].m_finishPosition = 0;
        }
        m_raceData->raceFinishedPrinted = false;
        m_raceData->frameLogCounter = 0;
    }

    printf("[RaceScene] GO! Racing started. %u racers, %u laps.\n",
           m_raceData ? m_raceData->playerCount : 0u,
           m_totalLaps);
}

// =============================================================================
// calc — Per-frame main update loop
// =============================================================================

void RaceScene::calc() {
    // Phase 21: Tick RaceManager each frame (original MKWii race engine)
    // RaceManager::update() advances the stage state machine
    // (INTRO_CAMERA → COUNTDOWN → RACE → FINISHED_RACE) and updates
    // the timer manager. In the original, this is called by the scene's calc().
    if (System::RaceManager::spInstance) {
        System::RaceManager::spInstance->update();
    }

    switch (m_racePhase) {
    case PHASE_LOADING:
        break;
    case PHASE_LOADED:
        break;
    case PHASE_COUNTDOWN:
        updateCountdown();
        break;
    case PHASE_RACING:
        updateRacing();
        break;
    case PHASE_FINISH:
        updateFinish();
        break;
    case PHASE_UNLOADING:
        break;
    }

    incrementFrame();
}

// =============================================================================
// draw — Render the race scene
// =============================================================================

void RaceScene::draw() {
    if (m_racePhase == PHASE_LOADING || m_racePhase == PHASE_UNLOADING) {
        return;
    }
    if (!m_raceData) return;

    RaceData& d = *m_raceData;

    // Setup camera — use decompiled SceneCamera if available
    f32 aspect = static_cast<f32>(Platform::Window::getWidth()) /
                 static_cast<f32>(Platform::Window::getHeight());

    if (m_camera) {
        // Use SceneCamera's computed position and target
        const auto& camPos = m_camera->getPosition();
        const auto& camTarget = m_camera->getTarget();
        Platform::Graphics::setupCamera(
            camPos.x, camPos.y, camPos.z,
            camTarget.x, camTarget.y, camTarget.z,
            m_camera->getFOV(), aspect,
            m_camera->getViewport().nearPlane,
            m_camera->getViewport().farPlane);
    } else {
        // Fallback: direct chase cam (no SceneCamera)
        const auto& playerPos = d.players[0].getPosition();
        auto camPos = d.players[0].getChaseCamPos(CAMERA_BACK_DIST, CAMERA_UP_OFFSET);
        Platform::Graphics::setupCamera(
            camPos.x, camPos.y, camPos.z,
            playerPos.x, playerPos.y, playerPos.z,
            CAMERA_FOV_DEG, aspect, CAMERA_NEAR, CAMERA_FAR);
    }

    // Render all items and karts
    const auto& vp = Platform::Graphics::getViewProjMatrix();
    d.itemManager.renderBoxes(vp);

    // Render ObjectDirector objects
    if (m_objectDirector) {
        m_objectDirector->drawAll();
    }

    // Render particles (EffectDirector) via OpenGL
    // On Wii, EffectDirector::draw() submits GX quads directly.
    // On PC, we bridge to OpenGL by iterating the particle pool.
    if (m_effectDirector) {
        m_effectDirector->draw(); // No-op on PC (architecture fidelity)
        // PC rendering: iterate particle pool and draw billboards
        const Scene::Particle* pool = m_effectDirector->getParticlePool();
        u32 maxParticles = m_effectDirector->getMaxParticles();
        if (pool) {
            for (u32 i = 0; i < maxParticles; i++) {
                const Scene::Particle& p = pool[i];
                if (!p.active || p.life <= 0.0f) continue;

                f32 lifeRatio = p.life / (p.maxLife > 0.001f ? p.maxLife : 0.001f);
                f32 r = (p.r + (p.rEnd - p.r) * (1.0f - lifeRatio)) / 255.0f;
                f32 g = (p.g + (p.gEnd - p.g) * (1.0f - lifeRatio)) / 255.0f;
                f32 b = (p.b + (p.bEnd - p.b) * (1.0f - lifeRatio)) / 255.0f;
                f32 a = ((p.a + (p.aEnd - p.a) * (1.0f - lifeRatio)) * lifeRatio) / 255.0f;
                f32 size = (p.size + (p.sizeEnd - p.size) * (1.0f - lifeRatio))
                           * m_effectDirector->getGlobalScale();

                Platform::Graphics::drawParticle(
                    p.position.x, p.position.y, p.position.z,
                    size, r, g, b, a);
            }
        }
    }

    for (u32 i = 1; i < d.playerCount; i++) {
        if (d.players[i].isActive()) {
            d.players[i].render(vp);
        }
    }

    if (d.players[0].isActive()) {
        d.players[0].render(vp);
    }

    // =========================================================================
    // HUD 2D overlay — rendered after all 3D content
    // =========================================================================
    if (d.hudInitialized) {
        u32 screenW = Platform::Window::getWidth();
        u32 screenH = Platform::Window::getHeight();
        d.hud.render(screenW, screenH);
    }
}

// =============================================================================
// updateCountdown — 3-2-1-GO
// =============================================================================

void RaceScene::updateCountdown() {
    if (m_raceData) {
        m_raceData->raceSession.updateCountdown(FRAME_TIME);

        // Update HUD countdown state
        if (m_raceData->hudInitialized) {
            f32 countdownSec = static_cast<f32>(m_countdownTimer) / 60.0f;
            m_raceData->hud.setCountdown(countdownSec, true);
        }
    }

    if (m_countdownTimer > 0) {
        m_countdownTimer--;

        if (m_countdownTimer >= COUNTDOWN_FRAMES_2) {
            if (m_countdownTimer == COUNTDOWN_FRAMES_3 - 1) {
                m_countdownNumber = 3;
            }
        } else if (m_countdownTimer >= COUNTDOWN_FRAMES_1) {
            if (m_countdownTimer == COUNTDOWN_FRAMES_2 - 1) {
                m_countdownNumber = 2;
            }
        } else if (m_countdownTimer > COUNTDOWN_FRAMES_GO) {
            if (m_countdownTimer == COUNTDOWN_FRAMES_1 - 1) {
                m_countdownNumber = 1;
            }
        } else {
            m_countdownNumber = 0;
            startRace();
            return;
        }
    } else {
        startRace();
    }
}

// =============================================================================
// updateRacing — Main racing update loop
// =============================================================================

void RaceScene::updateRacing() {
    if (!m_raceData) return;
    RaceData& d = *m_raceData;

    // 1. Race timer
    m_raceTime += FRAME_TIME;
    d.raceSession.update(FRAME_TIME);

    // 2. Step kart physics
    const auto& input = Platform::InputManager::getState();

    // Reset AI input store at the start of each frame.
    // Each AI player will set its input before PlayerSub10::update().
    // This matches the original MKWii where KPadAIController::calcAll()
    // resets and re-populates all AI input slots each frame.
    AIInputStore::resetFrame();

    // 2a. Update SceneCamera to follow player 0
    // MKWii pipeline: calc() dispatches to mode update → applySmoothing →
    // updateShake → calcView → calcProjection. We call updateFollow first
    // (which sets position/target/FOV), then calc() to finalize matrices.
    if (m_camera && d.players[0].isActive()) {
        const auto& p0pos = d.players[0].getPosition();
        f32 yawRad = EGG::DegToRad(d.players[0].getYaw());
        Vec3 forward(std::sin(yawRad), 0.0f, std::cos(yawRad));
        m_camera->updateFollow(p0pos, forward, d.players[0].getSpeed(), FRAME_TIME);
        m_camera->calc(FRAME_TIME); // Recompute view/proj matrices + shake
    }

    for (u32 i = 0; i < d.playerCount; i++) {
        if (d.players[i].m_finished) continue;

        if (i == 0) {
            d.players[0].update(FRAME_TIME, &input);
        } else {
            d.players[i].update(FRAME_TIME, nullptr);
        }
    }

    // 2b. Kart-kart collision resolution (after all players updated)
    // Faithful to KartPhysicsEngine::calcKartCollisions() in MKWii.
    // Uses bounding sphere + impulse response — same algorithm as
    // KartCollide::testKart() + KartCollide_calcMomentum().
    {
        Game::Player* playerPtrs[12];
        u32 activeCount = 0;
        for (u32 i = 0; i < d.playerCount && i < 12; i++) {
            if (d.players[i].isActive() && !d.players[i].m_finished) {
                playerPtrs[activeCount++] = &d.players[i];
            }
        }
        Game::Player::resolveKartKartCollisions(playerPtrs, activeCount);
    }

    // 3. Update item boxes
    d.itemManager.updateBoxes(FRAME_TIME);

    // 4. Item collection for player 0
    if (d.players[0].isActive() && !d.players[0].m_finished) {
        d.itemManager.tryCollect(d.players[0].getPosition(), *d.players[0].m_itemSlot);
    }

    // Item usage (edge-triggered)
    static bool prevItemPressed = false;
    bool itemPressed = input.item;
    bool itemJustUsed = false;
    ItemTypeId usedItemType = ITEM_NONE;
    if (itemPressed && !prevItemPressed && d.players[0].m_itemSlot->type != ITEM_NONE) {
        usedItemType = d.players[0].m_itemSlot->type;
        itemJustUsed = true;
        f32 spd = d.players[0].getSpeed();
        f32 maxSpd = 3000.0f;
        d.itemManager.useItem(*d.players[0].m_itemSlot, spd, maxSpd,
                              d.players[0].getYaw(), d.players[0].getPosition());
    }
    prevItemPressed = itemPressed;

    // 5. Check checkpoints
    for (u32 i = 0; i < d.playerCount; i++) {
        if (d.players[i].m_finished) continue;
        d.raceSession.checkCheckpoints(i, d.players[i].getPosition());

        const auto& rs = d.raceSession.getRacer(i);
        d.players[i].m_lap = rs.currentLap;
        d.players[i].m_finished = rs.finished;
        d.players[i].m_finishTime = rs.finishPosition > 0 ? rs.raceTime : 0.0f;
        d.players[i].m_finishPosition = rs.finishPosition;

        if (i > 0) {
            d.raceSession.getRacer(i).distance = d.players[i].m_distance;
        }
    }

    // Player distance
    d.raceSession.getRacer(0).distance = d.players[0].m_distance;

    // 6. Calculate positions
    d.raceSession.calculatePositions();

    // 7. Check race end
    if (d.raceSession.allFinished() && !d.raceFinishedPrinted) {
        d.raceFinishedPrinted = true;
        printf("\n=== RACE FINISHED ===\n");
        for (u32 i = 0; i < d.playerCount; i++) {
            const auto& rs = d.raceSession.getRacer(i);
            const char* name = (i == 0) ? "Player" : "AI";
            printf("  %u%s %s — %s\n",
                   rs.finishPosition, posSuffix(rs.finishPosition), name,
                   d.raceSession.getRaceTimeString());
        }
        finishRace();
        return;
    }

    if (m_raceTime >= RACE_TIME_LIMIT) {
        finishRace();
        return;
    }

    // 8. Update ObjectDirector and EffectDirector
    if (m_objectDirector) {
        m_objectDirector->calc(FRAME_TIME);
    }
    if (m_effectDirector) {
        m_effectDirector->update(FRAME_TIME);

        // =====================================================================
        // Particle effects — wired to game events with per-player per-type
        // throttle to prevent exhausting the 8192-particle pool.
        // =====================================================================

        // Throttle timers: [playerIdx][effectType] — cooldown before next spawn
        static f32 s_particleTimers[TOTAL_RACERS][EFFECT_COUNT];
        static bool s_timersInitialized = false;
        if (!s_timersInitialized) {
            for (u32 p = 0; p < TOTAL_RACERS; p++)
                for (u32 e = 0; e < EFFECT_COUNT; e++)
                    s_particleTimers[p][e] = 0.0f;
            s_timersInitialized = true;
        }

        // Decay all throttle timers
        for (u32 p = 0; p < TOTAL_RACERS; p++)
            for (u32 e = 0; e < EFFECT_COUNT; e++)
                s_particleTimers[p][e] -= FRAME_TIME;

        for (u32 i = 0; i < d.playerCount; i++) {
            if (!d.players[i].isActive() || d.players[i].m_finished) continue;

            const auto& pos = d.players[i].getPosition();
            f32 yawRad = EGG::DegToRad(d.players[i].getYaw());
            Vec3 forward(std::sin(yawRad), 0.0f, std::cos(yawRad));
            Vec3 kartRear = pos - forward * 1.5f;

            // --- Boost flame (boost pad, mushroom, star, bullet bill) ---
            if (d.players[i].isBoosting()) {
                if (s_particleTimers[i][EFFECT_BOOST_FLAME] <= 0.0f) {
                    m_effectDirector->emitBurst(
                        EFFECT_BOOST_FLAME,
                        Vec3(kartRear.x, pos.y - 0.5f, kartRear.z),
                        Vec3(-forward.x, -forward.y, -forward.z), 2);
                    s_particleTimers[i][EFFECT_BOOST_FLAME] = 0.05f; // ~20/sec
                }
            }

            // --- Drift sparks (player 0 only — uses input drift flag) ---
            if (i == 0 && input.drift) {
                if (s_particleTimers[i][EFFECT_SPARK] <= 0.0f) {
                    // Alternate left/right rear wheel
                    f32 side = (getFrameCount() % 2 == 0) ? 1.0f : -1.0f;
                    Vec3 right(std::cos(yawRad), 0.0f, -std::sin(yawRad));
                    Vec3 wheelPos = kartRear + right * (0.8f * side);
                    m_effectDirector->emitBurst(
                        EFFECT_SPARK,
                        Vec3(wheelPos.x, pos.y, wheelPos.z),
                        Vec3(0.0f, 1.0f, 0.0f), 1);
                    s_particleTimers[i][EFFECT_SPARK] = 0.04f; // ~25/sec
                }
            }

            // --- Off-road dust ---
            if (d.players[i].isOffRoad()) {
                if (s_particleTimers[i][EFFECT_DUST] <= 0.0f) {
                    m_effectDirector->emitBurst(
                        EFFECT_DUST,
                        Vec3(kartRear.x, pos.y, kartRear.z),
                        Vec3(0.0f, 0.5f, 0.0f), 1);
                    s_particleTimers[i][EFFECT_DUST] = 0.08f; // ~12/sec
                }
            }

            // --- Wall hit sparks ---
            if (d.players[i].isWallHit()) {
                if (s_particleTimers[i][EFFECT_SHELL_HIT] <= 0.0f) {
                    m_effectDirector->emitBurst(
                        EFFECT_SHELL_HIT,
                        Vec3(pos.x, pos.y, pos.z),
                        forward, 3);
                    s_particleTimers[i][EFFECT_SHELL_HIT] = 0.15f;
                }
            }

            // --- Speed lines at very high speed ---
            if (d.players[i].getSpeed() > 2500.0f) {
                if (s_particleTimers[i][EFFECT_SPEED_LINES] <= 0.0f) {
                    m_effectDirector->emitBurst(
                        EFFECT_SPEED_LINES,
                        Vec3(pos.x, pos.y, pos.z),
                        forward, 3);
                    s_particleTimers[i][EFFECT_SPEED_LINES] = 0.167f; // ~6/sec
                }
            }
        }

        // --- Item usage particle effects ---
        if (itemJustUsed && usedItemType != ITEM_NONE) {
            const auto& p0pos = d.players[0].getPosition();
            Vec3 itemPos(p0pos.x, p0pos.y, p0pos.z);
            f32 p0yaw = EGG::DegToRad(d.players[0].getYaw());
            Vec3 p0fwd(std::sin(p0yaw), 0.0f, std::cos(p0yaw));

            switch (usedItemType) {
            case ITEM_MUSHROOM:
            case ITEM_TRIPLE_MUSH:
            case ITEM_GOLDEN_MUSH:
                // Mushroom boost smoke
                m_effectDirector->emitBurst(
                    EFFECT_MUSHROOM_SMOKE, itemPos,
                    Vec3(0.0f, 1.0f, 0.0f), 5);
                break;

            case ITEM_STAR:
                // Star collection burst
                m_effectDirector->emitBurst(
                    EFFECT_STARS, itemPos,
                    Vec3(0.0f, 2.0f, 0.0f), 8);
                break;

            case ITEM_BULLET_BILL:
                // Bullet bill launch smoke
                m_effectDirector->emitBurst(
                    EFFECT_BULLET_BILL_SMOKE, itemPos,
                    Vec3(0.0f, 1.5f, 0.0f), 6);
                break;

            case ITEM_BANANA:
                // Banana slip effect at drop position
                m_effectDirector->emitBurst(
                    EFFECT_BANANA_SLIP, itemPos,
                    Vec3(0.0f, 0.5f, 0.0f), 4);
                break;

            case ITEM_GREEN_SHELL:
            case ITEM_RED_SHELL:
                // Shell launch burst
                m_effectDirector->emitBurst(
                    EFFECT_SHELL_HIT, itemPos,
                    p0fwd, 4);
                break;

            case ITEM_BOB_OMB:
                // Explosion fire burst
                m_effectDirector->emitBurst(
                    EFFECT_FIRE, itemPos,
                    Vec3(0.0f, 2.0f, 0.0f), 10);
                break;

            default:
                break;
            }
        }
    }

    // 9. Status log
    d.frameLogCounter++;
    if (d.frameLogCounter >= 600) {
        d.frameLogCounter = 0;
        printf("  F:%d | %u%s | Lap %u/%u | %.0f u/s | %s\n",
               getFrameCount(),
               d.raceSession.getPlayerPosition(),
               posSuffix(d.raceSession.getPlayerPosition()),
               d.raceSession.getPlayerLap(),
               m_totalLaps,
               d.players[0].getSpeed(),
               d.raceSession.getRaceTimeString());
    }

    // 10. Update HUD state
    if (d.hudInitialized) {
        d.hud.setPosition(d.raceSession.getPlayerPosition());
        d.hud.setLap(d.raceSession.getPlayerLap(), m_totalLaps);
        d.hud.setSpeed(d.players[0].getSpeed());
        d.hud.setRaceTime(d.raceSession.getRaceTimeString());
        d.hud.setLapTime("0:00.000");
        d.hud.setCountdown(0.0f, false);

        // Item name from player's item slot
        const auto* slot = d.players[0].m_itemSlot;
        if (slot && slot->type != ITEM_NONE) {
            static const char* itemNames[] = {
                "Banana", "Green Shell", "Red Shell", "Mushroom",
                "Star", "Bullet Bill", "Golden Mushroom",
                "Blooper", "Pow Block", "Thunder Cloud",
                "Fire Flower", "Triple Mushroom", " Mega Mushroom"
            };
            int idx = static_cast<int>(slot->type);
            if (idx > 0 && idx < static_cast<int>(ITEM_COUNT)) {
                d.hud.setItem(itemNames[idx - 1]);
            } else {
                d.hud.setItem("?");
            }
        } else {
            d.hud.setItem("-");
        }
    }
}

// =============================================================================
// finishRace
// =============================================================================

void RaceScene::finishRace() {
    m_racePhase = PHASE_FINISH;

    // Phase 21: Notify RaceManager of race end (100% faithful to original)
    // RaceManager::endRace() sets stage = FINISHED_RACE and updates GP scores.
    if (System::RaceManager::spInstance) {
        System::RaceManager::spInstance->endRace();
    }

    // Splash effect at finish line for player 0
    if (m_effectDirector && m_raceData && m_raceData->players[0].isActive()) {
        const auto& pos = m_raceData->players[0].getPosition();
        m_effectDirector->emitBurst(
            EFFECT_SPLASH,
            Vec3(pos.x, pos.y + 2.0f, pos.z),
            Vec3(0.0f, 3.0f, 0.0f), 15);
        // Star burst celebration
        m_effectDirector->emitBurst(
            EFFECT_STARS,
            Vec3(pos.x, pos.y + 3.0f, pos.z),
            Vec3(0.0f, 4.0f, 0.0f), 12);
    }

    if (m_raceData && m_raceData->hudInitialized) {
        u32 playerPos = m_raceData->raceSession.getPlayerPosition();
        m_raceData->hud.setFinished(true);
        m_raceData->hud.setFinishPosition(playerPos);
        m_raceData->hud.setFinishTime(m_raceData->raceSession.getRaceTimeString());
    }

    printf("[RaceScene] Race finished. Time: %s\n",
           m_raceData ? m_raceData->raceSession.getRaceTimeString() : "N/A");
}

// =============================================================================
// updateFinish — Post-race
// =============================================================================

void RaceScene::updateFinish() {
    // Check quit
    const auto& input = Platform::InputManager::getState();
    if (input.quit) {
        // SceneDirector handles cleanup
    }
}

} // namespace Scene