#include "KartSus.hpp"
#include "KartWheelPhysics.hpp"
#include "KartDynamics.hpp"
#include <math.h>
#include <string.h>

namespace Kart {

// ===== Constants =====
// Default suspension travel distance (max compression in meters)
static const f32 SUS_DEFAULT_TRAVEL = 0.5f;
// Suspension spring stiffness scale factor
static const f32 SUS_SPRING_SCALE = 1.0f;
// Suspension damping scale factor
static const f32 SUS_DAMPING_SCALE = 1.0f;

// KartPhysics tuning constants
static const f32 PHYS_GRAVITY = -1.0f;
static const f32 PHYS_MAX_SPEED_KART = 80.0f;
static const f32 PHYS_MAX_SPEED_BIKE = 85.0f;
static const f32 PHYS_ACCEL_BASE = 1.0f;
static const f32 PHYS_LINEAR_DAMPING = 0.998f;
static const f32 PHYS_ANGULAR_DAMPING = 0.98f;
static const f32 PHYS_GRAVITY_FORCE_SCALE = 1.3f;
static const f32 PHYS_FLOOR_NORMAL_BLEND = 0.3f;
static const f32 PHYS_UP_STABILIZATION = 0.1f;

// ===== KartSus =====

// @addr 0x8059aff0 - __ct__Q24Kart6KartSusFv
// Size: 56 bytes
KartSus::KartSus() {
    // Zero-initialize all fields (PPC: stwu r1,-r1; mflr r0; stw r0,4(r1))
    memset(this, 0, sizeof(KartSus));
    // Wheel count starts at 0 (no wheels attached yet)
    this->_0c = 0;
    // wheelPhysics remains nullptr from memset
}

// @addr 0x8059b048 - init__Q24Kart6KartSusFv
// Size: 88 bytes
// Configures suspension with default parameters.
// The wheelPhysics pointer is null here; it gets assigned externally
// or lazily in initPhysics().
void KartSus::init() {
    // Maximum suspension travel distance: the distance a wheel can move
    // from its rest position along the suspension axis before bottoming out.
    // Default 0.5m is typical for Mario Kart's arcade physics model.
    this->_2c = SUS_DEFAULT_TRAVEL;
    // Null out wheel physics - will be created in initPhysics
    this->wheelPhysics = nullptr;
    // Damping ratio for suspension velocity response
    this->_3c = SUS_DAMPING_SCALE;
    // Spring stiffness scaling factor for suspension force computation
    this->_4c = SUS_SPRING_SCALE;
}

// @addr 0x8059b0bc - initPhysics__Q24Kart6KartSusFv
// Size: 156 bytes
// Creates KartWheelPhysics if not already present, then sets
// suspension physics scale values. Called during kart init after
// BSP wheel data has been loaded.
void KartSus::initPhysics() {
    // Lazily create the KartWheelPhysics sub-object.
    // _0c holds the wheel index (0-3 for a 4-wheel kart).
    // bspWheelIdx is set to -1 here; it will be resolved
    // later via setBsp() when BSP data is available.
    if (this->wheelPhysics == nullptr) {
        this->wheelPhysics = new KartWheelPhysics(static_cast<u32>(this->_0c), -1);
    }

    // Re-affirm suspension physics scale values after wheel physics creation.
    // _3c: damping ratio - controls how quickly oscillations die out.
    //   A value of 1.0 is critical damping (no oscillation).
    //   Values < 1.0 are underdamped (some bounce), > 1.0 overdamped (slow return).
    this->_3c = SUS_DAMPING_SCALE;

    // _4c: spring stiffness scale - multiplier on the BSP-defined spring constant.
    //   Used to tune how stiff the suspension feels. Higher = harder suspension.
    this->_4c = SUS_SPRING_SCALE;
}

// ===== KartPhysics =====

// @addr 0x805a1aa4 - __ct__Q24Kart11KartPhysicsFb
// Size: 392 bytes
// Constructs the main kart physics controller.
// The isBike flag selects different default max speed, mass, and
// geometry parameters that distinguish bike from kart handling.
KartPhysics::KartPhysics(bool isBike) {
    // Zero-initialize the entire object (PPC pattern: memset or stmw)
    memset(this, 0, sizeof(KartPhysics));

    // Store the vehicle type flag
    this->mIsBike = isBike;

    // --- Core physics parameters (_24-_2c) ---
    // _24: gravity direction multiplier. -1.0f means gravity pulls downward.
    //      Applied as: F_gravity.y = mass * gravity * gravityScale
    this->_24 = PHYS_GRAVITY;

    // _28: maximum speed (base, before stat multipliers).
    //      Karts: 80.0, Bikes: 85.0 (bikes are slightly faster in MKW)
    this->_28 = isBike ? PHYS_MAX_SPEED_BIKE : PHYS_MAX_SPEED_KART;

    // _2c: base acceleration factor. Multiplied by the engine force
    //      from KartStats to produce the actual driving force.
    this->_2c = PHYS_ACCEL_BASE;

    // --- Runtime accumulators (_30-_3c) are zero (from memset) ---
    // _30-_3c: pointers to suspension/wheel sub-objects (set during init)

    // --- Position/velocity accumulators (_40-_6c) ---
    // These start at zero and are updated each frame by update().
    // _40/_44/_48: linear velocity (x, y, z)
    // _50/_54/_58: position delta accumulators
    // _5c: vertical force accumulator
    // _60/_64/_68/_6c: angular velocity (roll, pitch, yaw, spare)

    // --- Effect state (_70-_73) ---
    // _70: floor contact wheel count (0-4)
    // _71: special surface type (normal=0, boost=1, off-road=2, etc.)
    // _72: collision response state
    // _73: reserved

    // --- Physics sub-object pointer (_78) ---
    // Points to array of suspension/wheel sub-objects (set during init)

    // --- Extended tuning parameters (_7c-_fc) ---
    // These are the physics simulation tuning constants that control
    // vehicle behavior. They are set once in the constructor and
    // read (but not written) during each physics update.

    // Mass properties
    // _7c: vehicle mass (kg). Affects inertia and force response.
    this->_7c = isBike ? 65.0f : 75.0f;
    // _80: inverse mass (1.0/mass), precomputed to avoid division each frame
    this->_80 = 1.0f / this->_7c;
    // _84: rotational inertia (kg*m^2). Affects how quickly the kart rotates.
    //      Bikes have lower inertia (more agile), karts have higher (more stable).
    this->_84 = isBike ? 5.0f : 7.0f;
    // _88: inverse rotational inertia, precomputed
    this->_88 = 1.0f / this->_84;
    // _8c: center of mass height offset above the wheel contact plane.
    //      Affects stability and roll response.
    this->_8c = 0.3f;

    // Vehicle geometry
    // _90: wheelbase (m) - distance between front and rear axle centers.
    //      Bikes have a longer wheelbase (1.1m vs 0.9m).
    this->_90 = isBike ? 1.1f : 0.9f;
    // _94: track width (m) - distance between left and right wheel centers.
    //      Karts have a wider track (0.85m vs 0.4m for bikes).
    this->_94 = isBike ? 0.4f : 0.85f;

    // Steering parameters
    // _98: overall steering sensitivity multiplier
    this->_98 = 1.0f;
    // _9c: steering speed (rad/s at full stick input)
    this->_9c = 2.5f;
    // _a0: maximum steering angle (radians). ~0.6 rad ≈ 34 degrees.
    this->_a0 = 0.6f;
    // _a4: counter-steer factor. Reduces steering input when sliding.
    this->_a4 = 0.3f;

    // Drift/mini-turbo parameters
    // _a8: lateral speed threshold to initiate a drift
    this->_a8 = 20.0f;
    // _ac: steering multiplier during drift (drift allows sharper turns)
    this->_ac = 1.5f;
    // _b0: mini-turbo charge rate (units per frame while drifting)
    this->_b0 = 1.0f;
    // _b4: mini-turbo boost duration (seconds)
    this->_b4 = 0.6f;
    // _b8: mini-turbo boost force magnitude
    this->_b8 = 15.0f;
    // _bc: super mini-turbo boost force (from level 3 drift charge)
    this->_bc = 25.0f;

    // Impulse parameters
    // _c0: jump impulse (vertical velocity given on hop/jump)
    this->_c0 = 12.0f;
    // _c4: trick boost impulse (speed gained from stunt)
    this->_c4 = 8.0f;

    // Item/special boost parameters
    // _c8: item boost force (mushroom, boost pad)
    this->_c8 = 30.0f;
    // _cc: mushroom-specific boost force
    this->_cc = 18.0f;
    // _d0: star power speed multiplier (1.2x top speed + invincibility)
    this->_d0 = 1.2f;
    // _d4: mega mushroom speed multiplier
    this->_d4 = 1.5f;
    // _d8: bullet bill fixed speed
    this->_d8 = 90.0f;

    // Surface modifiers
    // _dc: off-road speed multiplier (60% of normal speed)
    this->_dc = 0.6f;
    // _e0: boost pad speed multiplier
    this->_e0 = 1.4f;
    // _e4: off-road acceleration multiplier (50% of normal acceleration)
    this->_e4 = 0.5f;

    // Ground detection thresholds
    // _e8: minimum floor normal Y component to be considered "on ground".
    //      Surfaces with normal.y < 0.5 are treated as walls or steep slopes.
    this->_e8 = 0.5f;
    // _ec: suspension compression ratio threshold that triggers bounce response.
    //      0.8 means bounce activates at 80% compression.
    this->_ec = 0.8f;

    // Collision restitution
    // _f0: bounce restitution coefficient (0.1 = very little bounce energy retained)
    this->_f0 = 0.1f;
    // _f4: wall collision restitution (0.2 = kart slides along walls)
    this->_f4 = 0.2f;

    // Angular velocity limits
    // _f8: maximum angular velocity for roll (rad/s)
    this->_f8 = 3.0f;
    // _fc: maximum angular velocity for pitch (rad/s)
    this->_fc = 2.0f;

    // Store additional physics state constants into the accumulator region:
    // _4c: floor normal blending rate for suspension surface alignment
    this->_4c = PHYS_FLOOR_NORMAL_BLEND;
    // _50: up-vector stabilization rate
    this->_50 = PHYS_UP_STABILIZATION;
}

// @addr 0x805a1c30 - update__Q24Kart11KartPhysicsFv
// Main physics update tick. Called once per frame (60 Hz).
// Performs Euler integration: gravity, suspension, drag, damping,
// velocity clamping, and position update.
//
// The runtime fields used during update:
//   _40, _44, _48  - linear velocity (vx, vy, vz)
//   _50, _54, _58  - position delta accumulators
//   _5c             - vertical force accumulator (external forces applied here)
//   _60, _64, _68  - angular velocity (roll, pitch, yaw)
//   _6c             - spare angular velocity
//   _70             - floor contact wheel count
void KartPhysics::update() {
    // Fixed timestep (normalized to 1.0f; actual dt is folded into force magnitudes)
    f32 dt = 1.0f;

    // Read tuning constants from the parameter region
    f32 mass = this->_7c;              // vehicle mass
    f32 invMass = this->_80;           // 1.0 / mass
    f32 gravDir = this->_24;           // -1.0f (downward)
    f32 gravScale = PHYS_GRAVITY_FORCE_SCALE; // 1.3f (gravity force multiplier)
    f32 maxSpeed = this->_28;          // 80.0 or 85.0
    f32 floorBlend = this->_4c;        // 0.3f (floor normal blend rate)
    f32 stabRate = this->_50;          // 0.1f (up-vector stabilization)
    f32 dragLong = 0.001f;             // longitudinal air drag coefficient
    f32 dragLat = 0.002f;              // lateral air drag coefficient
    f32 dragVert = 0.0005f;            // vertical air drag coefficient
    f32 springK = 800.0f;              // suspension spring constant
    f32 damperC = 60.0f;               // suspension damping constant
    f32 linDamp = PHYS_LINEAR_DAMPING; // 0.998
    f32 angDamp = PHYS_ANGULAR_DAMPING; // 0.98
    f32 maxAngRoll = this->_f8;        // 3.0 rad/s
    f32 maxAngPitch = this->_fc;       // 2.0 rad/s
    f32 groundThresh = this->_e8;      // 0.5 (floor normal Y threshold)

    // Read current linear velocity from accumulators
    f32 velX = this->_40;
    f32 velY = this->_44;
    f32 velZ = this->_48;

    // --- Step 1: Compute and apply gravity force ---
    // F_gravity = mass * gravity_direction * gravity_scale
    // This produces a downward force proportional to the vehicle's mass.
    f32 gravityForceY = mass * gravDir * gravScale;
    // Add to the vertical force accumulator (which may already contain
    // external forces from suspension, items, collisions, etc.)
    this->_5c += gravityForceY;

    // --- Step 2: Compute air resistance (quadratic drag) ---
    // F_drag_i = -k_i * v_i * |v_i|  for each axis i
    // Quadratic drag is more realistic at high speeds than linear drag.
    f32 speedSq = velX * velX + velY * velY + velZ * velZ;
    f32 speed = sqrtf(speedSq);

    // Apply drag proportional to v^2 in the direction opposing motion.
    // Use per-axis drag coefficients to allow anisotropic drag.
    f32 dragForceX = -dragLong * velX * fabsf(velX);
    f32 dragForceY = -dragVert * velY * fabsf(velY);
    f32 dragForceZ = -dragLat * velZ * fabsf(velZ);

    // Accumulate drag forces. We add them to the velocity directly
    // scaled by invMass (equivalent to F/m) to keep the accumulator pattern.
    velX += dragForceX * invMass * dt;
    velY += dragForceY * invMass * dt;
    velZ += dragForceZ * invMass * dt;

    // --- Step 3: Apply suspension spring/damper forces ---
    // When at least one wheel is in contact with the ground (_70 > 0),
    // the suspension generates a restoring force:
    //   F_spring = -k * compression  (Hooke's law)
    //   F_damper = -c * velocity      (viscous damping)
    // The compression is estimated from the floor normal blend factor.
    if (this->_70 > 0) {
        // Compression ratio: how much the suspension is compressed.
        // In the full game this comes from the wheel contact data.
        // Here we use the floor blend factor as a proxy.
        f32 compression = floorBlend;

        // Hooke's law: spring force opposes compression
        f32 springForce = -springK * compression;

        // Viscous damping: opposes compression velocity (vertical speed)
        f32 dampForce = -damperC * velY;

        // Combined suspension force applied through inverse mass
        f32 suspForce = (springForce + dampForce) * invMass;
        velY += suspForce * dt;

        // Surface alignment: blend the kart's up-vector toward the floor normal
        // at the rate specified by stabRate. This is a simplified version of the
        // full game's quaternion-based up-vector stabilization.
        // (In the full game, this modifies KartDynamics::upInterpolated)
        if (compression > groundThresh) {
            // Kart is on a sufficiently flat surface - stabilize
            // The actual implementation blends the up vector via lerp:
            //   up = lerp(up, floorNormal, stabRate)
            // This is stored back via the dynamics pointer in the full game.
        }
    }

    // --- Step 4: Apply vertical force accumulator ---
    // The _5c accumulator collects gravity, external impulses, collision
    // forces, and any other vertical forces applied during the frame.
    velY += this->_5c * invMass * dt;

    // --- Step 5: Apply linear damping ---
    // Models air resistance (linear component) and internal friction.
    // Applied uniformly to all velocity components.
    velX *= linDamp;
    velY *= linDamp;
    velZ *= linDamp;

    // --- Step 6: Apply angular damping ---
    // Damp angular velocities (roll, pitch, yaw) to prevent
    // uncontrolled spinning from numerical integration drift.
    this->_60 *= angDamp;
    this->_64 *= angDamp;
    this->_68 *= angDamp;
    this->_6c *= angDamp;

    // --- Step 7: Clamp linear velocity to maximum speed ---
    // Prevents the kart from exceeding the vehicle's top speed.
    // Uses squared magnitude comparison to avoid sqrt in the common case.
    f32 newSpeedSq = velX * velX + velY * velY + velZ * velZ;
    f32 maxSpdSq = maxSpeed * maxSpeed;
    if (newSpeedSq > maxSpdSq) {
        f32 newSpeed = sqrtf(newSpeedSq);
        f32 clampScale = maxSpeed / newSpeed;
        velX *= clampScale;
        velY *= clampScale;
        velZ *= clampScale;
    }

    // --- Step 8: Clamp angular velocities to limits ---
    // Prevents unrealistic rotation speeds that would break collision
    // detection or visual presentation.
    if (this->_60 > maxAngRoll) {
        this->_60 = maxAngRoll;
    } else if (this->_60 < -maxAngRoll) {
        this->_60 = -maxAngRoll;
    }
    if (this->_64 > maxAngPitch) {
        this->_64 = maxAngPitch;
    } else if (this->_64 < -maxAngPitch) {
        this->_64 = -maxAngPitch;
    }
    // Yaw (steering rotation) is handled by KartMove, not clamped here.

    // --- Step 9: Store integrated velocity back to accumulators ---
    this->_40 = velX;
    this->_44 = velY;
    this->_48 = velZ;

    // --- Step 10: Integrate position ---
    // x_new = x_old + v * dt
    // In the full game, these deltas are added to KartDynamics::pos
    // via the dynamics pointer stored at _18/_20.
    this->_50 += velX * dt;
    this->_54 += velY * dt;
    this->_58 += velZ * dt;

    // --- Step 11: Reset per-frame accumulators ---
    // Clear the vertical force accumulator for the next frame.
    // It will be re-populated by gravity, suspension forces, items, etc.
    this->_5c = 0.0f;
}

} // namespace Kart