// ============================================================================
// Session.cpp — RKNet::Session Implementation
//
// Manages the full lifecycle of an online race session.
// ============================================================================

#include "Session.hpp"
#include <cstring>

namespace RKNet {

Session::Session()
    : mState(SESSION_IDLE)
    , mRaceFrame(0)
    , mPlayerCount(0)
    , mFinishCount(0)
{
    memset(&mConfig, 0, sizeof(SessionConfig));
    memset(mPlayerStates, 0, sizeof(mPlayerStates));
    memset(mItemFrames, 0, sizeof(mItemFrames));
    memset(mItemCount, 0, sizeof(mItemCount));
    memset(_pad, 0, sizeof(_pad));
}

Session::~Session() {
}

s32 Session::begin(const SessionConfig& config, u8 playerCount) {
    if (mState != SESSION_IDLE) return -1;
    if (playerCount == 0 || playerCount > 12) return -2;

    mConfig = config;
    mPlayerCount = playerCount;
    mFinishCount = 0;
    mRaceFrame = 0;
    mState = SESSION_SETTING_UP;

    // Initialize all player states
    for (u8 i = 0; i < mPlayerCount; i++) {
        memset(&mPlayerStates[i], 0, sizeof(PlayerRaceState));
        mPlayerStates[i].finishPosition = 0;
        mPlayerStates[i].isFinished = 0;
        mPlayerStates[i].isDisconnected = 0;
        mPlayerStates[i].lastFrameReceived = 0;
    }

    return 0;
}

s32 Session::end() {
    if (mState != SESSION_RACING && mState != SESSION_FINISHED) return -1;
    computeResults();
    mState = SESSION_RESULTS;
    return 0;
}

void Session::reset() {
    mState = SESSION_IDLE;
    mRaceFrame = 0;
    mFinishCount = 0;
    memset(mPlayerStates, 0, sizeof(mPlayerStates));
    memset(mItemFrames, 0, sizeof(mItemFrames));
    memset(mItemCount, 0, sizeof(mItemCount));
}

// @addr 0x805565b0
s32 Session::validateMatchSettings(int settingsId, int courseId) const {
    (void)settingsId;
    (void)courseId;
    // Original validates settings ID is within valid range and
    // course ID matches the session config
    if (courseId < 0 || courseId > 0x40) return -1;
    return 0;
}

// @addr 0x805565f0
s32 Session::validatePlayerSettings(int settingsId, int playerId) const {
    (void)settingsId;
    if (playerId < 0 || playerId >= (int)mPlayerCount) return -1;
    // Check the player's session data matches expected settings
    return 0;
}

void Session::startRace() {
    if (mState == SESSION_SETTING_UP || mState == SESSION_COUNTDOWN) {
        mState = SESSION_RACING;
        mRaceFrame = 0;
    }
}

void Session::advanceFrame() {
    if (mState == SESSION_RACING) {
        mRaceFrame++;
    }
}

// --- Race Input ---

// @addr 0x805585fc
s32 Session::sendRaceInput(u8 playerIndex, u32 inputFrame, u16 inputData) {
    (void)playerIndex;
    (void)inputFrame;
    (void)inputData;
    // In original: writes to RKNet send buffer indexed by frame
    // Format: [type_byte | (frame >> 3)] [inputData] [1=active]
    if (playerIndex >= mPlayerCount) return -1;
    return 0;
}

// @addr 0x80558718
u32 Session::receiveRaceInput(u8 playerIndex, u32 inputFrame) {
    if (playerIndex >= mPlayerCount) return 0;
    (void)inputFrame;
    // Returns the input data word for the given player at the given frame
    return 0;
}

// @addr 0x80558ab8
u32 Session::getLatestInputFrame(u8 playerIndex) const {
    if (playerIndex >= mPlayerCount) return 0;
    return mPlayerStates[playerIndex].lastFrameReceived;
}

// @addr 0x80558ac4
s32 Session::getInputFrameDelta(u8 playerIndex, u32 inputFrame, u32 reference) const {
    if (playerIndex >= mPlayerCount) return 0;
    (void)inputFrame;
    (void)reference;
    return 0;
}

// @addr 0x805589a8
s32 Session::validateRaceInput(u8 playerIndex, u32 inputFrame) const {
    (void)playerIndex;
    (void)inputFrame;
    // Validates the input frame is within expected window
    return 0;
}

// --- Item Synchronization ---

// @addr 0x80558c24
u32 Session::sendItemEvent(u8 playerIndex, u32 itemId, u32 frame) {
    if (playerIndex >= mPlayerCount) return 0;
    if (mItemCount[playerIndex] < 16) {
        mItemFrames[playerIndex][mItemCount[playerIndex]] = frame;
        mItemCount[playerIndex]++;
    }
    return 0;
}

// @addr 0x80558ccc
s32 Session::processItemEvent(u8 playerIndex, u32 frame) {
    if (playerIndex >= mPlayerCount) return -1;
    (void)frame;
    return 0;
}

// @addr 0x80558d5c
u32 Session::validateItemState(u8 playerIndex, u32 itemId, u32 frame) const {
    (void)playerIndex;
    (void)itemId;
    (void)frame;
    return 0;
}

// @addr 0x80558e64
u32 Session::getItemFrame(u8 playerIndex, u32 itemId) const {
    if (playerIndex >= mPlayerCount) return 0;
    if (itemId >= 16) return 0;
    return mItemFrames[playerIndex][itemId];
}

// --- Position Synchronization ---

// @addr 0x80558fa8
void Session::syncPlayerPositions(u32 localFrame, u32 remoteFrame) {
    (void)localFrame;
    (void)remoteFrame;
    // Interpolates all player positions between local and remote frames
}

// @addr 0x805591b0
void Session::syncPlayerRotation(u32 localFrame, u32 remoteFrame, u32 remoteFrame2) {
    (void)localFrame;
    (void)remoteFrame;
    (void)remoteFrame2;
}

// @addr 0x80559214
u32 Session::validatePositionData(u8 playerIndex, u32 frame) const {
    if (playerIndex >= mPlayerCount) return 0;
    (void)frame;
    return 0;
}

// @addr 0x805593a0
u32 Session::getInterpolatedPosition(u8 playerIndex) const {
    if (playerIndex >= mPlayerCount) return 0;
    return mPlayerStates[playerIndex].positionX;
}

// --- Race State ---

// @addr 0x80557d54
u32 Session::getRaceProgress() const {
    if (mPlayerCount == 0) return 0;
    // Progress = finishCount / playerCount
    return (u32)mFinishCount * 100 / mPlayerCount;
}

// @addr 0x80557df8
u32 Session::validateRaceState(u32 frame, u32 expected, u8 player) const {
    (void)frame;
    (void)expected;
    (void)player;
    return 0;
}

// @addr 0x80557f2c
u32 Session::compareRaceState(u32 frame, u32 state1, u32 state2) const {
    (void)frame;
    (void)state1;
    (void)state2;
    return 0;
}

// --- Results ---

// @addr 0x8055946c
u8 Session::getPlayerFinishPosition(u8 playerIndex) const {
    if (playerIndex >= mPlayerCount) return 0;
    return mPlayerStates[playerIndex].finishPosition;
}

// @addr 0x80559488
void Session::submitRaceResult(u8 playerIndex, u32 finishTime) {
    if (playerIndex >= mPlayerCount) return;
    if (mPlayerStates[playerIndex].isFinished) return;

    mPlayerStates[playerIndex].finishTime = finishTime;
    mPlayerStates[playerIndex].isFinished = 1;
    mFinishCount++;

    // Assign position based on finish order
    mPlayerStates[playerIndex].finishPosition = mFinishCount;
}

// @addr 0x80559c98
void Session::computeResults() {
    // Sort all finished players by finish time to determine final positions
    // Already handled by submitRaceResult for now
    for (u8 i = 0; i < mPlayerCount; i++) {
        if (!mPlayerStates[i].isFinished && !mPlayerStates[i].isDisconnected) {
            // DNF — assign position after all finishers
            mPlayerStates[i].finishPosition = mFinishCount + 1;
            mPlayerStates[i].isFinished = 1;
        }
    }
}

const PlayerRaceState* Session::getPlayerState(u8 playerIndex) const {
    if (playerIndex >= mPlayerCount) return nullptr;
    return &mPlayerStates[playerIndex];
}

PlayerRaceState* Session::getPlayerStateMutable(u8 playerIndex) {
    if (playerIndex >= mPlayerCount) return nullptr;
    return &mPlayerStates[playerIndex];
}

} // namespace RKNet