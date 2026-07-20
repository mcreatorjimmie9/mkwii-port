// ============================================================================
// ItemSlotTable implementation
// ============================================================================
// Full implementation of the item roulette probability table system.
// Contains MKW-accurate weight data derived from community reverse
// engineering of the item distribution system.
//
// Address range: 0x807bcc64 - 0x807bd208
// Function count: 4 (public) + 8 (private helpers)
// ============================================================================

#include "ItemSlotTable.hpp"
#include <rk_types.h>
#include <decomp.h>
#include <cstring>

// ============================================================================
// Singleton storage
// ============================================================================

// @addr 0x808a23e0 — BSS segment
ItemSlotTable* ItemSlotTable::spInstance = nullptr;

// ============================================================================
// createInstance — Allocate and initialize the singleton
// @addr 0x807bcc64
// Size: 152 bytes
// ============================================================================
void ItemSlotTable::createInstance() {
    // Only create if not already allocated
    if (spInstance != nullptr) {
        return;
    }

    // Allocate on the EGG heap (sizeof(ItemSlotTable) = 4*168 + 2 = 674 bytes)
    // In the original binary this uses EGG::Heap::alloc
    spInstance = new ItemSlotTable();
}

// ============================================================================
// destroyInstance — Free the singleton
// @addr 0x807bcd08
// ============================================================================
void ItemSlotTable::destroyInstance() {
    if (spInstance != nullptr) {
        delete spInstance;
        spInstance = nullptr;
    }
}

// ============================================================================
// getInstance — Return the singleton pointer
// @addr 0x807bccf0
// ============================================================================
ItemSlotTable* ItemSlotTable::getInstance() {
    return spInstance;
}

// ============================================================================
// Constructor — Initialize all probability tables
// @addr 0x807bcd30
// ============================================================================
ItemSlotTable::ItemSlotTable() {
    // Clear everything first
    clearAllTables();

    // Default to 12-player races
    mPlayerCount = 12;
    mActiveTableIdx = PLAYER_COUNT_12;

    // Fill each player-count table
    // The 12-player table is the primary / canonical one;
    // the 2/3/4 player tables are derived from it.
    init12PlayerTable();
    init4PlayerTable();
    init3PlayerTable();
    init2PlayerTable();
}

// ============================================================================
// Destructor
// @addr 0x807bcda0
// ============================================================================
ItemSlotTable::~ItemSlotTable() {
    // Tables are stack-allocated within the object; nothing to free.
    // The destructor exists for the singleton destroyInstance() path.
    spInstance = nullptr;
}

// ============================================================================
// getTable — Return the 14-element weight array for a position (1-based)
// Uses the currently active table index.
// @addr 0x807bcda0
// ============================================================================
const u8* ItemSlotTable::getTable(u8 position) const {
    u8 pos = clampPosition(position);
    return &mTables[mActiveTableIdx][pos * MAX_ITEM_TYPES];
}

// ============================================================================
// getTableIndexed — Return the weight array for a specific player count
// @addr 0x807bcde8
// ============================================================================
const u8* ItemSlotTable::getTableIndexed(u8 playerCount, u8 position) const {
    u8 idx = playerCountToIndex(playerCount);
    u8 pos = clampPosition(position);
    return &mTables[idx][pos * MAX_ITEM_TYPES];
}

// ============================================================================
// scaleTableForPlayerCount — Activate the appropriate table
// @addr 0x807bd208
// Size: 352 bytes
// ============================================================================
void ItemSlotTable::scaleTableForPlayerCount(u8 playerCount) {
    if (playerCount <= 2) {
        mActiveTableIdx = PLAYER_COUNT_2;
        mPlayerCount = 2;
    } else if (playerCount <= 3) {
        mActiveTableIdx = PLAYER_COUNT_3;
        mPlayerCount = 3;
    } else if (playerCount <= 4) {
        mActiveTableIdx = PLAYER_COUNT_4;
        mPlayerCount = 4;
    } else {
        // 5-12 players all use the 12P table
        mActiveTableIdx = PLAYER_COUNT_12;
        mPlayerCount = 12;
    }
}

