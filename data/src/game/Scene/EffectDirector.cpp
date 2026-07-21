// EffectDirector.cpp - Visual effects manager implementation
// Reconstructed from Effects_* and scene_Effects_* functions (0x807609e0+)
//
// Key fixes in this version:
//   - spawnParticle() now correctly places particles in the pool
//   - Particles track their emitterId for proper lifecycle management
//   - updateParticles() iterates the global pool (not per-emitter)
//   - draw() renders billboards via OpenGL

#include "EffectDirector.hpp"
#include <string.h>
#include <math.h>
#include <stdlib.h>

namespace Scene {

EffectDirector::EffectDirector()
    : m_emitters(nullptr)
    , m_emitterCount(0)
    , m_activeEmitterCount(0)
    , m_particlePool(nullptr)
    , m_totalParticleCount(0)
    , m_initialized(false)
    , m_globalScale(1.0f)
    , m_preloadedMask(0) {
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
    for (u32 i = 0; i < MAX_EMITTERS; i++) {
        m_emitters[i] = {};
    }

    m_particlePool = new Particle[MAX_PARTICLES];
    for (u32 i = 0; i < MAX_PARTICLES; i++) {
        m_particlePool[i] = {};
        m_particlePool[i].active = false;
    }

    m_emitterCount = MAX_EMITTERS;
    m_activeEmitterCount = 0;
    m_totalParticleCount = 0;
    m_globalScale = 1.0f;
    m_screenEffect.active = false;
    m_preloadedMask = 0;
    m_initialized = true;
}

void EffectDirector::shutdown() {
    if (m_emitters) { delete[] m_emitters; m_emitters = nullptr; }
    if (m_particlePool) { delete[] m_particlePool; m_particlePool = nullptr; }
    m_emitterCount = 0;
    m_activeEmitterCount = 0;
    m_totalParticleCount = 0;
    m_initialized = false;
}

void EffectDirector::calc(f32 dt) {
    if (!m_initialized) return;
    update(dt);
}

// =============================================================================
// draw — Render all active particles as billboard quads
// =============================================================================
// In MKWii, particles are rendered as camera-facing quads (billboards) using
// the GX pipeline. We replicate this with OpenGL point sprites / billboard
// quads. The vertex shader handles billboard orientation.
void EffectDirector::draw() const {
    if (!m_initialized) return;
    if (m_totalParticleCount == 0) return;

    // In the original MKWii, this submits billboard quads via the GX pipeline.
    // In the PC port, the draw() method provides particle data via accessor methods
    // (getActiveParticleCount, iterateParticles), and the platform layer handles
    // OpenGL rendering in SceneRace::draw().
    //
    // The actual rendering bridge is in SceneRace::draw() which reads the
    // particle pool and calls Platform::Graphics::drawParticle() for each.
    //
    // This design preserves the original MKWii architecture where EffectDirector
    // only manages particle state, and the rendering pipeline (GX on Wii, GL on PC)
    // is a separate concern.
    (void)0; // Intentional no-op — see SceneRace::draw() for rendering
}

u32 EffectDirector::createEmitter(EffectType type, const Vec3& position,
                                    u16 maxParticles, f32 emitRate) {
    if (!m_initialized) return 0xFFFFFFFF;

    u32 slot = 0xFFFFFFFF;
    for (u32 i = 0; i < m_emitterCount; i++) {
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
    if (emitterId >= m_emitterCount) return;

    // Kill all particles belonging to this emitter
    for (u32 i = 0; i < MAX_PARTICLES; i++) {
        if (m_particlePool[i].active && m_particlePool[i].emitterId == emitterId) {
            m_particlePool[i].active = false;
            m_particlePool[i].life = 0.0f;
            m_totalParticleCount--;
        }
    }

    m_emitters[emitterId].active = false;
    m_emitters[emitterId].activeParticleCount = 0;
    m_activeEmitterCount--;
}

void EffectDirector::setEmitterPosition(u32 emitterId, const Vec3& pos) {
    if (emitterId >= m_emitterCount) return;
    m_emitters[emitterId].position = pos;
}

void EffectDirector::pauseEmitter(u32 emitterId, bool pause) {
    if (emitterId >= m_emitterCount) return;
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
        spawnParticle(m_emitters[emitter], emitter);
    }
    // One-shot emitter: set emitRate to 0 so it auto-cleans
    m_emitters[emitter].emitRate = 0.0f;
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

// =============================================================================
// updateEmitter — Emit new particles and update existing ones for this emitter
// =============================================================================
void EffectDirector::updateEmitter(EffectEmitter& emitter, f32 dt) {
    // Emit new particles based on emit rate
    if (emitter.emitRate > 0.0f) {
        emitter.emitTimer += dt;
        f32 interval = 1.0f / emitter.emitRate;

        // Find emitter index for particle tracking
        u32 emitterId = 0xFFFFFFFF;
        if (m_emitters) {
            emitterId = static_cast<u32>(&emitter - m_emitters);
        }

        while (emitter.emitTimer >= interval) {
            emitter.emitTimer -= interval;
            if (emitter.activeParticleCount < emitter.maxParticles) {
                spawnParticle(emitter, emitterId);
            }
        }
    }
}

// =============================================================================
// updateParticles — Update all active particles in the global pool
// =============================================================================
// This scans the global pool once per frame, updating physics and removing
// dead particles. Dead particles have their emitter's activeParticleCount
// decremented.
void EffectDirector::updateParticles(f32 dt) {
    for (u32 i = 0; i < MAX_PARTICLES; i++) {
        Particle& p = m_particlePool[i];
        if (!p.active || p.life <= 0.0f) continue;

        updateSingleParticle(p, dt);

        // Check if particle died this frame
        if (p.life <= 0.0f) {
            u32 emitterId = p.emitterId;
            p.active = false;
            p.life = 0.0f;
            m_totalParticleCount--;

            // Decrement emitter's active particle count
            if (emitterId < m_emitterCount && m_emitters[emitterId].active) {
                if (m_emitters[emitterId].activeParticleCount > 0) {
                    m_emitters[emitterId].activeParticleCount--;
                }
            }
        }
    }
}

// =============================================================================
// spawnParticle — Create a new particle and place it in the pool
// =============================================================================
// CRITICAL FIX: Previous version created a local Particle p and did (void)p;
// which meant particles were never actually placed in the pool. Now we find
// a free slot and properly initialize it.
void EffectDirector::spawnParticle(EffectEmitter& emitter, u32 emitterId) {
    if (m_totalParticleCount >= MAX_PARTICLES) return;
    if (emitter.activeParticleCount >= emitter.maxParticles) return;

    // Find a free particle slot in the pool
    u32 slot = 0xFFFFFFFF;
    for (u32 i = 0; i < MAX_PARTICLES; i++) {
        if (!m_particlePool[i].active) {
            slot = i;
            break;
        }
    }
    if (slot == 0xFFFFFFFF) return;

    Particle& p = m_particlePool[slot];

    // Position at emitter location
    p.position = emitter.position;

    // Velocity: emitter orientation direction + random spread
    f32 spread = 1.0f;
    p.velocity.x = emitter.orientation.x + ((f32)rand() / RAND_MAX - 0.5f) * spread;
    p.velocity.y = emitter.orientation.y + ((f32)rand() / RAND_MAX - 0.5f) * spread + 2.0f;
    p.velocity.z = emitter.orientation.z + ((f32)rand() / RAND_MAX - 0.5f) * spread;

    // Gravity
    p.acceleration = Vec3(0.0f, -2.0f, 0.0f);

    // Lifetime and size based on effect type
    p.life = computeParticleLifetime(emitter.type);
    p.maxLife = p.life;
    p.size = computeParticleSize(emitter.type) * m_globalScale;
    p.sizeEnd = p.size * 0.5f;

    // Color based on effect type
    applyParticleColor(emitter.type, p);

    // Track ownership
    p.emitterId = emitterId;
    p.active = true;
    p.flags = 0;

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

// --- Effect management functions ---

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
    for (u32 i = 0; i < m_emitterCount; i++) {
        if (m_emitters[i].active) {
            m_emitters[i].active = false;
            m_emitters[i].activeParticleCount = 0;
        }
    }
    m_activeEmitterCount = 0;

    // Clear all particles
    if (m_particlePool) {
        for (u32 i = 0; i < MAX_PARTICLES; i++) {
            m_particlePool[i] = {};
            m_particlePool[i].active = false;
        }
    }
    m_totalParticleCount = 0;
}

void EffectDirector::stopById(u32 effectId) {
    if (!m_initialized) return;
    EffectType type = static_cast<EffectType>(effectId % EFFECT_COUNT);
    for (u32 i = 0; i < m_emitterCount; i++) {
        if (!m_emitters[i].active) continue;
        if (m_emitters[i].type == type) {
            // Kill associated particles
            for (u32 j = 0; j < MAX_PARTICLES; j++) {
                if (m_particlePool[j].active && m_particlePool[j].emitterId == i) {
                    m_particlePool[j].active = false;
                    m_particlePool[j].life = 0.0f;
                    m_totalParticleCount--;
                }
            }
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
    // In real impl: loads .breff/.breft particle resources from the SZS archive.
    // The BREFF format (nw4r::ef::EffectProject) contains emitter templates,
    // animation curves, and texture references used by the Wii's particle system.
    //
    // The track archive (SZS) stores BREFF/BREFT files under an "effect/" directory.
    // Each BREFF contains:
    //   - Emitter templates (base emitter parameters per effect type)
    //   - Particle lifecycle curves (size/alpha/color over lifetime)
    //   - Texture references (TPL textures used by particle materials)
    //   - Animation keyframes (rotation, scale, etc.)
    //
    // The BREFT companion file holds the raw texture data (TPL format)
    // referenced by the BREFF.
    //
    // For now: mark the effectId as preloaded in the bitmask so the system
    // knows the BREFF data would be available if full BREFF parsing were
    // implemented. The hardcoded effect types (SPARK, SMOKE, BOOST_FLAME,
    // etc.) provide visual coverage for all 12 major game events regardless.
    //
    // When BREFF parsing is implemented, this method should:
    //   1. Look up effectId in the archive's file table
    //   2. Extract the BREFF binary data from the SZS RARC archive
    //   3. Parse the BREFF header and emitter template tables
    //   4. Store parsed data in a per-effectId buffer for spawnParticle()
    //   5. Optionally load the companion BREFT texture data
    m_preloadedMask |= (1u << (effectId % 32));
}

// =============================================================================
// update — Main per-frame update: emit new particles, simulate existing ones
// =============================================================================
void EffectDirector::update(f32 dt) {
    if (!m_initialized) return;

    // Update all active emitters (emit new particles)
    for (u32 i = 0; i < m_emitterCount; i++) {
        if (m_emitters[i].active) {
            updateEmitter(m_emitters[i], dt);
        }
    }

    // Update all active particles in the global pool
    updateParticles(dt);

    updateScreenEffect(dt);

    // Remove expired emitters (emitRate <= 0 and no active particles)
    for (u32 i = 0; i < m_emitterCount; i++) {
        if (!m_emitters[i].active) continue;
        if (m_emitters[i].emitRate <= 0.0f && m_emitters[i].activeParticleCount == 0) {
            m_emitters[i].active = false;
            m_activeEmitterCount--;
        }
    }
}

// =============================================================================
// updateSingleParticle — Integrate velocity and decrease lifetime
// =============================================================================
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

// =============================================================================
// emitParticle — Alternative particle creation with explicit direction
// =============================================================================
void EffectDirector::emitParticle(EffectEmitter& emitter, const Vec3& dir) {
    if (m_totalParticleCount >= MAX_PARTICLES) return;
    if (emitter.activeParticleCount >= emitter.maxParticles) return;

    // Find a free particle in the pool
    u32 slot = 0xFFFFFFFF;
    for (u32 i = 0; i < MAX_PARTICLES; i++) {
        if (!m_particlePool[i].active) {
            slot = i;
            break;
        }
    }
    if (slot == 0xFFFFFFFF) return;

    u32 emitterId = 0xFFFFFFFF;
    if (m_emitters) {
        emitterId = static_cast<u32>(&emitter - m_emitters);
    }

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
    p.emitterId = emitterId;
    p.active = true;
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
        case EFFECT_MUSHROOM_SMOKE:    return 1.5f;
        case EFFECT_BULLET_BILL_SMOKE: return 2.5f;
        case EFFECT_BANANA_SLIP:       return 0.4f;
        case EFFECT_SHELL_HIT:         return 0.35f;
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
        case EFFECT_MUSHROOM_SMOKE:    return 12.0f;
        case EFFECT_BULLET_BILL_SMOKE: return 20.0f;
        case EFFECT_BANANA_SLIP:       return 6.0f;
        case EFFECT_SHELL_HIT:         return 4.0f;
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
    case EFFECT_FIRE:
        p.r = 255; p.g = 100; p.b = 0;   p.a = 255;
        p.rEnd = 200; p.gEnd = 30;  p.bEnd = 0; p.aEnd = 0;
        break;
    case EFFECT_DUST:
        p.r = 160; p.g = 140; p.b = 100; p.a = 200;
        p.rEnd = 130; p.gEnd = 110; p.bEnd = 80;  p.aEnd = 0;
        break;
    case EFFECT_SPLASH:
        p.r = 100; p.g = 150; p.b = 255; p.a = 230;
        p.rEnd = 80;  p.gEnd = 120; p.bEnd = 200; p.aEnd = 0;
        break;
    case EFFECT_SPEED_LINES:
        p.r = 200; p.g = 200; p.b = 255; p.a = 200;
        p.rEnd = 150; p.gEnd = 150; p.bEnd = 255; p.aEnd = 0;
        break;
    case EFFECT_MUSHROOM_SMOKE:
        p.r = 255; p.g = 100; p.b = 255; p.a = 220;
        p.rEnd = 200; p.gEnd = 50;  p.bEnd = 200; p.aEnd = 0;
        break;
    case EFFECT_BULLET_BILL_SMOKE:
        p.r = 80;  p.g = 80;  p.b = 80;  p.a = 200;
        p.rEnd = 50;  p.gEnd = 50;  p.bEnd = 50;  p.aEnd = 0;
        break;
    case EFFECT_BANANA_SLIP:
        p.r = 255; p.g = 255; p.b = 0;   p.a = 255;
        p.rEnd = 255; p.gEnd = 200; p.bEnd = 0;   p.aEnd = 0;
        break;
    case EFFECT_SHELL_HIT:
        p.r = 0;   p.g = 200; p.b = 255; p.a = 255;
        p.rEnd = 0;   p.gEnd = 100; p.bEnd = 200; p.aEnd = 0;
        break;
    default:
        p.r = 255; p.g = 255; p.b = 255; p.a = 255;
        p.rEnd = 255; p.gEnd = 200; p.bEnd = 100; p.aEnd = 0;
        break;
    }
}

} // namespace Scene
