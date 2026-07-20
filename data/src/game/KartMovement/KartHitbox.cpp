#include "KartHitbox.hpp"
#include <cmath>
#include <cstring>
#include <algorithm>

namespace Kart {

// @addr 0x805B6900
Hitbox::Hitbox() : bsp(nullptr), radius(0.0f), _8(0) {}

// @addr 0x805B6930
void Hitbox::reset() {
    pos.setAll(0);
    lastPos.setAll(0);
    relPos.setAll(0);
}

// @addr 0x805B6958
// Transforms relative position to world space using quaternion rotation + per-axis scale.
// Applies totalScale to the hitbox radius. Sets elevation offset on the Y component.
void Hitbox::update(const EGG::Vector3f& scale, const EGG::Quatf& rot, const EGG::Vector3f& pos, f32 totalScale, f32 hitboxElevation) {
    // Scale the relative position per-axis (e.g. kart compression stretches hitbox)
    EGG::Vector3f scaledRel = relPos;
    scaledRel.x *= scale.x;
    scaledRel.y *= scale.y;
    scaledRel.z *= scale.z;

    // Rotate scaled relative position into world space
    EGG::Vector3f worldOffset;
    rot.rotateVector(scaledRel, worldOffset);

    // Translate by the kart's world position and add elevation
    this->pos.x = pos.x + worldOffset.x;
    this->pos.y = pos.y + worldOffset.y + hitboxElevation;
    this->pos.z = pos.z + worldOffset.z;

    // Apply total scale (e.g. mega mushroom growth) to hitbox radius
    this->radius *= totalScale;
}

// @addr 0x805B6A00
// Stores the current world-space position as lastPos for next-frame delta.
// Uses the pose matrix column vectors for position extraction with scale applied.
void Hitbox::setLastPos(const EGG::Vector3f& scale, const EGG::Matrix34f& pose) {
    // Extract translation from pose matrix (column 3)
    EGG::Vector3f translation(pose.m[0][3], pose.m[1][3], pose.m[2][3]);

    // Build a scaled version of the relative position
    EGG::Vector3f scaledRel = relPos;
    scaledRel.x *= scale.x;
    scaledRel.y *= scale.y;
    scaledRel.z *= scale.z;

    // Apply rotation via the 3x3 part of the pose matrix
    lastPos.x = pose.m[0][0] * scaledRel.x + pose.m[0][1] * scaledRel.y + pose.m[0][2] * scaledRel.z + translation.x;
    lastPos.y = pose.m[1][0] * scaledRel.x + pose.m[1][1] * scaledRel.y + pose.m[1][2] * scaledRel.z + translation.y;
    lastPos.z = pose.m[2][0] * scaledRel.x + pose.m[2][1] * scaledRel.y + pose.m[2][2] * scaledRel.z + translation.z;
}

// @addr 0x805B6AC8
// Creates a BspHitbox at the given world position with the specified radius.
// Links the BspHitbox into the BSP collision system for spatial queries.
BspHitbox* Hitbox::create(const EGG::Vector3f& pos, f32 radius) {
    this->pos = pos;
    this->radius = radius;

    // Link to BSP collision system: store pointer into the BspHitbox
    // The BspHitbox is set externally by the collision manager; we store
    // the position and radius that the BSP system reads each frame.
    if (bsp != nullptr) {
        bsp->pos = pos;
        bsp->radius = radius;
        bsp->enabled = true;
    }

    return bsp;
}

// @addr 0x805B6B20
void Hitbox::setScale(float s) {
    this->radius = s;
}

// @addr 0x805B6B38
HitboxGroup::HitboxGroup() : hitboxCount(0), boundingRadius(0.0f), hitboxes(nullptr), _90(0), hitboxScale(1.0f), _98(0.0f) {
    colInfo.reset();
}

// @addr 0x805B6B80
void HitboxGroup::reset() {
    colInfo.reset();
    hitboxScale = 1.0f;
}

// @addr 0x805B6BA0
void HitboxGroup::setHitboxScale(f32 scale) {
    hitboxScale = scale;
}

// @addr 0x805B6BB8
void HitboxGroup::createHitboxes(s32 n) {
    hitboxCount = n;
    hitboxes = new Hitbox[n];
    for (s32 i = 0; i < n; i++) {
        hitboxes[i] = Hitbox();
    }
}

// @addr 0x805B6C00
// Initializes hitboxes from BspHitbox data array. Sets initial positions, radii,
// and computes the bounding radius (maximum of all hitbox radii).
// wheelCount is unused but passed from the caller for BSP compatibility.
f32 HitboxGroup::initHitboxes(BspHitbox* hitboxData, void* unused, s32 wheelCount) {
    (void)unused;
    (void)wheelCount;

    f32 maxRadius = 0.0f;

    for (s16 i = 0; i < hitboxCount; i++) {
        if (hitboxData && hitboxData[i].enabled) {
            hitboxes[i].pos = hitboxData[i].pos;
            hitboxes[i].relPos = hitboxData[i].pos;
            hitboxes[i].radius = hitboxData[i].radius;
            hitboxes[i].bsp = &hitboxData[i];

            f32 r = hitboxData[i].radius;
            if (r > maxRadius) {
                maxRadius = r;
            }
        }
    }

    boundingRadius = maxRadius;
    return maxRadius;
}

// @addr 0x805B6D00
// Updates hitbox positions from BSP data (called each frame for dynamic hitboxes
// such as wheel suspensions). Returns the current bounding radius.
f32 HitboxGroup::setHitboxes(BspHitbox* hitboxData) {
    f32 maxRadius = 0.0f;

    for (s16 i = 0; i < hitboxCount; i++) {
        if (hitboxData && hitboxData[i].enabled) {
            hitboxes[i].pos = hitboxData[i].pos;

            f32 r = hitboxData[i].radius * hitboxScale;
            hitboxes[i].radius = r;
            hitboxData[i].radius = r;

            if (r > maxRadius) {
                maxRadius = r;
            }
        }
    }

    boundingRadius = maxRadius;
    return maxRadius;
}

// @addr 0x805B6DC0
void HitboxGroup::createSingleHitbox(const EGG::Vector3f& pos, f32 radius) {
    hitboxCount = 1;
    hitboxes = new Hitbox[1];
    hitboxes[0].pos = pos;
    hitboxes[0].radius = radius;
    boundingRadius = radius;
}

// @addr 0x805B6E20
// Computes collision limit planes from all hitboxes in the group.
// Scans each hitbox's displacement from lastPos to pos, builds
// min/max collision planes used by KartBody for wall and floor clamping.
// Returns the maximum penetration depth found across all hitboxes.
f32 HitboxGroup::computeCollisionLimits() {
    f32 maxPenetration = 0.0f;

    colInfo.reset();

    for (s16 i = 0; i < hitboxCount; i++) {
        Hitbox& hb = hitboxes[i];

        // Compute displacement this frame
        EGG::Vector3f delta = hb.pos - hb.lastPos;
        f32 deltaLenSq = delta.squaredLength();

        // Skip hitboxes that didn't move
        if (deltaLenSq < 1.0e-8f) {
            continue;
        }

        // Normalize the displacement direction
        f32 invLen = 1.0f / std::sqrt(deltaLenSq);
        EGG::Vector3f dir(delta.x * invLen, delta.y * invLen, delta.z * invLen);

        // Compute a plane perpendicular to the displacement direction
        // at the hitbox's position. The plane offset is the dot product
        // of the hitbox position with the displacement direction.
        f32 planeOffset = hb.pos.x * dir.x + hb.pos.y * dir.y + hb.pos.z * dir.z;

        // For each hitbox, the collision plane normal is the movement direction.
        // Accumulate the closest floor and wall planes across all hitboxes.
        if (dir.y < -0.5f) {
            // Predominantly downward movement — candidate floor plane
            f32 penetration = hb.radius - (planeOffset - colInfo.floorNrm.dot(colInfo.relPos));
            if (colInfo.floorKclTypeMask == 0 || dir.y < colInfo.floorNrm.y) {
                colInfo.floorNrm = dir;
                colInfo.floorKclTypeMask = COL_FLAG_FLOOR;
                colInfo.relPos = hb.pos;
            }
        } else if (std::fabs(dir.y) < 0.5f) {
            // Lateral movement — candidate wall plane
            if (colInfo.wallKclType == 0) {
                colInfo.wallNrm = dir;
                colInfo.wallKclType = COL_FLAG_WALL;
            }
        }

        // Track penetration depth for collision response
        f32 travelDist = std::sqrt(deltaLenSq);
        f32 penetration = travelDist + hb.radius;
        if (penetration > maxPenetration) {
            maxPenetration = penetration;
        }
    }

    // Store movement vector for KartBody
    if (hitboxCount > 0) {
        colInfo.movement = hitboxes[0].pos - hitboxes[0].lastPos;
    }

    return maxPenetration;
}

// @addr 0x805B7000
// Initializes KartCollisionInfo with default safe values:
// Floor normal pointing up, zero velocity, speed factor 1.0.
KartCollisionInfo* KartCollisionInfo::initStatus() {
    this->reset();
    // Set default safe floor normal (pointing up)
    floorNrm.x = 0.0f;
    floorNrm.y = 1.0f;
    floorNrm.z = 0.0f;
    // Default velocity is zero (already from reset)
    // Default speed factor is 1.0 (already from reset)
    return this;
}

// @addr 0x805B7040
void KartCollisionInfo::reset() {
    flags = 0;
    tangentOff.setAll(0);
    floorNrm.setAll(0);
    wallNrm.setAll(0);
    softWallNrm.setAll(0);
    vel.setAll(0);
    relPos.setAll(0);
    movement.setAll(0);
    _58.setAll(0);
    speedFactor = 1.0f;
    handlingFactor = 0.0f;
    floorKclTypeMask = 0;
    floorKclVariant = 0;
    wallKclType = 0;
    wallKclVariant = 0;
    sinkDepth = 0;
    colPerpendicularity = 0.0f;
}

// @addr 0x805B7100
// Free function: Sphere-AABB intersection test.
// Returns true if a sphere centered at sphereCenter with given radius
// intersects the axis-aligned bounding box defined by aabbMin and aabbMax.
// Used by the BSP collision system for broad-phase hitbox checks.
bool KartHitbox_testSphereVsAABB(
    const EGG::Vector3f& sphereCenter, f32 sphereRadius,
    const EGG::Vector3f& aabbMin, const EGG::Vector3f& aabbMax) {

    // Find the closest point on the AABB to the sphere center
    f32 closestX = std::max(aabbMin.x, std::min(sphereCenter.x, aabbMax.x));
    f32 closestY = std::max(aabbMin.y, std::min(sphereCenter.y, aabbMax.y));
    f32 closestZ = std::max(aabbMin.z, std::min(sphereCenter.z, aabbMax.z));

    // Compute squared distance from closest point to sphere center
    f32 dx = sphereCenter.x - closestX;
    f32 dy = sphereCenter.y - closestY;
    f32 dz = sphereCenter.z - closestZ;
    f32 distSq = dx * dx + dy * dy + dz * dz;

    return distSq <= sphereRadius * sphereRadius;
}

// ============================================================================
// Hitbox::getWorldPosition — Copy current world position to output
// ============================================================================

f32 Hitbox::getWorldPosition(EGG::Vector3f& out) const {
    out = pos;
    return radius;
}

// ============================================================================
// Hitbox::testSphere — Sphere-sphere intersection test
// ============================================================================
// Tests whether this hitbox's sphere overlaps with another sphere.
// Used for kart-to-kart body collision broadphase.

bool Hitbox::testSphere(const EGG::Vector3f& center, f32 radius) const {
    f32 dx = pos.x - center.x;
    f32 dy = pos.y - center.y;
    f32 dz = pos.z - center.z;
    f32 distSq = dx * dx + dy * dy + dz * dz;
    f32 radSum = this->radius + radius;
    return distSq <= radSum * radSum;
}

// ============================================================================
// Hitbox::testAABB — Sphere-AABB intersection test for this hitbox
// ============================================================================
// Tests whether this hitbox's sphere intersects an axis-aligned box.
// Used for kart vs. course geometry broadphase checks.

bool Hitbox::testAABB(const EGG::Vector3f& aabbMin,
                       const EGG::Vector3f& aabbMax) const {
    f32 closestX = std::max(aabbMin.x, std::min(pos.x, aabbMax.x));
    f32 closestY = std::max(aabbMin.y, std::min(pos.y, aabbMax.y));
    f32 closestZ = std::max(aabbMin.z, std::min(pos.z, aabbMax.z));

    f32 dx = pos.x - closestX;
    f32 dy = pos.y - closestY;
    f32 dz = pos.z - closestZ;
    f32 distSq = dx * dx + dy * dy + dz * dz;

    return distSq <= radius * radius;
}

// ============================================================================
// KartCollisionInfo::getContactNormal — Return the dominant collision normal
// ============================================================================

const EGG::Vector3f& KartCollisionInfo::getContactNormal() const {
    // Floor collision takes priority over wall collision
    if (floorKclTypeMask != 0) {
        return floorNrm;
    }
    return wallNrm;
}

// ============================================================================
// KartCollisionInfo::serialize — Write collision info to a flat buffer
// ============================================================================
// Used by the ghost replay system to record per-frame collision state.
// Layout: floorNrm(12) + wallNrm(12) + speedFactor(4) + floorKclType(4) +
//         wallKclType(4) + handlingFactor(4) = 40 bytes

void KartCollisionInfo::serialize(u8* buf, u32& outSize) const {
    outSize = 40;

    // Floor normal (3 × f32)
    memcpy(buf + 0,  &floorNrm.x, 4);
    memcpy(buf + 4,  &floorNrm.y, 4);
    memcpy(buf + 8,  &floorNrm.z, 4);

    // Wall normal (3 × f32)
    memcpy(buf + 12, &wallNrm.x, 4);
    memcpy(buf + 16, &wallNrm.y, 4);
    memcpy(buf + 20, &wallNrm.z, 4);

    // Speed and handling factors
    memcpy(buf + 24, &speedFactor, 4);
    memcpy(buf + 28, &handlingFactor, 4);

    // KCL type codes
    memcpy(buf + 32, &floorKclTypeMask, 4);
    memcpy(buf + 36, &wallKclType, 4);
}

// ============================================================================
// KartCollisionInfo::deserialize — Read collision info from a flat buffer
// ============================================================================

bool KartCollisionInfo::deserialize(const u8* buf, u32 size) {
    if (size < 40) {
        return false;
    }

    memcpy(&floorNrm.x, buf + 0, 4);
    memcpy(&floorNrm.y, buf + 4, 4);
    memcpy(&floorNrm.z, buf + 8, 4);

    memcpy(&wallNrm.x, buf + 12, 4);
    memcpy(&wallNrm.y, buf + 16, 4);
    memcpy(&wallNrm.z, buf + 20, 4);

    memcpy(&speedFactor, buf + 24, 4);
    memcpy(&handlingFactor, buf + 28, 4);

    memcpy(&floorKclTypeMask, buf + 32, 4);
    memcpy(&wallKclType, buf + 36, 4);

    return true;
}

// ============================================================================
// KartHitbox_testCapsuleVsPlane — Capsule vs. plane intersection test
// ============================================================================
// Tests whether a capsule (line segment + radius) intersects an infinite
// plane. The plane is defined by a normal and a distance from origin
// (planeD). On collision, outPenetration receives the penetration depth.
// Used for wheel contact vs. moving platform surfaces.

bool KartHitbox_testCapsuleVsPlane(
    const EGG::Vector3f& capA, const EGG::Vector3f& capB, f32 capRadius,
    const EGG::Vector3f& planeNormal, f32 planeD, f32* outPenetration) {

    // Signed distances of capsule endpoints from the plane
    f32 distA = capA.x * planeNormal.x + capA.y * planeNormal.y +
                capA.z * planeNormal.z - planeD;
    f32 distB = capB.x * planeNormal.x + capB.y * planeNormal.y +
                capB.z * planeNormal.z - planeD;

    // The capsule intersects the plane if the interval [distA, distB]
    // is within [-capRadius, +capRadius].
    f32 minDist, maxDist;
    if (distA < distB) {
        minDist = distA;
        maxDist = distB;
    } else {
        minDist = distB;
        maxDist = distA;
    }

    // No intersection: both endpoints are on the same side
    // and beyond the capsule radius from the plane
    if (minDist > capRadius || maxDist < -capRadius) {
        return false;
    }

    // Compute penetration depth
    f32 penetration = 0.0f;
    if (minDist >= 0.0f && maxDist >= 0.0f) {
        // Both on positive side — closest approach is minDist
        penetration = capRadius - minDist;
    } else if (minDist <= 0.0f && maxDist <= 0.0f) {
        // Both on negative side — closest approach is -maxDist
        penetration = capRadius - (-maxDist);
    } else {
        // Straddling the plane — guaranteed intersection
        penetration = capRadius + (maxDist - minDist) * 0.5f;
    }

    if (outPenetration != nullptr) {
        *outPenetration = penetration;
    }

    return true;
}

} // namespace Kart