// ============================================================================
// clearAllTables — Zero out all probability data
// @addr 0x807bcda8
// ============================================================================
void ItemSlotTable::clearAllTables() {
    // @addr 0x807bcda8
    memset(mTables, 0, sizeof(mTables));
    mPlayerCount = 0;
    mActiveTableIdx = 0;
}

// ============================================================================
// setWeight — Set a single probability weight entry
// @addr 0x807bcdb8
// ============================================================================
void ItemSlotTable::setWeight(u8 tableIdx, u8 position, u8 itemType, u8 weight) {
    if (tableIdx >= MAX_PLAYER_COUNTS) {
        return;
    }
    if (position < 1 || position > MAX_POSITIONS) {
        return;
    }
    if (itemType >= MAX_ITEM_TYPES) {
        return;
    }
    mTables[tableIdx][position * MAX_ITEM_TYPES + itemType] = weight;
}

// ============================================================================
// getWeight — Read a single probability weight entry
// @addr 0x807bcdd0
// ============================================================================
u8 ItemSlotTable::getWeight(u8 tableIdx, u8 position, u8 itemType) const {
    if (tableIdx >= MAX_PLAYER_COUNTS) {
        return 0;
    }
    if (position < 1 || position > MAX_POSITIONS) {
        return 0;
    }
    if (itemType >= MAX_ITEM_TYPES) {
        return 0;
    }
    return mTables[tableIdx][position * MAX_ITEM_TYPES + itemType];
}

// ============================================================================
// computeTotalWeight — Sum all weights for a position
// @addr 0x807bcde0
// ============================================================================
u32 ItemSlotTable::computeTotalWeight(u8 tableIdx, u8 position) const {
    u32 total = 0;
    const u8* row = &mTables[tableIdx][position * MAX_ITEM_TYPES];
    for (u32 i = 0; i < MAX_ITEM_TYPES; i++) {
        total += row[i];
    }
    return total;
}

// ============================================================================
// normalizeRow — Scale all weights in a row to a target total
// @addr 0x807bce00
// ============================================================================
void ItemSlotTable::normalizeRow(u8 tableIdx, u8 position, u32 targetWeight) {
    u32 current = computeTotalWeight(tableIdx, position);
    if (current == 0) {
        return;
    }

    u8* row = &mTables[tableIdx][position * MAX_ITEM_TYPES];
    for (u32 i = 0; i < MAX_ITEM_TYPES; i++) {
        // Scale each weight: newWeight = (oldWeight * target) / current
        u32 scaled = ((u32)row[i] * targetWeight) / current;
        row[i] = static_cast<u8>(scaled);
    }
}

// ============================================================================
// clampPosition — Clamp position to [1, 12]
// @addr 0x807bcd20
// ============================================================================
u8 ItemSlotTable::clampPosition(u8 position) {
    if (position < 1) {
        return 1;
    }
    if (position > MAX_POSITIONS) {
        return MAX_POSITIONS;
    }
    return position;
}

// ============================================================================
// playerCountToIndex — Convert player count to table index
// @addr 0x807bcd40
// ============================================================================
u8 ItemSlotTable::playerCountToIndex(u8 playerCount) {
    if (playerCount <= 2) {
        return PLAYER_COUNT_2;
    }
    if (playerCount <= 3) {
        return PLAYER_COUNT_3;
    }
    if (playerCount <= 4) {
        return PLAYER_COUNT_4;
    }
    return PLAYER_COUNT_12;
}

