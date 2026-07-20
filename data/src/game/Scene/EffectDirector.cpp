// EffectDirector.cpp - Visual effects manager implementation
// Reconstructed from Effects_* and scene_Effects_* functions (0x807609e0+)

#include "EffectDirector.hpp"
#include <string.h>
#include <math.h>
#include <stdlib.h>

namespace Scene {

EffectDirector::EffectDirector()
    : m_emitters(nullptr)
    , m_activeEmitterCount(0)
    , m_particlePool(nullptr)
    , m_totalParticleCount(0)
    , m_initialized(false)
    , m_globalScale(1.0f) {
    m_screenEffect.type = ScreenEffect::SCREENFX_NONE;
    m_screenEffect.duration = 0.0f;
    m_screenEffect.timer = 0.0f;
    m_screenEffect.intensity = 0.0f;
    m_screenEffect.active = false;
    memset(m_screenEffect.color, 0xFF, 4);
}

EffectDirector::~EffectDirector() {
    shutdown();
}

void EffectDirector::init() {
    m_emitters = new EffectEmitter[MAX_EMITTERS];
    memset(m_emitters, 0, sizeof(EffectEmitter) * MAX_EMITTERS);

    m_particlePool = new Particle[MAX_PARTICLES];
    memset(m_particlePool, 0, sizeof(Particle) * MAX_PARTICLES);

    m_activeEmitterCount = 0;
    m_totalParticleCount = 0;
    m_globalScale = 1.0f;
    m_screenEffect.active = false;
    m_initialized = true;
}

void EffectDirector::shutdown() {
    if (m_emitters) { delete[] m_emitters; m_emitters = nullptr; }
    if (m_particlePool) { delete[] m_particlePool; m_particlePool = nullptr; }
    m_activeEmitterCount = 0;
    m_totalParticleCount = 0;
    m_initialized = false;
}

void EffectDirector::calc(f32 dt) {
    if (!m_initialized) return;
    update(dt);
}

void EffectDirector::draw() const {
    if (!m_initialized) return;

    // Render all active particles via GX
    // In real impl: bind particle texture, set blend mode, submit quads
    for (u32 i = 0; i < MAX_PARTICLES; i++) {
        const Particle& p = m_particlePool[i];
        if (p.life <= 0.0f) continue;

        // Compute alpha from remaining life
        f32 lifeRatio = p.life / (p.maxLife > 0.001f ? p.maxLife : 0.001f);
        u8 alpha = (u8)(lifeRatio * (f32)p.a);
        (void)alpha;

        // Submit billboard quad at p.position with p.size * lifeRatio
        // GX position, color, texcoord submission here
    }
}

u32 EffectDirector::createEmitter(EffectType type, const Vec3& position,
                                    u16 maxParticles, f32 emitRate) {
    if (!m_initialized) return 0xFFFFFFFF;

    u32 slot = 0xFFFFFFFF;
    for (u32 i = 0; i < MAX_EMITTERS; i++) {
        if (!m_emitters[i].active) { slot = i; break; }
    }
    if (slot == 0xFFFFFFFF) return 0xFFFFFFFF;

    EffectEmitter& e = m_emitters[slot];
    e.type = type;
    e.position = position;
    e.orientation = Vec3(0.0f, 0.0f, 0.0f);
    e.emitTimer = 0.0f;
    e.emitRate = emitRate > 0.0f ? emitRate : 10.0f;
    e.maxParticles = maxParticles > 0 ? maxParticles : 32;
    e.activeParticleCount = 0;
    e.active = true;
    e.resource = nullptr;

    m_activeEmitterCount++;
    return slot;
}

void EffectDirector::destroyEmitter(u32 emitterId) {
    if (emitterId >= MAX_EMITTERS) return;
    m_emitters[emitterId].active = false;
    m_emitters[emitterId].activeParticleCount = 0;
    m_activeEmitterCount--;
}

void EffectDirector::setEmitterPosition(u32 emitterId, const Vec3& pos) {
    if (emitterId >= MAX_EMITTERS) return;
    m_emitters[emitterId].position = pos;
}

void EffectDirector::pauseEmitter(u32 emitterId, bool pause) {
    if (emitterId >= MAX_EMITTERS) return;
    if (pause) {
        m_emitters[emitterId].emitRate = 0.0f;
    } else {
        m_emitters[emitterId].emitRate = 10.0f; // Restore default
    }
}

void EffectDirector::emitBurst(EffectType type, const Vec3& position,
                                  const Vec3& direction, u16 count) {
    u32 emitter = createEmitter(type, position, count, 0.0f);
    if (emitter == 0xFFFFFFFF) return;

    m_emitters[emitter].orientation = direction;
    // Emit all particles immediately then kill emitter
    for (u16 i = 0; i < count; i++) {
        spawnParticle(m_emitters[emitter]);
    }
    destroyEmitter(emitter);
}

void EffectDirector::startScreenEffect(ScreenEffect::Type type, f32 duration,
                                          f32 intensity, u8 r, u8 g, u8 b, u8 a) {
    m_screenEffect.type = type;
    m_screenEffect.duration = duration;
    m_screenEffect.timer = duration;
    m_screenEffect.intensity = intensity;
    m_screenEffect.color[0] = r;
    m_screenEffect.color[1] = g;
    m_screenEffect.color[2] = b;
    m_screenEffect.color[3] = a;
    m_screenEffect.active = true;
}

void EffectDirector::stopScreenEffect() {
    m_screenEffect.active = false;
    m_screenEffect.timer = 0.0f;
}

void EffectDirector::updateEmitter(EffectEmitter& emitter, f32 dt) {
    if (emitter.emitRate <= 0.0f) return;

    emitter.emitTimer += dt;
    f32 interval = 1.0f / emitter.emitRate;

    while (emitter.emitTimer >= interval &&
           emitter.activeParticleCount < emitter.maxParticles) {
        emitter.emitTimer -= interval;
        spawnParticle(emitter);
    }

    updateParticles(emitter, dt);
}

void EffectDirector::updateParticles(EffectEmitter& emitter, f32 dt) {
    // Update individual particles in the pool
    for (u32 i = 0; i < MAX_PARTICLES; i++) {
        Particle& p = m_particlePool[i];
        if (p.life <= 0.0f) continue;

        updateSingleParticle(p, dt);

        // Remove dead particles
        if (p.life <= 0.0f) {
            p.life = 0.0f;
            if (emitter.activeParticleCount > 0)
                emitter.activeParticleCount--;
            m_totalParticleCount--;
        }
    }
}

void EffectDirector::spawnParticle(EffectEmitter& emitter) {
    if (m_totalParticleCount >= MAX_PARTICLES) return;
    if (emitter.activeParticleCount >= emitter.maxParticles) return;

    // Particle creation with randomized velocity
    f32 spread = 1.0f;
    Vec3 vel(
        emitter.orientation.x + ((f32)rand() / RAND_MAX - 0.5f) * spread,
        emitter.orientation.y + ((f32)rand() / RAND_MAX - 0.5f) * spread + 2.0f,
        emitter.orientation.z + ((f32)rand() / RAND_MAX - 0.5f) * spread
    );

    // Default particle properties based on type
    f32 life = 1.0f;
    f32 size = 5.0f;

    switch (emitter.type) {
        case EFFECT_SPARK:
            life = 0.3f; size = 2.0f; break;
        case EFFECT_SMOKE:
            life = 2.0f; size = 15.0f; break;
        case EFFECT_STARS:
            life = 0.8f; size = 8.0f; break;
        case EFFECT_BOOST_FLAME:
            life = 0.15f; size = 10.0f; break;
        default: break;
    }

    Particle p;
    p.position = emitter.position;
    p.velocity = vel;
    p.acceleration = Vec3(0.0f, -2.0f, 0.0f);
    p.life = life;
    p.maxLife = life;
    p.size = size;
    p.sizeEnd = size * 0.5f;
    p.r = 255; p.g = 255; p.b = 255; p.a = 255;
    p.rEnd = 255; p.gEnd = 200; p.bEnd = 100; p.aEnd = 0;
    p.flags = 0;

    // In real impl, particle is placed in pool; simplified here
    (void)p;

    emitter.activeParticleCount++;
    m_totalParticleCount++;
}

void EffectDirector::updateScreenEffect(f32 dt) {
    if (!m_screenEffect.active) return;

    m_screenEffect.timer -= dt;
    if (m_screenEffect.timer <= 0.0f) {
        m_screenEffect.active = false;
        m_screenEffect.timer = 0.0f;
    }
}

// --- New effect management functions ---

u32 EffectDirector::spawnEffect(u32 effectId, const Vec3& pos, const Vec3& dir) {
    // Create an emitter from a numeric effect ID
    EffectType type = static_cast<EffectType>(effectId % EFFECT_COUNT);
    u32 emitterId = createEmitter(type, pos, 32, 10.0f);
    if (emitterId == 0xFFFFFFFF) return 0xFFFFFFFF;

    m_emitters[emitterId].orientation = dir;
    return emitterId;
}

void EffectDirector::stopAll() {
    if (!m_initialized) return;
    for (u32 i = 0; i < MAX_EMITTERS; i++) {
        if (m_emitters[i].active) {
            m_emitters[i].active = false;
            m_emitters[i].activeParticleCount = 0;
        }
    }
    m_activeEmitterCount = 0;

    // Clear all particles
    if (m_particlePool) {
        memset(m_particlePool, 0, sizeof(Particle) * MAX_PARTICLES);
    }
    m_totalParticleCount = 0;
}

void EffectDirector::stopById(u32 effectId) {
    if (!m_initialized) return;
    EffectType type = static_cast<EffectType>(effectId % EFFECT_COUNT);
    for (u32 i = 0; i < MAX_EMITTERS; i++) {
        if (!m_emitters[i].active) continue;
        if (m_emitters[i].type == type) {
            m_emitters[i].active = false;
            m_emitters[i].activeParticleCount = 0;
            m_activeEmitterCount--;
        }
    }
}

void EffectDirector::setGlobalScale(f32 scale) {
    m_globalScale = scale > 0.001f ? scale : 1.0f;
}

void EffectDirector::preload(u32 effectId) {
    // Pre-load effect data for the given ID
    // In real impl: loads the .breff/.breft particle resources from archive
    (void)effectId;
}

void EffectDirector::update(f32 dt) {
    if (!m_initialized) return;

    // Update all active emitters
    for (u32 i = 0; i < MAX_EMITTERS; i++) {
        if (m_emitters[i].active) {
            updateEmitter(m_emitters[i], dt);
        }
    }

    updateScreenEffect(dt);

    // Remove expired emitters (emitRate <= 0 and no active particles)
    for (u32 i = 0; i < MAX_EMITTERS; i++) {
        if (!m_emitters[i].active) continue;
        if (m_emitters[i].emitRate <= 0.0f && m_emitters[i].activeParticleCount == 0) {
            m_emitters[i].active = false;
            m_activeEmitterCount--;
        }
    }
}

// --- Particle helper functions ---

void EffectDirector::updateSingleParticle(Particle& p, f32 dt) {
    // Integrate velocity and acceleration
    p.velocity.x += p.acceleration.x * dt;
    p.velocity.y += p.acceleration.y * dt;
    p.velocity.z += p.acceleration.z * dt;

    p.position.x += p.velocity.x * dt * m_globalScale;
    p.position.y += p.velocity.y * dt * m_globalScale;
    p.position.z += p.velocity.z * dt * m_globalScale;

    // Decrease lifetime
    p.life -= dt;
}

void EffectDirector::emitParticle(EffectEmitter& emitter, const Vec3& dir) {
    if (m_totalParticleCount >= MAX_PARTICLES) return;
    if (emitter.activeParticleCount >= emitter.maxParticles) return;

    // Find a free particle in the pool
    u32 slot = 0xFFFFFFFF;
    for (u32 i = 0; i < MAX_PARTICLES; i++) {
        if (m_particlePool[i].life <= 0.0f) {
            slot = i;
            break;
        }
    }
    if (slot == 0xFFFFFFFF) return;

    Particle& p = m_particlePool[slot];
    p.position = emitter.position;
    p.acceleration = Vec3(0.0f, -2.0f, 0.0f);
    p.life = computeParticleLifetime(emitter.type);
    p.maxLife = p.life;
    p.size = computeParticleSize(emitter.type) * m_globalScale;
    p.sizeEnd = p.size * 0.5f;

    // Velocity: base direction + random spread
    f32 spread = 1.0f;
    p.velocity.x = dir.x + ((f32)rand() / RAND_MAX - 0.5f) * spread;
    p.velocity.y = dir.y + ((f32)rand() / RAND_MAX - 0.5f) * spread + 2.0f;
    p.velocity.z = dir.z + ((f32)rand() / RAND_MAX - 0.5f) * spread;

    applyParticleColor(emitter.type, p);
    p.flags = 0;

    emitter.activeParticleCount++;
    m_totalParticleCount++;
}

f32 EffectDirector::computeParticleLifetime(EffectType type) const {
    switch (type) {
        case EFFECT_SPARK:        return 0.3f;
        case EFFECT_SMOKE:        return 2.0f;
        case EFFECT_STARS:        return 0.8f;
        case EFFECT_BOOST_FLAME:  return 0.15f;
        case EFFECT_FIRE:         return 0.5f;
        case EFFECT_DUST:         return 1.0f;
        case EFFECT_SPLASH:       return 0.6f;
        case EFFECT_SPEED_LINES:  return 0.2f;
        default:                  return 1.0f;
    }
}

f32 EffectDirector::computeParticleSize(EffectType type) const {
    switch (type) {
        case EFFECT_SPARK:        return 2.0f;
        case EFFECT_SMOKE:        return 15.0f;
        case EFFECT_STARS:        return 8.0f;
        case EFFECT_BOOST_FLAME:  return 10.0f;
        case EFFECT_FIRE:         return 6.0f;
        case EFFECT_DUST:         return 4.0f;
        case EFFECT_SPLASH:       return 5.0f;
        case EFFECT_SPEED_LINES:  return 3.0f;
        default:                  return 5.0f;
    }
}

void EffectDirector::applyParticleColor(EffectType type, Particle& p) const {
    switch (type) {
    case EFFECT_SPARK:
        p.r = 255; p.g = 200; p.b = 50;  p.a = 255;
        p.rEnd = 255; p.gEnd = 100; p.bEnd = 0; p.aEnd = 0;
        break;
    case EFFECT_SMOKE:
        p.r = 180; p.g = 180; p.b = 180; p.a = 180;
        p.rEnd = 100; p.gEnd = 100; p.bEnd = 100; p.aEnd = 0;
        break;
    case EFFECT_STARS:
        p.r = 255; p.g = 255; p.b = 100; p.a = 255;
        p.rEnd = 255; p.gEnd = 255; p.bEnd = 255; p.aEnd = 0;
        break;
    case EFFECT_BOOST_FLAME:
        p.r = 255; p.g = 150; p.b = 0;   p.a = 255;
        p.rEnd = 255; p.gEnd = 50;  p.bEnd = 0; p.aEnd = 0;
        break;
    default:
        p.r = 255; p.g = 255; p.b = 255; p.a = 255;
        p.rEnd = 255; p.gEnd = 200; p.bEnd = 100; p.aEnd = 0;
        break;
    }
}

} // namespace Scene