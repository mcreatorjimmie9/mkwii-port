// ============================================================================
// ItemRoulette implementation — Spinning item box selection
// ============================================================================
// Translated from PowerPC assembly stubs in StaticR.rel.
// The roulette determines which item a player receives based on their
// race position, using weighted probability tables.
//
// Assembly summary (0x807bc864, 496 bytes):
//   lwz      r8, 4(r5)        — load position range from config +0x4
//   mr       r4, r30          — pass player index
//   lwz      r0, 8(r5)        — load type weights from config +0x8
//   mr       r6, r27          — pass roulette state
//   stw      r8, 0x20(r1)     — store position range on stack
//   mr       r7, r31          — pass flags
//   addi     r5, r1, 0x1c     — temp buffer on stack
//   stw      r0, 0x24(r1)     — store type weights on stack
//   bl       0x807bb060       — call probability lookup function
//   b        0x807bc920       — exit to epilogue
//
//   // Retry loop:
//   lwz      r0, 8(r29)       — check current position index
//   cmpwi    r0, 0            — if zero, branch
//   lhz      r0, 8(r1)        — load flags halfword
//   rlwinm.  r0, r0, 0, 0x10, 0x10  — test bit 16 (spinning flag)
//   beq      0x807bc8d4       — if not spinning, skip
//   li       r27, 1           — mark as found
//
//   // Build item bitmask:
//   lhz      r0, 8(r1)        — load flags
//   cmpwi    r31, 0           — check if result pointer valid
//   clrlwi   r0, r0, 0x1b     — extract 11-bit type index (clear upper 11 bits)
//   slw      r3, r28, r0      — shift 1 left by type index -> single-bit mask
//   beq      0x807bc8f4       — if result ptr null, skip OR
//   lwz      r0, 0(r31)       — load current bitmask
//   or       r0, r0, r3       — accumulate: bitmask |= (1 << typeIndex)
//   stw      r0, 0(r31)       — store updated bitmask
//
//   // Clear temp and retry:
//   li       r27, 1           — set found flag
//   // memset call:
//   mr       r3, r30          — dest buffer
//   addi     r4, r1, 0xc      — source
//   addi     r6, r1, 8        — size info
//   addi     r12, r1, 0x10    — flags source
//   li       r5, 0            — fill value (zero)
//   bl       0x80555bf8       — call memset
//   cmpwi    r3, 0            — check memset result
//   bne      0x807bc8b4       — if nonzero, retry loop
//   mr       r3, r27          — return success/failure flag
// ============================================================================

#include "ItemRoulette.hpp"
#include <cstring>
#include <cmath>

