#pragma once

#include "AIInfo.hpp"
#include "AIRank.hpp"
#include "AISpeed.hpp"
#include <egg/core/eggDisposer.hpp>
#include <rk_common.h>

namespace Enemy {

struct AIEngine;

class AIManager {
public:
    static AIManager* createInstance();
    static void destroyInstance();
    static inline AIManager* getInstance() { return spInstance; }
    void init(s32 playerCount, s32 engineClass, bool isTimeTrials);
    void update();
    AIEngine* getAIForPlayer(u8 playerId);
    void create(Enemy::AI* ai, bool isBike);
    void destroy();
    void setDifficulty(u8 difficulty);
    s32 getTotalAICount() const;
    void updateRanking();
    void pauseAI(bool pause);
    u32 getRandU32(u32);
    f32 getRandF32(f32);
    inline AIRankManager* getRankManager() { return mpRankManager; }

private:
    AIManager();
    virtual ~AIManager();

    static AIManager* spInstance;

    s32 mPlayerCount;
    s32 mEngineClass;
    s32 mCpuMode;
    bool mbIsTimeTrials;
    AI* mpCpuPlayers[MAX_PLAYER_COUNT];
    AI* mpRealPlayers[MAX_PLAYER_COUNT];
    AIRankManager* mpRankManager;
    bool mbPaused;
    u8 mDifficulty;
};

} // namespace Enemy