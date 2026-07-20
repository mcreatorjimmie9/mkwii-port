// ============================================================================
// Packet.cpp — RKNet::Packet Implementation
//
// Typed packet construction and validation for the MKWii network protocol.
// ============================================================================

#include "Packet.hpp"
#include <cstring>

namespace RKNet {

// ============================================================================
// Packet
// ============================================================================

Packet::Packet() {
    memset(&mHeader, 0, sizeof(PacketHeader));
    memset(mPayload, 0, sizeof(mPayload));
    mbReliable = false;
    mChannel = 0;
}

Packet::~Packet() {
}

void Packet::init(PacketType type, u8 senderId) {
    memset(&mHeader, 0, sizeof(PacketHeader));
    memset(mPayload, 0, sizeof(mPayload));
    mHeader.type = (u8)type;
    mHeader.senderId = senderId;
    mHeader.payloadSize = 0;
    mHeader.sequence = 0;
    mHeader.ackBits = 0;
}

void Packet::setPayload(const void* data, u16 size) {
    if (!data || size == 0) return;
    u16 copySize = size > MAX_PAYLOAD_SIZE ? MAX_PAYLOAD_SIZE : size;
    memcpy(mPayload, data, copySize);
    mHeader.payloadSize = copySize;
}

void Packet::setPlayerJoin(const PlayerJoinPayload& p) {
    mHeader.type = (u8)PACKET_PLAYER_JOIN;
    setPayload(&p, (u16)sizeof(PlayerJoinPayload));
}

void Packet::setPlayerLeave(const PlayerLeavePayload& p) {
    mHeader.type = (u8)PACKET_PLAYER_LEAVE;
    setPayload(&p, (u16)sizeof(PlayerLeavePayload));
}

void Packet::setCharacterSelect(const CharacterSelectPayload& p) {
    mHeader.type = (u8)PACKET_CHARACTER_SELECT;
    setPayload(&p, (u16)sizeof(CharacterSelectPayload));
}

void Packet::setCourseVote(const CourseVotePayload& p) {
    mHeader.type = (u8)PACKET_COURSE_SELECT;
    setPayload(&p, (u16)sizeof(CourseVotePayload));
}

void Packet::setCountdown(const CountdownPayload& p) {
    mHeader.type = (u8)PACKET_COUNTDOWN;
    setPayload(&p, (u16)sizeof(CountdownPayload));
}

void Packet::setAck(const AckPayload& p) {
    mHeader.type = (u8)PACKET_ACK;
    setPayload(&p, (u16)sizeof(AckPayload));
}

// --- Typed Payload Accessors ---

const PlayerJoinPayload* Packet::asPlayerJoin() const {
    if (mHeader.type != PACKET_PLAYER_JOIN) return nullptr;
    if (mHeader.payloadSize < sizeof(PlayerJoinPayload)) return nullptr;
    return reinterpret_cast<const PlayerJoinPayload*>(mPayload);
}

const PlayerLeavePayload* Packet::asPlayerLeave() const {
    if (mHeader.type != PACKET_PLAYER_LEAVE) return nullptr;
    if (mHeader.payloadSize < sizeof(PlayerLeavePayload)) return nullptr;
    return reinterpret_cast<const PlayerLeavePayload*>(mPayload);
}

const RaceStatePayload* Packet::asRaceState() const {
    if (mHeader.type != PACKET_RACE_STATE) return nullptr;
    if (mHeader.payloadSize < sizeof(RaceStatePayload)) return nullptr;
    return reinterpret_cast<const RaceStatePayload*>(mPayload);
}

const ItemEventPayload* Packet::asItemEvent() const {
    if (mHeader.type != PACKET_ITEM_EVENT) return nullptr;
    if (mHeader.payloadSize < sizeof(ItemEventPayload)) return nullptr;
    return reinterpret_cast<const ItemEventPayload*>(mPayload);
}

const PlayerUpdatePayload* Packet::asPlayerUpdate() const {
    if (mHeader.type != PACKET_PLAYER_UPDATE) return nullptr;
    if (mHeader.payloadSize < sizeof(PlayerUpdatePayload)) return nullptr;
    return reinterpret_cast<const PlayerUpdatePayload*>(mPayload);
}

const RoomInfoPayload* Packet::asRoomInfo() const {
    if (mHeader.type != PACKET_ROOM_INFO) return nullptr;
    if (mHeader.payloadSize < sizeof(RoomInfoPayload)) return nullptr;
    return reinterpret_cast<const RoomInfoPayload*>(mPayload);
}

const RoomSettingsPayload* Packet::asRoomSettings() const {
    if (mHeader.type != PACKET_ROOM_SETTINGS) return nullptr;
    if (mHeader.payloadSize < sizeof(RoomSettingsPayload)) return nullptr;
    return reinterpret_cast<const RoomSettingsPayload*>(mPayload);
}

const CharacterSelectPayload* Packet::asCharacterSelect() const {
    if (mHeader.type != PACKET_CHARACTER_SELECT) return nullptr;
    if (mHeader.payloadSize < sizeof(CharacterSelectPayload)) return nullptr;
    return reinterpret_cast<const CharacterSelectPayload*>(mPayload);
}

const CourseVotePayload* Packet::asCourseVote() const {
    if (mHeader.type != PACKET_COURSE_SELECT) return nullptr;
    if (mHeader.payloadSize < sizeof(CourseVotePayload)) return nullptr;
    return reinterpret_cast<const CourseVotePayload*>(mPayload);
}

const CountdownPayload* Packet::asCountdown() const {
    if (mHeader.type != PACKET_COUNTDOWN) return nullptr;
    if (mHeader.payloadSize < sizeof(CountdownPayload)) return nullptr;
    return reinterpret_cast<const CountdownPayload*>(mPayload);
}

const AckPayload* Packet::asAck() const {
    if (mHeader.type != PACKET_ACK) return nullptr;
    if (mHeader.payloadSize < sizeof(AckPayload)) return nullptr;
    return reinterpret_cast<const AckPayload*>(mPayload);
}

// --- Validation ---

// @addr 0x8055b8a0
bool Packet::validateChecksum() const {
    // Original packet format may or may not include a checksum
    // For now, basic size validation
    if (mHeader.payloadSize > MAX_PAYLOAD_SIZE) return false;
    return true;
}

// --- Size Queries ---

// @addr 0x8055b180
u16 Packet::getExpectedPayloadSize(PacketType type) {
    switch (type) {
        case PACKET_PLAYER_JOIN:      return sizeof(PlayerJoinPayload);
        case PACKET_PLAYER_LEAVE:     return sizeof(PlayerLeavePayload);
        case PACKET_RACE_STATE:       return sizeof(RaceStatePayload);
        case PACKET_ITEM_EVENT:       return sizeof(ItemEventPayload);
        case PACKET_PLAYER_UPDATE:    return sizeof(PlayerUpdatePayload);
        case PACKET_LAP_COMPLETE:     return sizeof(u32) + 4; // frame + time
        case PACKET_RACE_END:         return sizeof(u32);
        case PACKET_ROOM_INFO:        return sizeof(RoomInfoPayload);
        case PACKET_ROOM_SETTINGS:    return sizeof(RoomSettingsPayload);
        case PACKET_COUNTDOWN:        return sizeof(CountdownPayload);
        case PACKET_CHARACTER_SELECT: return sizeof(CharacterSelectPayload);
        case PACKET_VEHICLE_SELECT:   return 4;
        case PACKET_COURSE_SELECT:    return sizeof(CourseVotePayload);
        case PACKET_GHOST_DATA:       return 0; // variable size
        case PACKET_HEARTBEAT:        return 0;
        case PACKET_ACK:              return sizeof(AckPayload);
        default:                      return 0;
    }
}

// @addr 0x8055b3bc
u16 Packet::getMaxPayloadSize(PacketType type) {
    switch (type) {
        case PACKET_GHOST_DATA: return MAX_PAYLOAD_SIZE; // largest possible
        default: return getExpectedPayloadSize(type);
    }
}

// @addr 0x8055b498
u16 Packet::getFullPacketSize(PacketType type) {
    return sizeof(PacketHeader) + getExpectedPayloadSize(type);
}

// ============================================================================
// PacketBuilder
// ============================================================================

Packet PacketBuilder::createAck(u8 senderId, u32 receivedSeq, u32 ackBits) {
    Packet pkt;
    AckPayload ack;
    ack.receivedSeq = receivedSeq;
    ack.ackBits = ackBits;
    pkt.init(PACKET_ACK, senderId);
    pkt.setAck(ack);
    return pkt;
}

Packet PacketBuilder::createPlayerUpdate(u8 senderId, u32 frame,
    u32 posX, u32 posY, u32 posZ, u32 rotY,
    u8 speed, s8 steering, u8 itemHeld)
{
    Packet pkt;
    PlayerUpdatePayload p;
    p.frame = frame;
    p.positionX = posX;
    p.positionY = posY;
    p.positionZ = posZ;
    p.rotationY = rotY;
    p.speed = speed;
    p.steering = (u8)steering;
    p.itemHeld = itemHeld;
    pkt.init(PACKET_PLAYER_UPDATE, senderId);
    pkt.setPayload(&p, sizeof(p));
    return pkt;
}

Packet PacketBuilder::createItemEvent(u8 senderId, u32 frame,
    u8 itemId, u8 targetPlayer, u32 posX, u32 posY, u32 posZ)
{
    Packet pkt;
    ItemEventPayload p;
    p.playerIndex = senderId;
    p.itemId = itemId;
    p.targetPlayer = targetPlayer;
    p.frame = frame;
    p.positionX = posX;
    p.positionY = posY;
    p.positionZ = posZ;
    pkt.init(PACKET_ITEM_EVENT, senderId);
    pkt.setPayload(&p, sizeof(p));
    return pkt;
}

Packet PacketBuilder::createCountdown(u8 senderId, u32 frame,
    u8 countdownValue, u8 playerIndex)
{
    Packet pkt;
    CountdownPayload p;
    p.frame = frame;
    p.countdownValue = countdownValue;
    p.playerIndex = playerIndex;
    pkt.init(PACKET_COUNTDOWN, senderId);
    pkt.setCountdown(p);
    return pkt;
}

// ============================================================================
// Phase 37 — Packet extended methods
// ============================================================================

/* Packet_serialize @ 0x8055b900 */
u32 Packet::serialize(u8* outBuffer, u32 bufferSize) const {
    u32 totalSize = sizeof(PacketHeader) + mHeader.payloadSize;
    if (bufferSize < totalSize) {
        return 0;
    }
    if (!outBuffer) {
        return 0;
    }

    // Write header (big-endian for network byte order)
    // In the original game, the Broadway is big-endian, so no conversion needed.
    // For the PC port, we write in the same format for protocol compatibility.
    const u8* hdrBytes = reinterpret_cast<const u8*>(&mHeader);
    for (u32 i = 0; i < sizeof(PacketHeader); i++) {
        outBuffer[i] = hdrBytes[i];
    }

    // Write payload
    for (u16 i = 0; i < mHeader.payloadSize; i++) {
        outBuffer[sizeof(PacketHeader) + i] = mPayload[i];
    }

    return totalSize;
}

/* Packet_deserialize @ 0x8055b980 */
bool Packet::deserialize(const u8* data, u32 size) {
    if (!data || size < sizeof(PacketHeader)) {
        return false;
    }

    // Read header
    const PacketHeader* hdr = reinterpret_cast<const PacketHeader*>(data);
    if (hdr->payloadSize > MAX_PAYLOAD_SIZE) {
        return false;
    }
    if (size < sizeof(PacketHeader) + hdr->payloadSize) {
        return false;
    }

    memcpy(&mHeader, hdr, sizeof(PacketHeader));

    // Read payload
    if (hdr->payloadSize > 0) {
        memcpy(mPayload, data + sizeof(PacketHeader), hdr->payloadSize);
    }

    return true;
}

/* Packet_isValid @ 0x8055ba00 */
bool Packet::isValid() const {
    // Validate packet type is known
    if (mHeader.type == PACKET_NONE && mHeader.payloadSize == 0) {
        return false; // Empty/idle packet
    }

    // Validate payload size matches expected for type
    u16 expected = getExpectedPayloadSize((PacketType)mHeader.type);
    if (expected > 0 && mHeader.payloadSize != expected) {
        return false;
    }

    // Validate payload doesn't exceed max
    if (mHeader.payloadSize > MAX_PAYLOAD_SIZE) {
        return false;
    }

    return true;
}

/* Packet_setReliable @ 0x8055ba40 */
void Packet::setReliable(bool reliable) {
    mbReliable = reliable;
    // In the original game, reliable packets are sent on the
    // reliable channel of the NWC24 socket, which provides
    // in-order, guaranteed delivery. Unreliable packets use
    // UDP datagrams with no retransmission.
}

/* Packet_setChannel @ 0x8055ba60 */
void Packet::setChannel(u8 channel) {
    mChannel = channel;
    // The network layer uses the channel to multiplex different
    // traffic types over the same socket:
    //   0 = default / race state
    //   1 = room management
    //   2 = item events (high priority)
    //   3 = heartbeat / keepalive
}

/* Packet_computeCRC @ 0x8055bac0 */
u16 Packet::computeCRC() const {
    // CRC16-CCITT (poly 0x1021, init 0xFFFF)
    // Computed over the entire serialized packet (header + payload)
    u16 crc = 0xFFFF;
    const u8* data = reinterpret_cast<const u8*>(&mHeader);
    u32 totalLen = sizeof(PacketHeader) + mHeader.payloadSize;

    for (u32 i = 0; i < totalLen; i++) {
        crc ^= u16(data[i] << 8);
        for (s32 j = 0; j < 8; j++) {
            if (crc & 0x8000) {
                crc = (crc << 1) ^ 0x1021;
            } else {
                crc = crc << 1;
            }
        }
    }

    return crc;
}

// ============================================================================
// Packet Factory
// ============================================================================

/* Packet_createReliable @ 0x8055bc00 */
Packet Packet_createReliable(PacketType type, const u8* payload, u32 size) {
    Packet pkt;
    pkt.init(type, 0); // senderId set by caller later
    if (payload && size > 0) {
        pkt.setPayload(payload, (u16)size);
    }
    pkt.setReliable(true);
    return pkt;
}

} // namespace RKNet