#include "PlayerSub10.hpp"

// Helper macros for safe pointer arithmetic
#define PA_U8(b,o)  (*reinterpret_cast<u8*>(reinterpret_cast<char*>(b)+(o)))
#define PA_S16(b,o) (*reinterpret_cast<s16*>(reinterpret_cast<char*>(b)+(o)))
#define PA_U16(b,o) (*reinterpret_cast<u16*>(reinterpret_cast<char*>(b)+(o)))
#define PA_U32(b,o) (*reinterpret_cast<u32*>(reinterpret_cast<char*>(b)+(o)))
#define PA_F32(b,o) (*reinterpret_cast<f32*>(reinterpret_cast<char*>(b)+(o)))
#define PA_PTR(b,o) (*reinterpret_cast<void**>(reinterpret_cast<char*>(b)+(o)))
#define WA_U32(b,o,v) (*reinterpret_cast<u32*>(reinterpret_cast<char*>(b)+(o))=(v))
#define PPTR(p) (*reinterpret_cast<void**>(p))

extern "C" {
void sub_getEffectGroup(void* p);
void sub_getEffectGroup2(void* p, s32);
void sub_getEffectGroup3(void* p);
void sub_playEffectSound(void* p, s32);
void sub_playCrushStartSound(void* p);
void sub_playCrushSound(void* p, s32);
void sub_playMegaSound(void* p, s32);
void sub_playEffectSound2(void* p, s32);
void sub_startEffect(void* p, s32, u32, u32);
void sub_endDriftEffect(void* p, s32);
void sub_clearAnim(void* p, s32);
void sub_updateScaleAnim(void* p, f32);
void sub_getBodyInfo(void* p);
void sub_clearInk(void* p);
void sub_updateInvisibility(void* p);
void sub_endSquishSound(void* p, s32);
void sub_startSquishSound(void* p, s32);
void sub_startSquishEffect(void* p, s32);
void sub_getSpeed(void* p);
void sub_getScale(void* p);
void sub_setScale(void* p, f32);
void sub_setMegaScale(void* p, f32);
void sub_triggerSound(void* p);
void sub_setSoundAttr(void* p, s32, u32, u32);
void sub_setSound2(void* p, s32, s32, s32);
void sub_playSoundId(void* p, s32);
void sub_getPhysicsInput(void* p);
void sub_getPhysicsInput(void* p);
void sub_triggerSound(void* p);
void sub_setSound2(void* p, s32, s32, s32);
void sub_playSoundId(void* p, s32);
void sub_getScale(void* p);
void sub_setScale(void* p, f32);
void sub_playCrushSound(void* p, s32);
void sub_playMegaSound(void* p, s32);
void sub_playEffectSound2(void* p, s32);
void sub_playItemSound(void* p, s32);
void sub_updateScaleAnim(void* p, f32);
void sub_clearInk(void* p);
void sub_getBodyInfo(void* p);
void sub_setMegaScale(void* p, f32);
void sub_eggVec3Normalize(void*, const void*);
void sub_updateInvisibility(void* p);
void sub_startSquishSound(void* p, s32);
void sub_startSquishEffect(void* p, s32);
void sub_endSquishSound(void* p, s32);
void sub_getSpeed(void* p);
void sub_clearAnim(void* p, s32);
}

// ============================================================================
// PlayerSub10 — Status Effects
// Addresses 0x80580438 - 0x805819a8
// ============================================================================

// Status effect system handles: Lightning, Star, Mega, Crush, Bullet,
// Invincibility, and Squish (Thwomp/Lightning shrink).
//
// Common pattern:
//   - State flags stored in playerState at (playerPointers->0x04)
//   - flags at offset 0x08: broad state (airborne, bullet, shock, etc.)
//   - flags at offset 0x0C: detailed state (ink, boost, star, mega, crush)
//   - flags at offset 0x14: additional state (squish, forced drift, etc.)
//   - Timers are s16, stored directly in PlayerSub10

// State flag bit definitions (for reference):
//   0x08 flags:
//     bit 0  (0x01): bullet bill active
//     bit 7  (0x80): boosting
//     bit 8  (0x100): something
//     bit 11 (0x800): shock/spinout
//     bit 12 (0x1000): some boost state
//     bit 13 (0x2000): zipper boost
//     bit 23 (0x800000): shock active
//     bit 27 (0x8000000): in some table state
//     bit 28 (0x10000000): star/mega invincibility
//     bit 29 (0x20000000): wall collision
//     bit 31 (0x80000000): something
//
//   0x0C flags:
//     bit 4  (0x10): currently boosting
//     bit 7  (0x80): ink active
//     bit 15 (0x8000): mega mushroom active
//     bit 23 (0x800000): crushed
//     bit 24 (0x1000000): has ink (gesso)
//     bit 26 (0x4000000): something
//     bit 27 (0x8000000): start boost flag
//     bit 28 (0x10000000): star/mega scale flag
//
//   0x14 flags:
//     bit 0  (0x01): squish state 1 (on ground)
//     bit 1  (0x02): squish state 2 (recovering)
//     bit 3  (0x08): forced drift
//     bit 4  (0x10): crush active
//     bit 16 (0x10000): something
//     bit 17 (0x20000): invincibility active
//     bit 19 (0x80000): something

