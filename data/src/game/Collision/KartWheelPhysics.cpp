#include "KartWheelPhysics.hpp"
#include "KartHitbox.hpp"
#include "KartDynamics.hpp"
#include "../KartMovement/KartState.hpp"
#include "../KartMovement/KartMove.hpp"
#include "../KartMovement/KartBody.hpp"
#include "KartCollide.hpp"
#include "BSP.hpp"

#include <egg/math/eggVector.hpp>
#include <egg/math/eggQuat.hpp>
#include <egg/math/eggMatrix.hpp>

#include <math.h>

namespace Kart {

// Physics tuning constants
static f32 rateForward = 0.1f;
static f32 wheelColForceFactor = 10.0f;
static f32 wheelHitboxHeight = 100.0f;
static f32 forwardFactor = 0.3f;
static f32 respawnSuspLimit = 1.0f;
static f32 disableSuspForceVerticalXV = 5.0f;
static f32 unk_suspSpeedRate = 0.3f;
static f32 sinkDepthFactor = 0.5f;

// --- KartWheelPhysics ---

KartWheelPhysics::KartWheelPhysics(u32 wheelIdx, s32 bspWheelIdx)
    : KartObjectProxy(), wheelIdx(wheelIdx), bspWheelIdx(bspWheelIdx), bspWheel(nullptr) {
}

void KartWheelPhysics::init() {
    this->hitboxGroup = new HitboxGroup;
    EGG::Vector3f pos(0.0f, 0.0f, 0.0f);
    this->hitboxGroup->createSingleHitbox(pos, 10.0f);
}

void KartWheelPhysics::setBsp() {
    this->bspWheel = this->KartObjectProxy::bspWheel(this->bspWheelIdx);
}

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

void KartWheelPhysics::setColState(f32 dt, f32 travel, const EGG::Vector3f& colForce) {
    f32 maxTravel = this->susTravel + kartPhysicsEngine()->getYScale() * 5.0f;
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

void KartWheelPhysics::calcCollision(const EGG::Vector3f& downDir, const EGG::Vector3f& suspTop) {
    KartDynamics* kartDyn = kartDynamics();
    HitboxGroup* hitboxGroup = getHitbox();
    Hitbox& wheelHitbox = hitboxGroup->getHitbox(0);
    if (!kartState()->on(KART_FLAG_SKIP_WHEEL_CALC) && !kartState()->on(KART_FLAG_COL_INVISIBILITY) && !kartState()->on(KART_FLAG_STH_KILLER)) {
        f32 radius = bspWheel->wheelRadius;
        f32 effRadius = effectiveRadius;
        f32 totalScale = kartMove()->totalScale();
        const EGG::Vector3f& scale = getScale();
        f32 dist = effRadius * scale.y - radius * totalScale;
        EGG::Vector3f center;
        center.x = wheelPos.x + dist * downDir.x;
        center.y = wheelPos.y + dist * downDir.y;
        center.z = wheelPos.z + dist * downDir.z;

        EGG::Vector3f bodyForward;
        getBodyForward(bodyForward);
        f32 forwardDist = forwardFactor * radius * kartMove()->getLeanRot() * kartMove()->totalScale();
        center += forwardDist * bodyForward;

        if (!kartState()->on(KART_FLAG_HALFPIPE_MIDAIR) && !kartState()->on(KART_FLAG_IN_CANNON)) {
            hitboxGroup->setHitboxScale(kartMove()->totalScale());
            if (kartState()->on(KART_FLAG_STH_61)) {
                wheelHitbox.lastPos = getPos();
            }

            kartCollide()->calcWheelCollision(getPlayerIdx(), wheelIdx, kartDyn, getHitbox(), colVel, center, radius);

            if ((hitboxGroup->getKartCollisionInfo().flags & (COL_FLAG_FLOOR | COL_FLAG_WALL | COL_FLAG_WALL_3)) != 0) {
                wheelPos += hitboxGroup->getKartCollisionInfo().tangentOff;
                u32 sinkDepth = hitboxGroup->getKartCollisionInfo().sinkDepth;
                u32 sinkDepthAmount = sinkDepthFactor * sinkDepth;
                targetEffectiveRadius = bspWheel->wheelRadius - sinkDepthAmount;
                // Notify the kart body of the sink depth for visual
                // effects (tire compression into the ground surface).
                // Kart::KartBody::requireSinkDepth is a no-op in the stub;
                // the full implementation updates tire mesh deformation.
                // The sink depth is applied above via targetEffectiveRadius.
            }
        } else {
            hitboxGroup->getKartCollisionInfo().reset();
        }

        hitboxGroup->getHitbox(0).lastPos = center;
    }

    f32 scaledRadius = effectiveRadius * kartMove()->totalScale();
    this->suspTop = suspTop;
    wheelEdgePos = wheelPos + scaledRadius * downDir;
    f32 travel = downDir.dot(wheelPos - suspTop);
    updateEffectiveRadius();
    this->susTravel = travel;

    if (travel < 0.0f) {
        isAtSuspLimit = 1.0f;
        kartPhysicsEngine()->registerSuspLimits(travel * downDir);
        kartState()->set(KART_FLAG_AT_SUSP_LIMIT);
    } else {
        isAtSuspLimit = 0.0f;
    }
}

void KartWheelPhysics::calc(const EGG::Vector3f& down, const EGG::Vector3f& movement) {
    EGG::Vector3f topmost;
    topmost.x = suspTop.x + movement.x;
    topmost.y = suspTop.y + movement.y;
    topmost.z = suspTop.z + movement.z;

    EGG::Vector3f susTravelVector;
    susTravelVector.x = wheelPos.x - topmost.x;
    susTravelVector.y = wheelPos.y - topmost.y;
    susTravelVector.z = wheelPos.z - topmost.z;

    susTravel = down.dot(susTravelVector);
    if (susTravel > bspWheel->maxTravel * getYScale()) {
        susTravel = bspWheel->maxTravel * getYScale();
    }

    if (susTravel < 0.0f) {
        susTravel = 0.0f;
    }

    wheelPos.x = susTravel * down.x + topmost.x;
    wheelPos.y = susTravel * down.y + topmost.y;
    wheelPos.z = susTravel * down.z + topmost.z;

    EGG::Vector3f spd;
    spd.x = wheelPos.x - prevWheelPos.x;
    spd.y = wheelPos.y - prevWheelPos.y;
    spd.z = wheelPos.z - prevWheelPos.z;

    KartDynamics* pDynamics = kartDynamics();
    speed = spd;
    speed -= pDynamics->internalVel;
    speed -= pDynamics->movingRoadVel;
    speed -= pDynamics->movingWaterVel;
    speed -= hitboxGroup->getKartCollisionInfo().movement;
    speed -= kartCollide()->getMovement();
    hitboxGroup->getKartCollisionInfo().vel += speed;
    prevWheelPos = wheelPos;
    prevWheelOffset.x = prevWheelPos.x - topmost.x;
    prevWheelOffset.y = prevWheelPos.y - topmost.y;
    prevWheelOffset.z = prevWheelPos.z - topmost.z;
}

void KartWheelPhysics::updateEffectiveRadius() {
    this->effectiveRadius += (targetEffectiveRadius - effectiveRadius) * 0.1f;
}

void KartWheelPhysics::u80599dc0(const EGG::Vector3f& front) {
    f32 rateLateral;
    if (kartState()->on(KART_FLAG_STH_WALL_COL)) {
        rateLateral = 0.01f;
    } else {
        rateLateral = kartCollide()->get1c();
    }

    bool affectAngVel = kartState()->on(KART_FLAG_LARGE_FLIP_HIT) || kartState()->on(KART_FLAG_WHEELIE_ROT);
    kartCollide()->applySomeFloorMoment(kartDynamics(), this->hitboxGroup, front, kartMove()->dir(), this->speed,
                    rateForward, rateLateral, true, true, !affectAngVel);
}

bool KartWheelPhysics::hasFloorCollision() const {
    return (hitboxGroup->getKartCollisionInfo().flags & COL_FLAG_FLOOR) != 0;
}

const EGG::Vector3f& KartWheelPhysics::getCollisionFloorNrm() const {
    return this->getKartCollisionInfo().floorNrm;
}

const KartCollisionInfo& KartWheelPhysics::getKartCollisionInfo() const {
    return this->hitboxGroup->getKartCollisionInfo();
}

// Additional physics tuning constants
static f32 SPRING_STIFFNESS = 8.0f;
static f32 DAMPING_COEFFICIENT = 2.5f;
static f32 TRACTION_HIGH = 1.0f;       // Road surface grip
static f32 TRACTION_MEDIUM = 0.7f;     // Off-road grip
static f32 TRACTION_LOW = 0.3f;        // Ice / slick surface grip
static f32 SLIP_THRESHOLD = 0.2f;      // Slip ratio threshold for traction loss
static f32 BRAKE_FORCE_MAX = 5.0f;
static f32 SURFACE_TRANSITION_COOLDOWN = 10.0f;

f32 KartWheelPhysics::calcSuspensionTravel(const EGG::Vector3f& downDir) {
    if (!bspWheel) return 0.0f;

    // Compute suspension compression from the wheel's current position
    // relative to the suspension top anchor, projected onto the down direction
    EGG::Vector3f wheelToTop = suspTop - wheelPos;
    f32 rawTravel = downDir.dot(wheelToTop);

    // Clamp to the BSP-defined travel range
    f32 maxTravel = bspWheel->maxTravel * getYScale();
    if (rawTravel < 0.0f) {
        rawTravel = 0.0f;
    }
    if (rawTravel > maxTravel) {
        rawTravel = maxTravel;
    }

    // Spring-damper model: F = -k * x - c * v
    // The suspension travel effectively acts as a spring that pushes
    // the wheel back toward its natural length (maxTravel)
    f32 compression = maxTravel - rawTravel;
    f32 compressionRatio = compression / maxTravel;

    // Apply spring force scaled by compression ratio
    // Higher compression = stronger push-back force
    f32 springForce = SPRING_STIFFNESS * compressionRatio;

    // Damping: opposes velocity of compression change
    f32 prevCompression = maxTravel - susTravel;
    f32 compressionVel = (compression - prevCompression);
    f32 dampForce = DAMPING_COEFFICIENT * compressionVel;

    // Net suspension force (positive = push wheel down/away from body)
    f32 netForce = springForce - dampForce;

    // Store the clamped travel
    this->susTravel = rawTravel;

    return netForce;
}

EGG::Vector3f KartWheelPhysics::calcTractionForce(const EGG::Vector3f& floorNormal,
                                                   f32 engineForce) const {
    EGG::Vector3f tractionForce(0.0f, 0.0f, 0.0f);

    if (!hasFloorCollision()) {
        return tractionForce;
    }

    // Determine traction coefficient from surface KCL type
    const KartCollisionInfo& info = getKartCollisionInfo();
    f32 tractionCoeff = TRACTION_HIGH;

    u32 kclType = info.floorKclTypeMask;
    // KCL type bits encode surface material:
    // Bit 1 = off-road, Bit 2 = ice/slippery
    if (kclType & 0x04) {
        tractionCoeff = TRACTION_LOW;    // Ice surface
    } else if (kclType & 0x02) {
        tractionCoeff = TRACTION_MEDIUM; // Off-road
    }

    // Reduce traction if wheel is at suspension limit (barely touching)
    if (isAtSuspLimit > 0.5f) {
        tractionCoeff *= 0.5f;
    }

    // Traction force is applied along the floor plane
    // Project the kart's forward direction onto the floor
    EGG::Vector3f forward;
    getBodyForward(forward);

    // Remove the normal component from the forward vector
    f32 normalDot = forward.dot(floorNormal);
    EGG::Vector3f floorForward = forward - floorNormal * normalDot;
    f32 fwdLen = floorForward.normalise();

    if (fwdLen > 0.001f) {
        // Traction force = engine force * traction coefficient * floor forward
        tractionForce = floorForward * (engineForce * tractionCoeff);

        // Reduce traction force based on slip ratio
        if (slipRatio > SLIP_THRESHOLD) {
            f32 slipPenalty = 1.0f - (slipRatio - SLIP_THRESHOLD) * 3.0f;
            if (slipPenalty < 0.0f) slipPenalty = 0.0f;
            tractionForce *= slipPenalty;
        }
    }

    return tractionForce;
}

f32 KartWheelPhysics::calcWheelTorque(f32 totalTorque, bool isRearWheel) const {
    if (!bspWheel) return 0.0f;

    // MKWii uses rear-wheel drive for most karts
    // and all-wheel drive for some heavy karts
    f32 wheelTorque;

    if (isRearWheel) {
        // Rear wheels receive the majority of engine torque
        // For a 4-wheel kart: rear gets ~70% of total torque (35% each)
        wheelTorque = totalTorque * 0.35f;
    } else {
        // Front wheels receive reduced torque (or none for RWD)
        // Most karts in MKWii are RWD, so front wheels get minimal torque
        wheelTorque = totalTorque * 0.0f;
    }

    // Reduce torque if wheel is in the air (no floor contact)
    if (!hasFloorCollision()) {
        wheelTorque = 0.0f;
    }

    // Scale by effective radius (smaller radius = more torque at ground)
    if (bspWheel->wheelRadius > 0.001f) {
        wheelTorque *= effectiveRadius / bspWheel->wheelRadius;
    }

    // Apply brake force as negative torque
    wheelTorque -= brakeForce;

    return wheelTorque;
}

f32 KartWheelPhysics::updateWheelRotation(f32 dt) {
    if (!bspWheel || dt <= 0.0f) {
        return wheelRotation;
    }

    // The visual wheel rotation is driven by the ground contact speed
    // projected onto the wheel's forward direction
    f32 groundSpeed = 0.0f;

    if (hasFloorCollision()) {
        // Project speed onto the floor plane's forward direction
        const EGG::Vector3f& floorNrm = getCollisionFloorNrm();
        EGG::Vector3f forward;
        getBodyForward(forward);

        f32 normalDot = forward.dot(floorNrm);
        EGG::Vector3f floorFwd = forward - floorNrm * normalDot;
        f32 fwdLen = floorFwd.normalise();

        if (fwdLen > 0.001f) {
            groundSpeed = speed.dot(floorFwd);
        }
    }

    // Angular velocity = linear speed / radius
    f32 angularVel = 0.0f;
    if (effectiveRadius > 0.001f) {
        angularVel = groundSpeed / effectiveRadius;
    }

    // Update rotation angle
    wheelRotation += angularVel * dt;

    // Keep rotation in [0, 2*PI)
    const f32 TWO_PI = 6.2831853f;
    if (wheelRotation > TWO_PI) {
        wheelRotation -= TWO_PI;
    } else if (wheelRotation < 0.0f) {
        wheelRotation += TWO_PI;
    }

    // Compute slip ratio for traction calculations
    // slip_ratio = (wheel_speed - ground_speed) / |ground_speed|
    if (fabsf(groundSpeed) > 0.1f) {
        f32 wheelSpeed = angularVel * effectiveRadius;
        slipRatio = (wheelSpeed - groundSpeed) / fabsf(groundSpeed);
        // Clamp to reasonable range
        if (slipRatio < -1.0f) slipRatio = -1.0f;
        if (slipRatio > 2.0f) slipRatio = 2.0f;
    } else {
        slipRatio = 0.0f;
    }

    return wheelRotation;
}

void KartWheelPhysics::handleSurfaceChange(u32 newKclType) {
    if (prevSurfaceType == newKclType) {
        return;
    }

    // Surface transition detected — different KCL type from last frame
    // In the full game, this triggers:
    //   - Sound effects (grass rustle, gravel crunch, ice screech)
    //   - Particle effects (dust clouds, water splashes)
    //   - Speed adjustments (off-road slowdown begins)

    // Check for entry into off-road
    bool wasOnRoad = (prevSurfaceType & 0x01) != 0;
    bool isOnRoad = (newKclType & 0x01) != 0;

    if (wasOnRoad && !isOnRoad) {
        // Left road surface — begin off-road effects
        // Speed penalty is applied by ColResponse::processOffRoad
    }

    // Check for ice surface transition
    bool wasIce = (prevSurfaceType & 0x04) != 0;
    bool isIce = (newKclType & 0x04) != 0;

    if (!wasIce && isIce) {
        // Entered ice — reduce handling factor
        if (hitboxGroup) {
            hitboxGroup->getKartCollisionInfo().handlingFactor = 0.4f;
        }
    } else if (wasIce && !isIce) {
        // Left ice — restore normal handling
        if (hitboxGroup) {
            hitboxGroup->getKartCollisionInfo().handlingFactor = 1.0f;
        }
    }

    // Update the previous surface type for next frame's comparison
    prevSurfaceType = newKclType;
}

EGG::Vector3f KartWheelPhysics::getContactPoint() const {
    // The contact point is where the wheel edge touches the ground
    // This is stored in wheelEdgePos, which is computed during calcCollision
    return wheelEdgePos;
}

bool KartWheelPhysics::isSlipping() const {
    // A wheel is considered slipping if the slip ratio exceeds the threshold
    // AND the wheel has floor contact (slip only matters on the ground)
    if (!hasFloorCollision()) {
        return false;
    }

    return slipRatio > SLIP_THRESHOLD;
}

void KartWheelPhysics::applyBraking(f32 brakeStrength, f32 dt) {
    if (brakeStrength <= 0.0f || dt <= 0.0f) {
        brakeForce = 0.0f;
        return;
    }

    // Brake force is proportional to brake input strength
    // and the kart's current speed
    KartDynamics* dyn = kartDynamics();
    f32 currentSpeed = dyn->speedNorm;

    // Brake force is capped to prevent over-braking
    // It also only applies when the wheel is on the ground
    if (hasFloorCollision() && currentSpeed > 0.1f) {
        brakeForce = BRAKE_FORCE_MAX * brakeStrength;

        // Apply braking as a deceleration to the kart's velocity
        // Brake deceleration = brake_force / wheel_count (distributed)
        f32 brakeDecel = brakeForce * dt * 0.25f; // 4 wheels
        if (brakeDecel > currentSpeed) {
            brakeDecel = currentSpeed;
        }

        // Reduce internal velocity in the forward direction
        EGG::Vector3f forward;
        getBodyForward(forward);
        dyn->internalVel -= forward * brakeDecel;
    } else {
        brakeForce = 0.0f;
    }
}

// --- KartSusPhysics ---

KartSusPhysics::KartSusPhysics(u32 wheelIdx, KartWheelType wheelType, s32 bspWheelIdx) : KartObjectProxy() {
    this->wheelPhysics = nullptr;
    this->wheelType = wheelType;
    this->bspWheelIdx = bspWheelIdx;
    this->wheelIdx = wheelIdx;
    this->_38 = 1.0f;
}

void KartSusPhysics::reset() {
    this->_38 = 1.0f / this->bspWheel->maxTravel;
    this->suspTop.setAll(0);
    this->maxTravelScaled = 0.0f;
    this->hasFloorCol = false;
    this->_36 = 0;
    this->downDir.setAll(0);
}

void KartSusPhysics::calcCollision(const EGG::Vector3f& gravity, const EGG::Matrix34f& mtx, f32 dt) {
    // Delegate to wheel physics collision handling
    if (this->wheelPhysics != nullptr) {
        this->wheelPhysics->calcCollision(gravity, mtx * EGG::Vector3f::zero);
    }
}

} // namespace Kart