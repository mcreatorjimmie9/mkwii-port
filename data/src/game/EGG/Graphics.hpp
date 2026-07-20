// ============================================================================
// Graphics.hpp — EGG::Graphics GX rendering wrappers
// Address range: 0x80170000 - 0x80172000 (DOL)
// Corresponding ELF range: ~0x805B8E30 - 0x805C0E30
//
// Thin wrapper around GX API for rendering passes, viewport configuration,
// matrix uploads, and scissor rectangle management.
//
// GENESIS Phase 20 — EGG Framework Utility Layer
// ============================================================================
#pragma once

#include "rk_common.h"

namespace EGG {

class Graphics {
public:
    // @addr 0x80170008
    Graphics();
    // @addr 0x80170060
    ~Graphics();

    // --- Rendering pass management ---
    // @addr 0x801700A0
    static void beginDraw();
    // @addr 0x80170120
    static void endDraw();

    // --- Viewport ---
    // @addr 0x80170180
    static void setViewport(f32 x, f32 y, f32 w, f32 fNear, f32 fFar);
    // @addr 0x80170220
    static void setViewportScissor(f32 x, f32 y, f32 w, f32 h);

    // --- Matrix uploads ---
    // @addr 0x801702A0
    static void loadProjectionMtx(const f32* mtx, u8 type);
    // @addr 0x80170340
    static void loadViewMtx(const f32* mtx);
    // @addr 0x801703C0
    static void loadWorldMtx(const f32* mtx);

    // --- Scissor rectangle ---
    // @addr 0x80170440
    static void setScissor(u32 x, u32 y, u32 w, u32 h);

    // --- Render state ---
    // @addr 0x801704C0
    static void setAlphaCompare(u8 cmpFunc, u8 ref);
    // @addr 0x80170540
    static void setBlendMode(u8 srcFactor, u8 dstFactor, u8 logicOp);
    // @addr 0x801705E0
    static void setZMode(bool enable, bool func, bool update);
    // @addr 0x80170680
    static void setCullMode(u32 mode);

    // --- Drawing ---
    // @addr 0x80170700
    static void drawQuad(f32 x0, f32 y0, f32 x1, f32 y1, f32 z);
    // @addr 0x801707C0
    static void setClearColor(u32 color, u32 depth);
    // @addr 0x80170840
    static void setPixelFmt(u8 fmt, u8 zFmt);

    // --- Projection helpers ---
    // @addr 0x801708C0
    static void setOrtho(f32 top, f32 bottom, f32 left, f32 right,
                         f32 near, f32 far, f32 scale);
    // @addr 0x80170980
    static void setPerspective(f32 fovY, f32 aspect, f32 near, f32 far);

    // --- Singletons ---
    // @addr 0x80170A40
    static Graphics* create();
    static Graphics* getInstance() { return sInstance; }

    // --- State ---
    bool isActive() const { return mActive; }

private:
    bool mActive;         // 0x00
    u32 mDrawCount;       // 0x04
    u32 mPadding[2];      // 0x08-0x0F

    static Graphics* sInstance;
};

} // namespace EGG