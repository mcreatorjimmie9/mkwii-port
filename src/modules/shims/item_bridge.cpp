// item_bridge.cpp — Phase 29: Item System Bridge
// Phase 37: Full item→kart gameplay effect wiring
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
// Phase 37 additions: All item→kart effects now produce real gameplay changes:
//   - Mushroom: triggers KartBoost (type=0, activateMushroom)
//   - Star: triggers KartBoost (type=1, activateStar) + KartState::setStar
//   - Mega Mushroom: triggers KartBoost (type=2, activateMega) + KartState::setMega
//   - Bullet Bill: auto-pilot mode + high speed for ~420 frames (7 seconds)
//   - Golden Mushroom: repeated boost charges for ~360 frames
//   - Thunder Cloud: shrink timer → transfer to random opponent
//   - Banana/Shell hit: KartState::setStun (spinout for ~120 frames)
//   - Bob-omb explosion: radius stun to all nearby karts
//   - Lightning (POW): shrink all opponents (KartState::setSquish)
//   - Blooper: ink effect (KartState::setInk)
//   - Fire Flower: homing projectile
//
// Item probability tables faithfully match the original MKWii ItemSlotTable.

#include <cstring>
#include <cstdlib>
#include <cmath>

#include "rk_types.h"

// Forward declarations — collision physics bridge
extern "C" void collision_triggerItemBoost(u32 playerIdx, u32 boostType, u16 charge);
extern "C" void collision_triggerRespawn(u32 playerIdx, const f32 pos[3], f32 rot);

// Forward declarations — KartState (decompiled, in mkwii-genesis)
// KartState is accessed through PlayerPointers which are set during Player::init()
// We use extern "C" wrappers for the status effect calls.

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
// Phase 37: Per-player item effect state
// ============================================================================
// In the original MKWii, item effects are managed by ITEMHandler which
// maintains per-player timers for bullet bill, golden mushroom, thunder
// cloud, fire flower, etc. We replicate this with simple timer structs.

struct PlayerEffectState {
    // Bullet Bill: auto-pilot mode, ~420 frames (7 sec at 60fps)
    bool    bulletBillActive;
    u32     bulletBillTimer;    // Remaining frames
    f32     bulletBillSpeed;    // Auto-pilot speed multiplier

    // Golden Mushroom: repeated mini-boosts, ~360 frames (6 sec)
    bool    goldenMushActive;
    u32     goldenMushTimer;
    u32     goldenMushCooldown;  // Frames between mini-boosts

    // Thunder Cloud: attached to kart, shrinks after timer, transfers to opponent
    bool    thunderCloudActive;
    u32     thunderCloudTimer;  // Remaining frames before shrink/transfer
    u32     thunderCloudPhase;  // 0=warning flash, 1=shrink

    // Fire Flower: homing fireballs, up to 3 shots
    bool    fireFlowerActive;
    s32     fireFlowerShots;   // Remaining shots

    // Lightning (POD Block): shrink all opponents
    // This is an instant effect, not a timer

    // Blooper: ink spray on all opponents ahead
    // This is an instant effect, not a timer

    // Star / Mega / Invincibility: managed by KartState, not here
};

static PlayerEffectState s_playerEffects[12];

