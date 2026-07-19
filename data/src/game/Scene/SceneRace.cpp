#include "SceneRace.hpp"
#include "SceneCamera.hpp"
#include "ObjectDirector.hpp"
#include "Course.hpp"
#include "EffectDirector.hpp"

namespace Scene {

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
    , m_totalLaps(3)
    , m_currentLap(0) {
    setState(STATE_LOADING);
}

RaceScene::~RaceScene() {}

void RaceScene::init() {
    m_racePhase = PHASE_LOADING;
    m_courseId = 0;
    m_countdownTimer = 0;
    m_countdownNumber = 0;
    m_raceTime = 0.0f;
    m_totalLaps = 3;
    m_currentLap = 0;
    setState(STATE_LOADING);
}

void RaceScene::loadCourse(u32 courseId) {
    m_courseId = courseId;
    m_racePhase = PHASE_LOADED;

    // In the real game, this triggers:
    // 1. Load course KCL (collision) from disc
    // 2. Load course model (BMD) from disc
    // 3. Load course enemy paths, jugem points
    // 4. Create ObjectDirector and populate with course objects
    // 5. Initialize camera system for the course
    // 6. Initialize EffectDirector
    initSubsystems();
    setState(STATE_READY);
}

void RaceScene::initSubsystems() {
    // Create sub-directors for the race scene
    // These are typically allocated from the scene heap
    // m_camera = new SceneCamera();
    // m_objectDirector = new ObjectDirector();
    // m_course = new Course();
    // m_effectDirector = new EffectDirector();
    // m_course->load(m_courseId);
}

void RaceScene::startCountdown() {
    m_racePhase = PHASE_COUNTDOWN;
    m_countdownTimer = 180; // 3 seconds at 60fps
    m_countdownNumber = 3;
    setState(STATE_ACTIVE);
}

void RaceScene::startRace() {
    m_racePhase = PHASE_RACING;
    m_raceTime = 0.0f;
    m_currentLap = 0;
}

void RaceScene::finishRace() {
    m_racePhase = PHASE_FINISH;
}

void RaceScene::calc() {
    switch (m_racePhase) {
    case PHASE_LOADING:
        // Waiting for course load to complete
        break;

    case PHASE_LOADED:
        // Course loaded, waiting to start countdown
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
        // Cleaning up course data
        break;
    }

    incrementFrame();
}

void RaceScene::draw() {
    if (m_racePhase == PHASE_LOADING || m_racePhase == PHASE_UNLOADING) {
        return; // Nothing to draw while loading
    }

    // Draw order: skybox → course → objects → karts → effects → UI
    // m_course->draw();
    // if (m_objectDirector) m_objectDirector->draw();
    // if (m_effectDirector) m_effectDirector->draw();
}

void RaceScene::updateCountdown() {
    if (m_countdownTimer > 0) {
        m_countdownTimer--;

        // Update countdown number display
        // 180-121: show "3", 120-61: show "2", 60-1: show "1", 0: show "GO!"
        if (m_countdownTimer > 120) {
            m_countdownNumber = 3;
        } else if (m_countdownTimer > 60) {
            m_countdownNumber = 2;
        } else if (m_countdownTimer > 0) {
            m_countdownNumber = 1;
        }

        if (m_countdownTimer == 0) {
            m_countdownNumber = 0; // GO!
            startRace();
        }
    }
}

void RaceScene::updateRacing() {
    // Increment race timer
    m_raceTime += (1.0f / 60.0f); // Assuming 60fps
}

void RaceScene::updateFinish() {
    // Race is finished — show results overlay
    // After a delay, transition to results scene
}

} // namespace Scene