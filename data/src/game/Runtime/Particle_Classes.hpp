#pragma once
// ============================================================================
// Particle_Classes.hpp — EGG Particle System Class Hierarchy
// Address range: 0x80540000 - 0x80560000 (416 functions)
//
// Discovered class hierarchy (EGG Framework):
//   ParticleMgr       — Top-level particle system manager (singleton)
//     Manages all emitters, global calc/draw, resource loading
//   Emitter           — Particle emitter (vtable-based, ~0x1A0 bytes)
//     Controls emission rate, lifetime, particle creation from templates
//   Particle          — Individual particle instance (~0x80 bytes)
//     Position, velocity, color, scale, rotation, life/age
//   Resource          — Loaded particle resource handle (~0x1C bytes)
//     Reference-counted wrapper around .ptcl compiled data
//   EmitterShape      — Emission volume shape (~0x24 bytes)
//     Point, line, circle, cone, sphere emission volumes
//   Animator          — Particle property animator (~0x50 bytes)
//     Color, scale, rotation, and velocity curves over lifetime
//   Billboard         — Renderable particle quad (~0x28 bytes)
//     Texture, size, color, position for GX submission
//   ChildEmitter      — Sub-emitter trigger on particle events (~0x2C bytes)
//     Fires a new emitter when a particle dies, bounces, etc.
//
// Categorization: GENESIS Phase 8 (Runtime Module — Task 8)
// ============================================================================

#include "rk_types.h"
#include <cstring>

namespace EGG {
namespace Particle {

// Forward declarations
class ParticleMgr;
class Emitter;
class Particle;
class Resource;
class EmitterShape;
class Animator;
class Billboard;
class ChildEmitter;

// ============================================================================
// ParticleMgr — Top-level particle system manager (singleton)
//
// Manages the entire EGG particle subsystem: emitter creation/destruction,
// per-frame calc/draw dispatch, global resource management, and the
// particle memory pool.
//
// Layout (~0x68 bytes):
//   0x00: vtable ptr
//   0x04: u32 (state flags)
//   0x08: Emitter* (active emitter list head)
//   0x0C: u16 (active emitter count)
//   0x0E: u16 (max emitter count)
//   0x10: Particle* (particle pool base)
//   0x14: u32 (total particle capacity)
//   0x18: u32 (active particle count)
//   0x1C: u32 (heap reference)
//   0x20: u8[4] (global tint color RGBA)
//   0x24: f32 (global time scale)
//   0x28: f32 (delta time accumulator)
//   0x2C: u32 (frame counter)
//   0x30: u32 (global flags / LOD level)
//   0x34-0x67: reserved / linked list pointers
//
// Key addresses:
//   0x805402a4 — Global particle system init
//   0x80540478 — Global particle system shutdown
//   0x80540c68 — Get singleton instance
//   0x805401ac — Reset manager state
//   0x80540364 — Calc: update all emitters and particles
//   0x80540408 — Draw: render all active particles
// ============================================================================

class ParticleMgr {
public:
    enum StateFlag {
        STATE_INIT      = BIT(0),  // system initialized
        STATE_PAUSED    = BIT(1),  // updates paused
        STATE_DRAWING   = BIT(2),  // currently in draw phase
        STATE_DESTROYING = BIT(3), // shutting down
    };

    // @addr 0x80540c68 — Get singleton instance
    static ParticleMgr* getInstance();

    // @addr 0x805402a4 — Global init: allocate pool, clear state
    // @addr 0x80540260 — Init with heap and max counts
    void init(u32 maxEmitters, u32 maxParticles);

    // @addr 0x80540478 — Global shutdown: destroy all emitters, free pool
    void shutdown();

    // @addr 0x805401ac — Reset: clear all emitters and particles
    void reset();

    // @addr 0x80540364 — Per-frame calc: update all active emitters
    // @addr 0x8054096c — Calc sub-step (per-emitter update)
    // @addr 0x805409a4 — Calc sub-step (per-particle update)
    // @addr 0x805409dc — Calc sub-step (particle lifecycle)
    void calc();

    // @addr 0x80540408 — Per-frame draw: render all active particles
    // @addr 0x80540538 — Draw setup: configure GX state
    // @addr 0x805405e0 — Draw submit: queue billboard data
    // @addr 0x8054062c — Draw flush: submit all queued billboards
    void draw();

    // @addr 0x80540ab8 — Create emitter from resource ID
    // @addr 0x80540c30 — Create emitter at position
    Emitter* createEmitter(u32 resourceId, s32 flags, s32 priority);

    // @addr 0x805407f4 — Destroy emitter by pointer
    // @addr 0x80540838 — Destroy all emitters
    // @addr 0x805408cc — Destroy emitter by ID
    void destroyEmitter(Emitter* emitter);
    void destroyAllEmitters();

    // @addr 0x80541170 — Pause/resume emission
    void setPaused(bool paused);

    // @addr 0x80540728 — Get active emitter count
    u32 getEmitterCount() const;

    // @addr 0x80540a24 — Get active particle count
    u32 getParticleCount() const;

    // @addr 0x80540a60 — Get total particle capacity
    u32 getParticleCapacity() const;

    // @addr 0x805410d4 — Set global time scale
    void setTimeScale(f32 scale);

    // @addr 0x805414a4 — Set global color tint
    void setGlobalTint(u8 r, u8 g, u8 b, u8 a);

public:  // was protected — opened for stub inter-class access
    ParticleMgr() { std::memset(this, 0, sizeof(*this)); }

    // --- Member data ---
    u32*      m_vtable;          // 0x00
    u32       m_stateFlags;      // 0x04
    Emitter*  m_emitterHead;     // 0x08
    Emitter*  m_emitterTail;     // 0x0C
    u16       m_emitterCount;    // 0x10
    u16       m_maxEmitters;     // 0x12
    u8        m_pad14[4];        // 0x14
    Particle* m_particlePool;    // 0x18
    u32       m_particleCapacity; // 0x1C
    u32       m_activeParticles; // 0x20
    u32       m_heapRef;         // 0x24
    u8        m_globalTintR;     // 0x28
    u8        m_globalTintG;     // 0x29
    u8        m_globalTintB;     // 0x2A
    u8        m_globalTintA;     // 0x2B
    f32       m_timeScale;       // 0x2C
    f32       m_dtAccum;         // 0x30
    u32       m_frameCount;      // 0x34
    u32       m_globalFlags;     // 0x38
    u8        m_pad3C[0x2C];     // 0x3C - 0x67
};

// ============================================================================
// Emitter — Particle emitter (vtable-based)
//
// Creates and manages a stream of particles from a template resource.
// Controls emission rate, lifetime, position, and delegates to child
// emitters for multi-stage effects.
//
// Layout (~0x1A0 bytes):
//   0x00: vtable ptr
//   0x04: u32 (emitter flags: alive, paused, loop, etc.)
//   0x08: Resource* (template data)
//   0x0C: ParticleMgr* (owning manager)
//   0x10: Emitter* (next in manager's linked list)
//   0x14: Emitter* (prev in manager's linked list)
//   0x18: f32[3] (emitter world position X, Y, Z)
//   0x24: f32[3] (emitter world rotation X, Y, Z)
//   0x30: f32 (emission rate: particles per second)
//   0x34: f32 (emission timer accumulator)
//   0x38: f32 (emitter lifetime, 0 = infinite)
//   0x3C: f32 (emitter age)
//   0x40: s32 (max simultaneous particles)
//   0x44: s32 (active particle count for this emitter)
//   0x48: u32 (total particles emitted)
//   0x4C: u32 (emitter ID)
//   0x50: f32 (global scale multiplier)
//   0x54: f32 (speed multiplier)
//   0x58: u8 (emitter shape type)
//   0x5C: EmitterShape* (emission volume)
//   0x60: Animator* (property animator)
//   0x64: ChildEmitter* (child emitter trigger)
//   0x68-0x1A9: particle array, per-emitter state
//
// Key virtuals:
//   vtable[0]  ~Emitter()       — destructor
//   vtable[1]  calc()           — per-frame update
//   vtable[2]  draw()           — render particles
//   vtable[3]  emit()           — emit particles
//   vtable[4]  onParticleDie()  — callback when particle expires
//
// Key addresses:
//   0x80541010 — Constructor: memset, set vtable, link into manager
//   0x805415a4 — Destructor: unlink, free particles, conditional free
//   0x805416c0 — Init from resource
//   0x805417e8 — Set emitter position
//   0x80541a28 — Set emitter rotation
//   0x80541bc4 — Set emission rate
//   0x80541c1c — Set max particles
//   0x80541db4 — Get emitted particle count
//   0x80542074 — Calc: advance timer, emit, update particles
//   0x80542330 — Draw: submit billboards for all active particles
// ============================================================================

class Emitter {
public:
    enum EmitterFlag {
        FLAG_ALIVE    = BIT(0),  // emitter is active
        FLAG_PAUSED   = BIT(1),  // emission paused
        FLAG_LOOP     = BIT(2),  // loop emission
        FLAG_ONE_SHOT = BIT(3),  // fire once then die
        FLAG_FOLLOW   = BIT(4),  // follow parent transform
        FLAG_SORTED   = BIT(5),  // depth-sorted rendering
        FLAG_GLOBAL   = BIT(6),  // uses global coordinates
    };

