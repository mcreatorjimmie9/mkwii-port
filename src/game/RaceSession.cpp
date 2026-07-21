// =============================================================================
// RaceSession.cpp — Race session implementation (M9)
// MAESTRO Phase 7, Milestone M9: Full Race
// =============================================================================

#include "game/RaceSession.hpp"
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>

// =============================================================================
// Constructor / Destructor
// =============================================================================

RaceSession::RaceSession()
    : m_phase(RACE_PHASE_COUNTDOWN)
    , m_countdownTimer(3.0f)
    , m_countdownDuration(3.0f)
    , m_totalRacers(1)
    , m_totalLaps(3)
    , m_nextFinishPosition(1) {
    std::memset(m_lapTimeStr, 0, sizeof(m_lapTimeStr));
    std::memset(m_raceTimeStr, 0, sizeof(m_raceTimeStr));
}

RaceSession::~RaceSession() = default;

// =============================================================================
// init — Set up racers and checkpoints
// =============================================================================

void RaceSession::init(u32 totalRacers, u32 totalLaps,
                          const std::vector<Loaders::KmpEntry::CheckpointGroup>& checkpoints) {
    m_totalRacers = totalRacers;
    m_totalLaps = totalLaps;
    m_checkpoints = checkpoints;

    m_racers.resize(totalRacers);
    for (u32 i = 0; i < totalRacers; i++) {
        m_racers[i].racerId = i;
        m_racers[i].totalLaps = totalLaps;
        m_racers[i].currentLap = 0;
        m_racers[i].finished = false;
    }

    m_nextFinishPosition = 1;
    m_phase = RACE_PHASE_COUNTDOWN;
    m_countdownTimer = m_countdownDuration;

    printf("  Race: %u racers, %u laps, %u checkpoints\n",
           totalRacers, totalLaps, static_cast<u32>(checkpoints.size()));
}

// =============================================================================
// startCountdown — Begin the pre-race countdown
// =============================================================================

void RaceSession::startCountdown() {
    m_phase = RACE_PHASE_COUNTDOWN;
    m_countdownTimer = m_countdownDuration;
    printf("  Race: Countdown started (%.0f seconds)\n", m_countdownDuration);
}

// =============================================================================
// updateCountdown — Tick the countdown, transition to racing when done
// =============================================================================

void RaceSession::updateCountdown(f32 dt) {
    if (m_phase != RACE_PHASE_COUNTDOWN) return;

    m_countdownTimer -= dt;
    if (m_countdownTimer <= 0.0f) {
        m_countdownTimer = 0.0f;
        m_phase = RACE_PHASE_RACING;
        printf("  Race: GO! Racing started.\n");
    }
}

// =============================================================================
// update — Update all racer timings
// =============================================================================

void RaceSession::update(f32 dt) {
    if (m_phase != RACE_PHASE_RACING) return;

    for (auto& racer : m_racers) {
        if (!racer.finished) {
            racer.raceTime += dt;
        }
    }

    // Format strings for HUD
    const auto& player = m_racers[0];
    if (player.currentLap > 0 && player.currentLap <= player.totalLaps) {
        formatTime(player.raceTime - player.lapTimes[player.currentLap - 1],
                   m_lapTimeStr, sizeof(m_lapTimeStr));
    } else {
        formatTime(0.0f, m_lapTimeStr, sizeof(m_lapTimeStr));
    }
    formatTime(player.raceTime, m_raceTimeStr, sizeof(m_raceTimeStr));
}

// =============================================================================
// checkCheckpoints — Point-in-box test against all checkpoints
// =============================================================================

void RaceSession::checkCheckpoints(u32 racerId, const EGG::Vector3f& position) {
    if (racerId >= m_totalRacers) return;
    if (m_phase != RACE_PHASE_RACING) return;

    auto& racer = m_racers[racerId];
    if (racer.finished) return;

    // Simple lap counting: use checkpoint 0 (start/finish line) for lap detection
    // The kart must cross checkpoints in order to count a valid lap.
    // For simplicity, we detect the start/finish checkpoint crossing.

    for (u32 cpIdx = 0; cpIdx < static_cast<u32>(m_checkpoints.size()); cpIdx++) {
        const auto& cp = m_checkpoints[cpIdx];

        if (isInCheckpoint(position, cp)) {
            // Only process if this is a new checkpoint entry
            if (racer.lastCheckpoint != cpIdx) {
                racer.lastCheckpoint = cpIdx;

                // Start/finish line crossing (checkpoint 0 = start line)
                if (cpIdx == 0 && racer.currentLap > 0) {
                    // Record lap time
                    racer.lapTimes[racer.currentLap - 1] = racer.raceTime;
                    racer.currentLap++;

                    if (racer.currentLap > racer.totalLaps) {
                        // Finished!
                        markFinished(racerId);
                    }
                } else if (cpIdx == 0 && racer.currentLap == 0) {
                    // First crossing of start line = lap 1 begins
                    racer.currentLap = 1;
                    racer.lastCheckpoint = 0;
                }

                // Update distance approximation for position calculation
                racer.distance += 1.0f;
            }
            break;
        }
    }
}

