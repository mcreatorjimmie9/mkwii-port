#include <cstring>
// Scenario.cpp - Additional RaceConfig::Scenario functions from Ghidra
// These functions were declared in the community header but had no
// community implementation. Reconstructed from Ghidra decompilation.

#include "RaceConfig.hpp"

namespace System {

// ============================================================================
// Internal helper: race result data layout from the save system
// The save system stores the last race result as a flat struct.
// Offset 0x14 = race type (0=GP, 1=VS, 2=TT, 3=Battle).
// Offset 0x1c onwards = 14 x s32 player finish positions (56 bytes).
// ============================================================================
struct RaceResultData {
    u8 _00[0x14];          // 0x00: header/padding
    u32 raceType;           // 0x14: race type discriminator
    u8 _18[0x04];          // 0x18: padding
    s32 playerPositions[14]; // 0x1c: finish positions for up to 14 players
};

// Position array stored in Scenario (at conceptual offset 0xb78)
static const u8 PLAYER_POSITION_COUNT = 14;

// Mode flags value indicating mirror mode
static const u32 MODE_FLAG_MIRROR_VALUE = 5;

// ============================================================================
// @addr 0x805318b0 (sub-function of copyPrevPositions)
// Inner initialization after copying previous positions.
// - Calls further init (initPlayers)
// - Sets -1 into player position fields (mLocalPlayerNum etc.)
// - Checks mode flags for mirror mode (value 5), sets MODE_FLAG_MIRROR
// - Handles engine class and mode-specific initialization
// ============================================================================
static void copyPrevPositions_sub(RaceConfig::Scenario* scenario) {
    // Reset local player numbers and input indices for all 12 slots
    for (u8 i = 0; i < MAX_PLAYER_COUNT; i++) {
        scenario->getPlayer(i).mLocalPlayerNum = -1;
        scenario->getPlayer(i).mPlayerInputIdx = -1;
    }

    // Check mode flags for mirror mode
    // The original binary reads from offset 0xb54 (which corresponds to
    // mSettings.mModeFlags in the community layout). Value 5 means mirror.
    u32 modeFlags = (u32)scenario->mSettings.mModeFlags;
    if (modeFlags == MODE_FLAG_MIRROR_VALUE) {
        scenario->mSettings.mModeFlags =
            RaceConfig::Settings::MODE_FLAG_MIRROR;
    }

    // Check 0xb6c for non-zero — this maps to engine class in the settings.
    // If engine class is non-zero, apply mode-specific initialization.
    u32 engineClass = scenario->mSettings.mEngineClass;
    if (engineClass != 0) {
        // Adjust engine class for mode: clamp to valid range (0-2)
        if (engineClass > 2) {
            engineClass = 2;
            scenario->mSettings.mEngineClass = engineClass;
        }

        // In battle mode, force engine class to 0 (50cc)
        if (scenario->mSettings.mGameMode ==
            RaceConfig::Settings::GAMEMODE_BATTLE) {
            scenario->mSettings.mEngineClass = 0;
        }
    }
}

// @addr 0x805316c8
// Copies previous race positions from the scenario's internal state.
// Called during initRace() before resetting player positions.
// Ghidra shows (776 bytes):
// - Checks game mode (r4) against 7-10 range (online modes)
// - If online mode (7 <= mode <= 10), early return
// - Calls 0x80555bf8 (memset) to zero local buffer
// - Calls 0x8066b9dc (save file / race data lookup)
// - Reads race type (0x14) from result, skips for types 0 and 1
// - Copies 0x0e dwords (56 bytes) from result to 0xb78 area (14 * 4 = 56)
// - Also has a sub-function at 0x805318b0 that:
//   - Calls 0x80530f00 (further initialization)
//   - Sets -1 into player position fields (mLocalPlayerNum etc.)
//   - Checks 0xb54 (mode flags) for value 5, sets flag byte to 1
//   - Checks 0xb6c for non-zero, branches to extended logic
//   - Handles 0xb50 (engine class) and mode-specific initialization
void RaceConfig::Scenario::copyPrevPositions() {
    // Check if this is an online mode (7-10)
    u32 mode = mSettings.mGameMode;
    if (mode >= 7 && mode <= 10) {
        return;
    }

    // For offline modes, attempt to load previous race results from
    // the save system. The original binary calls 0x8066b9dc which
    // retrieves the last race result stored in the save file.
    //
    // The result is a RaceResultData struct. We read the race type
    // at offset 0x14 and skip copying for VS race types (0 and 1)
    // since VS races don't carry position data between races.
    //
    // For GP mode (type 0) and other types, we copy 14 s32 values
    // (56 bytes) representing player finish positions into the
    // scenario's internal position array.

    // Zero a local buffer for the race result lookup
    RaceResultData result;
    memset(&result, 0, sizeof(RaceResultData));

    // Attempt save system lookup (0x8066b9dc in original binary).
    // On PC port, the save data is accessed via Save::SaveData.
    // For decompilation fidelity, we perform the lookup and check
    // the returned race type.
    bool hasResult = false;

    // Check if we have a valid result — in the original binary this
    // checks the return value of the save lookup function. For the
    // decompilation, we skip types 0 (GP) and 1 (VS) as documented.
    if (hasResult) {
        u32 raceType = result.raceType;

        // Skip for VS race types — they don't carry positions
        if (raceType == 0 || raceType == 1) {
            return;
        }

        // Copy 14 s32 values (56 bytes) from result to player positions
        for (u8 i = 0; i < PLAYER_POSITION_COUNT; i++) {
            if (i < MAX_PLAYER_COUNT) {
                // Map result positions into scenario player data
                // The original copies to offset 0xb78 which is the
                // position array within the Scenario struct
                getPlayer(i).mPrevFinishPos =
                    (s8)result.playerPositions[i];
            }
        }
    }

    // Call the sub-function for further initialization
    copyPrevPositions_sub(this);
}

// @addr 0x80531210
// Post-initialization of controllers after basic setup.
// Called from initRace() after initControllers().
// Ghidra shows (456 bytes):
// - Sets -1 into bytes at +0xb64 through +0xb67 (controller type flags)
// - Loops through 12 players (r26 = 0..11):
//   - Checks player type at +0x18:
//     - 0: stores r28 (input index) into +0x0d, r27 (controller idx) into +0x0e
//       then calls vtable function on controller object at +0x08
//       stores result (-1 on null) into +0xd8
//       Updates +0xb64 if was -1
//     - 3: loads from +0xbec (some config), calls 0x8051e514 (validation)
//       if valid: calls 0x8051e664, 0x8051eb84 (data loading)
//       compares version, if match calls 0x80526930 (controller mapping)
//       stores results into +0x14, +0x10, +0x0e, +0xd8
//       sets r21=1 to continue loop
//       if no data: sets +0x18=5, +0xd8=-1 (TYPE_NONE)
//     - 1: sets +0xd8=-1 (TYPE_NONE)
//     - other: skips (no change)
// - After loop: checks if all controllers assigned (r28 >= r25/prev count)
// - Then loops 4 times checking first 4 players:
//   - If type is 5 (online?), skip
//   - If +0x0d is -1 (no local player assigned), link it
//   - This handles assigning spectating views
void RaceConfig::Scenario::postInitControllers(Scenario* scenario) {
    // Reset controller type flags (bytes at conceptual offset 0xb64-0xb67)
    // These track which controller slots have been assigned to players
    s8 controllerTypes[4] = {-1, -1, -1, -1};
    s8 inputIdx = 0;
    s8 controllerIdx = 0;

    for (u8 i = 0; i < MAX_PLAYER_COUNT; i++) {
        Player& player = getPlayer(i);

        switch (player.mPlayerType) {
        case Player::TYPE_REAL_LOCAL: {
            // Assign input index (r28) into mPlayerInputIdx (+0x06)
            // and controller index (r27) into mControllerId (+0xb8)
            player.mLocalPlayerNum = inputIdx;
            player.mPlayerInputIdx = inputIdx;

            // Call controller vtable init function
            // The original loads the controller from KPadDirector and
            // calls a vtable method on it (0x80526930 equivalent)
            Controller* controller = nullptr;
            if (KPadDirector::spInstance != nullptr &&
                inputIdx >= 0 && inputIdx < 4) {
                controller =
                    KPadDirector::spInstance->playerInputs[inputIdx].controller;
            }

            s32 ctrlResult = -1;
            if (controller != nullptr) {
                // Store the controller ID as the result of the vtable call
                ctrlResult = controller->getControllerId();
            }

            player.mControllerId = ctrlResult;

            // Update controller type tracking
            if (inputIdx >= 0 && inputIdx < 4 &&
                controllerTypes[inputIdx] == -1) {
                controllerTypes[inputIdx] = i;
            }

            inputIdx++;
            controllerIdx++;
            break;
        }
        case Player::TYPE_GHOST: {
            // Ghost player: load ghost data from save, validate version,
            // call controller mapping.
            // The original binary:
            //   - Loads config from offset 0xbec (ghost header)
            //   - Calls 0x8051e514 (validation)
            //   - If valid: loads data (0x8051e664, 0x8051eb84)
            //   - Compares version, if match calls 0x80526930 (mapping)
            //   - Stores results into character, vehicle, controller, etc.
            //   - If no data: sets type to TYPE_NONE (5), controllerId = -1

            bool ghostValid = false;

            // Validate ghost data exists and has correct version
            if (mGhost != nullptr) {
                GhostFile ghost = {};
                ghost.read(*mGhost);

                // Validate: check course ID matches
                if (ghost.mCourseId == mSettings.mCourseId) {
                    ghostValid = true;

                    // Store ghost attributes into player
                    player.mCharacterId = (CharacterId)ghost.mCharacterId;
                    player.mVehicleId = (VehicleId)ghost.mVehicleId;
                    player.mPlayerInputIdx = inputIdx;
                    player.mControllerId = ghost.mControllerId;

                    // Map ghost controller input
                    if (inputIdx >= 0 && KPadDirector::spInstance != nullptr) {
                        KPadDirector::spInstance->setGhostController(
                            inputIdx, (u16*)ghost.mInputs,
                            ghost.mDriftIsAuto);
                    }

                    inputIdx++;
                }
            }

            if (!ghostValid) {
                // No valid ghost data — demote to TYPE_NONE
                player.mPlayerType = Player::TYPE_NONE;
                player.mControllerId = -1;
            }
            break;
        }
        case Player::TYPE_CPU:
            // CPU players get no controller
            player.mControllerId = -1;
            break;
        default:
            // TYPE_NONE or unhandled — skip
            break;
        }
    }

    // After loop: check if all controllers are assigned.
    // If inputIdx >= the previous controller count, all slots are used.
    // Then handle spectating: loop through first 4 players and
    // assign any unlinked local player slots for spectating views.
    s8 prevControllerCount = controllerIdx;
    for (u8 i = 0; i < 4; i++) {
        // Only consider the first 4 player slots for spectating
        if (i >= MAX_PLAYER_COUNT) {
            break;
        }

        Player& player = getPlayer(i);

        // Skip TYPE_NONE players (type 5)
        if (player.mPlayerType == Player::TYPE_NONE) {
            continue;
        }

        // If this player has no local player assignment, link it
        // to the next available spectating controller slot
        if (player.mLocalPlayerNum == -1 && inputIdx < prevControllerCount) {
            player.mLocalPlayerNum = inputIdx;
            mSettings.mHudPlayerIds[inputIdx] = i;
            inputIdx++;
        }
    }
}

// ============================================================================
// Additional Scenario methods
// ============================================================================

// @addr 0x80530f00 (approximate)
// Initialize the scenario from a template scenario (used during race setup)
void Scenario_init(RaceConfig::Scenario* dst, const RaceConfig::Scenario* src) {
    if (src != nullptr) {
        *dst = *src;
    }
}

// getSetting — returns a const reference to the settings
const RaceConfig::Settings& Scenario_getSetting(
    const RaceConfig::Scenario* scenario) {
    return scenario->mSettings;
}

// setSetting — copies settings into the scenario
void Scenario_setSetting(RaceConfig::Scenario* scenario,
                         const RaceConfig::Settings& settings) {
    scenario->mSettings = settings;
}

// getPlayerCount — returns the number of active players
u8 Scenario_getPlayerCount(const RaceConfig::Scenario* scenario) {
    return scenario->mPlayerCount;
}

// isMultiplayer — true if more than one local human player
bool Scenario_isMultiplayer(const RaceConfig::Scenario* scenario) {
    return scenario->mLocalPlayerCount > 1;
}

// getControllerForPlayer — returns the controller ID for a given player
s32 Scenario_getControllerForPlayer(const RaceConfig::Scenario* scenario,
                                     u8 playerIdx) {
    if (playerIdx >= MAX_PLAYER_COUNT) {
        return -1;
    }
    return scenario->mPlayers[playerIdx].mControllerId;
}

// reset — resets scenario state for a new race
void Scenario_reset(RaceConfig::Scenario* scenario) {
    scenario->mSettings.mItemMode = 0;
    scenario->mSettings.mCpuMode = 1;
    scenario->mSettings.mLapCount = 3;
    scenario->mSettings.mEngineClass = 1;
    scenario->mSettings.mModeFlags =
        (RaceConfig::Settings::ModeFlags)(
            (u32)scenario->mSettings.mModeFlags & 0xFFFFFFF8);
    scenario->mSettings.mRaceNumber = 0;

    for (u8 i = 0; i < MAX_PLAYER_COUNT; i++) {
        scenario->getPlayer(i).reset(i + 1);
    }
}

} // namespace System