// StartGrid.cpp — Starting Grid Position Manager Implementation
// GENESIS Phase 27a
// Original addresses: 0x804C3000–0x804C4000

#include "StartGrid.hpp"
#include <cmath>
#include <stdlib.h>
#include <cstring>

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
// init (courseId + count) — Initialize for a specific player count
// @addr 0x804C31C0
// =============================================================================

/* StartGrid_initWithCount @ 0x804C31C0 */
void StartGrid::init(u32 courseId, u32 count) {
    init(courseId);

    // Clamp count to valid range
    if (count > (u32)MAX_GRID_SLOTS) {
        count = (u32)MAX_GRID_SLOTS;
    }
    if (count < 2) {
        count = 2;
    }

    // Store the active player count in the config for later queries
    // (column count is always 2 in MKW; max rows adjusts to count)
    mConfig.maxRows = (count + 1) / 2;
    if (mConfig.maxRows > MAX_GRID_SLOTS / 2) {
        mConfig.maxRows = MAX_GRID_SLOTS / 2;
    }
}

// =============================================================================
// loadFromKMP — Parse grid data from a KMP (course map parameter) buffer
// @addr 0x804C3220
//
// The KMP STGI (start info) section contains the starting grid data.
// Layout (simplified):
//   [u32 numPlayers] [u32 numLaps]
//   For each player up to 12:
//     [f32 posX, posY, posZ] [u16 pointId] [u16 padding]
// =============================================================================

