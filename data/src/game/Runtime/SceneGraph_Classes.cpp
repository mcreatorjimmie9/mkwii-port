// ============================================================================
// SceneGraph_Classes.cpp — EGG Scene Graph class implementations
// Address range: 0x80520000 - 0x80540000
//
// GENESIS Phase 8 (Runtime Module — SceneGraph Classes)
// ============================================================================

#include "SceneGraph_Classes.hpp"

namespace EGG {
namespace SceneGraph {

// ============================================================================
// Viewport
// ============================================================================

// (inline constructor in header)

// ============================================================================
// LODCalculator
// ============================================================================

// @addr 0x8053e560 — Calculate LOD indices from camera distance
void LODCalculator::calculate(f64 frameTime, f64 deltaTime) {
    // Computes 8-tier distance thresholds and selects LOD model indices.
    // The inverse range is used to map distance to a 0-1 parameter.
    (void)frameTime;
    (void)deltaTime;

    if (m_invRange == 0.0f)
        return;

    // Map distance into [0,1] range using reference position
    f64 t = (m_refPosition - m_nearPlane) * static_cast<f64>(m_invRange);
    if (t < 0.0) t = 0.0;
    if (t > 1.0) t = 1.0;

    // 8-tier thresholds: 200, 500, 1000, 2000, 5000, 10000, 30000, 60000
    // Select LOD level based on distance
    static const f32 thresholds[7] = {200.0f, 500.0f, 1000.0f, 2000.0f,
                                     5000.0f, 10000.0f, 30000.0f};
    f64 dist = static_cast<f64>(m_refPosition);

    for (s32 i = 0; i < 3; i++) {
        if (dist < static_cast<f64>(thresholds[i])) {
            m_lodIndex[i] = i;
        } else {
            m_lodIndex[i] = static_cast<u32>(-1);
        }
    }
}

// @addr 0x8053e824 — Apply LOD to target node
void LODCalculator::applyToNode(void* target, s32 lodSlot) {
    // If LOD index for slot is -1 (culled), call hide function.
    // Otherwise, apply the LOD model with fade calculation.
    (void)target;
    (void)lodSlot;
}

// @addr 0x8053e914 — Compute fade/blend factor for LOD transition
f64 LODCalculator::computeFade(f64 distance) {
    // Blends between LOD levels based on distance proximity
    // to the current LOD threshold boundary.
    static const f32 thresholds[7] = {200.0f, 500.0f, 1000.0f, 2000.0f,
                                     5000.0f, 10000.0f, 30000.0f};

    // Find which tier the distance falls into
    for (s32 i = 6; i >= 0; i--) {
        if (distance >= static_cast<f64>(thresholds[i])) {
            // Compute fade factor within this tier's range
            f64 lo = static_cast<f64>(thresholds[i]);
            f64 hi = (i < 6) ? static_cast<f64>(thresholds[i + 1]) : 60000.0;
            if (hi > lo) {
                return (distance - lo) / (hi - lo);
            }
            return 0.0;
        }
    }
    return 0.0;
}

// @addr 0x8053ea04 — Interpolate distance metric
f64 LODCalculator::interpolateMetric(s32 frame, u32 ticks) {
    // Linear interpolation between m_refPosition and m_farPlane
    // based on normalized tick value.
    (void)frame;
    if (ticks == 0)
        return static_cast<f64>(m_refPosition);
    f64 t = 1.0 / static_cast<f64>(ticks);
    return m_refPosition + (m_farPlane - m_refPosition) * t;
}

// @addr 0x8053ea4c — Compare LOD priority of two nodes
s32 LODCalculator::comparePriority(LODCalculator* a, LODCalculator* b) {
    // Compare two LODCalculator nodes by distance from camera.
    // Returns -1 if a should render first (closer), 1 if b, 0 if equal.
    if (a == nullptr || b == nullptr) return 0;

    f32 distA = a->m_refPosition;
    f32 distB = b->m_refPosition;

    if (distA < distB) return -1;
    if (distA > distB) return 1;
    return 0;
}

// @addr 0x8053eaec — Advanced LOD comparison
s32 LODCalculator::compareAdvanced(LODCalculator* a, LODCalculator* b) {
    // Extended comparison considering distance metric at 0xA8
    // and frame reference.
    if (a == nullptr || b == nullptr) return 0;

    f32 metricDiff = a->m_distanceMetric - b->m_distanceMetric;
    if (metricDiff < 0.0f) return -1;
    if (metricDiff > 0.0f) return 1;

    // Tiebreak by frame reference
    if (a->m_frameRef < b->m_frameRef) return -1;
    if (a->m_frameRef > b->m_frameRef) return 1;
    return 0;
}

// ============================================================================
// SceneGraphNode
// ============================================================================

// @addr 0x80523584 — Constructor
void* SceneGraphNode::create() {
    std::memset(this, 0, sizeof(SceneGraphNode));
    // FUN_segment_0__804d113c(); — init global state
    // m_listEntry44 = 0;
    m_listEntry = 0;
    // FUN_segment_0__804c8134(this + 0x58); — init GfxBase at offset 0x58
    // FUN_segment_0__8040bcb4(this + 0x70); — init sub-object at 0x70
    return this;
}

// @addr 0x80523608 — Destructor
void* SceneGraphNode::destroy(s32 freeSelf) {
    if (this != nullptr) {
        // FUN_segment_0__804c8158(m_gfxBase, 0xFFFFFFFF); — destroy display list
        // FUN_segment_0__804d11c4(this, 0); — unbind
        if (freeSelf > 0) {
            // OSFree(this);
        }
    }
    return this;
}

// @addr 0x80523670 — Calc: bind display list and draw
void SceneGraphNode::calc() {
    // (**(code**)(*(int*)(this + 0x58) + 0x10))(this + 0x58, 0, 0);
    // FUN_segment_0__804d1c34(this, this + 0x58);
    // FUN_segment_0__804d1c1c(this, 0);
    // FUN_segment_0__804e4e28(fbPtr, 4, 0, 0xFFFFFFFF, 0);
    // FUN_segment_0__804e43c8(fbPtr);
    // ... GX viewport setup from frame buffer data ...
    // FUN_segment_0__804d24e0(this, 0, 0);
}

// @addr 0x80523538 — Update: per-frame property update
void SceneGraphNode::update() {
    // (**(code**)(*this + 0x1C))(frameTime, this, 0x7C, 1);
    // FUN_segment_0__804e6240(globalPtr);
}

// ============================================================================
// SceneGraph
// ============================================================================

// @addr 0x80522fa0 — Base constructor
void* SceneGraph::create() {
    std::memset(this, 0, sizeof(SceneGraph));
    // FUN_segment_0__804d113c(); — init global state
    // m_vtable = nullptr (cleared by memset)
    // Setup linked list nodes for observer pattern
    m_listEntry44 = 0;
    m_transformTarget = this;
    m_listPrev4C = nullptr;
    m_listSelf50 = this;
    m_listNext54 = nullptr;
    // FUN_segment_0__804c9f74(m_matrix6C); — init 3D transform at 0x6C
    // FUN_segment_0__80500418(m_scene3D); — init Scene3D at 0x290
    // m_scene3D vtable cleared
    // FUN_segment_0__804ccebc(m_culling); — init CullingSystem at 0x404
    // FUN_segment_0__804a97a4(m_furanOpaque); — init Furan at 0x578
    // FUN_segment_0__804a97a4(m_furanTrans); — init Furan at 0x7CC
    // m_furanTrans vtable cleared
    m_sceneId = 0x7D1;
    return this;
}

// @addr 0x805230b8 — Base destructor
void* SceneGraph::destroy(s32 freeSelf) {
    if (this != nullptr) {
        // FUN_segment_0__804a98ac(m_furanTrans, 0); — destroy Furan@0x7CC
        // FUN_segment_0__804a98ac(m_furanOpaque, 0xFFFFFFFF); — destroy Furan@0x578
        // FUN_segment_0__804ccef8(m_culling, 0xFFFFFFFF); — destroy Culling@0x404
        // FUN_segment_0__80500540(m_scene3D, 0); — destroy Scene3D@0x290
        // FUN_segment_0__804ca1a0(m_matrix6C, 0xFFFFFFFF); — destroy Transform@0x6C
        // FUN_segment_0__804d11c4(this, 0); — unbind
        if (freeSelf > 0) {
            // OSFree(this);
        }
    }
    return this;
}

// @addr 0x805205f0 — Full destructor (all 7 passes)
void SceneGraph::destroyFull() {
    if (this != nullptr) {
        // FUN_segment_0__804cd714(m_resource, 0xFFFFFFFF); — destroy resource
        // FUN_segment_0__804a98ac(m_furanUI, 0); — destroy Furan@0x2210
        // FUN_segment_0__80500540(m_pass5FX, 0xFFFFFFFF); — destroy Scene3D@0x209C
        // FUN_segment_0__80501428(m_pass4Overlay, 0xFFFFFFFF); — destroy pass 4
        // FUN_segment_0__804f9284(m_pass3Post, 0); — destroy pass 3
        // FUN_segment_0__80443430(m_pass1Scene, 0, 0xAC4, 2); — destroy array at 0x468
        // Note: also frees the allocation at 0x468 (size 0xAC4, alignment 2)
    }
}

// @addr 0x805206c0 — Setup 7-pass rendering pipeline
void SceneGraph::setup7Pass() {
    // Virtual call: m_gfxBaseD0->init(1, 0)  [slot 0x10]
    // FUN_segment_0__804d1c34(this, m_gfxBaseD0);
    // FUN_segment_0__804ca380(m_gfxBaseD0, 1);
    // FUN_segment_0__804d1c1c(this, 7); — 7 total passes

    // Pass 0: Animation (m_pass0Anim at 0x2F4, IDs 0x23A-0x252)
    // FUN_segment_0__804d1c2c(this, 0, m_pass0Anim, 0);
    // Pass 1: Scene geometry (m_pass1Scene at 0x468)
    // FUN_segment_0__804d1c2c(this, 1, m_pass1Scene, 0);
    // Pass 2: (m_pass2 at 0xF2C)
    // FUN_segment_0__804d1c2c(this, 2, m_pass2, 0);
    // Pass 3: Post-processing (m_pass3Post at 0x19F0, IDs 0x262-0x2A9)
    // FUN_segment_0__804d1c2c(this, 3, m_pass3Post, 0);
    // Pass 4: Overlay (m_pass4Overlay at 0x1F28, IDs 0x2B9-0x2D6)
    // FUN_segment_0__804d1c2c(this, 4, m_pass4Overlay, 0);
    // Pass 5: Effects (m_pass5FX at 0x209C, IDs 0x2EB-0x30F)
    // FUN_segment_0__804d1c2c(this, 5, m_pass5FX, 0);
    // Pass 6: UI Furan (m_furanUI at 0x2210, IDs 0x31D-0x340)
    // FUN_segment_0__804d1c2c(this, 6, m_furanUI, 0);

    // Connect render targets between passes
    // FUN_segment_0__804f93f0(m_pass3Post, m_matrix80);
    // FUN_segment_0__804f93f8(m_pass3Post, m_matrix90);
    // FUN_segment_0__804a9ec4(m_furanUI, m_matrixA0, 0);
    // FUN_segment_0__804ca350(m_gfxBaseD0, 1, m_matrixBC, 0, 0);
    // FUN_segment_0__804a9eec(m_furanUI, 0);

    m_vpConfig = 0;
    m_vpStartBackup = 0;
    m_vpStartIndex = 0;
}

// @addr 0x80523158 — Setup 4-pass rendering pipeline
void SceneGraph::setup4Pass() {
    // Virtual call: m_matrix6C->init(1, 0)  [slot 0x10]
    // FUN_segment_0__804d1c34(this, m_matrix6C);
    // FUN_segment_0__804ca380(m_matrix6C, 1);
    // FUN_segment_0__804ca350(m_matrix6C, 1, m_transform58, 0, 0);
    // FUN_segment_0__804d1c1c(this, 4); — 4 total passes

    // Pass 0: Scene3D (m_scene3D at 0x290)
    // FUN_segment_0__804d1c2c(this, 0, m_scene3D, 0);
    // Pass 1: Culling (m_culling at 0x404, ID range 0x00-0x1D)
    // FUN_segment_0__804d1c2c(this, 1, m_culling, 0);
    // Pass 2: Opaque Furan (m_furanOpaque at 0x578, IDs 0x2B-0x4F)
    // FUN_segment_0__804d1c2c(this, 2, m_furanOpaque, 0);
    // Pass 3: Transparent Furan (m_furanTrans at 0x7CC, IDs 0x54-0x60)
    // FUN_segment_0__804d1c2c(this, 3, m_furanTrans, 0);

    m_opaquePriority = 2;
    // FUN_segment_0__804a9ec4(m_furanOpaque, m_listEntry44, 0);

    m_transparentPriority = 3;
    // FUN_segment_0__804a9ec4(m_furanTrans, m_listEntry44, 0);
    // FUN_segment_0__804a9eec(m_furanOpaque, 0);
}

// @addr 0x805232d4 — Init scene: load course, setup culling
void SceneGraph::initScene() {
    // FUN_segment_0__804a9eec(m_furanOpaque, 0);
    // FUN_segment_0__80500a34(m_scene3D, 0xFA3, 0); — load scene by ID

    // Select culling mode based on global video format
    // uVar3 = global->courseData[0x928C]; — player count / video format
    // Switch on uVar3 to select culling IDs:
    //   < 2:  0x1397
    //   < 15: 0x1399
    //   < 21: 0x139A
    //   < 51: 0x139B
    //   < 201: 0x139C
    //   < 401: 0x139D
    //   < 901: 0x139E
    //   < 1001: 0x139F
    //   else: 0x13A0
    // FUN_segment_0__80500a34(m_culling, cullingMode, &localData);
}

// @addr 0x80520034 — Calc: update viewport timing
void SceneGraph::calcViewportTiming() {
    // For each of 4 viewports (stride 0x254):
    //   Get timing state from viewport's animation controller (offset 0x98)
    //   FUN_segment_0__804ff4a0(viewport + 0x98, 0);
    //   FUN_segment_0__804ff59c(frameTime, state, 3); — advance timing
    //   If camera index (viewport + 0x3B4) < 0: hide viewport
    //   Else: show viewport
    //   FUN_segment_0__804a9fd0(viewport + 0x174, showFlag);
}

// @addr 0x805200cc — Reset all viewports
void SceneGraph::resetViewports() {
    // For each of 4 viewports:
    //   Get timing state, reset to state 0
    //   FUN_segment_0__804a9fd0(viewport + 0x174, 0);
}

// @addr 0x8052013c — Set viewport timing mode
void SceneGraph::setViewportTiming(s32 mode) {
    // For each viewport:
    //   Get timing state
    //   If mode == 0: set timing mode to 1
    //   Else: set timing mode to 2
}

// @addr 0x80520234 — Is first viewport in state 3?
bool SceneGraph::isFirstViewportReady() {
    // Get timing state from first viewport + 0x98
    // Return state->field_0x38 == 3
    return false;
}

// @addr 0x80520348 — Find first ready viewport
s32 SceneGraph::findReadyViewport() {
    // For each of 4 viewports:
    //   FUN_segment_0__804aa340(viewport); — check if ready
    //   If ready, return index
    // Return -1 if none ready
    return -1;
}

// @addr 0x80520934 — Configure viewports for rendering
void SceneGraph::configureViewports() {
    // Set frame time
    // m_frameActive = 0;
    // m_frameTime = currentFrameTime;

    // Reset Furan at m_furanUI
    // Setup viewport base pointers
    // m_vpBase1 = &m_viewports1[0];
    // m_vpBase2 = &m_viewports2[0];

    // Based on m_renderMode:
    //   0 (normal): viewportCount = 0x60, connect scene/overlay DLs
    //   1 (mirror): viewportCount = 4, connect different DLs
    //   2 (custom): viewportCount = from m_vpConfig, connect with config

    // For each of 2 viewport arrays:
    //   For each of 4 viewports:
    //     FUN_segment_0__804a9ec4(viewport, m_transform58, 0);

    // Setup scene resource IDs based on mode
    // Mode 0: IDs 0x34B, 0x355, 0x361
    // Mode 1: IDs 0x36B, 0x375, 0x381
    // Mode 2: IDs from config, 0x38B, 0x395, 0x3A1

    // Compute derived count: ceil(viewportCount / 4)
    // FUN_segment_0__804f946c(m_pass3Post, ...);

    // Update viewport timing for primary and secondary arrays
    // FUN_segment_0__80521070(this);
}

// @addr 0x80520cd8 — Set render mode inactive
void SceneGraph::setModeInactive() {
    if (m_renderMode == 0) {
        m_vpStartBackup = m_vpStartIndex;
        // Find ready viewport among primary array
        s32 found = findReadyViewport();
        m_selectedVP = (found >= 0) ? found : 0;
    }
    m_renderMode = -1;
}

// @addr 0x80520d74 — Check and sync mirror mode
void SceneGraph::syncMirrorMode() {
    // If (renderMode == 4 && frameActive && primary ready state == 3
    //     && secondary ready state == 0):
    //   FUN_segment_0__804d1c48(m_frameTime, this, 1);
}

// @addr 0x80520dfc — Build render data from player list
u32 SceneGraph::buildRenderData() {
    // Iterate through player list (up to 12 players)
    // For each active player matching current render config:
    //   Check culling: FUN_segment_0__804b935c(culling, &playerID);
    //   If not culled, add to render data array:
    //     m_renderData[index + 0x2530] = course ID
    //     m_renderData[index + 0x2534] = player ID
    //     m_renderData[index + 0x2538] = character ID
    //     m_renderData[index + 0x253C] = vehicle ID (short)
    //     m_renderData[index + 0x253E] = other flags (short)
    // Return count of added entries
    return 0;
}

// @addr 0x80521070 — Assign cameras to viewports
void SceneGraph::assignCameras() {
    // For each of 4 viewports:
    //   If viewport index is valid:
    //     Look up scene resource by viewport-specific ID
    //     Set viewport camera index from resource
    //     If camera index < 0: mark viewport as culled (flag at +500)
    //     Else: mark visible, apply transform
    //   Else: mark as no-camera (index = -1, culled)
}

// @addr 0x80522284 — Video system state machine update
void SceneGraph::updateVideoSystem() {
    // State machine driven by m_videoState:
    // Translated from eggSceneManager.cpp video system logic.

    switch (m_videoState) {
    case 7:
    case 8:
    case 9:
        // Check m_videoStateData (display mode 0-3)
        if (m_videoStateData == 0 || m_videoStateData == 2) {
            m_videoStateData = 0x8D; // progressive
        } else {
            m_videoStateData = 0x96; // interlaced
        }
        m_videoState = 10; // STATE_DONE
        break;

    case 3:
        // Get video format system, check format count
        // If 0: call init, go to state 4
        // If 3 or 4: check player count, transition
        // (external system calls not available)
        m_videoState = 4;
        break;

    case 6:
        // Set display mode, sync, go to state 10
        m_videoState = 10; // STATE_DONE
        break;

    case 10:
        // STATE_DONE — no-op
        break;

    default:
        break;
    }
}

// @addr 0x80522644 — Set display mode
void SceneGraph::setDisplayMode(u32 mode) {
    // Writes mode value to the video state data field
    m_videoStateData = mode;
}

// ============================================================================
// SceneGraph4Pass
// ============================================================================

// @addr 0x80524b34 — Constructor
void* SceneGraph4Pass::create() {
    std::memset(this, 0, sizeof(SceneGraph4Pass));
    // FUN_segment_0__804d113c(); — init global state
    // m_vtable = nullptr
    // Setup linked list nodes
    m_listEntry44 = 0;
    m_transformTarget = this;
    m_listPrev4C = nullptr;
    m_listSelf50 = this;
    m_listNext54 = nullptr;
    // FUN_segment_0__804c9f74(m_matrix6C); — init transform at 0x6C
    // FUN_segment_0__80500418(m_scene3D); — init Scene3D at 0x290
    // FUN_segment_0__804c0a10(m_culling); — init CullingSystem (variant) at 0x404
    // FUN_segment_0__804a97a4(m_furanOpaque); — init Furan at 0x650
    // FUN_segment_0__804a97a4(m_furanTrans); — init Furan at 0x8A4
    m_sceneId = 0x7D1;
    return this;
}

// @addr 0x80524c4c — Destructor
void* SceneGraph4Pass::destroy(s32 freeSelf) {
    if (this != nullptr) {
        // FUN_segment_0__804a98ac(m_furanTrans, 0); — destroy Furan@0x8A4
        // FUN_segment_0__804a98ac(m_furanOpaque, 0xFFFFFFFF); — destroy Furan@0x650
        // FUN_segment_0__804c0aa0(m_culling, 0xFFFFFFFF); — destroy Culling@0x404
        // FUN_segment_0__80500540(m_scene3D, 0); — destroy Scene3D@0x290
        // FUN_segment_0__804ca1a0(m_matrix6C, 0xFFFFFFFF); — destroy Transform@0x6C
        // FUN_segment_0__804d11c4(this, 0); — unbind
        if (freeSelf > 0) {
            // OSFree(this);
        }
    }
    return this;
}

// @addr 0x80524cec — Setup 4 rendering passes
void SceneGraph4Pass::setup4Pass() {
    // Virtual call: m_matrix6C->init(1, 0)  [slot 0x10]
    // FUN_segment_0__804d1c34(this, m_matrix6C);
    // FUN_segment_0__804ca350(m_matrix6C, 1, m_transform58, 0, 0);
    // FUN_segment_0__804d1c1c(this, 4); — 4 total passes

    // Pass 0: Scene3D at 0x290
    // Pass 1: Culling at 0x404 (0x804c0b08, ID 0x6B)
    // Pass 2: Opaque Furan at 0x650 (IDs 0x7B-0x95)
    // Pass 3: Transparent Furan at 0x8A4 (IDs 0x9F-0xAB)

    m_opaquePriority = 2;
    m_transparentPriority = 3;
}

// @addr 0x80524e70 — Calc culling bounds
void SceneGraph4Pass::calcCulling() {
    // Build bounds from current transform
    // FUN_segment_0__8040bfc4(localBuf);
    // FUN_segment_0__804c0c30(m_culling, localBuf, 0);
}

// ============================================================================
// VideoSystem
// ============================================================================

// @addr 0x80522284 — State machine update
void VideoSystem::update() {
    // State machine for video display mode transitions.
    // Translated from SceneGraph::updateVideoSystem logic.

    switch (m_state) {
    case 7:
    case 8:
    case 9:
        // Check display mode (0-3)
        if (m_displayMode == 0 || m_displayMode == 2) {
            m_resultMode = MODE_PROGRESSIVE;
        } else {
            m_resultMode = MODE_INTERLACED;
        }
        m_state = STATE_DONE;
        break;

    case 3:
        // Init state — check video format system
        // (external system calls not available)
        m_state = 4;
        break;

    case 6:
        // Set display mode, sync, go to done
        m_state = STATE_DONE;
        break;

    case STATE_DONE:
        // No-op
        break;

    default:
        break;
    }
}

// @addr 0x80522644 — Set display mode
void VideoSystem::setMode(u32 mode) {
    m_displayMode = mode;
}

// @addr 0x80523780 — Begin transition
void VideoSystem::beginTransition() {
    // Sets state to init, will transition through state machine
    // Gets render system from global + 0x28C (not available)
    // Traverses children, checks system state (not available)
    // Calls calc on render system (not available)
    m_state = STATE_INIT;
}

// @addr 0x80523af0 — Handle event
void VideoSystem::handleEvent(s32 eventData) {
    // State machine with states 3, 4, 5, 6, 7
    (void)eventData;

    switch (m_state) {
    case 5:
        // Set result mode from display mode
        if (m_displayMode == 0 || m_displayMode == 2) {
            m_resultMode = MODE_PROGRESSIVE;
        } else {
            m_resultMode = MODE_INTERLACED;
        }
        // Call setup function (not available)
        break;

    case 7:
        // Get render system, check player count
        // If valid: set mode, call setProperty(0xFB2, 0)
        // Set listEntry62 = 0, setProperty(0x4D, 0), go to state 8
        m_state = 8;
        break;

    case 6:
        // Similar to 7 but different target
        m_state = 8;
        break;

    default:
        break;
    }
}

} // namespace SceneGraph
} // namespace EGG
