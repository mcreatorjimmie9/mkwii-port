#pragma once
// ============================================================================
// Network_Classes.hpp — EGG Network / NW4R Online Class Hierarchy
// Address range: 0x805A0000 - 0x805C0000 (337 functions)
//
// Hierarchy:
//   EGG::Network::NetManager     (singleton) — top-level lifecycle & config
//   EGG::Network::Socket         — low-level TCP/UDP socket wrapper
//   EGG::Network::Connection     — single connection state machine
//   EGG::Network::KeyExchange    — cryptographic key negotiation (f64 math)
//   EGG::Network::Session        — NWC login session management
//   EGG::Network::PacketBuffer   — packet I/O ring buffer
//   EGG::Network::ConnectionMgr  — multi-connection pool manager
//   EGG::Network::Room           — race room / lounge (up to 12 players)
//   EGG::Network::Matchmaker     — matchmaking & opponent search
//   EGG::Network::FriendList     — friend code management
//   EGG::Network::OnlineRace     — in-race network sync
//   EGG::Network::RaceSync       — race-data serialization & exchange
//   EGG::Network::GhostManager   — ghost data upload / download
//   EGG::Network::Leaderboard    — ranking & score submission
//   EGG::Network::NetworkThread  — background networking thread
//   EGG::Network::NatTraverser   — NAT/firewall hole-punching
//   EGG::Network::ServerProxy    — server RPC / HTTP-like calls
//   EGG::Network::PacketHandler  — packet dispatch & error reporting
//   EGG::Network::NetworkConfig  — diagnostics, settings, UI callbacks
//
// Categorization: GENESIS Phase 8 (Runtime Network Class Extraction)
// ============================================================================
#include "rk_types.h"

namespace EGG {
namespace Network {

// Forward declarations
class NetManager;
class Socket;
class Connection;
class KeyExchange;
class Session;
class PacketBuffer;
class ConnectionMgr;
class Room;
class Matchmaker;
class FriendList;
class OnlineRace;
class RaceSync;
class GhostManager;
class Leaderboard;
class NetworkThread;
class NatTraverser;
class ServerProxy;
class PacketHandler;
class NetworkConfig;

// ============================================================
// EGG::Network::NetManager — Singleton network lifecycle manager
// ============================================================
// Owns all networking subsystems. Created once at application start
// and destroyed on shutdown. Manages the NW4R library init.
//
// Layout (~0x100 bytes):
//   0x00  vtable
//   0x04  mState           — network lifecycle state
//   0x08  mInitFlags       — which subsystems are initialized
//   0x0C  mError           — last network error code
//   0x10  mIsOnline        — online connectivity flag
//   0x14  mConnectionMgr   — pointer to ConnectionMgr
//   0x18  mRoom            — pointer to current Room
//   0x1C  mSession         — pointer to login Session
//   0x20  mMatchmaker      — pointer to Matchmaker
//   0x24  mFriendList      — pointer to FriendList
//   0x28  mOnlineRace      — pointer to OnlineRace (null if not racing)
//   0x2C  mConfig          — pointer to NetworkConfig
//   0x30  mNetThread       — pointer to NetworkThread
//   0x34  mServerProxy     — pointer to ServerProxy
//   0x38  mPacketHandler   — pointer to PacketHandler
//   0x3C  _pad3C[64]       — reserved
//
// Maps functions: 0x805a00d4 – 0x805a0a1c
// ============================================================
class NetManager {
public:
    enum State {
        STATE_UNINITIALIZED = 0,
        STATE_INITIALIZING  = 1,
        STATE_IDLE          = 2,
        STATE_CONNECTING    = 3,
        STATE_ONLINE        = 4,
        STATE_IN_LOBBY      = 5,
        STATE_IN_RACE       = 6,
        STATE_DISCONNECTING = 7,
        STATE_ERROR         = 8,
    };

    virtual ~NetManager();

    // --- Lifecycle ---
    // @addr 0x805a00d4
    void init();
    // @addr 0x805a036c
    void shutdown(s32 reason);
    // @addr 0x805a04f0
    void configure();
    // @addr 0x805a07cc
    void reset(s32 mode);
    // @addr 0x805a0a1c
    s32 getStatus() const;

    // --- Singleton access ---
    // @addr 0x805a0a44
    static NetManager* getInstance();

    // --- Member data ---
    State           mState;          // 0x04
    u32             mInitFlags;      // 0x08
    s32             mError;          // 0x0C
    u32             mIsOnline;       // 0x10
    ConnectionMgr*  mConnectionMgr;  // 0x14
    Room*           mRoom;           // 0x18
    Session*        mSession;        // 0x1C
    Matchmaker*     mMatchmaker;     // 0x20
    FriendList*     mFriendList;     // 0x24
    OnlineRace*     mOnlineRace;     // 0x28
    NetworkConfig*  mConfig;         // 0x2C
    NetworkThread*  mNetThread;      // 0x30
    ServerProxy*    mServerProxy;    // 0x34
    PacketHandler*  mPacketHandler;  // 0x38
    u32             _pad3C[64];      // 0x3C

    static NetManager* sInstance;
};

// ============================================================
// EGG::Network::Socket — Low-level TCP/UDP socket wrapper
// ============================================================
// Thin wrapper around the Wii SOCL (Socket) library.
// Supports both TCP stream and UDP datagram modes.
//
// Layout (~0x60 bytes):
//   0x00  vtable
//   0x04  mHandle         — SOCL socket descriptor
//   0x08  mType           — socket type (TCP/UDP)
//   0x0C  mState          — socket state
//   0x10  mLocalPort      — bound local port
//   0x14  mRemoteAddr     — remote IP address
//   0x18  mRemotePort     — remote port
//   0x1C  mLastError      — last socket error
//   0x20  mNonBlocking    — non-blocking mode flag
//   0x24  mRecvTimeout    — receive timeout (ms)
//   0x28  _pad28[14]      — reserved
//
// Maps functions: 0x805a1334 – 0x805a2878
// ============================================================
class Socket {
public:
    enum Type {
        TYPE_TCP = 0,
        TYPE_UDP = 1,
    };

    enum State {
        SOCK_CLOSED  = 0,
        SOCK_OPEN    = 1,
        SOCK_BOUND   = 2,
        SOCK_LISTEN  = 3,
        SOCK_CONNECTING = 4,
        SOCK_CONNECTED  = 5,
        SOCK_ERROR      = 6,
    };

    virtual ~Socket();

    // --- Socket lifecycle ---
    // @addr 0x805a1334
    s32 create(s32 type);
    // @addr 0x805a21c4
    void close();
    // @addr 0x805a2334
    s32 bind(s32 port);
    // @addr 0x805a237c
    s32 listen();
    // @addr 0x805a2498
    s32 accept(s32 timeout);
    // @addr 0x805a24e0
    s32 connect(u32 addr, u16 port);

    // --- I/O ---
    // @addr 0x805a257c
    s32 send(s32 len);
    // @addr 0x805a2878
    s32 recv(s32 maxLen);

    // --- Options ---
    // @addr 0x805a29c4
    void setNonBlocking(u32 enable);
    // @addr 0x805a2f14
    void setRecvTimeout(u32 ms);

    // --- Queries ---
    // @addr 0x805a3074
    s32 getLastError() const;
    // @addr 0x805a32b0
    s32 getSendBufSize() const;
    // @addr 0x805a33e4
    s32 getRecvBufSize() const;

