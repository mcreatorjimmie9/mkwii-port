#pragma once
// ============================================================================
// Gfx_Classes.hpp — GX Graphics wrapper classes from Runtime range
// Address range: 0x804a0000 - 0x804c0000
//
// Discovered class hierarchy (EGG Framework):
//   GxStateBlock    — 0x80-byte GX state save/restore block
//   LightManager    — Light array management with per-light entries
//   InterpCtrl      — Float3 interpolation controller
//   GfxBase         — Base graphics processor (vtable + display list)
//   GfxProcessor    — Extended processor with 3 sub-display-lists
//   Furan           — Render context / observer pattern (Japanese: フーラン)
//   LargeFuran      — Extended furan with 4 observer lists
//
// Categorization: GENESIS Phase 5 (Runtime Module — Task 3a)
// ============================================================================

#include "rk_types.h"
#include <cstring>

namespace EGG {

// Forward declarations
class DisplayList;
class FrameCtrl;
class GfxFuran;

// ============================================================================
// GxStateBlock — 32-register GX state save/restore block
//
// A raw 0x80-byte (32 x u32) block used to save/restore GX hardware state.
// Commonly used for push/pop of rendering state during draw calls.
//
// Key addresses:
//   0x804a1394 — Zero-initialize the entire 0x80-byte block
//   0x804a135c — Zero + call init
// ============================================================================

class GxStateBlock {
public:
    static const u32 SIZE = 0x80;  // 32 x u32
    u32 regs[SIZE / sizeof(u32)];

    GxStateBlock() { init(); }

    // @addr 0x804a1394 — Zero all 32 registers
    void init() {
        std::memset(regs, 0, sizeof(regs));
        regs[0x1b] = 0xFFFFFFFF;  // sentinel at offset 0x6C
        regs[0x1e] = 0xFFFFFFFF;  // sentinel at offset 0x78
    }
};

// ============================================================================
// LightEntry — Single light source in the light manager
//
// Each light entry is 0x30 bytes. The light manager holds an array of these.
//
// Key address: 0x804a14a8 — initializes an array of LightEntry
//   - Clears position (0x08-0x10), direction (0x14-0x1C), color (0x20-0x28)
//   - Sets scale = m_scaleFactor * entry.mtx[0][0] at offset 0x04
// ============================================================================

class LightEntry {
public:
    u32 m_vtableOrPtr;    // 0x00
    f32 m_scale;          // 0x04 — scale = mtx[0][0] * manager.scaleFactor
    f32 m_posX;           // 0x08 — light position X
    f32 m_posY;           // 0x0C — light position Y
    f32 m_posZ;           // 0x10 — light position Z
    f32 m_dirX;           // 0x14 — light direction X
    f32 m_dirY;           // 0x18 — light direction Y
    f32 m_dirZ;           // 0x1C — light direction Z
    f32 m_colR;           // 0x20 — light color R
    f32 m_colG;           // 0x24
    f32 m_colB;           // 0x28
    u32 m_pad2C;          // 0x2C — padding / alpha

    LightEntry() { std::memset(this, 0, sizeof(*this)); }
};

// ============================================================================
// LightManager — Manages an array of GX lights
//
// Structure layout (derived from 0x804a1434, 0x804a14a8, 0x804a1638):
//   0x00: u32 (flags/count)
//   0x04: GxStateBlock (0x80 bytes, embedded)
//   0x46: LightEntry* (pointer to light array)
//   0x4A: f32 (scale factor for attenuation)
//   0x4C-0x50: additional state
//
// Key addresses:
//   0x804a1434 — Constructor: zeros header, inits state block twice
//   0x804a14a8 — Reset all lights: zeros entries, applies scale factor
//   0x804a1638 — Count active lights (counts non-zero entries across 7 groups)
//   0x804a1598 — Allocate light array: size = count * 0x30 + 0x10
// ============================================================================

class LightManager {
public:
    u32 m_flags;            // 0x00
    GxStateBlock m_state;   // 0x04 (0x80 bytes)
    // gap to 0x84 (after GxStateBlock)
    u32 m_pad84;            // 0x84
    u32 m_pad88;            // 0x88
    LightEntry* m_lights;   // 0x8C (4-byte aligned pointer)
    u32 m_pad90;
    f32 m_scaleFactor;      // 0x94
    u32 m_state2;           // 0x98

