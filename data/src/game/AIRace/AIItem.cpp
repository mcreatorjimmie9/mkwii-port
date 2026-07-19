#include "AIItem.hpp"
#include <math.h>

namespace Enemy {

// Item AI timing constants
const f32 AIItem::USE_DELAY_MIN        = 0.3f;
const f32 AIItem::USE_DELAY_MAX        = 2.0f;
const f32 AIItem::PROTECTION_THRESHOLD = 0.4f;
const f32 AIItem::ATTACK_RANGE_MIN     = 50.0f;
const f32 AIItem::ATTACK_RANGE_MAX     = 3000.0f;

AIItem::AIItem()
    : m_heldItem(ITEM_NONE)
    , m_lastUsedItem(ITEM_NONE)
    , m_targetPlayerIdx(-1)
    , m_useTimer(0.0f)
    , m_useCooldown(0.0f)
    , m_protectionPriority(1.0f)
    , m_wantsToUse(false) {}

AIItem::~AIItem() {}

void AIItem::init() {
    m_heldItem = ITEM_NONE;
    m_lastUsedItem = ITEM_NONE;
    m_targetPlayerIdx = -1;
    m_useTimer = 0.0f;
    m_useCooldown = 0.0f;
    m_protectionPriority = 1.0f;
    m_wantsToUse = false;
}

void AIItem::onItemGet(u32 itemType) {
    m_heldItem = itemType;
    m_targetPlayerIdx = -1;
    m_wantsToUse = false;

    // Set a random delay before using the item
    // This makes AI feel more natural (not instant-use)
    f32 delay = USE_DELAY_MIN;
    // Lower-ranked AI use items faster
    if (m_protectionPriority < PROTECTION_THRESHOLD) {
        delay = USE_DELAY_MIN; // Use quickly when in danger
    } else {
        delay = USE_DELAY_MIN + (USE_DELAY_MAX - USE_DELAY_MIN) * 0.5f;
    }
    m_useTimer = delay;
}

bool AIItem::shouldUseItem(u32 itemType) {
    if (itemType == ITEM_NONE) return false;
    if (m_useCooldown > 0.0f) return false;

    switch (itemType) {
    case ITEM_MUSHROOM:
    case ITEM_GOLDEN_MUSH:
        // Use mushrooms when off-road, at low speed, or when there's an uphill
        // For AI, always use mushrooms when held (simplified)
        return m_useTimer <= 0.0f;

    case ITEM_STAR:
        // Use star for protection or speed
        // AI uses star when it has one, especially in lower positions
        return m_useTimer <= 0.0f;

    case ITEM_BULLET_BILL:
        // Use bullet bill when far from 1st place
        return m_useTimer <= 0.0f;

    case ITEM_RED_SHELL:
    case ITEM_TRIPLE_RED:
        // Use red shells when a target is in range
        return m_useTimer <= 0.0f;

    case ITEM_GREEN_SHELL:
    case ITEM_TRIPLE_GREEN:
        // Use green shells as protection (hold behind) or attack
        return m_useTimer <= 0.0f && m_protectionPriority < PROTECTION_THRESHOLD;

    case ITEM_BANANA:
    case ITEM_TRIPLE_BANANA:
        // Use banana for protection (drop behind)
        return m_useTimer <= 0.0f && m_protectionPriority < PROTECTION_THRESHOLD;

    case ITEM_BOB_OMB:
        // Use bob-omb when a target is in range
        return m_useTimer <= 0.0f;

    case ITEM_MEGA_MUSH:
        // Use mega mushroom for protection and passing
        return m_useTimer <= 0.0f;

    case ITEM_THUNDER_CLOUD:
        // Pass thunder cloud to next player ASAP
        return m_useTimer <= 0.0f;

    default:
        return m_useTimer <= 0.0f;
    }
}

s32 AIItem::getTargetPlayer(u32 itemType) {
    // In the real game, this searches for the nearest player
    // in the appropriate direction (ahead for red shells, etc.)

    switch (itemType) {
    case ITEM_RED_SHELL:
    case ITEM_TRIPLE_RED:
        // Target the player directly ahead
        // Return -1 to let the item system auto-target
        return -1;

    case ITEM_BOB_OMB:
        // Target nearest player
        return -1;

    case ITEM_THUNDER_CLOUD:
        // Target the nearest player ahead (to pass the cloud)
        return -1;

    default:
        return -1; // No specific target
    }
}

void AIItem::useItem() {
    if (m_heldItem == ITEM_NONE) return;

    m_lastUsedItem = m_heldItem;
    m_heldItem = ITEM_NONE;
    m_wantsToUse = true;
    m_useCooldown = 0.5f; // Brief cooldown before next item action
    m_useTimer = 0.0f;
}

void AIItem::update(f32 dt) {
    // Tick down timers
    if (m_useTimer > 0.0f) {
        m_useTimer -= dt;
        if (m_useTimer < 0.0f) m_useTimer = 0.0f;
    }

    if (m_useCooldown > 0.0f) {
        m_useCooldown -= dt;
        if (m_useCooldown < 0.0f) m_useCooldown = 0.0f;
    }

    // Clear the "wants to use" flag after one frame
    if (m_wantsToUse) {
        m_wantsToUse = false;
    }

    // Check if we should auto-use the held item
    if (m_heldItem != ITEM_NONE && shouldUseItem(m_heldItem)) {
        m_targetPlayerIdx = getTargetPlayer(m_heldItem);
        useItem();
    }
}

f32 AIItem::getProtectionPriority() {
    // Lower value = AI needs protection more urgently
    // In the real game, this considers:
    // - Position in race (back of pack = higher need)
    // - Incoming threats (shells, red shells)
    // - Whether already protected (banana, triple shells behind)

    // Simplified: use cached value (set by AI engine externally)
    return m_protectionPriority;
}

} // namespace Enemy