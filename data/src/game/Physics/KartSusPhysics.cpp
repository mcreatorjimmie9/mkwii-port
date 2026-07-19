// EGG::Heap allocator stub
#include <types.h>
namespace EGG {
class Heap {
public:
    static void* alloc(u32 size) { return nullptr; /* TODO: real allocator */ }
};
}

#include "KartSusPhysics.hpp"
// KartWheelPhysics.hpp is already included via KartSusPhysics.hpp
#include <cstring>

extern "C" {
void* operator new(size_t size, void* ptr);
void sub_80555bf4();       // EGG::Heap::alloc
void sub_8056e6d4();       // BspWheel::init
void sub_80590a9c();       // getPlayerId
void sub_80537ff8();       // getVehicleState
void sub_80584084();       // wheelPhysics->calc
void sub_80584688();       // wheelPhysics->updateSuspTravel
void sub_8059cfe0();       // BspWheel lookup/setup
void sub_80789eec();       // BSP collision ray cast
void sub_8056de6c();       // BSP collision finalize
void sub_805901cc();       // zero-initialize object
void sub_8059aaf0();       // per-wheel collision init
void sub_80598b48();       // compute wheel position
void sub_80598ba0();       // apply wheel position offset
void sub_8059aa84();       // set wheel initial position
void sub_80598c14();       // get wheel some value
void sub_8059aba8();       // wheel end collision
void sub_80590168();       // some pre-check
void sub_80590aac();       // some query
void sub_80590178();       // reset state
void sub_80576c54();       // final collision setup
void sub_80576b3c();       // compute suspension tops (front)
void sub_80576d8c();       // compute suspension tops (rear)
void sub_8058e844();       // compute weight distribution
void sub_805b42c0();       // wheel collision response init
void sub_80592e24();       // get speed scalar
void sub_80577d7c();       // compute wheel collision normal
void sub_805b479c();       // set wheel collision data
void sub_80811b84();       // wheel sound init
void sub_805b6ea4();       // internal collision init
void sub_8056d2bc();       // create collision object 1
void sub_8056c748();       // create collision object 2
void sub_8056cad0();       // create collision object 3
void sub_8058d40c();       // front collision inner init
void sub_8058d4e0();       // rear collision inner init
void sub_8058ca68();       // compose front collision
void sub_8058989c();       // compose rear collision
void sub_807bf168();       // collision reset (variant 1)
void sub_807c5ad0();       // collision reset (variant 2)
void sub_807c055c();       // finalize collision reset
// 0x-prefixed variants (used in code)
void sub_0x8058e844();
void sub_0x805b6ea4();
void sub_0x8058d40c();
void sub_0x8058d4e0();
void sub_0x8058ca68();
void sub_0x8058989c();
void sub_0x8056d2bc();
void sub_0x8056c748();
void sub_0x8056cad0();
void sub_0x80584084();
void sub_0x80584688();
void sub_0x80590168();
void sub_0x80590aac();
void sub_0x807bf168();
void sub_0x807c5ad0();
void sub_0x80590178();
void sub_0x807c055c();
}

// =============================================================================
// KartSusPhysics constructor — 0x8058e638 (80 bytes)
// Allocates internal BSP collision buffer (0x240 bytes) and initializes
// the suspension system for one wheel.
// =============================================================================
KartSusPhysics::KartSusPhysics(u32 wheelIdx, Kart::KartWheelType wType,
                                 s32 bspWheelIdx)
    : KartObjectProxy(), bspWheel(nullptr), wheelPhysics(nullptr),
      wheelType(wType), bspWheelIdx(bspWheelIdx), wheelIdx(wheelIdx),
      suspTop(EGG::Vector3f(0,0,0)), maxTravelScaled(0.0f),
      hasFloorCol(false), _36(0), _38(0.0f),
      downDir(EGG::Vector3f(0,0,0)) {
    // Allocate internal BSP collision buffer
    void* state = EGG::Heap::alloc(0x240);
    if (state == nullptr) return;

    // Initialize BSP wheel with the state buffer
    // sub_8056e6d4(state, wheelData at this+0x14, bspWheelIdx)
    sub_8056e6d4();
}

// =============================================================================
// KartSusPhysics::reset
// Resets suspension state to initial values
// =============================================================================
void KartSusPhysics::reset() {
    hasFloorCol = false;
    _36 = 0;
    _38 = 0.0f;
}