// =============================================================================
// calculatePositions — Sort racers by lap + distance
// =============================================================================

void RaceSession::calculatePositions() {
    // Sort racers by: finished (earlier finish = better), then by
    // (currentLap * 10000 + distance) descending
    std::vector<u32> sorted(m_totalRacers);
    for (u32 i = 0; i < m_totalRacers; i++) sorted[i] = i;

    std::sort(sorted.begin(), sorted.end(), [this](u32 a, u32 b) {
        const auto& ra = m_racers[a];
        const auto& rb = m_racers[b];

        // Finished racers are always ahead of unfinished ones
        if (ra.finished && !rb.finished) return true;
        if (!ra.finished && rb.finished) return false;
        if (ra.finished && rb.finished) {
            return ra.finishPosition < rb.finishPosition;
        }

        // Unfinished: compare by lap then distance
        f32 scoreA = ra.currentLap * 10000.0f + ra.distance;
        f32 scoreB = rb.currentLap * 10000.0f + rb.distance;
        return scoreA > scoreB;
    });

    // Assign positions
    for (u32 pos = 0; pos < sorted.size(); pos++) {
        u32 racerId = sorted[pos];
        if (!m_racers[racerId].finished) {
            m_racers[racerId].finishPosition = pos + 1;
        }
    }
}

// =============================================================================
// getRacePosition — Get a racer's position
// =============================================================================

u32 RaceSession::getRacePosition(u32 racerId) const {
    if (racerId >= m_totalRacers) return m_totalRacers;
    return m_racers[racerId].finishPosition;
}

// =============================================================================
// Racer state accessors
// =============================================================================

RacerState& RaceSession::getRacer(u32 racerId) {
    return m_racers[racerId];
}

const RacerState& RaceSession::getRacer(u32 racerId) const {
    return m_racers[racerId];
}

// =============================================================================
// getPlayerLap — Get player's current lap (1-indexed for display)
// =============================================================================

u32 RaceSession::getPlayerLap() const {
    u32 lap = m_racers[0].currentLap;
    if (lap == 0) return 1;  // Before start line = lap 1
    if (lap > m_totalLaps) return m_totalLaps;
    return lap;
}

// =============================================================================
// Timer string accessors
// =============================================================================

const char* RaceSession::getCurrentLapTimeString() const { return m_lapTimeStr; }
const char* RaceSession::getRaceTimeString() const { return m_raceTimeStr; }

// =============================================================================
// Finish management
// =============================================================================

bool RaceSession::hasAnyFinished() const {
    for (const auto& r : m_racers) {
        if (r.finished) return true;
    }
    return false;
}

bool RaceSession::allFinished() const {
    for (const auto& r : m_racers) {
        if (!r.finished) return false;
    }
    return true;
}

void RaceSession::markFinished(u32 racerId) {
    if (racerId >= m_totalRacers) return;
    auto& racer = m_racers[racerId];
    if (racer.finished) return;

    racer.finished = true;
    racer.finishPosition = m_nextFinishPosition;
    m_nextFinishPosition++;

    if (racerId == 0) {
        printf("  Race: Player FINISHED in position %u! Time: %s\n",
               racer.finishPosition, m_raceTimeStr);
    } else {
        printf("  Race: AI %u finished in position %u\n",
               racerId, racer.finishPosition);
    }
}

// =============================================================================
// isInCheckpoint — Simple axis-aligned box test (XZ plane)
// =============================================================================

bool RaceSession::isInCheckpoint(const EGG::Vector3f& pos,
                                    const Loaders::KmpEntry::CheckpointGroup& cp) const {
    // Checkpoint is an oriented bounding box, but for simplicity we do
    // an axis-aligned test using position and scale as half-extents.
    f32 halfW = cp.scaleX * 0.5f;
    f32 halfD = cp.scaleZ * 0.5f;
    f32 halfH = 500.0f;  // Height threshold (generous Y range)

    f32 dx = pos.x - cp.position.x;
    f32 dy = pos.y - cp.position.y;
    f32 dz = pos.z - cp.position.z;

    return (dx >= -halfW && dx <= halfW &&
            dy >= -halfH && dy <= halfH &&
            dz >= -halfD && dz <= halfD);
}

// =============================================================================
// formatTime — Format seconds as MM:SS.mmm
// =============================================================================

void RaceSession::formatTime(f32 seconds, char* buffer, u32 bufSize) {
    if (seconds < 0.0f) seconds = 0.0f;

    u32 totalMs = static_cast<u32>(seconds * 1000.0f);
    u32 mins = totalMs / 60000;
    u32 secs = (totalMs % 60000) / 1000;
    u32 ms   = totalMs % 1000;

    std::snprintf(buffer, bufSize, "%u:%02u.%03u", mins, secs, ms);
}
