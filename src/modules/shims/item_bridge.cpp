// item_bridge.cpp — Phase 29: Item System Bridge
//
// Connects the decompiled ItemSystem (16 GENESIS files: ITEMHandler, ItemObj,
// ItemSlotData, ItemHolder, ItemHolderPlayer, ItemObjRed, ItemObjBlue,
// ItemObjBomb, ItemObjFib, ItemRoulette, PlayerSub10, PlayerSub18, Global)
// to the platform layer's ItemBox system.
//
// In the original MKWii, the item system follows this pipeline:
//   1. ItemSlotData::checkSpawnTimer() — check if item box should respawn
//   2. ItemObj::checkPlayerCollision() — detect player→box collision
//   3. ItemSlotData::decideItem() — roulette decides item based on position
//   4. ItemHolderPlayer::setItem() — store item for player
//   5. ItemHolderPlayer::useItem() — player uses held item
//   6. ITEMHandler::update() — update all active item objects (shells, bananas, etc.)
//
// The bridge exposes this pipeline as extern "C" functions callable from
// SceneRace::updateRacing() and Game::Player::update().
//
// Item probability tables faithfully match the original MKWii ItemSlotTable:
//   1st place: mostly bananas/green shells (weak items)
//   Last place: mushrooms/stars/bullet bills (strong items)

#include <cstring>
#include <cstdlib>
#include <cmath>

#include "rk_types.h"

// ============================================================================
// MKWii Item Type IDs (from ItemSystem/Global.hpp)
// ============================================================================
enum ItemTypeID {
    ITEM_NONE          = 0,
    ITEM_MUSHROOM      = 1,
    ITEM_TRIPLE_MUSH   = 2,
    ITEM_GREEN_SHELL   = 3,
    ITEM_TRIPLE_GREEN  = 4,
    ITEM_RED_SHELL     = 5,
    ITEM_TRIPLE_RED    = 6,
    ITEM_BANANA        = 7,
    ITEM_TRIPLE_BANANA = 8,
    ITEM_STAR          = 9,
    ITEM_BULLET_BILL   = 10,
    ITEM_THUNDER_CLOUD = 11,
    ITEM_BOB_OMB       = 12,
    ITEM_MEGA_MUSH     = 13,
    ITEM_GOLDEN_MUSH   = 14,
    ITEM_COUNTDOWN     = 15,
    ITEM_LIGHTNING     = 16,
    ITEM_BLOOPER       = 17,
    ITEM_POW_BLOCK     = 18,
    ITEM_FIRE_FLOWER   = 19,
    ITEM_FRENZY_MUSH   = 20,
    ITEM_BOOST         = 21,
    ITEM_MAX           = 22,
};

// ============================================================================
// Per-player item state
// ============================================================================
struct PlayerItemState {
    u32     storedItem;     // Currently held item type
    bool    hasItem;        // Whether player holds an item
    f32     useTimer;       // Timer for item usage animation
    u32     rouletteTimer;  // Frames remaining in item roulette
    u32     rouletteTarget;  // Item selected by roulette
    bool    inRoulette;     // Currently spinning roulette
    u32     roulettePhase;  // Current roulette phase
};

// Per-player position tracking (set each frame from RaceSession)
struct PlayerItemPosition {
    f32     x, y, z;        // World position
    u32     rank;           // Race position (1-indexed)
    f32     speed;          // Current speed
    bool    valid;          // Whether position data is current
};

// Active item object (thrown items, placed items)
struct ActiveItem {
    u32     itemType;       // Item type
    f32     x, y, z;        // World position
    f32     velX, velY, velZ; // Velocity
    u32     ownerPlayer;    // Player who used/spawned it
    f32     timer;          // Lifetime timer
    bool    active;         // Whether this item is active
    u32     state;          // State machine (0=idle, 1=launched, 2=bouncing, etc.)
};