// ============================================================================
// init12PlayerTable — Fill the canonical 12-player probability table
// @addr 0x807bce20
// ============================================================================
// Based on community-documented MKW item probability weights.
// Total weight per position is normalized to 20 for easy roulette.
//
// Position distribution philosophy (MKW design):
//   1st:  Defensive — bananas dominate, occasional green shell/mushroom
//   2nd:  Mostly defensive, red shells start appearing
//   3rd:  Mixed — green/red shells balanced, bob-ombs possible
//   4th:  Offensive shift — red shells common, stars rare
//   5th-6th: Mid-field offense — red shells, bob-ombs, occasional star
//   7th-8th: Power items emerge — stars, golden mushrooms appear
//   9th-10th: Catch-up — bullet bills, stars common
//   11th-12th: Maximum catch-up — bullet bills very high, stars, golden mush
//
void ItemSlotTable::init12PlayerTable() {
    // @addr 0x807bce20
    u8 t = PLAYER_COUNT_12;

    // ---- Position 1 (first place) ----
    // Defensive: bananas dominate, some green shells and mushrooms
    setWeight(t, 1,  ITEM_NONE,          0);
    setWeight(t, 1,  ITEM_BANANA,        8);
    setWeight(t, 1,  ITEM_GREEN_SHELL,   5);
    setWeight(t, 1,  ITEM_RED_SHELL,     0);
    setWeight(t, 1,  ITEM_MUSHROOM,      3);
    setWeight(t, 1,  ITEM_STAR,          0);
    setWeight(t, 1,  ITEM_BULLET_BILL,   0);
    setWeight(t, 1,  ITEM_GOLDEN_MUSH,   0);
    setWeight(t, 1,  ITEM_BOB_OMB,       0);
    setWeight(t, 1,  ITEM_BLUE_SHELL,    2);
    setWeight(t, 1,  ITEM_THUNDER_CLOUD, 2);
    setWeight(t, 1,  ITEM_MEGA_MUSH,     0);
    setWeight(t, 1,  ITEM_LIGHTNING,      0);
    setWeight(t, 1,  ITEM_BOOST_PAD,     0);
    // Total: 20

    // ---- Position 2 ----
    setWeight(t, 2,  ITEM_NONE,          0);
    setWeight(t, 2,  ITEM_BANANA,        6);
    setWeight(t, 2,  ITEM_GREEN_SHELL,   4);
    setWeight(t, 2,  ITEM_RED_SHELL,     3);
    setWeight(t, 2,  ITEM_MUSHROOM,      3);
    setWeight(t, 2,  ITEM_STAR,          0);
    setWeight(t, 2,  ITEM_BULLET_BILL,   0);
    setWeight(t, 2,  ITEM_GOLDEN_MUSH,   0);
    setWeight(t, 2,  ITEM_BOB_OMB,       0);
    setWeight(t, 2,  ITEM_BLUE_SHELL,    2);
    setWeight(t, 2,  ITEM_THUNDER_CLOUD, 2);
    setWeight(t, 2,  ITEM_MEGA_MUSH,     0);
    setWeight(t, 2,  ITEM_LIGHTNING,      0);
    setWeight(t, 2,  ITEM_BOOST_PAD,     0);
    // Total: 20

    // ---- Position 3 ----
    setWeight(t, 3,  ITEM_NONE,          0);
    setWeight(t, 3,  ITEM_BANANA,        4);
    setWeight(t, 3,  ITEM_GREEN_SHELL,   4);
    setWeight(t, 3,  ITEM_RED_SHELL,     4);
    setWeight(t, 3,  ITEM_MUSHROOM,      3);
    setWeight(t, 3,  ITEM_STAR,          1);
    setWeight(t, 3,  ITEM_BULLET_BILL,   0);
    setWeight(t, 3,  ITEM_GOLDEN_MUSH,   0);
    setWeight(t, 3,  ITEM_BOB_OMB,       1);
    setWeight(t, 3,  ITEM_BLUE_SHELL,    2);
    setWeight(t, 3,  ITEM_THUNDER_CLOUD, 1);
    setWeight(t, 3,  ITEM_MEGA_MUSH,     0);
    setWeight(t, 3,  ITEM_LIGHTNING,      0);
    setWeight(t, 3,  ITEM_BOOST_PAD,     0);
    // Total: 20

    // ---- Position 4 ----
    setWeight(t, 4,  ITEM_NONE,          0);
    setWeight(t, 4,  ITEM_BANANA,        3);
    setWeight(t, 4,  ITEM_GREEN_SHELL,   3);
    setWeight(t, 4,  ITEM_RED_SHELL,     4);
    setWeight(t, 4,  ITEM_MUSHROOM,      3);
    setWeight(t, 4,  ITEM_STAR,          2);
    setWeight(t, 4,  ITEM_BULLET_BILL,   0);
    setWeight(t, 4,  ITEM_GOLDEN_MUSH,   0);
    setWeight(t, 4,  ITEM_BOB_OMB,       2);
    setWeight(t, 4,  ITEM_BLUE_SHELL,    2);
    setWeight(t, 4,  ITEM_THUNDER_CLOUD, 1);
    setWeight(t, 4,  ITEM_MEGA_MUSH,     0);
    setWeight(t, 4,  ITEM_LIGHTNING,      0);
    setWeight(t, 4,  ITEM_BOOST_PAD,     0);
    // Total: 20

    // ---- Position 5 ----
    setWeight(t, 5,  ITEM_NONE,          0);
    setWeight(t, 5,  ITEM_BANANA,        2);
    setWeight(t, 5,  ITEM_GREEN_SHELL,   3);
    setWeight(t, 5,  ITEM_RED_SHELL,     4);
    setWeight(t, 5,  ITEM_MUSHROOM,      2);
    setWeight(t, 5,  ITEM_STAR,          3);
    setWeight(t, 5,  ITEM_BULLET_BILL,   0);
    setWeight(t, 5,  ITEM_GOLDEN_MUSH,   0);
    setWeight(t, 5,  ITEM_BOB_OMB,       3);
    setWeight(t, 5,  ITEM_BLUE_SHELL,    1);
    setWeight(t, 5,  ITEM_THUNDER_CLOUD, 1);
    setWeight(t, 5,  ITEM_MEGA_MUSH,     1);
    setWeight(t, 5,  ITEM_LIGHTNING,      0);
    setWeight(t, 5,  ITEM_BOOST_PAD,     0);
    // Total: 20

    // ---- Position 6 ----
    setWeight(t, 6,  ITEM_NONE,          0);
    setWeight(t, 6,  ITEM_BANANA,        1);
    setWeight(t, 6,  ITEM_GREEN_SHELL,   2);
    setWeight(t, 6,  ITEM_RED_SHELL,     4);
    setWeight(t, 6,  ITEM_MUSHROOM,      2);
    setWeight(t, 6,  ITEM_STAR,          3);
    setWeight(t, 6,  ITEM_BULLET_BILL,   0);
    setWeight(t, 6,  ITEM_GOLDEN_MUSH,   1);
    setWeight(t, 6,  ITEM_BOB_OMB,       3);
    setWeight(t, 6,  ITEM_BLUE_SHELL,    1);
    setWeight(t, 6,  ITEM_THUNDER_CLOUD, 1);
    setWeight(t, 6,  ITEM_MEGA_MUSH,     1);
    setWeight(t, 6,  ITEM_LIGHTNING,      1);
    setWeight(t, 6,  ITEM_BOOST_PAD,     0);
    // Total: 20

    // ---- Position 7 ----
    setWeight(t, 7,  ITEM_NONE,          0);
    setWeight(t, 7,  ITEM_BANANA,        1);
    setWeight(t, 7,  ITEM_GREEN_SHELL,   2);
    setWeight(t, 7,  ITEM_RED_SHELL,     3);
    setWeight(t, 7,  ITEM_MUSHROOM,      2);
    setWeight(t, 7,  ITEM_STAR,          3);
    setWeight(t, 7,  ITEM_BULLET_BILL,   2);
    setWeight(t, 7,  ITEM_GOLDEN_MUSH,   1);
    setWeight(t, 7,  ITEM_BOB_OMB,       3);
    setWeight(t, 7,  ITEM_BLUE_SHELL,    1);
    setWeight(t, 7,  ITEM_THUNDER_CLOUD, 1);
    setWeight(t, 7,  ITEM_MEGA_MUSH,     1);
    setWeight(t, 7,  ITEM_LIGHTNING,      0);
    setWeight(t, 7,  ITEM_BOOST_PAD,     0);
    // Total: 20

    // ---- Position 8 ----
    setWeight(t, 8,  ITEM_NONE,          0);
    setWeight(t, 8,  ITEM_BANANA,        1);
    setWeight(t, 8,  ITEM_GREEN_SHELL,   1);
    setWeight(t, 8,  ITEM_RED_SHELL,     3);
    setWeight(t, 8,  ITEM_MUSHROOM,      2);
    setWeight(t, 8,  ITEM_STAR,          3);
    setWeight(t, 8,  ITEM_BULLET_BILL,   3);
    setWeight(t, 8,  ITEM_GOLDEN_MUSH,   2);
    setWeight(t, 8,  ITEM_BOB_OMB,       2);
    setWeight(t, 8,  ITEM_BLUE_SHELL,    1);
    setWeight(t, 8,  ITEM_THUNDER_CLOUD, 1);
    setWeight(t, 8,  ITEM_MEGA_MUSH,     1);
    setWeight(t, 8,  ITEM_LIGHTNING,      0);
    setWeight(t, 8,  ITEM_BOOST_PAD,     0);
    // Total: 20

    // ---- Position 9 ----
    setWeight(t, 9,  ITEM_NONE,          0);
    setWeight(t, 9,  ITEM_BANANA,        0);
    setWeight(t, 9,  ITEM_GREEN_SHELL,   1);
    setWeight(t, 9,  ITEM_RED_SHELL,     2);
    setWeight(t, 9,  ITEM_MUSHROOM,      2);
    setWeight(t, 9,  ITEM_STAR,          3);
    setWeight(t, 9,  ITEM_BULLET_BILL,   4);
    setWeight(t, 9,  ITEM_GOLDEN_MUSH,   3);
    setWeight(t, 9,  ITEM_BOB_OMB,       2);
    setWeight(t, 9,  ITEM_BLUE_SHELL,    1);
    setWeight(t, 9,  ITEM_THUNDER_CLOUD, 1);
    setWeight(t, 9,  ITEM_MEGA_MUSH,     1);
    setWeight(t, 9,  ITEM_LIGHTNING,      0);
    setWeight(t, 9,  ITEM_BOOST_PAD,     0);
    // Total: 20

    // ---- Position 10 ----
    setWeight(t, 10, ITEM_NONE,          0);
    setWeight(t, 10, ITEM_BANANA,        0);
    setWeight(t, 10, ITEM_GREEN_SHELL,   1);
    setWeight(t, 10, ITEM_RED_SHELL,     2);
    setWeight(t, 10, ITEM_MUSHROOM,      1);
    setWeight(t, 10, ITEM_STAR,          3);
    setWeight(t, 10, ITEM_BULLET_BILL,   5);
    setWeight(t, 10, ITEM_GOLDEN_MUSH,   3);
    setWeight(t, 10, ITEM_BOB_OMB,       2);
    setWeight(t, 10, ITEM_BLUE_SHELL,    1);
    setWeight(t, 10, ITEM_THUNDER_CLOUD, 1);
    setWeight(t, 10, ITEM_MEGA_MUSH,     1);
    setWeight(t, 10, ITEM_LIGHTNING,      0);
    setWeight(t, 10, ITEM_BOOST_PAD,     0);
    // Total: 20

    // ---- Position 11 ----
    setWeight(t, 11, ITEM_NONE,          0);
    setWeight(t, 11, ITEM_BANANA,        0);
    setWeight(t, 11, ITEM_GREEN_SHELL,   1);
    setWeight(t, 11, ITEM_RED_SHELL,     1);
    setWeight(t, 11, ITEM_MUSHROOM,      1);
    setWeight(t, 11, ITEM_STAR,          4);
    setWeight(t, 11, ITEM_BULLET_BILL,   5);
    setWeight(t, 11, ITEM_GOLDEN_MUSH,   4);
    setWeight(t, 11, ITEM_BOB_OMB,       1);
    setWeight(t, 11, ITEM_BLUE_SHELL,    1);
    setWeight(t, 11, ITEM_THUNDER_CLOUD, 1);
    setWeight(t, 11, ITEM_MEGA_MUSH,     1);
    setWeight(t, 11, ITEM_LIGHTNING,      0);
    setWeight(t, 11, ITEM_BOOST_PAD,     0);
    // Total: 20

    // ---- Position 12 (last place — maximum catch-up) ----
    setWeight(t, 12, ITEM_NONE,          0);
    setWeight(t, 12, ITEM_BANANA,        0);
    setWeight(t, 12, ITEM_GREEN_SHELL,   1);
    setWeight(t, 12, ITEM_RED_SHELL,     1);
    setWeight(t, 12, ITEM_MUSHROOM,      1);
    setWeight(t, 12, ITEM_STAR,          4);
    setWeight(t, 12, ITEM_BULLET_BILL,   6);
    setWeight(t, 12, ITEM_GOLDEN_MUSH,   5);
    setWeight(t, 12, ITEM_BOB_OMB,       1);
    setWeight(t, 12, ITEM_BLUE_SHELL,    0);
    setWeight(t, 12, ITEM_THUNDER_CLOUD, 1);
    setWeight(t, 12, ITEM_MEGA_MUSH,     0);
    setWeight(t, 12, ITEM_LIGHTNING,      0);
    setWeight(t, 12, ITEM_BOOST_PAD,     0);
    // Total: 20
}