/* StartGrid_loadFromKMP @ 0x804C3220 */
bool StartGrid::loadFromKMP(const void* kmpData) {
    if (kmpData == nullptr) {
        return false;
    }

    const u8* data = static_cast<const u8*>(kmpData);

    // In a real KMP parse, we would locate the STGI section by scanning
    // the section headers. For this implementation, we assume the pointer
    // is already at the STGI data.

    // STGI header:
    //   0x00: u32 sectionSize
    //   0x04: u8  playerCount
    //   0x05: u8  unknown
    //   0x06: u16 numLaps
    //   0x08: u32[] (padding to 0x10)
    //   0x10: Start entries begin
    // Each start entry is 0x28 bytes:
    //   0x00: f32 posX
    //   0x04: f32 posY
    //   0x08: f32 posZ
    //   0x0C: f32 rotAngle (degrees → radians)
    //   0x10: u16 pointId
    //   0x12: u16 playerIndex
    //   0x14: u8  padding[0x14]

    u8 playerCount = data[0x04];
    u16 numLaps = *(const u16*)(data + 0x06);
    (void)numLaps;

    // Clamp player count
    if (playerCount > MAX_GRID_SLOTS) {
        playerCount = MAX_GRID_SLOTS;
    }

    // Parse each start position entry
    for (u8 i = 0; i < playerCount; i++) {
        u32 entryOffset = 0x10 + (u32)i * 0x28;

        f32 posX = *(const f32*)(data + entryOffset + 0x00);
        f32 posY = *(const f32*)(data + entryOffset + 0x04);
        f32 posZ = *(const f32*)(data + entryOffset + 0x08);
        f32 rotAngle = *(const f32*)(data + entryOffset + 0x0C);

        mSlots[i].position.x = posX;
        mSlots[i].position.y = posY;
        mSlots[i].position.z = posZ;
        mSlots[i].rotation = rotAngle * (3.14159265f / 180.0f); // deg → rad
        mSlots[i].slotIndex = i;
        mSlots[i].row = i / 2;
        mSlots[i].col = i % 2;

        // Map player index from KMP entry
        u16 playerIndex = *(const u16*)(data + entryOffset + 0x12);
        if (playerIndex < MAX_GRID_SLOTS) {
            mSlotAssignment[playerIndex] = i;
        }
    }

    // Recompute the grid config from the loaded positions
    if (playerCount >= 2) {
        mConfig.startPositionX = (mSlots[0].position.x + mSlots[1].position.x) * 0.5f;
        mConfig.startPositionZ = (mSlots[0].position.z + mSlots[1].position.z) * 0.5f;
        mConfig.baseRotation = mSlots[0].rotation;

        // Compute col spacing from first row
        f32 dx = mSlots[1].position.x - mSlots[0].position.x;
        f32 dz = mSlots[1].position.z - mSlots[0].position.z;
        mConfig.colSpacing = std::sqrt(dx * dx + dz * dz);

        // Compute row spacing from first two rows
        if (playerCount >= 4) {
            dx = mSlots[2].position.x - mSlots[0].position.x;
            dz = mSlots[2].position.z - mSlots[0].position.z;
            mConfig.rowSpacing = std::sqrt(dx * dx + dz * dz);
        }
    }

    mbPositionsCalculated = true;
    return true;
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

// =============================================================================
// getPosition (u8 playerIdx) — Get a player's assigned grid position
// @addr 0x804C3540
// =============================================================================

/* StartGrid_getPosition @ 0x804C3540 */
const EGG::Vector3f& StartGrid::getPosition(u8 playerIdx) const {
    s32 slot = getPositionForPlayer(playerIdx);
    return getSlotPosition(slot);
}

// =============================================================================
// getRotation (u8 playerIdx) — Get a player's assigned grid rotation
// @addr 0x804C3580
// =============================================================================

/* StartGrid_getRotation @ 0x804C3580 */
f32 StartGrid::getRotation(u8 playerIdx) const {
    s32 slot = getPositionForPlayer(playerIdx);
    return getSlotRotation(slot);
}

// =============================================================================
// getGridWidth — Total lateral width of the grid formation
// @addr 0x804C35C0
// =============================================================================

/* StartGrid_getGridWidth @ 0x804C35C0 */
f32 StartGrid::getGridWidth() const {
    return (f32)(mConfig.columns - 1) * mConfig.colSpacing;
}

// =============================================================================
// setGridWidth — Adjust column spacing to achieve a desired total width
// @addr 0x804C3600
// =============================================================================

/* StartGrid_setGridWidth @ 0x804C3600 */
void StartGrid::setGridWidth(f32 width) {
    if (mConfig.columns <= 1) {
        mConfig.colSpacing = 0.0f;
        return;
    }
    mConfig.colSpacing = width / (f32)(mConfig.columns - 1);
    // Recalculate positions if they were previously computed
    mbPositionsCalculated = false;
}

// =============================================================================
// getRowSpacing — Get the spacing between consecutive grid rows
// @addr 0x804C3640
// =============================================================================

/* StartGrid_getRowSpacing @ 0x804C3640 */
f32 StartGrid::getRowSpacing() const {
    return mConfig.rowSpacing;
}

// =============================================================================
// setRowSpacing — Set the spacing between consecutive grid rows
// @addr 0x804C3680
// =============================================================================

/* StartGrid_setRowSpacing @ 0x804C3680 */
void StartGrid::setRowSpacing(f32 spacing) {
    mConfig.rowSpacing = spacing;
    mbPositionsCalculated = false;
}

// =============================================================================
// calcIdealSpacing — Compute ideal row spacing based on the number of
// players and a desired grid depth (distance from pole to last row).
// @addr 0x804C36C0
// =============================================================================

/* StartGrid_calcIdealSpacing @ 0x804C36C0 */
f32 StartGrid::calcIdealSpacing(u32 playerCount) const {
    if (playerCount <= 1) {
        return 0.0f;
    }
    u32 rowCount = (playerCount + 1) / 2;
    if (rowCount <= 1) {
        return DEFAULT_ROW_SPACING;
    }
    // MKW aims for a total grid depth of ~90m (6 rows * 15m).
    // Scale proportionally for smaller grids.
    f32 idealDepth = (f32)rowCount * DEFAULT_ROW_SPACING;
    return idealDepth / (f32)(rowCount - 1);
}

/* StartGrid_setConfig @ 0x804C3800 */
void StartGrid::setConfig(const GridConfig& config) {
    mConfig = config;
    mbPositionsCalculated = false;
}

/* StartGrid_getConfig @ 0x804C3900 */
const GridConfig& StartGrid::getConfig() const {
    return mConfig;
}

// =============================================================================
// setFromStandings - GP standings with tie-breaking logic
// @addr 0x804C3A00
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

/* StartGrid_reverseOrder @ 0x804C3B00 */
void StartGrid::reverseOrder() {
    for (s32 i = 0; i < MAX_GRID_SLOTS / 2; i++) {
        s32 tmp = mSlotAssignment[i];
        mSlotAssignment[i] = mSlotAssignment[MAX_GRID_SLOTS - 1 - i];
        mSlotAssignment[MAX_GRID_SLOTS - 1 - i] = tmp;
    }
}

// =============================================================================
// getStartPosition - Pole position (slot 0)
// @addr 0x804C3B40
// =============================================================================

const EGG::Vector3f& StartGrid::getStartPosition() const {
    return mSlots[0].position;
}

// =============================================================================
// getPositionForPlayer - Player index → grid slot
// @addr 0x804C3B80
// =============================================================================

s32 StartGrid::getPositionForPlayer(s32 playerIdx) const {
    if (playerIdx < 0 || playerIdx >= MAX_GRID_SLOTS) {
        return -1;
    }
    return mSlotAssignment[playerIdx];
}

// =============================================================================
// getPlayerForPosition - Grid slot → player index (inverse mapping)
// @addr 0x804C3BC0
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
// @addr 0x804C3C00
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
// @addr 0x804C3C40
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
// @addr 0x804C3C80
// =============================================================================

void StartGrid::resetToDefault() {
    for (s32 i = 0; i < MAX_GRID_SLOTS; i++) {
        mSlotAssignment[i] = i;
    }
    mbPositionsCalculated = false;
}

// =============================================================================
// reset — Full reset to freshly-constructed state
// @addr 0x804C3CC0
// =============================================================================

/* StartGrid_reset @ 0x804C3CC0 */
void StartGrid::reset() {
    mCourseId = 0;
    mbPositionsCalculated = false;

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
        mSlotAssignment[i] = i;
    }
}

