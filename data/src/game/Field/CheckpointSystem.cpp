// CheckpointSystem.cpp — Lap Validation Checkpoint Manager Implementation
// GENESIS Phase 27a
// Original addresses: 0x804C2000–0x804C3000

#include "CheckpointSystem.hpp"
#include <cmath>

namespace Field {

/* CheckpointSystem_ctor @ 0x804C2100 */
CheckpointSystem::CheckpointSystem()
    : mCourseId(0)
    , mLapCount(DEFAULT_LAP_COUNT)
    , mGateCount(0)
    , mPlayerCount(0)
    , mFinishLineX(0.0f)
    , mFinishLineZ(-100.0f)
{
    for (s32 i = 0; i < MAX_GATES; i++) {
        mGates[i].halfWidth = 0.0f;
        mGates[i].halfHeight = 0.0f;
        mGates[i].sequenceIndex = 0;
        mGates[i].isRequired = 0;
        mGates[i].position = EGG::Vector3f::zero;
        mGates[i].normal = EGG::Vector3f(0.0f, 0.0f, 1.0f);
    }
    for (s32 i = 0; i < MAX_PLAYER_COUNT; i++) {
        mPlayerStates[i].nextCheckpoint = 0;
        mPlayerStates[i].currentLap = 0;
        mPlayerStates[i].lastValidLapTime = 0;
        mPlayerStates[i].wrongWayTimer = 0;
        mPlayerStates[i].mbFinished = false;
        mPlayerStates[i].mbMissedCheckpoint = false;
        mPlayerStates[i].totalCheckpointsHit = 0;
    }
}

/* CheckpointSystem_dtor @ 0x804C2140 */
CheckpointSystem::~CheckpointSystem() {
    // No dynamic allocation — arrays are static-sized
}

/* CheckpointSystem_init @ 0x804C2180 */
void CheckpointSystem::init(u32 courseId, u8 lapCount) {
    mCourseId = courseId;
    mLapCount = lapCount > 0 ? lapCount : DEFAULT_LAP_COUNT;
    mGateCount = 0;
    mPlayerCount = MAX_PLAYER_COUNT;

    // Reset all player states
    for (s32 i = 0; i < MAX_PLAYER_COUNT; i++) {
        mPlayerStates[i].nextCheckpoint = 0;
        mPlayerStates[i].currentLap = 0;
        mPlayerStates[i].lastValidLapTime = 0;
        mPlayerStates[i].wrongWayTimer = 0;
        mPlayerStates[i].mbFinished = false;
        mPlayerStates[i].mbMissedCheckpoint = false;
        mPlayerStates[i].totalCheckpointsHit = 0;
    }

    loadGates();
}

/* CheckpointSystem_loadGates @ 0x804C2200 */
bool CheckpointSystem::loadGates() {
    // In the original game, checkpoint gates are loaded from the JMap
    // "cpra" (checkpoint area) entries in the course's BCSV data.
    // Each "cpra" entry defines a plane gate with position, direction,
    // and sequence index.
    //
    // For now, generate a standard 4-gate layout per course:
    // Gate 0: Start/Finish line (sequence index 0)
    // Gate 1-3: Intermediate checkpoints (sequence 1-3)

    mGateCount = 4;
    const f32 gateWidth = 100.0f;
    const f32 gateHeight = 30.0f;

    // Gate 0: Start/Finish line
    mGates[0].position = EGG::Vector3f(0.0f, 0.0f, -100.0f);
    mGates[0].normal = EGG::Vector3f(0.0f, 0.0f, 1.0f);
    mGates[0].halfWidth = gateWidth;
    mGates[0].halfHeight = gateHeight;
    mGates[0].sequenceIndex = 0;
    mGates[0].isRequired = 1;
    mFinishLineX = 0.0f;
    mFinishLineZ = -100.0f;

    // Gate 1: First corner checkpoint
    mGates[1].position = EGG::Vector3f(400.0f, 0.0f, 200.0f);
    mGates[1].normal = EGG::Vector3f(-1.0f, 0.0f, 0.0f);
    mGates[1].halfWidth = gateWidth;
    mGates[1].halfHeight = gateHeight;
    mGates[1].sequenceIndex = 1;
    mGates[1].isRequired = 1;

    // Gate 2: Far end checkpoint
    mGates[2].position = EGG::Vector3f(0.0f, 0.0f, 500.0f);
    mGates[2].normal = EGG::Vector3f(0.0f, 0.0f, -1.0f);
    mGates[2].halfWidth = gateWidth;
    mGates[2].halfHeight = gateHeight;
    mGates[2].sequenceIndex = 2;
    mGates[2].isRequired = 1;

    // Gate 3: Third corner checkpoint
    mGates[3].position = EGG::Vector3f(-400.0f, 0.0f, 200.0f);
    mGates[3].normal = EGG::Vector3f(1.0f, 0.0f, 0.0f);
    mGates[3].halfWidth = gateWidth;
    mGates[3].halfHeight = gateHeight;
    mGates[3].sequenceIndex = 3;
    mGates[3].isRequired = 1;

    return true;
}

/* CheckpointSystem_update @ 0x804C2300 */
void CheckpointSystem::update() {
    // Frame update — wrong way timers decay and finished players are
    // flagged. The actual crossing detection happens in checkCrossing()
    // which is called per-player from the race update loop.
    for (s32 i = 0; i < mPlayerCount; i++) {
        PlayerCheckpointState& state = mPlayerStates[i];
        if (state.mbFinished) {
            continue;
        }
        // Decay wrong-way timer
        if (state.wrongWayTimer > 0) {
            state.wrongWayTimer--;
        }
    }
}

/* CheckpointSystem_checkCrossing @ 0x804C2400 */
bool CheckpointSystem::checkCrossing(s32 playerIdx,
                                     const EGG::Vector3f& prevPos,
                                     const EGG::Vector3f& currPos) {
    if (playerIdx < 0 || playerIdx >= mPlayerCount) {
        return false;
    }

    PlayerCheckpointState& state = mPlayerStates[playerIdx];
    if (state.mbFinished) {
        return false;
    }

    // Check velocity for wrong-way detection
    EGG::Vector3f velocity = currPos - prevPos;
    updateWrongWay(playerIdx, velocity);

    // Test against all gates
    for (s32 g = 0; g < mGateCount; g++) {
        const CheckpointGate& gate = mGates[g];

        // Only check the gate if it's the player's next expected checkpoint
        if (gate.sequenceIndex != state.nextCheckpoint) {
            continue;
        }

        if (!testGateCrossing(gate, prevPos, currPos)) {
            continue;
        }

        // Valid crossing detected
        state.nextCheckpoint++;
        state.totalCheckpointsHit++;

        // Check if this was the start/finish line (lap completion)
        if (gate.sequenceIndex == 0 && state.currentLap > 0) {
            // Lap completed — check for missed checkpoints
            if (state.mbMissedCheckpoint) {
                // Invalidate lap — player skipped a required checkpoint
                state.mbMissedCheckpoint = false;
            } else {
                // Valid lap completion
                state.currentLap++;
                if (state.currentLap >= mLapCount) {
                    state.mbFinished = true;
                }
            }
        } else if (gate.sequenceIndex == 0 && state.currentLap == 0) {
            // First time crossing start line — begin lap 1
            state.currentLap = 1;
        }

        // Wrap around checkpoint sequence for multi-lap races
        // After crossing the last intermediate checkpoint, next expected
        // is back to gate 0 (S/F line) for lap completion
        if (state.nextCheckpoint >= mGateCount) {
            state.nextCheckpoint = 0;
        }

        return true;
    }

    // Check if player crossed any required gate out of sequence
    // This indicates a missed checkpoint
    for (s32 g = 0; g < mGateCount; g++) {
        const CheckpointGate& gate = mGates[g];
        if (!gate.isRequired) {
            continue;
        }
        if (gate.sequenceIndex > state.nextCheckpoint &&
            testGateCrossing(gate, prevPos, currPos)) {
            state.mbMissedCheckpoint = true;
            break;
        }
    }

    return false;
}

/* CheckpointSystem_testGateCrossing @ 0x804C2450 (internal) */
bool CheckpointSystem::testGateCrossing(const CheckpointGate& gate,
                                         const EGG::Vector3f& prevPos,
                                         const EGG::Vector3f& currPos) const {
    // Signed distance from gate plane: dot(position - gatePos, normal)
    // A crossing occurs when the sign changes between frames
    EGG::Vector3f prevRel = prevPos - gate.position;
    EGG::Vector3f currRel = currPos - gate.position;

    f32 prevDist = prevRel.x * gate.normal.x +
                   prevRel.y * gate.normal.y +
                   prevRel.z * gate.normal.z;
    f32 currDist = currRel.x * gate.normal.x +
                   currRel.y * gate.normal.y +
                   currRel.z * gate.normal.z;

    // Must cross from negative to positive side
    if (prevDist >= 0.0f || currDist <= 0.0f) {
        return false;
    }

    // Check if crossing point is within gate bounds
    f32 t = prevDist / (prevDist - currDist);
    f32 crossX = prevPos.x + t * (currPos.x - prevPos.x);
    f32 crossY = prevPos.y + t * (currPos.y - prevPos.y);
    f32 crossZ = prevPos.z + t * (currPos.z - prevPos.z);

    // Check width/height bounds relative to gate center
    if (crossY < gate.position.y - gate.halfHeight ||
        crossY > gate.position.y + gate.halfHeight) {
        return false;
    }

    // Project onto gate plane to check width bounds
    // Use the two tangent directions perpendicular to normal
    // Simplified: just check X and Z distance from center
    EGG::Vector3f crossPoint(crossX, crossY, crossZ);
    f32 lateralDist = std::fabs(crossPoint.x - gate.position.x) +
                      std::fabs(crossPoint.z - gate.position.z);
    if (lateralDist > gate.halfWidth) {
        return false;
    }

    return true;
}

/* CheckpointSystem_updateWrongWay @ 0x804C2500 (internal) */
void CheckpointSystem::updateWrongWay(s32 playerIdx, const EGG::Vector3f& velocity) {
    PlayerCheckpointState& state = mPlayerStates[playerIdx];
    if (state.nextCheckpoint <= 0 || state.nextCheckpoint >= mGateCount) {
        return;
    }

    // Get the expected direction of travel (toward next checkpoint)
    const CheckpointGate& nextGate = mGates[state.nextCheckpoint];
    EGG::Vector3f toGate = nextGate.position - velocity; // simplified

    // Dot product of velocity with expected direction
    f32 dot = velocity.x * nextGate.normal.x +
             velocity.y * nextGate.normal.y +
             velocity.z * nextGate.normal.z;

    // If moving significantly opposite to expected direction
    if (dot < -5.0f) {
        state.wrongWayTimer = 60; // 1 second of wrong-way display
    }
}

/* CheckpointSystem_getPlayerState @ 0x804C2600 */
const PlayerCheckpointState& CheckpointSystem::getPlayerState(s32 playerIdx) const {
    return mPlayerStates[playerIdx];
}

/* CheckpointSystem_getPlayerLap */
s32 CheckpointSystem::getPlayerLap(s32 playerIdx) const {
    if (playerIdx < 0 || playerIdx >= mPlayerCount) {
        return 0;
    }
    return mPlayerStates[playerIdx].currentLap;
}

/* CheckpointSystem_getProgress @ 0x804C2700 */
f32 CheckpointSystem::getProgress(s32 playerIdx) const {
    if (playerIdx < 0 || playerIdx >= mPlayerCount) {
        return 0.0f;
    }
    const PlayerCheckpointState& state = mPlayerStates[playerIdx];
    if (state.mbFinished) {
        return 1.0f;
    }
    if (mGateCount <= 1) {
        return 0.0f;
    }
    // Progress = completed_laps + (checkpoints_hit / total_gates) / total_laps
    f32 checkpointProgress = (f32)state.nextCheckpoint / (f32)mGateCount;
    f32 lapProgress = (f32)(state.currentLap) + checkpointProgress;
    return lapProgress / (f32)mLapCount;
}

/* CheckpointSystem_getGateCount */
s32 CheckpointSystem::getGateCount() const {
    return mGateCount;
}

/* CheckpointSystem_getGate */
const CheckpointGate* CheckpointSystem::getGate(s32 gateIdx) const {
    if (gateIdx < 0 || gateIdx >= mGateCount) {
        return nullptr;
    }
    return &mGates[gateIdx];
}

/* CheckpointSystem_getLeaderIdx @ 0x804C2800 */
s32 CheckpointSystem::getLeaderIdx() const {
    s32 leaderIdx = -1;
    f32 maxProgress = -1.0f;
    for (s32 i = 0; i < mPlayerCount; i++) {
        f32 progress = getProgress(i);
        if (progress > maxProgress) {
            maxProgress = progress;
            leaderIdx = i;
        }
    }
    return leaderIdx;
}

/* CheckpointSystem_reset @ 0x804C2900 */
void CheckpointSystem::reset() {
    for (s32 i = 0; i < MAX_PLAYER_COUNT; i++) {
        mPlayerStates[i].nextCheckpoint = 0;
        mPlayerStates[i].currentLap = 0;
        mPlayerStates[i].lastValidLapTime = 0;
        mPlayerStates[i].wrongWayTimer = 0;
        mPlayerStates[i].mbFinished = false;
        mPlayerStates[i].mbMissedCheckpoint = false;
        mPlayerStates[i].totalCheckpointsHit = 0;
    }
}

/* CheckpointSystem_markFinished @ 0x804C2A00 */
void CheckpointSystem::markFinished(s32 playerIdx) {
    if (playerIdx >= 0 && playerIdx < mPlayerCount) {
        mPlayerStates[playerIdx].mbFinished = true;
        mPlayerStates[playerIdx].currentLap = mLapCount;
    }
}

/* CheckpointSystem_allHumansFinished @ 0x804C2B00 */
bool CheckpointSystem::allHumansFinished(s32 humanCount) const {
    s32 finished = 0;
    for (s32 i = 0; i < humanCount && i < mPlayerCount; i++) {
        if (mPlayerStates[i].mbFinished) {
            finished++;
        }
    }
    return finished >= humanCount;
}

// @addr 0x804C2C00 (estimated)
// loadFromKMP — Load checkpoint gates from a KMP file buffer.
// Parses the CPRA (checkpoint area) section of the course KMP data.
bool CheckpointSystem::loadFromKMP(const u8* kmpData, u32 kmpSize) {
    if (!kmpData || kmpSize < 0x20) {
        return false;
    }
    // In the full implementation, this would parse the KMP header
    // to find the CPRA section offset and count, then read each
    // checkpoint gate's position, normal, half-width, and sequence index.
    // For now, fall back to the default gate layout.
    return loadGates();
}

// @addr 0x804C2D00 (estimated)
// checkPoint — Convenience method: check a single player's crossing.
// Calls checkCrossing with the player's previous and current positions.
bool CheckpointSystem::checkPoint(s32 playerIdx,
                                  const EGG::Vector3f& prevPos,
                                  const EGG::Vector3f& currPos) {
    return checkCrossing(playerIdx, prevPos, currPos);
}

// @addr 0x804C2D40 (estimated)
// getLapCount — Get the total number of laps for this race.
u8 CheckpointSystem::getLapCount() const {
    return mLapCount;
}

// @addr 0x804C2D50 (estimated)
// isValidOrder — Check if a player has hit checkpoints in valid order.
bool CheckpointSystem::isValidOrder(s32 playerIdx) const {
    if (playerIdx < 0 || playerIdx >= mPlayerCount) {
        return false;
    }
    return !mPlayerStates[playerIdx].mbMissedCheckpoint;
}

// @addr 0x804C2D80 (estimated)
// getNearestCheckpoint — Find the nearest checkpoint gate to a position.
// Returns the index of the nearest gate, or -1 if no gates exist.
s32 CheckpointSystem::getNearestCheckpoint(const EGG::Vector3f& pos) const {
    if (mGateCount == 0) {
        return -1;
    }

    s32 bestIdx = 0;
    f32 bestDistSq = 1.0e12f;

    for (s32 i = 0; i < mGateCount; i++) {
        f32 dx = pos.x - mGates[i].position.x;
        f32 dy = pos.y - mGates[i].position.y;
        f32 dz = pos.z - mGates[i].position.z;
        f32 distSq = dx * dx + dy * dy + dz * dz;
        if (distSq < bestDistSq) {
            bestDistSq = distSq;
            bestIdx = i;
        }
    }

    return bestIdx;
}

// @addr 0x804C2E00 (estimated)
// getWrongWayTimer — Get the wrong-way display timer for a player.
s32 CheckpointSystem::getWrongWayTimer(s32 playerIdx) const {
    if (playerIdx < 0 || playerIdx >= mPlayerCount) {
        return 0;
    }
    return mPlayerStates[playerIdx].wrongWayTimer;
}

// @addr 0x804C2E20 (estimated)
// isPlayerFinished — Check if a specific player has finished the race.
bool CheckpointSystem::isPlayerFinished(s32 playerIdx) const {
    if (playerIdx < 0 || playerIdx >= mPlayerCount) {
        return false;
    }
    return mPlayerStates[playerIdx].mbFinished;
}

// @addr 0x804C2E40 (estimated)
// getFinishLinePosition — Get the finish line position as a Vector3f.
EGG::Vector3f CheckpointSystem::getFinishLinePosition() const {
    return EGG::Vector3f(mFinishLineX, 0.0f, mFinishLineZ);
}

// @addr 0x804C2E60 (estimated)
// setPlayerCount — Set the number of active players for checkpoint tracking.
void CheckpointSystem::setPlayerCount(s32 count) {
    if (count > 0 && count <= MAX_PLAYER_COUNT) {
        mPlayerCount = count;
    }
}

// @addr 0x804C2E80 (estimated)
// getTotalCheckpointsHit — Get cumulative checkpoint crossings for a player.
s32 CheckpointSystem::getTotalCheckpointsHit(s32 playerIdx) const {
    if (playerIdx < 0 || playerIdx >= mPlayerCount) {
        return 0;
    }
    return mPlayerStates[playerIdx].totalCheckpointsHit;
}

} // namespace Field
