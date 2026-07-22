#include "KartDynamics.hpp"

#include <egg/math/eggVector.hpp>
#include <egg/math/eggQuat.hpp>
#include <egg/math/eggMatrix.hpp>

#include <math.h>
#include <float.h>

namespace Kart {

// RKSystem_ey: Global world up vector (0, 1, 0) used by KartDynamics
// for upright stabilization and gravity direction.
// In MKWii, this is at a fixed address in the Wii memory map.
// On PC, we define it as a translation unit local.
EGG::Vector3f RKSystem_ey(0.0f, 1.0f, 0.0f);

KartDynamicsKart::KartDynamicsKart() {
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
    this->stabilizationFactor = 0.1f;
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

void KartDynamics::setBspParams(const EGG::Vector3f& m, const EGG::Vector3f& n, bool skipInertia, f32 angVel0Factor) {
    this->angVel0Factor = angVel0Factor;
    if (skipInertia) {
        return;
    }
    this->setInertia(m, n);
}

void KartDynamics::setInertia(const EGG::Vector3f& m, const EGG::Vector3f& n) {
    this->inertiaTensor.makeZero();
    f32 den = 1.0f / 12.0f;
    f32 x = (m.y * m.y + m.z * m.z) * den;
    f32 y = (m.z * m.z + m.x * m.x) * den;
    f32 z = (m.x * m.x + m.y * m.y) * den;
    this->inertiaTensor(0, 0) = x + (n.y * n.y + n.z * n.z);
    this->inertiaTensor(1, 1) = y + (n.z * n.z + n.x * n.x);
    this->inertiaTensor(2, 2) = z + (n.x * n.x + n.y * n.y);
    this->updateInertiaTensorInverse();
}

void KartDynamics::updateInertiaTensorInverse() {
    this->inertiaTensor.inverseToC(this->invInertiaTensor);
}

void KartDynamics::composeQuat(EGG::Quatf& dst, const EGG::Quatf& q1, const EGG::Vector3f& v) {
    EGG::Quatf tmp(0, v.x, v.y, v.z);
    EGG::Quatf::quatMul(dst, q1, tmp);
}

inline void clamp(f32& x, f32 min, f32 max) {
    if (x >= min) {
        if (x > max) x = max;
    } else {
        x = min;
    }
}

void KartDynamics::calc(f32 dt, f32 maxSpeed, s32 air) {
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

    this->externalVel *= 0.998f;
    this->angVel0 *= 0.98f;

    EGG::Vector3f kartBack2 = EGG::Vector3f::ez;
    EGG::Vector3f kartBack;
    this->mainRot.rotateVector(kartBack2, kartBack);
    kartBack2 = kartBack;

    EGG::Vector3f kartBackHorizontal = kartBack;
    kartBackHorizontal.y = 0.0f;
    if (kartBackHorizontal.squaredLength() > FLT_EPSILON) {
        kartBackHorizontal.normalise();
        // Project externalVel onto the horizontal back direction to get
        // the component of velocity going backwards (speedBack = projection,
        // externalVel = rejection/perpendicular component).
        EGG::Vector3f speedBack;
        f32 dot = this->externalVel.x * kartBackHorizontal.x
                + this->externalVel.y * kartBackHorizontal.y
                + this->externalVel.z * kartBackHorizontal.z;
        speedBack.x = kartBackHorizontal.x * dot;
        speedBack.y = kartBackHorizontal.y * dot;
        speedBack.z = kartBackHorizontal.z * dot;
        this->externalVel.x -= speedBack.x;
        this->externalVel.y -= speedBack.y;
        this->externalVel.z -= speedBack.z;

        f32 speedNorm = speedBack.squaredLength();
        if (speedNorm > FLT_EPSILON) {
            speedNorm = sqrtf(speedNorm);
        } else {
            speedNorm = 0.0f;
        }

        this->speedFix = speedNorm * kartBack2.dot(kartBackHorizontal);

        if (speedBack.dot(kartBackHorizontal)) {
            this->speedFix = -this->speedFix;
        }
    }

    if (air && this->internalVel.y > 120.0f) {
        this->internalVel.y = 120.0f;
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
    clamp(this->angVel0.x, -0.4f, 0.4f);
    clamp(this->angVel0.y, -0.4f, 0.4f);
    clamp(this->angVel0.z, -0.8f, 0.8f);

    this->angVel0.y *= this->angVel0YFactor;
    EGG::Vector3f angVel = angVel2 + angVel1 + angVel0 * this->angVel0Factor;
    if (angVel.squaredLength() > FLT_EPSILON) {
        EGG::Quatf drot;
        EGG::Quatf angVelQuat(0.0f, angVel.x, angVel.y, angVel.z);
        EGG::Quatf::quatMul(drot, this->mainRot, angVelQuat);
        this->mainRot += drot * dt * 0.5f;

        if (fabsf(mainRot.squareNorm()) <= FLT_EPSILON) {
            this->mainRot.setIdentity();
        } else {
            this->mainRot.normalise();
        }
    }

    if (_forceUpright) {
        this->stabilize();
    }
    if (fabsf(mainRot.squareNorm()) <= FLT_EPSILON) {
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
    // Default: no-op. Bikes override to zero angular velocity Z.
}

void KartDynamics::stabilize() {
    // Default stabilization: gradually rotate toward upright orientation.
    // In MKWii, this applies a corrective torque based on the difference
    // between the kart's current up vector and the world up vector (RKSystem_ey).
    // For the base kart class, apply a gentle corrective rotation.
    // Bikes may override with their own stabilization logic.
    f32 stabFactor = this->stabilizationFactor;
    if (stabFactor <= 0.0f) return;

    // Interpolate toward world up
    this->upInterpolated = this->upInterpolated + (RKSystem_ey - this->upInterpolated) * stabFactor;
}

void KartDynamics::applyWrenchScaled(const EGG::Vector3f& r, const EGG::Vector3f& F, f32 bumpDeviation) {
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
    f32 outZ = (M.mtx[2][0] * v.x) + (M.mtx[2][1] * v.y) + (M.mtx[2][2] * v.z);
    f32 outY = (M.mtx[1][0] * v.x) + (M.mtx[1][1] * v.y) + (M.mtx[1][2] * v.z);
    f32 outX = (M.mtx[0][0] * v.x) + (M.mtx[0][1] * v.y) + (M.mtx[0][2] * v.z);
    out.z = outZ;
    out.y = outY;
    out.x = outX;
}

void KartDynamicsBike::forceUpright() {
    this->angVel0.z = 0.0f;
}

void KartDynamicsBike::stabilize() {
    // Bike stabilization: similar to base kart but with bike-specific
    // parameters. Bikes have a different weight distribution and lean
    // angle behavior compared to karts.
    f32 stabFactor = this->stabilizationFactor;
    if (stabFactor <= 0.0f) return;

    // Bikes use a slightly different stabilization curve
    this->upInterpolated = this->upInterpolated + (RKSystem_ey - this->upInterpolated) * stabFactor;
}

void KartDynamics::calcLinearVelocity(f32 dt) {
    if (dt <= 0.0f) return;

    // Integrate accumulated forces into external velocity
    // F = ma, so a = F/m. Since MKWii uses unit mass for most calcs,
    // acceleration = totalForce directly.
    // v += a * dt
    this->acceleration = this->totalForce;
    this->externalVel += this->acceleration * dt;
}

void KartDynamics::calcAngularVelocity(f32 dt) {
    if (dt <= 0.0f) return;

    // Compute angular acceleration from torque: alpha = I^-1 * tau
    // Then integrate: omega += alpha * dt
    EGG::Vector3f angAcc;
    getAngAcc(angAcc, this->totalTorque);

    this->angVel0 += angAcc * dt;

    // Apply damping to angular velocity
    this->angVel0 *= 0.98f;
}

void KartDynamics::applyAirDrag(f32 dragCoeff) {
    // Quadratic air resistance: F_drag = -Cd * |v|^2 * v_hat
    // This opposes motion and scales with the square of speed.
    // Air drag is always applied (unlike rolling resistance which
    // requires ground contact).

    f32 speedSq = externalVel.squaredLength();
    if (speedSq < 0.0001f) return;

    f32 speed = sqrtf(speedSq);
    f32 dragMag = dragCoeff * speedSq;

    // Apply drag as a force opposing the velocity
    EGG::Vector3f dragForce = externalVel * (-dragMag / speed);
    this->totalForce += dragForce;
}

void KartDynamics::applyRollingResistance(f32 resistanceCoeff) {
    // Rolling resistance: F_rr = -Crr * m * g * v_hat
    // This is a constant-magnitude force opposing motion,
    // independent of speed (unlike air drag).
    // Rolling resistance only applies when the kart is on the ground.

    f32 speedSq = externalVel.squaredLength();
    if (speedSq < 0.01f) return;

    f32 speed = sqrtf(speedSq);

    // Rolling resistance force magnitude
    f32 rrMag = resistanceCoeff * mass * 9.8f;

    // Cap at the kart's current kinetic energy to prevent reversal
    if (rrMag > speed) {
        rrMag = speed;
    }

    // Apply as opposing force
    EGG::Vector3f rrForce = externalVel * (-rrMag / speed);
    this->totalForce += rrForce;
}

void KartDynamics::applyEngineForce(f32 force, const EGG::Vector3f& forward) {
    // Apply engine driving force in the kart's forward direction.
    // The force is transformed to world space and added to total force.

    // Transform forward from body to world frame
    EGG::Vector3f worldForward;
    fullRot.rotateVector(forward, worldForward);

    // Normalize the forward direction
    f32 fwdLen = sqrtf(worldForward.squaredLength());
    if (fwdLen > 0.001f) {
        worldForward *= force / fwdLen;
        this->totalForce += worldForward;
    }
}

void KartDynamics::integrate(f32 dt, f32 maxSpeed) {
    if (dt <= 0.0f) return;

    // Euler integration: position += velocity * dt
    // The total speed includes all velocity components
    this->speed = externalVel * dt + internalVel + movingRoadVel + movingWaterVel;
    this->speedNorm = speed.normalise();

    // Apply scale factor (e.g., mega mushroom shrinks effective speed)
    if (this->scale.z < 1.0f) {
        maxSpeed *= this->scale.z;
    }

    // Clamp to maximum speed
    if (this->speedNorm > maxSpeed) {
        this->speedNorm = maxSpeed;
    }

    // Update position
    this->pos += this->speed;

    // Clear accumulated forces and torques for next frame
    this->totalForce.setAll(0);
    this->totalTorque.setAll(0);
    this->angVel2.setAll(0);
}

void KartDynamics::clampVelocity(f32 maxSpeed) {
    f32 speedSq = externalVel.squaredLength();
    if (speedSq <= maxSpeed * maxSpeed) {
        return; // Already under the cap
    }

    f32 speed = sqrtf(speedSq);
    if (speed < 0.001f) return;

    // Scale velocity down to the maximum speed
    f32 scaleFactor = maxSpeed / speed;
    externalVel *= scaleFactor;
    speedNorm = maxSpeed;
}

EGG::Vector3f KartDynamics::getMomentum() const {
    // Linear momentum: p = m * v
    // The total velocity includes all components
    EGG::Vector3f totalVel = externalVel + internalVel + movingRoadVel + movingWaterVel;
    return totalVel * mass;
}

void KartDynamics::setExternalForce(const EGG::Vector3f& force) {
    // Set (not add) the external force — used for one-shot forces
    // like item hits, explosions, and cannon launches.
    // This replaces any accumulated forces.
    this->totalForce = force;
}

EGG::Vector3f KartDynamics_calcInertia(const EGG::Vector3f& halfExtents, f32 mass) {
    // Calculate moment of inertia for a box-shaped body:
    // Ixx = (m/12) * (y^2 + z^2)
    // Iyy = (m/12) * (x^2 + z^2)
    // Izz = (m/12) * (x^2 + y^2)
    //
    // halfExtents contains the full half-dimensions (hx, hy, hz),
    // so we use (2*h)^2 = 4*h^2 for each dimension.

    f32 inv12 = mass / 12.0f;

    f32 x2 = halfExtents.x * halfExtents.x * 4.0f;
    f32 y2 = halfExtents.y * halfExtents.y * 4.0f;
    f32 z2 = halfExtents.z * halfExtents.z * 4.0f;

    return EGG::Vector3f(
        inv12 * (y2 + z2),  // Ixx
        inv12 * (x2 + z2),  // Iyy
        inv12 * (x2 + y2)   // Izz
    );
}

} // namespace Kart