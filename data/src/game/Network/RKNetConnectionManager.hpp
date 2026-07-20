#pragma once
// ============================================================================
// RKNetConnectionManager.hpp — Race Net Connection Manager
// Address range: 0x8055008c - 0x80559508 (~80 RKNet_ functions)
//
// Manages the per-player connection table used during online races.
// Each player slot is 0x30 bytes with fields for connection state,
// sequence numbers, group IDs, and player handles.
//
// The decompiled code shows a global state pointer (RAM base) used
// throughout, with offsets like 0x27a0 (player array), 0x291c (room
// index), 0x29c0 (max sequence), 0x757c, 0x7588, 0x758c for packet
// subsystem linkage.
//
// Categorization: GENESIS Phase 5 (Network Module)
// ============================================================================

#include "rk_common.h"
#include "NetworkTypes.hpp"

// ============================================================================
// RKNetConnectionManager
// ============================================================================
// Singleton that manages the 12-player connection table for online races.
// Functions prefixed `net_RKNet_` and `RKNet_validate_` in decompiled output
// map to methods of this class.
// ============================================================================

class RKNetConnectionManager {
public:
    // Global instance accessor
    static RKNetConnectionManager* getInstance();

    // --- Connection Table Management ---
    // These iterate the 0x30-byte player entries looking for valid
    // connection states (< 0x42 = connected, 0xFFFFFFFF = none).

    // Find the first connected player's handle
    // @addr 0x8055008c — scans player array, returns entry+0x3c
    u32 findFirstConnectedPlayer();

    // Find the next connected player after a given index
    // @addr 0x80550184 — variant with different starting offset
    u32 findNextConnectedPlayer();

    // Find a specific player by ID
    // @addr 0x8055027c
    int findPlayerById(int playerId);

    // Get player handle by index (returns 0xFFFFFFFF if not connected)
    // @addr 0x80550374
    u32* getPlayerHandle(u32 index);

    // --- Connection State Validation ---
    // Functions named RKNet_validate_ check preconditions and call
    // the assertion handler (0x80443430) on failure.

    // Validate a player connection is in expected state
    // @addr 0x805504e4
    int validateConnection(int context, int expectedState);

    // --- Player Slot Management ---
    // @addr 0x80550a7c
    bool isPlayerConnected(int playerIndex);

    // Set player connection data
    // @addr 0x80550b10, 0x80550bc8
    void setPlayerGroup(u32 playerEntry, u32 groupId);
    void setPlayerState(u32 playerEntry, u32 state);

    // --- Sequence / Ack Management ---
    // Track the highest received sequence number across all players
    // @addr 0x80550184 (max seq calculation)
    void updateMaxSequence();

    // --- Room / Group Operations ---
    // Get the local player's room index from global state
    // @addr 0x80554c14
    bool isLocalPlayerHost();

    // @addr 0x80554c24
    u32 getLocalPlayerRoomIndex(u32 base, u32 param);

    // @addr 0x80554c44
    bool isRoomReady(u8 roomState);

    // @addr 0x80554cdc
    bool isMatchmakingComplete(u8 matchState);

    // --- Connection Send / Receive ---
    // Send data to a specific player
    // @addr 0x80551310
    void sendToPlayer(u32 playerHandle);

    // Send to a player with size parameter
    // @addr 0x805513e8
    void sendToPlayerEx(int playerIndex, int size, u32 data);

    // Broadcast to all connected players
    // @addr 0x80551474
    void broadcastToPlayers(int data, u32 size);

    // Send with acknowledgement tracking
    // @addr 0x80551508
    void sendAck(int playerIndex, int size);

    // --- Reliable Send Pipeline ---
    // MKWii uses a multi-step reliable send with sequence numbers
    // and retransmission buffers.

    // Begin a reliable send
    // @addr 0x805515f4
    u32 reliableSendBegin(int playerIndex, int size, int flags);

    // Queue reliable data for a player
    // @addr 0x8055178c
    u32 queueReliableSend(int playerIndex, int size);

    // Flush pending reliable sends
    // @addr 0x80551954
    u32 flushReliableSend(int playerIndex, int size);

    // --- Acknowledgement Handling ---
    // @addr 0x80551b1c, 0x80551be8
    u32 processAck(int playerIndex, int ackBits);

