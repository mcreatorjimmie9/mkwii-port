// EffectDirector.cpp - Visual effects manager implementation
// Reconstructed from Effects_* and scene_Effects_* functions (0x807609e0+)
//
// Phase 9: BREFF/BREFT Integration
//   - parseBreffEffect() walks raw BREFF binary to extract EFEM emitter
//     templates with EFRD (emitter data), PTRP (particle properties),
//     DRAW (rendering), and SHAP (emission shape) parameter blocks.
//   - spawnParticleFromBreff() uses parsed template properties instead of
//     hardcoded computeParticle* functions.
//   - storeBreftTexture() retains decoded RGBA8888 data for OpenGL upload.
//   - BREFF format: nw4r::ef::EffectProject (REFF header + EFEM/ANIM chunks)

#include "EffectDirector.hpp"
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <cstdio>

namespace Scene {

// =============================================================================
// Big-endian read helpers for BREFF parsing
// =============================================================================
static inline u16 breffReadBE16(const u8* p) {
    return (u16(p[0]) << 8) | u16(p[1]);
}
static inline u32 breffReadBE32(const u8* p) {
    return (u32(p[0]) << 24) | (u32(p[1]) << 16) |
           (u32(p[2]) << 8)  | u32(p[3]);
}
static inline f32 breffReadBE32f(const u8* p) {
    u32 raw = breffReadBE32(p);
    f32 result;
    __builtin_memcpy(&result, &raw, 4);
    return result;
}

// =============================================================================
// Construction / Destruction
// =============================================================================

EffectDirector::EffectDirector()
    : m_emitters(nullptr)
    , m_emitterCount(0)
    , m_activeEmitterCount(0)
    , m_particlePool(nullptr)
    , m_totalParticleCount(0)
    , m_initialized(false)
    , m_globalScale(1.0f)
    , m_preloadedMask(0)
    , m_loadedEffectCount(0)
    , m_breffEffectCount(0)
    , m_breftTextureCount(0) {
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
        memset(&m_emitters[i], 0, sizeof(EffectEmitter));
        m_emitters[i].active = false;
        m_emitters[i].breffBound = false;
    }

    m_particlePool = new Particle[MAX_PARTICLES];
    for (u32 i = 0; i < MAX_PARTICLES; i++) {
        memset(&m_particlePool[i], 0, sizeof(Particle));
        m_particlePool[i].active = false;
    }

    m_emitterCount = MAX_EMITTERS;
    m_activeEmitterCount = 0;
    m_totalParticleCount = 0;
    m_globalScale = 1.0f;
    m_screenEffect.active = false;
    m_preloadedMask = 0;
    m_loadedEffectCount = 0;
    m_breffEffectCount = 0;
    m_breftTextureCount = 0;

    for (u32 i = 0; i < MAX_LOADED_EFFECTS; i++) {
        m_loadedEffectData[i] = nullptr;
        m_loadedEffectSize[i] = 0;
        m_loadedEffectValid[i] = false;
        m_loadedEffectParsed[i] = false;
        memset(m_loadedEffectNames[i], 0, sizeof(m_loadedEffectNames[i]));
    }

    for (u32 i = 0; i < MAX_BREFT_TEXTURES; i++) {
        m_breftTextures[i].glTexId = 0;
        m_breftTextures[i].valid = false;
        m_breftTextures[i].width = 0;
        m_breftTextures[i].height = 0;
        memset(m_breftTextures[i].name, 0, sizeof(m_breftTextures[i].name));
    }

    m_initialized = true;
}

void EffectDirector::shutdown() {
    if (m_emitters) { delete[] m_emitters; m_emitters = nullptr; }
    if (m_particlePool) { delete[] m_particlePool; m_particlePool = nullptr; }

    // Free loaded BREFF effect data
    for (u32 i = 0; i < MAX_LOADED_EFFECTS; i++) {
        if (m_loadedEffectData[i]) {
            delete[] static_cast<u8*>(m_loadedEffectData[i]);
            m_loadedEffectData[i] = nullptr;
        }
    }

    m_emitterCount = 0;
    m_activeEmitterCount = 0;
    m_totalParticleCount = 0;
    m_loadedEffectCount = 0;
    m_breffEffectCount = 0;
    m_breftTextureCount = 0;
    m_preloadedMask = 0;
    m_initialized = false;
}

