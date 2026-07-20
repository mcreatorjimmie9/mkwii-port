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

    // --- Extended methods ---
    // @addr 0x8016C800
    void setGamma(f32 gamma);
    // @addr 0x8016C830
    void setAntiAliasing(bool enable);
    // @addr 0x8016C860
    u16 getWidth() const;
    // @addr 0x8016C890
    u16 getHeight() const;
    // @addr 0x8016C8C0
    bool isWidescreen() const;
    // @addr 0x8016C900
    void setFramebufferEx(void* xfb, u16 width, u16 height);
    // @addr 0x8016C940
    u32 getVideoMode() const;
    // @addr 0x8016C980
    void waitRetrace();
    // @addr 0x8016C9B0
    void setMaxRetraces(u8 count);
    // @addr 0x8016C9E0
    f32 getDeltaTime() const;
    // @addr 0x8016CA10
    void setClearColor(u32 color);
    // @addr 0x8016CA40
    void setClearZ(u32 depth);
    // @addr 0x8016CA70
    bool isProgressive() const;
    // @addr 0x8016CAA0
    void setInterlaced(bool enable);
    // @addr 0x8016CAD0
    u32 getFramebufferFormat() const;
    // @addr 0x8016CB00
    bool isBlackedOut() const;
    // @addr 0x8016CB30
    void registerRetraceCallback();
    // @addr 0x8016CB70
    void unregisterRetraceCallback();
    // @addr 0x8016CBA0
    void shutdown();
    // @addr 0x8016CBD0
    bool isInitialized() const;
    // @addr 0x8016CC00
    u32 getCurrentRetrace() const;

    // --- VRetrace callback ---
    // @addr 0x8016C6C0
    void onVRetrace();

    // --- Flag accessors ---
    bool hasFlag(u8 idx) const { return mFlag & (1 << idx); }
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

// @addr 0x8016CC30
void Display_setResolution(u16 width, u16 height, bool progressive);

// @addr 0x8016CC60
f32 Display_getAspectRatio();
// @addr 0x8016CC90
u32 Display_getFieldsPerFrame();
// @addr 0x8016CCC0
bool Display_isPAL();
// @addr 0x8016CCF0
u32 Display_getXfbSize(u16 width, u16 height, bool isProgressive);
// @addr 0x8016CD20
f32 Display_getRefreshRate();
// @addr 0x8016CD60
bool Display_isTVModeSupported(u32 tvMode);
// @addr 0x8016CD90
void Display_setBorderColor(u8 r, u8 g, u8 b);
// @addr 0x8016CDC0
u16 Display_getFramebufferPitch();
// @addr 0x8016CDF0
void Display_setFlickerFilter(bool enable);
// @addr 0x8016CE20
void Display_getSafeArea(f32& left, f32& top, f32& right, f32& bottom);
// @addr 0x8016CE60
void Display_screenToNDC(f32 screenX, f32 screenY, f32& ndcX, f32& ndcY);
// @addr 0x8016CE90
void Display_ndcToScreen(f32 ndcX, f32 ndcY, f32& screenX, f32& screenY);
// @addr 0x8016CEC0
u16 Display_getLetterboxHeight();
// @addr 0x8016CF00
bool Display_isDoubleBuffered();
// @addr 0x8016CF30
u32 Display_getCurrentField();
// @addr 0x8016CF60
void Display_configureRenderMode();
// @addr 0x8016CF90
void Display_setVerticalScale(f32 scale);
// @addr 0x8016CFC0
void Display_setBorderEnable(bool enable);
// @addr 0x8016CFF0
f32 Display_getPixelAspectRatio();
// @addr 0x8016D020
void Display_suspend();
// @addr 0x8016D050
void Display_resume();
// @addr 0x8016D080
u32 Display_getColorDepth();
// @addr 0x8016D0C0
void Display_copyEFBRegion(u16 x, u16 y, u16 width, u16 height, bool clear);
// @addr 0x8016D0F0
void Display_setGammaTable(const u8* rLUT, const u8* gLUT, const u8* bLUT, u32 size);
// @addr 0x8016D120
void Display_resetGamma();
// @addr 0x8016D150
u32 Display_getCurrentBufferIndex();
// @addr 0x8016D180
u32 Display_measureFrameTime();