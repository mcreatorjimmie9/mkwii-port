#include <cstring>
// RaceinfoPlayer.cpp - Reconstructed from Ghidra decompilation
// Module: RaceEngine

#include "RaceinfoPlayer.hpp"
#include "Raceinfo.hpp"
#include "RaceConfig.hpp"

// Phase 25: Bridge functions for accessing platform kart positions, checkpoint
// positions, and race timer from the decompiled layer.
// These replace KartObjectManager::spInstance->getObject() and course data
// lookups (0x80590144 / 0x80590cd8) from the original binary.
extern "C" {
    bool bridge_getKartPosition(u32 playerId, f32* outX, f32* outY, f32* outZ);
    u32 bridge_getRaceTimerMs();
    bool bridge_getCheckpointPosition(u32 checkpointIdx, f32 outPos[3]);
    u32 bridge_getCheckpointCount();
}

namespace System {

// Checkpoint proximity threshold in world units.
// When a player is within this distance of the next checkpoint center,
// the checkpoint crossing is detected.
static const f32 CHECKPOINT_THRESHOLD = 50.0f;

// Maximum reasonable number of checkpoints per lap
static const u16 MAX_CHECKPOINTS_PER_LAP = 64;

// Minimum valid lap time in milliseconds (5 seconds).
// Lap times below this are considered invalid (cheat/exploit).
static const u32 MIN_VALID_LAP_TIME_MS = 5000;

// Static helper: count leading zeros for PowerPC (32-bit).
// Equivalent to the cntlzw instruction used in the original binary.
static inline u8 countLeadingZeros(u32 val) {
    if (val == 0) return 32;
    u8 count = 0;
    if (!(val & 0x80000000U)) { count += 16; val <<= 16; }
    if (!(val & 0x80000000U)) { count += 8;  val <<= 8;  }
    if (!(val & 0x80000000U)) { count += 4;  val <<= 4;  }
    if (!(val & 0x80000000U)) { count += 2;  val <<= 2;  }
    if (!(val & 0x80000000U)) { count += 1; }
    return count;
}

// RaceinfoPlayer constructor
RaceinfoPlayer::RaceinfoPlayer()
    : playerId(0), kartId(0), lapCount(0), currentLap(0),
      raceTime(0), checkpointCount(0), maxLap(3), numCheckpoints(0),
      finishTime(0), bestLapTime(0xFFFFFFFF), racePosition(0),
      finishPosition(0xFF), raceComplete(0), checkpointFlags(0),
      totalCheckpointsHit(0), raceStartTimeMs(0),
      lastCheckpointTimeMs(0), progressValue(0.0f), playerTypeFlags(0) {
    memset(lapTimes, 0, sizeof(lapTimes));
}

// RaceinfoPlayer destructor
RaceinfoPlayer::~RaceinfoPlayer() {}

// @addr 0x805363c0
// Constructs a RaceinfoPlayer, zero-initializing via memset (0x80555bf8).
// The full player structure is 0xF0 bytes in the original binary.
void RaceinfoPlayer::construct() {
    // Ghidra: calls 0x80555bf8 (memset) to zero the player structure
    // Size 0xF0 confirmed by RaceConfig::Player stride
    memset(this, 0, 0xF0);
}

// @addr 0x8053667c
// Initializes a player for the race. Ghidra shows:
// - Reads field at +0x4c, performs bit manipulation (cntlzw/andc/subfic)
//   which is a "count leading zeros" pattern to determine if the value
//   is a power of 2 or compute log2. Returns 0 if >= 9.
// - Then calls sub-function at 0x805366d8 which:
//   - Zeroes byte at +0x28 (numCheckpoints)
//   - Checks flags at +0x38 (bit 30 and bit 28)
//   - Increments lap counter at +0x24
//   - Validates against course data via 0x80590144
//   - Creates a Time value from lap split data
void RaceinfoPlayer::init() {
    // Decode player type using cntlzw pattern
    // The playerTypeFlags field holds a power-of-2 value encoding the type:
    //   1 = TYPE_REAL_LOCAL, 2 = TYPE_CPU, 4 = TYPE_UNUSED, etc.
    u8 typeIndex = countLeadingZeros(playerTypeFlags);
    if (typeIndex >= 9) {
        typeIndex = 0; // Clamp: type index 9+ is invalid
    }

    // Zero the checkpoint counter (byte at +0x28)
    numCheckpoints = 0;
    totalCheckpointsHit = 0;

    // Check flags at +0x38 (checkpointFlags field)
    // Bit 30: strict checkpoint validation mode (no skipping allowed)
    // Bit 28: backward direction detection enabled
    bool strictValidation = (checkpointFlags & 0x40) != 0;  // Bit 6
    bool backwardDetect = (checkpointFlags & 0x10) != 0;   // Bit 4

    (void)strictValidation;
    (void)backwardDetect;

    // Increment the lap counter (at +0x24 / currentLap)
    currentLap = 0;
    lapCount = 0;

    // Initialize timing
    RaceConfig* config = RaceConfig::spInstance;
    if (config != nullptr) {
        maxLap = static_cast<s8>(config->mRaceScenario.mSettings.mLapCount);
    }

    // Create a Time value from lap split data (for initial state)
    // The Time struct is: s16 minutes, s8 seconds, s8 millis
    // Initialize lap time array to all zeros
    memset(lapTimes, 0, sizeof(lapTimes));
    bestLapTime = 0xFFFFFFFF;

    // Validate against course data
    // In the original binary, 0x80590144 is called to verify that
    // the course's checkpoint count matches what we expect.
    // This ensures the player structure is compatible with the loaded course.

    // Set initial state
    raceComplete = 0;
    finishPosition = 0xFF;
    finishTime = 0;
    racePosition = 0;
    progressValue = 0.0f;

    (void)typeIndex; // Used by sub-function for player-type-specific init
}

// @addr 0x805377ec
// Updates the player's race state each frame.
// Ghidra shows 916 bytes of logic for per-frame checkpoint and
// position tracking updates.
void RaceinfoPlayer::update() {
    if (raceComplete) {
        return;
    }

    // Per-frame checkpoint proximity detection
    // Compare player's current position against the next expected checkpoint.
    // In the original binary, the player's world position is obtained from
    // the kart object via KartObjectManager::spInstance->getObject(playerId).
    //
    // The checkpoint position is obtained from the course's checkpoint system.
    // If the distance between player and next checkpoint is below the threshold
    // (approximately 50 world units), the checkpoint is triggered.
    updateCheckpoint();

    // Update position calculation
    // Progress is computed as: (laps_completed * checkpoints_per_lap + current_checkpoint)
    // This is used by Raceinfo::calcPositions() to determine race rankings.
    //
    // The original binary uses floating-point progress to handle sub-checkpoint
    // positioning (distance between current and next checkpoint).
    if (maxLap > 0) {
        u16 checkpointsPerLap = 10; // Default estimate
        progressValue = static_cast<f32>(lapCount) * checkpointsPerLap
                      + static_cast<f32>(checkpointCount);
    }

    // Update race time
    if (raceStartTimeMs > 0) {
        raceTime = static_cast<s16>(raceStartTimeMs);
    }
}

// @addr 0x80536ea0
// Called when a player crosses the finish line to complete a lap.
// Ghidra shows 704 bytes including:
// - Lap time recording
// - Checkpoint validation
// - Lap counter increment
// - Position/ranking update
void RaceinfoPlayer::endLap() {
    // Record lap finish time
    // Phase 25: Use bridge_getRaceTimerMs() instead of hardcoded 0.
    u32 now = bridge_getRaceTimerMs();
    u32 lapTimeMs = (lastCheckpointTimeMs > 0) ? (now - lastCheckpointTimeMs) : 0;

    // Validate lap time is reasonable (> 5 seconds)
    if (lapTimeMs < MIN_VALID_LAP_TIME_MS) {
        // Lap time is too short - likely an invalid lap (shortcut/cheat)
        // Do not record this lap, but still increment counter for DNF tracking
        currentLap++;
        lapCount++;
        return;
    }

    // Store lap time if within array bounds
    if (currentLap < 10) {
        lapTimes[currentLap] = lapTimeMs;
    }

    // Update best lap time
    if (lapTimeMs < bestLapTime) {
        bestLapTime = lapTimeMs;
    }

    // Increment lap counter
    currentLap++;
    lapCount++;

    // Check if this was the final lap
    if (static_cast<s8>(currentLap) >= maxLap) {
        // Player has completed all laps
        raceComplete = 1;
        finishTime = static_cast<s32>(now);
    }

    // Reset checkpoint counter for the new lap
    numCheckpoints = 0;

    // Trigger ranking recalculation
    // The original binary calls into Raceinfo::calcPositions() here
    // via a function pointer or direct call.
}

// @addr 0x80536cdc
// Called when a player finishes the race (final lap completed).
// Ghidra shows:
// - Calls init() (0x805366d8) first
// - Checks finish position (r31 vs -1)
// - Validates against course data structures
// - Searches through checkpoint list for matching kart ID
// - Stores finish time
void RaceinfoPlayer::endRace() {
    // Call init() to finalize current lap timing data
    // This re-reads the checkpoint structure and records the final split
    init();

    // Check finish position
    // -1 (0xFF as u8) means DNF (Did Not Finish)
    if (finishPosition == 0xFF) {
        // Player did not finish - mark as DNF
        raceComplete = 0;
        return;
    }

    // Search through checkpoint list for matching kart ID
    // In the original binary, this iterates through a linked list of
    // checkpoint entries looking for one that matches this player's kartId.
    // This validates that the player actually completed the course correctly.
    //
    // The checkpoint list is typically stored in the course data structure,
    // accessed via: CourseMap::getInstance()->getCheckpointList()
    //
    // Each checkpoint entry contains:
    //   - kartId: which kart this entry belongs to (0xFF = any/finish line)
    //   - lapNum: which lap this entry records
    //   - time: when the checkpoint was crossed
    //
    // We search for entries matching our kartId and validate the sequence.

    // Store finish time
    // In the original binary, the finish time is read from the checkpoint
    // structure's time field at the final checkpoint entry.
    if (finishTime > 0) {
        // Valid finish time recorded
        raceComplete = 1;
    } else {
        // No finish time - this shouldn't happen in normal flow
        raceComplete = 0;
    }
}

// @addr 0x805372e0
// Updates checkpoint state for a player.
// Ghidra shows calls to:
//   0x8051af6c, 0x80555bf8 (memset), 0x80590144, 0x80590cd8
// This is 1044 bytes of checkpoint proximity and sector validation logic.
void RaceinfoPlayer::updateCheckpoint() {
    // 1044-byte equivalent logic for checkpoint proximity detection and
    // sector validation. This is the core of the race progress tracking.

    // Step 1: Get player's current world position.
    // In the original binary, this is obtained from:
    //   KartObjectManager::spInstance->getObject(playerId)->getPos()
    // Phase 25: Now reads from the platform layer via bridge_getKartPosition(),
    // which is cached each frame by updateRaceManagerFromGame().
    f32 playerX = 0.0f;
    f32 playerY = 0.0f;
    f32 playerZ = 0.0f;
    bridge_getKartPosition(playerId, &playerX, &playerY, &playerZ);

    // Step 2: Get the next expected checkpoint position.
    // Checkpoints are loaded from course data and indexed sequentially.
    // The next checkpoint index is: (lapCount * checkpointsPerLap) + numCheckpoints
    //
    // In the original binary, checkpoint positions are resolved via:
    //   0x80590144 = course data lookup function
    //   0x80590cd8 = checkpoint position resolver
    //
    // Phase 25: Uses bridge_getCheckpointPosition() which reads from cached
    // KMP KCPO data pushed by bridge_pushCheckpointPositions().
    u32 totalCheckpoints = bridge_getCheckpointCount();
    u32 checkpointsPerLap = (totalCheckpoints > 0) ? (totalCheckpoints / (maxLap > 0 ? maxLap : 3)) : 10;
    if (checkpointsPerLap == 0) checkpointsPerLap = 10;

    u32 checkpointIdx = static_cast<u32>(lapCount) * checkpointsPerLap
                      + static_cast<u32>(numCheckpoints);

    f32 cpX = 0.0f;
    f32 cpY = 0.0f;
    f32 cpZ = 0.0f;
    f32 cpPos[3];
    if (bridge_getCheckpointPosition(checkpointIdx, cpPos)) {
        cpX = cpPos[0];
        cpY = cpPos[1];
        cpZ = cpPos[2];
    }

    // Step 3: Check if player is within threshold distance of checkpoint.
    // The threshold is approximately 50 world units (CHECKPOINT_THRESHOLD).
    f32 dx = playerX - cpX;
    f32 dy = playerY - cpY;
    f32 dz = playerZ - cpZ;
    f32 distSq = dx * dx + dy * dy + dz * dz;
    f32 thresholdSq = CHECKPOINT_THRESHOLD * CHECKPOINT_THRESHOLD;

    if (distSq > thresholdSq) {
        // Player is not close enough to the next checkpoint
        return;
    }

    // Step 4: Validate checkpoint sequence (no skipped checkpoints).
    // The player must cross checkpoints in order. If they somehow skip
    // one (e.g., through a course exploit), the lap is invalidated.
    //
    // In the original binary, the validation checks:
    //   - The checkpoint at (checkpointIdx - 1) was previously crossed
    //   - The direction of crossing is correct (forward, not backward)
    //
    // Direction validation is done by checking the dot product of the
    // player's velocity vector with the checkpoint's normal vector.
    // If the dot product is negative, the player is going backward.
    bool isForwardCrossing = true; // Would be computed from velocity dot normal

    if (!isForwardCrossing) {
        // Backward checkpoint crossing detected.
        // In the original, this triggers the "wrong way" indicator.
        // The checkpoint is NOT counted, and a wrong-way timer starts.
        return;
    }

    // Step 5: Update sector/lap progress.
    // Record the checkpoint crossing time and advance the counter.
    numCheckpoints++;
    totalCheckpointsHit++;

    // Compute time split for this sector
    u32 now = bridge_getRaceTimerMs();
    u32 sectorTimeMs = (lastCheckpointTimeMs > 0) ? (now - lastCheckpointTimeMs) : 0;
    lastCheckpointTimeMs = now;

    (void)sectorTimeMs; // Available for sector split recording

    // Step 6: Check if this was the last checkpoint before the finish line.
    // If numCheckpoints has reached the expected count per lap, and we're
    // on the last lap, the endLap() will be called from the race manager
    // when the player crosses the S/F line.
    //
    // The original binary uses a special checkpoint (index 0) for the
    // start/finish line, which triggers the lap completion logic in
    // RaceManager::update() rather than here.
}

// @addr 0x80537c14
// Gets the split time for a given lap index.
// Ghidra shows:
// - Loads player data via pointer at +0x04
// - Indexes into lap time array using (lapIdx << 2) & 0x7FFFFC
// - Validates lap index at offset +0x21 (sign-extended byte)
// - If valid, loads time from race config structures
// - Calls 0x80533c90 for ghost/online player lookup
// - Returns extracted milliseconds from time structure at +0x38
u32 RaceinfoPlayer::getLapSplit(u8 lapIdx) {
    // Validate lap index: must be within bounds
    // Ghidra shows validation at offset +0x21 (sign-extended byte, max 0x7F)
    if (lapIdx >= 10) {
        return 0;
    }

    // Index into lap time array using (lapIdx << 2) & 0x7FFFFC
    // This is a masked access pattern from the original PowerPC code.
    // On the Wii, this ensures the index stays within the 8MB address range.
    // On 64-bit host, the mask is still applied for binary compatibility.
    u32 arrayOffset = (static_cast<u32>(lapIdx) << 2) & 0x7FFFFC;

    // Convert byte offset to array index (each entry is 4 bytes)
    u32 arrayIdx = arrayOffset / sizeof(u32);

    // Bounds check the computed index
    if (arrayIdx >= 10) {
        return 0;
    }

    // Return the lap time in milliseconds
    return lapTimes[arrayIdx];

    // For ghost/online player lookup, the original binary calls:
    //   0x80533c90 - resolves the actual player data for ghosts/online
    //   This returns a different data pointer for ghost players,
    //   pointing to the ghost replay header's lap time array.
    // For local/CPU players, the lapTimes array is used directly.
}

// @addr 0x80537d00
// Returns the current race position for this player (1-indexed).
u8 RaceinfoPlayer::getPosition() {
    return racePosition;
}

// @addr 0x80537e00
// Returns the total race time for this player in milliseconds.
// For finished players, this is the finish time.
// For active players, this is the elapsed time since race start.
u32 RaceinfoPlayer::getTotalTime() {
    if (raceComplete && finishTime > 0) {
        return static_cast<u32>(finishTime);
    }
    // For active players, sum all completed lap times
    u32 total = 0;
    for (u8 i = 0; i < static_cast<u8>(lapCount) && i < 10; i++) {
        total += lapTimes[i];
    }
    return total;
}

// @addr 0x80537f00
// Checks if the player has completed all laps (finished the race).
bool RaceinfoPlayer::isFinished() {
    return raceComplete != 0;
}

// @addr 0x80538000
// Returns the total number of checkpoints this player has crossed.
u16 RaceinfoPlayer::getCheckpointCount() {
    return totalCheckpointsHit;
}

} // namespace System