// ============================================================================
// === LIGHTNING SYSTEM ===
// ============================================================================

// ============================================================================
// applyLightning()
// 0x80580438 (228 bytes)
// ============================================================================
// Applies lightning effect to this player. Checks if the player's
// character body type is in the "exempt" list (0xC1 mask on types 3-10).
// If exempt (heavy bodies), applies with duration 0x1C2 (450 frames).
// Otherwise, computes duration from a lookup table based on character
// body type index (offset 0x0B + bodyType).
// ============================================================================
void PlayerSub10::applyLightning() {
    // Get player index
    sub_getPhysicsInput(this);
    u32 playerIdx = /* result */ 0;
    u32 tableIdx = playerIdx << 2;

    // Look up player data from global
    void* global = *(void**)0;
    void* pTable = PA_PTR(global, 0x68);
    void* playerData = PA_PTR(pTable, tableIdx);
    u8 bodyType = PA_U8(playerData, 0x20);

    // Check body type against exemption table
    // Types 3-10 are checked against mask 0xC1
    u32 adjustedType = (u32)bodyType - 3;
    bool isExempt = false;
    if (adjustedType <= 7) {
        u32 mask = 1u << adjustedType;
        if (mask & 0xC1) { // bits 0, 6, 7
            isExempt = true;
        }
    }

    if (isExempt) {
        // Heavy body: use long fixed duration (0x1C2 = 450)
        applyLightningEffect(0x1C2, 0, 0);
    } else if (bodyType != 0 && bodyType <= 0x0C) {
        // Normal body: lookup from character-specific table
        void* global2 = *(void**)0;
        void* bodyTable = PA_PTR(global2, 0x14);
        u8 baseValue = PA_U8(bodyTable, 0x24);

        s16 durationIdx = (s16)(bodyType + 0x0B) - (s16)baseValue;
        // Look up from duration table (array of s16)
        s16 duration = 0; /* TODO: global table lookup */
        s16 frames = duration + 0x48; // base offset

        applyLightningEffect(frames, 0, 0);
    }
    // If bodyType == 0 or > 0x0C: do nothing (no effect)
}

// ============================================================================
// applyLightningByCharacter()
// 0x8058051c (208 bytes)
// ============================================================================
// Same as applyLightning but first calls sub_0x8059148c to get the
// character's body type from the kart object, rather than from the
// global player data.
// ============================================================================
void PlayerSub10::applyLightningByCharacter() {
    // Get character body type from kart
    sub_getBodyInfo(this);
    u8 bodyType = PA_U8(this, 0xA4);

    // Same exemption logic as applyLightning
    void* global = *(void**)0;
    void* pTable = PA_PTR(global, 0x68);
    u32 adjustedType = (u32)bodyType - 3;
    bool isExempt = false;
    if (adjustedType <= 7) {
        u32 mask = 1u << adjustedType;
        if (mask & 0xC1) {
            isExempt = true;
        }
    }

    if (isExempt) {
        applyLightningEffect(0x1C2, 0, 0);
    } else if (bodyType != 0 && bodyType <= 0x0C) {
        void* global2 = *(void**)0;
        void* bodyTable = PA_PTR(global2, 0x14);
        u8 baseValue = PA_U8(bodyTable, 0x24);
        s16 durationIdx = (s16)(bodyType + 0x0B) - (s16)baseValue;
        s16 duration = 0; /* TODO: global table lookup */
        s16 frames = duration + 0x48;

        applyLightningEffect(frames, 0, 0);
    }
}

// ============================================================================
// resetLightningEffect()
// 0x805805ec (92 bytes)
// ============================================================================
// Resets lightning by clearing the player's scale params in the global
// table, then applying lightning with duration 0x264 (612) and no
// additional effects (unk0=0, unk1=1).
// ============================================================================
void PlayerSub10::resetLightningEffect() {
    // Get player index
    sub_getPhysicsInput(this);
    u32 playerIdx = /* result */ 0;
    u32 tableIdx = playerIdx << 2;

    // Look up player data, zero params at offset 0x50
    void* global = *(void**)0;
    void* pTable = PA_PTR(global, 0x68);
    void* playerData = PA_PTR(pTable, tableIdx);
    PA_U32(playerData, 0x50) = 0;

    // Apply lightning with fixed long duration
    applyLightningEffect(0x264, 0, 1);
}

// ============================================================================
// resetLightningEffect2()
// 0x80580648 (92 bytes)
// ============================================================================
// Byte-identical to resetLightningEffect. Duplicate — possibly a
// different calling context or linker artifact.
// ============================================================================
void PlayerSub10::resetLightningEffect2() {
    sub_getPhysicsInput(this);
    u32 playerIdx = /* result */ 0;
    u32 tableIdx = playerIdx << 2;

    void* global = *(void**)0;
    void* pTable = PA_PTR(global, 0x68);
    void* playerData = PA_PTR(pTable, tableIdx);
    PA_U32(playerData, 0x50) = 0;

    applyLightningEffect(0x264, 0, 1);
}

