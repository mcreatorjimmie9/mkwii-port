#pragma once
// SceneRace.hpp — Main Race Scene
// Reconstructed from Scene module (0x8053xxxx)
//
// RaceScene orchestrates the entire race flow: course loading,
// countdown, active racing, and race finish. It manages the
// race timer, position tracking, and camera system during races.

#include "rk_common.h"
#include "SceneBase.hpp"

namespace Scene {

class SceneCamera;
class ObjectDirector;
class Course;
class EffectDirector;

// =============================================================================
// RaceScene — Main race gameplay scene
//
// This is the core scene that runs during actual gameplay.
// It drives the game loop for racing: load → countdown → race → finish.
// =============================================================================
class RaceScene : public SceneBase {
public:
    enum RacePhase {
        PHASE_LOADING    = 0,  // Loading course data
        PHASE_LOADED     = 1,  // Course loaded, preparing
        PHASE_COUNTDOWN  = 2,  // 3-2-1-GO countdown
        PHASE_RACING     = 3,  // Active racing
        PHASE_FINISH     = 4,  // Race finished, showing results
        PHASE_UNLOADING  = 5,  // Unloading course data
    };

    RaceScene();
    virtual ~RaceScene();

    // SceneBase interface
    virtual void init() override;
    virtual void calc() override;
    virtual void draw() override;
    virtual u32 getSceneId() const override { return 2; } // Scene ID for race

    /// Load a course by ID.
    /// @param courseId  Course index
    void loadCourse(u32 courseId);

    /// Begin the 3-2-1-GO countdown sequence.
    void startCountdown();

    /// Begin actual racing (called after countdown reaches GO).
    void startRace();

    /// Mark the race as finished.
    void finishRace();

    // State queries
    RacePhase getRacePhase() const { return m_racePhase; }
    u32 getCourseId() const { return m_courseId; }
    u32 getCountdownTimer() const { return m_countdownTimer; }
    f32 getRaceTime() const { return m_raceTime; }
    bool isRacingActive() const { return m_racePhase == PHASE_RACING; }
    bool isCountingDown() const { return m_racePhase == PHASE_COUNTDOWN; }

private:
    void updateCountdown();
    void updateRacing();
    void updateFinish();
    void initSubsystems();

    RacePhase m_racePhase;
    u32 m_courseId;

    // Countdown
    u32 m_countdownTimer;     // Frames remaining in countdown (180 = 3 sec at 60fps)
    u32 m_countdownNumber;    // Current displayed number (3, 2, 1, 0=GO)

    // Race timer
    f32 m_raceTime;           // Elapsed race time in seconds

    // Sub-scene directors (owned references)
    SceneCamera* m_camera;
    ObjectDirector* m_objectDirector;
    Course* m_course;
    EffectDirector* m_effectDirector;

    // Lap tracking
    u32 m_totalLaps;
    u32 m_currentLap;
};

} // namespace Scene