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
