#include "PlayerSub10.hpp"

// ============================================================================
// PlayerSub10 — Boost Activation & Management
// Addresses 0x8057f090 - 0x80580b14
// ============================================================================

// All boost activation functions share a common pattern:
// 1. Check state flags to see if boost is blocked (bullet, star, mega,
//    ink, squish, etc.)
// 2. Look up the boost duration from a global parameter table
// 3. Call activateBoostSlot() with the appropriate type and duration
// 4. Play sound effects, trigger rumble, set sound attributes
// 5. Handle ink cleanup (mushroom variant)
// 6. Set additional state flags

// === Common guard checks ===
// The following flags block boost activation:
//   State flag bit 11 (0x08000000): in the state table bit 12 of state->flags
//   State flag bit 4  (0x10000000): star/mega active
//   State flag bit 7  (0x00800000): gesso (ink) — only for clean variant
//   State flag bit 0  (0x00000001): bullet bill
//   State flag bit 21 (0x00000010): already boosting (bit 4 of sub-flags)
//   State flag bit 15 (0x00008000): crushed
//   State flag bit 23 (0x00000800): shock
//   Player state 0x14 bit 7 (0x00000080): some blocked state

// Boost type bits (for PlayerBoost::types):
//   Bit 0: MT, SSMT, start boost
//   Bit 1: unused (intended for star)
//   Bit 2: mushroom, boost panel
//   Bit 3: unused (intended for bullet)
//   Bit 4: trick, zipper
//   Bit 5: unused (intended for mega and TC)

// Boost slot indices (for PlayerBoost::frames[]):
//   Slot 0 (frames[0], offset 0x10C): type bit 0 — MT/SSMT/start
//   Slot 1 (frames[1], offset 0x10E): type bit 1 — unused
//   Slot 2 (frames[2], offset 0x110): type bit 2 — mushroom/panel
//   Slot 3 (frames[3], offset 0x112): type bit 3 — unused
//   Slot 4 (frames[4], offset 0x114): type bit 4 — trick/zipper
//   Slot 5 (frames[5], offset 0x116): type bit 5 — mega/TC

// Sound IDs used in boost functions:
//   0x113: mega/shock sound
//   0x111: star activation sound
//   0x116: star deactivation sound
//   0x1A4: crush start sound
//   0x1A5: crush end sound
//   0x1AA: invincibility tick sound
//   0x10D: ink clear from global player data
//   0x0F: boost activation sound
//   0x17: squish start sound
//   0x18: squish end sound
//   0x1A: squish variant sound
//   0x1B: squish variant 2 sound

// ============================================================================
// activateBoostSlot(type, frames)
// 0x8057f090 (320 bytes)
// ============================================================================
// Generic boost activation. Sets the boost type bit and duration in the
// PlayerBoost object at offset 0x108. If the boost type wasn't already
// active (or the new duration is longer), overwrites the duration and
// triggers sound/rumble/scale effects.
//
// @param type  Boost type index (0-5), maps to bit in types field
// @param frames Duration in frames for this boost
// ============================================================================
void PlayerSub10::activateBoostSlot(u32 type, s16 frames) {
    // Get player index from kart physics
    sub_getPhysicsInput(this);
    u32 playerIdx = /* result from lookup */ 0;
    u32 pTableIdx = playerIdx << 2;

    // Look up boost duration from global parameter table
    void* global = /* global at 0x00000000 */;
    void* pTable = *(void**)(0x68 + (u32)global);
    s16 paramFrames = *(s16*)(pTableIdx + (u32)pTable); // via lwzx

    // Compute boost type bit and slot offset
    u16 typeBit = 1u << type;
    u32 slotOffset = type << 1; // 0x02 * type for int16_t array

    // Check if boost type is already active
    u16 currentTypes = boost.types;
    bool alreadyActive = (currentTypes & typeBit) != 0;

    // Determine if we should activate (not active, or new duration > current)
    bool shouldActivate = false;
    if (!alreadyActive) {
        shouldActivate = true;
    } else {
        s16 currentFrames = *(s16*)(0x10C + slotOffset + (u8*)&boost);
        if (frames > currentFrames) {
            shouldActivate = true;
        }
    }

    if (shouldActivate) {
        // Set the frame duration
        *(s16*)(0x10C + slotOffset + (u8*)&boost) = frames;

        // Set the type bit
        boost.types = currentTypes | typeBit;

        // Set the boost multiplier from global table
        // multiplier at offset 0x124 = globalBoostTable[type]
        f32 boostMult = *(f32*)(pTableIdx + (u32)global);
        boost.multiplier = boostMult;

        // --- Post-activation effects ---
        // Set player state flag bit 4 (boosting)
        void* playerState = *(void**)(0x04 + (u32)*(void**)this->playerPointers);
        *(u32*)(0x04 + (u32)playerState) |= 0x10;

        // Play boost sound using current multiplier
        sub_getScale(this);
        sub_playBoostSound(this, 6); // sound attr 6

        // Rumble feedback
        sub_getPhysicsInput(this);
        // sub_0x806a5ea0(); // rumble end

        // Set sound attributes (type 4, param 0, flag 1)
        sub_triggerSound(this);
        sub_setSound2(this, 4, 0, 1);
        sub_setSoundAttr(this, 4, 0, 1);
    }
}

