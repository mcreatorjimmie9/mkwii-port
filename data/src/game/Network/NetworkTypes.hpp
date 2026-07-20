#pragma once
// ============================================================================
// NetworkTypes.hpp — MKWii Network Shared Types & Constants
// Address range: 0x80550000 - 0x80600000
//
// Common types used across RKNet and Packet subsystems.
// The NW4R networking layer wraps Nintendo WiFi Connection (NWFC).
//
// Categorization: GENESIS Phase 5 (Network Module)
// ============================================================================

#include "rk_common.h"

// ============================================================================
// Network Constants
// ============================================================================

// Max number of remote players in a room (including host)
static const u32 NET_MAX_PLAYERS       = 12;

// Size of each player entry in the connection array
// (observed from decompiled pointer arithmetic: offset * 0x30)
static const u32 NET_PLAYER_ENTRY_SIZE = 0x30; // 48 bytes

// Connection state value meaning "no connection" / invalid slot
static const u32 NET_CONN_NONE         = 0xFFFFFFFF;

// Packet type sentinel values
static const u32 NET_PACKET_TYPE_NONE  = 0x14;

// Room state machine constants
static const u32 NET_ROOM_STATE_IDLE       = 0;
static const u32 NET_ROOM_STATE_CONNECTING = 1;
static const u32 NET_ROOM_STATE_CONNECTED  = 2;
static const u32 NET_ROOM_STATE_MATCHING   = 3;
static const u32 NET_ROOM_STATE_RACING     = 4;

// ============================================================================
// Player Connection State (per-player, 0x30 bytes)
// ============================================================================
// Layout derived from decompiled RKNet functions that index player arrays
// with stride 0x30 and access fields at known offsets.
// ============================================================================

#pragma pack(push, 1)

struct NetPlayerEntry {
    u8  _00[0x04];     // 0x00: unknown (possibly player ID / index)
    u32 groupId;       // 0x04: group/room ID
    u32 _08;           // 0x08: unknown
    u32 _0C;           // 0x0C: unknown
    u32 _10;           // 0x10: unknown
    u32 _14;           // 0x14: unknown
    u32 _18;           // 0x18: unknown
    u32 _1C;           // 0x1C: unknown
    u32 seqNumber;     // 0x20: sequence/ack counter (compared with max)
    u32 _24;           // 0x24: unknown
    u32 _28;           // 0x28: unknown
    u32 _2C;           // 0x2C: unknown
    u32 state;         // 0x30+0x04: connection state (< 0x42 = valid)
    u32 _38;           // 0x38: unknown
    u32 _3C;           // 0x3C: player ID / connection handle
    u32 _4C;           // 0x4C: extended info (offset 0x24 into 0x30 entry = +0x1C relative)
}; // Note: actual stride is 0x30, some offsets are relative to entry base

#pragma pack(pop)

// ============================================================================
// Packet Header (sent over network)
// ============================================================================
// MKWii uses a custom binary protocol for race-state synchronization.
// Packets are variable length with a type discriminator in the header.
// ============================================================================

enum PacketType : u8 {
    PACKET_NONE           = 0x00,
    PACKET_PLAYER_JOIN    = 0x01,
    PACKET_PLAYER_LEAVE   = 0x02,
    PACKET_RACE_STATE     = 0x10,
    PACKET_ITEM_EVENT     = 0x11,
    PACKET_PLAYER_UPDATE  = 0x12,
    PACKET_LAP_COMPLETE   = 0x13,
    PACKET_RACE_END       = 0x14,
    PACKET_ROOM_INFO      = 0x20,
    PACKET_ROOM_SETTINGS  = 0x21,
    PACKET_COUNTDOWN      = 0x22,
    PACKET_CHARACTER_SELECT = 0x23,
    PACKET_VEHICLE_SELECT = 0x24,
    PACKET_COURSE_SELECT  = 0x25,
    PACKET_GHOST_DATA     = 0x30,
    PACKET_HEARTBEAT      = 0x40,
    PACKET_ACK            = 0x41,
    PACKET_ERROR          = 0xFF,
};

// Packet header that prefixes all network messages
struct PacketHeader {
    u8  type;            // 0x00: PacketType discriminator
    u8  senderId;        // 0x01: sender player index (0-11)
    u16 payloadSize;     // 0x02: size of payload after header
    u32 sequence;        // 0x04: monotonically increasing sequence number
    u32 ackBits;         // 0x08: bitmask of received sequence numbers
}; // Total: 0x0C bytes

// ============================================================================
// Friend / Matchmaking Types
// ============================================================================

struct FriendCode {
    u32 hi;              // high 32 bits
    u32 mid;             // middle 32 bits
    u32 lo;              // low 32 bits
};

// ============================================================================
// Global pointer used extensively in decompiled code
// ============================================================================
// The decompiled Network.c references `iRam00000000` (RAM base 0x80000000)
// which is a global state structure for the network subsystem.
// ============================================================================

namespace NW4R {

// Forward declarations for NW4R Net namespace
namespace Net {

// Base network interface — wraps SO_* and NAT traversal
class INet {
public:
    virtual ~INet() {}
    virtual s32 init() = 0;
    virtual s32 shutdown() = 0;
    virtual bool isOnline() = 0;
};

} // namespace Net

} // namespace NW4R

namespace NET {

// TCP/UDP socket wrapper around SO_* calls
class Socket {
public:
    enum State {
        STATE_CLOSED     = 0,
        STATE_OPENING    = 1,
        STATE_OPEN       = 2,
        STATE_CONNECTED  = 3,
        STATE_ERROR      = 4,
    };

    Socket();
    ~Socket();

    s32 open(u16 port, bool udp);
    s32 close();
    s32 send(const void* data, u32 size);
    s32 recv(void* buffer, u32 maxSize);

    State getState() const { return mState; }
    u16  getLocalPort() const { return mLocalPort; }

private:
    State mState;
    u16  mLocalPort;
    s32  mHandle;       // internal socket descriptor
    u8   _pad[0x0C];
};

// HTTP connection for NWFC login / matchmaking API calls
class HttpConnection {
public:
    enum State {
        HTTP_IDLE,
        HTTP_CONNECTING,
        HTTP_SENDING,
        HTTP_RECEIVING,
        HTTP_DONE,
        HTTP_ERROR,
    };

    HttpConnection();
    ~HttpConnection();

    s32 get(const char* url);
    s32 post(const char* url, const void* body, u32 bodySize);

    const u8* getResponseBody() const { return mResponseBody; }
    u32 getResponseCode() const { return mResponseCode; }
    u32 getResponseSize() const { return mResponseSize; }
    State getState() const { return mState; }

private:
    State mState;
    u32  mResponseCode;
    u8*  mResponseBody;
    u32  mResponseSize;
    u32  mCapacity;
};

} // namespace NET