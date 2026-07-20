#pragma once
// ============================================================================
// SceneGraph_Classes.hpp — EGG Scene Graph class hierarchy
// Address range: 0x80520000 - 0x80540000
//
// Discovered class hierarchy (EGG Framework):
//   SceneGraph         — Main 7-pass scene graph manager (~0x2680 bytes)
//   SceneGraph4Pass    — 4-pass scene graph variant (~0xB00 bytes)
//   SceneGraphNode     — Simple graphics node with GfxBase (~0x78 bytes)
//   Viewport           — Camera/view sub-object (0x254 bytes each, arrays of 4)
//   LODCalculator      — Distance-based LOD level selector (~0xAC bytes)
//   VideoSystem        — Display mode state machine (embedded in scene graph)
//
// Key constructor/destructor pairs:
//   SceneGraph:    ctor 0x80522fa0, dtor 0x805230b8 / full dtor 0x805205f0
//   SceneGraph:    setup 0x805206c0 (7-pass) / 0x80523158 (4-pass)
//   SceneGraph4Pass: ctor 0x80524b34, dtor 0x80524c4c, setup 0x80524cec
//   SceneGraphNode: ctor 0x80523584, dtor 0x80523608
//
// Categorization: GENESIS Phase 8 (Runtime Module — SceneGraph Classes)
// ============================================================================

#include "rk_types.h"
#include <cstring>

namespace EGG {
namespace SceneGraph {

// Forward declarations
class Furan;

// ============================================================================
// Viewport — Camera/view sub-object embedded in SceneGraph
//
// Each SceneGraph holds two arrays of 4 Viewport objects (at offsets 0x5DC
// and 0x10A0 for the 7-pass variant). Each viewport is 0x254 bytes and
// contains a Furan render context at offset 0x174, plus camera state.
//
// Layout:
//   0x000-0x173: viewport transform/state data
//   0x174: Furan sub-object (0x254 - 0x174 = 0xE0 bytes)
//   0x1F4 (500): visibility flag (0=visible, 1=culled)
//   0x3B4: camera index / camera ID (s32, -1 = no camera)
//
// Key addresses:
//   0x80520034 — Reset all 4 viewports' render contexts
//   0x805200cc — Force-stop all 4 viewports
//   0x8052013c — Set viewport timing mode (0 or 1)
//   0x8052019c — Reset viewport and set timing
//   0x805202d8 — Set bounding volume for all 4 viewports
// ============================================================================

class Viewport {
public:
    static const u32 SIZE = 0x254;

    u8  m_state[0x174];       // 0x000 — viewport transform/state
    u8  m_furan[0xE0];        // 0x174 — Furan render context
    // Note: 0x1F4 is within m_furan, accessed as standalone visibility flag
    // u8  m_culled;           // 0x1F4 — 0 = visible, 1 = culled
    u8  m_padding1[0x1C0];    // 0x1F4..0x3B3
    s32 m_cameraIndex;        // 0x3B4 — camera index (-1 = no camera)

    Viewport() { std::memset(this, 0, sizeof(*this)); m_cameraIndex = -1; }
};

// ============================================================================
// LODCalculator — Distance-based Level of Detail selector
//
// Computes which LOD level to use based on distance from the camera.
// Uses an 8-tier threshold table (200, 500, 1000, 2000, 5000, 10000,
// 30000, 60000) to select LOD indices for 3 detail levels.
//
// Layout:
//   0x00: vtable ptr
//   0x08: f32 near plane
//   0x0C: f32 far plane
//   0x10: f32 reference position
//   0x14: f32 inverse range = 1.0 / (far - near)
//   0x18: u32 LOD index level 0 (-1 if culled)
//   0x1C: u32 LOD index level 1 (-1 if culled)
//   0x20: u32 LOD index level 2 (-1 if culled)
//   0x30: u8  computed LOD tier (0-7)
//   0x40: u32 frame/time reference
//   0xA8: f32 additional distance metric
//
// Key addresses:
//   0x8053e560 — Calculate LOD indices from distance
//   0x8053e824 — Apply LOD to a target node
//   0x8053e914 — Compute fade/blend factor
//   0x8053ea04 — Interpolate distance metric
//   0x8053ea4c — Compare LOD priorities between two nodes
//   0x8053eaec — Advanced LOD comparison
// ============================================================================

class LODCalculator {
public:
    static const u32 SIZE = 0xAC;

