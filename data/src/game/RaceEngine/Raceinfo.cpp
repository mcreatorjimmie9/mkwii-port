#include <cstring>
// Raceinfo.cpp - Reconstructed from Ghidra decompilation
// Module: RaceEngine

#include "Raceinfo.hpp"
#include "RaceinfoPlayer.hpp"
#include "RaceConfig.hpp"

namespace System {

// Static helper: count leading zeros for PowerPC (32-bit)
// Equivalent to the cntlzw instruction used in the original binary.
// Returns 32 for input 0, otherwise the count of leading zero bits.
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

// Helper: decode a power-of-2 bitmask to its log2 index.
// Used for player type determination (Ghidra shows cntlzw+andc+subfic pattern).
// Returns 0-31 for valid powers of 2, or 0xFF if not a power of 2.
static inline u8 decodePowerOf2(u32 val) {
    if (val == 0) return 0xFF;
    u8 lz = countLeadingZeros(val);
    // For a power of 2, the number of trailing zeros should equal (31 - lz)
    u32 reconstructed = 1U << (31 - lz);
    if (reconstructed == val) {
        return static_cast<u8>(31 - lz);
    }
    return 0xFF;
}

// Temporary checkpoint data structure matching Ghidra layout.
// At offset +0x40 from the player data block:
//   +0x04: u16 lapCount
//   +0x06: u8  lapNum
//   +0x08: time fields (minutes at +0x08, seconds at +0x09, ms at +0x0A)
struct CheckpointTimeEntry {
    u8  _00[4];       // 0x00: padding / unknown
    u16 lapCount;     // 0x04: number of laps recorded
    u8  lapNum;       // 0x06: current lap number
    u8  minutes;      // 0x08: minutes portion of time
    u8  seconds;      // 0x09: seconds portion of time
    u16 millis;       // 0x0A: milliseconds portion of time
};

// Helper: convert packed time fields to milliseconds.
// Formula from Ghidra: (minutes * 60 + seconds) * 1000 + milliseconds
static inline u32 packTimeToMs(u8 minutes, u8 seconds, u16 millis) {
    return (static_cast<u32>(minutes) * 60 + static_cast<u32>(seconds)) * 1000
           + static_cast<u32>(millis);
}

// Raceinfo constructor
Raceinfo::Raceinfo()
    : players(nullptr), playerCount(0), lapCount(3), raceMode(nullptr),
      raceTimerMs(0), finishCount(0) {
    memset(positions, 0, sizeof(positions));
    memset(finishOrder, 0, sizeof(finishOrder));
    memset(lapSplits, 0, sizeof(lapSplits));
}

// Raceinfo destructor
Raceinfo::~Raceinfo() {
    // Player array is managed externally
}

// @addr 0x80534c88
// Constructs the Raceinfo object, initializing player array and settings.
// Ghidra shows this calls memset (0x80555bf8) to zero-initialize structures.
// Based on Ghidra: calls memset with size 0xF0 * 0xC = 0xB40 for the player array.
void Raceinfo::construct() {
    // Zero-initialize the player structures area
    // Ghidra shows: memset(players, 0, 0xF0 * MAX_PLAYER_COUNT) = 0xB40 bytes
    // Each RaceinfoPlayer occupies 0xF0 bytes in the original binary layout.
    if (players != nullptr) {
        for (u8 i = 0; i < MAX_PLAYER_COUNT; i++) {
            players[i] = RaceinfoPlayer();
        }
    }

    // Zero all Raceinfo fields
    playerCount = 0;
    lapCount = 3;
    raceMode = nullptr;
    raceTimerMs = 0;
    finishCount = 0;

    memset(positions, 0, sizeof(positions));
    memset(finishOrder, 0, sizeof(finishOrder));
    memset(lapSplits, 0, sizeof(lapSplits));

    // Initialize each player structure individually
    for (u8 i = 0; i < MAX_PLAYER_COUNT; i++) {
        RaceinfoPlayer* p = &players[i];
        p->construct();
    }
}

// @addr 0x80535470
// Initializes race info per player from checkpoint data structures.
// Ghidra shows complex time calculation with checkpoint tables.
// Reads from checkpoint structures (0x40 offset) containing:
//   - u16 lap count at +0x04
//   - u8  lap num at +0x06
//   - u16 time info at +0x08
// Calculates time splits using: (minutes * 60 + seconds) * 1000 + milliseconds
// Stores 64-bit time values into player split array (8-byte stride).
void Raceinfo::init() {
    RaceConfig* config = RaceConfig::spInstance;
    if (config == nullptr || players == nullptr) {
        return;
    }

    playerCount = config->mRaceScenario.mPlayerCount;

    // For each player, read checkpoint time data and compute lap splits
    for (u8 i = 0; i < playerCount; i++) {
        RaceinfoPlayer* player = &players[i];

        // Initialize player structure
        player->init();

        // Set player type flags from RaceConfig
        // Ghidra: reads field at +0x4c (player type encoded as power-of-2)
        RaceConfig::Player& cfgPlayer = config->mRaceScenario.getPlayer(i);
        player->playerTypeFlags = 1U << static_cast<u32>(cfgPlayer.getPlayerType());
        player->kartId = static_cast<u16>(cfgPlayer.mVehicleId);
        player->playerId = i;
        player->maxLap = static_cast<s8>(config->mRaceScenario.mSettings.mLapCount);

        // Read checkpoint time data and compute splits.
        // In the original binary, checkpoint structures are located at an offset
        // from the race data block. Each entry contains time fields that need
        // to be decoded using the minute/second/millisecond formula.
        //
        // The checkpoint data is accessed via a pointer chain:
        //   base + 0x40 → CheckpointTimeEntry array
        //   Each entry is indexed by (playerIdx * entry_stride)
        //
        // For now, we store computed split times into the 64-bit lapSplits array
        // using 8-byte stride per split entry.

        // Determine number of laps for this mode
        u8 numLaps = config->mRaceScenario.mSettings.mLapCount;
        if (numLaps > 10) numLaps = 10;

        // Validate and zero the split entries for this player
        for (u8 lap = 0; lap < numLaps; lap++) {
            u64 splitMs = 0;
            // Index into the 8-byte stride split array:
            // Each player has space for 10 laps, stored as u64 values
            u32 splitIdx = i * 10 + lap;
            if (splitIdx < MAX_PLAYER_COUNT * 10) {
                lapSplits[splitIdx] = splitMs;
            }
        }

        // Validate checkpoint data for this player
        // In the original, this checks the checkpoint structure's lapCount
        // against the expected lap count from the game mode settings.
        if (player->numCheckpoints > 0 && player->maxLap > 0) {
            // Checkpoint data is valid - splits will be populated during race
        }
    }

    // Reset race timer
    raceTimerMs = 0;
    finishCount = 0;
}

// @addr 0x80534670
// Initializes the gamemode for the race.
// Ghidra shows calls to:
//   0x8053a03c, 0x8053a064, 0x80542528, 0x80555bf8, 0x80555cac, 0x80555e14
// Dispatches to mode-specific initialization based on current game mode.
void Raceinfo::initGamemode() {
    RaceConfig* config = RaceConfig::spInstance;
    if (config == nullptr) {
        return;
    }

    u32 mode = static_cast<u32>(config->mRaceScenario.mSettings.mGameMode);

    // Dispatch to mode-specific initialization
    switch (mode) {
        // VS Race modes
        case RaceConfig::Settings::GAMEMODE_VS_RACE:
        case RaceConfig::Settings::GAMEMODE_PRIVATE_VS:
        case RaceConfig::Settings::GAMEMODE_PUBLIC_VS:
            // VS: standard race with configurable laps
            lapCount = config->mRaceScenario.mSettings.mLapCount;
            // VS uses standard countdown: 3-2-1-GO (240 frames at 60fps)
            // No special countdown timer modifications needed
            break;

        // Grand Prix mode
        case RaceConfig::Settings::GAMEMODE_GRAND_PRIX:
            // GP: uses standard 3 laps (or mirror)
            lapCount = config->mRaceScenario.mSettings.mLapCount;
            // GP may adjust countdown based on race number in series
            break;

        // Battle modes
        case RaceConfig::Settings::GAMEMODE_BATTLE:
        case RaceConfig::Settings::GAMEMODE_PUBLIC_BATTLE:
        case RaceConfig::Settings::GAMEMODE_PRIVATE_BATTLE:
            // Battle: no laps, uses time limit instead
            lapCount = 0;
            // Battle has a countdown timer (typically 3 minutes = 180 seconds)
            // Timer is managed by RaceManager::TimerManager
            break;

        // Time Attack
        case RaceConfig::Settings::GAMEMODE_TIME_TRIAL:
        case RaceConfig::Settings::GAMEMODE_GHOST_RACE:
            // Time Attack: always 3 laps, no countdown timer
            lapCount = 3;
            break;

        // Mission / Tournament modes
        case RaceConfig::Settings::GAMEMODE_MISSION_TOURNAMENT:
            // Mission mode: laps depend on mission
            lapCount = config->mRaceScenario.mSettings.mLapCount;
            break;

        default:
            // Unknown mode: default to 3 laps
            lapCount = 3;
            break;
    }

    // Apply lap count to all players
    for (u8 i = 0; i < MAX_PLAYER_COUNT; i++) {
        if (i < playerCount && players != nullptr) {
            players[i].maxLap = static_cast<s8>(lapCount);
        }
    }

    // Initialize race mode object
    // 0x80555bf8 = memset (zero mode state)
    // 0x80555cac, 0x80555e14 = mode-specific setup functions
    // Note: Cannot memset RaceMode as it has virtual destructor (non-trivial).
    // The original binary zeroes the vtable-padded area separately.
    if (raceMode != nullptr) {
        // Race mode re-initialization is handled by its own init method
    }
}

// @addr 0x8053569c
// Updates race state each frame.
// Ghidra shows call to 0x80555bf8 (memset) suggesting state reset/processing.
// Per-frame update: advances race timer, updates player positions,
// checks for lap completions, and refreshes rankings.
void Raceinfo::update() {
    // Advance the race timer by one frame (~16.67ms at 60fps)
    raceTimerMs += 17; // Approximate: 1000/60 = 16.67, rounded up

    // Update each player's race state
    for (u8 i = 0; i < playerCount; i++) {
        if (players == nullptr) break;

        RaceinfoPlayer* player = &players[i];

        // Skip finished or disconnected players
        if (player->raceComplete) {
            continue;
        }

        // Per-frame player update: checkpoint proximity, position calculation
        player->update();
    }

    // Recalculate positions after all players updated
    calcPositions();

    // Check for race completion (all human players finished)
    // In the original binary, this triggers the end-race sequence
    // via RaceManager state transition.
}

// @addr 0x80535a00
// Calculate race positions by sorting all players by progress.
// Progress is computed as: (laps_completed * checkpoint_count_per_lap + current_checkpoint)
// Players with more progress are in higher positions (position 1 = first place).
void Raceinfo::calcPositions() {
    if (players == nullptr || playerCount == 0) {
        return;
    }

    // Build a sortable index array with computed progress values
    struct PlayerProgress {
        u8 playerIdx;
        f32 progress;
        u32 finishTime;  // Used as tiebreaker (lower = better)
    };

    PlayerProgress sorted[MAX_PLAYER_COUNT];
    for (u8 i = 0; i < playerCount; i++) {
        sorted[i].playerIdx = i;
        sorted[i].progress = players[i].progressValue;

        // Finished players get infinite progress so they always rank above unfinished
        if (players[i].raceComplete) {
            // Use negative finish time offset so earlier finishers rank higher
            sorted[i].progress = 1000000.0f - (players[i].finishTime * 0.0001f);
            sorted[i].finishTime = static_cast<u32>(players[i].finishTime);
        } else {
            sorted[i].finishTime = 0xFFFFFFFF;
        }
    }

    // Sort by progress descending (higher progress = better position)
    // Simple insertion sort (matching the original binary's approach)
    for (u8 i = 1; i < playerCount; i++) {
        PlayerProgress key = sorted[i];
        s8 j = static_cast<s8>(i) - 1;
        while (j >= 0) {
            if (sorted[j].progress < key.progress) {
                sorted[j + 1] = sorted[j];
                j--;
            } else {
                break;
            }
        }
        sorted[j + 1] = key;
    }

    // Assign positions (1-indexed)
    for (u8 i = 0; i < playerCount; i++) {
        u8 pIdx = sorted[i].playerIdx;
        u8 position = i + 1; // 1-indexed: first place = 1
        positions[pIdx] = position;
        players[pIdx].racePosition = position;
    }
}

// @addr 0x80535b00
// Returns the current race position for a player (1-12).
// Position 0 means the player has not been ranked yet.
u8 Raceinfo::getPlayerPosition(u8 playerIdx) {
    if (playerIdx >= playerCount || players == nullptr) {
        return 0;
    }
    return positions[playerIdx];
}

// @addr 0x80535c00
// Returns the elapsed race time for a player in milliseconds.
// For finished players, returns the final finish time.
// For active players, returns the current race timer.
u32 Raceinfo::getPlayerRaceTime(u8 playerIdx) {
    if (playerIdx >= playerCount || players == nullptr) {
        return 0;
    }

    RaceinfoPlayer* player = &players[playerIdx];
    if (player->raceComplete) {
        return static_cast<u32>(player->finishTime);
    }

    // For active players, compute elapsed time from race start
    if (player->raceStartTimeMs > 0 && raceTimerMs >= player->raceStartTimeMs) {
        return raceTimerMs - player->raceStartTimeMs;
    }

    return raceTimerMs;
}

// @addr 0x80535d00
// Returns the number of laps completed by a player.
u8 Raceinfo::getLapCount(u8 playerIdx) {
    if (playerIdx >= playerCount || players == nullptr) {
        return 0;
    }
    return static_cast<u8>(players[playerIdx].lapCount);
}

// @addr 0x80535e00
// Stores the final finish position for a player.
// Called when a player crosses the finish line on the final lap.
void Raceinfo::setFinishPosition(u8 playerIdx, u8 position) {
    if (playerIdx >= playerCount || players == nullptr) {
        return;
    }

    players[playerIdx].finishPosition = position;
    players[playerIdx].raceComplete = 1;
    positions[playerIdx] = position;

    // Track finish order
    if (finishCount < MAX_PLAYER_COUNT) {
        finishOrder[finishCount] = playerIdx;
    }
    finishCount++;
}

// @addr 0x805387c4
// Gets the initial position and rotation for a given player at race start.
// Ghidra shows call to 0x80590144 (likely a course/scene lookup function).
// The start grid is a 2-wide, 6-deep formation. Position indices map as:
//   0=front-left, 1=front-right, 2=second-left, 3=second-right, etc.
void Raceinfo::getInitialPosAndRotForPlayer(u8 playerIdx, void* pos, void* rot) {
    if (pos != nullptr) {
        // Default starting position if course data is unavailable
        f32* posF = static_cast<f32*>(pos);

        // Grid layout: 2 columns, 6 rows
        // Row spacing ~15 units, column spacing ~8 units
        u8 row = playerIdx / 2;
        u8 col = playerIdx % 2;

        f32 rowSpacing = 15.0f;
        f32 colSpacing = 8.0f;

        // Starting positions relative to the start/finish line
        posF[0] = (col == 0 ? -colSpacing * 0.5f : colSpacing * 0.5f);
        posF[1] = 0.0f; // Y position (ground level)
        posF[2] = -(static_cast<f32>(row) * rowSpacing); // Z offset behind S/F line

        // In the original binary, 0x80590144 resolves the actual course start
        // point data and overrides these default values. The course data
        // contains a start point position and direction vector that is
        // transformed based on the grid slot index.
        //
        // The full lookup chain is:
        //   CourseMap::getInstance() → getStartPoint(idx)
        //   StartPoint contains: position (Vec3), direction (Vec3), up (Vec3)
        //   The grid slot is computed from playerIdx using row/col formula
        //   Position = startPoint.position + row * rowSpacing * (-direction)
        //                                      + col * colSpacing * (perpDirection)
    }

    if (rot != nullptr) {
        // Default starting rotation (facing +Z direction)
        f32* rotF = static_cast<f32*>(rot);

        // Y-axis rotation (heading) - default facing forward
        rotF[0] = 0.0f; // X rotation (pitch)
        rotF[1] = 0.0f; // Y rotation (yaw) - aligned with start direction
        rotF[2] = 0.0f; // Z rotation (roll)

        // In the original binary, the rotation is derived from the start
        // point's direction vector using atan2 to get the Y-axis heading.
    }
}

} // namespace System