    // --- Member data ---
    s32   mHandle;        // 0x04
    Type  mType;          // 0x08
    State mState;         // 0x0C
    u16   mLocalPort;     // 0x10
    u32   mRemoteAddr;    // 0x14
    u16   mRemotePort;    // 0x18
    s32   mLastError;     // 0x1C
    u32   mNonBlocking;   // 0x20
    u32   mRecvTimeout;   // 0x24
    u32   _pad28[14];     // 0x28
};

// ============================================================
// EGG::Network::Connection — Single connection state machine
// ============================================================
// Represents one network connection with a remote peer.
// Manages send/receive queues and connection state transitions.
//
// Layout (~0x80 bytes):
//   0x00  vtable
//   0x04  mSocket         — associated socket descriptor
//   0x08  mState          — connection FSM state
//   0x0C  mPlayerId       — remote player ID (0 if server)
//   0x10  mSendQueue      — send buffer queue pointer
//   0x14  mRecvQueue      — receive buffer queue pointer
//   0x18  mBytesSent      — total bytes sent
//   0x1C  mBytesRecv      — total bytes received
//   0x20  mLastRecvTime   — timestamp of last received data
//   0x24  mSendSeq        — send sequence number
//   0x28  mRecvSeq        — expected receive sequence number
//   0x2C  mTimeout        — connection timeout (ms)
//   0x30  mRetryCount     — reconnect retry counter
//   0x34  _pad34[20]      — reserved
//
// Maps functions: 0x805a2ff8 – 0x805a4374
// ============================================================
class Connection {
public:
    enum State {
        CONN_CLOSED      = 0,
        CONN_RESOLVING   = 1,
        CONN_CONNECTING  = 2,
        CONN_HANDSHAKE   = 3,
        CONN_ESTABLISHED = 4,
        CONN_DISCONNECTING = 5,
        CONN_TIMED_OUT   = 6,
        CONN_ERROR       = 7,
    };

    virtual ~Connection();

    // --- Lifecycle ---
    // @addr 0x805a2ff8
    void open(u32 addr, u16 port);
    // @addr 0x805a3074
    void close();
    // @addr 0x805a32b0
    s32 send(const void* data, u32 len);
    // @addr 0x805a33e4
    s32 recv(void* buf, u32 maxLen);

    // --- State ---
    // @addr 0x805a3518
    void update();
    // @addr 0x805a35f8
    void checkTimeout();
    // @addr 0x805a36dc
    void setKeepAlive(u32 interval);
    // @addr 0x805a3758
    void resetStats();

    // --- Queue management ---
    // @addr 0x805a38bc
    void flushSendQueue(u32* count);
    // @addr 0x805a3a34
    void processRecvQueue();
    // @addr 0x805a3b88
    s32 peekRecv(u8* out, u32 maxLen);
    // @addr 0x805a3d20
    void clearQueues();
    // @addr 0x805a3df8
    void getQueueSizes(f32* sendSize, f32* recvSize);
    // @addr 0x805a3ee0
    void compactRecvQueue();

    // --- Connection options ---
    // @addr 0x805a408c
    void setNagleEnabled(u32 enable);
    // @addr 0x805a41d0
    void setTTL(u32 ttl);
    // @addr 0x805a42bc
    void setPriority(s32 priority, s32 dscp);
    // @addr 0x805a4310
    void getLocalAddr(s32* outAddr, s32* outPort);
    // @addr 0x805a4374
    void getRemoteAddr();

    // --- Member data ---
    s32   mSocket;        // 0x04
    State mState;         // 0x08
    u32   mPlayerId;      // 0x0C
    void* mSendQueue;     // 0x10
    void* mRecvQueue;     // 0x14
    u32   mBytesSent;     // 0x18
    u32   mBytesRecv;     // 0x1C
    u32   mLastRecvTime;  // 0x20
    u32   mSendSeq;       // 0x24
    u32   mRecvSeq;       // 0x28
    u32   mTimeout;       // 0x2C
    u32   mRetryCount;    // 0x30
    u32   _pad34[20];     // 0x34
};

// ============================================================
// EGG::Network::KeyExchange — Cryptographic key negotiation
// ============================================================
// Handles the Diffie-Hellman style key exchange used to
// establish encrypted communication with game servers.
// Contains f64-precision modular arithmetic for large primes.
//
// Layout (~0x40 bytes):
//   0x00  vtable
//   0x04  mState          — exchange state
//   0x08  mLocalKey[2]    — local public/private key (f64 pair)
//   0x18  mRemoteKey[2]   — remote public key (f64 pair)
//   0x28  mSharedSecret   — computed shared secret
//   0x30  mPrime          — prime modulus
//   0x38  mGenerator      — generator value
//
// Maps functions: 0x805a34c0 – 0x805a42bc (math functions)
// ============================================================
class KeyExchange {
public:
    enum State {
        KEX_IDLE      = 0,
        KEX_GENERATING = 1,
        KEX_EXCHANGING = 2,
        KEX_COMPLETE   = 3,
        KEX_FAILED     = 4,
    };

    virtual ~KeyExchange();

    // --- Key generation ---
    // @addr 0x805a34c0 — compute shared secret
    f64 computeShared(f32* prime, f32* base, f32* remote);
    // @addr 0x805a3518
    void generateKeyPair();
    // @addr 0x805a35f8
    void setPrime(u32 prime);
    // @addr 0x805a36dc
    void setGenerator(u32 gen);
    // @addr 0x805a3758
    void reset();

    // --- Exchange protocol ---
    // @addr 0x805a38bc
    void serializePublicKey(u32* out);
    // @addr 0x805a3a34
    void beginExchange();
    // @addr 0x805a3b88
    void processRemoteKey(u32* remoteKey);
    // @addr 0x805a3d20
    void finalizeExchange();
    // @addr 0x805a3df8
    void getSecret(f32* secret, f32* nonce);
    // @addr 0x805a3ee0
    void validateExchange();

    // --- Member data ---
    State mState;         // 0x04
    f64   mLocalKey[2];   // 0x08
    f64   mRemoteKey[2];  // 0x18
    f64   mSharedSecret;  // 0x28
    u32   mPrime;         // 0x30
    u32   mGenerator;     // 0x34
    u32   _pad38[2];      // 0x38
};

// ============================================================
// EGG::Network::Session — NWC login session management
// ============================================================
// Manages the Nintendo Wi-Fi Connection login session,
// authentication tokens, and server-assigned session IDs.
//
// Layout (~0x80 bytes):
//   0x00  vtable
//   0x04  mState          — session state
//   0x08  mProfileId      — Nintendo WFC profile ID
//   0x0C  mSessionToken   — server-assigned session token
//   0x10  mGameServerId   — game server identifier
//   0x14  mLoginTime      — timestamp of last login
//   0x18  mTokenExpiry    — token expiration time
//   0x1C  mFriendCode     — player's friend code
//   0x20  mPlayerName[12] — player display name
//   0x2C  mCountryCode    — country code
//   0x30  mRegionCode     — region code
//   0x34  mIsGuest        — guest account flag
//   0x38  mKeyExchange    — embedded KeyExchange
//   0x78  _pad78[2]       — reserved
//
// Maps functions: 0x805a51dc – 0x805a589c
// ============================================================
class Session {
public:
    enum State {
        SESS_LOGGED_OUT   = 0,
        SESS_CONNECTING   = 1,
        SESS_AUTHENTICATING = 2,
        SESS_LOGGED_IN    = 3,
        SESS_EXPIRED      = 4,
        SESS_KICKED       = 5,
    };

    virtual ~Session();

    // --- Login/logout ---
    // @addr 0x805a51dc
    void login();
    // @addr 0x805a5650
    void logout();
    // @addr 0x805a5658
    void setProfile(u32 profileId);
    // @addr 0x805a56e0
    void setGameServer(u32 serverId);
    // @addr 0x805a5740
    void setRegion(u32 region);
    // @addr 0x805a57a0
    void setCountry(u32 country);