// ============================================================================
// applyLightningWithDuration(duration, unk0, unk1)
// 0x805806a4 (212 bytes)
// ============================================================================
// Applies lightning with an explicit duration parameter, rather than
// computing it from the character body type.
// ============================================================================
void PlayerSub10::applyLightningWithDuration(s16 duration, u8 unk0, u8 unk1) {
    void* global = *(void**)0;
    u32 bodyTypeIdx = PA_U32(global, 0xB70);
    u32 adjustedType = bodyTypeIdx - 3;
    bool isExempt = false;
    if (adjustedType <= 7) {
        u32 mask = 1u << adjustedType;
        if (mask & 0xC1) {
            isExempt = true;
        }
    }

    if (isExempt) {
        applyLightningEffect(0x1C2, unk0, unk1);
    } else if (unk1 != 0 && unk1 <= 0x0C) {
        void* bodyTable = PA_PTR(global, 0x14);
        u8 baseValue = PA_U8(bodyTable, 0x24);
        s16 durationIdx = (s16)(unk1 + 0x0B) - (s16)baseValue;
        s16 tableDuration = 0; /* TODO: global table lookup */
        s16 frames = tableDuration + 0x48;
        applyLightningEffect(frames, unk0, unk1);
    }
    // unk1 == 0: do nothing
}

// ============================================================================
// applyLightningEffect(frames, unk0, unk1)
// 0x80580778 (544 bytes) — CORE LIGHTNING IMPLEMENTATION
// ============================================================================
// Applies the lightning squish effect. This is the internal function
// called by all lightning variants.
//
// @param frames Duration of the lightning effect in frames
// @param unk0   Unknown parameter (0 = normal, non-zero = different sound)
// @param unk1   Unknown parameter (0 = normal, 1 = no scale reset)
//
// Effect IDs: 0x0A = normal lightning, 0x0F = with spin, 0x11 = mega spin
// ============================================================================
void PlayerSub10::applyLightningEffect(s16 frames, u8 unk0, u8 unk1) {
    bool blocked = false;

    // Check state flags for blocking
    void* stateBase = PA_PTR(PPTR(this->playerPointers), 0x04);
    u32 flags8 = PA_U32(stateBase, 0x08);
    u32 flagsC = PA_U32(stateBase, 0x0C);

    // Block if: bullet (bit 0), star/mega (bits 27,28), or special flags (0x20600000)
    if (flags8 & 0x102) blocked = true; // bits 1, 8
    if (!blocked && (flagsC & 0x20660000)) blocked = true; // bits from 0x20C6000
    if (blocked) return; // r3 = 0 (no effect applied)

    // Block if in invincibility or mega state
    if (!blocked && ((flags8 >> 27) & 0x3)) blocked = true; // bits 27, 28
    if (blocked) return;

    // Block if already has ink
    if (flagsC & 0x08000000) {
        // Already has ink/gesso — handle specially
        // Clear the ink flag
        PA_U32(stateBase, 0x0C) &= ~0x08000000;

        // Clear ink effect from global player data
        sub_getPhysicsInput(this);
        u32 pIdx = /* result */ 0;
        void* global = *(void**)0;
        void* pTable = PA_PTR(global, 0x14);
        void* playerData = (reinterpret_cast<void*>(reinterpret_cast<char*>(pTable) + pIdx * 0x248));
        sub_clearInk(playerData);

        // Play deactivation sound
        sub_getScale(this);
        sub_playSoundId(this, 0x113); // sound ID

        // Clear star timer (MegaTimer at 0x194)
        MegaTimer = 0;

        // Reset scale
        sub_setScale(this, 0.0f); // f1 = 0.0f
        sub_setMegaScale(this, 0.0f);

        // Clear mega started flag
        if (0 /* TODO: field_0x190 */ == 0) {
            // Trigger trick end (effect group)
            sub_getEffectGroup(this->trick);
            sub_getEffectGroup2(this->trick, 1); // deactivate
            // TODO: field_0x190 = 1;
        }

        return; // r3 = 1
    }

    // --- Apply lightning effect ---
    // Select effect ID based on parameters
    s32 effectId;
    if (unk0 != 0) {
        effectId = 0x0F; // with spin
    } else if (unk1 != 0) {
        effectId = 0x11; // mega spin
    } else {
        effectId = 0x0A; // normal lightning
    }

    // Start lightning visual effect
    sub_endDriftEffect(this, effectId);

    // Clear scale on global player data
    sub_getPhysicsInput(this);
    u32 pIdx2 = /* result */ 0;
    void* global2 = *(void**)0;
    void* pTable2 = PA_PTR(global2, 0x14);
    void* playerData2 = (reinterpret_cast<void*>(reinterpret_cast<char*>(pTable2) + pIdx2 * 0x248));
    sub_playEffectSound(playerData2, 0x0C);

    // Play activation sound
    sub_triggerSound(this);
    sub_setSound2(this, 0x0F, 1, 0);

    // Set star state flag (bit 7 of 0x0C)
    WA_U32(stateBase, 0x0C, PA_U32(stateBase, 0x0C) | 0x80);

    // Set shock timer (0x18C) to the given duration if longer
    if (frames > shockTimer) {
        shockTimer = frames;
        // Clear invincibility effect
        sub_getEffectGroup(this->trick);
        sub_getEffectGroup2(this->trick, 0); // deactivate
    }

    // Play sound based on which parameter is set
    if (unk0 != 0) {
        sub_playSoundId(this, 0x18); // squish end sound
    } else if (unk1 != 0) {
        sub_playSoundId(this, 0x17); // squish start sound
    } else {
        sub_playSoundId(this, 0x16); // normal lightning sound
    }
}

