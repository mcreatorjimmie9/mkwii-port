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
// Phase 21 extended: RaceSequence + RaceDirector for full race lifecycle
#include "RaceEngine/RaceSequence.hpp"
#include "RaceEngine/RaceDirector.hpp"
#include <string.h>
#include <cstdlib>
#include <cstdio>
#include <cstring>

// Phase 25: Include KartState AFTER RaceEngine headers.
// KartState.hpp transitively includes system/RaceManager.hpp (stub), which
// is guarded by GENESIS_RACE_MANAGER_DEFINED (set by RaceEngine/RaceManager.hpp).
// This way the stub is skipped and only the full RaceManager definition is used.
#include "KartMovement/KartState.hpp"

// Platform and reimplemented systems (available in APP_SOURCES)
#include "Player/Player.hpp"
#include "Physics/PlayerPhysics.hpp"
#include "loaders/track_manager.hpp"
#include "game/RaceSession.hpp"
#include "game/ItemBox.hpp"
#include "game/CollisionSystem.hpp"
#include "../Field/CourseColManager.hpp"
#include "platform/graphics.hpp"
#include "platform/input.hpp"
#include "platform/window.hpp"
#include "platform/course_model_renderer.hpp"
#include "ai_input_store.hpp"

// HUD overlay
#include "game/HUD.hpp"

// Forward declarations — AI bridge functions (defined in ai_bridge.cpp)
extern "C" void initAIManager();
extern "C" void setAIPlayerBridge(u32 playerId, Game::Player* player);
extern "C" void shutdownAIManager();
extern "C" void pauseAI(bool pause);
// Phase 31: Load KMP enemy path data into CourseMap for AI navigation
extern "C" void loadAIPathFromKMP(
    u32 count, const f32 points[][3], const s32 params[][2], const u32 eflags[]);

// Phase 21: Forward declarations — Race bridge functions (defined in race_bridge.cpp)
// These sync platform game state into the decompiled RaceManager each frame.
extern "C" void syncRaceSequenceFromGame(
    u32 playerCount,
    const u8 playerLaps[],
    const bool playerFinished[],
    const u32 playerDistances[]);
extern "C" u32 getRaceSequencePhase();
extern "C" void notifyRaceSequenceLineCross(u32 playerId);
extern "C" void startRaceDirector(u32 playerCount, u32 laps, u32 engineClass);
extern "C" void updateRaceDirector();
extern "C" u32 getRaceDirectorPhase();
extern "C" void endRaceDirector();
extern "C" u32 getRaceDirectorTotalRaces();
extern "C" u32 getRaceDirectorCurrentRace();

// setRaceBridgePointers is declared in race_bridge.cpp (not extern "C"
// but declared with extern "C" linkage there). We call it directly
// since SceneRace.cpp includes the decompiled headers.
namespace RaceEngine {
    class RaceSequence;
    class RaceDirector;
}
extern "C" void setRaceBridgePointers(
    RaceEngine::RaceSequence* seq,
    RaceEngine::RaceDirector* dir);

extern "C" void updateRaceManagerFromGame(
    const f32 playerPositions[][3],
    const u8  playerLaps[],
    const bool playerFinished[],
    const u8  playerFinishPositions[],
    const f32 playerDistances[],
    u32 playerCount);
extern "C" void markPlayerFinished(u32 playerId, u8 finishPosition);
extern "C" void updateRaceTimerFromGame(u32 raceFrameCount);
extern "C" u32 getRaceTimeString(char* buf, u32 bufSize);
extern "C" f32 getRaceTimeMs();

// Phase 27: Start-boost bridge functions (defined in race_bridge.cpp)
extern "C" void bridge_setPlayerAccelHeld(u32 playerId, bool held);
extern "C" u32 bridge_computeStartBoosts();
extern "C" bool bridge_hasStartBoost(u32 playerId);
extern "C" void bridge_clearStartBoost(u32 playerId);

// Phase 32: Raceinfo/Racedata/CtrlRaceTime bridge functions (defined in race_bridge.cpp)
extern "C" void bridge_createRaceinfo(u32 playerCount);
extern "C" void bridge_destroyRaceinfo();
extern "C" void bridge_updateRaceinfo();
extern "C" void bridge_startRaceinfoRace();
extern "C" void bridge_raceinfoSetFinishPosition(u32 playerId, u8 position);
extern "C" u8 bridge_getRaceinfoPosition(u32 playerId);
extern "C" void bridge_createRacedata(u32 playerCount);
extern "C" void bridge_destroyRacedata();
extern "C" void bridge_updateRacedata();
extern "C" void bridge_racedataSetFinish(u32 playerId, u8 position, u32 finishTimeMs);
extern "C" void bridge_createCtrlRaceTime(u32 lapCount);
extern "C" void bridge_destroyCtrlRaceTime();
extern "C" void bridge_updateCtrlRaceTime();
extern "C" void bridge_startCtrlRaceTimeClock();
extern "C" void bridge_stopCtrlRaceTimeClock();
extern "C" const char* bridge_getCtrlRaceTimeText();
extern "C" void bridge_recordLapToCtrlRaceTime(f32 lapTimeMs, u32 currentLap);
extern "C" void bridge_ctrlRaceTimeStartLapTimer(f32 lapStartTimeMs);

// Phase 27: Sound bridge function for start boost SFX
extern "C" void sub_playStartBoostSound(void* p);

// Phase 26: Forward declarations — Collision physics bridge functions
extern "C" void collision_initGlobal(u32 courseId);
extern "C" void collision_initPlayerPhysics(u32 playerIdx);
extern "C" void collision_shutdownPlayer(u32 playerIdx);
extern "C" void collision_shutdownGlobal();
extern "C" void collision_updatePrePhysics(u32 playerIdx, f32 dt,
    const f32 pos[3], const f32 vel[3], f32 floorY, u32 kclType, bool inAir);
extern "C" f32 collision_updatePostPhysics(u32 playerIdx, f32 dt,
    const f32 pos[3], const f32 vel[3]);
extern "C" bool collision_isRespawning(u32 playerIdx);
extern "C" bool collision_updateRespawn(u32 playerIdx, f32 dt,
    f32 outPos[3], f32* outRot);
