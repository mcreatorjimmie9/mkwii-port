// ============================================================================
// RacingNet.cpp — Online Race Session Manager Implementation
//
// High-level facade implementations. All stubbed since NWFC servers
// are no longer operational.
// ============================================================================

#include "RacingNet.hpp"
#include "RKNetConnectionManager.hpp"
#include "PacketHandler.hpp"

// ============================================================================
// Room Implementation
// ============================================================================

Room::Room()
    : mRoomId(0)
    , mState(ROOM_IDLE)
    , mPlayerCount(0)
    , mMaxPlayers(12)
    , mHostPlayerId(0)
    , mIsHost(false)
{
    for (u32 i = 0; i < NET_MAX_PLAYERS; i++)
        mPlayerList[i] = NET_CONN_NONE;
    mRoomName[0] = '\0';
}

Room::~Room() {
}

u32 Room::create(u16 maxPlayers, const char* roomName) {
    mMaxPlayers = (u8)(maxPlayers > NET_MAX_PLAYERS ? NET_MAX_PLAYERS : maxPlayers);
    mIsHost = true;
    mHostPlayerId = 0;
    mPlayerCount = 1;
    mState = ROOM_LOBBY;
    if (roomName) {
        for (int i = 0; i < 0x1F && roomName[i]; i++)
            mRoomName[i] = roomName[i];
        mRoomName[0x1F] = '\0';
    }
    return 0;
}

u32 Room::join(u32 roomId) {
    (void)roomId;
    mIsHost = false;
    mState = ROOM_JOINING;
    return 0;
}

u32 Room::leave() {
    mState = ROOM_DISBANDING;
    mPlayerCount = 0;
    mRoomId = 0;
    mState = ROOM_IDLE;
    return 0;
}

void Room::kickPlayer(u8 playerId) {
    (void)playerId;
}

void Room::onPlayerJoined(u8 playerId) {
    (void)playerId;
    if (mPlayerCount < mMaxPlayers)
        mPlayerCount++;
}

void Room::onPlayerLeft(u8 playerId) {
    (void)playerId;
    if (mPlayerCount > 0)
        mPlayerCount--;
}

void Room::onHostChanged(u8 newHostId) {
    mHostPlayerId = newHostId;
    mIsHost = (newHostId == 0); // simplified
}

// ============================================================================
// Matchmaking Implementation
// ============================================================================

Matchmaking::Matchmaking()
    : mState(MATCH_IDLE)
    , mMode(MATCH_REGIONAL)
    , mMatchId(0)
    , mSettingsMask(0)
    , mPlayerCount(0)
    , mSearchTimer(0)
{
}

Matchmaking::~Matchmaking() {
}

u32 Matchmaking::startSearch(Mode mode, u32 settingsMask) {
    mMode = mode;
    mSettingsMask = settingsMask;
    mState = MATCH_SEARCHING;
    mSearchTimer = 0;
    return 0;
}

u32 Matchmaking::cancelSearch() {
    mState = MATCH_CANCELLED;
    return 0;
}

u32 Matchmaking::acceptMatch() {
    mState = MATCH_CONNECTING;
    return 0;
}

void Matchmaking::onUpdate() {
    if (mState == MATCH_SEARCHING) {
        mSearchTimer++;
    }
}

// ============================================================================
// RacingNet Implementation
// ============================================================================

RacingNet::RacingNet()
    : mState(OFFLINE)
    , mConnMgr(RKNetConnectionManager::getInstance())
    , mPacketHandler(new PacketHandler())
    , mFrameCounter(0)
{
}

RacingNet::~RacingNet() {
    delete mPacketHandler;
}

u32 RacingNet::login(const FriendCode& fc) {
    mMyFriendCode = fc;
    mState = CONNECTING_NWFC;
    // NWFC login would happen here
    mState = CONNECTED_NWFC;
    return 0;
}

u32 RacingNet::logout() {
    mState = OFFLINE;
    return 0;
}

u32 RacingNet::refreshFriendList() {
    return 0;
}