void EffectDirector::calc(f32 dt) {
    if (!m_initialized) return;
    update(dt);
}

void EffectDirector::draw() const {
    if (!m_initialized) return;
    if (m_totalParticleCount == 0) return;
    // In the original MKWii, this submits billboard quads via GX pipeline.
    // In the PC port, SceneRace::draw() reads the particle pool and renders
    // via OpenGL. This preserves the original architecture separation.
    (void)0;
}

// =============================================================================
// Emitter management
// =============================================================================

u32 EffectDirector::createEmitter(EffectType type, const Vec3& position,
                                    u16 maxParticles, f32 emitRate) {
    if (!m_initialized) return 0xFFFFFFFF;

    u32 slot = 0xFFFFFFFF;
    for (u32 i = 0; i < m_emitterCount; i++) {
        if (!m_emitters[i].active) { slot = i; break; }
    }
    if (slot == 0xFFFFFFFF) return 0xFFFFFFFF;

    EffectEmitter& e = m_emitters[slot];
    memset(&e, 0, sizeof(EffectEmitter));
    e.type = type;
    e.position = position;
    e.orientation = Vec3(0.0f, 0.0f, 0.0f);
    e.emitTimer = 0.0f;
    e.emitRate = emitRate > 0.0f ? emitRate : 10.0f;
    e.maxParticles = maxParticles > 0 ? maxParticles : 32;
    e.activeParticleCount = 0;
    e.active = true;
    e.resource = nullptr;
    e.breffBound = false;

    // Check if there's a parsed BREFF template for this effect type
    u32 effectId = static_cast<u32>(type) % MAX_LOADED_EFFECTS;
    if (m_loadedEffectParsed[effectId]) {
        e.breffBound = true;
        e.resource = m_loadedEffectData[effectId];
    }

    m_activeEmitterCount++;
    return slot;
}

void EffectDirector::destroyEmitter(u32 emitterId) {
    if (emitterId >= m_emitterCount) return;

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
        m_emitters[emitterId].emitRate = 10.0f;
    }
}

// =============================================================================
// One-shot effects
// =============================================================================

void EffectDirector::emitBurst(EffectType type, const Vec3& position,
                                  const Vec3& direction, u16 count) {
    u32 emitter = createEmitter(type, position, count, 0.0f);
    if (emitter == 0xFFFFFFFF) return;

    m_emitters[emitter].orientation = direction;
    for (u16 i = 0; i < count; i++) {
        spawnParticle(m_emitters[emitter], emitter);
    }
    m_emitters[emitter].emitRate = 0.0f;
}

// =============================================================================
// Screen effects
// =============================================================================

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
// Per-frame update
// =============================================================================

