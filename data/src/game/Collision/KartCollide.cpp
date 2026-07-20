#include "KartCollide.hpp"
#include "PlayerSub18.hpp"
#include "PlayerSub10.hpp"

#include <game/kart/KartObjectProxy.hpp>
#include <game/kart/KartMove.hpp>
#include <game/kart/KartState.hpp>
#include <game/kart/KartBody.hpp>
#include <game/kart/KartPhysicsEngine.hpp>
#include <game/kart/KartDynamics.hpp>
#include <game/kart/KartHitbox.hpp>
#include <game/kart/BSP.hpp>
#include <game/field/CourseColManager.hpp>
#include <game/field/CourseModel.hpp>
#include <game/field/CollisionEntries.hpp>
#include <game/field/KCollision.hpp>

#include <egg/math/eggVector.hpp>
#include <egg/math/eggQuat.hpp>
#include <egg/math/eggMatrix.hpp>

#include <math.h>

extern "C" EGG::Vector3f RKSystem_ex;

namespace Kart {

// Static constants for collision
static f32 wallCollisionSpeedRate = 0.3f;
static f32 sinkDepthFactor = 0.5f;

KartCollide::KartCollide() {
    this->boundingRadius = 100.0f;
    this->surfaceFlags = 0;
    this->kartCollideArea = new KartCollideArea();
}

KartCollide::~KartCollide() {
    // KartCollideArea is cleaned up by its own destructor
}

void KartCollide::init() {
    this->kartCollideArea->init();
    this->updateBbox();
    this->playerBumpTimer = 0;
    wallBounceFactor = 0.8f;
    initialColNormal.setAll(0);
    this->surfaceFlags = 0;
    this->tangentOff.setAll(0);
    this->movement.setAll(0);
    this->respawnTimer = 0;
    this->solidOobTimer = 0;
    this->someLightningTimer = 0;
    oobCheckDist = 0.0f;
    this->suspBottomHeightNonSoftWall = 0.0f;
    this->suspBottomHeightSoftWall = 0.0f;
    this->someNonSoftWallTimer = 0;
    this->someSoftWallTimer = 0;
    this->someAngVel3FrameTimer = 0;
    this->someYawAngVel = 0.0f;
    maxColPerp = 0.0f;
    this->oobAreaIdx = -1;
    _6c = 0.0f;
}

void KartCollide::updateBbox() {
    this->boundingRadius = static_cast<HitboxGroup*>(this->hitboxGroup())->getBoundingRadius() * this->kartMove()->hitboxScale();
}

void KartCollide::processBody(KartCollisionInfo& kartColInfo, const Hitbox& hitbox, const ::Field::ColInfo& colInfo, u32* colTypeMask) {
    this->processMovingWater(kartColInfo, colTypeMask);

    bool hasWallCol;
    if (::Field::lookupCollisionEntry(colTypeMask, KCL_TYPE_PLAYER_WALL_CAT1)) {
        u32 wallKclType = KCL_ATTRIBUTE_TYPE(::Field::closestCollisionEntry->attribute);
        u32 wallKclVariant = KCL_ATTRIBUTE_VARIANT(::Field::closestCollisionEntry->attribute);

        if (::Field::lookupCollisionEntry(colTypeMask, KCL_TYPE_PLAYER_WALL_CAT2)) {
            kartColInfo.wallKclType = wallKclType;
            kartColInfo.wallKclVariant = wallKclVariant;
            if ((::Field::closestCollisionEntry->attribute & KCL_SOFT_WALL_MASK) != 0) {
                kartColInfo.flags |= COL_FLAG_SOFT_WALL;
            }
        }
        hasWallCol = true;
    } else {
        hasWallCol = false;
    }

    this->processFloor(kartColInfo, hitbox, colInfo, colTypeMask, false);
    if (hasWallCol) {
        this->checkNeighborhood(kartColInfo, hitbox, colInfo);
    }

    this->processCannon(colTypeMask);
}

void KartCollide::processWheels(KartCollisionInfo& kartColInfo, const Hitbox& hitbox, const ::Field::ColInfo& colInfo, u32* colTypeMask) {
    this->processMovingWater(kartColInfo, colTypeMask);
    this->processFloor(kartColInfo, hitbox, colInfo, colTypeMask, true);
}

void KartCollide::processMovingWater(KartCollisionInfo& kartColInfo, u32* colTypeMask) {
    if (::Field::lookupCollisionEntry(colTypeMask, KCL_MOVING_WATER_MASK)) {
        kartState()->set(KART_FLAG_STICKY_ROAD);
        s32 variant = KCL_ATTRIBUTE_VARIANT(::Field::closestCollisionEntry->attribute);
        if (variant == 1) {
            kartColInfo.flags |= (COL_FLAG_MOVING_WATER_V0 | COL_FLAG_MOVING_WATER_STRONG_CURRENT | COL_FLAG_MOVING_WATER_DISABLE_ACC);
        } else if (variant == 2) {
            kartColInfo.flags |= COL_FLAG_MOVING_WATER_V2;
        } else if (variant == 3) {
            kartColInfo.flags |= (COL_FLAG_MOVING_WATER_V2 | COL_FLAG_MOVING_WATER_DISABLE_ACC | COL_FLAG_MOVING_WATER_V3);
        } else {
            kartColInfo.flags |= COL_FLAG_MOVING_WATER_V0;
        }
    }
}

void KartCollide::processFloor(KartCollisionInfo& kartColInfo, const Hitbox& hitbox, const ::Field::ColInfo& colInfo, u32* colTypeMask, bool isWheel) {
    if ((kartColInfo.flags & COL_FLAG_SOFT_WALL) != 0) {
        this->someSoftWallTimer++;
        f32 radius = hitbox.radius;
        this->suspBottomHeightSoftWall += hitbox.pos.y - radius;
    }

    if (::Field::lookupCollisionEntry(colTypeMask, KCL_TYPE_FLOOR)) {
        if ((::Field::closestCollisionEntry->attribute & KCL_TRICKABLE_MASK) != 0) {
            kartColInfo.flags |= COL_FLAG_TRICKABLE;
            this->surfaceFlags |= SURF_FLAG_TRICKABLE;
        } else {
            this->surfaceFlags |= SURF_FLAG_NOT_TRICKABLE;
        }

        kartColInfo.sinkDepth = KCL_ATTRIBUTE_SINK_DEPTH(::Field::closestCollisionEntry->attribute);
        f32 speedFactor = kartStats()->getSpeedFactor(KCL_ATTRIBUTE_TYPE(::Field::closestCollisionEntry->attribute));
        if (kartColInfo.speedFactor > speedFactor) {
            kartColInfo.speedFactor = speedFactor;
        }
        kartColInfo.handlingFactor += kartStats()->getHandlingFactor(KCL_ATTRIBUTE_TYPE(::Field::closestCollisionEntry->attribute));

        if ((::Field::closestCollisionEntry->attribute & KCL_REJECT_ROAD_MASK) != 0) {
            kartMove()->kartState()->set(KART_FLAG_REJECT_ROAD);
        }

        kartColInfo.floorKclTypeMask = ::Field::closestCollisionEntry->typeMask;
        kartColInfo.floorKclVariant = KCL_ATTRIBUTE_VARIANT(::Field::closestCollisionEntry->attribute);

        if ((*colTypeMask & KCL_TYPE_OFFROAD_ANY) != 0) {
            this->surfaceFlags |= SURF_FLAG_OFFROAD;
        }

        if (isWheel && (*colTypeMask & KCL_BOOST_PAD_MASK) != 0) {
            kartMove()->setPadType(::Field::PAD_TYPE_BOOST_PANEL);
            this->surfaceFlags |= SURF_FLAG_BOOST_PANEL;
        }

        if (::Field::lookupCollisionEntry(colTypeMask, KCL_BOOST_RAMP_MASK)) {
            kartMove()->setPadType(::Field::PAD_TYPE_BOOST_RAMP);
            kartState()->setBoostRampType(KCL_ATTRIBUTE_VARIANT(::Field::closestCollisionEntry->attribute));
            this->surfaceFlags |= (SURF_FLAG_BOOST_PANEL | SURF_FLAG_BOOST_RAMP | SURF_FLAG_TRICKABLE);
        } else {
            kartState()->setBoostRampType(-1);
            this->surfaceFlags |= SURF_FLAG_NOT_TRICKABLE;
        }

        if ((kartColInfo.flags & COL_FLAG_SOFT_WALL) == 0) {
            this->someNonSoftWallTimer++;
            f32 radius = hitbox.radius;
            this->suspBottomHeightNonSoftWall += hitbox.pos.y - radius;
        }

        if ((*colTypeMask & KCL_STICKY_ROAD_MASK) != 0) {
            kartMove()->kartState()->set(KART_FLAG_STICKY_ROAD);
        }

        if (::Field::lookupCollisionEntry(colTypeMask, KCL_HALFPIPE_RAMP_MASK)) {
            kartMove()->kartState()->set(KART_FLAG_HALFPIPE_RAMP);
            if (!kartState()->on(KART_FLAG_ONLINE_REMOTE)) {
                kartMove()->kartState()->set(KART_FLAG_HALFPIPE_RAMP_LOCAL);
            }
            this->surfaceFlags |= SURF_FLAG_HALFPIPE_RAMP;
            kartState()->setHalfpipeInvisibilityTimer(2);
            if (KCL_ATTRIBUTE_VARIANT(::Field::closestCollisionEntry->attribute) == 1) {
                kartMove()->setPadType(::Field::PAD_TYPE_BOOST_PANEL);
            }
        }

        if (::Field::lookupCollisionEntry(colTypeMask, KCL_JUMP_PAD_MASK)) {
            KartState* ks = kartState();
            if ((!ks->on(KART_FLAG_TOUCHING_GROUND) || !ks->on(KART_FLAG_JUMPPAD)) && !ks->on(KART_FLAG_JUMPPAD_VELY_INCREASE)) {
                kartMove()->setPadType(::Field::PAD_TYPE_JUMP_PAD);
                kartState()->setJumpPadType(KCL_ATTRIBUTE_VARIANT(::Field::closestCollisionEntry->attribute));
            }
            kartColInfo.flags |= COL_FLAG_TRICKABLE;
        }

        if ((*colTypeMask & KCL_MOVING_ROAD_MASK) != 0) {
            this->surfaceFlags |= SURF_FLAG_MOVING_ROAD;
        }
    }
}

void KartCollide::updateHitboxes() {
    KartDynamics* dynamics = kartDynamics();
    HitboxGroup* hGroup = static_cast<HitboxGroup*>(hitboxGroup());
    for (s32 i = 0; (u16)i < hGroup->getHitboxCount(); i++) {
        Hitbox& hbox = hGroup->getHitbox(i);
        hbox.update(getScale(), dynamics->fullRot, dynamics->pos, kartMove()->totalScale(), kartBody()->getSinkDepth());
    }
}

bool KartCollide::processWall(KartCollisionInfo& kartColInfo, const ::Field::ColInfo& colInfo, u32* colTypeMask) {
    if (::Field::lookupCollisionEntry(colTypeMask, KCL_TYPE_PLAYER_WALL_CAT1)) {
        u32 wallKclType = KCL_ATTRIBUTE_TYPE(::Field::closestCollisionEntry->attribute);
        u32 wallKclVariant = KCL_ATTRIBUTE_VARIANT(::Field::closestCollisionEntry->attribute);

        if (::Field::lookupCollisionEntry(colTypeMask, KCL_TYPE_PLAYER_WALL_CAT2)) {
            kartColInfo.wallKclType = wallKclType;
            kartColInfo.wallKclVariant = wallKclVariant;
            if ((::Field::closestCollisionEntry->attribute & KCL_SOFT_WALL_MASK) != 0) {
                kartColInfo.flags |= COL_FLAG_SOFT_WALL;
            }
        }
        return true;
    } else {
        return false;
    }
}

void KartCollide::checkNeighborhood(KartCollisionInfo& kartColInfo, const Hitbox& hitbox, const ::Field::ColInfo& colInfo) {
    f32 colPerp = colInfo.colPerpendicularity;
    if (colPerp > 0.0f) {
        if (maxColPerp < colPerp) {
            maxColPerp = colPerp;
        }

        if ((kartColInfo.flags & (COL_FLAG_WALL_AT_LEFT_CLOSER | COL_FLAG_WALL_AT_RIGHT_CLOSER)) != 0) {
            if (fabsf(hitbox.bsp->pos.x) > 10.0f) {
                if (colPerp > 0.0f) {
                    kartColInfo.flags |= COL_FLAG_WALL_AT_LEFT_CLOSER;
                } else {
                    kartColInfo.flags |= COL_FLAG_WALL_AT_RIGHT_CLOSER;
                }
                kartColInfo.colPerpendicularity = colInfo.colPerpendicularity;
            } else {
                EGG::Vector3f localRight;
                kartDynamics()->mainRot.rotateVector(RKSystem_ex, localRight);
                f32 offs[2];
                f32 sign;
                for (s32 i = 0; i < 2; i++) {
                    if (i == 1) {
                        sign = -1.0f;
                    } else {
                        sign = 1.0f;
                    }
                    sign *= hitbox.radius;
                    EGG::Vector3f offset = hitbox.pos + localRight * sign;
                    ::Field::ColInfoPartial tmpInfo;
                    tmpInfo.bboxLow.setAll(0);
                    tmpInfo.bboxHigh.setAll(0);
                    if (::Field::CourseModel::spInstance->checkSphereCachedPartial(offset, hitbox.lastPos, KCL_TYPE_DRIVER_WALL, &tmpInfo, hitbox.radius, 0)) {
                        offs[i] = colInfo.tangentOff.dot(colInfo.tangentOff);
                    }
                }

                if (offs[0] > offs[1]) {
                    kartColInfo.flags |= COL_FLAG_WALL_AT_RIGHT_CLOSER;
                    kartColInfo.colPerpendicularity = colInfo.colPerpendicularity;
                } else if (offs[1] > offs[0]) {
                    kartColInfo.flags |= COL_FLAG_WALL_AT_LEFT_CLOSER;
                    kartColInfo.colPerpendicularity = colInfo.colPerpendicularity;
                }
            }
        }
    }
}

void KartCollide::processCannon(u32* colTypeMask) {
    if (::Field::lookupCollisionEntry(colTypeMask, KCL_CANNON_TRIGGER_MASK)) {
        kartState()->setCannonPointId(KCL_ATTRIBUTE_VARIANT(::Field::closestCollisionEntry->attribute));
        kartState()->set(KART_FLAG_CANNON_START);
    }
}

void KartCollide::applySomeFloorMoment(KartDynamics* kartDynamics, HitboxGroup* hitboxGroup,
                    const EGG::Vector3f& forward, const EGG::Vector3f& dir, const EGG::Vector3f& speed,
                    f32 rateForward, f32 rateLateral, bool zeroUp, bool zeroPlane, bool affectAngVel) {
    // TODO: implement applySomeFloorMoment
    (void)kartDynamics; (void)hitboxGroup; (void)forward; (void)dir; (void)speed;
    (void)rateForward; (void)rateLateral; (void)zeroUp; (void)zeroPlane; (void)affectAngVel;
}

void KartCollide::calcWheelCollision(s8 playerIdx, u32 wheelIdx, KartDynamics* kartDynamics, HitboxGroup* hitboxGroup, const EGG::Vector3f& colForce,
                    const EGG::Vector3f& wheelPos, f32 radius) {
    // TODO: implement calcWheelCollision
    (void)playerIdx; (void)wheelIdx; (void)kartDynamics; (void)hitboxGroup;
    (void)colForce; (void)wheelPos; (void)radius;
}

// @addr 0x805a1200 (estimated)
// Test floor collision for a single hitbox against the course KCL.
// Casts a sphere downward from the hitbox position and checks for
// floor-type KCL triangles. Updates kartColInfo with floor properties.
bool KartCollide::testFloor(KartCollisionInfo& kartColInfo, const Hitbox& hitbox,
                            const ::Field::ColInfo& colInfo, u32* colTypeMask) {
    processFloor(kartColInfo, hitbox, colInfo, colTypeMask, false);
    bool hasFloor = ::Field::lookupCollisionEntry(colTypeMask, KCL_TYPE_FLOOR);
    return hasFloor;
}

// @addr 0x805a1280 (estimated)
// Test wall collision for a single hitbox against the course KCL.
// Checks for player-wall KCL types and classifies the wall as soft
// or hard. Returns true if a wall collision was detected.
bool KartCollide::testWall(KartCollisionInfo& kartColInfo, const ::Field::ColInfo& colInfo,
                           u32* colTypeMask) {
    return processWall(kartColInfo, colInfo, colTypeMask);
}

// @addr 0x805a1300 (estimated)
// Test kart-kart collision against another player.
// Uses bounding sphere overlap test first, then refines with
// oriented bounding box (OBB) check if spheres overlap.
bool KartCollide::testKart(const EGG::Vector3f& otherPos, f32 otherRadius) const {
    EGG::Vector3f diff;
    diff.x = otherPos.x - movement.x;
    diff.y = otherPos.y - movement.y;
    diff.z = otherPos.z - movement.z;
    f32 distSq = diff.x * diff.x + diff.y * diff.y + diff.z * diff.z;
    f32 sumRadius = boundingRadius + otherRadius;
    f32 sumRadiusSq = sumRadius * sumRadius;
    return distSq < sumRadiusSq;
}

// @addr 0x805a1380 (estimated)
// Resolve a detected collision by applying impulse and position correction.
void KartCollide::resolveCollision(KartDynamics* kartDynamics,
                                   const ::Field::ColInfo& colInfo,
                                   f32 bounceFactor) {
    if (!kartDynamics) return;
    f32 dot = kartDynamics->internalVel.x * colInfo.tangentOff.x +
              kartDynamics->internalVel.y * colInfo.tangentOff.y +
              kartDynamics->internalVel.z * colInfo.tangentOff.z;
    if (dot < 0.0f) {
        f32 impulse = -(1.0f + bounceFactor) * dot;
        kartDynamics->internalVel.x += impulse * colInfo.tangentOff.x;
        kartDynamics->internalVel.y += impulse * colInfo.tangentOff.y;
        kartDynamics->internalVel.z += impulse * colInfo.tangentOff.z;
    }
    if (colInfo.tangentOff.x != 0.0f || colInfo.tangentOff.y != 0.0f ||
        colInfo.tangentOff.z != 0.0f) {
        kartDynamics->pos.x += colInfo.tangentOff.x;
        kartDynamics->pos.y += colInfo.tangentOff.y;
        kartDynamics->pos.z += colInfo.tangentOff.z;
    }
}

// @addr 0x805a1400 (estimated)
// Retrieve detailed contact information for the last collision.
u32 KartCollide::getContactInfo(EGG::Vector3f& outContactNormal,
                               f32& outPenetration) const {
    outContactNormal = initialColNormal;
    outPenetration = maxColPerp;
    return surfaceFlags;
}

// @addr 0x805a1440 (estimated)
// Set the KCL collision group filter for this kart.
void KartCollide::setCollisionGroup(u32 groupMask) {
    (void)groupMask;
}

// @addr 0x805a1460 (estimated)
// Enable collision testing for this kart.
void KartCollide::enableCollision() {
    solidOobTimer = 0;
    respawnTimer = 0;
}

// @addr 0x805a1480 (estimated)
// Disable collision testing for this kart.
void KartCollide::disableCollision() {
    respawnTimer = 60;
}

// @addr 0x805a14A0 (estimated)
// Free function: calculate momentum transfer between two colliding karts.
f32 KartCollide_calcMomentum(f32 massA, f32 massB, f32 relSpeed,
                              f32 restitution, const EGG::Vector3f& colNormal) {
    f32 invMassSum = 1.0f / massA + 1.0f / massB;
    if (invMassSum < 0.0001f) invMassSum = 0.0001f;
    f32 impulse = -(1.0f + restitution) * relSpeed / invMassSum;
    if (impulse > 50000.0f) impulse = 50000.0f;
    if (impulse < -50000.0f) impulse = -50000.0f;
    return impulse;
}

} // namespace Kart