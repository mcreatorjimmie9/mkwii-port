#pragma once
// EffectDirector.hpp - Visual effects manager
// Reconstructed from Effects_* and scene_Effects_* functions (0x807609e0+)
//
// EffectDirector manages particle systems, screen effects (flash, blur),
// and transient visual effects during races (stars, sparks, smoke, etc.)
//
// Phase 9: BREFF/BREFT Integration
//   - Parsed BREFF emitter templates drive particle spawning (replaces
//     hardcoded defaults when .breff data is available)
//   - BREFT texture data is uploaded to OpenGL for billboard rendering
//   - Matching nw4r::ef::EffectProject → ParticleMgr → Emitter → Particle

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
    bool active;       // True when particle is alive in the pool
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

    // Phase 9: BREFF-driven emitter properties
    // When a BREFF template is bound (resource != nullptr && breffBound),
    // these override the hardcoded computeParticle* functions.
    bool breffBound;           // True if BREFF template is driving this emitter
    f32 breffEmitRate;         // From BREFF EFEM emit rate
    f32 breffInitLifeMin;      // Particle lifetime range from BREFF PTRP
    f32 breffInitLifeMax;
    f32 breffInitSpeedMin;     // Initial speed range from BREFF PTRP
    f32 breffInitSpeedMax;
    f32 breffInitSizeMin;      // Initial size range from BREFF PTRP
    f32 breffInitSizeMax;
    f32 breffGravity;          // Gravity from BREFF PTRP
    f32 breffAirResistance;     // Velocity damping from BREFF PTRP
    u8  breffDrawMethod;       // 0=billboard, 1=directional
    u8  breffBlendMode;        // GX blend mode from BREFF DRAW
    u8  breffShapeType;        // Emission volume shape from BREFF SHAP
    f32 breffShapeParams[6];   // Shape parameters
    f32 breffBillboardSize;    // Base billboard size from BREFF DRAW
    u16 breffTextureIndex;     // Texture index into BREFT texture array
    f32 breffColorKeys[8][4];  // RGBA keyframes from BREFF ANIM
    f32 breffSizeKeys[8];      // Size keyframes from BREFF ANIM
    f32 breffAlphaKeys[8];     // Alpha keyframes from BREFF ANIM
    u8  breffColorKeyCount;    // Number of valid color keys
    u8  breffSizeKeyCount;     // Number of valid size keys
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
// BreffTextureHandle — OpenGL texture uploaded from BREFT data
// =============================================================================
struct BreffTextureHandle {
    u32  glTexId;       // OpenGL texture ID (0 = not uploaded)
    u16  width;
    u16  height;
    char name[32];
    bool valid;
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
    u32 getTotalParticleCount() const { return m_totalParticleCount; }
    const Particle* getParticlePool() const { return m_particlePool; }
    u32 getMaxParticles() const { return MAX_PARTICLES; }

    // Effect management
    u32 spawnEffect(u32 effectId, const Vec3& pos, const Vec3& dir);
    void stopAll();
    void stopById(u32 effectId);
    void setGlobalScale(f32 scale);
    void preload(u32 effectId);
    void update(f32 dt);
    f32 getGlobalScale() const { return m_globalScale; }

    // -----------------------------------------------------------------
    // Phase 9: BREFF/BREFT Integration
    // -----------------------------------------------------------------

    /// Store raw BREFF binary data for a given effect slot.
    /// The data is retained (owned copy) and can be parsed on demand.
    void storeLoadedEffect(u32 effectId, const void* data, u32 size,
                           const char* name);

    /// Parse a previously stored BREFF and bind its emitter template
    /// to the given effect slot. Returns true on success.
    bool parseBreffEffect(u32 effectId);

    /// Store a BREFT texture as raw RGBA8888 data for upload.
    /// @param texIndex  Index into the BREFT texture array
    /// @param rgbaData  Decoded RGBA8888 pixel data
    /// @param width     Texture width
    /// @param height    Texture height
    /// @param name      Texture name (for debug)
    void storeBreftTexture(u32 texIndex, const void* rgbaData,
                            u32 dataSize, u16 width, u16 height,
                            const char* name);