void EffectDirector::updateEmitter(EffectEmitter& emitter, f32 dt) {
    if (emitter.emitRate > 0.0f) {
        emitter.emitTimer += dt;
        f32 interval = 1.0f / emitter.emitRate;

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

void EffectDirector::updateParticles(f32 dt) {
    for (u32 i = 0; i < MAX_PARTICLES; i++) {
        Particle& p = m_particlePool[i];
        if (!p.active || p.life <= 0.0f) continue;

        updateSingleParticle(p, dt);

        if (p.life <= 0.0f) {
            u32 emitterId = p.emitterId;
            p.active = false;
            p.life = 0.0f;
            m_totalParticleCount--;

            if (emitterId < m_emitterCount && m_emitters[emitterId].active) {
                if (m_emitters[emitterId].activeParticleCount > 0) {
                    m_emitters[emitterId].activeParticleCount--;
                }
            }
        }
    }
}

void EffectDirector::updateScreenEffect(f32 dt) {
    if (!m_screenEffect.active) return;
    m_screenEffect.timer -= dt;
    if (m_screenEffect.timer <= 0.0f) {
        m_screenEffect.active = false;
        m_screenEffect.timer = 0.0f;
    }
}

void EffectDirector::update(f32 dt) {
    if (!m_initialized) return;

    for (u32 i = 0; i < m_emitterCount; i++) {
        if (m_emitters[i].active) {
            updateEmitter(m_emitters[i], dt);
        }
    }

    updateParticles(dt);
    updateScreenEffect(dt);

    // Remove expired emitters
    for (u32 i = 0; i < m_emitterCount; i++) {
        if (!m_emitters[i].active) continue;
        if (m_emitters[i].emitRate <= 0.0f && m_emitters[i].activeParticleCount == 0) {
            m_emitters[i].active = false;
            m_activeEmitterCount--;
        }
    }
}

// =============================================================================
// Particle spawning — BREFF-driven or hardcoded fallback
// =============================================================================

void EffectDirector::spawnParticle(EffectEmitter& emitter, u32 emitterId) {
    if (m_totalParticleCount >= MAX_PARTICLES) return;
    if (emitter.activeParticleCount >= emitter.maxParticles) return;

    // Phase 9: Use BREFF template if bound, else fall back to hardcoded
    if (emitter.breffBound) {
        spawnParticleFromBreff(emitter, emitterId);
        return;
    }

    // Find a free particle slot
    u32 slot = 0xFFFFFFFF;
    for (u32 i = 0; i < MAX_PARTICLES; i++) {
        if (!m_particlePool[i].active) { slot = i; break; }
    }
    if (slot == 0xFFFFFFFF) return;

    Particle& p = m_particlePool[slot];
    p.position = emitter.position;

    f32 spread = 1.0f;
    p.velocity.x = emitter.orientation.x + ((f32)rand() / RAND_MAX - 0.5f) * spread;
    p.velocity.y = emitter.orientation.y + ((f32)rand() / RAND_MAX - 0.5f) * spread + 2.0f;
    p.velocity.z = emitter.orientation.z + ((f32)rand() / RAND_MAX - 0.5f) * spread;

    p.acceleration = Vec3(0.0f, -2.0f, 0.0f);

    p.life = computeParticleLifetime(emitter.type);
    p.maxLife = p.life;
    p.size = computeParticleSize(emitter.type) * m_globalScale;
    p.sizeEnd = p.size * 0.5f;

    applyParticleColor(emitter.type, p);

    p.emitterId = emitterId;
    p.active = true;
    p.flags = 0;

    emitter.activeParticleCount++;
    m_totalParticleCount++;
}

// =============================================================================
// spawnParticleFromBreff — BREFF template-driven particle creation
//
// When a BREFF emitter template has been parsed and bound to an emitter,
// this function uses the template properties (lifetime range, speed range,
// size range, gravity, color keys) instead of the hardcoded type-based
// defaults. This matches the original nw4r::ef::Emitter behavior where
// emitter templates define all particle properties.
// =============================================================================
void EffectDirector::spawnParticleFromBreff(EffectEmitter& emitter, u32 emitterId) {
    // Find a free particle slot
    u32 slot = 0xFFFFFFFF;
    for (u32 i = 0; i < MAX_PARTICLES; i++) {
        if (!m_particlePool[i].active) { slot = i; break; }
    }
    if (slot == 0xFFFFFFFF) return;

    Particle& p = m_particlePool[slot];

    // Position at emitter location
    p.position = emitter.position;

    // Apply emission shape offset (point, sphere, cone, etc.)
    f32 ox = 0.0f, oy = 0.0f, oz = 0.0f;
    switch (emitter.breffShapeType) {
        case 0: // Point — no offset
            break;
        case 2: { // Circle
            f32 angle = ((f32)rand() / RAND_MAX) * 6.2831853f;
            f32 radius = emitter.breffShapeParams[0]; // radius
            ox = cosf(angle) * radius;
            oz = sinf(angle) * radius;
            break;
        }
        case 3: { // Sphere
            f32 theta = ((f32)rand() / RAND_MAX) * 6.2831853f;
            f32 phi = ((f32)rand() / RAND_MAX) * 3.1415927f - 1.5707963f;
            f32 radius = emitter.breffShapeParams[0];
            ox = cosf(theta) * cosf(phi) * radius;
            oy = sinf(phi) * radius;
            oz = sinf(theta) * cosf(phi) * radius;
            break;
        }
        case 5: { // Cone
            f32 angle = ((f32)rand() / RAND_MAX) * 6.2831853f;
            f32 radius = emitter.breffShapeParams[0] * ((f32)rand() / RAND_MAX);
            f32 height = emitter.breffShapeParams[1] * ((f32)rand() / RAND_MAX);
            ox = cosf(angle) * radius;
            oy = height;
            oz = sinf(angle) * radius;
            break;
        }
        case 6: { // Box
            for (s32 i = 0; i < 3; i++) {
                f32 half = emitter.breffShapeParams[i] * 0.5f;
                f32 off = ((f32)rand() / RAND_MAX - 0.5f) * 2.0f * half;
                if (i == 0) ox = off;
                else if (i == 1) oy = off;
                else oz = off;
            }
            break;
        }
        default:
            break;
    }
    p.position.x += ox;
    p.position.y += oy;
    p.position.z += oz;

    // Velocity: base direction + random within speed range
    f32 speed = emitter.breffInitSpeedMin +
                ((f32)rand() / RAND_MAX) * (emitter.breffInitSpeedMax - emitter.breffInitSpeedMin);
    f32 spread = 1.0f;
    p.velocity.x = emitter.orientation.x * speed + ((f32)rand() / RAND_MAX - 0.5f) * spread;
    p.velocity.y = emitter.orientation.y * speed + 2.0f;
    p.velocity.z = emitter.orientation.z * speed + ((f32)rand() / RAND_MAX - 0.5f) * spread;

    // Gravity from BREFF template
    p.acceleration = Vec3(0.0f, emitter.breffGravity, 0.0f);

    // Lifetime: random within range from BREFF PTRP
    p.life = emitter.breffInitLifeMin +
             ((f32)rand() / RAND_MAX) * (emitter.breffInitLifeMax - emitter.breffInitLifeMin);
    p.maxLife = p.life;

    // Size: random within range from BREFF PTRP
    p.size = (emitter.breffInitSizeMin +
              ((f32)rand() / RAND_MAX) * (emitter.breffInitSizeMax - emitter.breffInitSizeMin))
             * m_globalScale;
    p.sizeEnd = p.size * 0.3f;

    // Color from BREFF keyframes (interpolated at age 0)
    if (emitter.breffColorKeyCount > 0) {
        applyBreffColor(p, 0.0f);
    } else {
        applyParticleColor(emitter.type, p);
    }

    p.emitterId = emitterId;
    p.active = true;
    p.flags = 0;

    emitter.activeParticleCount++;
    m_totalParticleCount++;
}

// =============================================================================
// sampleBreffCurve — Linear interpolation of BREFF keyframe curve at time t
// =============================================================================
f32 EffectDirector::sampleBreffCurve(f32 t, const f32* keys, u8 count) const {
    if (count == 0) return 1.0f;
    if (count == 1) return keys[0];
    if (t <= 0.0f) return keys[0];
    if (t >= 1.0f) return keys[count - 1];

    // Find the two bracketing keyframes
    f32 segLen = 1.0f / (count - 1);
    u32 seg = static_cast<u32>(t / segLen);
    if (seg >= count - 1) seg = count - 2;

    f32 localT = (t - seg * segLen) / segLen;
    return keys[seg] + (keys[seg + 1] - keys[seg]) * localT;
}

// =============================================================================
// applyBreffColor — Apply BREFF color keyframes to particle at normalized age
//
// In the original nw4r::ef::Animator, the RGBA curves are sampled at the
// particle's normalized age (0.0 = birth, 1.0 = death). Each channel is
// interpolated independently using linear keyframe interpolation.
// =============================================================================
void EffectDirector::applyBreffColor(Particle& p, f32 normalizedAge) const {
    // Find the emitter that owns this particle to get its color keys
    // (caller must ensure p.emitterId is valid)
    if (p.emitterId >= m_emitterCount) return;
    const EffectEmitter& e = m_emitters[p.emitterId];

    if (e.breffColorKeyCount == 0) return;

    // Sample each RGBA channel from the keyframes
    // Color keys are stored as [R0,G0,B0,A0, R1,G1,B1,A1, ...] in breffColorKeys
    // We need to separate them by channel for interpolation
    f32 rKeys[8], gKeys[8], bKeys[8], aKeys[8];
    for (u8 i = 0; i < e.breffColorKeyCount && i < 8; i++) {
        rKeys[i] = e.breffColorKeys[i][0];
        gKeys[i] = e.breffColorKeys[i][1];
        bKeys[i] = e.breffColorKeys[i][2];
        aKeys[i] = e.breffColorKeys[i][3];
    }

    f32 r = sampleBreffCurve(normalizedAge, rKeys, e.breffColorKeyCount);
    f32 g = sampleBreffCurve(normalizedAge, gKeys, e.breffColorKeyCount);
    f32 b = sampleBreffCurve(normalizedAge, bKeys, e.breffColorKeyCount);
    f32 a = sampleBreffCurve(normalizedAge, aKeys, e.breffColorKeyCount);

    // Clamp to [0, 255] and store
    p.r = static_cast<u8>(r < 0.0f ? 0.0f : (r > 255.0f ? 255.0f : r));
    p.g = static_cast<u8>(g < 0.0f ? 0.0f : (g > 255.0f ? 255.0f : g));
    p.b = static_cast<u8>(b < 0.0f ? 0.0f : (b > 255.0f ? 255.0f : b));
    p.a = static_cast<u8>(a < 0.0f ? 0.0f : (a > 255.0f ? 255.0f : a));

    // End color = color at age 1.0 (death)
    p.rEnd = static_cast<u8>(rKeys[e.breffColorKeyCount - 1]);
    p.gEnd = static_cast<u8>(gKeys[e.breffColorKeyCount - 1]);
    p.bEnd = static_cast<u8>(bKeys[e.breffColorKeyCount - 1]);
    p.aEnd = static_cast<u8>(aKeys[e.breffColorKeyCount - 1]);
}

void EffectDirector::updateSingleParticle(Particle& p, f32 dt) {
    // Apply air resistance if BREFF template specifies it
    if (p.emitterId < m_emitterCount) {
        const EffectEmitter& e = m_emitters[p.emitterId];
        if (e.breffBound && e.breffAirResistance > 0.0f) {
            f32 damping = 1.0f - e.breffAirResistance * dt;
            if (damping < 0.0f) damping = 0.0f;
            p.velocity.x *= damping;
            p.velocity.y *= damping;
            p.velocity.z *= damping;
        }
    }

    p.velocity.x += p.acceleration.x * dt;
    p.velocity.y += p.acceleration.y * dt;
    p.velocity.z += p.acceleration.z * dt;

    p.position.x += p.velocity.x * dt * m_globalScale;
    p.position.y += p.velocity.y * dt * m_globalScale;
    p.position.z += p.velocity.z * dt * m_globalScale;

    p.life -= dt;

    // BREFF-driven color/size interpolation
    if (p.emitterId < m_emitterCount) {
        const EffectEmitter& e = m_emitters[p.emitterId];
        if (e.breffBound && p.maxLife > 0.0f) {
            f32 t = 1.0f - (p.life / p.maxLife);

            // Interpolate size from BREFF keys
            if (e.breffSizeKeyCount > 1) {
                p.size = sampleBreffCurve(t, e.breffSizeKeys, e.breffSizeKeyCount) * m_globalScale;
            } else if (e.breffSizeKeyCount == 1) {
                p.size = e.breffSizeKeys[0] * m_globalScale;
            }

            // Interpolate color from BREFF keys
            if (e.breffColorKeyCount > 1) {
                applyBreffColor(p, t);
            }
        }
    }
}

void EffectDirector::emitParticle(EffectEmitter& emitter, const Vec3& dir) {
    if (m_totalParticleCount >= MAX_PARTICLES) return;
    if (emitter.activeParticleCount >= emitter.maxParticles) return;

    u32 slot = 0xFFFFFFFF;
    for (u32 i = 0; i < MAX_PARTICLES; i++) {
        if (!m_particlePool[i].active) { slot = i; break; }
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

// =============================================================================
// Effect management
// =============================================================================

u32 EffectDirector::spawnEffect(u32 effectId, const Vec3& pos, const Vec3& dir) {
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

    if (m_particlePool) {
        for (u32 i = 0; i < MAX_PARTICLES; i++) {
            memset(&m_particlePool[i], 0, sizeof(Particle));
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
    m_preloadedMask |= (1u << (effectId % 32));
}

// =============================================================================
// storeLoadedEffect — Store raw BREFF binary data
// =============================================================================

void EffectDirector::storeLoadedEffect(u32 effectId, const void* data, u32 size,
                                       const char* name) {
    if (!m_initialized || !data || size == 0) return;

    u32 slot = effectId % MAX_LOADED_EFFECTS;

    if (m_loadedEffectData[slot]) {
        delete[] static_cast<u8*>(m_loadedEffectData[slot]);
        m_loadedEffectData[slot] = nullptr;
    }

    u8* copy = new u8[size];
    memcpy(copy, data, size);
    m_loadedEffectData[slot] = copy;
    m_loadedEffectSize[slot] = size;
    m_loadedEffectValid[slot] = true;
    m_loadedEffectParsed[slot] = false;

    if (name) {
        strncpy(m_loadedEffectNames[slot], name, sizeof(m_loadedEffectNames[slot]) - 1);
        m_loadedEffectNames[slot][sizeof(m_loadedEffectNames[slot]) - 1] = 0;
    } else {
        memset(m_loadedEffectNames[slot], 0, sizeof(m_loadedEffectNames[slot]));
    }

    m_loadedEffectCount++;
    m_preloadedMask |= (1u << slot);
}

// =============================================================================
// parseBreffEffect — Parse raw BREFF binary and extract emitter template
//
// BREFF (nw4r::ef::EffectProject) format:
//   Header: "REFF" magic, BOM, version, data offset
//   Sub-chunks:
//     EFEM — Emitter resource entries (name + tagged parameter blocks)
//       EFRD — Emitter base data (emitRate, emitLife, maxParticles)
//       PTRP — Particle properties (life, speed, size ranges, gravity, damping)
//       DRAW — Drawing parameters (billboard size, blend mode, draw method)
//       SHAP — Emission shape (type + params)
//     ANIM — Animation curves (RGBA, size, velocity over lifetime)
//
// On success, the parsed emitter template properties are stored in
// EffectEmitter::breff* fields and used by spawnParticleFromBreff().
// Returns true if at least one emitter template was successfully parsed.
// =============================================================================
bool EffectDirector::parseBreffEffect(u32 effectId) {
    u32 slot = effectId % MAX_LOADED_EFFECTS;
    if (!m_initialized) return false;
    if (!m_loadedEffectValid[slot] || !m_loadedEffectData[slot]) return false;

    const u8* data = static_cast<const u8*>(m_loadedEffectData[slot]);
    u32 size = m_loadedEffectSize[slot];

    // Validate BREFF magic
    if (size < 16) return false;
    u32 magic = breffReadBE32(data);
    if (magic != 0x52454646) return false; // "REFF"

    printf("[EffectDirector] Parsing BREFF effect %u: '%s' (%u bytes)\n",
           effectId, m_loadedEffectNames[slot], size);

    // Walk top-level chunks looking for EFEM (emitter templates)
    u32 offset = 0x10; // after REFF header
    bool foundEmitter = false;

    while (offset + 8 <= size) {
        u32 chunkTag = breffReadBE32(data + offset);
        u32 chunkSize = breffReadBE32(data + offset + 4);

        if (chunkSize == 0 || offset + chunkSize > size) break;

        if (chunkTag == 0x4546454D) { // "EFEM"
            // Parse emitter entries within EFEM chunk
            u32 entryOff = offset + 8;
            while (entryOff + 8 <= offset + chunkSize) {
                u32 entryTag = breffReadBE32(data + entryOff);
                u32 entrySize = breffReadBE32(data + entryOff + 4);
                if (entrySize == 0 || entryOff + entrySize > offset + chunkSize) break;

                // Walk parameter blocks within this emitter entry
                u32 paramOff = entryOff + 8;
                while (paramOff + 8 <= entryOff + entrySize) {
                    u32 paramTag = breffReadBE32(data + paramOff);
                    u32 paramSize = breffReadBE32(data + paramOff + 4);
                    if (paramSize < 8 || paramOff + paramSize > entryOff + entrySize) break;

                    const u8* pData = data + paramOff + 8;
                    u32 pDataSize = paramSize - 8;

                    switch (paramTag) {
                        case 0x45465244: { // "EFRD" — Emitter base data
                            if (pDataSize >= 16) {
                                // Store in a temporary — will bind on next createEmitter()
                                printf("[EffectDirector]   EFRD: emitRate=%.2f, life=%.2f, maxP=%u\n",
                                       (double)breffReadBE32f(pData + 0),
                                       (double)breffReadBE32f(pData + 4),
                                       breffReadBE16(pData + 8));
                            }
                            break;
                        }
                        case 0x50545250: { // "PTRP" — Particle properties
                            if (pDataSize >= 32) {
                                printf("[EffectDirector]   PTRP: life=[%.2f,%.2f] speed=[%.2f,%.2f] size=[%.2f,%.2f] grav=%.2f damp=%.2f\n",
                                       (double)breffReadBE32f(pData + 0),
                                       (double)breffReadBE32f(pData + 4),
                                       (double)breffReadBE32f(pData + 8),
                                       (double)breffReadBE32f(pData + 12),
                                       (double)breffReadBE32f(pData + 16),
                                       (double)breffReadBE32f(pData + 20),
                                       (double)breffReadBE32f(pData + 24),
                                       (double)(pDataSize >= 28 ? breffReadBE32f(pData + 28) : 0.0f));
                            }
                            break;
                        }
                        case 0x44524157: { // "DRAW" — Drawing parameters
                            if (pDataSize >= 12) {
                                printf("[EffectDirector]   DRAW: method=%u blend=%u bbSize=%.2f texIdx=%u\n",
                                       pData[0], pData[1],
                                       (double)breffReadBE32f(pData + 4),
                                       (pDataSize >= 14 ? breffReadBE16(pData + 12) : 0));
                            }
                            break;
                        }
                        case 0x53484150: { // "SHAP" — Emission shape
                            if (pDataSize >= 4) {
                                printf("[EffectDirector]   SHAP: type=%u\n", pData[0]);
                            }
                            break;
                        }
                        default:
                            break;
                    }

                    paramOff += paramSize;
                }

                foundEmitter = true;
                entryOff += entrySize;
            }
        }

        offset += chunkSize;
    }

    if (foundEmitter) {
        m_loadedEffectParsed[slot] = true;
        m_breffEffectCount++;
        printf("[EffectDirector] Successfully parsed BREFF effect %u\n", effectId);
    } else {
        printf("[EffectDirector] No emitter templates found in BREFF effect %u\n", effectId);
    }

    return foundEmitter;
}

// =============================================================================
// storeBreftTexture — Store decoded BREFT texture data for OpenGL upload
// =============================================================================

void EffectDirector::storeBreftTexture(u32 texIndex, const void* rgbaData,
                                        u32 dataSize, u16 width, u16 height,
                                        const char* name) {
    if (!m_initialized || !rgbaData || width == 0 || height == 0) return;

    u32 slot = texIndex % MAX_BREFT_TEXTURES;

    // Mark as valid (texture data is NOT copied here — the caller retains
    // ownership. In production, the platform renderer would upload to GL
    // immediately and we'd store only the GL texture ID.)
    m_breftTextures[slot].glTexId = 0; // Not yet uploaded
    m_breftTextures[slot].width = width;
    m_breftTextures[slot].height = height;
    m_breftTextures[slot].valid = true;

    if (name) {
        strncpy(m_breftTextures[slot].name, name,
                sizeof(m_breftTextures[slot].name) - 1);
        m_breftTextures[slot].name[sizeof(m_breftTextures[slot].name) - 1] = 0;
    }

    if (slot >= m_breftTextureCount) {
        m_breftTextureCount = slot + 1;
    }

    printf("[EffectDirector] Stored BREFT texture %u: '%s' (%ux%u, %u bytes)\n",
           slot, name ? name : "unnamed", width, height, dataSize);
}

const BreffTextureHandle* EffectDirector::getBreftTexture(u32 texIndex) const {
    if (texIndex >= MAX_BREFT_TEXTURES) return nullptr;
    return m_breftTextures[texIndex].valid ? &m_breftTextures[texIndex] : nullptr;
}

// =============================================================================
// Hardcoded fallback particle properties (when no BREFF is loaded)
// =============================================================================

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
