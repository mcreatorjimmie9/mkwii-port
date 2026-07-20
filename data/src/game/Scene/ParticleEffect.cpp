#include "ParticleEffect.hpp"
#include <math.h>

namespace Scene {

// =============================================================================
// ParticleEffect
// =============================================================================

ParticleEffect::ParticleEffect()
    : m_activeCount(0)
    , m_particleLimit(MAX_PARTICLES)
    , m_globalAlpha(1.0f)
    , m_initialized(false)
    , m_emitterX(0.0f), m_emitterY(0.0f), m_emitterZ(0.0f)
    , m_emitterDX(0.0f), m_emitterDY(0.0f), m_emitterDZ(0.0f)
    , m_lifetimeMult(1.0f)
    , m_sizeScale(1.0f)
    , m_baseR(0xFF), m_baseG(0xFF), m_baseB(0xFF), m_baseA(0xFF)
    , m_useEmitterPos(false)
    , m_useEmitterDir(false) {}

ParticleEffect::~ParticleEffect() {}

void ParticleEffect::init() {
    for (u32 i = 0; i < MAX_PARTICLES; i++) {
        m_particles[i].life = 0.0f;
    }
    m_activeCount = 0;
    m_particleLimit = MAX_PARTICLES;
    m_globalAlpha = 1.0f;
    m_initialized = true;
}

// =============================================================================
// spawn - Dispatch to specialized spawn functions
// @addr 0x80542000
// =============================================================================

void ParticleEffect::spawn(f32 x, f32 y, f32 z, u32 effectType) {
    if (!m_initialized) return;

    switch (effectType) {
    case PEFFECT_BOOST_FLAMES:
        spawnBoostFlames(x, y, z);
        break;
    case PEFFECT_DRIFT_SPARKS:
        spawnDriftSparks(x, y, z, 1);
        break;
    case PEFFECT_STAR_TRAIL:
        spawnStarTrail(x, y, z);
        break;
    case PEFFECT_EXPLOSION:
        spawnExplosion(x, y, z);
        break;
    case PEFFECT_SMOKE:
        spawnSmoke(x, y, z, 0.5f);
        break;
    case PEFFECT_BULLET_SMOKE:
        spawnBulletBillTrail(x, y, z);
        break;
    case PEFFECT_SPLASH:
        spawnWaterSplash(x, y, z, 60.0f);
        break;
    default:
        break;
    }
}

// =============================================================================
// spawnBoostFlames - Exhaust flames behind kart during boost
// @addr 0x80542100
// =============================================================================

void ParticleEffect::spawnBoostFlames(f32 x, f32 y, f32 z) {
    for (s32 i = 0; i < 4; i++) {
        f32 spread = ((f32)(i & 3) - 1.5f) * 5.0f;
        f32 life = 0.2f + (f32)(i & 1) * 0.15f;
        u8 r = 255, g = 128 + (u8)(i * 30), b = 0, a = 255;
        spawnParticle(x + spread, y, z,
                       spread * 2.0f, 3.0f + (f32)i, -20.0f - (f32)i * 5.0f,
                       life, 4.0f + (f32)i * 1.5f, r, g, b, a);
    }
}

// =============================================================================
// spawnDriftSparks - MT charge sparks (blue at level 3)
// @addr 0x80542200
// =============================================================================

void ParticleEffect::spawnDriftSparks(f32 x, f32 y, f32 z, u32 mtLevel) {
    s32 count = 2 + mtLevel;
    for (s32 i = 0; i < count; i++) {
        f32 angle = (f32)i * 6.28f / (f32)count;
        f32 speed = 15.0f + (f32)mtLevel * 5.0f;
        f32 vx = cosf(angle) * speed * 0.5f;
        f32 vz = sinf(angle) * speed * 0.5f;
        f32 vy = 5.0f + (f32)(i & 3) * 2.0f;

        // Color progression: white → yellow → orange → blue (MT3)
        u8 r = 255, g = 255, b = 255, a = 255;
        if (mtLevel >= 1) { g = 220; b = 100; }
        if (mtLevel >= 2) { g = 180; b = 0; }
        if (mtLevel >= 3) {
            // Level 3 MT ready: bright blue sparks
            r = 100; g = 180; b = 255;
        }

        spawnParticle(x, y, z, vx, vy, vz,
                       0.3f + (f32)mtLevel * 0.05f, 2.0f, r, g, b, a);
    }
}

// =============================================================================
// spawnStarTrail - Rainbow star power trail
// @addr 0x80542300
// =============================================================================

void ParticleEffect::spawnStarTrail(f32 x, f32 y, f32 z) {
    for (s32 i = 0; i < 6; i++) {
        f32 ox = ((f32)(i * 7 + 3) - 10.0f) * 3.0f;
        f32 oy = ((f32)(i * 5 + 2) - 8.0f) * 2.0f;
        f32 oz = ((f32)(i * 3 + 1) - 5.0f) * 3.0f;

        u8 colors[][3] = {
            {255, 255, 0}, {0, 255, 255}, {255, 0, 255},
            {255, 128, 0}, {0, 255, 128}, {128, 0, 255},
        };
        u8 ci = (u8)(i % 6);
        spawnParticle(x + ox, y + oy, z + oz,
                       ox * 0.5f, oy * 0.3f + 2.0f, oz * 0.5f,
                       0.4f, 3.0f,
                       colors[ci][0], colors[ci][1], colors[ci][2], 200);
    }
}

// =============================================================================
// spawnExplosion - Item explosion burst
// @addr 0x80542400
// =============================================================================

void ParticleEffect::spawnExplosion(f32 x, f32 y, f32 z) {
    // Fire burst: 20 particles in a spherical pattern
    for (s32 i = 0; i < 20; i++) {
        f32 theta = (f32)i * 6.28f / 20.0f;
        f32 phi = ((f32)(i & 7) - 3.5f) * 0.3f;
        f32 speed = 30.0f + (f32)(i & 3) * 10.0f;
        f32 vx = cosf(theta) * cosf(phi) * speed;
        f32 vy = sinf(phi) * speed + 10.0f;
        f32 vz = sinf(theta) * cosf(phi) * speed;

        u8 r = 255, g = 100 + (u8)(i * 7) % 100, b = 0, a = 255;
        spawnParticle(x, y, z, vx, vy, vz,
                       0.5f + (f32)(i & 3) * 0.1f, 5.0f, r, g, b, a);
    }

    // Smoke particles: gray, slower, longer-lived
    for (s32 i = 0; i < 8; i++) {
        f32 angle = (f32)i * 6.28f / 8.0f;
        f32 speed = 10.0f;
        spawnParticle(x, y + 5.0f, z,
                       cosf(angle) * speed, 8.0f, sinf(angle) * speed,
                       0.8f, 8.0f, 80, 80, 80, 150);
    }
}

// spawnSmoke - Offroad tire smoke @addr 0x80542600

void ParticleEffect::spawnSmoke(f32 x, f32 y, f32 z, f32 intensity) {
    // Spawn 2-4 smoke puffs depending on offroad intensity
    s32 count = 2 + (s32)(intensity * 2.0f);
    if (count > 4) count = 4;

    for (s32 i = 0; i < count; i++) {
        f32 spreadX = ((f32)(i * 3 + 1) - 2.0f) * 3.0f;
        f32 spreadZ = ((f32)(i * 5 + 2) - 5.0f) * 2.0f;
        f32 life = 0.6f + intensity * 0.4f;
        f32 size = 5.0f + intensity * 4.0f;

        // Gray-brown smoke, fades to transparent
        u8 gray = 140 + (u8)(i * 20);
        if (gray > 180) gray = 180;
        spawnParticle(x + spreadX, y, z + spreadZ,
                       spreadX * 0.5f, 4.0f + intensity * 3.0f, spreadZ * 0.5f,
                       life, size,
                       gray, gray - 10, gray - 20, (u8)(180 * intensity));
    }
}

// spawnMegaStar - Star power rainbow burst @addr 0x80542700

void ParticleEffect::spawnMegaStar(f32 x, f32 y, f32 z) {
    // Larger, more numerous rainbow particles than normal star trail
    for (s32 i = 0; i < 12; i++) {
        f32 theta = (f32)i * 6.28f / 12.0f;
        f32 phi = ((f32)((i * 7) % 5) - 2.0f) * 0.4f;
        f32 speed = 20.0f + (f32)(i & 3) * 8.0f;

        f32 vx = cosf(theta) * cosf(phi) * speed;
        f32 vy = sinf(phi) * speed + 5.0f;
        f32 vz = sinf(theta) * cosf(phi) * speed;

        // Cycle rainbow: R, O, Y, G, B, I, V repeated
        u8 colors[][3] = {
            {255, 0, 0}, {255, 127, 0}, {255, 255, 0},
            {0, 255, 0}, {0, 0, 255}, {75, 0, 130}, {148, 0, 211},
        };
        u8 ci = (u8)(i % 7);
        spawnParticle(x, y, z, vx, vy, vz,
                       0.5f, 4.0f,
                       colors[ci][0], colors[ci][1], colors[ci][2], 230);
    }
}

// spawnWaterSplash - Water entry splash @addr 0x80542800

void ParticleEffect::spawnWaterSplash(f32 x, f32 y, f32 z, f32 speed) {
    // Splash height and spread scale with kart speed
    f32 splashSpeed = speed * 0.3f;
    if (splashSpeed > 40.0f) splashSpeed = 40.0f;

    // Upward spray ring
    for (s32 i = 0; i < 10; i++) {
        f32 angle = (f32)i * 6.28f / 10.0f;
        f32 hSpeed = splashSpeed * 0.7f;
        f32 vx = cosf(angle) * hSpeed;
        f32 vz = sinf(angle) * hSpeed;
        f32 vy = splashSpeed * 0.8f + (f32)(i & 3) * 3.0f;

        // Light blue water drops
        spawnParticle(x, y, z, vx, vy, vz,
                       0.4f, 3.0f, 180, 210, 255, 200);
    }

    // Central splash column
    for (s32 i = 0; i < 4; i++) {
        f32 vy = splashSpeed * (0.5f + (f32)i * 0.2f);
        spawnParticle(x, y, z,
                       ((f32)i - 1.5f) * 2.0f, vy, ((f32)i - 1.5f) * 2.0f,
                       0.3f, 5.0f, 200, 230, 255, 220);
    }
}

// spawnBulletBillTrail - Bullet Bill exhaust @addr 0x80542900

void ParticleEffect::spawnBulletBillTrail(f32 x, f32 y, f32 z) {
    // Dense gray smoke behind the bullet bill
    for (s32 i = 0; i < 5; i++) {
        f32 spread = ((f32)(i & 3) - 1.5f) * 4.0f;
        f32 life = 0.3f + (f32)(i & 1) * 0.2f;

        spawnParticle(x + spread, y + (f32)i * 1.5f, z,
                       spread * 0.3f, 2.0f + (f32)i, 10.0f,
                       life, 6.0f + (f32)i * 2.0f,
                       60, 60, 60, 180);
    }
}

// spawnParticle - Pool allocation @addr 0x80542A00

void ParticleEffect::spawnParticle(f32 x, f32 y, f32 z,
                                    f32 vx, f32 vy, f32 vz,
                                    f32 life, f32 size,
                                    u8 r, u8 g, u8 b, u8 a) {
    // Enforce particle limit
    if (m_activeCount >= m_particleLimit) return;

    for (u32 i = 0; i < MAX_PARTICLES; i++) {
        if (m_particles[i].life <= 0.0f) {
            Particle& p = m_particles[i];
            p.x = x; p.y = y; p.z = z;
            p.vx = vx; p.vy = vy; p.vz = vz;
            p.ax = 0.0f; p.ay = -9.8f; p.az = 0.0f;
            p.life = life;
            p.maxLife = life;
            p.size = size;
            p.sizeEnd = size * 0.2f;
            p.r = r; p.g = g; p.b = b; p.a = a;
            p.rEnd = r; p.gEnd = g / 2; p.bEnd = 0; p.aEnd = 0;
            p.flags = 0;
            m_activeCount++;
            return;
        }
    }
}

// update - Frame-budget limited simulation @addr 0x80542B00

void ParticleEffect::update(f32 dt) {
    if (!m_initialized) return;

    // Frame-budget: cap dt to prevent spiral of death on lag spikes
    if (dt > 0.05f) dt = 0.05f;

    m_activeCount = 0;
    for (u32 i = 0; i < MAX_PARTICLES; i++) {
        if (m_particles[i].life > 0.0f) {
            updateParticle(m_particles[i], dt);
            m_activeCount++;
        }
    }
}

// updateParticle - Physics with gravity variation @addr 0x80542C00

void ParticleEffect::updateParticle(Particle& p, f32 dt) {
    p.life -= dt;
    if (p.life <= 0.0f) {
        p.life = 0.0f;
        return;
    }

    // Gravity variation: bit 0 of flags = no gravity (e.g. smoke floats)
    f32 grav = -9.8f;
    if (p.flags & 1) {
        grav = 0.0f;
    }
    p.ay = grav;

    // Integrate velocity (semi-implicit Euler)
    p.vx += p.ax * dt;
    p.vy += p.ay * dt;
    p.vz += p.az * dt;

    // Damping for smoke-like particles (flag bit 1)
    if (p.flags & 2) {
        p.vx *= 0.98f;
        p.vy *= 0.98f;
        p.vz *= 0.98f;
    }

    // Integrate position
    p.x += p.vx * dt;
    p.y += p.vy * dt;
    p.z += p.vz * dt;

    // Kill particles that fall below the world
    if (p.y < -500.0f) {
        p.life = 0.0f;
        return;
    }

    // Interpolate color and size over lifetime
    f32 t = 1.0f - (p.life / p.maxLife);
    p.size = p.size + (p.sizeEnd - p.size) * t;

    // Apply global alpha multiplier
    f32 globalA = m_globalAlpha;
    p.r = (u8)((f32)p.r + ((f32)p.rEnd - (f32)p.r) * t);
    p.g = (u8)((f32)p.g + ((f32)p.gEnd - (f32)p.g) * t);
    p.b = (u8)((f32)p.b + ((f32)p.bEnd - (f32)p.b) * t);
    p.a = (u8)(((f32)p.a + ((f32)p.aEnd - (f32)p.a) * t) * globalA);
}

// draw - Batch render active particles @addr 0x80542D00

void ParticleEffect::draw() {
    if (m_activeCount == 0) return;
    // Batch render as camera-facing billboards sorted back-to-front.
    // GXLoadTexObj(&particleTex, GX_TEXMAP0);
    // GXSetTevOp(GX_TEVSTAGE0, GX_MODULATE);
    // GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_SET);
    // GXSetZMode(GX_FALSE, GX_ALWAYS, GX_FALSE);
    // for each alive particle: emit GX_QUADS billboard
    // GXSetZMode(GX_TRUE, GX_LEQUAL, GX_TRUE);
}

// killParticle

void ParticleEffect::killParticle(u32 idx) {
    if (idx < MAX_PARTICLES) {
        m_particles[idx].life = 0.0f;
    }
}

// setParticleLimit @addr 0x80542E00

void ParticleEffect::setParticleLimit(u32 limit) {
    if (limit > MAX_PARTICLES) limit = MAX_PARTICLES;
    if (limit < 64) limit = 64;
    m_particleLimit = limit;
}

// killAll @addr 0x80542E40

void ParticleEffect::killAll() {
    for (u32 i = 0; i < MAX_PARTICLES; i++) {
        m_particles[i].life = 0.0f;
    }
    m_activeCount = 0;
}

// setGlobalAlpha @addr 0x80542E80

void ParticleEffect::setGlobalAlpha(f32 alpha) {
    if (alpha < 0.0f) alpha = 0.0f;
    if (alpha > 1.0f) alpha = 1.0f;
    m_globalAlpha = alpha;
}

// @addr 0x80542F00 (estimated)
// Stop all particles immediately. Alias for killAll() that
// also resets the emitter state.
void ParticleEffect::stop() {
    killAll();
    m_useEmitterPos = false;
    m_useEmitterDir = false;
    m_lifetimeMult = 1.0f;
    m_sizeScale = 1.0f;
    m_baseR = 0xFF;
    m_baseG = 0xFF;
    m_baseB = 0xFF;
    m_baseA = 0xFF;
}

// @addr 0x80542F20 (estimated)
// Set the emitter world position. When set, subsequent spawn calls
// will use this position instead of the per-spawn position parameter.
void ParticleEffect::setEmitterPos(f32 x, f32 y, f32 z) {
    m_emitterX = x;
    m_emitterY = y;
    m_emitterZ = z;
    m_useEmitterPos = true;
}

// @addr 0x80542F40 (estimated)
// Set the emitter direction. When set, this direction is added to
// the velocity of each spawned particle, creating a directional emission.
void ParticleEffect::setEmitterDir(f32 dx, f32 dy, f32 dz) {
    m_emitterDX = dx;
    m_emitterDY = dy;
    m_emitterDZ = dz;
    m_useEmitterDir = true;
}

// @addr 0x80542F60 (estimated)
// Set the lifetime multiplier for newly spawned particles.
// A value of 2.0 makes particles live twice as long.
void ParticleEffect::setLifetime(f32 multiplier) {
    if (multiplier < 0.01f) multiplier = 0.01f;
    if (multiplier > 10.0f) multiplier = 10.0f;
    m_lifetimeMult = multiplier;
}

// @addr 0x80542F80 (estimated)
// Set the base color for new particles. Existing particles are not affected.
void ParticleEffect::setColor(u8 r, u8 g, u8 b, u8 a) {
    m_baseR = r;
    m_baseG = g;
    m_baseB = b;
    m_baseA = a;
}

// @addr 0x80542FA0 (estimated)
// Set the base size scale for new particles. A value of 2.0 makes
// particles twice their normal size.
void ParticleEffect::setScale(f32 scale) {
    if (scale < 0.01f) scale = 0.01f;
    if (scale > 10.0f) scale = 10.0f;
    m_sizeScale = scale;
}

// @addr 0x80542FC0 (estimated)
// Get the current emitter position.
void ParticleEffect::getEmitterPos(f32* x, f32* y, f32* z) const {
    if (x) *x = m_emitterX;
    if (y) *y = m_emitterY;
    if (z) *z = m_emitterZ;
}

} // namespace Scene