    u32* m_vtable;             // 0x00
    u8  m_pad04[4];           // 0x04
    f32 m_nearPlane;          // 0x08 — near distance
    f32 m_farPlane;           // 0x0C — far distance
    f32 m_refPosition;        // 0x10 — reference position for LOD calc
    f32 m_invRange;           // 0x14 — 1.0 / (far - near)
    u32 m_lodIndex[3];        // 0x18 — LOD model indices (-1 = culled)
    u8  m_pad24[0x0C];        // 0x24
    u8  m_lodLevel;           // 0x30 — computed LOD tier (0-7)
    u8  m_pad31[0x0F];        // 0x31
    u32 m_frameRef;           // 0x40 — frame/time reference
    u8  m_pad44[0x64];        // 0x44
    f32 m_distanceMetric;     // 0xA8 — additional distance value

    LODCalculator() { std::memset(this, 0, sizeof(*this)); }

    // @addr 0x8053e560 — Calculate LOD indices from distance
    void calculate(f64 frameTime, f64 deltaTime);

    // @addr 0x8053e824 — Apply LOD to a target node
    void applyToNode(void* target, s32 lodSlot);

    // @addr 0x8053e914 — Compute fade/blend factor
    f64 computeFade(f64 distance);

    // @addr 0x8053ea04 — Interpolate distance metric
    f64 interpolateMetric(s32 frame, u32 ticks);

    // @addr 0x8053ea4c — Compare LOD priorities between two nodes
    static s32 comparePriority(LODCalculator* a, LODCalculator* b);

    // @addr 0x8053eaec — Advanced LOD comparison
    static s32 compareAdvanced(LODCalculator* a, LODCalculator* b);
};

// ============================================================================
// SceneGraphNode — Simple graphics node with embedded GfxBase
//
// A minimal scene graph node containing a linked-list node for scene
// traversal and an embedded GfxBase for rendering. Used as a container
// for display lists in simple scene graph configurations.
//
// Layout:
//   0x00: vtable ptr
//   0x44: u32 linked list entry
//   0x48: void* self-reference
//   0x4C-0x54: linked list node (prev, self, next)
//   0x58: GfxBase sub-object (0x804c8134 init)
//   0x70: secondary sub-object (0x8040bcb4 init)
//
// Virtual interface:
//   +0x0C: getFirstChild / traverse
//   +0x1C: setProperty(id, value)
//   +0x24: setProperty(id, value)
//   +0x60: getChild() returns linked list of children
//   +0x64 (100): update() per-frame update
//   +0x68: setUserData(id, data)
//
// Key addresses:
//   0x80523584 — Constructor
//   0x80523608 — Destructor
//   0x80523670 — Calc: bind display list, draw
//   0x80523538 — Update: call virtual setProperty(0x7C, 1)
// ============================================================================

class SceneGraphNode {
public:
    static const u32 SIZE = 0x78;

    u32* m_vtable;             // 0x00
    u32 m_field04;             // 0x04
    u32 m_field08;             // 0x08 — type ID / flags
    u8  m_pad0C[0x38];        // 0x0C
    u32 m_listEntry;           // 0x44 — linked list entry / flags
    void* m_self;              // 0x48 — self-reference
    void* m_listPrev;          // 0x4C
    void* m_listSelf;          // 0x50
    void* m_listNext;          // 0x54
    u8  m_gfxBase[0x18];       // 0x58 — GfxBase sub-object
    u8  m_subObject70[8];      // 0x70 — secondary sub-object

    SceneGraphNode() { std::memset(this, 0, sizeof(*this)); }

    // @addr 0x80523584 — Constructor
    void* create();

    // @addr 0x80523608 — Destructor
    void* destroy(s32 freeSelf = 0);

    // @addr 0x80523670 — Calc: bind display list, draw
    virtual void calc();