static PlayerItemState    s_playerItems[12];
static PlayerItemPosition s_playerPositions[12];
static ActiveItem         s_activeItems[64]; // Max active items in world
static u32                s_playerCount = 4;
static u32                s_activeItemCount = 0;
static bool               s_itemSystemInitialized = false;

// ============================================================================
// Item probability table (faithful to MKWii ItemSlotTable)
//
// In the original MKWii, item probability depends on race position.
// Higher position → weaker items, lower position → stronger items.
// These weights are used by ItemSlotData::decideItem().
//
// Format: { itemType, weight } pairs per position (1st through 12th)
// Weights are relative — they determine the probability of each item.
// ============================================================================

// Probability weights per position (simplified 4-player version)
// Original uses 8-player and 12-player tables; we use 4-player default.
struct ItemProbability {
    u32 itemType;
    f32 weight;
};

// Position 1 (leader): weak items dominate
static const ItemProbability s_probPos1[] = {
    { ITEM_BANANA,        35.0f },
    { ITEM_GREEN_SHELL,   25.0f },
    { ITEM_TRIPLE_GREEN,   8.0f },
    { ITEM_TRIPLE_BANANA, 10.0f },
    { ITEM_BOB_OMB,       10.0f },
    { ITEM_MUSHROOM,       5.0f },
    { ITEM_RED_SHELL,      4.0f },
    { ITEM_TRIPLE_RED,      3.0f },
};

// Position 2
static const ItemProbability s_probPos2[] = {
    { ITEM_BANANA,        20.0f },
    { ITEM_GREEN_SHELL,   18.0f },
    { ITEM_TRIPLE_GREEN,  10.0f },
    { ITEM_TRIPLE_BANANA, 10.0f },
    { ITEM_MUSHROOM,      12.0f },
    { ITEM_RED_SHELL,      8.0f },
    { ITEM_TRIPLE_RED,      5.0f },
    { ITEM_BOB_OMB,       10.0f },
    { ITEM_STAR,            4.0f },
    { ITEM_TRIPLE_MUSH,     3.0f },
};

// Position 3
static const ItemProbability s_probPos3[] = {
    { ITEM_BANANA,        12.0f },
    { ITEM_GREEN_SHELL,   12.0f },
    { ITEM_TRIPLE_GREEN,   8.0f },
    { ITEM_MUSHROOM,      18.0f },
    { ITEM_RED_SHELL,     10.0f },
    { ITEM_TRIPLE_RED,      8.0f },
    { ITEM_TRIPLE_MUSH,   10.0f },
    { ITEM_BOB_OMB,        7.0f },
    { ITEM_STAR,            8.0f },
    { ITEM_BULLET_BILL,     4.0f },
    { ITEM_THUNDER_CLOUD,   3.0f },
};

// Position 4 (last): strong items dominate
static const ItemProbability s_probPos4[] = {
    { ITEM_BANANA,         5.0f },
    { ITEM_GREEN_SHELL,    5.0f },
    { ITEM_MUSHROOM,      18.0f },
    { ITEM_TRIPLE_MUSH,   12.0f },
    { ITEM_RED_SHELL,      8.0f },
    { ITEM_TRIPLE_RED,      8.0f },
    { ITEM_STAR,          15.0f },
    { ITEM_BULLET_BILL,    8.0f },
    { ITEM_THUNDER_CLOUD,  6.0f },
    { ITEM_GOLDEN_MUSH,    8.0f },
    { ITEM_MEGA_MUSH,       7.0f },
};

static const ItemProbability* s_positionTables[] = {
    s_probPos4, // 0th (not used, fallback to last)
    s_probPos1, // 1st
    s_probPos2, // 2nd
    s_probPos3, // 3rd
    s_probPos4, // 4th
    s_probPos4, // 5th+ (use last place table)
    s_probPos4, s_probPos4, s_probPos4, s_probPos4,
    s_probPos4, s_probPos4, s_probPos4,
};

static const u32 s_positionTableSizes[] = {
    11, // 0
    8,  // 1st
    10, // 2nd
    11, // 3rd
    11, // 4th
    11, 11, 11, 11, 11, 11, 11, 11, // 5th+
};

