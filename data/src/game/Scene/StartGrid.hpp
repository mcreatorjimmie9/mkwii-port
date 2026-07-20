#pragma once
// StartGrid.hpp — Race start grid position management
// Manages the grid positions, rotations, and spacing for kart
// placement at the beginning of a race.

#include <rk_types.h>
#include <rk_common.h>
#include <egg/math/eggVector.hpp>

namespace Scene {

// Maximum grid positions (MKW supports up to 12 players)
static const u32 MAX_GRID_SLOTS = 12;

// Grid position data for a single slot
struct GridSlot {
    EGG::Vector3f position;  // World position on the grid
    EGG::Vector3f rotation;  // Euler angles (yaw, pitch, roll) in radians
    u8 playerIdx;            // Player assigned to this slot (0xFF = none)
    u8 gridPosition;         // 0-indexed grid position (0 = pole)
};

// StartGrid manages pre-race kart placement on the starting line.
class StartGrid {
public:
    StartGrid();
    ~StartGrid();

    // Initialize the grid for a given course and player count.
    void init(u32 courseId, u32 playerCount);

    // Load grid positions from the course's start point JMap data.
    void loadPositions(const EGG::Vector3f& startPoint, const EGG::Vector3f& startDir);

    // Get the world position for a specific grid position index.
    const EGG::Vector3f& getPosition(u8 gridIdx) const;

    // Get the rotation for a specific grid position index.
    const EGG::Vector3f& getRotation(u8 gridIdx) const;

    // Get the total number of slots in the grid (2 columns * rows).
    u32 getGridSize() const { return mSlotCount; }

    // Set the horizontal spacing between the two columns.
    void setGridWidth(f32 width);

    // Get the number of active grid slots.
    u32 getSlotCount() const { return mActiveCount; }

    // Calculate the ideal spacing between grid rows.
    f32 calcSpacing(u32 playerCount) const;

    // Get direct access to a slot (with bounds checking).
    const GridSlot* getSlotSafe(u8 gridIdx) const;

    // Get direct access to a slot.
    const GridSlot& getSlot(u8 idx) const { return mSlots[idx]; }
    GridSlot& getSlot(u8 idx) { return mSlots[idx]; }

    // Assign a player index to a grid slot.
    bool assignPlayer(u8 gridIdx, u8 playerIdx);

    // Get the player index assigned to a grid position.
    u8 getPlayerAtGrid(u8 gridIdx) const;

    // Find which grid slot a player is assigned to (-1 if not found).
    s8 getGridForPlayer(u8 playerIdx) const;

    // Recalculate positions when player count changes.
    void repositionForCount(u32 newPlayerCount);

    // Clear all assignments and reinitialize.
    void reset();

    // Get the grid width and row spacing.
    void getGridSizeValues(f32& outWidth, f32& outRowSpacing) const;

    // Validate grid positions are non-overlapping.
    bool isGridValid() const;

    // Get the starting direction vector (forward).
    const EGG::Vector3f& getStartDirection() const { return mStartDir; }

    // Get grid width (lateral distance between left and right columns).
    f32 getGridWidth() const { return mGridWidth; }

private:
    GridSlot mSlots[MAX_GRID_SLOTS];  // Pre-computed grid positions
    u32 mSlotCount;                   // Total slots allocated
    u32 mActiveCount;                 // Active slots (playerCount)
    f32 mGridWidth;                   // Lateral distance between columns
    f32 mRowSpacing;                  // Distance between rows
    EGG::Vector3f mStartPoint;        // Course start point
    EGG::Vector3f mStartDir;          // Course start direction
    u32 mCourseId;                    // Course identifier
};

// Free function: get the default grid layout for a given player count.
// Fills outPositions and outRotations with world-space positions/rotations.
void StartGrid_getDefaultGrid(u32 playerCount, EGG::Vector3f* outPositions,
                               EGG::Vector3f* outRotations, u32* outCount);
f32 StartGrid_getStartingBoostFactor(u8 gridPosition);
f32 StartGrid_calcIdealWidth(u32 playerCount);

} // namespace Scene