// ============================================================================
// === STAR SYSTEM ===
// ============================================================================

// ============================================================================
// updateStar()
// 0x80580998 (236 bytes)
// ============================================================================
// Per-frame update for star power-up. Decrements the star timer, and
// when it expires, deactivates the star by clearing the scale and
// removing the star state flag.
// ============================================================================
void PlayerSub10::updateStar() {
    void* stateBase = PA_PTR(PPTR(this->playerPointers), 0x04);
    u32 flagsC = PA_U32(stateBase, 0x0C);

    // Only update if star is active (flag bit 7 at 0x0C)
    if (!(flagsC & 0x80)) {
        // Not in star state — decay shockSpeedMultiplier toward 1.0
        someScale = someScale - 1.0f; // constant at table[0x44]
        if (someScale < 0.0f) {
            someScale = 0.0f;
        }
        return;
    }

    // Star is active — decrement timer
    s16 timer = starTimer - 1;
    starTimer = timer;

    if (timer > 0) {
        // Star still active — decay shockSpeedMultiplier toward 1.0
        someScale = someScale - 1.0f; // table[0x44]
        if (someScale < 0.0f) {
            someScale = 0.0f;
        }
        return;
    }

    // Star expired — deactivate
    // Clear star flag
    PA_U32(stateBase, 0x0C) &= ~0x80;

    // Play deactivation sound
    sub_getScale(this);
    sub_playSoundId(this, 0x116); // star end sound

    // Clear timer
    starTimer = 0;

    // Clear invincibility effect
    sub_getEffectGroup(this->trick);
    sub_getEffectGroup2(this->trick, 0); // deactivate
}

// ============================================================================
// deactivateStar(resetScale)
// 0x80580a84 (144 bytes)
// ============================================================================
// Immediately deactivates the star power-up, regardless of timer.
// If resetScale is true, also resets the player's scale.
// ============================================================================
void PlayerSub10::deactivateStar(u8 resetScale) {
    // Clear star flag
    void* stateBase = PA_PTR(PPTR(this->playerPointers), 0x04);
    PA_U32(stateBase, 0x0C) &= ~0x80;

    // Play deactivation sound
    sub_getScale(this);
    sub_playSoundId(this, 0x116);

    // Clear timer
    starTimer = 0;

    // Clear invincibility effect
    sub_getEffectGroup(this->trick);
    sub_getEffectGroup2(this->trick, 0);

    // Optionally reset scale
    if (resetScale) {
        someScale = 0.0f;
    }
}

// ============================================================================
// === MEGA MUSHROOM SYSTEM ===
// ============================================================================

// ============================================================================
// activateMega() — virtual
// 0x80580b14 (456 bytes)
// ============================================================================
// Activates the Mega Mushroom. Sets the mega scale, starts the mega
// timer, plays sounds, and creates visual effects. If the player is
// already inked, the ink is cleared.
// ============================================================================
void PlayerSub10::activateMegaVirtual() {
    // Set mega flag (bit 15 = 0x8000 at 0x0C)
    void* stateBase = PA_PTR(PPTR(this->playerPointers), 0x04);
    WA_U32(stateBase, 0x0C, PA_U32(stateBase, 0x0C) | 0x8000);

    // Set mega timer from global default
    MegaTimer = 0; // lha r0, 0(r4) — from global

    // Look up player data for mega effect
    sub_getPhysicsInput(this);
    u32 pIdx = /* result */ 0;
    void* global = *(void**)0;
    void* pTable = PA_PTR(global, 0x68);
    void* playerData = PA_PTR(pTable, pIdx * 4);
    sub_playMegaSound(playerData, 0); // 0x806acf84

    // Set scale to mega scale
    sub_getScale(this);
    sub_setScale(this, 2); // scale type 2

    // Save current someScale for lerp
    // f31 = someScale (0x178)
    sub_setMegaScale(this, someScale);

    // Play activation sound
    sub_getScale(this);
    sub_playSoundId(this, 0x111); // mega activation

    // If player has ink — check and clear
    sub_getScale(this);
    u8 hasEffect = PA_U8(this, 0xE0);
    if (hasEffect) {
        void* global2 = *(void**)0;
        sub_playItemSound(this, 0); // some item clear sound
    }

    // If player has shock state (flag bit 7 at 0x0C) — clear it
    u32 flagsC = PA_U32(stateBase, 0x0C);
    if (flagsC & 0x80) {
        PA_U32(stateBase, 0x0C) &= ~0x80;
        sub_getScale(this);
        sub_playSoundId(this, 0x116); // star/shock end sound
        shockTimer = 0;
        sub_getEffectGroup(this->trick);
        sub_getEffectGroup2(this->trick, 0); // deactivate
    }

    // If player has crush state (flag bit 16 at 0x0C) — clear it
    if (flagsC & 0x10000) {
        PA_U32(stateBase, 0x0C) &= ~0x10000;
        sub_getScale(this);
        sub_playSoundId(this, 0x1A5); // crush end sound
        sub_getEffectGroup(this->trick);
        sub_getEffectGroup(this->trick); // remove
    }

    // Play mega start sound
    sub_playSoundId(this, 0x14);

    // Set mega sound attribute
    sub_triggerSound(this);
    sub_setSound2(this, 0x1B, 1, 0);

    // Clear mega started flag
    this->field_0x190 = 0;
}