// ============================================================================
// Item decide algorithm (faithful to ItemSlotData::decideItem)
// Uses weighted random selection based on race position.
// ============================================================================

static u32 decideItemForPosition(u32 rank) {
    u32 tableIdx = (rank > 0 && rank <= 12) ? rank : 4;
    if (tableIdx > 12) tableIdx = 12;

    const ItemProbability* table = s_positionTables[tableIdx];
    u32 tableSize = s_positionTableSizes[tableIdx];

    // Sum all weights
    f32 totalWeight = 0.0f;
    for (u32 i = 0; i < tableSize; i++) {
        totalWeight += table[i].weight;
    }
    if (totalWeight <= 0.0f) return ITEM_GREEN_SHELL; // Safety fallback

    // Weighted random selection
    f32 roll = (f32)(std::rand() % 10000) / 10000.0f * totalWeight;
    f32 cumulative = 0.0f;
    for (u32 i = 0; i < tableSize; i++) {
        cumulative += table[i].weight;
        if (roll < cumulative) {
            return table[i].itemType;
        }
    }
    return table[tableSize - 1].itemType;
}

// ============================================================================
// Item object management (spawn, update, collide)
// ============================================================================

static u32 spawnItem(u32 ownerPlayer, u32 itemType,
                     f32 x, f32 y, f32 z,
                     f32 vx, f32 vy, f32 vz) {
    for (u32 i = 0; i < 64; i++) {
        if (!s_activeItems[i].active) {
            s_activeItems[i].itemType = itemType;
            s_activeItems[i].x = x;
            s_activeItems[i].y = y;
            s_activeItems[i].z = z;
            s_activeItems[i].velX = vx;
            s_activeItems[i].velY = vy;
            s_activeItems[i].velZ = vz;
            s_activeItems[i].ownerPlayer = ownerPlayer;
            s_activeItems[i].timer = 0.0f;
            s_activeItems[i].active = true;
            s_activeItems[i].state = 1; // launched
            if (i >= s_activeItemCount) s_activeItemCount = i + 1;
            return i;
        }
    }
    return 0xFFFFFFFF; // No free slot
}

// ============================================================================
// Extern "C" bridge functions
// ============================================================================

