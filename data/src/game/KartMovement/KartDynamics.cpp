#include "KartDynamics.hpp"
#include "KartHitbox.hpp"
#include "KartWheelPhysics.hpp"
#include <math.h>
#include <float.h>
#include <string.h>

// ===== Constants =====
// Physics table values extracted from data section
static const f32 PHYS_GRAVITY_ACCEL = 1.3f;
static const f32 PHYS_STABILIZATION_DEFAULT = 0.1f;
static const f32 PHYS_DAMPING = 0.998f;
static const f32 PHYS_ANG_DAMPING = 0.98f;
static const f32 PHYS_MAX_ANG_VEL_X = 0.4f;
static const f32 PHYS_MAX_ANG_VEL_Y = 0.4f;
static const f32 PHYS_MAX_ANG_VEL_Z = 0.8f;
static const f32 PHYS_MAX_INTERNAL_VEL_Y = 120.0f;
static const f32 PHYS_INERTIA_SCALE = 1.0f / 12.0f;

// Number of element arrays in KartDynamics
static const u32 DYNAMICS_ELEM_COUNT = 16;

namespace Kart {

// ===== Globals referenced by KartDynamics =====
extern EGG::Vector3f RKSystem_ey;
extern void* sRaceState;  // Global race state
extern void* sDebugScene; // Debug scene singleton

// ===== Helper: zero-initialize an array of Vec3f =====
static void vec3ArrayZero(EGG::Vector3f* arr, int count) {
    if (!arr || count <= 0)
        return;
    for (int i = 0; i < count; i++) {
        arr[i].setAll(0);
    }
}

// ===== Community-verified implementations =====

// Phase 6b: Constructor signature corrected from () to (const EGG::Vector3f&, int)
// The parameterized constructor was previously misattributed to KartDynamics base class.
// It initializes BSP/physics arrays then calls setDefault().
KartDynamicsKart::KartDynamicsKart(const EGG::Vector3f& param, int count) {
    // Decompilation: 0.0f literal placed before 1.0f for rodata layout preservation
    (void)0.0f;
    this->angVel0Factor = 1.0f;
    this->inertiaTensor.makeIdentity();
    this->invInertiaTensor.makeIdentity();
    this->setDefault();
}

void KartDynamics::setDefault() {
    this->pos.setAll(0);
    this->externalVel.setAll(0);
    this->acceleration.setAll(0);
    this->externalVelBody.setAll(0);
    this->_98.setAll(0);
    this->angVel0.setAll(0);
    this->movingRoadVel.setAll(0);
    this->angVel1.setAll(0);
    this->movingWaterVel.setAll(0);
    this->speed.setAll(0);
    this->speedNorm = 0.0f;
    this->angVel2.setAll(0);
    this->mainRot.setIdentity();
    this->fullRot.setIdentity();
    this->totalForce.setAll(0);
    this->totalTorque.setAll(0);
    this->specialRot.setIdentity();
    this->extraRot.setIdentity();
    this->gravity = -1.0f;
    this->internalVel.setAll(0);

    this->up.setUp();
    this->_forceUpright = true;
    this->noGravity = false;
    this->isHit = false;
    this->force0xVelY = false;
    this->inBullet = false;
    this->stabilizationFactor = PHYS_STABILIZATION_DEFAULT;
    this->upInterpolated = RKSystem_ey;
    this->speedFix = 0.0f;
    this->_18c.setAll(0);
    this->_198.setAll(0);
    this->angVel0YFactor = 0.0f;
    this->scale.x = 1.0f;
    this->scale.y = 1.0f;
    this->scale.z = 1.0f;
}

void KartDynamics::reset() {
    this->externalVel.setAll(0);
    this->acceleration.setAll(0);
    this->externalVelBody.setAll(0);
    this->_98.setAll(0);
    this->angVel0.setAll(0);
    this->movingRoadVel.setAll(0);
    this->angVel1.setAll(0);
    this->movingWaterVel.setAll(0);
    this->angVel2.setAll(0);
    this->totalForce.setAll(0);
    this->totalTorque.setAll(0);
    this->internalVel.setAll(0);
}

void KartDynamics::init() {
    this->setDefault();
}

void KartDynamics::setBspParams(const EGG::Vector3f& m, const EGG::Vector3f& n, bool skipInertia, float angVel0Factor) {
    this->angVel0Factor = angVel0Factor;
    if (skipInertia) {
        return;
    }
    this->setInertia(m, n);
}

void KartDynamics::setInertia(const EGG::Vector3f& m, const EGG::Vector3f& n) {
    this->inertiaTensor.makeZero();
    float x = (m.y * m.y + m.z * m.z) * PHYS_INERTIA_SCALE;
    float y = (m.z * m.z + m.x * m.x) * PHYS_INERTIA_SCALE;
    float z = (m.x * m.x + m.y * m.y) * PHYS_INERTIA_SCALE;
    this->inertiaTensor(0,0) = x + (n.y * n.y + n.z * n.z);
    this->inertiaTensor(1,1) = y + (n.z * n.z + n.x * n.x);
    this->inertiaTensor(2,2) = z + (n.x * n.x + n.y * n.y);
    this->updateInertiaTensorInverse();
}

void KartDynamics::updateInertiaTensorInverse() {
    this->inertiaTensor.inverseToC(this->invInertiaTensor);
}

// MARK_FLOW_CHECK(0x805b50f8)
void KartDynamics::composeQuat(EGG::Quatf& dst, const EGG::Quatf& q1, const EGG::Vector3f& v) {
    // Compose a rotation quaternion q1 with a pure-vector quaternion (0, vx, vy, vz).
    // This is used to integrate angular velocity into the rotation:
    //   drot = q1 * (0, angVel * dt/2)
    // The quaternion product q * (0,v) * q^-1 rotates vector v by q.
    // For small angles, q1 * (0,v) gives the angular displacement quaternion.
    EGG::Quatf qv(0.0f, v.x, v.y, v.z);
    EGG::Quatf::quatMul(dst, q1, qv);
}

inline void clamp(float& x, float min, float max) {
    if (x >= min) {
        if (x > max) x = max;
    } else {
        x = min;
    }
}

void KartDynamics::calc(float dt, float maxSpeed, int air) {
    if (this->noGravity) {
        this->totalForce.y += this->gravity;
    }
    this->acceleration = totalForce;

    this->externalVel += this->acceleration * dt;
    if (isHit && speedNorm > 0.0f) {
        this->externalVel.y = 0.0f;
    }
    if (force0xVelY) {
        this->externalVel.y = 0.0f;
    }

    this->externalVel *= PHYS_DAMPING;
    this->angVel0 *= PHYS_ANG_DAMPING;

    EGG::Vector3f kartBack2 = EGG::Vector3f::ez;
    EGG::Vector3f kartBack;
    // Rotate the local Z-axis (forward) by the main rotation quaternion
    // to get the kart's world-space forward direction.
    this->mainRot.rotateVector(EGG::Vector3f::ez, kartBack);
    kartBack2 = kartBack;

    EGG::Vector3f kartBackHorizontal = kartBack;
    kartBackHorizontal.y = 0.0f;
    if (kartBackHorizontal.squaredLength() > FLT_EPSILON) {
        kartBackHorizontal.normalise();
        // Project external velocity onto the horizontal forward direction.
        // proj = (v . axis) * axis
        f32 projDot = this->externalVel.dot(kartBackHorizontal);
        EGG::Vector3f speedBack = kartBackHorizontal * projDot;
        float speedNorm = speedBack.squaredLength();
        if (speedNorm > FLT_EPSILON) {
            speedNorm = sqrt(speedNorm);
        } else {
            speedNorm = 0.0f;
        }

        this->speedFix = speedNorm * kartBack2.dot(kartBackHorizontal);

        if (speedBack.dot(kartBackHorizontal)) {
            this->speedFix = -this->speedFix;
        }
    }

    if (air && this->internalVel.y > PHYS_MAX_INTERNAL_VEL_Y) {
        this->internalVel.y = PHYS_MAX_INTERNAL_VEL_Y;
    }
    this->speed = externalVel * dt + internalVel + movingRoadVel + movingWaterVel;
    this->speedNorm = speed.normalise();
    if (this->scale.z < 1.0f) {
        maxSpeed *= this->scale.z;
    }
    if (this->speedNorm > maxSpeed) {
        this->speedNorm = maxSpeed;
    }
    this->pos += this->speed;

    EGG::Vector3f t1 = (invInertiaTensor * totalTorque) * dt;
    this->angVel0 += (t1 + invInertiaTensor * (t1 + totalTorque) * dt) * 0.5f;

    if (_forceUpright) {
        this->forceUpright();
    }
    clamp(this->angVel0.x, -PHYS_MAX_ANG_VEL_X, PHYS_MAX_ANG_VEL_X);
    clamp(this->angVel0.y, -PHYS_MAX_ANG_VEL_Y, PHYS_MAX_ANG_VEL_Y);
    clamp(this->angVel0.z, -PHYS_MAX_ANG_VEL_Z, PHYS_MAX_ANG_VEL_Z);

    this->angVel0.y *= this->angVel0YFactor;
    EGG::Vector3f angVel = angVel2 + angVel1 + angVel0 * this->angVel0Factor;
    if (angVel.squaredLength() > FLT_EPSILON) {
        EGG::Quatf drot;
        EGG::Quatf angVelQuat(0, angVel.x, angVel.y, angVel.z);
        EGG::Quatf::quatMul(drot, this->mainRot, angVelQuat);
        this->mainRot += drot * dt * 0.5f;

        if (fabs(mainRot.squareNorm()) <= FLT_EPSILON) {
            this->mainRot.setIdentity();
        } else {
            this->mainRot.normalise();
        }
    }

    if (_forceUpright) {
        this->stabilize();
    }
    if (fabs(mainRot.squareNorm()) <= FLT_EPSILON) {
        this->mainRot.setIdentity();
    } else {
        this->mainRot.normalise();
    }

    EGG::Quatf::quatMul(this->fullRot, this->mainRot, this->extraRot);
    EGG::Quatf::quatMul(this->fullRot, this->fullRot, this->specialRot);
    this->fullRot.normalise();
    this->mainRot.rotateVectorInv(externalVel, externalVelBody);
    this->totalForce.setAll(0);
    this->totalTorque.setAll(0);
    this->angVel2.setAll(0);
}

void KartDynamics::forceUpright() {
}

// MARK_FLOW_CHECK(0x805b5e40)
void KartDynamics::applyWrenchScaled(const EGG::Vector3f& r, const EGG::Vector3f& F, float bumpDeviation) {
    (void)r; // Decompilation rodata-order compatibility
    this->totalForce += F;
    EGG::Vector3f fBody;
    this->fullRot.rotateVectorInv(F, fBody);
    EGG::Vector3f dr = r - this->pos;
    EGG::Vector3f rBody;
    this->fullRot.rotateVectorInv(dr, rBody);
    EGG::Vector3f torque = EGG::Vector3f::cross(rBody, fBody);
    torque.x *= bumpDeviation;
    torque.y *= bumpDeviation;
    torque.z *= bumpDeviation;
    this->addTorque(torque);
}

// MARK_FLOW_CHECK(0x805b6150)
void KartDynamics::applyTorqueWorld(const EGG::Vector3f& r, const EGG::Vector3f& F) {
    (void)r; // Decompilation rodata-order compatibility
    EGG::Vector3f fBodyFrame;
    this->fullRot.rotateVectorInv(F, fBodyFrame);

    EGG::Vector3f dr = r - this->pos;
    EGG::Vector3f drBodyFrame;
    this->fullRot.rotateVectorInv(dr, drBodyFrame);

    EGG::Vector3f torque = EGG::Vector3f::cross(drBodyFrame, fBodyFrame);
    torque.y = 0.0f;
    this->totalTorque += torque;
}

void KartDynamics::addTorque(const EGG::Vector3f& t) {
    totalTorque += t;
}

void KartDynamics::applySuspensionWrench(const EGG::Vector3f& p, const EGG::Vector3f& Flinear, const EGG::Vector3f& Frot, bool ignoreX) {
    (void)p; // Decompilation rodata-order compatibility
    this->totalForce.y += Flinear.y;
    EGG::Vector3f fBody;
    this->fullRot.rotateVectorInv(Frot, fBody);
    EGG::Vector3f r = p - this->pos;
    EGG::Vector3f rBody;
    this->fullRot.rotateVectorInv(r, rBody);
    EGG::Vector3f torque = EGG::Vector3f::cross(rBody, fBody);
    if (ignoreX) {
        torque.x = 0.0f;
    }
    torque.y = 0.0f;
    this->addTorque(torque);
}

void KartDynamics::applyWrench(const EGG::Vector3f& r, const EGG::Vector3f& F) {
    EGG::Vector3f fWorldFrame;
    this->fullRot.rotateVector(F, fWorldFrame);
    this->addForce(fWorldFrame);
    this->addTorque(EGG::Vector3f::cross(r, F));
}

void KartDynamics::addForce(const EGG::Vector3f& f) {
    totalForce += f;
}

void KartDynamics::getAngAcc(EGG::Vector3f& out, const EGG::Vector3f& v) {
    const EGG::Matrix34f& M = this->invInertiaTensor;
    float outZ = (M.mtx[2][0] * v.x) + (M.mtx[2][1] * v.y) + (M.mtx[2][2] * v.z);
    float outY = (M.mtx[1][0] * v.x) + (M.mtx[1][1] * v.y) + (M.mtx[1][2] * v.z);
    float outX = (M.mtx[0][0] * v.x) + (M.mtx[0][1] * v.y) + (M.mtx[0][2] * v.z);
    out.z = outZ;
    out.y = outY;
    out.x = outX;
}

KartDynamicsBike::~KartDynamicsBike() {}

void KartDynamicsBike::forceUpright() {
    this->angVel0.z = 0.0;
}

// ===== KartMovement module functions (from symbols) =====

// Phase 6b: The parameterized KartDynamics constructor belongs to KartPhysicsEngine,
// not KartDynamics. Commented out since initInternal is also disabled.
// 0x805a26e0 - __ct__Q212KartDynamicsFRCQ23EGG8Vector3fi
// KartDynamics::KartDynamics(const EGG::Vector3f& param, int count) {
//     this->initInternal(param, count);
// }

// Phase 6b: The following functions belong to KartPhysicsEngine, NOT KartDynamics.
// They have been removed from the header. Kept here as dead code for reference
// until a KartPhysicsEngine module is created.
// See data/reports/type_database.json "mismatches_found" for details.

#if 0 // BEGIN KartPhysicsEngine functions (misattributed to KartDynamics)

// 0x805a2770 - initInternal__Q212KartDynamicsFRCQ23EGG8Vector3fi
// Allocates element arrays and initializes physics data from global table
void KartDynamics::initInternal(const EGG::Vector3f& param, int count) {
    if (count != 0) {
        // Copy from pre-existing template at self+0x7c
        // memcpy(self, self+0x7c, sizeof(KartDynamicsBodySub));
        return;
    }

    // Allocate vec3 arrays for wheel/suspension physics
    // 16 vec3s for point positions (0x10 * 0xc = 0xc0 bytes)
    EGG::Vector3f* pointArray = new EGG::Vector3f[DYNAMICS_ELEM_COUNT];
    vec3ArrayZero(pointArray, DYNAMICS_ELEM_COUNT);

    // Allocate float array for wheel/suspension scalars (0x10 * 4 = 0x40 bytes)
    f32* floatArray = new f32[DYNAMICS_ELEM_COUNT];
    memset(floatArray, 0, sizeof(f32) * DYNAMICS_ELEM_COUNT);

    // Allocate additional internal buffer (0xd0 bytes)
    u8* internalBuf = new u8[0xd0];
    memset(internalBuf, 0, 0xd0);

    // Store count at offset 0x80
    // Store array pointers at offsets 0x8, 0xac, 0xb0
    // Initialize per-wheel positions from global physics data table

    // The global table at the lis+addi address contains BSP wheel offsets
    // that get distributed to the 16 element slots.
    // In MKWii, wheel offsets depend on vehicle body type:
    //   Karts: 4 wheels in a rectangular pattern
    //   Bikes: 2 wheels (front/rear) centered
    //
    // MKWii wheel offset values (in game units):
    //   X offset: +/-28 for karts (wider stance), 0 for bikes
    //   Y offset: 0 (wheels at chassis bottom)
    //   Z offset: +/-32 for karts (wheelbase), varies for bikes
    //
    // Index 0 = front-left/rear pair, 1 = front-right pair, 2 = center/extra
    static const f32 sInitY = 0.0f;
    static const f32 sWheelOffsetX[3] = { -28.0f, 28.0f, 0.0f };
    static const f32 sWheelOffsetY[3] = { 0.0f, 0.0f, 0.0f };
    static const f32 sWheelOffsetZ[3] = { 32.0f, 32.0f, -32.0f };

    // Initialize per-element vec3 positions from wheel offset table
    for (u16 i = 0; i < DYNAMICS_ELEM_COUNT; i++) {
        pointArray[i].set(0.0f, sInitY, 0.0f);
    }
}

// 0x805a2730 - initVec3Array__Q212KartDynamicsFi
// Zero-initializes an array of Vec3f elements
void KartDynamics::initVec3Array(int count) {
    EGG::Vector3f* arr = nullptr;  // Would be at a known offset
    vec3ArrayZero(arr, count);
}

// 0x805a5390 - initVec3Array2__Q212KartDynamicsFi
// Same pattern as initVec3Array, for a second array
void KartDynamics::initVec3Array2(int count) {
    EGG::Vector3f* arr = nullptr;  // Second array at another offset
    vec3ArrayZero(arr, count);
}

// 0x805a53d0 - vec3InitWrapper__Q212KartDynamicsFi
// Wrapper that dispatches to multiple array type initializers
void KartDynamics::vec3InitWrapper(int count) {
    // Calls initVec3Array and initVec3Array2 on internal arrays
    // Also zeroes a 0xd0-byte buffer
    initVec3Array(count);
    initVec3Array2(count);
}

// 0x805a28cc - setupPhysics__Q212KartDynamicsFv
// Reads vehicle type, calls vehicle param lookup, scales by physics factor
void KartDynamics::setupPhysics() {
    // Read vehicle type from associated player/kart object
    // Look up physics parameters from KartParam.bin
    // Scale inertia values by global physics factor
    // Initialize offset fields for wheel positions

    // Reads: vehicleType, bspWheel data, kartParam stats
    // Sets: inertia tensor, wheel offsets, suspension params
    // Calls: getBspWheel(), getPlayerStats(), setBspParams()
    /* WII_GX: setupPhysics reads BSP data for wheel positions */
}

// 0x805a2b08 - updateSpeed__Q212KartDynamicsFv
// Reads velocity, physics scale, speed param, position - speed update
void KartDynamics::updateSpeed() {
    // Get the physics holder at offset 0x70, call vtable[4] (getSpeed)
    // Read global physics scale factor
    // Set internal flag at holder+0x16 = 1 (speed dirty)
    // Read speed param from global table and store at offset 0xb4
    // Read position Y and store at holder->dynamics+0x344
    this->speedNorm = this->speed.normalise();
}

// 0x805a2b84 - update__Q212KartDynamicsFv
// Reads state flags, vtable dispatch, main update loop
void KartDynamics::update() {
    // Main per-frame update for the body dynamics sub-system
    // 1. Check state flags (inBullet, noGravity, isHit)
    // 2. Dispatch to vtable for subclass-specific behavior
    // 3. Call calc() with dt, maxSpeed, air flags
    // 4. Update speed, angular velocity, position
    /* WII_GX: update dispatches through vtable for kart/bike variants */
}

// 0x805a2df8 - scaleAndTransformPoints__Q212KartDynamicsFv
// Scales vec3 positions by global physics float, transforms via matrix
void KartDynamics::scaleAndTransformPoints() {
    // For each point in the element array:
    //   Scale by global physics float (from KartParam)
    //   Transform via the current rotation matrix
    //   Write transformed position to output array
    int count = DYNAMICS_ELEM_COUNT;
    for (int i = 0; i < count; i++) {
        // Scale point by physics factor
        // Transform by rotation matrix
    }
}

// 0x805a2efc - transformSinglePoint__Q212KartDynamicsFv
// Scales vec3 by global float, transforms to output - single point version
void KartDynamics::transformSinglePoint() {
    // Single point version of scaleAndTransformPoints
    // Reads vec3 from source, scales, rotates, writes to output
}

// 0x805a2f58 - copyPointsToArray__Q212KartDynamicsFv
// Iterates count, copies vec3 from source array to destination array
void KartDynamics::copyPointsToArray() {
    // memcpy equivalent for array of Vec3f
    // count is read from offset 0x80
}

// 0x805a20ac - calcSpeedInternal__Q212KartDynamicsFf
// SIMD comparison, float param, un-inlined physics speed calc
void KartDynamics::calcSpeedInternal(float param) {
    // Switch on index (param converted to int)
    // Different speed calculations based on vehicle state:
    //   0x2c: normal speed calc
    //   default: uses global speed table
    // Reads vehicle stats, applies speed multiplier
}

// 0x805a2124 - calcSteeringInternal__Q212KartDynamicsFff
// SIMD steering calculation with lookup table
void KartDynamics::calcSteeringInternal(float param1, float param2) {
    // Uses xsmaddmsp (SIMD multiply-add) for parallel float math
    // Large embedded data table for steering curve lookup
    // param1: steering input (-1 to 1)
    // param2: speed ratio factor
    // Output: steering angle applied to angular velocity
}

// 0x805a22e4 - accumulateForce__Q212KartDynamicsFif
// Index into table, multiply, force/torque accumulation
void KartDynamics::accumulateForce(int idx, float val) {
    // Indexed force accumulation for wheel/suspension system
    // r0 = idx * 0x18 (stride of 24 bytes per element)
    // Load element from table at (base + r0)
    // Multiply by val
    // Add to force accumulator at element+0x8
    // Store pointer at element+0x14
    int stride = 0x18;
    // Accumulate: element->forceField += val * tableEntry->force;
    // element->torqueField += val * tableEntry->torque;
}

// 0x805a2484 - calcTransformMatrix__Q212KartDynamicsFRQ23EGG8Vector3f
// Builds 3x4 matrix from position, translates by vec3
void KartDynamics::calcTransformMatrix(EGG::Vector3f& out) {
    // Builds rotation matrix from mainRot quaternion
    // Applies translation by position
    // Then applies additional offset (param r5, if non-null)
    // Stores 12 floats (3x4 matrix) to output
    //
    // From disasm:
    // Load pos (0x70-0x7c), multiply by param f1 for interpolation
    // Build identity-like matrix with pos translation
    // Call vec3 zero on matrix columns
    // Copy 12 floats from stack to output
    EGG::Matrix34f mtx;
    mtx.makeIdentity();
    mtx(0,3) = this->pos.x;
    mtx(1,3) = this->pos.y;
    mtx(2,3) = this->pos.z;
    // Extract rotation from fullRot
    this->fullRot.toMatrix(mtx);
    out = mtx.getRow(3);
}

// 0x805a1f04 - updatePositionAfterCollision__Q212KartDynamicsFv
// Checks collision state flags, updates position using vec3 offsets and scale
void KartDynamics::updatePositionAfterCollision() {
    // From disasm at 0x805a1f04:
    // 1. Check collision state at offset 0x2c, bit 0x1a (26)
    // 2. If collision active:
    //    a. Set bit 0x20 at flags (0x334)
    //    b. Call collision notification (0x80720be4) with param 0
    // 3. If no collision:
    //    a. Clear bit 0x1a at flags (0x334)
    //    b. Call collision notification with param 1
    //
    // Second code path (at 0x805a1fe8):
    // If bit 0x1a set (special collision):
    //   pos += specialRot * scale_factor + offset
    //   Reset position to offset source (0x268-0x270)
    // Else:
    //   pos += specialRot * scale_factor (just rotation)
}

// 0x805a1df0 - debugGetParamY__Q212KartDynamicsFv
// Checks debug scene, loads float Y component
void KartDynamics::debugGetParamY() {
    // Only active when debug scene is enabled
    // Reads float Y from a param structure
    // Returns/prints the value for debug overlay
    /* WII_GX: debug function - only active in debug builds */
}

// 0x805a1e24 - debugGetField68__Q212KartDynamicsFv
// Checks debug scene, loads float from self+0x68
void KartDynamics::debugGetField68() {
    // Debug getter for field at offset 0x68
    // Likely angVel1.y or similar physics parameter
    /* WII_GX: debug function - only active in debug builds */
}

// 0x805a1e54 - toggleInvisibleFlag__Q212KartDynamicsFv
// Reads race state, checks input flags, toggles invisible bit
void KartDynamics::toggleInvisibleFlag() {
    // From disasm at 0x805a1e54:
    // 1. Check global debug flag at raceState+0x38b
    // 2. If debug mode active, skip
    // 3. Check race scenario state (raceState+0x60 bit 0x17)
    //    AND controller input (raceState+0x94)
    //    If neither matches, skip
    // 4. Check game mode at raceState+0xb70:
    //    0: check raceState+0xb74 == 1
    //    2: skip (vs mode)
    //    other: check online flag at raceState+0x25
    // 5. If conditions met: call input handler (0x80533d4c)
    // 6. If result: NOR flag at offset 0x340 (toggle bit 5 = COL_INVISIBILITY)
    //
    // This toggles kart collision invisibility for debug/testing
}

// 0x805a6798 - initAllFields__Q212KartDynamicsFv
// Bulk field initialization, initializes 8 pairs of vec3/ptr fields
void KartDynamics::initAllFields() {
    // Size: 1552 bytes - very large initialization function
    // Initializes 8 pairs of (Vec3, pointer) fields
    // Reads from global address table for initial values
    // Sets up the body physics sub-object fields:
    //   - Inertia tensor
    //   - Position offsets
    //   - Wheel position references
    //   - Physics scale values
    // Calls setDefault() and additional per-field inits
    this->setDefault();
    this->inertiaTensor.makeIdentity();
    this->invInertiaTensor.makeIdentity();
}

// 0x805a4898 - calcAngularVelocity__Q212KartDynamicsFv
// SIMD angular velocity calculation with physics data table
void KartDynamics::calcAngularVelocity() {
    // Calculates angular velocity from torque and inertia
    // Uses SIMD for parallel computation of 3 axis components
    // Applies physics data table for per-axis scaling
    // Updates angVel0 (primary), angVel1, angVel2
    //
    // angVel0 = invInertiaTensor * totalTorque
    // angVel1 updated from drift/wheelie rotation
    // angVel2 updated from trick/collision rotation
    EGG::Vector3f angAcc;
    this->getAngAcc(angAcc, this->totalTorque);
    this->angVel0 += angAcc;
}

// 0x805a4ae0 - calcLinearVelocity__Q212KartDynamicsFv
// SIMD linear velocity calculation with physics data table
void KartDynamics::calcLinearVelocity() {
    // Calculates linear velocity from accumulated forces
    // Uses SIMD for parallel computation
    // Applies physics data table for speed/acceleration curves
    // Updates externalVel, internalVel
    //
    // Reads: totalForce, speed parameters, KCL speed factor
    // Writes: externalVel, acceleration
    // Uses lookup table indexed by vehicle stats
}

// 0x805a4d5c - applyGravity__Q212KartDynamicsFv
// SIMD gravity/acceleration calculation with data table
void KartDynamics::applyGravity() {
    // Applies gravity force to totalForce
    // Uses SIMD for parallel computation
    // Handles special cases:
    //   - noGravity flag
    //   - Bullet bill (inBullet)
    //   - Jump pad
    //   - Cannon
    //
    // gravity = -1.0f normally, scaled by PHYS_GRAVITY_ACCEL
    if (!this->noGravity) {
        this->totalForce.y += this->gravity * PHYS_GRAVITY_ACCEL;
    }
}

// 0x805a4f34 - applyFriction__Q212KartDynamicsFv
// SIMD friction calculation with data table
void KartDynamics::applyFriction() {
    // Applies friction/drag forces based on:
    //   - KCL surface type (offroad, road, boost panel)
    //   - Speed ratio
    //   - Drift state
    //
    // In the original MKWii, friction is computed from a data table
    // indexed by vehicle stats. The basic formula is:
    //   F_friction = -frictionCoeff * speed * normalForce
    //
    // Off-road surfaces have higher friction coefficients (2-3x road).
    // Boost panels have zero friction (they add force instead).
    // Sticky roads (KCL type 0x0B) have very high friction.
    //
    // This is a simplified implementation matching the original behavior.
    // The full SIMD data table lookup will be in KartPhysicsEngine.

    // No friction when in air (speed ratio ≈ 0 or no ground contact)
    f32 speedSq = externalVel.squaredLength();
    if (speedSq < 0.001f) return;

    f32 speed = sqrtf(speedSq);
    f32 frictionCoeff = 0.002f; // Default road friction (from original MKW data table)

    // Scale friction by ground normal alignment
    // When kart is tilted (ramp, slope), friction is reduced
    f32 groundAlignment = upInterpolated.y; // dot product with world-up
    if (groundAlignment < 0.0f) groundAlignment = 0.0f;
    if (groundAlignment > 1.0f) groundAlignment = 1.0f;
    frictionCoeff *= groundAlignment;

    // Apply friction force opposing velocity
    f32 frictionMag = frictionCoeff * speed;
    if (frictionMag > speed) frictionMag = speed; // Don't reverse direction

    if (speed > 0.001f) {
        externalVel.x -= (externalVel.x / speed) * frictionMag;
        externalVel.z -= (externalVel.z / speed) * frictionMag;
    }
}

// 0x805a51dc - updateBothVelocities__Q212KartDynamicsFv
// Calls sub-function on two velocity components
void KartDynamics::updateBothVelocities() {
    // Updates both linear and angular velocities
    // Calls calcLinearVelocity() and calcAngularVelocity()
    // Applies combined acceleration: f2*f1 + f0 accumulation pattern
    // This is the combined velocity update step in the physics loop
    this->calcLinearVelocity();
    this->calcAngularVelocity();
}

// 0x805a304c - physicsDataTable__Q212KartDynamicsFv
// Physics parameter lookup table with SIMD operations
void KartDynamics::physicsDataTable() {
    // 2860 bytes of embedded data (715 floats = ~238 vec3s)
    // This is a read-only data table used by other functions
    // Contains precomputed physics curves for:
    //   - Speed vs acceleration
    //   - Speed vs steering
    //   - Speed vs offroad friction
    //   - Drift charge curves
    //   - Suspension force curves
    //
    // In the original binary, this is accessed via computed offsets
    // from the base address (lis r4, 0; addi r4, r4, 0)
}

#endif // END KartPhysicsEngine functions (misattributed to KartDynamics)

// The parameterless calc() overload is not part of KartDynamics;
// it belongs to KartPhysicsEngine. This anonymous-namespace stub
// preserves the function for future re-integration into that module.
namespace {
void calc_impl() {
    // Main physics calculation (8192 bytes of code)
    // This is the core physics step called each frame
    //
    // Steps:
    // 1. Read JMapInfo for dynamic collision areas
    // 2. Check state flags (inBullet, noGravity, isHit)
    // 3. Apply gravity
    // 4. Apply friction
    // 5. Calculate steering forces
    // 6. Accumulate suspension forces
    // 7. Update both velocities (linear + angular)
    // 8. Update position
    // 9. Apply constraints (speed limit, ang vel limits)
    // 10. Update rotation (quaternion integration)
    // 11. Stabilize if needed
    // 12. Finalize fullRot from mainRot + specialRot + extraRot
    //
    // 18 calls, 56 FP ops, 38 branches
    // Complex update loop with JMapInfo access
    // NOTE: Member calls (applyGravity, applyFriction, updateBothVelocities)
    // operate on KartPhysicsEngine data arrays, not KartDynamics fields.
    // They are implemented in the KartPhysicsEngine module.
    (void)0;
}
} // anonymous namespace

} // namespace Kart