// SceneRace.cpp — Main Race Scene implementation
// Reconstructed from Scene module (0x8053xxxx)
//
// RaceScene orchestrates the entire race flow: course loading,
// countdown, active racing, and race finish. It manages the
// race timer, position tracking, and camera system during races.
// This is the core gameplay scene that drives the main game loop.

#include "SceneRace.hpp"
#include "SceneCamera.hpp"
#include "ObjectDirector.hpp"
#include "Course.hpp"
#include "EffectDirector.hpp"
#include <string.h>

namespace Scene {

// =============================================================================
// Constants
// =============================================================================

// Race timing
static const f32 FRAME_TIME = 1.0f / 60.0f;     // Seconds per frame at 60fps
static const u32 COUNTDOWN_FRAMES_3 = 180;        // 3 seconds
static const u32 COUNTDOWN_FRAMES_2 = 120;        // 2 seconds
static const u32 COUNTDOWN_FRAMES_1 = 60;         // 1 second
static const u32 COUNTDOWN_FRAMES_GO = 0;         // GO!

// Race limits
static const u32 DEFAULT_LAP_COUNT = 3;
static const f32 RACE_TIME_LIMIT = 300.0f;         // 5 minutes default
static const u32 FINISH_DELAY_FRAMES = 180;        // 3 seconds before results

// Item box placement
static const u32 MAX_ITEM_BOXES = 64;

// Player count
static const u8 MAX_LOCAL_PLAYERS = 4;

// =============================================================================
// Anonymous namespace — Race helper functions
// =============================================================================
namespace {

// Per-player race state tracked by the scene
class PlayerRaceState {
public:
    void reset() {
        memset(this, 0, sizeof(PlayerRaceState));
        m_finished = false;
        m_finishTime = 0.0f;
        m_finishPosition = 0;
        m_lap = 0;
        m_raceProgress = 0.0f;
        m_inputBlocked = true;
    }