    // --- Token management ---
    // @addr 0x805a581c
    void refreshToken(u32 challenge);
    // @addr 0x805a589c
    void verifyToken(u32* token, s32* result, u32 len);

    // --- Key exchange ---
    // @addr 0x805a5148
    f64 negotiateKey(u32 prime, u32 generator, u32 rounds);
    // @addr 0x805a55c0
    f64 computeAuth(f64 secret, f64 nonce, u32 flags);
    // @addr 0x805a5624
    void setupEncryption(f64 key, f64 iv, f32* encKey, f32* encIv);

    // --- Queries ---
    // @addr 0x805a5a34
    u32 getToken(u32* out) const;
    // @addr 0x805a5a98
    void update();
    // @addr 0x805a5c44
    void onServerMessage(s32 msgType);
    // @addr 0x805a5d18
    void handleAuthResponse(s32* response);
    // @addr 0x805a5ea0
    void pingServer();
    // @addr 0x805a6144
    void processPacket(s32* packet);

    // --- Member data ---
    State mState;            // 0x04
    u32   mProfileId;        // 0x08
    u32   mSessionToken;     // 0x0C
    u32   mGameServerId;     // 0x10
    u32   mLoginTime;        // 0x14
    u32   mTokenExpiry;      // 0x18
    u32   mFriendCode;       // 0x1C
    u8    mPlayerName[12];   // 0x20
    u16   mCountryCode;      // 0x2C
    u16   mRegionCode;       // 0x2E
    u32   mIsGuest;          // 0x30
    KeyExchange mKeyExchange; // 0x34
    u32   _pad74[2];         // 0x74
};

// ============================================================
// EGG::Network::PacketBuffer — Packet I/O ring buffer
// ============================================================
// Fixed-size ring buffer for network packet assembly and
// disassembly. Used by both send and receive paths.
//
// Layout (~0x60 bytes):
//   0x00  vtable
//   0x04  mData           — pointer to buffer memory
//   0x08  mCapacity       — total buffer capacity in bytes
//   0x0C  mReadPos        — current read position
//   0x10  mWritePos       — current write position
//   0x14  mUsed           — bytes currently in buffer
//   0x18  mPacketCount    — number of complete packets
//   0x1C  mMaxPacketSize  — maximum packet size
//   0x20  _pad20[16]      — reserved
//
// Maps functions: 0x805a5a34 – 0x805a6144 (buffer ops)
// ============================================================
class PacketBuffer {
public:
    virtual ~PacketBuffer();

    // --- Buffer operations ---
    // @addr 0x805a5a34
    u32 available(u32* out) const;
    // @addr 0x805a5a98
    void reset();
    // @addr 0x805a5c44
    void write(s32 len);
    // @addr 0x805a5d18
    void writeBytes(s32* data);
    // @addr 0x805a5ea0
    void compact();
    // @addr 0x805a6144
    void readPacket(s32* out);

    // --- Member data ---
    void* mData;           // 0x04
    u32   mCapacity;       // 0x08
    u32   mReadPos;        // 0x0C
    u32   mWritePos;       // 0x10
    u32   mUsed;           // 0x14
    u32   mPacketCount;    // 0x18
    u32   mMaxPacketSize;  // 0x1C
    u32   _pad20[16];      // 0x20
};

// ============================================================
// EGG::Network::ConnectionMgr — Multi-connection pool manager
// ============================================================
// Manages a pool of Connection objects for the current
// networking context (room host has up to 11 connections).
//
// Layout (~0x100 bytes):
//   0x00  vtable
//   0x04  mConnectionCount — active connection count
//   0x08  mMaxConnections  — maximum allowed connections
//   0x0C  mConnections[12] — array of Connection pointers
//   0x3C  mFreeSlots       — bitmask of free connection slots
//   0x40  mActiveSlots     — bitmask of active connection slots
//   0x44  _pad44[44]       — reserved
//
// Maps functions: 0x805a648c – 0x805a92b8
// ============================================================
class ConnectionMgr {
public:
    static const u32 MAX_CONNECTIONS = 12;

    virtual ~ConnectionMgr();

    // --- Pool management ---
    // @addr 0x805a648c
    s32 allocate(s32 type, u32 flags, s32 bufSize, s32 priority);
    // @addr 0x805a6630
    u32 release(s32 connId, s32 reason, u32 timeout, s32 flags);
    // @addr 0x805a6ac4
    void releaseAll(s32 reason);

    // --- Connection queries ---
    // @addr 0x805a6ce8
    void getConnectionInfo(u32* out, s32* count);
    // @addr 0x805a6f0c
    s32 getConnectionState(s32 connId, s32 flags);
    // @addr 0x805a6f4c
    void updateAll();

    // --- Per-connection send/recv ---
    // @addr 0x805a70dc
    void sendTo(s32 connId, u32 len);
    // @addr 0x805a7248
    s32 recvFrom(s32 connId, s32 maxLen);
    // @addr 0x805a7480
    u32 pollConnection(u32* readyMask);
    // @addr 0x805a74e4
    s32 sendRaw(s32 connId, s32 len);

    // --- Connection lifecycle ---
    // @addr 0x805a755c
    void disconnect(s32 connId);
    // @addr 0x805a775c
    void reconnectAll();
    // @addr 0x805a77dc
    void setConnectionData(s32* connData);
    // @addr 0x805a78f8
    void setConnectionTimeout(s32 connId);
    // @addr 0x805a7a78
    void cleanupStale();
    // @addr 0x805a7ee4
    void heartbeat();
    // @addr 0x805a7328
    void flushAll();

    // --- Connection states ---
    // @addr 0x805a72bc
    void setConnectionState(u32 stateMask);

    // --- Advanced connection management ---
    // @addr 0x805a8114
    void onSocketEvent();
    // @addr 0x805a81c4
    void handleDisconnect(s32 connId);
    // @addr 0x805a8308
    void handleTimeout(s32 connId);
    // @addr 0x805a845c
    void handleError(s32 connId);
    // @addr 0x805a85c0
    void resetAll();
    // @addr 0x805a88e4
    void setBandwidthLimit(s32 connId);
    // @addr 0x805a8954
    void updateBandwidth();
    // @addr 0x805a8a6c
    void getBandwidthStats();
    // @addr 0x805a8afc
    void getConnectionStats(s32* stats);
    // @addr 0x805a8bac
    void clearStats();

    // --- Connection manager state ---
    // @addr 0x805a8b64
    s32 hasActiveConnection(s32 connId, s32 flags);
    // @addr 0x805a8c8c
    s32 getConnectionIndex(s32 connId, s32 flags);
    // @addr 0x805a8cfc
    void onConnectionEvent(s32 connId);
    // @addr 0x805a8d7c
    void processPending();
    // @addr 0x805a8e8c
    void dispatchPackets();
    // @addr 0x805a8fe4
    void broadcastToAll(u32* data, u32 len);
    // @addr 0x805a9040
    void processSendQueue();
    // @addr 0x805a90b8
    void getSendQueueStatus(s32* status);
    // @addr 0x805a912c
    void setPriority(s32 connId);
    // @addr 0x805a91ac
    void validateConnections();
    // @addr 0x805a92b8
    void repairConnections();

