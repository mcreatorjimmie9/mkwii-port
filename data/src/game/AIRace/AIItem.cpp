#include "AIItem.hpp"
#include <math.h>

namespace Enemy {

// Item AI timing constants
const f32 AIItem::USE_DELAY_MIN        = 0.3f;
const f32 AIItem::USE_DELAY_MAX        = 2.0f;
const f32 AIItem::PROTECTION_THRESHOLD = 0.4f;
const f32 AIItem::ATTACK_RANGE_MIN     = 50.0f;
const f32 AIItem::ATTACK_RANGE_MAX     = 3000.0f;

// ============================================================================
// Constructor / Destructor
// ============================================================================

AIItem::AIItem()
    : m_heldItem(ITEM_NONE)
    , m_lastUsedItem(ITEM_NONE)
    , m_targetPlayerIdx(-1)
    , m_useTimer(0.0f)
    , m_useCooldown(0.0f)
    , m_protectionPriority(1.0f)
    , m_wantsToUse(false)
    , m_currentRank(6)
    , m_distToNext(500.0f)
    , m_distToPrev(500.0f)
    , m_incomingThreat(false)
    , m_incomingThreatType(ITEM_NONE)
    , m_itemCount(0) {}

AIItem::~AIItem() {}

// ============================================================================
// init — Reset all item AI state
// ============================================================================

void AIItem::init() {
    m_heldItem = ITEM_NONE;
    m_lastUsedItem = ITEM_NONE;
    m_targetPlayerIdx = -1;
    m_useTimer = 0.0f;
    m_useCooldown = 0.0f;
    m_protectionPriority = 1.0f;
    m_wantsToUse = false;
    m_currentRank = 6;
    m_distToNext = 500.0f;
    m_distToPrev = 500.0f;
    m_incomingThreat = false;
    m_incomingThreatType = ITEM_NONE;
    m_itemCount = 0;
}

// ============================================================================
// onItemGet — Called when the AI receives a new item from the roulette
// ============================================================================

void AIItem::onItemGet(u32 itemType) {
    m_heldItem = itemType;
    m_targetPlayerIdx = -1;
    m_wantsToUse = false;
    m_itemCount++;

    // Position-based priority: front runners use items more cautiously
    // while back-of-pack AI uses items aggressively
    f32 delay;
    f32 rankFraction = (f32)m_currentRank / 12.0f; // 0.0 (1st) to 1.0 (12th)

    switch (itemType) {
    case ITEM_MUSHROOM:
    case ITEM_GOLDEN_MUSH:
        // Back-of-pack uses mushrooms immediately; front runners save them
        if (rankFraction > 0.5f) {
            delay = USE_DELAY_MIN;
        } else {
            delay = USE_DELAY_MIN + (USE_DELAY_MAX - USE_DELAY_MIN) * 0.7f;
        }
        break;

    case ITEM_STAR:
        // Always use star relatively quickly regardless of position
        delay = USE_DELAY_MIN + 0.2f;
        break;

    case ITEM_BULLET_BILL:
        // Bullet bill used faster when further back in the pack
        delay = USE_DELAY_MIN + (USE_DELAY_MAX - USE_DELAY_MIN) * rankFraction * 0.5f;
        break;

    case ITEM_RED_SHELL:
    case ITEM_TRIPLE_RED:
        // Red shells: front runners use faster (to maintain lead),
        // back uses them if there's a close target ahead
        if (rankFraction < 0.3f) {
            delay = USE_DELAY_MIN + 0.1f;
        } else {
            delay = USE_DELAY_MIN + (USE_DELAY_MAX - USE_DELAY_MIN) * 0.4f;
        }
        break;

    case ITEM_GREEN_SHELL:
    case ITEM_TRIPLE_GREEN:
        // Green shells: hold for protection, use faster if threatened
        if (m_incomingThreat || m_protectionPriority < PROTECTION_THRESHOLD) {
            delay = USE_DELAY_MIN;
        } else if (rankFraction > 0.7f) {
            delay = USE_DELAY_MIN + 0.5f; // Back: drop behind quickly
        } else {
            delay = USE_DELAY_MAX * 0.6f; // Front: hold longer as protection
        }
        break;

    case ITEM_BANANA:
    case ITEM_TRIPLE_BANANA:
        // Bananas: used quickly if threatened, otherwise held for defense
        if (m_incomingThreat) {
            delay = USE_DELAY_MIN;
        } else {
            delay = USE_DELAY_MIN + (USE_DELAY_MAX - USE_DELAY_MIN) * 0.5f;
        }
        break;

    case ITEM_BOB_OMB:
        // Bob-ombs: throw when someone is in attack range
        if (m_distToNext < ATTACK_RANGE_MAX) {
            delay = USE_DELAY_MIN + 0.3f;
        } else {
            delay = USE_DELAY_MAX;
        }
        break;

    case ITEM_MEGA_MUSH:
        // Mega mushroom: use immediately for maximum effect
        delay = USE_DELAY_MIN;
        break;

    case ITEM_THUNDER_CLOUD:
        // Thunder cloud: pass to next player as fast as possible
        delay = USE_DELAY_MIN * 0.5f;
        break;

    default:
        delay = USE_DELAY_MIN + (USE_DELAY_MAX - USE_DELAY_MIN) * 0.5f;
        break;
    }

    m_useTimer = delay;
}

// ============================================================================
// shouldUseItem — Position-based priority for item usage
// ============================================================================

bool AIItem::shouldUseItem(u32 itemType) {
    if (itemType == ITEM_NONE) return false;
    if (m_useCooldown > 0.0f) return false;

    f32 rankFraction = (f32)m_currentRank / 12.0f;

    switch (itemType) {
    case ITEM_MUSHROOM:
    case ITEM_GOLDEN_MUSH:
        // Front runners save mushrooms for later use (shortcut, recovery)
        // Back-of-pack uses them immediately for speed boost
        if (rankFraction > 0.6f) {
            return m_useTimer <= 0.0f;
        } else {
            // Front runners only use if timer is well expired
            return m_useTimer <= -0.5f;
        }

    case ITEM_STAR:
        // Star used when timer expires; front runners slightly more willing
        return m_useTimer <= 0.0f;

    case ITEM_BULLET_BILL:
        // Bullet bill: use when far from 1st place
        // Stronger desire to use when rank is worse
        if (rankFraction > 0.5f) {
            return m_useTimer <= 0.0f;
        } else {
            return m_useTimer <= -1.0f;
        }

    case ITEM_RED_SHELL:
    case ITEM_TRIPLE_RED:
        // Red shells: use when there's a player ahead within attack range
        if (m_distToNext < ATTACK_RANGE_MAX && m_distToNext > ATTACK_RANGE_MIN) {
            return m_useTimer <= 0.0f;
        }
        // Use anyway after a long delay
        return m_useTimer <= -USE_DELAY_MAX;

    case ITEM_GREEN_SHELL:
    case ITEM_TRIPLE_GREEN:
        // Green shells as protection (hold behind) or attack
        // Use if we're under threat or in the back half
        if (m_incomingThreat) {
            return m_useTimer <= 0.0f;
        }
        if (m_protectionPriority < PROTECTION_THRESHOLD) {
            return m_useTimer <= 0.0f;
        }
        // Back players drop green shells behind for trailing players
        if (rankFraction > 0.6f) {
            return m_useTimer <= 0.0f;
        }
        // Front runners hold green shells for protection
        return false;

    case ITEM_BANANA:
    case ITEM_TRIPLE_BANANA:
        // Banana for protection (drop behind)
        if (m_incomingThreat) {
            return m_useTimer <= 0.0f;
        }
        if (m_protectionPriority < PROTECTION_THRESHOLD) {
            return m_useTimer <= 0.0f;
        }
        if (rankFraction > 0.5f) {
            return m_useTimer <= 0.0f;
        }
        return false;

    case ITEM_BOB_OMB:
        // Bob-omb: use when a target is in range
        if (m_distToNext < ATTACK_RANGE_MAX * 0.5f) {
            return m_useTimer <= 0.0f;
        }
        return m_useTimer <= -USE_DELAY_MAX;

    case ITEM_MEGA_MUSH:
        // Mega mushroom: always use when timer expires
        return m_useTimer <= 0.0f;

    case ITEM_THUNDER_CLOUD:
        // Pass thunder cloud to next player ASAP
        return m_useTimer <= 0.0f;

    default:
        return m_useTimer <= 0.0f;
    }
}

// ============================================================================
// getTargetPlayer — Distance-based targeting for red shells / bob-ombs
// ============================================================================

s32 AIItem::getTargetPlayer(u32 itemType) {
    switch (itemType) {
    case ITEM_RED_SHELL:
    case ITEM_TRIPLE_RED:
        // Target the player directly ahead if within attack range
        if (m_distToNext < ATTACK_RANGE_MAX && m_distToNext > ATTACK_RANGE_MIN) {
            return -1; // Auto-target: system selects nearest ahead
        }
        // No viable target in range — don't fire yet
        return -2; // Negative to signal "wait"

    case ITEM_BOB_OMB:
        // Target nearest player if in range
        if (m_distToNext < ATTACK_RANGE_MAX * 0.8f) {
            return -1; // Auto-target nearest
        }
        return -1;

    case ITEM_THUNDER_CLOUD:
        // Target the nearest player ahead (to pass the cloud)
        return -1;

    case ITEM_GREEN_SHELL:
    case ITEM_TRIPLE_GREEN:
        // Green shells: no specific target needed (thrown forward/dropped)
        return -1;

    case ITEM_BANANA:
    case ITEM_TRIPLE_BANANA:
        // Bananas: no target (dropped behind)
        return -1;

    default:
        return -1; // No specific target
    }
}

// ============================================================================
// useItem — Execute item usage with specific button press simulation
// ============================================================================

void AIItem::useItem() {
    if (m_heldItem == ITEM_NONE) return;

    m_lastUsedItem = m_heldItem;
    m_heldItem = ITEM_NONE;
    m_wantsToUse = true;

    // Different cooldowns per item type to prevent rapid-fire
    switch (m_lastUsedItem) {
    case ITEM_TRIPLE_RED:
        // Triple red shells: shorter cooldown between individual shells
        m_useCooldown = 0.3f;
        break;
    case ITEM_TRIPLE_GREEN:
        m_useCooldown = 0.3f;
        break;
    case ITEM_TRIPLE_BANANA:
        m_useCooldown = 0.3f;
        break;
    case ITEM_GOLDEN_MUSH:
        // Golden mushroom: can be used repeatedly
        m_useCooldown = 0.15f;
        break;
    case ITEM_THUNDER_CLOUD:
        // Cloud pass: minimal cooldown
        m_useCooldown = 0.1f;
        break;
    default:
        m_useCooldown = 0.5f;
        break;
    }
    m_useTimer = 0.0f;
}

// ============================================================================
// update — Per-frame item AI update with incoming threat detection
// ============================================================================

void AIItem::update(f32 dt) {
    // Tick down timers
    if (m_useTimer > 0.0f) {
        m_useTimer -= dt;
        if (m_useTimer < 0.0f) m_useTimer = 0.0f;
    } else {
        // Allow negative timer to accumulate for "hold longer" logic
        m_useTimer -= dt;
    }

    if (m_useCooldown > 0.0f) {
        m_useCooldown -= dt;
        if (m_useCooldown < 0.0f) m_useCooldown = 0.0f;
    }

    // Clear the "wants to use" flag after one frame
    if (m_wantsToUse) {
        m_wantsToUse = false;
    }

    // Incoming threat detection:
    // If a threat was flagged, check if it's still relevant
    if (m_incomingThreat) {
        // Threats expire after a short window (shells pass by)
        // If the threat type is a homing shell, the window is longer
        if (m_incomingThreatType == ITEM_RED_SHELL || m_incomingThreatType == ITEM_TRIPLE_RED) {
            // Red shells track longer; threat stays active for ~2 seconds
            if (m_useTimer < -2.0f) {
                m_incomingThreat = false;
                m_incomingThreatType = ITEM_NONE;
            }
        } else {
            // Green shells and other threats expire faster
            if (m_useTimer < -1.0f) {
                m_incomingThreat = false;
                m_incomingThreatType = ITEM_NONE;
            }
        }
    }

    // Check if we should auto-use the held item
    if (m_heldItem != ITEM_NONE && shouldUseItem(m_heldItem)) {
        // For targeted items, compute the target first
        s32 target = getTargetPlayer(m_heldItem);
        if (target != -2) {
            // -2 means "wait, no valid target"
            m_targetPlayerIdx = target;
            useItem();
        }
    }

    // If holding a protective item and a threat is detected, prioritize defense
    if (m_incomingThreat && m_heldItem != ITEM_NONE && shouldUseProtection()) {
        m_targetPlayerIdx = -1;
        useItem();
    }
}

// ============================================================================
// getProtectionPriority — Return cached protection priority
// ============================================================================

f32 AIItem::getProtectionPriority() {
    // Lower value = AI needs protection more urgently
    // Factors considered:
    //   - Position in race (back of pack = higher need → lower value)
    //   - Incoming threats (shells, red shells) → lower value
    //   - Already protected (banana, triple shells behind) → higher value
    return m_protectionPriority;
}

// ============================================================================
// setProtectionPriority — External mutator for protection need
// ============================================================================

void AIItem::setProtectionPriority(f32 priority) {
    // Clamp to valid range [0.0, 1.0]
    if (priority < 0.0f) priority = 0.0f;
    if (priority > 1.0f) priority = 1.0f;
    m_protectionPriority = priority;

    // When protection priority changes dramatically, adjust item timer
    // If suddenly under threat (priority dropped), shorten the delay
    if (m_heldItem != ITEM_NONE && priority < PROTECTION_THRESHOLD) {
        if (m_useTimer > USE_DELAY_MIN) {
            m_useTimer = USE_DELAY_MIN;
        }
    }
}

// ============================================================================
// isHoldingItem — Check if AI has a usable item
// ============================================================================

bool AIItem::isHoldingItem() const {
    return m_heldItem != ITEM_NONE;
}

// ============================================================================
// getHeldItemType — Return the current item type
// ============================================================================

u32 AIItem::getHeldItemType() const {
    return m_heldItem;
}

// ============================================================================
// shouldUseProtection — Decide whether to deploy a protective item
// ============================================================================

bool AIItem::shouldUseProtection() {
    // Only relevant if we're holding a protective item
    bool isProtective = false;
    switch (m_heldItem) {
    case ITEM_GREEN_SHELL:
    case ITEM_TRIPLE_GREEN:
    case ITEM_BANANA:
    case ITEM_TRIPLE_BANANA:
    case ITEM_STAR:
    case ITEM_MEGA_MUSH:
        isProtective = true;
        break;
    default:
        break;
    }

    if (!isProtective) return false;

    // Use protection if an incoming threat is detected
    if (m_incomingThreat) {
        // For shells behind us, only deploy if we're holding something
        // that can block behind (green shell, banana)
        switch (m_heldItem) {
        case ITEM_GREEN_SHELL:
        case ITEM_TRIPLE_GREEN:
        case ITEM_BANANA:
        case ITEM_TRIPLE_BANANA:
            return true;
        case ITEM_STAR:
            // Star also protects but is more valuable — only use if
            // protection priority is critically low
            return m_protectionPriority < 0.2f;
        case ITEM_MEGA_MUSH:
            // Mega mushroom crushes incoming items
            return m_protectionPriority < 0.15f;
        default:
            break;
        }
    }

    // Use protection if priority is very low and we're in danger zone
    if (m_protectionPriority < PROTECTION_THRESHOLD * 0.5f) {
        return true;
    }

    return false;
}

} // namespace Enemy