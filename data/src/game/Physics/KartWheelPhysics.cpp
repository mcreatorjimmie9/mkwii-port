#include "KartWheelPhysics.hpp"
#include <cmath>
#include <cstring>

// EGG::Heap allocator stub
namespace EGG {
class Heap {
public:
    static void* alloc(u32 size) { return nullptr; /* TODO: real allocator */ }
};
}

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
void sub_80598aa84();       // Set wheel initial position
void sub_80598c14();       // Get wheel some value
void sub_8059aba8();       // Wheel end collision
void sub_807287dc();       // Wheel some effect
void sub_0x8056e6d4();      // BspWheel::init (0x prefix variant)
void sub_0x8059aaf0();      // Per-wheel collision init (0x prefix variant)
void sub_0x8058d40c();      // front collision inner init
void sub_0x8058d4e0();      // rear collision inner init
void sub_0x8058ca68();      // compose front collision
void sub_0x8058989c();      // compose rear collision
void sub_0x8056d2bc();      // create collision object 1
void sub_0x8056c748();      // create collision object 2
void sub_0x8056cad0();      // create collision object 3
void sub_0x805b6ea4();      // internal collision init
void sub_0x807bf168();      // collision reset variant 1
void sub_0x807c5ad0();      // collision reset variant 2
void sub_0x80590178();      // reset state
void sub_0x807c055c();      // finalize collision reset
void sub_0x80590168();      // some pre-check
void sub_0x80590aac();      // some query
void sub_0x80584084();      // wheelPhysics->calc
void sub_0x80584688();      // wheelPhysics->update
void sub_0x80576b3c();      // compute suspension tops (front)
void sub_0x80576d8c();      // compute suspension tops (rear)
void sub_0x80576c54();      // final collision setup
void sub_80537ff8();       // getVehicleState
void sub_80590a9c();       // getPlayerId
}

namespace Kart {

// =============================================================================
// KartWheelPhysics constructor — 0x8058e764
// Allocates and initializes the wheel physics state (0x9C bytes)
// =============================================================================
KartWheelPhysics::KartWheelPhysics(u32 wheelIdx, s32 bspWheelIdx)
    : KartObjectProxy() {
    // Allocate internal state (0x9C bytes for the internal collision object)
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
    this->suspTop = EGG::Vector3f::zero;

    // Store this object and call BSP init
    *reinterpret_cast<KartWheelPhysics**>(
        reinterpret_cast<char*>(this) + 0x10) = this;

    // Call virtual init via vtable[0x0C]
    this->init();

    // Copy collision data pointer
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x20) =
        *reinterpret_cast<u32*>(reinterpret_cast<char*>(state) + 0x1C);

    // Store self reference
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x34) =
        reinterpret_cast<uintptr_t>(state);
}

// =============================================================================
// KartWheelPhysics::calcCollision — 0x8058ec88
// Computes wheel collision state given bottom and topmost positions.
// =============================================================================
void KartWheelPhysics::calcCollision(const EGG::Vector3f& bottom,
                                        const EGG::Vector3f& topmostPos) {
    // Allocate collision response object (0x58 bytes)
    void* colResp = EGG::Heap::alloc(0x58);
    if (colResp == nullptr) return;

    // Initialize collision response with current wheel data
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
// KartWheelPhysics::setColState
// =============================================================================
void KartWheelPhysics::setColState(f32 dt, f32 travel,
                                     const EGG::Vector3f& colForce) {
    colVel = colForce;
    susTravel = travel;
}

// =============================================================================
// KartWheelPhysics::hasFloorCollision — query
// =============================================================================
bool KartWheelPhysics::hasFloorCollision() const {
    return false; // placeholder
}

// =============================================================================
// KartWheelPhysics::getCollisionFloorNrm — query
// =============================================================================
const EGG::Vector3f& KartWheelPhysics::getCollisionFloorNrm() const {
    return colVel; // placeholder
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
    sub_8059cfe0();

    // Get suspension top position and BSP wheel parameters
    void* susData = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(this) + 0x10);
    void* wheelData = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(susData) + 0x10);

    f32 suspDist = *reinterpret_cast<f32*>(
        reinterpret_cast<char*>(wheelData) + 0x2C);
    f32 gravityMag = 1.0f;
    f32 unknown = 0.0f;

    void* bspWheel = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(bspData) + 4);

    sub_80789eec();

    // Store collision result
    void* colResult = nullptr;
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x6C) =
        reinterpret_cast<uintptr_t>(colResult);

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
        reinterpret_cast<uintptr_t>(colResult);
}

// =============================================================================
// KartSusPhysics::calc — 0x8058ee88
// Main per-frame suspension update
// =============================================================================
void KartSusPhysics::calc(const EGG::Vector3f& forward,
                             const EGG::Vector3f& vehicleMovement) {
    // Get player ID and vehicle state
    sub_80590a9c();

    EGG::Vector3f state1, state2;
    sub_80537ff8();

    // Update wheel physics with new forward direction
    sub_0x80584084();

    // Update suspension travel and bounce
    sub_0x80584688();
}