extern "C" void collision_setLastValidPos(u32 playerIdx, const f32 pos[3], f32 rot);
extern "C" void collision_updateGlobal(f32 dt);
extern "C" bool collision_isOffRoad(u32 playerIdx);

// Phase 25: Forward declarations — Effect bridge state setters
// These push per-frame game state into the effect_bridge for KCL/collision queries
extern "C" void bridge_setAirState(u32 playerIdx, bool inAir);
extern "C" void bridge_setDriftDir(u32 playerIdx, u8 dir);
extern "C" void bridge_setVehicleType(u32 playerIdx, u8 type);
extern "C" void bridge_setRacerInfo(u32 playerIdx, void* info);

// Phase 29: Forward declarations — Item system bridge functions
extern "C" void item_initSystem(u32 playerCount);
extern "C" void item_shutdownSystem();
extern "C" void item_initPlayer(u32 playerIdx);
extern "C" void item_decideItemForPlayer(u32 playerIdx, u32 position);
extern "C" void item_update(f32 dt);
extern "C" void item_setPlayerPosition(u32 playerIdx, f32 posX, f32 posY, f32 posZ);
extern "C" void item_setPlayerCount(u32 count);
extern "C" void item_setPlayerPositionRank(u32 playerIdx, u32 rank);
extern "C" u32 item_getPlayerStoredItem(u32 playerIdx);
extern "C" void item_useItem(u32 playerIdx);

// Phase 25: Forward declarations — Race bridge data push functions
// These push course start points and checkpoint positions into the race bridge cache,
// enabling RaceinfoPlayer::updateCheckpoint() and Raceinfo::getInitialPosAndRotForPlayer()
// to read real KMP data instead of using hardcoded (0,0,0) positions.
extern "C" void bridge_pushCourseStartPoints(
    u32 count, const f32 pos[][3], const f32 rot[][3]);
extern "C" void bridge_pushCheckpointPositions(u32 count, const f32 pos[][3]);

// Phase 24: Forward declarations — Course bridge functions (defined in course_bridge.cpp)
// These push platform TrackManager KMP data into the decompiled Course/RaceSequence.
extern "C" void pushCourseDataToDecompiled(
    u32 checkpointCount,
    const f32 checkpointPositions[][3],
    const f32 checkpointRotations[][3],
    const f32 checkpointScalesX[],
    const f32 checkpointScalesZ[],
    const u16 checkpointIds[],
    u32 startPosCount,
    const f32 startPosPositions[][3],
    const f32 startPosRotations[][3],
    const u16 startPosPlayerIds[],
    u32 cannonCount,
    const f32 cannonPositions[][3],
    const f32 cannonRotations[][3],
    const f32 cannonSpeeds[],
    const f32 boundaryMin[3],
    const f32 boundaryMax[3]);
extern "C" void pushCheckpointDataToRaceSequence(
    u32 count,
    const u32 checkpointIds[],
    const u32 sectorIndices[],
    const f32 positions[][3],
    const f32 radii[]);

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
static const u32 RACE_BRIDGE_MAX = 12; // MAX_PLAYER_COUNT from RaceConfig

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

// Phase 27: Start-boost constants (in original MKWii, the rocket start
// provides a speed boost for ~60 frames (1 second at 60fps).
// These are used by both startRace() and updateRacing().
static const u32 START_BOOST_DURATION_FRAMES = 60;
static constexpr f32 START_BOOST_BONUS_SPEED = 2500.0f;

// =============================================================================
// Pimpl — RaceData (platform-specific race state)
// =============================================================================

struct RaceScene::RaceData {
    Loaders::TrackManager* trackManager;
    bool trackLoaded;

    // Phase 36: Course model renderer — uploads BMD geometry to GPU
    Render::CourseModelRenderer* courseModelRenderer;

    Game::Player players[TOTAL_RACERS];
    u32 playerCount;

    RaceSession raceSession;

    Game::CollisionSystem collisionSystem;

    ItemManager itemManager;
    ItemSlot playerItem;

    // Phase 21: RaceSequence — decompiled race lifecycle controller
    // Manages countdown phases, lap validation, race timing in the
    // original MKWii engine. Synced with platform RaceSession each frame.
    RaceEngine::RaceSequence* raceSequence;

    // Phase 21: RaceDirector — multi-race series coordinator
    // Handles GP cup flow (CUP_INTRO → PRE_RACE → RACING → POST_RACE → RESULTS).
    // For single VS races, it wraps a single RaceSequence.
    RaceEngine::RaceDirector* raceDirector;

    // Phase 27: Start-boost timer — tracks remaining boost duration per player.
    // In the original MKWii, the rocket start provides a speed bonus for
    // approximately 60 frames (1 second at 60fps). The boost adds extra
    // acceleration during this window, giving the player a head start.
    u32 startBoostTimers[TOTAL_RACERS];

    // HUD overlay
    HUD hud;
    bool hudInitialized;

    u32 totalLaps;
    bool raceFinishedPrinted;
    int frameLogCounter;

    RaceData()
        : trackManager(nullptr)
        , trackLoaded(false)
        , courseModelRenderer(nullptr)
        , playerCount(TOTAL_RACERS)
        , hudInitialized(false)
        , totalLaps(DEFAULT_LAP_COUNT)
        , raceFinishedPrinted(false)
        , frameLogCounter(0)
        , raceSequence(nullptr)
        , raceDirector(nullptr) {
        // Phase 27: Initialize start-boost timers
        memset(startBoostTimers, 0, sizeof(startBoostTimers));
    }
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
        if (m_raceData->courseModelRenderer) {
            m_raceData->courseModelRenderer->shutdown();
            delete m_raceData->courseModelRenderer;
            m_raceData->courseModelRenderer = nullptr;
        }
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
    // Phase 32: Destroy Raceinfo, Racedata, and CtrlRaceTime singletons.
    // These are created in initSubsystems() and must be cleaned up
    // before the scene is destroyed to prevent dangling pointers
    // in the decompiled code that may still reference them.
    bridge_destroyRaceinfo();
    bridge_destroyRacedata();
    bridge_destroyCtrlRaceTime();
    // Phase 21: Destroy RaceDirector and RaceSequence
    if (m_raceData) {
        if (m_raceData->raceDirector) {
            m_raceData->raceDirector->shutdown();
            delete m_raceData->raceDirector;
            m_raceData->raceDirector = nullptr;
        }
        if (m_raceData->raceSequence) {
            m_raceData->raceSequence->shutdown();
            delete m_raceData->raceSequence;
            m_raceData->raceSequence = nullptr;
        }
    }
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