// =============================================================================
// getSlotCount — Return the total number of grid slots
// @addr 0x804C3D00
// =============================================================================

/* StartGrid_getSlotCount @ 0x804C3D00 */
s32 StartGrid::getSlotCount() const {
    return MAX_GRID_SLOTS;
}

// =============================================================================
// getEffectiveSlotCount — Return the number of active grid slots
// based on the current maxRows configuration
// @addr 0x804C3D40
// =============================================================================

/* StartGrid_getEffectiveSlotCount @ 0x804C3D40 */
s32 StartGrid::getEffectiveSlotCount() const {
    s32 count = mConfig.maxRows * mConfig.columns;
    if (count > MAX_GRID_SLOTS) {
        count = MAX_GRID_SLOTS;
    }
    return count;
}

// =============================================================================
// setSlotAssignment — Directly assign a player to a specific slot
// @addr 0x804C3D80
// =============================================================================

/* StartGrid_setSlotAssignment @ 0x804C3D80 */
void StartGrid::setSlotAssignment(s32 playerIdx, s32 slotIdx) {
    if (playerIdx < 0 || playerIdx >= MAX_GRID_SLOTS) return;
    if (slotIdx < 0 || slotIdx >= MAX_GRID_SLOTS) return;
    mSlotAssignment[playerIdx] = slotIdx;
}

// =============================================================================
// getSlotAssignment — Query which slot a player is assigned to
// @addr 0x804C3DC0
// =============================================================================

/* StartGrid_getSlotAssignment @ 0x804C3DC0 */
s32 StartGrid::getSlotAssignment(s32 playerIdx) const {
    if (playerIdx < 0 || playerIdx >= MAX_GRID_SLOTS) return -1;
    return mSlotAssignment[playerIdx];
}

// =============================================================================
// getGridLength — Total depth of the grid from pole to last row
// @addr 0x804C3E00
// =============================================================================

/* StartGrid_getGridLength @ 0x804C3E00 */
f32 StartGrid::getGridLength() const {
    s32 maxRow = mConfig.maxRows - 1;
    if (maxRow < 1) return 0.0f;
    return (f32)maxRow * mConfig.rowSpacing;
}

// =============================================================================
// StartGrid_getDefault — Free function returning a default-constructed grid
// @addr 0x804C3E40
// =============================================================================

/* StartGrid_getDefault @ 0x804C3E40 */
Field::StartGrid* StartGrid_getDefault() {
    static Field::StartGrid sDefault;
    return &sDefault;
}

} // namespace Field