    // --- Member data ---
    u32         mConnectionCount;     // 0x04
    u32         mMaxConnections;      // 0x08
    Connection* mConnections[12];     // 0x0C
    u32         mFreeSlots;           // 0x3C
    u32         mActiveSlots;         // 0x40
    u32         _pad44[44];           // 0x44
};

// ============================================================
// EGG::Network::Room — Race room / lounge (up to 12 players)
// ============================================================
// Manages the pre-race room where players gather, vote on
// tracks, and prepare for the race. The host controls
// room settings; clients sync via the host.
//
// Layout (~0x200 bytes):
//   0x00  vtable
//   0x04  mState           — room state
//   0x08  mRoomId          — server-assigned room ID
//   0x0C  mIsHost          — whether we are the room host
//   0x10  mPlayerCount     — number of players in room
//   0x14  mMaxPlayers      — maximum players allowed
//   0x18  mPlayerIds[12]   — player IDs for each slot
//   0x48  mPlayerNames[12] — display names (4 bytes each)
//   0x78  mPlayerReady[12] — ready flags
//   0x84  mSelectedCourse  — voted course ID
//   0x88  mSelectedCC      — voted engine class (50/100/150)
//   0x8C  mVoteMask        — bitmask of players who voted
//   0x90  mRoomType        — public/private/custom
//   0x94  mRoomPassword    — room password hash
//   0x98  mTeamMode        — team race flag
//   0x9C  mCountdownTimer  — countdown to race start
//   0xA0  _padA0[64]       — reserved
//
// Maps functions: 0x805a9740 – 0x805abd3c
// ============================================================
class Room {
public:
    static const u32 MAX_PLAYERS = 12;

    enum State {
        ROOM_IDLE         = 0,
        ROOM_CREATING     = 1,
        ROOM_JOINING      = 2,
        ROOM_LOBBY        = 3,
        ROOM_VOTING       = 4,
        ROOM_COUNTDOWN    = 5,
        ROOM_STARTING     = 6,
        ROOM_RACING       = 7,
        ROOM_RESULTS      = 8,
        ROOM_DISBANDING   = 9,
    };

    enum RoomType {
        ROOM_TYPE_PUBLIC  = 0,
        ROOM_TYPE_PRIVATE = 1,
        ROOM_TYPE_FRIENDS = 2,
        ROOM_TYPE_CUSTOM  = 3,
    };

    virtual ~Room();

    // --- Room lifecycle ---
    // @addr 0x805a9740
    u32 create(u32* settings);
    // @addr 0x805a97a4
    s32 join(s32 roomId, s32 password);
    // @addr 0x805a9810
    void onPlayerJoin(s32* playerInfo);
    // @addr 0x805a9a78
    void onPlayerLeave();
    // @addr 0x805a9d5c
    u32 assignSlot(s32* playerInfo, u32 slot, u32 flags, s32 timeout);
    // @addr 0x805a9f90
    u32 reserveSlot(s32* playerInfo, u32 slot, u32 flags, s32 timeout);

    // --- Voting ---
    // @addr 0x805aa2f0
    void submitVote(s32* voteData);
    // @addr 0x805aa414
    void tallyVotes();
    // @addr 0x805aa804
    void selectRandomCourse();
    // @addr 0x805aad5c
    void announceSelection();
    // @addr 0x805aafb4
    void confirmSelection();

    // --- Room events ---
    // @addr 0x805ab208
    void updateRoomState();
    // @addr 0x805ab458
    void broadcastPlayerList();
    // @addr 0x805ab694
    void kickPlayer(s32 playerId);
    // @addr 0x805ab798
    void sendChat();
    // @addr 0x805ab8b4
    void onChatMessage(s32 playerId);
    // @addr 0x805ab9fc
    void setRoomOption(u32 option);
    // @addr 0x805abad8
    void syncSettings();

    // --- Room management ---
    // @addr 0x805abb3c
    s32 getAvailableSlot(s32 padding, s32 flags);
    // @addr 0x805abb7c
    void updatePlayerReady(s32 playerId);
    // @addr 0x805abd3c
    void handleRoomPacket(s32* packet);

    // --- Member data ---
    State  mState;                  // 0x04
    u32    mRoomId;                 // 0x08
    u32    mIsHost;                 // 0x0C
    u32    mPlayerCount;            // 0x10
    u32    mMaxPlayers;             // 0x14
    u32    mPlayerIds[12];          // 0x18
    u32    mPlayerNames[12];        // 0x48
    u32    mPlayerReady[12];        // 0x78
    u32    mSelectedCourse;         // 0x84
    u32    mSelectedCC;             // 0x88
    u32    mVoteMask;               // 0x8C
    RoomType mRoomType;             // 0x90
    u32    mRoomPassword;           // 0x94
    u32    mTeamMode;               // 0x98
    u32    mCountdownTimer;         // 0x9C
    u32    _padA0[64];              // 0xA0
};

// ============================================================
// EGG::Network::Matchmaker — Matchmaking & opponent search
// ============================================================
// Interfaces with the NEX matchmaking server to find
// opponents based on skill rating, region, and other criteria.
//
// Layout (~0x80 bytes):
//   0x00  vtable
//   0x04  mState           — matchmaking state
//   0x08  mSearchId        — current search operation ID
//   0x0C  mSearchCriteria  — packed search flags
//   0x10  mSkillRating     — player skill rating
//   0x14  mRegionFilter    — preferred region filter
//   0x18  mFoundCount      — number of matches found
//   0x1C  mResults[10]     — match result entries
//   0x44  mSelectedMatch   — selected match index
//   0x48  mTimeout         — search timeout (ms)
//   0x4C  mRetryCount      — search retry counter
//   0x50  _pad50[12]       — reserved
//
// Maps functions: 0x805aba84 – 0x805ace7c
// ============================================================
class Matchmaker {
public:
    enum State {
        MM_IDLE          = 0,
        MM_SEARCHING     = 1,
        MM_FOUND         = 2,
        MM_JOINING       = 3,
        MM_CANCELLED     = 4,
        MM_FAILED        = 5,
    };

    virtual ~Matchmaker();

    // --- Search operations ---
    // @addr 0x805aba84
    s32 search(s32 criteria, s32 timeout);
    // @addr 0x805abec4
    u32 searchAsync(s32* criteria, u32 flags, u32 timeout, s32 callback);
    // @addr 0x805ac008
    u32 searchRanked(s32* criteria, u32 flags, u32 timeout, s32 callback);
    // @addr 0x805ac1d8
    void cancelSearch(s32 searchId);
    // @addr 0x805ac2f0
    void joinMatch(s32 matchId);
    // @addr 0x805ac494
    void leaveQueue(s32 matchId);
    // @addr 0x805ac5ec
    void acceptMatch(s32 matchId);

    // --- Results ---
    // @addr 0x805ac740
    void getResults(s32* outResults);
    // @addr 0x805ac7bc
    void selectResult(s32* resultEntry);
    // @addr 0x805ac8d8
    void onSearchResponse(s32 status);
    // @addr 0x805ac9dc
    void updateSearch();

    // --- Criteria ---
    // @addr 0x805acaa0
    void setCriteria(s32 criteriaType);
    // @addr 0x805acb64
    void clearCriteria();
    // @addr 0x805acbec
    void setRegionFilter(s32 region);

    // --- Match data ---
    // @addr 0x805acc98
    void parseMatchData(u32* data, s32* outInfo);
    // @addr 0x805ace10
    s32 validateMatch(s32 matchId, s32 flags);
    // @addr 0x805ace7c
    void onMatchEvent(s32 eventId);

