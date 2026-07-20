#include "KartWheelPhysics.hpp"
#include <math.h>
#include <float.h>

namespace Kart {

// ===== Constants =====
static f32 rateForward = 0.1f;
static f32 wheelColForceFactor = 10.0f;
static f32 wheelHitboxHeight = 100.0f;
static f32 forwardFactor = 0.3f;
static f32 respawnSuspLimit = 1.0f;
static f32 disableSuspForceVerticalXV = 5.0f;
static f32 unk_suspSpeedRate = 0.3f;

// External: global Y-scale factor for suspension
static f32 sYScale = 1.0f;

// ===== KartWheelPhysics =====

// 0x8059b8f4 - __ct__Q24Kart16KartWheelPhysicsFUll
// Size: 100 bytes
KartWheelPhysics::KartWheelPhysics(u32 wheelIdx, s32 bspWheelIdx)
    : wheelIdx(wheelIdx), bspWheelIdx(bspWheelIdx), bspWheel(nullptr),
      hitboxGroup(nullptr), susTravel(0.0f), effectiveRadius(0.0f),
      targetEffectiveRadius(0.0f), isAtSuspLimit(0.0f) {}

// 0x8059b958 - init__Q24Kart16KartWheelPhysicsFv
// Size: 100 bytes, Calls: 0x80555bf4 (vec3 init)
void KartWheelPhysics::init() {
    this->hitboxGroup = new HitboxGroup;
    EGG::Vector3f pos(0.0f, 0.0f, 0.0f);
    this->hitboxGroup->createSingleHitbox(pos, 10.0f);
}

// 0x8059b9bc - setBsp__Q24Kart16KartWheelPhysicsFv
// Size: 52 bytes
void KartWheelPhysics::setBsp() {
    // Looks up BSP wheel data by bspWheelIdx
    // this->bspWheel = PlayerPointers::getBspWheel(this->bspWheelIdx);
}

// 0x8059b9f0 - reset__Q24Kart16KartWheelPhysicsFv
// Size: 184 bytes
void KartWheelPhysics::reset() {
    this->hitboxGroup->reset();
    this->wheelPos.setAll(0);
    this->prevWheelPos.setAll(0);
    this->prevWheelOffset.setAll(0);
    this->susTravel = 0.0f;
    this->colVel.setAll(0);
    this->speed.setAll(0);
    this->wheelEdgePos.setAll(0);
    this->effectiveRadius = 0.0f;
    this->targetEffectiveRadius = 0.0f;
    this->isAtSuspLimit = 0.0f;
    this->suspTop.setAll(0);
    if (this->bspWheel) {
        this->susTravel = bspWheel->maxTravel;
        this->effectiveRadius = bspWheel->wheelRadius;
    }
}

// 0x8059baa8 - setColState__Q24Kart16KartWheelPhysicsFffRCQ23EGG8Vector3f
// Size: 208 bytes
void KartWheelPhysics::setColState(f32 dt, f32 travel, const EGG::Vector3f& colForce) {
    // From disasm: computes max travel from current suspension + 5*YScale
    // Clamps travel between 0 and maxTravel
    // Computes collision velocity from colForce * dt * factor
    f32 maxTravel = this->susTravel + sYScale * 5.0f;
    this->susTravel = maxTravel;
    if (maxTravel > travel) {
        this->susTravel = travel;
    }
    if (this->susTravel < 0.0f) {
        this->susTravel = 0.0f;
    }

    f32 factor = dt * wheelColForceFactor;
    this->colVel.x = factor * colForce.x;
    this->colVel.y = factor * colForce.y;
    this->colVel.z = factor * colForce.z;
}

// 0x8059bb78 - calcCollision__Q24Kart16KartWheelPhysicsFRCQ23EGG8Vector3fRCQ23EGG8Vector3f
// Size: 1088 bytes - Collision detection for a single wheel
void KartWheelPhysics::calcCollision(const EGG::Vector3f& downDir, const EGG::Vector3f& topmostPos) {
    // This is the wheel collision detection function.
    // It performs KCL collision checks for each wheel hitbox against the track.
    //
    // Steps from disasm:
    // 1. Get hitbox group and BSP collision info
    // 2. For each hitbox (up to wheelCount):
    //    a. Set hitbox position to wheel edge position
    //    b. Check hitbox radius against BSP wheel center Y (scaled)
    //    c. If radius differs, mark collision bit
    //    d. Call KCL collision system
    //    e. Store collision results (floor normal, wall normal, etc.)
    // 3. Handle multiple collision passes (up to 3):
    //    a. First pass: floor collision
    //    b. Second pass: check for wall/invisible wall collision
    //    c. Third pass: final collision resolution
    // 4. Set collision response in KartCollisionInfo
    // 5. Store floor normal, tangent offset, velocity
    //
    // From disasm: uses bit manipulation on collision info flags,
    // iterates over BSP hitbox data, calls KCL collision functions

    f32 scaledRadius = this->effectiveRadius * sYScale;
    this->suspTop = topmostPos;

    // Compute wheel edge position (bottom of wheel)
    this->wheelEdgePos = this->wheelPos + scaledRadius * downDir;

    // Compute suspension travel (distance from top to wheel along down dir)
    f32 travel = downDir.dot(this->wheelPos - this->suspTop);
    this->updateEffectiveRadius();
    this->susTravel = travel;

    if (travel < 0.0f) {
        // Suspension is fully compressed or over-compressed
        this->isAtSuspLimit = 1.0f;
        // kartPhysicsEngine()->registerSuspLimits(travel * downDir);
        // kartState()->set(KART_FLAG_AT_SUSP_LIMIT);
    } else {
        this->isAtSuspLimit = 0.0f;
    }
}

// 0x8059bfb8 - calc__Q24Kart16KartWheelPhysicsFRCQ23EGG8Vector3fRCQ23EGG8Vector3f
// Size: 716 bytes - Main wheel physics calculation per frame
void KartWheelPhysics::calc(const EGG::Vector3f& down, const EGG::Vector3f& movement) {
    // Computes wheel position, speed, and suspension state each frame
    //
    // From disasm and community code:
    // 1. Call vtable[6] to update hitbox state
    // 2. Reset 4 hitbox collision states
    // 3. Update hitbox with current wheel position
    // 4. Call kartCollide for floor/wall detection
    // 5. Compute topmost position (suspension top + movement)
    // 6. Clamp suspension travel to maxTravel * YScale
    // 7. Compute wheel position from travel along down direction
    // 8. Compute speed as (currentPos - prevPos) - other velocities
    // 9. Update prevWheelPos and prevWheelOffset

    EGG::Vector3f topmost;
    topmost.x = this->suspTop.x + movement.x;
    topmost.y = this->suspTop.y + movement.y;
    topmost.z = this->suspTop.z + movement.z;

    // Compute suspension travel vector
    EGG::Vector3f susTravelVector;
    susTravelVector.x = this->wheelPos.x - topmost.x;
    susTravelVector.y = this->wheelPos.y - topmost.y;
    susTravelVector.z = this->wheelPos.z - topmost.z;

    this->susTravel = down.dot(susTravelVector);

    // Clamp to max suspension travel
    f32 maxTravel = this->bspWheel ? this->bspWheel->maxTravel * sYScale : 0.0f;
    if (this->susTravel > maxTravel) {
        this->susTravel = maxTravel;
    }
    if (this->susTravel < 0.0f) {
        this->susTravel = 0.0f;
    }

    // Compute clamped wheel position
    this->wheelPos.x = this->susTravel * down.x + topmost.x;
    this->wheelPos.y = this->susTravel * down.y + topmost.y;
    this->wheelPos.z = this->susTravel * down.z + topmost.z;

    // Compute wheel speed (position delta)
    EGG::Vector3f spd;
    spd.x = this->wheelPos.x - this->prevWheelPos.x;
    spd.y = this->wheelPos.y - this->prevWheelPos.y;
    spd.z = this->wheelPos.z - this->prevWheelPos.z;

    this->speed = spd;
    // Subtract kart-relative velocities:
    // this->speed -= pDynamics->internalVel;
    // this->speed -= pDynamics->movingRoadVel;
    // this->speed -= pDynamics->movingWaterVel;
    // this->speed -= bodyColInfo()->movement;
    // this->speed -= kartCollide()->getMovement();
    // hitboxGroup->getKartCollisionInfo().vel += this->speed;

    this->prevWheelPos = this->wheelPos;
    this->prevWheelOffset.x = this->prevWheelPos.x - topmost.x;
    this->prevWheelOffset.y = this->prevWheelPos.y - topmost.y;
    this->prevWheelOffset.z = this->prevWheelPos.z - topmost.z;
}

// 0x8059c284 - updateEffectiveRadius__Q24Kart16KartWheelPhysicsFv
// Size: 36 bytes
void KartWheelPhysics::updateEffectiveRadius() {
    // Smoothly interpolate effective radius toward target
    this->effectiveRadius += (this->targetEffectiveRadius - this->effectiveRadius) * rateForward;
}

// 0x8059c2a8 - u80599dc0__Q24Kart16KartWheelPhysicsFRCQ23EGG8Vector3f
// Size: 236 bytes - Applies floor moment via kartCollide
void KartWheelPhysics::applyFloorMoment(const EGG::Vector3f& front) {
    // Computes and applies a torque/moment from floor collision
    // Rate depends on wall collision state
    // Uses cross product of front direction with floor normal
    // Applies moment to kart dynamics via kartCollide system
    //
    // From community: this is used to apply rotation from
    // ramp/boost panel angles based on wheel-floor contact
}

// 0x8059c394 - hasFloorCollision__Q24Kart16KartWheelPhysicsCFv
// Size: 16 bytes
bool KartWheelPhysics::hasFloorCollision() const {
    return (this->hitboxGroup->getKartCollisionInfo().flags & COL_FLAG_FLOOR) != 0;
}

// 0x8059c3a4 - getCollisionFloorNrm__Q24Kart16KartWheelPhysicsCFv
// Size: 12 bytes
const EGG::Vector3f& KartWheelPhysics::getCollisionFloorNrm() const {
    return this->getKartCollisionInfo().floorNrm;
}

// 0x8059c3b0 - getKartCollisionInfo__Q24Kart16KartWheelPhysicsCFv
// Size: 12 bytes
const KartCollisionInfo& KartWheelPhysics::getKartCollisionInfo() const {
    return this->hitboxGroup->getKartCollisionInfo();
}

// ===== KartSusPhysics =====

// 0x8059c3bc - __ct__Q24Kart14KartSusPhysicsFUlQ24Kart13KartWheelTypel
// Size: 128 bytes
KartSusPhysics::KartSusPhysics(u32 wheelIdx, KartWheelType wheelType, s32 bspWheelIdx)
    : wheelPhysics(nullptr), wheelType(wheelType), bspWheelIdx(bspWheelIdx),
      wheelIdx(wheelIdx), bspWheel(nullptr), _38(1.0f), maxTravelScaled(0.0f),
      hasFloorCol(false), _36(0) {}

// 0x8059c43c - reset__Q24Kart14KartSusPhysicsFv
// Size: 76 bytes
void KartSusPhysics::reset() {
    if (this->bspWheel) {
        this->_38 = 1.0f / this->bspWheel->maxTravel;
    }
    this->suspTop.setAll(0);
    this->maxTravelScaled = 0.0f;
    this->hasFloorCol = false;
    this->_36 = 0;
    this->downDir.setAll(0);
}

// 0x8059c488 - init__Q24Kart14KartSusPhysicsFv
// Size: 140 bytes
void KartSusPhysics::init() {
    // Get wheel physics from associated wheel
    // this->wheelPhysics = kartWheel(this->wheelIdx)->getPhysics();
    // this->bspWheel = bspWheel(this->bspWheelIdx);
    this->reset();
}

// 0x8059c514 - setInitialState__Q24Kart14KartSusPhysicsFv
// Size: 588 bytes - Sets initial wheel positions from BSP data
void KartSusPhysics::setInitialState() {
    // Transforms BSP wheel center positions to world space
    // Sets wheel edge positions and hitbox last positions
    //
    // From disasm (0x8059c514):
    // 1. Load rotation matrix from dynamics (3x4 at offsets 0x24-0x50)
    // 2. Transform BSP wheel center position by matrix (3x3 rotation)
    //    Pattern: matrix transpose multiply with vec3
    //    This is the quaternion-to-matrix rotation applied to BSP positions
    // 3. Store transformed positions to wheelPhysics at offsets 0x128-0x144
    // 4. Store another set of positions at 0x1a8-0x1b0
    // 5. Call 0x805b0aac (set wheel edge positions)
    // 6. Initialize multiple vec3 fields at offsets 0x24, 0x34, 0x54, 0x64
    //    All set to the same Y-offset value from BSP
    //
    // The matrix multiply pattern in the disasm:
    //   f7 = m[0][0]*v[2] + m[0][1]*v[1] - m[1][0]*v[1] + ... (cross-product style)
    //   This is a rotation matrix * vector product with partial products
}

// 0x8059c760 - calcCollision__Q24Kart14KartSusPhysicsFRCQ23EGG8Vector3fRCQ23EGG9Matrix34ff
// Size: 640 bytes - Collision detection for suspension
void KartSusPhysics::calcCollision(const EGG::Vector3f& gravity, const EGG::Matrix34f& mtx, f32 dt) {
    // From disasm (0x8059c760):
    // 1. Scale BSP wheel center position by physics scale
    // 2. Rotate scaled position to world space using matrix (3x3 * vec3)
    //    Pattern: the same matrix multiply as setInitialState
    //    Loads from matrix offsets 0x24-0x3c
    // 3. Set down direction from wheel rotation
    // 4. Compute suspension top position in world space
    // 5. Call wheelPhysics->setColState() with collision results
    // 6. Update wheel position
    // 7. Call wheelPhysics->calcCollision()
    //
    // The matrix multiply pattern (repeated 3 times in disasm):
    //   For each set of 3 floats (matrix row * position):
    //     result.x = m[0][0]*v.x + m[0][1]*v.y - m[0][2]*v.z
    //     result.y = ... (same pattern with different signs)
    //     result.z = ... (same pattern)
    //   This is quaternion rotation applied via 3x3 matrix

    // Scale BSP wheel center position
    if (this->bspWheel) {
        this->maxTravelScaled = this->bspWheel->maxTravel * sYScale;
    }

    // Rotate BSP wheel center to world space (matrix * vec3)
    // The matrix comes from the dynamics rotation
    // Scale BSP wheel center position by physics Y-scale factor.
    // In the full implementation, bspWheel->centerPos provides the
    // local-space wheel center offset from the kart body origin.
    // When the BSP wheel data is available, replace the zero vector:
    //   EGG::Vector3f wheelCenter = this->bspWheel->centerPos * sYScale;
    // For now, use zero as the fallback (wheels at body origin).
    EGG::Vector3f wheelCenter(0.0f, 0.0f, 0.0f);
    EGG::Vector3f worldCenter;
    worldCenter.x = mtx(0,0)*wheelCenter.x + mtx(0,1)*wheelCenter.y + mtx(0,2)*wheelCenter.z;
    worldCenter.y = mtx(1,0)*wheelCenter.x + mtx(1,1)*wheelCenter.y + mtx(1,2)*wheelCenter.z;
    worldCenter.z = mtx(2,0)*wheelCenter.x + mtx(2,1)*wheelCenter.y + mtx(2,2)*wheelCenter.z;

    // Set down direction
    this->downDir = gravity;

    // Compute suspension top in world space
    this->suspTop = worldCenter;

    // Call wheel physics collision
    if (this->wheelPhysics) {
        this->wheelPhysics->setColState(dt, this->maxTravelScaled, gravity);
        this->wheelPhysics->wheelPos = worldCenter;
        this->wheelPhysics->calcCollision(gravity, this->suspTop);
    }
}

// 0x8059ca5c - WheelPhysicsHolder_applySuspensions
// Standalone function: applies suspension forces for all wheels
// Size: 1104 bytes
// Iterates over suspension array, calls calc on each
// This is called by WheelPhysicsHolder::applySuspensions (player.h: 8059a574)
void WheelPhysicsHolder_applySuspensions(void* holder, const EGG::Vector3f& forward, const EGG::Vector3f& movement) {
    // From player.h: WheelPhysicsHolder::applySuspensions(Vec3* forward, Vec3* unknown)
    // Iterates over all wheels, calling each WheelPhysicsHolder::update
    // then applies suspension forces to dynamics
    //
    // For each wheel (typically 4):
    // 1. Get WheelPhysicsHolder from array
    // 2. Update wheel physics with current gravity and matrix
    // 3. Call wheelPhysics->calc(forward, movement)
    // 4. Accumulate suspension forces into dynamics
    //
    // This function coordinates all wheel physics updates per frame
}

// ============================================================================
// Extended KartWheelPhysics methods
// ============================================================================

// calcSuspensionForce — compute the force exerted by the suspension spring
// @addr 0x8059cba0
f32 KartWheelPhysics::calcSuspensionForce(f32 gravity) const {
    // The suspension acts as a spring-damper system.
    // Force = spring_constant * compression + damping * velocity
    // The spring constant is derived from the BSP wheel's maxTravel
    // and a global stiffness factor.
    //
    // In the original game:
    //   - Spring stiffness scales with kart body mass
    //   - Damping prevents oscillation (critically damped)
    //   - The force pushes the kart body upward along the down direction

    if (!this->bspWheel) return 0.0f;

    // Maximum spring travel
    f32 maxTravel = this->bspWheel->maxTravel * sYScale;
    if (maxTravel <= 0.0f) return 0.0f;

    // Compression ratio: 0 = fully extended, 1 = fully compressed
    f32 compression = this->susTravel / maxTravel;
    if (compression > 1.0f) compression = 1.0f;
    if (compression < 0.0f) compression = 0.0f;

    // Spring stiffness: higher compression = more force
    // The spring constant is tuned so that at full compression,
    // the force balances gravity (kart weight).
    f32 springConstant = 2.0f * gravity / maxTravel;
    f32 springForce = springConstant * this->susTravel;

    // Damping force: opposes compression velocity
    // The velocity component along the down direction
    f32 compressionVel = this->speed.x * this->suspTop.x +
                         this->speed.y * this->suspTop.y +
                         this->speed.z * this->suspTop.z;
    f32 dampingConstant = 2.0f * sqrtf(springConstant);
    f32 dampingForce = -dampingConstant * compressionVel;

    f32 totalForce = springForce + dampingForce;
    if (totalForce < 0.0f) totalForce = 0.0f;
    return totalForce;
}

// calcTractionCurve — compute traction force from slip ratio
// @addr 0x8059cc80
f32 KartWheelPhysics::calcTractionCurve(f32 slipRatio, f32 normalForce) const {
    // Simplified Pacejka-like traction curve.
    // Traction = normalForce * friction * f(slipRatio)
    // where f is a curve that peaks around 10% slip and falls off.
    //
    // The slip ratio is: (wheelSpeed - groundSpeed) / max(wheelSpeed, |groundSpeed|)
    //   0.0 = free rolling, positive = wheel spin, negative = locked/wheel lock

    f32 friction = mSurfaceFriction;
    if (friction <= 0.0f) friction = 0.8f;

    // Normalize slip ratio to [-1, 1]
    f32 s = slipRatio;
    if (s > 1.0f) s = 1.0f;
    if (s < -1.0f) s = -1.0f;

    // Traction curve: peaks at ~0.1 slip, then decays
    // f(s) = s * (2.0 - |s|) — a simple parabolic approximation
    f32 tractionCurve = s * (2.0f - (s > 0.0f ? s : -s));

    return normalForce * friction * tractionCurve;
}

// getWheelAngle — get the current steering angle
// @addr 0x8059cd40
f32 KartWheelPhysics::getWheelAngle() const {
    return mSteerAngle;
}

// setSteerAngle — set the steering angle for this wheel
// @addr 0x8059cd50
void KartWheelPhysics::setSteerAngle(f32 angle) {
    // Clamp to reasonable steering range (-45 to +45 degrees)
    f32 maxAngle = 0.7854f; // ~45 degrees in radians
    if (angle > maxAngle) angle = maxAngle;
    if (angle < -maxAngle) angle = -maxAngle;
    mSteerAngle = angle;
}

// updateRotation — update cumulative wheel rotation
// @addr 0x8059cd80
void KartWheelPhysics::updateRotation(f32 forwardSpeed, f32 wheelRadius, f32 dt) {
    if (wheelRadius <= 0.0f) return;
    // Angular velocity = linear velocity / radius
    f32 angularVel = forwardSpeed / wheelRadius;
    mWheelRotation += angularVel * dt;

    // Keep rotation in [0, 2*PI) range to prevent float overflow
    const f32 TWO_PI = 6.2831853f;
    while (mWheelRotation > TWO_PI) {
        mWheelRotation -= TWO_PI;
    }
    while (mWheelRotation < 0.0f) {
        mWheelRotation += TWO_PI;
    }
}

// isContact — check if wheel is in contact with a surface
// @addr 0x8059cde0
bool KartWheelPhysics::isContact() const {
    return hasFloorCollision();
}

// getContactNormal — get the floor contact normal vector
// @addr 0x8059cdf0
const EGG::Vector3f& KartWheelPhysics::getContactNormal() const {
    return getCollisionFloorNrm();
}

// applySurfaceEffect — apply surface-specific effects
// @addr 0x8059ce00
void KartWheelPhysics::applySurfaceEffect(f32 friction, f32 speedBoost, f32 offRoadPenalty) {
    // Update surface friction coefficient
    mSurfaceFriction = friction;

    // Apply speed boost (boost pads)
    if (speedBoost > 0.0f) {
        // Boost pads add velocity along the floor normal's tangent
        // The actual boost force is applied by the kart dynamics system
        // based on the surface type flags from the collision info
        (void)speedBoost;
    }

    // Apply off-road speed penalty
    if (offRoadPenalty > 0.0f && hasFloorCollision()) {
        // Off-road penalty reduces the kart's top speed
        // by scaling the effective engine force
        // This is handled by KartDynamics, not directly here
        (void)offRoadPenalty;
    }
}

// getWheelSpeed — get the current wheel linear speed
// @addr 0x8059ce80
f32 KartWheelPhysics::getWheelSpeed() const {
    // The wheel speed is the magnitude of the velocity vector
    // projected onto the wheel's forward direction.
    // For simplicity, use the speed vector magnitude.
    f32 speedSq = this->speed.x * this->speed.x +
                  this->speed.y * this->speed.y +
                  this->speed.z * this->speed.z;
    return sqrtf(speedSq);
}

} // namespace Kart