    // --- Virtual methods (vtable) ---
    // @addr 0x805415a4 — Destructor
    virtual ~Emitter() {}

    // @addr 0x80542074 — Per-frame update: advance timer, emit particles
    virtual void calc() {}

    // @addr 0x80542330 — Emit particles and submit draw data
    virtual void draw() {}

    // @addr 0x80542694 — Emit N particles from template
    virtual void emit(u32 count, u32 flags) {}

    // @addr 0x805426dc — Callback when a particle from this emitter dies
    virtual void onParticleDie(u32 particleIdx, u32 flags) {}

    // --- Non-virtual interface ---
    // @addr 0x80541010 — Constructor: zero, set vtable, init
    void* create();

    // @addr 0x805416c0 — Initialize from a loaded resource
    void initFromResource(Resource* resource);

    // @addr 0x805417e8 — Set world position
    void setPosition(f32 x, f32 y, f32 z);

    // @addr 0x80541a28 — Set world rotation (degrees)
    void setRotation(f32 rx, f32 ry, f32 rz);

    // @addr 0x80541bc4 — Set emission rate (particles/second)
    void setEmissionRate(f32 rate);

    // @addr 0x80541c1c — Set max simultaneous particles
    void setMaxParticles(u32 max);

    // @addr 0x80541db4 — Get total particles emitted so far
    u32 getEmittedCount() const;

    // @addr 0x8054272c — Reset emitter (clear all particles, reset age)
    void resetEmitter();

    // @addr 0x805427c0 — Configure emission shape
    void setEmitterShape(u32 shapeType, u32 shapeData);

    // @addr 0x80542874 — Configure animator
    void setAnimator(s32 animType);

    // @addr 0x805428ac — Configure child emitter trigger
    void setChildEmitter(u32 childResId);

    // @addr 0x805429a0 — Get emitter state flags
    u32 getFlags() const;

    // @addr 0x80542a98 — Get active particle count
    u32 getActiveParticleCount() const;

    // @addr 0x80542ef0 — Force-emit a single particle
    void emitOne();

    // @addr 0x80542e20 — Configure emission cone/angle
    void setEmissionCone(f32 halfAngle, f32 minSpeed, f32 maxSpeed);

    // @addr 0x80542e9c — Set particle lifetime range
    void setLifetimeRange(f32 minLife, f32 maxLife);

    // @addr 0x80543340 — Set emitter name (debug)
    void setName(const s8* name);

    // @addr 0x80543578 — Set emitter user data
    void setUserData(u32 data1, s32 data2, s32 data3, s32 data4);

    // @addr 0x80543820 — Link emitter to manager list
    void linkToList(u32 listId, u32 position);

    // @addr 0x80543990 — Unlink emitter from manager list
    void unlinkFromList();

    // @addr 0x80543a0c — Find particle by index
    Particle* getParticle(s32 index);

    // @addr 0x80543b3c — Kill all particles
    void killAllParticles();

    // @addr 0x80543c50 — Check if emitter is alive
    bool isAlive() const;

    // @addr 0x80543d68 — Update emission timer
    void updateEmissionTimer(f32 dt);

public:  // was protected — opened for stub inter-class access
    // --- Member data ---
    u32*          m_vtable;         // 0x00
    u32           m_flags;          // 0x04
    Resource*     m_resource;       // 0x08
    ParticleMgr*  m_manager;        // 0x0C
    Emitter*      m_next;           // 0x10
    Emitter*      m_prev;           // 0x14
    f32           m_posX;           // 0x18
    f32           m_posY;           // 0x1C
    f32           m_posZ;           // 0x20
    f32           m_rotX;           // 0x24
    f32           m_rotY;           // 0x28
    f32           m_rotZ;           // 0x2C
    f32           m_emissionRate;   // 0x30
    f32           m_emissionTimer;  // 0x34
    f32           m_lifetime;       // 0x38
    f32           m_age;            // 0x3C
    s32           m_maxParticles;   // 0x40
    s32           m_activeCount;    // 0x44
    u32           m_totalEmitted;   // 0x48
    u32           m_emitterId;      // 0x4C
    f32           m_globalScale;    // 0x50
    f32           m_speedMul;       // 0x54
    u8            m_shapeType;      // 0x58
    u8            m_pad59[3];       // 0x59
    EmitterShape* m_shape;          // 0x5C
    Animator*     m_animator;       // 0x60
    ChildEmitter* m_childEmitter;   // 0x64
    void*         m_particleArray;  // 0x68
    u8            m_pad6C[0x13E];   // 0x6C - 0x1A9
};

// ============================================================================
// Particle — Individual particle instance
//
// Represents a single particle in flight. Contains all per-particle state:
// position, velocity, acceleration, color, scale, rotation, lifetime.
// Managed by an Emitter's particle pool.
//
// Layout (~0x80 bytes):
//   0x00: u32 (flags: alive, fading, etc.)
//   0x04: f32 (position X)
//   0x08: f32 (position Y)
//   0x0C: f32 (position Z)
//   0x10: f32 (velocity X)
//   0x14: f32 (velocity Y)
//   0x18: f32 (velocity Z)
//   0x1C: f32 (acceleration X)
//   0x20: f32 (acceleration Y)
//   0x24: f32 (acceleration Z)
//   0x28: u8 (color R)
//   0x29: u8 (color G)
//   0x2A: u8 (color B)
//   0x2B: u8 (color A)
//   0x2C: f32 (scale X / uniform scale)
//   0x30: f32 (scale Y)
//   0x34: f32 (rotation)
//   0x38: f32 (lifetime in seconds)
//   0x3C: f32 (age / elapsed time)
//   0x40: f32 (initial speed)
//   0x44: f32 (current speed)
//   0x48: u16 (texture frame index)
//   0x4A: u16 (animation timer ticks)
//   0x4C: u32 (parent emitter ID)
//   0x50: s32 (index in pool)
//   0x54-0x7F: reserved / per-effect data
//
// Key addresses:
//   0x805440c0 — Initialize particle from emitter template
//   0x80544428 — Reset particle to default state
//   0x80544530 — Update particle physics (position, velocity, age)
//   0x80544920 — Kill particle (mark dead, return to pool)
//   0x80544d7c — Apply gravity/acceleration
//   0x805450b8 — Update color (fade)
//   0x80545364 — Update scale
//   0x80545dc0 — Update rotation
//   0x80546508 — Bounce off plane
//   0x80546a88 — Check if particle is alive
// ============================================================================

class Particle {
    friend class ChildEmitter;  // allow ChildEmitter to access protected fields
public:
    enum ParticleFlag {
        FLAG_ALIVE    = BIT(0),  // particle is active
        FLAG_FADING   = BIT(1),  // currently fading out
        FLAG_BOUNCED  = BIT(2),  // has bounced
        FLAG_NO_GRAV  = BIT(3),  // gravity disabled
        FLAG_SORTED   = BIT(4),  // depth-sorted
    };

    // @addr 0x805440c0 — Initialize particle from emitter template
    void init(const Emitter* emitter);

    // @addr 0x80544428 — Reset particle to default state
    void reset();

    // @addr 0x80544530 — Update physics: pos += vel*dt, vel += accel*dt
    void updatePhysics(f32 dt);

    // @addr 0x80544920 — Kill particle: mark dead, unlink
    void kill();

    // @addr 0x80544d7c — Apply gravity
    void applyGravity(f32 gravity, f32 dt);

    // @addr 0x805450b8 — Fade color over lifetime
    void updateColor(f32 lifeRatio);

    // @addr 0x80545364 — Interpolate scale over lifetime
    void updateScale(f32 lifeRatio);

    // @addr 0x80545dc0 — Interpolate rotation over lifetime
    void updateRotation(f32 dt);

    // @addr 0x8054573c — Set particle position
    void setPosition(f32 x, f32 y, f32 z);

    // @addr 0x80546508 — Bounce off a horizontal plane at given Y
    void bounceOffPlane(f32 planeY, f32 restitution);

    // @addr 0x805466a4 — Get current speed
    f32 getSpeed() const;

    // @addr 0x80546b18 — Get remaining life ratio (0.0 - 1.0)
    f32 getLifeRatio() const;

    // @addr 0x80546ff4 — Get distance from emitter origin
    f32 getDistanceFromOrigin() const;

    // @addr 0x80546a5c — Check if alive
    bool isAlive() const { return (m_flags & FLAG_ALIVE) != 0; }