    LightManager() {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wclass-memaccess"
        std::memset(this, 0, sizeof(*this));
#pragma GCC diagnostic pop
    }

    // @addr 0x804a1434 — Full constructor
    void create();

    // @addr 0x804a14a8 — Reset all light entries
    void resetLights(s16 count);

    // @addr 0x804a1638 — Count non-zero entries across light groups
    s16 countActiveLights();

    // @addr 0x804a1598 — Allocate light array buffer
    void allocateLights(s32 count);
};

// ============================================================================
// InterpCtrl — Float3 interpolation controller with timer
//
// Controls smooth interpolation between two 3D points over time.
// Used for camera, light, and object animation.
//
// Structure layout (derived from 0x804a252c, 0x804a2784, 0x804a2834):
//   0x00-0x0F: header/gx state
//   0x10: u32 (axis index: 0=X, 1=Y, 2=Z, 3=XYZ)
//   0x14-0x1C: Vec3f (interpolated result / start position)
//   0x20-0x28: Vec3f (interpolation rates / deltas)
//   0x2C-0x34: Vec3f (end point / target)
//   0x38: u8 (active flag)
//   0x3C: f32 (elapsed time)
//   0x40-0x5F: embedded GxStateBlock (partial)
//   0x60: s32 (state: -1=disabled, 0=stopped, 1=running)
//   0x64: u8 (timer active)
//   0x68-0x6C: f32 (timer value)
//   0x6C-0x74: Vec3f (lerp start/current)
//   0x74-0x78: f32 (padding)
//
// Key addresses:
//   0x804a252c — Setup 1-axis or 2-axis interpolation
//   0x804a267c — Stop interpolation (state = 0, timer off)
//   0x804a26b0 — Start interpolation (state = 1, timer on)
//   0x804a2784 — Setup 1-axis or 3-axis interpolation
//   0x804a2834 — Per-frame update (advance timer, apply GX)
//   0x804a2a78 — Per-frame update (position-only, no GX)
// ============================================================================

class InterpCtrl {
public:
    enum State {
        STATE_DISABLED = -1,
        STATE_STOPPED  =  0,
        STATE_RUNNING  =  1,
    };

    // Header
    u32 m_field00;          // 0x00
    u32 m_field04;          // 0x04
    u32 m_field08;          // 0x08
    u32 m_field0C;          // 0x0C

    // Axis configuration
    u32 m_axisIndex;        // 0x10 — 0=X, 1=Y, 2=Z, 3=XYZ

    // Interpolation data
    f32 m_resultX;          // 0x14 — interpolated X
    f32 m_resultY;          // 0x18 — interpolated Y
    f32 m_resultZ;          // 0x1C — interpolated Z
    f32 m_rateX;            // 0x20 — rate of change X
    f32 m_rateY;            // 0x24 — rate of change Y
    f32 m_rateZ;            // 0x28 — rate of change Z
    f32 m_targetX;          // 0x2C — target position X
    f32 m_targetY;          // 0x30 — target position Y
    f32 m_targetZ;          // 0x34 — target position Z

    // Control
    u8  m_active;           // 0x38 — interpolation active
    u8  m_pad39[3];         // 0x39
    f32 m_elapsed;          // 0x3C — elapsed time since start

    // Embedded state
    u8  m_embedded[0x22];   // 0x40-0x61

