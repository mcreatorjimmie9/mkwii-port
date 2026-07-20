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
    /* StartGrid_initWithCount @ 0x804C31C0 */
    void init(u32 courseId, u32 count);
    /* StartGrid_loadFromKMP @ 0x804C3220 */
    bool loadFromKMP(const void* kmpData);

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

    // Reverse grid order (for certain race modes)
    /* StartGrid_reverseOrder @ 0x804C3900 */
    void reverseOrder();

    // Get row and column counts for the current layout
    s32 getRowCount() const { return mConfig.maxRows; }
    s32 getColumnCount() const { return mConfig.columns; }

    // Get pole position (slot 0 world position)
    const EGG::Vector3f& getStartPosition() const;

    // Map player index → grid slot (which slot this player starts in)
    s32 getPositionForPlayer(s32 playerIdx) const;

    // Inverse: map grid slot → player index (who starts in this slot)
    s32 getPlayerForPosition(s32 slotIdx) const;

    // Generate randomized VS race grid order
    void getRandomizedOrder(s32* outOrder, s32 count) const;

    // Mirror the grid for mirror mode (flip lateral axis)
    void adjustForReverse();

    // Reset all assignments to default (player i → slot i)
    void resetToDefault();
    /* StartGrid_reset @ 0x804C3CC0 */
    void reset();

    // --- New accessors ---
    /* StartGrid_getPosition @ 0x804C3540 */
    const EGG::Vector3f& getPosition(u8 playerIdx) const;
    /* StartGrid_getRotation @ 0x804C3580 */
    f32 getRotation(u8 playerIdx) const;
    /* StartGrid_getGridWidth @ 0x804C35C0 */
    f32 getGridWidth() const;
    /* StartGrid_setGridWidth @ 0x804C3600 */
    void setGridWidth(f32 width);
    /* StartGrid_getRowSpacing @ 0x804C3640 */
    f32 getRowSpacing() const;
    /* StartGrid_setRowSpacing @ 0x804C3680 */
    void setRowSpacing(f32 spacing);
    /* StartGrid_calcIdealSpacing @ 0x804C36C0 */
    f32 calcIdealSpacing(u32 playerCount) const;
    /* StartGrid_getSlotCount @ 0x804C3D00 */
    s32 getSlotCount() const;
    /* StartGrid_getEffectiveSlotCount @ 0x804C3D40 */
    s32 getEffectiveSlotCount() const;
    /* StartGrid_setSlotAssignment @ 0x804C3D80 */
    void setSlotAssignment(s32 playerIdx, s32 slotIdx);
    /* StartGrid_getSlotAssignment @ 0x804C3DC0 */
    s32 getSlotAssignment(s32 playerIdx) const;
    /* StartGrid_getGridLength @ 0x804C3E00 */
    f32 getGridLength() const;

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