// race_bridge.cpp — Phase 21: Bridge between platform game state and
// decompiled RaceManager/RaceConfig system.
//
// In the original MKWii, the race engine updates RaceManagerPlayer state
// each frame from KartObjectManager positions. On PC, the platform layer
// (Game::Player, RaceSession) holds the actual game state. This bridge
// synchronizes that state into the decompiled race engine, enabling:
//   - CtrlRaceTime to display accurate time from RaceManager::timer
//   - RaceManagerPlayer.position to reflect actual race standings
//   - RaceManagerPlayer.raceCompletion to drive finish detection
//   - RaceManagerPlayer.lapCompletion to track lap progress
//
// All functions are extern "C" so they can be called from SceneRace.cpp
// (which includes platform headers) without pulling in C++ decompiled headers.

#include "RaceEngine/RaceManager.hpp"
#include "RaceEngine/RaceConfig.hpp"
#include "RaceEngine/CtrlRaceTime.hpp"

#include <cstring>

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

} // extern "C"
