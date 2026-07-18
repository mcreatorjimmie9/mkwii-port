#include "PlayerTrick.hpp"

// ============================================================================
// PlayerTrick Implementation
// Addresses 0x80575a44 - 0x80576afc
// ============================================================================

// ============================================================================
// PlayerTrick() — Constructor
// 0x80575a44 (100 bytes)
// ============================================================================
// Initializes the trick system with default values.
// ============================================================================
PlayerTrick::PlayerTrick() {
    // Call base constructor (vtable setup)
    // sub_0x0005d930();

    // Set nextTimer to 0 and nextDirection to 0
    nextTimer = 0;

    // Store 0.0f to boostRampEnabled area (actually a bool/byte, but stored as float)
    // In the decompiled code, 0.0f is stored at 0x0C (via r4 = 0)
    // and some value is stored at 0x3C (via sub_0x00063358 at r31+0x3C)
    boostRampEnabled = false;
}

// ============================================================================
// updateNext()
// 0x80575b38 (308 bytes)
// ============================================================================
// Called when the player is airborne to check if trick conditions are met.
// Manages the "next trick" timing window and trick cooldown.
// ============================================================================
void PlayerTrick::updateNext() {
    // Get player state flags
    void* kartObj = *(void**)0; // this->pointers
    void* state = *(void**)(4 + (u32)kartObj);
    u32 flags8 = *(u32*)(8 + (u32)state);
    u8 trickState = *(u8*)(0x3A + (u8*)this);

    // Check if trick-related flags are set (bit 0, 1, 6, 9 of flags8)
    // 0x461 = bits 0,1,6,9
    if (!(flags8 & 0x461)) {
        return;
    }

    // If trickState is already set and not zero:
    if (trickState != 0) {
        // If trickState >= 0x0E (14): set trickState = 0x0E, store to 0x18
        if (trickState >= 0x0E) {
            *(u8*)(0x18 + (u8*)this) = 0x0E;
            // Store 0 to 0x1A (nextTimer)
            *(s16*)(0x1A + (u8*)this) = 0;
        } else {
            // Otherwise: check if nextTimer at 0x1A is > 0
            s16 timer = *(s16*)(0x1A + (u8*)this);
            if (timer <= 0) {
                *(s16*)(0x1A + (u8*)this) = 0;
            }
        }

        // If nextTimer expired (0x1A <= 0):
        if (*(s16*)(0x1A + (u8*)this) <= 0) {
            // Check if can start trick based on state flags
            // Multiple flag checks for trick validity
            // If trick state flags (bit 12, 9 of state) not set:
            //   Reset trickState to 0

            // If item count (0x74) > 0 and certain conditions:
            //   Set flag 0x20 in some state
            //   Check flag bit 0 of state
            //   If not set: trickState = 1
            //   Check state flag bit 0 again
            //   If set: trickState = 0
        }
    }
}

// ============================================================================
// tryStart(left)
// 0x80575d7c (364 bytes)
// ============================================================================
// Attempts to start a trick based on the left direction vector.
// Called when the player goes airborne near a trick-eligible area.
// ============================================================================
void PlayerTrick::tryStart(Vec3* left) {
    // Check player state for trick blocking flags
    void* kartObj = *(void**)this->pointers;
    void* state = *(void**)(4 + (u32)kartObj);
    u32 flags14 = *(u32*)(0x14 + (u32)state);

    // Check bit 28 (0x10000000) — blocks trick
    if (flags14 & 0x10000000) {
        return;
    }

    // Call some check function (0x805ec0c)
    // sub_0x0005ec0c(this);

    // Check if trick state and type match
    u32 stateFlags = *(u32*)(0x1C + (u32)this); // masked with 0x1FF
    u32 trickType = *(u32*)(0x18 + (u32)this); // masked with 0x1FF
    if (stateFlags != trickType) {
        return;
    }

    // Check if airborne (flag bit 9 of state)
    void* state2 = *(void**)(4 + (u32)kartObj);
    u32 flags8b = *(u32*)(8 + (u32)state2);
    if (!(flags8b & 0x200)) {
        return;
    }

    // Call two functions to get trick parameters
    // sub_0x0005ebf0(this) x2 — get some trick state
    // sub_0x0005ebf0(this) x1 — get another parameter
    // These read various fields from the kart/physics state

    // Set trick type from parameters
    *(u32*)(0x14 + (u32)this) = /* param1 */ 0;
    *(u8*)(0x18 + (u8*)this) = /* param2 */ 0;

    // Determine trick category based on param value
    // If param2 < 1: category = 1
    // If param2 >= 1 && < 4: category = 4
    // Otherwise: category = param2

    // Clamp to valid range
    TrickCategory cat = /* computed */ STUNT;
    // Store category to 0x18

    // Call virtual startInner(cat) via vtable
    this->startInner(cat);

    // Set airborne trick flag
    void* state3 = *(void**)(4 + (u32)kartObj);
    u32 flags8c = *(u32*)(8 + (u32)state3);
    flags8c &= ~0x461; // clear trick-related flags
    *(u32*)(8 + (u32)state3) = flags8c;

    // Check if trick is a ramp boost
    // sub_0x0005e564(this) — get ramp state
    // If ramp speed is > 0: this is a ramp boost trick (different sound)
    // Look up item count (0x74)
    // If item count == 0: type = 2
    // If item count == 1: type = 1
    // Otherwise: type = 0
    // Store type
    // Set state flag 0x20

    // Clear trick-related flags in state
    flags8c &= ~0x00000000;
    *(u32*)(8 + (u32)state3) = flags8c;

    // If not a ramp boost:
    //   Check for trick-end boost eligibility
    //   Set appropriate flag
}

// ============================================================================
// update()
// 0x805763e4
// ============================================================================
// Per-frame trick update when airborne. Manages rotation animation,
// angle tracking, and cooldown.
// ============================================================================

// ============================================================================
// start(left) — virtual
// 0x80575ee8
// ============================================================================

// ============================================================================
// startInner(category) — virtual
// 0x8057616c
// ============================================================================

// ============================================================================
// updateRot() — virtual
// 0x805764fc
// ============================================================================

// ============================================================================
// end()
// 0x805766b8
// ============================================================================