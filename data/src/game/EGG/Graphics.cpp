// ============================================================================
// Graphics.cpp — EGG::Graphics GX rendering wrappers
// Address range: 0x80170000 - 0x80172000 (DOL)
// Function count: 66
//
// GENESIS Phase 20 — EGG Framework Utility Layer
// ============================================================================

#include "Graphics.hpp"
#include <cstring>

namespace EGG {

Graphics* Graphics::sInstance = nullptr;

// @addr 0x80170008
Graphics::Graphics()
    : mActive(false)
    , mDrawCount(0)
    , mFrameBuffer(nullptr)
    , mWidth(640)
    , mHeight(480)
    , mClearColorR(0)
    , mClearColorG(0)
    , mClearColorB(0)
    , mClearColorA(0xFF) {
    mPadding[0] = 0;
    mPadding[1] = 0;
}

// @addr 0x80170060
Graphics::~Graphics() {
    mActive = false;
}

// @addr 0x801700A0 — Begin a GX rendering pass
void Graphics::beginDraw() {
    // GXSetViewport, GXSetScissor, GXSetGenMode in real SDK
    if (sInstance != nullptr) {
        sInstance->mActive = true;
        sInstance->mDrawCount++;
    }
}

// @addr 0x80170120 — End a GX rendering pass
void Graphics::endDraw() {
    // GXDrawDone in real SDK — wait for GP completion
    if (sInstance != nullptr) {
        sInstance->mActive = false;
    }
}

// @addr 0x80170180 — Set GX viewport
void Graphics::setViewport(f32 x, f32 y, f32 w, f32 fNear, f32 fFar) {
    (void)x; (void)y; (void)w; (void)fNear; (void)fFar;
    // GXSetViewport(x, y, w, near, far) in real SDK
}

// @addr 0x80170220 — Set viewport and scissor to same rect
void Graphics::setViewportScissor(f32 x, f32 y, f32 w, f32 h) {
    (void)x; (void)y; (void)w; (void)h;
    // GXSetViewport + GXSetScissor in real SDK
}

// @addr 0x801702A0 — Upload projection matrix to GX
void Graphics::loadProjectionMtx(const f32* mtx, u8 type) {
    (void)mtx; (void)type;
    // GXLoadProjectionMtx(mtx, type) in real SDK
}

// @addr 0x80170340 — Upload view (camera) matrix to GX
void Graphics::loadViewMtx(const f32* mtx) {
    (void)mtx;
    // GXLoadPosMtxImm or GXLoadNrmMtxImm in real SDK
}

// @addr 0x801703C0 — Upload world (model) matrix to GX
void Graphics::loadWorldMtx(const f32* mtx) {
    (void)mtx;
    // GXLoadPosMtxImm in real SDK
}

// @addr 0x80170440 — Set scissor rectangle
void Graphics::setScissor(u32 x, u32 y, u32 w, u32 h) {
    (void)x; (void)y; (void)w; (void)h;
    // GXSetScissor(x, y, w, h) in real SDK
}

// @addr 0x801704C0 — Configure alpha comparison
void Graphics::setAlphaCompare(u8 cmpFunc, u8 ref) {
    (void)cmpFunc; (void)ref;
    // GXSetAlphaCompare in real SDK
}

// @addr 0x80170540 — Configure blend mode
void Graphics::setBlendMode(u8 srcFactor, u8 dstFactor, u8 logicOp) {
    (void)srcFactor; (void)dstFactor; (void)logicOp;
    // GXSetBlendMode in real SDK
}

// @addr 0x801705E0 — Configure Z buffer mode
void Graphics::setZMode(bool enable, bool func, bool update) {
    (void)enable; (void)func; (void)update;
    // GXSetZMode in real SDK
}

// @addr 0x80170680 — Set face culling mode
void Graphics::setCullMode(u32 mode) {
    (void)mode;
    // GXCullMode in real SDK
}

// @addr 0x80170700 — Draw a 2D quad at given Z
void Graphics::drawQuad(f32 x0, f32 y0, f32 x1, f32 y1, f32 z) {
    (void)x0; (void)y0; (void)x1; (void)y1; (void)z;
    // GXBegin(GX_QUADS, ...) in real SDK
}

// @addr 0x801707C0 — Set clear color and depth
void Graphics::setClearColor(u32 color, u32 depth) {
    (void)color; (void)depth;
    // GXSetCopyClear in real SDK
}

// @addr 0x80170840 — Set pixel format for EFB
void Graphics::setPixelFmt(u8 fmt, u8 zFmt) {
    (void)fmt; (void)zFmt;
    // GXSetPixelFmt in real SDK
}

// @addr 0x801708C0 — Set orthographic projection matrix
void Graphics::setOrtho(f32 top, f32 bottom, f32 left, f32 right,
                        f32 near, f32 far, f32 scale) {
    (void)top; (void)bottom; (void)left; (void)right;
    (void)near; (void)far; (void)scale;
    // CMLink compatible ortho matrix setup in real SDK
}

// @addr 0x80170980 — Set perspective projection matrix
void Graphics::setPerspective(f32 fovY, f32 aspect, f32 near, f32 far) {
    (void)fovY; (void)aspect; (void)near; (void)far;
    // MTXPerspective in real SDK
}

// @addr 0x80170A40 — Create graphics singleton
Graphics* Graphics::create() {
    if (sInstance == nullptr) {
        sInstance = new Graphics();
    }
    return sInstance;
}

// --- Instance methods ---

// Initialize the GX subsystem
void Graphics::init() {
    // In real SDK: GXInit, GXSetViewportJitter, GXSetDispSize
    // Set default VI (Video Interface) configuration for 480p
    mWidth = 640;
    mHeight = 480;
    mClearColorR = 0;
    mClearColorG = 0;
    mClearColorB = 0;
    mClearColorA = 0xFF;
    mDrawCount = 0;
}

// Begin a new frame: set up frame buffer and clear
void Graphics::beginFrame() {
    if (sInstance != nullptr) {
        sInstance->mActive = true;
        sInstance->mDrawCount++;

        // In real SDK:
        // GXSetCopyClear(clearColor, clearDepth)
        // GXCopyDisp(mFrameBuffer, GX_TRUE)
        // VIFlush()
    }
}

// End a frame: swap buffers and wait for vsync
void Graphics::endFrame() {
    if (sInstance != nullptr) {
        // In real SDK:
        // GXDrawDone()  — wait for GP to finish
        // GXCopyDisp(mFrameBuffer, GX_TRUE)
        // VIFlush()
        // VIWaitForRetrace()  — vsync
        sInstance->mActive = false;
    }
}

// Set viewport rectangle (integer version)
void Graphics::setViewport(s32 x, s32 y, s32 w, s32 h) {
    if (sInstance != nullptr) {
        sInstance->mWidth = w > 0 ? w : 1;
        sInstance->mHeight = h > 0 ? h : 1;
    }
    // In real SDK: GXSetViewport((f32)x, (f32)y, (f32)w, (f32)h, 0.0f, 1.0f)
    (void)x; (void)y;
}

// Set scissor rectangle
void Graphics::setScissorRect(s32 x, s32 y, s32 w, s32 h) {
    (void)x; (void)y; (void)w; (void)h;
    // In real SDK: GXSetScissor((u32)x, (u32)y, (u32)w, (u32)h)
}

// Set clear color as separate RGBA components
void Graphics::setClearColorRGBA(u8 r, u8 g, u8 b, u8 a) {
    if (sInstance != nullptr) {
        sInstance->mClearColorR = r;
        sInstance->mClearColorG = g;
        sInstance->mClearColorB = b;
        sInstance->mClearColorA = a;
    }
    // In real SDK: GXSetCopyClear((GXColor){r, g, b, a}, GX_MAX_Z24)
}

// Set face culling mode (typed enum version)
void Graphics::setCullModeEnum(CullMode mode) {
    if (sInstance != nullptr) {
        // In real SDK: GXCullMode(GXCullMode mode)
        (void)mode;
    }
}

// Configure depth testing
void Graphics::setDepthTest(bool enable, CompareFunc func) {
    // In real SDK: GXSetZMode(enable, GXCompare func, GX_TRUE)
    (void)enable; (void)func;
}

// Set blend mode (typed enum version)
void Graphics::setBlendModeEnum(BlendMode mode) {
    // In real SDK: GXSetBlendMode(GX_BM_BLEND, src, dst, GX_LO_NOOP)
    switch (mode) {
    case BLEND_ALPHA:
        // GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_NOOP)
        break;
    case BLEND_ADD:
        // GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_ONE, GX_LO_NOOP)
        break;
    case BLEND_SUB:
        // GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_SUB)
        break;
    case BLEND_MUL:
        // GXSetBlendMode(GX_BM_BLEND, GX_BL_DSTCOLOR, GX_BL_ZERO, GX_LO_NOOP)
        break;
    case BLEND_NONE:
    default:
        // GXSetBlendMode(GX_BM_NONE, GX_BL_ONE, GX_BL_ZERO, GX_LO_NOOP)
        break;
    }
}

// Enable/disable Z buffer writes
void Graphics::setZBuffer(bool enable) {
    // In real SDK: GXSetZMode(enable, GX_LEQUAL, enable)
    (void)enable;
}

// Get the current frame buffer pointer
void* Graphics::getFrameBuffer() const {
    return mFrameBuffer;
}

// Get current viewport width
s32 Graphics::getWidth() const {
    return mWidth;
}

// Get current viewport height
s32 Graphics::getHeight() const {
    return mHeight;
}

// Save current render state to a stack (GX has 2 stacks)
void Graphics::saveState() {
    // In real SDK: GXSetGPMetric(0) + GXSetClipMode
    // Push current viewport, scissor, blend, Z mode
}

// Restore previously saved render state
void Graphics::restoreState() {
    // In real SDK: Pop viewport, scissor, blend, Z mode
}

// Invalidate the vertex cache
void Graphics::invalidateVertexCache() {
    // In real SDK: GXInvalidateVtxCache()
}

// Flush the texture cache
void Graphics::flushTextureCache() {
    // In real SDK: GXFlushTexCache() or DCFlushRange on textures
}

// Wait for all GPU commands to complete
void Graphics::waitGpuDone() {
    // In real SDK: GXDrawDone() + GXPeekAR
}

// ============================================================================
// Stub functions — remaining addresses in 0x80170A80 - 0x80172000
// ============================================================================

// @addr 0x80170A80
s32 fn_80170A80(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x80170AB0
u32 fn_80170AB0(u32* p) { (void)p; return 0; }
// @addr 0x80170AE0
void fn_80170AE0(void) {}
// @addr 0x80170B10
s32 fn_80170B10(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x80170B50
s32 fn_80170B50(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x80170B90
u32 fn_80170B90(s32 a, u32 b) { (void)a; (void)b; return 0; }
// @addr 0x80170BD0
void fn_80170BD0(s32 a) { (void)a; }
// @addr 0x80170C00
void fn_80170C00(u32 a) { (void)a; }
// @addr 0x80170C30
void fn_80170C30(s32 a) { (void)a; }
// @addr 0x80170C60
void fn_80170C60(u32 a) { (void)a; }
// @addr 0x80170C90
void fn_80170C90(s32 a) { (void)a; }
// @addr 0x80170CC0
void fn_80170CC0(s32 a, u32 b) { (void)a; (void)b; }
// @addr 0x80170D00
s32 fn_80170D00(s32 a, u32 b) { (void)a; (void)b; return 0; }
// @addr 0x80170D40
u32 fn_80170D40(u32 a, u32 b) { (void)a; (void)b; return 0; }
// @addr 0x80170D80
void fn_80170D80(void) {}
// @addr 0x80170DB0
void fn_80170DB0(u32 a, u32 b, u32 c) { (void)a; (void)b; (void)c; }
// @addr 0x80170DF0
s32 fn_80170DF0(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x80170E30
void fn_80170E30(s32 a, s32 b) { (void)a; (void)b; }
// @addr 0x80170E70
s32 fn_80170E70(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x80170EB0
s32 fn_80170EB0(s32 a) { (void)a; return 0; }
// @addr 0x80170EE0
void fn_80170EE0(void) {}
// @addr 0x80170F10
void fn_80170F10(s32 a) { (void)a; }
// @addr 0x80170F40
u32 fn_80170F40(u32 a) { (void)a; return 0; }
// @addr 0x80170F70
void fn_80170F70(s32 a) { (void)a; }
// @addr 0x80170FA0
void fn_80170FA0(u32 a) { (void)a; }
// @addr 0x80170FD0
s32 fn_80170FD0(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x80171010
u32 fn_80171010(s32 a) { (void)a; return 0; }
// @addr 0x80171040
void fn_80171040(s32 a, u32 b) { (void)a; (void)b; }
// @addr 0x80171080
void fn_80171080(s32 a) { (void)a; }
// @addr 0x801710B0
void fn_801710B0(void) {}
// @addr 0x801710E0
s32 fn_801710E0(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x80171120
void fn_80171120(s32 a, u32 b) { (void)a; (void)b; }
// @addr 0x80171160
void fn_80171160(s32 a, s32 b) { (void)a; (void)b; }
// @addr 0x801711A0
u32 fn_801711A0(u32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x801711E0
void fn_801711E0(s32 a) { (void)a; }
// @addr 0x80171210
u32 fn_80171210(s32 a) { (void)a; return 0; }
// @addr 0x80171240
void fn_80171240(u32* p, u32 a) { (void)p; (void)a; }
// @addr 0x80171270
void fn_80171270(s32 a, u32* p) { (void)a; (void)p; }
// @addr 0x801712A0
void fn_801712A0(u32 a) { (void)a; }
// @addr 0x801712D0
s32 fn_801712D0(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x80171310
void fn_80171310(void) {}
// @addr 0x80171340
void fn_80171340(s32 a) { (void)a; }
// @addr 0x80171370
s32 fn_80171370(s32 a, s32 b) { (void)a; (void)b; return 0; }
// @addr 0x801713B0
u32 fn_801713B0(u32* p) { (void)p; return 0; }
// @addr 0x801713E0
void fn_801713E0(s32 a) { (void)a; }
// @addr 0x80171410
void fn_80171410(s32 a, u32 b) { (void)a; (void)b; }
// @addr 0x80171450
void fn_80171450(s32 a, s32 b) { (void)a; (void)b; }
// @addr 0x80171490
u32 fn_80171490(u32 a, u32 b) { (void)a; (void)b; return 0; }
// @addr 0x801714D0
void fn_801714D0(s32 a) { (void)a; }
// @addr 0x80171500
void fn_80171500(u32 a) { (void)a; }
// @addr 0x80171530
s32 fn_80171530(s32 a, u32 b) { (void)a; (void)b; return 0; }
// @addr 0x80171570
void fn_80171570(s32 a, s32 b) { (void)a; (void)b; }
// @addr 0x801715A0
void fn_801715A0(u32 a) { (void)a; }
// @addr 0x801715D0
u32 fn_801715D0(s32 a) { (void)a; return 0; }
// @addr 0x80171600
void fn_80171600(u32 a, u32 b) { (void)a; (void)b; }
// @addr 0x80171640
s32 fn_80171640(s32 a) { (void)a; return 0; }

} // namespace EGG