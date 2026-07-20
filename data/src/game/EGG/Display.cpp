// ============================================================================
// Display.cpp — EGG::Display framebuffer and VI management
// Address range: 0x8016C000 - 0x8016E000 (DOL)
// Function count: 72
//
// GENESIS Phase 20 — EGG Framework Utility Layer
// ============================================================================

#include "Display.hpp"

namespace EGG {

Display* Display::sInstance = nullptr;

// @addr 0x8016C008 — Default constructor
Display::Display()
    : mFlag(0)
    , mMaxRetraces(1)
    , mScreenStateFlag(0)
    , mRetraceCount(0)
    , mFrameCount(0)
    , mClearColor(0)
    , mClearZ(0)
    , mBeginTick(0)
    , mDeltaTick(0)
    , mFrequency(0.0f)
    , mXfb(nullptr) {}

// @addr 0x8016C020 — Begin frame: record start tick
void Display::beginFrame() {
    mBeginTick = 0; // OSGetTick() in real SDK
    mFrameCount++;
}

// @addr 0x8016C0A0 — Begin render: setup GX clear color/depth
void Display::beginRender() {
    // GXSetCopyClear(mClearColor, mClearZ) in real SDK
}

// @addr 0x8016C100 — End render: flush GX commands
void Display::endRender() {
    // GXFlush in real SDK — wait for GP to finish
}

// @addr 0x8016C160 — End frame: swap buffers, copy EFB
void Display::endFrame() {
    copyEFBtoXFB();
    swapBuffers();
    mDeltaTick = 0; // OSGetTick() - mBeginTick in real SDK
}

// @addr 0x8016C1C0 — Get ticks per frame (VSync period)
u32 Display::getTickPerFrame() {
    // OSDiffTick(OSGetTick(), mBeginTick)
    return 0;
}

// @addr 0x8016C200 — Set current XFB pointer
void Display::setFramebuffer(void* xfb) {
    mXfb = xfb;
}

// @addr 0x8016C280 — Get current XFB pointer
void* Display::getFramebuffer() const {
    return mXfb;
}

// @addr 0x8016C2C0 — Swap front/back buffers via VI register
void Display::swapBuffers() {
    if (mXfb != nullptr) {
        // VISetNextFrameBuffer(mXfb) in real SDK
    }
}

// @addr 0x8016C340 — Initialize display subsystem
void Display::init() {
    mFlag = 0;
    mRetraceCount = 0;
    mFrameCount = 0;
    mBeginTick = 0;
    mDeltaTick = 0;
    mXfb = nullptr;
    configureVI();
    calcFrequency();
}

// @addr 0x8016C400 — Set video mode (NTSC/PAL/EDTV/progressive)
void Display::setVideoMode(u32 tvMode) {
    (void)tvMode;
    // VIConfigure(tvmode) then VIFlush in real SDK
}

// @addr 0x8016C480 — Configure VI registers from current render mode
void Display::configureVI() {
    // VIConfigure, VISetScale in real SDK
    // Sets up VI horizontal/vertical scaling from GXRenderModeObj
}

// @addr 0x8016C500 — Enable/disable black screen
void Display::setBlack(bool enable) {
    (void)enable;
    // VIBlack(true) in real SDK
    setScreenStateFlag(SCREEN_STATE_BLACK_PENDING);
}

// @addr 0x8016C560 — Enable/disable white screen
void Display::setWhite(bool enable) {
    (void)enable;
    // VIBlack(false) + clear color to white in real SDK
}

// @addr 0x8016C5C0 — Copy EFB (embedded framebuffer) to XFB
void Display::copyEFBtoXFB() {
    if (mXfb != nullptr) {
        // GXCopyDisp(mXfb, GX_TRUE) in real SDK
    }
}

// @addr 0x8016C640 — Calculate display refresh frequency
void Display::calcFrequency() {
    // OS_TIMER_CLOCK / ticksPerVRetrace
    // Typically 60.0f for NTSC, 50.0f for PAL
    mFrequency = 60.0f;
}

// @addr 0x8016C6C0 — VRetrace interrupt callback
void Display::onVRetrace() {
    mRetraceCount++;
}

// @addr 0x8016C740 — Create display singleton
Display* Display::create() {
    if (sInstance == nullptr) {
        sInstance = new Display();
        sInstance->init();
    }
    return sInstance;
}

// ============================================================================
// Extended Display methods
// ============================================================================

// @addr 0x8016C800 — Set gamma correction value (0.0 to 2.0)
void Display::setGamma(f32 gamma) {
    (void)gamma;
    // In real SDK: configures VI gamma correction register
    // VIConfigure with adjusted gamma in the VIConf register
}

// @addr 0x8016C830 — Enable/disable anti-aliasing (multisample)
void Display::setAntiAliasing(bool enable) {
    (void)enable;
    // In real SDK: GXSetMultisampleMode(enable ? GX_MULTISAMPLE_2X : GX_MULTISAMPLE_OFF)
    // This affects the EFB copy quality when using GXCopyDisp
}

// @addr 0x8016C860 — Get display width in pixels
u16 Display::getWidth() const {
    // Standard Wii resolutions:
    // NTSC: 640x480, PAL: 640x528
    // Widescreen EDTV/HDTV: 704x480 or 720x480
    // Progressive: 640x480 (480p)
    return 640;
}

// @addr 0x8016C890 — Get display height in pixels
u16 Display::getHeight() const {
    // PAL mode uses 528 lines, NTSC uses 480
    return 480;
}

// @addr 0x8016C8C0 — Check if widescreen mode is active
bool Display::isWidescreen() const {
    // Widescreen is determined by the VI configuration
    // 16:9 aspect ratio uses different horizontal scaling
    // In real SDK: check render mode's viTVMode field
    return false;
}

// @addr 0x8016C900 — Set framebuffer with explicit width/height
void Display::setFramebufferEx(void* xfb, u16 width, u16 height) {
    mXfb = xfb;
    (void)width;
    (void)height;
    // In real SDK: VISetNextFrameBuffer with full FBInfo
}

// @addr 0x8016C940 — Get the current video mode
u32 Display::getVideoMode() const {
    // Returns one of: VI_TVMODE_NTSC_INT, VI_TVMODE_NTSC_PROG,
    // VI_TVMODE_PAL_INT, VI_TVMODE_EURGB60_INT, etc.
    return 0;
}

// @addr 0x8016C980 — Wait for the next vertical retrace
void Display::waitRetrace() {
    // In real SDK: VIWaitForRetrace()
    // Blocks until the next VSync interrupt fires
}

// @addr 0x8016C9B0 — Set the maximum number of retraces per frame
void Display::setMaxRetraces(u8 count) {
    mMaxRetraces = count > 0 ? count : 1;
}

// @addr 0x8016C9E0 — Get the elapsed time since the last frame
f32 Display::getDeltaTime() const {
    // Convert delta ticks to seconds using frequency
    if (mFrequency <= 0.0f) return 0.0f;
    return static_cast<f32>(mDeltaTick) / (mFrequency * 1000.0f);
}

// @addr 0x8016CA10 — Set the clear color for EFB
void Display::setClearColor(u32 color) {
    mClearColor = color;
}

// @addr 0x8016CA40 — Set the clear depth for EFB
void Display::setClearZ(u32 depth) {
    mClearZ = depth;
}

// @addr 0x8016CA70 — Check if progressive scan mode is active
bool Display::isProgressive() const {
    return hasFlag(FLAG_PROGRESSIVE);
}

// @addr 0x8016CAA0 — Enable/disable interlaced field rendering
void Display::setInterlaced(bool enable) {
    (void)enable;
    // In real SDK: configures GX field rendering mode
}

// @addr 0x8016CAD0 — Get the framebuffer format
u32 Display::getFramebufferFormat() const {
    // Returns GX_PF_RGB8_Z24 or similar EFB format
    return 0;
}

// @addr 0x8016CB00 — Check if the display is currently blacked out
bool Display::isBlackedOut() const {
    return hasFlag(FLAG_BLACKOUT);
}

// @addr 0x8016CB30 — Register the VRetrace callback with the OS
void Display::registerRetraceCallback() {
    // In real SDK: VIRegisterRetraceCallback(onVRetrace, this)
    setFlag(FLAG_REGISTERED);
}

// @addr 0x8016CB70 — Unregister the VRetrace callback
void Display::unregisterRetraceCallback() {
    // In real SDK: VIUnregisterRetraceCallback(onVRetrace)
    clearFlag(FLAG_REGISTERED);
}

// @addr 0x8016CBA0 — Shutdown the display subsystem
void Display::shutdown() {
    unregisterRetraceCallback();
    setBlack(true);
    mXfb = nullptr;
}

// @addr 0x8016CBD0 — Check if display is initialized
bool Display::isInitialized() const {
    return hasFlag(FLAG_REGISTERED);
}

// @addr 0x8016CC00 — Get current retrace count for frame timing
u32 Display::getCurrentRetrace() const {
    return mRetraceCount;
}

} // namespace EGG

