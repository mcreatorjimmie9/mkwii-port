// ============================================================================
// FrameTimer.hpp — EGG::FrameTimer + EGG::XfbManager
// Address range: 0x80174000 - 0x80176000 (DOL)
// Corresponding ELF range: ~0x805C8E30 - 0x805D0E30
//
// FrameTimer: VSync-accurate frame timing, FPS counter, delta time.
// XfbManager: External framebuffer allocation, copy/swap logic, VI registers.
//
// GENESIS Phase 20 — EGG Framework Utility Layer
// ============================================================================
#pragma once

#include "rk_common.h"

namespace EGG {

// ============================================================================
// FrameTimer — VSync-accurate timing for the main loop
// ============================================================================
class FrameTimer {
public:
    // @addr 0x80174008
    FrameTimer();
    // @addr 0x80174060
    ~FrameTimer();

    // @addr 0x801740A0
    void init(u32 refreshRate);
    // @addr 0x80174120
    void beginFrame();
    // @addr 0x801741A0
    void endFrame();
    // @addr 0x80174220
    f32 getDeltaTime() const;
    // @addr 0x80174280
    f32 getFrameRate() const;
    // @addr 0x80174300
    u32 getFrameCount() const;
    // @addr 0x80174360
    f32 getFps() const;
    // @addr 0x801743C0
    void resetFpsCounter();

    // @addr 0x80174420
    void setVSync(bool enable);
    // @addr 0x80174480
    bool waitVSync();

    // Internal timer state
    s32 getStartTick() const { return mStartTick; }
    s32 getEndTick() const { return mEndTick; }

private:
    s32 mStartTick;        // 0x00 — tick at frame start
    s32 mEndTick;          // 0x04 — tick at frame end
    f32 mDeltaTime;        // 0x08 — seconds since last frame
    f32 mFrameRate;        // 0x0C — target refresh rate (Hz)
    u32 mFrameCount;       // 0x10 — total frames rendered
    u32 mFpsFrameCount;    // 0x14 — frames since last FPS update
    s32 mFpsStartTick;     // 0x18 — tick at last FPS update
    f32 mCurrentFps;       // 0x1C — current measured FPS
    u32 mVSyncInterval;    // 0x20 — ticks between VSyncs
    bool mVSyncEnabled;    // 0x24
    u32 mPadding;          // 0x28
};

// ============================================================================
// XfbManager — External framebuffer pool management
//
// Manages a pool of XFB buffers for double/triple buffering.
// Uses void* for Xfb nodes to avoid requiring the Xfb class header.
// Each Xfb node has prev/next pointers at known offsets.
// ============================================================================
class XfbManager {
public:
    // @addr 0x80174500
    XfbManager();
    // @addr 0x80174560
    ~XfbManager();

    // @addr 0x801745C0
    bool attach(void* xfb);
    // @addr 0x80174640
    void copyEFB(bool clear);
    // @addr 0x80174700
    void setNextFrameBuffer();
    // @addr 0x80174780
    void postVRetrace();

    // @addr 0x80174800
    bool isReadyToCopy() const;
    // @addr 0x80174860
    void* getCurrentXfb() const;

    // Linked list accessors
    void* getListHead() const { return mListHead; }
    void* getListTail() const { return mListTail; }
    void* getCopiedXfb() const { return mCopiedXfb; }
    void* getShowXfb() const { return mShowXfb; }

private:
    // Xfb node layout: prev at +0x10, next at +0x14 (see eggXfb.hpp)
    static void** xfbPrev(void* xfb) { return (void**)((u8*)xfb + 0x10); }
    static void** xfbNext(void* xfb) { return (void**)((u8*)xfb + 0x14); }

    void* mListHead;        // 0x00 — head of XFB linked list
    void* mListTail;        // 0x04 — tail (next to write to)
    void* mCopiedXfb;       // 0x08 — last XFB that was copied to
    void* mShowXfb;         // 0x0C — XFB currently displayed by VI
};

} // namespace EGG