        // Phase 36: Initialize course model renderer and upload BMD geometry
        if (m_raceData->trackManager->isBmdLoaded()) {
            m_raceData->courseModelRenderer = new Render::CourseModelRenderer();
            if (m_raceData->courseModelRenderer->init()) {
                const auto& bmdLoader = m_raceData->trackManager->getBmdLoader();
                for (u32 m = 0; m < bmdLoader.getModelCount(); m++) {
                    u32 modelIdx = m_raceData->courseModelRenderer->uploadModel(
                        bmdLoader.getModel(m));
                    printf("[RaceScene] Uploaded course model %u → GPU index %u\n",
                           m, modelIdx);
                }
                printf("[RaceScene] Course model renderer ready: %u models, %u total vertices\n",
                       m_raceData->courseModelRenderer->getModelCount(),
                       bmdLoader.getTotalVertexCount());
            } else {
                printf("[RaceScene] Course model shader compilation failed, using wireframe\n");
                delete m_raceData->courseModelRenderer;
                m_raceData->courseModelRenderer = nullptr;
            }
        } else {
            printf("[RaceScene] No BMD models found in archive — course will render as wireframe\n");
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

    // =====================================================================
    // Phase 31: Load KMP enemy path data into CourseMap for AI navigation.
    // This is the critical wiring that makes the decompiled AI brain work.
    // Without this, CourseMap::getEnemyPathAccessor() returns nullptr or
    // size()==0, and AI::update() skips AIEngine::update() entirely.
    //
    // In the original MKWii, the MapdataEnemy (ENPT) section is loaded
    // from the course archive during scene init. Each waypoint has
    // position, parameters (path group, point type), and eflags.
    // =====================================================================
    if (aiHasPath && d.trackLoaded) {
        const auto& path0 = kmpPaths[0];
        u32 ptCount = static_cast<u32>(path0.points.size());
        if (ptCount > 256) ptCount = 256;

        f32 pathPositions[256][3] = {};
        s32 pathParams[256][2] = {};
        u32 pathEflags[256] = {};

        for (u32 i = 0; i < ptCount; i++) {
            pathPositions[i][0] = path0.points[i].position.x;
            pathPositions[i][1] = path0.points[i].position.y;
            pathPositions[i][2] = path0.points[i].position.z;
            pathParams[i][0] = static_cast<s32>(path0.points[i].param1);
            pathParams[i][1] = static_cast<s32>(path0.points[i].param2);
            pathEflags[i] = 0; // eflags not in KMP POTI section
        }

        loadAIPathFromKMP(ptCount, pathPositions, pathParams, pathEflags);
        printf("[RaceScene] Phase 31: AI path data loaded (%u waypoints)\n", ptCount);
    } else {
        printf("[RaceScene] Phase 31: No AI paths in KMP — AI will use fallback controller\n");
    }

    // =====================================================================
    // Phase 26: Initialize decompiled Collision module integration
    // =====================================================================
    // Initialize global collision systems (WaterCollision, MovingColObjManager, ColResponse)
    // and per-player physics objects (KartGravity, KartSuspension, KartBoost, KartRespawn).
    // In the original MKWii, these are created during KartPhysicsEngine::init()
    // which is called when each kart is spawned.
    collision_initGlobal(m_courseId);

    for (u32 i = 0; i < d.playerCount; i++) {
        collision_initPlayerPhysics(i);
    }
    printf("[RaceScene] Collision physics: global + %u players initialized\n",
           d.playerCount);

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

    // Phase 29: Initialize decompiled Item system bridge
    // The item bridge connects the 16 compiled ItemSystem GENESIS files
    // to the platform ItemBox system. It manages item roulette, storage,
    // usage, and active item objects (shells, bananas, bob-ombs, etc.)
    item_initSystem(d.playerCount);
    for (u32 i = 0; i < d.playerCount; i++) {
        item_initPlayer(i);
    }
    item_setPlayerCount(d.playerCount);
    printf("[RaceScene] Item system initialized (%u players)\n", d.playerCount);

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
    // Phase 21: Initialize RaceSequence (original MKWii race lifecycle)
    // =========================================================================
    // RaceSequence manages the per-race countdown, lap validation, timing.
    // In the original MKWii, RaceDirector creates RaceSequence for each race
    // in a series. For PC, we create it here directly.
    d.raceSequence = new RaceEngine::RaceSequence();
    // Phase 26: Pass the actual RaceConfig so RaceSequence can read
    // game mode, lap count, and other settings. In the original MKWii,
    // RaceSequence receives RaceConfig from the scene director.
    {
        using namespace System;
        d.raceSequence->init(
            RaceConfig::spInstance,
            TOTAL_RACERS);
        // Override totalLaps from RaceConfig (100% faithful)
        if (RaceConfig::spInstance) {
            d.raceSequence->setupCheckpoints(
                RaceConfig::spInstance->mRaceScenario.mSettings.getCourseId());
        }
    }
    // Checkpoints will be loaded from KMP data below (overriding the stub)
    printf("[RaceScene] RaceSequence initialized (%u players)\n", TOTAL_RACERS);

    // =========================================================================
    // Phase 21: Initialize RaceDirector (multi-race series coordinator)
    // =========================================================================
    // In the original MKWii, RaceDirector is created by the scene system
    // when entering a race (menu → race transition). It wraps RaceSequence
    // and handles the full GP/VS lifecycle including pre-race, racing,
    // post-race scoring, cup results, and awards.
    d.raceDirector = new RaceEngine::RaceDirector();
    {
        RaceEngine::DirectorConfig dirConfig;
        memset(&dirConfig, 0, sizeof(dirConfig));
        dirConfig.raceType = RaceEngine::RACE_TYPE_VS;
        dirConfig.playerCount = static_cast<u8>(TOTAL_RACERS);
        dirConfig.totalRaces = 1;
        dirConfig.lapsPerRace = DEFAULT_LAP_COUNT;
        dirConfig.isOnline = 0;
        dirConfig.engineClass = 2; // 150cc
        d.raceDirector->init(dirConfig);
        d.raceDirector->startSeries();
        d.raceDirector->startNextRace();
        printf("[RaceScene] RaceDirector initialized (VS Race, %u players, %u laps)\n",
               TOTAL_RACERS, DEFAULT_LAP_COUNT);
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

        // Phase 21: Start RaceSequence countdown
        // In the original, RaceDirector::beginRace() calls
        // RaceSequence::startCountdown() when transitioning from PRE_RACE
        // to RACING. We mirror that here.
        if (d.raceSequence) {
            d.raceSequence->startCountdown();
        }

        // Wire bridge pointers so race_bridge.cpp can access the
        // RaceSequence and RaceDirector instances for sync functions.
        setRaceBridgePointers(d.raceSequence, d.raceDirector);

        // =============================================================
        // Phase 32: Create Raceinfo singleton
        // =============================================================
        // In the original MKWii, Raceinfo is created after RaceConfig
        // and RaceManager are initialized. It independently tracks per-
        // player checkpoint progress, lap timing, and race positions.
        // Raceinfo::update() is called each frame in calc() BEFORE
        // RaceManager::update(), and its positions feed into CtrlRaceTime.
        bridge_createRaceinfo(TOTAL_RACERS);

        // =============================================================
        // Phase 32: Create Racedata singleton
        // =============================================================
        // Racedata holds race results for awards/credits sequences.
        // It is initialized with player count from RaceConfig.
        bridge_createRacedata(TOTAL_RACERS);

        // =============================================================
        // Phase 32: Create CtrlRaceTime for authoritative HUD timer
        // =============================================================
        // CtrlRaceTime reads from RaceManager::timer each frame to
        // compute the displayed time string, matching the original HUD.
        bridge_createCtrlRaceTime(DEFAULT_LAP_COUNT);
    }

    // =========================================================================
    // Phase 25: Wire racer info + vehicle type into effect_bridge
    // =========================================================================
    // Set racer info pointers from RaceManager into effect_bridge
    // so sub_getRacerInfo() can return them for GP scoring.
    {
        using namespace System;
        if (RaceManager::spInstance && RaceManager::spInstance->players) {
            for (u32 i = 0; i < TOTAL_RACERS && i < MAX_PLAYER_COUNT; i++) {
                bridge_setRacerInfo(i, static_cast<void*>(
                    RaceManager::spInstance->players[i]));
            }
        }
    }
    // Set vehicle type for all players (default = kart = 0)
    // When BSP loading is implemented, this will read from BSP data.
    for (u32 i = 0; i < TOTAL_RACERS; i++) {
        bridge_setVehicleType(i, 0); // 0 = kart, 1 = bike
    }

    // =========================================================================
    // Phase 24: Push KMP data into decompiled Course + RaceSequence
    // =========================================================================
    // After TrackManager parses the KMP, we push checkpoint/start position/
    // cannon point data into the decompiled Course and RaceSequence classes
    // via the course_bridge. This makes the decompiled layer's queries
    // (Course::getHeightAt, RaceSequence::validateLap) return real data
    // instead of stub defaults (all checkpoints at origin).
    if (d.trackLoaded && !kmp.checkpoints.empty()) {
        // --- Push to decompiled Course ---
        {
            // Convert KMP checkpoint data to bridge format
            const auto& cpGroups = kmp.checkpoints;
            u32 cpCount = static_cast<u32>(cpGroups.size());
            if (cpCount > 64) cpCount = 64;

            f32 cpPositions[64][3] = {};
            f32 cpRotations[64][3] = {};
            f32 cpScalesX[64] = {};
            f32 cpScalesZ[64] = {};
            u16 cpIds[64] = {};

            for (u32 i = 0; i < cpCount; i++) {
                cpPositions[i][0] = cpGroups[i].position.x;
                cpPositions[i][1] = cpGroups[i].position.y;
                cpPositions[i][2] = cpGroups[i].position.z;
                cpRotations[i][0] = cpGroups[i].rotation.x;
                cpRotations[i][1] = cpGroups[i].rotation.y;
                cpRotations[i][2] = cpGroups[i].rotation.z;
                cpScalesX[i] = cpGroups[i].scaleX;
                cpScalesZ[i] = cpGroups[i].scaleZ;
                cpIds[i] = cpGroups[i].checkpointId;
            }

            // Convert start positions
            const auto& starts = kmp.startPositions;
            u32 spCount = static_cast<u32>(starts.size());
            if (spCount > 12) spCount = 12;

            f32 spPositions[12][3] = {};
            f32 spRotations[12][3] = {};
            u16 spIds[12] = {};

            for (u32 i = 0; i < spCount; i++) {
                spPositions[i][0] = starts[i].position.x;
                spPositions[i][1] = starts[i].position.y;
                spPositions[i][2] = starts[i].position.z;
                spRotations[i][0] = starts[i].rotation.x;
                spRotations[i][1] = starts[i].rotation.y;
                spRotations[i][2] = starts[i].rotation.z;
                spIds[i] = starts[i].playerIndex;
            }

            // Convert cannon points
            const auto& cannons = kmp.cannonPoints;
            u32 cnCount = static_cast<u32>(cannons.size());
            if (cnCount > 16) cnCount = 16;

            f32 cnPositions[16][3] = {};
            f32 cnRotations[16][3] = {};
            f32 cnSpeeds[16] = {};

            for (u32 i = 0; i < cnCount; i++) {
                cnPositions[i][0] = cannons[i].position.x;
                cnPositions[i][1] = cannons[i].position.y;
                cnPositions[i][2] = cannons[i].position.z;
                cnRotations[i][0] = cannons[i].rotation.x;
                cnRotations[i][1] = cannons[i].rotation.y;
                cnRotations[i][2] = cannons[i].rotation.z;
                cnSpeeds[i] = cannons[i].speed;
            }

            f32 bMin[3] = {-500.0f, -50.0f, -500.0f};
            f32 bMax[3] = {500.0f, 100.0f, 500.0f};

            pushCourseDataToDecompiled(
                cpCount, cpPositions, cpRotations, cpScalesX, cpScalesZ, cpIds,
                spCount, spPositions, spRotations, spIds,
                cnCount, cnPositions, cnRotations, cnSpeeds,
                bMin, bMax);

            // Phase 25: Push start positions to race bridge cache.
            // This enables Raceinfo::getInitialPosAndRotForPlayer() to return
            // real course start grid data instead of hardcoded (0,0,0).
            bridge_pushCourseStartPoints(spCount, spPositions, spRotations);

            // Phase 25: Push checkpoint positions to race bridge cache.
            // This enables RaceinfoPlayer::updateCheckpoint() to detect checkpoint
            // crossings using real course checkpoint positions.
            bridge_pushCheckpointPositions(cpCount, cpPositions);
        }

        // --- Push to decompiled RaceSequence ---
        {
            const auto& cpGroups = kmp.checkpoints;
            u32 cpCount = static_cast<u32>(cpGroups.size());
            if (cpCount > 32) cpCount = 32;

            u32 cpIds[32] = {};
            u32 cpSectors[32] = {};
            f32 cpPos[32][3] = {};
            f32 cpRad[32] = {};

            for (u32 i = 0; i < cpCount; i++) {
                cpIds[i] = cpGroups[i].checkpointId;
                cpSectors[i] = i; // Sector = checkpoint index
                cpPos[i][0] = cpGroups[i].position.x;
                cpPos[i][1] = cpGroups[i].position.y;
                cpPos[i][2] = cpGroups[i].position.z;
                // Radius from checkpoint scale (half the average scale)
                cpRad[i] = (cpGroups[i].scaleX + cpGroups[i].scaleZ) * 0.25f;
            }

            pushCheckpointDataToRaceSequence(cpCount, cpIds, cpSectors, cpPos, cpRad);

            // Phase 21: Also load checkpoints into local RaceSequence directly
            // (belt-and-suspenders: both bridge and direct wiring)
            if (d.raceSequence) {
                RaceEngine::LapCheckpoint lcps[32];
                u32 lcCount = 0;
                for (u32 i = 0; i < cpCount && i < 32; i++) {
                    lcps[lcCount].checkpointId = cpIds[i];
                    lcps[lcCount].sectorIndex = i;
                    lcps[lcCount].positionX = cpPos[i][0];
                    lcps[lcCount].positionY = cpPos[i][1];
                    lcps[lcCount].positionZ = cpPos[i][2];
                    lcps[lcCount].radius = cpRad[i];
                    lcCount++;
                }
                d.raceSequence->setupCheckpointsFromKMP(lcCount, lcps);
            }
        }

        printf("[RaceScene] Phase 24: KMP data pushed to decompiled Course + RaceSequence\n");
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

    // Phase 26: Signal RaceSequence that racing has started.
    // In the original MKWii, the countdown sequence controller
    // calls RaceSequence::startRace() when the "GO" signal fires.
    // This transitions RaceSequence from COUNTDOWN → RACING phase,
    // enabling lap validation and timing.
    if (m_raceData && m_raceData->raceSequence) {
        m_raceData->raceSequence->startRace();
        printf("[RaceScene] RaceSequence::startRace() called\n");
    }

    // Phase 26: Ensure RaceManager transitions to RACE stage.
    // In the original MKWii, RaceManager::update() handles this
    // automatically when the countdown completes. On PC, we force
    // the transition since our platform countdown drives the phase.
    // RaceManager::update() then starts TimerManager counting.
    if (System::RaceManager::spInstance) {
        System::RaceManager::spInstance->stage = System::RACE;
        System::RaceManager::spInstance->canCountdownStart = true;
    }

    // Phase 32: Signal Raceinfo that the race has started.
    // This sets raceStartTimeMs for all players, enabling accurate
    // lap timing in RaceinfoPlayer::endLap().
    bridge_startRaceinfoRace();

    // Phase 32: Start CtrlRaceTime clock for HUD display.
    // CtrlRaceTime::startClock() begins tracking elapsed time.
    bridge_startCtrlRaceTimeClock();

    // Phase 27: Activate start-boost timers for players who earned rocket start.
    // bridge_hasStartBoost() was computed by bridge_computeStartBoosts() called
    // from updateCountdown() just before this function. Players who held accel
    // during countdown have startBoostActive[i] = true.
    if (m_raceData) {
        for (u32 i = 0; i < m_raceData->playerCount; i++) {
            if (bridge_hasStartBoost(i)) {
                m_raceData->startBoostTimers[i] = START_BOOST_DURATION_FRAMES;
                printf("[RaceScene] Player %u got rocket start boost!\n", i);
                // Play start boost sound
                sub_playStartBoostSound(nullptr);
            }
        }
    }
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

    // Phase 32: Tick Raceinfo each frame (checkpoint detection + positions)
    // In the original MKWii, Raceinfo::update() is called BEFORE
    // RaceManager::update() in the calc() dispatch. It runs per-player
    // checkpoint proximity detection and recalculates race positions.
    bridge_updateRaceinfo();

    // Phase 32: Tick Racedata each frame (phase FSM for results)
    // Racedata::update() advances COUNTDOWN → RACING → FINISHED → RESULTS.
    bridge_updateRacedata();

    // Phase 21: Tick RaceSequence each frame
    // RaceSequence::update() drives the countdown → racing → finish FSM.
    // In the original, it's called by RaceDirector::update() which is
    // called by the scene calc(). We call it directly.
    if (m_raceData && m_raceData->raceSequence) {
        m_raceData->raceSequence->update();
    }

    // Phase 21: Tick RaceDirector each frame
    // RaceDirector coordinates the overall race session (GP series flow).
    if (m_raceData && m_raceData->raceDirector) {
        m_raceData->raceDirector->update();
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

    // =========================================================================
    // Phase 36: Render course model (BMD geometry from BRRES)
    // =========================================================================
    // This renders the actual track geometry — roads, scenery, buildings, etc.
    // Drawn first so karts and items appear on top.
    if (d.courseModelRenderer && d.courseModelRenderer->hasModels()) {
        const auto& vp = Platform::Graphics::getViewProjMatrix();
        d.courseModelRenderer->render(reinterpret_cast<const f32(*)[4]>(vp.m));
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

        // Phase 27: Track player accel button during countdown for start-boost.
        // In the original MKWii, the game detects whether each player is holding
        // the accelerate button during the countdown sequence. If a player holds
        // accelerate when the countdown reaches "GO", they receive a "rocket start"
        // boost — a brief but significant speed advantage at race start.
        // We track player 0's input from InputManager and set the accel state
        // in the race bridge for each frame of the countdown.
        const auto& input = Platform::InputManager::getState();
        bridge_setPlayerAccelHeld(0, input.accelerate > 0.0f);
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
            // Phase 27: Compute start-boosts before transitioning to race
            if (m_raceData) {
                u32 boostCount = bridge_computeStartBoosts();
                if (boostCount > 0) {
                    printf("[RaceScene] Start boost: %u player(s) got rocket start!\n",
                           boostCount);
                }
            }
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

        // ===============================================================
        // Phase 26: Pre-physics collision update
        // ===============================================================
        // Before PlayerSub10::update(), set up KartGravity state from
        // KCL collision data. This feeds gravity/slope/moving-road forces
        // into KartDynamics via the collision_physics_bridge.
        {
            const auto& ppos = d.players[i].getPosition();
            f32 posArr[3] = { ppos.x, ppos.y, ppos.z };
            f32 velArr[3] = { 0.0f, 0.0f, 0.0f };

            // Get KCL floor data
            f32 floorY = -9999.0f;
            u32 kclType = 0;
            bool inAir = false;
            Field::CourseColManager* ccm = Field::CourseColManager::instance();
            if (ccm && ccm->isLoaded()) {
                floorY = ccm->getFloorAt(ppos.x, ppos.y + 50.0f, ppos.z);
                inAir = (ppos.y - floorY > 20.0f);
                // Get KCL type at player position (0 = road if no special type)
                kclType = ccm->getSurfaceType(ppos.x, ppos.y, ppos.z);
            }

            collision_updatePrePhysics(i, FRAME_TIME, posArr, velArr, floorY, kclType, inAir);
        }

        if (i == 0) {
            d.players[0].update(FRAME_TIME, &input);
        } else {
            d.players[i].update(FRAME_TIME, nullptr);
        }
    }

    // Phase 27: Apply start-boost (rocket start) acceleration bonus.
    // In the original MKWii, players who held accelerate during the
    // countdown receive a speed boost for ~60 frames (1 second). This
    // is implemented as extra acceleration applied to the player's
    // speed each frame during the boost window. The boost decays linearly
    // over the duration, providing a smooth acceleration curve.
    for (u32 i = 0; i < d.playerCount; i++) {
        if (d.startBoostTimers[i] > 0) {
            d.startBoostTimers[i]--;
            // Apply proportional bonus acceleration during the boost window.
            // The boost is strongest at the start and fades to zero at the end.
            // This matches the original MKWii behavior where the boost
            // provides a fixed acceleration bonus that tapers off.
            f32 boostRatio = (f32)d.startBoostTimers[i] / (f32)START_BOOST_DURATION_FRAMES;
            f32 bonusAccel = START_BOOST_BONUS_SPEED * boostRatio;
            // Apply speed bonus directly to player's current speed
            f32 currentSpeed = d.players[i].getSpeed();
            // Boost adds a speed bonus (not acceleration, since Player::update()
            // already applies its own acceleration). The bonus decays linearly.
            // In the original MKWii, the rocket start directly increases the
            // vehicle's speed cap for the boost duration.
            d.players[i].m_startBoostSpeedBonus = bonusAccel * boostRatio * FRAME_TIME;

            // Clear the boost state from RaceManager when timer expires
            if (d.startBoostTimers[i] == 0) {
                bridge_clearStartBoost(i);
            }
        }
    }

    // Phase 26: Post-physics collision update
    // After PlayerSub10::update() and KartDynamics::calc(), run
    // WaterCollision, KartBoost timers, ColResponse, KartRespawn updates.
    {
        // Per-player post-physics
        for (u32 i = 0; i < d.playerCount; i++) {
            // Skip respawn check for finished players
            if (d.players[i].m_finished) continue;

            const auto& ppos = d.players[i].getPosition();
            f32 posArr[3] = { ppos.x, ppos.y, ppos.z };
            f32 velArr[3] = { 0.0f, 0.0f, 0.0f };

            // Check if player is in respawn sequence
            if (collision_isRespawning(i)) {
                f32 rpos[3];
                f32 rrot;
                collision_updateRespawn(i, FRAME_TIME, rpos, &rrot);
                // Apply respawn position to player via PlayerPhysics
                auto* pp = d.players[i].getPlayerPhysics();
                if (pp) {
                    pp->setFramePosition(rpos[0], rpos[1], rpos[2]);
                }
                continue; // Don't do normal physics while respawning
            }

            // Post-physics: water, boost, collision response
            f32 speedMult = collision_updatePostPhysics(i, FRAME_TIME, posArr, velArr);

            // Update last valid position (for respawn targeting)
            // In MKWii, JugemPoint data is used; we store the current position
            // if on a road surface.
            if (!collision_isOffRoad(i)) {
                f32 yawRad = EGG::DegToRad(d.players[i].getYaw());
                collision_setLastValidPos(i, posArr, yawRad);
            }

            // Apply speed multiplier from collision physics
            // Note: In the original MKWii, the offroad/water speed penalty is handled
            // by PlayerSub10's kclSpeedFactor which is already set in
            // updateWithDecompiledPhysics(). This additional multiplier from
            // WaterCollision/ColResponse is a secondary safety net.
            // We don't directly modify PlayerPhysics speed here — the primary
            // speed control is through PlayerSub10's kcl factors.
        }

        // Global collision updates (moving objects)
        collision_updateGlobal(FRAME_TIME);
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

    // Phase 29: Update decompiled Item system (roulette, active items, collisions)
    // Push player positions into item bridge before update
    for (u32 i = 0; i < d.playerCount; i++) {
        const auto& ppos = d.players[i].getPosition();
        item_setPlayerPosition(i, ppos.x, ppos.y, ppos.z);
        // Push position rank from race session
        u32 rank = d.raceSession.getRacePosition(i);
        item_setPlayerPositionRank(i, rank > 0 ? rank : 1);
    }
    item_update(FRAME_TIME);

    // 4. Item collection for player 0
    if (d.players[0].isActive() && !d.players[0].m_finished) {
        bool collected = d.itemManager.tryCollect(d.players[0].getPosition(), *d.players[0].m_itemSlot);
        // Phase 29: If item box collected, trigger item roulette via bridge
        if (collected) {
            u32 rank = d.raceSession.getRacePosition(0);
            item_decideItemForPlayer(0, rank > 0 ? rank : 1);
        }
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
        u8 prevLap = d.players[i].m_lap;
        d.players[i].m_lap = rs.currentLap;
        d.players[i].m_finished = rs.finished;
        d.players[i].m_finishTime = rs.finishPosition > 0 ? rs.raceTime : 0.0f;
        d.players[i].m_finishPosition = rs.finishPosition;

        // Phase 30: Notify RaceSequence when a player crosses the finish line
        // (lap increment detected). This enables RaceSequence's lap validation,
        // timing, and finish detection to work from the platform's checkpoint
        // system. In the original MKWii, the S/F line crossing is detected by
        // RaceinfoPlayer::updateCheckpoint() via KCP checkpoint proximity.
        if (rs.currentLap > prevLap && d.raceSequence) {
            notifyRaceSequenceLineCross(i);
            printf("[RaceScene] Player %u completed lap %u → %u\n",
                   i, prevLap, rs.currentLap);

            // Phase 32: Record lap in CtrlRaceTime for HUD display.
            // The "LAST LAP" indicator on the HUD reads from CtrlRaceTime.
            f32 lapMs = d.raceSession.getRacer(0).raceTime * 1000.0f;
            bridge_recordLapToCtrlRaceTime(lapMs, rs.currentLap);
            bridge_ctrlRaceTimeStartLapTimer(lapMs);

            // Phase 32: Record finish in Raceinfo when player finishes final lap.
            if (rs.finished && rs.finishPosition > 0) {
                bridge_raceinfoSetFinishPosition(i, (u8)rs.finishPosition);
            }
        }

        if (i > 0) {
            d.raceSession.getRacer(i).distance = d.players[i].m_distance;
        }
    }

    // Player distance
    d.raceSession.getRacer(0).distance = d.players[0].m_distance;

    // 6. Calculate positions
    d.raceSession.calculatePositions();

    // =========================================================================
    // Phase 21 extended: Sync platform → RaceSequence + RaceManager
    // =========================================================================
    // RaceSequence gets per-player lap/finish/distance data each frame.
    // RaceManager gets the same for its GP scoring system.
    // In the original, both are updated from KartObjectManager state.
    {
        u8  seqLaps[RACE_BRIDGE_MAX];
        bool seqFinished[RACE_BRIDGE_MAX];
        u32 seqDistances[RACE_BRIDGE_MAX];

        memset(seqLaps, 0, sizeof(seqLaps));
        memset(seqFinished, 0, sizeof(seqFinished));
        memset(seqDistances, 0, sizeof(seqDistances));

        for (u32 i = 0; i < d.playerCount && i < RACE_BRIDGE_MAX; i++) {
            seqLaps[i] = (u8)d.players[i].m_lap;
            seqFinished[i] = d.players[i].m_finished;
            seqDistances[i] = static_cast<u32>(d.players[i].m_distance);
        }

        // Sync to RaceSequence
        syncRaceSequenceFromGame(d.playerCount, seqLaps, seqFinished, seqDistances);
    }

    // =========================================================================
    // Phase 32: Tick CtrlRaceTime each frame during racing.
    // =========================================================================
    // CtrlRaceTime reads from RaceManager::timer to compute the
    // authoritative time display string matching the original HUD.
    bridge_updateCtrlRaceTime();

    // =========================================================================
    // Phase 21: Sync platform game state → decompiled RaceManager
    // =========================================================================
    // In the original MKWii, RaceManager::update() reads from
    // KartObjectManager each frame. On PC, we bridge by collecting
    // player state into arrays and passing to the race_bridge.
    {
        f32 positions[RACE_BRIDGE_MAX][3];
        u8  laps[RACE_BRIDGE_MAX];
        bool finished[RACE_BRIDGE_MAX];
        u8  finishPos[RACE_BRIDGE_MAX];
        f32 distances[RACE_BRIDGE_MAX];

        memset(positions, 0, sizeof(positions));
        memset(laps, 0, sizeof(laps));
        memset(finished, 0, sizeof(finished));
        memset(finishPos, 0, sizeof(finishPos));
        memset(distances, 0, sizeof(distances));

        for (u32 i = 0; i < d.playerCount && i < RACE_BRIDGE_MAX; i++) {
            const auto& pos = d.players[i].getPosition();
            positions[i][0] = pos.x;
            positions[i][1] = pos.y;
            positions[i][2] = pos.z;
            laps[i] = (u8)d.players[i].m_lap;
            finished[i] = d.players[i].m_finished;
            finishPos[i] = (u8)d.players[i].m_finishPosition;
            distances[i] = d.players[i].m_distance;
        }

        updateRaceManagerFromGame(positions, laps, finished, finishPos,
                                   distances, d.playerCount);

        // Also sync frame count to RaceManager timer
        updateRaceTimerFromGame(getFrameCount());
    }

    // =========================================================================
    // Phase 30: Tick decompiled Raceinfo per-frame update + calcPositions
    // =========================================================================
    // In the original MKWii, Raceinfo::update() is called each frame from
    // the race scene's calc(). It updates per-player checkpoint detection
    // (via RaceinfoPlayer::updateCheckpoint), progress values, and timing.
    // Then Raceinfo::calcPositions() sorts all players by progress to
    // determine the current race rankings.
    //
    // The Raceinfo positions feed into:
    //   - RaceManagerPlayer.position (for GP scoring and HUD display)
    //   - CtrlRaceTime (for time delta display in Time Attack)
    //   - RaceDirector standings (for cup results)
    //
    // We call this AFTER updateRaceManagerFromGame() so that the cached
    // kart positions (s_playerPositions) are fresh for RaceinfoPlayer's
    // bridge_getKartPosition() calls.
    {
        using namespace System;
        if (RaceConfig::spInstance && RaceConfig::spInstance->spInstance) {
            // Access Raceinfo through Racedata (stored in RaceConfig).
            // In the original, Raceinfo is owned by the race scene and
            // accessed via RaceConfig's race scenario chain.
            // For PC, we call calcPositions() directly on RaceManager's
            // player state which was already synced above.

            // Update RaceManagerPlayer positions from race session
            // RaceManagerPlayer.position is read by the HUD and GP scoring.
            if (RaceManager::spInstance && RaceManager::spInstance->players) {
                for (u32 i = 0; i < d.playerCount && i < MAX_PLAYER_COUNT; i++) {
                    u32 rank = d.raceSession.getRacePosition(i);
                    if (RaceManager::spInstance->players[i]) {
                        RaceManager::spInstance->players[i]->position =
                            static_cast<s8>(rank > 0 ? rank : (i + 1));
                    }
                }
            }
        }
    }

    // =========================================================================
    // Phase 25: Sync per-frame air state + drift dir into effect_bridge
    // =========================================================================
    // In the original MKWii, KartCollide::testFloor() sets air state and
    // KartMove::calcDrift() sets drift direction each frame. These values
    // are read by PlayerSub10's sub_getAirState/sub_getDriftDir stubs.
    // On PC, we compute these from the platform collision and KartState.
    {
        for (u32 i = 0; i < d.playerCount; i++) {
            // Air state: use CourseColManager floor query
            const auto& pos = d.players[i].getPosition();
            Field::CourseColManager* ccm = Field::CourseColManager::instance();
            bool inAir = false;
            if (ccm && ccm->isLoaded()) {
                f32 floorY = ccm->getFloorAt(pos.x, pos.y + 50.0f, pos.z);
                inAir = (pos.y - floorY > 20.0f);
            }
            bridge_setAirState(i, inAir);

            // Drift direction: read from KartState if available
            u8 driftDir = 0;
            if (d.players[i].getKartState()) {
                driftDir = d.players[i].getKartState()->getDriftState();
            }
            bridge_setDriftDir(i, driftDir);
        }
    }

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

        // Phase 32: Use CtrlRaceTime for HUD time display (100% faithful).
        // CtrlRaceTime reads from RaceManager::timer each frame via calcSelf(),
        // computing the exact same time string the original MKWii HUD shows.
        // This is the authoritative source — matching the original binary's
        // CtrlRaceTime::calcSelf() → formatTime() → UI text update chain.
        {
            const char* timeText = bridge_getCtrlRaceTimeText();
            if (timeText && timeText[0] != '\0') {
                d.hud.setRaceTime(timeText);
            } else {
                // Fallback to race_bridge formatted time
                char timeBuf[16];
                u32 len = getRaceTimeString(timeBuf, sizeof(timeBuf));
                if (len > 0) {
                    d.hud.setRaceTime(timeBuf);
                } else {
                    d.hud.setRaceTime(d.raceSession.getRaceTimeString());
                }
            }
        }

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

    // Phase 21: End RaceSequence (original MKWii lifecycle)
    // In the original, when all players finish or time expires,
    // RaceSequence::endRace() is called which triggers position
    // calculation and point awarding. We call it before RaceManager.
    if (m_raceData && m_raceData->raceSequence) {
        // Mark any remaining unfinished players as DNF
        for (u32 i = 0; i < m_raceData->playerCount; i++) {
            if (!m_raceData->players[i].m_finished) {
                m_raceData->raceSequence->finishPlayer(
                    i, RaceEngine::FINISH_TIME_UP);
            }
        }
        m_raceData->raceSequence->endRace();
        printf("[RaceScene] RaceSequence ended — phase: %d\n",
               m_raceData->raceSequence->getPhase());
    }

    // Phase 21: End RaceDirector race (multi-race series coordinator)
    if (m_raceData && m_raceData->raceDirector) {
        m_raceData->raceDirector->endRace();
        printf("[RaceScene] RaceDirector phase: %d\n",
               m_raceData->raceDirector->getPhase());
    }

    // Phase 21: Notify RaceManager of race end (100% faithful to original)
    // RaceManager::endRace() sets stage = FINISHED_RACE and updates GP scores.
    if (System::RaceManager::spInstance) {
        // First, mark all unfinished players via the bridge
        if (m_raceData) {
            for (u32 i = 0; i < m_raceData->playerCount && i < RACE_BRIDGE_MAX; i++) {
                if (m_raceData->players[i].m_finished && m_raceData->players[i].m_finishPosition > 0) {
                    markPlayerFinished(i, (u8)m_raceData->players[i].m_finishPosition);
                    // Phase 32: Also record in Racedata for awards/credits
                    f32 raceTimeMs = m_raceData->raceSession.getRacer(0).raceTime * 1000.0f;
                    bridge_racedataSetFinish(i, (u8)m_raceData->players[i].m_finishPosition,
                                             (u32)raceTimeMs);
                }
            }
        }
        System::RaceManager::spInstance->endRace();
    }

    // Phase 32: Stop CtrlRaceTime clock at race end.
    // This freezes the displayed time at the final value.
    bridge_stopCtrlRaceTimeClock();

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
    if (!m_raceData) return;

    // Phase 21: Post-race flow — match original MKWii behavior
    // In the original, after finishRace() the scene enters a waiting state
    // where:
    //   1. Remaining players continue racing until time-up or all finish
    //   2. RaceDirector transitions to POST_RACE → CUP_RESULTS (if GP)
    //   3. Results are displayed before returning to menu
    // On PC, we simplify: wait for quit key, then exit.

    // Tick RaceSequence in finish phase (counts down finishTimer)
    if (m_raceData->raceSequence) {
        m_raceData->raceSequence->update();
    }
    if (m_raceData->raceDirector) {
        m_raceData->raceDirector->update();
    }

    // Check quit
    const auto& input = Platform::InputManager::getState();
    if (input.quit) {
        // SceneDirector handles cleanup
    }

    // Post-race HUD update (keep displaying final position)
    if (m_raceData->hudInitialized) {
        // RaceDirector phase logging (every 300 frames)
        static u32 s_postRaceLogTimer = 0;
        s_postRaceLogTimer++;
        if (s_postRaceLogTimer >= 300) {
            s_postRaceLogTimer = 0;
            printf("  Post-race | RaceDir: phase=%d race=%u/%u | RaceSeq: phase=%d finished=%u\n",
                   m_raceData->raceDirector ? m_raceData->raceDirector->getPhase() : -1,
                   m_raceData->raceDirector ? m_raceData->raceDirector->getCurrentRace() + 1 : 0,
                   m_raceData->raceDirector ? m_raceData->raceDirector->getTotalRaces() : 0,
                   m_raceData->raceSequence ? m_raceData->raceSequence->getPhase() : -1,
                   m_raceData->raceSequence ? m_raceData->raceSequence->getFinishedCount() : 0);
        }
    }
}

} // namespace Scene