    f32 m_raceProgress;     // 0.0-1.0 progress through course (for position calc)
    u32 m_lap;              // Current lap number (0-indexed)
    bool m_finished;        // Has this player finished all laps?
    f32 m_finishTime;       // Time when they crossed the finish line
    u32 m_finishPosition;   // Final race position (1st, 2nd, etc.)
    bool m_inputBlocked;    // True during countdown, false during racing
};

// Player states (would be heap-allocated in real game)
static PlayerRaceState s_playerStates[MAX_LOCAL_PLAYERS];
static u32 s_finishedCount = 0;
static u32 s_activePlayerCount = 1;

// Sort player indices by race progress (descending) to determine positions.
// Uses a simple insertion sort — fine for max 12 players.
void calculatePositions(u32 playerCount, u8* outOrder) {
    // Initialize order array
    for (u32 i = 0; i < playerCount; i++) {
        outOrder[i] = (u8)i;
    }

    // Sort by race progress descending (higher progress = better position)
    for (u32 i = 1; i < playerCount; i++) {
        u8 key = outOrder[i];
        f32 keyProgress = s_playerStates[key].m_raceProgress;
        s32 j = (s32)i - 1;

        while (j >= 0 &&
               s_playerStates[outOrder[j]].m_raceProgress < keyProgress) {
            outOrder[j + 1] = outOrder[j];
            j--;
        }
        outOrder[j + 1] = key;
    }
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
    , m_currentLap(0) {
    setState(STATE_LOADING);
}

RaceScene::~RaceScene() {
    // Ensure cleanup runs if scene is destroyed during active race.
    // Normally cleanup() should be called explicitly before destruction.
}

// =============================================================================
// init — Initialize the race scene
// =============================================================================
// @addr 0x80530040 (estimated)
//
// Resets all race state and prepares for course loading.
// Does NOT load the course itself — loadCourse() must be called separately.

void RaceScene::init() {
    // Reset phase and state
    m_racePhase = PHASE_LOADING;
    m_courseId = 0;
    m_countdownTimer = 0;
    m_countdownNumber = 0;
    m_raceTime = 0.0f;
    m_totalLaps = DEFAULT_LAP_COUNT;
    m_currentLap = 0;

    setState(STATE_LOADING);

    // Nullify subsystem pointers (will be created in initSubsystems)
    m_camera = nullptr;
    m_objectDirector = nullptr;
    m_course = nullptr;
    m_effectDirector = nullptr;

    // Reset per-player state
    s_finishedCount = 0;
    s_activePlayerCount = 1; // Default: 1 player; set by lobby
    for (u32 i = 0; i < MAX_LOCAL_PLAYERS; i++) {
        s_playerStates[i].reset();
    }
}

// =============================================================================
// loadCourse — Load a race course by ID
// =============================================================================
// @addr 0x80530100 (estimated)
//
// Performs the full course loading sequence:
// 1. Load course KCL (collision data) and BMD (model)
// 2. Load enemy/boss paths, item routes, jugem (respawn) points
// 3. Initialize subsystems (camera, objects, effects)
// 4. Place karts at start grid positions
// 5. Place item boxes at predefined positions
// 6. Setup camera for player count

void RaceScene::loadCourse(u32 courseId) {
    m_courseId = courseId;

    // --- Step 1-2: Load course geometry and collision ---
    // m_course = new Course();
    // if (!m_course->load((u16)courseId)) {
    //     return; // Course load failed
    // }

    // --- Step 3: Initialize sub-directors ---
    initSubsystems();

    // --- Step 4: Create kart instances and place on grid ---
    // for (u32 i = 0; i < s_activePlayerCount; i++) {
    //     const StartPosition* sp = m_course->getStartPosition(i);
    //     KartMove* kart = new KartMove(i);
    //     kart->setPosition(sp->position);
    //     kart->setRotation(sp->forward, sp->up);
    //     m_karts[i] = kart;
    // }

    // --- Step 5: Place item boxes from course item route data ---
    // for (u32 i = 0; i < itemBoxCount && i < MAX_ITEM_BOXES; i++) {
    //     m_objectDirector->createObject(OBJ_ITEMBOX, &itemBoxData[i]);
    // }

    // --- Step 6: Setup camera ---
    // m_camera->init(s_activePlayerCount);

    m_racePhase = PHASE_LOADED;
    setState(STATE_READY);
}

// =============================================================================
// initSubsystems — Create the scene's sub-directors
// =============================================================================
// @addr 0x80530200 (estimated)

void RaceScene::initSubsystems() {
    // Create camera system
    // m_camera = new SceneCamera();
    // m_camera->init(s_activePlayerCount);

    // Create object director for all 3D scene objects
    // m_objectDirector = new ObjectDirector();
    // m_objectDirector->init(256);

    // Create effect director for particles and screen effects
    // m_effectDirector = new EffectDirector();
    // m_effectDirector->init();
}

// =============================================================================
// startCountdown — Begin the 3-2-1-GO countdown
// =============================================================================
// @addr 0x80530280 (estimated)
//
// Transitions from PHASE_LOADED to PHASE_COUNTDOWN. All player
// input is blocked during the countdown. At GO, input is enabled.

void RaceScene::startCountdown() {
    m_racePhase = PHASE_COUNTDOWN;
    m_countdownTimer = COUNTDOWN_FRAMES_3; // 3 seconds at 60fps
    m_countdownNumber = 3;
    setState(STATE_ACTIVE);

    // Block all player input during countdown
    for (u32 i = 0; i < s_activePlayerCount; i++) {
        s_playerStates[i].m_inputBlocked = true;
    }

    // Play initial countdown sound and show "3"
    // SoundManager::playSE(SE_COUNTDOWN_BEEP);
    // HudDirector::showCountdownNumber(3);
}

// =============================================================================
// startRace — Begin actual racing (called after countdown reaches GO)
// =============================================================================
// @addr 0x80530300 (estimated)

void RaceScene::startRace() {
    m_racePhase = PHASE_RACING;
    m_raceTime = 0.0f;
    m_currentLap = 0;

    // Unblock all player input
    for (u32 i = 0; i < s_activePlayerCount; i++) {
        s_playerStates[i].m_inputBlocked = false;
        s_playerStates[i].m_lap = 0;
        s_playerStates[i].m_finished = false;
    }

    // Play GO sound
    // SoundManager::playSE(SE_COUNTDOWN_GO);

    // Switch camera from cinematic to follow mode
    // if (m_camera) {
    //     for (u32 i = 0; i < s_activePlayerCount; i++) {
    //         m_camera->setMode(CAMERA_MODE_FOLLOW);
    //     }
    // }
}

// =============================================================================
// calc — Per-frame main update loop
// =============================================================================
// @addr 0x80530360 (estimated)

void RaceScene::calc() {
    switch (m_racePhase) {
    case PHASE_LOADING:
        // Waiting for course load to complete.
        // The loading system calls loadCourse() when done.
        break;

    case PHASE_LOADED:
        // Course loaded, waiting for external trigger to start countdown.
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
        // Cleaning up course data — transition out
        break;
    }

    incrementFrame();
}

// =============================================================================
// draw — Render the race scene
// =============================================================================
// @addr 0x80530400 (estimated)
//
// Draw order: skybox, course model, objects, karts, effects, HUD.
// In split-screen, each viewport is rendered sequentially.

void RaceScene::draw() {
    if (m_racePhase == PHASE_LOADING || m_racePhase == PHASE_UNLOADING) {
        return; // Nothing to draw while loading/unloading
    }

    // --- Split-screen viewport setup ---
    // For multiplayer, divide the screen into horizontal strips.
    // Each player gets a viewport from SceneCamera::setupViewport().
    // m_camera->setupViewport(0, s_activePlayerCount);

    // --- Render pass per viewport ---
    // for (u32 vp = 0; vp < s_activePlayerCount; vp++) {
    //     m_camera->setupViewport(vp, s_activePlayerCount);
    //     if (m_course) m_course->draw();
    //     if (m_objectDirector) m_objectDirector->draw();
    //     // draw karts...
    //     if (m_effectDirector) m_effectDirector->draw();
    // }

    // --- HUD overlay (drawn last, in screen space) ---
    // Position numbers, lap counter, race timer, item slot, minimap
}

// =============================================================================
// updateCountdown — Handle the 3-2-1-GO countdown sequence
// =============================================================================
// @addr 0x80530500 (estimated)
//
// Countdown runs for 180 frames (3 seconds) at 60fps:
//   Frames 180-121: show "3"
//   Frames 120-61:  show "2"
//   Frames 60-1:    show "1"
//   Frame 0:        show "GO!" and start race

void RaceScene::updateCountdown() {
    if (m_countdownTimer > 0) {
        m_countdownTimer--;

        if (m_countdownTimer >= COUNTDOWN_FRAMES_2) {
            // "3" phase (frames 180-121)
            if (m_countdownTimer == COUNTDOWN_FRAMES_3 - 1) {
                m_countdownNumber = 3;
                // SoundManager::playSE(SE_COUNTDOWN_BEEP);
                // HudDirector::showCountdownNumber(3);
            }
        } else if (m_countdownTimer >= COUNTDOWN_FRAMES_1) {
            // "2" phase (frames 120-61)
            if (m_countdownTimer == COUNTDOWN_FRAMES_2 - 1) {
                m_countdownNumber = 2;
                // SoundManager::playSE(SE_COUNTDOWN_BEEP);
                // HudDirector::showCountdownNumber(2);
            }
        } else if (m_countdownTimer > COUNTDOWN_FRAMES_GO) {
            // "1" phase (frames 60-1)
            if (m_countdownTimer == COUNTDOWN_FRAMES_1 - 1) {
                m_countdownNumber = 1;
                // SoundManager::playSE(SE_COUNTDOWN_BEEP);
                // HudDirector::showCountdownNumber(1);
            }
        } else {
            // Frame 0: GO!
            m_countdownNumber = 0;
            startRace();
            return;
        }
    } else {
        // Timer already expired (safety fallback)
        startRace();
    }

    // During countdown, karts are visible but cannot move.
    // Camera shows the starting grid from a cinematic angle.
    // if (m_camera) {
    //     m_camera->setMode(CAMERA_MODE_CINEMATIC);
    //     m_camera->calc(FRAME_TIME);
    // }
}

// =============================================================================
// updateRacing — Main racing update loop
// =============================================================================
// @addr 0x80530600 (estimated)
//
// Called every frame during active racing:
// 1. Increment race timer
// 2. Step kart physics (movement, collision, items)
// 3. Update scene objects (item boxes, moving parts)
// 4. Update effects (particles, boost flames)
// 5. Check lap completion for all players
// 6. Calculate race positions
// 7. Check race end conditions
// 8. Update camera

void RaceScene::updateRacing() {
    // --- 1. Update race timer ---
    m_raceTime += FRAME_TIME;

    // --- 2. Step kart physics for all players ---
    // for (u32 i = 0; i < s_activePlayerCount; i++) {
    //     if (s_playerStates[i].m_finished) continue;
    //     const InputState& input = InputManager::getState(i);
    //     m_karts[i]->stepMovement(input, m_course);
    //     m_karts[i]->updateItem();
    //     m_karts[i]->updateCollision(m_course);
    //     // Inter-kart collision
    //     for (u32 j = 0; j < s_activePlayerCount; j++) {
    //         if (i == j) continue;
    //         KartCollision::check(m_karts[i], m_karts[j]);
    //     }
    // }

    // --- 3. Update scene objects (item boxes, moving course parts) ---
    // if (m_objectDirector) m_objectDirector->calc(FRAME_TIME);

    // --- 4. Update effects ---
    // if (m_effectDirector) m_effectDirector->calc(FRAME_TIME);

    // --- 5. Check lap completion ---
    // for (u32 i = 0; i < s_activePlayerCount; i++) {
    //     if (s_playerStates[i].m_finished) continue;
    //     Vec3 pos = m_karts[i]->getPosition();
    //     if (m_course->checkCrossedCheckpoint(
    //             finishLineId, m_karts[i]->getPrevPosition(), pos)) {
    //         s_playerStates[i].m_lap++;
    //         if (s_playerStates[i].m_lap >= m_totalLaps) {
    //             s_playerStates[i].m_finished = true;
    //             s_playerStates[i].m_finishTime = m_raceTime;
    //             s_finishedCount++;
    //         }
    //     }
    // }

    // --- 6. Calculate race positions ---
    // u8 posOrder[MAX_PLAYER_COUNT];
    // calculatePositions(s_activePlayerCount, posOrder);
    // for (u32 i = 0; i < s_activePlayerCount; i++) {
    //     u8 pidx = posOrder[i];
    //     if (!s_playerStates[pidx].m_finished) {
    //         s_playerStates[pidx].m_finishPosition = i + 1;
    //     }
    // }

    // --- 7. Check race end ---
    // All finished or time limit reached
    // bool allFinished = (s_finishedCount >= s_activePlayerCount);
    // bool timeUp = (m_raceTime >= RACE_TIME_LIMIT);
    // if (allFinished || timeUp) {
    //     finishRace();
    //     return;
    // }

    // --- 8. Update camera ---
    // updateCamera();
}

// =============================================================================
// finishRace — Mark the race as finished
// =============================================================================
// @addr 0x80530700 (estimated)
//
// Transitions to PHASE_FINISH. Assigns final positions to unfinished
// players (time-out scenario), plays finish sound, triggers effects.

void RaceScene::finishRace() {
    m_racePhase = PHASE_FINISH;

    // Calculate final positions for players who haven't finished
    // (time-out scenario — rank by progress)
    // u8 posOrder[MAX_PLAYER_COUNT];
    // calculatePositions(s_activePlayerCount, posOrder);
    // u32 position = 1;
    // for (u32 i = 0; i < s_activePlayerCount; i++) {
    //     u8 pidx = posOrder[i];
    //     if (!s_playerStates[pidx].m_finished) {
    //         s_playerStates[pidx].m_finishTime = m_raceTime;
    //     }
    //     s_playerStates[pidx].m_finishPosition = position++;
    // }

    // Play race finish fanfare
    // SoundManager::playSE(SE_RACE_FINISH);

    // Show checkered flag / screen flash
    // if (m_effectDirector) {
    //     m_effectDirector->startScreenEffect(
    //         ScreenEffect::SCREENFX_FADE_WHITE, 2.0f, 0.5f);
    // }
}

// =============================================================================
// updateFinish — Post-race update
// =============================================================================
// @addr 0x80530780 (estimated)
//
// During PHASE_FINISH, karts coast to a stop and the results
// overlay appears. After a delay, the scene transitions to results.

void RaceScene::updateFinish() {
    // Karts continue to move with deceleration (coast to stop)
    // for (u32 i = 0; i < s_activePlayerCount; i++) {
    //     m_karts[i]->coastToStop(FRAME_TIME);
    // }

    // Continue updating camera and effects for visual continuity
    // if (m_camera) m_camera->calc(FRAME_TIME);
    // if (m_effectDirector) m_effectDirector->calc(FRAME_TIME);

    // After a delay (FINISH_DELAY_FRAMES), SceneDirector will
    // transition to the results scene.
}

} // namespace Scene