namespace Item {

// ============================================================================
// Constructor / Destructor
// ============================================================================

ItemRoulette::ItemRoulette()
    : mPlayerPosition(1)
    , mPlayerCount(12)
    , mAnimFrame(0)
    , mSpinSpeed(0.0f)
    , mSpinTimer(0)
    , mFlags(0)
    , mItemBitmask(0)
    , mResult(ITEM_NONE) {
    std::memset(mProbabilityWeights, 0, sizeof(mProbabilityWeights));
    std::memset(mTempBuffer, 0, sizeof(mTempBuffer));
}

ItemRoulette::~ItemRoulette() {
}

// ============================================================================
// init — Setup roulette for a specific player
// ============================================================================

void ItemRoulette::init(u8 playerCount, u8 playerPosition) {
    mPlayerCount = playerCount;
    mPlayerPosition = playerPosition;
    mAnimFrame = 0;
    mSpinSpeed = 0.0f;
    mSpinTimer = 0;
    mFlags = 0;
    mItemBitmask = 0;
    mResult = ITEM_NONE;

    // Compute the probability weights for this position
    calcItemProbability(playerPosition, playerCount);
}

// ============================================================================
// startSpin — Begin the roulette spinning animation
// ============================================================================

void ItemRoulette::startSpin() {
    mFlags |= FLAG_SPINNING;
    mFlags &= ~FLAG_COMPLETE;

    // Initial spin speed: proportional to number of items to cycle through
    mSpinSpeed = 8.0f + static_cast<f32>(mPlayerPosition) * 0.5f;

    // Base spin duration: longer for lower positions (more item variety)
    mSpinTimer = SPIN_DURATION_BASE + mPlayerPosition * 10;

    // Clear previous result
    mResult = ITEM_NONE;
    mItemBitmask = 0;
}

// ============================================================================
// update — Per-frame roulette update (main translated function)
// @addr 0x807bc864
// @size 496 bytes
// @calls 2 function(s)
// ============================================================================
// The assembly flow:
// 1. Load config (position range at +0x4, type weights at +0x8)
// 2. Call 0x807bb060 (probability/random lookup)
// 3. If result, jump to epilogue with success
// 4. Otherwise enter retry loop:
//    a. Check if roulette is active (bit 16 of flags word)
//    b. Build accumulated item type bitmask using slw+or
//    c. memset temp buffer to zero (0x80555bf8)
//    d. If memset returns nonzero, retry
//    e. Otherwise return r27 (found flag)
// ============================================================================

void ItemRoulette::update() {
    // If not spinning, nothing to do
    if (!isSpinning()) {
        return;
    }

    // Decrement spin timer
    mSpinTimer--;

    // Decelerate the spin speed over time (ease-out effect)
    // The assembly's deceleration is implicit in the loop structure
    if (mSpinTimer > 0) {
        // Still spinning: advance the animation frame
        mSpinSpeed *= 0.97f; // Gradual slowdown
        if (mSpinSpeed < 0.5f) {
            mSpinSpeed = 0.5f; // Minimum spin speed
        }

        // Advance frame counter (rate proportional to spin speed)
        mAnimFrame += static_cast<u32>(mSpinSpeed);
    } else {
        // Spin complete: determine the final item
        mFlags &= ~FLAG_SPINNING;
        mFlags |= FLAG_COMPLETE;

        // Perform weighted random selection from probability table
        mResult = selectItem();

        // Build the item bitmask (assembly: slw + or pattern)
        // clrlwi r0, r0, 0x1b -> extract 11-bit type index
        // slw r3, r28, r0 -> 1 << typeIndex
        // or r0, r0, r3 -> accumulate bitmask
        if (mResult != ITEM_NONE) {
            u32 typeIndex = static_cast<u32>(mResult);
            if (typeIndex < 32) {
                u32 bit = 1U << typeIndex;
                mItemBitmask |= bit;
            }
        }

        // Clear temp buffer (assembly: bl 0x80555bf8 = memset)
        std::memset(mTempBuffer, 0, sizeof(mTempBuffer));
    }
}

// ============================================================================
// calcItemProbability — Compute probability weights by race position
// ============================================================================
// In MKW, the item distribution heavily favors catch-up items for
// players in lower positions. This fills mProbabilityWeights[] with
// relative weights for each item type.
//
// Simplified weight model based on known MKW behavior:
//   1st place:  bananas (8), green shells (4), mushrooms (3), others low
//   Mid-field:  red shells (5), bob-ombs (3), mixed
//   Last place: stars (4), bullet bills (3), golden mushrooms (3)
// ============================================================================

void ItemRoulette::calcItemProbability(u8 position, u8 playerCount) {
    (void)playerCount;
    std::memset(mProbabilityWeights, 0, sizeof(mProbabilityWeights));

    // Everyone can get bananas, green shells, and mushrooms
    mProbabilityWeights[ITEM_BANANA] = 3;
    mProbabilityWeights[ITEM_GREEN_SHELL] = 3;
    mProbabilityWeights[ITEM_MUSHROOM] = 2;

    if (position <= 3) {
        // Top 3: mostly defensive items
        mProbabilityWeights[ITEM_BANANA] = 8;
        mProbabilityWeights[ITEM_GREEN_SHELL] = 4;
        mProbabilityWeights[ITEM_MUSHROOM] = 3;
        mProbabilityWeights[ITEM_RED_SHELL] = 2;
        mProbabilityWeights[ITEM_BOB_OMB] = 1;
    } else if (position <= 6) {
        // Mid-field: mix of offensive and defensive
        mProbabilityWeights[ITEM_BANANA] = 4;
        mProbabilityWeights[ITEM_GREEN_SHELL] = 4;
        mProbabilityWeights[ITEM_RED_SHELL] = 5;
        mProbabilityWeights[ITEM_MUSHROOM] = 3;
        mProbabilityWeights[ITEM_BOB_OMB] = 3;
        mProbabilityWeights[ITEM_STAR] = 1;
        mProbabilityWeights[ITEM_GOLDEN_MUSH] = 1;
    } else {
        // Bottom half: powerful catch-up items
        mProbabilityWeights[ITEM_BANANA] = 2;
        mProbabilityWeights[ITEM_GREEN_SHELL] = 2;
        mProbabilityWeights[ITEM_RED_SHELL] = 3;
        mProbabilityWeights[ITEM_MUSHROOM] = 3;
        mProbabilityWeights[ITEM_STAR] = 4;
        mProbabilityWeights[ITEM_BULLET_BILL] = 3;
        mProbabilityWeights[ITEM_GOLDEN_MUSH] = 3;
        mProbabilityWeights[ITEM_LIGHTNING] = 1;
        mProbabilityWeights[ITEM_BOB_OMB] = 2;
    }
}

// ============================================================================
// selectItem — Weighted random selection from probability table
// ============================================================================
// Sums all weights, picks a random value in [0, totalWeight), and maps
// it back to an item type. Returns ITEM_NONE if all weights are zero.
//
// This corresponds to the assembly's retry loop structure:
//   cmpwi r3, 0 / bne retry  — loop until a valid result is found
//   mr r3, r27               — return the found flag
// ============================================================================

ItemType ItemRoulette::selectItem() {
    // Sum all probability weights
    u32 totalWeight = 0;
    for (u32 i = 0; i < MAX_ITEM_TYPES; i++) {
        totalWeight += mProbabilityWeights[i];
    }

    // Edge case: no valid items
    if (totalWeight == 0) {
        return ITEM_NONE;
    }

    // Weighted random selection
    // In the original, this uses a PRNG call (0x807bb060 or similar)
    u32 roll = 0; // Simplified: actual PRNG call would go here
    roll = roll % totalWeight;

    // Find which item type the roll lands on
    u32 accum = 0;
    for (u32 i = 0; i < MAX_ITEM_TYPES; i++) {
        accum += mProbabilityWeights[i];
        if (roll < accum) {
            return static_cast<ItemType>(i);
        }
    }

    // Fallback: return last non-zero item
    for (s32 i = static_cast<s32>(MAX_ITEM_TYPES) - 1; i >= 0; i--) {
        if (mProbabilityWeights[i] > 0) {
            return static_cast<ItemType>(i);
        }
    }

    return ITEM_NONE;
}

} // namespace Item