    // Timer
    s32 m_state;            // 0x62 — STATE_DISABLED/STOPPED/RUNNING
    u8  m_timerActive;      // 0x66
    u8  m_pad67[3];         // 0x67
    f32 m_timer;            // 0x68 — countdown timer
    u8  m_pad6C[4];         // 0x6C
    f32 m_lerpCurrentX;     // 0x70 — current lerp position X
    f32 m_lerpCurrentY;     // 0x74
    f32 m_lerpCurrentZ;     // 0x78

    InterpCtrl() { std::memset(this, 0, sizeof(*this)); m_state = STATE_DISABLED; }

    // @addr 0x804a252c — Setup interpolation (1-axis if !dualAxis, else 2-axis)
    void setup(s32 dualAxis);

    // @addr 0x804a267c — Stop: set state=0, timer off, zero current
    void stop();

    // @addr 0x804a26b0 — Start: set state=1, timer on, zero timer value
    void start();

    // @addr 0x804a2784 — Setup interpolation (1-axis if !dualAxis, else 3-axis)
    void setup3Axis(s32 dualAxis);

    // @addr 0x804a2834 — Per-frame update with GX state application
    void update();

    // @addr 0x804a2a78 — Per-frame position-only update (no GX)
    void updatePosition();

    bool isRunning() const { return m_state == STATE_RUNNING; }
};

// ============================================================================
// GfxBase — Base graphics processor with display list
//
// Abstract base class for all graphics processors in the EGG framework.
// Uses a vtable pattern and owns a DisplayList at offset 0x44.
//
// Layout:
//   0x00: vtable ptr
//   0x04: various flags/ptrs
//   0x11: sub-object (type-specific, init via 0x804c8134)
//   0x44: DisplayList* (GX display list)
//   0x54: u8 (drawing flag)
//   0x70: short (count/index)
//
// Key addresses:
//   0x804a9020 — Constructor: zero vtable, init sub at 0x11
//   0x804a9064 — Destructor: destroy display list, free self
//   0x804a90cc — Init: reset draw flag, setup display list, bind
//   0x804a8e44 — Destroy display list content
// ============================================================================

class GfxBase {
public:
    u32* m_vtable;          // 0x00
    u32 m_field04;          // 0x04
    u32 m_field08;          // 0x08
    u32 m_field0C;          // 0x0C
    u32 m_field10;          // 0x10
    // sub-object at 0x11 (variable size)
    u8  m_pad11[0x33];     // 0x11-0x43
    DisplayList* m_displayList; // 0x44
    u8  m_pad48[0xC];      // 0x48-0x53
    u8  m_drawing;          // 0x54 — 1 when actively drawing
    u8  m_pad55[0x1B];     // 0x55-0x6F
    s16 m_index;            // 0x70

    GfxBase() { std::memset(this, 0, sizeof(*this)); }

    // @addr 0x804a9020 — Constructor
    void* create();

    // @addr 0x804a9064 — Destructor
    void* destroy(s32 freeSelf = 0);

    // @addr 0x804a90cc — Begin drawing
    void beginDraw();

    // @addr 0x804a8e44 — Destroy display list
    void destroyDisplayList();

    // @addr 0x804a8eac — Full reset
    void reset();
};

// ============================================================================
// GfxProcessor — Extended graphics processor with 3 sub-display-lists
//
// Extends GfxBase with additional display lists for multi-pass rendering.
// The 3 sub-DLs are at offsets 0x58, 0x1CC, and 0x340.
//
// Layout (beyond GfxBase):
//   0x58: DisplayList* (pass 0 — scene geometry)
//   0x1CC: DisplayList* (pass 1 — transparency/alpha)
//   0x340: DisplayList* (pass 2 — post-processing)
//   0x3BC: u32 (viewport/scissor config)
//
// Key addresses:
//   0x804a9170 — Constructor: init base + 3 sub-display-lists
//   0x804a91d8 — Destructor: destroy all sub-DLs + base
//   0x804a926c — Init: setup 3 passes with GX commands
//   0x804b0fa8 — Full destructor (0x165C range object)
//   0x804b1084 — Full setup (9 sub-DLs, scene init)
// ============================================================================

class GfxProcessor : public GfxBase {
public:
    // After base class fields...
    u8  m_pad58_pad[4];    // 0x58 area has sub-object too
    DisplayList* m_sceneDL;    // 0x58 — scene geometry pass
    // ... gap to 0x1CC
    DisplayList* m_alphaDL;    // 0x1CC — transparency pass
    // ... gap to 0x340
    DisplayList* m_postDL;     // 0x340 — post-processing pass
    u32 m_viewportConfig;      // 0x3BC

