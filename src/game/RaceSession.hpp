#pragma once
// =============================================================================
// RaceSession.hpp — Race session management for M9
// MAESTRO Phase 7, Milestone M9: Full Race
// =============================================================================
//
// Manages the full race lifecycle: countdown, lap counting, position tracking,
// timing, and finish detection. Each racer (player + AI) has a RacerState
// tracked by the session.
//
// Dependencies: rk_types.h, EGG/math.h
// =============================================================================

#include "rk_types.h"
#include "EGG/math.h"
#include "loaders/kmp_loader.hpp"  // Loaders::KmpEntry::CheckpointGroup

// =============================================================================
// RacePhase — Current phase of the race
// =============================================================================
enum RacePhase : u8 {
    RACE_PHASE_COUNTDOWN,   // 3-2-1-GO countdown before race starts
    RACE_PHASE_RACING,      // Active racing
    RACE_PHASE_FINISHED,    // Race is over, showing results
    RACE_PHASE_EXIT         // Exiting
};

// =============================================================================
// RacerState — Per-racer tracking for position, laps, timing
// =============================================================================
struct RacerState {
    u32  racerId;           // Index (0 = player, 1+ = AI)
    u32  currentLap;        // Current lap (0 = hasn't crossed start, 1 = lap 1 in progress)
    u32  totalLaps;         // Race length (typically 3)
    f32  lapTimes[16];      // Time for each completed lap (up to 16 laps)
    u32  lastCheckpoint;    // Last checkpoint ID crossed
    f32  raceTime;          // Total race time (seconds)
    f32  distance;          // Approximate distance along track (for position calc)
    bool finished;           // Has completed all laps
    u32  finishPosition;     // Final race position (1st, 2nd, etc.)

    RacerState()
        : racerId(0)
        , currentLap(0)
        , totalLaps(3)
        , lastCheckpoint(0)
        , raceTime(0.0f)
        , distance(0.0f)
        , finished(false)
        , finishPosition(0) {
        for (u32 i = 0; i < 16; i++) lapTimes[i] = 0.0f;
    }
};

// =============================================================================
// RaceSession — Full race management
// =============================================================================
class RaceSession {
public:
    RaceSession();
    ~RaceSession();

    // -- Initialization -------------------------------------------------------

    /// Initialize the race session.
    /// @param totalRacers    Total number of racers (player + AI)
    /// @param totalLaps      Number of laps in the race
    /// @param checkpoints   KMP checkpoint groups for lap detection
    void init(u32 totalRacers, u32 totalLaps,
              const std::vector<Loaders::KmpEntry::CheckpointGroup>& checkpoints);

    // -- Race phase management ------------------------------------------------

    /// Start the countdown sequence (3 seconds).
    void startCountdown();

    /// Check if countdown is complete and transition to racing.
    /// Call once per frame.
    void updateCountdown(f32 dt);

    /// Get current race phase.
    RacePhase getPhase() const { return m_phase; }

    /// Get countdown timer value (3.0 → 0.0, then racing starts).
    f32 getCountdownTimer() const { return m_countdownTimer; }

    // -- Per-frame update ------------------------------------------------------

    /// Update all racer states (timing).
    /// @param dt  Delta time in seconds
    void update(f32 dt);

    // -- Lap counting ----------------------------------------------------------

    /// Check a racer against checkpoints and advance lap if needed.
    /// Call this for each racer each frame with their current position.
    /// @param racerId  Which racer (0 = player)
    /// @param position Racer's world position
    void checkCheckpoints(u32 racerId, const EGG::Vector3f& position);

    // -- Position calculation -------------------------------------------------

    /// Recalculate race positions based on distance/lap.
    /// Should be called after all racers have been updated.
    void calculatePositions();

    /// Get a racer's current position (1-indexed: 1st place, 2nd, etc.).
    u32 getRacePosition(u32 racerId) const;

    /// Get the player's race position (convenience).
    u32 getPlayerPosition() const { return getRacePosition(0); }

    // -- Racer state accessors --------------------------------------------------

    /// Get mutable access to a racer's state.
    RacerState& getRacer(u32 racerId);

    /// Get read-only access to a racer's state.
    const RacerState& getRacer(u32 racerId) const;

    /// Get total racer count.
    u32 getRacerCount() const { return m_totalRacers; }

    // -- Lap information -------------------------------------------------------

    /// Get the current lap the player is on (1-indexed for display).
    u32 getPlayerLap() const;

    /// Get formatted current lap time string (MM:SS.mmm).
    const char* getCurrentLapTimeString() const;

    /// Get formatted total race time string (MM:SS.mmm).
    const char* getRaceTimeString() const;

    /// Check if any racer has finished.
    bool hasAnyFinished() const;

    /// Check if all racers have finished.
    bool allFinished() const;

    // -- Finish management -----------------------------------------------------

    /// Mark a racer as finished with their position.
    void markFinished(u32 racerId);

private:
    // -- State ----------------------------------------------------------------
    RacePhase m_phase;
    f32 m_countdownTimer;       // Seconds remaining in countdown
    f32 m_countdownDuration;    // Total countdown time (3.0 seconds)

    // -- Racers ----------------------------------------------------------------
    std::vector<RacerState> m_racers;
    u32 m_totalRacers;
    u32 m_totalLaps;
    u32 m_nextFinishPosition;  // Next position to assign on finish

    // -- Checkpoints -----------------------------------------------------------
    std::vector<Loaders::KmpEntry::CheckpointGroup> m_checkpoints;

    // -- Timer strings (pre-formatted for HUD) ---------------------------------
    char m_lapTimeStr[16];      // "MM:SS.mmm"
    char m_raceTimeStr[16];

    // -- Internal helpers -------------------------------------------------------
    void formatTime(f32 seconds, char* buffer, u32 bufSize);

    /// Simple point-in-box test for checkpoint overlap.
    bool isInCheckpoint(const EGG::Vector3f& pos,
                        const Loaders::KmpEntry::CheckpointGroup& cp) const;
};