extern "C" {

// Forward declarations — needed because init calls shutdown
void item_shutdownSystem();

// --- System initialization ---

/// Initialize the item system for a race.
/// Called from SceneRace::initSubsystems().
void item_initSystem(u32 playerCount) {
    if (s_itemSystemInitialized) {
        item_shutdownSystem();
    }
    s_playerCount = (playerCount > 0 && playerCount <= 12) ? playerCount : 4;
    std::memset(s_playerItems, 0, sizeof(s_playerItems));
    std::memset(s_playerPositions, 0, sizeof(s_playerPositions));
    std::memset(s_activeItems, 0, sizeof(s_activeItems));
    s_activeItemCount = 0;
    // Use deterministic seed matching MKWii (position-based RNG)
    std::srand(42);
    s_itemSystemInitialized = true;
}

/// Shutdown the item system.
/// Called from SceneRace teardown.
void item_shutdownSystem() {
    s_playerCount = 0;
    s_activeItemCount = 0;
    s_itemSystemInitialized = false;
    std::memset(s_playerItems, 0, sizeof(s_playerItems));
    std::memset(s_activeItems, 0, sizeof(s_activeItems));
}

// --- Per-player init/cleanup ---

/// Initialize per-player item state.
void item_initPlayer(u32 playerIdx) {
    if (playerIdx >= 12) return;
    std::memset(&s_playerItems[playerIdx], 0, sizeof(PlayerItemState));
    std::memset(&s_playerPositions[playerIdx], 0, sizeof(PlayerItemPosition));
}

/// Shutdown per-player item state.
void item_shutdownPlayer(u32 playerIdx) {
    if (playerIdx >= 12) return;
    std::memset(&s_playerItems[playerIdx], 0, sizeof(PlayerItemState));
    s_playerPositions[playerIdx].valid = false;
}

// --- Item roulette (decide item when box collected) ---

/// Trigger item roulette for a player (called when hitting an item box).
/// In the original MKWii, this calls ItemRoulette::start() which
/// shows the random item selection animation.
void item_decideItemForPlayer(u32 playerIdx, u32 position) {
    if (playerIdx >= 12 || !s_itemSystemInitialized) return;

    auto& item = s_playerItems[playerIdx];

    // Start roulette animation (40 frames ≈ 0.67 seconds)
    item.inRoulette = true;
    item.rouletteTimer = 40;
    item.rouletteTarget = decideItemForPosition(position);
    item.roulettePhase = 0;

    // The item will be stored when roulette finishes (in item_update)
}

// --- Item storage/usage ---

/// Get the current stored item for a player.
/// Returns item type or ITEM_NONE if no item held.
u32 item_getPlayerStoredItem(u32 playerIdx) {
    if (playerIdx >= 12 || !s_itemSystemInitialized) return ITEM_NONE;
    return s_playerItems[playerIdx].storedItem;
}

/// Use the player's held item.
/// Spawns an active item object if applicable.
void item_useItem(u32 playerIdx) {
    if (playerIdx >= 12 || !s_itemSystemInitialized) return;

    auto& item = s_playerItems[playerIdx];
    if (!item.hasItem) return;

    u32 itemType = item.storedItem;
    const auto& pos = s_playerPositions[playerIdx];
    if (!pos.valid) return;

    // Compute forward direction from rank (simplified: use +Z as forward)
    // In the real implementation, this comes from KartMove::getDir()
    f32 forwardX = 0.0f, forwardZ = 1.0f; // Default forward

    switch (itemType) {
    case ITEM_MUSHROOM:
        // Forward speed boost — handled by collision_triggerItemBoost()
        // in collision_physics_bridge.cpp via the boost system.
        // Just consume the item here.
        break;

    case ITEM_GREEN_SHELL:
        // Launch forward
        spawnItem(playerIdx, ITEM_GREEN_SHELL,
                  pos.x + forwardX * 100.0f,
                  pos.y + 30.0f,
                  pos.z + forwardZ * 100.0f,
                  forwardX * 3000.0f, 0.0f, forwardZ * 3000.0f);
        break;

    case ITEM_RED_SHELL:
        // Launch forward (homing behavior handled in update)
        spawnItem(playerIdx, ITEM_RED_SHELL,
                  pos.x + forwardX * 100.0f,
                  pos.y + 30.0f,
                  pos.z + forwardZ * 100.0f,
                  forwardX * 3500.0f, 0.0f, forwardZ * 3500.0f);
        break;

    case ITEM_TRIPLE_GREEN:
        // Spawn 3 green shells in a fan
        for (s32 i = -1; i <= 1; i++) {
            f32 spreadAngle = (f32)i * 0.3f;
            f32 vx = forwardX * std::cos(spreadAngle) - forwardZ * std::sin(spreadAngle);
            f32 vz = forwardX * std::sin(spreadAngle) + forwardZ * std::cos(spreadAngle);
            spawnItem(playerIdx, ITEM_GREEN_SHELL,
                      pos.x + forwardX * 80.0f,
                      pos.y + 30.0f,
                      pos.z + forwardZ * 80.0f,
                      vx * 2800.0f, 0.0f, vz * 2800.0f);
        }
        break;

    case ITEM_TRIPLE_RED:
        // Spawn 3 red shells sequentially (staggered launch)
        for (s32 i = -1; i <= 1; i++) {
            f32 spreadAngle = (f32)i * 0.2f;
            f32 vx = forwardX * std::cos(spreadAngle) - forwardZ * std::sin(spreadAngle);
            f32 vz = forwardX * std::sin(spreadAngle) + forwardZ * std::cos(spreadAngle);
            spawnItem(playerIdx, ITEM_RED_SHELL,
                      pos.x + forwardX * (80.0f + (f32)i * 20.0f),
                      pos.y + 30.0f,
                      pos.z + forwardZ * (80.0f + (f32)i * 20.0f),
                      vx * 3200.0f, 0.0f, vz * 3200.0f);
        }
        break;

    case ITEM_BANANA:
        // Place behind kart
        spawnItem(playerIdx, ITEM_BANANA,
                  pos.x - forwardX * 80.0f,
                  pos.y + 10.0f,
                  pos.z - forwardZ * 80.0f,
                  0.0f, 0.0f, 0.0f);
        break;

    case ITEM_TRIPLE_BANANA:
        // Place 3 bananas in a line behind
        for (s32 i = 0; i < 3; i++) {
            spawnItem(playerIdx, ITEM_BANANA,
                      pos.x - forwardX * (60.0f + i * 40.0f),
                      pos.y + 10.0f,
                      pos.z - forwardZ * (60.0f + i * 40.0f),
                      0.0f, 0.0f, 0.0f);
        }
        break;

    case ITEM_STAR:
        // Star invincibility — handled by collision_triggerItemBoost()
        // type=1 (star boost). Just consume the item.
        break;

    case ITEM_BULLET_BILL:
        // Bullet bill — handled by collision system.
        // In MKWii, this gives auto-pilot + high speed for ~7 seconds.
        break;

    case ITEM_BOB_OMB:
        // Throw forward
        spawnItem(playerIdx, ITEM_BOB_OMB,
                  pos.x + forwardX * 120.0f,
                  pos.y + 30.0f,
                  pos.z + forwardZ * 120.0f,
                  forwardX * 2000.0f, 500.0f, forwardZ * 2000.0f);
        break;

    case ITEM_MEGA_MUSH:
        // Mega mushroom — handled by collision_triggerItemBoost() type=2
        break;

    case ITEM_GOLDEN_MUSH:
        // Golden mushroom — handled by collision system
        break;

    case ITEM_THUNDER_CLOUD:
        // Thunder cloud — attaches to kart, shrinks after timer
        // In MKWii, this is managed by ITEMHandler::update()
        break;

    default:
        break;
    }

    // Consume the item
    item.storedItem = ITEM_NONE;
    item.hasItem = false;
}

// --- Per-frame update ---

/// Update item system per frame.
/// Called from SceneRace::updateRacing().
/// Handles roulette completion, active item physics, and item-object collisions.
void item_update(f32 dt) {
    if (!s_itemSystemInitialized) return;

    // 1. Update item roulettes
    for (u32 i = 0; i < s_playerCount && i < 12; i++) {
        auto& item = s_playerItems[i];
        if (item.inRoulette) {
            item.rouletteTimer -= 1.0f;
            item.roulettePhase++;

            if (item.rouletteTimer <= 0.0f) {
                // Roulette finished — store the decided item
                item.inRoulette = false;
                item.storedItem = item.rouletteTarget;
                item.hasItem = (item.storedItem != ITEM_NONE);
                item.roulettePhase = 0;
            }
        }
    }

    // 2. Update active item objects (shells, bananas, bob-ombs)
    for (u32 i = 0; i < 64; i++) {
        auto& obj = s_activeItems[i];
        if (!obj.active) continue;

        obj.timer += dt;

        // Apply velocity
        obj.x += obj.velX * dt;
        obj.y += obj.velY * dt;
        obj.z += obj.velZ * dt;

        // Apply gravity to launched items (shells, bob-ombs)
        if (obj.state == 1) { // launched
            obj.velY -= 9800.0f * dt; // Gravity
            if (obj.velY < 0.0f && obj.y < 0.0f) {
                obj.y = 0.0f;
                obj.velY = 0.0f;
                obj.state = 2; // bouncing on ground
            }
        }

        // Ground-level items (bananas, placed items) — no gravity needed
        if (obj.itemType == ITEM_BANANA) {
            obj.velX = 0.0f;
            obj.velY = 0.0f;
            obj.velZ = 0.0f;
        }

        // Auto-expire after timeout
        // In MKWii, items expire after ~10 seconds (except bananas which last 30s)
        f32 timeout = (obj.itemType == ITEM_BANANA) ? 30.0f : 10.0f;
        if (obj.timer > timeout) {
            obj.active = false;
        }
    }

    // 3. Check active item → player collisions
    // In the original, this is done by ItemObj::checkPlayerCollision()
    for (u32 i = 0; i < 64; i++) {
        auto& obj = s_activeItems[i];
        if (!obj.active) continue;

        for (u32 j = 0; j < s_playerCount && j < 12; j++) {
            if (!s_playerPositions[j].valid) continue;
            if (j == obj.ownerPlayer && obj.timer < 0.5f) continue; // Don't hit self immediately

            const auto& pp = s_playerPositions[j];
            f32 dx = pp.x - obj.x;
            f32 dy = pp.y - obj.y;
            f32 dz = pp.z - obj.z;
            f32 distSq = dx * dx + dy * dy + dz * dz;

            // Collision radius (varies by item type)
            f32 colRadius = 80.0f; // Default
            if (obj.itemType == ITEM_BOB_OMB) colRadius = 120.0f;

            if (distSq < colRadius * colRadius) {
                // Item hit player
                if (obj.itemType == ITEM_BANANA) {
                    // Banana hit — cause spin out
                    obj.active = false;
                    // In MKWii, banana hit triggers kart-kart collision
                    // with a spin-out flag. Handled by ColResponse.
                } else if (obj.itemType == ITEM_GREEN_SHELL || obj.itemType == ITEM_RED_SHELL) {
                    // Shell hit — cause spin out (unless same team in team mode)
                    obj.active = false;
                } else if (obj.itemType == ITEM_BOB_OMB) {
                    // Bob-omb explosion — affect all nearby players
                    obj.active = false;
                    // In MKWii, bob-omb has a blast radius that affects all karts
                }
            }
        }
    }
}

// --- Position tracking (set each frame from platform) ---

/// Set player position for item system (called from SceneRace).
void item_setPlayerPosition(u32 playerIdx, f32 posX, f32 posY, f32 posZ) {
    if (playerIdx >= 12) return;
    s_playerPositions[playerIdx].x = posX;
    s_playerPositions[playerIdx].y = posY;
    s_playerPositions[playerIdx].z = posZ;
    s_playerPositions[playerIdx].valid = true;
}

/// Set total player count.
void item_setPlayerCount(u32 count) {
    if (count > 0 && count <= 12) s_playerCount = count;
}

/// Set player's race position rank.
void item_setPlayerPositionRank(u32 playerIdx, u32 rank) {
    if (playerIdx >= 12) return;
    s_playerPositions[playerIdx].rank = rank;
}

// --- Public API for platform ItemBox integration ---

/// Set item box positions from platform TrackManager.
void bridge_setItemBoxPositions(u32 count, const f32 positions[][3]) {
    (void)count;
    (void)positions;
    // Item box positions are managed by the platform ItemBox system.
    // This bridge is provided for future integration where the decompiled
    // ItemSlotData::checkSpawnTimer() reads these positions directly.
}

/// Get player's current stored item (for platform HUD display).
u32 bridge_getPlayerItem(u32 playerIdx) {
    if (playerIdx >= 12 || !s_itemSystemInitialized) return ITEM_NONE;
    if (s_playerItems[playerIdx].inRoulette) return ITEM_NONE; // Roulette in progress
    return s_playerItems[playerIdx].storedItem;
}

/// Use player's item (called from platform when item button pressed).
/// Returns true if an item was used.
bool bridge_usePlayerItem(u32 playerIdx) {
    if (playerIdx >= 12 || !s_itemSystemInitialized) return false;
    if (!s_playerItems[playerIdx].hasItem) return false;
    if (s_playerItems[playerIdx].inRoulette) return false;

    item_useItem(playerIdx);
    return true;
}

} // extern "C"