// ============================================================================
// activateBoostMushroomClean()
// 0x8057f1d0 (520 bytes)
// ============================================================================
// Mushroom boost that also clears ink/gesso from the player.
// Uses boost type bit 2 (slot 2, mushroom/panel slot).
// ============================================================================
void PlayerSub10::activateBoostMushroomClean() {
    bool skipBoost = false;

    // Guard checks
    void* state1 = *(void**)(0x04 + (u32)*(void**)this->playerPointers);
    u32 flags8 = *(u32*)(0x08 + (u32)state1);
    u32 flagsC = *(u32*)(0x0C + (u32)state1);

    // Block if bullet bill, star, or gesso
    if (flags8 & 0x08000000) skipBoost = true;  // bit 27
    if (!skipBoost && (flags8 & 0x10000000)) skipBoost = false; // bit 28
    if (!skipBoost && (flagsC & 0x10000000)) skipBoost = true;  // bit 4 — already boosting
    if (!skipBoost && (flags8 & 0x00000001)) skipBoost = true;  // bit 0 — bullet
    if (!skipBoost && (flags8 & 0x08000000)) skipBoost = true;  // bit 27 — already checked?

    if (skipBoost) return;

    // Get default mushroom duration from global
    s16 frames = 0; // lha r31, 0(r4) — from global constant table

    // Activate boost in mushroom slot (type 2)
    activateBoostSlot(2, frames);

    // --- Post-activation: ink cleanup ---
    // Clamp zipperBoostMax if mushroom duration is shorter
    s16 currentZipperMax = zipperBoostMax; // 0x148
    if (frames < currentZipperMax) {
        zipperBoostMax = frames;
    }

    // Set state flag for boost
    void* ps = *(void**)(0x04 + (u32)*(void**)this->playerPointers);
    *(u32*)(0x08 + (u32)ps) |= 0x80; // bit 7

    // Check if player has ink (state flag bit 28 at 0x0C)
    u32 flagsC2 = *(u32*)(0x0C + (u32)state1);
    if (flagsC2 & 0x10000000) { // bit 28 — has ink
        // Clear ink flag
        *(u32*)(0x0C + (u32)state1) &= ~0x10000000;
        // Clear blooperCharacterInk timer
        blooperCharacterInk = 0;

        // Clear ink on the global player object
        sub_getPhysicsInput(this);
        // sub_0x806a5ea0(); // lookup player data
        // *(u8*)(0x10D + playerData) = 1; // mark ink cleared
    }
}

