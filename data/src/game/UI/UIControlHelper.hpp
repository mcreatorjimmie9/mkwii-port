#pragma once
// UIControlHelper.hpp - Utility helpers for UI controls
// Hit testing, text formatting, scroll lists, radio groups, sliders, colors
// Address range: 0x80624000 - 0x8062559C

#include "rk_common.h"

namespace UI {

// Hit test region types
enum HitTestType {
    HITTEST_RECTANGLE = 0,
    HITTEST_CIRCLE = 1,
    HITTEST_TRIANGLE = 2,
};

// Hit test region
struct HitRegion {
    HitTestType type;
    f32 x, y;          // Center position
    f32 width, height;  // For rectangles
    f32 radius;         // For circles
    f32 vertices[6];   // For triangles (3 pairs of x,y)
};

// Scroll list configuration
struct ScrollConfig {
    s32 visibleItemCount;     // Items visible at once
    s32 totalItemCount;       // Total items in list
    f32 itemHeight;           // Height of each item in layout units
    f32 scrollSpeed;          // Scroll speed multiplier
    f32 scrollFriction;       // Friction/deceleration for momentum scroll
    u8 wrapAround;            // Whether to wrap at list ends
    u8 highlightSelected;     // Whether to highlight selected item
    u8 _pad[2];
};

// Scroll list state
struct ScrollState {
    s32 scrollOffset;          // Current scroll position (first visible item index)
    s32 selectedIndex;         // Currently selected item index
    f32 scrollVelocity;        // Current scroll velocity (for momentum)
    f32 scrollAnimTimer;      // Timer for smooth scroll animation
    s32 scrollAnimFrom;        // Animation start offset
    s32 scrollAnimTo;         // Animation end offset
    u8 isScrolling;           // Whether scroll animation is active
    u8 isSnapping;            // Whether snapping to item boundary
    u8 _pad[2];
};

// Radio group entry
struct RadioEntry {
    u32 controlId;            // Control ID for this radio option
    u32 value;               // Value associated with this option
    u8 enabled;              // Whether this option is selectable
    u8 _pad[3];
};

// Radio group
struct RadioGroup {
    u32 groupId;
    RadioEntry entries[16];
    u32 entryCount;
    s32 selectedEntry;       // Index of currently selected entry (-1 if none)
};

// Slider configuration
struct SliderConfig {
    f32 minValue;
    f32 maxValue;
    f32 stepSize;            // Step increment (0.0 = continuous)
    f32 snapThreshold;       // Threshold for snapping to nearest step
    u8 vertical;              // Whether slider is vertical
    u8 wrapAround;           // Whether to wrap at min/max
    u8 showValue;            // Whether to display current value
    u8 _pad;
};

// Slider state
struct SliderState {
    f32 currentValue;
    f32 targetValue;
    f32 animTimer;
    u8 isDragging;
    u8 isAnimating;
    u8 _pad[2];
};

// ARGB color
union ARGBColor {
    struct {
        u8 b, g, r, a;
    };
    u32 raw;
};

// Picture button states for picture-based buttons
enum PictureButtonState {
    PICBTN_NORMAL = 0,
    PICBTN_HOVER = 1,
    PICBTN_PRESSED = 2,
    PICBTN_SELECTED = 3,
    PICBTN_DISABLED = 4,
};

class UIControlHelper {
public:
    UIControlHelper() {}
    ~UIControlHelper() {}

    // --- Hit testing ---
    // @addr 0x80624000
    static bool hitTest(f32 px, f32 py, const HitRegion& region);
    // @addr 0x80624180
    static bool hitTestRect(f32 px, f32 py, f32 rx, f32 ry, f32 rw, f32 rh);
    // @addr 0x80624260
    static bool hitTestCircle(f32 px, f32 py, f32 cx, f32 cy, f32 radius);
    // @addr 0x80624340
    static bool hitTestPointInTriangle(f32 px, f32 py, f32 ax, f32 ay, f32 bx, f32 by, f32 cx2, f32 cy2);

    // --- Text formatting ---
    // @addr 0x80624440
    static u32 getCharacterNameMessageId(u16 characterId);
    // @addr 0x80624520
    static u32 getKartNameMessageId(u16 kartId);
    // @addr 0x80624600
    static u32 getCourseNameMessageId(u16 courseId);
    // @addr 0x806246E0
    static void formatRaceTime(u32 totalMs, char* buffer, u32 bufferSize);
    // @addr 0x806247F0
    static void formatLapTime(u32 lapMs, char* buffer, u32 bufferSize);
    // @addr 0x806248C0
    static void formatCountdown(s32 framesRemaining, char* buffer, u32 bufferSize);
    // @addr 0x806249A0
    static void formatRankingPosition(s32 position, char* buffer, u32 bufferSize);

    // --- Scroll list management ---
    // @addr 0x80624A80
    static void initScrollState(ScrollState& state, const ScrollConfig& config);
    // @addr 0x80624BC0
    static void scrollList(ScrollState& state, const ScrollConfig& config, s32 direction, f32 deltaTime);
    // @addr 0x80624D40
    static void selectScrollItem(ScrollState& state, const ScrollConfig& config, s32 direction);
    // @addr 0x80624E40
    static void updateScrollAnimation(ScrollState& state, const ScrollConfig& config, f32 deltaTime);
    // @addr 0x80624F60
    static void scrollToListItem(ScrollState& state, const ScrollConfig& config, s32 itemIndex);
    // @addr 0x80625040
    static s32 getVisibleItems(const ScrollState& state, const ScrollConfig& config);

    // --- Radio group management ---
    // @addr 0x80625120
    static void initRadioGroup(RadioGroup& group, u32 groupId);
    // @addr 0x80625240
    static void addRadioEntry(RadioGroup& group, u32 controlId, u32 value, bool enabled = true);
    // @addr 0x80625320
    static void selectRadioEntry(RadioGroup& group, s32 index);
    // @addr 0x80625400
    static s32 getSelectedRadioValue(const RadioGroup& group);
    // @addr 0x806254C0
    static s32 findRadioEntryByValue(const RadioGroup& group, u32 value);

    // --- Slider management ---
    // @addr 0x80625500
    static void initSlider(SliderState& state, const SliderConfig& config, f32 initialValue);
    // @addr 0x80625540
    static f32 sliderStep(SliderState& state, const SliderConfig& config, s32 direction);
    // @addr 0x80625570
    static f32 sliderSet(SliderState& state, const SliderConfig& config, f32 value);
    // @addr 0x80625590
    static f32 sliderNormalize(const SliderState& state, const SliderConfig& config);

    // --- Color utilities ---
    static ARGBColor packARGB(u8 a, u8 r, u8 g, u8 b);
    static void unpackARGB(u32 color, u8& a, u8& r, u8& g, u8& b);
    static u32 lerpColor(u32 colorA, u32 colorB, f32 t);
    static u32 multiplyAlpha(u32 color, f32 alpha);

    // --- Layout coordinate transforms ---
    static void screenToLayout(f32 sx, f32 sy, f32& lx, f32& ly);
    static void layoutToScreen(f32 lx, f32 ly, f32& sx, f32& sy);

    // --- Bounding box ---
    static bool boxesOverlap(f32 ax1, f32 ay1, f32 ax2, f32 ay2, f32 bx1, f32 by1, f32 bx2, f32 by2);
    static void expandBoundingBox(f32& x1, f32& y1, f32& x2, f32& y2, f32 px, f32 py);

    // --- Picture button state ---
    static PictureButtonState getPictureButtonState(bool hovered, bool pressed, bool selected, bool disabled);
};

} // namespace UI