// ============================================================================
// startMega(resetScale)
// 0x80580cdc (228 bytes)
// ============================================================================
// Starts the mega mushroom effect. Clears the mega state flag first,
// then re-initializes the scale and timer. If resetScale is true,
// also resets the player's current scale to 1.0.
// ============================================================================
void PlayerSub10::startMega(u8 resetScale) {
    // Clear mega state flag
    void* stateBase = PA_PTR(PPTR(this->playerPointers), 0x04);
    PA_U32(stateBase, 0x0C) &= ~0x8000;

    // Clear scale effect on global player data
    sub_getPhysicsInput(this);
    u32 pIdx = /* result */ 0;
    void* global = *(void**)0;
    void* pTable = PA_PTR(global, 0x14);
    void* playerData = (reinterpret_cast<void*>(reinterpret_cast<char*>(pTable) + pIdx * 0x248));
    sub_clearInk(playerData);

    // If resetScale: play deactivation sound
    if (!resetScale) {
        sub_getScale(this);
        sub_playSoundId(this, 0x113); // sound
    }

    // Clear mega timer
    MegaTimer = 0;

    // Reset scale
    sub_setScale(this, 0.0f);
    sub_setMegaScale(this, 0.0f);

    // Clear mega started flag
    if (0 /* TODO: field_0x190 */ == 0) {
        sub_getEffectGroup(this->trick);
        sub_getEffectGroup2(this->trick, 1); // activate
        // TODO: field_0x190 = 1;
    }

    // If resetScale: zero someScale
    if (resetScale) {
        someScale = 0.0f;
    }
}

// ============================================================================
// updateMega()
// 0x80580dc0 (360 bytes)
// ============================================================================
// Per-frame update for mega mushroom. Decrements timer and handles
// scale interpolation (growing on activation, shrinking on expiration).
// ============================================================================
void PlayerSub10::updateMega() {
    void* stateBase = PA_PTR(PPTR(this->playerPointers), 0x04);
    u32 flagsC = PA_U32(stateBase, 0x0C);

    // Only update if mega is active (flag bit 15 at 0x0C)
    if (!(flagsC & 0x8000)) {
        // Not in mega state — grow scale toward 1.0
        someScale = someScale + 1.0f; // table[0x40]
        if (someScale > 0.0f) {
            someScale = 0.0f; // table[4]
        }
        return;
    }

    // Mega active — decrement timer
    s16 timer = MegaTimer - 1;
    MegaTimer = timer;

    if (timer > 0) {
        // Still active
        // Check if we should trigger the "almost done" effect
        u8 megaStarted = 0 /* TODO: field_0x190 */;
        if (megaStarted == 0 && timer <= 0x19) { // 25 frames before end
            // TODO: field_0x190 = 1;
            sub_getEffectGroup(this->trick);
            sub_getEffectGroup2(this->trick, 1);
        }
        // Shrink scale toward 1.0
        someScale = someScale + 1.0f; // table[0x3C]
        return;
    }

    // Mega expired — deactivate
    PA_U32(stateBase, 0x0C) &= ~0x8000;

    // Clear scale from global player data
    sub_getPhysicsInput(this);
    u32 pIdx = /* result */ 0;
    void* global = *(void**)0;
    void* pTable = PA_PTR(global, 0x14);
    void* playerData = (reinterpret_cast<void*>(reinterpret_cast<char*>(pTable) + pIdx * 0x248));
    sub_clearInk(playerData);

    // Play deactivation sound
    sub_getScale(this);
    sub_playSoundId(this, 0x113);

    // Clear timer
    MegaTimer = 0;

    // Reset scale
    sub_setScale(this, 1.0f); // table[4]
    sub_setMegaScale(this, 1.0f);

    // Clear mega started flag
    if (0 /* TODO: field_0x190 */ == 0) {
        sub_getEffectGroup(this->trick);
        sub_getEffectGroup2(this->trick, 1);
        // TODO: field_0x190 = 1;
    }
}

