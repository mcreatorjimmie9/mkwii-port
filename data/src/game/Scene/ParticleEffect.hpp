#pragma once
// ParticleEffect.hpp — In-Race Particle Effects
// Reconstructed from Scene module (0x8054xxxx)
//
// ParticleEffect manages in-race particle systems: boost flames,
// drift sparks, star trails, item explosions, etc. Uses a pooled
// particle system for efficient rendering.

#include "rk_common.h"

namespace Scene {

// =============================================================================
// Particle — Single particle instance
// =============================================================================
struct Particle {
    f32 x, y, z;           // World position
    f32 vx, vy, vz;        // Velocity
    f32 ax, ay, az;        // Acceleration (gravity variation by type)
    f32 life;               // Remaining life (seconds)
    f32 maxLife;            // Initial life
    f32 size;               // Current size
    f32 sizeEnd;            // Size at end of life
    u8 r, g, b, a;         // Current color
    u8 rEnd, gEnd, bEnd, aEnd; // Color at end of life
    u16 flags;              // Behavior flags (bit 0 = no gravity, etc.)
};

// =============================================================================
// ParticleEffectType — Known in-race particle effect types
// =============================================================================
enum ParticleEffectType {
    PEFFECT_NONE          = 0,
    PEFFECT_BOOST_FLAMES  = 1,   // Exhaust flames during boost
    PEFFECT_DRIFT_SPARKS  = 2,   // Sparks during drift (MT charge)
    PEFFECT_STAR_TRAIL    = 3,   // Star power sparkle trail
    PEFFECT_EXPLOSION     = 4,   // Item explosion (shell hit, bomb)
    PEFFECT_SMOKE         = 5,   // Tire smoke (offroad driving)
    PEFFECT_MUSHROOM_SMOKE = 6,  // Mushroom exhaust
    PEFFECT_BULLET_SMOKE  = 7,   // Bullet Bill exhaust trail
    PEFFECT_BANANA_SLIP   = 8,   // Banana peel slip effect
    PEFFECT_SPLASH        = 9,   // Water splash
    PEFFECT_COUNT         = 10,
};

// =============================================================================
// ParticleEffect — In-race particle effect system
//
// Manages spawning, updating, and rendering particle effects
// that appear during gameplay (not to be confused with the
// scene-level EffectDirector which manages persistent emitters).
// =============================================================================
class ParticleEffect {
public:
    static const u32 MAX_PARTICLES = 4096;
    static const u32 MAX_ACTIVE_EFFECTS = 64;

    ParticleEffect();
    ~ParticleEffect();

    /// Initialize the particle system.
    void init();

    /// Spawn a particle effect at a world position.
    /// @param x, y, z  World position
    /// @param effectType  Type of effect to spawn
    void spawn(f32 x, f32 y, f32 z, u32 effectType);

    /// Update all active particles with frame-budget limiting.
    /// @param dt  Frame delta time in seconds
    void update(f32 dt);

    /// Render all active particles.
    void draw();

    // --- Specialized spawn functions ---

    /// Spawn boost flame particles at kart exhaust position.
    void spawnBoostFlames(f32 x, f32 y, f32 z);

    /// Spawn drift spark particles at kart wheel position.
    /// @param mtLevel  Mini-turbo charge level (0-3)
    void spawnDriftSparks(f32 x, f32 y, f32 z, u32 mtLevel);

    /// Spawn star power sparkle trail.
    void spawnStarTrail(f32 x, f32 y, f32 z);

    /// Spawn an item explosion effect.
    void spawnExplosion(f32 x, f32 y, f32 z);

    /// Spawn tire smoke particles for offroad driving.
    /// @param x, y, z  Wheel contact position
    /// @param intensity  0.0-1.0, how hard the kart is offroad
    void spawnSmoke(f32 x, f32 y, f32 z, f32 intensity);

    /// Spawn mega star power particles (rainbow burst).
    void spawnMegaStar(f32 x, f32 y, f32 z);

    /// Spawn water splash particles on water entry.
    /// @param speed  Kart speed at water surface for splash height
    void spawnWaterSplash(f32 x, f32 y, f32 z, f32 speed);

    /// Spawn bullet bill smoke trail.
    /// @param x, y, z  Bullet bill tail position
    void spawnBulletBillTrail(f32 x, f32 y, f32 z);

    // --- Control ---

    /// Get total active particle count.
    u32 getActiveCount() const { return m_activeCount; }

    /// Set maximum active particle limit for performance.
    void setParticleLimit(u32 limit);

    /// Kill all active particles immediately.
    void killAll();

    /// Set global alpha multiplier for fade effects.
    void setGlobalAlpha(f32 alpha);

private:
    void spawnParticle(f32 x, f32 y, f32 z,
                       f32 vx, f32 vy, f32 vz,
                       f32 life, f32 size, u8 r, u8 g, u8 b, u8 a);
    void updateParticle(Particle& p, f32 dt);
    void killParticle(u32 idx);

    Particle m_particles[MAX_PARTICLES];
    u32 m_activeCount;
    u32 m_particleLimit;   // Soft cap on active particles
    f32 m_globalAlpha;     // Alpha multiplier for fade effects
    bool m_initialized;
};

} // namespace Scene