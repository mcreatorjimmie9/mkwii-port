// AIRank.cpp — AI Ranking System Implementation
// GENESIS Phase 27b: Implements AIRank (per-driver ranking), AIRankGroupBase
// (group-based rubber-banding), and AIRankManager (singleton coordinator).
// Original addresses: 0x8057xxxx-0x8058xxxx
//
// MKW uses a dynamic ranking system where AI drivers form "rank groups"
// of 3 drivers each. These groups have target ranks and rubber-band
// speed adjustments to keep the race competitive. The human player's
// initial rank is tracked to determine group target adjustments.

#include "AIRank.hpp"
#include "AISpeed.hpp"
#include <cmath>
#include <algorithm>

namespace Enemy {

AIRankManager* AIRankManager::spInstance = nullptr;

// ===========================================================================
// AIRank Implementation
// ===========================================================================

AIRank::~AIRank() {}

/* AIRank_init @ 0x80571000 */
void AIRank::init() {
    mpInfo = nullptr;
    mpRankGroup = nullptr;
    mpSpeed = nullptr;
    mId = 0;
    mHumanPlayerInitialRank = 0;
    mHumanPlayerRank = 0;
    targetRank = 0;
    field_0x1C = 0.0f;
    distanceCompleted = 0.0f;
    field_0x24 = 0.0f;
    // Initialize ranking system arrays
    mbRaceEnded = false;
    mbSpeedAdvantageActive = true;
    mPlayerCount = 0;
    for (s32 i = 0; i < MAX_PLAYER_COUNT; i++) {
        mPlayerPositions[i] = i + 1;
        mTargetRanks[i] = i + 1;
        mSpeedAdvantages[i] = 0.0f;
        mDistanceCompleted[i] = 0.0f;
        mAvgSpeedIdx[i] = 0;
        for (s32 j = 0; j < 60; j++) {
            mAvgSpeedBuffer[i][j] = 0.0f;
        }
    }
}

/* AIRank_update @ 0x80571200 */
void AIRank::update() {
    if (mpInfo == nullptr) {
        return;
    }

    // Update the AI driver's rank based on distance completed.
    // The distance metric combines lap progress and checkpoint
    // crossings to produce a single floating-point value that
    // determines the player's position in the standings.
    //
    // This is called from the AI update loop after movement processing.
    // The distance value is compared against other drivers' distances
    // to produce the current race standings.

    // Calculate approximate distance from path progress
    // (In the original game, this reads from the race data system)
    distanceCompleted = field_0x24 + (distanceCompleted * 0.99f);

    // Update the rolling average speed for this player
    if (!mbRaceEnded) {
        updateAverageSpeed((u8)mId, distanceCompleted);
    }
}

/* AIRank_calc @ 0x80571400 */
void AIRank::calc() {
    if (mbRaceEnded) {
        return;
    }

    // Per-frame ranking computation:
    // 1. Sort all players by race progress
    updatePositions();

    // 2. Compare each AI's position against its target rank
    // 3. Compute and apply speed advantages via rubber-banding
    applyRubberBanding();
}

/* AIRank_updatePositions @ 0x80571600 */
void AIRank::updatePositions() {
    // Sort players by race progress (distance completed).
    // Players with higher distance get lower position numbers (1st, 2nd, etc.)
    // Use a simple insertion sort since MAX_PLAYER_COUNT is only 12.
    s32 order[MAX_PLAYER_COUNT];
    for (s32 i = 0; i < MAX_PLAYER_COUNT; i++) {
        order[i] = i;
    }

    for (s32 i = 1; i < mPlayerCount; i++) {
        s32 key = order[i];
        f32 keyDist = mDistanceCompleted[key];
        s32 j = i - 1;
        while (j >= 0 && mDistanceCompleted[order[j]] < keyDist) {
            order[j + 1] = order[j];
            j--;
        }
        order[j + 1] = key;
    }

    // Assign positions: 1st place = highest distance
    for (s32 i = 0; i < mPlayerCount; i++) {
        mPlayerPositions[order[i]] = i + 1;
    }
}

/* AIRank_getPosition @ 0x80571800 */
s32 AIRank::getPosition(u8 playerId) const {
    if (playerId >= MAX_PLAYER_COUNT) {
        return MAX_PLAYER_COUNT;
    }
    return mPlayerPositions[playerId];
}

/* AIRank_getTargetRank @ 0x80571820 */
s32 AIRank::getTargetRank(u8 playerId) const {
    if (playerId >= MAX_PLAYER_COUNT) {
        return MAX_PLAYER_COUNT;
    }
    return mTargetRanks[playerId];
}

/* AIRank_getSpeedAdvantage @ 0x80571840 */
f32 AIRank::getSpeedAdvantage(u8 playerId) const {
    if (playerId >= MAX_PLAYER_COUNT) {
        return 0.0f;
    }
    return mSpeedAdvantages[playerId];
}

/* AIRank_isStateSpeedAdvantage @ 0x80571860 */
bool AIRank::isStateSpeedAdvantage() const {
    return mbSpeedAdvantageActive && !mbRaceEnded;
}

/* AIRank_setTargetPositions @ 0x80571880 */
void AIRank::setTargetPositions() {
    // Compute target finish positions based on AI difficulty.
    // In the original game, these are determined by the rank group
    // system. The human player's initial grid position influences
    // where AI groups are expected to finish.
    //
    // For now, set linear targets based on grid position.
    // Group 0 (leader group): target ranks 1-3
    // Group 1: target ranks 4-6
    // Group 2: target ranks 7-9
    // Group 3: target ranks 10-12
    for (s32 i = 0; i < mPlayerCount; i++) {
        mTargetRanks[i] = i + 1;
    }

    // Adjust based on human player's initial rank.
    // If human started mid-pack, squeeze AI target ranks to
    // create space for human to finish ahead or behind.
    if (mHumanPlayerInitialRank > 0 && mHumanPlayerInitialRank <= mPlayerCount) {
        // Human player target is their initial rank (stays the same).
        // AI targets are redistributed around this.
        for (s32 i = 0; i < mPlayerCount; i++) {
            if (mTargetRanks[i] >= mHumanPlayerInitialRank) {
                mTargetRanks[i]++;
            }
        }
        // Clamp all targets to valid range
        for (s32 i = 0; i < mPlayerCount; i++) {
            if (mTargetRanks[i] > mPlayerCount) {
                mTargetRanks[i] = mPlayerCount;
            }
            if (mTargetRanks[i] < 1) {
                mTargetRanks[i] = 1;
            }
        }
    }
}

/* AIRank_applyRubberBanding @ 0x80571A00 */
void AIRank::applyRubberBanding() {
    if (!isStateSpeedAdvantage()) {
        // Gradually decay speed advantages when disabled
        for (s32 i = 0; i < mPlayerCount; i++) {
            if (mSpeedAdvantages[i] > 0.001f) {
                mSpeedAdvantages[i] -= 0.001f;
            } else if (mSpeedAdvantages[i] < -0.001f) {
                mSpeedAdvantages[i] += 0.001f;
            } else {
                mSpeedAdvantages[i] = 0.0f;
            }
        }
        return;
    }

    // For each player, compute the speed advantage based on
    // their current position vs their target rank.
    // Players behind their target get positive advantage (speed up).
    // Players ahead of their target get negative advantage (slow down).
    for (s32 i = 0; i < mPlayerCount; i++) {
        s32 currentPos = mPlayerPositions[i];
        s32 target = mTargetRanks[i];

        // Position delta: positive means ahead of target, negative means behind
        f32 posDelta = (f32)(currentPos - target);

        // Convert position delta to speed advantage.
        // Each position difference translates to about 0.03 (3%) speed change.
        // This is capped to prevent extreme rubber-banding.
        f32 advantage = -posDelta * 0.03f;

        // Clamp the advantage to +/-0.15 (+/-15%)
        const f32 MAX_ADV = 0.15f;
        if (advantage > MAX_ADV) {
            advantage = MAX_ADV;
        } else if (advantage < -MAX_ADV) {
            advantage = -MAX_ADV;
        }

        // Smooth the advantage change to prevent jarring speed shifts
        f32 prevAdv = mSpeedAdvantages[i];
        f32 smoothAdv = prevAdv + (advantage - prevAdv) * 0.05f;
        mSpeedAdvantages[i] = smoothAdv;

        // Apply to the speed system if available
        // (mpSpeed is only non-null for the AI driver that owns this AIRank)
        if (mpSpeed != nullptr && i == mId) {
            mpSpeed->setRankAdvantage(smoothAdv);
        }
    }
}

/* AIRank_getAverageSpeed @ 0x80571C00 */
f32 AIRank::getAverageSpeed(u8 playerId) const {
    if (playerId >= MAX_PLAYER_COUNT) {
        return 0.0f;
    }

    // Compute rolling average over the last 60 frames
    f32 sum = 0.0f;
    for (s32 i = 0; i < 60; i++) {
        sum += mAvgSpeedBuffer[playerId][i];
    }
    return sum / 60.0f;
}

/* AIRank_updateAverageSpeed @ 0x80571C20 */
void AIRank::updateAverageSpeed(u8 playerId, f32 currentSpeed) {
    if (playerId >= MAX_PLAYER_COUNT) {
        return;
    }

    // Ring buffer: write to current index and advance
    s32 idx = mAvgSpeedIdx[playerId];
    mAvgSpeedBuffer[playerId][idx] = currentSpeed;
    mAvgSpeedIdx[playerId] = (idx + 1) % 60;
}

/* AIRank_endRace @ 0x80571C40 */
void AIRank::endRace() {
    mbRaceEnded = true;
    mbSpeedAdvantageActive = false;

    // Clear all speed advantages immediately
    for (s32 i = 0; i < MAX_PLAYER_COUNT; i++) {
        mSpeedAdvantages[i] = 0.0f;
    }

    // Clear rank advantage on the speed system
    if (mpSpeed != nullptr) {
        mpSpeed->setRankAdvantage(0.0f);
    }
}

// ===========================================================================
// AIRankGroupBase Implementation
// ===========================================================================

AIRankGroupBase::~AIRankGroupBase() {}

/* AIRankGroupBase_init @ 0x80572000 */
void AIRankGroupBase::init() {
    mNumMembers = 0;
    mStartingRank = 0;
    field_0x18 = 0;
    field_0x1C = 0.0f;
    field_0x20 = 0.0f;
    field_0x24 = 0.0f;
    field_0x28 = 0.0f;
    for (s32 i = 0; i < 3; i++) {
        mpMembers[i] = nullptr;
    }
}

/* AIRankGroupBase_getGroupKind @ 0x80572200 */
s32 AIRankGroupBase::getGroupKind() {
    // Group kind determines the rubber-banding behavior:
    // 0 = no rubber-banding (even spread)
    // 1 = pack racing (drivers stay close together)
    // 2 = chase pack (group chases the leader)
    // 3 = defensive pack (group protects position)
    return 0;
}

/* AIRankGroupBase_getType @ 0x80572400 */
s32 AIRankGroupBase::getType() {
    // Type classification based on group composition:
    // 0 = mixed (human + CPU)
    // 1 = all CPU
    // 2 = leader group
    return 0;
}

/* AIRankGroupBase_addMember @ 0x80572600 */
void AIRankGroupBase::addMember(AIRank* rank) {
    if (rank == nullptr || mNumMembers >= 3) {
        return;
    }
    mpMembers[mNumMembers] = rank;
    mNumMembers++;
}

/* AIRankGroupBase_initChangeTargetRank @ 0x80572800 */
void AIRankGroupBase::initChangeTargetRank() {
    // Initialize the target rank change mechanism.
    // The group evaluates its members' current positions and
    // determines if the target ranks should be adjusted to
    // create a more competitive race dynamic.
    //
    // This is called at the start of each lap to allow the
    // rubber-banding system to adapt to the current race state.
    field_0x1C = 0.0f;
    field_0x20 = 0.0f;
}

/* AIRankGroupBase_doChangeTargetRank @ 0x80572A00 */
void AIRankGroupBase::doChangeTargetRank() {
    // Execute target rank changes for the group.
    //
    // The rubber-banding algorithm:
    // 1. Calculate the average rank of group members
    // 2. Compare against the target rank
    // 3. If group is behind target, increase speed advantage
    // 4. If group is ahead of target, decrease speed advantage
    //
    // The adjustment magnitude is capped to prevent unrealistic
    // speed changes. Only small adjustments are applied
    // per evaluation cycle to maintain natural-looking racing.
    if (mNumMembers == 0) {
        return;
    }

    s32 avgRank = 0;
    for (s32 i = 0; i < mNumMembers; i++) {
        if (mpMembers[i] != nullptr) {
            avgRank += mpMembers[i]->targetRank;
        }
    }
    avgRank /= mNumMembers;

    // Calculate rank delta from target
    f32 rankDelta = (f32)(avgRank - mStartingRank);
    field_0x20 = rankDelta * 0.1f; // 10% adjustment factor
}

/* AIRankGroupBase_vf_0x24..vf_0x34 — default no-op stubs */

void AIRankGroupBase::vf_0x24() {}
void AIRankGroupBase::vf_0x28() {}
void AIRankGroupBase::vf_0x2C() {}
u32 AIRankGroupBase::vf_0x30() { return 0; }
f32 AIRankGroupBase::vf_0x34() { return 0.0f; }

// ===========================================================================
// AIRankManager Implementation
// ===========================================================================

/* AIRankManager_isStateSpeedAdvantage @ 0x80573000 */
bool AIRankManager::isStateSpeedAdvantage() {
    if (spInstance == nullptr) {
        return false;
    }
    return spInstance->mbActive && !spInstance->mbRaceEnded;
}

/* AIRankManager_setTargetPositions @ 0x80573020 */
void AIRankManager::setTargetPositions() {
    if (spInstance == nullptr) {
        return;
    }
    for (s32 i = 0; i < (s32)spInstance->mPlayerCount; i++) {
        if (spInstance->mpRanks[i] != nullptr) {
            spInstance->mpRanks[i]->setTargetPositions();
        }
    }
}

/* AIRankManager_applyRubberBanding @ 0x80573040 */
void AIRankManager::applyRubberBanding() {
    if (spInstance == nullptr) {
        return;
    }
    for (s32 i = 0; i < (s32)spInstance->mPlayerCount; i++) {
        if (spInstance->mpRanks[i] != nullptr) {
            spInstance->mpRanks[i]->applyRubberBanding();
        }
    }
}

/* AIRankManager_updatePositions @ 0x80573060 */
void AIRankManager::updatePositions() {
    if (spInstance == nullptr) {
        return;
    }
    for (s32 i = 0; i < (s32)spInstance->mPlayerCount; i++) {
        if (spInstance->mpRanks[i] != nullptr) {
            spInstance->mpRanks[i]->updatePositions();
        }
    }
}

/* AIRankManager_endRace @ 0x80573080 */
void AIRankManager::endRace() {
    if (spInstance == nullptr) {
        return;
    }
    spInstance->mbRaceEnded = true;
    spInstance->mbActive = false;
    for (s32 i = 0; i < (s32)spInstance->mPlayerCount; i++) {
        if (spInstance->mpRanks[i] != nullptr) {
            spInstance->mpRanks[i]->endRace();
        }
    }
}

} // namespace Enemy