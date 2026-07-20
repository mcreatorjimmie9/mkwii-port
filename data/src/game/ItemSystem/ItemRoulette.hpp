#pragma once
// ============================================================================
// ItemSystem module — ItemRoulette
// ============================================================================
// The spinning item box that determines which item a player receives.
// When a player drives through an item box, the roulette starts spinning
// and gradually decelerates until it lands on an item. The item selection
// is weighted by the player's race position — 1st place gets worse items
// while last place gets better items (rubber-banding).
//
// Address range: 0x807bc864 — ItemRoulette_update (496 bytes)
// ============================================================================

#include <rk_types.h>
#include <rk_common.h>

namespace Item {

// Item type IDs (matches ItemSlotTable::ItemType for consistency)
enum ItemType {
    ITEM_NONE          = 0,
    ITEM_BANANA        = 1,
    ITEM_GREEN_SHELL   = 2,
    ITEM_RED_SHELL     = 3,
    ITEM_MUSHROOM      = 4,
    ITEM_STAR          = 5,
    ITEM_BULLET_BILL   = 6,
    ITEM_GOLDEN_MUSH   = 7,
    ITEM_BOB_OMB       = 8,
    ITEM_BLUE_SHELL    = 9,
    ITEM_THUNDER_CLOUD = 10,
    ITEM_MEGA_MUSH     = 11,
    ITEM_LIGHTNING      = 12,
    ITEM_BOOST_PAD     = 13,
    ITEM_COUNT         = 14,
};

class ItemRoulette {
public:
    // ========================================================================
    // Construction / Destruction
    // ========================================================================

    ItemRoulette();
    ~ItemRoulette();

    // ========================================================================
    // Setup
    // ========================================================================

    // Initialize the roulette for a specific player.
    // @param playerCount  Total number of players in the race
    // @param playerPosition  This player's race position (1-based)
    void init(u8 playerCount, u8 playerPosition);

    // ========================================================================
    // Spinning control
    // ========================================================================

    // Begin the roulette spinning animation.
    void startSpin();

    // Check if the roulette is currently active/spinning.
    // Derived from assembly: rlwinm. r0, r0, 0, 0x10, 0x10 (test bit 16)
    bool isSpinning() const { return (mFlags & FLAG_SPINNING) != 0; }

    // ========================================================================
    // Per-frame update
    // ========================================================================

    // Advance the roulette animation. If spinning, decelerate the spin
    // speed. When the spin completes, select the final item.
    // @addr 0x807bc864
    // @size 496 bytes
    // @calls 2 function(s)
    void update();

    // ========================================================================
    // Result query
    // ========================================================================

    // Return the determined item type (valid after spinning completes).
    ItemType getResult() const { return mResult; }

    // Return the current animation frame for UI rendering.
    // This is the visual position in the roulette strip.
    u32 getAnimationFrame() const { return mAnimFrame; }

    // ========================================================================
    // Probability
    // ========================================================================

    // Compute the probability table for a given race position and player count.
    // Populates mProbabilityWeights[] with per-item-type weights.
    void calcItemProbability(u8 position, u8 playerCount);

    // Perform a weighted random selection from the probability table.
    // Uses the accumulated weight bitmask pattern from the assembly
    // (slw r3, r28, r0; or r0, r0, r3).
    ItemType selectItem();

    // Force-stop the roulette immediately
    void stopSpin();

    // Get probability weight for a specific item type
    u8 calcProbability(u8 itemType) const;

    // Set spin speed manually
    void setSpeed(f32 speed);

    // Set player position and recalculate probabilities
    void setPosition(u8 position);

    // Check if selection is complete
    bool isComplete() const;

    // Clear result and prepare for new spin
    void clearResult();

    // Get remaining spin timer
    s32 getSpinTimer() const;

    // Get player's race position
    u8 getPlayerPosition() const;

    // Get current spin speed
    f32 getSpinSpeed() const;

    // Get accumulated item type bitmask
    u32 getItemBitmask() const;

    // ========================================================================
    // Constants
    // ============================================================================

    static const u32 MAX_ITEM_TYPES  = 14; // ITEM_COUNT
    static const u32 MAX_ANIM_FRAMES = 60; // Visual roulette frames
    static const u32 SPIN_DURATION_BASE = 120; // Base spin duration in frames

    // Flag bits (matching assembly rlwinm bit extraction)
    static const u32 FLAG_SPINNING  = (1U << 16); // bit 16
    static const u32 FLAG_COMPLETE  = (1U << 17); // bit 17
    static const u32 FLAG_HAS_RESULT = (1U << 0);  // bit 0

private:
    // Player's race position (1-based)
    u8 mPlayerPosition;

    // Total number of players
    u8 mPlayerCount;

    // Current animation frame (visual roulette position)
    u32 mAnimFrame;

    // Spin speed (decreases over time for deceleration effect)
    f32 mSpinSpeed;

    // Frame counter for the spin duration
    s32 mSpinTimer;

    // Flags word — assembly uses rlwinm to test bit 16 (spinning)
    u32 mFlags;

    // Accumulated item type bitmask from the probability scan loop
    // (assembly: slw + or pattern builds this word)
    u32 mItemBitmask;

    // The selected result item
    ItemType mResult;

    // Probability weights per item type
    u8 mProbabilityWeights[MAX_ITEM_TYPES];

    // Temporary buffer used in update() (assembly: memset 0x80555bf8)
    u8 mTempBuffer[12];
};

} // namespace Item