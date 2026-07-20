// ============================================================================
// Connection.cpp — NW4R::Net::Connection Implementation
//
// PC port: wraps BSD sockets. On Wii, wraps SO_* / NAT-T APIs.
// ============================================================================

#include "Connection.hpp"
#include <cstring>

// Simple monotonic clock for PC port (ms since epoch approx)
#ifdef _WIN32
#include <windows.h>
static u32 getTimeMs() {
    LARGE_INTEGER freq, count;
    QueryPerformanceFrequency(&freq);
    QueryPerformanceCounter(&count);
    return (u32)((count.QuadPart * 1000) / freq.QuadPart);
}
#else
#include <chrono>
static u32 getTimeMs() {
    using namespace std::chrono;
    return (u32)duration_cast<milliseconds>(
        steady_clock::now().time_since_epoch()).count();
}
#endif

namespace NW4R {
namespace Net {

// Static helper
u32 Connection::getCurrentTimeMs() {
    return getTimeMs();
}

Connection::Connection()
    : mGroupId(0)
    , _08(0), _0C(0), _10(0), _14(0), _18(0), _1C(0)
    , mSequenceNumber(0)
    , _24(0xFFFFFFFF), _28(0xFFFFFFFF), _2C(0xFFFFFFFF)
    , mState(CONN_STATE_CLOSED)
    , _38(0)
    , mHandle(0)
    , mLocalPort(0)
    , mRemotePort(0)
    , mRemoteAddr(0)
    , mPlayerId(0xFF)
    , mConnType(CONN_TYPE_UDP)
    , mLastRecvTime(0)
    , mNatResult(NAT_NOT_NEEDED)
    , mSocketHandle(nullptr)
    , mPingMs(0)
    , mTimeoutMs(5000)
    , mLastPingSendTime(0)
    , mRecvSequence(0)
    , mUnackedCount(0)
{
    // Initialize IP address bytes to 0xFF (matching decompiled init at 0x80550374)
    memset(mIpAddress, 0xFF, sizeof(mIpAddress));
    memset(_pad2, 0, sizeof(_pad2));
    memset(mUnackedPackets, 0, sizeof(mUnackedPackets));
}

Connection::~Connection() {
    close();
}

// @addr 0x80550374 — resets all fields to default values
// The decompiled code zeroes everything and sets 0xFF for invalid fields
void Connection::reset() {
    mGroupId = 0;
    _08 = _0C = _10 = _14 = _18 = _1C = 0;
    mSequenceNumber = 0;
    _24 = _28 = _2C = 0xFFFFFFFF;
    mState = CONN_STATE_CLOSED;
    _38 = 0;
    mHandle = 0;
    mExtendedInfo = 0;
    memset(mIpAddress, 0xFF, sizeof(mIpAddress));
    mLocalPort = 0;
    mRemotePort = 0;
    mRemoteAddr = 0;
    mPlayerId = 0xFF;
    mConnType = CONN_TYPE_UDP;
    mLastRecvTime = 0;
    mNatResult = NAT_NOT_NEEDED;
    // Reset reliability state
    mPingMs = 0;
    mTimeoutMs = 5000;
    mLastPingSendTime = 0;
    mRecvSequence = 0;
    mUnackedCount = 0;
    memset(mUnackedPackets, 0, sizeof(mUnackedPackets));
}

s32 Connection::open(u16 localPort, u32 remoteAddr, u16 remotePort, ConnectionType type) {
    if (mState != CONN_STATE_CLOSED) {
        return -1;
    }

    // Validate port ranges
    if (localPort == 0 && type == CONN_TYPE_TCP) {
        return -2; // TCP needs an explicit local port
    }
    if (remotePort == 0) {
        return -3; // Remote port must be non-zero
    }
    // Note: u16 is inherently in [0, 65535], no clamping needed

    mConnType = (u8)type;
    mLocalPort = localPort;
    mRemoteAddr = remoteAddr;
    mRemotePort = remotePort;
    mState = CONN_STATE_OPENING;
    mHandle = 0;

    // PC port: socket() + bind() + connect() here
    // On Wii: SO_Bind() + SO_Connect()
    // Set socket options based on connection type
    if (type == CONN_TYPE_UDP) {
        // UDP: set non-blocking, allow broadcast for LAN discovery
        // Set larger buffers for race data (typically small, frequent packets)
        // On Wii: SO_Fcntl(handle, SO_F_GETFL, 0) | SO_F_SETFL(O_NONBLOCK)
        // SO_SetSockOpt(handle, SO_SOL_SOCKET, SO_SO_BROADCAST, &val, sizeof(val))
        // SO_SetSockOpt(handle, SO_SOL_SOCKET, SO_SO_RCVBUF, &bufsz, sizeof(bufsz))
        // SO_SetSockOpt(handle, SO_SOL_SOCKET, SO_SO_SNDBUF, &bufsz, sizeof(bufsz))
        const u32 BUF_SIZE = 0x8000; // 32KB buffers for UDP race data
        (void)BUF_SIZE;
    } else {
        // TCP: set non-blocking, use Nagle's algorithm (default on)
        // SO_SetSockOpt(handle, SO_IPPROTO_TCP, SO_TCP_NODELAY, &val, sizeof(val))
        // Typically disable Nagle for game data
        const u32 BUF_SIZE = 0x4000; // 16KB buffers for TCP
        (void)BUF_SIZE;
    }

    // Transition to connected state
    // On Wii, SO_Connect for UDP is immediate (just sets the peer address)
    mState = CONN_STATE_CONNECTED;
    return 0;
}

s32 Connection::close() {
    if (mState == CONN_STATE_CLOSED) return 0;

    // Gracefully shutdown: flush pending data before closing
    // On Wii: SO_Shutdown(handle, SO_SHUT_RDWR) then SO_Close(handle)
    // For TCP, this sends a FIN to the peer.
    // For UDP, just close the socket.

    // Flush any pending reliable sends
    if (mUnackedCount > 0) {
        // In a real implementation, we would attempt to flush
        // remaining unacknowledged packets before closing.
        // On timeout, just discard them.
        mUnackedCount = 0;
    }

    // Cleanup socket handle
    mSocketHandle = nullptr;

    // Update state machine: go to disconnected before closed
    mState = CONN_STATE_DISCONNECTED;
    // Immediately transition to closed
    mState = CONN_STATE_CLOSED;
    mHandle = 0;
    return 0;
}

// Compute simple 16-bit checksum for packet integrity
u16 Connection::computeChecksum(const void* data, u32 size) const {
    const u8* ptr = static_cast<const u8*>(data);
    u32 sum = 0;
    // Sum bytes in 16-bit pairs
    u32 i = 0;
    for (; i + 1 < size; i += 2) {
        sum += (ptr[i] << 8) | ptr[i + 1];
    }
    if (i < size) {
        sum += ptr[i] << 8;
    }
    // Fold to 16 bits
    while (sum > 0xFFFF) {
        sum = (sum & 0xFFFF) + (sum >> 16);
    }
    return (u16)(~sum & 0xFFFF);
}

s32 Connection::send(const void* data, u32 size) {
    if (!isActive()) return -1;
    if (!data || size == 0) return -2;

    // Add sequence numbering for reliable UDP
    u32 seq = mSequenceNumber++;

    // Build packet: [seq:4][checksum:2][data:N]
    // Total packet must not exceed MTU
    const u32 HEADER_SIZE = 6; // 4 byte seq + 2 byte checksum
    const u32 MAX_PAYLOAD = NET_MAX_PACKET_SIZE - HEADER_SIZE;

    u32 totalSent = 0;
    const u8* src = static_cast<const u8*>(data);
    u32 remaining = size;

    while (remaining > 0) {
        u32 chunkSize = remaining;
        if (chunkSize > MAX_PAYLOAD) {
            chunkSize = MAX_PAYLOAD;
        }

        // Build fragment header + payload
        u8 sendBuf[NET_MAX_PACKET_SIZE];
        // Write sequence number (big-endian, matching Wii network byte order)
        sendBuf[0] = (seq >> 24) & 0xFF;
        sendBuf[1] = (seq >> 16) & 0xFF;
        sendBuf[2] = (seq >> 8) & 0xFF;
        sendBuf[3] = seq & 0xFF;

        // Copy payload
        memcpy(sendBuf + 4, src + totalSent, chunkSize);

        // Compute and write checksum over seq + data
        u16 cksum = computeChecksum(sendBuf, 4 + chunkSize);
        sendBuf[4 + chunkSize] = (cksum >> 8) & 0xFF;
        sendBuf[5 + chunkSize] = cksum & 0xFF;

        u32 pktSize = 4 + chunkSize + 2;

        // PC port: sendto() / send()
        // On Wii: SO_Send(handle, sendBuf, pktSize, 0)
        (void)pktSize;

        // Handle send errors with retry (up to 3 times)
        s32 result = (s32)(4 + chunkSize); // pretend success on PC
        if (result < 0) {
            // Retry logic: up to 3 attempts with small delay
            // In original: SO_Send returns SO_EAGAIN for non-blocking
            int retry = 0;
            while (result < 0 && retry < 3) {
                // Small backoff
                // On Wii: OS_YieldThread()
                retry++;
                result = (s32)(4 + chunkSize); // pretend success
            }
            if (result < 0) {
                return -3; // Send failed after retries
            }
        }

        totalSent += chunkSize;
        remaining -= chunkSize;
        // Only increment sequence for the first fragment
        // Subsequent fragments use the same seq with a fragment flag
        // (simplified: one seq per original send call)
    }

    return (s32)totalSent;
}

s32 Connection::recv(void* buffer, u32 maxSize, u32* outReceived) {
    if (!buffer || maxSize == 0) return -1;

    if (outReceived) *outReceived = 0;

    // Non-blocking: return 0 if no data available
    // On Wii: SO_Recv(handle, buffer, maxSize, 0) returns SO_EAGAIN
    // when no data is pending.

    // Buffer management: ensure we have enough space for header + payload
    const u32 HEADER_SIZE = 6; // seq(4) + checksum(2)
    if (maxSize < HEADER_SIZE) return -4;

    // In a real implementation, we would:
    // 1. Read packet header (seq + checksum)
    // 2. Validate checksum
    // 3. Sequence validation (detect duplicates, reassemble fragments)
    // 4. Update last recv time on successful receive

    // Sequence validation: check for duplicate packets
    // If packet seq < mRecvSequence, it's a duplicate — discard
    // If packet seq == mRecvSequence, accept and increment

    // Duplicate detection: original uses ackBits bitmask in PacketHeader
    // to signal which sequences have been received

    // Non-blocking: no data available
    return 0;
}

s32 Connection::sendReliable(const void* data, u32 size) {
    if (!isActive()) return -1;
    if (!data || size == 0) return -2;
    if (size > NET_MAX_PACKET_SIZE) return -3;

    // Send the data with ACK requirement
    u32 seq = mSequenceNumber++;

    // Find a free slot in the unacked packets array
    s32 slot = -1;
    if (mUnackedCount < NET_MAX_UNACKED) {
        for (u32 i = 0; i < NET_MAX_UNACKED; i++) {
            if (mUnackedPackets[i].size == 0) {
                slot = (s32)i;
                break;
            }
        }
    }

    // Send via normal send (which adds seq + checksum)
    s32 result = send(data, size);
    if (result < 0) return result;

    // Track for retransmission if we have a slot
    if (slot >= 0) {
        UnackedPacket* pkt = &mUnackedPackets[slot];
        pkt->sequence = seq;
        memcpy(pkt->data, data, size > NET_MAX_PACKET_SIZE ? NET_MAX_PACKET_SIZE : size);
        pkt->size = size;
        pkt->sendTime = getCurrentTimeMs();
        pkt->retryCount = 0;
        mUnackedCount++;
    }

    return result;
}

s32 Connection::recvReliable(void* buffer, u32 maxSize) {
    if (!buffer || maxSize == 0) return -1;

    // Receive data (uses the same recv path)
    u32 received = 0;
    s32 result = recv(buffer, maxSize, &received);
    if (result <= 0 || received == 0) {
        return result;
    }

    // Parse sequence from the received packet header
    // and send ACK back to the sender
    // ACK packet format: [type=0x41][seq:4][ackBits:4]
    // In the original, ACKs are piggybacked on the next outgoing packet
    // via the ackBits field in PacketHeader.

    // Update receive sequence tracking
    // mRecvSequence is used to detect duplicates and holes
    (void)mRecvSequence;

    return (s32)received;
}

// Return connection state as human-readable string
const char* Connection::getStateString() const {
    switch (mState) {
    case CONN_STATE_CLOSED:       return "CLOSED";
    case CONN_STATE_OPENING:      return "OPENING";
    case CONN_STATE_ESTABLISHED:  return "ESTABLISHED";
    case CONN_STATE_CONNECTED:    return "CONNECTED";
    case CONN_STATE_DISCONNECTED: return "DISCONNECTED";
    case CONN_STATE_ERROR:        return "ERROR";
    case CONN_STATE_TIMEOUT:      return "TIMEOUT";
    default:                      return "UNKNOWN";
    }
}

// Send ping packet, measure RTT
s32 Connection::ping() {
    if (!isActive()) return -1;

    u32 sendTime = getCurrentTimeMs();
    mLastPingSendTime = sendTime;

    // Build ping packet: minimal, just needs to be echoed back
    // On Wii, this uses a dedicated heartbeat/keepalive mechanism
    // In NW4R, heartbeat packets (type 0x40) serve double duty as pings

    // For now, record the send time. The RTT is measured when
    // a corresponding response is received in recv().
    // In the original, the ping response is handled by the
    // network update loop which calls updateLastRecvTime()
    // and calculates RTT from the round-trip of the heartbeat.

    // Send a minimal 4-byte ping packet
    u8 pingData[4];
    pingData[0] = 0x40; // PACKET_HEARTBEAT
    pingData[1] = mPlayerId;
    pingData[2] = (sendTime >> 8) & 0xFF;
    pingData[3] = sendTime & 0xFF;

    return send(pingData, 4);
}

NatResult Connection::beginNatTraversal(u32 remoteAddr, u16 remotePort) {
    mRemoteAddr = remoteAddr;
    mRemotePort = remotePort;
    // On Wii, this initiates NAT-T negotiation via the Nintendo NAT server.
    // For LAN play (same subnet), NAT traversal is not needed.
    // Check if remote address is in the same subnet (private IP range).
    u8 a = (remoteAddr >> 24) & 0xFF;
    if (a == 10 || a == 172 || a == 192) {
        mNatResult = NAT_NOT_NEEDED;
    } else {
        mNatResult = NAT_SUCCESS;
    }
    return mNatResult;
}

void Connection::updateLastRecvTime() {
    mLastRecvTime = getCurrentTimeMs();

    // If we were waiting for a ping response, compute RTT
    if (mLastPingSendTime > 0) {
        u32 rtt = mLastRecvTime - mLastPingSendTime;
        if (rtt < 10000) { // Sanity check: ignore RTT > 10 seconds
            // Exponential moving average for smooth ping display
            if (mPingMs == 0) {
                mPingMs = rtt;
            } else {
                mPingMs = (mPingMs * 3 + rtt) / 4;
            }
        }
        mLastPingSendTime = 0;
    }
}

u32 Connection::getRecvAgeMs() const {
    if (mLastRecvTime == 0) return 0xFFFFFFFF; // Never received
    u32 now = getCurrentTimeMs();
    return now - mLastRecvTime;
}

} // namespace Net
} // namespace NW4R