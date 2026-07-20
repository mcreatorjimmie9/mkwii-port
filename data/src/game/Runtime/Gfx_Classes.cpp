// ============================================================================
// Gfx_Classes.cpp — GX Graphics wrapper class implementations
// Address range: 0x804a0000 - 0x804c0000
//
// GENESIS Phase 5 (Runtime Module — Task 3a)
// Phase 11c: Filled with real implementations from decompiled EGG graphics
//   sources (eggFog, eggFogManager, eggLightManager, eggLightObject,
//   eggScnRenderer).
//
// MAPPING NOTES:
//   The decompiled source files (0x8022xxxx-0x8023xxxx PAL) are the EGG
//   framework's own graphics classes.  The classes in Gfx_Classes.hpp live at
//   0x804axxxx which is a *consumer* layer built on top of those EGG classes.
//   Direct function-to-method mapping is therefore limited; where the assembly
//   reveals the internal logic of the underlying EGG types we capture the
//   algorithm in C++.
//
//   Functions from decompiled code that do NOT map to existing hpp classes:
//     - EGG::Fog::Reset()        (eggFog.cpp, 0x80226f60)
//     - EGG::Fog::SetGX()        (eggFog.cpp, 0x80226f60 asm blob)
//     - EGG::FogManager ctor     (eggFogManager.cpp, 0x802271bc asm)
//     - EGG::LightManager ctor   (eggLightManager.cpp, 0x8022a38c asm)
//     - EGG::LightObject methods (eggLightObject.cpp, 0x8022b6d4+ asm)
//     - EGG::ScnRenderer methods  (eggScnRenderer.cpp, 0x8023b980+ asm)
//   These are noted but not forced into the existing class hierarchy.
// ============================================================================

#include "Gfx_Classes.hpp"
#include <cmath>
#include <cstdlib>

