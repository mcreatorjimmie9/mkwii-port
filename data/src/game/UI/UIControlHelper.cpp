// UIControlHelper.cpp - Utility helpers for UI controls
// Hit testing, text formatting, scroll lists, radio groups, sliders, colors
// Address range: 0x80624000 - 0x8062559C

#include "UIControlHelper.hpp"
#include <cstring>

namespace UI {

// --- Hit Testing ---

// @addr 0x80624000
bool UIControlHelper::hitTest(f32 px, f32 py, const HitRegion& region) {
    switch (region.type) {
    case HITTEST_RECTANGLE:
        return hitTestRect(px, py, region.x, region.y, region.width, region.height);
    case HITTEST_CIRCLE:
        return hitTestCircle(px, py, region.x, region.y, region.radius);
    case HITTEST_TRIANGLE:
        return hitTestPointInTriangle(px, py,
            region.vertices[0], region.vertices[1],
            region.vertices[2], region.vertices[3],
            region.vertices[4], region.vertices[5]);
    default:
        return false;
    }
}

// @addr 0x80624180
bool UIControlHelper::hitTestRect(f32 px, f32 py, f32 rx, f32 ry, f32 rw, f32 rh) {
    f32 halfW = rw * 0.5f;
    f32 halfH = rh * 0.5f;
    return px >= rx - halfW && px <= rx + halfW &&
           py >= ry - halfH && py <= ry + halfH;
}

// @addr 0x80624260
bool UIControlHelper::hitTestCircle(f32 px, f32 py, f32 cx, f32 cy, f32 radius) {
    f32 dx = px - cx;
    f32 dy = py - cy;
    return (dx * dx + dy * dy) <= (radius * radius);
}

// @addr 0x80624340
bool UIControlHelper::hitTestPointInTriangle(f32 px, f32 py,
    f32 ax, f32 ay, f32 bx, f32 by, f32 cx2, f32 cy2) {
    f32 denom = (by - cy2) * (ax - cx2) + (cx2 - bx) * (ay - cy2);
    if (denom == 0.0f) return false;
    f32 a = ((by - cy2) * (px - cx2) + (cx2 - bx) * (py - cy2)) / denom;
    f32 b = ((cy2 - ay) * (px - cx2) + (ax - cx2) * (py - cy2)) / denom;
    f32 c = 1.0f - a - b;
    return a >= 0.0f && b >= 0.0f && c >= 0.0f;
}

// --- Text Formatting: Message ID Lookup Tables ---

// Character name message IDs (characterId -> msgId)
// @addr 0x80624400
static const u16 sCharacterNameMsgIds[] = {
    10001, 10002, 10003, 10004, 10005, 10006, 10007, 10008, 10009, 10010, 10011, 10012,
    10013, 10014, 10015, 10016, 10017, 10018, 10019, 10020, 10021, 10022, 10023, 10024,
    10025, 10026, 10027, 10028, 10029
};

// Kart name message IDs
// @addr 0x806244A0
static const u16 sKartNameMsgIds[36] = {
    11001, 11002, 11003, 11004, 11005, 11006, 11007, 11008, 11009, 11010, 11011, 11012,
    11013, 11014, 11015, 11016, 11017, 11018, 11019, 11020, 11021, 11022, 11023, 11024,
    11025, 11026, 11027, 11028, 11029, 11030, 11031, 11032, 11033, 11034, 11035, 11036
};

// Course name message IDs
// @addr 0x80624580
static const u16 sCourseNameMsgIds[32] = {
    12001, 12002, 12003, 12004, 12005, 12006, 12007, 12008, 12009, 12010, 12011, 12012,
    12013, 12014, 12015, 12016, 12017, 12018, 12019, 12020, 12021, 12022, 12023, 12024,
    12025, 12026, 12027, 12028, 12029, 12030, 12031, 12032
};

// @addr 0x80624440
u32 UIControlHelper::getCharacterNameMessageId(u16 characterId) {
    if (characterId >= ARRAY_COUNT(sCharacterNameMsgIds)) return 0;
    return sCharacterNameMsgIds[characterId];
}

// @addr 0x80624520
u32 UIControlHelper::getKartNameMessageId(u16 kartId) {
    if (kartId >= ARRAY_COUNT(sKartNameMsgIds)) return 0;
    return sKartNameMsgIds[kartId];
}

// @addr 0x80624600
u32 UIControlHelper::getCourseNameMessageId(u16 courseId) {
    if (courseId >= ARRAY_COUNT(sCourseNameMsgIds)) return 0;
    return sCourseNameMsgIds[courseId];
}

// @addr 0x806246E0
void UIControlHelper::formatRaceTime(u32 totalMs, char* buffer, u32 bufferSize) {
    if (bufferSize < 10) {
        if (bufferSize > 0) buffer[0] = '\0';
        return;
    }
    u32 totalMinutes = totalMs / 60000u;
    u32 remainder = totalMs % 60000u;
    u32 seconds = remainder / 1000u;
    u32 milliseconds = remainder % 1000u;
    // Format: M:SS.xxx
    std::memset(buffer, 0, bufferSize);
    buffer[0] = '0' + (char)(totalMinutes % 10);
    buffer[1] = ':';
    buffer[2] = '0' + (char)(seconds / 10);
    buffer[3] = '0' + (char)(seconds % 10);
    buffer[4] = '.';
    buffer[5] = '0' + (char)(milliseconds / 100);
    buffer[6] = '0' + (char)((milliseconds / 10) % 10);
    buffer[7] = '0' + (char)(milliseconds % 10);
    buffer[8] = '\0';
}

// @addr 0x806247F0
void UIControlHelper::formatLapTime(u32 lapMs, char* buffer, u32 bufferSize) {
    formatRaceTime(lapMs, buffer, bufferSize);
}

// @addr 0x806248C0
void UIControlHelper::formatCountdown(s32 framesRemaining, char* buffer, u32 bufferSize) {
    if (bufferSize < 4) {
        if (bufferSize > 0) buffer[0] = '\0';
        return;
    }
    // MKWii runs at 60fps; convert frames to seconds
    s32 totalSeconds = (framesRemaining + 59) / 60;
    std::memset(buffer, 0, bufferSize);
    if (totalSeconds <= 0) {
        buffer[0] = 'G'; buffer[1] = 'O'; buffer[2] = '!'; buffer[3] = '\0';
    } else if (totalSeconds < 10) {
        buffer[0] = '0' + (char)totalSeconds;
        buffer[1] = '\0';
    } else {
        buffer[0] = '0' + (char)(totalSeconds / 10);
        buffer[1] = '0' + (char)(totalSeconds % 10);
        buffer[2] = '\0';
    }
}

// @addr 0x806249A0
void UIControlHelper::formatRankingPosition(s32 position, char* buffer, u32 bufferSize) {
    if (bufferSize < 6) {
        if (bufferSize > 0) buffer[0] = '\0';
        return;
    }
    const char* suffix;
    s32 lastTwo = position % 100;
    if (lastTwo >= 11 && lastTwo <= 13) {
        suffix = "th";
    } else {
        switch (position % 10) {
        case 1: suffix = "st"; break;
        case 2: suffix = "nd"; break;
        case 3: suffix = "rd"; break;
        default: suffix = "th"; break;
        }
    }
    std::memset(buffer, 0, bufferSize);
    buffer[0] = '0' + (char)(position / 10);
    buffer[1] = '0' + (char)(position % 10);
    buffer[2] = suffix[0];
    buffer[3] = suffix[1];
    buffer[4] = '\0';
}

// --- Scroll List Management ---

// @addr 0x80624A80
void UIControlHelper::initScrollState(ScrollState& state, const ScrollConfig& config) {
    state.scrollOffset = 0;
    state.selectedIndex = 0;
    state.scrollVelocity = 0.0f;
    state.scrollAnimTimer = 0.0f;
    state.scrollAnimFrom = 0;
    state.scrollAnimTo = 0;
    state.isScrolling = false;
    state.isSnapping = false;
    UNUSED(config);
}

// @addr 0x80624BC0
void UIControlHelper::scrollList(ScrollState& state, const ScrollConfig& config, s32 direction, f32 deltaTime) {
    if (config.totalItemCount <= 0) return;
    // Momentum-based scrolling: apply impulse and friction
    state.scrollVelocity += (f32)direction * config.scrollSpeed * deltaTime * 60.0f;
    state.scrollVelocity *= config.scrollFriction;
    f32 offsetDelta = state.scrollVelocity * deltaTime;
    state.scrollOffset += (s32)offsetDelta;
    if (config.wrapAround) {
        s32 maxOff = config.totalItemCount - 1;
        while (state.scrollOffset < 0) state.scrollOffset += config.totalItemCount;
        while (state.scrollOffset > maxOff) state.scrollOffset -= config.totalItemCount;
    } else {
        if (state.scrollOffset < 0) { state.scrollOffset = 0; state.scrollVelocity = 0.0f; }
        s32 maxOff = config.totalItemCount - config.visibleItemCount;
        if (maxOff < 0) maxOff = 0;
        if (state.scrollOffset > maxOff) { state.scrollOffset = maxOff; state.scrollVelocity = 0.0f; }
    }
    state.isScrolling = (state.scrollVelocity * state.scrollVelocity) > 0.001f;
}

// @addr 0x80624D40
void UIControlHelper::selectScrollItem(ScrollState& state, const ScrollConfig& config, s32 direction) {
    if (config.totalItemCount <= 0) return;
    s32 newSelected = state.selectedIndex + direction;
    if (config.wrapAround) {
        if (newSelected < 0) newSelected = config.totalItemCount - 1;
        else if (newSelected >= config.totalItemCount) newSelected = 0;
    } else {
        if (newSelected < 0) newSelected = 0;
        if (newSelected >= config.totalItemCount) newSelected = config.totalItemCount - 1;
    }
    state.selectedIndex = newSelected;
    // Keep selected item within visible range
    if (newSelected < state.scrollOffset) {
        state.scrollOffset = newSelected;
    } else if (newSelected >= state.scrollOffset + config.visibleItemCount) {
        state.scrollOffset = newSelected - config.visibleItemCount + 1;
    }
}

// @addr 0x80624E40
void UIControlHelper::updateScrollAnimation(ScrollState& state, const ScrollConfig& config, f32 deltaTime) {
    if (!state.isScrolling) return;
    state.scrollAnimTimer += deltaTime;
    f32 duration = 0.2f; // 200ms smooth scroll
    f32 t = state.scrollAnimTimer / duration;
    if (t >= 1.0f) {
        t = 1.0f;
        state.isScrolling = false;
        state.scrollAnimTimer = 0.0f;
    }
    // Smooth step interpolation (Hermite)
    f32 smooth = t * t * (3.0f - 2.0f * t);
    state.scrollOffset = state.scrollAnimFrom +
        (s32)((f32)(state.scrollAnimTo - state.scrollAnimFrom) * smooth);
    s32 maxOff = config.totalItemCount - config.visibleItemCount;
    if (maxOff < 0) maxOff = 0;
    if (state.scrollOffset < 0) state.scrollOffset = 0;
    if (state.scrollOffset > maxOff) state.scrollOffset = maxOff;
}

// @addr 0x80624F60
void UIControlHelper::scrollToListItem(ScrollState& state, const ScrollConfig& config, s32 itemIndex) {
    if (itemIndex < 0 || itemIndex >= config.totalItemCount) return;
    state.selectedIndex = itemIndex;
    s32 targetOffset = itemIndex;
    // Center the item if possible
    s32 halfVisible = config.visibleItemCount / 2;
    if (halfVisible > 0) targetOffset = itemIndex - halfVisible;
    s32 maxOff = config.totalItemCount - config.visibleItemCount;
    if (maxOff < 0) maxOff = 0;
    if (targetOffset < 0) targetOffset = 0;
    if (targetOffset > maxOff) targetOffset = maxOff;
    state.scrollAnimFrom = state.scrollOffset;
    state.scrollAnimTo = targetOffset;
    state.scrollAnimTimer = 0.0f;
    state.isScrolling = true;
}

// @addr 0x80625040
s32 UIControlHelper::getVisibleItems(const ScrollState& state, const ScrollConfig& config) {
    s32 count = config.visibleItemCount;
    s32 remaining = config.totalItemCount - state.scrollOffset;
    if (remaining < count) count = remaining;
    if (count < 0) count = 0;
    return count;
}

// --- Radio Group Management ---

// @addr 0x80625120
void UIControlHelper::initRadioGroup(RadioGroup& group, u32 groupId) {
    group.groupId = groupId;
    group.entryCount = 0;
    group.selectedEntry = -1;
    std::memset(group.entries, 0, sizeof(group.entries));
}

// @addr 0x80625240
void UIControlHelper::addRadioEntry(RadioGroup& group, u32 controlId, u32 value, bool enabled) {
    if (group.entryCount >= ARRAY_COUNT(group.entries)) return;
    RadioEntry& entry = group.entries[group.entryCount];
    entry.controlId = controlId;
    entry.value = value;
    entry.enabled = enabled ? 1 : 0;
    entry._pad[0] = entry._pad[1] = entry._pad[2] = 0;
    group.entryCount++;
}

// @addr 0x80625320
void UIControlHelper::selectRadioEntry(RadioGroup& group, s32 index) {
    if (index < 0 || (u32)index >= group.entryCount) return;
    if (!group.entries[index].enabled) return;
    group.selectedEntry = index;
}

// @addr 0x80625400
s32 UIControlHelper::getSelectedRadioValue(const RadioGroup& group) {
    if (group.selectedEntry < 0 || (u32)group.selectedEntry >= group.entryCount) return -1;
    return (s32)group.entries[group.selectedEntry].value;
}

// @addr 0x806254C0
s32 UIControlHelper::findRadioEntryByValue(const RadioGroup& group, u32 value) {
    for (u32 i = 0; i < group.entryCount; i++) {
        if (group.entries[i].value == value) return (s32)i;
    }
    return -1;
}

// --- Slider Management ---

// @addr 0x80625500
void UIControlHelper::initSlider(SliderState& state, const SliderConfig& config, f32 initialValue) {
    state.currentValue = initialValue;
    state.targetValue = initialValue;
    state.animTimer = 0.0f;
    state.isDragging = false;
    state.isAnimating = false;
    state._pad[0] = state._pad[1] = 0;
    // Clamp to configured range
    if (state.currentValue < config.minValue) state.currentValue = config.minValue;
    if (state.currentValue > config.maxValue) state.currentValue = config.maxValue;
    UNUSED(config);
}

// @addr 0x80625540
f32 UIControlHelper::sliderStep(SliderState& state, const SliderConfig& config, s32 direction) {
    f32 newValue = state.currentValue + (f32)direction * config.stepSize;
    return sliderSet(state, config, newValue);
}

// @addr 0x80625570
f32 UIControlHelper::sliderSet(SliderState& state, const SliderConfig& config, f32 value) {
    // Clamp or wrap at range boundaries
    if (value < config.minValue) {
        value = config.wrapAround ? config.maxValue : config.minValue;
    }
    if (value > config.maxValue) {
        value = config.wrapAround ? config.minValue : config.maxValue;
    }
    // Snap to nearest step if step size is non-zero
    if (config.stepSize > 0.0f) {
        f32 range = config.maxValue - config.minValue;
        f32 normalized = (value - config.minValue) / range;
        f32 stepped = roundf(normalized / config.stepSize) * config.stepSize;
        if (roundf(normalized * 1000.0f) != roundf(stepped * 1000.0f)) {
            f32 diff = normalized - stepped;
            if (diff < 0.0f) diff = -diff;
            if (diff < config.snapThreshold) {
                value = config.minValue + stepped * range;
            }
        }
    }
    state.currentValue = value;
    state.targetValue = value;
    return value;
}

// @addr 0x80625590
f32 UIControlHelper::sliderNormalize(const SliderState& state, const SliderConfig& config) {
    f32 range = config.maxValue - config.minValue;
    if (range <= 0.0f) return 0.0f;
    return (state.currentValue - config.minValue) / range;
}

// --- Color Utilities ---

ARGBColor UIControlHelper::packARGB(u8 a, u8 r, u8 g, u8 b) {
    ARGBColor color;
    color.a = a; color.r = r; color.g = g; color.b = b;
    return color;
}

void UIControlHelper::unpackARGB(u32 color, u8& a, u8& r, u8& g, u8& b) {
    ARGBColor c;
    c.raw = color;
    a = c.a; r = c.r; g = c.g; b = c.b;
}

u32 UIControlHelper::lerpColor(u32 colorA, u32 colorB, f32 t) {
    u8 aA, rA, gA, bA, aB, rB, gB, bB;
    unpackARGB(colorA, aA, rA, gA, bA);
    unpackARGB(colorB, aB, rB, gB, bB);
    u8 a = (u8)(aA + (aB - aA) * t);
    u8 r = (u8)(rA + (rB - rA) * t);
    u8 g = (u8)(gA + (gB - gA) * t);
    u8 b = (u8)(bA + (bB - bA) * t);
    return packARGB(a, r, g, b).raw;
}

u32 UIControlHelper::multiplyAlpha(u32 color, f32 alpha) {
    u8 a, r, g, b;
    unpackARGB(color, a, r, g, b);
    a = (u8)(a * alpha);
    return packARGB(a, r, g, b).raw;
}

// --- Layout Coordinate Transforms (MKWii: 608x456 layout, 640x480 screen) ---

static const f32 LAYOUT_W = 608.0f;
static const f32 LAYOUT_H = 456.0f;
static const f32 SCREEN_W = 640.0f;
static const f32 SCREEN_H = 480.0f;

void UIControlHelper::screenToLayout(f32 sx, f32 sy, f32& lx, f32& ly) {
    lx = (sx / SCREEN_W) * LAYOUT_W;
    ly = (sy / SCREEN_H) * LAYOUT_H;
}

void UIControlHelper::layoutToScreen(f32 lx, f32 ly, f32& sx, f32& sy) {
    sx = (lx / LAYOUT_W) * SCREEN_W;
    sy = (ly / LAYOUT_H) * SCREEN_H;
}

// --- Bounding Box ---

bool UIControlHelper::boxesOverlap(f32 ax1, f32 ay1, f32 ax2, f32 ay2,
                                    f32 bx1, f32 by1, f32 bx2, f32 by2) {
    if (ax1 > ax2) { f32 t = ax1; ax1 = ax2; ax2 = t; }
    if (ay1 > ay2) { f32 t = ay1; ay1 = ay2; ay2 = t; }
    if (bx1 > bx2) { f32 t = bx1; bx1 = bx2; bx2 = t; }
    if (by1 > by2) { f32 t = by1; by1 = by2; by2 = t; }
    return !(ax2 < bx1 || bx2 < ax1 || ay2 < by1 || by2 < ay1);
}

void UIControlHelper::expandBoundingBox(f32& x1, f32& y1, f32& x2, f32& y2, f32 px, f32 py) {
    if (px < x1) x1 = px;
    if (px > x2) x2 = px;
    if (py < y1) y1 = py;
    if (py > y2) y2 = py;
}

// --- Picture Button State ---

PictureButtonState UIControlHelper::getPictureButtonState(
    bool hovered, bool pressed, bool selected, bool disabled) {
    if (disabled)  return PICBTN_DISABLED;
    if (pressed)   return PICBTN_PRESSED;
    if (selected)  return PICBTN_SELECTED;
    if (hovered)   return PICBTN_HOVER;
    return PICBTN_NORMAL;
}

} // namespace UI