u32 RacingNet::getFriendCount() {
    return 0;
}

const FriendCode* RacingNet::getFriendCode(u32 index) {
    (void)index;
    return nullptr;
}

u32 RacingNet::createRoom(u16 maxPlayers, const char* name) {
    u32 result = mRoom.create(maxPlayers, name);
    if (result == 0)
        mState = IN_ROOM;
    return result;
}

u32 RacingNet::joinRoom(u32 roomId) {
    u32 result = mRoom.join(roomId);
    if (result == 0)
        mState = IN_ROOM;
    return result;
}

u32 RacingNet::leaveRoom() {
    u32 result = mRoom.leave();
    if (result == 0)
        mState = CONNECTED_NWFC;
    return result;
}

u32 RacingNet::startMatchmaking(Matchmaking::Mode mode) {
    u32 result = mMatchmaking.startSearch(mode, 0);
    if (result == 0)
        mState = IN_LOBBY;
    return result;
}

u32 RacingNet::cancelMatchmaking() {
    mMatchmaking.cancelSearch();
    mState = CONNECTED_NWFC;
    return 0;
}

void RacingNet::onCharacterSelectComplete() {
    mRoom.setState(Room::ROOM_COURSE_VOTE);
}

void RacingNet::onCourseVoteComplete(u8 selectedCourse) {
    (void)selectedCourse;
    mRoom.setState(Room::ROOM_COUNTDOWN);
}

void RacingNet::onCountdownComplete() {
    mRoom.setState(Room::ROOM_RACING);
    mState = IN_RACE;
}

void RacingNet::onRaceFrame() {
    mFrameCounter++;
}

void RacingNet::onRaceComplete() {
    mRoom.setState(Room::ROOM_RESULTS);
    mState = IN_ROOM;
}

void RacingNet::update() {
    if (mState == IN_LOBBY || mState == IN_ROOM || mState == IN_RACE) {
        mMatchmaking.onUpdate();
    }
}

// ============================================================================
// FriendList Implementation
// ============================================================================

FriendList::FriendList()
    : mCount(0)
{
    for (u32 i = 0; i < MAX_FRIENDS; i++) {
        mEntries[i].isOnline = false;
        mEntries[i].name[0] = '\0';
    }
}

FriendList::~FriendList() {
}

u32 FriendList::load() {
    // Would read from Wii NAND save data
    return 0;
}

u32 FriendList::save() {
    // Would write to Wii NAND save data
    return 0;
}

bool FriendList::isOnline(u32 index) const {
    if (index >= mCount) return false;
    return mEntries[index].isOnline;
}

bool FriendList::isOnline(const FriendCode& fc) const {
    s32 idx = findFriend(fc);
    return idx >= 0 && mEntries[idx].isOnline;
}

u32 FriendList::findFriend(const FriendCode& fc) const {
    for (u32 i = 0; i < mCount; i++) {
        if (mEntries[i].code.hi == fc.hi &&
            mEntries[i].code.mid == fc.mid &&
            mEntries[i].code.lo == fc.lo) {
            return i;
        }
    }
    return 0xFFFFFFFF;
}

void FriendList::addFriend(const FriendCode& fc, const char* name) {
    if (mCount >= MAX_FRIENDS) return;
    if (findFriend(fc) != 0xFFFFFFFF) return; // already added
    mEntries[mCount].code = fc;
    if (name) {
        for (int i = 0; i < 0x0F && name[i]; i++)
            mEntries[mCount].name[i] = name[i];
        mEntries[mCount].name[0x0F] = '\0';
    }
    mEntries[mCount].isOnline = false;
    mCount++;
}

void FriendList::removeFriend(u32 index) {
    if (index >= mCount) return;
    for (u32 i = index; i < mCount - 1; i++) {
        mEntries[i] = mEntries[i + 1];
    }
    mCount--;
}

void FriendList::updateOnlineStatus(u32 index, bool online) {
    if (index >= mCount) return;
    mEntries[index].isOnline = online;
}