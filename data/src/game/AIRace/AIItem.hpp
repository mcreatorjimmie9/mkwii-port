#pragma once

#include <rk_types.h>

namespace Enemy {

// Forward declaration for AI item context
struct AIItemContext {
    u32 playerIdx;         // AI's player index
    u32 currentRank;       // AI's current race position (1-12)
    u32 totalPlayers;      // Total players in race
    u32 currentItem;       // Item the AI is holding (0 = none)
    f32 distToNextPlayer;  // Distance to player ahead
    f32 distToPrevPlayer;  // Distance to player behind
    bool hasProtection;    // Already has protective item active
    bool isInDanger;       // Incoming threat detected
    u32 incomingItemType;  // Type of incoming threat item
};

// =============================================================================
// AIItem — AI Item Usage Strategy
//
// Determines when and how AI players use items. The AI has
// simplified item logic: it uses items based on position,
// threat level, and basic heuristics rather than player-like decisions.
/// Address range: 0x8050xxxx
// =============================================================================
class AIItem {
public:
    /// Item type IDs (matching the item system)
    enum ItemType {
        ITEM_NONE          = 0,
        ITEM_BANANA        = 1,
        ITEM_GREEN_SHELL   = 2,
        ITEM_RED_SHELL     = 3,
        ITEM_MUSHROOM      = 4,
        ITEM_STAR          = 5,
        ITEM_BULLET_BILL   = 6,
        ITEM_BOB_OMB       = 7,
        ITEM_THUNDER_CLOUD = 8,
        ITEM_GOLDEN_MUSH   = 9,
        ITEM_MEGA_MUSH     = 10,
        ITEM_TRIPLE_BANANA = 11,
        ITEM_TRIPLE_GREEN  = 12,
        ITEM_TRIPLE_RED    = 13,
        ITEM_BOOST_PANEL   = 14, // Fake item box
    };

    AIItem();
    ~AIItem();

    /// Initialize the item AI system.
    void init();

    /// Called when the AI receives an item from the item roulette.
    /// @param itemType  The item received
    void onItemGet(u32 itemType);

    /// Determine if the AI should use its current item.
    /// @param itemType  Item the AI is holding
    /// @return true if the AI should use the item now
    bool shouldUseItem(u32 itemType);

    /// Get the target player index for a targeting item.
    /// @param itemType  Item type (red shell, bob-omb, etc.)
    /// @return Player index to target (-1 if no valid target)
    s32 getTargetPlayer(u32 itemType);

    /// Execute the item usage (simulate button press).
    void useItem();

    /// Per-frame item AI update.
    /// @param dt  Frame delta time
    void update(f32 dt);

    /// Calculate how badly the AI needs protection (lower = more desperate).
    /// @return Protection priority value (0.0 = maximum need, 1.0 = no need)
    f32 getProtectionPriority();

    // State queries
    u32 getHeldItem() const { return m_heldItem; }
    u32 getLastUsedItem() const { return m_lastUsedItem; }
    s32 getTarget() const { return m_targetPlayerIdx; }
    f32 getItemUseTimer() const { return m_useTimer; }

private:
    static const f32 USE_DELAY_MIN;         // Minimum delay before using item (seconds)
    static const f32 USE_DELAY_MAX;         // Maximum delay before using item
    static const f32 PROTECTION_THRESHOLD;  // Priority below this = use protection
    static const f32 ATTACK_RANGE_MIN;      // Min distance to target for attack items
    static const f32 ATTACK_RANGE_MAX;      // Max distance to target for attack items

    u32 m_heldItem;             // Currently held item type
    u32 m_lastUsedItem;         // Last item used (for cooldown)
    s32 m_targetPlayerIdx;      // Current item target player
    f32 m_useTimer;             // Timer before AI uses item (delay)
    f32 m_useCooldown;          // Cooldown after using an item
    f32 m_protectionPriority;   // Cached protection need value
    bool m_wantsToUse;         // AI has decided to use the item
};

} // namespace Enemy