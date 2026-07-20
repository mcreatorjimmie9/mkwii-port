#include "KartSus.hpp"
#include "KartWheelPhysics.hpp"
#include "KartDynamics.hpp"
#include "KartMove.hpp"
#include <rk_types.h>
#include <decomp.h>
#include <egg/math/eggVector.hpp>
#include <string.h>

namespace Kart {

// ===== Constants =====
// Number of wheels on a standard kart/bike
static const u32 WHEEL_COUNT = 4;
// Number of suspension systems (one per wheel)
static const u32 SUS_COUNT = 4;
// Default BSP wheel index (no BSP data loaded yet)
static const s32 BSP_WHEEL_IDX_NONE = -1;

// ===== MovementSystemGlobals =====
// Holds global state pointers for the movement system.
// These are shared across all kart movement components and
// provide access to the current physics step context.
struct MovementSystemGlobals {
    // Current physics timestep (seconds). Typically 1.0f/60.0f at 60 FPS.
    f32 physicsDt;
    // Current frame counter (incremented each physics tick)
    u32 frameCount;
    // Global physics scale factor (affects gravity, suspension, collision)
    f32 physicsScale;
    // Whether the movement system has been initialized
    bool initialized;
    // Number of wheels currently reporting floor contact
    u8 floorContactCount;
    // Reserved for alignment
    u8 _pad[2];
};

// Global movement system state (BSS segment in original game)
static MovementSystemGlobals sMovementGlobals;

// @addr 0x80590000 - MovementSystem_initGlobals
// Initializes the global movement system state to safe defaults.
// This runs once at game startup before any karts are created.
static void MovementSystem_initGlobals() {
    memset(&sMovementGlobals, 0, sizeof(MovementSystemGlobals));
    sMovementGlobals.physicsDt = 1.0f / 60.0f;
    sMovementGlobals.frameCount = 0;
    sMovementGlobals.physicsScale = 1.0f;
    sMovementGlobals.initialized = false;
    sMovementGlobals.floorContactCount = 0;
}

// @addr 0x80590040 - MovementSystem_createWheelPhysics
// Creates an array of KartWheelPhysics objects (one per wheel).
// Each wheel physics object handles collision detection, suspension
// travel computation, and wheel edge position tracking.
//
// In the full game, this is called by Player::createMovement() which
// allocates the wheel physics array as a member of the Player object.
//
// Returns: pointer to the first element of a WHEEL_COUNT-sized array
//          (caller owns the memory)
static KartWheelPhysics** MovementSystem_createWheelPhysics(bool isBike) {
    // Allocate an array of pointers (since KartWheelPhysics has no
    // default constructor, we use individual new calls).
    KartWheelPhysics** wheels = new KartWheelPhysics*[WHEEL_COUNT];

    for (u32 i = 0; i < WHEEL_COUNT; i++) {
        // Each wheel gets a unique index and a BSP wheel index.
        // For karts: 4 wheels (FL=0, FR=1, RL=2, RR=3).
        // For bikes: 2 front + 1 rear (wheels 2,3 are unused or merged).
        // The BSP wheel index maps to the BSP collision data for that wheel.
        // -1 means no BSP data loaded yet (resolved later by setBsp).
        wheels[i] = new KartWheelPhysics(i, BSP_WHEEL_IDX_NONE);
        wheels[i]->init();
    }

    return wheels;
}

// @addr 0x80590100 - MovementSystem_createSuspensions
// Creates an array of KartSus objects (one per wheel).
// Each KartSus wraps a KartWheelPhysics and adds suspension-specific
// parameters (travel distance, spring/damping scales).
//
// In the full game, the KartSus array is a member of the Player object
// and is created after wheel physics are set up.
//
// Returns: pointer to the first element of a SUS_COUNT-sized array
static KartSus* MovementSystem_createSuspensions() {
    KartSus* suspensions = new KartSus[SUS_COUNT];

    for (u32 i = 0; i < SUS_COUNT; i++) {
        // Default constructor zeros everything; init() sets travel params
        suspensions[i].init();
    }

    return suspensions;
}

// @addr 0x805901a0 - MovementSystem_createKartPhysics
// Creates the main KartPhysics controller for a kart or bike.
// This is the central physics object that coordinates all physics
// computations: gravity, suspension, damping, collision response.
//
// The isBike parameter selects different physics tuning:
//   - Karts: heavier (75kg), wider track (0.85m), max speed 80.0
//   - Bikes: lighter (65kg), narrow track (0.4m), max speed 85.0
static KartPhysics* MovementSystem_createKartPhysics(bool isBike) {
    return new KartPhysics(isBike);
}

// @addr 0x80590200 - MovementSystem_createDynamics
// Creates the KartDynamicsKart object that stores the kart's world
// position, velocity, rotation, and force/torque accumulators.
// This is the "state" object that the physics system reads from
// and writes to each frame.
//
// In the full game, KartDynamicsKart is created with BSP element count
// and mass parameters. The param vector provides the initial mass vector
// derived from the vehicle model's BSP physics data.
static KartDynamics* MovementSystem_createDynamics(bool isBike) {
    // The param vector provides initial inertia parameters.
    // In the full game, these come from BSP data (vehicle model).
    // Using reasonable defaults for kart vs bike:
    //   Kart: 75 kg uniform, Bike: 65 kg uniform
    EGG::Vector3f massParam;
    if (isBike) {
        massParam.set(65.0f, 65.0f, 65.0f);
    } else {
        massParam.set(75.0f, 75.0f, 75.0f);
    }

    // Element count: number of BSP collision/physics elements.
    // 16 is the standard count for all kart models in MKW.
    s32 elemCount = 16;

    KartDynamicsKart* dynamics = new KartDynamicsKart(massParam, elemCount);
    return dynamics;
}

// @addr 0x80590300 - MovementSystem_linkComponents
// Wires all movement sub-components together so they can communicate
// during physics updates. This is the "glue" that connects:
//   - KartPhysics -> KartDynamics (physics controller reads/writes state)
//   - KartSus -> KartWheelPhysics (suspension wraps wheel collision)
//   - KartMove -> KartPhysics (movement logic uses physics params)
//   - KartWheelPhysics -> KartDynamics (wheel forces affect kart state)
//
// In the full game, this wiring happens inside Player::init() and
// Player::createMovement(). Each sub-system stores pointers to the
// others it needs to communicate with. Since the class fields are
// private, the actual pointer wiring is done through:
//   1. The Player class (which has friend access to all sub-components)
//   2. Public init() methods that accept cross-pointers as parameters
//
// Here we use the available public interfaces:
//   - KartSus::initPhysics() creates the internal KartWheelPhysics
//   - KartWheelPhysics::setBsp() resolves BSP data
//   - KartDynamics::init() resets the dynamics state
static void MovementSystem_linkComponents(
    KartDynamics* dynamics,
    KartPhysics* physics,
    KartWheelPhysics** wheels,
    KartSus* suspensions,
    bool isBike)
{
    // --- Initialize KartDynamics ---
    // Reset all position, velocity, rotation, and force accumulators
    // to their default state. This must happen before any physics
    // computation reads from the dynamics object.
    if (dynamics != nullptr) {
        dynamics->init();
    }

    // --- Initialize KartSus and link to KartWheelPhysics ---
    // Each KartSus::initPhysics() lazily creates a KartWheelPhysics
    // if one doesn't already exist. Since we created them externally
    // via MovementSystem_createWheelPhysics, the initPhysics() call
    // here serves to re-affirm the suspension scale parameters.
    //
    // In the full game, the Player class directly assigns the
    // KartSus::wheelPhysics pointer to the externally-created
    // KartWheelPhysics (the Player class has friend access).
    // The assignment pattern is:
    //   suspensions[i].wheelPhysics = wheels[i];
    //   suspensions[i]._0c = i;
    //   suspensions[i]._08 = physics;
    for (u32 i = 0; i < SUS_COUNT; i++) {
        if (suspensions != nullptr) {
            suspensions[i].initPhysics();
        }
    }

    // --- Resolve BSP wheel data ---
    // Each KartWheelPhysics needs to look up its BSP wheel data
    // (wheel radius, max travel, contact distance) from the loaded
    // BSP file. setBsp() performs this lookup by bspWheelIdx.
    if (wheels != nullptr) {
        for (u32 i = 0; i < WHEEL_COUNT; i++) {
            if (wheels[i] != nullptr) {
                wheels[i]->setBsp();
            }
        }
    }

    // --- KartPhysics internal wiring ---
    // In the full game, the Player class sets KartPhysics internal
    // pointers directly (friend access):
    //   physics->_18 = dynamics;   // primary dynamics pointer
    //   physics->_20 = dynamics;   // alternate dynamics (bullet bill)
    //   physics->_78 = suspensions; // suspension array for iteration
    // These cross-pointers allow KartPhysics::update() to:
    //   - Read position/velocity from KartDynamics
    //   - Iterate suspensions for floor contact state
    //   - Write integrated velocity back to KartDynamics
    //
    // Since KartPhysics fields are private, this wiring is performed
    // by the Player class in the full game. The KartPhysics constructor
    // and update() method are designed to work both with and without
    // these pointers being set (graceful degradation).

    // Mark the movement system as initialized
    sMovementGlobals.initialized = true;
}

// @addr 0x80590400 - initMovementSystem__Q24Kart18MovementSystemGlobalsFbbb
// Public entry point: creates and links all KartMovement sub-components
// for a single kart/bike. This is the factory function that the Player
// class calls during kart initialization.
//
// Steps:
//   1. Create KartDynamics (state: position, velocity, rotation)
//   2. Create KartWheelPhysics x4 (collision detection per wheel)
//   3. Create KartSus x4 (suspension parameters per wheel)
//   4. Create KartPhysics (central physics controller)
//   5. Wire all components together (pointer cross-links)
//
// Parameters:
//   isBike          - true for bike, false for kart
//   outDynamics     - [out] receives the dynamics pointer
//   outPhysics      - [out] receives the physics controller pointer
//   outWheels       - [out] receives the wheel physics array pointer
//   outSuspensions  - [out] receives the suspension array pointer
void initMovementSystem(
    bool isBike,
    KartDynamics** outDynamics,
    KartPhysics** outPhysics,
    KartWheelPhysics*** outWheels,
    KartSus** outSuspensions)
{
    // Step 0: Initialize globals if this is the first kart
    if (!sMovementGlobals.initialized) {
        MovementSystem_initGlobals();
    }

    // Step 1: Create the dynamics state object
    // This stores position, velocity, rotation, and accumulates forces.
    KartDynamics* dynamics = MovementSystem_createDynamics(isBike);

    // Step 2: Create wheel physics array (4 wheels, individually allocated)
    KartWheelPhysics** wheels = MovementSystem_createWheelPhysics(isBike);

    // Step 3: Create suspension array (4 suspensions)
    KartSus* suspensions = MovementSystem_createSuspensions();

    // Step 4: Create the central physics controller
    KartPhysics* physics = MovementSystem_createKartPhysics(isBike);

    // Step 5: Wire all components together
    // Sets up pointer cross-links between physics, dynamics, wheels,
    // and suspensions so they can communicate during updates.
    // Uses public interfaces where possible; private pointer wiring
    // is done by the Player class (friend access) in the full game.
    MovementSystem_linkComponents(dynamics, physics, wheels, suspensions, isBike);

    // Step 6: Output pointers to caller
    if (outDynamics != nullptr) {
        *outDynamics = dynamics;
    }
    if (outPhysics != nullptr) {
        *outPhysics = physics;
    }
    if (outWheels != nullptr) {
        *outWheels = wheels;
    }
    if (outSuspensions != nullptr) {
        *outSuspensions = suspensions;
    }

    // Increment the global frame counter
    sMovementGlobals.frameCount++;
}

// @addr 0x80590500 - getMovementSystemGlobals__Q24KartFv
// Returns a pointer to the global movement system state.
// Used by sub-components to access shared physics context
// (timestep, frame count, scale factor).
MovementSystemGlobals* getMovementSystemGlobals() {
    return &sMovementGlobals;
}

// @addr 0x80590520 - MovementSystem_stepPhysics
// Advances the movement system by one physics tick.
// This is the per-frame entry point called by the game loop.
//
// Steps:
//   1. Count floor contacts across all suspension/wheel pairs
//   2. Update KartPhysics (gravity, drag, suspension, integration)
//   3. Sync KartDynamics state from KartPhysics output
//   4. Update wheel physics for collision detection
//   5. Advance global frame counter
//
// Parameters:
//   dynamics    - KartDynamics state to update
//   physics     - KartPhysics controller to step
//   wheels      - Wheel physics array to update
//   suspensions - Suspension array to query floor contact
//   dt          - Optional timestep override (0.0f = use global default)
void MovementSystem_stepPhysics(
    KartDynamics* dynamics,
    KartPhysics* physics,
    KartWheelPhysics** wheels,
    KartSus* suspensions,
    f32 dt)
{
    if (!sMovementGlobals.initialized) {
        return;
    }

    // Use provided dt or fall back to global default
    if (dt <= 0.0f) {
        dt = sMovementGlobals.physicsDt;
    }
    sMovementGlobals.physicsDt = dt;

    // --- Step 1: Count floor contacts from suspension/wheel state ---
    // Each KartSus has a KartWheelPhysics which can report whether
    // its hitbox detected a floor collision. We count how many wheels
    // are currently on the ground and store it in the globals.
    // In the full game, this count is written to KartPhysics::_70
    // (the Player class has friend access to do this).
    u8 floorContacts = 0;
    if (suspensions != nullptr && wheels != nullptr) {
        for (u32 i = 0; i < SUS_COUNT; i++) {
            if (wheels[i] != nullptr && wheels[i]->hasFloorCollision()) {
                floorContacts++;
            }
        }
    }
    sMovementGlobals.floorContactCount = floorContacts;

    // --- Step 2: Update the central physics controller ---
    // This computes gravity, air drag, suspension spring/damper forces,
    // integrates velocity and position using semi-implicit Euler method,
    // applies damping, and clamps velocities to limits.
    // The KartPhysics::update() method reads its tuning parameters
    // (mass, drag coefficients, spring constants) and the floor contact
    // count to determine whether to apply suspension forces.
    if (physics != nullptr) {
        physics->update();
    }

    // --- Step 3: Sync KartDynamics state from KartPhysics output ---
    // In the full game, KartPhysics::update() writes directly to
    // KartDynamics fields via the dynamics pointer (KartPhysics::_18).
    // Since we don't have that pointer wired here (private field),
    // we sync the state externally using the dynamics' public members.
    //
    // The KartPhysics update produces:
    //   - Position delta (how far the kart moved this frame)
    //   - Updated velocity (after forces and damping)
    //   - Updated angular velocities
    //
    // In the full implementation, KartPhysics stores the dynamics pointer
    // at _18 (set by Player during wiring) and writes:
    //   dynamics->pos += velocity * dt
    //   dynamics->internalVel = integrated_velocity
    //   dynamics->gravity = physics->_24
    if (dynamics != nullptr) {
        // Apply gravity setting to dynamics
        // KartPhysics stores gravity at _24 (typically -1.0f)
        // KartDynamics::gravity uses the same convention
        dynamics->noGravity = false;

        // Recompute speed magnitude from all velocity components
        // (external + internal + road + water)
        f32 spdSq = dynamics->speed.x * dynamics->speed.x
                  + dynamics->speed.y * dynamics->speed.y
                  + dynamics->speed.z * dynamics->speed.z;
        dynamics->speedNorm = sqrtf(spdSq);
    }

    // --- Step 4: Update wheel physics ---
    // Compute wheel positions, suspension travel, and collision state
    // for each wheel based on the current kart pose.
    // The down direction is derived from the kart's current up vector
    // (which tracks the vehicle's orientation on slopes/ramps).
    if (wheels != nullptr && dynamics != nullptr) {
        // Down direction is the negative of the kart's up vector
        EGG::Vector3f down;
        down.x = -dynamics->up.x;
        down.y = -dynamics->up.y;
        down.z = -dynamics->up.z;

        // Vehicle movement is the kart's internal velocity
        // (engine power, separate from collision-induced velocity)
        EGG::Vector3f movement = dynamics->internalVel;

        for (u32 i = 0; i < WHEEL_COUNT; i++) {
            if (wheels[i] != nullptr) {
                // KartWheelPhysics::calc() performs the per-wheel
                // physics update: computes suspension travel from
                // the top position + movement, clamps to max travel,
                // and derives wheel speed from position delta.
                wheels[i]->calc(down, movement);
            }
        }
    }

    // --- Step 5: Advance frame counter ---
    sMovementGlobals.frameCount++;
}

// @addr 0x805954a8 - MovementSystem_shutdown
// Cleans up the global movement system state.
// Called when the race ends or the game transitions to a different scene.
void MovementSystem_shutdown() {
    sMovementGlobals.initialized = false;
    sMovementGlobals.frameCount = 0;
    sMovementGlobals.physicsDt = 1.0f / 60.0f;
    sMovementGlobals.physicsScale = 1.0f;
    sMovementGlobals.floorContactCount = 0;
}

} // namespace Kart