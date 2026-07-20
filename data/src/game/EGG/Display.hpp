// ============================================================================
// Display.hpp — EGG::Display framebuffer and VI management
// Address range: 0x8016C000 - 0x8016E000 (DOL)
// Corresponding ELF range: ~0x805A8E30 - 0x805B0E30
//
// Manages Video Interface (VI) registers, framebuffer configuration,
// progressive/interlaced modes, and screen blanking.
//
// GENESIS Phase 20 — EGG Framework Utility Layer
// ============================================================================
#pragma once

#include "rk_common.h"

namespace EGG {

class Display {
public:
    // Flag bits for mFlag
    enum Flag {
        FLAG_PROGRESSIVE     = 0,
        FLAG_REGISTERED      = 1,
        FLAG_BLACKOUT        = 2,
        FLAG_WHITEOUT        = 3,
    };

    // Screen state flags
    enum ScreenStateFlag {
        SCREEN_STATE_BLACK_PENDING = 0,
    };

    Display();
    virtual ~Display();

    // --- Core lifecycle (virtual, with vtable entries) ---
    // @addr 0x8016C020
    virtual void beginFrame();
    // @addr 0x8016C0A0
    virtual void beginRender();
    // @addr 0x8016C100
    virtual void endRender();
    // @addr 0x8016C160
    virtual void endFrame();
    // @addr 0x8016C1C0
    virtual u32 getTickPerFrame();

    // --- Framebuffer management ---
    // @addr 0x8016C200
    void setFramebuffer(void* xfb);
    // @addr 0x8016C280
    void* getFramebuffer() const;
    // @addr 0x8016C2C0
    void swapBuffers();

    // --- VI configuration ---
    // @addr 0x8016C340
    void init();
    // @addr 0x8016C400
    void setVideoMode(u32 tvMode);
    // @addr 0x8016C480
    void configureVI();

    // --- Screen blanking ---
    // @addr 0x8016C500
    void setBlack(bool enable);
    // @addr 0x8016C560
    void setWhite(bool enable);

    // --- EFB copy ---
    // @addr 0x8016C5C0
    void copyEFBtoXFB();

    // --- Frequency / timing ---
    // @addr 0x8016C640
    void calcFrequency();

    // --- VRetrace callback ---
    // @addr 0x8016C6C0
    void onVRetrace();

    // --- Flag accessors ---
    bool hasFlag(u8 idx) volatile { return mFlag & (1 << idx); }
    void setFlag(u8 idx) volatile { mFlag |= (1 << idx); }
    void clearFlag(u8 idx) volatile { mFlag &= ~(1 << idx); }

    bool hasScreenStateFlag(u8 idx) volatile {
        return mScreenStateFlag & (1 << idx);
    }
    void setScreenStateFlag(u8 idx) volatile {
        mScreenStateFlag |= (1 << idx);
    }
    void clearScreenStateFlag(u8 idx) volatile {
        mScreenStateFlag &= ~(1 << idx);
    }

    // --- Accessors ---
    u32 getRetraceCount() const { return mRetraceCount; }
    u32 getFrameCount() const { return mFrameCount; }
    s32 getBeginTick() const { return mBeginTick; }
    s32 getDeltaTick() const { return mDeltaTick; }
    f32 getFrequency() const { return mFrequency; }
    u8 getMaxRetraces() const { return mMaxRetraces; }

    // --- Singletons ---
    // @addr 0x8016C740
    static Display* create();
    static Display* getInstance() { return sInstance; }

private:
    // Vtable pointer at 0x00
    u8 mFlag;                // 0x04
    u8 mPadding0[3];         // 0x05-0x07
    u8 mMaxRetraces;         // 0x08
    u8 mScreenStateFlag;     // 0x09
    u8 mPadding1[2];         // 0x0A-0x0B
    u32 mRetraceCount;       // 0x0C
    u32 mFrameCount;         // 0x10
    u32 mClearColor;         // 0x14
    u32 mClearZ;             // 0x18
    s32 mBeginTick;          // 0x1C
    s32 mDeltaTick;          // 0x20
    f32 mFrequency;          // 0x24
    void* mXfb;              // 0x28 — current framebuffer pointer

    static Display* sInstance;
};

} // namespace EGG