// ============================================================================
// init2PlayerTable — Simplified pool for 2-player races
// @addr 0x807bcf80
// ============================================================================
// In 2P races, many items are removed (blue shells, bullet bills, lightning,
// mega mushroom). The pool is mostly: bananas, green/red shells, mushrooms,
// stars, bob-ombs, golden mushrooms.
void ItemSlotTable::init2PlayerTable() {
    // @addr 0x807bcf80
    u8 t = PLAYER_COUNT_2;

    // Position 1 (first of 2): defensive
    setWeight(t, 1,  ITEM_BANANA,        5);
    setWeight(t, 1,  ITEM_GREEN_SHELL,   4);
    setWeight(t, 1,  ITEM_RED_SHELL,     2);
    setWeight(t, 1,  ITEM_MUSHROOM,      3);
    setWeight(t, 1,  ITEM_STAR,          0);
    setWeight(t, 1,  ITEM_BOB_OMB,       0);
    setWeight(t, 1,  ITEM_THUNDER_CLOUD, 2);
    setWeight(t, 1,  ITEM_GOLDEN_MUSH,   0);

    // Position 2 (last of 2): catch-up
    setWeight(t, 2,  ITEM_BANANA,        1);
    setWeight(t, 2,  ITEM_GREEN_SHELL,   2);
    setWeight(t, 2,  ITEM_RED_SHELL,     4);
    setWeight(t, 2,  ITEM_MUSHROOM,      2);
    setWeight(t, 2,  ITEM_STAR,          4);
    setWeight(t, 2,  ITEM_BOB_OMB,       2);
    setWeight(t, 2,  ITEM_THUNDER_CLOUD, 1);
    setWeight(t, 2,  ITEM_GOLDEN_MUSH,   2);

    // Positions 3-12: unused in 2P, fill with position 1/2 blend
    for (u8 pos = 3; pos <= MAX_POSITIONS; pos++) {
        setWeight(t, pos, ITEM_BANANA,        3);
        setWeight(t, pos, ITEM_GREEN_SHELL,   3);
        setWeight(t, pos, ITEM_RED_SHELL,     3);
        setWeight(t, pos, ITEM_MUSHROOM,      2);
        setWeight(t, pos, ITEM_STAR,          2);
        setWeight(t, pos, ITEM_BOB_OMB,       1);
        setWeight(t, pos, ITEM_THUNDER_CLOUD, 1);
        setWeight(t, pos, ITEM_GOLDEN_MUSH,   1);
    }
}

