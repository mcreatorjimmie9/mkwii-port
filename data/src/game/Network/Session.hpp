#pragma once
// ============================================================================
// Session.hpp — RKNet::Session (Race Session)
// Address range: 0x805565b0 - 0x80559fa4
//
// Manages a single online race session from countdown to results.
// A Session is created when a room transitions to COURSE_VOTE and
// destroyed when the player returns to the room lobby.
//
// The decompiled code shows:
//   - Session state at global offset 0xB74 (0=idle, 6=cleanup)
//   - Race frame counter at offset 0x20
//   - Player count at offset 0x24
//   - Room index at offset 0x291C (into 0x58-stride room array)
//   - Per-player session data at offset +0x14 from room base, stride 0x58
//   - Match validation (0x805565b0) checks settings and course IDs
//   - Race input broadcasting (0x805585fc) uses frame-based indexing
//   - Position sync (0x80558fa8) uses local/remote frame alignment
//   - Item events (0x80558c24) are sent with player+item+frame
//   - Race results (0x8055946c) determine finish order
//
// Categorization: GENESIS Phase 5 (Network Module)
// ============================================================================

#include "rk_common.h"
#include "NetworkTypes.hpp"

class RKNetConnectionManager;
class PacketHandler;

// ============================================================================
// Session State Machine
// ============================================================================

namespace RKNet {

enum SessionState {
    SESSION_IDLE         = 0,
    SESSION_SETTING_UP   = 1,
    SESSION_COUNTDOWN    = 2,
    SESSION_RACING       = 3,
    SESSION_FINISHED     = 4,
    SESSION_RESULTS      = 5,
    SESSION_CLEANUP      = 6,
};

// Session configuration (course, engine class, etc.)
struct SessionConfig {
    u8  courseId;         // Which course is being raced
    u8  engineClass;      // 50cc, 100cc, 150cc, Mirror
    u8  lapCount;         // Number of laps (usually 3)
    u8  controllerRestriction; // 0: none, 1: wheel only, etc.
    u8  isTeamRace;       // 0: FFA, 1: team vs
    u8  _pad[0x03];
    u32 settingsId;       // Match settings identifier
};

// Per-player race state for a session
struct PlayerRaceState {
    u32 finishTime;       // Total race time in ms (0 = DNF)
    u8  finishPosition;   // 1-12 (0 = not finished)
    u8  lapCount;         // Current lap (0-based)
    u8  lastCheckpoint;   // Last checkpoint passed
    u8  _pad0;
    u32 lastFrameReceived; // Last input frame received from this player
    u32 positionX;        // Latest known X position (fixed point)
    u32 positionY;        // Latest known Y position (fixed point)
    u32 positionZ;        // Latest known Z position (fixed point)
    u32 rotationY;        // Latest known Y rotation (fixed point)
    u8  itemHeld;         // Currently held item
    u8  isFinished;       // 1 if player crossed finish line
    u8  isDisconnected;   // 1 if player disconnected during race
    u8  _pad1;
    u32 _reserved[4];
};

// ============================================================================
// Session — Online Race Session
// ============================================================================

class Session {
public:
    Session();
    ~Session();

    // --- Lifecycle ---
    // @addr 0x805565b0 — validateMatchSettings
    s32 begin(const SessionConfig& config, u8 playerCount);

    // End the session, compute results
    // @addr 0x8055946c-0x80559508
    s32 end();

    // Reset for next race (in same room)
    void reset();

    // --- Configuration ---
    const SessionConfig& getConfig() const { return mConfig; }
    void setCourseId(u8 courseId) { mConfig.courseId = courseId; }

    // @addr 0x80556648 — updateMatchSettings
    void updateConfig(const SessionConfig& config) { mConfig = config; }

    // --- Validation ---
    // @addr 0x805565b0
    s32 validateMatchSettings(int settingsId, int courseId) const;
    // @addr 0x805565f0
    s32 validatePlayerSettings(int settingsId, int playerId) const;

    // --- Race Frame Management ---
    // The decompiled code uses a global frame counter at offset 0x20
    void startRace();
    void advanceFrame();
    u32 getRaceFrame() const { return mRaceFrame; }

    // --- Race Input ---
    // @addr 0x805585fc — sendRaceInput
    s32 sendRaceInput(u8 playerIndex, u32 inputFrame, u16 inputData);

    // @addr 0x80558718 — receiveRaceInput
    u32 receiveRaceInput(u8 playerIndex, u32 inputFrame);

    // @addr 0x80558ab8 — getLatestInputFrame
    u32 getLatestInputFrame(u8 playerIndex) const;

    // @addr 0x80558ac4 — getInputFrameDelta
    s32 getInputFrameDelta(u8 playerIndex, u32 inputFrame, u32 reference) const;

    // @addr 0x805589a8 — validateRaceInput
    s32 validateRaceInput(u8 playerIndex, u32 inputFrame) const;

    // --- Item Synchronization ---
    // @addr 0x80558c24
    u32 sendItemEvent(u8 playerIndex, u32 itemId, u32 frame);

    // @addr 0x80558ccc
    s32 processItemEvent(u8 playerIndex, u32 frame);

    // @addr 0x80558d5c
    u32 validateItemState(u8 playerIndex, u32 itemId, u32 frame) const;

    // @addr 0x80558e64
    u32 getItemFrame(u8 playerIndex, u32 itemId) const;

    // --- Position Synchronization ---
    // @addr 0x80558fa8
    void syncPlayerPositions(u32 localFrame, u32 remoteFrame);

    // @addr 0x805591b0
    void syncPlayerRotation(u32 localFrame, u32 remoteFrame, u32 remoteFrame2);

    // @addr 0x80559214
    u32 validatePositionData(u8 playerIndex, u32 frame) const;

    // @addr 0x805593a0
    u32 getInterpolatedPosition(u8 playerIndex) const;

    // --- Race State ---
    // @addr 0x80557d54
    u32 getRaceProgress() const;

    // @addr 0x80557df8
    u32 validateRaceState(u32 frame, u32 expected, u8 player) const;

    // @addr 0x80557f2c
    u32 compareRaceState(u32 frame, u32 state1, u32 state2) const;

    // --- Results ---
    // @addr 0x8055946c
    u8 getPlayerFinishPosition(u8 playerIndex) const;

    // @addr 0x80559488
    void submitRaceResult(u8 playerIndex, u32 finishTime);

    // @addr 0x80559c98
    void computeResults();

    // --- State ---
    SessionState getState() const { return mState; }
    u8 getPlayerCount() const { return mPlayerCount; }
    bool isRacing() const { return mState == SESSION_RACING; }

    // Access per-player state
    const PlayerRaceState* getPlayerState(u8 playerIndex) const;
    PlayerRaceState* getPlayerStateMutable(u8 playerIndex);

private:
    SessionState  mState;
    SessionConfig mConfig;
    u32           mRaceFrame;
    u8            mPlayerCount;
    u8            mFinishCount;     // how many players have finished
    u8            _pad[2];

    // Per-player race state (12 players max)
    PlayerRaceState mPlayerStates[12];

    // Item event tracking per player
    u32 mItemFrames[12][16]; // last frame each item was used
    u8  mItemCount[12];       // count of items used by each player
};

} // namespace RKNet