    // @addr 0x80551cec
    void recordAck(u32 context, u32 playerIndex, u32 ackBits, u32 seq);
    // @addr 0x80551d48
    void recordAckEx(u32 context, int playerIndex, u32 data);

    // --- Sequence Number Management ---
    // @addr 0x80551e08
    void updatePlayerSequence(u32 base, u32 playerIndex, u32 seq);
    // @addr 0x80551e64
    void updatePlayerSequenceEx(u32 base, int playerIndex, u32 param);

    // @addr 0x80551f44
    u32 getPlayerSequence(int base, int playerIndex);
    // @addr 0x80551fd8
    u32 getPlayerAckSequence(int base, int playerIndex);
    // @addr 0x8055208c
    u32 getPlayerSequenceAlt(int base, int playerIndex);
    // @addr 0x80552120
    u32 getPlayerAckSequenceAlt(int base, int playerIndex);
    // @addr 0x805521d4
    u32 getPlayerSequenceThird(int base, int playerIndex);

    // --- Connection Quality ---
    // @addr 0x80552290
    bool isConnectionStable(int playerIndex, int window);

    // --- Send Buffer Management ---
    // @addr 0x80552330
    u32 allocateSendBuffer(int playerIndex, int size);

    // @addr 0x8055240c
    u32 writeSendBuffer(int playerIndex, u32 offset, int size);

    // --- Heartbeat / Keepalive ---
    // @addr 0x80552954
    int validateHeartbeat(int playerIndex, int timeout);

    // @addr 0x80552994
    void sendHeartbeat(u32 playerHandle);

    // @addr 0x80552a64
    void checkHeartbeatTimeout(int playerIndex);

    // --- Connection Event Callbacks ---
    // @addr 0x80552dc8
    void onPlayerDisconnected(int playerIndex);

    // @addr 0x8055336c
    void onPlayerConnected(int playerIndex, int handle, u32 info);

    // --- Large Data Transfer (ghost, replay) ---
    // @addr 0x805535d0
    void beginLargeTransfer(u32 size);

    // @addr 0x80553660, 0x80553a9c
    void sendLargeChunk(int playerIndex, u32 offset);
    void receiveLargeChunk(int playerIndex, u32 offset);

    // @addr 0x80553d90
    void completeLargeTransfer(int playerIndex);

    // --- Connection Cleanup ---
    // @addr 0x80554404 (assert), 0x805546f4, 0x80554734, 0x805547b4
    void cleanupConnection(u32 playerIndex);
    void validateCleanup(int context, int playerIndex);
    void resetConnectionSlot(u32 playerIndex);

    // --- Player Info Validation ---
    // @addr 0x80554808, 0x80554900, 0x8055497c
    void validatePlayerInfo(u8 playerId);
    void validatePlayerHandle(u32 handle);
    void validatePlayerState(u8 state);

    // --- Data Channel Operations ---
    // @addr 0x80554a78, 0x80554abc
    void sendDataChannel(char channel, u32 data);
    void validateDataChannel(char channel, u32 data);

    // @addr 0x80554ba8
    void resetDataChannel(int channel);

    // --- Network State Queries ---
    // @addr 0x80554dc4, 0x80554e20
    void validateNetworkState(u32 expectedState);
    u32 getNetworkState();

    // @addr 0x80554e78, 0x80554f74, 0x80554fc8
    void setNetworkState(int state);
    void resetNetworkState();
    void checkNetworkError();

    // --- Initialization / Shutdown ---
    // @addr 0x80555150, 0x80555298, 0x805552f4
    u32 initNetwork(u32 config);
    int getNetworkStatus();
    void assertNetworkReady();

    // --- Friend Code / Room Matching ---
    // @addr 0x805553f0, 0x80555454
    int lookupFriend(u32 friendCode);
    void assertFriendFound();

    // @addr 0x80555610, 0x80555650, 0x805556b8
    int validateRoom(int roomId, int capacity);
    u32 getRoomPlayerCount(int roomId);
    u32 getRoomHostId(int roomId);

    // --- Player List Operations ---
    // @addr 0x8055589c
    void sortPlayerList(int criteria);

    // @addr 0x805558e0, 0x805558e8, 0x805558f0, 0x8055590c, 0x80555918
    u32 getPlayerCount();
    u32 getMaxPlayerCount();
    int getPlayerRanking(int playerIndex);
    int getPlayerScore(int playerIndex);
    u32 getPlayerChecksum(int playerIndex);

