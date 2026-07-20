// StartGrid.cpp — Starting Grid Position Manager Implementation
// GENESIS Phase 27a
// Original addresses: 0x804C3000–0x804C4000

#include "StartGrid.hpp"
#include <cmath>
#include <stdlib.h>

namespace Field {

const f32 StartGrid::DEFAULT_ROW_SPACING = 15.0f;
const f32 StartGrid::DEFAULT_COL_SPACING = 8.0f;

/* StartGrid_ctor @ 0x804C3100 */
StartGrid::StartGrid()
    : mCourseId(0)
    , mbPositionsCalculated(false)
{
    mConfig.rowSpacing = DEFAULT_ROW_SPACING;
    mConfig.colSpacing = DEFAULT_COL_SPACING;
    mConfig.startPositionX = 0.0f;
    mConfig.startPositionZ = -100.0f;
    mConfig.baseRotation = 0.0f;
    mConfig.columns = 2;
    mConfig.maxRows = MAX_GRID_SLOTS / 2;

    for (s32 i = 0; i < MAX_GRID_SLOTS; i++) {
        mSlots[i].position = EGG::Vector3f::zero;
        mSlots[i].rotation = 0.0f;
        mSlots[i].slotIndex = i;
        mSlots[i].row = 0;
        mSlots[i].col = 0;
        mSlotAssignment[i] = i; // Default: player i → slot i
    }
}

/* StartGrid_dtor @ 0x804C3140 */
StartGrid::~StartGrid() {}

/* StartGrid_init @ 0x804C3180 */
void StartGrid::init(u32 courseId) {
    mCourseId = courseId;
    mbPositionsCalculated = false;

    // Reset all slots to default identity mapping
    for (s32 i = 0; i < MAX_GRID_SLOTS; i++) {
        mSlotAssignment[i] = i;
    }
}

// =============================================================================
// calculatePositions - Proper MKW 2-wide staggered grid layout
// @addr 0x804C3200
// =============================================================================

void StartGrid::calculatePositions(const EGG::Vector3f& sfLinePos,
                                   const EGG::Vector3f& sfLineDir) {
    // The MKW starting grid is a 2-wide, 6-deep formation:
    //   Row 0: [Slot 0 (pole)] [Slot 1]
    //   Row 1: [Slot 2]         [Slot 3]
    //   Row 2: [Slot 4]         [Slot 5]
    //   Row 3: [Slot 6]         [Slot 7]
    //   Row 4: [Slot 8]         [Slot 9]
    //   Row 5: [Slot 10]        [Slot 11]
    //
    // Odd rows are offset laterally by half a column spacing
    // (staggered formation), so slot 2 is not directly behind
    // slot 0 but slightly to the right.

    // Compute forward direction (normalized track direction)
    f32 dirLen = std::sqrt(sfLineDir.x * sfLineDir.x +
                           sfLineDir.y * sfLineDir.y +
                           sfLineDir.z * sfLineDir.z);
    EGG::Vector3f forward = sfLineDir;
    if (dirLen > 0.001f) {
        forward.x /= dirLen;
        forward.y /= dirLen;
        forward.z /= dirLen;
    } else {
        forward = EGG::Vector3f(0.0f, 0.0f, 1.0f);
    }

    // Compute right direction (perpendicular in XZ plane)
    EGG::Vector3f right(forward.z, 0.0f, -forward.x);

    mConfig.startPositionX = sfLinePos.x;
    mConfig.startPositionZ = sfLinePos.z;
    mConfig.baseRotation = std::atan2(forward.x, forward.z);

    f32 halfCol = mConfig.colSpacing * 0.5f;

    for (s32 i = 0; i < MAX_GRID_SLOTS; i++) {
        s32 row = i / mConfig.columns;
        s32 col = i % mConfig.columns;

        mSlots[i].slotIndex = i;
        mSlots[i].row = row;
        mSlots[i].col = col;
        mSlots[i].rotation = mConfig.baseRotation;

        // Column offset: center the 2-wide grid on track center
        f32 colOffset = (f32)col * mConfig.colSpacing - halfCol;

        // Row offset: rows go backward from S/F line
        f32 rowOffset = (f32)row * mConfig.rowSpacing;

        // Stagger: odd rows shift laterally by half column spacing
        // This prevents rear karts from being directly behind front ones
        f32 staggerOffset = 0.0f;
        if (row % 2 != 0) {
            staggerOffset = halfCol;
        }

        // Combine: position = SF line + lateral + backward
        f32 totalLateral = colOffset + staggerOffset;
        mSlots[i].position.x = sfLinePos.x + right.x * totalLateral - forward.x * rowOffset;
        mSlots[i].position.y = sfLinePos.y;
        mSlots[i].position.z = sfLinePos.z + right.z * totalLateral - forward.z * rowOffset;
    }

    mbPositionsCalculated = true;
}

/* StartGrid_getSlot @ 0x804C3300 */
const GridSlot* StartGrid::getSlot(s32 slotIdx) const {
    if (slotIdx < 0 || slotIdx >= MAX_GRID_SLOTS) {
        return nullptr;
    }
    return &mSlots[slotIdx];
}

/* StartGrid_getSlotPosition @ 0x804C3400 */
const EGG::Vector3f& StartGrid::getSlotPosition(s32 slotIdx) const {
    if (slotIdx < 0 || slotIdx >= MAX_GRID_SLOTS) {
        static EGG::Vector3f zeroVec = EGG::Vector3f::zero;
        return zeroVec;
    }
    return mSlots[slotIdx].position;
}

/* StartGrid_getSlotRotation @ 0x804C3500 */
f32 StartGrid::getSlotRotation(s32 slotIdx) const {
    if (slotIdx < 0 || slotIdx >= MAX_GRID_SLOTS) {
        return 0.0f;
    }
    return mSlots[slotIdx].rotation;
}

/* StartGrid_setConfig @ 0x804C3600 */
void StartGrid::setConfig(const GridConfig& config) {
    mConfig = config;
    mbPositionsCalculated = false;
}

/* StartGrid_getConfig @ 0x804C3700 */
const GridConfig& StartGrid::getConfig() const {
    return mConfig;
}

// =============================================================================
// setFromStandings - GP standings with tie-breaking logic
// @addr 0x804C3800
// =============================================================================

void StartGrid::setFromStandings(const s32* playerStandings, s32 playerCount) {
    // In Grand Prix mode, cumulative points determine grid position:
    //   Highest points → pole position (slot 0)
    //   Ties are broken by: most recent race finishing position.
    //   If still tied, the player with the lower index gets the better slot.
    if (playerStandings == nullptr || playerCount <= 0) {
        return;
    }

    // playerStandings[i] = player index for points-rank position i
    // (0 = highest points). The caller pre-sorts using accumulated GP
    // points with last-race finish position as tie-breaker.
    // We guard against duplicate player entries defensively.
    s32 usedSlots[MAX_GRID_SLOTS];
    for (s32 i = 0; i < MAX_GRID_SLOTS; i++) usedSlots[i] = 0;

    for (s32 pos = 0; pos < playerCount && pos < MAX_GRID_SLOTS; pos++) {
        s32 playerIdx = playerStandings[pos];
        if (playerIdx < 0 || playerIdx >= MAX_GRID_SLOTS) continue;
        if (usedSlots[playerIdx]) continue;
        usedSlots[playerIdx] = 1;
        mSlotAssignment[playerIdx] = pos;
    }
}

/* StartGrid_reverseOrder @ 0x804C3900 */
void StartGrid::reverseOrder() {
    for (s32 i = 0; i < MAX_GRID_SLOTS / 2; i++) {
        s32 tmp = mSlotAssignment[i];
        mSlotAssignment[i] = mSlotAssignment[MAX_GRID_SLOTS - 1 - i];
        mSlotAssignment[MAX_GRID_SLOTS - 1 - i] = tmp;
    }
}

// =============================================================================
// getStartPosition - Pole position (slot 0)
// @addr 0x804C3A00
// =============================================================================

const EGG::Vector3f& StartGrid::getStartPosition() const {
    return mSlots[0].position;
}

// =============================================================================
// getPositionForPlayer - Player index → grid slot
// @addr 0x804C3A40
// =============================================================================

s32 StartGrid::getPositionForPlayer(s32 playerIdx) const {
    if (playerIdx < 0 || playerIdx >= MAX_GRID_SLOTS) {
        return -1;
    }
    return mSlotAssignment[playerIdx];
}

// =============================================================================
// getPlayerForPosition - Grid slot → player index (inverse mapping)
// @addr 0x804C3A80
// =============================================================================

s32 StartGrid::getPlayerForPosition(s32 slotIdx) const {
    if (slotIdx < 0 || slotIdx >= MAX_GRID_SLOTS) {
        return -1;
    }
    // Inverse lookup: find which player is assigned to this slot
    for (s32 i = 0; i < MAX_GRID_SLOTS; i++) {
        if (mSlotAssignment[i] == slotIdx) {
            return i;
        }
    }
    return -1;
}

// =============================================================================
// getRandomizedOrder - VS race random grid positions
// @addr 0x804C3AC0
// =============================================================================

void StartGrid::getRandomizedOrder(s32* outOrder, s32 count) const {
    if (!outOrder || count <= 0) return;
    if (count > MAX_GRID_SLOTS) count = MAX_GRID_SLOTS;

    // Fill with sequential order
    for (s32 i = 0; i < count; i++) {
        outOrder[i] = i;
    }

    // Fisher-Yates shuffle for uniform random permutation
    for (s32 i = count - 1; i > 0; i--) {
        s32 j = rand() % (i + 1);
        s32 tmp = outOrder[i];
        outOrder[i] = outOrder[j];
        outOrder[j] = tmp;
    }
}

// =============================================================================
// adjustForReverse - Mirror mode lateral flip
// @addr 0x804C3B00
// =============================================================================

void StartGrid::adjustForReverse() {
    if (!mbPositionsCalculated) return;

    // Mirror the grid about the track center line by negating the
    // lateral (column) component. The row offsets (backward from
    // S/F line) remain unchanged. This is used when the course
    // is played in mirror mode — the grid must be reflected so
    // karts face the correct direction.

    EGG::Vector3f center;
    center.x = mConfig.startPositionX;
    center.y = mSlots[0].position.y;
    center.z = mConfig.startPositionZ;

    for (s32 i = 0; i < MAX_GRID_SLOTS; i++) {
        // Reflect position across the center line
        f32 dx = mSlots[i].position.x - center.x;
        f32 dz = mSlots[i].position.z - center.z;
        mSlots[i].position.x = center.x - dx;
        mSlots[i].position.z = center.z - dz;

        // Mirror the facing rotation (negate yaw angle)
        mSlots[i].rotation = -mSlots[i].rotation;

        // Swap column indices (left ↔ right)
        mSlots[i].col = mConfig.columns - 1 - mSlots[i].col;
    }

    // Mirror the base rotation stored in config
    mConfig.baseRotation = -mConfig.baseRotation;
}

// =============================================================================
// resetToDefault - Clear custom assignments
// @addr 0x804C3B40
// =============================================================================

void StartGrid::resetToDefault() {
    for (s32 i = 0; i < MAX_GRID_SLOTS; i++) {
        mSlotAssignment[i] = i;
    }
    mbPositionsCalculated = false;
}

} // namespace Field