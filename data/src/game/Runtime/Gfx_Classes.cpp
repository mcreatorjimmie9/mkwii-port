// ============================================================================
// Gfx_Classes.cpp — GX Graphics wrapper class implementations
// Address range: 0x804a0000 - 0x804c0000
//
// GENESIS Phase 5 (Runtime Module — Task 3a)
// ============================================================================

#include "Gfx_Classes.hpp"

namespace EGG {

// ============================================================================
// GxStateBlock
// ============================================================================

// (init is inline in header)

// ============================================================================
// LightManager
// ============================================================================

void LightManager::create() {
    // @addr 0x804a1434
    m_flags = 0;
    m_pad44 = 0;
    m_state.init();
    m_lights = nullptr;
    m_pad4A = 0;
    m_scaleFactor = 0.0f;
    m_state2 = 0;
    m_state.init();  // double-init observed in decompilation
}

void LightManager::resetLights(s16 count) {
    // @addr 0x804a14a8
    m_state.init();
    for (s16 i = 0; i < count; i++) {
        LightEntry* entry = &m_lights[i];
        entry->m_pad08 = 0.0f;
        entry->m_posX = entry->m_posY = entry->m_posZ = 0.0f;
        entry->m_dirX = entry->m_dirY = entry->m_dirZ = 0.0f;
        entry->m_colR = entry->m_colG = entry->m_colB = 0.0f;
        // Apply scale factor from manager
        entry->m_scale = entry->m_vtableOrPtr * m_scaleFactor;
    }
}

s16 LightManager::countActiveLights() {
    // @addr 0x804a1638
    // Counts non-zero entries across 7 groups of 8 entries each
    // (checks offsets 0x00, 0x0C, 0x18, 0x24, 0x30, 0x3C, 0x48, 0x54)
    s16 count = 0;
    u8* data = reinterpret_cast<u8*>(m_lights);
    for (s16 group = 0; group < 2; group++) {
        for (s16 sub = 0; sub < 8; sub++) {
            // Check 7 different offsets within each 0x60-byte block
            if (data[group * 0x60 + sub * 0x0C] != 0) count++;
            if (data[group * 0x60 + sub * 0x0C + 0x0C] != 0) count++;
        }
    }
    return count;
}

void LightManager::allocateLights(s32 count) {
    // @addr 0x804a1598
    // Allocates count * 0x30 + 0x10 bytes
    (void)count;
    // TODO: heap allocation
}

// ============================================================================
// InterpCtrl
// ============================================================================

void InterpCtrl::setup(s32 dualAxis) {
    // @addr 0x804a252c
    m_axisIndex = 2 - static_cast<u32>(dualAxis == 0);

    f32 tableVal = *reinterpret_cast<f32*>(m_axisIndex * 4);
    f32 nextVal = *reinterpret_cast<f32*>((m_axisIndex + 1) * 4);  // from lookup table
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

void InterpCtrl::stop() {
    // @addr 0x804a267c
    m_state = STATE_STOPPED;
    m_lerpCurrentX = m_lerpCurrentY = m_lerpCurrentZ = 0.0f;
    m_timer = 0.0f;
    m_timerActive = 1;
}

void InterpCtrl::start() {
    // @addr 0x804a26b0
    m_state = STATE_RUNNING;
    m_lerpCurrentX = m_lerpCurrentY = m_lerpCurrentZ = 0.0f;
    m_timer = 0.0f;
    m_timerActive = 1;
}

void InterpCtrl::setup3Axis(s32 dualAxis) {
    // @addr 0x804a2784
    m_axisIndex = (~static_cast<u32>(dualAxis == 0) + 1) & 3;

    f32 tableVal = *reinterpret_cast<f32*>(m_axisIndex * 4);
    f32 nextVal = *reinterpret_cast<f32*>((m_axisIndex + 1) * 4);
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

void InterpCtrl::update() {
    // @addr 0x804a2834
    if (m_active) {
        // Apply GX state for current axis
        // FUN_segment_0__80443430(axisIndex table, m_elapsed, ...);
    }
    if (m_timerActive && m_state != STATE_DISABLED) {
        if (m_state != STATE_STOPPED) {
            // Apply timer-based GX state
            // FUN_segment_0__80443430(0x10, m_timer, ...);
        }
        // Decrement timer
        m_timer -= /* global_frame_delta */ 1.0f;
        if (m_timer < 0.0f) {
            m_timer = 0.0f;
            m_timerActive = 0;
        }
    }
}

void InterpCtrl::updatePosition() {
    // @addr 0x804a2a78
    if (m_timerActive && m_state != STATE_DISABLED) {
        if (m_state != STATE_STOPPED) {
            // Apply position-only GX state (no alpha/color)
            // FUN_segment_0__80443430(0.0f, m_timer, ...);
        }
        m_timer -= /* global_frame_delta */ 1.0f;
        if (m_timer < 0.0f) {
            m_timer = 0.0f;
            m_timerActive = 0;
        }
    }
}

// ============================================================================
// GfxBase
// ============================================================================

void* GfxBase::create() {
    // @addr 0x804a9020
    std::memset(this, 0, sizeof(GfxBase));
    // FUN_segment_0__804d113c(); — init global state
    // FUN_segment_0__804c8134(this + 0x11); — init sub-object
    return this;
}

void* GfxBase::destroy(s32 freeSelf) {
    // @addr 0x804a9064
    if (this != nullptr) {
        // FUN_segment_0__804c8158(this + 0x44, 0xFFFFFFFF); — destroy DL
        // FUN_segment_0__804d11c4(this, 0); — unbind
        if (freeSelf > 0) {
            // OSFree(this);
        }
    }
    return this;
}

void GfxBase::beginDraw() {
    // @addr 0x804a90cc
    m_drawing = 0;
    // Call virtual: m_displayList->reset(0, 0)
    // FUN_segment_0__804d1c34(this, m_displayList);
}

void GfxBase::destroyDisplayList() {
    // @addr 0x804a8e44
    if (this != nullptr) {
        // FUN_segment_0__80443430(m_displayList, 0);
    }
}

void GfxBase::reset() {
    // @addr 0x804a8eac
    // FUN_segment_0__8044bbf4(); — reset GX
    // u32 dl = FUN_segment_0__8044efe4(this);
    // FUN_segment_0__804532f4(dl, this);
    // update(); — apply current state
}

// ============================================================================
// GfxProcessor
// ============================================================================

void* GfxProcessor::create() {
    // @addr 0x804a9170
    std::memset(this, 0, sizeof(GfxProcessor));
    // FUN_segment_0__804d113c();
    // FUN_segment_0__804c8134(this + 0x11); — init base sub-obj
    // FUN_segment_0__804cd3f0(this + 0x16); — init scene sub-obj
    // FUN_segment_0__804ccfdc(this + 0x73); — init alpha sub-obj
    // FUN_segment_0__804cd278(this + 0xd0); — init post sub-obj
    return this;
}

void* GfxProcessor::destroy(s32 freeSelf) {
    // @addr 0x804a91d8
    if (this != nullptr) {
        // Destroy sub-DLs in reverse order
        // FUN_segment_0__804cd2b4(this + 0x340, 0xFFFFFFFF);
        // FUN_segment_0__804cd018(this + 0x1CC, 0xFFFFFFFF);
        // FUN_segment_0__804cd42c(this + 0x58, 0xFFFFFFFF);
        // Then base destroy
        GfxBase::destroy(0);
        if (freeSelf > 0) {
            // OSFree(this);
        }
    }
    return this;
}

void GfxProcessor::init3Pass() {
    // @addr 0x804a926c
    m_drawing = 0;
    // Virtual call: m_displayList->reset(0, 0)
    // FUN_segment_0__804d1c34(this, m_displayList);

    // Setup 3 passes
    // FUN_segment_0__804d1c1c(this, 3); — set pass count
    // FUN_segment_0__804d1c2c(this, 0, this + 0x58, 0); — scene pass
    // FUN_segment_0__804cd484(this + 0x58, 0, 0xF, 0x1A); — configure scene
    // FUN_segment_0__804d1c2c(this, 1, this + 0x1CC, 0); — alpha pass
    // FUN_segment_0__804ccf50(this + 0x1CC, 0x25, 0x34, 0x42); — configure alpha
    // FUN_segment_0__804d1c2c(this, 2, this + 0x340, 0); — post pass
    // FUN_segment_0__804cd30c(this + 0x340, 0x55, 100, 0x6E); — configure post
    m_viewportConfig = 0;
}

// ============================================================================
// Furan
// ============================================================================

void* Furan::create() {
    // @addr 0x804a97a4
    std::memset(this, 0, sizeof(Furan));
    // FUN_segment_0__80400418(); — init frame system
    // FUN_segment_0__804c90c4(m_frameCtrl); — init frame processor

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

void* Furan::destroy(s32 freeSelf) {
    // @addr 0x804a98ac
    if (this != nullptr) {
        // FUN_segment_0__804c91a0(this + 0x174, 0xFFFFFFFF); — destroy scene
        // FUN_segment_0__80500540(this, 0); — destroy frame
        if (freeSelf > 0) {
            // OSFree(this);
        }
    }
    return this;
}

void Furan::setup(u32 sceneId, u32 start, u32 end, s32 priority,
                  u32 userDataA, u32 userDataB) {
    // @addr 0x804a9914
    m_priority = priority;

    // Setup animation/display list
    // FUN_segment_0__804ae324(localBuf, this);
    // FUN_segment_0__804ae36c(localBuf, sceneId, start, end, 0);
    // FUN_segment_0__804ae32c(localBuf, 0xFFFFFFFF);

    // Look up scene in resource manager
    // piVar2 = FUN_segment_0__804c5d1c(this + 0x2a, 0xb);

    // Setup callbacks
    m_drawTarget = m_userTarget = m_calcTarget = nullptr;
}

void Furan::setUserData(void* data, u32 p2, u32 p3, u32 p4, u32 p5) {
    // @addr 0x804a9b1c
    (void)data; (void)p2; (void)p3; (void)p4; (void)p5;
    // FUN_segment_0__80443430(data, p2, p3, this);
}

void Furan::update() {
    // @addr 0x804aa194
    // FUN_segment_0__80500780(); — frame timing
    // Check animation state and apply
    // Read back viewport/scissor from sub-objects
}

u32 Furan::isReady() {
    // @addr 0x804aa340
    // u32 state = FUN_segment_0__804ff4b0(this + 0x98, 1);
    // return (state == 1 || state == 2) ? 1 : 0;
    return 0;
}

void* Furan::getRenderTarget() {
    // @addr 0x804aa384
    // u32* node = FUN_segment_0__804ff4b0(this + 0x98, 3);
    // return node->data;
    return nullptr;
}

void Furan::setUserParam(u32 param) {
    // @addr 0x804aa82c
    // *(u32*)(this + 0x250) = param;
    (void)param;
}

void* Furan::resetCreate() {
    // @addr 0x804aaa80
    create();
    return this;
}

// ============================================================================
// LargeFuran
// ============================================================================

void* LargeFuran::create() {
    // @addr 0x804b3990
    std::memset(this, 0, sizeof(LargeFuran));
    // FUN_segment_0__80500418(); — init frame system
    // FUN_segment_0__804c90c4(m_frameCtrl); — init frame processor

    // Set up 4 observer entries
    for (int i = 0; i < 4; i++) {
        m_observers[i].m_prevOffset = 0;
        m_observers[i].m_self = reinterpret_cast<GfxFuran*>(this);
        m_observers[i].m_nextOffset = 0;
    }

    m_target0 = m_target1 = m_target2 = nullptr;
    m_state = 0;
    m_priority = 1;
    m_stateMachine = 0;
    return this;
}

// ============================================================================
// ViewportManager
// ============================================================================

void ViewportManager::setCount(s32 count) {
    // @addr 0x804b3b6c
    m_count = count;
    // Allocate (count + 1) * sizeof(ViewportEntry) + 0x10 bytes
    // FUN_segment_0__80443430((count + 1) * 0x178 + 0x10);
}

void ViewportManager::resetAll() {
    // @addr 0x804b4024
    m_currentIndex = 0;
    s32 total = m_count + 1;
    for (s32 i = 0; i < total; i++) {
        m_entries[i].m_state = -1;  // mark uninitialized
        // FUN_segment_0__80500c48(); — flush
        // FUN_segment_0__804c5d1c(entries[i] + 0xa8, 0x43); — get node
        // Clear flag byte at node+0xBB
    }
}

u32 ViewportManager::allInitialized() {
    // @addr 0x804b40d8
    s32 count = m_count;
    if (count <= 0) return 1;
    for (s32 i = 0; i < count; i++) {
        if (m_entries[i].m_state < 0) {
            return 0;
        }
    }
    return 1;
}

u32 ViewportManager::allUninitialized() {
    // @addr 0x804b4118
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
// ============================================================================

namespace GfxMath {

void transformVec3(const f32 mat3x4[3][4], const f32 vec[3],
                   f32 result[3], f64 offsetY, u32 outParam) {
    // @addr 0x804a1134
    f32 y = 0.0f;
    if (vec[1] < static_cast<f32>(offsetY)) {
        y = static_cast<f32>(offsetY - static_cast<f64>(vec[1])) * mat3x4[0][2];
    }
    result[1] = mat3x4[0][0] * vec[0];
    result[0] = mat3x4[0][1] * vec[0] + y;
    result[2] = mat3x4[0][3] * vec[2];
    y = (static_cast<f32>(mat3x4[0][2]) + static_cast<f64>(offsetY)) * vec[1];
    result[1] = y + result[1];
    (void)outParam;
    // FUN_segment_0__80443430(outParam, result, mat3x4 + 9);
}

void transformVec3Clamped(const f32 mat3x4[3][4], const f32 vec[3],
                          f32 result[3], u32 outParam) {
    // @addr 0x804a1220
    f32 y2 = vec[2];
    f32 y1 = vec[1];
    result[1] = mat3x4[0][2];
    result[0] = mat3x4[0][1] * vec[0];
    result[2] = mat3x4[0][3] * y2;

    if (y1 != y2 && y1 < 0.0f) {
        result[1] = result[1] + (0.0f - y1) * static_cast<f32>(mat3x4[1][0]);
        y1 = y2;
    }
    result[1] = result[1] * y1;
    (void)outParam;
    // FUN_segment_0__80443430(outParam, result, mat3x4 + 6);
}

} // namespace GfxMath
} // namespace EGG