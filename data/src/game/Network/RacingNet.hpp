#pragma once
// ============================================================================
// RacingNet.hpp — Online Race Session Manager
//
// High-level facade for NWFC-based online racing. Manages the lifecycle:
//   Login -> Friend List -> Room Create/Join -> Character Select ->
//   Course Vote -> Countdown -> Race -> Results -> Next Race / Disconnect
//
// Delegates to:
//   - RKNetConnectionManager for connection/transport
//   - PacketHandler for serialization
//   - NW4R::Net / NET::Socket for low-level I/O
//
// Categorization: GENESIS Phase 5 (Network Module)
// ============================================================================

#include "rk_common.h"
#include "NetworkTypes.hpp"

class RKNetConnectionManager;
class PacketHandler;

// ============================================================================
// Room — Online Room State
// ============================================================================

class Room {
public:
    enum State {
        ROOM_IDLE,
        ROOM_CREATING,
        ROOM_JOINING,
        ROOM_LOBBY,
        ROOM_CHARACTER_SELECT,
        ROOM_COURSE_VOTE,
        ROOM_COUNTDOWN,
        ROOM_RACING,
        ROOM_RESULTS,
        ROOM_DISBANDING,
    };

    Room();
    ~Room();

    // Room lifecycle
    u32 create(u16 maxPlayers, const char* roomName);
    u32 join(u32 roomId);
    u32 leave();
    void kickPlayer(u8 playerId);

    // Room info
    u32 getRoomId() const { return mRoomId; }
    State getState() const { return mState; }
    u8 getPlayerCount() const { return mPlayerCount; }
    u8 getMaxPlayers() const { return mMaxPlayers; }
    bool isHost() const { return mIsHost; }
    u8 getHostPlayerId() const { return mHostPlayerId; }

    // Room events
    void onPlayerJoined(u8 playerId);
    void onPlayerLeft(u8 playerId);
    void onHostChanged(u8 newHostId);

    // State transitions (used by RacingNet)
    void setState(State newState) { mState = newState; }

private:
    u32  mRoomId;
    State mState;
    u8   mPlayerCount;
    u8   mMaxPlayers;
    u8   mHostPlayerId;
    bool mIsHost;
    u32  mPlayerList[NET_MAX_PLAYERS];
    char mRoomName[0x20];
};

// ============================================================================
// Matchmaking — NWFC Match Finder
// ============================================================================

class Matchmaking {
public:
    enum Mode {
        MATCH_FRIENDS,      // Friends-only room
        MATCH_REGIONAL,     // Regional matchmaking
        MATCH_WORLDWIDE,    // Worldwide matchmaking
        MATCH_VS_RIVALS,    // Rival matchmaking
    };

    enum State {
        MATCH_IDLE,
        MATCH_SEARCHING,
        MATCH_FOUND,
        MATCH_CONNECTING,
        MATCH_FAILED,
        MATCH_CANCELLED,
    };

    Matchmaking();
    ~Matchmaking();

    u32 startSearch(Mode mode, u32 settingsMask);
    u32 cancelSearch();
    u32 acceptMatch();

    State getState() const { return mState; }
    u32 getMatchId() const { return mMatchId; }
    u32 getPlayerCount() const { return mPlayerCount; }

    void onUpdate(); // called each frame during search

private:
    State mState;
    Mode  mMode;
    u32   mMatchId;
    u32   mSettingsMask;
    u32   mPlayerCount;
    u32   mSearchTimer;
};

// ============================================================================
// RacingNet — Top-Level Online Facade
// ============================================================================

class RacingNet {
public:
    enum OnlineState {
        OFFLINE,
        CONNECTING_NWFC,
        CONNECTED_NWFC,
        IN_LOBBY,
        IN_ROOM,
        IN_RACE,
    };

    RacingNet();
    ~RacingNet();

    // --- Init / Connect / Disconnect ---
    // @addr 0x805A0000
    void init();
    // @addr 0x805A0020
    u32 connect(const FriendCode& fc);
    // @addr 0x805A0040
    u32 disconnect();

    // --- NWFC Login / Logout ---
    // @addr referenced in EGG::Network stubs (0x805a0000+)
    u32 login(const FriendCode& fc);
    u32 logout();

    // --- Friend Management ---
    u32 refreshFriendList();
    u32 getFriendCount();
    const FriendCode* getFriendCode(u32 index);

    // --- Room Operations ---
    u32 createRoom(u16 maxPlayers, const char* name);
    u32 joinRoom(u32 roomId);
    u32 leaveRoom();

    // --- Matchmaking ---
    u32 startMatchmaking(Matchmaking::Mode mode);
    u32 cancelMatchmaking();

    // --- Race Flow ---
    void onCharacterSelectComplete();
    void onCourseVoteComplete(u8 selectedCourse);
    void onCountdownComplete();
    void onRaceFrame();
    void onRaceComplete();

    // --- Race Data ---
    // @addr 0x805A0100
    u32 sendRaceData(const void* data, u32 size);
    // @addr 0x805A0120
    u32 recvRaceData(void* outBuffer, u32 maxSize, u32* outSize);
    // @addr 0x805A0140
    u32 broadcastPosition(f32 x, f32 y, f32 z, u16 itemId);

    // --- Network info ---
    // @addr 0x805A0160
    u32 getPeerCount() const;
    // @addr 0x805A0180
    u32 getLatency(u32 peerIndex) const;
    // @addr 0x805A01A0
    bool isConnected() const;
    // @addr 0x805A01C0
    u32 ping(u32 peerIndex);

    // --- State Queries ---
    OnlineState getOnlineState() const { return mState; }
    Room& getRoom() { return mRoom; }
    Matchmaking& getMatchmaking() { return mMatchmaking; }
    RKNetConnectionManager* getConnectionManager() { return mConnMgr; }
    PacketHandler* getPacketHandler() { return mPacketHandler; }

    // --- Update (called each frame) ---
    void update();

private:
    OnlineState          mState;
    FriendCode           mMyFriendCode;
    Room                 mRoom;
    Matchmaking          mMatchmaking;
    RKNetConnectionManager* mConnMgr;
    PacketHandler*       mPacketHandler;
    // Frame counter
    u32  mFrameCounter;
    u32  mPeerCount;
    u32  mLatencies[NET_MAX_PLAYERS];
};

// --- Free function ---
// @addr 0x805A01E0
RacingNet::OnlineState RacingNet_getInstanceState();

// ============================================================================
// FriendList — Friend Roster Manager
// ============================================================================

class FriendList {
public:
    FriendList();
    ~FriendList();

    // Max friends on Wii was 100, MKWii may use fewer
    static const u32 MAX_FRIENDS = 100;

    u32 load();  // Load from Wii Save
    u32 save();  // Save to Wii Save

    u32 getCount() const { return mCount; }
    bool isOnline(u32 index) const;
    bool isOnline(const FriendCode& fc) const;

    const FriendCode& getFriendCode(u32 index) const { return mEntries[index].code; }
    const char* getFriendName(u32 index) const { return mEntries[index].name; }

    u32 findFriend(const FriendCode& fc) const;

    void addFriend(const FriendCode& fc, const char* name);
    void removeFriend(u32 index);
    void updateOnlineStatus(u32 index, bool online);

private:
    struct Entry {
        FriendCode code;
        char name[0x10];
        bool isOnline;
        u8  _pad[0x03];
    };

    u32   mCount;
    Entry mEntries[MAX_FRIENDS];
};