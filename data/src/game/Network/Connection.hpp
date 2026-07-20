#pragma once
// ============================================================================
// Connection.hpp — NW4R::Net::Connection
// Address range: referenced throughout 0x80550000-0x80600000
//
// Base network connection class for MKWii's online subsystem.
// Wraps the Wii's SO_* socket API and NAT traversal (NAT-T) protocol.
// On PC, this is a thin wrapper around BSD sockets.
//
// The decompiled code shows Connection objects are created per-player
// and stored in the RKNet global state at offset 0x150 per-player
// (indexed by player slot * 0x30 + 0x150).
//
// Categorization: GENESIS Phase 5 (Network Module)
// ============================================================================

#include "rk_common.h"
#include "NetworkTypes.hpp"

namespace NW4R {
namespace Net {

// ============================================================================
// Connection State Machine
// ============================================================================

enum ConnectionState {
    CONN_STATE_CLOSED       = 0x00,
    CONN_STATE_OPENING      = 0x01,
    CONN_STATE_ESTABLISHED  = 0x02,
    CONN_STATE_CONNECTED    = 0x04,
    CONN_STATE_DISCONNECTED = 0x06,
    CONN_STATE_ERROR        = 0x08,
    CONN_STATE_TIMEOUT      = 0x0A,
};

// Connection type: TCP for NWFC login, UDP for race data
enum ConnectionType {
    CONN_TYPE_TCP = 0,
    CONN_TYPE_UDP = 1,
};

// NAT traversal result
enum NatResult {
    NAT_SUCCESS      = 0,
    NAT_IN_PROGRESS  = 1,
    NAT_FAILED       = 2,
    NAT_NOT_NEEDED   = 3,
    NAT_TIMEOUT      = 4,
};

// Maximum payload before fragmentation is needed
static const u32 NET_MAX_PACKET_SIZE = 1400;
// Maximum number of unacknowledged reliable packets tracked
static const u32 NET_MAX_UNACKED = 32;

// Unacknowledged reliable packet entry
struct UnackedPacket {
    u32 sequence;
    u8  data[NET_MAX_PACKET_SIZE];
    u32 size;
    u32 sendTime;      // timestamp when sent (ms)
    u8  retryCount;
    u8  _pad[3];
};

// ============================================================================
// Connection — Single Network Connection
// ============================================================================
// Manages a single TCP or UDP connection. In the original Wii code,
// this wraps SO_Connect / SO_Bind / SO_Send / SO_Recv.
//
// Key observations from decompiled code:
//   - Connection data is at offset +0x04 from a vtable pointer
//   - State field at offset 0x28 (type u8, compared to 0x42 for valid)
//   - Handle at offset 0x3C (u32, returned by findFirstConnectedPlayer)
//   - Extended info at offset 0x4C
//   - IP address bytes at offsets 0x40-0x4B (initialized to 0xFF)
// ============================================================================

class Connection {
public:
    Connection();
    ~Connection();

    // --- Lifecycle ---
    // @addr 0x80550374 (partial) — resets all fields to defaults
    void reset();

    // Open a connection (bind + connect)
    // On Wii: SO_Bind + SO_Connect
    s32 open(u16 localPort, u32 remoteAddr, u16 remotePort, ConnectionType type);

    // Graceful close
    s32 close();

    // --- Data Transfer ---
    // @addr 0x80550b10, 0x80550bc8 — builds a send buffer with type field
    s32 send(const void* data, u32 size);
    s32 recv(void* buffer, u32 maxSize, u32* outReceived);

    // --- Reliable Data Transfer ---
    // Send with ACK requirement, track unacknowledged packets
    s32 sendReliable(const void* data, u32 size);
    // Receive reliable data, send ACK back
    s32 recvReliable(void* buffer, u32 maxSize);

    // --- State Queries ---
    ConnectionState getState() const { return (ConnectionState)mState; }
    // Return connection state as human-readable string
    const char* getStateString() const;
    bool isOpen() const { return mState >= CONN_STATE_CONNECTED; }
    bool isActive() const { return mState == CONN_STATE_CONNECTED; }
    // Check if connection is in active (connected) state
    bool isConnected() const { return mState == CONN_STATE_CONNECTED; }

    u32 getRemoteAddr() const { return mRemoteAddr; }
    u16 getRemotePort() const { return mRemotePort; }
    u16 getLocalPort() const { return mLocalPort; }
    u32 getHandle() const { return mHandle; }