    // @addr 0x80546a88 — Check if should be culled
    bool shouldCull() const;

public:  // was protected — opened for stub inter-class access
    // --- Member data ---
    u32  m_flags;              // 0x00
    f32  m_posX;               // 0x04
    f32  m_posY;               // 0x08
    f32  m_posZ;               // 0x0C
    f32  m_velX;               // 0x10
    f32  m_velY;               // 0x14
    f32  m_velZ;               // 0x18
    f32  m_accX;               // 0x1C
    f32  m_accY;               // 0x20
    f32  m_accZ;               // 0x24
    u8   m_colorR;             // 0x28
    u8   m_colorG;             // 0x29
    u8   m_colorB;             // 0x2A
    u8   m_colorA;             // 0x2B
    f32  m_scaleX;             // 0x2C
    f32  m_scaleY;             // 0x30
    f32  m_rotation;           // 0x34
    f32  m_lifetime;           // 0x38
    f32  m_age;                // 0x3C
    f32  m_initSpeed;          // 0x40
    f32  m_curSpeed;           // 0x44
    u16  m_texFrame;           // 0x48
    u16  m_animTimer;          // 0x4A
    u32  m_parentEmitterId;    // 0x4C
    s32  m_poolIndex;          // 0x50
    u8   m_pad54[0x2C];        // 0x54 - 0x7F
};

// ============================================================================
// Resource — Loaded particle resource handle
//
// Wraps compiled .ptcl particle template data. Manages reference counting
// and provides access to emission parameters, animation curves, and
// texture references.
//
// Layout (~0x1C bytes):
//   0x00: u32 (resource ID / hash)
//   0x04: void* (raw data pointer from archive)
//   0x08: u32 (data size in bytes)
//   0x0C: s16 (reference count)
//   0x0E: u16 (flags: loaded, error, etc.)
//   0x10: u32 (emitter count in this resource)
//   0x14: void* (emitter descriptor array)
//   0x18: u32 (checksum)
//
// Key addresses:
//   0x80545f44 — Load resource by ID
//   0x80546000 — Load resource by name
//   0x805460bc — Release resource (decrement refcount)
//   0x8054631c — Get emitter descriptor by index
//   0x805464b0 — Get emission parameters
//   0x80546704 — Get texture reference
//   0x805468b8 — Get animation data
// ============================================================================

class Resource {
public:
    enum ResourceFlag {
        FLAG_LOADED = BIT(0),  // data is loaded and valid
        FLAG_ERROR  = BIT(1),  // load failed
        FLAG_LOCKED = BIT(2),  // locked in memory
    };

    // @addr 0x80545f44 — Load resource by ID from archive
    static Resource* loadById(u32 resourceId);

    // @addr 0x80546000 — Load resource by name from archive
    static Resource* loadByName(const s8* name);

    // @addr 0x805460bc — Release resource (decrement refcount, free if 0)
    void release();

    // @addr 0x805461ec — Increment reference count
    void addRef();

    // @addr 0x8054631c — Get emitter descriptor at index
    void* getEmitterDescriptor(u32 index) const;

    // @addr 0x805464b0 — Get emission parameters (rate, speed, lifetime)
    void getEmissionParams(f32* rate, f32* speed, f32* lifetime) const;

    // @addr 0x80546508 — Get particle initial color
    void getInitialColor(u8* r, u8* g, u8* b, u8* a) const;

    // @addr 0x80546520 — Get particle initial scale
    void getInitialScale(f32* scaleX, f32* scaleY) const;

    // @addr 0x80546538 — Get particle initial velocity range
    void getVelocityRange(f32* minSpeed, f32* maxSpeed) const;

    // @addr 0x805465cc — Get gravity value
    f32 getGravity() const;

    // @addr 0x80546648 — Get max particles for this resource
    u32 getMaxParticles() const;

    // @addr 0x80546704 — Get texture ID
    u32 getTextureId() const;

    // @addr 0x8054675c — Get texture pointer
    void* getTexturePtr() const;

    // @addr 0x80546784 — Get animation curve count
    u32 getAnimCurveCount() const;

    // @addr 0x805468b8 — Get animation curve data
    void getAnimCurve(u32 index, void* outData) const;

    // @addr 0x805469b4 — Get emitter count
    u32 getEmitterCount() const;

    // @addr 0x80546b58 — Get raw data pointer
    void* getRawData() const;

    // @addr 0x80546c1c — Validate resource data
    bool validate() const;

    bool isLoaded() const { return (m_flags & FLAG_LOADED) != 0; }
    u16 getRefCount() const { return m_refCount; }

public:  // was protected — opened for stub inter-class access
    Resource() { std::memset(this, 0, sizeof(*this)); }

    // --- Member data ---
    u32  m_resourceId;     // 0x00
    void* m_data;          // 0x04
    u32  m_dataSize;       // 0x08
    s16  m_refCount;       // 0x0C
    u16  m_flags;          // 0x0E
    u32  m_emitterCount;   // 0x10
    void* m_emitterDescs;  // 0x14
    u32  m_checksum;       // 0x18
};

// ============================================================================
// EmitterShape — Emission volume shape
//
// Defines the volume from which particles are emitted. Supports multiple
// primitive shapes with configurable dimensions.
//
// Layout (~0x24 bytes):
//   0x00: u8 (shape type: 0=point, 1=line, 2=circle, 3=sphere, 4=box)
//   0x01: u8 (emission axis: 0=X, 1=Y, 2=Z, 3=radial)
//   0x02: u8 (emission mode: 0=volume, 1=surface, 2=edge)
//   0x04: f32 (dimension A: radius for circle/sphere, width for box)
//   0x08: f32 (dimension B: height for box, length for line)
//   0x0C: f32 (dimension C: depth for box)
//   0x10: f32 (inner radius for ring/hollow shapes)
//   0x14: f32 (angle min for cone/arc)
//   0x18: f32 (angle max for cone/arc)
//   0x1C: f32 (spread factor)
//   0x20: u32 (flags)
//
// Key addresses:
//   0x8054711c — Generate random point in shape
//   0x80547688 — Compute shape volume for rate scaling
//   0x805476c8 — Get shape type
//   0x80547a48 — Set shape dimensions
// ============================================================================

class EmitterShape {
public:
    enum ShapeType {
        SHAPE_POINT    = 0,
        SHAPE_LINE     = 1,
        SHAPE_CIRCLE   = 2,
        SHAPE_SPHERE   = 3,
        SHAPE_BOX      = 4,
        SHAPE_CYLINDER = 5,
        SHAPE_CONE     = 6,
    };

    enum EmissionAxis {
        AXIS_X      = 0,
        AXIS_Y      = 1,
        AXIS_Z      = 2,
        AXIS_RADIAL = 3,
    };

    enum EmissionMode {
        MODE_VOLUME  = 0,
        MODE_SURFACE = 1,
        MODE_EDGE    = 2,
    };

    // @addr 0x8054711c — Generate random position within this shape
    void samplePoint(f32* outX, f32* outY, f32* outZ) const;

    // @addr 0x80547688 — Compute volume/area for rate adjustment
    f32 computeVolume() const;

    // @addr 0x805476c8 — Get shape type
    ShapeType getShapeType() const;

    // @addr 0x80547a48 — Set shape type and axis
    void configure(ShapeType type, EmissionAxis axis, EmissionMode mode);

    // @addr 0x80547bfc — Set dimensions for sphere/circle (radius)
    void setRadius(f32 radius, f32 innerRadius = 0.0f);

    // @addr 0x80547d60 — Set dimensions for box (width, height, depth)
    void setBoxDimensions(f32 w, f32 h, f32 d);

    // @addr 0x80547de4 — Set dimensions for line (start, end)
    void setLineEndpoints(f32 x1, f32 y1, f32 z1,
                          f32 x2, f32 y2, f32 z2);

    // @addr 0x80547fcc — Set angle range for cone/arc
    void setAngleRange(f32 minAngle, f32 maxAngle);

    // @addr 0x805480b0 — Set spread factor
    void setSpread(f32 spread);

    // @addr 0x805481a4 — Validate shape parameters
    bool validate() const;

public:  // was protected — opened for stub inter-class access
    EmitterShape() { std::memset(this, 0, sizeof(*this)); }

    // --- Member data ---
    u8   m_shapeType;    // 0x00
    u8   m_axis;         // 0x01
    u8   m_mode;         // 0x02
    u8   m_pad03;        // 0x03
    f32  m_dimA;         // 0x04
    f32  m_dimB;         // 0x08
    f32  m_dimC;         // 0x0C
    f32  m_innerRadius;  // 0x10
    f32  m_angleMin;     // 0x14
    f32  m_angleMax;     // 0x18
    f32  m_spread;       // 0x1C
    u32  m_shapeFlags;   // 0x20
};

// ============================================================================
// Animator — Particle property animator
//
// Interpolates particle properties (color, scale, rotation, velocity)
// over the particle's lifetime using keyframe-based curves.
//
// Layout (~0x50 bytes):
//   0x00: u32 (animator type flags: color, scale, rotation, etc.)
//   0x04: u8[4] (start color RGBA)
//   0x08: u8[4] (end color RGBA)
//   0x0C: f32 (start scale X)
//   0x10: f32 (start scale Y)
//   0x14: f32 (end scale X)
//   0x18: f32 (end scale Y)
//   0x1C: f32 (start rotation)
//   0x20: f32 (end rotation)
//   0x24: f32 (start velocity multiplier)
//   0x28: f32 (end velocity multiplier)
//   0x2C: u8 (interpolation type)
//   0x30: u32 (keyframe count)
//   0x34: void* (keyframe data array)
//   0x38: f32 (texture animation speed)
//   0x3C: u16 (texture frame count)
//   0x3E: u16 (texture loop mode)
//   0x40: f32 (fade in duration)
//   0x44: f32 (fade out start time)
//   0x48: u32 (reserved flags)
//   0x4C: u32 (reserved)
//
// Key addresses:
//   0x8054822c — Animate color at given life ratio
//   0x80548540 — Animate scale at given life ratio
//   0x80548954 — Animate rotation at given life ratio
//   0x80548c5c — Animate velocity at given life ratio
//   0x80548d88 — Animate texture frame
//   0x805491d0 — Apply all animations to a particle
// ============================================================================

class Animator {
public:
    enum AnimFlag {
        ANIM_COLOR    = BIT(0),
        ANIM_SCALE    = BIT(1),
        ANIM_ROTATION = BIT(2),
        ANIM_VELOCITY = BIT(3),
        ANIM_TEXTURE  = BIT(4),
    };

