// ============================================================================
// Connection.cpp — NW4R::Net::Connection Implementation
//
// PC port: wraps BSD sockets. On Wii, wraps SO_* / NAT-T APIs.
// ============================================================================

#include "Connection.hpp"
#include <cstring>

namespace NW4R {
namespace Net {

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
{
    // Initialize IP address bytes to 0xFF (matching decompiled init at 0x80550374)
    memset(mIpAddress, 0xFF, sizeof(mIpAddress));
    memset(_pad, 0, sizeof(_pad));
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
}

s32 Connection::open(u16 localPort, u32 remoteAddr, u16 remotePort, ConnectionType type) {
    if (mState != CONN_STATE_CLOSED) {
        return -1;
    }

    mConnType = (u8)type;
    mLocalPort = localPort;
    mRemoteAddr = remoteAddr;
    mRemotePort = remotePort;
    mState = CONN_STATE_OPENING;
    mHandle = 0;

    // PC port: would call socket() + bind() + connect() here
    // On Wii: SO_Bind() + SO_Connect()

    mState = CONN_STATE_CONNECTED;
    return 0;
}

s32 Connection::close() {
    if (mState == CONN_STATE_CLOSED) return 0;

    // PC port: would call closesocket() here
    // On Wii: SO_Close()

    mState = CONN_STATE_CLOSED;
    mSocketHandle = nullptr;
    return 0;
}

s32 Connection::send(const void* data, u32 size) {
    if (!isActive()) return -1;
    if (!data || size == 0) return -2;

    // PC port: sendto() / send()
    // On Wii: SO_Send()
    (void)data;
    (void)size;
    return (s32)size;
}

s32 Connection::recv(void* buffer, u32 maxSize, u32* outReceived) {
    if (!buffer || maxSize == 0) return -1;

    // PC port: recvfrom() / recv()
    // On Wii: SO_Recv()
    if (outReceived) *outReceived = 0;

    // Non-blocking: return 0 if no data available
    return 0;
}

NatResult Connection::beginNatTraversal(u32 remoteAddr, u16 remotePort) {
    mRemoteAddr = remoteAddr;
    mRemotePort = remotePort;
    mNatResult = NAT_SUCCESS;
    return NAT_SUCCESS;
}

void Connection::updateLastRecvTime() {
    // Would use OS::GetTick() or similar
    mLastRecvTime = 0;
}

u32 Connection::getRecvAgeMs() const {
    // Would compute (now - mLastRecvTime) in ms
    (void)mLastRecvTime;
    return 0;
}

} // namespace Net
} // namespace NW4R