// ============================================================================
// === CRUSH SYSTEM (Thwomp / Mega) ===
// ============================================================================

// ============================================================================
// startCrush(frames)
// 0x80580f28 (116 bytes)
// ============================================================================
// Starts the crush/squish effect (from Thwomp or Mega hitting a player).
// Sets the crush flag and starts the crush timer.
// ============================================================================
void PlayerSub10::startCrush(s16 frames) {
    // Set crush flag (bit 0 at 0x0C)
    void* stateBase = PA_PTR(PPTR(this->playerPointers), 0x04);
    WA_U32(stateBase, 0x0C, PA_U32(stateBase, 0x0C) | 0x01);

    // Play crush start sound
    sub_getScale(this);
    sub_playSoundId(this, 0x1A4); // crush start

    // Set crush timer
    crushTimer = frames;

    // Trigger crush effect
    sub_getEffectGroup(this->trick);
}

// ============================================================================
// updateCrush()
// 0x80580f9c (152 bytes)
// ============================================================================
// Per-frame update for crush effect. Decrements timer and deactivates
// when expired.
// ============================================================================
void PlayerSub10::updateCrush() {
    void* stateBase = PA_PTR(PPTR(this->playerPointers), 0x04);
    u32 flagsC = PA_U32(stateBase, 0x0C);

    // Only update if crush is active (flag bit 16 at 0x0C)
    if (!(flagsC & 0x10000)) {
        return;
    }

    // Decrement timer
    s16 timer = crushTimer - 1;
    crushTimer = timer;

    if (timer > 0) {
        return;
    }

    // Crush expired — check flag still set (might have been cleared elsewhere)
    u32 flagsC2 = PA_U32(stateBase, 0x0C);
    if (!(flagsC2 & 0x10000)) {
        return;
    }

    // Clear crush flag
    PA_U32(stateBase, 0x0C) &= ~0x10000;

    // Play crush end sound
    sub_getScale(this);
    sub_playSoundId(this, 0x1A5); // crush end

    // Remove crush effect
    sub_getEffectGroup(this->trick);
    sub_getEffectGroup(this->trick); // remove
}

// ============================================================================
// endCrush()
// 0x80581034 (116 bytes)
// ============================================================================
// Immediately ends the crush effect, regardless of timer.
// ============================================================================
void PlayerSub10::endCrush() {
    void* stateBase = PA_PTR(PPTR(this->playerPointers), 0x04);
    u32 flagsC = PA_U32(stateBase, 0x0C);

    if (!(flagsC & 0x10000)) {
        return;
    }

    // Clear crush flag
    PA_U32(stateBase, 0x0C) &= ~0x10000;

    // Play crush end sound
    sub_getScale(this);
    sub_playSoundId(this, 0x1A5);

    // Remove crush effect
    sub_getEffectGroup(this->trick);
    sub_getEffectGroup(this->trick); // remove
}

// ============================================================================
// === INVINCIBILITY SYSTEM ===
// ============================================================================

// ============================================================================
// updateInvincibility()
// 0x805813e8 (548 bytes)
// ============================================================================
// Per-frame update for invincibility (from stars, mega, etc.).
// Handles the invincibility timer, sound ticks, and automatic
// spinout when invincibility expires while moving fast.
// ============================================================================
void PlayerSub10::updateInvincibility() {
    void* stateBase = PA_PTR(PPTR(this->playerPointers), 0x04);
    u32 flagsC = PA_U32(stateBase, 0x0C);

    // Only update if invincibility is active (flag bit 18 at 0x0C)
    if (!(flagsC & 0x40000)) {
        return;
    }

    // Check speed — if not moving, play tick sound
    f32 currentSpeed = someScale; // 0x160 — this is actually the invincibility scale
    // Actually reads from KartPhysics speed
    // If speed is very low:
    //   Play invincibility tick sound (0x1AA) via vtable

    // Decay invincibility scale toward 1.0
    // scale -= decayRate (table[0x48])
    // Clamp to minimum (table[0xC8])
    if (currentSpeed < 0.0f) {
        someScale = 0.0f; // min
    }

    // If scale reached 0 or below: invincibility expired
    bool expired = false;
    // (Implementation reads someScale at 0x160, compares with table values)

    if (expired) {
        // Clear invincibility state
        PA_U32(stateBase, 0x0C) &= ~0x40000; // bit 18
        // Also clear some other flags
        PA_U32(stateBase, 0x0C) &= ~0x08;   // bit 3

        // Set spinout state
        sub_getScale(this); // get player index
        // sub_0x807960a0(); // trigger spinout

        // Reset invincibility timer
    } else {
        // Increment invincibility timer at 0x21C
        s16 invTimer = *(s16*)(0x21C + (u8*)this);
        invTimer++;
        *(s16*)(0x21C + (u8*)this) = invTimer;

        // Check if timer exceeded maximum
        s16 maxTimer = 0; // from global
        if (invTimer >= maxTimer) {
            // Clear invincibility flags and start spinout
            void* stateBase2 = PA_PTR(PPTR(this->playerPointers), 0x04);
            PA_U32(stateBase2, 0x14) &= ~0xFFFFDFFF; // clear bits 13-19
            *(s16*)(0x21C + (u8*)this) = 0;

            // If forced drift flag not set: start spinout
            u32 flags14 = PA_U32(stateBase2, 0x14);
            if (!(flags14 & 0x08)) {
                *(s16*)(0x234 + (u8*)this) = 0;
                // Set spinout/ghost state
                WA_U32(stateBase2, 0x08, PA_U32(stateBase2, 0x08) | 0x02); // bit 1
            }

            // Play sound
            s32 soundId = 0x1A;
            u32 flags14b = PA_U32(stateBase2, 0x14);
            if (flags14b & 0x20) { // bit 5
                soundId = 0x1B;
            }
            sub_setScale(this, soundId);

            // Increment some counter
            void* stateBase3 = PA_PTR(PPTR(this->playerPointers), 0x04);
            sub_updateInvisibility(this);

            // Check for ghost vanish counter
            void* playerObj = *(void**)(0x00 + (u32)this->playerPointers);
            u32* someCounter = *(u32**)(0x34 + (u32)playerObj);
            if (someCounter && *someCounter) {
                (*someCounter)++;
            }
        }
    }
}

