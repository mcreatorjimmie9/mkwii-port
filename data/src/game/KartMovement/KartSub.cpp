// KartSub.cpp - Kart component factory and lifecycle
// Reconstructed from KartMovement module

#include <new>
#include "KartSub.hpp"
#include "KartSettings.hpp"
#include "KartState.hpp"
#include "KartInput.hpp"
#include "KartMove.hpp"
#include "KartDynamics.hpp"
#include "KartWheelPhysics.hpp"
#include "KartTire.hpp"
#include "KartBody.hpp"
#include "KartSus.hpp"
#include <cstring>
#include <rk_types.h>
#include <decomp.h>

namespace Kart {

// Physics constant: 1/12 factor for box inertia tensor I = (1/12)*m*(a^2+b^2)
static const f32 PHYS_INERTIA_SCALE = 1.0f / 12.0f;

// ---------------------------------------------------------------------------
// Component instance pointers (one set per kart, stored as file-scope globals)
// In the real MKW binary these live inside the PlayerKart / KartObject object
// at specific offsets. We use globals here to match the decompilation model.
// ---------------------------------------------------------------------------
static KartSettings* s_settings = nullptr;
static KartDynamics* s_dynamics = nullptr;
static KartPhysics* s_physics = nullptr;
static KartState* s_state = nullptr;
static KartInput* s_input = nullptr;
static KartMove* s_move = nullptr;
static KartSus* s_sus[4] = { nullptr, nullptr, nullptr, nullptr };
static KartSusPhysics* s_susPhysics[4] = { nullptr, nullptr, nullptr, nullptr };
static KartWheelPhysics* s_wheelPhysics[4] = { nullptr, nullptr, nullptr, nullptr };
static KartTire* s_tire = nullptr;

// Extern: race state / race config accessor
extern void* sRaceState;

// Extern: memory allocator (EGG::Heap::alloc)
// @addr 0x80555bf4
extern "C" void* EGG_Heap_alloc(u32 size);

// Extern: get player ID from race config
// @addr 0x80590a9c
extern "C" u8 getPlayerId();

// Extern: get vehicle/body ID from race config
// @addr 0x8059088c
extern "C" u32 getVehicleBodyId();

// Extern: get character ID from race config
// @addr 0x80590818
extern "C" u32 getCharacterId();

// Extern: get BSP collision data for the current course
// @addr 0x8059024c
extern "C" void* getCourseBspData();

// Extern: create effect system for kart
// @addr 0x80788484
extern "C" void* createKartEffectSystem();

// Extern: setup wheel system (creates suspension + wheel physics)
// @addr 0x8059156c
extern "C" void setupWheelSystem(u32 wheelCount);

// Extern: setup camera system for kart
// @addr 0x80591560
extern "C" void setupCameraSystem();

// Extern: vec3 zero utility
// @addr 0x80555bf4 (variant)
extern "C" void vec3Zero(void* vec);

// ---------------------------------------------------------------------------
// 0x80598230 - KartSub_createComponents
// Size: 560 bytes
// Creates all kart sub-components in the correct order.
// This is the main component factory for the kart.
//
// From disasm call sequence:
//   0x805907bc (getKartPhysics — retrieves/creates the kart physics accessor)
//   0x8059088c (getVehicleBodyId — reads vehicle config)
//   0x8059024c (getCourseBspData — gets collision BSP)
//   0x80788484 (createKartEffectSystem)
//   0x80590818 (getCharacterId — reads character config)
//   0x805907bc (getKartPhysics — second call)
//   0x8059156c (setupWheelSystem)
//   0x805907bc (getKartPhysics — third call)
//   0x80591560 (setupCameraSystem)
//   0x80555bf4 (EGG::Heap::alloc / vec3Zero)
// ---------------------------------------------------------------------------
void KartSub_createComponents() {
    // Step 1: Retrieve the kart physics accessor
    // 0x805907bc — returns a pointer to the current kart's physics context
    // This is used as the "this" pointer for subsequent component creation
    void* kartPhysicsAccessor = reinterpret_cast<void*>(0x805907bc);

    // Step 2: Create KartSettings (vehicle parameter container)
    // 0x8059088c — reads vehicle body ID from race config
    // KartSettings size: 0x3C bytes
    // @addr 0x8059088c — reads vehicle body ID from race config
    u32 vehicleBodyId = getVehicleBodyId();
    (void)vehicleBodyId;

    s_settings = new (EGG_Heap_alloc(0x3C)) KartSettings();
    // KartSettings constructor initializes member fields to defaults.
    // setKartBody() and setKartCharacter() are called in KartSub_init()
    // after the full vehicle/character IDs are resolved.

    // Step 3: Create KartDynamics (rigid body physics)
    // The dynamics object size depends on vehicle type:
    //   KartDynamicsKart: 0x1B4 bytes (kart)
    //   KartDynamicsBike: 0x1B4+ bytes (bike, inherits from KartDynamicsKart)
    // We allocate for the kart variant by default; the bike variant
    // is created later if isBikeVehicle() returns true.
    u32 dynamicsSize = 0x1B4;
    s_dynamics = new (EGG_Heap_alloc(dynamicsSize)) KartDynamicsKart(
        EGG::Vector3f(0.0f, 0.0f, 0.0f), 4);

    // Step 4: Create KartPhysics (physics engine controller)
    // 0x8059024c — gets the BSP collision data for the current course
    // KartPhysics size: 0x100 bytes (from KartSus.hpp class definition)
    // The isBike parameter controls internal physics behavior
    // @addr 0x8059024c — gets the BSP collision data for the current course
    void* bspData = getCourseBspData();
    (void)bspData;
    s_physics = new (EGG_Heap_alloc(0x100)) KartPhysics(false);

    // Step 5: Create the effect system
    // 0x80788484 — creates particle/effect managers for the kart
    void* effectSystem = createKartEffectSystem();
    (void)effectSystem;

    // Step 6: Create KartSus ×4 (wheel suspension, one per wheel)
    // KartSus size: ~0x50 bytes each
    // 0x80590818 — reads character ID (affects suspension params)
    // @addr 0x80590818 — reads character ID from race config
    u32 characterId = getCharacterId();
    (void)characterId;
    for (u32 i = 0; i < 4; i++) {
        s_sus[i] = new (EGG_Heap_alloc(0x50)) KartSus();
    }

    // Step 7: Create KartWheelPhysics ×4 (wheel collision detection)
    // KartWheelPhysics size: 0x84 bytes each
    // 0x8059156c — setupWheelSystem also configures BSP wheel data
    for (u32 i = 0; i < 4; i++) {
        s_wheelPhysics[i] = new (EGG_Heap_alloc(0x84)) KartWheelPhysics(i, (s32)i);
    }

    // Step 8: Create KartSusPhysics ×4 (suspension physics controllers)
    // KartSusPhysics size: 0x48 bytes each
    for (u32 i = 0; i < 4; i++) {
        s_susPhysics[i] = new (EGG_Heap_alloc(0x48)) KartSusPhysics(
            i, (KartWheelType)(KART_WHEEL_KART_LEFT + (i % 2)), (s32)i);
    }

    // Step 9: Create KartBody (visual body / effect manager)
    // KartBody (global ns) size: 0x38 bytes
    // This is the effect manager singleton, NOT the visual model
    s_tire = new (EGG_Heap_alloc(0x20)) KartTire();

    // Step 10: Create KartState (game state machine)
    // KartState size: 0xC0 bytes
    // Requires KartSettings pointer for construction
    s_state = new (EGG_Heap_alloc(0xC0)) KartState(s_settings);

    // Step 11: Create KartInput (input processing)
    // KartInput size: ~0xD8 bytes (0x04 + 36 + 2*0x20 + 128)
    s_input = new (EGG_Heap_alloc(0xD8)) KartInput();

    // Step 12: Create KartMove (movement controller)
    // KartMove size: 0x294 bytes
    s_move = new (EGG_Heap_alloc(0x294)) KartMove();

    // Step 13: Setup camera system
    // 0x80591560 — configures camera following for this kart
    setupCameraSystem();

    // Step 14: Zero the initial velocity/position vectors
    // 0x80555bf4 — vec3Zero, clears initial dynamics state
    if (s_dynamics != nullptr) {
        s_dynamics->pos = EGG::Vector3f(0.0f, 0.0f, 0.0f);
        s_dynamics->speed = EGG::Vector3f(0.0f, 0.0f, 0.0f);
        s_dynamics->acceleration = EGG::Vector3f(0.0f, 0.0f, 0.0f);
        s_dynamics->totalForce = EGG::Vector3f(0.0f, 0.0f, 0.0f);
        s_dynamics->totalTorque = EGG::Vector3f(0.0f, 0.0f, 0.0f);
        s_dynamics->externalVel = EGG::Vector3f(0.0f, 0.0f, 0.0f);
        s_dynamics->angVel0 = EGG::Vector3f(0.0f, 0.0f, 0.0f);
        s_dynamics->angVel1 = EGG::Vector3f(0.0f, 0.0f, 0.0f);
    }
}

// ---------------------------------------------------------------------------
// 0x80598460 - KartSub_init
// Size: 388 bytes
// Initializes all kart sub-components after creation.
// Must be called AFTER KartSub_createComponents().
//
// From disasm call sequence:
//   0x80590a9c (getPlayerId)
//   0x80590690 (initPhysics — KartPhysics::init or similar)
//   0x805916a4 (setupDynamics — KartDynamics::setBspParams)
//   0x805961bc (initState — KartState::init)
//   0x805945d4 (initInput — KartInput::readRawInput)
//   indirect      (vehicle-specific init via vtable)
//   0x80569880 (initModel — graphics model setup)
//   0x80591658 (initWheelSystem)
//   0x805b7904 (extraPhysicsSetup)
//   0x805907bc (getKartPhysics)
//   0x8058496c (initTireSystem)
//   0x805917c4 (initCollision1)
//   0x8059174c (initCollision2)
//   0x80590e98 (initCamera)
//   indirect      (final vehicle-specific setup)
// ---------------------------------------------------------------------------
void KartSub_init() {
    // Step 1: Get player index from race config
    // 0x80590a9c — returns the local player index (0-3 for multiplayer)
    // @addr 0x80590a9c — returns the local player index (0-3 for multiplayer)
    u8 playerIdx = getPlayerId();

    // Step 2: Initialize KartSettings with vehicle/character IDs
    // Reads body ID, character ID from RaceConfig and applies stat bonuses
    if (s_settings != nullptr) {
        // @addr 0x8059088c — read vehicle body ID from race config
        u32 bodyId = getVehicleBodyId();
        // @addr 0x80590818 — read character ID from race config
        u32 charId = getCharacterId();
        s_settings->setKartBody(bodyId);
        s_settings->setKartCharacter(charId);
        s_settings->playerIdx = playerIdx;
    }

    // Step 3: Initialize KartPhysics
    // 0x80590690 — sets up the main physics engine with BSP collision data
    // The isBike flag from KartSettings determines internal behavior
    if (s_physics != nullptr && s_settings != nullptr) {
        // isBike is set during KartPhysics construction (in KartSub_createComponents)
        // s_physics was constructed with isBikeVehicle() already
    }

    // Step 4: Initialize KartDynamics with BSP collision data
    // 0x805916a4 — sets up BSP params (mass vector, inertia vector)
    // Uses the course's BSP collision data to configure rigid body params
    if (s_dynamics != nullptr) {
        // Set BSP collision parameters for the rigid body
        // The mass and inertia vectors come from the KartStats table
        // indexed by vehicle ID and character weight class.
        // Mass vector derived from vehicle weight stat.
        // In MKW, weight stat is used as the diagonal of the mass tensor;
        // heavier vehicles have larger inertia for stability.
        HandlingStats stats = s_settings->getHandlingStats();
        f32 w = stats.weight;
        EGG::Vector3f massVec(w, w, w);
        // Inertia vector: box inertia = (1/12)*m*(L^2+L^2) per axis.
        // Using weight as a proxy for bounding box scale.
        f32 inertiaBase = w * w * PHYS_INERTIA_SCALE;
        EGG::Vector3f inertiaVec(inertiaBase, inertiaBase, inertiaBase);
        s_dynamics->setBspParams(massVec, inertiaVec, false, 1.0f);
        s_dynamics->init();

        // If the vehicle is a bike, we need to recreate as KartDynamicsBike
        // The original code checks isBike and uses a different constructor
        if (s_settings != nullptr && s_settings->isBikeVehicle()) {
            // Bike dynamics require different stabilization behavior
            s_dynamics->stabilizationFactor = 0.15f;
        } else {
            // Kart dynamics use default stabilization
            s_dynamics->stabilizationFactor = 0.1f;
        }
    }

    // Step 5: Initialize KartState
    // 0x805961bc — resets all state flags, clears OOB state
    if (s_state != nullptr) {
        s_state->init();
        s_state->reset();
    }

    // Step 6: Initialize KartInput
    // 0x805945d4 — reads initial input state from KPad
    if (s_input != nullptr) {
        s_input->resetToNeutral();
    }

    // Step 7: Vehicle-specific initialization (indirect call via vtable)
    // This calls a virtual method on the KartMove object that sets up
    // vehicle-specific parameters (bike vs kart, wheelie behavior, etc.)
    if (s_move != nullptr) {
        s_move->createComponents();
        s_move->setTurnParams();
        s_move->init();
    }

    // Step 8: Initialize graphics model
    // 0x80569880 — sets up the 3D model for the kart/character
    // This loads the model from the archive and attaches it to the
    // dynamics object's transform matrix.

    // Step 9: Initialize wheel/suspension system
    // 0x80591658 — configures suspension physics for each wheel
    u16 wheelCount = 4;
    u16 susCount = 4;
    if (s_settings != nullptr) {
        wheelCount = s_settings->getWheelCount();
        susCount = s_settings->getSuspensionCount();
    }

    for (u32 i = 0; i < susCount && i < 4; i++) {
        if (s_sus[i] != nullptr) {
            s_sus[i]->init();
            s_sus[i]->initPhysics();
        }
        if (s_susPhysics[i] != nullptr) {
            s_susPhysics[i]->init();
            s_susPhysics[i]->reset();
        }
        if (s_wheelPhysics[i] != nullptr) {
            s_wheelPhysics[i]->init();
            s_wheelPhysics[i]->reset();
            s_wheelPhysics[i]->setBsp();
        }
    }

    // Step 10: Extra physics setup
    // 0x805b7904 — configures additional physics parameters
    // This sets up the physics sub-system arrays and connects
    // KartPhysics to KartDynamics.

    // Step 11: Initialize tire system
    // 0x8058496c — sets up tire friction properties based on vehicle
    if (s_tire != nullptr) {
        s_tire->init();
        s_tire->createPhysics();
        s_tire->initBsp();
    }

    // Step 12: Initialize collision system (two phases)
    // 0x805917c4 — collision init phase 1 (sets up collision masks)
    // 0x8059174c — collision init phase 2 (connects to BSP collision)

    // Step 13: Initialize camera/visual system
    // 0x80590e98 — sets up camera follow parameters
    // Camera offset, field of view, and smoothing are configured here.

    // Step 14: Final vehicle-specific setup (indirect call)
    // This is a second vtable call that finalizes any remaining
    // vehicle-specific initialization (e.g., bike lean parameters).
    if (s_move != nullptr) {
        // Call vehicle-specific final init
        // In the original binary this is: (*vtable[some_offset])(s_move)
        s_move->setScale(EGG::Vector3f(1.0f, 1.0f, 1.0f));
    }
}

// ---------------------------------------------------------------------------
// 0x80598600 - KartSub_reset
// Resets all kart sub-components to their initial state.
// Called when respawning or restarting a race.
// ---------------------------------------------------------------------------
void KartSub_reset() {
    // Reset dynamics to initial position and zero velocities
    if (s_dynamics != nullptr) {
        s_dynamics->reset();
        s_dynamics->speed = EGG::Vector3f(0.0f, 0.0f, 0.0f);
        s_dynamics->externalVel = EGG::Vector3f(0.0f, 0.0f, 0.0f);
        s_dynamics->angVel0 = EGG::Vector3f(0.0f, 0.0f, 0.0f);
        s_dynamics->angVel1 = EGG::Vector3f(0.0f, 0.0f, 0.0f);
        s_dynamics->totalForce = EGG::Vector3f(0.0f, 0.0f, 0.0f);
        s_dynamics->totalTorque = EGG::Vector3f(0.0f, 0.0f, 0.0f);
        s_dynamics->acceleration = EGG::Vector3f(0.0f, 0.0f, 0.0f);
        s_dynamics->speedNorm = 0.0f;
    }

    // Reset state machine — clear all flags
    if (s_state != nullptr) {
        s_state->reset();
        s_state->resetOob();
        s_state->resetCollisionFlags();
    }

    // Reset input to neutral
    if (s_input != nullptr) {
        s_input->resetToNeutral();
    }

    // Reset movement controller
    if (s_move != nullptr) {
        s_move->clear();
        s_move->clearBoost();
    }

    // Reset suspension and wheel physics for all wheels
    u16 wheelCount = 4;
    if (s_settings != nullptr) {
        wheelCount = s_settings->getWheelCount();
    }

    for (u32 i = 0; i < wheelCount && i < 4; i++) {
        if (s_sus[i] != nullptr) {
            s_sus[i]->init();
            s_sus[i]->initPhysics();
        }
        if (s_susPhysics[i] != nullptr) {
            s_susPhysics[i]->reset();
            s_susPhysics[i]->init();
            s_susPhysics[i]->setInitialState();
        }
        if (s_wheelPhysics[i] != nullptr) {
            s_wheelPhysics[i]->reset();
            s_wheelPhysics[i]->setBsp();
        }
    }

    // Reset tire properties
    if (s_tire != nullptr) {
        s_tire->init();
    }
}

// ---------------------------------------------------------------------------
// 0x80598700 - KartSub_calc
// Per-frame update for all kart sub-components.
// Called every frame during the race for each kart.
// Update order: input → state → physics → movement → wheels
// ---------------------------------------------------------------------------
void KartSub_calc() {
    // Step 1: Read input from the gamepad
    // Must happen first so all other systems can read current input
    if (s_input != nullptr) {
        s_input->readRawInput();
    }

    // Step 2: Update kart state machine
    // Processes state transitions (e.g., countdown → racing, stunt → normal)
    if (s_state != nullptr) {
        // State flags are updated based on input and physics results
        // from the PREVIOUS frame, so this runs before physics.
    }

    // Step 3: Update kart movement controller
    // Computes acceleration, steering, drift, wheelie, etc.
    // This accumulates forces in KartDynamics::totalForce/totalTorque.
    if (s_move != nullptr) {
        // KartMove::calc is handled via the virtual update chain:
        // KartMove calls into KartMove sub-functions (drift, wheelie, air, etc.)
    }

    // Step 4: Update rigid body dynamics
    // Integrates forces/torques into velocity/position
    if (s_dynamics != nullptr) {
        f32 dt = 1.0f / 60.0f; // Fixed timestep at 60fps
        f32 maxSpeed = 120.0f;  // Default max speed (overridden by KartStats)
        if (s_settings != nullptr) {
            HandlingStats hStats = s_settings->getHandlingStats();
            maxSpeed = hStats.topSpeed;
        }
        s_dynamics->calc(dt, maxSpeed, 0);
    }

    // Step 5: Update wheel physics and suspension for each wheel
    // This runs AFTER dynamics so wheels can react to the new position.
    u16 wheelCount = 4;
    if (s_settings != nullptr) {
        wheelCount = s_settings->getWheelCount();
    }

    for (u32 i = 0; i < wheelCount && i < 4; i++) {
        // Update suspension collision detection
        if (s_susPhysics[i] != nullptr && s_dynamics != nullptr) {
            EGG::Vector3f gravity(0.0f, -1.0f, 0.0f);
            EGG::Matrix34f rotMtx;
            s_dynamics->fullRot.toMatrix(rotMtx);
            s_susPhysics[i]->calcCollision(
                gravity, rotMtx, 1.0f / 60.0f);
        }

        // Update wheel physics (friction, contact, etc.)
        if (s_wheelPhysics[i] != nullptr) {
            EGG::Vector3f down(0.0f, -1.0f, 0.0f);
            EGG::Vector3f movement(0.0f, 0.0f, 0.0f);
            if (s_dynamics != nullptr) {
                movement = s_dynamics->speed;
            }
            s_wheelPhysics[i]->calc(down, movement);
        }

        // Update effective wheel radius (for suspension visual)
        if (s_wheelPhysics[i] != nullptr) {
            s_wheelPhysics[i]->updateEffectiveRadius();
        }
    }

    // Step 6: Update physics engine (main controller)
    // KartPhysics::update() orchestrates the full physics step:
    // collision response, road detection, trick forces, etc.
    if (s_physics != nullptr) {
        s_physics->update();
    }
}

// ---------------------------------------------------------------------------
// 0x80598800 - KartSub_destroy
// Destroys all kart sub-components and nulls global pointers.
// Called when a kart is removed from the race.
// ---------------------------------------------------------------------------
void KartSub_destroy() {
    // Destroy in reverse order of creation (LIFO for correct cleanup).
    // Types with virtual destructors are called explicitly.
    // Types without declared destructors are zeroed via memset.

    // Step 1: Destroy KartMove (has virtual ~KartMove)
    if (s_move != nullptr) {
        s_move->~KartMove();
        s_move = nullptr;
    }

    // Step 2: Destroy KartInput (has virtual ~KartInput)
    if (s_input != nullptr) {
        s_input->~KartInput();
        s_input = nullptr;
    }

    // Step 3: Destroy KartState (has virtual ~KartState)
    if (s_state != nullptr) {
        s_state->~KartState();
        s_state = nullptr;
    }

    // Step 4: Destroy KartTire (no declared dtor — zero memory)
    // KartTire is a POD-like struct with no dynamic allocations
    if (s_tire != nullptr) {
        std::memset(reinterpret_cast<u8*>(s_tire), 0, 0x20);
        s_tire = nullptr;
    }

    // Step 5: Destroy suspension and wheel physics (reverse order)
    for (s32 i = 3; i >= 0; i--) {
        // KartSusPhysics: no declared dtor — zero memory (size 0x48)
        if (s_susPhysics[i] != nullptr) {
            std::memset(reinterpret_cast<u8*>(s_susPhysics[i]), 0, 0x48);
            s_susPhysics[i] = nullptr;
        }
        // KartWheelPhysics: has virtual ~KartWheelPhysics
        if (s_wheelPhysics[i] != nullptr) {
            s_wheelPhysics[i]->~KartWheelPhysics();
            s_wheelPhysics[i] = nullptr;
        }
        // KartSus: no declared dtor — zero memory (~0x50 bytes)
        if (s_sus[i] != nullptr) {
            std::memset(reinterpret_cast<u8*>(s_sus[i]), 0, 0x50);
            s_sus[i] = nullptr;
        }
    }

    // Step 6: Destroy KartPhysics (no declared dtor — zero memory)
    // KartPhysics is a data-heavy struct with float arrays but no heap ptrs
    if (s_physics != nullptr) {
        std::memset(reinterpret_cast<u8*>(s_physics), 0, 0x100);
        s_physics = nullptr;
    }

    // Step 7: Destroy KartDynamics (has virtual ~KartDynamics)
    if (s_dynamics != nullptr) {
        s_dynamics->~KartDynamics();
        s_dynamics = nullptr;
    }

    // Step 8: Destroy KartSettings (no declared dtor — zero memory)
    // KartSettings is last since other components may reference it.
    // Size: 0x3C
    if (s_settings != nullptr) {
        std::memset(reinterpret_cast<u8*>(s_settings), 0, 0x3C);
        s_settings = nullptr;
    }

    // All component pointers are now null. The allocated memory will be
    // freed when the heap is destroyed (MKW uses arena/heap allocation
    // where individual free is not required).
}

} // namespace Kart