    // @addr 0x80523538 — Update: per-frame property update
    void update();
};

// ============================================================================
// SceneGraph — Main 7-pass scene graph manager
//
// The primary scene graph used for the 3D rendering pipeline. Contains
// two Furan render contexts (opaque and transparent passes), a Scene3D
// transform system, a culling system, and up to 8 viewport sub-objects
// arranged in two arrays of 4. The 7-pass rendering pipeline handles
// animation, opaque geometry, transparency, post-processing, overlays,
// effect composition, and UI.
//
// Layout (key offsets):
//   0x000: vtable ptr
//   0x044: linked list node / transform source
//   0x06C: 3D transform/matrix (0x804c9f74 init)
//   0x0D0: GfxBase sub-object
//   0x290: Scene3D sub-object (0x80500418 init)
//   0x2F4: DisplayList pass 0 (animation)
//   0x404: CullingSystem (0x804ccebc init)
//   0x468: DisplayList pass 1 (scene geometry)
//   0x578: Furan (opaque, 0x804a97a4 init)
//   0x5DC: Viewport array 1 (4 x 0x254)
//   0x7B8: opaque Furan priority
//   0x7CC: Furan (transparent, 0x804a97a4 init)
//   0xA0C: transparent Furan priority
//   0xA20: scene ID = 0x7D1
//   0xF2C: DisplayList pass 2
//   0x10A0: Viewport array 2 (4 x 0x254)
//   0x19F0: DisplayList pass 3 (post-processing)
//   0x1F28: DisplayList pass 4 (overlay)
//   0x209C: DisplayList pass 5 (effects)
//   0x2210: Furan (UI, 0x804a97a4 init)
//   0x2474: Viewport base ptr 1
//   0x2478: Viewport base ptr 2
//   0x247C: Render mode (0=normal, 1=mirror, 2=custom, -1=inactive)
//   0x2480: Viewport count
//   0x2484: Derived viewport count
//   0x2488: Start viewport index
//   0x248C: Frame active flag
//   0x2490: Frame time / delta
//   0x2670: Viewport config offset
//   0x2674: Start index backup
//   0x2678: Selected viewport index (-1 = none)
//   0x2870: Video system state
//   0x2874: Video system state data
//
// Key addresses:
//   0x80522fa0 — Base constructor
//   0x805230b8 — Base destructor
//   0x805205f0 — Full destructor (all 7 passes)
//   0x805206c0 — Setup 7-pass pipeline
//   0x80523158 — Setup 4-pass pipeline
//   0x805232d4 — Init scene
//   0x80520034 — Calc viewport timing
//   0x805200cc — Reset viewports
//   0x80520934 — Configure viewports
//   0x80522284 — Video system state machine
// ============================================================================

class SceneGraph {
public:
    static const u32 SIZE_7PASS = 0x2880;

    // Core fields
    u32* m_vtable;              // 0x000
    u32 m_flags;                // 0x004
    u32 m_field08;              // 0x008
    u32 m_field0C;              // 0x00C
    u32 m_field10;              // 0x010
    u8  m_pad14[0x30];          // 0x014
    u32 m_listEntry44;          // 0x044
    void* m_transformTarget;    // 0x048
    void* m_listPrev4C;         // 0x04C
    void* m_listSelf50;         // 0x050
    void* m_listNext54;         // 0x054
    u8  m_transform58[0x14];    // 0x058
    u8  m_matrix6C[0x64];       // 0x06C — 3D transform/matrix
    f32 m_matrix80[4];          // 0x080
    f32 m_matrix90[4];          // 0x090
    f32 m_matrixA0[4];          // 0x0A0
    u8  m_gfxBaseD0[0xC0];      // 0x0D0 — GfxBase sub-object
    u8  m_preViewport[0xBC];    // 0x190
    u8  m_scene3D[0x174];       // 0x290 — Scene3D sub-object
    u8  m_pass0Anim[0x160];     // 0x2F4 — DL pass 0 (animation)
    u8  m_culling[0x110];       // 0x404 — CullingSystem
    u8  m_pass1Scene[0x10C];    // 0x468 — DL pass 1 (scene)
    u8  m_furanOpaque[0x254];   // 0x578 — Furan (opaque)
    Viewport m_viewports1[4];   // 0x5DC — viewport array 1
    u32 m_opaquePriority;       // 0x7B8
    u8  m_furanTrans[0x254];    // 0x7CC — Furan (transparent)
    u32 m_transparentPriority;  // 0xA0C
    u32 m_sceneId;              // 0xA20 — scene resource ID (0x7D1)
    u8  m_midData[0x52C];       // 0xA24
    u8  m_pass2[0x244];         // 0xF2C — DL pass 2
    Viewport m_viewports2[4];   // 0x10A0 — viewport array 2
    u8  m_pass3Post[0x244];     // 0x19F0 — DL pass 3 (post)
    u8  m_pass4Overlay[0x244];  // 0x1F28 — DL pass 4 (overlay)
    u8  m_pass5FX[0x244];       // 0x209C — DL pass 5 (effects)
    u8  m_furanUI[0x254];       // 0x2210 — Furan (UI)

