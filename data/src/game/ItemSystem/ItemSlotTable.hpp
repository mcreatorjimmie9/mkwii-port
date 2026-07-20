#pragma once
// ============================================================================
// ItemSlotTable — Item Roulette Probability Tables
// ============================================================================
// Static system that defines the probability weights for item roulette in
// Mario Kart Wii. The items a player receives depend on their race position:
//   - 1st place: mostly bananas, green shells, mushrooms (defensive)
//   - Mid-field: red shells, bob-ombs appear (offensive)
//   - Last place: bullet bills, golden mushrooms, stars (catch-up)
//
// Separate probability tables are maintained for different player counts
// (2P, 3P, 4P ... 12P) since the item pool changes significantly when
// there are fewer racers.
//
// Address range: 0x807bcc64 - 0x807bd208
// Function count: 4
// ============================================================================

#include <rk_types.h>
#include <rk_common.h>

class ItemSlotTable {
public:
    // ========================================================================
    // Singleton pattern
    // ========================================================================

    // @addr 0x807bcc64 — Create the global ItemSlotTable instance
    static void createInstance();

    // @addr 0x807bcd08 — Destroy the global ItemSlotTable instance
    static void destroyInstance();

    // Global singleton pointer
    static ItemSlotTable* spInstance;

    // @addr 0x807bccf0 — Get the global instance (returns spInstance)
    static ItemSlotTable* getInstance();

    // ========================================================================
    // Construction / Destruction
    // ========================================================================

    // @addr 0x807bcd30 — Constructor: initializes all probability tables
    ItemSlotTable();

    // @addr 0x807bcda0 — Destructor
    ~ItemSlotTable();

    // ========================================================================
    // Item type enumeration (matching MKW internal item IDs)
    // ========================================================================
    enum ItemType {
        ITEM_NONE          = 0,  // No item / empty slot
        ITEM_BANANA        = 1,  // Banana (single)
        ITEM_GREEN_SHELL   = 2,  // Green Shell
        ITEM_RED_SHELL     = 3,  // Red Shell (homing)
        ITEM_MUSHROOM      = 4,  // Single Mushroom (boost)
        ITEM_STAR          = 5,  // Star (invincibility)
        ITEM_BULLET_BILL   = 6,  // Bullet Bill (auto-pilot)
        ITEM_GOLDEN_MUSH   = 7,  // Golden Mushroom (chain boost)
        ITEM_BOB_OMB       = 8,  // Bob-omb (explosive)
        ITEM_BLUE_SHELL    = 9,  // Blue Spiny Shell (hits 1st)
        ITEM_THUNDER_CLOUD = 10, // Thunder Cloud (shrinks)
        ITEM_MEGA_MUSH     = 11, // Mega Mushroom (grow big)
        ITEM_LIGHTNING      = 12, // Lightning (shrink all)
        ITEM_BOOST_PAD     = 13, // Boost pad / counted phantom
        ITEM_COUNT         = 14, // Total number of item types
    };

    // ========================================================================
    // Table access
    // ========================================================================

    // Get the probability weight array for a given position (1-based).
    // Returns pointer to a 14-element u8 array where each entry is the
    // relative weight for that item type. The roulette system sums all
    // weights and picks a random value in [0, totalWeight) to select.
    // @addr 0x807bcda0
    const u8* getTable(u8 position) const;

    // Get the probability weight array for a given player count and position.
    // This is the full-featured accessor that handles the player count
    // indexing internally.
    // @addr 0x807bcde8
    const u8* getTableIndexed(u8 playerCount, u8 position) const;

    // ========================================================================
    // Table scaling
    // ========================================================================

    // Scale / adjust the probability tables for a specific player count.
    // When fewer than 12 players are racing, some item weights are merged
    // or redistributed to maintain good gameplay balance.
    // @addr 0x807bd208
    void scaleTableForPlayerCount(u8 playerCount);

    // ========================================================================
    // Constants
    // ========================================================================

    static const u32 MAX_ITEM_TYPES     = 14; // ITEM_COUNT
    static const u32 MAX_POSITIONS      = 12; // MAX_PLAYER_COUNT
    static const u32 MAX_PLAYER_COUNTS  = 4;  // Index: 0=2P, 1=3P, 2=4P, 3=12P
    static const u32 TABLE_SIZE         = MAX_ITEM_TYPES * MAX_POSITIONS; // 168

    // Player count indices into mTables
    static const u8 PLAYER_COUNT_2  = 0;
    static const u8 PLAYER_COUNT_3  = 1;
    static const u8 PLAYER_COUNT_4  = 2;
    static const u8 PLAYER_COUNT_12 = 3;

    // Default total weight per position row (for 12P races)
    static const u32 DEFAULT_TOTAL_WEIGHT = 20;

private:
    // ========================================================================
    // Private initialization helpers
    // ========================================================================

    // Fill the 12-player probability table with MKW-accurate weights.
    // @addr 0x807bce20
    void init12PlayerTable();

    // Fill the 2-player probability table (simplified item pool).
    // @addr 0x807bcf80
    void init2PlayerTable();

    // Fill the 3-player probability table.
    // @addr 0x807bcfb0
    void init3PlayerTable();

    // Fill the 4-player probability table.
    // @addr 0x807bcfe0
    void init4PlayerTable();

    // Clear all tables to zero.
    // @addr 0x807bcda8
    void clearAllTables();

    // Set a single entry in the specified table.
    // @addr 0x807bcdb8
    void setWeight(u8 tableIdx, u8 position, u8 itemType, u8 weight);

    // Get a single entry from the specified table.
    // @addr 0x807bcdd0
    u8 getWeight(u8 tableIdx, u8 position, u8 itemType) const;

    // Compute the total weight for a given position in the given table.
    // @addr 0x807bcde0
    u32 computeTotalWeight(u8 tableIdx, u8 position) const;

    // Normalize a row so the total weight matches the target.
    // @addr 0x807bce00
    void normalizeRow(u8 tableIdx, u8 position, u32 targetWeight);

    // Clamp position to valid range [1, MAX_POSITIONS].
    // @addr 0x807bcd20
    static u8 clampPosition(u8 position);

    // Convert player count (2, 3, 4, 12) to table index (0-3).
    // @addr 0x807bcd40
    static u8 playerCountToIndex(u8 playerCount);

    // ========================================================================
    // Member data
    // ========================================================================

    // Probability weight tables.
    // mTables[tableIdx][position * MAX_ITEM_TYPES + itemType] = weight
    // where tableIdx maps: 0=2P, 1=3P, 2=4P, 3=12P
    u8 mTables[MAX_PLAYER_COUNTS][TABLE_SIZE];

    // Currently active player count (set by scaleTableForPlayerCount)
    u8 mPlayerCount;

    // Index into mTables for the currently active player count
    u8 mActiveTableIdx;
};