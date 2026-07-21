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
#include "platform/graphics.hpp"
#include "platform/input.hpp"
#include "platform/window.hpp"

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

    u32 totalLaps;
    bool raceFinishedPrinted;
    int frameLogCounter;

    RaceData()
        : trackManager(nullptr)
        , trackLoaded(false)
        , playerCount(TOTAL_RACERS)
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
    if (m_raceData) {
        if (m_raceData->trackManager) {
            delete m_raceData->trackManager;
            m_raceData->trackManager = nullptr;
        }
        m_raceData->itemManager.cleanupAllGL();
        delete m_raceData;
        m_raceData = nullptr;
    }
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

    // Initialize race session
    d.raceSession.init(TOTAL_RACERS, DEFAULT_LAP_COUNT, kmp.checkpoints);
    d.raceSession.startCountdown();
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

    // Setup camera following player 0
    f32 aspect = static_cast<f32>(Platform::Window::getWidth()) /
                 static_cast<f32>(Platform::Window::getHeight());

    const auto& playerPos = d.players[0].getPosition();
    auto camPos = d.players[0].getChaseCamPos(CAMERA_BACK_DIST, CAMERA_UP_OFFSET);

    Platform::Graphics::setupCamera(
        camPos.x, camPos.y, camPos.z,
        playerPos.x, playerPos.y, playerPos.z,
        CAMERA_FOV_DEG, aspect, CAMERA_NEAR, CAMERA_FAR);

    // Render all items and karts
    const auto& vp = Platform::Graphics::getViewProjMatrix();
    d.itemManager.renderBoxes(vp);

    for (u32 i = 1; i < d.playerCount; i++) {
        if (d.players[i].isActive()) {
            d.players[i].render(vp);
        }
    }

    if (d.players[0].isActive()) {
        d.players[0].render(vp);
    }
}

// =============================================================================
// updateCountdown — 3-2-1-GO
// =============================================================================

void RaceScene::updateCountdown() {
    if (m_raceData) {
        m_raceData->raceSession.updateCountdown(FRAME_TIME);
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

    for (u32 i = 0; i < d.playerCount; i++) {
        if (d.players[i].m_finished) continue;

        if (i == 0) {
            d.players[0].update(FRAME_TIME, &input);
        } else {
            d.players[i].update(FRAME_TIME, nullptr);
        }
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
    if (itemPressed && !prevItemPressed && d.players[0].m_itemSlot->type != ITEM_NONE) {
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

    // 8. Status log
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
}

// =============================================================================
// finishRace
// =============================================================================

void RaceScene::finishRace() {
    m_racePhase = PHASE_FINISH;
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