    // Render configuration
    Viewport* m_vpBase1;        // 0x2474
    Viewport* m_vpBase2;        // 0x2478
    s32 m_renderMode;           // 0x247C — 0=normal, 1=mirror, -1=inactive
    u32 m_viewportCount;        // 0x2480
    u32 m_vpCountDerived;       // 0x2484
    u32 m_vpStartIndex;         // 0x2488
    u8  m_frameActive;          // 0x248C
    u8  m_pad248D[3];
    f32 m_frameTime;            // 0x2490
    u8  m_pad2494[0x41C];       // 0x2494

    // Configuration
    u32 m_vpConfig;             // 0x2670
    u32 m_vpStartBackup;        // 0x2674
    s32 m_selectedVP;           // 0x2678 — selected viewport (-1 = none)
    u8  m_pad267C[0x1F4];       // 0x267C

    // Video system (embedded state machine)
    s32 m_videoState;           // 0x2870
    s32 m_videoStateData;       // 0x2874

    SceneGraph() {
        std::memset(this, 0, sizeof(*this));
        m_renderMode = -1;
        m_selectedVP = -1;
        m_sceneId = 0x7D1;
    }

    // @addr 0x80522fa0 — Base constructor
    void* create();

    // @addr 0x805230b8 — Base destructor
    void* destroy(s32 freeSelf = 0);

    // @addr 0x805205f0 — Full destructor
    void destroyFull();

    // @addr 0x805206c0 — Setup 7-pass pipeline
    void setup7Pass();

    // @addr 0x80523158 — Setup 4-pass pipeline
    void setup4Pass();

    // @addr 0x805232d4 — Init scene
    void initScene();

    // @addr 0x80520034 — Calc viewport timing
    void calcViewportTiming();

    // @addr 0x805200cc — Reset viewports
    void resetViewports();

    // @addr 0x8052013c — Set viewport timing mode
    void setViewportTiming(s32 mode);

    // @addr 0x80520234 — Is first viewport ready?
    bool isFirstViewportReady();

    // @addr 0x80520348 — Find ready viewport
    s32 findReadyViewport();

    // @addr 0x80520934 — Configure viewports
    void configureViewports();

    // @addr 0x80520cd8 — Set mode inactive
    void setModeInactive();

    // @addr 0x80520d74 — Sync mirror mode
    void syncMirrorMode();

    // @addr 0x80520dfc — Build render data
    u32 buildRenderData();

    // @addr 0x80521070 — Assign cameras
    void assignCameras();

    // @addr 0x80522284 — Video system update
    void updateVideoSystem();

    // @addr 0x80522644 — Set display mode
    void setDisplayMode(u32 mode);
};

// ============================================================================
// SceneGraph4Pass — 4-pass scene graph variant
//
// A simpler scene graph with 4 rendering passes: scene, culling,
// opaque, and transparent. Uses a different culling initializer
// (0x804c0a10 vs 0x804ccebc) and different Furan placement.
//
// Layout (key offsets):
//   0x000-0x404: same base as SceneGraph
//   0x650: Furan opaque pass
//   0x890: opaque Furan priority
//   0x8A4: Furan transparent pass
//   0xAE4: transparent Furan priority
//   0xAF8: scene ID = 0x7D1
//
// Key addresses:
//   0x80524b34 — Constructor
//   0x80524c4c — Destructor
//   0x80524cec — Setup 4 passes
//   0x80524e70 — Calc culling
// ============================================================================

class SceneGraph4Pass {
public:
    static const u32 SIZE = 0xB00;

    // Base fields (same layout as SceneGraph through 0x404)
    u32* m_vtable;              // 0x000
    u32 m_flags;                // 0x004
    u32 m_field08;              // 0x008
    u32 m_field0C;              // 0x00C
    u32 m_field10;              // 0x010
    u8  m_pad14[0x30];          // 0x014
    u32 m_listEntry44;          // 0x044
    void* m_transformTarget;    // 0x048
    void* m_listPrev4C;         // 0x04C
    void* m_listSelf50;         // 0x050
    void* m_listNext54;         // 0x054
    u8  m_transform58[0x14];    // 0x058
    u8  m_matrix6C[0x64];       // 0x06C
    f32 m_matrix80[4];          // 0x080
    f32 m_matrix90[4];          // 0x090
    f32 m_matrixA0[4];          // 0x0A0
    u8  m_paddingD0[0x1C0];     // 0x0D0
    u8  m_scene3D[0x174];       // 0x290 — Scene3D sub-object
    u8  m_culling[0x110];       // 0x404 — CullingSystem (0x804c0a10)

