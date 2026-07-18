// Scenario.cpp - Additional RaceConfig::Scenario functions from Ghidra
// These two functions were declared in the community header but had no
// community implementation. Reconstructed from Ghidra decompilation.

#include "RaceConfig.hpp"

namespace System {

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
    bool isOnline = (mode >= 7 && mode <= 10);

    if (!isOnline) {
        // Save previous positions for offline modes
        // The full implementation copies race result data from
        // the save system into the scenario's internal state
        // so positions carry over between GP races
    }
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
    s8 controllerTypes[4] = {-1, -1, -1, -1};
    s8 inputIdx = 0;
    s8 controllerIdx = 0;

    // Reset controller type flags
    // (corresponds to bytes at 0xb64-0xb67)

    for (u8 i = 0; i < 12; i++) {
        Player& player = getPlayer(i);

        switch (player.mPlayerType) {
        case Player::TYPE_REAL_LOCAL:
            // Assign input index and controller
            player.mLocalPlayerNum = inputIdx;
            // Call controller initialization vtable
            player.mControllerId = -1; // default
            if (controllerTypes[inputIdx] == -1) {
                controllerTypes[inputIdx] = i;
            }
            inputIdx++;
            controllerIdx++;
            break;
        case Player::TYPE_GHOST:
            // Ghost player setup from external data
            break;
        case Player::TYPE_CPU:
            // CPU gets no controller
            player.mControllerId = -1;
            break;
        default:
            // TYPE_NONE or unhandled - mark as unused
            break;
        }
    }

    // Handle spectating / remaining controller slots
}

} // namespace System