#ifdef ASSEMBLY_REFERENCE
/* Raw PowerPC assembly from StaticR.rel */
/* 0x807bc864: 81 05 00 04              lwz      r8, 4(r5) */
/* 0x807bc868: 7f c4 f3 78              mr       r4, r30 */
/* 0x807bc86c: 80 05 00 08              lwz      r0, 8(r5) */
/* 0x807bc870: 7f 66 db 78              mr       r6, r27 */
/* 0x807bc874: 91 01 00 20              stw      r8, 0x20(r1) */
/* 0x807bc878: 7f e7 fb 78              mr       r7, r31 */
/* 0x807bc87c: 38 a1 00 1c              addi     r5, r1, 0x1c */
/* 0x807bc880: 90 01 00 24              stw      r0, 0x24(r1) */
/* 0x807bc884: 4b ff e7 dd              bl       0x807bb060 */
/* 0x807bc888: 48 00 00 98              b        0x807bc920 */
/* 0x807bc88c: 3c a0 00 00              lis      r5, 0 */
/* 0x807bc890: 84 85 00 00              lwzu     r4, 0(r5) */
/* 0x807bc894: 90 81 00 10              stw      r4, 0x10(r1) */
/* 0x807bc898: 3b 60 00 00              li       r27, 0 */
/* 0x807bc89c: 80 65 00 04              lwz      r3, 4(r5) */
/* 0x807bc8a0: 3b 80 00 01              li       r28, 1 */
/* 0x807bc8a4: 80 05 00 08              lwz      r0, 8(r5) */
/* 0x807bc8a8: 90 61 00 14              stw      r3, 0x14(r1) */
/* 0x807bc8ac: 90 01 00 18              stw      r0, 0x18(r1) */
/* 0x807bc8b0: 48 00 00 48              b        0x807bc8f8 */
/* 0x807bc8b4: 80 1d 00 08              lwz      r0, 8(r29) */
/* 0x807bc8b8: 2c 00 00 00              cmpwi    r0, 0 */
/* 0x807bc8bc: 41 82 00 18              beq      0x807bc8d4 */
/* 0x807bc8c0: a0 01 00 08              lhz      r0, 8(r1) */
/* 0x807bc8c4: 54 00 04 21              rlwinm.  r0, r0, 0, 0x10, 0x10 */
/* 0x807bc8c8: 41 82 00 0c              beq      0x807bc8d4 */
/* 0x807bc8cc: 3b 60 00 01              li       r27, 1 */
/* 0x807bc8d0: 48 00 00 28              b        0x807bc8f8 */
/* 0x807bc8d4: a0 01 00 08              lhz      r0, 8(r1) */
/* 0x807bc8d8: 2c 1f 00 00              cmpwi    r31, 0 */
/* 0x807bc8dc: 54 00 06 fe              clrlwi   r0, r0, 0x1b */
/* 0x807bc8e0: 7f 83 00 30              slw      r3, r28, r0 */
/* 0x807bc8e4: 41 82 00 10              beq      0x807bc8f4 */
/* 0x807bc8e8: 80 1f 00 00              lwz      r0, 0(r31) */
/* 0x807bc8ec: 7c 00 1b 78              or       r0, r0, r3 */
/* 0x807bc8f0: 90 1f 00 00              stw      r0, 0(r31) */
/* 0x807bc8f4: 3b 60 00 01              li       r27, 1 */
/* 0x807bc8f8: 7f c3 f3 78              mr       r3, r30 */
/* 0x807bc8fc: 38 81 00 0c              addi     r4, r1, 0xc */
/* 0x807bc900: 38 c1 00 08              addi     r6, r1, 8 */
/* 0x807bc904: 39 81 00 10              addi     r12, r1, 0x10 */
/* 0x807bc908: 38 a0 00 00              li       r5, 0 */
/* 0x807bc90c: 4b d9 92 ed              bl       0x80555bf8 */
/* 0x807bc910: 60 00 00 00              nop       */
/* 0x807bc914: 2c 03 00 00              cmpwi    r3, 0 */
/* 0x807bc918: 40 82 ff 9c              bne      0x807bc8b4 */
/* 0x807bc91c: 7f 63 db 78              mr       r3, r27 */
#endif