    /// Get a BREFF-loaded texture handle by index.
    /// Returns nullptr if index is out of range or not loaded.
    const BreffTextureHandle* getBreftTexture(u32 texIndex) const;

    /// Get the total number of loaded BREFT textures.
    u32 getBreftTextureCount() const { return m_breftTextureCount; }

    /// Check if any BREFF effects have been successfully parsed.
    bool hasBreffEffects() const { return m_breffEffectCount > 0; }

    // Phase 11: Platform-layer texture upload callback.
    // Set by the platform layer to upload BREFT RGBA data to GPU.
    // If set, storeBreftTexture() calls this with the decoded pixel data.
    typedef void (*TexUploadFn)(u32 texIndex, const void* rgba,
                                  u16 width, u16 height, const char* name);
    void setTexUploadCallback(TexUploadFn fn) { m_texUploadFn = fn; }

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

    // Phase 9: BREFF-driven particle spawning
    void spawnParticleFromBreff(EffectEmitter& emitter, u32 emitterId);
    f32 sampleBreffCurve(f32 t, const f32* keys, u8 count) const;
    void applyBreffColor(Particle& p, f32 normalizedAge) const;

    EffectEmitter* m_emitters;
    u32 m_emitterCount;
    u32 m_activeEmitterCount;
    Particle* m_particlePool;
    u32 m_totalParticleCount;
    ScreenEffect m_screenEffect;
    f32 m_globalScale;
    bool m_initialized;

    // Preloaded effect tracking (BREFF archive data)
    u32 m_preloadedMask;

    // Loaded BREFF emitter templates (from .breff files in the track archive)
    static const u32 MAX_LOADED_EFFECTS = 32;
    void* m_loadedEffectData[MAX_LOADED_EFFECTS];
    u32  m_loadedEffectSize[MAX_LOADED_EFFECTS];
    char m_loadedEffectNames[MAX_LOADED_EFFECTS][64];
    bool m_loadedEffectValid[MAX_LOADED_EFFECTS];
    bool m_loadedEffectParsed[MAX_LOADED_EFFECTS]; // Phase 9: parsed flag
    u32  m_loadedEffectCount;
    u32  m_breffEffectCount; // Number of successfully parsed BREFF effects

    // Phase 11: Parsed BREFF emitter template — stores extracted EFRD/PTRP/DRAW/SHAP
    // data so createEmitter() can bind it to new EffectEmitter instances.
    struct BreffParsedTemplate {
        f32 emitRate;           // EFRD
        f32 emitLife;           // EFRD
        u16 maxParticles;       // EFRD
        f32 lifeMin, lifeMax;   // PTRP
        f32 speedMin, speedMax; // PTRP
        f32 sizeMin, sizeMax;   // PTRP
        f32 gravity;            // PTRP
        f32 airResistance;      // PTRP
        u8  drawMethod;         // DRAW
        u8  blendMode;          // DRAW
        f32 billboardSize;      // DRAW
        u16 textureIndex;      // DRAW
        u8  shapeType;          // SHAP
        f32 shapeParams[6];     // SHAP
        f32 colorKeys[8][4];    // ANIM (RGBA per keyframe)
        f32 sizeKeys[8];        // ANIM
        f32 alphaKeys[8];       // ANIM
        u8  colorKeyCount;
        u8  sizeKeyCount;
        u8  alphaKeyCount;
        bool valid;
    };
    BreffParsedTemplate m_parsedTemplates[MAX_LOADED_EFFECTS];

    // Phase 11: Helper to bind parsed template to emitter
    void bindTemplateToEmitter(EffectEmitter& emitter, u32 slot);

    // BREFT texture storage (Phase 9, enhanced Phase 11)
    static const u32 MAX_BREFT_TEXTURES = 64;
    BreffTextureHandle m_breftTextures[MAX_BREFT_TEXTURES];
    u8*  m_breftRGBAData[MAX_BREFT_TEXTURES]; // Retained RGBA pixel data
    u32  m_breftRGBASize[MAX_BREFT_TEXTURES];
    u32 m_breftTextureCount;
    TexUploadFn m_texUploadFn; // Platform-layer upload callback
};

} // namespace Scene