    // @addr 0x80555920, 0x80555a34
    u32 validatePlayerCount(int expected);
    u32 getPlayerFrameCount(int playerIndex);

    // @addr 0x80555a3c, 0x80555a44
    int getPlayerLap(int playerIndex);
    void assertValidLap();

    // --- Room / Session High-Level Ops ---
    // @addr 0x80555ba0
    void updateRoomState(int newState);

    // @addr 0x80556070, 0x80556194
    void validateRoomState(int expectedState);
    void assertRoomReady();

    // @addr 0x805565b0, 0x805565f0
    int validateMatchSettings(int settingsId, int courseId);
    int validatePlayerSettings(int settingsId, int playerId);

    // @addr 0x80556648
    void updateMatchSettings();

    // --- Extended State Management ---
    // @addr 0x805576d8, 0x805578e8
    void assertSyncComplete();
    void validateSyncState(int expectedState);

    // --- Race-Specific Network Operations ---
    // @addr 0x80557d54
    u32 getRaceFrame();

    // @addr 0x80557df8, 0x80557f2c, 0x80558188
    u32 validateRaceState(int frame, u32 expected, int player);
    u32 compareRaceState(int frame, int state1, int state2);
    u32 getRaceProgress();

    // @addr 0x805581f4
    void assertRaceStarted();

    // --- Race Input Broadcast ---
    // @addr 0x805585fc
    int sendRaceInput(int playerIndex, int inputFrame);

    // @addr 0x805586f0
    void flushInputBuffer(u32 playerId);

    // @addr 0x80558718
    u32 receiveRaceInput(int playerIndex, int inputFrame);

    // @addr 0x805589a8, 0x80558ab8
    int validateRaceInput(int playerIndex, int inputFrame);
    u32 getLatestInputFrame(int playerIndex);

    // @addr 0x80558ac4
    u32 getInputFrameDelta(int playerIndex, int inputFrame, int reference);

    // --- Item Synchronization ---
    // @addr 0x80558c24
    u32 sendItemEvent(int playerIndex, u32 itemId, u32 frame);

    // @addr 0x80558ccc
    int processItemEvent(int playerIndex, u32 frame);

    // @addr 0x80558d5c
    u32 validateItemState(int playerIndex, int itemId, int frame);

    // @addr 0x80558e64
    u32 getItemFrame(int playerIndex, u32 itemId);

    // --- Player Position Sync ---
    // @addr 0x80558fa8, 0x805591b0
    void syncPlayerPositions(u32 localFrame, u32 remoteFrame);
    void syncPlayerRotation(u32 localFrame, u32 remoteFrame, u32 remoteFrame2);

    // @addr 0x80559214, 0x805593a0
    u32 validatePositionData(int playerIndex, int frame);
    u32 getInterpolatedPosition(int playerIndex);

    // --- Race End / Results ---
    // @addr 0x8055946c
    int getPlayerFinishPosition(int playerIndex);

    // @addr 0x80559488, 0x80559508
    void submitRaceResult(int playerIndex);
    void validateRaceResults();

    // --- Post-Race ---
    // @addr 0x80559c98
    void syncRaceResults(u32 resultFlags, u32 scoreFlags);

    // @addr 0x80559fa4
    void assertRaceClean();

    // --- Internal: connection array pointer (derived from global) ---
    // The decompiled code accesses the player array at offset 0x27a0
    // from the global RAM base. Each entry is 0x30 bytes.
    void* getPlayerArrayBase() { return mPlayerArray; }
    u32   getPlayerArrayOffset() const { return 0x27A0; }

public:
    RKNetConnectionManager();

private:

    // Prevent copying
    RKNetConnectionManager(const RKNetConnectionManager&);
    RKNetConnectionManager& operator=(const RKNetConnectionManager&);

    // === Instance Data ===
    // Derived from global state offsets in decompiled code:
    void*  mPlayerArray;       // 0x27A0: array of 12 x 0x30-byte player entries
    u32    mRoomIndex;         // 0x291C: local player's room index
    u32    mMaxSequence;       // 0x29C0: highest sequence number seen
    u32    mNetworkState;      // overall network state
    u32    mRaceFrame;         // current race frame counter
    u8     mPlayerConnected[NET_MAX_PLAYERS]; // bitmask of connected players
    u32    _pad[0x10];
};