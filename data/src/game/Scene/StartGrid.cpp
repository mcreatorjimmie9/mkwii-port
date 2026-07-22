// ============================================================================
// StartGrid.cpp — Race Start Grid Position Management
// ============================================================================
// Manages pre-race kart placement on the starting grid. The grid is a
// two-column staggered layout: positions alternate left/right, with each
// row slightly behind the one in front. In Mario Kart Wii, the grid
// layout is loaded from the course's start point JMap entry.
//
// The grid direction is the forward direction of the race at the start
// line, and karts face this direction when placed.
// ============================================================================

#include "StartGrid.hpp"
#include <cstring>
#include <cmath>
#include <algorithm>

namespace Scene {

// ============================================================================
// Construction / Destruction
// ============================================================================

StartGrid::StartGrid()
    : mSlotCount(0)
    , mActiveCount(0)
    , mGridWidth(6.0f)      // Default lateral distance between columns
    , mRowSpacing(12.0f)    // Default forward distance between rows
    , mCourseId(0xFFFFFFFF) {
    memset(mSlots, 0, sizeof(mSlots));
    // Initialize all slots as unassigned
    for (u32 i = 0; i < MAX_GRID_SLOTS; i++) {
        mSlots[i].playerIdx = 0xFF;
        mSlots[i].gridPosition = (u8)i;
    }
}

StartGrid::~StartGrid() {
}

// ============================================================================
// init — Initialize the grid for a given course and player count
// ============================================================================

void StartGrid::init(u32 courseId, u32 playerCount) {
    mCourseId = courseId;
    mActiveCount = (playerCount > MAX_GRID_SLOTS) ? MAX_GRID_SLOTS : playerCount;
    mSlotCount = mActiveCount;

    // Set grid width based on course (wider courses allow more spacing)
    // Default values; real game loads from course JMap
    mGridWidth = 6.0f;
    mRowSpacing = 12.0f;

    // Mark all active slots as unassigned but valid
    for (u32 i = 0; i < mSlotCount; i++) {
        mSlots[i].playerIdx = 0xFF;
        mSlots[i].gridPosition = (u8)i;
    }
    // Mark remaining slots as inactive
    for (u32 i = mSlotCount; i < MAX_GRID_SLOTS; i++) {
        mSlots[i].playerIdx = 0xFF;
        mSlots[i].gridPosition = 0xFF;
    }
}

// ============================================================================
// loadPositions — Compute grid positions from start point and direction
// ============================================================================
// The start point is the world position of the start/finish line center.
// The start direction is the forward direction of the race.
// Positions are laid out in a 2-column staggered grid:
//   Row 0: position 0 (left)   — pole position
//   Row 1: position 1 (right)  — 2nd place
//   Row 2: position 2 (left)   — 3rd place
//   Row 3: position 3 (right)  — 4th place
//   ...and so on.
// The lateral offset alternates ±(gridWidth/2) from the center line.
// The forward offset is (rowIndex * rowSpacing) behind the start line.

void StartGrid::loadPositions(const EGG::Vector3f& startPoint,
                               const EGG::Vector3f& startDir) {
    mStartPoint = startPoint;

    // Normalize the start direction
    f32 dirLenSq = startDir.x * startDir.x +
                   startDir.y * startDir.y +
                   startDir.z * startDir.z;
    if (dirLenSq > 0.0001f) {
        f32 invLen = 1.0f / std::sqrt(dirLenSq);
        mStartDir = EGG::Vector3f(startDir.x * invLen,
                                  startDir.y * invLen,
                                  startDir.z * invLen);
    } else {
        // Fallback: assume forward is +Z
        mStartDir = EGG::Vector3f(0.0f, 0.0f, 1.0f);
    }

    // Compute the right vector (perpendicular to start direction, horizontal)
    // right = normalize(cross(up, startDir))
    EGG::Vector3f up(0.0f, 1.0f, 0.0f);
    EGG::Vector3f right(
        up.y * mStartDir.z - up.z * mStartDir.y,
        up.z * mStartDir.x - up.x * mStartDir.z,
        up.x * mStartDir.y - up.y * mStartDir.x
    );
    f32 rightLenSq = right.x * right.x + right.z * right.z;
    if (rightLenSq > 0.0001f) {
        f32 invRightLen = 1.0f / std::sqrt(rightLenSq);
        right.x *= invRightLen;
        right.z *= invRightLen;
        right.y = 0.0f;
    } else {
        right = EGG::Vector3f(1.0f, 0.0f, 0.0f);
    }

    // Place each slot on the grid
    f32 halfWidth = mGridWidth * 0.5f;
    for (u32 i = 0; i < MAX_GRID_SLOTS; i++) {
        u32 row = i / 2;
        bool isLeftColumn = (i % 2) == 0;

        // Lateral offset: left column → -halfWidth, right → +halfWidth
        f32 lateralOffset = isLeftColumn ? -halfWidth : halfWidth;

        // Forward offset: each row is rowSpacing behind the previous
        f32 forwardOffset = (f32)row * mRowSpacing;

        // Compute world position
        mSlots[i].position.x = startPoint.x + mStartDir.x * forwardOffset + right.x * lateralOffset;
        mSlots[i].position.y = startPoint.y + mStartDir.y * forwardOffset + right.y * lateralOffset;
        mSlots[i].position.z = startPoint.z + mStartDir.z * forwardOffset + right.z * lateralOffset;

        // Rotation: yaw to face the start direction
        f32 yaw = std::atan2(mStartDir.x, mStartDir.z);
        mSlots[i].rotation = EGG::Vector3f(0.0f, yaw, 0.0f);
    }
}

// ============================================================================
// getPosition — Get the world position for a specific grid position
// ============================================================================

const EGG::Vector3f& StartGrid::getPosition(u8 gridIdx) const {
    if (gridIdx >= MAX_GRID_SLOTS) {
        gridIdx = 0; // Clamp to first slot on invalid index
    }
    return mSlots[gridIdx].position;
}

// ============================================================================
// getRotation — Get the rotation for a specific grid position
// ============================================================================

const EGG::Vector3f& StartGrid::getRotation(u8 gridIdx) const {
    if (gridIdx >= MAX_GRID_SLOTS) {
        gridIdx = 0;
    }
    return mSlots[gridIdx].rotation;
}

// ============================================================================
// setGridWidth — Set the lateral distance between the two columns
// ============================================================================

void StartGrid::setGridWidth(f32 width) {
    mGridWidth = width;
    if (mGridWidth < 1.0f) {
        mGridWidth = 1.0f; // Minimum width to avoid overlapping
    }
    if (mGridWidth > 20.0f) {
        mGridWidth = 20.0f; // Maximum reasonable width
    }
}

// ============================================================================
// calcSpacing — Calculate the ideal row spacing for a given player count
// ============================================================================

f32 StartGrid::calcSpacing(u32 playerCount) const {
    // More players → more rows needed → can use tighter spacing
    // Standard spacing is 12.0 units; reduce for large grids
    u32 rowsNeeded = (playerCount + 1) / 2;
    f32 spacing = mRowSpacing;

    if (rowsNeeded > 4) {
        spacing *= 0.9f;
    }
    if (rowsNeeded > 6) {
        spacing *= 0.85f;
    }

    // Ensure minimum spacing so karts don't overlap
    const f32 MIN_SPACING = 8.0f;
    if (spacing < MIN_SPACING) {
        spacing = MIN_SPACING;
    }

    return spacing;
}

// ============================================================================
// StartGrid_getDefaultGrid — Free function: get default grid layout
// ============================================================================
// Generates a default 2-column grid layout centered at origin,
// facing +Z direction. Useful for test scenes and menu backgrounds.

void StartGrid_getDefaultGrid(u32 playerCount,
                               EGG::Vector3f* outPositions,
                               EGG::Vector3f* outRotations,
                               u32* outCount) {
    StartGrid grid;
    grid.setGridWidth(6.0f);

    // Place at origin, facing +Z
    EGG::Vector3f startPt(0.0f, 0.0f, 0.0f);
    EGG::Vector3f startDir(0.0f, 0.0f, 1.0f);
    grid.loadPositions(startPt, startDir);

    u32 count = (playerCount > MAX_GRID_SLOTS) ? MAX_GRID_SLOTS : playerCount;
    *outCount = count;

    for (u32 i = 0; i < count; i++) {
        outPositions[i] = grid.getPosition((u8)i);
        outRotations[i] = grid.getRotation((u8)i);
    }
}

// ============================================================================
// Internal helpers for grid layout calculations
// ============================================================================

namespace {

// Compute the starting Y offset based on grid position.
// Karts in later rows may be slightly elevated to avoid clipping
// with the starting platform model.
f32 computeYOffset(u32 gridIdx) {
    u32 row = gridIdx / 2;
    return (f32)row * 0.05f; // Very subtle elevation per row
}

// Compute the starting speed boost for each grid position.
// In MKW, the countdown gives a speed bonus to players who
// accelerate at the right time. This is handled by the race
// director, but the grid position affects the visual offset.
f32 getStartingBoostFactor(u8 gridPosition) {
    // P1 gets the best starting position advantage.
    // This factor is used by the race countdown system.
    if (gridPosition == 0) return 1.0f;
    if (gridPosition <= 2) return 0.98f;
    if (gridPosition <= 5) return 0.95f;
    return 0.90f;
}

// Compute the grid index from a finishing position (0-indexed).
// This is the inverse of the grid position assignment.
u32 finishingPosToGridIdx(u8 finishingPos) {
    // In the original game, the grid assignment for the next race
    // mirrors the finish order: 1st place gets pole, etc.
    return (u32)finishingPos;
}

// Check if two grid slots overlap (for validation during placement).
bool checkSlotOverlap(const GridSlot& a, const GridSlot& b, f32 minDist) {
    f32 dx = a.position.x - b.position.x;
    f32 dy = a.position.y - b.position.y;
    f32 dz = a.position.z - b.position.z;
    f32 distSq = dx * dx + dy * dy + dz * dz;
    return distSq < minDist * minDist;
}

// Compute the ideal grid width for a given number of players.
// More players need slightly wider grids for visibility.
f32 idealGridWidth(u32 playerCount) {
    if (playerCount <= 4) return 5.0f;
    if (playerCount <= 8) return 6.0f;
    if (playerCount <= 10) return 7.0f;
    return 8.0f;
}

// Compute the forward direction from two points (start → checkpoint).
EGG::Vector3f directionBetween(const EGG::Vector3f& from,
                                 const EGG::Vector3f& to) {
    f32 dx = to.x - from.x;
    f32 dy = to.y - from.y;
    f32 dz = to.z - from.z;
    f32 lenSq = dx * dx + dy * dy + dz * dz;
    if (lenSq < 0.0001f) {
        return EGG::Vector3f(0.0f, 0.0f, 1.0f);
    }
    f32 invLen = 1.0f / std::sqrt(lenSq);
    return EGG::Vector3f(dx * invLen, dy * invLen, dz * invLen);
}

// Validate the grid: ensure all active slots have unique, non-overlapping positions.
bool validateGrid(const GridSlot* slots, u32 count, f32 minSpacing) {
    for (u32 i = 0; i < count; i++) {
        for (u32 j = i + 1; j < count; j++) {
            if (checkSlotOverlap(slots[i], slots[j], minSpacing)) {
                return false;
            }
        }
    }
    return true;
}

} // anonymous namespace

// ============================================================================
// getSlotSafe — Access a grid slot by index with bounds checking
// ============================================================================

const GridSlot* StartGrid::getSlotSafe(u8 gridIdx) const {
    if (gridIdx >= MAX_GRID_SLOTS) return nullptr;
    if (mSlots[gridIdx].gridPosition == 0xFF) return nullptr;
    return &mSlots[gridIdx];
}

// ============================================================================
// assignPlayer — Assign a player index to a grid slot
// ============================================================================

bool StartGrid::assignPlayer(u8 gridIdx, u8 playerIdx) {
    if (gridIdx >= MAX_GRID_SLOTS) return false;
    if (gridIdx >= mSlotCount) return false;
    mSlots[gridIdx].playerIdx = playerIdx;
    return true;
}

// ============================================================================
// getPlayerAtGrid — Get the player index assigned to a grid position
// ============================================================================

u8 StartGrid::getPlayerAtGrid(u8 gridIdx) const {
    if (gridIdx >= MAX_GRID_SLOTS) return 0xFF;
    return mSlots[gridIdx].playerIdx;
}

// ============================================================================
// getGridForPlayer — Find which grid slot a player is assigned to
// ============================================================================

s8 StartGrid::getGridForPlayer(u8 playerIdx) const {
    for (u32 i = 0; i < mSlotCount; i++) {
        if (mSlots[i].playerIdx == playerIdx) {
            return (s8)i;
        }
    }
    return -1;
}

// ============================================================================
// repositionForCount — Recalculate positions when player count changes
// ============================================================================

void StartGrid::repositionForCount(u32 newPlayerCount) {
    if (newPlayerCount == mActiveCount) return;

    u32 oldCount = mActiveCount;
    mActiveCount = (newPlayerCount > MAX_GRID_SLOTS) ? MAX_GRID_SLOTS : newPlayerCount;

    // Clear assignments for slots beyond new count
    for (u32 i = mActiveCount; i < oldCount && i < MAX_GRID_SLOTS; i++) {
        mSlots[i].playerIdx = 0xFF;
        mSlots[i].gridPosition = 0xFF;
    }

    // Adjust spacing for the new count
    mRowSpacing = calcSpacing(mActiveCount);
    mGridWidth = idealGridWidth(mActiveCount);

    // Recompute all positions
    loadPositions(mStartPoint, mStartDir);
}

// ============================================================================
// reset — Clear all assignments and reinitialize grid
// ============================================================================

void StartGrid::reset() {
    mSlotCount = 0;
    mActiveCount = 0;
    mCourseId = 0xFFFFFFFF;
    for (u32 i = 0; i < MAX_GRID_SLOTS; i++) {
        mSlots[i].playerIdx = 0xFF;
        mSlots[i].gridPosition = 0xFF;
        mSlots[i].position.setAll(0.0f);
        mSlots[i].rotation.setAll(0.0f);
    }
}

// ============================================================================
// getGridSizeValues — Return the grid width and row spacing
// ============================================================================

void StartGrid::getGridSizeValues(f32& outWidth, f32& outRowSpacing) const {
    outWidth = mGridWidth;
    outRowSpacing = mRowSpacing;
}

// ============================================================================
// isGridValid — Validate that all active positions are unique and non-overlapping
// ============================================================================

bool StartGrid::isGridValid() const {
    return validateGrid(mSlots, mSlotCount, mGridWidth * 0.5f);
}

// ============================================================================
// StartGrid_getStartingBoostFactor — Free function for countdown system access
// ============================================================================

f32 StartGrid_getStartingBoostFactor(u8 gridPosition) {
    return getStartingBoostFactor(gridPosition);
}

// ============================================================================
// StartGrid_calcIdealWidth — Free function for external grid width calculation
// ============================================================================

f32 StartGrid_calcIdealWidth(u32 playerCount) {
    return idealGridWidth(playerCount);
}

} // namespace Scene