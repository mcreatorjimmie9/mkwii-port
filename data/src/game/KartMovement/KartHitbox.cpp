#include "KartHitbox.hpp"

namespace Kart {

Hitbox::Hitbox() : bsp(nullptr), radius(0.0f), _8(0) {}

void Hitbox::reset() {
    pos.setZero();
    lastPos.setZero();
    relPos.setZero();
}

void Hitbox::update(const EGG::Vector3f& scale, const EGG::Quatf& rot, const EGG::Vector3f& pos, f32 totalScale, f32 hitboxElevation) {
    // Transforms relative position to world space using rotation and scale
    // Updates hitbox radius with totalScale
    // Sets elevation offset
}

void Hitbox::setLastPos(const EGG::Vector3f& scale, const EGG::Matrix34f& pose) {
    // Sets lastPos based on pose matrix and scale
}

BspHitbox* Hitbox::create(const EGG::Vector3f& pos, f32 radius) {
    this->pos = pos;
    this->radius = radius;
    return nullptr;
}

void Hitbox::setScale(float s) {
    this->radius = s;
}

HitboxGroup::HitboxGroup() : hitboxCount(0), boundingRadius(0.0f), hitboxes(nullptr), _90(0), hitboxScale(1.0f), _98(0.0f) {
    colInfo.reset();
}

void HitboxGroup::reset() {
    colInfo.reset();
    hitboxScale = 1.0f;
}

void HitboxGroup::setHitboxScale(f32 scale) {
    hitboxScale = scale;
}

void HitboxGroup::createHitboxes(s32 n) {
    hitboxCount = n;
    hitboxes = new Hitbox[n];
    for (s32 i = 0; i < n; i++) {
        hitboxes[i] = Hitbox();
    }
}

f32 HitboxGroup::initHitboxes(BspHitbox* hitboxData, void* unused, s32 wheelCount) { return 0.0f; }
f32 HitboxGroup::setHitboxes(BspHitbox* hitboxData) { return 0.0f; }

void HitboxGroup::createSingleHitbox(const EGG::Vector3f& pos, f32 radius) {
    hitboxCount = 1;
    hitboxes = new Hitbox[1];
    hitboxes[0].pos = pos;
    hitboxes[0].radius = radius;
    boundingRadius = radius;
}

f32 HitboxGroup::computeCollisionLimits() { return 0.0f; }

KartCollisionInfo* KartCollisionInfo::initStatus() { this->reset(); return this; }

void KartCollisionInfo::reset() {
    flags = 0;
    tangentOff.setZero();
    floorNrm.setZero();
    wallNrm.setZero();
    softWallNrm.setZero();
    vel.setZero();
    relPos.setZero();
    movement.setZero();
    _58.setZero();
    speedFactor = 1.0f;
    handlingFactor = 0.0f;
    floorKclTypeMask = 0;
    floorKclVariant = 0;
    wallKclType = 0;
    wallKclVariant = 0;
    sinkDepth = 0;
    colPerpendicularity = 0.0f;
}

} // namespace Kart