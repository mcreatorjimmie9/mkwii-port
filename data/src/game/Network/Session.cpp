// ============================================================================
// Session.cpp — RKNet::Session Implementation
//
// Manages the full lifecycle of an online race session.
// ============================================================================

#include "Session.hpp"
#include <cstring>
#include <cstdio>

namespace RKNet {

// ============================================================================
// Static local player ID
// ============================================================================

static u32 sLocalPlayerId = 0xFFFFFFFF;

Session::Session()
    : mState(SESSION_IDLE)
    , mRaceFrame(0)
    , mPlayerCount(0)
    , mFinishCount(0)
    , mLocalPlayerIndex(0)
    , mLatencyMs(0) {
    memset(&mConfig, 0, sizeof(SessionConfig));
    memset(mPlayerStates, 0, sizeof(mPlayerStates));
    memset(mItemFrames, 0, sizeof(mItemFrames));
    memset(mItemCount, 0, sizeof(mItemCount));
    memset(mPlayerInfos, 0, sizeof(mPlayerInfos));
    memset(mRoomCode, 0, sizeof(mRoomCode));
}

Session::~Session() {
}

// ============================================================================
// init — Initialize network session
// ============================================================================

void Session::init() {
    mState = SESSION_IDLE;
    mRaceFrame = 0;
    mPlayerCount = 0;
    mFinishCount = 0;
    mLocalPlayerIndex = 0;
    mLatencyMs = 0;
    memset(&mConfig, 0, sizeof(SessionConfig));
    memset(mPlayerStates, 0, sizeof(mPlayerStates));
    memset(mItemFrames, 0, sizeof(mItemFrames));
    memset(mItemCount, 0, sizeof(mItemCount));
    memset(mPlayerInfos, 0, sizeof(mPlayerInfos));
    memset(mRoomCode, 0, sizeof(mRoomCode));
}

// ============================================================================
// create — Create a new room/session
// ============================================================================

s32 Session::create() {
    if (mState != SESSION_IDLE) return -1;

    // Generate a random 4-character room code
    // In the original game, the server assigns this
    const char chars[] = "ABCDEFGHJKLMNPQRSTUVWXYZ23456789";
    for (s32 i = 0; i < 4; i++) {
        mRoomCode[i] = chars[i % (sizeof(chars) - 1)];
    }
    mRoomCode[4] = '\0';

    // The local player is always the host (index 0)
    mLocalPlayerIndex = 0;
    mPlayerCount = 1;
    memset(&mPlayerInfos[0], 0, sizeof(PlayerInfo));
    mPlayerInfos[0].playerId = sLocalPlayerId;
    mPlayerInfos[0].isHost = 1;
    mPlayerInfos[0].isReady = 0;

    mState = SESSION_SETTING_UP;
    return 0;
}

// ============================================================================
// join — Join an existing room by room code
// ============================================================================

s32 Session::join(const char* roomCode) {
    if (mState != SESSION_IDLE) return -1;
    if (!roomCode) return -2;

    // Validate room code format (4 alphanumeric characters)
    for (s32 i = 0; i < 4; i++) {
        if (roomCode[i] == '\0') return -3; // Too short
    }

    // Copy the room code
    strncpy(mRoomCode, roomCode, 4);
    mRoomCode[4] = '\0';

    // The local player is not the host
    mLocalPlayerIndex = 0xFF; // Will be assigned by host
    mPlayerCount = 0;
    mState = SESSION_SETTING_UP;

    // In the original game, this would:
    // 1. Resolve the room code to a server address
    // 2. Send a join request via NWFC
    // 3. Wait for host acceptance
    // For now, this is a stub

    return 0;
}

// ============================================================================
// leave — Leave the current session gracefully
// ============================================================================

s32 Session::leave() {
    if (mState == SESSION_IDLE) return -1;

    // Notify other players of departure
    // In the original game, this sends a PACKET_PLAYER_LEAVE message

    // Clean up session state
    mState = SESSION_CLEANUP;

    // Give a brief cleanup period before going idle
    // The original game has a transition animation
    reset();
    return 0;
}

// ============================================================================
// update — Process network messages each frame
// ============================================================================

void Session::update() {
    switch (mState) {
        case SESSION_IDLE:
            // Nothing to do when idle
            break;

        case SESSION_SETTING_UP:
            // Waiting for all players to join and select
            // Check if all players have selected their character/vehicle
            // When ready, transition to countdown
            break;

        case SESSION_COUNTDOWN:
            // Countdown is handled by the race manager
            // When countdown reaches 0, startRace() is called
            break;

        case SESSION_RACING:
            // Process incoming race input packets
            // Process item events
            // Check for player disconnections
            // Check if all players have finished
            if (mFinishCount >= mPlayerCount && mPlayerCount > 0) {
                end();
            }
            break;

        case SESSION_FINISHED:
            // Brief pause before showing results
            break;

        case SESSION_RESULTS:
            // Waiting for all players to acknowledge results
            // After a timeout, return to room or next race
            break;

        case SESSION_CLEANUP:
            // Cleaning up session resources
            break;
    }

    // Update latency estimation
    // In the original game, this is based on heartbeat round-trip time
    // mLatencyMs is updated when heartbeat ACK is received
}

// ============================================================================
// sendChat — Send a chat message
// ============================================================================

s32 Session::sendChat(const char* message) {
    if (!message) return -1;
    if (mState == SESSION_IDLE) return -2;

    // Validate message length
    u32 len = 0;
    while (message[len] != '\0' && len < 64) len++;
    if (len == 0) return -3;

    // In the original game, chat is sent via the NWFC protocol
    // as a PACKET_ROOM_INFO or custom chat packet
    // Message is broadcast to all players in the room

    return 0;
}

// ============================================================================
// getPlayerList — Get connected player info
// ============================================================================

u8 Session::getPlayerList(PlayerInfo* outPlayers) const {
    if (!outPlayers) return 0;

    u8 count = 0;
    for (u8 i = 0; i < mPlayerCount && i < 12; i++) {
        if (!mPlayerStates[i].isDisconnected) {
            outPlayers[count] = mPlayerInfos[i];
            count++;
        }
    }
    return count;
}

// ============================================================================
// setReady — Set local player ready state
// ============================================================================

void Session::setReady(bool ready) {
    if (mLocalPlayerIndex < mPlayerCount) {
        mPlayerInfos[mLocalPlayerIndex].isReady = ready ? 1 : 0;
    }
}

// ============================================================================
// areAllReady — Check if all connected players are ready
// ============================================================================

bool Session::areAllReady() const {
    if (mPlayerCount == 0) return false;

    for (u8 i = 0; i < mPlayerCount; i++) {
        if (mPlayerStates[i].isDisconnected) continue;
        if (!mPlayerInfos[i].isReady) {
            return false;
        }
    }
    return true;
}

// ============================================================================
// kickPlayer — Kick a player (host only)
// ============================================================================

s32 Session::kickPlayer(u32 playerId) {
    if (!isHost()) return -1; // Only host can kick
    if (mState == SESSION_RACING) return -2; // Can't kick during race

    // Find the player by ID
    for (u8 i = 0; i < mPlayerCount; i++) {
        if (mPlayerInfos[i].playerId == playerId) {
            // Mark as disconnected
            mPlayerStates[i].isDisconnected = 1;
            mPlayerStates[i].finishPosition = 0;

            // Send kick notification to the player
            // In the original game, this sends a PACKET_PLAYER_LEAVE

            return 0;
        }
    }

    return -3; // Player not found
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

// ============================================================================
// Session_getLocalPlayerId — Get the local player's unique ID
// ============================================================================

u32 Session_getLocalPlayerId() {
    return sLocalPlayerId;
}

} // namespace RKNet