// =============================================================================
// KartSusPhysics::init — 0x8058e26c (972 bytes)
// Full initialization of the suspension system for one player vehicle.
// This is the master init that creates all sub-objects.
// =============================================================================
void KartSusPhysics::init() {
    // Get player BSP data from the player object
    void* playerObj = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(this) + 0x14);
    u8 bodyType = *reinterpret_cast<u8*>(
        reinterpret_cast<char*>(playerObj) + 0x10);

    // Compute wheel count and BSP base index
    void* globalRaceInfo = *reinterpret_cast<void**>(0x00000000);
    u32 bspBaseEntry = *reinterpret_cast<u32*>(
        reinterpret_cast<char*>(globalRaceInfo) + 0xB70);
    u32 bspBaseIdx = *reinterpret_cast<u32*>(
        reinterpret_cast<char*>(playerObj + bodyType * 0xF0) + 0x38);
    u32 wheelCategory = bspBaseIdx - 3;
    u32 wheelType = 0;
    if (wheelCategory < 32) {
        wheelType = __builtin_clz(wheelCategory) >> 5;
    }

    // Create two collision response objects for front/rear
    void* colObj1 = EGG::Heap::alloc(0x100);  // TODO: actual size
    void* colObj2 = EGG::Heap::alloc(0x100);  // TODO: actual size

    // Initialize both collision objects
    // sub_80562b2c(colObj1, 0, 1) — front collision
    // sub_80562b2c(colObj2, 0, 1) — rear collision
    // Both are initialized with type=0, param=1

    // Compute suspension top positions using BSP data
    u16 wheelCount = *reinterpret_cast<u16*>(
        reinterpret_cast<char*>(playerObj) + 0x0E);

    // sub_80576b3c(bspData, wheelCount, stateBuffer, bodyType)
    sub_80576b3c();

    // sub_80576d8c(bspData, wheelCount, stateBuffer)
    sub_80576d8c();

    // Compute weight distribution across wheels
    // sub_8058e844(this, ...) — reads weight distribution tables
    sub_0x8058e844();

    // ---- Create main KartWheelPhysics (0x9C bytes) ----
    void* mainWheel = EGG::Heap::alloc(0x9C);
    if (mainWheel == nullptr) return;

    // Zero-initialize
    sub_805901cc();
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(mainWheel) + 0x0C) = 0;
    for (int i = 0x24; i <= 0x38; i += 4) {
        *reinterpret_cast<f32*>(reinterpret_cast<char*>(mainWheel) + i) = 0.0f;
    }

    // Store reference to wheel physics
    *reinterpret_cast<void**>(
        reinterpret_cast<char*>(this) + 0x10) = mainWheel;

    // Initialize wheel via vtable (BSP setup)
    this->init();

    // Copy collision data pointer
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x20) =
        *reinterpret_cast<u32*>(reinterpret_cast<char*>(mainWheel) + 0x1C);
    *reinterpret_cast<uintptr_t*>(reinterpret_cast<char*>(this) + 0x34) =
        reinterpret_cast<uintptr_t>(mainWheel);

    // ---- Set up suspension collision BSP ray ----
    u16 bspWIdx = *reinterpret_cast<u16*>(
        reinterpret_cast<char*>(playerObj) + 0x0E);
    void* bspWData = *reinterpret_cast<void**>(playerObj);
    void* bspWPos = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(playerObj) + 0x14);
    void* bspWNorm = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(playerObj) + 0x18);

    // Get suspension distance from BSP wheel parameters
    void* wheelBspBase = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(bspWData) + 4);
    void* wheelSusData = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(mainWheel) + 0x10);
    f32 suspDist = *reinterpret_cast<f32*>(
        reinterpret_cast<char*>(wheelSusData) + 0x2C);

    // BSP ray cast setup:
    // sub_80789eec(wheelBspBase+0x68, suspDist, 1.0f, 1.0f, 2, 0, -1)
    //   origin: suspension top
    //   maxDist: suspension travel distance
    //   gravity: (0, -1, 0) scaled
    //   type: 2 (floor collision)
    //   excludeType: 0
    //   colFlags: -1 (any)
    sub_80789eec();

    // Store collision result
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x6C) = 0; // result

    // Virtual collision handler via vtable[0x10]
    // Processes BSP collision result for this wheel

    // Extract and store collision response data
    void* resp = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(playerObj) + 0x14);
    void* resp1 = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(resp) + 0x20);
    void* resp2 = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(resp) + 0x24);

    // Finalize collision processing
    sub_8056de6c();
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x24) = 0; // result

    // Virtual collision handler via vtable[0x14]
    // Secondary collision processing

    // ---- Initialize per-wheel KartWheelPhysics objects ----
    for (u32 i = 0; ; i++) {
        // sub_8059aaf0(wheelArray[i], i, stateBuffer)
        // Initialize each wheel from BSP data
        if (i >= bspWIdx) break;
    }

    // ---- Create wheel collision response (0x58 bytes) ----
    void* wheelColResp = EGG::Heap::alloc(0x58);
    if (wheelColResp == nullptr) return;

    // Initialize wheel collision response
    // sub_805b42c0(wheelColResp, m_state, 1, 0)
    sub_805b42c0();

    // Get current speed for collision response scaling
    f32 speedVal;
    sub_80592e24();
    *reinterpret_cast<f32*>(
        reinterpret_cast<char*>(wheelColResp) + 0x48) = speedVal * speedVal;

    // Compute wheel collision normal
    sub_80577d7c();

    // Set collision data on wheel
    sub_805b479c();

    // Store wheel collision response
    *reinterpret_cast<void**>(
        reinterpret_cast<char*>(this) + 0x3C) = wheelColResp;

    // Virtual handler via vtable[0x18] — post-collision setup

    // ---- Create internal collision processor (0x64 bytes) ----
    void* internalCol = EGG::Heap::alloc(0x64);
    sub_0x805b6ea4();
    *reinterpret_cast<void**>(
        reinterpret_cast<char*>(this) + 0x7C) = internalCol;

    // ---- Create sound object (0x10 bytes) ----
    void* soundObj = EGG::Heap::alloc(0x10);
    sub_80811b84();
    *reinterpret_cast<void**>(
        reinterpret_cast<char*>(this) + 0x50) = soundObj;

    // ---- Initialize front/rear collision objects ----
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x58) = 0;
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x5C) = 0;

    // Determine vehicle type for collision object creation
    bool isBikeVehicle = (*reinterpret_cast<u8*>(0x00000000) != 0);

    if (isBikeVehicle) {
        // Bike: front collision (0x5C bytes)
        void* frontCol = EGG::Heap::alloc(0x5C);
        void* frontInner = EGG::Heap::alloc(0x28);
        sub_0x8058d40c(); // init inner
        sub_0x8058ca68(); // compose
        *reinterpret_cast<void**>(
            reinterpret_cast<char*>(this) + 0x58) = frontCol;

        // Bike: rear collision (0xB4 bytes — larger for bikes)
        void* rearCol = EGG::Heap::alloc(0xB4);
        void* rearInner = EGG::Heap::alloc(0x28);
        sub_0x8058d4e0(); // init inner (rear variant)
        sub_0x8058989c(); // compose
        *reinterpret_cast<void**>(
            reinterpret_cast<char*>(this) + 0x5C) = rearCol;
    } else {
        // Kart: front collision (0x5C bytes)
        void* frontCol = EGG::Heap::alloc(0x5C);
        void* frontInner = EGG::Heap::alloc(0x28);
        sub_0x8058d40c(); // init inner
        sub_0x8058ca68(); // compose
        *reinterpret_cast<void**>(
            reinterpret_cast<char*>(this) + 0x58) = frontCol;

        // Kart: rear collision (0x5C bytes — same size)
        void* rearCol = EGG::Heap::alloc(0x5C);
        void* rearInner = EGG::Heap::alloc(0x28);
        sub_0x8058d4e0(); // init inner (rear variant)
        sub_0x8058989c(); // compose
        *reinterpret_cast<void**>(
            reinterpret_cast<char*>(this) + 0x5C) = rearCol;
    }

    // ---- Create additional collision state objects ----
    // Object at 0x70 (0x24 bytes)
    void* colObj3 = EGG::Heap::alloc(0x24);
    sub_0x8056d2bc();
    *reinterpret_cast<void**>(
        reinterpret_cast<char*>(this) + 0x70) = colObj3;

    // Object at 0x74 (0x14 bytes)
    void* colObj4 = EGG::Heap::alloc(0x14);
    sub_0x8056c748();
    *reinterpret_cast<void**>(
        reinterpret_cast<char*>(this) + 0x74) = colObj4;

    // Object at 0x78 (0x14 bytes)
    void* colObj5 = EGG::Heap::alloc(0x14);
    sub_0x8056cad0();
    *reinterpret_cast<void**>(
        reinterpret_cast<char*>(this) + 0x78) = colObj5;

    // Final BSP collision setup
    sub_80576c54();  // TODO: was (stateBuffer, -1)
}

