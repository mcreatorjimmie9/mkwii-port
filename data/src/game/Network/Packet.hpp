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

private:
    PacketHeader mHeader;
    u8          mPayload[MAX_PAYLOAD_SIZE];
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

} // namespace RKNet