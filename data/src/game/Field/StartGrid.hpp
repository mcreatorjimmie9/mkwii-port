#pragma once
// StartGrid.hpp — Starting Grid Position Manager
// GENESIS Phase 27: Manages starting grid slot positions, pole position
// calculation, and grid formation based on race results or qualifying.
// Original addresses: 0x804C3000–0x804C4000
//
// The starting grid in MKW is a 2-wide, 6-deep formation (12 slots).
// Position 1 (pole) is at the front-left. The grid spacing is wider
// than real F1 (~15m between rows) to accommodate karts and items.

#include <rk_types.h>
#include <rk_common.h>
#include <egg/math/eggVector.hpp>

namespace Field {

// Starting grid slot definition
struct GridSlot {
    EGG::Vector3f position;     // World position for this grid slot
    f32 rotation;               // Y-axis facing direction (radians)
    s32 slotIndex;              // 0-indexed grid position (0 = pole)
    s32 row;                    // Grid row (0 = front)
    s32 col;                    // Grid column (0 = left, 1 = right)
};

// Grid configuration parameters
struct GridConfig {
    f32 rowSpacing;              // Distance between grid rows
    f32 colSpacing;              // Distance between grid columns
    f32 startPositionX;          // Center X of grid formation
    f32 startPositionZ;          // Front of grid Z position
    f32 baseRotation;            // Base facing angle (radians)
    s32 columns;                 // Number of columns (2 for MKW)
    s32 maxRows;                 // Maximum rows (6 for 12 players)
};

// StartGrid — manages grid slot positions and assignment
class StartGrid {
public:
    /* StartGrid_ctor @ 0x804C3100 */
    StartGrid();
    /* StartGrid_dtor @ 0x804C3140 */
    ~StartGrid();

    // Initialize grid for a given course
    /* StartGrid_init @ 0x804C3180 */
    void init(u32 courseId);

    // Calculate grid positions based on course S/F line and direction
    /* StartGrid_calculatePositions @ 0x804C3200 */
    void calculatePositions(const EGG::Vector3f& sfLinePos,
                            const EGG::Vector3f& sfLineDir);

    // Get grid slot by index (0 = pole position)
    /* StartGrid_getSlot @ 0x804C3300 */
    const GridSlot* getSlot(s32 slotIdx) const;

    // Get position for a grid slot
    /* StartGrid_getSlotPosition @ 0x804C3400 */
    const EGG::Vector3f& getSlotPosition(s32 slotIdx) const;

    // Get rotation for a grid slot
    /* StartGrid_getSlotRotation @ 0x804C3500 */
    f32 getSlotRotation(s32 slotIdx) const;

    // Set grid configuration
    /* StartGrid_setConfig @ 0x804C3600 */
    void setConfig(const GridConfig& config);

    // Get current grid configuration
    /* StartGrid_getConfig @ 0x804C3700 */
    const GridConfig& getConfig() const;

    // Rearrange grid based on race standings (for GP/series)
    /* StartGrid_setFromStandings @ 0x804C3800 */
    void setFromStandings(const s32* playerStandings, s32 playerCount);

    // Get total number of grid slots
    s32 getSlotCount() const { return MAX_GRID_SLOTS; }

    // Reverse grid order (for certain race modes)
    /* StartGrid_reverseOrder @ 0x804C3900 */
    void reverseOrder();

private:
    static const s32 MAX_GRID_SLOTS = MAX_PLAYER_COUNT; // 12 slots
    static const f32 DEFAULT_ROW_SPACING;
    static const f32 DEFAULT_COL_SPACING;

    GridSlot mSlots[MAX_GRID_SLOTS];
    GridConfig mConfig;
    u32 mCourseId;
    s32 mSlotAssignment[MAX_GRID_SLOTS]; // Player index → slot index mapping
    bool mbPositionsCalculated;
};

} // namespace Field
