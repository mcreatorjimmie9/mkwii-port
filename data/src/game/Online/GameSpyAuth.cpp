// GameSpyAuth.cpp - GameSpy authentication and profile management implementation
// Address range: 0x80630000 - 0x80635000

#include "GameSpyAuth.hpp"
#include <string.h>

namespace Online {

GameSpyAuth* GameSpyAuth::sInstance = nullptr;

// @addr 0x80630060
GameSpyAuth::GameSpyAuth() {
    memset(mServerAddr, 0, sizeof(mServerAddr));
    mServerPort = 0;
    mConnectTimer = 0;
    mRetryCount = 0;
    memset(&mLocalProfile, 0, sizeof(mLocalProfile));
    memset(&mAuthChallenge, 0, sizeof(mAuthChallenge));
    memset(mBuddies, 0, sizeof(mBuddies));
    mBuddyCount = 0;
    memset(mPeers, 0, sizeof(mPeers));
    mPeerCount = 0;
    memset(mCachedProfiles, 0, sizeof(mCachedProfiles));
    mCachedProfileCount = 0;
    mState = GS_AUTH_DISCONNECTED;
    mErrorCode = 0;
    mSessionId = 0;
}

// @addr 0x80630140
GameSpyAuth::~GameSpyAuth() {
    disconnect();
}

// @addr 0x80630160
GameSpyAuth* GameSpyAuth::getInstance() {
    return sInstance;
}

// @addr 0x80630170
void GameSpyAuth::createInstance() {
    if (sInstance == nullptr) {
        sInstance = new GameSpyAuth();
    }
}

// @addr 0x80630190
void GameSpyAuth::destroyInstance() {
    if (sInstance != nullptr) {
        delete sInstance;
        sInstance = nullptr;
    }
}

// @addr 0x80630000
u32 GameSpyAuth::connect(const char* serverAddr, u16 port) {
    if (mState != GS_AUTH_DISCONNECTED && mState != GS_AUTH_ERROR) {
        return 1; // Already connected or in progress
    }
    strncpy(mServerAddr, serverAddr, ARRAY_COUNT(mServerAddr) - 1);
    mServerAddr[ARRAY_COUNT(mServerAddr) - 1] = '\0';
    mServerPort = port;
    mConnectTimer = 0;
    mRetryCount = 0;
    mState = GS_AUTH_CONNECTING;
    mErrorCode = 0;
    return 0;
}

// @addr 0x806301A0
void GameSpyAuth::disconnect() {
    if (mState == GS_AUTH_DISCONNECTED) {
        return;
    }
    // Disconnect all peer connections
    for (s32 i = 0; i < mPeerCount; i++) {
        mPeers[i].isConnected = 0;
    }
    mPeerCount = 0;
    // Mark all buddies offline
    for (s32 i = 0; i < mBuddyCount; i++) {
        if (mBuddies[i].status != GS_BUDDY_BLOCKED) {
            mBuddies[i].status = GS_BUDDY_OFFLINE;
            mBuddies[i].isInSameRoom = 0;
        }
    }
    mState = GS_AUTH_DISCONNECTED;
    mSessionId = 0;
    mConnectTimer = 0;
}

// @addr 0x80630340
u32 GameSpyAuth::login(const char* nickname, const char* password, u32 profileId) {
    if (mState != GS_AUTH_CONNECTING) {
        mErrorCode = 1;
        return 1;
    }
    // Transition to challenging state
    mState = GS_AUTH_CHALLENGING;
    // Store profile info locally
    strncpy(mLocalProfile.nickname, nickname, ARRAY_COUNT(mLocalProfile.nickname) - 1);
    mLocalProfile.nickname[ARRAY_COUNT(mLocalProfile.nickname) - 1] = '\0';
    mLocalProfile.profileId = profileId;
    mLocalProfile.status = GS_PROFILE_PENDING;
    // Password is used to generate challenge response (omitted for brevity)
    UNUSED(password);
    // Transition through the login state machine
    // CHALLENGING -> LOGGING_IN
    mState = GS_AUTH_LOGGING_IN;
    // On success: LOGGING_IN -> LOGGED_IN
    mLocalProfile.status = GS_PROFILE_ONLINE;
    mState = GS_AUTH_LOGGED_IN;
    mErrorCode = 0;
    return 0;
}

// @addr 0x80630500
u32 GameSpyAuth::createProfile(const char* nickname, const char* email) {
    if (mState != GS_AUTH_CONNECTING) {
        mErrorCode = 2;
        return 2;
    }
    strncpy(mLocalProfile.nickname, nickname, ARRAY_COUNT(mLocalProfile.nickname) - 1);
    mLocalProfile.nickname[ARRAY_COUNT(mLocalProfile.nickname) - 1] = '\0';
    mLocalProfile.profileId = 0;
    mLocalProfile.status = GS_PROFILE_PENDING;
    // Email is stored server-side (omitted for brevity)
    UNUSED(email);
    mState = GS_AUTH_LOGGING_IN;
    // Simulate profile creation success
    mLocalProfile.status = GS_PROFILE_ONLINE;
    mState = GS_AUTH_LOGGED_IN;
    mErrorCode = 0;
    return 0;
}

// @addr 0x80630680
u32 GameSpyAuth::updateProfile(const GSProfile& profile) {
    if (mState != GS_AUTH_LOGGED_IN) {
        mErrorCode = 3;
        return 3;
    }
    mLocalProfile = profile;
    mLocalProfile.status = GS_PROFILE_ONLINE;
    return 0;
}

// @addr 0x80630800
u32 GameSpyAuth::addBuddy(u32 profileId) {
    if (mState != GS_AUTH_LOGGED_IN) {
        return 4;
    }
    if (mBuddyCount >= (s32)MAX_BUDDIES) {
        mErrorCode = 5;
        return 5; // Buddy list full
    }
    // Check for duplicates
    if (findBuddyIndex(profileId) >= 0) {
        return 0; // Already a buddy
    }
    GSBuddyEntry& entry = mBuddies[mBuddyCount];
    memset(&entry, 0, sizeof(GSBuddyEntry));
    entry.profileId = profileId;
    entry.status = GS_BUDDY_OFFLINE;
    entry.isInSameRoom = 0;
    mBuddyCount++;
    return 0;
}

// @addr 0x80630920
u32 GameSpyAuth::removeBuddy(u32 profileId) {
    if (mState != GS_AUTH_LOGGED_IN) {
        return 4;
    }
    s32 idx = findBuddyIndex(profileId);
    if (idx < 0) {
        mErrorCode = 6;
        return 6; // Not found
    }
    // Shift remaining entries down
    for (s32 i = idx; i < mBuddyCount - 1; i++) {
        mBuddies[i] = mBuddies[i + 1];
    }
    mBuddyCount--;
    memset(&mBuddies[mBuddyCount], 0, sizeof(GSBuddyEntry));
    return 0;
}

// @addr 0x80630A40
u32 GameSpyAuth::blockPlayer(u32 profileId) {
    if (mState != GS_AUTH_LOGGED_IN) {
        return 4;
    }
    s32 idx = findBuddyIndex(profileId);
    if (idx >= 0) {
        // Update existing buddy entry to blocked
        mBuddies[idx].status = GS_BUDDY_BLOCKED;
        mBuddies[idx].isInSameRoom = 0;
    } else if (mBuddyCount < (s32)MAX_BUDDIES) {
        // Add new blocked entry
        GSBuddyEntry& entry = mBuddies[mBuddyCount];
        memset(&entry, 0, sizeof(GSBuddyEntry));
        entry.profileId = profileId;
        entry.status = GS_BUDDY_BLOCKED;
        mBuddyCount++;
    } else {
        mErrorCode = 5;
        return 5;
    }
    return 0;
}

// @addr 0x80630B60
GSBuddyEntry* GameSpyAuth::findBuddy(u32 profileId) {
    s32 idx = findBuddyIndex(profileId);
    if (idx < 0) {
        return nullptr;
    }
    return &mBuddies[idx];
}

// @addr 0x80630C80
const GSBuddyEntry* GameSpyAuth::getBuddy(s32 index) const {
    if (index < 0 || index >= mBuddyCount) {
        return nullptr;
    }
    return &mBuddies[index];
}

// @addr 0x80630D80
u32 GameSpyAuth::connectToPeer(u32 profileId, u32 addr, u16 port) {
    if (mState != GS_AUTH_LOGGED_IN) {
        return 4;
    }
    // Check if already connected to this peer
    for (s32 i = 0; i < mPeerCount; i++) {
        if (mPeers[i].profileId == profileId && mPeers[i].isConnected) {
            return 0; // Already connected
        }
    }
    if (mPeerCount >= (s32)MAX_PEERS) {
        mErrorCode = 7;
        return 7; // Max peers reached
    }
    GSPeerInfo& peer = mPeers[mPeerCount];
    memset(&peer, 0, sizeof(GSPeerInfo));
    peer.profileId = profileId;
    peer.remoteAddr = addr;
    peer.remotePort = port;
    peer.isConnected = 1;
    peer.connectionType = 0; // Direct
    peer.connectionId = mPeerCount + 1;
    mPeerCount++;
    return 0;
}

// @addr 0x80630F00
void GameSpyAuth::disconnectPeer(u32 profileId) {
    for (s32 i = 0; i < mPeerCount; i++) {
        if (mPeers[i].profileId == profileId) {
            mPeers[i].isConnected = 0;
            // Shift remaining entries down
            for (s32 j = i; j < mPeerCount - 1; j++) {
                mPeers[j] = mPeers[j + 1];
            }
            mPeerCount--;
            memset(&mPeers[mPeerCount], 0, sizeof(GSPeerInfo));
            return;
        }
    }
}

// @addr 0x80631040
GSPeerInfo* GameSpyAuth::getPeerInfo(u32 profileId) {
    for (s32 i = 0; i < mPeerCount; i++) {
        if (mPeers[i].profileId == profileId) {
            return &mPeers[i];
        }
    }
    return nullptr;
}

s32 GameSpyAuth::getConnectedPeerCount() const {
    s32 count = 0;
    for (s32 i = 0; i < mPeerCount; i++) {
        if (mPeers[i].isConnected) {
            count++;
        }
    }
    return count;
}

// @addr 0x80631180
u32 GameSpyAuth::requestProfile(u32 profileId) {
    if (mState != GS_AUTH_LOGGED_IN) {
        return 4;
    }
    // Check if already cached
    if (findCachedProfileIndex(profileId) >= 0) {
        return 0;
    }
    if (mCachedProfileCount >= MAX_CACHED_PROFILES) {
        // Evict oldest entry (index 0)
        for (u32 i = 0; i < mCachedProfileCount - 1; i++) {
            mCachedProfiles[i] = mCachedProfiles[i + 1];
        }
        mCachedProfileCount--;
    }
    // Insert placeholder profile
    GSProfile& prof = mCachedProfiles[mCachedProfileCount];
    memset(&prof, 0, sizeof(GSProfile));
    prof.profileId = profileId;
    prof.status = GS_PROFILE_PENDING;
    mCachedProfileCount++;
    return 0;
}

// @addr 0x806312C0
const GSProfile* GameSpyAuth::getCachedProfile(u32 profileId) const {
    s32 idx = findCachedProfileIndex(profileId);
    if (idx < 0) {
        return nullptr;
    }
    return &mCachedProfiles[idx];
}

// @addr 0x80631400
void GameSpyAuth::update(f32 deltaTime) {
    UNUSED(deltaTime);
    if (mState == GS_AUTH_CONNECTING) {
        mConnectTimer++;
        if (mConnectTimer > 300) { // ~5 second timeout at 60fps
            mRetryCount++;
            if (mRetryCount > 3) {
                mState = GS_AUTH_ERROR;
                mErrorCode = 8; // Connection timeout
            } else {
                mConnectTimer = 0;
            }
        }
    } else if (mState == GS_AUTH_CHALLENGING) {
        mConnectTimer++;
        if (mConnectTimer > 180) { // ~3 second timeout
            mState = GS_AUTH_ERROR;
            mErrorCode = 9; // Challenge timeout
        }
    } else if (mState == GS_AUTH_LOGGING_IN) {
        mConnectTimer++;
        if (mConnectTimer > 180) {
            mState = GS_AUTH_ERROR;
            mErrorCode = 10; // Login timeout
        }
    } else if (mState == GS_AUTH_LOGGING_OUT) {
        mConnectTimer++;
        if (mConnectTimer > 60) {
            mState = GS_AUTH_DISCONNECTED;
            mSessionId = 0;
        }
    }
}

// @addr 0x80631540
void GameSpyAuth::processMessages() {
    if (mState != GS_AUTH_LOGGED_IN) {
        return;
    }
    // Simulate incoming message processing.
    // In the real implementation this would read from the GP socket
    // and dispatch based on message type (buddy status updates, etc.)
}

// @addr 0x80631680
u32 GameSpyAuth::buildGPMessage(GPMessageType type, void* buffer, u32 bufferSize) {
    if (buffer == nullptr || bufferSize < 8) {
        return 0;
    }
    u8* buf = static_cast<u8*>(buffer);
    // GP message header: type (1 byte), flags (1 byte), length (2 bytes BE),
    // session ID (4 bytes BE)
    buf[0] = static_cast<u8>(type);
    buf[1] = 0; // flags
    buf[2] = 0; // length high
    buf[3] = 8; // length low (header only)
    buf[4] = static_cast<u8>((mSessionId >> 24) & 0xFF);
    buf[5] = static_cast<u8>((mSessionId >> 16) & 0xFF);
    buf[6] = static_cast<u8>((mSessionId >> 8) & 0xFF);
    buf[7] = static_cast<u8>(mSessionId & 0xFF);
    return 8;
}

// @addr 0x80631800
u32 GameSpyAuth::parseGPMessage(const void* buffer, u32 size, GPMessageType& outType) {
    if (buffer == nullptr || size < 8) {
        return 1; // Invalid message
    }
    const u8* buf = static_cast<const u8*>(buffer);
    u8 rawType = buf[0];
    // Validate message type range
    if (rawType > GP_MSG_PCONNECT_RESP) {
        return 2; // Unknown message type
    }
    outType = static_cast<GPMessageType>(rawType);
    // Extract session ID from bytes 4-7
    u32 msgSessionId = (static_cast<u32>(buf[4]) << 24) |
                       (static_cast<u32>(buf[5]) << 16) |
                       (static_cast<u32>(buf[6]) << 8)  |
                       (static_cast<u32>(buf[7]));
    if (msgSessionId != mSessionId) {
        return 3; // Session mismatch
    }
    return 0;
}

// Internal: linear search for buddy by profile ID
s32 GameSpyAuth::findBuddyIndex(u32 profileId) const {
    for (s32 i = 0; i < mBuddyCount; i++) {
        if (mBuddies[i].profileId == profileId) {
            return i;
        }
    }
    return -1;
}

// Internal: linear search for cached profile by profile ID
s32 GameSpyAuth::findCachedProfileIndex(u32 profileId) const {
    for (u32 i = 0; i < mCachedProfileCount; i++) {
        if (mCachedProfiles[i].profileId == profileId) {
            return static_cast<s32>(i);
        }
    }
    return -1;
}

// Internal: process authentication challenge
void GameSpyAuth::processChallenge(const GSAuthChallenge& challenge) {
    mAuthChallenge = challenge;
    // In real implementation: compute response hash from challenge token + password
}

// Internal: update a buddy's online status
void GameSpyAuth::updateBuddyStatus(u32 profileId, GSBuddyStatus status) {
    s32 idx = findBuddyIndex(profileId);
    if (idx >= 0) {
        mBuddies[idx].status = status;
        if (status == GS_BUDDY_IN_GAME) {
            mBuddies[idx].isInSameRoom = 0;
        }
    }
}

} // namespace Online