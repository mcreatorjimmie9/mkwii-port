#pragma once
// DWCMatchmaker.hpp - Nintendo Wi-Fi Connection matchmaking state machine
// Manages DWC authentication, server connection, room search, and match joining
// Address range: 0x80625EC0 - 0x80630000

#include "rk_common.h"

namespace Online {

// DWC matchmaking states
enum DWCMatchState {
    DWC_MATCH_IDLE = 0,
    DWC_MATCH_AUTHENTICATING = 1,
    DWC_MATCH_SEARCHING = 2,
    DWC_MATCH_CONNECTING = 3,
    DWC_MATCH_ROOM_JOINING = 4,
    DWC_MATCH_NEGOTIATING = 5,
    DWC_MATCH_WAITING = 6,
    DWC_MATCH_PLAYING = 7,
    DWC_MATCH_DISCONNECTING = 8,
    DWC_MATCH_ERROR = 9,
    DWC_MATCH_CANCELLED = 10,
};

// DWC server types
enum DWCServerType {
    DWC_SERVER_DLS = 0,    // Data Logging Server
    DWC_SERVER_NAS = 1,    // Nintend Authentication Server
    DWC_SERVER_GAMESPY = 2, // GameSpy matchmaking
    DWC_SERVER_NWC24 = 3,   // NWC24 relay
};

// Match search criteria
struct DWCSearchCriteria {
    u8 region;              // Geographic region filter (0 = any)
    u8 playerCountRangeMin;  // Minimum players in room
    u8 playerCountRangeMax;  // Maximum players in room
    u8 roomType;            // Room type (worldwide, regional, friends)
    u8 gameMode;            // Game mode filter
    u8 requiresPassword;   // Whether room must have no password
    u8 sortBy;              // Sort criteria
    u8 _pad[1];
    u16 maxResults;         // Maximum search results
};

// Room info returned by search
struct DWCRoomInfo {
    u32 roomId;
    u8 hostPlayerId;
    u8 playerCount;
    u8 maxPlayers;
    u8 region;
    u8 roomType;
    u8 gameMode;
    u8 latency;            // Estimated ping in frames
    u8 hasPassword;
    u16 roomNameMsgId;     // Message ID for room display name
};

// Player slot in online room
struct DWCPlayerSlot {
    u32 playerId;
    u8 slotIndex;
    u8 isConnected;
    u8 isReady;
    u8 isHost;
    u8 characterId;
    u8 kartId;
    u8 _pad[2];
};

// Authentication result
struct DWCAuthResult {
    u32 resultCode;
    u32 sessionId;
    u32 profileId;
    u8 success;
    u8 _pad[3];
};

class DWCMatchmaker {
public:
    DWCMatchmaker();
    ~DWCMatchmaker();

    // Singleton
    static DWCMatchmaker* getInstance();
    static void createInstance();
    static void destroyInstance();

    // --- Init ---
    // @addr 0x80625E80
    void init();

    // --- Authentication ---
    // @addr 0x80625EC0
    u32 authenticate(const char* friendCode, u32 profileId);
    // @addr 0x80626040
    DWCAuthResult getAuthResult() const;

    // --- Match search ---
    // @addr 0x806261C0
    u32 searchRooms(const DWCSearchCriteria& criteria);
    // @addr 0x80627520
    u32 searchMatch();
    // @addr 0x80626380
    s32 getSearchResultCount() const;
    // @addr 0x80626440
    const DWCRoomInfo* getSearchResult(s32 index) const;
    // @addr 0x80626500
    void clearSearchResults();

    // --- Room operations ---
    // @addr 0x806265C0
    u32 createRoom(u16 maxPlayers, u8 roomType, const char* password);
    // @addr 0x80626740
    u32 joinRoom(u32 roomId, const char* password);
    // @addr 0x806268C0
    u32 leaveRoom();

    // --- Connection management ---
    // @addr 0x80626A40
    u32 connectToServer(DWCServerType serverType);
    // @addr 0x80626BC0
    void disconnect();
    bool isConnected() const { return mConnected; }

    // --- Player management ---
    // @addr 0x80626D40
    void updatePlayerSlot(s32 slotIndex, const DWCPlayerSlot& slot);
    // @addr 0x80626E80
    const DWCPlayerSlot* getPlayerSlot(s32 slotIndex) const;
    s32 getConnectedPlayerCount() const;

    // --- NAT traversal ---
    // @addr 0x80626FC0
    u32 beginNATNegotiation(u32 targetPlayerId);
    bool isNATNegotiating() const { return mNATNegotiating; }

    // --- Update/state ---
    // @addr 0x80627100
    void update(f32 deltaTime);
    DWCMatchState getState() const { return mState; }
    bool isInMatch() const { return mState == DWC_MATCH_PLAYING; }
    bool isError() const { return mState == DWC_MATCH_ERROR; }

    // --- Player list ---
    // @addr 0x806274E0
    const DWCPlayerSlot* getPlayerList() const;
    // @addr 0x80627500
    s32 getPlayerListCount() const;

    // --- Error ---
    u32 getErrorCode() const { return mErrorCode; }
    // @addr 0x80627240
    const char* getErrorString() const;

    // --- Retry ---
    // @addr 0x80627380
    void retryLastOperation();
    // @addr 0x806274C0
    void cancelSearch();

private:
    static DWCMatchmaker* sInstance;
    static const u32 MAX_SEARCH_RESULTS = 20;
    static const u32 MAX_PLAYER_SLOTS = 12;

    // State
    DWCMatchState mState;
    DWCMatchState mPreviousState;
    bool mConnected;
    bool mNATNegotiating;
    u32 mErrorCode;

    // Authentication
    DWCAuthResult mAuthResult;
    u32 mAuthTimer;

    // Room
    u32 mCurrentRoomId;
    u8 mIsHost;
    u8 _pad1[3];

    // Search
    DWCSearchCriteria mSearchCriteria;
    DWCRoomInfo mSearchResults[MAX_SEARCH_RESULTS];
    s32 mSearchResultCount;

    // Players
    DWCPlayerSlot mPlayerSlots[MAX_PLAYER_SLOTS];

    // Timers
    f32 mRetryTimer;
    f32 mConnectTimer;
    u32 mRetryCount;
    u32 mMaxRetries;

    // Server
    u32 mServerAddr;
    u16 mServerPort;

    // State machine helpers
    void processState(f32 deltaTime);
    void transitionState(DWCMatchState newState);
    void handleError(u32 errorCode);
};

} // namespace Online