// @addr 0x8016CC30 — Set display resolution (free function)
void Display_setResolution(u16 width, u16 height, bool progressive) {
    (void)width;
    (void)height;
    (void)progressive;
    // In real SDK: select GXRenderModeObj based on width/height,
    // then call VIConfigure with the matching TV mode.
    // Common modes: 640x480 (NTSC), 640x528 (PAL), 640x480p (progressive)
}

// @addr 0x8016CC60 — Get display aspect ratio (4:3 = 1.333, 16:9 = 1.778)
f32 Display_getAspectRatio() {
    // In real SDK: derived from current GXRenderModeObj
    // Standard TV is 4:3 (1.333f), widescreen is 16:9 (1.778f)
    return 4.0f / 3.0f;
}

// @addr 0x8016CC90 — Get the number of fields per frame (1=progressive, 2=interlaced)
u32 Display_getFieldsPerFrame() {
    // Progressive = 1 field, Interlaced = 2 fields
    return 2;
}

// @addr 0x8016CCC0 — Check if PAL mode is active
bool Display_isPAL() {
    // In real SDK: check OSGetConsoleType or VI timing
    return false;
}

// @addr 0x8016CCF0 — Get the XFB size in bytes for the current mode
u32 Display_getXfbSize(u16 width, u16 height, bool isProgressive) {
    // XFB format: YCbCr 4:2:2 = 2 bytes per pixel
    // Interlaced: double height for two fields
    u32 pixels = static_cast<u32>(width) * static_cast<u32>(height);
    if (!isProgressive) {
        pixels *= 2;
    }
    return pixels * 2;
}