// ============================================================================
// === PLAYER SCALE SYSTEM ===
// ============================================================================

// ============================================================================
// updatePlayerScale()
// 0x8058160c (304 bytes)
// ============================================================================
// Updates the player's visual scale based on mega, crush, squish,
// and other effects. Applies scale through the KartPhysics system.
// ============================================================================
void PlayerSub10::updatePlayerScale() {
    // Get scale from trick/effect system
    sub_getEffectGroup(this->trick);

    // Read current scale (0x160) and KartPhysics pose scale
    f32 effectScale = someScale; // 0x160

    // Compute 3x3 matrix from pose and scale
    // Multiply scale into the rotation matrix
    // Store result to 0x170 (scaled pose matrix)

    // Compute final megaScale (0x184) = baseScale / currentScale
    // If currentScale is zero, use raw scale from pose
    f32 currentScale = /* computed from matrix */;
    if (currentScale != 0.0f) {
        megaScale = someScale / currentScale; // actual: baseScale / currentScale
    } else {
        megaScale = currentScale; // fallback
    }

    // If megaScale changed: trigger scale animation update
    f32 prevScale = *(f32*)(0x16C + (u8*)this);
    if (prevScale != 1.0f) {
        // Animate scale change
        sub_updateScaleAnim(this, scale);
    }

    // Clamp megaScale to valid range
    if (megaScale < 0.0f) {
        megaScale = 1.0f / *(f32*)(0x16C + (u8*)this);
    }
}

// ============================================================================
// === SQUISH SYSTEM (Lightning/Thwomp shrink) ===
// ============================================================================

// ============================================================================
// startSquish(frames)
// 0x8058173c (60 bytes)
// ============================================================================
// Starts the squish effect with the given duration.
// Sets the squish state flag (bit 8 at 0x08) and stores the timer.
// ============================================================================
void PlayerSub10::startSquish(s16 frames) {
    // Set squish flag (bit 8 at 0x08)
    void* stateBase = PA_PTR(PPTR(this->playerPointers), 0x04);
    WA_U32(stateBase, 0x08, PA_U32(stateBase, 0x08) | 0x100);

    // Store squish timer
    *(s16*)(0x1A8 + (u8*)this) = frames;

    // Play squish start effect/sound
    sub_getScaleAnim(this, 0); // activate squish
    sub_startSquishEffect(this, 0); // sound/effect
}

// ============================================================================
// tryStartSquish()
// 0x80581778 (172 bytes)
// ============================================================================
// Attempts to start the squish effect, with guard checks for character
// body type exemptions (same mask as lightning).
// ============================================================================
void PlayerSub10::tryStartSquish() {
    // Check if already squishing (flag bit 3 at 0x14)
    void* stateBase = PA_PTR(PPTR(this->playerPointers), 0x04);
    u32 flags14 = PA_U32(stateBase, 0x14);
    if (flags14 & 0x08) {
        return; // Already squishing
    }

    // Set squish state flags
    WA_U32(stateBase, 0x14, PA_U32(stateBase, 0x14) | 0x01); // bit 0
    WA_U32(stateBase, 0x14, PA_U32(stateBase, 0x14) | 0x80); // bit 7

    // Zero squish recovery timer
    *(s16*)(0x1AC + (u8*)this) = 0;

    // Check body type exemption (same as lightning)
    void* global = *(void**)0;
    u32 bodyTypeIdx = PA_U32(global, 0xB70);
    u32 adjustedType = bodyTypeIdx - 3;
    bool isExempt = false;
    if (adjustedType <= 7) {
        u32 mask = 1u << adjustedType;
        if (mask & 0xC1) {
            isExempt = true;
        }
    }

    if (isExempt) {
        // Exempt from squish — just do a brief flash
        // Set squish flag (bit 8 at 0x08)
        WA_U32(stateBase, 0x08, PA_U32(stateBase, 0x08) | 0x100);

        // Use default short duration
        s16 frames = 0; // lha r0, 0(r4) — from global
        *(s16*)(0x1A8 + (u8*)this) = frames;

        sub_getScaleAnim(this, 0);
        sub_startSquishEffect(this, 0);
    }
}

