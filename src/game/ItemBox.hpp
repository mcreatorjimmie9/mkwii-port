#pragma once
// =============================================================================
// ItemBox.hpp — Item box entity for M8
// MAESTRO Phase 7, Milestone M8: Items
// =============================================================================
//
// Represents a single item box on the course. Renders as a multicolored cube
// that slowly rotates. Detects kart proximity and triggers item assignment.
//
// Dependencies: rk_types.h, EGG/math.h
// =============================================================================

#include "rk_types.h"
#include "EGG/math.h"
#include "loaders/kmp_loader.hpp"  // Loaders::KmpEntry::GlobalObject

// =============================================================================
// ItemTypeId — Enumeration of all item types in MKWii
// =============================================================================
enum ItemTypeId : u8 {
    ITEM_NONE        = 0,
    ITEM_MUSHROOM    = 1,   // Speed boost
    ITEM_TRIPLE_MUSH = 2,   // Three speed boosts
    ITEM_GREEN_SHELL = 3,  // Forward projectile
    ITEM_RED_SHELL   = 4,   // Homing projectile
    ITEM_BANANA      = 5,   // Drop obstacle
    ITEM_STAR        = 6,   // Temporary invincibility + speed
    ITEM_BULLET_BILL = 7,   // Auto-pilot speed
    ITEM_GOLDEN_MUSH = 8,   // Continuous boost while held
    ITEM_THUNDER     = 9,   // Shrink all opponents
    ITEM_BOB_OMB      = 10,  // Explosion on impact
    ITEM_MEGA_MUSH   = 11,  // Grow large + invincible
    ITEM_BLUE_SHELL  = 12,  // Hits race leader
    ITEM_COUNT       = 13   // Total item types
};

// =============================================================================
// ItemBox — A single item box on the course
// =============================================================================
class ItemBox {
public:
    ItemBox();
    ~ItemBox();

    // Non-copyable, but movable (owns GL resources)
    ItemBox(const ItemBox&) = delete;
    ItemBox& operator=(const ItemBox&) = delete;
    ItemBox(ItemBox&& other) noexcept;
    ItemBox& operator=(ItemBox&& other) noexcept;

    // -- Initialization -------------------------------------------------------

    /// Initialize item box at a world position.
    void init(const EGG::Vector3f& position);

    // -- Per-frame update ----------------------------------------------------

    /// Update spinning animation and respawn timer.
    /// @param dt  Delta time in seconds
    void update(f32 dt);

    // -- Collision check -----------------------------------------------------

    /// Check if a kart at the given position is close enough to collect.
    /// @param kartPos   Kart world position
    /// @param threshold Distance threshold for collection (default 150 units)
    /// @return true if the kart can collect this item box
    bool checkCollection(const EGG::Vector3f& kartPos,
                         f32 threshold = 150.0f) const;

    /// Mark this box as collected (starts respawn timer).
    void collect();

    /// Check if this box is currently active (visible and collectible).
    bool isActive() const { return m_isActive; }

    // -- OpenGL rendering ----------------------------------------------------

    /// Create GL resources (shader, VAO, VBO, EBO).
    bool initGL();

    /// Draw the item box.
    void render(const EGG::Matrix44f& viewProj) const;

    /// Release GL resources.
    void cleanupGL();

    // -- Position access ------------------------------------------------------
    const EGG::Vector3f& getPosition() const { return m_position; }

private:
    // -- State ----------------------------------------------------------------
    EGG::Vector3f m_position;      ///< World position
    f32 m_rotationAngle;   ///< Current rotation angle (degrees)
    f32 m_respawnTimer;    ///< Time until respawn after collection (seconds)
    f32 m_respawnDelay;    ///< Respawn delay (seconds)
    bool m_isActive;       ///< Whether the box is visible and collectible

    // -- OpenGL handles -------------------------------------------------------
    u32 m_vao;
    u32 m_vbo;
    u32 m_ebo;
    u32 m_shaderProgram;
    s32 m_mvpLoc;
    s32 m_tintLoc;
};

// =============================================================================
// ItemSlot — A kart's single item inventory
// =============================================================================

struct ItemSlot {
    ItemTypeId type;     ///< Currently held item type
    f32 timer;           ///< Remaining duration for timed items (seconds)
    bool active;         ///< Whether the item effect is currently active

    ItemSlot()
        : type(ITEM_NONE)
        , timer(0.0f)
        , active(false) {}
};

// =============================================================================
// ItemManager — Manages all item boxes and item effects for a kart
// =============================================================================
class ItemManager {
public:
    ItemManager();
    ~ItemManager();

    // -- Initialization -------------------------------------------------------

    /// Spawn item boxes from KMP GOBJ entries (objectId == 0x0002 = item box).
    /// @param objects  Array of KMP global objects
    void spawnFromKMP(const std::vector<Loaders::KmpEntry::GlobalObject>& objects);

    // -- Per-frame update ----------------------------------------------------

    /// Update all item boxes (spinning, respawn timers).
    void updateBoxes(f32 dt);

    /// Update item effects for a kart (timers, boost application).
    /// @param speedRef     Reference to kart speed (modified in-place for boosts)
    /// @param maxSpeedRef  Reference to kart max speed (modified for star)
    /// @param posRef       Reference to kart position (for invincibility flash)
    /// @param dt           Delta time
    void updateKartItem(ItemSlot& slot, f32& speedRef, f32& maxSpeedRef,
                        const EGG::Vector3f& posRef, f32 dt);

    // -- Collection ----------------------------------------------------------

    /// Check if any active item box is near the kart and collect it.
    /// @param kartPos  Kart world position
    /// @param slot     Kart's item slot (filled if box collected)
    /// @return true if an item was collected
    bool tryCollect(const EGG::Vector3f& kartPos, ItemSlot& slot);

    // -- Item usage ----------------------------------------------------------

    /// Use the item in the given slot.
    /// Applies immediate effects (mushroom boost) or starts timed effects (star).
    /// @param slot     Kart's item slot (consumed on use)
    /// @param speedRef Reference to kart speed (for immediate boost)
    /// @param maxSpeedRef Reference to kart max speed (for star)
    /// @param kartYaw  Kart facing yaw (for shell direction)
    /// @param kartPos  Kart position (for banana/obstacle placement)
    void useItem(ItemSlot& slot, f32& speedRef, f32& maxSpeedRef,
                 f32 kartYaw, const EGG::Vector3f& kartPos);

    /// Generate a random item based on race position.
    /// Higher race positions get worse items.
    /// @param racePosition  1-based position (1st place, 2nd, etc.)
    ItemTypeId generateItem(u32 racePosition) const;

    // -- Render ---------------------------------------------------------------

    /// Initialize GL resources for all item boxes.
    bool initAllGL();

    /// Render all active item boxes.
    void renderBoxes(const EGG::Matrix44f& viewProj) const;

    /// Release GL resources for all boxes.
    void cleanupAllGL();

    // -- Accessors -----------------------------------------------------------
    u32 getBoxCount() const { return static_cast<u32>(m_boxes.size()); }
    u32 getActiveBoxCount() const;

private:
    std::vector<ItemBox> m_boxes;

    // Item probability tables (position-indexed, 1-based)
    // Each row: {itemId, weight} pairs; last entry weight = 0 marks end
    static const u8 s_itemTable[12][16];  // Defined in ItemBox.cpp
};