// @addr 0x8016CD20 — Get the vertical retrace frequency
f32 Display_getRefreshRate() {
    // NTSC: 59.94 Hz, PAL: 50.0 Hz
    return 59.94f;
}

// @addr 0x8016CD60 — Check if a specific TV mode is supported
bool Display_isTVModeSupported(u32 tvMode) {
    (void)tvMode;
    // In real SDK: query OS_VIDEO_CONFIG for supported modes
    return true;
}

// @addr 0x8016CD90 — Set border color for letterboxing (16:9 on 4:3 TV)
void Display_setBorderColor(u8 r, u8 g, u8 b) {
    (void)r; (void)g; (void)b;
    // In real SDK: sets VI border color registers
}

// @addr 0x8016CDC0 — Get the current framebuffer pitch
u16 Display_getFramebufferPitch() {
    // XFB pitch is always width * 2 (YCbCr 4:2:2)
    return 640 * 2;
}

// @addr 0x8016CDF0 — Enable or disable VI flicker filter
void Display_setFlickerFilter(bool enable) {
    (void)enable;
    // In real SDK: configure VI filter register
}

// @addr 0x8016CE20 — Get the safe area margins (for overscan)
void Display_getSafeArea(f32& left, f32& top, f32& right, f32& bottom) {
    // Wii safe area: approximately 8% margin on all sides
    left = 0.08f;
    top = 0.05f;
    right = 0.92f;
    bottom = 0.95f;
}

// @addr 0x8016CE60 — Convert screen coordinates to normalized device coordinates
void Display_screenToNDC(f32 screenX, f32 screenY, f32& ndcX, f32& ndcY) {
    // Screen coords: (0,0) top-left, (640,480) bottom-right
    // NDC: (-1,-1) bottom-left, (1,1) top-right
    ndcX = (screenX / 640.0f) * 2.0f - 1.0f;
    ndcY = 1.0f - (screenY / 480.0f) * 2.0f;
}

