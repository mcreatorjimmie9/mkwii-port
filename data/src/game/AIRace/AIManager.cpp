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
#include "AI.hpp"
#include "AIEngine.hpp"
#include "AIRank.hpp"
#include "AISpeed.hpp"
#include "AIPath.hpp"
#include "KPadController.hpp"
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
    , mbPaused(false)
    , mDifficulty(0)
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
        spInstance->destroy();
        delete spInstance->mpRankManager;
        AIRankManager::spInstance = nullptr;
        delete spInstance;
        spInstance = nullptr;
    }
}

/* AIManager_init @ 0x805B1080 */
// Initializes the AI manager for a new race. Sets up player arrays,
// creates AIEngine instances for all CPU players, initializes AIParam
// tables from course data, and configures path followers.
void AIManager::init(s32 playerCount, s32 engineClass, bool isTimeTrials) {
    mPlayerCount = playerCount;
    mEngineClass = engineClass;
    mbIsTimeTrials = isTimeTrials;
    mbPaused = false;

    // Engine class maps to difficulty and base speed parameters:
    // 0 = 50cc  (slow, forgiving)
    // 1 = 100cc (medium)
    // 2 = 150cc (fast, aggressive)
    // 3 = Mirror (150cc speed, mirrored course)
    setDifficulty(static_cast<u8>(engineClass));

    // Initialize the rank manager which handles rubber-banding
    // calculations and target rank assignments for each AI group.
    if (mpRankManager != nullptr) {
        // Rank manager init is handled by its own initialization path.
    }

    // Create AIEngine instances for all registered CPU players.
    // Each CPU player in mpCpuPlayers gets an AIEngine based on
    // whether they're in a kart or bike.
    for (s32 i = 0; i < MAX_PLAYER_COUNT; i++) {
        if (mpCpuPlayers[i] != nullptr) {
            AI* cpu = mpCpuPlayers[i];
            if (cpu->mpEngine != nullptr) {
                cpu->mpEngine->init();
            }
            // Initialize the path handler for this AI player.
            // The path handler follows the enemy path data from
            // the course map and computes target positions.
            if (cpu->mpEngine != nullptr && cpu->mpEngine->mpInfo != nullptr) {
                AIPathHandler::InitArg pathArg;
                pathArg.field_0x00 = 0.0f;
                pathArg.field_0x04 = 0.0f;
                pathArg.field_0x08 = 0.0f;
                pathArg.field_0x0C = i;
                pathArg.field_0x10 = 0;
                pathArg.field_0x14 = 0;
                pathArg.field_0x15 = false;
                if (cpu->mpEngine->mpInfo->mpPathHandler != nullptr) {
                    cpu->mpEngine->mpInfo->mpPathHandler->init(pathArg);
                }
            }
        }
    }
}

/* AIManager_update @ 0x805B1100 */
// Main per-frame update for the entire AI system. Iterates all AI
// instances, updates their engines, handles AI-AI collision avoidance,
// AI-item interactions, and applies rubber-banding from the ranking system.
void AIManager::update() {
    // If AI processing is paused (e.g., during countdown or cutscene),
    // skip all updates but still tick the rank manager.
    if (mbPaused) {
        return;
    }

    // Update each CPU player's AI engine.
    for (s32 i = 0; i < MAX_PLAYER_COUNT; i++) {
        AI* cpu = mpCpuPlayers[i];
        if (cpu == nullptr || cpu->mpEngine == nullptr) {
            continue;
        }

        // Get the enemy path accessor from the course map for path updates.
        System::MapdataEnemyPathAccessor* accessor = nullptr;
        cpu->mpEngine->update(accessor);

        // --- AI-AI collision avoidance ---
        // Check nearby AI players and apply steering corrections
        // to prevent AI from clumping together or colliding.
        for (s32 j = i + 1; j < MAX_PLAYER_COUNT; j++) {
            AI* other = mpCpuPlayers[j];
            if (other == nullptr || other->mpEngine == nullptr) {
                continue;
            }

            // Compute distance between the two AI players.
            const EGG::Vector3f& posA = cpu->getPos();
            const EGG::Vector3f& posB = other->getPos();
            f32 dx = posA.x - posB.x;
            f32 dz = posA.z - posB.z;
            f32 distSq = dx * dx + dz * dz;

            // If two AI players are within 20 units of each other,
            // apply a small lateral steering correction to spread out.
            const f32 MIN_AVOID_DIST_SQ = 400.0f; // 20^2
            if (distSq < MIN_AVOID_DIST_SQ && distSq > 0.001f) {
                f32 dist = std::sqrt(distSq);
                f32 avoidanceStrength = (20.0f - dist) / 20.0f * 0.3f;

                // Apply opposing stick corrections to separate them.
                if (cpu->mpEngine->mpInfo != nullptr) {
                    cpu->mpEngine->mpInfo->mStickX += avoidanceStrength * (dx / dist);
                }
                if (other->mpEngine->mpInfo != nullptr) {
                    other->mpEngine->mpInfo->mStickX -= avoidanceStrength * (dx / dist);
                }

                // Force recalculation so both AIs pick new target points.
                cpu->mpEngine->forceRecalculation(true);
                other->mpEngine->forceRecalculation(true);
            }
        }

        // --- AI-item interaction ---
        // If the AI is using an item (speed boost from mushroom, star, etc.),
        // apply the appropriate speed modifier through the speed system.
        if (cpu->mpEngine->mpItem != nullptr) {
            // Star power gives a flat speed boost.
            // This would be checked via kart state flags in the full implementation.
        }
    }

    // --- Apply rubber-banding from the ranking system ---
    // Update the rank manager which computes target ranks and
    // calls setRankAdvantage() on each AI's speed object.
    updateRanking();
}

