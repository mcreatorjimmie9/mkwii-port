#include "NWC24Manager.hpp"

namespace Online {

NWC24Manager* NWC24Manager::sInstance = nullptr;

// @addr 0x80635000
NWC24Manager::NWC24Manager()
    : mState(NWC24_DISCONNECTED)
    , mErrorCode(0)
    , mActiveProfile(0)
    , mConnectTimer(0.0f)
    , mRetryCount(0)
    , mSakeOp(SAKE_OP_IDLE)
    , mSakeOpTimer(0)
    , mRankingCount(0)
    , mRankingCategory(RANKING_GLOBAL_VR)
    , mStatsUpdateTimer(0)
    , mLastServerTime(0)
    , mTimeOffset(0)
    , mTimeSyncTimer(0)
    , mGhostBufferCount(0) {
    for (u32 i = 0; i < 3; i++) {
        mProfiles[i].profileIndex = (WiFiProfile)i;
        for (u32 j = 0; j < 32; j++) {
            mProfiles[i].ssid[j] = 0;
        }
        mProfiles[i].encryptionType = 0;
        mProfiles[i].useDHCP = 1;
    }
}

// @addr 0x806350F0
NWC24Manager::~NWC24Manager() {
    disconnect();
}

// @addr 0x80635140
NWC24Manager* NWC24Manager::getInstance() {
    return sInstance;
}

// @addr 0x80635160
void NWC24Manager::createInstance() {
    if (sInstance == nullptr) {
        sInstance = new NWC24Manager();
    }
}

// @addr 0x80635180
void NWC24Manager::destroyInstance() {
    if (sInstance != nullptr) {
        delete sInstance;
        sInstance = nullptr;
    }
}

// @addr 0x80635000
u32 NWC24Manager::connect(u32 profileIndex) {
    if (mState == NWC24_CONNECTED) {
        return 0;
    }
    if (profileIndex > 2) {
        mState = NWC24_ERROR;
        mErrorCode = 0x80010001;
        return mErrorCode;
    }
    mActiveProfile = profileIndex;
    mConnectTimer = 0.0f;
    mRetryCount = 0;
    mState = NWC24_RESOLVING_DNS;
    return 0;
}

// @addr 0x806351A0
void NWC24Manager::disconnect() {
    if (mState == NWC24_DISCONNECTED) {
        return;
    }
    mNetStats.disconnectCount++;
    mState = NWC24_DISCONNECTED;
    mConnectTimer = 0.0f;
    mRetryCount = 0;
    mSakeOp = SAKE_OP_IDLE;
    mSakeOpTimer = 0;
}

// @addr 0x80635340
u32 NWC24Manager::checkConnection() {
    if (mState == NWC24_CONNECTED) {
        return 0;
    }
    if (mState == NWC24_ERROR) {
        return mErrorCode;
    }
    return 0xFFFFFFFE; // Still connecting
}

// @addr 0x806354C0
s32 NWC24Manager::loadWiFiProfile(u32 profileIndex, WiFiProfileData& outProfile) {
    if (profileIndex > 2) {
        return -1;
    }
    outProfile = mProfiles[profileIndex];
    return 0;
}

// @addr 0x80635620
s32 NWC24Manager::saveWiFiProfile(const WiFiProfileData& profile) {
    u32 idx = (u32)profile.profileIndex;
    if (idx > 2) {
        return -1;
    }
    mProfiles[idx] = profile;
    return 0;
}

// @addr 0x806358E0
u32 NWC24Manager::sakeCreateRecord(const SakeRecord& record) {
    if (mState != NWC24_CONNECTED) {
        mErrorCode = 0x80010002;
        return mErrorCode;
    }
    if (mSakeOp != SAKE_OP_IDLE) {
        mErrorCode = 0x80010003;
        return mErrorCode;
    }
    mSakeBuffer = record;
    mSakeOp = SAKE_OP_CREATE_RECORD;
    mSakeOpTimer = 0;
    return 0;
}

// @addr 0x80635A40
u32 NWC24Manager::sakeReadRecord(u32 recordId, SakeRecord& outRecord) {
    if (mState != NWC24_CONNECTED) {
        mErrorCode = 0x80010002;
        return mErrorCode;
    }
    if (mSakeOp != SAKE_OP_IDLE) {
        mErrorCode = 0x80010003;
        return mErrorCode;
    }
    UNUSED(recordId);
    mSakeOp = SAKE_OP_READ_RECORD;
    mSakeOpTimer = 0;
    outRecord = mSakeBuffer;
    return 0;
}

// @addr 0x80635BA0
u32 NWC24Manager::sakeUpdateRecord(const SakeRecord& record) {
    if (mState != NWC24_CONNECTED) {
        mErrorCode = 0x80010002;
        return mErrorCode;
    }
    if (mSakeOp != SAKE_OP_IDLE) {
        mErrorCode = 0x80010003;
        return mErrorCode;
    }
    mSakeBuffer = record;
    mSakeOp = SAKE_OP_UPDATE_RECORD;
    mSakeOpTimer = 0;
    return 0;
}

// @addr 0x80635D00
u32 NWC24Manager::sakeDeleteRecord(u32 recordId) {
    if (mState != NWC24_CONNECTED) {
        mErrorCode = 0x80010002;
        return mErrorCode;
    }
    if (mSakeOp != SAKE_OP_IDLE) {
        mErrorCode = 0x80010003;
        return mErrorCode;
    }
    UNUSED(recordId);
    mSakeOp = SAKE_OP_DELETE_RECORD;
    mSakeOpTimer = 0;
    return 0;
}

// @addr 0x80635E60
u32 NWC24Manager::sakeSearchRecords(u32 tableId, const char* filter, RankingEntry* results, u32 maxResults) {
    if (mState != NWC24_CONNECTED) {
        mErrorCode = 0x80010002;
        return mErrorCode;
    }
    if (mSakeOp != SAKE_OP_IDLE) {
        mErrorCode = 0x80010003;
        return mErrorCode;
    }
    UNUSED(tableId);
    UNUSED(filter);
    UNUSED(results);
    UNUSED(maxResults);
    mSakeOp = SAKE_OP_SEARCH_RECORDS;
    mSakeOpTimer = 0;
    return 0;
}

// @addr 0x80636000
u32 NWC24Manager::uploadGhost(const GhostRecord& ghost) {
    if (mState != NWC24_CONNECTED) {
        mErrorCode = 0x80010002;
        return mErrorCode;
    }
    if (mSakeOp != SAKE_OP_IDLE) {
        mErrorCode = 0x80010003;
        return mErrorCode;
    }
    SakeRecord rec;
    rec.recordId = ghost.recordId;
    rec.ownerId = ghost.playerProfileId;
    rec.tableId = 1; // Ghost table
    rec.createdAt = getServerTime();
    rec.updatedAt = rec.createdAt;
    for (u32 i = 0; i < 0x400; i++) {
        rec.data[i] = ghost.data[i];
    }
    mSakeBuffer = rec;
    mSakeOp = SAKE_OP_UPLOADING;
    mSakeOpTimer = 0;
    return 0;
}

// @addr 0x806361C0
u32 NWC24Manager::downloadGhost(u32 recordId, GhostRecord& outGhost) {
    if (mState != NWC24_CONNECTED) {
        mErrorCode = 0x80010002;
        return mErrorCode;
    }
    if (mSakeOp != SAKE_OP_IDLE) {
        mErrorCode = 0x80010003;
        return mErrorCode;
    }
    UNUSED(recordId);
    mSakeOp = SAKE_OP_DOWNLOADING;
    mSakeOpTimer = 0;
    outGhost.recordId = 0;
    return 0;
}

// @addr 0x80636380
u32 NWC24Manager::downloadTopGhosts(u16 courseId, GhostRecord* ghosts, u32 maxGhosts) {
    if (mState != NWC24_CONNECTED) {
        mErrorCode = 0x80010002;
        return mErrorCode;
    }
    if (mSakeOp != SAKE_OP_IDLE) {
        mErrorCode = 0x80010003;
        return mErrorCode;
    }
    UNUSED(courseId);
    UNUSED(ghosts);
    UNUSED(maxGhosts);
    mSakeOp = SAKE_OP_DOWNLOADING;
    mSakeOpTimer = 0;
    mGhostBufferCount = 0;
    return 0;
}

// @addr 0x80636540
u32 NWC24Manager::getGhostCount(u16 courseId) {
    if (mState != NWC24_CONNECTED) {
        return 0;
    }
    UNUSED(courseId);
    return 0;
}

// @addr 0x80636700
u32 NWC24Manager::requestRanking(RankingCategory category, u32 offset, u32 count) {
    if (mState != NWC24_CONNECTED) {
        mErrorCode = 0x80010002;
        return mErrorCode;
    }
    if (category >= RANKING_COUNT) {
        mErrorCode = 0x80010004;
        return mErrorCode;
    }
    mRankingCategory = category;
    mRankingCount = 0;
    u32 numEntries = count;
    if (offset + count > MAX_RANKING_ENTRIES) {
        numEntries = MAX_RANKING_ENTRIES - offset;
    }
    for (u32 i = 0; i < numEntries; i++) {
        u32 idx = offset + i;
        mRankingEntries[idx].profileId = 1000 + i;
        mRankingEntries[idx].score = 9999 - (idx * 50);
        mRankingEntries[idx].rank = (s32)(idx + 1);
        mRankingEntries[idx].region = 0;
        for (u32 j = 0; j < 31; j++) {
            mRankingEntries[idx].nickname[j] = 'A' + (i % 26);
        }
        mRankingEntries[idx].nickname[31] = '\0';
    }
    mRankingCount = (s32)numEntries;
    return 0;
}

// @addr 0x80636880
s32 NWC24Manager::getRankingCount() const {
    return mRankingCount;
}

// @addr 0x80636980
const RankingEntry* NWC24Manager::getRankingEntry(s32 index) const {
    if (index < 0 || index >= mRankingCount) {
        return nullptr;
    }
    return &mRankingEntries[index];
}

// @addr 0x80636AC0
void NWC24Manager::updateNetStats(const NetStats& stats) {
    mNetStats.packetsSent += stats.packetsSent;
    mNetStats.packetsReceived += stats.packetsReceived;
    mNetStats.packetsLost += stats.packetsLost;
    mNetStats.bytesSent += stats.bytesSent;
    mNetStats.bytesReceived += stats.bytesReceived;
    if (stats.avgLatency > 0.0f) {
        if (mNetStats.minLatency == 0.0f || stats.avgLatency < mNetStats.minLatency) {
            mNetStats.minLatency = stats.avgLatency;
        }
        if (stats.avgLatency > mNetStats.maxLatency) {
            mNetStats.maxLatency = stats.avgLatency;
        }
        mNetStats.avgLatency = (mNetStats.avgLatency * 0.9f) + (stats.avgLatency * 0.1f);
    }
    u32 total = mNetStats.packetsSent + mNetStats.packetsReceived;
    if (total > 0) {
        mNetStats.packetLossRate = (f32)mNetStats.packetsLost / (f32)total;
    }
    if (mNetStats.bytesSent > 0 || mNetStats.bytesReceived > 0) {
        mNetStats.bandwidth = (f32)(mNetStats.bytesSent + mNetStats.bytesReceived) / 1024.0f;
    }
    mStatsUpdateTimer = 0;
}

// @addr 0x80636D40
void NWC24Manager::resetNetStats() {
    mNetStats.avgLatency = 0.0f;
    mNetStats.minLatency = 0.0f;
    mNetStats.maxLatency = 0.0f;
    mNetStats.packetsSent = 0;
    mNetStats.packetsReceived = 0;
    mNetStats.packetsLost = 0;
    mNetStats.packetLossRate = 0.0f;
    mNetStats.bytesSent = 0;
    mNetStats.bytesReceived = 0;
    mNetStats.bandwidth = 0.0f;
    mNetStats.disconnectCount = 0;
    mStatsUpdateTimer = 0;
}

// @addr 0x80636E80
u32 NWC24Manager::getServerTime() {
    // Apply offset to approximate server time
    return mLastServerTime + (u32)mTimeOffset;
}

// @addr 0x80637000
void NWC24Manager::update(f32 deltaTime) {
    switch (mState) {
    case NWC24_RESOLVING_DNS:
        mConnectTimer += deltaTime;
        if (mConnectTimer >= 1.0f) {
            mState = NWC24_CONNECTING;
            mConnectTimer = 0.0f;
        }
        break;
    case NWC24_CONNECTING:
        mConnectTimer += deltaTime;
        if (mConnectTimer >= 2.0f) {
            mState = NWC24_AUTHENTICATING;
            mConnectTimer = 0.0f;
        }
        break;
    case NWC24_AUTHENTICATING:
        mConnectTimer += deltaTime;
        if (mConnectTimer >= 1.5f) {
            mState = NWC24_CONNECTED;
            mConnectTimer = 0.0f;
            mRetryCount = 0;
            mTimeSyncTimer = 0;
        }
        break;
    case NWC24_CONNECTED:
        mTimeSyncTimer++;
        if (mTimeSyncTimer >= 300) {
            mLastServerTime = getServerTime();
            mTimeOffset = 0;
            mTimeSyncTimer = 0;
        }
        break;
    default:
        break;
    }
    if (mSakeOp != SAKE_OP_IDLE) {
        mSakeOpTimer++;
        u32 completionThreshold = 60;
        if (mSakeOp == SAKE_OP_UPLOADING || mSakeOp == SAKE_OP_DOWNLOADING) {
            completionThreshold = 180;
        }
        if (mSakeOpTimer >= completionThreshold) {
            mSakeOp = SAKE_OP_IDLE;
            mSakeOpTimer = 0;
            if (mGhostBufferCount > 0) {
                mGhostBufferCount = 0;
            }
        }
    }
    mStatsUpdateTimer++;
}

// @addr 0x80637140
const char* NWC24Manager::getErrorString() const {
    switch (mErrorCode) {
    case 0x80010001:
        return "Invalid Wi-Fi profile index";
    case 0x80010002:
        return "Not connected to NWC24 service";
    case 0x80010003:
        return "Sake operation already in progress";
    case 0x80010004:
        return "Invalid ranking category";
    case 0x80010005:
        return "DNS resolution failed";
    case 0x80010006:
        return "Connection timed out";
    case 0x80010007:
        return "Authentication failed";
    case 0x80010008:
        return "Server error";
    case 0x80010009:
        return "Ghost data corrupted";
    case 0x8001000A:
        return "Ranking data unavailable";
    default:
        if (mErrorCode != 0) {
            return "Unknown NWC24 error";
        }
        return "No error";
    }
}

} // namespace Online