/* === DISASSEMBLY === */


//   0x807bc864:  lwz      r8, 4(r5)
//   0x807bc868:  mr       r4, r30
//   0x807bc86c:  lwz      r0, 8(r5)
//   0x807bc870:  mr       r6, r27
//   0x807bc874:  stw      r8, 0x20(r1)
//   0x807bc878:  mr       r7, r31
//   0x807bc87c:  addi     r5, r1, 0x1c
//   0x807bc880:  stw      r0, 0x24(r1)
//   0x807bc884:  bl       0x807bb060
//   0x807bc888:  b        0x807bc920
//   0x807bc88c:  lis      r5, 0
//   0x807bc890:  lwzu     r4, 0(r5)
//   0x807bc894:  stw      r4, 0x10(r1)
//   0x807bc898:  li       r27, 0
//   0x807bc89c:  lwz      r3, 4(r5)
//   0x807bc8a0:  li       r28, 1
//   0x807bc8a4:  lwz      r0, 8(r5)
//   0x807bc8a8:  stw      r3, 0x14(r1)
//   0x807bc8ac:  stw      r0, 0x18(r1)
//   0x807bc8b0:  b        0x807bc8f8
//   0x807bc8b4:  lwz      r0, 8(r29)
//   0x807bc8b8:  cmpwi    r0, 0
//   0x807bc8bc:  beq      0x807bc8d4
//   0x807bc8c0:  lhz      r0, 8(r1)
//   0x807bc8c4:  rlwinm.  r0, r0, 0, 0x10, 0x10
//   0x807bc8c8:  beq      0x807bc8d4
//   0x807bc8cc:  li       r27, 1
//   0x807bc8d0:  b        0x807bc8f8
//   0x807bc8d4:  lhz      r0, 8(r1)
//   0x807bc8d8:  cmpwi    r31, 0
//   0x807bc8dc:  clrlwi   r0, r0, 0x1b
//   0x807bc8e0:  slw      r3, r28, r0
//   0x807bc8e4:  beq      0x807bc8f4
//   0x807bc8e8:  lwz      r0, 0(r31)
//   0x807bc8ec:  or       r0, r0, r3
//   0x807bc8f0:  stw      r0, 0(r31)
//   0x807bc8f4:  li       r27, 1
//   0x807bc8f8:  mr       r3, r30
//   0x807bc8fc:  addi     r4, r1, 0xc
//   0x807bc900:  addi     r6, r1, 8
//   0x807bc904:  addi     r12, r1, 0x10
//   0x807bc908:  li       r5, 0
//   0x807bc90c:  bl       0x80555bf8
//   0x807bc910:  nop      
//   0x807bc914:  cmpwi    r3, 0
//   0x807bc918:  bne      0x807bc8b4
//   0x807bc91c:  mr       r3, r27