    // --- Member data ---
    State mState;              // 0x04
    u32   mSearchId;           // 0x08
    u32   mSearchCriteria;     // 0x0C
    u32   mSkillRating;        // 0x10
    u32   mRegionFilter;       // 0x14
    u32   mFoundCount;         // 0x18
    u32   mResults[10];        // 0x1C
    u32   mSelectedMatch;      // 0x44
    u32   mTimeout;            // 0x48
    u32   mRetryCount;         // 0x4C
    u32   _pad50[12];          // 0x50
};

// ============================================================
// EGG::Network::FriendList — Friend code management
// ============================================================
// Manages the Wii friend list for online play, including
// friend code lookup, online status, and invitations.
//
// Layout (~0x80 bytes):
//   0x00  vtable
//   0x04  mFriendCount    — number of friends
//   0x08  mOnlineCount    — number of friends currently online
//   0x0C  mMaxFriends     — maximum friends in list
//   0x10  mFriends[30]    — friend code array
//   0x88  mOnlineMask     — bitmask of online friends
//   0x8C  mPendingCount   — pending friend requests
//   0x90  _pad90[4]       — reserved
//
// Maps functions: 0x805acdac – 0x805adc0c
// ============================================================
class FriendList {
public:
    static const u32 MAX_FRIENDS = 30;

    virtual ~FriendList();

    // --- Friend management ---
    // @addr 0x805acdac
    u32 load(u32* outList);
    // @addr 0x805acfa0
    void refresh(s32* outFriends);
    // @addr 0x805ad2c8
    void addFriend(s32 friendCode);
    // @addr 0x805ad350
    void removeFriend(s32 friendCode);
    // @addr 0x805ad3f0
    void blockFriend(s32 friendCode);
    // @addr 0x805ad464
    void unblockFriend(s32 friendCode);
    // @addr 0x805ad634
    void sendInvite(s32 friendCode);
    // @addr 0x805ad688
    void acceptInvite();
    // @addr 0x805ad8f0
    void declineInvite(s32 inviteId);
    // @addr 0x805ad960
    void checkPendingInvites();

    // --- Queries ---
    // @addr 0x805adc0c
    s32 getFriendIndex(s32 friendCode, s32 flags);
    // @addr 0x805adc78
    void updateOnlineStatus(s32 friendCode);
    // @addr 0x805addc0
    void syncFromServer(s32* friendData);

    // --- Member data ---
    u32 mFriendCount;     // 0x04
    u32 mOnlineCount;     // 0x08
    u32 mMaxFriends;      // 0x0C
    u32 mFriends[30];     // 0x10
    u32 mOnlineMask;      // 0x88
    u32 mPendingCount;    // 0x8C
    u32 _pad90[4];        // 0x90
};

// ============================================================
// EGG::Network::OnlineRace — In-race network synchronization
// ============================================================
// Handles real-time network state during an online race:
// player positions, item usage, race events, and end-of-race
// data collection.
//
// Layout (~0x200 bytes):
//   0x00  vtable
//   0x04  mState           — race state
//   0x08  mFrameCount      — current frame counter
//   0x0C  mPlayerCount     — number of racers
//   0x10  mLocalPlayerId   — our player ID in the race
//   0x14  mRaceTime        — current race timer
//   0x18  mLapCount        — current lap
//   0x1C  mPositions[12]   — interpolated player positions
//   0x4C  mInputs[12]      — received player inputs
//   0x7C  mItems[12]       — player item states
//   0xAC  mFinishedMask    — bitmask of finished players
//   0xB0  mDnfMask         — bitmask of DNF players
//   0xB4  mConfirmedMask   — bitmask of confirmed results
//   0xB8  _padB8[60]       — reserved
//
// Maps functions: 0x805adba8 – 0x805b00bc
// ============================================================
class OnlineRace {
public:
    static const u32 MAX_RACERS = 12;

    enum State {
        RACE_WAITING    = 0,
        RACE_COUNTDOWN  = 1,
        RACE_RACING     = 2,
        RACE_FINISHED   = 3,
        RACE_DNF        = 4,
        RACE_ERROR      = 5,
    };

    virtual ~OnlineRace();

    // --- Race lifecycle ---
    // @addr 0x805adba8
    u32 init(u32* raceConfig);
    // @addr 0x805ae100
    void start(s32 countdown);
    // @addr 0x805ae198
    void onCountdownTick(s32 tick);
    // @addr 0x805ae244
    void beginRace();
    // @addr 0x805ae3ac
    void endRace();
    // @addr 0x805ae548
    void onPlayerFinish(s32 playerId);
    // @addr 0x805ae5e4
    void onPlayerDNF(s32 playerId);
    // @addr 0x805ae76c
    void update();

    // --- Frame sync ---
    // @addr 0x805aec04
    s32 syncFrame(s32 frame, s32 flags);
    // @addr 0x805aec7c
    void onFramePacket(s32 playerId);
    // @addr 0x805aed2c
    void collectInputs();

    // --- Player state ---
    // @addr 0x805aef7c
    void updatePlayerPosition(u32 playerId);
    // @addr 0x805af060
    void sendPlayerState(s32 stateFlags);
    // @addr 0x805af0e0
    void broadcastInput(s32* inputData, u32 len);
    // @addr 0x805af214
    void sendItemUse(s32 itemType);
    // @addr 0x805af35c
    s32 validateInput(s32 playerId, s32 input);
    // @addr 0x805af3a8
    void interpolatePositions(s32 playerId);
    // @addr 0x805af49c
    void predictPositions();

    // --- Results collection ---
    // @addr 0x805af9d8
    void onResultReceived(s32 playerId);
    // @addr 0x805afad8
    void collectResults(u32* resultBuf, u32 len);
    // @addr 0x805afbcc
    s32 confirmResults(s32 playerId, s32 flags);
    // @addr 0x805afeb8
    s32 finalizeResults(s32 playerId, s32 flags);

    // --- Race cleanup ---
    // @addr 0x805afc0c
    void disconnectPlayer(s32 playerId);
    // @addr 0x805afc8c
    void handleDesync(s32 playerId);
    // @addr 0x805afd20
    void rollbackState(s32 playerId);
    // @addr 0x805afd98
    void compensateLag(s32 playerId);
    // @addr 0x805afe74
    void updateLatency();
    // @addr 0x805afef8
    void recordLapTime(s32 playerId);
    // @addr 0x805aff7c
    void setRaceComplete(u32 playerMask);
    // @addr 0x805afff0
    void setRaceError(u32 errorFlags);
    // @addr 0x805b0028
    void getRaceSummary(s32* summary);
    // @addr 0x805b00bc
    void cleanup(s32 reason);

    // --- Member data ---
    State  mState;              // 0x04
    u32    mFrameCount;         // 0x08
    u32    mPlayerCount;        // 0x0C
    u32    mLocalPlayerId;      // 0x10
    u32    mRaceTime;           // 0x14
    u32    mLapCount;           // 0x18
    u32    mPositions[12];      // 0x1C
    u32    mInputs[12];         // 0x4C
    u32    mItems[12];          // 0x7C
    u32    mFinishedMask;       // 0xAC
    u32    mDnfMask;            // 0xB0
    u32    mConfirmedMask;      // 0xB4
    u32    _padB8[60];          // 0xB8
};

// ============================================================
// EGG::Network::RaceSync — Race data serialization
// ============================================================
// Serializes and deserializes race state data for network
// transmission. Handles ghost data, replay data, and
// race result encoding.
//
// Layout (~0x80 bytes):
//   0x00  vtable
//   0x04  mState          — sync state
//   0x08  mBuffer         — serialization buffer pointer
//   0x0C  mBufferSize     — buffer size
//   0x10  mWriteOffset    — current write position
//   0x14  mReadOffset     — current read position
//   0x18  mFrameStart     — first frame in buffer
//   0x1C  mFrameEnd       — last frame in buffer
//   0x20  _pad20[24]      — reserved
//
// Maps functions: 0x805b0510 – 0x805b1f08
// ============================================================
class RaceSync {
public:
    virtual ~RaceSync();