    enum InterpType {
        INTERP_LINEAR     = 0,
        INTERP_EASE_IN    = 1,
        INTERP_EASE_OUT   = 2,
        INTERP_EASE_INOUT = 3,
    };

    enum TexLoopMode {
        TEX_LOOP_ONCE     = 0,
        TEX_LOOP_LOOP     = 1,
        TEX_LOOP_PINGPONG = 2,
    };

    // @addr 0x805491d0 — Apply all animations to a particle
    void apply(Particle* particle, f32 lifeRatio) const;

    // @addr 0x8054822c — Get interpolated color at life ratio
    void getColorAt(f32 ratio, u8* r, u8* g, u8* b, u8* a) const;

    // @addr 0x80548540 — Get interpolated scale at life ratio
    void getScaleAt(f32 ratio, f32* scaleX, f32* scaleY) const;

    // @addr 0x80548954 — Get interpolated rotation at life ratio
    f32 getRotationAt(f32 ratio) const;

    // @addr 0x80548c5c — Get interpolated velocity multiplier at life ratio
    f32 getVelocityAt(f32 ratio) const;

    // @addr 0x80548d88 — Get texture frame at life ratio
    u16 getTextureFrameAt(f32 ratio) const;

    // @addr 0x80549234 — Set color keyframes
    void setColorKeys(u8 startR, u8 startG, u8 startB, u8 startA,
                      u8 endR, u8 endG, u8 endB, u8 endA);

    // @addr 0x80549298 — Set scale keyframes
    void setScaleKeys(f32 startSX, f32 startSY,
                      f32 endSX, f32 endSY);

    // @addr 0x805494dc — Set rotation keyframes
    void setRotationKeys(f32 startRot, f32 endRot);

    // @addr 0x80549654 — Set velocity keyframes
    void setVelocityKeys(f32 startVel, f32 endVel);

    // @addr 0x8054969c — Set texture animation
    void setTextureAnim(u16 frameCount, u16 loopMode, f32 speed);

    // @addr 0x805497d8 — Set interpolation type
    void setInterpolation(InterpType type);

    // @addr 0x80549938 — Set fade in/out
    void setFade(f32 fadeInDur, f32 fadeOutStart);

    // @addr 0x80549970 — Load animation data from resource
    u32 loadFromResource(void* resourceData);

    // @addr 0x80549bbc — Validate animator configuration
    bool validate() const;

public:  // was protected — opened for stub inter-class access
    Animator() { std::memset(this, 0, sizeof(*this)); }

    // --- Member data ---
    u32  m_animFlags;       // 0x00
    u8   m_startColorR;     // 0x04
    u8   m_startColorG;     // 0x05
    u8   m_startColorB;     // 0x06
    u8   m_startColorA;     // 0x07
    u8   m_endColorR;       // 0x08
    u8   m_endColorG;       // 0x09
    u8   m_endColorB;       // 0x0A
    u8   m_endColorA;       // 0x0B
    f32  m_startScaleX;     // 0x0C
    f32  m_startScaleY;     // 0x10
    f32  m_endScaleX;       // 0x14
    f32  m_endScaleY;       // 0x18
    f32  m_startRotation;   // 0x1C
    f32  m_endRotation;     // 0x20
    f32  m_startVelocity;   // 0x24
    f32  m_endVelocity;     // 0x28
    u8   m_interpType;      // 0x2C
    u8   m_pad2D[3];        // 0x2D
    u32  m_keyframeCount;   // 0x30
    void* m_keyframeData;   // 0x34
    f32  m_texAnimSpeed;    // 0x38
    u16  m_texFrameCount;   // 0x3C
    u16  m_texLoopMode;     // 0x3E
    f32  m_fadeInDuration;  // 0x40
    f32  m_fadeOutStart;    // 0x44
    u32  m_reserved1;       // 0x48
    u32  m_reserved2;       // 0x4C
};

// ============================================================================
// Billboard — Renderable particle quad
//
// A single billboard quad for GPU submission. Contains position, size,
// color, texture coordinates, and sorting data.
//
// Layout (~0x28 bytes):
//   0x00: f32 (position X)
//   0x04: f32 (position Y)
//   0x08: f32 (position Z)
//   0x0C: f32 (size / half-width)
//   0x10: f32 (aspect ratio / half-height)
//   0x14: u8 (color R)
//   0x15: u8 (color G)
//   0x16: u8 (color B)
//   0x17: u8 (color A)
//   0x18: f32 (rotation in radians)
//   0x1C: u16 (texture frame index)
//   0x1E: u16 (flags: visible, sorted, etc.)
//   0x20: f32 (depth for sorting)
//   0x24: u32 (sort key / draw order)
//
// Key addresses:
//   0x80549ccc — Initialize billboard from particle
//   0x80549e64 — Set billboard transform
//   0x80549f24 — Set billboard color
//   0x80549f64 — Set billboard texture
//   0x80549fa4 — Sort billboards by depth
//   0x8054a08c — Submit billboard to GX
// ============================================================================

class Billboard {
public:
    enum BillboardFlag {
        FLAG_VISIBLE   = BIT(0),
        FLAG_SORTED    = BIT(1),
        FLAG_CAM_FACING = BIT(2),
    };

    // @addr 0x80549ccc — Initialize from particle data
    void initFromParticle(const Particle* particle);

    // @addr 0x80549e64 — Set transform (position, size, rotation)
    void setTransform(f32 x, f32 y, f32 z,
                      f32 halfW, f32 halfH, f32 rot);

    // @addr 0x80549f24 — Set color
    void setColor(u8 r, u8 g, u8 b, u8 a);

    // @addr 0x80549f64 — Set texture frame
    void setTextureFrame(u16 frame);

    // @addr 0x80549fa4 — Compute sort key from camera
    void computeSortKey(const f32 cameraPos[3]);

    // @addr 0x8054a08c — Submit vertices to GX display list
    void submitToGX() const;

    // @addr 0x8054a110 — Get UV coordinates for texture frame
    void getUVCoords(u16* u0, u16* v0, u16* u1, u16* v1) const;

    // @addr 0x8054a1f8 — Compare sort keys (for qsort)
    static s32 compareSort(const void* a, const void* b);

    // @addr 0x8054a264 — Compare sort keys (alternative)
    static s32 compareSortAlt(const void* a, const void* b);

    bool isVisible() const { return (m_flags & FLAG_VISIBLE) != 0; }

public:  // was protected — opened for stub inter-class access
    Billboard() { std::memset(this, 0, sizeof(*this)); }

    // --- Member data ---
    f32  m_posX;       // 0x00
    f32  m_posY;       // 0x04
    f32  m_posZ;       // 0x08
    f32  m_halfWidth;  // 0x0C
    f32  m_halfHeight; // 0x10
    u8   m_colorR;     // 0x14
    u8   m_colorG;     // 0x15
    u8   m_colorB;     // 0x16
    u8   m_colorA;     // 0x17
    f32  m_rotation;   // 0x18
    u16  m_texFrame;   // 0x1C
    u16  m_flags;      // 0x1E
    f32  m_depth;      // 0x20
    u32  m_sortKey;    // 0x24
};

// ============================================================================
// ChildEmitter — Sub-emitter trigger on particle events
//
// Specifies a secondary emitter to be created when a particle from the
// parent emitter reaches a certain event (death, bounce, age threshold).
//
// Layout (~0x2C bytes):
//   0x00: u32 (trigger event type)
//   0x04: u32 (child resource ID)
//   0x08: f32 (trigger threshold: age ratio for AGE event)
//   0x0C: f32 (position offset X)
//   0x10: f32 (position offset Y)
//   0x14: f32 (position offset Z)
//   0x18: f32 (velocity inheritance: 0.0 - 1.0)
//   0x1C: f32 (scale multiplier for child)
//   0x20: u32 (max child emitters allowed)
//   0x24: u32 (active child emitter count)
//   0x28: u32 (flags: inherit color, inherit rotation, etc.)
//
// Key addresses:
//   0x8054a4ec — Configure child emitter
//   0x8054a58c — Check if trigger condition met
//   0x8054a764 — Create child emitter at particle position
//   0x8054a8ac — Load child emitter config from resource data
// ============================================================================

class ChildEmitter {
public:
    enum TriggerEvent {
        TRIGGER_DEATH   = 0,
        TRIGGER_BOUNCE  = 1,
        TRIGGER_AGE     = 2,
        TRIGGER_COLLIDE = 3,
    };

    enum ChildFlag {
        CHILD_INHERIT_COLOR    = BIT(0),
        CHILD_INHERIT_ROTATION = BIT(1),
        CHILD_INHERIT_VELOCITY = BIT(2),
        CHILD_INHERIT_SCALE    = BIT(3),
        CHILD_FOLLOW_PARENT    = BIT(4),
    };

    // @addr 0x8054a8ac — Load configuration from resource data
    void loadFromData(const u8* data);

    // @addr 0x8054a4ec — Configure trigger
    void configure(TriggerEvent event, u32 childResourceId,
                   f32 threshold, f32 velInherit, f32 scaleMul);

