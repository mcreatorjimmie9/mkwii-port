#include "KartWheelPhysics.hpp"
#include <cmath>
#include <cstring>

extern "C" {
// External helpers from StaticR.rel
void* operator new(size_t size, void* ptr);  // placement new
void sub_80555bf4();       // EGG::Heap::alloc
void sub_8056e6d4();       // BspWheel::init or similar
void sub_8059cfe0();       // BspWheel lookup / setup
void sub_80789eec();       // BspWheel collision setup
void sub_8056de6c();       // BspWheel finalize collision
void sub_805901cc();       // KartObjectProxy::reset or similar
void sub_805982cc();       // Some wheel matrix computation
void sub_80595fb8();       // Some wheel effect
void sub_80592e24();       // Get speed scalar
void sub_80577d7c();       // Compute wheel collision normal
void sub_805b479c();       // Set wheel collision data
void sub_805b42c0();       // Wheel collision response
void sub_80811b84();       // Wheel sound init
void sub_8059aaf0();       // Per-wheel collision init
void sub_80598b48();       // Compute wheel position
void sub_80598ba0();       // Apply wheel position offset
void sub_8059aa84();       // Set wheel initial position
void sub_80598c14();       // Get wheel some value
void sub_8059aba8();       // Wheel end collision
void sub_807287dc();       // Wheel some effect
}

namespace Kart {

// =============================================================================
// KartWheelPhysics constructor — 0x8058e764
// Allocates and initializes the wheel physics state (0x9C bytes)
// =============================================================================
KartWheelPhysics::KartWheelPhysics(u32 wheelIdx, s32 bspWheelIdx)
    : KartObjectProxy() {
    // Allocate internal state (0x9C bytes for the internal collision object)
    // This call actually allocates the KartWheelPhysics itself at 0x9C
    // but in the decompiled code, the outer alloc is separate
    void* state = EGG::Heap::alloc(0x9C);
    if (state == nullptr) return;

    // Zero-initialize the state
    std::memset(state, 0, sizeof(KartWheelPhysics));

    // Set the physics engine index
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(state) + 0x0C) = 0;

    // Zero all vector fields
    this->wheelPos = EGG::Vector3f::zero;
    this->prevWheelPos = EGG::Vector3f::zero;
    this->prevWheelOffset = EGG::Vector3f::zero;
    this->colVel = EGG::Vector3f::zero;
    this->speed = EGG::Vector3f::zero;
    this->wheelEdgePos = EGG::Vector3f::zero;
    this->effectiveRadius = 0.0f;
    this->targetEffectiveRadius = 0.0f;
    this->isAtSuspLimit = 0.0f;
    this->susTop = EGG::Vector3f::zero;

    // Store this object and call BSP init
    *reinterpret_cast<KartWheelPhysics**>(
        reinterpret_cast<char*>(this) + 0x10) = this;

    // Call virtual init via vtable[0x0C]
    // (decompiled: r12 = [r31+0xC]; r12 = [r12+0xC]; bctrl)
    this->init();

    // Copy collision data pointer
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x20) =
        *reinterpret_cast<u32*>(reinterpret_cast<char*>(state) + 0x1C);

    // Store self reference
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x34) =
        reinterpret_cast<u32>(state);
}

// =============================================================================
// KartWheelPhysics::init — (inlined in constructor)
// Initializes BSP wheel data
// =============================================================================

// =============================================================================
// KartWheelPhysics::reset — (not directly visible, likely inlined)
// =============================================================================

