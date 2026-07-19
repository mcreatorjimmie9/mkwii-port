#pragma once
// ============================================================================
// PacketHandler.hpp — Race Network Packet Handler
// Address range: 0x8055a070 - 0x8055fea4 (~70 Packets_ functions)
//
// Serializes, deserializes, and dispatches network packets during online
// races. The packet subsystem operates on a large context object
// (~0x7600 bytes) that contains send/receive buffers, sequence trackers,
// and per-player packet queues.
//
// The decompiled code shows:
//   - Context object at param_1 with fields at 0x1C (state), 0x14 (mode),
//     0x20 (init flag), 0x41F4 (count), 0x757C, 0x7588, 0x758C (linkage)
//   - Large stack buffers (0x870 bytes) for packet assembly
//   - Calls into the RKNet layer for actual transmission
//
// Categorization: GENESIS Phase 5 (Network Module)
// ============================================================================

#include "rk_common.h"
#include "NetworkTypes.hpp"

// ============================================================================
// PacketHandler
// ============================================================================
// Processes incoming packets and assembles outgoing packets for the
// RKNet connection layer. Handles the MKWii custom binary protocol.
// ============================================================================

class PacketHandler {
public:
    PacketHandler();
    ~PacketHandler();

    // --- Initialization ---
    // @addr 0x8055a070
    u32 init(int context);

    // @addr 0x8055a130 — validates handler is initialized, calls vtable[3]
    void ensureInitialized();

    // @addr 0x8055a40c — allocates 0x870-byte buffer, calls into OS layer
    u32 allocatePacketBuffer();

    // --- Send Operations ---
    // @addr 0x8055a684 — sends a packet with type, body, and size
    void sendPacket(int type, u32 size);

    // @addr 0x8055a6d0 — checks send readiness, sets mode to 2
    u32 checkSendReady();

    // @addr 0x8055a984 — sends packet with additional routing info
    void sendRoutedPacket(int routingInfo, u32 data);

    // @addr 0x8055ac98 — sends a 4-u32 parameterized packet
    void sendParamPacket(u32 p1, u32 p2, u32 p3, u32 p4);

    // @addr 0x8055adec — sends packet with destination info
    u32 sendTo(u32 dest, int type);

    // @addr 0x8055b180 — get packet size for given type
    u32 getPacketSize(int type);

    // @addr 0x8055b24c — validate packet type is legal
    void validatePacketType(int type);

    // @addr 0x8055b3bc — get max payload size for a packet type
    u32 getMaxPayloadSize(int type);

    // @addr 0x8055b498 — calculate total packet size with header
    u32 calculatePacketSize(int type);

    // --- Receive Operations ---
    // @addr 0x8055b568 — process a received packet
    void processReceivedPacket(int packetData);

    // @addr 0x8055b7f0 — read packet header from buffer
    u32 readPacketHeader();

    // @addr 0x8055b8a0 — validate received packet checksum
    void validatePacketChecksum(int packetData);

    // @addr 0x8055ba08 — get payload pointer from received packet
    u32 getReceivedPayload(int packetData);

    // @addr 0x8055baa8 — check if packet is for this player
    void validatePacketRecipient(int packetData);

    // @addr 0x8055bde8 — extract sender ID from packet
    u32 getPacketSenderId(int packetData);

    // --- Acknowledgement Packets ---
    // @addr 0x8055c8e0 — send an ACK packet with bitfield
    void sendAckPacket(u32 seqBits, u32 ackData);

    // @addr 0x8055cb84 — process a received ACK
    void processAckPacket(u32 seqBits, u32 ackData);

    // @addr 0x8055cfe8 — update send window based on ACKs
    void updateSendWindow(u32 seqBits, u32 ackData);

    // @addr 0x8055d544 — retransmit unacked packets
    void retransmitUnacked(u32 seqBits, u32 ackData);

    // --- Multi-Part Packets (for large data like ghosts) ---
    // @addr 0x8055d93c — begin multi-part send
    void beginMultiPartSend(u32 totalSize, u32 partSize, u32 partIndex, u32 partData, u32 type);

    // @addr 0x8055dc50 — process a multi-part packet fragment
    u32 processMultiPartFragment(u32 partData, int partIndex, int isLast);

    // @addr 0x8055dccc — get assembled multi-part data size
    u32 getMultiPartSize(int partIndex);

    // @addr 0x8055dd7c — validate a multi-part fragment
    void validateMultiPartFragment(int partData);

    // @addr 0x8055dec4 — check if all parts received
    void checkMultiPartComplete(int partData);

    // @addr 0x8055df48 — get pointer to assembled multi-part buffer
    void getMultiPartBuffer(int partData);

    // --- Race-Specific Packets ---
    // @addr 0x8055e0ac — send race state update
    u32 sendRaceState(int raceData);

    // @addr 0x8055e184 — process race state from remote
    void processRaceState(int raceData);

    // @addr 0x8055e488 — send item event packet
    u32 sendItemPacket(int itemData);

    // @addr 0x8055e5b8 — process item event from remote
    void processItemPacket(int itemData);

    // @addr 0x8055e734 — send player position update
    void sendPositionUpdate(int playerIndex, u32 posX, int posY, int posZ);

    // @addr 0x8055ea0c — process position update from remote
    void processPositionUpdate(u32 remoteData, int playerIndex);

    // @addr 0x8055ec8c — send player completion (race end)
    u32 sendCompletionPacket(int playerData);

    // @addr 0x8055ef5c — process completion from remote
    void processCompletionPacket(u32 remoteData, int playerIndex);

    // @addr 0x8055efc8 — validate completion data
    u32 validateCompletionData(int playerData);

    // --- Room / Lobby Packets ---
    // @addr 0x8055f17c — process room info packet
    void processRoomInfo(int roomData);

    // @addr 0x8055f33c — send character/vehicle selection
    void sendCharacterSelect(int characterId);

    // @addr 0x8055f478 — process character select from remote
    void processCharacterSelect();

    // @addr 0x8055f604 — send course vote
    u32 sendCourseVote(int courseData);

    // @addr 0x8055f750 — process course vote from remote
    void processCourseVote(int courseData, u32 voterId);

    // @addr 0x8055fa20 — send ready signal
    u32 sendReadySignal(int playerData, u32 readyState);

    // @addr 0x8055faac — process ready signal from remote
    void processReadySignal(u32 readyState, int playerIndex);

    // @addr 0x8055fb54 — validate all players ready
    void validateAllPlayersReady();

    // @addr 0x8055fc04 — send countdown sync
    void sendCountdownSync(u32 countdownFrame, u32 countdownValue, int playerIndex);

    // @addr 0x8055fea4 — process countdown from host
    void processCountdownPacket();

private:
    // === Packet Handler State ===
    // Derived from decompiled context object fields:

    u32  mState;          // 0x14: handler state (0=idle, 1=init, 2=active)
    u32  mMode;           // 0x14 (alternate): send mode
    u32  mInitFlag;       // 0x20: 0=not init, 1=initialized
    u32  mPendingCount;   // 0x41F4: pending operation count
    void* mNetLinkage;    // 0x758C: pointer to RKNet connection manager
    u32  mLinkageOffset;  // 0x7588: offset into network state
    void* mErrorHandler;  // 0x757C: error callback
    u8*  mSendBuffer;     // assembled packet send buffer
    u8*  mRecvBuffer;     // packet receive buffer
    u32  mSendSeq;        // outgoing sequence counter
    u32  mRecvSeq;        // expected incoming sequence
    u32  _pad[0x04];
};