// =============================================================================
// KartSusPhysics::calcCollision — 0x8058e688 (220 bytes)
// Casts a ray from suspension top downward to detect floor contact.
// Called once per wheel per frame after KartDynamics integration.
// =============================================================================
void KartSusPhysics::calcCollision(const EGG::Vector3f& gravity,
                                     const EGG::Matrix34f& mtx,
                                     f32 dt) {
    // Load BSP wheel data from the player object
    void* bspWheelObj = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(this) + 0x14);

    u16 wheelCount = *reinterpret_cast<u16*>(
        reinterpret_cast<char*>(bspWheelObj) + 0x0E);
    void* bspData = *reinterpret_cast<void**>(bspWheelObj);
    void* bspWheelPositions = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(bspWheelObj) + 0x14);
    void* bspWheelNormals = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(bspWheelObj) + 0x18);

    // Set up BSP collision query
    // sub_8059cfe0(bspData, bspWheelPositions, bspWheelNormals,
    //              wheelCount, someParam)
    sub_8059cfe0();

    // Get suspension parameters
    void* susData = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(this) + 0x10);
    void* wheelParams = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(susData) + 0x10);

    // Extract suspension distance and scale
    f32 suspDist = *reinterpret_cast<f32*>(
        reinterpret_cast<char*>(wheelParams) + 0x2C);

    // BSP ray cast setup
    // sub_80789eec(bspWheel+0x68, suspDist, 1.0f, 1.0f, 2, 0, -1)
    void* wheelBsp = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(bspData) + 4);
    sub_80789eec();

    // Store collision result
    void* colResult = nullptr; // returned from sub_80789eec
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x6C) =
        reinterpret_cast<uintptr_t>(colResult);

    // Store global collision result
    *reinterpret_cast<u32*>(0x00000000) =
        reinterpret_cast<uintptr_t>(colResult);

    // Virtual collision handler via vtable[0x10]
    // This processes the BSP collision result and updates wheel state

    // Extract and finalize collision response
    void* respObj = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(this) + 0x14);
    void* respOff1 = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(respObj) + 0x20);
    void* respOff2 = *reinterpret_cast<void**>(
        reinterpret_cast<char*>(respObj) + 0x24);

    // Finalize collision processing
    sub_8056de6c();

    // Store the collision response object
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x24) =
        reinterpret_cast<uintptr_t>(colResult);
}