// =============================================================================
// KartWheelPhysics::calcCollision — 0x8058ec88
// Computes wheel collision state given bottom and topmost positions.
// Called from KartSusPhysics::calcCollision.
// =============================================================================
void KartWheelPhysics::calcCollision(const EGG::Vector3f& bottom,
                                        const EGG::Vector3f& topmostPos) {
    // Allocate collision response object (0x58 bytes)
    void* colResp = EGG::Heap::alloc(0x58);
    if (colResp == nullptr) return;

    // Initialize collision response with current wheel data
    // sub_805b42c0(colResp, m_someState, 1, 0)
    sub_805b42c0();

    // Get speed scalar for collision response
    f32 speedVal;
    sub_80592e24();
    f32 speedSq = speedVal * speedVal;

    // Store squared speed in collision response
    *reinterpret_cast<f32*>(reinterpret_cast<char*>(colResp) + 0x48) = speedSq;

    // Compute wheel collision normal
    sub_80577d7c();

    // Set collision data on the wheel
    sub_805b479c();

    // Store collision response object
    *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x3C) = colResp;
}

// =============================================================================
// KartWheelPhysics::setColState — (inlined in calcCollision)
// Sets the collision state after a floor hit is detected
// =============================================================================
void KartWheelPhysics::setColState(f32 dt, f32 travel,
                                     const EGG::Vector3f& colForce) {
    // Store collision velocity
    colVel = colForce;
    // Store suspension travel
    susTravel = travel;
    // Mark floor collision
    // hasFloorCol = true; (stored elsewhere)
}

// =============================================================================
// KartWheelPhysics::updateEffectiveRadius — (called from calc)
// Interpolates effective radius towards target (tire squish)
// =============================================================================

// =============================================================================
// KartWheelPhysics::calc — (called from KartSusPhysics::calc)
// Main per-frame wheel update
// =============================================================================

// =============================================================================
// KartWheelPhysics::computeLateralForce — 0x80599dc0 (inlined)
// Computes lateral force contribution from this wheel
// =============================================================================

// =============================================================================
// KartWheelPhysics::hasFloorCollision — query
// =============================================================================
bool KartWheelPhysics::hasFloorCollision() const {
    // Collision info is stored in the internal state object
    return false; // placeholder
}

// =============================================================================
// KartWheelPhysics::getCollisionFloorNrm — query
// =============================================================================
const EGG::Vector3f& KartWheelPhysics::getCollisionFloorNrm() const {
    return colVel; // placeholder — actual field may differ
}

// =============================================================================
// KartWheelPhysics::getKartCollisionInfo — query
// =============================================================================
const void* KartWheelPhysics::getKartCollisionInfo() const {
    return nullptr; // placeholder
}

// =============================================================================
// KartSusPhysics constructor — 0x8058e638
// Allocates (0x240 bytes) and initializes suspension physics
// =============================================================================
KartSusPhysics::KartSusPhysics(u32 wheelIdx, KartWheelType wheelType,
                                 s32 bspWheelIdx)
    : KartObjectProxy() {
    // Allocate internal state buffer (0x240 bytes)
    void* state = EGG::Heap::alloc(0x240);
    if (state == nullptr) return;

    // Initialize BSP wheel with state data
    sub_8056e6d4();
}

