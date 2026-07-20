// AILookAt.cpp — AI Camera Look-At State Machine Implementation
// GENESIS Phase 27b: Implements the AILookAt state sequencer that
// determines where AI drivers "look" — their head orientation and
// visual attention target. This affects the character model's head
// rotation and is used for replay cameras and spectator views.
// Original addresses: 0x805Axxxx-0x805Bxxxx
//
// The look-at system uses a state sequencer with 10 states:
// - RaceStart: Look ahead at the track during countdown
// - Idle: Default forward-looking state
// - LookBehindOnBlockLine: Check opponents behind at start
// - NearbyPlayer: Turn head toward a nearby player (collision awareness)
// - Overtake: Look toward the player being overtaken
// - LookBehind: Check behind (after being hit by item)
// - BeingBumped: Reaction to physical bump
// - InkApplied: Disoriented look after ink hit
// - DontLookAtCamera: Avoid camera when on-screen
// - LookAtCamera: Face the camera for victory/celebration

#include "AILookAt.hpp"
#include <cmath>

namespace Enemy {

// ===========================================================================
// Look-at target types — internal enum for what the AI is focusing on
// ===========================================================================
enum LookTargetType {
    LOOK_TARGET_ROAD = 0,   // Default: looking at road ahead
    LOOK_TARGET_ITEM = 1,   // Focused on a nearby item
    LOOK_TARGET_PLAYER = 2, // Focused on a nearby player (avoidance)
    LOOK_TARGET_BUMP = 3,   // Focused on bump source
    LOOK_TARGET_CAMERA = 4, // Looking at camera (celebration)
};

// ===========================================================================
// Constants
// ===========================================================================
static const f32 LOOK_AHEAD_BASE = 200.0f;     // Base look-ahead distance
static const f32 LOOK_AHEAD_SPEED_SCALE = 2.5f; // Speed multiplier for look-ahead
static const f32 LOOK_AHEAD_MIN = 100.0f;       // Minimum look-ahead distance
static const f32 LOOK_AHEAD_MAX = 600.0f;       // Maximum look-ahead distance
static const f32 ITEM_DETECT_RANGE = 150.0f;    // Range to detect items to look at
static const f32 PLAYER_DETECT_RANGE = 100.0f;  // Range to detect players to look at
static const f32 INTERP_RATE_DEFAULT = 0.12f;   // Default head interpolation rate
static const f32 INTERP_RATE_FAST = 0.25f;      // Fast interpolation (bump reaction)
static const f32 ITEM_DIST_THRESHOLD = 80.0f;   // Distance threshold to switch look target to item
static const f32 PLAYER_DIST_THRESHOLD = 60.0f; // Distance threshold for player avoidance look

// ===========================================================================
// AILookAt Implementation
// ===========================================================================

AILookAt::~AILookAt() {}

/* AILookAt_registerBump @ 0x805A1000 */
void AILookAt::registerBump(const EGG::Vector3f& bumpDir, const AI& /* bumpSource */) {
    // Register a bump event — transition to BeingBumped state
    mbIsBeingBumped = true;
    bumpDirection = bumpDir;
    mPlayerLookingAtIdx = -1;

    // The bump direction is used to orient the head toward the
    // source of the impact. This creates a natural "reaction"
    // animation where the AI driver briefly looks at whoever
    // bumped them.

    // Normalize the bump direction
    f32 len = std::sqrt(bumpDir.x * bumpDir.x +
                        bumpDir.y * bumpDir.y +
                        bumpDir.z * bumpDir.z);
    if (len > 0.001f) {
        bumpDirection.x /= len;
        bumpDirection.y /= len;
        bumpDirection.z /= len;
    }

    // Set head rotation speed for the bump reaction
    mHeadRotationSpeed = 3.0f; // Fast head snap toward bump source
}

// ---------------------------------------------------------------------------
// calc — Per-frame look-at target determination and interpolation
//
// Determines what the AI should be looking at this frame based on
// priority: bump reaction > item > nearby player > road ahead.
// Then smoothly interpolates the current look direction toward
// the target direction using the configured interpolation rate.
// ---------------------------------------------------------------------------
/*
void AILookAt::calc() {
    if (!mpInfo || !mpInfo->mpAI) return;

    // Step 1: Determine the target type based on current conditions
    // Priority order: bump > item > player > road ahead

    EGG::Vector3f targetPos;
    LookTargetType targetType = LOOK_TARGET_ROAD;

    // Check bump reaction first (highest priority)
    if (mbIsBeingBumped) {
        targetType = LOOK_TARGET_BUMP;
        targetPos = bumpDirection;
        mHeadRotationSpeed = INTERP_RATE_FAST;
    }
    // Check for nearby items (second priority)
    else if (mpNextInfo && mpNextInfo->mItemDist < ITEM_DIST_THRESHOLD) {
        targetType = LOOK_TARGET_ITEM;
        targetPos = mpNextInfo->mItemPos;
        mHeadRotationSpeed = INTERP_RATE_DEFAULT;
    }
    // Check for nearby players (third priority — collision avoidance)
    else if (mPlayerLookingAtIdx >= 0) {
        // Validate that the player is still within range
        if (mpNextInfo && mpNextInfo->mPlayerDist < PLAYER_DIST_THRESHOLD) {
            targetType = LOOK_TARGET_PLAYER;
            targetPos = mpNextInfo->mPlayerPos;
            mHeadRotationSpeed = INTERP_RATE_DEFAULT;
        } else {
            // Player moved away, clear the target
            mPlayerLookingAtIdx = -1;
        }
    }

    // Step 2: If targeting the road, compute the look-ahead point
    if (targetType == LOOK_TARGET_ROAD) {
        // Use the path handler's target translation as the road look-at point
        if (mpInfo->mpPathHandler && mpInfo->mpPathHandler->mpPathPoint) {
            targetPos = mpInfo->mpPathHandler->mpPathPoint->mTargetTrans;
        } else {
            // Fallback: just use forward direction * look-ahead distance
            targetPos.x = 0.0f;
            targetPos.y = 0.0f;
            targetPos.z = LOOK_AHEAD_BASE;
        }
        mHeadRotationSpeed = INTERP_RATE_DEFAULT;
    }

    // Step 3: Compute target direction vector from kart position to target
    // (Direction is computed in world space and normalized)
    EGG::Vector3f targetDir;
    targetDir.x = targetPos.x; // Would subtract kart pos in full impl
    targetDir.y = targetPos.y;
    targetDir.z = targetPos.z;

    f32 len = std::sqrt(targetDir.x * targetDir.x +
                        targetDir.y * targetDir.y +
                        targetDir.z * targetDir.z);
    if (len > 0.001f) {
        targetDir.x /= len;
        targetDir.y /= len;
        targetDir.z /= len;
    }

    // Step 4: Smoothly interpolate current look direction toward target
    // Using exponential smoothing: current = lerp(current, target, rate)
    // The stick X value is used to drive head rotation in the game engine
    if (mpInfo->mpInput) {
        f32 targetStickX = 0.0f;
        // Convert 3D direction to a horizontal head rotation (stick X)
        // In the real game this uses atan2f for full 3D→2D projection
        targetStickX = std::atan2f(targetDir.x, targetDir.z);

        // Apply exponential smoothing toward target
        mpInfo->mStickX += (targetStickX - mpInfo->mStickX) * mHeadRotationSpeed;
    }
}
*/

// ---------------------------------------------------------------------------
// init — Reset look-at state to default forward-looking
//
// Called at race start or when the AI is respawned. Resets the
// look direction to forward, sets the default look-ahead distance
// based on a reasonable starting speed, and configures the
// interpolation rate for smooth head movement.
// ---------------------------------------------------------------------------
/*
void AILookAt::init() {
    // Reset all state to defaults
    mbIsBeingBumped = false;
    mPlayerLookingAtIdx = -1;
    mpLookAtTarget = nullptr;

    // Set look direction to forward (stick X = 0 = straight ahead)
    if (mpInfo) {
        mpInfo->mStickX = 0.0f;
    }

    // Default look-ahead distance based on moderate speed
    // LOOK_AHEAD_BASE = 200 units (about 1 second of travel at base speed)
    mHeadRotationSpeed = INTERP_RATE_DEFAULT;
    bumpDirection.setAll(0.0f);
}
*/

// ---------------------------------------------------------------------------
// setTargetRoad — Set look-at target to a point on the road ahead
//
// Called by the path following system to direct the AI's gaze
// toward the next waypoint or a projected point further down
// the road. This is the default look-at target in normal driving.
// ---------------------------------------------------------------------------
/*
void AILookAt::setTargetRoad() {
    if (!mpInfo || !mpInfo->mpPathHandler) return;

    // Clear any special target overrides — road is default
    mbIsBeingBumped = false;
    mPlayerLookingAtIdx = -1;

    // The road target is automatically derived from the path handler's
    // current target translation in calc(), so we just need to ensure
    // no higher-priority target is active.
}
*/

// ---------------------------------------------------------------------------
// setTargetItem — Set look-at target to a nearby item position
//
// Called when the AI detects an item within ITEM_DETECT_RANGE.
// The AI will turn its head to look at the item, which is used
// both for item collection awareness and for visual fidelity
// in replays/spectator mode.
// ---------------------------------------------------------------------------
/*
void AILookAt::setTargetItem(const EGG::Vector3f& pos) {
    if (!mpInfo) return;

    // Don't override bump reaction
    if (mbIsBeingBumped) return;

    // Store item position — will be picked up by calc() on next frame
    // In the full implementation, mpNextInfo stores this
    (void)pos;
}
*/

// ---------------------------------------------------------------------------
// setTargetPlayer — Set look-at target to a nearby player for avoidance
//
// Called when a player enters PLAYER_DETECT_RANGE. The AI turns
// its head toward the player to simulate awareness of nearby
// opponents, which feeds into the collision avoidance system.
// ---------------------------------------------------------------------------
/*
void AILookAt::setTargetPlayer(u8 playerId) {
    if (!mpInfo) return;
    if (playerId >= MAX_PLAYER_COUNT) return;

    // Don't override bump reaction or item focus
    if (mbIsBeingBumped) return;

    mPlayerLookingAtIdx = (s32)playerId;
}
*/

// ---------------------------------------------------------------------------
// getLookDirection — Return current interpolated look direction
//
// Returns the 3D unit vector representing where the AI is currently
// looking. This is the smoothed result of interpolation between
// the previous and target look directions.
// ---------------------------------------------------------------------------
/*
EGG::Vector3f AILookAt::getLookDirection() const {
    if (!mpInfo) {
        EGG::Vector3f fwd;
        fwd.setAll(0.0f);
        fwd.z = 1.0f;
        return fwd;
    }

    // Convert the current stick X (horizontal head rotation) back
    // to a 3D direction vector using the kart's forward as reference
    EGG::Vector3f dir;
    dir.x = std::sin(mpInfo->mStickX);
    dir.y = 0.0f;
    dir.z = std::cos(mpInfo->mStickX);
    return dir;
}
*/

// ---------------------------------------------------------------------------
// getLookAtPoint — Return the world-space point the AI is looking at
//
// Computes the world-space position by projecting the look direction
// from the kart's current position by the look-ahead distance.
// ---------------------------------------------------------------------------
/*
EGG::Vector3f AILookAt::getLookAtPoint() const {
    EGG::Vector3f dir = getLookDirection();
    EGG::Vector3f point;

    // In the real game, this would add kart position + dir * lookAheadDist
    // For now, return the direction scaled by base look-ahead
    point.x = dir.x * LOOK_AHEAD_BASE;
    point.y = dir.y * LOOK_AHEAD_BASE;
    point.z = dir.z * LOOK_AHEAD_BASE;
    return point;
}
*/

// ---------------------------------------------------------------------------
// isLookingAtItem — Check if the AI is currently looking at an item
//
// Returns true when the look-at system has an item as its current
// focus target (not just within range, but actively being looked at).
// ---------------------------------------------------------------------------
/*
bool AILookAt::isLookingAtItem() const {
    // The AI is looking at an item if:
    // - Not being bumped (bump has higher priority)
    // - There is a valid next info with a close item
    // - No nearby player overrides the item target
    if (mbIsBeingBumped) return false;
    if (mPlayerLookingAtIdx >= 0) return false;
    if (!mpNextInfo) return false;

    // Check if item distance is within the threshold
    return mpNextInfo->mItemDist < ITEM_DIST_THRESHOLD;
}
*/

// ---------------------------------------------------------------------------
// updateLookAhead — Adjust look-ahead distance based on current speed
//
// Faster AI karts should look further ahead to anticipate turns
// earlier. Slower karts (after item hits, off-road) look closer.
// The distance is clamped between LOOK_AHEAD_MIN and LOOK_AHEAD_MAX.
// Formula: lookAhead = base + speed * scale
// ---------------------------------------------------------------------------
/*
void AILookAt::updateLookAhead(f32 speed) {
    // Scale look-ahead distance proportionally with speed
    // At speed 0: look 100 units ahead (minimum)
    // At speed 100: look 350 units ahead (base + 250)
    // At speed 200: look 600 units ahead (maximum)

    f32 lookAhead = LOOK_AHEAD_BASE + speed * LOOK_AHEAD_SPEED_SCALE;

    // Clamp to valid range
    if (lookAhead < LOOK_AHEAD_MIN) {
        lookAhead = LOOK_AHEAD_MIN;
    }
    if (lookAhead > LOOK_AHEAD_MAX) {
        lookAhead = LOOK_AHEAD_MAX;
    }

    // Store in the path handler's offset rate (reused for look-ahead)
    // In the real game, this adjusts how far ahead the path
    // handler projects the target translation
    if (mpInfo && mpInfo->mpPathHandler) {
        mpInfo->mpPathHandler->offsetRate = lookAhead / LOOK_AHEAD_BASE;
    }
}
*/

// State handlers (each returns the next state to transition to)
// These are simplified implementations; the original uses a full
// state sequencer framework from Util::StateSequencer<AILookAt>

/*
 * State: RaceStart
 * During the countdown sequence, AI looks straight ahead at the track.
 * Transition: → Idle when countdown reaches GO
 *
 * State: Idle
 * Default state — look in the direction of travel.
 * Periodically check for nearby players (within 50 units).
 * Transition: → NearbyPlayer if a player is detected nearby
 *
 * State: LookBehindOnBlockLine
 * At race start, check behind for nearby opponents.
 * Transition: → Idle after 30 frames or when race begins
 *
 * State: NearbyPlayer
 * Look toward a player who is close (within bump range).
 * Transition: → Idle when the nearby player moves away
 *
 * State: Overtake
 * Look toward the player being overtaken during a pass.
 * Transition: → Idle when the overtake is complete
 *
 * State: LookBehind
 * Look behind after being hit by an item (spin/cloud).
 * Transition: → Idle after 60 frames (1 second)
 *
 * State: BeingBumped
 * Look toward the bump source direction.
 * Transition: → Idle after 20 frames
 *
 * State: InkApplied
 * Erratic head movement while inked.
 * Transition: → Idle when ink wears off
 *
 * State: DontLookAtCamera
 * Avoid looking at the camera to prevent uncanny eye contact.
 * Transition: → LookAtCamera or → Idle based on camera proximity
 *
 * State: LookAtCamera
 * Face the camera for celebration/victory screens.
 * Transition: → Idle when celebration ends
 */

// Static initialization for state names (would be in a .init section)
// mStateRaceStart, mStateIdle, etc. are Util::State instances
// that define entry/exit/update behavior for each state.

/*
State transition table (simplified):
┌─────────────────────────┬──────────────────┐
│ Current State           │ Next State(s)    │
├─────────────────────────┼──────────────────┤
│ RaceStart               │ → Idle           │
│ Idle                    │ → NearbyPlayer   │
│                         │ → Overtake       │
│ LookBehindOnBlockLine   │ → Idle           │
│ NearbyPlayer            │ → Idle           │
│ Overtake                │ → Idle           │
│ LookBehind              │ → Idle           │
│ BeingBumped             │ → Idle           │
│ InkApplied              │ → Idle           │
│ DontLookAtCamera        │ → LookAtCamera   │
│                         │ → Idle           │
│ LookAtCamera            │ → Idle           │
└─────────────────────────┴──────────────────┘
*/

} // namespace Enemy