// =============================================================================
// KartSusPhysics::calc — 0x8058ee88 (108 bytes)
// Main per-frame suspension update.
// Updates wheel physics and suspension state.
// =============================================================================
void KartSusPhysics::calc(const EGG::Vector3f& forward,
                             const EGG::Vector3f& vehicleMovement) {
    // Get player ID
    sub_80590a9c();
    u8 playerId = 0; // result

    // Get vehicle state (forward direction and movement vector)
    EGG::Vector3f forwardOut, movementOut;
    // sub_80537ff8(state, &forwardOut, &movementOut, playerId)
    sub_80537ff8();

    // Update wheel physics with forward direction
    // This computes lateral forces, wheel rotation, etc.
    // sub_80584084(forwardOut, movementOut)
    sub_0x80584084();

    // Update suspension travel and bounce response
    // sub_80584688(forwardOut)
    sub_0x80584688();
}

// =============================================================================
// KartSusPhysics::setInitialState
// Sets up initial state after spawn/respawn
// =============================================================================

// =============================================================================
// KartSusPhysics::resetQuaternions — 0x8058f860 (144 bytes)
// Resets rotation/quaternion state, used after cannon/respawn
// =============================================================================
    // TODO: void KartSusPhysics::resetQuaternions() {
    // Check some pre-condition
    sub_0x80590168();
    sub_0x80590aac();

    bool hasColState = false; // result from query

    if (hasColState) {
        // Create large collision reset object (0x6E4 bytes)
        void* obj = EGG::Heap::alloc(0x6E4);
        if (obj != nullptr) {
            sub_0x807bf168(); // Initialize collision reset variant 1
        }
    } else {
        // Create large collision reset object
        void* obj = EGG::Heap::alloc(0x6E4);
        if (obj != nullptr) {
            sub_0x807c5ad0(); // Initialize collision reset variant 2

            // Reset state at offset 0x1C
            void* ptr = reinterpret_cast<char*>(this) + 0x1C;
            sub_0x80590178(); // Reset state

            // Finalize reset
            sub_0x807c055c();

            // Store collision response references
            *reinterpret_cast<void**>(
                reinterpret_cast<char*>(this) + 0x18) = obj;
            *reinterpret_cast<void**>(
                reinterpret_cast<char*>(this) + 0x30) = obj;
        }
    }
}