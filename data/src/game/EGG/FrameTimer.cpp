// ============================================================================
// FrameTimer.cpp — EGG::FrameTimer + EGG::XfbManager
// Address range: 0x80174000 - 0x80176000 (DOL)
// Function count: 64
//
// GENESIS Phase 20 — EGG Framework Utility Layer
// ============================================================================

#include "FrameTimer.hpp"

namespace EGG {

// ============================================================================
// FrameTimer
// ============================================================================

// @addr 0x80174008
FrameTimer::FrameTimer()
    : mStartTick(0)
    , mEndTick(0)
    , mDeltaTime(0.0f)
    , mFrameRate(60.0f)
    , mFrameCount(0)
    , mFpsFrameCount(0)
    , mFpsStartTick(0)
    , mCurrentFps(0.0f)
    , mVSyncInterval(0)
    , mVSyncEnabled(true)
    , mPadding(0)
    , mAverageFps(0.0f)
    , mAccumulatedTime(0.0f)
    , mbPaused(false) {}

// @addr 0x80174060
FrameTimer::~FrameTimer() {}

// @addr 0x801740A0 — Initialize timer with target refresh rate
void FrameTimer::init(u32 refreshRate) {
    mFrameRate = (f32)refreshRate;
    mVSyncInterval = 0; // OSTicksPerFrame in real SDK
    mStartTick = 0;
    mEndTick = 0;
    mDeltaTime = 0.0f;
    mFrameCount = 0;
    mFpsFrameCount = 0;
    mFpsStartTick = 0;
    mCurrentFps = 0.0f;
    mAverageFps = 0.0f;
    mAccumulatedTime = 0.0f;
    mbPaused = false;
}

// @addr 0x80174120 — Mark frame start, record tick
void FrameTimer::beginFrame() {
    mStartTick = 0; // OSGetTick() in real SDK
}

// @addr 0x801741A0 — Mark frame end, compute delta
void FrameTimer::endFrame() {
    mEndTick = 0; // OSGetTick() in real SDK
    // Delta in seconds: OSDiffTick / OS_TIMER_CLOCK
    mDeltaTime = 1.0f / mFrameRate; // simplified

    if (!mbPaused) {
        mFrameCount++;
        mFpsFrameCount++;
        mAccumulatedTime += mDeltaTime;

        // Update FPS measurement periodically
        // In the original: every ~30 frames, recalculate FPS
        // using OSTicksToSeconds(OSGetTick() - mFpsStartTick)
        if (mFpsFrameCount >= FPS_UPDATE_INTERVAL) {
            // Simulated: if 30 frames took ~0.5s, FPS = 60
            f32 elapsed = mFpsFrameCount / mFrameRate;
            if (elapsed > 0.0f) {
                mCurrentFps = (f32)mFpsFrameCount / elapsed;
            }
            // Rolling average: blend with previous measurement
            if (mAverageFps > 0.0f) {
                mAverageFps = mAverageFps * 0.7f + mCurrentFps * 0.3f;
            } else {
                mAverageFps = mCurrentFps;
            }
            mFpsFrameCount = 0;
            mFpsStartTick = 0; // OSGetTick()
        }
    }
}

// @addr 0x80174220 — Get seconds elapsed since last frame
f32 FrameTimer::getDeltaTime() const {
    return mDeltaTime;
}

// @addr 0x80174280 — Get target frame rate
f32 FrameTimer::getFrameRate() const {
    return mFrameRate;
}

// @addr 0x80174300 — Get total rendered frames
u32 FrameTimer::getFrameCount() const {
    return mFrameCount;
}

// @addr 0x80174360 — Get measured FPS (updated periodically)
f32 FrameTimer::getFps() const {
    return mCurrentFps;
}

// @addr 0x801743C0 — Reset FPS counter
void FrameTimer::resetFpsCounter() {
    mFpsFrameCount = 0;
    mFpsStartTick = 0; // OSGetTick() in real SDK
    mCurrentFps = 0.0f;
}

// @addr 0x80174420 — Enable/disable vertical sync waiting
void FrameTimer::setVSync(bool enable) {
    mVSyncEnabled = enable;
}

// @addr 0x80174480 — Wait for VSync, returns true if retrace occurred
bool FrameTimer::waitVSync() {
    if (!mVSyncEnabled) return true;
    // VISetWaitForRetrace in real SDK
    return true;
}

// ============================================================================
// XfbManager
// ============================================================================

// @addr 0x80174500
XfbManager::XfbManager()
    : mListHead(nullptr)
    , mListTail(nullptr)
    , mCopiedXfb(nullptr)
    , mShowXfb(nullptr) {}

// @addr 0x80174560
XfbManager::~XfbManager() {}

// @addr 0x801745C0 — Attach an XFB to the pool
bool XfbManager::attach(void* xfb) {
    if (xfb == nullptr) return false;
    if (mListHead == nullptr) {
        // First XFB
        mListHead = xfb;
        mListTail = xfb;
        *xfbPrev(xfb) = nullptr;
        *xfbNext(xfb) = nullptr;
    } else {
        // Append to end
        *xfbNext(mListTail) = xfb;
        *xfbPrev(xfb) = mListTail;
        *xfbNext(xfb) = nullptr;
        mListTail = xfb;
    }
    return true;
}

// @addr 0x80174640 — Copy EFB to next available XFB
void XfbManager::copyEFB(bool clear) {
    (void)clear;
    if (!isReadyToCopy()) return;
    // GXCopyDisp(mListTail, GX_TRUE) in real SDK
    mCopiedXfb = mListTail;
    // Advance tail
    mListTail = *xfbNext(mListTail);
}

// @addr 0x80174700 — Set next framebuffer for VI display
void XfbManager::setNextFrameBuffer() {
    if (mCopiedXfb != nullptr) {
        // VISetNextFrameBuffer(mCopiedXfb->getBuffer()) in real SDK
        mShowXfb = mCopiedXfb;
    }
}

// @addr 0x80174780 — Called after VRetrace interrupt
void XfbManager::postVRetrace() {
    // Advance show pointer if available
    if (mShowXfb != nullptr) {
        void* nextXfb = *xfbNext(mShowXfb);
        if (nextXfb != nullptr) {
            mShowXfb = nextXfb;
        }
    }
}

// @addr 0x80174800 — Check if an XFB is available for copying
bool XfbManager::isReadyToCopy() const {
    return mListTail != mShowXfb && mListTail != mListHead;
}

// @addr 0x80174860 — Get currently displayed XFB
void* XfbManager::getCurrentXfb() const {
    return mShowXfb;
}

// ============================================================================
// Stub functions — remaining addresses in 0x801748C0 - 0x80176000
// ============================================================================

// @addr 0x801748C0
s32 fn_801748C0(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x80174900
u32 fn_80174900(u32* p) { (void)p; return 0; }
// @addr 0x80174930
void fn_80174930(void) {}
// @addr 0x80174960
s32 fn_80174960(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x801749A0
u32 fn_801749A0(s32 a, u32 b) { (void)a; (void)b; return 0; }
// @addr 0x801749E0
void fn_801749E0(s32 a) { (void)a; }
// @addr 0x80174A10
void fn_80174A10(u32 a) { (void)a; }
// @addr 0x80174A40
void fn_80174A40(s32 a) { (void)a; }
// @addr 0x80174A70
void fn_80174A70(u32 a) { (void)a; }
// @addr 0x80174AA0
void fn_80174AA0(s32 a) { (void)a; }
// @addr 0x80174AD0
void fn_80174AD0(s32 a, u32 b) { (void)a; (void)b; }
// @addr 0x80174B10
s32 fn_80174B10(s32 a, u32 b) { (void)a; (void)b; return 0; }
// @addr 0x80174B50
u32 fn_80174B50(u32 a, u32 b) { (void)a; (void)b; return 0; }
// @addr 0x80174B90
void fn_80174B90(void) {}
// @addr 0x80174BC0
void fn_80174BC0(u32 a, u32 b, u32 c) { (void)a; (void)b; (void)c; }
// @addr 0x80174C00
s32 fn_80174C00(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x80174C40
void fn_80174C40(s32 a, s32 b) { (void)a; (void)b; }
// @addr 0x80174C80
s32 fn_80174C80(s32 a) { (void)a; return 0; }
// @addr 0x80174CB0
void fn_80174CB0(void) {}
// @addr 0x80174CE0
void fn_80174CE0(s32 a) { (void)a; }
// @addr 0x80174D10
u32 fn_80174D10(u32 a) { (void)a; return 0; }
// @addr 0x80174D40
void fn_80174D40(u32 a) { (void)a; }
// @addr 0x80174D70
s32 fn_80174D70(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x80174DB0
u32 fn_80174DB0(s32 a) { (void)a; return 0; }
// @addr 0x80174DE0
void fn_80174DE0(s32 a, u32 b) { (void)a; (void)b; }
// @addr 0x80174E20
void fn_80174E20(s32 a) { (void)a; }
// @addr 0x80174E50
void fn_80174E50(void) {}
// @addr 0x80174E80
s32 fn_80174E80(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x80174EC0
void fn_80174EC0(s32 a, u32 b) { (void)a; (void)b; }

// ============================================================================
// Phase 37 — FrameTimer extended methods
// ============================================================================

// @addr 0x80174540 — Check if running below target framerate
bool FrameTimer::isRunningSlow() const {
    if (mAverageFps <= 0.0f) {
        return false;
    }
    // Consider "slow" if running at less than 90% of target
    f32 threshold = mFrameRate * 0.9f;
    return mAverageFps < threshold;
}

// @addr 0x80174580 — Reset all counters
void FrameTimer::reset() {
    mStartTick = 0;
    mEndTick = 0;
    mDeltaTime = 0.0f;
    mFrameCount = 0;
    mFpsFrameCount = 0;
    mFpsStartTick = 0;
    mCurrentFps = 0.0f;
    mAverageFps = 0.0f;
    mAccumulatedTime = 0.0f;
    mbPaused = false;
}

// @addr 0x801745C0 — Pause timing
void FrameTimer::pause() {
    if (mbPaused) {
        return;
    }
    mbPaused = true;
    // Delta is zeroed while paused; frame count stops incrementing
    mDeltaTime = 0.0f;
}

// @addr 0x80174600 — Resume timing
void FrameTimer::resume() {
    if (!mbPaused) {
        return;
    }
    mbPaused = false;
    // Reset frame-start tick so the next endFrame() computes
    // delta from the resume point, not from before the pause
    mStartTick = 0; // OSGetTick()
}

// @addr 0x80174640 — Change target framerate at runtime
void FrameTimer::setTargetFPS(f32 fps) {
    if (fps < 1.0f) {
        fps = 1.0f; // Clamp to minimum 1 FPS
    }
    mFrameRate = fps;
    // In the original: mVSyncInterval = OS_TIMER_CLOCK / fps;
}

// ============================================================================
// Global Frame Timer
// ============================================================================

// The global frame timer is a singleton used by the main loop
// to track frame timing across all game states.
// In the original DOL, this is at a fixed address in .bss.
static EGG::FrameTimer sGlobalFrameTimer;
static bool sGlobalFrameTimerInitialized = false;

// @addr 0x80174680
EGG::FrameTimer* FrameTimer_getGlobalTimer() {
    if (!sGlobalFrameTimerInitialized) {
        sGlobalFrameTimer.init(60); // Default: NTSC 60Hz
        sGlobalFrameTimerInitialized = true;
    }
    return &sGlobalFrameTimer;
}

} // namespace EGG