    // --- Serialization ---
    // @addr 0x805b0510
    void beginFrame();
    // @addr 0x805b0634
    void writePlayerState(s32 playerId);
    // @addr 0x805b06e8
    void writeInputFrame(s32* frameData);
    // @addr 0x805b0764
    void endFrame();

    // --- Deserialization ---
    // @addr 0x805b0b20
    void readPlayerState(s32* outState);
    // @addr 0x805b0c64
    void readInputFrame(s32* outFrame);
    // @addr 0x805b0da0
    void readRaceEvent(s32* outEvent);

    // --- Multi-frame ---
    // @addr 0x805b0ec0
    void sendFrameBatch(u32 startFrame, u32 endFrame, s32 connId);
    // @addr 0x805b0fc0
    void processFrameBatch();
    // @addr 0x805b1118
    s32 validateBatch(s32 frameId, s32 seqNum);
    // @addr 0x805b1158
    void ackFrame(s32 playerId, u32* ackData);
    // @addr 0x805b1214
    u8 isFrameConfirmed();
    // @addr 0x805b1220
    void markFrameSent(u32* frameMask, u32 count);

    // --- Race state ---
    // @addr 0x805b1314
    s32 syncLapCount(s32 playerId, s32 lap);
    // @addr 0x805b1354
    void syncCourseInfo();
    // @addr 0x805b1638
    void syncRaceStart();
    // @addr 0x805b16b0
    void syncPlayerList(s32* playerList);
    // @addr 0x805b1758
    void onPlayerJoin(s32 playerId);
    // @addr 0x805b18fc
    void onPlayerLeave(s32* leaveData);
    // @addr 0x805b1a80
    void sendPlayerUpdate(s32 playerId, u32 flags);
    // @addr 0x805b1bd0
    void broadcastPosition(s32 playerId, u32 position);
    // @addr 0x805b1c78
    void sendItemEvent(s32 eventId);
    // @addr 0x805b1d24
    void serializeRaceResult(s32* resultData);
    // @addr 0x805b1db4
    void deserializeRaceResult(s32* resultData);
    // @addr 0x805b1f08
    void reset();

    // --- Member data ---
    u32   mState;         // 0x04
    void* mBuffer;        // 0x08
    u32   mBufferSize;    // 0x0C
    u32   mWriteOffset;   // 0x10
    u32   mReadOffset;    // 0x14
    u32   mFrameStart;    // 0x18
    u32   mFrameEnd;      // 0x1C
    u32   _pad20[24];     // 0x20
};

// ============================================================
// EGG::Network::GhostManager — Ghost data upload / download
// ============================================================
// Manages the exchange of ghost replay data between
// players and the server for time trial leaderboards.
//
// Layout (~0x80 bytes):
//   0x00  vtable
//   0x04  mState          — ghost manager state
//   0x08  mLocalGhost     — pointer to local ghost data
//   0x0C  mRemoteGhost    — pointer to downloaded ghost data
//   0x10  mCourseId       — course for ghost data
//   0x14  mGhostSize      — ghost data size in bytes
//   0x18  mUploadProgress — upload progress (0-100)
//   0x1C  mDownloadProgress — download progress (0-100)
//   0x20  _pad20[24]      — reserved
//
// Maps functions: 0x805b2a44 – 0x805b379c
// ============================================================
class GhostManager {
public:
    virtual ~GhostManager();

    // --- Ghost upload ---
    // @addr 0x805b2a44
    void startUpload();
    // @addr 0x805b2adc
    void cancelUpload();
    // @addr 0x805b2d0c
    void onUploadProgress();
    // @addr 0x805b29e0
    u32 getUploadStatus(u32* status);
    // @addr 0x805b306c
    void finalizeUpload();
    // @addr 0x805b31e4
    void setGhostData(s32* ghostData);
    // @addr 0x805b3374
    void setCourse(s32 courseId);
    // @addr 0x805b3444
    void validateGhost();

    // --- Ghost download ---
    // @addr 0x805b3728
    void startDownload(s32* query);
    // @addr 0x805b379c
    void onDownloadComplete();

    // --- Member data ---
    u32   mState;            // 0x04
    void* mLocalGhost;       // 0x08
    void* mRemoteGhost;      // 0x0C
    u32   mCourseId;         // 0x10
    u32   mGhostSize;        // 0x14
    u32   mUploadProgress;   // 0x18
    u32   mDownloadProgress; // 0x1C
    u32   _pad20[24];        // 0x20
};

// ============================================================
// EGG::Network::Leaderboard — Ranking & score submission
// ============================================================
// Handles submitting race results and retrieving leaderboard
// data from the NWC ranking server.
//
// Layout (~0x60 bytes):
//   0x00  vtable
//   0x04  mState          — leaderboard state
//   0x08  mCourseId       — course for ranking query
//   0x0C  mClassId        — engine class filter
//   0x10  mEntryCount     — number of entries retrieved
//   0x14  mEntries[10]    — leaderboard entry data
//   0x3C  mLocalRank      — player's own rank
//   0x40  mLocalBest      — player's personal best time
//   0x44  _pad44[8]       — reserved
//
// Maps functions: 0x805b3a08 – 0x805b48a8
// ============================================================
class Leaderboard {
public:
    virtual ~Leaderboard();

    // --- Score submission ---
    // @addr 0x805b3a08
    void submitScore();
    // @addr 0x805b3a90
    void submitTimeTrial(s32 time);
    // @addr 0x805b3b78
    void submitVSResult(s32 result);
    // @addr 0x805b3bd8
    void onSubmissionResponse();

    // --- Leaderboard queries ---
    // @addr 0x805b3d8c
    void requestRankings();
    // @addr 0x805b3e58
    void requestTimeTrialRankings();
    // @addr 0x805b3f7c
    void requestVSRankings(s32 categoryId);
    // @addr 0x805b4008
    void processRankingResponse();

    // --- Leaderboard data ---
    // @addr 0x805b4380
    void parseEntries(s32 entryCount);
    // @addr 0x805b4464
    void sortEntries(s32 sortMode);
    // @addr 0x805b4554
    void filterByRegion();
    // @addr 0x805b4694
    void filterByFriends();
    // @addr 0x805b47d8
    void updateLocalRank(s32 rank);
    // @addr 0x805b48a8
    void getPersonalBest();

    // --- Member data ---
    u32   mState;        // 0x04
    u32   mCourseId;     // 0x08
    u32   mClassId;      // 0x0C
    u32   mEntryCount;   // 0x10
    u32   mEntries[10];  // 0x14
    u32   mLocalRank;    // 0x3C
    u32   mLocalBest;    // 0x40
    u32   _pad44[8];     // 0x44
};

// ============================================================
// EGG::Network::NetworkThread — Background networking thread
// ============================================================
// Dedicated thread for non-blocking network I/O operations.
// Handles socket polling, keep-alive packets, and NAT
// traversal probes.
//
// Layout (~0x100 bytes):
//   0x00  vtable
//   0x04  mIsRunning      — thread active flag
//   0x08  mThreadId       — OS thread ID
//   0x0C  mStackSize      — thread stack size
//   0x10  mPriority       — thread priority
//   0x14  mWakeEvent      — wake signal event
//   0x18  mKeepAliveMgr   — embedded keep-alive data
//   0x28  mNatTraverser   — embedded NAT traversal data
//   0x58  _pad58[40]      — reserved
//
// Maps functions: 0x805b4c10 – 0x805b633c
// ============================================================
class NetworkThread {
public:
    virtual ~NetworkThread();

