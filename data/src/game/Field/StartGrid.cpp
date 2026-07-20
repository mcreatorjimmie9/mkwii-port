// StartGrid.cpp — Starting Grid Position Manager Implementation
// GENESIS Phase 27a
// Original addresses: 0x804C3000–0x804C4000

#include "StartGrid.hpp"
#include <cmath>

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

/* StartGrid_calculatePositions @ 0x804C3200 */
void StartGrid::calculatePositions(const EGG::Vector3f& sfLinePos,
                                   const EGG::Vector3f& sfLineDir) {
    // The starting grid is placed behind the S/F line along the
    // track direction. Grid rows extend backward, columns extend
    // laterally. The facing direction is the track forward direction.
    //
    // MKW uses a 2-wide, 6-deep grid (12 positions):
    //   Row 0: [Slot 0 (pole)] [Slot 1]
    //   Row 1: [Slot 2]         [Slot 3]
    //   Row 2: [Slot 4]         [Slot 5]
    //   ...
    //   Row 5: [Slot 10]        [Slot 11]

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

    // Calculate each slot position
    for (s32 i = 0; i < MAX_GRID_SLOTS; i++) {
        s32 row = i / mConfig.columns;
        s32 col = i % mConfig.columns;

        mSlots[i].slotIndex = i;
        mSlots[i].row = row;
        mSlots[i].col = col;
        mSlots[i].rotation = mConfig.baseRotation;

        // Position: start position + row * (-forward * spacing) + col * (right * spacing)
        // Odd columns are offset slightly forward for stagger
        f32 rowOffset = row * mConfig.rowSpacing;
        f32 colOffset = col * mConfig.colSpacing;
        // Add half column spacing so columns are centered on track center
        colOffset -= mConfig.colSpacing * 0.5f;

        mSlots[i].position.x = sfLinePos.x - forward.x * rowOffset + right.x * colOffset;
        mSlots[i].position.y = sfLinePos.y;
        mSlots[i].position.z = sfLinePos.z - forward.z * rowOffset + right.z * colOffset;

        // Stagger: odd rows offset by half column spacing
        if (row % 2 != 0) {
            mSlots[i].position.x += right.x * (mConfig.colSpacing * 0.5f);
            mSlots[i].position.z += right.z * (mConfig.colSpacing * 0.5f);
        }
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

/* StartGrid_setFromStandings @ 0x804C3800 */
void StartGrid::setFromStandings(const s32* playerStandings, s32 playerCount) {
    // In Grand Prix mode, the starting grid for the next race
    // is determined by the cumulative points standings:
    //   Highest points → pole position (slot 0)
    //   Lowest points → last position (slot N-1)
    if (playerStandings == nullptr || playerCount <= 0) {
        return;
    }

    // playerStandings[i] = player index for position i (0 = 1st place)
    // Map: standings position → grid slot (1st place → pole, etc.)
    for (s32 pos = 0; pos < playerCount && pos < MAX_GRID_SLOTS; pos++) {
        s32 playerIdx = playerStandings[pos];
        if (playerIdx >= 0 && playerIdx < MAX_GRID_SLOTS) {
            mSlotAssignment[playerIdx] = pos;
        }
    }
}

/* StartGrid_reverseOrder @ 0x804C3900 */
void StartGrid::reverseOrder() {
    // Reverse the grid order: front → back, back → front
    // Used in certain game modes where the fastest qualifier
    // starts from the back
    for (s32 i = 0; i < MAX_GRID_SLOTS / 2; i++) {
        s32 tmp = mSlotAssignment[i];
        mSlotAssignment[i] = mSlotAssignment[MAX_GRID_SLOTS - 1 - i];
        mSlotAssignment[MAX_GRID_SLOTS - 1 - i] = tmp;
    }
}

} // namespace Field