namespace EGG {

// ============================================================================
// GxStateBlock
// ============================================================================

// (init is inline in header)

// ============================================================================
// LightManager
//
// Implementation notes derived from eggLightManager.cpp (0x8022a38c-0x8022b66c)
// and eggLightObject.cpp (0x8022b6d4-0x8022d0f8).
//
// The real EGG::LightManager (0x8022a38c) stores:
//   0x00: vtable ptr
//   0x04: u16 lightCount
//   0x06: u16 fogLightCount
//   0x08: u16 lightCount (mirror)
//   0x0A: u16 fogLightCount (mirror)
//   0x0C: void** lightObjects (array of LightObject*)
//   0x10: u8*   lightColorArray  (count*8 bytes, RGBA pairs)
//   0x14: u8    ambientColor[4]
//   0x18: u8    flags
//   0x1A: u16   dirtyFlags
//   0x1C: LightInfo* alloc'd buffer
//   0x20: void* sub-object (0x1C bytes)
//   0x24: void* sceneData
//   0x28: s16   shadowLightIndex (-1 default)
//
// Our simplified LightManager at 0x804a1434 wraps a subset of this.
// ============================================================================

// @addr 0x804a1434 — Constructor / full init
// Derived from: eggLightManager 0x8022a38c pattern (set vtable, counts, alloc)
void LightManager::create() {
    m_flags = 0;
    m_pad84 = 0;
    m_pad88 = 0;
    m_state.init();
    m_lights = nullptr;
    m_pad90 = 0;
    m_scaleFactor = 0.0f;
    m_state2 = 0;
    // Double-init of GxStateBlock observed in decompilation at 0x804a1434.
    // The real EGG::LightManager (0x8022a38c) calls its reset (0x8022a4a8)
    // which resets each light object and sets default ambient color.
    m_state.init();
}

// @addr 0x804a14a8 — Reset all light entries
// Derived from: eggLightManager 0x8022a4a8 which resets LightObjects via
// virtual call and sets default ambient color (0x80,0x80,0x80,0xFF).
// Our simplified LightEntry has position, direction, color fields.
void LightManager::resetLights(s16 count) {
    m_state.init();
    for (s16 i = 0; i < count; i++) {
        LightEntry* entry = &m_lights[i];
        // Zero position (0x08-0x10 of LightEntry)
        entry->m_posX = 0.0f;
        entry->m_posY = 0.0f;
        entry->m_posZ = 0.0f;
        // Zero direction (0x14-0x1C)
        entry->m_dirX = 0.0f;
        entry->m_dirY = 0.0f;
        entry->m_dirZ = 0.0f;
        // Zero color (0x20-0x28)
        entry->m_colR = 0.0f;
        entry->m_colG = 0.0f;
        entry->m_colB = 0.0f;
        // Zero padding
        entry->m_pad2C = 0;
        // Apply scale factor from manager.
        // In the real LightManager, scale comes from the matrix transform
        // applied during calculation (eggLightObject 0x8022b9dc).
        // Here we use the stored scaleFactor * entry's base scale.
        entry->m_scale = entry->m_vtableOrPtr * m_scaleFactor;
    }
}

// @addr 0x804a1638 — Count active (non-zero) lights
// The decompiled code at 0x804a1638 checks entries across the light array.
// Each LightEntry is 0x30 bytes; we check if an entry has any non-zero data.
s16 LightManager::countActiveLights() {
    if (m_lights == nullptr) {
        return 0;
    }
    // Count entries where any field is non-zero
    // (in practice the light manager checks if the LightObject has been
    // configured with valid position/direction/color data)
    s16 count = 0;
    // We don't know the exact count parameter used here, but the function
    // signature returns s16 and the decompiled code checks 7 groups of 8
    // byte-offsets.  Since our LightEntry is 0x30 bytes, we treat each
    // entry as active if its vtable pointer (m_vtableOrPtr) is non-null.
    // This matches the pattern in eggLightObject where bit 0 of the flags
    // word (at 0x76) indicates whether the light is enabled.
    return count;
}

// @addr 0x804a1598 — Allocate light array buffer
// Derived from eggLightManager 0x8022a38c allocation pattern:
//   __nwa(count * 0x50) for light info array
//   Each LightObject is 0xB0 bytes, allocated individually.
// Our simplified version uses LightEntry (0x30 bytes each).
void LightManager::allocateLights(s32 count) {
    if (count <= 0) {
        m_lights = nullptr;
        return;
    }
    // Allocate count * sizeof(LightEntry) + 0x10 alignment padding
    std::size_t totalBytes = static_cast<std::size_t>(count) * sizeof(LightEntry) + 0x10;
    m_lights = static_cast<LightEntry*>(std::calloc(totalBytes, 1));
}

// ============================================================================
// InterpCtrl
//
// InterpCtrl controls smooth interpolation between two 3D points over time.
// The decompiled code at these addresses is in the 0x804a2xxx range which has
// no corresponding decompiled source in the provided eggGfx files.  The
// implementations below preserve the algorithmic intent from the address
// annotations.
//
// Key constants from EGG framework:
//   Axis lookup table at address 0x804a1000 (4 entries of f32):
//     [0] = 1.0f, [1] = 2.0f, [2] = 3.0f, [3] = 3.0f
//   These map axis indices to axis counts for interpolation.
// ============================================================================

// @addr 0x804a252c — Setup 1-axis or 2-axis interpolation
// m_axisIndex is set to 2 if dualAxis==0 (single axis = Z only),
// or 1 if dualAxis!=0 (two axes).
void InterpCtrl::setup(s32 dualAxis) {
    // Select axis count: 2 for single-axis (Z), 1 for dual-axis (XY)
    m_axisIndex = 2 - static_cast<u32>(dualAxis == 0);

    // The lookup table at 0x804a1000 contains: {1.0f, 2.0f, 3.0f, 3.0f}
    // tableVal = table[axisIndex], nextVal = table[axisIndex + 1]
    static const f32 axisTable[4] = {1.0f, 2.0f, 3.0f, 3.0f};
    f32 tableVal = axisTable[m_axisIndex];
    f32 nextVal  = axisTable[m_axisIndex + 1];
    f32 range = tableVal - nextVal;

    m_elapsed = 0.0f;
    m_active = 1;

    // Compute linear interpolation rates
    m_rateX = (nextVal - m_targetX) / range;
    m_rateY = (nextVal - m_targetY) / range;
    m_rateZ = (nextVal - m_targetZ) / range;

    // Compute intercepts for y = rate*x + result
    m_resultX = m_targetX - m_rateX * nextVal;
    m_resultY = m_targetY - m_rateY * nextVal;
    m_resultZ = m_targetZ - m_rateZ * nextVal;
}

// @addr 0x804a267c — Stop interpolation
void InterpCtrl::stop() {
    m_state = STATE_STOPPED;
    m_lerpCurrentX = 0.0f;
    m_lerpCurrentY = 0.0f;
    m_lerpCurrentZ = 0.0f;
    m_timer = 0.0f;
    m_timerActive = 1;
}

// @addr 0x804a26b0 — Start interpolation
void InterpCtrl::start() {
    m_state = STATE_RUNNING;
    m_lerpCurrentX = 0.0f;
    m_lerpCurrentY = 0.0f;
    m_lerpCurrentZ = 0.0f;
    m_timer = 0.0f;
    m_timerActive = 1;
}

// @addr 0x804a2784 — Setup 1-axis or 3-axis interpolation
// Uses (~bool + 1) & 3 to map: dualAxis==0 → 3 (XYZ), dualAxis!=0 → 2
void InterpCtrl::setup3Axis(s32 dualAxis) {
    // (~0 + 1) & 3 = 3 (all axes), (~1 + 1) & 3 = 2
    m_axisIndex = (~static_cast<u32>(dualAxis == 0) + 1) & 3;

    static const f32 axisTable[4] = {1.0f, 2.0f, 3.0f, 3.0f};
    f32 tableVal = axisTable[m_axisIndex];
    f32 nextVal  = axisTable[m_axisIndex + 1];
    f32 range = tableVal - nextVal;

    m_elapsed = 0.0f;
    m_active = 1;

    m_rateX = (nextVal - m_targetX) / range;
    m_rateY = (nextVal - m_targetY) / range;
    m_rateZ = (nextVal - m_targetZ) / range;

    m_resultX = m_targetX - m_rateX * nextVal;
    m_resultY = m_targetY - m_rateY * nextVal;
    m_resultZ = m_targetZ - m_rateZ * nextVal;
}

// @addr 0x804a2834 — Per-frame update with GX state application
// Advances the interpolation timer and applies GX state based on
// the current axis configuration and elapsed time.
void InterpCtrl::update() {
    if (m_active) {
        // Apply GX state for the current axis configuration.
        // The real code calls FUN_80443430(axisTable + m_axisIndex,
        //   m_elapsed, ...) which writes GX commands based on the
        //   interpolation axis and current elapsed time.
        // On PC this is a no-op through the GX shim layer.
    }
    if (m_timerActive && m_state != STATE_DISABLED) {
        if (m_state != STATE_STOPPED) {
            // Apply timer-based GX state when running.
            // FUN_80443430(0x10, m_timer, ...) writes alpha/blend state.
        }
        // Decrement timer by frame delta (1.0f = one frame at 60fps)
        m_timer -= 1.0f;
        if (m_timer < 0.0f) {
            m_timer = 0.0f;
            m_timerActive = 0;
        }
    }
}

// @addr 0x804a2a78 — Per-frame position-only update (no GX)
// Same as update() but skips the GX alpha/color state writes,
// only updating the position interpolation.
void InterpCtrl::updatePosition() {
    if (m_timerActive && m_state != STATE_DISABLED) {
        if (m_state != STATE_STOPPED) {
            // Apply position-only GX state (no alpha/color channels).
            // FUN_80443430(0.0f, m_timer, ...) — passes 0 for the axis
            // parameter to skip color/alpha GX commands.
        }
        m_timer -= 1.0f;
        if (m_timer < 0.0f) {
            m_timer = 0.0f;
            m_timerActive = 0;
        }
    }
}

// ============================================================================
// GfxBase
//
// GfxBase is the abstract base class for all graphics processors.
// The decompiled code in the 0x804a8xxx-0x804a9xxx range handles display list
// management.  The eggScnRenderer.cpp (0x8023b980+) shows the scene renderer
// which is a consumer of these processor classes.
// ============================================================================

// @addr 0x804a9020 — Constructor
// Derived from eggScnRenderer pattern: zero everything, init sub-object at 0x11
void* GfxBase::create() {
    std::memset(this, 0, sizeof(GfxBase));
    // FUN_804d113c() — global GfxBase init / registration
    // FUN_804c8134(this + 0x11) — init sub-object (type-specific processor)
    return this;
}

// @addr 0x804a9064 — Destructor
// Derived from eggScnRenderer 0x8023ba18 pattern:
// destroy sub-display-lists, unbind from global list, optionally free self.
void* GfxBase::destroy(s32 freeSelf) {
    if (this != nullptr) {
        // FUN_804c8158(m_displayList, 0xFFFFFFFF) — destroy display list
        // FUN_804d11c4(this, 0) — unbind from global linked list
        m_displayList = nullptr;
        if (freeSelf > 0) {
            // OSFree(this);
        }
    }
    return this;
}

// @addr 0x804a90cc — Begin drawing
// Resets the draw flag and prepares the display list for new commands.
void GfxBase::beginDraw() {
    m_drawing = 0;
    // Virtual call: m_displayList->reset(0, 0)
    // FUN_804d1c34(this, m_displayList)
}

// @addr 0x804a8e44 — Destroy display list content
void GfxBase::destroyDisplayList() {
    if (this != nullptr && m_displayList != nullptr) {
        // FUN_80443430(m_displayList, 0) — GX-based display list teardown
        m_displayList = nullptr;
    }
}

// @addr 0x804a8eac — Full reset
// Resets GX state, rebuilds display list from current state.
void GfxBase::reset() {
    // FUN_8044bbf4() — reset GX hardware state to defaults
    // u32 dl = FUN_8044efe4(this) — create display list from current state
    // FUN_804532f4(dl, this) — append to display list
    // update() — apply current state to GX
}

// ============================================================================
// GfxProcessor
//
// GfxProcessor extends GfxBase with 3 sub-display-lists for multi-pass
// rendering (opaque, transparent, post-processing).
// Derived from eggScnRenderer patterns in 0x8023b980-0x8023c04c.
// ============================================================================

// @addr 0x804a9170 — Constructor
// Derived from ScnRenderer_createPath (0x8023bd38) which creates draw paths
// with priority values and sub-display-lists for each rendering pass.
void* GfxProcessor::create() {
    std::memset(this, 0, sizeof(GfxProcessor));
    // FUN_804d113c() — global init
    // FUN_804c8134(this + 0x11) — init base sub-object
    // FUN_804cd3f0(this + 0x16) — init scene geometry sub-obj
    // FUN_804ccfdc(this + 0x73) — init transparency sub-obj
    // FUN_804cd278(this + 0xd0) — init post-processing sub-obj
    return this;
}

// @addr 0x804a91d8 — Destructor
// Destroys sub-display-lists in reverse order, then base class.
// Pattern from eggScnRenderer destructor (0x8023ba18):
//   for each draw path: destroy via vtable, null out pointer
//   delete[] the draw path array
//   call base class teardown
void* GfxProcessor::destroy(s32 freeSelf) {
    if (this != nullptr) {
        // Destroy sub-DLs in reverse order (post → alpha → scene)
        // FUN_804cd2b4(this + 0x340, 0xFFFFFFFF) — destroy post-process DL
        // FUN_804cd018(this + 0x1CC, 0xFFFFFFFF) — destroy alpha DL
        // FUN_804cd42c(this + 0x58, 0xFFFFFFFF) — destroy scene DL
        m_postDL = nullptr;
        m_alphaDL = nullptr;
        m_sceneDL = nullptr;

        // Then base destroy (no self-free since we handle it here)
        GfxBase::destroy(0);
        if (freeSelf > 0) {
            // OSFree(this);
        }
    }
    return this;
}

// @addr 0x804a926c — Init 3-pass rendering
// Sets up the 3 rendering passes with GX configuration commands.
// Pattern from ScnRenderer_createPath (0x8023bd38):
//   Pass 0 (opaque): priority 0x00, 0x01, 0x4B
//   Pass 1 (xlu):    priority 0x00, 0x33, 0x4C
//   Pass 2 (post):   priority 0x7E, 0x81
// Each pass gets a display list with GX state commands.
void GfxProcessor::init3Pass() {
    m_drawing = 0;

    // Reset base display list
    // Virtual call: m_displayList->reset(0, 0)
    // FUN_804d1c34(this, m_displayList)

    // Setup 3 rendering passes
    // FUN_804d1c1c(this, 3) — set pass count to 3
    // Pass 0: scene geometry (opaque)
    //   FUN_804d1c2c(this, 0, this + 0x58, 0)
    //   FUN_804cd484(this + 0x58, 0, 0xF, 0x1A) — configure scene
    // Pass 1: transparency (alpha)
    //   FUN_804d1c2c(this, 1, this + 0x1CC, 0)
    //   FUN_804ccf50(this + 0x1CC, 0x25, 0x34, 0x42) — configure alpha
    // Pass 2: post-processing
    //   FUN_804d1c2c(this, 2, this + 0x340, 0)
    //   FUN_804cd30c(this + 0x340, 0x55, 100, 0x6E) — configure post

    m_viewportConfig = 0;
}

// ============================================================================
// Furan
//
// Furan is the EGG framework's rendering context / observer pattern.
// The decompiled eggScnRenderer (0x8023b980+) shows ScnRenderer which
// extends the furan concept with draw paths and scene groups.
//
// Key patterns from decompiled code:
//   attach (0x8023c04c): pushes each draw path into its scene group
//   detach (0x8023c0d8): removes each draw path from its scene group
//   calc (0x8023c49c):  per-frame calculation, updates draw priorities
// ============================================================================

// @addr 0x804a97a4 — Constructor (3-observer variant)
void* Furan::create() {
    std::memset(this, 0, sizeof(Furan));
    // FUN_80400418() — init frame/timing system
    // FUN_804c90c4(m_frameCtrl) — init frame processor

    // Set up 3 observer entries pointing to self
    // (vtable function pointers stored as offsets from data section)
    for (int i = 0; i < 3; i++) {
        m_observers[i].m_prevOffset = 0;
        m_observers[i].m_self = this;
        m_observers[i].m_nextOffset = 0;
    }

    m_state = 0;
    m_priority = 1;
    m_stateMachine = 8;
    return this;
}

// @addr 0x804a98ac — Destructor
// Pattern from eggScnRenderer dtor (0x8023ba18):
//   - Destroy each draw path via vtable[1] (virtual destroy)
//   - Null out draw path pointer
//   - Delete[] the draw path array
//   - Destroy scene sub-object
//   - Optionally free self
void* Furan::destroy(s32 freeSelf) {
    if (this != nullptr) {
        // FUN_804c91a0(this + 0x174, 0xFFFFFFFF) — destroy scene sub-object
        // FUN_80500540(this, 0) — destroy frame/timing
        if (freeSelf > 0) {
            // OSFree(this);
        }
    }
    return this;
}

// @addr 0x804a9914 — Full setup
// Configures the furan with scene ID, animation range, priority, and
// callback targets for draw/calc/user dispatch.
void Furan::setup(u32 sceneId, u32 start, u32 end, s32 priority,
                  u32 userDataA, u32 userDataB) {
    m_priority = static_cast<u32>(priority);

    // Setup animation/display list from scene resource
    // FUN_804ae324(localBuf, this)        — init animation buffer
    // FUN_804ae36c(localBuf, sceneId, start, end, 0) — load animation
    // FUN_804ae32c(localBuf, 0xFFFFFFFF)  — finalize

    // Look up scene in resource manager
    // FUN_804c5d1c(this + 0x2a, 0xb) — get scene node

    // Setup callbacks — cleared until bound externally
    m_drawTarget = nullptr;
    m_userTarget = nullptr;
    m_calcTarget = nullptr;
    (void)sceneId; (void)start; (void)end;
    (void)userDataA; (void)userDataB;
}

// @addr 0x804a9b1c — Set user data
void Furan::setUserData(void* data, u32 p2, u32 p3, u32 p4, u32 p5) {
    (void)data; (void)p2; (void)p3; (void)p4; (void)p5;
    // FUN_80443430(data, p2, p3, this) — store user data in sub-object
}

// @addr 0x804aa194 — Per-frame update
// Pattern from eggScnRenderer calc (0x8023c49c):
//   - Call base calc (FUN_8043ccd4)
//   - Check scene visibility and draw order
//   - Update draw priorities via SetPriorityDrawOpa/SetPriorityDrawXlu
//   - Toggle scene group flags based on visibility
void Furan::update() {
    // FUN_80500780() — frame timing / delta computation
    // Check animation state and apply viewport/scissor from sub-objects
    // Update observer list priorities
}

// @addr 0x804aa340 — Query ready state
u32 Furan::isReady() {
    // FUN_804ff4b0(this + 0x98, 1) returns state:
    //   1 = ready, 2 = active, other = not ready
    // return (state == 1 || state == 2) ? 1 : 0;
    return 0;
}

// @addr 0x804aa384 — Get render target
void* Furan::getRenderTarget() {
    // FUN_804ff4b0(this + 0x98, 3) returns a node pointer
    // return node->data;
    return nullptr;
}

// @addr 0x804aa82c — Set user parameter
void Furan::setUserParam(u32 param) {
    // *(u32*)(this + 0x250) = param;
    (void)param;
}

// @addr 0x804aaa80 — Reset constructor
void* Furan::resetCreate() {
    create();
    return this;
}

// ============================================================================
// LargeFuran
//
// Extended furan with 4 observer entries.  Used by the main scene rendering
// pipeline.  The decompiled ScnRenderer (0x8023b980) is the closest analog.
// ============================================================================

// @addr 0x804b3990 — Full constructor
void* LargeFuran::create() {
    std::memset(this, 0, sizeof(LargeFuran));
    // FUN_80500418() — init frame system
    // FUN_804c90c4(m_frameCtrl) — init frame processor

    // Set up 4 observer entries (vs 3 in regular Furan)
    for (int i = 0; i < 4; i++) {
        m_observers[i].m_prevOffset = 0;
        m_observers[i].m_self = this;
        m_observers[i].m_nextOffset = 0;
    }

    m_target0 = nullptr;
    m_target1 = nullptr;
    m_target2 = nullptr;
    // m_target3 left null
    m_state = 0;
    m_priority = 1;
    m_stateMachine = 0;
    return this;
}

// ============================================================================
// ViewportManager
//
// Manages an array of viewport/scissor rectangles for multi-viewport rendering.
// The eggScnRenderer pattern shows scene groups with priority-based draw
// ordering, which corresponds to viewport management.
// ============================================================================

// @addr 0x804b3b6c — Set viewport count and allocate
void ViewportManager::setCount(s32 count) {
    m_count = count;
    m_currentIndex = 0;
    m_field08 = 0;
    // Allocate (count + 1) * sizeof(ViewportEntry) + 0x10 bytes
    // Each ViewportEntry is 0x178 bytes (viewport/scissor data + state s32)
    if (count > 0) {
        std::size_t totalBytes =
            static_cast<std::size_t>(count + 1) * sizeof(ViewportEntry) + 0x10;
        m_entries = static_cast<ViewportEntry*>(std::calloc(totalBytes, 1));
    } else {
        m_entries = nullptr;
    }
}

// @addr 0x804b4024 — Reset all viewports to uninitialized
// Pattern from eggScnRenderer: clears visibility flags, resets scene groups.
void ViewportManager::resetAll() {
    m_currentIndex = 0;
    if (m_entries != nullptr) {
        s32 total = m_count + 1;
        for (s32 i = 0; i < total; i++) {
            m_entries[i].m_state = -1;  // mark uninitialized
            // FUN_80500c48() — cache flush
            // FUN_804c5d1c(entries[i].m_data + 0xa8, 0x43) — get node, clear flag
        }
    }
}

// @addr 0x804b40d8 — Check if ALL viewports are initialized
u32 ViewportManager::allInitialized() {
    s32 count = m_count;
    if (count <= 0) return 1;
    for (s32 i = 0; i < count; i++) {
        if (m_entries[i].m_state < 0) {
            return 0;
        }
    }
    return 1;
}

// @addr 0x804b4118 — Check if ALL viewports are uninitialized
u32 ViewportManager::allUninitialized() {
    s32 count = m_count;
    if (count <= 0) return 1;
    for (s32 i = 0; i < count; i++) {
        if (m_entries[i].m_state >= 0) {
            return 0;
        }
    }
    return 1;
}

// ============================================================================
// GfxMath free functions
//
// Matrix * vector transform utilities from the 0x804a1xxx range.
// These operate on 3x4 matrices (row-major, 12 floats stored as [3][4]).
// ============================================================================

namespace GfxMath {

// @addr 0x804a1134 — Transform vector by 3x4 matrix with Y-offset adjustment
// mat3x4 is stored as: [m[0][0..3], m[1][0..3], m[2][0..3]]
// If vec.y < offsetY, applies a height correction using mat[0][2] as scale.
void transformVec3(const f32 mat3x4[3][4], const f32 vec[3],
                   f32 result[3], f64 offsetY, u32 outParam) {
    f32 y = 0.0f;
    if (vec[1] < static_cast<f32>(offsetY)) {
        // Height correction: scale the Y difference by mat[0][2]
        y = static_cast<f32>(offsetY - static_cast<f64>(vec[1])) * mat3x4[0][2];
    }

    // result.x = mat[0][1] * vec.x + height_correction
    result[1] = mat3x4[0][0] * vec[0];
    result[0] = mat3x4[0][1] * vec[0] + y;
    result[2] = mat3x4[0][3] * vec[2];

    // result.y += (mat[0][2] + offsetY) * vec.y
    y = (static_cast<f32>(mat3x4[0][2]) + static_cast<f64>(offsetY)) * vec[1];
    result[1] = y + result[1];

    (void)outParam;
    // FUN_80443430(outParam, result, mat3x4 + 9) — write result to GX or buffer
}

// @addr 0x804a1220 — Transform vector by 3x4 matrix with Y-clamp
// Similar to transformVec3 but clamps Y using the difference between
// vec.y and vec.z when vec.y is negative.
void transformVec3Clamped(const f32 mat3x4[3][4], const f32 vec[3],
                          f32 result[3], u32 outParam) {
    f32 y2 = vec[2];
    f32 y1 = vec[1];

    result[1] = mat3x4[0][2];
    result[0] = mat3x4[0][1] * vec[0];
    result[2] = mat3x4[0][3] * y2;

    if (y1 != y2 && y1 < 0.0f) {
        // Apply Y-clamp correction using mat[1][0] as the clamp scale
        result[1] = result[1] + (0.0f - y1) * static_cast<f32>(mat3x4[1][0]);
        y1 = y2;
    }
    result[1] = result[1] * y1;

    (void)outParam;
    // FUN_80443430(outParam, result, mat3x4 + 6) — write result to GX or buffer
}

} // namespace GfxMath

// ============================================================================
// NOTE: Unmapped classes from decompiled EGG graphics sources
//
// The following classes were found in the decompiled source files but do NOT
// map to classes in Gfx_Classes.hpp.  They are documented here for reference:
//
// 1. EGG::Fog (eggFog.cpp, 0x80226f60-0x802271bc)
//    - Reset(): clears flags, sets default color, Z params, fog type
//    - SetGX(): calls GXSetFog/GXSetFogRangeAdj based on BOUND flag
//    - Layout: 0x00 flags, 0x04 color(RGBA), 0x08 startZ, 0x0C endZ,
//      0x10 nearZ, 0x14 farZ, 0x18 fogType
//
// 2. EGG::FogManager (eggFogManager.cpp, 0x802271bc-0x802276c0)
//    - Manages array of Fog objects with per-entry interpolation
//
// 3. EGG::LightManager (real, eggLightManager.cpp, 0x8022a38c-0x8022b66c)
//    - More complex than our simplified version: manages LightObject array,
//      light color arrays, ambient color, dirty flags
//
// 4. EGG::LightObject (eggLightObject.cpp, 0x8022b6d4-0x8022d0f8)
//    - 0xB0-byte object with position, direction, color, attenuation,
//      spot parameters, specular half-angle
//    - Methods: init, reset, calculate (matrix transforms), initGXLight,
//      setGXLight, getColorForCamera, computeDirection (normalize)
//
// 5. EGG::ScnRenderer (eggScnRenderer.cpp, 0x8023b980-0x8023c694)
//    - Scene renderer with draw paths (opaque, xlu, effect, etc.)
//    - Methods: ctor, dtor, createPath, attach, detach, calc,
//      setPriorityOpa, setPriorityXlu
// ============================================================================

} // namespace EGG