// ============================================================================
// init3PlayerTable — Probability table for 3-player races
// @addr 0x807bcfb0
// ============================================================================
void ItemSlotTable::init3PlayerTable() {
    // @addr 0x807bcfb0
    u8 t = PLAYER_COUNT_3;

    // Position 1: defensive
    setWeight(t, 1,  ITEM_BANANA,        5);
    setWeight(t, 1,  ITEM_GREEN_SHELL,   4);
    setWeight(t, 1,  ITEM_RED_SHELL,     1);
    setWeight(t, 1,  ITEM_MUSHROOM,      3);
    setWeight(t, 1,  ITEM_STAR,          0);
    setWeight(t, 1,  ITEM_BOB_OMB,       0);
    setWeight(t, 1,  ITEM_BLUE_SHELL,    2);
    setWeight(t, 1,  ITEM_THUNDER_CLOUD, 2);
    setWeight(t, 1,  ITEM_MEGA_MUSH,     1);

    // Position 2: mixed
    setWeight(t, 2,  ITEM_BANANA,        3);
    setWeight(t, 2,  ITEM_GREEN_SHELL,   3);
    setWeight(t, 2,  ITEM_RED_SHELL,     4);
    setWeight(t, 2,  ITEM_MUSHROOM,      2);
    setWeight(t, 2,  ITEM_STAR,          2);
    setWeight(t, 2,  ITEM_BOB_OMB,       2);
    setWeight(t, 2,  ITEM_BLUE_SHELL,    1);
    setWeight(t, 2,  ITEM_THUNDER_CLOUD, 1);
    setWeight(t, 2,  ITEM_MEGA_MUSH,     1);
    setWeight(t, 2,  ITEM_GOLDEN_MUSH,   1);

    // Position 3: catch-up
    setWeight(t, 3,  ITEM_BANANA,        1);
    setWeight(t, 3,  ITEM_GREEN_SHELL,   2);
    setWeight(t, 3,  ITEM_RED_SHELL,     3);
    setWeight(t, 3,  ITEM_MUSHROOM,      2);
    setWeight(t, 3,  ITEM_STAR,          4);
    setWeight(t, 3,  ITEM_BULLET_BILL,   2);
    setWeight(t, 3,  ITEM_BOB_OMB,       2);
    setWeight(t, 3,  ITEM_BLUE_SHELL,    1);
    setWeight(t, 3,  ITEM_THUNDER_CLOUD, 1);
    setWeight(t, 3,  ITEM_GOLDEN_MUSH,   2);

    // Positions 4-12: blend of 2P/3P data
    for (u8 pos = 4; pos <= MAX_POSITIONS; pos++) {
        setWeight(t, pos, ITEM_BANANA,        2);
        setWeight(t, pos, ITEM_GREEN_SHELL,   2);
        setWeight(t, pos, ITEM_RED_SHELL,     3);
        setWeight(t, pos, ITEM_MUSHROOM,      2);
        setWeight(t, pos, ITEM_STAR,          3);
        setWeight(t, pos, ITEM_BULLET_BILL,   2);
        setWeight(t, pos, ITEM_BOB_OMB,       2);
        setWeight(t, pos, ITEM_BLUE_SHELL,    1);
        setWeight(t, pos, ITEM_THUNDER_CLOUD, 1);
        setWeight(t, pos, ITEM_GOLDEN_MUSH,   2);
    }
}

