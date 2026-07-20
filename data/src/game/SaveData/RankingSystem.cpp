// ============================================================================
// RankingSystem.cpp — VR Rating and Ranking Management Implementation
// ============================================================================

#include "RankingSystem.hpp"
#include "License.hpp"
#include <cstring>

#ifndef UNUSED
#define UNUSED(x) (void)(x)
#endif

namespace SaveData {

// ============================================================================
// Construction / Destruction / Initialization
// ============================================================================

RankingSystem::RankingSystem()
    : mLicense(nullptr)
    , mCurrentVR(DEFAULT_VR)
    , mPeakVR(DEFAULT_VR)
    , mLowestVR(DEFAULT_VR)
    , mHistoryCount(0)
    , mLeaderboardCount(0)
    , mTotalRaces(0)
    , mTotalWins(0)
    , mTotalLosses(0)
{
    memset(mHistory, 0, sizeof(mHistory));
    memset(mLeaderboard, 0, sizeof(mLeaderboard));
}

RankingSystem::~RankingSystem() {
    shutdown();
}

// @addr 0x80578000
void RankingSystem::init(License* license) {
    mLicense = license;
    mCurrentVR = DEFAULT_VR;
    mPeakVR = DEFAULT_VR;
    mLowestVR = DEFAULT_VR;
    mHistoryCount = 0;
    mLeaderboardCount = 0;
    mTotalRaces = 0;
    mTotalWins = 0;
    mTotalLosses = 0;
    memset(mHistory, 0, sizeof(mHistory));
    memset(mLeaderboard, 0, sizeof(mLeaderboard));
}

// @addr 0x805781A0
void RankingSystem::shutdown() {
    mLicense = nullptr;
}

// @addr 0x80578340
s32 RankingSystem::calculateVRChange(s32 currentVR, s32 opponentVR, s32 finishingPosition, u32 playerCount, VRContext context) {
    // Determine the actual score based on finishing position
    // 1st = 1.0, 2nd or middle = 0.5, last = 0.0
    f32 score = 0.0f;
    if (playerCount <= 1) {
        return 0;
    }
    if (finishingPosition <= 0) {
        // 1st place
        score = 1.0f;
    } else if ((u32)finishingPosition >= playerCount) {
        // Last place
        score = 0.0f;
    } else {
        // Middle positions: interpolate between 0.5 and 0.0
        // Use a simplified scoring: 2nd = 0.7, middle = 0.5, etc.
        f32 ratio = (f32)finishingPosition / (f32)(playerCount - 1);
        score = 1.0f - ratio;
    }

    // ELO expected score formula: E = 1 / (1 + 10^((oppVR - playerVR) / 400))
    f32 expectedScore = estimateWinProbability(currentVR, opponentVR);

    // Get K-factor based on context
    f32 K = eloKFactor(context);

    // ELO change: delta = K * (score - expectedScore)
    f32 delta = K * (score - expectedScore);

    // Round to nearest integer and ensure at least +-1 for decisive results
    s32 change = (s32)(delta >= 0.0f ? delta + 0.5f : delta - 0.5f);

    // Clamp minimum change for first/last place to prevent zero-change
    if (finishingPosition <= 0 && change <= 0) {
        change = 1;
    }
    if ((u32)finishingPosition >= playerCount && change >= 0) {
        change = -1;
    }

    return change;
}

// @addr 0x80578580
void RankingSystem::applyVRChange(s32 change, VRContext context, u16 courseId, u8 position, u8 playerCount) {
    s32 previousVR = mCurrentVR;
    s32 newVR = clampVR(mCurrentVR + change);
    mCurrentVR = newVR;

    // Update peak and lowest
    if (mCurrentVR > mPeakVR) {
        mPeakVR = mCurrentVR;
    }
    if (mCurrentVR < mLowestVR) {
        mLowestVR = mCurrentVR;
    }

    // Record in history (ring buffer: overwrite oldest if full)
    if (mHistoryCount < MAX_HISTORY) {
        mHistory[mHistoryCount].timestamp = 0; // Caller should set real timestamp
        mHistory[mHistoryCount].previousVR = previousVR;
        mHistory[mHistoryCount].changeAmount = change;
        mHistory[mHistoryCount].newVR = newVR;
        mHistory[mHistoryCount].context = context;
        mHistory[mHistoryCount].courseId = courseId;
        mHistory[mHistoryCount].playerCount = playerCount;
        mHistory[mHistoryCount].finishingPosition = position;
        mHistoryCount++;
    } else {
        // Shift history left, dropping the oldest entry
        for (u32 i = 0; i < MAX_HISTORY - 1; i++) {
            mHistory[i] = mHistory[i + 1];
        }
        u32 last = MAX_HISTORY - 1;
        mHistory[last].timestamp = 0;
        mHistory[last].previousVR = previousVR;
        mHistory[last].changeAmount = change;
        mHistory[last].newVR = newVR;
        mHistory[last].context = context;
        mHistory[last].courseId = courseId;
        mHistory[last].playerCount = playerCount;
        mHistory[last].finishingPosition = position;
    }

    // Update race stats
    mTotalRaces++;
    if (position == 1 || position == 0) {
        mTotalWins++;
    } else {
        mTotalLosses++;
    }

    UNUSED(mLicense);
}

// @addr 0x80578880
const VRChangeRecord* RankingSystem::getHistoryEntry(u32 index) const {
    if (index >= mHistoryCount) {
        return nullptr;
    }
    return &mHistory[index];
}

// @addr 0x80578D80
VRTier RankingSystem::getTier(s32 vr) const {
    if (vr >= 9999) {
        return VR_TIER_THREE_STAR;
    }
    if (vr >= 9500) {
        return VR_TIER_STAR;
    }
    if (vr >= 8500) {
        return VR_TIER_PLATINUM;
    }
    if (vr >= 7000) {
        return VR_TIER_GOLD;
    }
    if (vr >= 5000) {
        return VR_TIER_SILVER;
    }
    return VR_TIER_BRONZE;
}

// @addr 0x80578EC0
const char* RankingSystem::getTierName(VRTier tier) const {
    switch (tier) {
    case VR_TIER_BRONZE:     return "Bronze";
    case VR_TIER_SILVER:     return "Silver";
    case VR_TIER_GOLD:       return "Gold";
    case VR_TIER_PLATINUM:   return "Platinum";
    case VR_TIER_STAR:       return "One Star";
    case VR_TIER_THREE_STAR: return "Three Star";
    default:                 return "Unknown";
    }
}

// @addr 0x80579000
s32 RankingSystem::getTierMinimumVR(VRTier tier) const {
    switch (tier) {
    case VR_TIER_BRONZE:     return 0;
    case VR_TIER_SILVER:     return 5000;
    case VR_TIER_GOLD:       return 7000;
    case VR_TIER_PLATINUM:   return 8500;
    case VR_TIER_STAR:       return 9500;
    case VR_TIER_THREE_STAR: return 9999;
    default:                 return 0;
    }
}

// @addr 0x80579140
MatchRating RankingSystem::calculateMatchRating(s32 currentVR, u32 playerCount, bool isOnline) {
    MatchRating result;
    result.vr = currentVR;

    // Match rating is the effective VR used for opponent search
    // Online uses a wider search band; offline is tighter
    s32 bandWidth = isOnline ? 1500 : 500;
    // Scale band by player count: more players = wider search
    if (playerCount > 4) {
        bandWidth = (bandWidth * 3) / 2;
    }
    result.matchRating = currentVR;
    result.winProbability = 0.5f; // Default: even match
    result.expectedScore = estimateWinProbability(currentVR, currentVR);

    UNUSED(bandWidth);
    return result;
}

// @addr 0x80579340
f32 RankingSystem::estimateWinProbability(s32 playerVR, s32 opponentVR) const {
    // Standard ELO probability: 1 / (1 + 10^((opp - player) / 400))
    f32 exponent = (f32)(opponentVR - playerVR) / 400.0f;
    // Approximate 10^x using e^(x * ln(10))
    // ln(10) ≈ 2.302585
    f32 power = exponent * 2.302585f;
    // Simple Taylor approximation for e^x (first 5 terms sufficient for our range)
    f32 expVal = 1.0f + power + (power * power) / 2.0f + (power * power * power) / 6.0f;
    f32 probability = 1.0f / (1.0f + expVal);

    // Clamp to [0.01, 0.99] to avoid extreme values
    if (probability < 0.01f) {
        probability = 0.01f;
    }
    if (probability > 0.99f) {
        probability = 0.99f;
    }

    return probability;
}

// @addr 0x80579500
void RankingSystem::updateLeaderboardEntry(const LeaderboardEntry& entry) {
    // Find existing entry by profileId
    for (u32 i = 0; i < mLeaderboardCount; i++) {
        if (mLeaderboard[i].profileId == entry.profileId) {
            mLeaderboard[i] = entry;
            return;
        }
    }
    // Not found — add new entry if space available
    if (mLeaderboardCount < MAX_LEADERBOARD) {
        mLeaderboard[mLeaderboardCount] = entry;
        mLeaderboardCount++;
    }
}

// @addr 0x80579680
const LeaderboardEntry* RankingSystem::getLeaderboardEntry(u32 index) const {
    if (index >= mLeaderboardCount) {
        return nullptr;
    }
    return &mLeaderboard[index];
}

// @addr 0x80579940
void RankingSystem::sortLeaderboard() {
    // Simple insertion sort by VR descending
    for (u32 i = 1; i < mLeaderboardCount; i++) {
        LeaderboardEntry temp = mLeaderboard[i];
        s32 j = (s32)i - 1;
        while (j >= 0 && mLeaderboard[j].vr < temp.vr) {
            mLeaderboard[j + 1] = mLeaderboard[j];
            j--;
        }
        mLeaderboard[j + 1] = temp;
    }
}

// @addr 0x80579D00
f32 RankingSystem::getWinRate() const {
    if (mTotalRaces == 0) {
        return 0.0f;
    }
    return (f32)mTotalWins / (f32)mTotalRaces;
}

// @addr 0x80579E40
void RankingSystem::resetVR(s32 newVR) {
    mCurrentVR = clampVR(newVR);
    mPeakVR = mCurrentVR;
    mLowestVR = mCurrentVR;
    mHistoryCount = 0;
    memset(mHistory, 0, sizeof(mHistory));
}

f32 RankingSystem::eloKFactor(VRContext context) const {
    switch (context) {
    case VR_CONTEXT_OFFLINE_RACE:  return 16.0f;
    case VR_CONTEXT_ONLINE_RACE:   return 32.0f;
    case VR_CONTEXT_TIME_TRIAL:    return 8.0f;
    case VR_CONTEXT_BATTLE:        return 24.0f;
    default:                       return 16.0f;
    }
}

s32 RankingSystem::clampVR(s32 vr) const {
    if (vr < 100) {
        return 100;
    }
    if (vr > 9999) {
        return 9999;
    }
    return vr;
}

} // namespace SaveData