// ============================================================================
// activateMushroom()
// 0x8057f3d8 (600 bytes)
// ============================================================================
// Standard mushroom boost. Same as activateBoostMushroomClean but also
// plays a start-effect sound and sets the mushroomBoost2 timer.
// Uses boost type bit 2 (slot 2, mushroom/panel slot).
// ============================================================================
void PlayerSub10::activateMushroom() {
    bool skipBoost = false;

    // Same guard checks as activateBoostMushroomClean
    void* state1 = *(void**)(0x04 + (u32)*(void**)this->playerPointers);
    u32 flags8 = *(u32*)(0x08 + (u32)state1);
    u32 flagsC = *(u32*)(0x0C + (u32)state1);

    if (flags8 & 0x08000000) skipBoost = true;
    if (!skipBoost && (flags8 & 0x10000000)) skipBoost = false;
    if (!skipBoost && (flagsC & 0x10000000)) skipBoost = true;
    if (!skipBoost && (flags8 & 0x00000001)) skipBoost = true;
    if (!skipBoost && (flags8 & 0x08000000)) skipBoost = true;

    if (skipBoost) return;

    s16 frames = 0; // default mushroom duration
    activateBoostSlot(2, frames);

    // Clamp zipperBoostMax
    s16 currentZipperMax = zipperBoostMax;
    if (frames < currentZipperMax) {
        zipperBoostMax = frames;
    }

    // Set boost state flag
    void* ps = *(void**)(0x04 + (u32)*(void**)this->playerPointers);
    *(u32*)(0x08 + (u32)ps) |= 0x80;

    // Play start-effect sound (type 3)
    sub_triggerSound(this);
    sub_setSound2(this, 3, 1);
    // 0x807be818();

    // Check for ink cleanup (same as mushroom clean)
    u32 flagsC2 = *(u32*)(0x0C + (u32)state1);
    if (flagsC2 & 0x10000000) {
        *(u32*)(0x0C + (u32)state1) &= ~0x10000000;
        blooperCharacterInk = 0;
        sub_getPhysicsInput(this);
        // *(u8*)(0x10D + playerData) = 1;
    }

    // Set mushroomBoost2 timer (0x188) to default duration
    mushroomBoost2 = frames; // lha r0, 0(r3) — from global

    // Set state flag bit 10 (0x400) — mushroom active
    *(u32*)(0x04 + (u32)ps) |= 0x400;

    // Play mushroom use sound
    sub_playSoundId(this, 0x1A); // sound ID
}

// ============================================================================
// activateBoostStart()
// 0x8057f630 (376 bytes)
// ============================================================================
// Starting boost (from race countdown). Uses boost type bit 0 (slot 0,
// MT/SSMT/start boost slot). Sets start-boost flag and plays sound.
// ============================================================================
void PlayerSub10::activateBoostStart() {
    bool skipBoost = false;

    // Guard checks
    void* state1 = *(void**)(0x04 + (u32)*(void**)this->playerPointers);
    u32 flags8 = *(u32*)(0x08 + (u32)state1);
    u32 flagsC = *(u32*)(0x0C + (u32)state1);

    if (flags8 & 0x08000000) skipBoost = true;
    if (!skipBoost && (flags8 & 0x10000000)) skipBoost = false;
    if (!skipBoost && (flagsC & 0x10000000)) skipBoost = true;
    if (!skipBoost && (flags8 & 0x00000001)) skipBoost = true;
    if (!skipBoost && (flags8 & 0x08000000)) skipBoost = true;

    if (skipBoost) return;

    // Set start-boost flag (bit 15 = 0x8000)
    void* ps = *(void**)(0x04 + (u32)*(void**)this->playerPointers);
    *(u32*)(0x04 + (u32)ps) |= 0x8000;

    // Get default start boost duration
    s16 frames = 0; // lha r4, 0(r4) — from global

    // Clamp zipperBoostMax
    s16 currentZipperMax = zipperBoostMax;
    if (frames < currentZipperMax) {
        zipperBoostMax = frames;
    }

    // Set boost state flag
    *(u32*)(0x08 + (u32)ps) |= 0x80;

    // Play start boost sound
    sub_getScale(this);
    sub_playStartBoostSound(this); // 0x80708c08

    // Rumble
    sub_getPhysicsInput(this);
    // sub_0x806a5ea0();

    // Play boost activation sound
    sub_triggerSound(this);
    sub_setSound2(this, 4, 1);
    // 0x807cbb5c();

    // Check for ink cleanup
    u32 flagsC2 = *(u32*)(0x0C + (u32)state1);
    if (flagsC2 & 0x10000000) {
        *(u32*)(0x0C + (u32)state1) &= ~0x10000000;
        blooperCharacterInk = 0;
        sub_getPhysicsInput(this);
        // *(u8*)(0x10D + playerData) = 1;
    }
}

