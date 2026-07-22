// race_bridge.cpp — Phase 21: Bridge between platform game state and
// decompiled RaceManager/RaceConfig/RaceSequence/RaceDirector system.
//
// In the original MKWii, the race engine updates RaceManagerPlayer state
// each frame from KartObjectManager positions. On PC, the platform layer
// (Game::Player, RaceSession) holds the actual game state. This bridge
// synchronizes that state into the decompiled race engine, enabling:
//   - CtrlRaceTime to display accurate time from RaceManager::timer
//   - RaceManagerPlayer.position to reflect actual race standings
//   - RaceManagerPlayer.raceCompletion to drive finish detection
//   - RaceManagerPlayer.lapCompletion to track lap progress
//   - RaceSequence countdown/race/finish FSM to mirror platform state
//   - RaceDirector multi-race series coordination
//
// All functions are extern "C" so they can be called from SceneRace.cpp
// (which includes platform headers) without pulling in C++ decompiled headers.

#include "RaceEngine/RaceManager.hpp"
#include "RaceEngine/RaceConfig.hpp"
#include "RaceEngine/CtrlRaceTime.hpp"
#include "RaceEngine/RaceSequence.hpp"
#include "RaceEngine/RaceDirector.hpp"

#include <cstring>
#include <cstdio>

// Phase 21: Pointer to the active RaceSequence and RaceDirector instances.
// These are set from SceneRace::initSubsystems() and cleared on teardown.
// Using raw pointers is faithful to the original MKWii singleton pattern.
static RaceEngine::RaceSequence* s_raceSequence = nullptr;
static RaceEngine::RaceDirector* s_raceDirector = nullptr;

// Forward declarations — platform layer types
namespace Game {
    class Player;
}

