#pragma once
// RankingSystem.hpp - VR rating and ranking management
// Handles VR point calculation, ranking tiers, and matchmaking rating
// Address range: 0x80578000 - 0x80580000

#include "rk_common.h"

namespace SaveData {

class License;

// VR ranking tiers (MKWii)
enum VRTier {
    VR_TIER_BRONZE = 0,     // < 5000 VR
    VR_TIER_SILVER = 1,     // 5000-7000
    VR_TIER_GOLD = 2,       // 7000-8500
    VR_TIER_PLATINUM = 3,   // 8500-9500
    VR_TIER_STAR = 4,        // 9500-9999
    VR_TIER_THREE_STAR = 5, // 9999 (maximum)
};

// VR adjustment context
enum VRContext {
    VR_CONTEXT_OFFLINE_RACE = 0,
    VR_CONTEXT_ONLINE_RACE = 1,
    VR_CONTEXT_TIME_TRIAL = 2,
    VR_CONTEXT_BATTLE = 3,
};

// VR change record (one entry per race affecting VR)
struct VRChangeRecord {
    u32 timestamp;           // Unix timestamp of the change
    s32 previousVR;
    s32 changeAmount;        // Positive = gained, negative = lost
    s32 newVR;
    VRContext context;        // What caused the change
    u16 courseId;            // Course where change occurred
    u8 playerCount;          // Number of players in the race
    u8 finishingPosition;    // Player's finishing position
};

// Matchmaking rating parameters
struct MatchRating {
    s32 vr;
    s32 matchRating;          // Rating used for opponent matching
    f32 winProbability;       // Expected win probability
    f32 expectedScore;        // Expected score from this match
};

// Ranking leaderboard entry (local copy)
struct LeaderboardEntry {
    u32 profileId;
    char nickname[32];
    s32 vr;
    u32 totalRaces;
    u32 totalWins;
    f32 winRate;
    VRTier tier;
    u16 bestCourseTime[32];   // Best time per course
    u32 lastActive;           // Last active timestamp
};

class RankingSystem {
public:
    RankingSystem();
    ~RankingSystem();

    // --- Initialization ---
    // @addr 0x80578000
    void init(License* license);
    // @addr 0x805781A0
    void shutdown();

    // --- VR calculation ---
    // @addr 0x80578340
    s32 calculateVRChange(s32 currentVR, s32 opponentVR, s32 finishingPosition, u32 playerCount, VRContext context);
    // @addr 0x80578580
    void applyVRChange(s32 change, VRContext context, u16 courseId, u8 position, u8 playerCount);
    // @addr 0x80578740
    s32 getVR() const { return mCurrentVR; }

    // --- VR history ---
    // @addr 0x80578880
    const VRChangeRecord* getHistoryEntry(u32 index) const;
    // @addr 0x805789C0
    u32 getHistoryCount() const { return mHistoryCount; }
    // @addr 0x80578B00
    s32 getPeakVR() const { return mPeakVR; }
    // @addr 0x80578C40
    s32 getLowestVR() const { return mLowestVR; }

    // --- Ranking tiers ---
    // @addr 0x80578D80
    VRTier getTier(s32 vr) const;
    VRTier getCurrentTier() const { return getTier(mCurrentVR); }
    // @addr 0x80578EC0
    const char* getTierName(VRTier tier) const;
    // @addr 0x80579000
    s32 getTierMinimumVR(VRTier tier) const;

    // --- Matchmaking ---
    // @addr 0x80579140
    MatchRating calculateMatchRating(s32 currentVR, u32 playerCount, bool isOnline);
    // @addr 0x80579340
    f32 estimateWinProbability(s32 playerVR, s32 opponentVR) const;

    // --- Leaderboard ---
    // @addr 0x80579500
    void updateLeaderboardEntry(const LeaderboardEntry& entry);
    // @addr 0x80579680
    const LeaderboardEntry* getLeaderboardEntry(u32 index) const;
    // @addr 0x80579800
    u32 getLeaderboardCount() const { return mLeaderboardCount; }
    // @addr 0x80579940
    void sortLeaderboard();

    // --- Stats ---
    // @addr 0x80579A80
    u32 getTotalRaces() const { return mTotalRaces; }
    // @addr 0x80579BC0
    u32 getTotalWins() const { return mTotalWins; }
    // @addr 0x80579D00
    f32 getWinRate() const;

    // --- Reset ---
    // @addr 0x80579E40
    void resetVR(s32 newVR);

private:
    static const u32 MAX_HISTORY = 200;
    static const u32 MAX_LEADERBOARD = 100;
    static const s32 DEFAULT_VR = 5000;

    // License reference
    License* mLicense;

    // Current VR
    s32 mCurrentVR;
    s32 mPeakVR;
    s32 mLowestVR;

    // History
    VRChangeRecord mHistory[MAX_HISTORY];
    u32 mHistoryCount;

    // Leaderboard
    LeaderboardEntry mLeaderboard[MAX_LEADERBOARD];
    u32 mLeaderboardCount;

    // Stats
    u32 mTotalRaces;
    u32 mTotalWins;
    u32 mTotalLosses;

    // Internal helpers
    f32 eloKFactor(VRContext context) const;
    s32 clampVR(s32 vr) const;
};

} // namespace SaveData