// ============================================================================
// endTrick()
// 0x8057f7a8 (452 bytes)
// ============================================================================
// Ends a trick/airborne stunt and activates the trick boost. The trick
// boost type and duration are looked up from the zipper's trick data
// based on the player's vehicle type. Uses boost type bit 4 (slot 4,
// trick/zipper slot).
// ============================================================================
void PlayerSub10::endTrick() {
    bool skipBoost = false;

    // Guard checks
    void* state1 = *(void**)(0x04 + (u32)*(void**)this->playerPointers);
    u32 flags8 = *(u32*)(0x08 + (u32)state1);
    u32 flagsC = *(u32*)(0x0C + (u32)state1);

    if (flags8 & 0x08000000) skipBoost = true;
    if (!skipBoost && (flags8 & 0x10000000)) skipBoost = false;
    if (!skipBoost && (flagsC & 0x10000000)) skipBoost = true;
    if (!skipBoost && (flags8 & 0x00000001)) skipBoost = true;
    if (!skipBoost && (flags8 & 0x08000000)) skipBoost = true;

    if (skipBoost) return;

    // Get trick boost duration from zipper object
    void* zipperObj = this->zipper; // 0x25C
    u16 vehicleType = *(u16*)(0x14 + (u32)zipperObj);
    // Look up from global table: duration = table[vehicleType * 6 + offset]
    s16 frames = *(s16*)((vehicleType * 6) + /* global table base */);

    // Activate trick boost (type 4)
    activateBoostSlot(4, frames);

    // Play trick boost sound
    sub_triggerSound(this);
    sub_setSound2(this, 3, 1);
}

// ============================================================================
// activateZipperBoost()
// 0x8057f96c (512 bytes)
// ============================================================================
// Zipper pad boost activation. The duration depends on whether the player
// is on a boost ramp (different duration) or a regular zipper pad.
// Uses boost type bit 4 (slot 4, trick/zipper slot).
// ============================================================================
void PlayerSub10::activateZipperBoost() {
    bool skipBoost = false;

    // Guard checks
    void* state1 = *(void**)(0x04 + (u32)*(void**)this->playerPointers);
    u32 flags8 = *(u32*)(0x08 + (u32)state1);
    u32 flagsC = *(u32*)(0x0C + (u32)state1);

    if (flags8 & 0x08000000) skipBoost = true;
    if (!skipBoost && (flags8 & 0x10000000)) skipBoost = false;
    if (!skipBoost && (flagsC & 0x10000000)) skipBoost = true;
    if (!skipBoost && (flags8 & 0x00000001)) skipBoost = true;
    if (!skipBoost && (flags8 & 0x08000000)) skipBoost = true;

    if (skipBoost) return;

    // Get zipper duration: boost ramp vs normal
    s16 frames;
    if (flags8 & 0x00008000) { // bit 15 — boost ramp
        frames = *(s16*)(0x3A0 + /* global table */ + 0x0A); // alternate duration
    } else {
        frames = *(s16*)(0x3A0 + /* global table */); // normal duration
    }

    // Activate zipper boost (type 4)
    activateBoostSlot(4, frames);

    // Clamp zipperBoostMax
    if (frames < zipperBoostMax) {
        zipperBoostMax = frames;
    }

    // Set boost state flags
    void* ps = *(void**)(0x04 + (u32)*(void**)this->playerPointers);
    *(u32*)(0x08 + (u32)ps) |= 0x80;  // bit 7 — boosting
    *(u32*)(0x08 + (u32)ps) |= 0x2000; // bit 13 — zipper boost

    // Zero MT charge and direction
    mtCharge = 0;
    // smtCharge or some related field at 0x12E
    *(s16*)(0x12E + (u8*)this) = 0;

    // Play zipper sound
    sub_triggerSound(this);
    sub_setSound2(this, 3, 1);
}

// ============================================================================
// activateBoostZipperInternal()
// 0x8057fb6c
// ============================================================================
// Internal zipper boost activation without guard checks. Used by the
// boost ramp system directly.
// ============================================================================

// ============================================================================
// activateBoostSsmt()
// ============================================================================
// Super Mini-Turbo boost. Inline helper that activates boost in slot 0
// (MT/SSMT/start boost slot, type bit 0) with the SMT duration.
// ============================================================================

// ============================================================================
// clearBoost()
// ============================================================================
// Clears all active boosts by zeroing the PlayerBoost types field and
// resetting all frame counters.
// ============================================================================
void PlayerSub10::clearBoost() {
    boost.types = 0;
    for (int i = 0; i < 6; i++) {
        boost.frames[i] = 0;
    }
    boost.multiplier = 0.0f;
    boost.acceleration = 0.0f;
    boost.speedLimit = 0.0f;
}