#include "PlayerBoost.hpp"

// ============================================================================
// PlayerBoost — Boost State Machine Implementation
// ============================================================================

// Global boost parameter tables (in .rodata / .data section)
// These are looked up by boost type index and contain per-CC-class
// multiplier, acceleration, and speed limit values.

// Table at global + 0x370: boost multipliers (6 x f32)
// Table at global + 0x388: boost accelerations (6 x f32)
// Table at global + 0x3B8: boost speed limits (6 x f32)
// Table at global + 0x04:  1.0f
// Table at global + 0x0C: 0.0f

// ============================================================================
// PlayerBoost()
// 0x80588d28
// ============================================================================
// Default constructor. Initializes all fields to zero.
// ============================================================================
PlayerBoost::PlayerBoost() {
    // Zero everything — the vtable is set by the allocator/new
    for (int i = 0; i < 6; i++) {
        frames[i] = 0;
    }
    types = 0;
    _012[0] = 0;
    _012[1] = 0;
    multiplier = 0.0f;
    acceleration = 0.0f;
    _1c = 0.0f;
    speedLimit = 0.0f;
}

// ============================================================================
// ~PlayerBoost()
// 0x8057811c (64 bytes)
// ============================================================================
// Virtual destructor — calls allocator to free if r4 > 0.
// ============================================================================
PlayerBoost::~PlayerBoost() {
    // Standard virtual destructor pattern:
    // if (r3 == nullptr) return;
    // if (r4 <= 0) return;
    // call allocator::free();
}

// ============================================================================
// reset()
// 0x80588d74
// ============================================================================
// Resets all boost state to default (inactive).
// ============================================================================
void PlayerBoost::reset() {
    for (int i = 0; i < 6; i++) {
        frames[i] = 0;
    }
    types = 0;
    multiplier = 0.0f;
    acceleration = 0.0f;
    _1c = 0.0f;
    speedLimit = 0.0f;
}

// ============================================================================
// activate(type, frames)
// 0x80588db0
// ============================================================================
// Activates a boost of the given type with the given duration.
// If the type is already active and the new duration is shorter,
// the activation is skipped (longer duration wins).
//
// @param type   Boost type index (0-5), maps to slot and bit in `types`
// @param frames Duration in frames
// @return true if boost was newly activated or extended
// ============================================================================
bool PlayerBoost::activate(u32 type, s16 frames) {
    // Bounds-check type
    if (type >= 6) {
        return false;
    }

    u16 typeBit = 1u << type;
    bool alreadyActive = (types & typeBit) != 0;

    // Skip if already active and new duration is not longer
    if (alreadyActive && frames <= this->frames[type]) {
        return false;
    }

    // Set the frame duration
    this->frames[type] = frames;

    // Set the type bit
    types |= typeBit;

    return true;
}

// ============================================================================
// cancelAll()
// 0x80588e18
// ============================================================================
// Cancels all active boosts immediately.
// ============================================================================
void PlayerBoost::cancelAll() {
    for (int i = 0; i < 6; i++) {
        frames[i] = 0;
    }
    types = 0;
    multiplier = 0.0f;
    acceleration = 0.0f;
    _1c = 0.0f;
    speedLimit = 0.0f;
}

// ============================================================================
// update(outActive) — MAIN UPDATE
// 0x80588e64 (568 bytes, NO external calls)
// ============================================================================
// Per-frame boost state machine. Iterates over all 6 slots, decrements
// active boost timers, and computes the aggregate multiplier,
// acceleration, and speed limit from active boosts. This is pure
// logic — it makes zero external calls.
//
// @param outActive  Output: set to true if any boost is/was active
// @return true if any boost is currently active
// ============================================================================
bool PlayerBoost::update(bool* outActive) {
    // Global constant table pointers (in .rodata)
    // r5 = base of boost multiplier table (global + 0x370)
    // r7 = base of boost acceleration table (global + 0x388)
    // r6 = base of boost speed limit table (global + 0x3B8)

    // Initialize accumulator fields
    // multiplier = 1.0f (base multiplier from table[4] at global+0x04)
    // acceleration = 0.0f (table[0xC] at global+0x0C)
    // speedLimit = 0.0f (table[0xC] at global+0x0C)
    multiplier = 1.0f;
    acceleration = 0.0f;
    speedLimit = 0.0f;

    bool anyActive = false;
    bool anyWasActive = false;

    // Iterate over all 6 boost slots
    for (u32 i = 0; i < 3; i++) {
        u16 typeBit = 1u << i;
        bool isActive = (types & typeBit) != 0;

        if (isActive) {
            anyWasActive = true;

            // Add this slot's contribution to accumulator
            // multiplier += multTable[i]
            // acceleration += accelTable[i]
            // speedLimit += limitTable[i]
            multiplier += /* multTable[i] */ 0.0f;  // from global + 0x370 + i*4
            acceleration += /* accelTable[i] */ 0.0f; // from global + 0x388 + i*4
            speedLimit += /* limitTable[i] */ 0.0f;   // from global + 0x3B8 + i*4

            // Decrement this slot's timer
            s16 remaining = frames[i] - 1;
            frames[i] = remaining;

            if (remaining <= 0) {
                // Boost expired — clear the type bit
                types &= ~typeBit;
                anyActive = true;
            }
        }
    }

    // Continue with slots 3-5
    for (u32 i = 3; i < 6; i++) {
        u16 typeBit = 1u << i;
        bool isActive = (types & typeBit) != 0;

        if (isActive) {
            anyWasActive = true;

            multiplier += /* multTable[i] */ 0.0f;
            acceleration += /* accelTable[i] */ 0.0f;
            speedLimit += /* limitTable[i] */ 0.0f;

            s16 remaining = frames[i] - 1;
            frames[i] = remaining;

            if (remaining <= 0) {
                types &= ~typeBit;
                anyActive = true;
            }
        }
    }

    // Post-processing: clamp acceleration
    // If acceleration < 0: clamp to 0
    // if (acceleration < table[0x04]) acceleration = 0;

    // Post-processing: clamp multiplier
    // If multiplier < 0: clamp to 0
    // if (multiplier < 0.0f) multiplier = 0.0f;

    // Post-processing: clamp speed limit
    // If speed limit is at the cap value, mark as active
    // if (speedLimit >= table[0xB0]) { ... special handling }

    // If any boost just expired OR any is still active:
    if (anyActive || anyWasActive) {
        *outActive = true;
        return anyWasActive; // return whether any was active
    }

    // No boosts at all — return inactive
    *outActive = false;
    return false;
}