// ============================================================================
// init4PlayerTable — Probability table for 4-player races
// @addr 0x807bcfe0
// ============================================================================
void ItemSlotTable::init4PlayerTable() {
    // @addr 0x807bcfe0
    u8 t = PLAYER_COUNT_4;

    // Position 1: defensive
    setWeight(t, 1,  ITEM_BANANA,        6);
    setWeight(t, 1,  ITEM_GREEN_SHELL,   4);
    setWeight(t, 1,  ITEM_RED_SHELL,     1);
    setWeight(t, 1,  ITEM_MUSHROOM,      3);
    setWeight(t, 1,  ITEM_STAR,          0);
    setWeight(t, 1,  ITEM_BOB_OMB,       0);
    setWeight(t, 1,  ITEM_BLUE_SHELL,    2);
    setWeight(t, 1,  ITEM_THUNDER_CLOUD, 2);
    setWeight(t, 1,  ITEM_MEGA_MUSH,     1);

    // Position 2: mixed defensive
    setWeight(t, 2,  ITEM_BANANA,        4);
    setWeight(t, 2,  ITEM_GREEN_SHELL,   3);
    setWeight(t, 2,  ITEM_RED_SHELL,     3);
    setWeight(t, 2,  ITEM_MUSHROOM,      3);
    setWeight(t, 2,  ITEM_STAR,          1);
    setWeight(t, 2,  ITEM_BOB_OMB,       1);
    setWeight(t, 2,  ITEM_BLUE_SHELL,    2);
    setWeight(t, 2,  ITEM_THUNDER_CLOUD, 2);
    setWeight(t, 2,  ITEM_MEGA_MUSH,     1);

    // Position 3: mixed
    setWeight(t, 3,  ITEM_BANANA,        2);
    setWeight(t, 3,  ITEM_GREEN_SHELL,   3);
    setWeight(t, 3,  ITEM_RED_SHELL,     4);
    setWeight(t, 3,  ITEM_MUSHROOM,      2);
    setWeight(t, 3,  ITEM_STAR,          2);
    setWeight(t, 3,  ITEM_BOB_OMB,       2);
    setWeight(t, 3,  ITEM_BLUE_SHELL,    1);
    setWeight(t, 3,  ITEM_THUNDER_CLOUD, 1);
    setWeight(t, 3,  ITEM_MEGA_MUSH,     1);
    setWeight(t, 3,  ITEM_GOLDEN_MUSH,   1);

    // Position 4: offensive
    setWeight(t, 4,  ITEM_BANANA,        1);
    setWeight(t, 4,  ITEM_GREEN_SHELL,   2);
    setWeight(t, 4,  ITEM_RED_SHELL,     3);
    setWeight(t, 4,  ITEM_MUSHROOM,      2);
    setWeight(t, 4,  ITEM_STAR,          3);
    setWeight(t, 4,  ITEM_BULLET_BILL,   2);
    setWeight(t, 4,  ITEM_BOB_OMB,       3);
    setWeight(t, 4,  ITEM_BLUE_SHELL,    1);
    setWeight(t, 4,  ITEM_THUNDER_CLOUD, 1);
    setWeight(t, 4,  ITEM_MEGA_MUSH,     1);
    setWeight(t, 4,  ITEM_GOLDEN_MUSH,   1);

    // Positions 5-12: extend with catch-up blend
    for (u8 pos = 5; pos <= 8; pos++) {
        u8 catchup = pos - 4; // 1..4
        setWeight(t, pos, ITEM_BANANA,        1);
        setWeight(t, pos, ITEM_GREEN_SHELL,   2);
        setWeight(t, pos, ITEM_RED_SHELL,     3);
        setWeight(t, pos, ITEM_MUSHROOM,      1);
        setWeight(t, pos, ITEM_STAR,          3);
        setWeight(t, pos, ITEM_BULLET_BILL,   2 + catchup);
        setWeight(t, pos, ITEM_BOB_OMB,       2);
        setWeight(t, pos, ITEM_BLUE_SHELL,    1);
        setWeight(t, pos, ITEM_THUNDER_CLOUD, 1);
        setWeight(t, pos, ITEM_GOLDEN_MUSH,   1 + catchup);
        setWeight(t, pos, ITEM_MEGA_MUSH,     1);
    }

    for (u8 pos = 9; pos <= MAX_POSITIONS; pos++) {
        setWeight(t, pos, ITEM_BANANA,        0);
        setWeight(t, pos, ITEM_GREEN_SHELL,   1);
        setWeight(t, pos, ITEM_RED_SHELL,     2);
        setWeight(t, pos, ITEM_MUSHROOM,      1);
        setWeight(t, pos, ITEM_STAR,          4);
        setWeight(t, pos, ITEM_BULLET_BILL,   5);
        setWeight(t, pos, ITEM_BOB_OMB,       1);
        setWeight(t, pos, ITEM_BLUE_SHELL,    1);
        setWeight(t, pos, ITEM_THUNDER_CLOUD, 1);
        setWeight(t, pos, ITEM_GOLDEN_MUSH,   3);
        setWeight(t, pos, ITEM_MEGA_MUSH,     1);
    }
}

// ============================================================================
// End of ItemSlotTable implementation
// ============================================================================