#include "ParticleEffect.hpp"
#include <math.h>

namespace Scene {

ParticleEffect::ParticleEffect()
    : m_activeCount(0)
    , m_initialized(false) {}

ParticleEffect::~ParticleEffect() {}

void ParticleEffect::init() {
    for (u32 i = 0; i < MAX_PARTICLES; i++) {
        m_particles[i].life = 0.0f;
    }
    m_activeCount = 0;
    m_initialized = true;
}

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
    default:
        break;
    }
}

void ParticleEffect::spawnBoostFlames(f32 x, f32 y, f32 z) {
    // Spawn 3-5 flame particles per frame behind the kart
    for (s32 i = 0; i < 4; i++) {
        f32 spread = ((f32)(i & 3) - 1.5f) * 5.0f;
        f32 life = 0.2f + (f32)(i & 1) * 0.15f;
        u8 r = 255, g = 128 + (u8)(i * 30), b = 0, a = 255;
        spawnParticle(x + spread, y, z,
                       spread * 2.0f, 3.0f + (f32)i, -20.0f - (f32)i * 5.0f,
                       life, 4.0f + (f32)i * 1.5f, r, g, b, a);
    }
}

void ParticleEffect::spawnDriftSparks(f32 x, f32 y, f32 z, u32 mtLevel) {
    // More sparks and brighter colors at higher MT charge levels
    s32 count = 2 + mtLevel;
    for (s32 i = 0; i < count; i++) {
        f32 angle = (f32)i * 6.28f / (f32)count;
        f32 speed = 15.0f + (f32)mtLevel * 5.0f;
        f32 vx = cosf(angle) * speed * 0.5f;
        f32 vz = sinf(angle) * speed * 0.5f;
        f32 vy = 5.0f + (f32)(i & 3) * 2.0f;

        // Color: white → yellow → orange as MT charges
        u8 r = 255, g = 255, b = 255, a = 255;
        if (mtLevel >= 1) { g = 220; b = 100; }
        if (mtLevel >= 2) { g = 180; b = 0; }
        if (mtLevel >= 3) { g = 120; b = 0; } // Orange = MT ready

        spawnParticle(x, y, z, vx, vy, vz,
                       0.3f + (f32)mtLevel * 0.05f, 2.0f, r, g, b, a);
    }
}

void ParticleEffect::spawnStarTrail(f32 x, f32 y, f32 z) {
    // Spawn colorful star-shaped particles in a trail
    for (s32 i = 0; i < 6; i++) {
        f32 ox = ((f32)(i * 7 + 3) - 10.0f) * 3.0f;
        f32 oy = ((f32)(i * 5 + 2) - 8.0f) * 2.0f;
        f32 oz = ((f32)(i * 3 + 1) - 5.0f) * 3.0f;

        // Cycle through rainbow colors
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

void ParticleEffect::spawnExplosion(f32 x, f32 y, f32 z) {
    // Spawn a burst of particles in all directions
    for (s32 i = 0; i < 20; i++) {
        f32 theta = (f32)i * 6.28f / 20.0f;
        f32 phi = ((f32)(i & 7) - 3.5f) * 0.3f;
        f32 speed = 30.0f + (f32)(i & 3) * 10.0f;
        f32 vx = cosf(theta) * cosf(phi) * speed;
        f32 vy = sinf(phi) * speed + 10.0f;
        f32 vz = sinf(theta) * cosf(phi) * speed;

        // Explosion colors: red, orange, yellow
        u8 r = 255, g = 100 + (u8)(i * 7) % 100, b = 0, a = 255;
        spawnParticle(x, y, z, vx, vy, vz,
                       0.5f + (f32)(i & 3) * 0.1f, 5.0f, r, g, b, a);
    }

    // Add smoke particles (gray, slower)
    for (s32 i = 0; i < 8; i++) {
        f32 angle = (f32)i * 6.28f / 8.0f;
        f32 speed = 10.0f;
        spawnParticle(x, y + 5.0f, z,
                       cosf(angle) * speed, 8.0f, sinf(angle) * speed,
                       0.8f, 8.0f, 80, 80, 80, 150);
    }
}

void ParticleEffect::spawnParticle(f32 x, f32 y, f32 z,
                                    f32 vx, f32 vy, f32 vz,
                                    f32 life, f32 size,
                                    u8 r, u8 g, u8 b, u8 a) {
    // Find a dead particle to reuse
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
    // Pool full — drop the particle
}

void ParticleEffect::update(f32 dt) {
    m_activeCount = 0;
    for (u32 i = 0; i < MAX_PARTICLES; i++) {
        if (m_particles[i].life > 0.0f) {
            updateParticle(m_particles[i], dt);
            m_activeCount++;
        }
    }
}

void ParticleEffect::updateParticle(Particle& p, f32 dt) {
    p.life -= dt;
    if (p.life <= 0.0f) {
        p.life = 0.0f;
        return;
    }

    // Integrate velocity and position
    p.vx += p.ax * dt;
    p.vy += p.ay * dt;
    p.vz += p.az * dt;
    p.x += p.vx * dt;
    p.y += p.vy * dt;
    p.z += p.vz * dt;

    // Interpolate color and size
    f32 t = 1.0f - (p.life / p.maxLife);
    p.size = p.size + (p.sizeEnd - p.size) * t;
    p.r = (u8)((f32)p.r + ((f32)p.rEnd - (f32)p.r) * t);
    p.g = (u8)((f32)p.g + ((f32)p.gEnd - (f32)p.g) * t);
    p.b = (u8)((f32)p.b + ((f32)p.bEnd - (f32)p.b) * t);
    p.a = (u8)((f32)p.a + ((f32)p.aEnd - (f32)p.a) * t);
}

void ParticleEffect::draw() {
    // Render active particles using GX quads or point sprites
    // In the real game, this batches particles by texture and
    // renders them as camera-facing billboards
}

void ParticleEffect::killParticle(u32 idx) {
    if (idx < MAX_PARTICLES) {
        m_particles[idx].life = 0.0f;
    }
}

} // namespace Scene