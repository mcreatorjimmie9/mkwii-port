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
    f32 ax, ay, az;        // Acceleration
    f32 life;               // Remaining life (seconds)
    f32 maxLife;            // Initial life
    f32 size;               // Current size
    f32 sizeEnd;            // Size at end of life
    u8 r, g, b, a;         // Current color
    u8 rEnd, gEnd, bEnd, aEnd; // Color at end of life
    u16 flags;              // Behavior flags
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
    PEFFECT_SMOKE         = 5,   // Tire smoke
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

    /// Update all active particles.
    /// @param dt  Frame delta time in seconds
    void update(f32 dt);

    /// Render all active particles.
    void draw();

    // --- Specialized spawn functions ---

    /// Spawn boost flame particles at kart exhaust position.
    /// @param x, y, z  Exhaust position in world space
    void spawnBoostFlames(f32 x, f32 y, f32 z);

    /// Spawn drift spark particles at kart wheel position.
    /// @param x, y, z  Wheel contact position in world space
    /// @param mtLevel  Mini-turbo charge level (0-3)
    void spawnDriftSparks(f32 x, f32 y, f32 z, u32 mtLevel);

    /// Spawn star power sparkle trail.
    /// @param x, y, z  Kart center position in world space
    void spawnStarTrail(f32 x, f32 y, f32 z);

    /// Spawn an item explosion effect.
    /// @param x, y, z  Explosion center in world space
    void spawnExplosion(f32 x, f32 y, f32 z);

    /// Get total active particle count.
    u32 getActiveCount() const { return m_activeCount; }

private:
    void spawnParticle(f32 x, f32 y, f32 z,
                       f32 vx, f32 vy, f32 vz,
                       f32 life, f32 size, u8 r, u8 g, u8 b, u8 a);
    void updateParticle(Particle& p, f32 dt);
    void killParticle(u32 idx);

    Particle m_particles[MAX_PARTICLES];
    u32 m_activeCount;
    bool m_initialized;
};

} // namespace Scene