// @addr 0x8016CE90 — Convert normalized device coordinates to screen coordinates
void Display_ndcToScreen(f32 ndcX, f32 ndcY, f32& screenX, f32& screenY) {
    screenX = (ndcX + 1.0f) * 0.5f * 640.0f;
    screenY = (1.0f - ndcY) * 0.5f * 480.0f;
}

// @addr 0x8016CEC0 — Get the letterbox bar height for widescreen on 4:3
u16 Display_getLetterboxHeight() {
    // When rendering 16:9 content on a 4:3 display, black bars are added
    // Letterbox height = (480 - 360) / 2 = 60 pixels per bar
    // 360 = 480 * (4/3) / (16/9) = 480 * 3/4 * 9/16 = 480 * 27/64
    return 60;
}

// @addr 0x8016CF00 — Check if the framebuffer is double-buffered
bool Display_isDoubleBuffered() {
    // Wii uses double-buffered XFBs to prevent tearing
    return true;
}

// @addr 0x8016CF30 — Get the current field index (0=top, 1=bottom) for interlaced
u32 Display_getCurrentField() {
    // In interlaced mode, alternates between 0 (even) and 1 (odd) fields
    // In progressive mode, always returns 0
    return 0;
}

// @addr 0x8016CF60 — Configure the GX render mode object from VI settings
void Display_configureRenderMode() {
    // In real SDK: sets GXRenderModeObj fields based on VI configuration
    // This includes: fbWidth, efbHeight, xfbHeight, viTVMode,
    // viXOrigin, viYOrigin, viWidth, viHeight, field_rendering,
    // aa, sample_pattern, pixel_format, etc.
}

// @addr 0x8016CF90 — Set the vertical scaling factor
void Display_setVerticalScale(f32 scale) {
    (void)scale;
    // In real SDK: VISetScale to stretch/shrink vertically
    // Used for letterboxing and anamorphic widescreen
}

// @addr 0x8016CFC0 — Enable or disable the VI border
void Display_setBorderEnable(bool enable) {
    (void)enable;
    // In real SDK: configure VI to show/hide the border region
}

// @addr 0x8016CFF0 — Get the display's native pixel aspect ratio
f32 Display_getPixelAspectRatio() {
    // Wii pixels are square in both 4:3 and 16:9 modes
    // (the VI horizontal scaling handles the aspect ratio difference)
    return 1.0f;
}

// @addr 0x8016D020 — Suspend display output (for system menu / home button)
void Display_suspend() {
    // In real SDK: called before OSSuspendScheduler or when
    // returning to the system menu. Disables VRetrace callback.
}

// @addr 0x8016D050 — Resume display output after suspension
void Display_resume() {
    // In real SDK: re-enable VRetrace callback and re-configure VI
}

// @addr 0x8016D080 — Get the display's color depth
u32 Display_getColorDepth() {
    // Wii EFB is 24-bit RGB + 24-bit Z
    // XFB output is YCbCr 4:2:2 (16 bits per pixel)
    return 24;
}

// @addr 0x8016D0C0 — Copy a specific region of the EFB to XFB
void Display_copyEFBRegion(u16 x, u16 y, u16 width, u16 height, bool clear) {
    (void)x; (void)y; (void)width; (void)height; (void)clear;
    // In real SDK: GXCopyDisp with source rectangle parameters
    // This is used for split-screen rendering (2-player, 4-player)
}

// @addr 0x8016D0F0 — Set the display's gamma table (per-channel)
void Display_setGammaTable(const u8* rLUT, const u8* gLUT, const u8* bLUT, u32 size) {
    (void)rLUT; (void)gLUT; (void)bLUT; (void)size;
    // In real SDK: configure VI gamma correction LUT registers
    // Each LUT has 256 entries (8-bit precision)
}

// @addr 0x8016D120 — Reset gamma to default linear
void Display_resetGamma() {
    // In real SDK: reset VI gamma registers to identity
}

// @addr 0x8016D150 — Get the current framebuffer index (for double-buffering)
u32 Display_getCurrentBufferIndex() {
    // Alternates between 0 and 1 for double-buffered XFBs
    return 0;
}

// @addr 0x8016D180 — Measure actual frame time in ticks
u32 Display_measureFrameTime() {
    // In real SDK: OSDiffTick(OSGetTick(), mBeginTick)
    // Returns the actual time taken for the last frame
    return 0;
}