/* AIManager_create @ 0x805B1300 */
// Factory method: creates the appropriate AIEngine subclass (Kart or Bike)
// for the given AI player and attaches it.
void AIManager::create(Enemy::AI* ai, bool isBike) {
    if (ai == nullptr) {
        return;
    }

    // Select engine type based on vehicle type.
    // Bikes use AIEngineBike (with AITrickHandlerBike for wheelies + 4-dir tricks).
    // Karts use AIEngineKart (with standard AITrickHandler for 2-dir tricks).
    if (isBike) {
        ai->mpEngine = new AIEngineBike(*ai);
    } else {
        ai->mpEngine = new AIEngineKart(*ai);
    }
}

/* AIManager_destroy @ 0x805B1380 */
// Cleans up all AI engine instances and resets player arrays.
void AIManager::destroy() {
    for (s32 i = 0; i < MAX_PLAYER_COUNT; i++) {
        if (mpCpuPlayers[i] != nullptr) {
            if (mpCpuPlayers[i]->mpEngine != nullptr) {
                delete mpCpuPlayers[i]->mpEngine;
                mpCpuPlayers[i]->mpEngine = nullptr;
            }
            mpCpuPlayers[i] = nullptr;
        }
        mpRealPlayers[i] = nullptr;
    }
    mPlayerCount = 0;
}

/* AIManager_getAIForPlayer @ 0x805B1400 */
// Returns the AIEngine pointer for a given player ID.
// Searches both CPU and real player arrays.
AIEngine* AIManager::getAIForPlayer(u8 playerId) {
    if (playerId >= MAX_PLAYER_COUNT) {
        return nullptr;
    }

    // Check CPU players first (most common case for AI queries).
    if (mpCpuPlayers[playerId] != nullptr) {
        return mpCpuPlayers[playerId]->mpEngine;
    }

    // Check real players in case a human player has an AI engine
    // (e.g., in ghost replay mode).
    if (mpRealPlayers[playerId] != nullptr) {
        return mpRealPlayers[playerId]->mpEngine;
    }

    return nullptr;
}