    // @addr 0x8054a58c — Check if trigger condition is met for a particle
    bool shouldTrigger(const Particle* particle) const;

    // @addr 0x8054a764 — Create child emitter at particle's current position
    Emitter* createChild(const Particle* particle, ParticleMgr* mgr);

    // @addr 0x8054a930 — Set position offset
    void setPositionOffset(f32 ox, f32 oy, f32 oz);

    // @addr 0x8054aa88 — Set max child emitters
    void setMaxChildren(u32 max);

    // @addr 0x8054ab8c — Update: manage active child emitter count
    void update();

    // @addr 0x8054ab7c — Get active child count
    u32 getActiveChildCount() const;

    // @addr 0x8054ac20 — Kill all child emitters
    void killAllChildren();

    // @addr 0x8054ac60 — Reset
    void reset();

public:  // was protected — opened for stub inter-class access
    ChildEmitter() { std::memset(this, 0, sizeof(*this)); }

    // --- Member data ---
    u32  m_triggerEvent;     // 0x00
    u32  m_childResourceId;  // 0x04
    f32  m_triggerThreshold; // 0x08
    f32  m_offsetX;          // 0x0C
    f32  m_offsetY;          // 0x10
    f32  m_offsetZ;          // 0x14
    f32  m_velInheritance;   // 0x18
    f32  m_scaleMultiplier;  // 0x1C
    u32  m_maxChildren;      // 0x20
    u32  m_activeChildren;   // 0x24
    u32  m_childFlags;       // 0x28
};

// ============================================================================
// Free-function namespaces for remaining particle subsystem functions
// ============================================================================

// --- Pool management: 0x8054b084 - 0x8054bc90 ---
namespace Pool {
// @addr 0x8054b084
void init(u32 maxParticles);
// @addr 0x8054b0c4
Particle* allocate();
// @addr 0x8054b358
void free(Particle* particle);
// @addr 0x8054b41c
u32 getFreeCount();
// @addr 0x8054b550
void compact();
// @addr 0x8054b618
bool resize(u32 newMax);
// @addr 0x8054b768
bool validate();
// @addr 0x8054b8c4
void getStats(u32* total, u32* used, u32* freeCount);
// @addr 0x8054bb70
void clearAll();
// @addr 0x8054bc90
void setAllocCallback(void (*callback)(Particle*, void*), void* userData);
} // namespace Pool

// --- Global state: 0x8054c460 - 0x8054cda0 ---
namespace Global {
// @addr 0x8054c460
void calc();
// @addr 0x8054c5b4
void draw();
// @addr 0x8054c5d4
u32 getParticleCount();
// @addr 0x8054c630
void setPaused(bool paused);
// @addr 0x8054c638
void setParameter(u32 paramId, u32 value, s32 priority);
// @addr 0x8054c688
void setParameterF(u32 paramId, u32 value, s32 priority);
// @addr 0x8054c6d8
void setParameterV(u32 paramId, u32 value, s32 priority);
// @addr 0x8054c728
void setParameterC(u32 paramId, u32 value, s32 priority);
// @addr 0x8054c770
u8 getParameter(u32 paramId, u32 index, s32 priority);
// @addr 0x8054c7f0
bool isInitialized();
// @addr 0x8054c874
u32 getSystemState();
// @addr 0x8054c958
s32 setOption(s32 optionId, s32 value);
// @addr 0x8054ca18
void resetAll();
// @addr 0x8054cb64
void destroyAll();
} // namespace Global

// --- Texture/resource management: 0x8054cc58 - 0x8054d3ec ---
namespace TexMgr {
// @addr 0x8054cc58
void registerTexture(u32 texId, s32 gxTexObj);
// @addr 0x8054cd34
void unregisterTexture(u32 texId, u32 texFlags);
// @addr 0x8054cda0
void getRegisteredCount();
// @addr 0x8054d014
void loadBundle(u32 bundleId);
// @addr 0x8054d080
void unloadBundle();
// @addr 0x8054d1dc
s32 findResource(const s8* name);
// @addr 0x8054d3ec
void getResourceData();
} // namespace TexMgr

// --- Emitter lifecycle: 0x8054d614 - 0x8054e8dc ---
namespace EmitterUtil {
// @addr 0x8054d614
void* createEmitter(s32 flags);
// @addr 0x8054da98
void configureFromData(s32* data);
// @addr 0x8054db78
void startEmitter(s32 emitterId);
// @addr 0x8054dbc0
void stopEmitter(s32 emitterId);
// @addr 0x8054de4c
void updateEmitter(s32* emitterState);
// @addr 0x8054e198
void destroyEmitter(s32 emitterId);
// @addr 0x8054e3f4
void cloneEmitter(s32* srcState, u32* dstState);
// @addr 0x8054e6ec
void serializeEmitter(u32 emitterId, u32* outBuffer);
// @addr 0x8054e8dc
void getEmitterById();
// @addr 0x8054ea04
void findEmitterByName();
} // namespace EmitterUtil

// --- Math/utilities: 0x8054ea44 - 0x8054ef44 ---
namespace MathUtil {
// @addr 0x8054ea44
f32 randomRange(f32 min, f32 max);
// @addr 0x8054eb8c
void randomDirection(f32* dx, f32* dy, f32* dz);
// @addr 0x8054ecf8
f32 interpolate(f32 a, f32 b, f32 t);
// @addr 0x8054ed28
void interpolateColor(u8 r0, u8 g0, u8 b0, u8 a0,
                      u8 r1, u8 g1, u8 b1, u8 a1,
                      f32 t, u8* r, u8* g, u8* b, u8* a);
// @addr 0x8054ed58
void interpolateScale(f32 sx0, f32 sy0, f32 sx1, f32 sy1,
                      f32 t, f32* sx, f32* sy);
// @addr 0x8054ed8c
f32 lerp(f32 a, f32 b, f32 t);
// @addr 0x8054eea4
void blendColor(u8 r0, u8 g0, u8 b0, u8 a0,
                u8 r1, u8 g1, u8 b1, u8 a1,
                u8* r, u8* g, u8* b, u8* a);
// @addr 0x8054eedc
u8 alphaBlend(u8 srcA, u8 dstA, u8 srcColor, u8 dstColor);
// @addr 0x8054ef0c
void applyFadeIn(u32 baseAlpha, u32* outAlpha);
// @addr 0x8054ef44
void applyFadeOut(u32 baseColor, u32* outColor);
} // namespace MathUtil

// --- Events: 0x8054f088 - 0x8054f380 ---
namespace Events {
typedef void (*ParticleDeathCallback)(Particle*, void*);
typedef void (*EmitterCompleteCallback)(Emitter*, void*);
// @addr 0x8054f088
void registerDeathCallback(s32 emitterId);
// @addr 0x8054f0e8
void registerCompleteCallback(u32* callbackData);
// @addr 0x8054f1ec
void fireDeathEvent();
// @addr 0x8054f380
void fireCompleteEvent();
} // namespace Events

// --- Advanced config: 0x8054f51c - 0x80550e14 ---
namespace Advanced {
// @addr 0x8054f51c
void setRibbonMode(s8* configData);
// @addr 0x80550374
void configureBurst();
// @addr 0x805507b4
void setAnimatedEmission();
// @addr 0x805508fc
void setAttractor(s32 emitterId);
// @addr 0x80550b10
void setWindForce(u32 fieldId, u32 forceType);
// @addr 0x80550bc8
void setCollisionPlane(u32 planeId, u32 planeFlags);
// @addr 0x80550c80
void clearAttractors();
// @addr 0x80550ce4
void clearCollisionPlanes();
// @addr 0x80550d38
void applyAttractor();
// @addr 0x80550e14
void checkCollisions();
} // namespace Advanced

// --- Rendering pipeline: 0x80551090 - 0x8055240c ---
namespace Render {
// @addr 0x80551090
void initPipeline();
// @addr 0x80551310
void setVertexFormat(u32 format);
// @addr 0x805513e8
void setBlendMode(s32 srcFactor, s32 dstFactor, u8 logicOp);
// @addr 0x80551474
void setZMode(u32 enable, u32 function, u32 update);
// @addr 0x80551508
void setTexture(s32 emitterId, u32 texObj);
// @addr 0x805515f4
u32 beginDraw(s32 emitterId, s32 sortMode, s32 flags);
// @addr 0x8055178c
u32 submitQuad(s32 emitterId, s32 vertexCount);
// @addr 0x80551954
u32 endDraw(s32 emitterId, s32 vertexCount);
// @addr 0x80551b1c
u32 flush(s32 emitterId, s32 vertexCount);
// @addr 0x80551be8
u32 setRenderState(s32 emitterId, s32 stateFlags);
// @addr 0x80551cec
void setAlphaTest(s32 emitterId, u32 func, u8 ref, u8 op);
// @addr 0x80551d48
void setDepthTest(s32 emitterId, s32 enable, u8 func);
// @addr 0x80551e08
void setColorWriteMask(s32 emitterId, u32 enableR, u8 enableG, u8 enableB, u8 enableA);
// @addr 0x80551e64
void disableColorWrite(s32 emitterId, s32 enable, u8 op);
// @addr 0x80551f44
u8 getAlphaRef(s32 param);
// @addr 0x80551fd8
u8 getBlendFactor(s32 param);
// @addr 0x8055208c
u8 getDepthFunc(s32 param);
// @addr 0x80552120
u8 getVertexFormat(s32 param);
// @addr 0x805521d4
u8 getZMode(s32 param);
// @addr 0x80552290
bool isRenderingActive(s32 param);
// @addr 0x80552330
u32 getDrawCallCount(s32 param);
// @addr 0x8055240c
u32 getVertexCount(s32 param, u32 drawId, s32 flags);
} // namespace Render

// --- Memory management: 0x80552954 - 0x80553d90 ---
namespace MemUtil {
// @addr 0x80552954
s32 allocParticleData(s32 count, s32 size);
// @addr 0x80552994
void freeParticleData(u32 ptr);
// @addr 0x80552a64
void reallocParticleData(s32 oldCount, s32 newCount);
// @addr 0x80552dc8
void allocEmitter(s32 emitterSize);
// @addr 0x8055336c
void allocEmitterEx(s32 emitterSize, s32 initParam1, u32 initParam2);
// @addr 0x805535d0
void freeEmitter(u32 emitterPtr);
// @addr 0x80553660
void resizeEmitterArray(s32 emitterPtr, u32 newSize);
// @addr 0x80553a9c
void allocAnimator(s32 animatorSize);
// @addr 0x80553d90
void freeAnimator(s32 animatorPtr);
} // namespace MemUtil

// --- Debug/profiling: 0x80554404 - 0x80554ba8 ---
namespace Debug {
// @addr 0x80554404
void isDebugEnabled();
// @addr 0x80554734
void setDebugEnabled();
// @addr 0x805547b4
void getDebugInfo();
// @addr 0x80554808
void getEmitterName(s8* nameBuffer);
// @addr 0x80554900
void getEmitterColor(u8* colorBuffer);
// @addr 0x8055497c
void setEmitterName(s8* name);
// @addr 0x80554a78
void setEmitterColor(s8* colorData, u32 colorSize);
// @addr 0x80554abc
void setDebugColor(s8* colorData, u32 colorSize);
// @addr 0x80554ba8
void printStats(s32 statType);
} // namespace Debug

// --- State queries: 0x80554c14 - 0x80555150 ---
namespace Query {
// @addr 0x80554c14
bool hasActiveEmitters();
// @addr 0x80554c24
u32 getEmitterByIndex(s32 index, u32 flags);
// @addr 0x80554c44
bool isValidEmitterName(s8* name);
// @addr 0x80554cdc
bool isValidResourceName(s8* name);
// @addr 0x80554e20
u32 getEmitterState(s32 emitterId);
// @addr 0x80554e78
void getParticleState(s32 emitterId);
// @addr 0x80554f74
void getParticlePosition(s32 emitterId);
// @addr 0x80554fc8
void getParticleColor(s32 emitterId);
// @addr 0x80555150
u32 getEmitterUserData(u32* outData);
} // namespace Query

// --- System init/shutdown: 0x80555298 - 0x805556b8 ---
namespace System {
// @addr 0x80555298
s32 getInitState();
// @addr 0x805552f4
void fullInit();
// @addr 0x805553f0
s32 initWithHeap(u32 heapSize);
// @addr 0x80555454
void shutdown();
// @addr 0x80555610
s32 reset(s32 flags, s32 mode);
// @addr 0x80555650
u32 getVersion();
// @addr 0x805556b8
u32 getStatus();
} // namespace System

// --- Resource I/O: 0x8055589c - 0x80556070 ---
namespace ResourceIO {
// @addr 0x8055589c
void loadFile(s32 fileId);
// @addr 0x80555920
void unloadFile();
// @addr 0x80555a34
u32 getResourceCount();
// @addr 0x80555a3c
s32 getResource(s32 index);
// @addr 0x80555ba0
void findResourceById(s32 resourceId);
// @addr 0x80556070
void getResourceSize(s32 resourceId);
} // namespace ResourceIO

// --- Effect controller: 0x80556194 - 0x80557df8 ---
namespace EffectCtrl {
// @addr 0x80556194
void createEffect();
// @addr 0x80556648
void updateEffects(s32 emitterId);
// @addr 0x805576d8
void destroyAllEffects();
// @addr 0x805578e8
void getEffectCount();
// @addr 0x80557f2c
void setEffectParameter();
// @addr 0x80557d54
u32 getEffectParameter(s32 paramId);
// @addr 0x80557df8
u32 setEffectTransform(s32 effectId, u32 transformFlags, s32 priority);
} // namespace EffectCtrl

// --- Linked-list management: 0x805558e0 - 0x805565f0 ---
namespace ListUtil {
// @addr 0x805558e0
u32 getListHead(s32 listId);
// @addr 0x805558e8
u32 getListTail(s32 listId);
// @addr 0x805558f0
s32 getNextEmitter(s32 emitterId);
// @addr 0x8055590c
s32 getPrevEmitter(s32 emitterId);
// @addr 0x80555918
u32 getListCount(s32 listId);
// @addr 0x80555a44
void findInList();
// @addr 0x805565b0
s32 insertEmitter(s32 emitterId, s32 position);
// @addr 0x805565f0
s32 removeEmitter(s32 emitterId, s32 position);
} // namespace ListUtil

// --- Animation curves: 0x80558188 - 0x80558e64 ---
namespace Curves {
// @addr 0x80558188
u32 evaluate(s32* curveData);
// @addr 0x805581f4
void getPointCount();
// @addr 0x805585fc
s32 interpolate(s32 curveId, s32 segment);
// @addr 0x805586f0
void setCurveData(u32 curveId);
// @addr 0x80558718
u32 getCurveData(s32 curveId, s32* outData);
// @addr 0x805589a8
s32 evaluateAtTime(s32 curveId, s32 time);
// @addr 0x80558ab8
u8 getCurveType(s32 curveId);
// @addr 0x80558ac4
u32 getKeyCount(s32 curveId, s32* outCount, s32 flags);
// @addr 0x80558c24
u32 getKeyValue(s32 curveId, u32 keyIndex, u32* outValue);
// @addr 0x80558ccc
s32 getKeyTime(s32 curveId, u32 keyIndex);
// @addr 0x80558d5c
u32 setKey(s32 curveId, s32 time, s32* value);
// @addr 0x80558e64
u32 validateCurve(s32 curveId, u32 checkFlags);
} // namespace Curves

// --- Draw data: 0x80558fa8 - 0x80559508 ---
namespace DrawData {
// @addr 0x80558fa8
void build(u32* srcParticles, u32* dstBuffer);
// @addr 0x805591b0
void submit(u32 bufferId, u32 count, u32 flags);
// @addr 0x80559214
u32 getBuffer(s32 bufferId, s32 flags);
// @addr 0x805593a0
u32 getBufferSize(s32 bufferId);
// @addr 0x8055946c
s32 getDrawCallCount(s32 bufferId);
// @addr 0x80559488
void updateDrawData(s32 bufferId);
// @addr 0x80559508
void resetBuffer();
} // namespace DrawData

// --- Texture animation: 0x80559c98 - 0x8055bde8 ---
namespace TexAnim {
// @addr 0x80559c98
void setSheetParams(u32 sheetId, u32 columns, u32 rows);
// @addr 0x80559fa4
void getCurrentFrame();
// @addr 0x8055a070
u32 advanceFrame(s32 animId);
// @addr 0x8055a130
void resetAnimation();
// @addr 0x8055a40c
u32 getSheetInfo();
// @addr 0x8055a4f8
void setSheet();
// @addr 0x8055a684
void setFrame(s32 animId, u32 frameIndex);
// @addr 0x8055a6d0
u32 getFrameCount(s32 sheetId);
// @addr 0x8055a984
void initAnimation();
// @addr 0x8055aa9c
void updateAnimation();
// @addr 0x8055ac98
void getAnimationState();
// @addr 0x8055af90
void setAnimationSpeed();
// @addr 0x8055b24c
void setLoopMode();
// @addr 0x8055b568
void getAnimationDuration();
// @addr 0x8055b8a0
void setPingPong();
// @addr 0x8055baa8
void isAnimationComplete();
// @addr 0x8055bc00
void getAnimationTime();
// @addr 0x8055b180
u32 getFrameUV(s32 sheetId);
// @addr 0x8055b3bc
u32 setUVOffset(s32 sheetId);
// @addr 0x8055b498
u32 setUVScale(s32 sheetId);
// @addr 0x8055b7f0
u32 getFrameUVRect(s32 sheetId);
// @addr 0x8055ba08
u32 setWrapMode(s32 sheetId);
// @addr 0x8055bde8
u32 getTextureObject(s32 sheetId);
} // namespace TexAnim

// --- GX rendering state: 0x8055c384 - 0x8055ec8c ---
namespace GXState {
// @addr 0x8055c384
void init();
// @addr 0x8055c504
void setBlendState(u32 blendMode, u32 srcFactor, u32 dstFactor);
// @addr 0x8055c748
void setTEVState(u32 stage, u32 colorOp, u32 alphaOp);
// @addr 0x8055c8e0
void setAlphaCompare(u32 compFunc, u32 ref);
// @addr 0x8055cb84
void setZBuffer(u32 enable, u32 func, u32 update);
// @addr 0x8055cfe8
void setRasterState(u32 cullMode);
// @addr 0x8055d544
void setCullMode(u32 cullMode, u32 cullMode2);
// @addr 0x8055d93c
void restoreState();
// @addr 0x8055db48
void saveState();
// @addr 0x8055dd7c
void setVtxDesc();
// @addr 0x8055dec4
void setArrayPtrs(s32 attrId);
// @addr 0x8055df48
void beginPrimitive();
// @addr 0x8055e184
void endPrimitive();
// @addr 0x8055e488
u32 flushCommands(s32 bufferId);
// @addr 0x8055e5b8
void setPixelFormat();
// @addr 0x8055e734
void drawQuad(s32 emitterId, u32 posData, s32 rotData, s32 uvData, s32 colorData);
// @addr 0x8055ea0c
void drawLine(u32 posData, s32 colorData);
// @addr 0x8055ec8c
u32 drawPoint(s32 posData);
// @addr 0x8055efc8
u32 drawBeam(s32 posData);
} // namespace GXState

// --- Finalization: 0x8055ef5c - 0x8055fea4 ---
namespace Finalize {
// @addr 0x8055ef5c
void finalizeDraw(u32* drawBuffer, s32 flags);
// @addr 0x8055f17c
void endFrame();
// @addr 0x8055f33c
void swapBuffers();
// @addr 0x8055f478
void presentFrame(s32 displayId, u8* framebuffer);
// @addr 0x8055f604
u32 getFrameStats(s32 statId);
// @addr 0x8055f750
void copyDrawData(s32 srcId, u8* dstBuffer);
// @addr 0x8055fa20
u32 setDrawPriority(s32 drawId, u32 priority);
// @addr 0x8055faac
void setDrawSortMode(u32 drawId, s32 sortMode);
// @addr 0x8055fb54
void resetDrawState();
// @addr 0x8055fc04
void setDrawClip(u32 drawId, u32 clipFlags, s32 clipData);
// @addr 0x8055fea4
void cleanup();
} // namespace Finalize

// --- Settings: 0x8054ee94 - 0x805504e4 ---
namespace Settings {
// @addr 0x8054ee94
bool hasSetting(s32 settingId);
// @addr 0x8054efbc
u32 getSettingU32();
// @addr 0x8054f8f8
u32 setSetting(s32 settingId);
// @addr 0x8054fb08
u32 getSettingByIndex(s32 category, s32 index, s32 subIndex);
// @addr 0x8054fb20
u32 setSettingByIndex(s32 category, s32 index, s32 subIndex);
// @addr 0x8054fb38
bool checkSettingFlag(s32 settingId, u32 flagMask, s32 param);
// @addr 0x8054fc94
u8 getSettingByte(s32 settingId, s32 index, s32 subIndex);
// @addr 0x8054fca8
u32 getSettingU32ById(s32 settingId);
// @addr 0x8054fe10
u32 getSettingFloat(s32 settingId);
// @addr 0x8055008c
u32 applySettings(s32 settingId);
// @addr 0x80550184
u8 resetToDefaults(s32 settingId);
// @addr 0x8055027c
s32 loadFromFile(s32 fileId);
// @addr 0x805504e4
s32 saveToFile(s32 fileId, s32 settingsId);
} // namespace Settings

// --- Data copy: 0x805446f4 - 0x80550dbc ---
namespace DataCopy {
// @addr 0x80554dc4
void copyParticleData(u8* dstBuffer);
// @addr 0x805546f4
s32 copyEmitterConfig(s32 srcId, s32 dstId);
// @addr 0x80550a7c
bool validateCopy();
// @addr 0x80550d7c
u32 getCopySize(u32 dataType);
// @addr 0x80550dbc
s32 performCopy(s32 srcId, s32 dstId);
} // namespace DataCopy

// --- Unclassified non-void: 0x805402f0 - 0x8054bfb0 ---
namespace Util {
// @addr 0x805438d0
u32 fn_805438d0(u32 param1, s32 param2);
// @addr 0x80543a64
s32 fn_80543a64(s32 param1, s32 param2);
// @addr 0x80543aa4
s32 fn_80543aa4(s32 param1, s32 param2);
// @addr 0x80543ae4
s32 fn_80543ae4(s32 param1, s32 param2);
// @addr 0x80547034
u32 fn_80547034(u32* param1);
// @addr 0x80547f44
u32 fn_80547f44(s32 param1, s32 param2);
// @addr 0x80548030
u32 fn_80548030(u32 param1, s32 param2);
// @addr 0x80548118
u32 fn_80548118(u32 param1, s32 param2);
// @addr 0x80549bbc
u32 fn_80549bbc(s32 param1, s32 param2);
// @addr 0x80549ec4
u32 fn_80549ec4(u32* param1);
// @addr 0x8054ab7c
u32 fn_8054ab7c(s32 param1, s32 param2);
// @addr 0x8054ac20
s32 fn_8054ac20(s32 param1, s32 param2);
// @addr 0x8054b510
s32 fn_8054b510(s32 param1, s32 param2);
// @addr 0x8054bf70
s32 fn_8054bf70(s32 param1, s32 param2);
// @addr 0x8054bfb0
s32 fn_8054bfb0(s32 param1, s32 param2);
// @addr 0x80542768
s32 fn_80542768(s32 param1, s32 param2);
// @addr 0x80542a0c
u32 fn_80542a0c(s32 param1);
// @addr 0x80541d08
u32 fn_80541d08(s32 param1);
// @addr 0x8054a1f8
u32 fn_8054a1f8(s32 p1, s32 p2, s32 p3);
// @addr 0x8054a264
u32 fn_8054a264(s32 p1, s32 p2, s32 p3);
// @addr 0x8054a380
u32 fn_8054a380(u32 p1, u32 p2, s32 p3);
// @addr 0x805402f0
s32 fn_805402f0(s32 p1, s32 p2);
// @addr 0x805404c4
s32 fn_805404c4(s32 p1, s32 p2);
// @addr 0x80540758
s32 fn_80540758(s32 p1, s32 p2);
// @addr 0x80540874
s32 fn_80540874(s32 p1, s32 p2);
// @addr 0x80540a60
s32 fn_80540a60(s32 p1, s32 p2);
// @addr 0x805440c0
s32 fn_805440c0(s32 p1, s32 p2);
} // namespace Util

// --- Unclassified void: all remaining 0x80544970 - 0x8055fea4 ---
namespace UtilVoid {
// @addr 0x80544970
void fn_80544970(s32 p1, s32 p2);
// @addr 0x805457c4
void fn_805457c4();
// @addr 0x80545828
void fn_80545828();
// @addr 0x80545dcc
void fn_80545dcc();
// @addr 0x80545e88
void fn_80545e88();
// @addr 0x805463f0
void fn_805463f0();
// @addr 0x805469b4
void fn_805469b4();
// @addr 0x80546b58
void fn_80546b58(s32 p1);
// @addr 0x80546c1c
void fn_80546c1c(u32* p1);
// @addr 0x8054711c
void fn_8054711c(s32 p1);
// @addr 0x80547a48
void fn_80547a48(s32 p1);
// @addr 0x80548330
void fn_80548330();
// @addr 0x80548380
void fn_80548380();
// @addr 0x8054843c
void fn_8054843c();
// @addr 0x80548540
void fn_80548540(s32 p1);
// @addr 0x805485a8
void fn_805485a8(s32 p1, u32 p2);
// @addr 0x805487b4
void fn_805487b4();
// @addr 0x805489f8
void fn_805489f8(s32 p1);
// @addr 0x80549234
void fn_80549234(s32 p1);
// @addr 0x80549938
void fn_80549938(s32 p1);
// @addr 0x8054a4ec
void fn_8054a4ec(u32 p1, s32* p2, s32 p3);
// @addr 0x8054a58c
void fn_8054a58c(s32 p1);
// @addr 0x8054a6a0
void fn_8054a6a0();
// @addr 0x8054a764
void fn_8054a764();
// @addr 0x8054a930
void fn_8054a930(s8* p1);
// @addr 0x8054aa88
void fn_8054aa88(s32 p1, u32 p2);
// @addr 0x8054ab8c
void fn_8054ab8c(s32 p1, s32 p2, u32 p3);
// @addr 0x8054ac60
void fn_8054ac60();
// @addr 0x8054adac
void fn_8054adac(s32 p1);
// @addr 0x8054af6c
void fn_8054af6c();
// @addr 0x8054b084
void fn_8054b084();
// @addr 0x8054b1b4
void fn_8054b1b4(s8* p1);
// @addr 0x8054b204
void fn_8054b204(s32 p1, u8 p2, u8 p3);
// @addr 0x8054b358
void fn_8054b358();
// @addr 0x8054b41c
void fn_8054b41c(u8* p1);
// @addr 0x8054b550
void fn_8054b550(s32 p1);
// @addr 0x8054b618
void fn_8054b618();
// @addr 0x8054b768
void fn_8054b768(s32 p1);
// @addr 0x8054b8c4
void fn_8054b8c4(s32 p1);
// @addr 0x8054bb70
void fn_8054bb70(s32 p1, u32 p2);
// @addr 0x8054bc90
void fn_8054bc90();
// @addr 0x8054bff0
void fn_8054bff0();
// @addr 0x8054c0c4
void fn_8054c0c4();
// @addr 0x8054c108
void fn_8054c108(s32 p1);
// @addr 0x8054c460
void fn_8054c460(s32 p1);
// @addr 0x8054ca18
void fn_8054ca18(s32 p1);
// @addr 0x8054cb64
void fn_8054cb64(s32 p1);
// @addr 0x8054cd34
void fn_8054cd34(u32 p1, u32 p2);
// @addr 0x8054d014
void fn_8054d014();
// @addr 0x8054d080
void fn_8054d080();
// @addr 0x8054d1dc
void fn_8054d1dc(s32 p1);
// @addr 0x8054d3ec
void fn_8054d3ec();
// @addr 0x8054d614
void fn_8054d614(s32 p1);
// @addr 0x8054da98
void fn_8054da98(s32* p1);
// @addr 0x8054db78
void fn_8054db78(s32 p1);
// @addr 0x8054dbc0
void fn_8054dbc0(s32 p1);
// @addr 0x8054de4c
void fn_8054de4c(s32* p1);
// @addr 0x8054e198
void fn_8054e198(s32 p1);
// @addr 0x8054e3f4
void fn_8054e3f4(s32* p1, u32* p2);
// @addr 0x8054e6ec
void fn_8054e6ec(u32 p1, u32* p2);
// @addr 0x8054e8dc
void fn_8054e8dc();
// @addr 0x8054ea04
void fn_8054ea04();
// @addr 0x8054ea44
void fn_8054ea44(s32 p1);
// @addr 0x8054eb8c
void fn_8054eb8c(s32 p1);
// @addr 0x8054ecf8
void fn_8054ecf8(s32 p1);
// @addr 0x8054ed28
void fn_8054ed28(s32 p1);
// @addr 0x8054ed58
void fn_8054ed58(s32 p1);
// @addr 0x8054ed60
void fn_8054ed60();
// @addr 0x8054ed8c
void fn_8054ed8c(s32 p1, s32 p2);
// @addr 0x8054eea4
void fn_8054eea4(s32 p1, s32 p2);
// @addr 0x8054eedc
void fn_8054eedc(u32 p1, u32 p2);
// @addr 0x8054ef0c
void fn_8054ef0c(s32 p1, u32* p2);
// @addr 0x8054ef44
void fn_8054ef44(u32 p1, u32* p2);
// @addr 0x8054f088
void fn_8054f088(s32 p1);
// @addr 0x8054f0e8
void fn_8054f0e8(u32* p1);
// @addr 0x8054f1ec
void fn_8054f1ec();
// @addr 0x8054f380
void fn_8054f380();
// @addr 0x8054f3d0
void fn_8054f3d0(u8* p1);
// @addr 0x8054f51c
void fn_8054f51c(s8* p1);
// @addr 0x80550374
void fn_80550374();
// @addr 0x805507b4
void fn_805507b4();
// @addr 0x805508fc
void fn_805508fc(s32 p1);
// @addr 0x80550b10
void fn_80550b10(u32 p1, u32 p2);
// @addr 0x80550bc8
void fn_80550bc8(u32 p1, u32 p2);
// @addr 0x80550c80
void fn_80550c80();
// @addr 0x80550ce4
void fn_80550ce4();
// @addr 0x80550d38
void fn_80550d38();
// @addr 0x80550e14
void fn_80550e14();
// @addr 0x80551090
void fn_80551090();
// @addr 0x80551310
void fn_80551310(u32 p1);
// @addr 0x805513e8
void fn_805513e8(s32 p1, s32 p2, u8 p3);
// @addr 0x80551474
void fn_80551474(s32 p1, u32 p2);
// @addr 0x80551508
void fn_80551508(s32 p1, s32 p2);
// @addr 0x80551cec
void fn_80551cec(s32 p1, u32 p2, u8 p3, u8 p4);
// @addr 0x80551d48
void fn_80551d48(s32 p1, s32 p2, u8 p3);
// @addr 0x80551e08
void fn_80551e08(s32 p1, u32 p2, u8 p3, u8 p4);
// @addr 0x80551e64
void fn_80551e64(s32 p1, s32 p2, u8 p3);
// @addr 0x80552994
void fn_80552994(u32 p1);
// @addr 0x80552a64
void fn_80552a64(s32 p1);
// @addr 0x80552dc8
void fn_80552dc8(s32 p1);
// @addr 0x8055336c
void fn_8055336c(s32 p1, s32 p2, u32 p3);
// @addr 0x805535d0
void fn_805535d0(u32 p1);
// @addr 0x80553660
void fn_80553660(s32 p1, u32 p2);
// @addr 0x80553a9c
void fn_80553a9c(s32 p1, u32 p2);
// @addr 0x80553d90
void fn_80553d90(s32 p1);
// @addr 0x80554404
void fn_80554404();
// @addr 0x80554734
void fn_80554734();
// @addr 0x805547b4
void fn_805547b4();
// @addr 0x80554808
void fn_80554808(s8* p1);
// @addr 0x80554900
void fn_80554900(u8* p1);
// @addr 0x8055497c
void fn_8055497c(s8* p1);
// @addr 0x80554a78
void fn_80554a78(s8* p1, u32 p2);
// @addr 0x80554abc
void fn_80554abc(s8* p1, u32 p2);
// @addr 0x80554ba8
void fn_80554ba8(s32 p1);
// @addr 0x80554dc4
void fn_80554dc4(u8* p1);
// @addr 0x80554e78
void fn_80554e78(s32 p1);
// @addr 0x80554f74
void fn_80554f74(s32 p1);
// @addr 0x80554fc8
void fn_80554fc8(s32 p1);
// @addr 0x805552f4
void fn_805552f4();
// @addr 0x80555454
void fn_80555454();
// @addr 0x8055589c
void fn_8055589c(s32 p1);
// @addr 0x80555920
void fn_80555920();
// @addr 0x80555a44
void fn_80555a44();
// @addr 0x80555ba0
void fn_80555ba0(s32 p1);
// @addr 0x80556070
void fn_80556070(s32 p1);
// @addr 0x80556194
void fn_80556194();
// @addr 0x80556648
void fn_80556648(s32 p1);
// @addr 0x805576d8
void fn_805576d8();
// @addr 0x805578e8
void fn_805578e8();
// @addr 0x80557f2c
void fn_80557f2c();
// @addr 0x805581f4
void fn_805581f4();
// @addr 0x805586f0
void fn_805586f0(u32 p1);
// @addr 0x80558fa8
void fn_80558fa8(u32* p1, u32* p2);
// @addr 0x805591b0
void fn_805591b0(u32 p1, u32 p2, u32 p3);
// @addr 0x80559488
void fn_80559488(s32 p1);
// @addr 0x80559508
void fn_80559508();
// @addr 0x80559c98
void fn_80559c98(u32 p1, u32 p2);
// @addr 0x80559fa4
void fn_80559fa4();
// @addr 0x8055a130
void fn_8055a130();
// @addr 0x8055a4f8
void fn_8055a4f8();
// @addr 0x8055a684
void fn_8055a684(s32 p1, u32 p2);
// @addr 0x8055a984
void fn_8055a984();
// @addr 0x8055aa9c
void fn_8055aa9c();
// @addr 0x8055ac98
void fn_8055ac98();
// @addr 0x8055af90
void fn_8055af90();
// @addr 0x8055b24c
void fn_8055b24c();
// @addr 0x8055b568
void fn_8055b568();
// @addr 0x8055b8a0
void fn_8055b8a0();
// @addr 0x8055baa8
void fn_8055baa8();
// @addr 0x8055bc00
void fn_8055bc00();
// @addr 0x8055c384
void fn_8055c384();
// @addr 0x8055c504
void fn_8055c504();
// @addr 0x8055c748
void fn_8055c748();
// @addr 0x8055c8e0
void fn_8055c8e0(u32 p1, u32 p2);
// @addr 0x8055cb84
void fn_8055cb84(u32 p1, u32 p2);
// @addr 0x8055cfe8
void fn_8055cfe8(u32 p1, u32 p2);
// @addr 0x8055d544
void fn_8055d544(u32 p1, u32 p2);
// @addr 0x8055d93c
void fn_8055d93c();
// @addr 0x8055db48
void fn_8055db48();
// @addr 0x8055dd7c
void fn_8055dd7c();
// @addr 0x8055dec4
void fn_8055dec4(s32 p1);
// @addr 0x8055df48
void fn_8055df48();
// @addr 0x8055e184
void fn_8055e184();
// @addr 0x8055e5b8
void fn_8055e5b8();
// @addr 0x8055e734
void fn_8055e734(s32 p1, u32 p2, s32 p3, s32 p4);
// @addr 0x8055ea0c
void fn_8055ea0c(u32 p1, s32 p2);
// @addr 0x8055ef5c
void fn_8055ef5c(u32* p1, s32 p2);
// @addr 0x8055f17c
void fn_8055f17c();
// @addr 0x8055f33c
void fn_8055f33c();
// @addr 0x8055f478
void fn_8055f478();
// @addr 0x8055f750
void fn_8055f750(s32 p1, u8* p2);
// @addr 0x8055faac
void fn_8055faac(u32 p1, s32 p2);
// @addr 0x8055fb54
void fn_8055fb54();
// @addr 0x8055fc04
void fn_8055fc04(u32 p1, u32 p2, s32 p3);
// @addr 0x8055fea4
void fn_8055fea4();
} // namespace UtilVoid

} // namespace Particle
} // namespace EGG