    // --- Thread lifecycle ---
    // @addr 0x805b4c10
    void start();
    // @addr 0x805b4dfc
    void stop(s32 reason);
    // @addr 0x805b4e8c
    void pause();
    // @addr 0x805b5070
    void resume();
    // @addr 0x805b53c4
    void setPriority(s32 priority);
    // @addr 0x805b5434
    void wake();
    // @addr 0x805b54a4
    void sleep(u32 ms);
    // @addr 0x805b55f8
    void yield();
    // @addr 0x805b56f8
    void join();

    // --- Keep-alive ---
    // @addr 0x805b58e8
    void startKeepAlive(s32 interval);
    // @addr 0x805b5938
    void stopKeepAlive();
    // @addr 0x805b5b6c
    void sendKeepAlive();
    // @addr 0x805b5d94
    void onKeepAliveResponse();
    // @addr 0x805b5ec0
    void adjustKeepAlive(s32 newInterval);

    // --- NAT traversal ---
    // @addr 0x805b5f84
    s32 beginNATTraversal(s32 peerId, s32 flags);
    // @addr 0x805b6040
    s32 completeNATTraversal(s32 peerId, s32 flags);
    // @addr 0x805b60a4
    void sendNATProbe(s32 peerId, u32 probeType);
    // @addr 0x805b60f0
    void onNATProbe(s32 peerId);
    // @addr 0x805b6150
    void onNATResponse(s32 peerId);
    // @addr 0x805b61d0
    void onNATError(s32 peerId);
    // @addr 0x805b624c
    void setNATType(u32 natType);
    // @addr 0x805b633c
    void getNATInfo();

    // --- Member data ---
    u32   mIsRunning;    // 0x04
    u32   mThreadId;     // 0x08
    u32   mStackSize;    // 0x0C
    s32   mPriority;     // 0x10
    u32   mWakeEvent;    // 0x14
    u32   mKeepAliveData[4]; // 0x18
    u32   mNatData[12];  // 0x28
    u32   _pad58[40];    // 0x58
};

// ============================================================
// EGG::Network::NatTraverser — NAT / firewall hole-punching
// ============================================================
// Implements NAT traversal techniques to establish direct
// peer-to-peer connections through routers and firewalls.
// Embedded within NetworkThread but logically separated.
//
// Layout (~0x60 bytes):
//   0x00  vtable
//   0x04  mNATType       — detected NAT type
//   0x08  mLocalAddr     — local (LAN) address
//   0x0C  mPublicAddr    — public (WAN) address
//   0x10  mPeerAddr      — peer's public address
//   0x14  mPeerNATType   — peer's NAT type
//   0x18  mProbeCount    — number of probes sent
//   0x1C  mRetryCount    — NAT traversal retries
//   0x20  mState         — traversal state
//   0x24  _pad24[16]     — reserved
//
// Maps functions: 0x805b62e4 – 0x805b7dd8
// ============================================================
class NatTraverser {
public:
    enum NATType {
        NAT_NONE      = 0,
        NAT_FULL_CONE = 1,
        NAT_RESTRICTED = 2,
        NAT_PORT_RESTRICTED = 3,
        NAT_SYMMETRIC = 4,
    };

    enum State {
        TRAVERSE_IDLE      = 0,
        TRAVERSE_PROBING   = 1,
        TRAVERSE_PUNCHING  = 2,
        TRAVERSE_CONNECTED = 3,
        TRAVERSE_FAILED    = 4,
    };

    virtual ~NatTraverser();

    // --- NAT detection ---
    // @addr 0x805b62e4
    s32 detectNAT(s32 probeServer, s32 flags);
    // @addr 0x805b65d4
    u32 getNATType(u32* out);
    // @addr 0x805b6638
    s32 getPublicAddress(s32 flags, s32 padding);
    // @addr 0x805b66a4
    void refreshPublicAddress();

    // --- Traversal ---
    // @addr 0x805b690c
    void beginTraversal(s32 peerId);
    // @addr 0x805b6b38
    u32 sendProbe(s32 peerId, u32 probeType, u32 flags, s32 timeout);
    // @addr 0x805b6cac
    u32 sendPunchPacket(s32 peerId, u32 pktType, u32 flags, s32 timeout);
    // @addr 0x805b6eb8
    void onProbeResponse(s32 peerId);
    // @addr 0x805b6fe4
    void onPunchResponse();

    // --- Connection setup ---
    // @addr 0x805b7240
    void establishDirect(s32 peerId);
    // @addr 0x805b75d4
    void establishRelay(s32 peerId);
    // @addr 0x805b764c
    void fallbackToRelay(s32 peerId);

    // --- Server-assisted ---
    // @addr 0x805b78c4
    void requestRelay(s32 padding);
    // @addr 0x805b7ac4
    void connectRelay(s32 relayId);
    // @addr 0x805b7b3c
    void closeRelay();

    // --- Configuration ---
    // @addr 0x805b7c50
    void setRelayServer(u32 serverAddr);
    // @addr 0x805b7ce8
    void configureRelay(s32* relayConfig);
    // @addr 0x805b7dd8
    void testConnectivity();

    // --- Member data ---
    NATType mNATType;       // 0x04
    u32     mLocalAddr;     // 0x08
    u32     mPublicAddr;    // 0x0C
    u32     mPeerAddr;      // 0x10
    NATType mPeerNATType;   // 0x14
    u32     mProbeCount;    // 0x18
    u32     mRetryCount;    // 0x1C
    State   mState;         // 0x20
    u32     _pad24[16];     // 0x24
};

// ============================================================
// EGG::Network::ServerProxy — Server RPC / HTTP-like calls
// ============================================================
// Interfaces with the Nintendo WFC servers via a simple
// request/response protocol. Handles authentication,
// matchmaking queries, and result submission.
//
// Layout (~0x80 bytes):
//   0x00  vtable
//   0x04  mState          — proxy state
//   0x08  mServerAddr     — server IP address
//   0x0C  mServerPort     — server port
//   0x10  mRequestBuf     — request buffer pointer
//   0x14  mResponseBuf    — response buffer pointer
//   0x18  mTimeout        — request timeout (ms)
//   0x1C  mLastRequest    — last request timestamp
//   0x20  mRetryCount     — request retry counter
//   0x24  _pad24[20]      — reserved
//
// Maps functions: 0x805b858c – 0x805b9e00
// ============================================================
class ServerProxy {
public:
    virtual ~ServerProxy();

    // --- Request/response ---
    // @addr 0x805b858c
    void sendRequest();
    // @addr 0x805b87fc
    void onResponse(s32 status);
    // @addr 0x805b892c
    void cancelRequest();
    // @addr 0x805b8e1c
    void authenticate();
    // @addr 0x805b916c
    void queryMatchmaking();
    // @addr 0x805b932c
    void submitResult();
    // @addr 0x805b94ec
    void requestFriendList();
    // @addr 0x805b982c
    void requestGhostData();
    // @addr 0x805b9b6c
    void submitGhostData();
    // @addr 0x805b9e00
    void heartbeat();

    // --- Configuration ---
    // @addr 0x805b84b8
    u32 configure(u32* serverInfo);