    // 4-pass specific
    u8  m_midData[0x24C];       // 0x514
    u8  m_furanOpaque[0x254];   // 0x650 — Furan opaque
    u32 m_opaquePriority;       // 0x890
    u8  m_furanTrans[0x254];    // 0x8A4 — Furan transparent
    u32 m_transparentPriority;  // 0xAE4
    u32 m_sceneId;              // 0xAF8 — scene resource ID (0x7D1)

    SceneGraph4Pass() { std::memset(this, 0, sizeof(*this)); m_sceneId = 0x7D1; }

    // @addr 0x80524b34 — Constructor
    void* create();

    // @addr 0x80524c4c — Destructor
    void* destroy(s32 freeSelf = 0);

    // @addr 0x80524cec — Setup 4 passes
    void setup4Pass();

    // @addr 0x80524e70 — Calc culling
    void calcCulling();
};

// ============================================================================
// VideoSystem — Display mode state machine
//
// Manages video/display mode transitions. The state machine handles
// switching between progressive and interlaced modes.
//
// States: 3=init, 4=configure, 6=check format, 7-9=setup, 10=done
// Modes: 0x8D (progressive), 0x96 (interlaced)
//
// Key addresses:
//   0x80522284 — State machine update
//   0x80522644 — Set display mode
//   0x80523780 — Begin transition
//   0x80523af0 — Handle event
// ============================================================================

class VideoSystem {
public:
    enum State {
        STATE_INIT = 3,
        STATE_CONFIGURE = 4,
        STATE_CHECK_FORMAT = 6,
        STATE_SETUP_A = 7,
        STATE_SETUP_B = 8,
        STATE_SETUP_C = 9,
        STATE_DONE = 10,
    };

    enum DisplayMode {
        MODE_PROGRESSIVE = 0x8D,
        MODE_INTERLACED = 0x96,
    };

    u32 m_displayMode;          // +0x00 — 0, 1, 2, 3
    u32 m_pad04;
    s32 m_state;                // +0x08 — current state
    u32 m_resultMode;           // +0x0C — 0x8D or 0x96

    VideoSystem() { std::memset(this, 0, sizeof(*this)); m_state = STATE_DONE; }

    // @addr 0x80522284 — State machine update
    void update();

    // @addr 0x80522644 — Set display mode
    void setMode(u32 mode);

    // @addr 0x80523780 — Begin transition
    void beginTransition();

    // @addr 0x80523af0 — Handle event
    void handleEvent(s32 eventData);
};

// ============================================================================
// SceneManager — Global scene manager (singleton layout reference)
//
// The top-level manager accessed through the global pointer at RAM 0x00000000.
// Documents the subsystem pointer offsets.
//
// Subsystem offsets from *globalPtr:
//   0x13C: VideoSystem
//   0x148: Audio/timing system
//   0x278: Render data system
//   0x27C: Scene system
//   0x28C: Render context system
//   0x2A4: Post-processing system
//   0x404: Culling manager
//
// VTable slots used by subsystems:
//   0x0C: getFirstChild / traverse
//   0x10: init / calc
//   0x1C: setAnimProperty
//   0x24: setProperty
//   0x60: getChild (linked list)
//   0x64 (100): update
//   0x68: setUserData
// ============================================================================

class SceneManager {
public:
    static const u32 OFFSET_VIDEO_SYSTEM     = 0x13C;
    static const u32 OFFSET_AUDIO_SYSTEM     = 0x148;
    static const u32 OFFSET_RENDER_DATA      = 0x278;
    static const u32 OFFSET_SCENE_SYSTEM     = 0x27C;
    static const u32 OFFSET_RENDER_CONTEXT   = 0x28C;
    static const u32 OFFSET_POST_PROCESS     = 0x2A4;
    static const u32 OFFSET_CULLING_MANAGER  = 0x404;

    static const u32 VTABLE_GET_CHILD       = 0x60;
    static const u32 VTABLE_UPDATE           = 0x64;
    static const u32 VTABLE_SET_PROPERTY    = 0x68;
    static const u32 VTABLE_INIT            = 0x10;
    static const u32 VTABLE_GET_FIRST_CHILD = 0x0C;
    static const u32 VTABLE_SET_ANIM_PROP   = 0x1C;
    static const u32 VTABLE_SET_USER_DATA   = 0x24;

    SceneManager() {}
};

} // namespace SceneGraph
} // namespace EGG
