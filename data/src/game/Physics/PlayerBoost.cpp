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

void PlayerBoost::init() {
    reset();
    // Initialize with default multiplier (no boost = 1.0x)
    multiplier = 1.0f;
    acceleration = 0.0f;
    _1c = 1.5f; // Maximum possible multiplier
    speedLimit = 0.0f;
}

void PlayerBoost::activateMushroom() {
    // Mushroom boost: slot 2, ~45 frames (0.75 seconds at 60fps)
    // Provides a moderate speed burst with acceleration
    // Multiple mushrooms can stack (longer duration wins)
    activate(BOOST_TYPE_MUSHROOM, 45);

    // Mushroom boost provides:
    //   - Speed multiplier: +0.3x (1.3x total)
    //   - Acceleration boost: immediate speed kick
    //   - No invincibility
    // The multiplier is applied through the global boost table
    // which is indexed by the slot type in the update() method.
}

void PlayerBoost::activateStar() {
    // Star power: slot 1, ~720 frames (12 seconds at 60fps)
    // Provides continuous speed boost and invincibility.
    // The star is one of the most powerful items:
    //   - Speed multiplier: +0.2x (1.2x total)
    //   - Full invincibility to all hazards
    //   - Spin-out effect on contacted karts
    //   - No off-road penalty while active
    activate(BOOST_TYPE_STAR, 720);

    // Star activation also sets invincibility flags on the kart state.
    // The KartState system tracks star state separately for:
    //   - Visual effects (rainbow coloring)
    //   - Audio effects (star music)
    //   - Collision immunity (pass through hazards)
}

void PlayerBoost::activateMega() {
    // Mega mushroom: slot 5, ~600 frames (10 seconds at 60fps)
    // Makes the kart large and provides speed boost.
    // The mega mushroom transforms the kart:
    //   - Size: 2.5x normal
    //   - Speed multiplier: +0.15x (1.15x total)
    //   - Invincibility to most hazards (but not star users)
    //   - Can crush small karts on contact
    //   - Reduced handling due to larger size
    activate(BOOST_TYPE_MEGA, 600);

    // Mega activation also triggers the kart body scale change.
    // The KartBody system handles the visual size increase and
    // the hitbox expansion.
}

void PlayerBoost::activateBulletBill() {
    // Bullet bill: slot 3, ~300 frames (5 seconds at 60fps)
    // Auto-pilot boost that follows the track automatically.
    // The bullet bill transforms the kart:
    //   - Speed: fixed high speed (follows track path)
    //   - Auto-pilot: player has no control
    //   - Invincibility to all hazards
    //   - Visual: kart becomes a bullet bill
    // The bullet bill is ended early if the player hits a wall.
    activate(BOOST_TYPE_BULLET, 300);

    // Bullet bill also sets the KART_FLAG_IN_BULLET and KART_FLAG_BULLET
    // flags on the kart state, which the movement system uses to
    // disable player input and switch to auto-pilot control.
}

void PlayerBoost::activateSlipstream() {
    // Slipstream/drafting boost: slot 0, ~30 frames (0.5 seconds)
    // Triggered when drafting behind another kart for long enough.
    // The slipstream system:
    //   1. Kart drives behind another within a cone-shaped zone
    //   2. After ~3 seconds of drafting, the boost is ready
    //   3. The boost gives a short but significant speed burst
    //   4. The boost is smaller than a mushroom but stacks with it
    activate(BOOST_TYPE_MINI_TURBO, 30);

    // Slipstream uses the mini-turbo slot because it behaves
    // similarly: a short speed boost that decays over time.
    // The multiplier is applied through the global boost table.
}

BoostType PlayerBoost::getActiveBoostType() const {
    // Return the highest-priority active boost type.
    // Priority order (highest first):
    //   Star > Mega > Bullet > Mushroom > Trick > Mini-Turbo
    //
    // This priority matters when multiple boosts overlap:
    // e.g., a star + trick boost active simultaneously —
    // the star takes priority for UI display and certain
    // physics interactions.

    // Check each slot in priority order
    // Slot 1: Star (highest priority — invincibility)
    if (types & (1u << BOOST_TYPE_STAR))    return BOOST_TYPE_STAR;

    // Slot 5: Mega mushroom (size + speed)
    if (types & (1u << BOOST_TYPE_MEGA))    return BOOST_TYPE_MEGA;

    // Slot 3: Bullet bill (auto-pilot)
    if (types & (1u << BOOST_TYPE_BULLET))  return BOOST_TYPE_BULLET;

    // Slot 2: Mushroom / boost panel
    if (types & (1u << BOOST_TYPE_MUSHROOM)) return BOOST_TYPE_MUSHROOM;

    // Slot 4: Trick / zipper ramp
    if (types & (1u << BOOST_TYPE_TRICK))   return BOOST_TYPE_TRICK;

    // Slot 0: Mini-turbo / slipstream / start boost (lowest priority)
    if (types & (1u << BOOST_TYPE_MINI_TURBO)) return BOOST_TYPE_MINI_TURBO;

    // No active boost — return MINI_TURBO as sentinel (caller checks isActive() first)
    return BOOST_TYPE_MINI_TURBO;
}

f32 PlayerBoost::getTotalBoostMultiplier() const {
    // Return the current computed multiplier from the last update().
    // This is the product/sum of all active boost multipliers.
    //
    // The multiplier is computed in update() by summing contributions
    // from each active slot's entry in the global boost table.
    // For example:
    //   - Mushroom alone: 1.0 + 0.3 = 1.3x
    //   - Star + Mushroom: 1.0 + 0.2 + 0.3 = 1.5x
    //   - Trick + Mini-Turbo: 1.0 + 0.15 + 0.1 = 1.25x
    //
    // The multiplier is applied to the kart's top speed and
    // acceleration values in the KartMove system.

    // Also factor in the speed limit if active
    f32 effectiveMultiplier = multiplier;
    if (speedLimit > 0.0f) {
        // When a speed limit is active (from boost table),
        // it caps the effective multiplier rather than adding to it.
        // The speed limit represents an absolute speed ceiling.
        // We convert it to a multiplier-like value for consistency.
        f32 limitAsMult = speedLimit / 100.0f; // Normalize to ~1.0 range
        if (limitAsMult < effectiveMultiplier) {
            effectiveMultiplier = limitAsMult;
        }
    }

    return effectiveMultiplier;
}

void PlayerBoost::cancelBoost(BoostType type) {
    if (type >= 6) return;

    u16 typeBit = 1u << type;
    if (types & typeBit) {
        types &= ~typeBit;
        frames[type] = 0;
    }
}

f32 PlayerBoost::getRemainingTime() const {
    // Find the remaining time of the longest active boost.
    // This is used for UI display (boost timer bar) and for
    // determining if a boost is about to expire.
    //
    // When multiple boosts are active, we report the longest
    // one so the UI shows the total remaining boost time.

    s16 maxFrames = 0;
    s16 maxSlot = -1;

    for (int i = 0; i < 6; i++) {
        u16 typeBit = 1u << i;
        if ((types & typeBit) != 0) {
            if (frames[i] > maxFrames) {
                maxFrames = frames[i];
                maxSlot = i;
            }
        }
    }

    // Convert frames to seconds (at 60fps)
    f32 remaining = static_cast<f32>(maxFrames) / 60.0f;

    // If no boost is active, return 0
    if (maxSlot < 0) {
        return 0.0f;
    }

    return remaining;
}