// ============================================================================
// updateSquish()
// 0x80581824 (328 bytes)
// ============================================================================
// Per-frame update for squish effect. Handles both the active squish
// (shrinking) and recovery (growing back) phases.
// ============================================================================
void PlayerSub10::updateSquish() {
    void* stateBase = PA_PTR(PPTR(this->playerPointers), 0x04);
    u32 flags8 = PA_U32(stateBase, 0x08);

    // Active squish phase (flag bit 8 at 0x08)
    if (flags8 & 0x100) {
        s16 timer = *(s16*)(0x1A8 + (u8*)this);
        timer--;
        *(s16*)(0x1A8 + (u8*)this) = timer;
        bool expired = (timer <= 0);

        if (expired) {
            // Clear active squish flag
            PA_U32(stateBase, 0x08) &= ~0x100;
        }

        // Update squish scale animation
        sub_getScaleAnim(this, expired ? 1 : 0);
        sub_endSquishEffect(this, expired ? 1 : 0);
        return;
    }

    // Recovery phase (flag bit 1 at 0x14)
    // Check if we should enter recovery
    void* global = *(void**)0;
    u32 globalFlag = PA_U32(global, 0xB78);
    if (globalFlag != 0) {
        return; // Some global condition blocks recovery
    }

    u32 flags14 = PA_U32(stateBase, 0x14);
    if (!(flags14 & 0x10000)) return; // bit 16 must be set
    if (flags14 & 0x08) return;     // bit 3 blocks
    u32 flagsC = PA_U32(stateBase, 0x0C);
    if (flagsC & 0x10) return;      // boosting blocks
    if (flagsC & 0x6000) return;    // drift state blocks

    // Increment recovery timer
    s16 recoveryTimer = *(s16*)(0x1AC + (u8*)this);
    recoveryTimer++;
    *(s16*)(0x1AC + (u8*)this) = recoveryTimer;

    s16 maxTimer = 0; // from global
    if (recoveryTimer >= maxTimer) {
        // Recovery complete — set spinout state
        u32 flagsC2 = PA_U32(stateBase, 0x0C);
        if (!(flagsC2 & 0x0C0000)) { // bits 18-19
            WA_U32(stateBase, 0x0C, PA_U32(stateBase, 0x0C) | 0x04); // bit 2
        }

        // Play recovery sound
        sub_startSquishSound(this, 6); // 0x80591834

        // Clear recovery timer
        *(s16*)(0x1AC + (u8*)this) = 0;

        // Clear squish state flags
        PA_U32(stateBase, 0x14) &= ~0x01; // bit 0
        PA_U32(stateBase, 0x14) &= ~0x80; // bit 7

        // Set recovery flag
        WA_U32(stateBase, 0x14, PA_U32(stateBase, 0x14) | 0x02); // bit 1
    }
}

// ============================================================================
// cancelSquish()
// 0x8058196c (60 bytes)
// ============================================================================
// Immediately cancels the squish effect and any recovery.
// ============================================================================
void PlayerSub10::cancelSquish() {
    // Clear squish flag
    void* stateBase = PA_PTR(PPTR(this->playerPointers), 0x04);
    PA_U32(stateBase, 0x08) &= ~0x100;

    // End squish animation (force end)
    sub_getScaleAnim(this, 1); // force end
    sub_endSquishEffect(this, 1); // force end
}

// ============================================================================
// applySquish()
// 0x805819a8 (176 bytes)
// ============================================================================
// Applies squish to the player with body type exemption check.
// Similar to tryStartSquish but without the recovery state check.
// ============================================================================
void PlayerSub10::applySquish() {
    // Check body type exemption
    void* global = *(void**)0;
    u32 bodyTypeIdx = PA_U32(global, 0xB70);
    u32 adjustedType = bodyTypeIdx - 3;
    bool isExempt = false;
    if (adjustedType <= 7) {
        u32 mask = 1u << adjustedType;
        if (mask & 0xC1) {
            isExempt = true;
        }
    }

    if (!isExempt) {
        return; // Only apply to non-exempt body types
    }

    // Set squish flag
    void* stateBase = PA_PTR(PPTR(this->playerPointers), 0x04);
    WA_U32(stateBase, 0x08, PA_U32(stateBase, 0x08) | 0x100);

    // Use default duration
    s16 frames = 0; // lha r0, 0(r4) — from global
    *(s16*)(0x1A8 + (u8*)this) = frames;

    sub_getScaleAnim(this, 0);
    sub_startSquishEffect(this, 0);
}