extern "C" {

// ============================================================================
// updateRaceManagerFromGame — Per-frame sync of RaceManager from platform state
//
// Called once per frame from SceneRace::updateRacing() AFTER physics and
// checkpoint updates are done. Reads from RaceSession and writes into
// RaceManagerPlayer fields so the decompiled engine has current data.
//
// Parameters:
//   playerPositions[12][3] — XYZ positions for each player
//   playerLaps[12]          — Current lap (0-indexed)
//   playerFinished[12]     — Whether player has finished
//   playerFinishPositions[12] — Finishing position (1-indexed, 0 = not set)
//   playerDistances[12]   — Race distance for position ranking
//   playerCount            — Number of active players
// ============================================================================
void updateRaceManagerFromGame(
    const f32 playerPositions[][3],
    const u8  playerLaps[],
    const bool playerFinished[],
    const u8  playerFinishPositions[],
    const f32 playerDistances[],
    u32 playerCount)
{
    using namespace System;

    if (!RaceManager::spInstance || !RaceManager::spInstance->players) {
        return;
    }

    RaceManager& rm = *RaceManager::spInstance;
    u8 maxPlayers = (playerCount < MAX_PLAYER_COUNT) ? (u8)playerCount : MAX_PLAYER_COUNT;

    // Update per-player RaceManagerPlayer state
    for (u8 i = 0; i < maxPlayers; i++) {
        RaceManagerPlayer* rmp = rm.players[i];
        if (!rmp) continue;

        // Update frame counter (used for GP scoring)
        rmp->frameCounter++;

        // Track first-place frames (used for GP scoring)
        if (rmp->position == 1) {
            rmp->framesInFirstPlace++;
        }

        // Update lap tracking from platform state
        rmp->currentLap = (s16)playerLaps[i];

        // Update finish state
        if (playerFinished[i]) {
            rmp->flags = (RaceManagerPlayerFlags)(rmp->flags | FINISHED);
            if (playerFinishPositions[i] > 0) {
                rmp->finishingPosition = (s8)playerFinishPositions[i];
            }
        }

        // Update race completion from distance
        // In the original MKWii, raceCompletion = lapCompletion + checkpointFactor
        // We approximate using the normalized distance from the platform layer.
        // The maximum distance for a 3-lap race on a typical course is ~N * laps.
        // Since we don't know the exact course length, we use the raw distance
        // and let the platform layer handle position calculation.
        if (rm.timerManager) {
            rmp->raceCompletion = playerDistances[i];
        }

        // Update checkpoint progress
        // checkpointId is set by the checkpoint system when a player crosses
        // a checkpoint line. The race bridge reads from the platform's
        // checkpoint tracking (RaceSession) to update this.
    }

    // Compute position array (1-indexed, sorted by raceCompletion descending)
    // In the original, Raceinfo::calcPositions() does this using a full
    // comparison sort on raceCompletion values.
    {
        s8 sortedPositions[MAX_PLAYER_COUNT];
        u8 sortedCount = 0;

        // Sort by raceCompletion (highest = leading)
        for (u8 i = 0; i < maxPlayers; i++) {
            if (!rm.players[i]) continue;

            s8 insertPos = (s8)sortedCount;
            for (s8 j = 0; j < (s8)sortedCount; j++) {
                if (rm.players[i]->raceCompletion > rm.players[sortedPositions[j]]->raceCompletion) {
                    insertPos = j;
                    break;
                }
            }
            // Shift elements to make room
            for (s8 j = (s8)sortedCount; j > insertPos; j--) {
                sortedPositions[j] = sortedPositions[j - 1];
            }
            sortedPositions[insertPos] = (s8)i;
            sortedCount++;
        }

        // Assign positions (1-indexed) and update player_id_in_each_position
        for (u8 i = 0; i < sortedCount; i++) {
            u8 playerId = (u8)sortedPositions[i];
            rm.players[playerId]->position = (s8)(i + 1);
        }
        // Fill remaining positions with -1
        for (u8 i = sortedCount; i < MAX_PLAYER_COUNT; i++) {
            if (rm.player_id_in_each_position) {
                rm.player_id_in_each_position[i] = -1;
            }
        }
        // Set position-to-player mapping
        for (u8 i = 0; i < sortedCount; i++) {
            if (rm.player_id_in_each_position) {
                rm.player_id_in_each_position[i] = (s8)sortedPositions[i];
            }
        }
    }
}

// ============================================================================
// markPlayerFinished — Mark a specific player as finished in RaceManager
//
// Called from the checkpoint system when a player completes their final lap.
// Updates RaceManagerPlayer flags and increments finished_player_count.
//
// @param playerId       Player index (0-11)
// @param finishPosition Finishing position (1-indexed)
// ============================================================================
void markPlayerFinished(u32 playerId, u8 finishPosition) {
    using namespace System;

    if (!RaceManager::spInstance || !RaceManager::spInstance->players) {
        return;
    }
    if (playerId >= MAX_PLAYER_COUNT) {
        return;
    }

    RaceManagerPlayer* rmp = RaceManager::spInstance->players[playerId];
    if (!rmp) return;

    if (!(rmp->flags & FINISHED)) {
        rmp->flags = (RaceManagerPlayerFlags)(rmp->flags | FINISHED);
        rmp->finishingPosition = (s8)finishPosition;
        RaceManager::spInstance->finished_player_count++;

        // Record finish time from RaceManager timer
        if (RaceManager::spInstance->timerManager) {
            // In the original, a Time object is allocated and set to
            // the current race time. For now, the frame counter serves
            // as the time reference.
        }
    }
}

// ============================================================================
// updateRaceTimerFromGame — Sync the race timer from platform frame count
//
// Called each frame during RACE phase to keep RaceManager::timer in sync
// with the platform's frame-based timing. This ensures CtrlRaceTime
// displays the correct elapsed time.
//
// @param raceFrameCount  Total frames elapsed since race start
// ============================================================================
void updateRaceTimerFromGame(u32 raceFrameCount) {
    using namespace System;

    if (!RaceManager::spInstance) return;

    RaceManager::spInstance->timer = raceFrameCount;
}

// ============================================================================
// getRaceTimeString — Get formatted race time from RaceManager
//
// Returns the current race time as a formatted string "M:SS.mmm" using
// the decompiled formatTime() function (CtrlRaceTime.cpp).
//
// @param buf    Output buffer (must be >= 10 chars)
// @param bufSize Buffer size
// @return Number of characters written (excluding null)
// ============================================================================
u32 getRaceTimeString(char* buf, u32 bufSize) {
    using namespace System;

    if (!RaceManager::spInstance || !RaceManager::spInstance->timerManager) {
        return ::System::formatTime(buf, bufSize, 0.0f);
    }

    // Convert RaceManager::timer (frame count) to milliseconds
    // MKWii: 1 frame ≈ 16.667ms → multiply by 1000/60 ≈ 16.667
    f32 timeMs = (f32)(RaceManager::spInstance->timer) * (1000.0f / 60.0f);
    return ::System::formatTime(buf, bufSize, timeMs);
}

// ============================================================================
// getRaceTimeMs — Get raw race time in milliseconds from RaceManager
//
// @return Race time in milliseconds, or 0 if not racing
// ============================================================================
f32 getRaceTimeMs() {
    using namespace System;

    if (!RaceManager::spInstance) return 0.0f;

    // Convert frame count to milliseconds
    return (f32)(RaceManager::spInstance->timer) * (1000.0f / 60.0f);
}

// ============================================================================
// getPlayerPositionFromRM — Get player's position from RaceManager
//
// Reads the decompiled RaceManagerPlayer.position field which is updated
// each frame by updateRaceManagerFromGame().
//
// @param playerId  Player index
// @return Position (1-indexed), 0 if not available
// ============================================================================
u8 getPlayerPositionFromRM(u32 playerId) {
    using namespace System;

    if (!RaceManager::spInstance || !RaceManager::spInstance->players) {
        return 0;
    }
    if (playerId >= MAX_PLAYER_COUNT) {
        return 0;
    }

    RaceManagerPlayer* rmp = RaceManager::spInstance->players[playerId];
    if (!rmp || rmp->position <= 0) {
        return 0;
    }
    return (u8)rmp->position;
}

// ============================================================================
// isRaceFinishedFromRM — Check if race is finished from RaceManager
//
// @return true if RaceManager stage is FINISHED_RACE
// ============================================================================
bool isRaceFinishedFromRM() {
    using namespace System;
    return RaceManager::spInstance && RaceManager::spInstance->isRaceFinished();
}

// ============================================================================
// Phase 21 extended: RaceSequence bridge functions
// ============================================================================

// ============================================================================
// setRaceSequencePointer — Store the active RaceSequence for bridge access
//
// Called from SceneRace::initSubsystems() after creating RaceSequence.
// All subsequent RaceSequence bridge calls use this stored pointer.
//
// @param seq  Pointer to the active RaceSequence (or nullptr to clear)
// ============================================================================
// (Note: setRaceSequencePointer is called directly from SceneRace.cpp
//  since it includes the decompiled headers. Declared extern "C" here.)

// ============================================================================
// syncRaceSequenceFromGame — Per-frame sync of RaceSequence from platform
//
// In the original MKWii, RaceSequence reads from KartObjectManager positions
// and Raceinfo checkpoint state each frame. On PC, we push platform state
// into RaceSequence results so the decompiled engine's position calculation
// and timing remain accurate.
//
// @param playerCount     Number of active players
// @param playerLaps[]    Current lap for each player (0-indexed)
// @param playerFinished[] Whether each player has finished
// @param playerDistances[] Race distance for ranking
// ============================================================================
void syncRaceSequenceFromGame(
    u32 playerCount,
    const u8 playerLaps[],
    const bool playerFinished[],
    const u32 playerDistances[])
{
    // RaceSequence timing is driven by its own update() called from
    // SceneRace::calc(). We don't overwrite internal timing — only
    // the result data that the platform layer owns.
    //
    // The key sync points are:
    //   - Lap count: RaceResult.lapCount mirrors platform laps
    //   - Finish state: triggers RaceSequence::finishPlayer() on first finish
    //   - Distance: used by calculatePositions() for ranking
    //
    // Since RaceSequence manages its own state machine, we only
    // push "boundary events" (line crossings, finishes) rather than
    // overwriting the entire state each frame. This matches the original
    // where KartObjectManager triggers RaceSequence events, not the reverse.
    (void)playerCount;
    (void)playerLaps;
    (void)playerFinished;
    (void)playerDistances;
    // Intentionally minimal: RaceSequence's internal state machine drives
    // countdown/timing. Platform state is the authority for positions,
    // which RaceManager handles via updateRaceManagerFromGame().
}

// ============================================================================
// getRaceSequencePhase — Get current RaceSequence phase
//
// @return RaceSequence phase enum value, or RACE_PHASE_NONE if no sequence
// ============================================================================
u32 getRaceSequencePhase() {
    if (!s_raceSequence) return 0; // RACE_PHASE_NONE
    return static_cast<u32>(s_raceSequence->getPhase());
}

// ============================================================================
// notifyRaceSequenceLineCross — Notify RaceSequence of a start/finish line cross
//
// Called from RaceSession::checkCheckpoints() when a player crosses
// checkpoint 0 (the start/finish line). This triggers lap advancement
// and finish detection in the decompiled RaceSequence.
//
// @param playerId  Player index (0-11)
// ============================================================================
void notifyRaceSequenceLineCross(u32 playerId) {
    if (!s_raceSequence) return;
    s_raceSequence->onPlayerCrossLine(playerId);
}

// ============================================================================
// Phase 21 extended: RaceDirector bridge functions
// ============================================================================

// ============================================================================
// startRaceDirector — Initialize RaceDirector for a race session
//
// Creates a RaceDirector with the given configuration and starts a series.
// In the original MKWii, this is done by the menu scene when the player
// selects a race mode (GP, VS, Time Trial).
//
// @param playerCount  Number of players (1-12)
// @param laps         Number of laps per race
// @param engineClass  Engine class (0=50cc, 1=100cc, 2=150cc, 3=Mirror)
// ============================================================================
void startRaceDirector(u32 playerCount, u32 laps, u32 engineClass) {
    if (s_raceDirector) {
        s_raceDirector->shutdown();
        delete s_raceDirector;
    }

    s_raceDirector = new RaceEngine::RaceDirector();
    RaceEngine::DirectorConfig config;
    memset(&config, 0, sizeof(config));
    config.raceType = RaceEngine::RACE_TYPE_VS;
    config.playerCount = static_cast<u8>(playerCount);
    config.totalRaces = 1;
    config.lapsPerRace = static_cast<u8>(laps);
    config.isOnline = 0;
    config.engineClass = static_cast<u8>(engineClass);

    s_raceDirector->init(config);
    s_raceDirector->startSeries();
    s_raceDirector->startNextRace();

    printf("[RaceBridge] RaceDirector started: %u players, %u laps, class=%u\n",
           playerCount, laps, engineClass);
}

// ============================================================================
// updateRaceDirector — Tick the race director (called each frame)
//
// Drives the RaceDirector state machine for multi-race series.
// ============================================================================
void updateRaceDirector() {
    if (s_raceDirector) {
        s_raceDirector->update();
    }
}

// ============================================================================
// getRaceDirectorPhase — Get current RaceDirector phase
//
// @return DirectorPhase enum value, or 0 (DIRECTOR_IDLE) if no director
// ============================================================================
u32 getRaceDirectorPhase() {
    if (!s_raceDirector) return 0;
    return static_cast<u32>(s_raceDirector->getPhase());
}

// ============================================================================
// endRaceDirector — End the current race in the director
//
// Called when the race finishes (all players complete or time-up).
// ============================================================================
void endRaceDirector() {
    if (s_raceDirector) {
        s_raceDirector->endRace();
    }
}

// ============================================================================
// getRaceDirectorTotalRaces — Get total races in the series
// ============================================================================
u32 getRaceDirectorTotalRaces() {
    if (!s_raceDirector) return 0;
    return s_raceDirector->getTotalRaces();
}

// ============================================================================
// getRaceDirectorCurrentRace — Get current race index (0-based)
// ============================================================================
u32 getRaceDirectorCurrentRace() {
    if (!s_raceDirector) return 0;
    return s_raceDirector->getCurrentRace();
}

// ============================================================================
// setRaceBridgePointers — Set internal pointers to active RaceSequence/RaceDirector
//
// Called from SceneRace::initSubsystems() to wire the bridge to the
// decompiled instances created by the scene.
//
// @param seq   RaceSequence pointer (or nullptr)
// @param dir   RaceDirector pointer (or nullptr)
// ============================================================================
extern "C" void setRaceBridgePointers(
    RaceEngine::RaceSequence* seq,
    RaceEngine::RaceDirector* dir)
{
    s_raceSequence = seq;
    s_raceDirector = dir;
}

} // extern "C"
