#pragma once
// GameSpyAuth.hpp - GameSpy authentication and profile management
// Manages GameSpy login, buddy list, peer connections, and profile data
// Address range: 0x80630000 - 0x80635000

#include "rk_common.h"

namespace Online {

// GameSpy authentication states
enum GSAuthState {
    GS_AUTH_DISCONNECTED = 0,
    GS_AUTH_CONNECTING = 1,
    GS_AUTH_CHALLENGING = 2,
    GS_AUTH_LOGGING_IN = 3,
    GS_AUTH_LOGGED_IN = 4,
    GS_AUTH_LOGGING_OUT = 5,
    GS_AUTH_ERROR = 6,
};

// GameSpy connection profiles
enum GSProfileStatus {
    GS_PROFILE_LOCAL = 0,
    GS_PROFILE_ONLINE = 1,
    GS_PROFILE_PENDING = 2,
};

// Buddy status
enum GSBuddyStatus {
    GS_BUDDY_OFFLINE = 0,
    GS_BUDDY_ONLINE = 1,
    GS_BUDDY_IN_GAME = 2,
    GS_BUDDY_AWAY = 3,
    GS_BUDDY_BLOCKED = 4,
};

// GP message types
enum GPMessageType {
    GP_MSG_LOGIN = 0,
    GP_MSG_LOGIN_RESP = 1,
    GP_MSG_NEWUSER = 2,
    GP_MSG_NEWUSER_RESP = 3,
    GP_MSG_UPDATEUI = 4,
    GP_MSG_BUDDY_REQUEST = 5,
    GP_MSG_BUDDY_STATUS = 6,
    GP_MSG_GET_PROFILE = 7,
    GP_MSG_PROFILE_RESP = 8,
    GP_MSG_PCONNECT = 9,
    GP_MSG_PCONNECT_RESP = 10,
};

// Buddy entry
struct GSBuddyEntry {
    u32 profileId;
    char nickname[32];
    GSBuddyStatus status;
    u8 isInSameRoom;
    u8 _pad[3];
};

// Player profile data
struct GSProfile {
    u32 profileId;
    char nickname[32];
    u8 status;
    u8 _pad1[3];
    u32 lastOnlineTime;
    u32 totalRaces;
    u32 totalWins;
    u32 winStreak;
    u32 vrRating;
    u32 _pad2;
};

// Peer connection info
struct GSPeerInfo {
    u32 profileId;
    u32 remoteAddr;
    u16 remotePort;
    u8 isConnected;
    u8 connectionType;    // 0=direct, 1=NAT, 2=relay
    u8 _pad[2];
    u32 connectionId;
};

// Authentication challenge/response
struct GSAuthChallenge {
    u8 challengeToken[16];
    u32 nonce;
    u32 timestamp;
};

class GameSpyAuth {
public:
    GameSpyAuth();
    ~GameSpyAuth();

    // Singleton
    static GameSpyAuth* getInstance();
    static void createInstance();
    static void destroyInstance();

    // --- Connection ---
    // @addr 0x80630000
    u32 connect(const char* serverAddr, u16 port);
    // @addr 0x806301A0
    void disconnect();
    bool isConnected() const { return mState == GS_AUTH_LOGGED_IN; }

    // --- Authentication ---
    // @addr 0x80630340
    u32 login(const char* nickname, const char* password, u32 profileId);
    // @addr 0x80630500
    u32 createProfile(const char* nickname, const char* email);
    // @addr 0x80630680
    u32 updateProfile(const GSProfile& profile);

    // --- Buddy management ---
    // @addr 0x80630800
    u32 addBuddy(u32 profileId);
    // @addr 0x80630920
    u32 removeBuddy(u32 profileId);
    // @addr 0x80630A40
    u32 blockPlayer(u32 profileId);
    // @addr 0x80630B60
    GSBuddyEntry* findBuddy(u32 profileId);
    // @addr 0x80630C80
    s32 getBuddyCount() const { return mBuddyCount; }
    const GSBuddyEntry* getBuddy(s32 index) const;

    // --- Peer connections ---
    // @addr 0x80630D80
    u32 connectToPeer(u32 profileId, u32 addr, u16 port);
    // @addr 0x80630F00
    void disconnectPeer(u32 profileId);
    // @addr 0x80631040
    GSPeerInfo* getPeerInfo(u32 profileId);
    s32 getConnectedPeerCount() const;

    // --- Profile queries ---
    // @addr 0x80631180
    u32 requestProfile(u32 profileId);
    // @addr 0x806312C0
    const GSProfile* getCachedProfile(u32 profileId) const;

    // --- State ---
    GSAuthState getState() const { return mState; }
    u32 getErrorCode() const { return mErrorCode; }

    // --- Update ---
    // @addr 0x80631400
    void update(f32 deltaTime);
    // @addr 0x80631540
    void processMessages();

    // --- Session ---
    u32 getSessionId() const { return mSessionId; }
    const char* getNickname() const { return mLocalProfile.nickname; }

    // --- Message construction ---
    // @addr 0x80631680
    u32 buildGPMessage(GPMessageType type, void* buffer, u32 bufferSize);
    // @addr 0x80631800
    u32 parseGPMessage(const void* buffer, u32 size, GPMessageType& outType);

private:
    static GameSpyAuth* sInstance;
    static const u32 MAX_BUDDIES = 100;
    static const u32 MAX_PEERS = 12;
    static const u32 MAX_CACHED_PROFILES = 50;

    // State
    GSAuthState mState;
    u32 mErrorCode;
    u32 mSessionId;

    // Server connection
    char mServerAddr[64];
    u16 mServerPort;
    u32 mConnectTimer;
    u32 mRetryCount;

    // Local profile
    GSProfile mLocalProfile;
    GSAuthChallenge mAuthChallenge;

    // Buddy list
    GSBuddyEntry mBuddies[MAX_BUDDIES];
    s32 mBuddyCount;

    // Peer connections
    GSPeerInfo mPeers[MAX_PEERS];
    s32 mPeerCount;

    // Cached profiles
    GSProfile mCachedProfiles[MAX_CACHED_PROFILES];
    u32 mCachedProfileCount;

    // Internal helpers
    void processChallenge(const GSAuthChallenge& challenge);
    void updateBuddyStatus(u32 profileId, GSBuddyStatus status);
    s32 findBuddyIndex(u32 profileId) const;
    s32 findCachedProfileIndex(u32 profileId) const;
};

} // namespace Online