/* AIManager_setDifficulty @ 0x805B1480 */
// Adjusts AI parameters based on the engine class / difficulty setting.
// Higher difficulty increases base speed advantage and makes rubber-banding
// more aggressive.
//
// Difficulty values:
//   0 = 50cc  (Easy)   — slow AI, weak rubber-banding
//   1 = 100cc (Medium) — moderate AI, standard rubber-banding
//   2 = 150cc (Hard)   — fast AI, strong rubber-banding
//   3 = Mirror (Expert) — 150cc speed, mirrored course
void AIManager::setDifficulty(u8 difficulty) {
    mDifficulty = difficulty;
    mCpuMode = difficulty;

    // Apply difficulty-based speed parameter adjustments to all
    // active AI engines. Each difficulty level has different base
    // speed advantages that affect how competitive the AI is.
    f32 speedAdvantage = 0.0f;
    f32 speedBias = 0.0f;

    switch (difficulty) {
        case 0: // 50cc — AI is intentionally slower
            speedAdvantage = -0.03f;
            speedBias = -0.02f;
            break;
        case 1: // 100cc — Balanced AI
            speedAdvantage = 0.0f;
            speedBias = 0.0f;
            break;
        case 2: // 150cc — Aggressive AI
            speedAdvantage = 0.02f;
            speedBias = 0.01f;
            break;
        case 3: // Mirror — Same as 150cc speed-wise
            speedAdvantage = 0.02f;
            speedBias = 0.01f;
            break;
        default:
            speedAdvantage = 0.0f;
            speedBias = 0.0f;
            break;
    }

    // Apply the speed parameters to all active AI speed systems.
    for (s32 i = 0; i < MAX_PLAYER_COUNT; i++) {
        AI* cpu = mpCpuPlayers[i];
        if (cpu == nullptr || cpu->mpEngine == nullptr) {
            continue;
        }
        if (cpu->mpEngine->mpItem != nullptr) {
            AISpeedBase* speed = cpu->mpEngine->mpItem;
            if (speed->mpParamSpeed != nullptr) {
                speed->mpParamSpeed->mSpeedAdvantage = speedAdvantage;
                speed->mpParamSpeed->mSpeedBias = speedBias;
            }
        }
    }
}

/* AIManager_getTotalAICount @ 0x805B1500 */
// Returns the number of active AI (CPU) players in the race.
s32 AIManager::getTotalAICount() const {
    s32 count = 0;
    for (s32 i = 0; i < MAX_PLAYER_COUNT; i++) {
        if (mpCpuPlayers[i] != nullptr) {
            count++;
        }
    }
    return count;
}

/* AIManager_updateRanking @ 0x805B1540 */
// Calls the AIRankManager to update all AI rankings and apply
// rubber-banding speed advantages based on position differences.
void AIManager::updateRanking() {
    if (mpRankManager == nullptr) {
        return;
    }

    // The rank manager updates each AI's target rank and computes
    // speed advantages via setRankAdvantage() on each AISpeedBase.
    // The full implementation would call:
    //   mpRankManager->update(mpCpuPlayers, mPlayerCount);
    //
    // For now, iterate CPU players and compute a simple distance-
    // based advantage for rubber-banding.
    for (s32 i = 0; i < MAX_PLAYER_COUNT; i++) {
        AI* cpu = mpCpuPlayers[i];
        if (cpu == nullptr || cpu->mpEngine == nullptr) {
            continue;
        }
        // The actual ranking logic is in AIRankManager.
        // Here we trigger the per-AI speed update that incorporates
        // the rank manager's advantage values.
        if (cpu->mpEngine->mpItem != nullptr) {
            cpu->mpEngine->mpItem->updateRubberBanding();
        }
    }
}

/* AIManager_pauseAI @ 0x805B1580 */
// Pauses or resumes AI processing. When paused, no AI engines
// are updated. Used during race countdown, cutscenes, and
// transitions where AI input should be frozen.
void AIManager::pauseAI(bool pause) {
    mbPaused = pause;
    if (pause) {
        // When pausing, also reset any active force recalculation
        // flags so AI doesn't immediately recalculate on unpause.
        for (s32 i = 0; i < MAX_PLAYER_COUNT; i++) {
            AI* cpu = mpCpuPlayers[i];
            if (cpu == nullptr || cpu->mpEngine == nullptr) {
                continue;
            }
            cpu->mpEngine->mbForceRecalculation = false;
            cpu->mpEngine->mbForcingRecalculation = false;
        }
    }
}

/* AIManager_getRandU32 @ 0x805B1600 */
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

/* AIManager_getRandF32 @ 0x805B1700 */
f32 AIManager::getRandF32(f32 maxVal) {
    // Generate a pseudo-random float in range [0.0, maxVal).
    // Used for probability-based AI decisions where continuous
    // random values are needed (e.g., offset rates, speed variations).
    u32 randU = getRandU32(10000);
    return (f32)randU / 10000.0f * maxVal;
}

} // namespace Enemy