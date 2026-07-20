// DWCMatchmaker.cpp - Nintendo Wi-Fi Connection matchmaking state machine
// Address range: 0x80625EC0 - 0x80630000
// DOL range:    0x8022D090 - 0x80242658

#include "DWCMatchmaker.hpp"

namespace Online {

DWCMatchmaker* DWCMatchmaker::sInstance = nullptr;

// @addr 0x80625E80
DWCMatchmaker::DWCMatchmaker()
    : mState(DWC_MATCH_IDLE), mPreviousState(DWC_MATCH_IDLE)
    , mConnected(false), mNATNegotiating(false), mErrorCode(0)
    , mAuthTimer(0), mCurrentRoomId(0), mIsHost(0)
    , mSearchResultCount(0), mRetryTimer(0.0f), mConnectTimer(0.0f)
    , mRetryCount(0), mMaxRetries(3), mServerAddr(0), mServerPort(0) {
    for (u32 i = 0; i < MAX_SEARCH_RESULTS; i++)
        mSearchResults[i].roomId = 0;
    for (u32 i = 0; i < MAX_PLAYER_SLOTS; i++) {
        mPlayerSlots[i].playerId = 0;
        mPlayerSlots[i].slotIndex = static_cast<u8>(i);
        mPlayerSlots[i].isConnected = 0;
        mPlayerSlots[i].isReady = 0;
        mPlayerSlots[i].isHost = 0;
    }
    mAuthResult.resultCode = 0;
    mAuthResult.sessionId = 0;
    mAuthResult.profileId = 0;
    mAuthResult.success = 0;
}

// @addr 0x80625F60
DWCMatchmaker::~DWCMatchmaker() { disconnect(); }

// @addr 0x80625F80
DWCMatchmaker* DWCMatchmaker::getInstance() { return sInstance; }

// @addr 0x80625FA0
void DWCMatchmaker::createInstance() {
    if (sInstance == nullptr)
        sInstance = new DWCMatchmaker();
}

// @addr 0x80625FC0
void DWCMatchmaker::destroyInstance() {
    if (sInstance != nullptr) { delete sInstance; sInstance = nullptr; }
}

// @addr 0x80625EC0
u32 DWCMatchmaker::authenticate(const char* friendCode, u32 profileId) {
    if (mState != DWC_MATCH_IDLE && mState != DWC_MATCH_ERROR) {
        handleError(0x80010001); return mErrorCode; }
    if (friendCode == nullptr) {
        handleError(0x80010002); return mErrorCode; }
    mAuthResult.resultCode = 0;
    mAuthResult.sessionId = 0;
    mAuthResult.profileId = profileId;
    mAuthResult.success = 0;
    mAuthTimer = 60;
    mRetryCount = 0;
    transitionState(DWC_MATCH_AUTHENTICATING);
    UNUSED(friendCode);
    return 0;
}

// @addr 0x80626040
DWCAuthResult DWCMatchmaker::getAuthResult() const { return mAuthResult; }

// @addr 0x806261C0
u32 DWCMatchmaker::searchRooms(const DWCSearchCriteria& criteria) {
    if (!mConnected) { handleError(0x80010003); return mErrorCode; }
    if (mState != DWC_MATCH_IDLE && mState != DWC_MATCH_ERROR) {
        handleError(0x80010001); return mErrorCode; }
    mSearchCriteria = criteria;
    mSearchResultCount = 0;
    clearSearchResults();
    mRetryCount = 0;
    mConnectTimer = 90;
    transitionState(DWC_MATCH_SEARCHING);
    return 0;
}

// @addr 0x80626380
s32 DWCMatchmaker::getSearchResultCount() const { return mSearchResultCount; }

// @addr 0x80626440
const DWCRoomInfo* DWCMatchmaker::getSearchResult(s32 index) const {
    if (index < 0 || index >= mSearchResultCount) return nullptr;
    return &mSearchResults[index];
}

// @addr 0x80626500
void DWCMatchmaker::clearSearchResults() {
    for (u32 i = 0; i < MAX_SEARCH_RESULTS; i++) {
        mSearchResults[i].roomId = 0;
        mSearchResults[i].playerCount = 0;
        mSearchResults[i].maxPlayers = 0;
    }
    mSearchResultCount = 0;
}

// @addr 0x806265C0
u32 DWCMatchmaker::createRoom(u16 maxPlayers, u8 roomType, const char* password) {
    if (!mConnected) { handleError(0x80010003); return mErrorCode; }
    if (maxPlayers == 0 || maxPlayers > MAX_PLAYER_COUNT) {
        handleError(0x80010004); return mErrorCode; }
    if (mState != DWC_MATCH_IDLE && mState != DWC_MATCH_ERROR) {
        handleError(0x80010001); return mErrorCode; }
    UNUSED(password); UNUSED(roomType);
    mCurrentRoomId = 0x10000001;
    mIsHost = 1;
    for (u32 i = 0; i < MAX_PLAYER_SLOTS; i++) {
        mPlayerSlots[i].playerId = 0;
        mPlayerSlots[i].isConnected = 0;
        mPlayerSlots[i].isReady = 0;
    }
    mConnectTimer = 120;
    transitionState(DWC_MATCH_CONNECTING);
    return 0;
}

// @addr 0x80626740
u32 DWCMatchmaker::joinRoom(u32 roomId, const char* password) {
    if (!mConnected) { handleError(0x80010003); return mErrorCode; }
    if (roomId == 0) { handleError(0x80010005); return mErrorCode; }
    if (mState != DWC_MATCH_IDLE && mState != DWC_MATCH_ERROR) {
        handleError(0x80010001); return mErrorCode; }
    UNUSED(password);
    mCurrentRoomId = roomId;
    mIsHost = 0;
    mConnectTimer = 150;
    transitionState(DWC_MATCH_ROOM_JOINING);
    return 0;
}

// @addr 0x806268C0
u32 DWCMatchmaker::leaveRoom() {
    if (mState == DWC_MATCH_IDLE || mState == DWC_MATCH_DISCONNECTING) return 0;
    mCurrentRoomId = 0;
    mIsHost = 0;
    for (u32 i = 0; i < MAX_PLAYER_SLOTS; i++) {
        mPlayerSlots[i].playerId = 0;
        mPlayerSlots[i].isConnected = 0;
        mPlayerSlots[i].isReady = 0;
    }
    transitionState(DWC_MATCH_DISCONNECTING);
    return 0;
}

// @addr 0x80626A40
u32 DWCMatchmaker::connectToServer(DWCServerType serverType) {
    if (mConnected) return 0;
    switch (serverType) {
    case DWC_SERVER_DLS:     mServerAddr = 0x0A000001; mServerPort = 443;   break;
    case DWC_SERVER_NAS:     mServerAddr = 0x0A000002; mServerPort = 443;   break;
    case DWC_SERVER_GAMESPY: mServerAddr = 0x0A000003; mServerPort = 29900; break;
    case DWC_SERVER_NWC24:   mServerAddr = 0x0A000004; mServerPort = 3074;  break;
    default: handleError(0x80010006); return mErrorCode;
    }
    mConnectTimer = 180;
    mRetryCount = 0;
    transitionState(DWC_MATCH_CONNECTING);
    return 0;
}

// @addr 0x80626BC0
void DWCMatchmaker::disconnect() {
    if (!mConnected) return;
    mConnected = false;
    mNATNegotiating = false;
    mServerAddr = 0;
    mServerPort = 0;
    mCurrentRoomId = 0;
    mSearchResultCount = 0;
    transitionState(DWC_MATCH_IDLE);
}

// @addr 0x80626D40
void DWCMatchmaker::updatePlayerSlot(s32 slotIndex, const DWCPlayerSlot& slot) {
    if (slotIndex < 0 || slotIndex >= static_cast<s32>(MAX_PLAYER_SLOTS)) return;
    mPlayerSlots[slotIndex] = slot;
    mPlayerSlots[slotIndex].slotIndex = static_cast<u8>(slotIndex);
}

// @addr 0x80626E80
const DWCPlayerSlot* DWCMatchmaker::getPlayerSlot(s32 slotIndex) const {
    if (slotIndex < 0 || slotIndex >= static_cast<s32>(MAX_PLAYER_SLOTS)) return nullptr;
    return &mPlayerSlots[slotIndex];
}

s32 DWCMatchmaker::getConnectedPlayerCount() const {
    s32 count = 0;
    for (u32 i = 0; i < MAX_PLAYER_SLOTS; i++)
        if (mPlayerSlots[i].isConnected) count++;
    return count;
}

// @addr 0x80626FC0
u32 DWCMatchmaker::beginNATNegotiation(u32 targetPlayerId) {
    if (!mConnected) { handleError(0x80010003); return mErrorCode; }
    if (mNATNegotiating) { handleError(0x80010007); return mErrorCode; }
    UNUSED(targetPlayerId);
    mNATNegotiating = true;
    mConnectTimer = 240;
    transitionState(DWC_MATCH_NEGOTIATING);
    return 0;
}

// @addr 0x80627100
void DWCMatchmaker::update(f32 deltaTime) { processState(deltaTime); }

void DWCMatchmaker::processState(f32 deltaTime) {
    switch (mState) {
    case DWC_MATCH_AUTHENTICATING:
        if (mAuthTimer > 0 && --mAuthTimer == 0) {
            mAuthResult.success = 1;
            mAuthResult.sessionId = 0xDEADBEEF;
            mConnected = true;
            transitionState(DWC_MATCH_IDLE);
        }
        break;
    case DWC_MATCH_SEARCHING:
        if (mConnectTimer > 0) {
            mConnectTimer -= deltaTime;
            if (mConnectTimer <= 0.0f) {
                mSearchResultCount = 3;
                DWCRoomInfo fake[] = {
                    {0x10000001, 1, 4, 12, 1, 0, 0, 3, 0, 100},
                    {0x10000002, 2, 8, 12, 1, 0, 1, 5, 0, 101},
                    {0x10000003, 3, 11, 12, 2, 1, 0, 12, 1, 102},
                };
                for (s32 i = 0; i < mSearchResultCount; i++)
                    mSearchResults[i] = fake[i];
                transitionState(DWC_MATCH_IDLE);
            }
        }
        break;
    case DWC_MATCH_CONNECTING:
        if (mConnectTimer > 0) {
            mConnectTimer -= deltaTime;
            if (mConnectTimer <= 0.0f) { mConnected = true; transitionState(DWC_MATCH_WAITING); }
        }
        break;
    case DWC_MATCH_ROOM_JOINING:
        if (mConnectTimer > 0) {
            mConnectTimer -= deltaTime;
            if (mConnectTimer <= 0.0f) {
                mNATNegotiating = true; mConnectTimer = 120; transitionState(DWC_MATCH_NEGOTIATING);
            }
        }
        break;
    case DWC_MATCH_NEGOTIATING:
        if (mConnectTimer > 0) {
            mConnectTimer -= deltaTime;
            if (mConnectTimer <= 0.0f) { mNATNegotiating = false; transitionState(DWC_MATCH_WAITING); }
        }
        break;
    case DWC_MATCH_WAITING:
        if (getConnectedPlayerCount() >= 2) transitionState(DWC_MATCH_PLAYING);
        break;
    case DWC_MATCH_DISCONNECTING:
        mRetryTimer -= deltaTime;
        if (mRetryTimer <= 0.0f) transitionState(DWC_MATCH_IDLE);
        break;
    case DWC_MATCH_CANCELLED:
        transitionState(DWC_MATCH_IDLE);
        break;
    default: break;
    }
    if (mState == DWC_MATCH_ERROR && mRetryTimer > 0.0f) {
        mRetryTimer -= deltaTime;
        if (mRetryTimer <= 0.0f) retryLastOperation();
    }
}

void DWCMatchmaker::transitionState(DWCMatchState newState) {
    mPreviousState = mState; mState = newState;
}

void DWCMatchmaker::handleError(u32 errorCode) {
    mErrorCode = errorCode; mRetryTimer = 3.0f; transitionState(DWC_MATCH_ERROR);
}

// @addr 0x80627240
const char* DWCMatchmaker::getErrorString() const {
    switch (mErrorCode) {
    case 0x80010001: return "DWC_ERR_WRONG_STATE";
    case 0x80010002: return "DWC_ERR_INVALID_PARAM";
    case 0x80010003: return "DWC_ERR_NOT_CONNECTED";
    case 0x80010004: return "DWC_ERR_INVALID_ROOM_SIZE";
    case 0x80010005: return "DWC_ERR_INVALID_ROOM_ID";
    case 0x80010006: return "DWC_ERR_UNKNOWN_SERVER";
    case 0x80010007: return "DWC_ERR_NAT_IN_PROGRESS";
    case 0x80010008: return "DWC_ERR_AUTH_FAILED";
    case 0x80010009: return "DWC_ERR_TIMEOUT";
    case 0x8001000A: return "DWC_ERR_SERVER_FULL";
    case 0x8001000B: return "DWC_ERR_ROOM_CLOSED";
    case 0x8001000C: return "DWC_ERR_KICKED";
    default:         return "DWC_ERR_UNKNOWN";
    }
}

// @addr 0x80627380
void DWCMatchmaker::retryLastOperation() {
    if (mState != DWC_MATCH_ERROR || mRetryCount >= mMaxRetries) return;
    mRetryCount++;
    u32 savedError = mErrorCode;
    mErrorCode = 0;
    switch (mPreviousState) {
    case DWC_MATCH_AUTHENTICATING: mAuthTimer = 60; transitionState(DWC_MATCH_AUTHENTICATING); break;
    case DWC_MATCH_SEARCHING:      mConnectTimer = 90; transitionState(DWC_MATCH_SEARCHING); break;
    case DWC_MATCH_CONNECTING:     mConnectTimer = 120; transitionState(DWC_MATCH_CONNECTING); break;
    case DWC_MATCH_ROOM_JOINING:   mConnectTimer = 150; transitionState(DWC_MATCH_ROOM_JOINING); break;
    case DWC_MATCH_NEGOTIATING:    mNATNegotiating = true; mConnectTimer = 240; transitionState(DWC_MATCH_NEGOTIATING); break;
    default: handleError(savedError); break;
    }
}

// @addr 0x806274C0
void DWCMatchmaker::cancelSearch() {
    if (mState == DWC_MATCH_SEARCHING) { mSearchResultCount = 0; transitionState(DWC_MATCH_CANCELLED); }
}

// ============================================================================
// init() — Reset the matchmaker to initial state
// @addr 0x80625E80
// ============================================================================

void DWCMatchmaker::init() {
    mState = DWC_MATCH_IDLE;
    mPreviousState = DWC_MATCH_IDLE;
    mConnected = false;
    mNATNegotiating = false;
    mErrorCode = 0;
    mAuthTimer = 0;
    mCurrentRoomId = 0;
    mIsHost = 0;
    mSearchResultCount = 0;
    mRetryTimer = 0.0f;
    mConnectTimer = 0.0f;
    mRetryCount = 0;
    mMaxRetries = 3;
    mServerAddr = 0;
    mServerPort = 0;

    mAuthResult.resultCode = 0;
    mAuthResult.sessionId = 0;
    mAuthResult.profileId = 0;
    mAuthResult.success = 0;

    for (u32 i = 0; i < MAX_SEARCH_RESULTS; i++) {
        mSearchResults[i].roomId = 0;
        mSearchResults[i].playerCount = 0;
        mSearchResults[i].maxPlayers = 0;
    }

    for (u32 i = 0; i < MAX_PLAYER_SLOTS; i++) {
        mPlayerSlots[i].playerId = 0;
        mPlayerSlots[i].slotIndex = static_cast<u8>(i);
        mPlayerSlots[i].isConnected = 0;
        mPlayerSlots[i].isReady = 0;
        mPlayerSlots[i].isHost = 0;
    }
}

// ============================================================================
// searchMatch() — Simplified match search (uses searchRooms internally)
// @addr 0x80627520
//
// Convenience function that creates default criteria and starts a search.
// ============================================================================

u32 DWCMatchmaker::searchMatch() {
    DWCSearchCriteria criteria;
    memset(&criteria, 0, sizeof(criteria));
    criteria.region = 0;          // Any region
    criteria.playerCountRangeMin = 0;
    criteria.playerCountRangeMax = MAX_PLAYER_COUNT;
    criteria.roomType = 0;         // Any type
    criteria.gameMode = 0;         // Any mode
    criteria.requiresPassword = 0; // No password required
    criteria.sortBy = 0;           // Default sort
    criteria.maxResults = MAX_SEARCH_RESULTS;

    return searchRooms(criteria);
}

// ============================================================================
// getPlayerList() — Get the array of player slots in the current room
// @addr 0x806274E0
// ============================================================================

const DWCPlayerSlot* DWCMatchmaker::getPlayerList() const {
    return mPlayerSlots;
}

// ============================================================================
// getPlayerListCount() — Get the number of players in the current room
// @addr 0x80627500
// ============================================================================

s32 DWCMatchmaker::getPlayerListCount() const {
    return getConnectedPlayerCount();
}

// ============================================================================
// DWCMatchmaker_getServerStatus() — Free function for server status check
// @addr 0x80627600
//
// Returns a status code indicating the DWC server availability:
//   0 = server available
//   1 = server maintenance
//   2 = server offline
//   3 = network error
// ============================================================================

u32 DWCMatchmaker_getServerStatus() {
    // NWFC servers are no longer operational
    return 2; // Server offline
}

} // namespace Online