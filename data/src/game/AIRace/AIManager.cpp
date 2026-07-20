// AIManager.cpp — AI Manager Singleton Implementation
// GENESIS Phase 27b: Central AI system coordinator managing all CPU
// player instances, random number generation, engine class selection,
// and rank manager delegation.
// Original addresses: 0x805Bxxxx-0x805Cxxxx
//
// The AIManager is created once per race and controls:
// - Which players are AI-controlled vs human-controlled
// - The random seed for AI behavior variation
// - Engine class (50cc/100cc/150cc/Mirror) affecting AI speed
// - CPU difficulty mode (Easy/Medium/Hard/Expert)
// - The rank manager instance for rubber-banding

#include "AIManager.hpp"
#include "AIRank.hpp"
#include <cmath>

namespace Enemy {

AIManager* AIManager::spInstance = nullptr;

// ===========================================================================
// AIManager Implementation
// ===========================================================================

AIManager::AIManager()
    : mPlayerCount(0)
    , mEngineClass(0)
    , mCpuMode(0)
    , mbIsTimeTrials(false)
    , mpRankManager(nullptr)
{
    for (s32 i = 0; i < MAX_PLAYER_COUNT; i++) {
        mpCpuPlayers[i] = nullptr;
        mpRealPlayers[i] = nullptr;
    }
}

AIManager::~AIManager() {
    spInstance = nullptr;
    // AI instances are owned externally (by the race manager)
    // so we don't delete them here
    for (s32 i = 0; i < MAX_PLAYER_COUNT; i++) {
        mpCpuPlayers[i] = nullptr;
        mpRealPlayers[i] = nullptr;
    }
    mpRankManager = nullptr;
}

/* AIManager_createInstance @ 0x805B1000 */
AIManager* AIManager::createInstance() {
    if (spInstance == nullptr) {
        spInstance = new AIManager();
        spInstance->mpRankManager = new AIRankManager();
        AIRankManager::spInstance = spInstance->mpRankManager;
    }
    return spInstance;
}

/* AIManager_destroyInstance @ 0x805B1040 */
void AIManager::destroyInstance() {
    if (spInstance != nullptr) {
        delete spInstance->mpRankManager;
        AIRankManager::spInstance = nullptr;
        delete spInstance;
        spInstance = nullptr;
    }
}

/* AIManager_getRandU32 @ 0x805B1100 */
u32 AIManager::getRandU32(u32 maxVal) {
    // Generate a pseudo-random 32-bit value in range [0, maxVal).
    // The original game uses a custom LCG (Linear Congruential Generator)
    // seeded at race start. Each AI driver has its own random state
    // derived from the race seed + player index to ensure reproducible
    // behavior across identical race conditions.
    //
    // Simplified implementation: use a basic hash of frame counter
    // and instance pointer for variation.
    static u32 state = 12345;
    state = state * 1103515245u + 12345u;
    if (maxVal > 0) {
        return state % maxVal;
    }
    return state;
}

/* AIManager_getRandF32 @ 0x805B1200 */
f32 AIManager::getRandF32(f32 maxVal) {
    // Generate a pseudo-random float in range [0.0, maxVal).
    // Used for probability-based AI decisions where continuous
    // random values are needed (e.g., offset rates, speed variations).
    u32 randU = getRandU32(10000);
    return (f32)randU / 10000.0f * maxVal;
}

} // namespace Enemy