    GfxProcessor() : GfxBase() {}

    // @addr 0x804a9170 — Constructor
    void* create();

    // @addr 0x804a91d8 — Destructor
    void* destroy(s32 freeSelf = 0);

    // @addr 0x804a926c — Init 3-pass rendering
    void init3Pass();
};

// ============================================================================
// Furan — Render context with observer pattern (フーラン)
//
// "Furan" is the EGG framework's rendering context. It manages a priority-
// ordered list of GfxProcessors and dispatches draw calls via the observer
// pattern. Each Furan has up to 3 observer list entries.
//
// Layout:
//   0x00: vtable ptr
//   0x04-0x5C: sub-objects and frame data
//   0x5D: FrameCtrl* (frame processor / timing)
//   0x7E-0x8B: ObserverListEntry[3] (linked list nodes)
//   0x8D: GfxFuran* (draw callback target)
//   0x8E: GfxFuran* (user callback target)
//   0x8F: GfxFuran* (calc callback target)
//   0x90: u32 (state)
//   0x91: u32 (priority / frame count)
//   0x94: u32 (state machine value, default 8)
//
// Key addresses:
//   0x804a97a4 — Constructor (3 observer entries)
//   0x804a98ac — Destructor
//   0x804aa844 — Constructor variant (different vtable)
//   0x804aa958 — Destructor variant
//   0x804a9914 — Full setup with draw/calc/user callbacks
//   0x804a9b1c — Set user data
//   0x804aa194 — Per-frame update
//   0x804aa340 — Query ready state
//   0x804aa384 — Get render target
//   0x804aa3f8 — Draw dispatch
//   0x804aa52c — Calc dispatch
//   0x804aa754 — User dispatch
//   0x804aa82c — Set user data
// ============================================================================

struct ObserverListEntry {
    u32 m_prevOffset;   // offset to previous (or 0)
    void* m_self;       // pointer to owning furan (typed at use site)
    u32 m_nextOffset;   // offset to next (or 0)
};

class Furan {
public:
    u32* m_vtable;              // 0x00
    u8  m_pad04[0x59];         // 0x04-0x5C
    FrameCtrl* m_frameCtrl;    // 0x5D
    u8  m_pad61[0x1D];         // 0x61-0x7D
    ObserverListEntry m_observers[3]; // 0x7E-0x8B (3 entries x 12 bytes)
    void* m_drawTarget;      // 0x8D
    void* m_userTarget;      // 0x8E
    void* m_calcTarget;      // 0x8F
    u32 m_state;               // 0x90
    u32 m_priority;            // 0x91
    u8  m_pad92[2];
    u32 m_stateMachine;        // 0x94 — default 8

    Furan() { std::memset(this, 0, sizeof(*this)); m_stateMachine = 8; }

    // @addr 0x804a97a4 — Constructor (3-observer variant)
    void* create();

    // @addr 0x804a98ac — Destructor
    void* destroy(s32 freeSelf = 0);

    // @addr 0x804a9914 — Full setup
    void setup(u32 sceneId, u32 start, u32 end, s32 priority,
               u32 userDataA, u32 userDataB);

    // @addr 0x804a9b1c — Set user data
    void setUserData(void* data, u32 param2, u32 param3, u32 param4, u32 param5);

