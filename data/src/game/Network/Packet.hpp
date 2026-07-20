#pragma once
// ============================================================================
// Packet.hpp — RKNet::Packet (Network Packet Types)
// Address range: 0x8055a070 - 0x8055fea4
//
// Typed packet structures for MKWii's online protocol. Each packet
// has a PacketHeader prefix followed by a type-specific payload.
//
// The decompiled code shows:
//   - Packet buffer allocated at 0x870 bytes (0x8055a40c)
//   - Send mode field at offset 0x14 (1=direct, 2=reliable)
//   - Init flag at offset 0x20
//   - Pending count at offset 0x41F4
//   - Packet types: 0x14=idle, 0x28=player join, 0x03/0x07=ack variants
//   - Character value '0x17' checked in join packets (0x805508fc)
//   - Position data uses 3-u32 coordinates
//   - Item events use (player, itemId, frame) tuples
//   - Course votes use packed u8 courseId
//   - Countdown sync uses (frame, value, player) triple
//
// Categorization: GENESIS Phase 5 (Network Module)
// ============================================================================

#include "rk_common.h"
#include "NetworkTypes.hpp"

namespace RKNet {

// ============================================================================
// Packet Payload Structures
// ============================================================================

#pragma pack(push, 1)

// Player Join (type = PACKET_PLAYER_JOIN)
struct PlayerJoinPayload {
    u8  playerId;       // Local player index in room
    u8  characterId;
    u8  vehicleId;
    u8  driftIsAuto;    // 0=Manual, 1=Auto
    u32 friendCodeHi;
    u32 friendCodeMid;
    u32 friendCodeLo;
    u8  miiData[0x60];  // Mii data
    u16 vr;             // Versus Rating
    u16 br;             // Battle Rating
    u8  region;         // Player's region
    u8  _pad[0x03];
}; // Total: 0x78 bytes

// Player Leave (type = PACKET_PLAYER_LEAVE)
struct PlayerLeavePayload {
    u8  playerId;
    u8  reason;         // 0=voluntary, 1=timeout, 2=kicked, 3=error
    u8  _pad[0x02];
};

// Race State Update (type = PACKET_RACE_STATE)
struct RaceStatePayload {
    u32 frame;          // Current race frame
    u8  playerCount;    // Number of active players
    u8  leaderId;       // Player currently in 1st
    u8  lapNumber;      // Current lap (0-based)
    u8  _pad;
    // Per-player mini state (variable length)
    // u8  positions[12]; // player position for each
};

// Item Event (type = PACKET_ITEM_EVENT)
struct ItemEventPayload {
    u8  playerIndex;
    u8  itemId;
    u8  targetPlayer;   // 0xFF if no target
    u8  _pad;
    u32 frame;
    u32 positionX;
    u32 positionY;
    u32 positionZ;
};

// Player Update (type = PACKET_PLAYER_UPDATE)
struct PlayerUpdatePayload {
    u32 frame;
    u32 positionX;
    u32 positionY;
    u32 positionZ;
    u32 rotationY;
    u8  speed;          // Normalized speed (0-255)
    u8  steering;       // Steering angle (-128 to 127)
    u8  itemHeld;
    u8  _pad;
};

// Room Info (type = PACKET_ROOM_INFO)
struct RoomInfoPayload {
    u32 roomId;
    u8  hostPlayerId;
    u8  playerCount;
    u8  maxPlayers;
    u8  state;          // Room::State
    u32 settingsMask;   // Engine class, teams, etc.
    char roomName[0x20];
};

// Room Settings (type = PACKET_ROOM_SETTINGS)
struct RoomSettingsPayload {
    u8  engineClass;    // 50cc=0, 100cc=1, 150cc=2, Mirror=3
    u8  isTeamRace;
    u8  controllerRestriction;
    u8  _pad;
    u32 settingsId;
};

// Character Select (type = PACKET_CHARACTER_SELECT)
struct CharacterSelectPayload {
    u8  playerIndex;
    u8  characterId;
    u8  vehicleId;
    u8  driftIsAuto;
};

// Course Vote (type = PACKET_COURSE_SELECT)
struct CourseVotePayload {
    u8  playerIndex;
    u8  courseId;
    u8  _pad[0x02];
};

// Countdown Sync (type = PACKET_COUNTDOWN)
struct CountdownPayload {
    u32 frame;          // Frame when countdown advances
    u8  countdownValue; // 3, 2, 1, GO
    u8  playerIndex;
    u8  _pad[0x02];
};

// Ack Packet (type = PACKET_ACK)
struct AckPayload {
    u32 receivedSeq;    // Highest sequence number received
    u32 ackBits;        // Bitfield of received sequences below receivedSeq
};

#pragma pack(pop)

// ============================================================================
// Packet — Typed Network Packet
// ============================================================================

class Packet {
public:
    Packet();
    ~Packet();