// =============================================================================
// KartSusPhysics::calcCollision — 0x8058e688
// Casts a ray from the suspension top downward to detect floor contact.
// Called once per wheel per frame after KartDynamics integration.
// =============================================================================
void KartSusPhysics::calcCollision(const EGG::Vector3f& gravity,
                                     const EGG::Matrix34f& mtx,
                                     f32 dt) {
    // Load BSP wheel data
    void* bspWheelPtr = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(this) + 0x14);

    u16 wheelCount = *reinterpret_cast<u16*>(
        reinterpret_cast<char*>(bspWheelPtr) + 0x0E);
    void* bspData = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(bspWheelPtr));
    void* wheelPositions = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(bspWheelPtr) + 0x14);
    void* wheelNormals = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(bspWheelPtr) + 0x18);

    // Set up BSP collision query
    // sub_8059cfe0(bspData, wheelPositions, wheelNormals, wheelCount, ...)
    sub_8059cfe0();

    // Get suspension top position and BSP wheel parameters
    void* susData = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(this) + 0x10);
    void* wheelData = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(susData) + 0x10);

    // Extract scale-dependent suspension parameters
    f32 suspDist = *reinterpret_cast<f32*>(
        reinterpret_cast<char*>(wheelData) + 0x2C);
    f32 gravityMag = 1.0f; // unit gravity direction
    f32 unknown = 0.0f;

    // Set up collision ray: from top of suspension downward
    void* bspWheel = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(bspData) + 4);

    // sub_80789eec(bspWheel+0x68, suspDist, gravityMag, gravityDir,
    //              2, 0, -1)
    // Ray cast from suspension top with parameters:
    //   origin = suspension top
    //   direction = gravity (downward)
    //   maxDist = suspension travel
    //   type = 2 (floor)
    //   excludeType = 0
    //   colFlags = -1 (any collision)
    sub_80789eec();

    // Store collision result
    void* colResult = /* returned from 0x80789eec */;
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x6C) =
        reinterpret_cast<u32>(colResult);

    // Call virtual collision handler (vtable[0x10])
    // (decompiled: r12 = [r29+0xC]; r12 = [r12+0x10]; bctrl)
    // This processes the BSP collision result

    // Extract collision response data
    void* respData = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(this) + 0x14);
    void* respOffset1 = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(respData) + 0x20);
    void* respOffset2 = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(respData) + 0x24);

    // Finalize collision processing
    sub_8056de6c();

    // Store the collision response object
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x24) =
        reinterpret_cast<u32>(colResult);
}

// =============================================================================
// KartSusPhysics::calc — 0x8058ee88
// Main per-frame suspension update
// =============================================================================
void KartSusPhysics::calc(const EGG::Vector3f& forward,
                             const EGG::Vector3f& vehicleMovement) {
    // Get player ID and vehicle state
    sub_80590a9c(); // getPlayerId

    // Compute forward and movement data
    EGG::Vector3f state1, state2;
    sub_80537ff8(); // getVehicleState(forward, movement, state1, state2)

    // Update wheel physics with new forward direction
    sub_0x80584084(); // wheelPhysics->calc(state1, state2)

    // Update suspension travel and bounce
    sub_0x80584688(); // wheelPhysics->update(state1)
}