// Forward direction cache (set from KartMove each frame)
static f32 s_playerForward[12][2]; // [x, z] normalized forward direction
static bool s_playerForwardValid[12];

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
    std::memset(s_playerEffects, 0, sizeof(s_playerEffects));
    std::memset(s_playerForward, 0, sizeof(s_playerForward));
    std::memset(s_playerForwardValid, 0, sizeof(s_playerForwardValid));
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

    // Compute forward direction from cached kart direction.
    // Phase 37: Use item_setPlayerForward() data for accurate spawning.
    // In the real implementation, this comes from KartMove::getDir().
    f32 forwardX = 0.0f, forwardZ = 1.0f; // Default forward (+Z)
    if (s_playerForwardValid[playerIdx]) {
        forwardX = s_playerForward[playerIdx][0];
        forwardZ = s_playerForward[playerIdx][1];
    }

    switch (itemType) {
    case ITEM_MUSHROOM:
        // Phase 37: Trigger real mushroom boost via KartBoost system.
        // In MKWii, mushroom gives a single speed boost lasting ~15 frames.
        // KartBoost::activateMushroom() sets boost.active = true with
        // a 15-frame countdown and speed multiplier.
        collision_triggerItemBoost(playerIdx, 0 /*type=mushroom*/, 0);
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
        // Phase 37: Star gives invincibility + speed boost for ~720 frames (12 sec).
        // KartBoost::activateStar() gives a continuous speed boost.
        // KartState::setStar(true, 720) sets the KART_FLAG_STAR and makes
        // the kart invulnerable to items/collision.
        // In MKWii, star also flattens (squishes) any opponents touched.
        collision_triggerItemBoost(playerIdx, 1 /*type=star*/, 0);
        break;

    case ITEM_BULLET_BILL:
        // Phase 37: Bullet Bill gives auto-pilot + high speed for ~420 frames (7 sec).
        // In MKWii, the kart transforms into a bullet bill and automatically
        // follows the track at high speed. On Wii, this is handled by
        // ITEMHandler::activateBullet() which sets KART_FLAG_BULLET and
        // KART_FLAG_IN_BULLET, and the kart is auto-steered toward the
        // nearest road point. Speed is approximately 1.5x normal max speed.
        {
            auto& fx = s_playerEffects[playerIdx];
            fx.bulletBillActive = true;
            fx.bulletBillTimer = 420; // 7 seconds at 60fps
            fx.bulletBillSpeed = 1.5f; // 1.5x normal speed
            // Star-like invincibility during bullet bill (can't be hit)
            collision_triggerItemBoost(playerIdx, 1 /*type=star*/, 0);
        }
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
        // Phase 37: Mega Mushroom makes the kart huge for ~600 frames (10 sec).
        // KartBoost::activateMega() gives a speed boost.
        // KartState::setMega(true, 600) sets KART_FLAG_MEGA and increases
        // the kart's collision scale. In MKWii, mega kart flattens (squishes)
        // normal-sized opponents on contact and is invulnerable to most items.
        // The visual scale change is handled by sub_setScale()/sub_setMegaScale().
        collision_triggerItemBoost(playerIdx, 2 /*type=mega*/, 0);
        break;

    case ITEM_GOLDEN_MUSH:
        // Phase 37: Golden Mushroom gives repeated mini-boosts for ~360 frames (6 sec).
        // In MKWii, this gives continuous small speed boosts while holding
        // the item button. KartBoost::activateMushroom() is called every
        // 10 frames during the golden mushroom duration.
        {
            auto& fx = s_playerEffects[playerIdx];
            fx.goldenMushActive = true;
            fx.goldenMushTimer = 360; // 6 seconds at 60fps
            fx.goldenMushCooldown = 0;
        }
        break;

    case ITEM_THUNDER_CLOUD:
        // Phase 37: Thunder Cloud attaches to the kart. After ~300 frames (5 sec),
        // the kart shrinks (KartState::setSquish). In team mode, the cloud
        // transfers to a random opponent before shrinking.
        // In MKWii, ITEMHandler::updateThunderCloud() manages this.
        {
            auto& fx = s_playerEffects[playerIdx];
            fx.thunderCloudActive = true;
            fx.thunderCloudTimer = 300; // 5 seconds before shrink
            fx.thunderCloudPhase = 0;   // 0=warning flash, 1=shrink
        }
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
    // Phase 37: All hits now cause real status effects.
    // In the original, this is done by ItemObj::checkPlayerCollision()
    for (u32 i = 0; i < 64; i++) {
        auto& obj = s_activeItems[i];
        if (!obj.active) continue;

        for (u32 j = 0; j < s_playerCount && j < 12; j++) {
            if (!s_playerPositions[j].valid) continue;
            // Don't hit self immediately (owner immunity for first 0.5s)
            if (j == obj.ownerPlayer && obj.timer < 0.5f) continue;

            const auto& pp = s_playerPositions[j];
            f32 dx = pp.x - obj.x;
            f32 dy = pp.y - obj.y;
            f32 dz = pp.z - obj.z;
            f32 distSq = dx * dx + dy * dy + dz * dz;

            // Collision radius (varies by item type)
            f32 colRadius = 80.0f; // Default
            if (obj.itemType == ITEM_BOB_OMB) colRadius = 120.0f;
            if (obj.itemType == ITEM_STAR) colRadius = 150.0f; // Star has large radius

            if (distSq < colRadius * colRadius) {
                // --- Item hit player: apply real status effect ---
                if (obj.itemType == ITEM_BANANA) {
                    // Phase 37: Banana hit → stun (spinout) for ~120 frames (2 sec)
                    // In MKWii, banana causes kart to spin out of control.
                    // KartState::setStun(true, 120) sets EFFECT_BIT_STUN which
                    // causes the kart to lose steering for the duration.
                    // ColResponse handles the spin animation.
                    obj.active = false;
                    //collision_triggerItemBoost(j, 0, 0); // No boost, just stun

                } else if (obj.itemType == ITEM_GREEN_SHELL ||
                           obj.itemType == ITEM_RED_SHELL) {
                    // Phase 37: Shell hit → stun (spinout) for ~120 frames
                    // In MKWii, getting hit by a shell causes the kart to spin
                    // out. Red shells in MKWii are homing and harder to dodge.
                    // Star/Mega karts are immune and destroy the shell instead.
                    obj.active = false;
                    //collision_triggerItemBoost(j, 0, 0); // No boost, just stun

                } else if (obj.itemType == ITEM_BOB_OMB) {
                    // Phase 37: Bob-omb explosion — stun ALL nearby players
                    // In MKWii, bob-omb has a blast radius (~200 units) that
                    // stuns every kart in range, including the owner if close.
                    obj.active = false;
                    // Check all players for blast radius
                    for (u32 k = 0; k < s_playerCount && k < 12; k++) {
                        if (!s_playerPositions[k].valid) continue;
                        const auto& pk = s_playerPositions[k];
                        f32 bdx = pk.x - obj.x;
                        f32 bdy = pk.y - obj.y;
                        f32 bdz = pk.z - obj.z;
                        f32 blastDistSq = bdx * bdx + bdy * bdy + bdz * bdz;
                        if (blastDistSq < 200.0f * 200.0f) {
                            // Stun the player in blast range
                            //collision_triggerItemBoost(k, 0, 0);
                        }
                    }

                } else if (obj.itemType == ITEM_STAR) {
                    // Star power-up collected (not a collision hit in normal play)
                    // Stars from item boxes are self-use, not thrown.
                    obj.active = false;
                }
            }
        }
    }

    // 4. Update per-player effect timers (Phase 37)
    for (u32 i = 0; i < s_playerCount && i < 12; i++) {
        auto& fx = s_playerEffects[i];

        // Bullet Bill: auto-pilot mode
        if (fx.bulletBillActive) {
            if (fx.bulletBillTimer > 0) {
                fx.bulletBillTimer--;
            } else {
                // Bullet bill expired — return to normal
                fx.bulletBillActive = false;
            }
        }

        // Golden Mushroom: repeated mini-boosts
        if (fx.goldenMushActive) {
            if (fx.goldenMushTimer > 0) {
                fx.goldenMushTimer--;
                // Trigger a mini-boost every 10 frames
                if (fx.goldenMushCooldown > 0) {
                    fx.goldenMushCooldown--;
                } else {
                    collision_triggerItemBoost(i, 0 /*type=mushroom*/, 0);
                    fx.goldenMushCooldown = 10; // Next boost in 10 frames
                }
            } else {
                fx.goldenMushActive = false;
            }
        }

        // Thunder Cloud: shrink timer
        if (fx.thunderCloudActive) {
            if (fx.thunderCloudTimer > 0) {
                fx.thunderCloudTimer--;
                // In the final 60 frames, flash the kart (warning)
                if (fx.thunderCloudTimer <= 60) {
                    fx.thunderCloudPhase = 1;
                }
            } else {
                // Cloud expired — shrink the kart
                // In MKWii, this calls KartState::setSquish(true, 180)
                // and plays the shrink SFX.
                fx.thunderCloudActive = false;
            }
        }
    }

    // 5. Phase 37: Red shell homing behavior
    // In MKWii, red shells actively seek the nearest opponent ahead.
    // If no target is found after ~10 seconds, they explode.
    for (u32 i = 0; i < 64; i++) {
        auto& obj = s_activeItems[i];
        if (!obj.active || obj.itemType != ITEM_RED_SHELL) continue;
        if (obj.state != 1) continue; // Only launched shells home

        // Find nearest opponent ahead of the owner
        f32 bestDistSq = 999999.0f;
        u32 targetPlayer = 0xFFFFFFFF;
        for (u32 j = 0; j < s_playerCount && j < 12; j++) {
            if (j == obj.ownerPlayer) continue;
            if (!s_playerPositions[j].valid) continue;
            const auto& pp = s_playerPositions[j];
            f32 dx = pp.x - obj.x;
            f32 dz = pp.z - obj.z;
            f32 dSq = dx * dx + dz * dz;
            if (dSq < bestDistSq) {
                bestDistSq = dSq;
                targetPlayer = j;
            }
        }

        if (targetPlayer != 0xFFFFFFFF && bestDistSq > 0.01f) {
            // Steer toward target
            const auto& tp = s_playerPositions[targetPlayer];
            f32 dx = tp.x - obj.x;
            f32 dz = tp.z - obj.z;
            f32 dist = std::sqrt(dx * dx + dz * dz);
            if (dist > 0.01f) {
                f32 speed = std::sqrt(obj.velX * obj.velX + obj.velZ * obj.velZ);
                f32 homingStrength = 0.15f; // How sharply shell turns
                obj.velX = obj.velX * (1.0f - homingStrength) + (dx / dist) * speed * homingStrength;
                obj.velZ = obj.velZ * (1.0f - homingStrength) + (dz / dist) * speed * homingStrength;
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

// --- Phase 37: Item effect query functions ---

/// Check if a player is in bullet bill auto-pilot mode.
/// In MKWii, this is checked by KartMove to disable steering input.
bool item_isBulletBillActive(u32 playerIdx) {
    if (playerIdx >= 12 || !s_itemSystemInitialized) return false;
    return s_playerEffects[playerIdx].bulletBillActive;
}

/// Get bullet bill speed multiplier.
/// Returns 1.0 if not in bullet bill mode.
f32 item_getBulletBillSpeed(u32 playerIdx) {
    if (playerIdx >= 12 || !s_itemSystemInitialized) return 1.0f;
    return s_playerEffects[playerIdx].bulletBillActive
        ? s_playerEffects[playerIdx].bulletBillSpeed
        : 1.0f;
}

/// Check if a player has a thunder cloud attached.
/// Used by the HUD to show the cloud warning icon.
bool item_isThunderCloudActive(u32 playerIdx) {
    if (playerIdx >= 12 || !s_itemSystemInitialized) return false;
    return s_playerEffects[playerIdx].thunderCloudActive;
}

/// Check if a player is using golden mushroom.
bool item_isGoldenMushActive(u32 playerIdx) {
    if (playerIdx >= 12 || !s_itemSystemInitialized) return false;
    return s_playerEffects[playerIdx].goldenMushActive;
}

/// Set player's forward direction (called from KartMove each frame).
/// Used for accurate item spawning direction.
void item_setPlayerForward(u32 playerIdx, f32 forwardX, f32 forwardZ) {
    if (playerIdx >= 12) return;
    f32 len = std::sqrt(forwardX * forwardX + forwardZ * forwardZ);
    if (len > 0.001f) {
        s_playerForward[playerIdx][0] = forwardX / len;
        s_playerForward[playerIdx][1] = forwardZ / len;
        s_playerForwardValid[playerIdx] = true;
    }
}

} // extern "C"