    // --- Construction ---
    // Initialize a packet with given type
    void init(PacketType type, u8 senderId);

    // --- Header Access ---
    const PacketHeader& getHeader() const { return mHeader; }
    PacketHeader& getHeader() { return mHeader; }

    PacketType getType() const { return (PacketType)mHeader.type; }
    u8 getSenderId() const { return mHeader.senderId; }
    u16 getPayloadSize() const { return mHeader.payloadSize; }
    u32 getSequence() const { return mHeader.sequence; }
    u32 getAckBits() const { return mHeader.ackBits; }

    // --- Payload Access ---
    // Returns pointer to payload data (after header)
    u8* getPayload() { return mPayload; }
    const u8* getPayload() const { return mPayload; }

    // Typed payload accessors (returns nullptr if wrong type)
    const PlayerJoinPayload* asPlayerJoin() const;
    const PlayerLeavePayload* asPlayerLeave() const;
    const RaceStatePayload* asRaceState() const;
    const ItemEventPayload* asItemEvent() const;
    const PlayerUpdatePayload* asPlayerUpdate() const;
    const RoomInfoPayload* asRoomInfo() const;
    const RoomSettingsPayload* asRoomSettings() const;
    const CharacterSelectPayload* asCharacterSelect() const;
    const CourseVotePayload* asCourseVote() const;
    const CountdownPayload* asCountdown() const;
    const AckPayload* asAck() const;

    // --- Payload Writing ---
    // Set payload from typed struct
    void setPayload(const void* data, u16 size);
    void setPlayerJoin(const PlayerJoinPayload& p);
    void setPlayerLeave(const PlayerLeavePayload& p);
    void setCharacterSelect(const CharacterSelectPayload& p);
    void setCourseVote(const CourseVotePayload& p);
    void setCountdown(const CountdownPayload& p);
    void setAck(const AckPayload& p);

    // --- Validation ---
    // @addr 0x8055b8a0
    bool validateChecksum() const;

    // @addr 0x8055baa8
    bool isForPlayer(u8 playerId) const { return mHeader.senderId == playerId; }

    // @addr 0x8055bde8
    u8 getSenderIdUnchecked() const { return mHeader.senderId; }

    // --- Size Queries ---
    // @addr 0x8055b180 — get payload size for a packet type
    static u16 getExpectedPayloadSize(PacketType type);

    // @addr 0x8055b3bc — maximum payload for a type
    static u16 getMaxPayloadSize(PacketType type);

    // @addr 0x8055b498 — header + expected payload
    static u16 getFullPacketSize(PacketType type);

    // Total serialized size of this packet
    u16 getTotalSize() const { return sizeof(PacketHeader) + mHeader.payloadSize; }

    // Maximum payload capacity
    static const u16 MAX_PAYLOAD_SIZE = 512;
    static const u16 FULL_BUFFER_SIZE = sizeof(PacketHeader) + MAX_PAYLOAD_SIZE;

    // --- Phase 37 additions ---

    // Serialize packet to byte buffer (writes header + payload)
    // Returns number of bytes written
    // @addr 0x8055b900
    u32 serialize(u8* outBuffer, u32 bufferSize) const;

    // Deserialize from byte buffer (reads header + payload)
    // Returns true on success
    // @addr 0x8055b980
    bool deserialize(const u8* data, u32 size);

