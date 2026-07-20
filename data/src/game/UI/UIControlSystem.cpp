// UIControlSystem.cpp - Global input routing and focus management implementation
// Address range: 0x80621000 - 0x80624000

#include "UIControlSystem.hpp"
#include "UIControl.hpp"
#include "MenuPage.hpp"

namespace UI {

UIControlSystem* UIControlSystem::sInstance = nullptr;

// --- Internal: reset button repeat state ---
static void ResetRepeat(u32& repeatButtons, f32& repeatTimer, f32& repeatDelay) {
    repeatButtons = 0;
    repeatTimer = 0.0f;
    repeatDelay = 0.0f;
}

// @addr 0x80621040
UIControlSystem::UIControlSystem()
    : mPlayerCount(0)
    , mFocusChainLength(0)
    , mFocusedIndex(-1)
    , mInputLocked(false)
    , mLockFlags(0)
    , mAnalogDeadZone(0.15f)
    , mAnalogSensitivity(1.0f)
    , mAssociatedPage(nullptr)
    , mRepeatButtons(0)
    , mRepeatTimer(0.0f)
    , mRepeatDelayElapsed(0.0f) {

    for (u32 i = 0; i < MAX_LOCAL_PLAYERS; i++) {
        PlayerInputState& p = mPlayerInputs[i];
        p.pressed = p.held = p.released = 0;
        p.stickX = p.stickY = 0.0f;
        p.triggerL = p.triggerR = 0.0f;
        p.isConnected = 0;
        p.source = INPUT_SOURCE_WIIMOTE;
        p._pad[0] = p._pad[1] = 0;
    }
    for (u32 i = 0; i < MAX_FOCUS_CHAIN; i++) {
        FocusEntry& e = mFocusChain[i];
        e.control = nullptr;
        e.index = e.navUp = e.navDown = e.navLeft = e.navRight = -1;
        e.enabled = 0;
        e._pad[0] = e._pad[1] = e._pad[2] = 0;
    }
    for (u32 i = 0; i < MAX_CURSORS; i++) {
        CursorState& c = mCursors[i];
        c.x = c.y = c.targetX = c.targetY = 0.5f;
        c.speed = 8.0f;
        c.visible = 0;
        c.animating = 0;
        c.playerIdx = (u8)i;
        c._pad = 0;
    }
    FocusConfig defaultCfg = { MAX_FOCUS_CHAIN, 1, 1, 0.5f, 0.4f, 8.0f };
    mFocusConfig = defaultCfg;
}

// @addr 0x80621130
UIControlSystem::~UIControlSystem() { disassociatePage(); }

// @addr 0x80621160
UIControlSystem* UIControlSystem::getInstance() { return sInstance; }

// @addr 0x80621180
void UIControlSystem::createInstance() { if (!sInstance) sInstance = new UIControlSystem(); }

// @addr 0x806211C0
void UIControlSystem::destroyInstance() { if (sInstance) { delete sInstance; sInstance = nullptr; } }

// @addr 0x80621000
void UIControlSystem::init(u32 playerCount) {
    mPlayerCount = playerCount > MAX_PLAYERS ? MAX_PLAYERS : playerCount;
    mFocusChainLength = 0;
    mFocusedIndex = -1;
    mInputLocked = false;
    mLockFlags = 0;
    ResetRepeat(mRepeatButtons, mRepeatTimer, mRepeatDelayElapsed);
    for (u32 i = 0; i < mPlayerCount; i++) {
        mPlayerInputs[i].pressed = mPlayerInputs[i].held = mPlayerInputs[i].released = 0;
    }
}

// @addr 0x806211A0
void UIControlSystem::shutdown() {
    clearFocus(); mFocusChainLength = 0; mPlayerCount = 0; mAssociatedPage = nullptr;
}

// @addr 0x80621330
void UIControlSystem::update(f32 deltaTime) {
    if (mInputLocked) {
        for (u32 i = 0; i < mPlayerCount; i++) {
            PlayerInputState& p = mPlayerInputs[i];
            p.pressed = p.released = p.held = 0;
            p.stickX = p.stickY = 0.0f;
        }
        ResetRepeat(mRepeatButtons, mRepeatTimer, mRepeatDelayElapsed);
        return;
    }

    // Update cursor animations
    for (u32 i = 0; i < mPlayerCount; i++) {
        if (mCursors[i].animating) {
            updateCursorAnimation(mCursors[i], deltaTime);
        }
    }

    // Button repeat for primary player
    if (mRepeatButtons != 0) {
        u32 mask = mRepeatButtons;
        mRepeatDelayElapsed += deltaTime;
        if (mRepeatDelayElapsed >= mFocusConfig.repeatDelay) {
            mRepeatTimer += deltaTime;
            f32 interval = 1.0f / mFocusConfig.repeatRate;
            while (mRepeatTimer >= interval) {
                mRepeatTimer -= interval;
                mPlayerInputs[0].pressed |= mask;
            }
        }
    }

    // Stick-based directional navigation
    if (mFocusedIndex >= 0 && mFocusConfig.directionalNav) {
        handleStickNavigation(mPlayerInputs[0].stickX, mPlayerInputs[0].stickY, deltaTime);
    }

    routeInputToFocus(deltaTime);
}

// @addr 0x80621500
void UIControlSystem::processInput(u32 playerMask) {
    // Derive pressed/released from held-state transitions (raw PAD read external)
    for (u32 i = 0; i < mPlayerCount; i++) {
        if (!(playerMask & (1 << i))) {
            continue;
        }
        PlayerInputState& input = mPlayerInputs[i];
        u32 prevHeld = input.held;
        input.pressed = input.held & ~prevHeld;
        input.released = prevHeld & ~input.held;
    }
}

// @addr 0x80621680
void UIControlSystem::setFocus(UIControl* control) {
    if (!control) {
        clearFocus();
        return;
    }
    for (u32 i = 0; i < mFocusChainLength; i++) {
        if (mFocusChain[i].control == control && mFocusChain[i].enabled) {
            mFocusedIndex = (s32)i;
            ResetRepeat(mRepeatButtons, mRepeatTimer, mRepeatDelayElapsed);
            return;
        }
    }
    if (mFocusChainLength == 0) {
        mFocusedIndex = -1;
    }
}

// @addr 0x806217A0
void UIControlSystem::clearFocus() {
    mFocusedIndex = -1;
    ResetRepeat(mRepeatButtons, mRepeatTimer, mRepeatDelayElapsed);
}

// @addr 0x80621880
UIControl* UIControlSystem::getFocusedControl() const {
    if (mFocusedIndex < 0 || (u32)mFocusedIndex >= mFocusChainLength) {
        return nullptr;
    }
    return mFocusChain[mFocusedIndex].control;
}

// @addr 0x80621940
void UIControlSystem::setFocusByIndex(s32 index) {
    if (index >= 0 && (u32)index < mFocusChainLength && mFocusChain[index].enabled) {
        mFocusedIndex = index;
        ResetRepeat(mRepeatButtons, mRepeatTimer, mRepeatDelayElapsed);
    }
}

s32 UIControlSystem::getFocusedIndex() const { return mFocusedIndex; }

// @addr 0x80621B00
void UIControlSystem::buildFocusChain(UIControl** controls, u32 count) {
    mFocusChainLength = 0;
    mFocusedIndex = -1;
    if (!controls || count == 0) {
        return;
    }
    u32 maxLen = count > MAX_FOCUS_CHAIN ? MAX_FOCUS_CHAIN : count;
    for (u32 i = 0; i < maxLen; i++) {
        mFocusChain[i].control = controls[i];
        mFocusChain[i].index = (s32)i;
        mFocusChain[i].navUp = (i > 0) ? (s32)(i - 1) : -1;
        mFocusChain[i].navDown = (i + 1 < maxLen) ? (s32)(i + 1) : -1;
        mFocusChain[i].navLeft = -1;
        mFocusChain[i].navRight = -1;
        mFocusChain[i].enabled = 1;
        mFocusChain[i]._pad[0] = mFocusChain[i]._pad[1] = mFocusChain[i]._pad[2] = 0;
    }
    mFocusChainLength = maxLen;
    if (maxLen > 0) {
        mFocusedIndex = 0;
    }
}

// @addr 0x80621C80
void UIControlSystem::setDirectionalNav(s32 fromIdx, s32 up, s32 down, s32 left, s32 right) {
    if (fromIdx < 0 || (u32)fromIdx >= mFocusChainLength) {
        return;
    }
    FocusEntry& e = mFocusChain[fromIdx];
    e.navUp = up;
    e.navDown = down;
    e.navLeft = left;
    e.navRight = right;
}

// @addr 0x80621DA0
void UIControlSystem::navigateFocus(s32 direction) {
    if (mFocusedIndex < 0 || (u32)mFocusedIndex >= mFocusChainLength) {
        return;
    }
    FocusEntry& cur = mFocusChain[mFocusedIndex];
    s32 target = -1;
    switch (direction) {
    case 0: target = cur.navUp; break;
    case 1: target = cur.navDown; break;
    case 2: target = cur.navLeft; break;
    case 3: target = cur.navRight; break;
    default: return;
    }

    if (target >= 0 && (u32)target < mFocusChainLength && mFocusChain[target].enabled) {
        mFocusedIndex = target;
        ResetRepeat(mRepeatButtons, mRepeatTimer, mRepeatDelayElapsed);
        return;
    }
    // Target disabled — search from it
    if (target >= 0 && (u32)target < mFocusChainLength) {
        s32 found = findNextEnabledEntry(target, direction);
        if (found >= 0) {
            mFocusedIndex = found;
            ResetRepeat(mRepeatButtons, mRepeatTimer, mRepeatDelayElapsed);
            return;
        }
    }
    // Wrap around
    if (mFocusConfig.wrapAround && mFocusChainLength > 1) {
        s32 wrapped = (direction == 1 || direction == 3) ? 0 : (s32)(mFocusChainLength - 1);
        if (mFocusChain[wrapped].enabled) {
            mFocusedIndex = wrapped;
            ResetRepeat(mRepeatButtons, mRepeatTimer, mRepeatDelayElapsed);
        }
    }
}

// @addr 0x80621F00
void UIControlSystem::nextFocus() {
    if (mFocusChainLength == 0) return;
    s32 idx = findNextEnabledEntry(mFocusedIndex, 1);
    if (idx >= 0) {
        mFocusedIndex = idx;
    } else if (mFocusConfig.wrapAround) {
        idx = findNextEnabledEntry(-1, 1);
        if (idx >= 0) {
            mFocusedIndex = idx;
        }
    }
    ResetRepeat(mRepeatButtons, mRepeatTimer, mRepeatDelayElapsed);
}

// @addr 0x80622000
void UIControlSystem::prevFocus() {
    if (mFocusChainLength == 0) return;
    s32 idx = findNextEnabledEntry(mFocusedIndex, -1);
    if (idx >= 0) {
        mFocusedIndex = idx;
    } else if (mFocusConfig.wrapAround) {
        idx = findNextEnabledEntry((s32)mFocusChainLength, -1);
        if (idx >= 0) {
            mFocusedIndex = idx;
        }
    }
    ResetRepeat(mRepeatButtons, mRepeatTimer, mRepeatDelayElapsed);
}

// @addr 0x80622100
void UIControlSystem::setCursorPosition(s32 playerIdx, f32 x, f32 y) {
    if (playerIdx < 0 || playerIdx >= (s32)MAX_CURSORS) return;
    CursorState& c = mCursors[playerIdx];
    c.x = c.targetX = x;
    c.y = c.targetY = y;
    c.animating = 0;
    clampCursor(c);
}

// @addr 0x80622220
void UIControlSystem::moveCursor(s32 playerIdx, f32 dx, f32 dy) {
    if (playerIdx < 0 || playerIdx >= (s32)MAX_CURSORS) return;
    CursorState& c = mCursors[playerIdx];
    c.x += dx;
    c.y += dy;
    c.targetX = c.x;
    c.targetY = c.y;
    c.animating = 0;
    clampCursor(c);
}

// @addr 0x80622340
void UIControlSystem::animateCursorTo(s32 playerIdx, f32 targetX, f32 targetY) {
    if (playerIdx < 0 || playerIdx >= (s32)MAX_CURSORS) return;
    CursorState& c = mCursors[playerIdx];
    c.targetX = targetX;
    c.targetY = targetY;
    c.animating = 1;
    clampCursor(c);
}

const CursorState& UIControlSystem::getCursor(s32 playerIdx) const {
    return mCursors[playerIdx >= 0 && playerIdx < (s32)MAX_CURSORS ? playerIdx : 0];
}

void UIControlSystem::setCursorVisible(s32 playerIdx, bool visible) {
    if (playerIdx < 0 || playerIdx >= (s32)MAX_CURSORS) return;
    mCursors[playerIdx].visible = visible ? 1 : 0;
}

// @addr 0x80622640
void UIControlSystem::lockInput() {
    mInputLocked = true;
    mLockFlags |= 1;
    ResetRepeat(mRepeatButtons, mRepeatTimer, mRepeatDelayElapsed);
}

// @addr 0x80622720
void UIControlSystem::unlockInput() { mLockFlags = 0; mInputLocked = false; }

// @addr 0x80622800
const PlayerInputState& UIControlSystem::getPlayerInput(s32 playerIdx) const {
    if (playerIdx < 0 || playerIdx >= (s32)mPlayerCount) {
        return mPlayerInputs[0];
    }
    return mPlayerInputs[playerIdx];
}

// @addr 0x80622880
void UIControlSystem::setStickDeadZone(f32 threshold) {
    if (threshold < 0.0f) threshold = 0.0f;
    if (threshold > 1.0f) threshold = 1.0f;
    mAnalogDeadZone = threshold;
    mFocusConfig.stickThreshold = threshold;
}

f32 UIControlSystem::getStickDeadZone() const { return mAnalogDeadZone; }

// @addr 0x80622900
void UIControlSystem::associatePage(MenuPage* page) { mAssociatedPage = page; }

// @addr 0x80622A00
void UIControlSystem::disassociatePage() { mAssociatedPage = nullptr; clearFocus(); }

void UIControlSystem::setAnalogCalibration(f32 deadZone, f32 sensitivity) {
    mAnalogDeadZone = deadZone;
    mAnalogSensitivity = sensitivity;
    mFocusConfig.stickThreshold = deadZone;
}


// @addr 0x80622B00
f32 UIControlSystem::normalizeAnalog(f32 rawValue) const {
    if (rawValue > -mAnalogDeadZone && rawValue < mAnalogDeadZone) {
        return 0.0f;
    }
    f32 sign = rawValue > 0.0f ? 1.0f : -1.0f;
    f32 normalized = (rawValue - sign * mAnalogDeadZone) / (1.0f - mAnalogDeadZone);
    return normalized * mAnalogSensitivity;
}

// @addr 0x80622C40
bool UIControlSystem::isButtonPressed(u32 state, u32 button) {
    return (state & button) != 0;
}

// @addr 0x80622D00
bool UIControlSystem::isButtonHeld(u32 state, u32 button) { return (state & button) != 0; }

bool UIControlSystem::isButtonReleased(u32 state, u32 button) { return (state & button) != 0; }

// @addr 0x80622D80
void UIControlSystem::updateCursorAnimation(CursorState& cursor, f32 deltaTime) {
    if (!cursor.animating) return;
    f32 dx = cursor.targetX - cursor.x;
    f32 dy = cursor.targetY - cursor.y;
    if (dx * dx + dy * dy < 0.0001f) {
        cursor.x = cursor.targetX;
        cursor.y = cursor.targetY;
        cursor.animating = 0;
        return;
    }
    f32 step = cursor.speed * deltaTime;
    if (step >= 1.0f) {
        cursor.x = cursor.targetX;
        cursor.y = cursor.targetY;
        cursor.animating = 0;
    } else {
        cursor.x += dx * step;
        cursor.y += dy * step;
    }
    clampCursor(cursor);
}

// @addr 0x80622E80
void UIControlSystem::routeInputToFocus(f32 deltaTime) {
    UNUSED(deltaTime);
    if (mFocusedIndex < 0 || (u32)mFocusedIndex >= mFocusChainLength) return;
    UIControl* focused = mFocusChain[mFocusedIndex].control;
    if (!focused) return;
    const PlayerInputState& input = mPlayerInputs[0];
    if (input.pressed != 0 || input.held != 0) {
        focused->processInput();
    }
}

// @addr 0x80622F60
void UIControlSystem::handleDpadRepeat(u32 pressed, f32 deltaTime) {
    UNUSED(deltaTime);
    u32 dpadMask = UIBTN_DPAD_UP | UIBTN_DPAD_DOWN | UIBTN_DPAD_LEFT | UIBTN_DPAD_RIGHT;
    u32 newDpad = pressed & dpadMask;

    if (newDpad != 0) {
        mRepeatButtons |= newDpad;
        mRepeatDelayElapsed = 0.0f;
        mRepeatTimer = 0.0f;
        return;
    }

    // Clear repeat for released dpad buttons, keep still-held ones
    u32 heldDpad = mRepeatButtons & dpadMask;
    u32 stillHeld = heldDpad & mPlayerInputs[0].held;
    mRepeatButtons = (mRepeatButtons & ~dpadMask) | stillHeld;
}

// @addr 0x80623100
void UIControlSystem::handleStickNavigation(f32 stickX, f32 stickY, f32 deltaTime) {
    UNUSED(deltaTime);
    f32 nx = normalizeAnalog(stickX);
    f32 ny = normalizeAnalog(stickY);
    f32 threshold = mFocusConfig.stickThreshold;

    if (ny > threshold) {
        navigateFocus(0);
    } else if (ny < -threshold) {
        navigateFocus(1);
    }
    if (nx < -threshold) {
        navigateFocus(2);
    } else if (nx > threshold) {
        navigateFocus(3);
    }
}

// @addr 0x80623240
s32 UIControlSystem::findNextEnabledEntry(s32 currentIndex, s32 direction) {
    s32 start = currentIndex + direction;
    s32 len = (s32)mFocusChainLength;
    if (start < 0) {
        start = mFocusConfig.wrapAround ? len - 1 : -1;
        if (start < 0) return -1;
    } else if (start >= len) {
        start = mFocusConfig.wrapAround ? 0 : -1;
        if (start < 0) return -1;
    }
    for (u32 i = 0; i < mFocusChainLength; i++) {
        s32 idx = start + direction * (s32)i;
        while (idx < 0) idx += len;
        while (idx >= len) idx -= len;
        if (idx == currentIndex) break;
        if (mFocusChain[idx].enabled) return idx;
    }
    return -1;
}

// @addr 0x806233C0
void UIControlSystem::clampCursor(CursorState& cursor) {
    if (cursor.x < 0.0f) cursor.x = 0.0f;
    if (cursor.x > 1.0f) cursor.x = 1.0f;
    if (cursor.y < 0.0f) cursor.y = 0.0f;
    if (cursor.y > 1.0f) cursor.y = 1.0f;
    if (cursor.targetX < 0.0f) cursor.targetX = 0.0f;
    if (cursor.targetX > 1.0f) cursor.targetX = 1.0f;
    if (cursor.targetY < 0.0f) cursor.targetY = 0.0f;
    if (cursor.targetY > 1.0f) cursor.targetY = 1.0f;
}

} // namespace UI