    // --- NAT Traversal ---
    // Begin NAT negotiation with remote peer
    // @addr referenced in connection setup sequences
    NatResult beginNatTraversal(u32 remoteAddr, u16 remotePort);
    NatResult getNatStatus() const { return mNatResult; }

    // --- Heartbeat / Keepalive ---
    void updateLastRecvTime();
    u32 getRecvAgeMs() const; // ms since last received data

    // --- Ping / RTT ---
    // Send ping packet, measure RTT
    s32 ping();
    // Return last measured round-trip time in ms
    u32 getPingMs() const { return mPingMs; }

    // --- Timeout ---
    // Set connection timeout in ms
    void setTimeoutMs(u32 timeout) { mTimeoutMs = timeout; }
    u32 getTimeoutMs() const { return mTimeoutMs; }

    // --- Connection metadata ---
    // State value < 0x42 means "connected" in decompiled code
    bool isValid() const { return mState != 0xFF && mState < 0x42; }

    u8  getPlayerId() const { return mPlayerId; }
    void setPlayerId(u8 id) { mPlayerId = id; }

    u32 getSequenceNumber() const { return mSequenceNumber; }
    void setSequenceNumber(u32 seq) { mSequenceNumber = seq; }

    u32 getGroupId() const { return mGroupId; }
    void setGroupId(u32 groupId) { mGroupId = groupId; }

    // IP address as 4 bytes (0xFF = unset, from decompiled init)
    const u8* getIpAddress() const { return mIpAddress; }
    void setIpAddress(u8 a, u8 b, u8 c, u8 d) {
        mIpAddress[0] = a; mIpAddress[1] = b;
        mIpAddress[2] = c; mIpAddress[3] = d;
    }

    // Extended connection info (at offset 0x4C in player entry)
    u32 getExtendedInfo() const { return mExtendedInfo; }
    void setExtendedInfo(u32 info) { mExtendedInfo = info; }

    // --- Socket handle (platform-specific) ---
    void* getSocketHandle() const { return mSocketHandle; }

private:
    // Prevent copying
    Connection(const Connection&);
    Connection& operator=(const Connection&);

    // Compute simple checksum for packet integrity
    u16 computeChecksum(const void* data, u32 size) const;

    // Get current time in ms (platform-specific)
    static u32 getCurrentTimeMs();

    // === Connection State (matches decompiled player entry layout) ===
    // Layout: 0x30-byte entry with fields at specific offsets
    u32  mGroupId;         // 0x04: room/group ID
    u32  _08;              // 0x08: reserved
    u32  _0C;              // 0x0C: reserved
    u32  _10;              // 0x10: reserved
    u32  _14;              // 0x14: reserved
    u32  _18;              // 0x18: reserved
    u32  _1C;              // 0x1C: reserved
    u32  mSequenceNumber;  // 0x20: send sequence counter
    u32  _24;              // 0x24: recv sequence (init 0xFFFFFFFF)
    u32  _28;              // 0x28: ack sequence (init 0xFFFFFFFF)
    u32  _2C;              // 0x2C: reserved (init 0xFFFFFFFF)
    u32  mState;           // 0x30+0x04: connection state (< 0x42 = valid)
    u32  _38;              // 0x38: reserved
    u32  mHandle;          // 0x3C: connection handle
    u8   mIpAddress[12];   // 0x40-0x4B: IP + MAC (init all 0xFF)
    u32  mExtendedInfo;    // 0x4C: extra data

    // === Runtime State (not in save format) ===
    u16  mLocalPort;
    u16  mRemotePort;
    u32  mRemoteAddr;
    u8   mPlayerId;
    u8   mConnType;
    u32  mLastRecvTime;    // timestamp of last received packet (ms)
    NatResult mNatResult;
    void* mSocketHandle;   // platform socket descriptor

    // === Reliability & Ping State ===
    u32  mPingMs;          // last measured RTT in ms
    u32  mTimeoutMs;       // connection timeout in ms
    u32  mLastPingSendTime;// timestamp of last ping sent
    u32  mRecvSequence;    // next expected recv sequence
    u32  mUnackedCount;    // number of tracked unacked packets
    UnackedPacket mUnackedPackets[NET_MAX_UNACKED]; // reliable send tracking
    u8   _pad2[0x04];
};

} // namespace Net
} // namespace NW4R