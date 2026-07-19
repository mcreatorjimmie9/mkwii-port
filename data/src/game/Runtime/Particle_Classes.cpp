#include <cmath>
// ============================================================================
// Particle_Classes.cpp — EGG Particle System Class Implementations
// Address range: 0x80540000 - 0x80560000 (416 functions)
//
// GENESIS Phase 8 (Runtime Module — Task 8)
// ============================================================================

#include "Particle_Classes.hpp"

namespace EGG {
namespace Particle {

// ============================================================================
// ParticleMgr
// ============================================================================

ParticleMgr* ParticleMgr::getInstance() {
    // @addr 0x80540c68
    static ParticleMgr sInstance;
    return &sInstance;
}

void ParticleMgr::init(u32 maxEmitters, u32 maxParticles) {
    // @addr 0x805402a4, 0x80540260
    std::memset(this, 0, sizeof(*this));
    m_maxEmitters = static_cast<u16>(maxEmitters);
    m_particleCapacity = maxParticles;
    m_timeScale = 1.0f;
    m_stateFlags = STATE_INIT;
    // TODO: allocate m_particlePool from heap
}

void ParticleMgr::shutdown() {
    // @addr 0x80540478
    destroyAllEmitters();
    m_stateFlags = 0;
    m_particlePool = nullptr;
    m_particleCapacity = 0;
}

void ParticleMgr::reset() {
    // @addr 0x805401ac
    destroyAllEmitters();
    m_activeParticles = 0;
    m_emitterCount = 0;
    m_emitterHead = nullptr;
    m_emitterTail = nullptr;
    m_frameCount = 0;
    m_dtAccum = 0.0f;
}

void ParticleMgr::calc() {
    // @addr 0x80540364
    if (!(m_stateFlags & STATE_PAUSED)) {
        Emitter* e = m_emitterHead;
        while (e != nullptr) {
            // @addr 0x8054096c — per-emitter calc
            e->calc();
            e = e->m_next;
        }
    }
}

void ParticleMgr::draw() {
    // @addr 0x80540408
    m_stateFlags |= STATE_DRAWING;
    // @addr 0x80540538 — setup GX state
    // @addr 0x805405e0 — submit billboards
    Emitter* e = m_emitterHead;
    while (e != nullptr) {
        e->draw();
        e = e->m_next;
    }
    // @addr 0x8054062c — flush
    m_stateFlags &= ~STATE_DRAWING;
}

Emitter* ParticleMgr::createEmitter(u32 resourceId, s32 flags, s32 priority) {
    // @addr 0x80540ab8, 0x80540c30
    (void)flags; (void)priority;
    // TODO: allocate from heap, init from resource
    return nullptr;
}

void ParticleMgr::destroyEmitter(Emitter* emitter) {
    // @addr 0x805407f4
    if (emitter != nullptr) {
        // Unlink from list
        if (emitter->m_prev) emitter->m_prev->m_next = emitter->m_next;
        else m_emitterHead = emitter->m_next;
        if (emitter->m_next) emitter->m_next->m_prev = emitter->m_prev;
        else m_emitterTail = emitter->m_prev;
        m_emitterCount--;
        emitter->~Emitter();
    }
}

void ParticleMgr::destroyAllEmitters() {
    // @addr 0x80540838
    while (m_emitterHead != nullptr) {
        destroyEmitter(m_emitterHead);
    }
}

void ParticleMgr::setPaused(bool paused) {
    // @addr 0x80541170
    if (paused) m_stateFlags |= STATE_PAUSED;
    else        m_stateFlags &= ~STATE_PAUSED;
}

u32 ParticleMgr::getEmitterCount() const {
    // @addr 0x80540728
    return m_emitterCount;
}

u32 ParticleMgr::getParticleCount() const {
    // @addr 0x80540a24
    return m_activeParticles;
}

u32 ParticleMgr::getParticleCapacity() const {
    // @addr 0x80540a60
    return m_particleCapacity;
}

void ParticleMgr::setTimeScale(f32 scale) {
    // @addr 0x805410d4
    m_timeScale = scale;
}

void ParticleMgr::setGlobalTint(u8 r, u8 g, u8 b, u8 a) {
    // @addr 0x805414a4
    m_globalTintR = r;
    m_globalTintG = g;
    m_globalTintB = b;
    m_globalTintA = a;
}

// ============================================================================
// Emitter
// ============================================================================

void* Emitter::create() {
    // @addr 0x80541010
    std::memset(this, 0, sizeof(Emitter));
    // vtable set by compiler
    m_flags = FLAG_ALIVE;
    return this;
}

void Emitter::initFromResource(Resource* resource) {
    // @addr 0x805416c0
    m_resource = resource;
    if (resource != nullptr) {
        resource->addRef();
        // Load parameters from resource
        f32 rate = 0.0f, speed = 0.0f, life = 0.0f;
        resource->getEmissionParams(&rate, &speed, &life);
        m_emissionRate = rate;
        m_lifetime = life;
        m_speedMul = speed;
    }
}

void Emitter::setPosition(f32 x, f32 y, f32 z) {
    // @addr 0x805417e8
    m_posX = x; m_posY = y; m_posZ = z;
}

void Emitter::setRotation(f32 rx, f32 ry, f32 rz) {
    // @addr 0x80541a28
    m_rotX = rx; m_rotY = ry; m_rotZ = rz;
}

void Emitter::setEmissionRate(f32 rate) {
    // @addr 0x80541bc4
    m_emissionRate = rate;
}

void Emitter::setMaxParticles(u32 max) {
    // @addr 0x80541c1c
    m_maxParticles = static_cast<s32>(max);
}

u32 Emitter::getEmittedCount() const {
    // @addr 0x80541db4
    return m_totalEmitted;
}

void Emitter::resetEmitter() {
    // @addr 0x8054272c
    killAllParticles();
    m_age = 0.0f;
    m_emissionTimer = 0.0f;
    m_totalEmitted = 0;
}

void Emitter::setEmitterShape(u32 shapeType, u32 shapeData) {
    // @addr 0x805427c0
    m_shapeType = static_cast<u8>(shapeType);
    (void)shapeData;
    // TODO: configure shape object
}

void Emitter::setAnimator(s32 animType) {
    // @addr 0x80542874
    (void)animType;
    // TODO: allocate and configure animator
}

void Emitter::setChildEmitter(u32 childResId) {
    // @addr 0x805428ac
    if (m_childEmitter == nullptr) {
        // TODO: allocate child emitter
    }
    // TODO: configure child resource ID
    (void)childResId;
}

u32 Emitter::getFlags() const {
    // @addr 0x805429a0
    return m_flags;
}

u32 Emitter::getActiveParticleCount() const {
    // @addr 0x80542a98
    return static_cast<u32>(m_activeCount);
}

void Emitter::emitOne() {
    // @addr 0x80542ef0
    emit(1, 0);
}

void Emitter::setEmissionCone(f32 halfAngle, f32 minSpeed, f32 maxSpeed) {
    // @addr 0x80542e20
    (void)halfAngle; (void)minSpeed; (void)maxSpeed;
    // TODO: configure shape cone parameters
}

void Emitter::setLifetimeRange(f32 minLife, f32 maxLife) {
    // @addr 0x80542e9c
    (void)minLife; (void)maxLife;
    // TODO: store lifetime range
}

void Emitter::setName(const s8* name) {
    // @addr 0x80543340
    (void)name;
    // TODO: debug name storage
}

void Emitter::setUserData(u32 data1, s32 data2, s32 data3, s32 data4) {
    // @addr 0x80543578
    (void)data1; (void)data2; (void)data3; (void)data4;
}

void Emitter::linkToList(u32 listId, u32 position) {
    // @addr 0x80543820
    (void)listId; (void)position;
    // TODO: insert into manager's linked list
}

void Emitter::unlinkFromList() {
    // @addr 0x80543990
    if (m_prev) m_prev->m_next = m_next;
    if (m_next) m_next->m_prev = m_prev;
    m_prev = nullptr;
    m_next = nullptr;
}

Particle* Emitter::getParticle(s32 index) {
    // @addr 0x80543a0c
    (void)index;
    return nullptr;
}

void Emitter::killAllParticles() {
    // @addr 0x80543b3c
    m_activeCount = 0;
    // TODO: return all particles to pool
}

bool Emitter::isAlive() const {
    // @addr 0x80543c50
    return (m_flags & FLAG_ALIVE) != 0;
}

void Emitter::updateEmissionTimer(f32 dt) {
    // @addr 0x80543d68
    m_emissionTimer += dt;
}

// ============================================================================
// Particle
// ============================================================================

void Particle::init(const Emitter* emitter) {
    // @addr 0x805440c0
    std::memset(this, 0, sizeof(Particle));
    m_flags = FLAG_ALIVE;
    if (emitter != nullptr) {
        m_posX = emitter->m_posX;
        m_posY = emitter->m_posY;
        m_posZ = emitter->m_posZ;
        m_parentEmitterId = emitter->m_emitterId;
    }
}

void Particle::reset() {
    // @addr 0x80544428
    std::memset(this, 0, sizeof(Particle));
}

void Particle::updatePhysics(f32 dt) {
    // @addr 0x80544530
    m_velX += m_accX * dt;
    m_velY += m_accY * dt;
    m_velZ += m_accZ * dt;
    m_posX += m_velX * dt;
    m_posY += m_velY * dt;
    m_posZ += m_velZ * dt;
    m_age += dt;
    m_curSpeed = std::sqrt(m_velX * m_velX + m_velY * m_velY + m_velZ * m_velZ);
}

void Particle::kill() {
    // @addr 0x80544920
    m_flags &= ~FLAG_ALIVE;
}

void Particle::applyGravity(f32 gravity, f32 dt) {
    // @addr 0x80544d7c
    if (!(m_flags & FLAG_NO_GRAV)) {
        m_accY -= gravity * dt;
    }
}

void Particle::updateColor(f32 lifeRatio) {
    // @addr 0x805450b8
    (void)lifeRatio;
    // TODO: apply animator color
}

void Particle::updateScale(f32 lifeRatio) {
    // @addr 0x80545364
    (void)lifeRatio;
    // TODO: apply animator scale
}

void Particle::updateRotation(f32 dt) {
    // @addr 0x80545dc0
    (void)dt;
    // TODO: apply animator rotation
}

void Particle::setPosition(f32 x, f32 y, f32 z) {
    // @addr 0x8054573c
    m_posX = x; m_posY = y; m_posZ = z;
}

void Particle::bounceOffPlane(f32 planeY, f32 restitution) {
    // @addr 0x80546508
    if (m_posY < planeY) {
        m_posY = planeY;
        m_velY = -m_velY * restitution;
        m_flags |= FLAG_BOUNCED;
    }
}

f32 Particle::getSpeed() const {
    // @addr 0x805466a4
    return m_curSpeed;
}

f32 Particle::getLifeRatio() const {
    // @addr 0x80546b18
    if (m_lifetime <= 0.0f) return 1.0f;
    f32 ratio = 1.0f - (m_age / m_lifetime);
    return ratio < 0.0f ? 0.0f : ratio;
}

f32 Particle::getDistanceFromOrigin() const {
    // @addr 0x80546ff4
    return std::sqrt(m_posX * m_posX + m_posY * m_posY + m_posZ * m_posZ);
}

bool Particle::shouldCull() const {
    // @addr 0x80546a88
    if (!(m_flags & FLAG_ALIVE)) return true;
    if (m_age >= m_lifetime) return true;
    return false;
}

// ============================================================================
// Resource
// ============================================================================

Resource* Resource::loadById(u32 resourceId) {
    // @addr 0x80545f44
    (void)resourceId;
    return nullptr;
}

Resource* Resource::loadByName(const s8* name) {
    // @addr 0x80546000
    (void)name;
    return nullptr;
}

void Resource::release() {
    // @addr 0x805460bc
    if (m_refCount > 0) {
        m_refCount--;
        if (m_refCount == 0) {
            m_flags &= ~FLAG_LOADED;
            m_data = nullptr;
            m_dataSize = 0;
        }
    }
}

void Resource::addRef() {
    // @addr 0x805461ec
    m_refCount++;
}

void* Resource::getEmitterDescriptor(u32 index) const {
    // @addr 0x8054631c
    (void)index;
    return nullptr;
}

void Resource::getEmissionParams(f32* rate, f32* speed, f32* lifetime) const {
    // @addr 0x805464b0
    if (rate) *rate = 0.0f;
    if (speed) *speed = 0.0f;
    if (lifetime) *lifetime = 0.0f;
}

void Resource::getInitialColor(u8* r, u8* g, u8* b, u8* a) const {
    // @addr 0x80546508
    if (r) *r = 255;
    if (g) *g = 255;
    if (b) *b = 255;
    if (a) *a = 255;
}

void Resource::getInitialScale(f32* scaleX, f32* scaleY) const {
    // @addr 0x80546520
    if (scaleX) *scaleX = 1.0f;
    if (scaleY) *scaleY = 1.0f;
}

void Resource::getVelocityRange(f32* minSpeed, f32* maxSpeed) const {
    // @addr 0x80546538
    if (minSpeed) *minSpeed = 0.0f;
    if (maxSpeed) *maxSpeed = 1.0f;
}

f32 Resource::getGravity() const {
    // @addr 0x805465cc
    return -9.8f;
}

u32 Resource::getMaxParticles() const {
    // @addr 0x80546648
    return 32;
}

u32 Resource::getTextureId() const {
    // @addr 0x80546704
    return 0;
}

void* Resource::getTexturePtr() const {
    // @addr 0x8054675c
    return nullptr;
}

u32 Resource::getAnimCurveCount() const {
    // @addr 0x80546784
    return 0;
}

void Resource::getAnimCurve(u32 index, void* outData) const {
    // @addr 0x805468b8
    (void)index; (void)outData;
}

u32 Resource::getEmitterCount() const {
    // @addr 0x805469b4
    return m_emitterCount;
}

void* Resource::getRawData() const {
    // @addr 0x80546b58
    return m_data;
}

bool Resource::validate() const {
    // @addr 0x80546c1c
    return (m_flags & FLAG_LOADED) != 0 && m_data != nullptr;
}

// ============================================================================
// EmitterShape
// ============================================================================

void EmitterShape::samplePoint(f32* outX, f32* outY, f32* outZ) const {
    // @addr 0x8054711c
    if (outX) *outX = 0.0f;
    if (outY) *outY = 0.0f;
    if (outZ) *outZ = 0.0f;
    // TODO: implement per-shape-type sampling
}

f32 EmitterShape::computeVolume() const {
    // @addr 0x80547688
    return 1.0f;
}

EmitterShape::ShapeType EmitterShape::getShapeType() const {
    // @addr 0x805476c8
    return static_cast<ShapeType>(m_shapeType);
}

void EmitterShape::configure(ShapeType type, EmissionAxis axis, EmissionMode mode) {
    // @addr 0x80547a48
    m_shapeType = static_cast<u8>(type);
    m_axis = static_cast<u8>(axis);
    m_mode = static_cast<u8>(mode);
}

void EmitterShape::setRadius(f32 radius, f32 innerRadius) {
    // @addr 0x80547bfc
    m_dimA = radius;
    m_innerRadius = innerRadius;
}

void EmitterShape::setBoxDimensions(f32 w, f32 h, f32 d) {
    // @addr 0x80547d60
    m_dimA = w; m_dimB = h; m_dimC = d;
}

void EmitterShape::setLineEndpoints(f32 x1, f32 y1, f32 z1,
                                    f32 x2, f32 y2, f32 z2) {
    // @addr 0x80547de4
    m_dimA = x1; m_dimB = y1; m_dimC = z1;
    // Store end point in angle fields (simplified)
    m_angleMin = x2; m_angleMax = y2;
    (void)z2;
}

void EmitterShape::setAngleRange(f32 minAngle, f32 maxAngle) {
    // @addr 0x80547fcc
    m_angleMin = minAngle;
    m_angleMax = maxAngle;
}

void EmitterShape::setSpread(f32 spread) {
    // @addr 0x805480b0
    m_spread = spread;
}

bool EmitterShape::validate() const {
    // @addr 0x805481a4
    return m_dimA >= 0.0f && m_spread >= 0.0f;
}

// ============================================================================
// Animator
// ============================================================================

void Animator::apply(Particle* particle, f32 lifeRatio) const {
    // @addr 0x805491d0
    if (particle == nullptr) return;
    if (m_animFlags & ANIM_COLOR) {
        u8 r, g, b, a;
        getColorAt(lifeRatio, &r, &g, &b, &a);
        particle->m_colorR = r;
        particle->m_colorG = g;
        particle->m_colorB = b;
        particle->m_colorA = a;
    }
    if (m_animFlags & ANIM_SCALE) {
        getScaleAt(lifeRatio, &particle->m_scaleX, &particle->m_scaleY);
    }
    if (m_animFlags & ANIM_ROTATION) {
        particle->m_rotation = getRotationAt(lifeRatio);
    }
    if (m_animFlags & ANIM_VELOCITY) {
        f32 velMul = getVelocityAt(lifeRatio);
        particle->m_velX *= velMul;
        particle->m_velY *= velMul;
        particle->m_velZ *= velMul;
    }
    if (m_animFlags & ANIM_TEXTURE) {
        particle->m_texFrame = getTextureFrameAt(lifeRatio);
    }
}

void Animator::getColorAt(f32 ratio, u8* r, u8* g, u8* b, u8* a) const {
    // @addr 0x8054822c
    if (r) *r = static_cast<u8>(m_startColorR + (m_endColorR - m_startColorR) * ratio);
    if (g) *g = static_cast<u8>(m_startColorG + (m_endColorG - m_startColorG) * ratio);
    if (b) *b = static_cast<u8>(m_startColorB + (m_endColorB - m_startColorB) * ratio);
    if (a) *a = static_cast<u8>(m_startColorA + (m_endColorA - m_startColorA) * ratio);
}

void Animator::getScaleAt(f32 ratio, f32* scaleX, f32* scaleY) const {
    // @addr 0x80548540
    if (scaleX) *scaleX = m_startScaleX + (m_endScaleX - m_startScaleX) * ratio;
    if (scaleY) *scaleY = m_startScaleY + (m_endScaleY - m_startScaleY) * ratio;
}

f32 Animator::getRotationAt(f32 ratio) const {
    // @addr 0x80548954
    return m_startRotation + (m_endRotation - m_startRotation) * ratio;
}

f32 Animator::getVelocityAt(f32 ratio) const {
    // @addr 0x80548c5c
    return m_startVelocity + (m_endVelocity - m_startVelocity) * ratio;
}

u16 Animator::getTextureFrameAt(f32 ratio) const {
    // @addr 0x80548d88
    if (m_texFrameCount == 0) return 0;
    u16 frame = static_cast<u16>(ratio * m_texFrameCount);
    if (frame >= m_texFrameCount) frame = m_texFrameCount - 1;
    return frame;
}

void Animator::setColorKeys(u8 sR, u8 sG, u8 sB, u8 sA,
                            u8 eR, u8 eG, u8 eB, u8 eA) {
    // @addr 0x80549234
    m_startColorR = sR; m_startColorG = sG;
    m_startColorB = sB; m_startColorA = sA;
    m_endColorR = eR; m_endColorG = eG;
    m_endColorB = eB; m_endColorA = eA;
    m_animFlags |= ANIM_COLOR;
}

void Animator::setScaleKeys(f32 sSX, f32 sSY, f32 eSX, f32 eSY) {
    // @addr 0x80549298
    m_startScaleX = sSX; m_startScaleY = sSY;
    m_endScaleX = eSX; m_endScaleY = eSY;
    m_animFlags |= ANIM_SCALE;
}

void Animator::setRotationKeys(f32 startRot, f32 endRot) {
    // @addr 0x805494dc
    m_startRotation = startRot;
    m_endRotation = endRot;
    m_animFlags |= ANIM_ROTATION;
}

void Animator::setVelocityKeys(f32 startVel, f32 endVel) {
    // @addr 0x80549654
    m_startVelocity = startVel;
    m_endVelocity = endVel;
    m_animFlags |= ANIM_VELOCITY;
}

void Animator::setTextureAnim(u16 frameCount, u16 loopMode, f32 speed) {
    // @addr 0x8054969c
    m_texFrameCount = frameCount;
    m_texLoopMode = loopMode;
    m_texAnimSpeed = speed;
    m_animFlags |= ANIM_TEXTURE;
}

void Animator::setInterpolation(InterpType type) {
    // @addr 0x805497d8
    m_interpType = static_cast<u8>(type);
}

void Animator::setFade(f32 fadeInDur, f32 fadeOutStart) {
    // @addr 0x80549938
    m_fadeInDuration = fadeInDur;
    m_fadeOutStart = fadeOutStart;
}

u32 Animator::loadFromResource(void* resourceData) {
    // @addr 0x80549970
    (void)resourceData;
    return 0;
}

bool Animator::validate() const {
    // @addr 0x80549bbc
    return m_animFlags != 0;
}

// ============================================================================
// Billboard
// ============================================================================

void Billboard::initFromParticle(const Particle* particle) {
    // @addr 0x80549ccc
    if (particle == nullptr) return;
    m_posX = particle->m_posX;
    m_posY = particle->m_posY;
    m_posZ = particle->m_posZ;
    m_colorR = particle->m_colorR;
    m_colorG = particle->m_colorG;
    m_colorB = particle->m_colorB;
    m_colorA = particle->m_colorA;
    m_rotation = particle->m_rotation;
    m_texFrame = particle->m_texFrame;
    m_halfWidth = particle->m_scaleX * 0.5f;
    m_halfHeight = particle->m_scaleY * 0.5f;
    m_flags = FLAG_VISIBLE;
}

void Billboard::setTransform(f32 x, f32 y, f32 z,
                              f32 halfW, f32 halfH, f32 rot) {
    // @addr 0x80549e64
    m_posX = x; m_posY = y; m_posZ = z;
    m_halfWidth = halfW; m_halfHeight = halfH;
    m_rotation = rot;
}

void Billboard::setColor(u8 r, u8 g, u8 b, u8 a) {
    // @addr 0x80549f24
    m_colorR = r; m_colorG = g; m_colorB = b; m_colorA = a;
}

void Billboard::setTextureFrame(u16 frame) {
    // @addr 0x80549f64
    m_texFrame = frame;
}

void Billboard::computeSortKey(const f32 cameraPos[3]) {
    // @addr 0x80549fa4
    if (cameraPos != nullptr) {
        f32 dx = m_posX - cameraPos[0];
        f32 dy = m_posY - cameraPos[1];
        f32 dz = m_posZ - cameraPos[2];
        m_depth = dx * dx + dy * dy + dz * dz;
        m_sortKey = static_cast<u32>(m_depth * 1000.0f);
        m_flags |= FLAG_SORTED;
    }
}

void Billboard::submitToGX() const {
    // @addr 0x8054a08c
    // TODO: GX vertex submission
}

void Billboard::getUVCoords(u16* u0, u16* v0, u16* u1, u16* v1) const {
    // @addr 0x8054a110
    if (u0) *u0 = 0;
    if (v0) *v0 = 0;
    if (u1) *u1 = 0xFFFF;
    if (v1) *v1 = 0xFFFF;
}

s32 Billboard::compareSort(const void* a, const void* b) {
    // @addr 0x8054a1f8
    const Billboard* ba = static_cast<const Billboard*>(a);
    const Billboard* bb = static_cast<const Billboard*>(b);
    if (ba->m_depth < bb->m_depth) return -1;
    if (ba->m_depth > bb->m_depth) return 1;
    return 0;
}

s32 Billboard::compareSortAlt(const void* a, const void* b) {
    // @addr 0x8054a264
    return compareSort(a, b);
}

// ============================================================================
// ChildEmitter
// ============================================================================

void ChildEmitter::loadFromData(const u8* data) {
    // @addr 0x8054a8ac
    (void)data;
    // TODO: parse resource data
}

void ChildEmitter::configure(TriggerEvent event, u32 childResourceId,
                              f32 threshold, f32 velInherit, f32 scaleMul) {
    // @addr 0x8054a4ec
    m_triggerEvent = static_cast<u32>(event);
    m_childResourceId = childResourceId;
    m_triggerThreshold = threshold;
    m_velInheritance = velInherit;
    m_scaleMultiplier = scaleMul;
}

bool ChildEmitter::shouldTrigger(const Particle* particle) const {
    // @addr 0x8054a58c
    if (particle == nullptr) return false;
    switch (static_cast<TriggerEvent>(m_triggerEvent)) {
    case TRIGGER_DEATH:
        return !particle->isAlive();
    case TRIGGER_BOUNCE:
        return (particle->m_flags & Particle::FLAG_BOUNCED) != 0;
    case TRIGGER_AGE:
        return particle->getLifeRatio() <= m_triggerThreshold;
    default:
        return false;
    }
}

Emitter* ChildEmitter::createChild(const Particle* particle, ParticleMgr* mgr) {
    // @addr 0x8054a764
    if (particle == nullptr || mgr == nullptr) return nullptr;
    if (m_activeChildren >= m_maxChildren) return nullptr;
    Emitter* child = mgr->createEmitter(m_childResourceId, 0, 0);
    if (child != nullptr) {
        child->setPosition(particle->m_posX + m_offsetX,
                           particle->m_posY + m_offsetY,
                           particle->m_posZ + m_offsetZ);
        m_activeChildren++;
    }
    return child;
}

void ChildEmitter::setPositionOffset(f32 ox, f32 oy, f32 oz) {
    // @addr 0x8054a930
    m_offsetX = ox; m_offsetY = oy; m_offsetZ = oz;
}

void ChildEmitter::setMaxChildren(u32 max) {
    // @addr 0x8054aa88
    m_maxChildren = max;
}

void ChildEmitter::update() {
    // @addr 0x8054ab8c
    // TODO: update active child emitters
}

u32 ChildEmitter::getActiveChildCount() const {
    // @addr 0x8054ab7c
    return m_activeChildren;
}

void ChildEmitter::killAllChildren() {
    // @addr 0x8054ac20
    m_activeChildren = 0;
    // TODO: actually destroy child emitters
}

void ChildEmitter::reset() {
    // @addr 0x8054ac60
    m_activeChildren = 0;
    m_triggerEvent = 0;
}

// ============================================================================
// Pool
// ============================================================================

void Pool::init(u32 maxParticles) { (void)maxParticles; } // @addr 0x8054b084
Particle* Pool::allocate() { return nullptr; }             // @addr 0x8054b0c4
void Pool::free(Particle* p) { (void)p; }                  // @addr 0x8054b358
u32 Pool::getFreeCount() { return 0; }                    // @addr 0x8054b41c
void Pool::compact() {}                                     // @addr 0x8054b550
bool Pool::resize(u32 newMax) { (void)newMax; return false; } // @addr 0x8054b618
bool Pool::validate() { return true; }                     // @addr 0x8054b768
void Pool::getStats(u32* t, u32* u, u32* f) { if(t)*t=0; if(u)*u=0; if(f)*f=0; } // @addr 0x8054b8c4
void Pool::clearAll() {}                                   // @addr 0x8054bb70
void Pool::setAllocCallback(void (*cb)(Particle*,void*), void* ud) { (void)cb; (void)ud; } // @addr 0x8054bc90

// ============================================================================
// Global
// ============================================================================

void Global::calc() {}                                     // @addr 0x8054c460
void Global::draw() {}                                     // @addr 0x8054c5b4
u32 Global::getParticleCount() { return 0; }              // @addr 0x8054c5d4
void Global::setPaused(bool p) { (void)p; }               // @addr 0x8054c630
void Global::setParameter(u32 a, u32 b, s32 c) { (void)a;(void)b;(void)c; } // @addr 0x8054c638
void Global::setParameterF(u32 a, u32 b, s32 c) { (void)a;(void)b;(void)c; } // @addr 0x8054c688
void Global::setParameterV(u32 a, u32 b, s32 c) { (void)a;(void)b;(void)c; } // @addr 0x8054c6d8
void Global::setParameterC(u32 a, u32 b, s32 c) { (void)a;(void)b;(void)c; } // @addr 0x8054c728
u8 Global::getParameter(u32 a, u32 b, s32 c) { (void)a;(void)b;(void)c; return 0; } // @addr 0x8054c770
bool Global::isInitialized() { return false; }             // @addr 0x8054c7f0
u32 Global::getSystemState() { return 0; }                // @addr 0x8054c874
s32 Global::setOption(s32 a, s32 b) { (void)a;(void)b; return 0; } // @addr 0x8054c958
void Global::resetAll() {}                                 // @addr 0x8054ca18
void Global::destroyAll() {}                               // @addr 0x8054cb64

// ============================================================================
// TexMgr
// ============================================================================

void TexMgr::registerTexture(u32 a, s32 b) { (void)a;(void)b; }   // @addr 0x8054cc58
void TexMgr::unregisterTexture(u32 a, u32 b) { (void)a;(void)b; } // @addr 0x8054cd34
void TexMgr::getRegisteredCount() {}                              // @addr 0x8054cda0
void TexMgr::loadBundle(u32 a) { (void)a; }                       // @addr 0x8054d014
void TexMgr::unloadBundle() {}                                   // @addr 0x8054d080
s32 TexMgr::findResource(const s8* n) { (void)n; return -1; }    // @addr 0x8054d1dc
void TexMgr::getResourceData() {}                                // @addr 0x8054d3ec

// ============================================================================
// EmitterUtil
// ============================================================================

void* EmitterUtil::createEmitter(s32 f) { (void)f; return nullptr; } // @addr 0x8054d614
void EmitterUtil::configureFromData(s32* d) { (void)d; }            // @addr 0x8054da98
void EmitterUtil::startEmitter(s32 id) { (void)id; }               // @addr 0x8054db78
void EmitterUtil::stopEmitter(s32 id) { (void)id; }                // @addr 0x8054dbc0
void EmitterUtil::updateEmitter(s32* s) { (void)s; }               // @addr 0x8054de4c
void EmitterUtil::destroyEmitter(s32 id) { (void)id; }             // @addr 0x8054e198
void EmitterUtil::cloneEmitter(s32* s, u32* d) { (void)s;(void)d; } // @addr 0x8054e3f4
void EmitterUtil::serializeEmitter(u32 id, u32* o) { (void)id;(void)o; } // @addr 0x8054e6ec
void EmitterUtil::getEmitterById() {}                            // @addr 0x8054e8dc
void EmitterUtil::findEmitterByName() {}                         // @addr 0x8054ea04

// ============================================================================
// MathUtil
// ============================================================================

f32 MathUtil::randomRange(f32 min, f32 max) { (void)min;(void)max; return 0.0f; } // @addr 0x8054ea44
void MathUtil::randomDirection(f32* dx, f32* dy, f32* dz) { if(dx)*dx=0; if(dy)*dy=1; if(dz)*dz=0; } // @addr 0x8054eb8c
f32 MathUtil::interpolate(f32 a, f32 b, f32 t) { return a + (b - a) * t; } // @addr 0x8054ecf8
void MathUtil::interpolateColor(u8 r0,u8 g0,u8 b0,u8 a0,u8 r1,u8 g1,u8 b1,u8 a1,f32 t,u8*r,u8*g,u8*b,u8*a) { if(r)*r=static_cast<u8>(r0+(r1-r0)*t); if(g)*g=static_cast<u8>(g0+(g1-g0)*t); if(b)*b=static_cast<u8>(b0+(b1-b0)*t); if(a)*a=static_cast<u8>(a0+(a1-a0)*t); } // @addr 0x8054ed28
void MathUtil::interpolateScale(f32 sx0,f32 sy0,f32 sx1,f32 sy1,f32 t,f32*sx,f32*sy) { if(sx)*sx=sx0+(sx1-sx0)*t; if(sy)*sy=sy0+(sy1-sy0)*t; } // @addr 0x8054ed58
f32 MathUtil::lerp(f32 a, f32 b, f32 t) { return a + (b - a) * t; } // @addr 0x8054ed8c
void MathUtil::blendColor(u8 r0,u8 g0,u8 b0,u8 a0,u8 r1,u8 g1,u8 b1,u8 a1,u8*r,u8*g,u8*b,u8*a) { (void)r0;(void)g0;(void)b0;(void)a0;(void)r1;(void)g1;(void)b1;(void)a1; if(r)*r=255; if(g)*g=255; if(b)*b=255; if(a)*a=255; } // @addr 0x8054eea4
u8 MathUtil::alphaBlend(u8 sa, u8 da, u8 sc, u8 dc) { (void)sa;(void)da; return (sc + dc) / 2; } // @addr 0x8054eedc
void MathUtil::applyFadeIn(u32 base, u32* out) { if(out)*out=base; } // @addr 0x8054ef0c
void MathUtil::applyFadeOut(u32 base, u32* out) { if(out)*out=base; } // @addr 0x8054ef44

// ============================================================================
// Events
// ============================================================================

void Events::registerDeathCallback(s32 id) { (void)id; }        // @addr 0x8054f088
void Events::registerCompleteCallback(u32* d) { (void)d; }      // @addr 0x8054f0e8
void Events::fireDeathEvent() {}                                // @addr 0x8054f1ec
void Events::fireCompleteEvent() {}                            // @addr 0x8054f380

// ============================================================================
// Advanced
// ============================================================================

void Advanced::setRibbonMode(s8* c) { (void)c; }               // @addr 0x8054f51c
void Advanced::configureBurst() {}                             // @addr 0x80550374
void Advanced::setAnimatedEmission() {}                        // @addr 0x805507b4
void Advanced::setAttractor(s32 id) { (void)id; }               // @addr 0x805508fc
void Advanced::setWindForce(u32 a, u32 b) { (void)a;(void)b; } // @addr 0x80550b10
void Advanced::setCollisionPlane(u32 a, u32 b) { (void)a;(void)b; } // @addr 0x80550bc8
void Advanced::clearAttractors() {}                            // @addr 0x80550c80
void Advanced::clearCollisionPlanes() {}                       // @addr 0x80550ce4
void Advanced::applyAttractor() {}                             // @addr 0x80550d38
void Advanced::checkCollisions() {}                            // @addr 0x80550e14

// ============================================================================
// Render
// ============================================================================

void Render::initPipeline() {}                                 // @addr 0x80551090
void Render::setVertexFormat(u32 f) { (void)f; }               // @addr 0x80551310
void Render::setBlendMode(s32 a, s32 b, u8 c) { (void)a;(void)b;(void)c; } // @addr 0x805513e8
void Render::setZMode(u32 a, u32 b, u32 c) { (void)a;(void)b;(void)c; } // @addr 0x80551474
void Render::setTexture(s32 a, u32 b) { (void)a;(void)b; }     // @addr 0x80551508
u32 Render::beginDraw(s32 a, s32 b, s32 c) { (void)a;(void)b;(void)c; return 0; } // @addr 0x805515f4
u32 Render::submitQuad(s32 a, s32 b) { (void)a;(void)b; return 0; } // @addr 0x8055178c
u32 Render::endDraw(s32 a, s32 b) { (void)a;(void)b; return 0; } // @addr 0x80551954
u32 Render::flush(s32 a, s32 b) { (void)a;(void)b; return 0; } // @addr 0x80551b1c
u32 Render::setRenderState(s32 a, s32 b) { (void)a;(void)b; return 0; } // @addr 0x80551be8
void Render::setAlphaTest(s32 a, u32 b, u8 c, u8 d) { (void)a;(void)b;(void)c;(void)d; } // @addr 0x80551cec
void Render::setDepthTest(s32 a, s32 b, u8 c) { (void)a;(void)b;(void)c; } // @addr 0x80551d48
void Render::setColorWriteMask(s32 a, u32 b, u8 c, u8 d, u8 e) { (void)a;(void)b;(void)c;(void)d;(void)e; } // @addr 0x80551e08
void Render::disableColorWrite(s32 a, s32 b, u8 c) { (void)a;(void)b;(void)c; } // @addr 0x80551e64
u8 Render::getAlphaRef(s32 a) { (void)a; return 0; }          // @addr 0x80551f44
u8 Render::getBlendFactor(s32 a) { (void)a; return 0; }       // @addr 0x80551fd8
u8 Render::getDepthFunc(s32 a) { (void)a; return 0; }         // @addr 0x8055208c
u8 Render::getVertexFormat(s32 a) { (void)a; return 0; }      // @addr 0x80552120
u8 Render::getZMode(s32 a) { (void)a; return 0; }             // @addr 0x805521d4
bool Render::isRenderingActive(s32 a) { (void)a; return false; } // @addr 0x80552290
u32 Render::getDrawCallCount(s32 a) { (void)a; return 0; }    // @addr 0x80552330
u32 Render::getVertexCount(s32 a, u32 b, s32 c) { (void)a;(void)b;(void)c; return 0; } // @addr 0x8055240c

// ============================================================================
// MemUtil
// ============================================================================

s32 MemUtil::allocParticleData(s32 a, s32 b) { (void)a;(void)b; return 0; } // @addr 0x80552954
void MemUtil::freeParticleData(u32 p) { (void)p; }            // @addr 0x80552994
void MemUtil::reallocParticleData(s32 a, s32 b) { (void)a;(void)b; } // @addr 0x80552a64
void MemUtil::allocEmitter(s32 s) { (void)s; }                 // @addr 0x80552dc8
void MemUtil::allocEmitterEx(s32 a, s32 b, u32 c) { (void)a;(void)b;(void)c; } // @addr 0x8055336c
void MemUtil::freeEmitter(u32 p) { (void)p; }                  // @addr 0x805535d0
void MemUtil::resizeEmitterArray(s32 p, u32 s) { (void)p;(void)s; } // @addr 0x80553660
void MemUtil::allocAnimator(s32 s) { (void)s; }               // @addr 0x80553a9c
void MemUtil::freeAnimator(s32 p) { (void)p; }                 // @addr 0x80553d90

// ============================================================================
// Debug
// ============================================================================

void Debug::isDebugEnabled() {}                                // @addr 0x80554404
void Debug::setDebugEnabled() {}                              // @addr 0x80554734
void Debug::getDebugInfo() {}                                 // @addr 0x805547b4
void Debug::getEmitterName(s8* n) { if(n)*n=0; }             // @addr 0x80554808
void Debug::getEmitterColor(u8* c) { if(c) std::memset(c,0,4); } // @addr 0x80554900
void Debug::setEmitterName(s8* n) { (void)n; }               // @addr 0x8055497c
void Debug::setEmitterColor(s8* d, u32 s) { (void)d;(void)s; } // @addr 0x80554a78
void Debug::setDebugColor(s8* d, u32 s) { (void)d;(void)s; } // @addr 0x80554abc
void Debug::printStats(s32 t) { (void)t; }                   // @addr 0x80554ba8

// ============================================================================
// Query
// ============================================================================

bool Query::hasActiveEmitters() { return false; }              // @addr 0x80554c14
u32 Query::getEmitterByIndex(s32 i, u32 f) { (void)i;(void)f; return 0; } // @addr 0x80554c24
bool Query::isValidEmitterName(s8* n) { (void)n; return false; } // @addr 0x80554c44
bool Query::isValidResourceName(s8* n) { (void)n; return false; } // @addr 0x80554cdc
u32 Query::getEmitterState(s32 id) { (void)id; return 0; }    // @addr 0x80554e20
void Query::getParticleState(s32 id) { (void)id; }            // @addr 0x80554e78
void Query::getParticlePosition(s32 id) { (void)id; }         // @addr 0x80554f74
void Query::getParticleColor(s32 id) { (void)id; }            // @addr 0x80554fc8
u32 Query::getEmitterUserData(u32* o) { if(o)*o=0; return 0; } // @addr 0x80555150

// ============================================================================
// System
// ============================================================================

s32 System::getInitState() { return 0; }                       // @addr 0x80555298
void System::fullInit() {}                                     // @addr 0x805552f4
s32 System::initWithHeap(u32 s) { (void)s; return 0; }        // @addr 0x805553f0
void System::shutdown() {}                                    // @addr 0x80555454
s32 System::reset(s32 a, s32 b) { (void)a;(void)b; return 0; } // @addr 0x80555610
u32 System::getVersion() { return 0; }                        // @addr 0x80555650
u32 System::getStatus() { return 0; }                         // @addr 0x805556b8

// ============================================================================
// ResourceIO
// ============================================================================

void ResourceIO::loadFile(s32 id) { (void)id; }               // @addr 0x8055589c
void ResourceIO::unloadFile() {}                               // @addr 0x80555920
u32 ResourceIO::getResourceCount() { return 0; }              // @addr 0x80555a34
s32 ResourceIO::getResource(s32 i) { (void)i; return -1; }     // @addr 0x80555a3c
void ResourceIO::findResourceById(s32 id) { (void)id; }       // @addr 0x80555ba0
void ResourceIO::getResourceSize(s32 id) { (void)id; }         // @addr 0x80556070

// ============================================================================
// EffectCtrl
// ============================================================================

void EffectCtrl::createEffect() {}                            // @addr 0x80556194
void EffectCtrl::updateEffects(s32 id) { (void)id; }          // @addr 0x80556648
void EffectCtrl::destroyAllEffects() {}                       // @addr 0x805576d8
void EffectCtrl::getEffectCount() {}                          // @addr 0x805578e8
void EffectCtrl::setEffectParameter() {}                      // @addr 0x80557f2c
u32 EffectCtrl::getEffectParameter(s32 id) { (void)id; return 0; } // @addr 0x80557d54
u32 EffectCtrl::setEffectTransform(s32 a, u32 b, s32 c) { (void)a;(void)b;(void)c; return 0; } // @addr 0x80557df8

// ============================================================================
// ListUtil
// ============================================================================

u32 ListUtil::getListHead(s32 id) { (void)id; return 0; }     // @addr 0x805558e0
u32 ListUtil::getListTail(s32 id) { (void)id; return 0; }     // @addr 0x805558e8
s32 ListUtil::getNextEmitter(s32 id) { (void)id; return -1; } // @addr 0x805558f0
s32 ListUtil::getPrevEmitter(s32 id) { (void)id; return -1; } // @addr 0x8055590c
u32 ListUtil::getListCount(s32 id) { (void)id; return 0; }    // @addr 0x80555918
void ListUtil::findInList() {}                                 // @addr 0x80555a44
s32 ListUtil::insertEmitter(s32 a, s32 b) { (void)a;(void)b; return 0; } // @addr 0x805565b0
s32 ListUtil::removeEmitter(s32 a, s32 b) { (void)a;(void)b; return 0; } // @addr 0x805565f0

// ============================================================================
// Curves
// ============================================================================

u32 Curves::evaluate(s32* d) { (void)d; return 0; }           // @addr 0x80558188
void Curves::getPointCount() {}                                // @addr 0x805581f4
s32 Curves::interpolate(s32 a, s32 b) { (void)a;(void)b; return 0; } // @addr 0x805585fc
void Curves::setCurveData(u32 id) { (void)id; }               // @addr 0x805586f0
u32 Curves::getCurveData(s32 id, s32* o) { (void)id;(void)o; return 0; } // @addr 0x80558718
s32 Curves::evaluateAtTime(s32 a, s32 b) { (void)a;(void)b; return 0; } // @addr 0x805589a8
u8 Curves::getCurveType(s32 a) { (void)a; return 0; }         // @addr 0x80558ab8
u32 Curves::getKeyCount(s32 a, s32* o, s32 f) { (void)a;(void)o;(void)f; return 0; } // @addr 0x80558ac4
u32 Curves::getKeyValue(s32 a, u32 b, u32* o) { (void)a;(void)b;(void)o; return 0; } // @addr 0x80558c24
s32 Curves::getKeyTime(s32 a, u32 b) { (void)a;(void)b; return 0; } // @addr 0x80558ccc
u32 Curves::setKey(s32 a, s32 b, s32* v) { (void)a;(void)b;(void)v; return 0; } // @addr 0x80558d5c
u32 Curves::validateCurve(s32 a, u32 b) { (void)a;(void)b; return 0; } // @addr 0x80558e64

// ============================================================================
// DrawData
// ============================================================================

void DrawData::build(u32* s, u32* d) { (void)s;(void)d; }     // @addr 0x80558fa8
void DrawData::submit(u32 a, u32 b, u32 c) { (void)a;(void)b;(void)c; } // @addr 0x805591b0
u32 DrawData::getBuffer(s32 a, s32 b) { (void)a;(void)b; return 0; } // @addr 0x80559214
u32 DrawData::getBufferSize(s32 a) { (void)a; return 0; }      // @addr 0x805593a0
s32 DrawData::getDrawCallCount(s32 a) { (void)a; return 0; }  // @addr 0x8055946c
void DrawData::updateDrawData(s32 a) { (void)a; }             // @addr 0x80559488
void DrawData::resetBuffer() {}                                // @addr 0x80559508

// ============================================================================
// TexAnim
// ============================================================================

void TexAnim::setSheetParams(u32 a, u32 b, u32 c) { (void)a;(void)b;(void)c; } // @addr 0x80559c98
void TexAnim::getCurrentFrame() {}                            // @addr 0x80559fa4
u32 TexAnim::advanceFrame(s32 a) { (void)a; return 0; }       // @addr 0x8055a070
void TexAnim::resetAnimation() {}                             // @addr 0x8055a130
u32 TexAnim::getSheetInfo() { return 0; }                     // @addr 0x8055a40c
void TexAnim::setSheet() {}                                   // @addr 0x8055a4f8
void TexAnim::setFrame(s32 a, u32 b) { (void)a;(void)b; }     // @addr 0x8055a684
u32 TexAnim::getFrameCount(s32 a) { (void)a; return 0; }      // @addr 0x8055a6d0
void TexAnim::initAnimation() {}                              // @addr 0x8055a984
void TexAnim::updateAnimation() {}                            // @addr 0x8055aa9c
void TexAnim::getAnimationState() {}                          // @addr 0x8055ac98
void TexAnim::setAnimationSpeed() {}                          // @addr 0x8055af90
void TexAnim::setLoopMode() {}                                // @addr 0x8055b24c
void TexAnim::getAnimationDuration() {}                       // @addr 0x8055b568
void TexAnim::setPingPong() {}                                // @addr 0x8055b8a0
void TexAnim::isAnimationComplete() {}                        // @addr 0x8055baa8
void TexAnim::getAnimationTime() {}                           // @addr 0x8055bc00
u32 TexAnim::getFrameUV(s32 a) { (void)a; return 0; }        // @addr 0x8055b180
u32 TexAnim::setUVOffset(s32 a) { (void)a; return 0; }        // @addr 0x8055b3bc
u32 TexAnim::setUVScale(s32 a) { (void)a; return 0; }        // @addr 0x8055b498
u32 TexAnim::getFrameUVRect(s32 a) { (void)a; return 0; }    // @addr 0x8055b7f0
u32 TexAnim::setWrapMode(s32 a) { (void)a; return 0; }        // @addr 0x8055ba08
u32 TexAnim::getTextureObject(s32 a) { (void)a; return 0; }   // @addr 0x8055bde8

// ============================================================================
// GXState
// ============================================================================

void GXState::init() {}                                       // @addr 0x8055c384
void GXState::setBlendState(u32 a, u32 b, u32 c) { (void)a;(void)b;(void)c; } // @addr 0x8055c504
void GXState::setTEVState(u32 a, u32 b, u32 c) { (void)a;(void)b;(void)c; } // @addr 0x8055c748
void GXState::setAlphaCompare(u32 a, u32 b) { (void)a;(void)b; } // @addr 0x8055c8e0
void GXState::setZBuffer(u32 a, u32 b, u32 c) { (void)a;(void)b;(void)c; } // @addr 0x8055cb84
void GXState::setRasterState(u32 a) { (void)a; }             // @addr 0x8055cfe8
void GXState::setCullMode(u32 a, u32 b) { (void)a;(void)b; } // @addr 0x8055d544
void GXState::restoreState() {}                               // @addr 0x8055d93c
void GXState::saveState() {}                                  // @addr 0x8055db48
void GXState::setVtxDesc() {}                                 // @addr 0x8055dd7c
void GXState::setArrayPtrs(s32 a) { (void)a; }                // @addr 0x8055dec4
void GXState::beginPrimitive() {}                             // @addr 0x8055df48
void GXState::endPrimitive() {}                               // @addr 0x8055e184
u32 GXState::flushCommands(s32 a) { (void)a; return 0; }      // @addr 0x8055e488
void GXState::setPixelFormat() {}                             // @addr 0x8055e5b8
void GXState::drawQuad(s32 a, u32 b, s32 c, s32 d, s32 e) { (void)a;(void)b;(void)c;(void)d;(void)e; } // @addr 0x8055e734
void GXState::drawLine(u32 a, s32 b) { (void)a;(void)b; }    // @addr 0x8055ea0c
u32 GXState::drawPoint(s32 a) { (void)a; return 0; }         // @addr 0x8055ec8c
u32 GXState::drawBeam(s32 a) { (void)a; return 0; }          // @addr 0x8055efc8

// ============================================================================
// Finalize
// ============================================================================

void Finalize::finalizeDraw(u32* b, s32 f) { (void)b;(void)f; } // @addr 0x8055ef5c
void Finalize::endFrame() {}                                   // @addr 0x8055f17c
void Finalize::swapBuffers() {}                               // @addr 0x8055f33c
void Finalize::presentFrame(s32 d, u8* fb) { (void)d;(void)fb; } // @addr 0x8055f478
u32 Finalize::getFrameStats(s32 s) { (void)s; return 0; }     // @addr 0x8055f604
void Finalize::copyDrawData(s32 s, u8* d) { (void)s;(void)d; } // @addr 0x8055f750
u32 Finalize::setDrawPriority(s32 d, u32 p) { (void)d;(void)p; return 0; } // @addr 0x8055fa20
void Finalize::setDrawSortMode(u32 d, s32 s) { (void)d;(void)s; } // @addr 0x8055faac
void Finalize::resetDrawState() {}                            // @addr 0x8055fb54
void Finalize::setDrawClip(u32 d, u32 c, s32 cd) { (void)d;(void)c;(void)cd; } // @addr 0x8055fc04
void Finalize::cleanup() {}                                   // @addr 0x8055fea4

// ============================================================================
// Settings
// ============================================================================

bool Settings::hasSetting(s32 id) { (void)id; return false; } // @addr 0x8054ee94
u32 Settings::getSettingU32() { return 0; }                   // @addr 0x8054efbc
u32 Settings::setSetting(s32 id) { (void)id; return 0; }      // @addr 0x8054f8f8
u32 Settings::getSettingByIndex(s32 a, s32 b, s32 c) { (void)a;(void)b;(void)c; return 0; } // @addr 0x8054fb08
u32 Settings::setSettingByIndex(s32 a, s32 b, s32 c) { (void)a;(void)b;(void)c; return 0; } // @addr 0x8054fb20
bool Settings::checkSettingFlag(s32 a, u32 b, s32 c) { (void)a;(void)b;(void)c; return false; } // @addr 0x8054fb38
u8 Settings::getSettingByte(s32 a, s32 b, s32 c) { (void)a;(void)b;(void)c; return 0; } // @addr 0x8054fc94
u32 Settings::getSettingU32ById(s32 a) { (void)a; return 0; } // @addr 0x8054fca8
u32 Settings::getSettingFloat(s32 a) { (void)a; return 0; }  // @addr 0x8054fe10
u32 Settings::applySettings(s32 a) { (void)a; return 0; }    // @addr 0x8055008c
u8 Settings::resetToDefaults(s32 a) { (void)a; return 0; }   // @addr 0x80550184
s32 Settings::loadFromFile(s32 f) { (void)f; return 0; }      // @addr 0x8055027c
s32 Settings::saveToFile(s32 f, s32 s) { (void)f;(void)s; return 0; } // @addr 0x805504e4

// ============================================================================
// DataCopy
// ============================================================================

void DataCopy::copyParticleData(u8* d) { (void)d; }           // @addr 0x80554dc4
s32 DataCopy::copyEmitterConfig(s32 a, s32 b) { (void)a;(void)b; return 0; } // @addr 0x805546f4
bool DataCopy::validateCopy() { return true; }                // @addr 0x80550a7c
u32 DataCopy::getCopySize(u32 t) { (void)t; return 0; }      // @addr 0x80550d7c
s32 DataCopy::performCopy(s32 a, s32 b) { (void)a;(void)b; return 0; } // @addr 0x80550dbc

// ============================================================================
// Util (unclassified non-void)
// ============================================================================

u32 Util::fn_805438d0(u32 p1, s32 p2) { (void)p1;(void)p2; return 0; }
s32 Util::fn_80543a64(s32 p1, s32 p2) { (void)p1;(void)p2; return 0; }
s32 Util::fn_80543aa4(s32 p1, s32 p2) { (void)p1;(void)p2; return 0; }
s32 Util::fn_80543ae4(s32 p1, s32 p2) { (void)p1;(void)p2; return 0; }
u32 Util::fn_80547034(u32* p1) { (void)p1; return 0; }
u32 Util::fn_80547f44(s32 p1, s32 p2) { (void)p1;(void)p2; return 0; }
u32 Util::fn_80548030(u32 p1, s32 p2) { (void)p1;(void)p2; return 0; }
u32 Util::fn_80548118(u32 p1, s32 p2) { (void)p1;(void)p2; return 0; }
u32 Util::fn_80549bbc(s32 p1, s32 p2) { (void)p1;(void)p2; return 0; }
u32 Util::fn_80549ec4(u32* p1) { (void)p1; return 0; }
u32 Util::fn_8054ab7c(s32 p1, s32 p2) { (void)p1;(void)p2; return 0; }
s32 Util::fn_8054ac20(s32 p1, s32 p2) { (void)p1;(void)p2; return 0; }
s32 Util::fn_8054b510(s32 p1, s32 p2) { (void)p1;(void)p2; return 0; }
s32 Util::fn_8054bf70(s32 p1, s32 p2) { (void)p1;(void)p2; return 0; }
s32 Util::fn_8054bfb0(s32 p1, s32 p2) { (void)p1;(void)p2; return 0; }
s32 Util::fn_80542768(s32 p1, s32 p2) { (void)p1;(void)p2; return 0; }
u32 Util::fn_80542a0c(s32 p1) { (void)p1; return 0; }
u32 Util::fn_80541d08(s32 p1) { (void)p1; return 0; }
u32 Util::fn_8054a1f8(s32 p1, s32 p2, s32 p3) { (void)p1;(void)p2;(void)p3; return 0; }
u32 Util::fn_8054a264(s32 p1, s32 p2, s32 p3) { (void)p1;(void)p2;(void)p3; return 0; }
u32 Util::fn_8054a380(u32 p1, u32 p2, s32 p3) { (void)p1;(void)p2;(void)p3; return 0; }
s32 Util::fn_805402f0(s32 p1, s32 p2) { (void)p1;(void)p2; return 0; }
s32 Util::fn_805404c4(s32 p1, s32 p2) { (void)p1;(void)p2; return 0; }
s32 Util::fn_80540758(s32 p1, s32 p2) { (void)p1;(void)p2; return 0; }
s32 Util::fn_80540874(s32 p1, s32 p2) { (void)p1;(void)p2; return 0; }
s32 Util::fn_80540a60(s32 p1, s32 p2) { (void)p1;(void)p2; return 0; }
s32 Util::fn_805440c0(s32 p1, s32 p2) { (void)p1;(void)p2; return 0; }

// ============================================================================
// UtilVoid (unclassified void)
// ============================================================================

void UtilVoid::fn_80544970(s32 a, s32 b) { (void)a;(void)b; }
void UtilVoid::fn_805457c4() {}
void UtilVoid::fn_80545828() {}
void UtilVoid::fn_80545dcc() {}
void UtilVoid::fn_80545e88() {}
void UtilVoid::fn_805463f0() {}
void UtilVoid::fn_805469b4() {}
void UtilVoid::fn_80546b58(s32 a) { (void)a; }
void UtilVoid::fn_80546c1c(u32* a) { (void)a; }
void UtilVoid::fn_8054711c(s32 a) { (void)a; }
void UtilVoid::fn_80547a48(s32 a) { (void)a; }
void UtilVoid::fn_80548330() {}
void UtilVoid::fn_80548380() {}
void UtilVoid::fn_8054843c() {}
void UtilVoid::fn_80548540(s32 a) { (void)a; }
void UtilVoid::fn_805485a8(s32 a, u32 b) { (void)a;(void)b; }
void UtilVoid::fn_805487b4() {}
void UtilVoid::fn_805489f8(s32 a) { (void)a; }
void UtilVoid::fn_80549234(s32 a) { (void)a; }
void UtilVoid::fn_80549938(s32 a) { (void)a; }
void UtilVoid::fn_8054a4ec(u32 a, s32* b, s32 c) { (void)a;(void)b;(void)c; }
void UtilVoid::fn_8054a58c(s32 a) { (void)a; }
void UtilVoid::fn_8054a6a0() {}
void UtilVoid::fn_8054a764() {}
void UtilVoid::fn_8054a930(s8* a) { (void)a; }
void UtilVoid::fn_8054aa88(s32 a, u32 b) { (void)a;(void)b; }
void UtilVoid::fn_8054ab8c(s32 a, s32 b, u32 c) { (void)a;(void)b;(void)c; }
void UtilVoid::fn_8054ac60() {}
void UtilVoid::fn_8054adac(s32 a) { (void)a; }
void UtilVoid::fn_8054af6c() {}
void UtilVoid::fn_8054b084() {}
void UtilVoid::fn_8054b1b4(s8* a) { (void)a; }
void UtilVoid::fn_8054b204(s32 a, u8 b, u8 c) { (void)a;(void)b;(void)c; }
void UtilVoid::fn_8054b358() {}
void UtilVoid::fn_8054b41c(u8* a) { (void)a; }
void UtilVoid::fn_8054b550(s32 a) { (void)a; }
void UtilVoid::fn_8054b618() {}
void UtilVoid::fn_8054b768(s32 a) { (void)a; }
void UtilVoid::fn_8054b8c4(s32 a) { (void)a; }
void UtilVoid::fn_8054bb70(s32 a, u32 b) { (void)a;(void)b; }
void UtilVoid::fn_8054bc90() {}
void UtilVoid::fn_8054bff0() {}
void UtilVoid::fn_8054c0c4() {}
void UtilVoid::fn_8054c108(s32 a) { (void)a; }
void UtilVoid::fn_8054c460(s32 a) { (void)a; }
void UtilVoid::fn_8054ca18(s32 a) { (void)a; }
void UtilVoid::fn_8054cb64(s32 a) { (void)a; }
void UtilVoid::fn_8054cd34(u32 a, u32 b) { (void)a;(void)b; }
void UtilVoid::fn_8054d014() {}
void UtilVoid::fn_8054d080() {}
void UtilVoid::fn_8054d1dc(s32 a) { (void)a; }
void UtilVoid::fn_8054d3ec() {}
void UtilVoid::fn_8054d614(s32 a) { (void)a; }
void UtilVoid::fn_8054da98(s32* a) { (void)a; }
void UtilVoid::fn_8054db78(s32 a) { (void)a; }
void UtilVoid::fn_8054dbc0(s32 a) { (void)a; }
void UtilVoid::fn_8054de4c(s32* a) { (void)a; }
void UtilVoid::fn_8054e198(s32 a) { (void)a; }
void UtilVoid::fn_8054e3f4(s32* a, u32* b) { (void)a;(void)b; }
void UtilVoid::fn_8054e6ec(u32 a, u32* b) { (void)a;(void)b; }
void UtilVoid::fn_8054e8dc() {}
void UtilVoid::fn_8054ea04() {}
void UtilVoid::fn_8054ea44(s32 a) { (void)a; }
void UtilVoid::fn_8054eb8c(s32 a) { (void)a; }
void UtilVoid::fn_8054ecf8(s32 a) { (void)a; }
void UtilVoid::fn_8054ed28(s32 a) { (void)a; }
void UtilVoid::fn_8054ed58(s32 a) { (void)a; }
void UtilVoid::fn_8054ed60() {}
void UtilVoid::fn_8054ed8c(s32 a, s32 b) { (void)a;(void)b; }
void UtilVoid::fn_8054eea4(s32 a, s32 b) { (void)a;(void)b; }
void UtilVoid::fn_8054eedc(u32 a, u32 b) { (void)a;(void)b; }
void UtilVoid::fn_8054ef0c(s32 a, u32* b) { (void)a;(void)b; }
void UtilVoid::fn_8054ef44(u32 a, u32* b) { (void)a;(void)b; }
void UtilVoid::fn_8054f088(s32 a) { (void)a; }
void UtilVoid::fn_8054f0e8(u32* a) { (void)a; }
void UtilVoid::fn_8054f1ec() {}
void UtilVoid::fn_8054f380() {}
void UtilVoid::fn_8054f3d0(u8* a) { (void)a; }
void UtilVoid::fn_8054f51c(s8* a) { (void)a; }
void UtilVoid::fn_80550374() {}
void UtilVoid::fn_805507b4() {}
void UtilVoid::fn_805508fc(s32 a) { (void)a; }
void UtilVoid::fn_80550b10(u32 a, u32 b) { (void)a;(void)b; }
void UtilVoid::fn_80550bc8(u32 a, u32 b) { (void)a;(void)b; }
void UtilVoid::fn_80550c80() {}
void UtilVoid::fn_80550ce4() {}
void UtilVoid::fn_80550d38() {}
void UtilVoid::fn_80550e14() {}
void UtilVoid::fn_80551090() {}
void UtilVoid::fn_80551310(u32 a) { (void)a; }
void UtilVoid::fn_805513e8(s32 a, s32 b, u8 c) { (void)a;(void)b;(void)c; }
void UtilVoid::fn_80551474(s32 a, u32 b) { (void)a;(void)b; }
void UtilVoid::fn_80551508(s32 a, s32 b) { (void)a;(void)b; }
void UtilVoid::fn_80551cec(s32 a, u32 b, u8 c, u8 d) { (void)a;(void)b;(void)c;(void)d; }
void UtilVoid::fn_80551d48(s32 a, s32 b, u8 c) { (void)a;(void)b;(void)c; }
void UtilVoid::fn_80551e08(s32 a, u32 b, u8 c, u8 d) { (void)a;(void)b;(void)c;(void)d; }
void UtilVoid::fn_80551e64(s32 a, s32 b, u8 c) { (void)a;(void)b;(void)c; }
void UtilVoid::fn_80552994(u32 a) { (void)a; }
void UtilVoid::fn_80552a64(s32 a) { (void)a; }
void UtilVoid::fn_80552dc8(s32 a) { (void)a; }
void UtilVoid::fn_8055336c(s32 a, s32 b, u32 c) { (void)a;(void)b;(void)c; }
void UtilVoid::fn_805535d0(u32 a) { (void)a; }
void UtilVoid::fn_80553660(s32 a, u32 b) { (void)a;(void)b; }
void UtilVoid::fn_80553a9c(s32 a, u32 b) { (void)a;(void)b; }
void UtilVoid::fn_80553d90(s32 a) { (void)a; }
void UtilVoid::fn_80554404() {}
void UtilVoid::fn_80554734() {}
void UtilVoid::fn_805547b4() {}
void UtilVoid::fn_80554808(s8* a) { (void)a; }
void UtilVoid::fn_80554900(u8* a) { (void)a; }
void UtilVoid::fn_8055497c(s8* a) { (void)a; }
void UtilVoid::fn_80554a78(s8* a, u32 b) { (void)a;(void)b; }
void UtilVoid::fn_80554abc(s8* a, u32 b) { (void)a;(void)b; }
void UtilVoid::fn_80554ba8(s32 a) { (void)a; }
void UtilVoid::fn_80554dc4(u8* a) { (void)a; }
void UtilVoid::fn_80554e78(s32 a) { (void)a; }
void UtilVoid::fn_80554f74(s32 a) { (void)a; }
void UtilVoid::fn_80554fc8(s32 a) { (void)a; }
void UtilVoid::fn_805552f4() {}
void UtilVoid::fn_80555454() {}
void UtilVoid::fn_8055589c(s32 a) { (void)a; }
void UtilVoid::fn_80555920() {}
void UtilVoid::fn_80555a44() {}
void UtilVoid::fn_80555ba0(s32 a) { (void)a; }
void UtilVoid::fn_80556070(s32 a) { (void)a; }
void UtilVoid::fn_80556194() {}
void UtilVoid::fn_80556648(s32 a) { (void)a; }
void UtilVoid::fn_805576d8() {}
void UtilVoid::fn_805578e8() {}
void UtilVoid::fn_80557f2c() {}
void UtilVoid::fn_805581f4() {}
void UtilVoid::fn_805586f0(u32 a) { (void)a; }
void UtilVoid::fn_80558fa8(u32* a, u32* b) { (void)a;(void)b; }
void UtilVoid::fn_805591b0(u32 a, u32 b, u32 c) { (void)a;(void)b;(void)c; }
void UtilVoid::fn_80559488(s32 a) { (void)a; }
void UtilVoid::fn_80559508() {}
void UtilVoid::fn_80559c98(u32 a, u32 b) { (void)a;(void)b; }
void UtilVoid::fn_80559fa4() {}
void UtilVoid::fn_8055a130() {}
void UtilVoid::fn_8055a4f8() {}
void UtilVoid::fn_8055a684(s32 a, u32 b) { (void)a;(void)b; }
void UtilVoid::fn_8055a984() {}
void UtilVoid::fn_8055aa9c() {}
void UtilVoid::fn_8055ac98() {}
void UtilVoid::fn_8055af90() {}
void UtilVoid::fn_8055b24c() {}
void UtilVoid::fn_8055b568() {}
void UtilVoid::fn_8055b8a0() {}
void UtilVoid::fn_8055baa8() {}
void UtilVoid::fn_8055bc00() {}
void UtilVoid::fn_8055c384() {}
void UtilVoid::fn_8055c504() {}
void UtilVoid::fn_8055c748() {}
void UtilVoid::fn_8055c8e0(u32 a, u32 b) { (void)a;(void)b; }
void UtilVoid::fn_8055cb84(u32 a, u32 b) { (void)a;(void)b; }
void UtilVoid::fn_8055cfe8(u32 a, u32 b) { (void)a;(void)b; }
void UtilVoid::fn_8055d544(u32 a, u32 b) { (void)a;(void)b; }
void UtilVoid::fn_8055d93c() {}
void UtilVoid::fn_8055db48() {}
void UtilVoid::fn_8055dd7c() {}
void UtilVoid::fn_8055dec4(s32 a) { (void)a; }
void UtilVoid::fn_8055df48() {}
void UtilVoid::fn_8055e184() {}
void UtilVoid::fn_8055e5b8() {}
void UtilVoid::fn_8055e734(s32 a, u32 b, s32 c, s32 d) { (void)a;(void)b;(void)c;(void)d; }
void UtilVoid::fn_8055ea0c(u32 a, s32 b) { (void)a;(void)b; }
void UtilVoid::fn_8055ef5c(u32* a, s32 b) { (void)a;(void)b; }
void UtilVoid::fn_8055f17c() {}
void UtilVoid::fn_8055f33c() {}
void UtilVoid::fn_8055f478() {}
void UtilVoid::fn_8055f750(s32 a, u8* b) { (void)a;(void)b; }
void UtilVoid::fn_8055faac(u32 a, s32 b) { (void)a;(void)b; }
void UtilVoid::fn_8055fb54() {}
void UtilVoid::fn_8055fc04(u32 a, u32 b, s32 c) { (void)a;(void)b;(void)c; }
void UtilVoid::fn_8055fea4() {}

} // namespace Particle
} // namespace EGG