    // --- Member data ---
    u32   mState;         // 0x04
    u32   mServerAddr;    // 0x08
    u16   mServerPort;    // 0x0C
    void* mRequestBuf;    // 0x10
    void* mResponseBuf;   // 0x14
    u32   mTimeout;       // 0x18
    u32   mLastRequest;   // 0x1C
    u32   mRetryCount;    // 0x20
    u32   _pad24[20];     // 0x24
};

// ============================================================
// EGG::Network::PacketHandler — Packet dispatch & error reporting
// ============================================================
// Central packet dispatch system that routes incoming packets
// to the appropriate subsystem (room, race, friend list, etc.)
// and manages network error reporting.
//
// Layout (~0x60 bytes):
//   0x00  vtable
//   0x04  mPacketCount    — total packets processed
//   0x08  mErrorCount     — total errors encountered
//   0x0C  mLastError      — last error code
//   0x10  mHandlers[16]   — registered handler function pointers
//   0x50  mEnabledMask    — bitmask of enabled handlers
//   0x54  _pad54[4]       — reserved
//
// Maps functions: 0x805ba094 – 0x805beffc
// ============================================================
class PacketHandler {
public:
    virtual ~PacketHandler();

    // --- Packet dispatch ---
    // @addr 0x805ba094
    void dispatchPacket(s32 type, s32 connId);
    // @addr 0x805ba1e8
    void dispatchSystemPacket(s32 type, s32 flags);
    // @addr 0x805ba57c
    void registerHandler(s32 packetType);
    // @addr 0x805ba698
    void unregisterHandler(s32 packetType);
    // @addr 0x805ba7b0
    void processQueue();
    // @addr 0x805ba98c
    void handleBatch(s32 batchType, s32 count);

    // --- Player sync packets ---
    // @addr 0x805bae5c
    s32 handlePlayerSync(s32 playerId, s32 flags);
    // @addr 0x805baf64
    s32 handlePlayerInput(s32 playerId, s32 flags);
    // @addr 0x805bb028
    s32 handlePlayerItem(s32 playerId, s32 flags);
    // @addr 0x805bb0ec
    s32 handlePlayerEvent(s32 playerId, s32 flags);

    // --- Configuration packets ---
    // @addr 0x805baabc
    void processConfigPacket();
    // @addr 0x805babd0
    void processSettingsPacket();
    // @addr 0x805bad9c
    void processOptionPacket(u32 optionId);
    // @addr 0x805baea4
    void processVotePacket(u32 voteData);
    // @addr 0x805bafac
    void processReadyPacket(u32 readyMask);
    // @addr 0x805bb070
    void processStartPacket(u32 startFlags);
    // @addr 0x805bb144
    void processEndPacket();
    // @addr 0x805bbbe8
    void processResultPacket(u32 resultFlags);
    // @addr 0x805bbc20
    void processErrorPacket();
    // @addr 0x805bbd74
    void processUnknownPacket();

    // --- Race packets ---
    // @addr 0x805bbb18
    u32 getRacePacketCount(u32* out);
    // @addr 0x805bbb7c
    s32 handleRacePacket(s32 packetId, s32 flags);
    // @addr 0x805bc12c
    void handleRaceStart(s32 countdown);
    // @addr 0x805bc588
    void handleRaceEnd();
    // @addr 0x805bcd58
    void handleLapComplete(s32 playerId);
    // @addr 0x805bce58
    void handlePositionUpdate(s32* posData);
    // @addr 0x805bcfd0
    void handleFinishEvent(s32 playerId);
    // @addr 0x805bd06c
    void handleDNFEvent(s32 playerId);
    // @addr 0x805bd104
    void handleRaceResult(s32* resultData);

    // --- Race setup ---
    // @addr 0x805bc9e0
    u32 prepareRace(s32* raceConfig, s32 configLen, u32 flags, s32 timeout);

    // --- Error handling ---
    // @addr 0x805bd1b8
    void resetErrors();
    // @addr 0x805bd4dc
    void logError();
    // @addr 0x805bddbc
    void reportError(s32* errorInfo);
    // @addr 0x805be048
    void clearErrorLog();

    // --- DLC / content ---
    // @addr 0x805be260
    void checkDLC();
    // @addr 0x805be608
    void processDLCPacket();

    // --- Network errors ---
    // @addr 0x805be690
    void handleDisconnect(s32 playerId);
    // @addr 0x805be800
    void handleTimeout(s32 playerId);
    // @addr 0x805be940
    void handleDesync(s32 playerId);
    // @addr 0x805bea98
    void handlePacketLoss(s32 playerId);
    // @addr 0x805beb74
    void recordPacketStats(s32* stats, u32 count);
    // @addr 0x805bec64
    void onSocketError(s32 error);
    // @addr 0x805bec9c
    void onProtocolError();
    // @addr 0x805beddc
    void onServerError(s32* serverError);
    // @addr 0x805beed0
    void onAuthError(s32* authError);
    // @addr 0x805bef8c
    void onVersionMismatch(s32 version);
    // @addr 0x805beffc
    void onKick();

    // --- Member data ---
    u32   mPacketCount;    // 0x04
    u32   mErrorCount;     // 0x08
    s32   mLastError;      // 0x0C
    void* mHandlers[16];   // 0x10
    u32   mEnabledMask;    // 0x50
    u32   _pad54[4];       // 0x54
};

// ============================================================
// EGG::Network::NetworkConfig — Diagnostics, settings, UI
// ============================================================
// Stores network configuration, provides diagnostic info,
// and manages UI callback hooks for network state changes.
//
// Layout (~0x40 bytes):
//   0x00  vtable
//   0x04  mConnectionType — wired/wireless
//   0x08  mBandwidthUp    — upstream bandwidth
//   0x0C  mBandwidthDown  — downstream bandwidth
//   0x10  mLatency        — measured latency (ms)
//   0x14  mPacketLoss     — measured packet loss (%)
//   0x18  mJitter         — measured jitter (ms)
//   0x1C  mAutoConnect    — auto-connect on startup
//   0x20  mDebugMode      — debug output enabled
//   0x24  _pad24[8]       — reserved
//
// Maps functions: 0x805bf22c – 0x805bffa0
// ============================================================
class NetworkConfig {
public:
    enum ConnectionType {
        CONN_WIRED    = 0,
        CONN_WIRELESS = 1,
    };

    virtual ~NetworkConfig();

    // --- Configuration ---
    // @addr 0x805bf22c
    void load();
    // @addr 0x805bf718
    void save(s32 slot);
    // @addr 0x805bf7ec
    void apply();

    // --- Diagnostics ---
    // @addr 0x805bf8c0
    void measureBandwidth(s32 direction, u32 duration, u32* result);
    // @addr 0x805bf988
    void measureLatency(s32 server);
    // @addr 0x805bfa1c
    void setConnectionType(u32 connType);
    // @addr 0x805bfac4
    void setDebugLevel(u32 level);
    // @addr 0x805bfb74
    void setBandwidthLimit(u32* limits, u32 count);

    // --- Cleanup ---
    // @addr 0x805bfdfc
    void shutdownNetwork();
    // @addr 0x805bffa0
    void finalCleanup();

    // --- Error/summary ---
    // @addr 0x805bfa7c
    s32 getLastError(s32 subsystem, s32 flags);
    // @addr 0x805bfb2c
    s32 getErrorCount(s32 subsystem, s32 flags);
    // @addr 0x805bfd2c
    u32 getErrorLog(u32* out);
    // @addr 0x805bfd90
    s32 getSummary(s32 type, s32 flags);

    // --- Member data ---
    ConnectionType mConnectionType; // 0x04
    u32            mBandwidthUp;    // 0x08
    u32            mBandwidthDown;  // 0x0C
    u32            mLatency;        // 0x10
    u32            mPacketLoss;     // 0x14
    u32            mJitter;         // 0x18
    u32            mAutoConnect;    // 0x1C
    u32            mDebugMode;      // 0x20
    u32            _pad24[8];       // 0x24
};

} // namespace Network
} // namespace EGG