// =============================================================================
// KartSusPhysics::init — 0x8058e26c (large init function)
// Full initialization of suspension system for one player
// =============================================================================
void KartSusPhysics::init() {
    // This function is the master init for a player's wheel/suspension system
    // It:
    // 1. Creates collision objects
    // 2. Sets up BSP wheel data
    // 3. Initializes KartWheelPhysics for each wheel
    // 4. Sets up collision response
    // 5. Creates suspension physics objects
    // 6. Links wheel and suspension objects

    // Get player BSP data
    void* playerData = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(this) + 0x14);
    u8 bodyType = *reinterpret_cast<u8*>(
        reinterpret_cast<char*>(playerData) + 0x10);

    // Compute wheel count and BSP indices from body type
    u32 bspBaseIdx = *reinterpret_cast<u32*>(
        reinterpret_cast<char*>(playerData + bodyType * 0xF0) + 0x38);
    u32 wheelType = (bspBaseIdx - 3);
    // r27 = cntlzw(wheelType) >> 5 (clz gives power-of-2 category)

    // Create two collision response objects (front and rear)
    void* colObj1 = EGG::Heap::alloc(/* size */);
    void* colObj2 = EGG::Heap::alloc(/* size */);

    // Initialize collision objects
    // sub_80562b2c(colObj1, 0, 1) — type 0, param 1
    // sub_80562b2c(colObj2, 0, 1) — type 0, param 1

    // Load wheel count from BSP
    u16 wheelCount = *reinterpret_cast<u16*>(
        reinterpret_cast<char*>(playerData) + 0x10);

    // Compute suspension top positions
    // sub_80576b3c(bspData, wheelCount, stateBuffer, bodyType)
    sub_80576b3c();
    // sub_80576d8c(bspData, wheelCount, stateBuffer)
    sub_80576d8c();

    // Compute per-wheel weight distribution
    // sub_8058e844(this, ...) — weight distribution calculation
    sub_0x8058e844();

    // Create main KartWheelPhysics object (0x9C bytes)
    void* mainWheel = EGG::Heap::alloc(0x9C);
    if (mainWheel == nullptr) return;

    // Initialize the main wheel physics
    sub_805901cc(); // zero-initialize

    // Set physics engine index
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(mainWheel) + 0x0C) = 0;

    // Zero all float fields
    for (int i = 0x24; i <= 0x38; i += 4) {
        *reinterpret_cast<f32*>(reinterpret_cast<char*>(mainWheel) + i) = 0.0f;
    }

    // Store wheel physics reference
    *reinterpret_cast<void**>(
        reinterpret_cast<char*>(this) + 0x10) = mainWheel;

    // Initialize BSP wheel via vtable[0x0C]
    this->init();

    // Copy collision data pointer
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x20) =
        *reinterpret_cast<u32*>(reinterpret_cast<char*>(mainWheel) + 0x1C);
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x34) =
        reinterpret_cast<u32>(mainWheel);

    // Set up suspension collision parameters from BSP
    u16 bspWheelIdx = *reinterpret_cast<u16*>(
        reinterpret_cast<char*>(playerData) + 0x0E);
    void* bspWheelData = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(playerData));
    void* bspWheelPos = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(playerData) + 0x14);
    void* bspWheelNormal = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(playerData) + 0x18);

    // Collision ray setup (same as calcCollision)
    void* wheelBsp = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(bspWheelData) + 4);
    void* wheelSus = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(mainWheel) + 0x10);

    f32 suspDist = *reinterpret_cast<f32*>(
        reinterpret_cast<char*>(wheelSus) + 0x2C);
    f32 gravDir = 1.0f;
    f32 unknown = 0.0f;

    sub_80789eec(); // BSP collision setup
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x6C) =
        /* result */ 0;

    // Virtual collision handler (vtable[0x10])
    // Process BSP collision result

    // Extract collision response
    void* respData = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(playerData) + 0x14);
    void* resp1 = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(respData) + 0x20);
    void* resp2 = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(respData) + 0x24);

    sub_8056de6c(); // Finalize collision
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x24) =
        /* result */ 0;

    // Virtual collision handler (vtable[0x14])
    // Secondary collision processing

    // Initialize per-wheel KartWheelPhysics objects
    u32 i = 0;
    while (true) {
        // sub_8059aaf0(wheelArray[i], i, stateBuffer)
        // Initialize wheel i from BSP data
        i++;
        if (i >= bspWheelIdx) break;
    }

    // Create wheel collision response object (0x58 bytes)
    void* wheelColResp = EGG::Heap::alloc(0x58);
    if (wheelColResp == nullptr) return;

    // Initialize wheel collision response
    sub_805b42c0(); // with (wheelColResp, m_state, 1, 0)
    f32 speedVal;
    sub_80592e24();
    *reinterpret_cast<f32*>(
        reinterpret_cast<char*>(wheelColResp) + 0x48) = speedVal * speedVal;

    sub_80577d7c(); // Compute wheel collision normal
    sub_805b479c(); // Set wheel collision data
    *reinterpret_cast<void**>(
        reinterpret_cast<char*>(this) + 0x3C) = wheelColResp;

    // Virtual handler (vtable[0x18])
    // Post-collision setup

    // Create internal collision object (0x64 bytes)
    void* internalCol = EGG::Heap::alloc(0x64);
    sub_0x805b6ea4(); // Initialize
    *reinterpret_cast<void**>(
        reinterpret_cast<char*>(this) + 0x7C) = internalCol;

    // Create sound object (0x10 bytes)
    void* soundObj = EGG::Heap::alloc(0x10);
    sub_80811b84(); // Initialize sound
    *reinterpret_cast<void**>(
        reinterpret_cast<char*>(this) + 0x50) = soundObj;

    // Create front/rear collision processors
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x58) = 0;
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x5C) = 0;

    // Determine vehicle type for collision object creation
    bool isBike = (*reinterpret_cast<u8*>(0x00000000) != 0);
    if (isBike) {
        // Bike: create 0x5C-byte collision object
        void* frontCol = EGG::Heap::alloc(0x5C);
        void* innerCol = EGG::Heap::alloc(0x28);
        sub_0x8058d40c(); // Initialize inner
        sub_0x8058ca68(); // Compose front collision
        *reinterpret_cast<void**>(
            reinterpret_cast<char*>(this) + 0x58) = frontCol;

        void* rearCol = EGG::Heap::alloc(0xB4);
        innerCol = EGG::Heap::alloc(0x28);
        sub_0x8058d4e0(); // Initialize inner (rear)
        sub_0x8058989c(); // Compose rear collision
        *reinterpret_cast<void**>(
            reinterpret_cast<char*>(this) + 0x5C) = rearCol;
    } else {
        // Kart: create 0x5C-byte collision objects
        void* frontCol = EGG::Heap::alloc(0x5C);
        void* innerCol = EGG::Heap::alloc(0x28);
        sub_0x8058d40c(); // Initialize inner
        sub_0x8058ca68(); // Compose
        *reinterpret_cast<void**>(
            reinterpret_cast<char*>(this) + 0x58) = frontCol;

        void* rearCol = EGG::Heap::alloc(0x5C);
        innerCol = EGG::Heap::alloc(0x28);
        sub_0x8058d4e0(); // Initialize inner (rear)
        sub_0x8058989c(); // Compose
        *reinterpret_cast<void**>(
            reinterpret_cast<char*>(this) + 0x5C) = rearCol;
    }

    // Create additional collision objects
    void* colObj3 = EGG::Heap::alloc(0x24);
    sub_0x8056d2bc();
    *reinterpret_cast<void**>(
        reinterpret_cast<char*>(this) + 0x70) = colObj3;

    void* colObj4 = EGG::Heap::alloc(0x14);
    sub_0x8056c748();
    *reinterpret_cast<void**>(
        reinterpret_cast<char*>(this) + 0x74) = colObj4;

    void* colObj5 = EGG::Heap::alloc(0x14);
    sub_0x8056cad0();
    *reinterpret_cast<void**>(
        reinterpret_cast<char*>(this) + 0x78) = colObj5;

    // Final setup
    sub_80576c54(/* stateBuffer */, -1);
}

