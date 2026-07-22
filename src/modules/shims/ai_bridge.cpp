// ai_bridge.cpp — Bridge between decompiled AIRace and platform Player
//
// Connects the decompiled Enemy::AIManager + AIEngine (from data/src/game/AIRace/)
// to the platform Game::Player objects and AIInputStore.
//
// In the original MKWii:
//   - RaceManager creates Enemy::AI instances for each CPU player
//   - AI::update() calls AIEngine::update(enemyPathAccessor) each frame
//   - AIEngine::calc() drives the entire AI brain (steering, drift, items, tricks)
//   - AIInfo::mStickX (steering [-1,1]) and mActions (bitmask) are the outputs
//   - These feed into KPadAI → KPadRaceInputState → PlayerSub10 physics
//
// On PC, we bridge:
//   - AIManager::createInstance() + init() in SceneRace::initSubsystems()
//   - AIManager::update() in SceneRace::updateRacing()
//   - AIInfo → Platform::InputState translation → AIInputStore
//
// NOTE: We do NOT include KartObjectProxy.hpp here because it defines stub
// KartState/KartMove/KartDynamics that conflict with the GENESIS versions.
// The AI bridge uses its own simple proxy struct instead.

// Include RaceConfig BEFORE KartState.hpp (which includes <system/RaceConfig.hpp>
// stub). With __RACECONFIG_DEFINED__, the stub is skipped.
#include "RaceEngine/RaceConfig.hpp"
#include "KartMovement/KartState.hpp"
#include "KartMovement/KartMove.hpp"
#include "Collision/KartDynamics.hpp"

// Forward declarations for AI types
namespace Enemy { struct AIEngine; class AI; }

#include "AIRace/AIInfo.hpp"

// AIManager needs full definition (creates/destroys AI instances)
#include "AIRace/AIManager.hpp"
#include "AIRace/AIEngine.hpp"

// Avoid including AIRace/AI.hpp which transitively includes KartObjectProxy.hpp
// Instead, forward-declare Enemy::AI and provide minimal inline accessors
class Enemy::AI {
public:
    AI(bool isBike);
    virtual ~AI();
    void update();
    Enemy::AIEngine* mpEngine;
    u32 mFlags;
    s32 mTeam;
};

#include "ai_input_store.hpp"
extern "C" void sub_setAIPlayerInput(u32 playerIdx, f32 steer, f32 accel, f32 brake, bool drift);
#include "Player/Player.hpp"

#include <cstring>
#include <cstdlib>
#include <cmath>

// ============================================================================
// Module-level globals — proxy array and player pointers
// ============================================================================

static const int MAX_AI_PLAYERS = 12;
static Game::Player* s_playerPtrs[MAX_AI_PLAYERS] = {};

// ============================================================================
// initAIManager() — Create and configure the AI system for the race
//
// Called from SceneRace::initSubsystems() after all players are created.
// In the original MKWii:
//   1. AIManager::createInstance()
//   2. For each CPU player: create Enemy::AI(isBike)
//   3. AIManager::create(ai, isBike)
//   4. AIManager::init(playerCount, engineClass, isTimeTrials)
// ============================================================================
extern "C" void initAIManager() {
    using namespace Enemy;
    using namespace System;

    // Create CourseMap singleton (needed by AI::update())
    if (!CourseMap::spInstance) {
        CourseMap::spInstance = new CourseMap();
    }

    // Create AIManager singleton
    AIManager::createInstance();

    // Get total racer count from RaceConfig
    u8 playerCount = 4;
    if (RaceConfig::spInstance) {
        playerCount = RaceConfig::getRacePlayerCount();
    }
    if (playerCount < 2) playerCount = 2;
    if (playerCount > MAX_PLAYER_COUNT) playerCount = MAX_PLAYER_COUNT;

    // Get engine class for difficulty
    s32 engineClass = 2; // Default 150cc
    if (RaceConfig::spInstance) {
        engineClass = RaceConfig::spInstance->mRaceScenario.mSettings.getEngineClass();
    }

    // Register CPU players (all players except player 0 who is human)
    u32 cpuCount = playerCount - 1;
    for (u32 i = 0; i < cpuCount && i < (u32)MAX_PLAYER_COUNT; i++) {
        u32 playerId = i + 1;

        // Create Enemy::AI for this CPU player (isBike = false for karts)
        AI* ai = new AI(false);
        ai->mFlags = 0;
        ai->mTeam = -1;

        // Register with AIManager (creates AIEngineKart internally)
        AIManager::getInstance()->create(ai, false);
    }

    // Initialize the AIManager
    AIManager::getInstance()->init((s32)playerCount, engineClass, false);

    printf("[AI Bridge] AIManager initialized: %u CPU players, class %d\n",
           cpuCount, engineClass);
}

// ============================================================================
// setAIPlayerBridge() — Link platform Player to AI proxy
// ============================================================================
extern "C" void setAIPlayerBridge(u32 playerId, Game::Player* player) {
    if (playerId < (u32)MAX_AI_PLAYERS) {
        s_playerPtrs[playerId] = player;
    }
}

// ============================================================================
// updateAIForPlayer() — Run one AI tick and translate output to input store
//
// Uses AIManager's public getAIForPlayer() accessor.
// ============================================================================
extern "C" void updateAIForPlayer(u32 playerId) {
    using namespace Enemy;

    AIManager* mgr = AIManager::getInstance();
    if (!mgr) return;

    // Use public accessor
    AIEngine* engine = mgr->getAIForPlayer((u8)playerId);
    if (!engine) return;

    // Update the AI engine with the current path accessor
    System::MapdataEnemyPathAccessor* accessor = nullptr;
    if (System::CourseMap::spInstance) {
        accessor = System::CourseMap::spInstance->getEnemyPathAccessor();
    }
    engine->update(accessor);

    // Now read the AI output from AIInfo
    AIInfo* info = engine->mpInfo;
    f32 steer = 0.0f;
    bool accel = false;
    bool brake = false;
    bool drift = false;

    if (info) {
        steer = engine->getTotalSteer();

        u16 actions = AIInfo_getActions(info);
        accel = (actions & 0x01) != 0;
        brake = (actions & 0x02) != 0;
        drift = (actions & 0x04) != 0;
    }

    sub_setAIPlayerInput(playerId, steer, accel ? 1.0f : 0.0f,
                          brake ? 1.0f : 0.0f, drift);
}

// ============================================================================
// pauseAI() — Pause/resume AI updates
// ============================================================================
extern "C" void pauseAI(bool pause) {
    using namespace Enemy;
    if (AIManager::getInstance()) {
        AIManager::getInstance()->pauseAI(pause);
    }
}

// ============================================================================
// shutdownAIManager() — Clean up AI system
// ============================================================================
extern "C" void shutdownAIManager() {
    using namespace Enemy;

    for (s32 i = 0; i < MAX_AI_PLAYERS; i++) {
        s_playerPtrs[i] = nullptr;
    }

    AIManager::destroyInstance();

    if (System::CourseMap::spInstance) {
        delete System::CourseMap::spInstance;
        System::CourseMap::spInstance = nullptr;
    }

    printf("[AI Bridge] AIManager destroyed\n");
}