// =============================================================================
// KartSusPhysics::init — 0x8058e26c
// Full initialization of suspension system for one player
// =============================================================================
void KartSusPhysics::init() {
    // Get player BSP data
    void* playerData = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(this) + 0x14);
    u8 bodyType = *reinterpret_cast<u8*>(
        reinterpret_cast<char*>(playerData) + 0x10);

    // Create two collision response objects
    void* colObj1 = EGG::Heap::alloc(0);
    void* colObj2 = EGG::Heap::alloc(0);

    u16 wheelCount = *reinterpret_cast<u16*>(
        reinterpret_cast<char*>(playerData) + 0x10);

    sub_0x80576b3c();
    sub_0x80576d8c();

    // Create main KartWheelPhysics object (0x9C bytes)
    void* mainWheel = EGG::Heap::alloc(0x9C);
    if (mainWheel == nullptr) return;

    sub_805901cc();

    *reinterpret_cast<u32*>(reinterpret_cast<char*>(mainWheel) + 0x0C) = 0;

    for (int i = 0x24; i <= 0x38; i += 4) {
        *reinterpret_cast<f32*>(reinterpret_cast<char*>(mainWheel) + i) = 0.0f;
    }

    // Store wheel physics reference
    *reinterpret_cast<void**>(
        reinterpret_cast<char*>(this) + 0x10) = mainWheel;

    this->init();

    // Copy collision data pointer
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x20) =
        *reinterpret_cast<u32*>(reinterpret_cast<char*>(mainWheel) + 0x1C);
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x34) =
        reinterpret_cast<uintptr_t>(mainWheel);

    // Set up suspension collision parameters from BSP
    u16 bspWheelIdx = *reinterpret_cast<u16*>(
        reinterpret_cast<char*>(playerData) + 0x0E);
    void* bspWheelData = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(playerData));
    void* bspWheelPos = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(playerData) + 0x14);
    void* bspWheelNormal = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(playerData) + 0x18);

    void* wheelBsp = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(bspWheelData) + 4);
    void* wheelSus = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(mainWheel) + 0x10);

    f32 suspDist = *reinterpret_cast<f32*>(
        reinterpret_cast<char*>(wheelSus) + 0x2C);

    sub_80789eec();
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x6C) = 0;

    // Extract collision response
    void* respData = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(playerData) + 0x14);
    void* resp1 = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(respData) + 0x20);
    void* resp2 = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(respData) + 0x24);

    sub_8056de6c();
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x24) = 0;

    // Initialize per-wheel KartWheelPhysics objects
    u32 i = 0;
    while (true) {
        i++;
        if (i >= bspWheelIdx) break;
    }

    // Create wheel collision response object (0x58 bytes)
    void* wheelColResp = EGG::Heap::alloc(0x58);
    if (wheelColResp == nullptr) return;

    sub_805b42c0();
    f32 speedVal;
    sub_80592e24();
    *reinterpret_cast<f32*>(
        reinterpret_cast<char*>(wheelColResp) + 0x48) = speedVal * speedVal;

    sub_80577d7c();
    sub_805b479c();
    *reinterpret_cast<void**>(
        reinterpret_cast<char*>(this) + 0x3C) = wheelColResp;

    // Create internal collision object (0x64 bytes)
    void* internalCol = EGG::Heap::alloc(0x64);
    sub_0x805b6ea4();
    *reinterpret_cast<void**>(
        reinterpret_cast<char*>(this) + 0x7C) = internalCol;

    // Create sound object (0x10 bytes)
    void* soundObj = EGG::Heap::alloc(0x10);
    sub_80811b84();
    *reinterpret_cast<void**>(
        reinterpret_cast<char*>(this) + 0x50) = soundObj;

    // Create front/rear collision processors
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x58) = 0;
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x5C) = 0;

    bool isBike = false; // placeholder
    if (isBike) {
        void* frontCol = EGG::Heap::alloc(0x5C);
        void* innerCol = EGG::Heap::alloc(0x28);
        sub_0x8058d40c();
        sub_0x8058ca68();
        *reinterpret_cast<void**>(
            reinterpret_cast<char*>(this) + 0x58) = frontCol;

        void* rearCol = EGG::Heap::alloc(0xB4);
        innerCol = EGG::Heap::alloc(0x28);
        sub_0x8058d4e0();
        sub_0x8058989c();
        *reinterpret_cast<void**>(
            reinterpret_cast<char*>(this) + 0x5C) = rearCol;
    } else {
        void* frontCol = EGG::Heap::alloc(0x5C);
        void* innerCol = EGG::Heap::alloc(0x28);
        sub_0x8058d40c();
        sub_0x8058ca68();
        *reinterpret_cast<void**>(
            reinterpret_cast<char*>(this) + 0x58) = frontCol;

        void* rearCol = EGG::Heap::alloc(0x5C);
        innerCol = EGG::Heap::alloc(0x28);
        sub_0x8058d4e0();
        sub_0x8058989c();
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
    sub_0x80576c54();
}

// TODO: resetQuaternions not in standalone KartSusPhysics header
/*
void KartSusPhysics::resetQuaternions() {
    sub_0x80590168();
    sub_0x80590aac();
    bool hasState = false;

    if (hasState) {
        void* obj = EGG::Heap::alloc(0x6E4);
        if (obj != nullptr) {
            sub_0x807bf168();
        }
    } else {
        void* obj = EGG::Heap::alloc(0x6E4);
        if (obj != nullptr) {
            sub_0x807c5ad0();
            void* ptr = reinterpret_cast<char*>(this) + 0x1C;
            sub_0x80590178();
            sub_0x807c055c();

            *reinterpret_cast<void**>(
                reinterpret_cast<char*>(this) + 0x18) = obj;
            *reinterpret_cast<void**>(
                reinterpret_cast<char*>(this) + 0x30) = obj;
        }
    }
}
*/ // end TODO: resetQuaternions

} // namespace Kart