// =============================================================================
// KartSusPhysics::reset
// =============================================================================

// =============================================================================
// KartSusPhysics::setInitialState
// =============================================================================

// =============================================================================
// KartSusPhysics::resetQuaternions — 0x8058f860
// Resets quaternion/rotation state after e.g. respawn or cannon
// =============================================================================
void KartSusPhysics::resetQuaternions() {
    // Check some condition
    sub_0x80590168(); // someCheck
    sub_0x80590aac(); // someQuery
    bool hasState = false;

    if (hasState) {
        // Create collision response object
        void* obj = EGG::Heap::alloc(0x6E4);
        if (obj != nullptr) {
            sub_0x807bf168(); // Initialize collision reset
            // Store result
        }
    } else {
        void* obj = EGG::Heap::alloc(0x6E4);
        if (obj != nullptr) {
            sub_0x807c5ad0(); // Initialize collision reset (alternate)
            // Set up pointer
            void* ptr = reinterpret_cast<char*>(this) + 0x1C;
            sub_0x80590178(); // Reset some state
            sub_0x807c055c(); // Finalize reset

            // Store collision response references
            *reinterpret_cast<void**>(
                reinterpret_cast<char*>(this) + 0x18) = obj;
            *reinterpret_cast<void**>(
                reinterpret_cast<char*>(this) + 0x30) = obj;
        }
    }
}

} // namespace Kart