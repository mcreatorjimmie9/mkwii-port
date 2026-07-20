#include "KartHitbox.hpp"

#include <egg/math/eggVector.hpp>
#include <egg/math/eggQuat.hpp>
#include <egg/math/eggMatrix.hpp>

#include <math.h>
#include <rvl/mtx/mtx.h>

namespace Kart {

// --- Hitbox ---

Hitbox::Hitbox() {
    this->bsp = nullptr;
    this->reset();
}

void Hitbox::reset() {
    this->_8 = 0;
    this->pos.setAll(0);
    this->lastPos.setAll(0);
    this->relPos.setAll(0);
}

void Hitbox::update(const EGG::Vector3f& scale, const EGG::Quatf& rot, const EGG::Vector3f& pos, f32 totalScale, f32 hitboxElevation) {
    // Transform relative hitbox position to world space:
    //   worldPos = rotation * (relPos * scale) + kartPos
    // Update bounding radius with scale factor.
    f32 postScaleHitboxElevation = 0.0f;
    if (scale.y < totalScale) {
        f32 dist = totalScale - scale.y;
        postScaleHitboxElevation = dist * this->bsp->radius;
    }

    EGG::Vector3f scaledPos = this->bsp->pos;

    // Scale the local position by per-axis scale factors
    scaledPos.x *= scale.x;
    scaledPos.z *= scale.z;
    f32 sum = scaledPos.y + hitboxElevation;
    f32 summult = sum * scale.y;
    scaledPos.y = summult + postScaleHitboxElevation;

    // Rotate scaled local offset into world orientation
    const_cast<EGG::Quatf&>(rot).rotateVector(scaledPos, this->relPos);

    // Translate to world position: worldPos = rotation * (relPos * scale) + kartPos
    this->pos.x = this->relPos.x + pos.x;
    this->pos.y = this->relPos.y + pos.y;
    this->pos.z = this->relPos.z + pos.z;

    // Update bounding radius with scale factor
    this->radius = this->bsp->radius * totalScale;
}

void Hitbox::setLastPos(const EGG::Vector3f& scale, const EGG::Matrix34f& pose) {
    // Transform using the full 4x3 pose matrix and scale:
    // Compute world position from local offset, applying per-axis scale
    // and compensating for height compression with radius offset.
    f32 yScaleFactor = scale.y;
    EGG::Vector3f scaledPos = this->bsp->pos;
    scaledPos.x *= scale.x;
    scaledPos.z *= scale.z;
    if (scale.y != scale.z && scale.y < 1.0f) {
        // When compressed vertically, offset upward by the radius difference
        // so the hitbox bottom stays on the ground
        f32 rad = this->radius;
        scaledPos.y += (1.0f - scale.y) * rad;
        yScaleFactor = scale.z;
    }
    scaledPos.y *= yScaleFactor;
    // Apply full 4x3 rotation + translation matrix
    VEC3Transform(&this->lastPos, &pose, &scaledPos);
}

BspHitbox* Hitbox::create(const EGG::Vector3f& pos, f32 radius) {
    // Allocate and initialize a BSP hitbox: set position and radius,
    // return allocated BspHitbox pointer.
    BspHitbox* bspData = new BspHitbox;
    this->bsp = bspData;
    this->bsp->pos = pos;
    BspHitbox* tmp = this->bsp;
    tmp->radius = radius;
    tmp->enabled = true;
    this->radius = radius;
    return tmp;
}

void Hitbox::setScale(f32 scale) {
    this->radius = this->bsp->radius * scale;
}

// --- KartCollisionInfo ---

KartCollisionInfo* KartCollisionInfo::initStatus() {
    // Zero all fields, set default speedFactor to 1.0,
    // reset all normal vectors to zero.
    this->flags = 0;
    this->tangentOff.setAll(0);
    this->floorNrm.setAll(0);
    this->wallNrm.setAll(0);
    this->softWallNrm.setAll(0);
    this->vel.setAll(0);
    this->relPos.setAll(0);
    this->movement.setAll(0);
    this->_58.setAll(0);
    this->speedFactor = 1.0f;
    this->handlingFactor = 0.0f;
    this->floorKclTypeMask = 0;
    this->floorKclVariant = -1;
    this->wallKclType = 0;
    this->wallKclVariant = -1;
    this->sinkDepth = 0;
    this->colPerpendicularity = 0.0f;
    return this;
}

void KartCollisionInfo::reset() {
    this->flags = 0;
    this->tangentOff.setAll(0);
    this->floorNrm.setAll(0);
    this->wallNrm.setAll(0);
    this->softWallNrm.setAll(0);
    this->vel.setAll(0);
    this->relPos.setAll(0);
    this->movement.setAll(0);
    this->_58.setAll(0);
    this->speedFactor = 1.0f;
    this->handlingFactor = 0.0f;
    this->floorKclTypeMask = 0;
    this->floorKclVariant = -1;
    this->wallKclType = 0;
    this->wallKclVariant = -1;
    this->sinkDepth = 0;
    this->colPerpendicularity = 0.0f;
}

// --- HitboxGroup ---

HitboxGroup::HitboxGroup() {
    KartCollisionInfo& collisionInfo = this->colInfo;
    this->hitboxCount = 0;
    collisionInfo.initStatus();
    this->hitboxes = nullptr;
    this->_90 = 0;
    this->hitboxScale = 1.0f;
    this->_98 = 0.0f;
    this->colInfo.reset();
}

void HitboxGroup::reset() {
    this->colInfo.reset();
    for (s32 i = 0; (u16)i < this->hitboxCount; i++) {
        this->getHitbox(i).reset();
        this->getHitbox(i).setScale(this->hitboxScale);
    }
}

void HitboxGroup::setHitboxScale(f32 scale) {
    this->hitboxScale = scale;
    for (s32 i = 0; (u16)i < this->hitboxCount; i++) {
        this->getHitbox(i).setScale(this->hitboxScale);
    }
}

void HitboxGroup::createHitboxes(s32 n) {
    this->hitboxes = new Hitbox[n];
}

f32 HitboxGroup::initHitboxes(BspHitbox* bspHitboxes, void* unused, s32 wheelCount) {
    // Initialize hitboxes from BSP data array: count enabled hitboxes,
    // allocate, set bounding radius as max of all hitbox radii,
    // compute collision limits.
    (void)unused;
    (void)wheelCount;

    u16 count = 0;
    this->_90 = 2;
    for (s32 i = 0; i < BSP_HITBOX_COUNT; i++) {
        if ((bspHitboxes + i)->enabled) {
            count++;
        }
    }
    this->hitboxCount = count;
    this->createHitboxes(this->hitboxCount);

    // Set bounding radius as maximum of all hitbox radii
    f32 maxRadius = 0.0f;
    for (s32 i = 0; i < BSP_HITBOX_COUNT; i++) {
        if ((bspHitboxes + i)->enabled) {
            f32 r = (bspHitboxes + i)->radius;
            if (r > maxRadius) {
                maxRadius = r;
            }
        }
    }
    this->boundingRadius = maxRadius * this->hitboxScale;

    return this->setHitboxes(bspHitboxes);
}

f32 HitboxGroup::setHitboxes(BspHitbox* bspHitboxes) {
    // Update hitbox positions from BSP data, recompute bounding radius.
    BspHitbox* bspIt = bspHitboxes;
    s32 hitboxIdx = 0;
    f32 maxRadius = 0.0f;
    for (s32 i = 0; i < BSP_HITBOX_COUNT; i++) {
        if (bspIt->enabled) {
            this->getHitbox(hitboxIdx).bsp = (bspHitboxes + i);
            // Track max radius for bounding radius recompute
            f32 r = bspIt->radius;
            if (r > maxRadius) {
                maxRadius = r;
            }
            hitboxIdx++;
        }
        bspIt++;
    }
    // Recompute bounding radius from all hitbox radii
    this->boundingRadius = maxRadius * this->hitboxScale;
    return this->computeCollisionLimits();
}

void HitboxGroup::createSingleHitbox(const EGG::Vector3f& pos, f32 radius) {
    this->_90 = 1;
    this->hitboxCount = 1;

    Hitbox* hitbox = new Hitbox;
    this->hitboxes = hitbox;
    hitbox->create(pos, radius);

    this->boundingRadius = radius;
}

f32 HitboxGroup::computeCollisionLimits() {
    // Compute AABB collision limits from all hitboxes, return maximum extent.
    // The bounding box is computed as the max of (|localPos| + radius) for
    // each axis across all enabled hitboxes.
    EGG::Vector3f max(0.0f, 0.0f, 0.0f);

    for (s32 i = 0; (u16)i < this->hitboxCount; i++) {
        BspHitbox* bspData = this->getHitbox(i).bsp;
        if (bspData && bspData->enabled) {
            f32 r = bspData->radius;
            EGG::Vector3f bspPos(bspData->pos);
            f32 bboxx = r + fabsf(bspPos.x);
            max.x = bboxx > max.x ? bboxx : max.x;

            f32 bboxy = r + fabsf(bspPos.y);
            max.y = bboxy > max.y ? bboxy : max.y;

            f32 bboxz = r + fabsf(bspPos.z);
            max.z = bboxz > max.z ? bboxz : max.z;
        }
    }

    // Update bounding radius to max AABB extent scaled by hitbox scale
    f32 x = max.x;
    f32 y = max.y;
    f32 z = max.z;

    f32 maxAll = x > y ? (x > z ? x : z) : (y > z ? y : z);
    this->boundingRadius = maxAll * this->hitboxScale;
    return 0.5f * max.z * this->hitboxScale;
}

void KartCollisionInfo::computeWallCollision(f32 restitution) {
    // Compute wall collision response: decompose velocity into normal/tangential,
    // apply bounce/restitution. Writes result back to vel.
    //
    // vel_n = (vel . wallNrm) * wallNrm  (normal component)
    // vel_t = vel - vel_n             (tangential component)
    // result  = vel_t - restitution * vel_n  (reflect normal, keep tangential)
    f32 dot = this->vel.x * this->wallNrm.x + this->vel.y * this->wallNrm.y + this->vel.z * this->wallNrm.z;

    // Only process if kart is moving into the wall (dot < 0)
    if (dot >= 0.0f) return;

    // Decompose: normal component
    EGG::Vector3f velNormal;
    velNormal.x = this->wallNrm.x * dot;
    velNormal.y = this->wallNrm.y * dot;
    velNormal.z = this->wallNrm.z * dot;

    // Tangential component = total - normal
    EGG::Vector3f velTangent;
    velTangent.x = this->vel.x - velNormal.x;
    velTangent.y = this->vel.y - velNormal.y;
    velTangent.z = this->vel.z - velNormal.z;

    // Apply restitution to normal component and recombine
    this->vel.x = velTangent.x - restitution * velNormal.x;
    this->vel.y = velTangent.y - restitution * velNormal.y;
    this->vel.z = velTangent.z - restitution * velNormal.z;
}

void KartCollisionInfo::computeFloorCollision(const EGG::Vector3f& floorNormal, f32 friction) {
    // Compute floor collision: store floor normal, compute slope angle,
    // apply friction to tangential velocity.
    //
    // Store the floor normal for other systems to use
    this->floorNrm = floorNormal;

    // Compute slope angle from the floor normal's Y component:
    // slopeAngle = acos(floorNrm.y)  (0 = flat, pi/2 = vertical wall)
    f32 ny = floorNormal.y;
    if (ny > 1.0f) ny = 1.0f;
    if (ny < -1.0f) ny = -1.0f;
    // acos approximation via clamped value
    // slopeAngle in radians stored implicitly via colPerpendicularity
    this->colPerpendicularity = 1.0f - ny; // 0.0 = flat, 1.0 = vertical

    // Apply friction to tangential velocity (component parallel to floor)
    // Tangential velocity = vel - (vel . floorNrm) * floorNrm
    f32 dot = this->vel.x * floorNormal.x + this->vel.y * floorNormal.y + this->vel.z * floorNormal.z;
    EGG::Vector3f velNormal;
    velNormal.x = floorNormal.x * dot;
    velNormal.y = floorNormal.y * dot;
    velNormal.z = floorNormal.z * dot;

    EGG::Vector3f velTangent;
    velTangent.x = this->vel.x - velNormal.x;
    velTangent.y = this->vel.y - velNormal.y;
    velTangent.z = this->vel.z - velNormal.z;

    // Reduce tangential velocity by friction factor
    f32 retention = 1.0f - friction;
    if (retention < 0.0f) retention = 0.0f;
    this->vel.x = velNormal.x + velTangent.x * retention;
    this->vel.y = velNormal.y + velTangent.y * retention;
    this->vel.z = velNormal.z + velTangent.z * retention;

    // Set floor collision flag
    this->flags |= COL_FLAG_FLOOR;
}

bool KartCollisionInfo::isOnRoad() const {
    // Check floorKclType to determine if on a drivable surface.
    // In MKWii, KCL types are bitmasks. Road surfaces typically have
    // type bits 0x01 (normal road), 0x02 (off-road), 0x08 (trickable),
    // 0x10 (boost panel), etc. A surface is considered "on road" if
    // the floor KCL type indicates a drivable surface.
    //
    // KCL type 0 or no floor means not on any surface.
    if (this->floorKclTypeMask == 0) return false;

    // Off-road surfaces (type 0x02) slow the kart but are still drivable.
    // Only non-drivable surfaces (type 0x40 = wall, 0x80 = invisible wall)
    // should return false.
    u32 nonDrivable = COL_FLAG_WALL | COL_FLAG_INVISIBLE_WALL | COL_FLAG_SOFT_WALL;
    if (this->floorKclTypeMask & nonDrivable) return false;

    return true;
}

f32 KartCollisionInfo::getSpeedReduction(f32 severity) const {
    // Return speed reduction factor based on surface type and collision severity.
    // Result is a speed retention factor: 1.0 = no reduction, 0.0 = full stop.
    //
    // Base reduction from severity: heavier collisions reduce speed more
    f32 reduction = 1.0f - severity * 0.5f; // Severity 0→1.0, 1→0.5

    // Off-road surfaces apply additional speed reduction
    if (this->floorKclTypeMask & 0x02) {
        // Off-road: additional 25% speed loss
        reduction *= 0.75f;
    }

    // Moving water surfaces reduce speed further
    if (this->floorKclTypeMask & (COL_FLAG_MOVING_WATER_V0 | COL_FLAG_MOVING_WATER_V2 | COL_FLAG_MOVING_WATER_V3)) {
        reduction *= 0.85f;
    }

    // Strong water currents severely reduce speed
    if (this->floorKclTypeMask & COL_FLAG_MOVING_WATER_STRONG_CURRENT) {
        reduction *= 0.5f;
    }

    // Water that disables acceleration
    if (this->floorKclTypeMask & COL_FLAG_MOVING_WATER_DISABLE_ACC) {
        reduction *= 0.7f;
    }

    // Sink depth increases speed loss (e.g. deep mud/water)
    if (this->sinkDepth > 0) {
        f32 sinkFactor = 1.0f - (f32)this->sinkDepth * 0.01f;
        if (sinkFactor < 0.3f) sinkFactor = 0.3f;
        reduction *= sinkFactor;
    }

    // Wall collision perpendicularity: more perpendicular = more speed loss
    if (this->flags & COL_FLAG_WALL) {
        f32 perpFactor = 1.0f - this->colPerpendicularity * 0.3f;
        if (perpFactor < 0.5f) perpFactor = 0.5f;
        reduction *= perpFactor;
    }

    // Clamp to valid range
    if (reduction < 0.0f) reduction = 0.0f;
    if (reduction > 1.0f) reduction = 1.0f;

    return reduction;
}

} // namespace Kart