#pragma once
// CheckpointSystem.hpp — Lap Validation Checkpoint Manager
// GENESIS Phase 27: Manages checkpoint gates, lap crossing detection,
// race leader tracking, and finish-line authority.
// Original addresses: 0x804C2000–0x804C3000
//
// MKW uses a sequential checkpoint system: each course has a series of
// checkpoint gates that must be crossed in order. The start/finish line
// is both checkpoint 0 and the lap completion gate. Going backward or
// skipping checkpoints triggers a "wrong way" or lap invalidation.

#include <rk_types.h>
#include <rk_common.h>
#include <egg/math/eggVector.hpp>

namespace Field {

// Checkpoint gate definition
struct CheckpointGate {
    EGG::Vector3f position;     // Gate center position
    EGG::Vector3f normal;       // Gate plane normal (direction of travel)
    f32 halfWidth;              // Half-width of gate detection zone
    f32 halfHeight;             // Half-height of gate detection zone
    s32 sequenceIndex;           // Position in checkpoint sequence (0 = S/F)
    u8 isRequired;              // 1 if this checkpoint must be crossed for valid lap
};

// Per-player checkpoint state
struct PlayerCheckpointState {
    s32 nextCheckpoint;          // Index of next expected checkpoint in sequence
    s32 currentLap;              // Current lap number (1-indexed)
    s32 lastValidLapTime;        // Frame count when last valid lap completed
    s32 wrongWayTimer;          // Frames spent going wrong way (0 = OK)
    bool mbFinished;             // True when player has finished the race
    bool mbMissedCheckpoint;     // True if player skipped a required checkpoint
    s32 totalCheckpointsHit;    // Cumulative checkpoint crossings
};

// Checkpoint system — manages all checkpoint gates and per-player lap state
class CheckpointSystem {
public:
    /* CheckpointSystem_ctor @ 0x804C2100 */
    CheckpointSystem();
    /* CheckpointSystem_dtor @ 0x804C2140 */
    ~CheckpointSystem();

    // Initialize checkpoint system for a given course
    /* CheckpointSystem_init @ 0x804C2180 */
    void init(u32 courseId, u8 lapCount);

    // Load checkpoint gates from course data
    /* CheckpointSystem_loadGates @ 0x804C2200 */
    bool loadGates();

    // Update checkpoint system — check all players against gates
    /* CheckpointSystem_update @ 0x804C2300 */
    void update();

    // Check if a player has crossed a checkpoint gate this frame
    // Returns true if the crossing was valid (in sequence)
    /* CheckpointSystem_checkCrossing @ 0x804C2400 */
    bool checkCrossing(s32 playerIdx, const EGG::Vector3f& prevPos,
                       const EGG::Vector3f& currPos);

    // Get a player's current checkpoint state
    /* CheckpointSystem_getPlayerState @ 0x804C2500 */
    const PlayerCheckpointState& getPlayerState(s32 playerIdx) const;

    // Get a player's current lap number
    s32 getPlayerLap(s32 playerIdx) const;

    // Get a player's current race progress (0.0 = start, 1.0 = finished)
    /* CheckpointSystem_getProgress @ 0x804C2600 */
    f32 getProgress(s32 playerIdx) const;

    // Get total number of checkpoint gates
    s32 getGateCount() const;

    // Get checkpoint gate by index
    const CheckpointGate* getGate(s32 gateIdx) const;

    // Determine the race leader (player with most progress)
    /* CheckpointSystem_getLeaderIdx @ 0x804C2700 */
    s32 getLeaderIdx() const;

    // Reset all player states (for race restart)
    /* CheckpointSystem_reset @ 0x804C2800 */
    void reset();

    // Mark a player as finished
    /* CheckpointSystem_markFinished @ 0x804C2900 */
    void markFinished(s32 playerIdx);

    // Check if all human players have finished
    /* CheckpointSystem_allHumansFinished @ 0x804C2A00 */
    bool allHumansFinished(s32 humanCount) const;

    // Load checkpoint gates from KMP file data
    bool loadFromKMP(const u8* kmpData, u32 kmpSize);

    // Convenience: check a player crossing
    bool checkPoint(s32 playerIdx, const EGG::Vector3f& prevPos,
                   const EGG::Vector3f& currPos);

    // Get total lap count for this race
    u8 getLapCount() const;

    // Check if a player has valid checkpoint order
    bool isValidOrder(s32 playerIdx) const;

    // Find nearest checkpoint gate to a position
    s32 getNearestCheckpoint(const EGG::Vector3f& pos) const;

    // Get wrong-way timer for a player
    s32 getWrongWayTimer(s32 playerIdx) const;

    // Check if a specific player has finished
    bool isPlayerFinished(s32 playerIdx) const;

    // Get finish line position
    EGG::Vector3f getFinishLinePosition() const;

    // Set the number of active players
    void setPlayerCount(s32 count);

    // Get total checkpoint crossings for a player
    s32 getTotalCheckpointsHit(s32 playerIdx) const;

private:
    static const s32 MAX_GATES = 64;
    static const u8  DEFAULT_LAP_COUNT = 3;

    // Test if a line segment crosses a checkpoint plane
    bool testGateCrossing(const CheckpointGate& gate,
                          const EGG::Vector3f& prevPos,
                          const EGG::Vector3f& currPos) const;

    // Update wrong-way detection for a player
    void updateWrongWay(s32 playerIdx, const EGG::Vector3f& velocity);

    u32 mCourseId;
    u8 mLapCount;
    CheckpointGate mGates[MAX_GATES];
    s32 mGateCount;
    PlayerCheckpointState mPlayerStates[MAX_PLAYER_COUNT];
    s32 mPlayerCount;
    f32 mFinishLineX;           // S/F line X position
    f32 mFinishLineZ;           // S/F line Z position
};

} // namespace Field