    // @addr 0x804aa194 — Per-frame update
    void update();

    // @addr 0x804aa340 — Query ready state (returns 1 if active)
    u32 isReady();

    // @addr 0x804aa384 — Get render target
    void* getRenderTarget();

    // @addr 0x804aa82c — Set user data
    void setUserParam(u32 param);

    // @addr 0x804aaa80 — Reset constructor
    void* resetCreate();
};

// ============================================================================
// LargeFuran — Extended furan with 4 observer lists
//
// Same as Furan but with 4 observer entries and additional sub-objects.
// Used by the main scene rendering pipeline.
//
// Key addresses:
//   0x804b3990 — Constructor (4 observer entries)
//   0x804b2ab4 — Simple constructor (no observers)
//   0x804b2af8 — Destructor
// ============================================================================

class LargeFuran {
public:
    u32* m_vtable;              // 0x00
    u8  m_pad04[0x59];         // 0x04-0x5C
    FrameCtrl* m_frameCtrl;    // 0x5D
    ObserverListEntry m_observers[4]; // 0x5E-0x75 (4 entries)
    void* m_target0;         // 0x76
    void* m_target1;         // 0x77
    void* m_target2;         // 0x78
    void* m_target3;         // 0x79
    u32 m_state;               // 0x7A
    u32 m_priority;            // 0x7B
    u8  m_pad7C[2];
    u32 m_stateMachine;        // 0x7E

    LargeFuran() { std::memset(this, 0, sizeof(*this)); }

    // @addr 0x804b3990 — Full constructor
    void* create();
};

// ============================================================================
// ViewportConfig — GPU viewport/scissor management
//
// Used by GfxProcessor for managing viewport and scissor rectangles.
// Found at 0x804b3b6c — allocates array of (count+1) * 0x178 + 0x10 bytes.
//
// Layout per entry (0x178 bytes):
//   0x000: viewport data
//   0x174: s32 (state: -1 = uninitialized, >= 0 = valid)
//   0x178: next entry...
// ============================================================================

struct ViewportEntry {
    u8  m_data[0x174];     // viewport/scissor data
    s32 m_state;           // 0x174 — -1 = uninitialized
};

class ViewportManager {
public:
    s32 m_count;               // 0x00
    s32 m_currentIndex;        // 0x04 — currently selected viewport
    s32 m_field08;             // 0x08
    ViewportEntry* m_entries;  // 0x0C — array of ViewportEntry

    // @addr 0x804b3b6c — Set viewport count and allocate
    void setCount(s32 count);

    // @addr 0x804b4024 — Reset all viewports
    void resetAll();

    // @addr 0x804b40d8 — Check all viewports initialized
    u32 allInitialized();

    // @addr 0x804b4118 — Check all viewports uninitialized
    u32 allUninitialized();
};

// ============================================================================
// Matrix*Vector utility functions
//
// These are inline-style functions for 3x4 matrix * vector multiplication
// found in the Gfx range.
//
// Key addresses:
//   0x804a1134 — Matrix3x4 * Vec3 with Y-offset adjustment
//   0x804a1220 — Matrix3x4 * Vec3 with Y-clamp adjustment
// ============================================================================

namespace GfxMath {

// @addr 0x804a1134 — Transform vector by 3x4 matrix with offset
// mat3x4 is stored as: [m[0][0..3], m[1][0..3], m[2][0..3]]
// Applies: result = mat * vec + offset (if vec.y < param_1)
void transformVec3(const f32 mat3x4[3][4], const f32 vec[3],
                   f32 result[3], f64 offsetY, u32 outParam);

// @addr 0x804a1220 — Transform vector by 3x4 matrix with Y-clamp
// Similar to transformVec3 but clamps Y component
void transformVec3Clamped(const f32 mat3x4[3][4], const f32 vec[3],
                          f32 result[3], u32 outParam);

} // namespace GfxMath

} // namespace EGG