#pragma once
// NWC24Manager.hpp - NWC24 network utility manager
// Manages Wi-Fi connection, Sake storage, rankings, ghosts, and network stats
// Address range: 0x80635000 - 0x8063B488

#include "rk_common.h"

namespace Online {

// NWC24 connection states
enum NWC24State {
    NWC24_DISCONNECTED = 0,
    NWC24_RESOLVING_DNS = 1,
    NWC24_CONNECTING = 2,
    NWC24_AUTHENTICATING = 3,
    NWC24_CONNECTED = 4,
    NWC24_SCHEDULING = 5,
    NWC24_ERROR = 6,
};

// Wi-Fi connection profiles
enum WiFiProfile {
    WIFI_PROFILE_1 = 0,
    WIFI_PROFILE_2 = 1,
    WIFI_PROFILE_3 = 2,
};

// Sake storage operation types
enum SakeOperation {
    SAKE_OP_IDLE = 0,
    SAKE_OP_CREATE_RECORD = 1,
    SAKE_OP_READ_RECORD = 2,
    SAKE_OP_UPDATE_RECORD = 3,
    SAKE_OP_DELETE_RECORD = 4,
    SAKE_OP_SEARCH_RECORDS = 5,
    SAKE_OP_UPLOADING = 6,
    SAKE_OP_DOWNLOADING = 7,
};

// Ghost data types
enum GhostType {
    GHOST_TYPE_TIME_TRIAL = 0,
    GHOST_TYPE_VS_RACE = 1,
    GHOST_TYPE_BATTLE = 2,
};

// Ranking category
enum RankingCategory {
    RANKING_GLOBAL_VR = 0,
    RANKING_REGIONAL_VR = 1,
    RANKING_COURSE_TIME = 2,
    RANKING_BATTLE_SCORE = 3,
    RANKING_COUNT = 4,
};

// Wi-Fi connection profile data
struct WiFiProfileData {
    WiFiProfile profileIndex;
    char ssid[32];
    u8 encryptionType;       // 0=none, 1=WEP, 2=WPA
    u8 _pad1[3];
    u8 ipAddr[4];
    u8 subnetMask[4];
    u8 gateway[4];
    u8 dnsServer[4];
    u8 useDHCP;
    u8 _pad2[3];
};

// Connection statistics
struct NetStats {
    f32 avgLatency;          // Average round-trip time in ms
    f32 minLatency;
    f32 maxLatency;
    u32 packetsSent;
    u32 packetsReceived;
    u32 packetsLost;
    f32 packetLossRate;      // 0.0-1.0
    u32 bytesSent;
    u32 bytesReceived;
    f32 bandwidth;           // Estimated bandwidth in KB/s
    u32 disconnectCount;
    u32 _pad;
};

// Ghost data record
struct GhostRecord {
    u32 recordId;
    u16 courseId;
    u16 characterId;
    u16 kartId;
    u8 playerCount;
    u8 ghostType;
    u8 lapCount;
    u8 _pad[1];
    u32 totalTime;           // Total race time in ms
    u32 playerProfileId;
    u8 data[0x1800];         // Ghost replay data (6144 bytes)
};

// Sake record for storage
struct SakeRecord {
    u32 recordId;
    u32 ownerId;
    u32 tableId;
    u32 createdAt;
    u32 updatedAt;
    u8 data[0x400];          // Generic record data (1024 bytes)
};

// Ranking entry
struct RankingEntry {
    u32 profileId;
    char nickname[32];
    u32 score;
    s32 rank;
    u8 region;
    u8 _pad[3];
};

class NWC24Manager {
public:
    NWC24Manager();
    ~NWC24Manager();

    // Singleton
    static NWC24Manager* getInstance();
    static void createInstance();
    static void destroyInstance();

    // --- Connection ---
    // @addr 0x80635000
    u32 connect(u32 profileIndex);
    // @addr 0x806351A0
    void disconnect();
    // @addr 0x80635340
    u32 checkConnection();
    NWC24State getState() const { return mState; }
    bool isConnected() const { return mState == NWC24_CONNECTED; }

    // --- Wi-Fi profiles ---
    // @addr 0x806354C0
    s32 loadWiFiProfile(u32 profileIndex, WiFiProfileData& outProfile);
    // @addr 0x80635620
    s32 saveWiFiProfile(const WiFiProfileData& profile);
    // @addr 0x80635780
    u32 getActiveProfileIndex() const { return mActiveProfile; }

    // --- Sake storage ---
    // @addr 0x806358E0
    u32 sakeCreateRecord(const SakeRecord& record);
    // @addr 0x80635A40
    u32 sakeReadRecord(u32 recordId, SakeRecord& outRecord);
    // @addr 0x80635BA0
    u32 sakeUpdateRecord(const SakeRecord& record);
    // @addr 0x80635D00
    u32 sakeDeleteRecord(u32 recordId);
    // @addr 0x80635E60
    u32 sakeSearchRecords(u32 tableId, const char* filter, RankingEntry* results, u32 maxResults);
    SakeOperation getSakeOpState() const { return mSakeOp; }

    // --- Ghost data ---
    // @addr 0x80636000
    u32 uploadGhost(const GhostRecord& ghost);
    // @addr 0x806361C0
    u32 downloadGhost(u32 recordId, GhostRecord& outGhost);
    // @addr 0x80636380
    u32 downloadTopGhosts(u16 courseId, GhostRecord* ghosts, u32 maxGhosts);
    // @addr 0x80636540
    u32 getGhostCount(u16 courseId);

    // --- Rankings ---
    // @addr 0x80636700
    u32 requestRanking(RankingCategory category, u32 offset, u32 count);
    // @addr 0x80636880
    s32 getRankingCount() const;
    // @addr 0x80636980
    const RankingEntry* getRankingEntry(s32 index) const;

    // --- Network stats ---
    // @addr 0x80636AC0
    void updateNetStats(const NetStats& stats);
    // @addr 0x80636C00
    const NetStats& getNetStats() const { return mNetStats; }
    // @addr 0x80636D40
    void resetNetStats();

    // --- Server time ---
    // @addr 0x80636E80
    u32 getServerTime();
    s32 getTimeOffset() const { return mTimeOffset; }

    // --- Update ---
    // @addr 0x80637000
    void update(f32 deltaTime);

    // --- Error ---
    u32 getErrorCode() const { return mErrorCode; }
    // @addr 0x80637140
    const char* getErrorString() const;

private:
    static NWC24Manager* sInstance;
    static const u32 MAX_RANKING_ENTRIES = 100;
    static const u32 MAX_GHOST_BUFFER = 10;

    // Connection state
    NWC24State mState;
    u32 mErrorCode;
    u32 mActiveProfile;
    f32 mConnectTimer;
    u32 mRetryCount;

    // Wi-Fi profiles
    WiFiProfileData mProfiles[3];

    // Sake storage
    SakeOperation mSakeOp;
    u32 mSakeOpTimer;
    SakeRecord mSakeBuffer;

    // Ranking
    RankingEntry mRankingEntries[MAX_RANKING_ENTRIES];
    s32 mRankingCount;
    RankingCategory mRankingCategory;

    // Network stats
    NetStats mNetStats;
    u32 mStatsUpdateTimer;

    // Server time
    u32 mLastServerTime;
    s32 mTimeOffset;
    u32 mTimeSyncTimer;

    // Ghost download buffer
    GhostRecord mGhostBuffer[MAX_GHOST_BUFFER];
    u32 mGhostBufferCount;
};

} // namespace Online