#pragma once
// EffectDirector.hpp - Visual effects manager
// Reconstructed from Effects_* and scene_Effects_* functions (0x807609e0+)
//
// EffectDirector manages particle systems, screen effects (flash, blur),
// and transient visual effects during races (stars, sparks, smoke, etc.)

#include "rk_common.h"
#include <EGG/math.h>

namespace Scene {

// =============================================================================
// Particle — A single particle in a particle system
// =============================================================================
struct Particle {
    Vec3 position;
    Vec3 velocity;
    Vec3 acceleration;
    f32 life;
    f32 maxLife;
    f32 size;
    f32 sizeEnd;
    u8 r, g, b, a;
    u8 rEnd, gEnd, bEnd, aEnd;
    u16 flags;
    u32 emitterId;     // Index of the emitter that owns this particle
    bool active;         // True when particle is alive in the pool
};

// =============================================================================
// EffectType — Known effect type IDs
// =============================================================================
enum EffectType {
    EFFECT_NONE = 0,
    EFFECT_SPARK = 1,
    EFFECT_SMOKE = 2,
    EFFECT_STARS = 3,
    EFFECT_SPEED_LINES = 4,
    EFFECT_DUST = 5,
    EFFECT_SPLASH = 6,
    EFFECT_FIRE = 7,
    EFFECT_BOOST_FLAME = 8,
    EFFECT_MUSHROOM_SMOKE = 9,
    EFFECT_BULLET_BILL_SMOKE = 10,
    EFFECT_BANANA_SLIP = 11,
    EFFECT_SHELL_HIT = 12,
    EFFECT_COUNT = 13,
};

// =============================================================================
// EffectEmitter — An active particle emitter
// =============================================================================
struct EffectEmitter {
    EffectType type;
    Vec3 position;
    Vec3 orientation;
    f32 emitTimer;
    f32 emitRate;
    u16 maxParticles;
    u16 activeParticleCount;
    bool active;
    void* resource;
};

// =============================================================================
// ScreenEffect — Full-screen post-process effect
// =============================================================================
struct ScreenEffect {
    enum Type {
        SCREENFX_NONE = 0,
        SCREENFX_FLASH = 1,
        SCREENFX_FADE_WHITE = 2,
        SCREENFX_FADE_BLACK = 3,
        SCREENFX_BLUR = 4,
    };

    Type type;
    f32 duration;
    f32 timer;
    f32 intensity;
    u8 color[4];
    bool active;
};

// =============================================================================
// EffectDirector — Visual effects manager
//
// Creates and manages particle emitters, screen effects, and
// per-frame particle simulation. Particles are pooled for performance.
// =============================================================================
class EffectDirector {
public:
    EffectDirector();
    ~EffectDirector();

    // Lifecycle
    void init();
    void shutdown();
    void calc(f32 dt);
    void draw() const;

    // Emitter management
    u32 createEmitter(EffectType type, const Vec3& position, u16 maxParticles,
                       f32 emitRate);
    void destroyEmitter(u32 emitterId);
    void setEmitterPosition(u32 emitterId, const Vec3& pos);
    void pauseEmitter(u32 emitterId, bool pause);

    // One-shot effects
    void emitBurst(EffectType type, const Vec3& position,
                    const Vec3& direction, u16 count);

    // Screen effects
    void startScreenEffect(ScreenEffect::Type type, f32 duration,
                             f32 intensity, u8 r = 0xFF, u8 g = 0xFF,
                             u8 b = 0xFF, u8 a = 0xFF);
    void stopScreenEffect();
    const ScreenEffect& getScreenEffect() const { return m_screenEffect; }

    // Status queries
    u32 getActiveEmitterCount() const { return m_activeEmitterCount; }
    /// Get total particle count.
    u32 getTotalParticleCount() const { return m_totalParticleCount; }

    /// Get the particle pool for external rendering (e.g., OpenGL in SceneRace).
    /// Returns nullptr if not initialized.
    const Particle* getParticlePool() const { return m_particlePool; }

    /// Get the maximum number of particles in the pool.
    u32 getMaxParticles() const { return MAX_PARTICLES; }

    /// Render all active particles. On Wii this submits GX quads.
    /// On PC, this is a no-op — use getParticlePool() + getParticleCount()
    /// to render via Platform::Graphics::drawParticle() in SceneRace::draw().

    // Effect management
    u32 spawnEffect(u32 effectId, const Vec3& pos, const Vec3& dir);
    void stopAll();
    void stopById(u32 effectId);
    void setGlobalScale(f32 scale);
    void preload(u32 effectId);
    void update(f32 dt);
    f32 getGlobalScale() const { return m_globalScale; }

private:
    static const u32 MAX_EMITTERS = 128;
    static const u32 MAX_PARTICLES = 8192;

    void updateEmitter(EffectEmitter& emitter, f32 dt);
    void updateParticles(f32 dt);
    void spawnParticle(EffectEmitter& emitter, u32 emitterId);
    void updateScreenEffect(f32 dt);
    void updateSingleParticle(Particle& p, f32 dt);
    void emitParticle(EffectEmitter& emitter, const Vec3& dir);
    f32 computeParticleLifetime(EffectType type) const;
    f32 computeParticleSize(EffectType type) const;
    void applyParticleColor(EffectType type, Particle& p) const;

    EffectEmitter* m_emitters;
    u32 m_emitterCount;   // Total allocated emitter slots
    u32 m_activeEmitterCount;
    Particle* m_particlePool;
    u32 m_totalParticleCount;
    ScreenEffect m_screenEffect;
    f32 m_globalScale;
    bool m_initialized;
};

} // namespace Scene