    // Check if packet is valid (magic, length, CRC)
    // @addr 0x8055ba00
    bool isValid() const;

    // Mark packet as reliable or unordered delivery
    // @addr 0x8055ba40
    void setReliable(bool reliable);

    // Set network channel for this packet
    // @addr 0x8055ba60
    void setChannel(u8 channel);

    // Get the monotonically increasing sequence number
    // @addr 0x8055ba80
    u32 getSequenceNumber() const { return mHeader.sequence; }

    // Compute CRC16-CCITT checksum over header + payload
    // @addr 0x8055bac0
    u16 computeCRC() const;

    // Check if packet is marked as reliable
    bool isReliable() const { return mbReliable; }

    // Get the network channel
    u8 getChannel() const { return mChannel; }

    // Set sequence number for this packet
    void setSequence(u32 seq) { mHeader.sequence = seq; }

private:
    PacketHeader mHeader;
    u8          mPayload[MAX_PAYLOAD_SIZE];
    bool mbReliable;         // Reliable delivery flag
    u8  mChannel;            // Network channel (0=default)
};

// ============================================================================
// PacketBuilder — Helper for constructing common packets
// ============================================================================

class PacketBuilder {
public:
    // Build an ACK packet
    static Packet createAck(u8 senderId, u32 receivedSeq, u32 ackBits);

    // Build a player update packet
    static Packet createPlayerUpdate(u8 senderId, u32 frame,
        u32 posX, u32 posY, u32 posZ, u32 rotY,
        u8 speed, s8 steering, u8 itemHeld);

    // Build an item event packet
    static Packet createItemEvent(u8 senderId, u32 frame,
        u8 itemId, u8 targetPlayer, u32 posX, u32 posY, u32 posZ);

    // Build a countdown packet
    static Packet createCountdown(u8 senderId, u32 frame,
        u8 countdownValue, u8 playerIndex);
};

// PacketHeader utility methods
namespace PacketHeaderUtil {
    // Initialize header fields to safe defaults
    // @addr 0x8055bb00
    inline void init(PacketHeader& hdr) {
        hdr.type = 0;
        hdr.senderId = 0;
        hdr.payloadSize = 0;
        hdr.sequence = 0;
        hdr.ackBits = 0;
    }

    // Get human-readable packet type name
    // @addr 0x8055bb40
    inline const char* getTypeName(u8 type) {
        switch (type) {
            case PACKET_NONE:           return "NONE";
            case PACKET_PLAYER_JOIN:    return "PLAYER_JOIN";
            case PACKET_PLAYER_LEAVE:   return "PLAYER_LEAVE";
            case PACKET_RACE_STATE:     return "RACE_STATE";
            case PACKET_ITEM_EVENT:     return "ITEM_EVENT";
            case PACKET_PLAYER_UPDATE:  return "PLAYER_UPDATE";
            case PACKET_LAP_COMPLETE:   return "LAP_COMPLETE";
            case PACKET_RACE_END:       return "RACE_END";
            case PACKET_ROOM_INFO:      return "ROOM_INFO";
            case PACKET_ROOM_SETTINGS:  return "ROOM_SETTINGS";
            case PACKET_COUNTDOWN:      return "COUNTDOWN";
            case PACKET_CHARACTER_SELECT: return "CHARACTER_SELECT";
            case PACKET_VEHICLE_SELECT: return "VEHICLE_SELECT";
            case PACKET_COURSE_SELECT:  return "COURSE_SELECT";
            case PACKET_GHOST_DATA:     return "GHOST_DATA";
            case PACKET_HEARTBEAT:      return "HEARTBEAT";
            case PACKET_ACK:            return "ACK";
            case PACKET_ERROR:          return "ERROR";
            default:                    return "UNKNOWN";
        }
    }
}

// Factory: create a reliable (ordered) packet with given type and payload
// @addr 0x8055bc00
Packet Packet_createReliable(PacketType type, const u8* payload, u32 size);

// Free function: get type name
const char* Packet_getTypeName(u8 type);

} // namespace RKNet