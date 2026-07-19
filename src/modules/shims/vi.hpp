#pragma once
// vi.hpp — Wii VI (Video Interface) and SC (System Config) shims
// VI controls the video output to the TV (NTSC, PAL, progressive).
// SC reads hardware configuration (TV format, aspect ratio, progressive mode).
// On PC, these return sensible defaults (NTSC, 4:3, non-progressive).

#include "../rk_types.h"

// ============================================================================
// VI types and enums
// ============================================================================

// VI display modes
enum VIMode {
    VI_INTERLACE,
    VI_NON_INTERLACE,
    VI_PROGRESSIVE
};

// VI TV regions
enum VIRegion {
    VI_NTSC,
    VI_PAL,
    VI_MPAL,
    VI_DEBUG,
    VI_DEBUG_PAL,
    VI_EURGB60
};

// VI XFB (External Frame Buffer) modes
enum VIXFBMode {
    VI_XFBMODE_SF,   // single field
    VI_XFBMODE_DF    // double field
};

// VI TV modes — composite of region + display mode
// These match the Wii SDK encoding used in GXRenderModeObj.
#define MAKE_TV_MODE(region, mode) ((region << 2) + mode)

enum VITVMode {
    VI_TVMODE_NTSC_INT  = MAKE_TV_MODE(VI_NTSC,   VI_INTERLACE),
    VI_TVMODE_NTSC_DS   = MAKE_TV_MODE(VI_NTSC,   VI_NON_INTERLACE),
    VI_TVMODE_NTSC_PROG = MAKE_TV_MODE(VI_NTSC,   VI_PROGRESSIVE),

    VI_TVMODE_PAL_INT   = MAKE_TV_MODE(VI_PAL,    VI_INTERLACE),
    VI_TVMODE_PAL_DS    = MAKE_TV_MODE(VI_PAL,    VI_NON_INTERLACE),

    VI_TVMODE_EURGB60_INT  = MAKE_TV_MODE(VI_EURGB60, VI_INTERLACE),
    VI_TVMODE_EURGB60_DS   = MAKE_TV_MODE(VI_EURGB60, VI_NON_INTERLACE),
    VI_TVMODE_EURGB60_PROG = MAKE_TV_MODE(VI_EURGB60, VI_PROGRESSIVE),

    VI_TVMODE_MPAL_INT   = MAKE_TV_MODE(VI_MPAL,   VI_INTERLACE),
    VI_TVMODE_MPAL_DS    = MAKE_TV_MODE(VI_MPAL,   VI_NON_INTERLACE),
    VI_TVMODE_MPAL_PROG  = MAKE_TV_MODE(VI_MPAL,   VI_PROGRESSIVE),

    VI_TVMODE_DEBUG_INT    = MAKE_TV_MODE(VI_DEBUG,     VI_INTERLACE),
    VI_TVMODE_DEBUG_PAL_INT = MAKE_TV_MODE(VI_DEBUG_PAL, VI_INTERLACE),
    VI_TVMODE_DEBUG_PAL_DS  = MAKE_TV_MODE(VI_DEBUG_PAL, VI_NON_INTERLACE),
};

#undef MAKE_TV_MODE

// Forward declaration — GXRenderModeObj is defined in gx.hpp
struct GXRenderModeObj;

// ============================================================================
// SC (System Configuration) types and constants
// ============================================================================

// SC aspect ratio values
enum {
    SC_ASPECT_STD   = 0,  // 4:3 (standard)
    SC_ASPECT_WIDE  = 1,  // 16:9 (widescreen)
};

// ============================================================================
// VI function stubs
// ============================================================================

extern "C" {

// VIInit — initializes the Video Interface hardware.
inline void VIInit(void) {}

// VIConfigure — configures the VI with the given render mode.
inline void VIConfigure(const GXRenderModeObj* obj) { (void)obj; }

// VISetBlack — sets whether to display a black screen.
// When true, the TV output is forced to black (useful during loading).
inline void VISetBlack(int black) { (void)black; }

// VIFlush — flushes pending VI register changes to hardware.
inline void VIFlush(void) {}

// VIWaitForRetrace — waits for the next vertical blanking interval.
// On PC: no-op (no VSync to wait for in a shim).
inline void VIWaitForRetrace(void) {}

// VISetNextFrameBuffer — sets the XFB to display on the next frame.
inline void VISetNextFrameBuffer(void* xfb) { (void)xfb; }

// VIGetNextFrameBuffer — returns the XFB currently queued for display.
inline void* VIGetNextFrameBuffer(void) { return nullptr; }

// VIGetTvFormat — returns the current TV format (VI_NTSC, VI_PAL, etc.).
inline unsigned int VIGetTvFormat(void) { return VI_NTSC; }

// VIGetDTVStatus — returns the DTV (digital TV) status register.
// Bit 0 = 1 if a component/D-terminal cable is connected.
inline int VIGetDTVStatus(void) { return 0; }

// ============================================================================
// SC function stubs
// ============================================================================

// SCInit — initializes the System Configuration library (reads SYSCONF).
inline void SCInit(void) {}

// SCGetProgressiveMode — returns 1 if progressive scan is enabled, 0 otherwise.
inline u32 SCGetProgressiveMode(void) { return 0; }

// SCGetAspectRatio — returns SC_ASPECT_STD (4:3) or SC_ASPECT_WIDE (16:9).
inline u32 SCGetAspectRatio(void) { return SC_ASPECT_STD; }

} // extern "C"