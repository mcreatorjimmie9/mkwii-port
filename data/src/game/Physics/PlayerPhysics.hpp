#pragma once
#include <types.h>
#include <EGG/math.h>

class KartMove;
class KartBody;
class KartPhysics;
class KartPhysicsEngine;
class ItemHandler;
class CollisionGroup;
class PlayerSub10;
class PlayerBoost;

// Forward declarations for kart subsystems
class KartWheelPhysics;
class KartSusPhysics;
class HitboxGroup;

// Vehicle stats block returned by getVehicleStats()
struct VehicleStats {
    f32 topSpeed;           // Maximum forward speed
    f32 acceleration;       // Forward acceleration rate
    f32 handling;           // Base turn rate
    f32 offroadSpeed;       // Speed cap off-road
    f32 driftHandling;      // Turn rate while drifting
    f32 miniTurboDuration;  // MT charge duration (frames)
    f32 miniTurboBoost;     // MT speed boost multiplier
    f32 mass;               // Vehicle mass (affects momentum)
    f32 weight;             // Weight class (for collisions)
};

// =============================================================================
// PlayerPhysics — The main per-player physics orchestrator
// Address: 0x805899cc (update), size: 0x160
//
// This class wraps the lower-level KartPhysics and coordinates all per-player
// physics updates every frame. It is NOT the same as Kart::KartPhysics; it is
// the player-specific layer that drives the kart physics engine.
//
// The update() method has been reconstructed from decompiled assembly (0x805899cc,
// 1496 bytes) into proper C++ using the real helper formulas in this file:
//   calcTopSpeed, calcAcceleration, calcHandling, calcOffroadSpeed, calcDriftStats.
// =============================================================================
class PlayerPhysics {
public:
    PlayerPhysics();
    ~PlayerPhysics();

    // Main update — 0x805899cc, 1496 bytes
    // Called every frame to update all physics subsystems:
    // 1. Check race state / game mode
    // 2. Save previous frame positions
    // 3. If grounded: acceleration, braking, steering, collision response
    // 4. If airborne: gravity, reduced steering, OOB check
    // 5. Compute speed, interpolate position
    // 6. Update floor/air state flags
    void update(f32 dt);

    void reset();
    void init(bool isBike, KartPhysicsEngine* engine,
              HitboxGroup* hitboxGroup, u32 wheelCount);

    // Subsystem accessors
    KartPhysics* getKartPhysics() const { return m_kartPhysics; }
    KartWheelPhysics* getWheelPhysics(u32 idx) const;
    KartSusPhysics* getSusPhysics(u32 idx) const;
    HitboxGroup* getHitboxGroup() const { return m_hitboxGroup; }

    // State query
    bool hasAnyFloorCollision() const { return m_anyFloorCol; }
    u32 getFloorCollisionCount() const { return m_floorColCount; }

    // --- Input setters (called before update()) ---

    /// Set acceleration input (0.0 = none, 1.0 = full throttle)
    void setAccelInput(f32 v) { m_accelInput = v; }

    /// Set brake input (0.0 = none, 1.0 = full brake)
    void setBrakeInput(f32 v) { m_brakeInput = v; }

    /// Set steering input (-1.0 = full left, +1.0 = full right)
    void setSteerInput(f32 v) { m_steerInput = v; }

    /// Set floor collision flag (from BSP/KCL collision system)
    void setFloorCollision(bool v) {
        if (v) m_statusFlags |= 0x4000;
        else   m_statusFlags &= ~0x4000;
    }

    /// Set off-road flag (from KCL surface type)
    void setOffroad(bool v) {
        if (v) m_statusFlags |= 0x0010;
        else   m_statusFlags &= ~0x0010;
    }

    /// Set boost pad flag (from KCL boost panel)
    void setBoostPad(bool v) {
        if (v) m_statusFlags |= 0x0004;
    }

    /// Set wall collision flag
    void setWallCollision(bool v) {
        if (v) m_wallOobFlags |= 0x0002;
    }

    // --- Position accessors ---

    f32 getFramePosX() const { return m_framePosX; }
    f32 getFramePosY() const { return m_framePosY; }
    f32 getFramePosZ() const { return m_framePosZ; }
    f32 getYawRad() const { return m_yawRad; }
    f32 getEffectiveSpeed() const { return m_effectiveSpeed; }
    f32 getSpeed() const { return m_speed; }

    /// Set position (e.g., from KCL ground following)
    void setFramePosition(f32 x, f32 y, f32 z) {
        m_framePosX = x;
        m_framePosY = y;
        m_framePosZ = z;
    }

    /// Set initial yaw (e.g., from KMP start position)
    void setYaw(f32 yawDeg) { m_yawRad = EGG::DegToRad(yawDeg); }

    // --- Stat calculation methods ---

    /// Calculate vehicle top speed from base stats and modifiers
    f32 calcTopSpeed() const;

    /// Calculate acceleration curve value at current speed
    f32 calcAcceleration() const;

    /// Calculate handling (turn rate) at current speed
    f32 calcHandling() const;

    /// Calculate speed cap when driving off-road
    f32 calcOffroadSpeed() const;

    /// Calculate drift handling parameters (outside/inside drift turn rates)
    void calcDriftStats(f32& outsideDrift, f32& insideDrift) const;

    /// Get mini-turbo stats: duration and speed boost per level (1, 2, 3)
    void getMiniTurboStats(f32& duration, f32& boost, s32 level) const;

    /// Apply mass-based physics (heavier = more momentum, less acceleration)
    void applyMass(f32 dt);

    /// Return the full vehicle stats block
    VehicleStats getVehicleStats() const;

    /// Refresh cached stats (called on vehicle change)
    void updateStats();

private:
    // Internal physics update paths
    void updateGroundedPhysics(f32 dt);
    void updateAirbornePhysics(f32 dt);
    void updateCollisionState();
    void integratePosition(f32 dt);

    // Legacy private methods (stubs for architecture compatibility)
    void updateWheelPhysics(f32 dt);
    void updateSuspensionPhysics(f32 dt);
    void computeSpeed(f32 dt);
    void updateSubObject();

private:
    // 0x000: Pointer to player sub-object (PlayerPointers or similar)
    void* m_playerRef;

    // 0x004: unused / padding
    u8 _004[0x004];

    // 0x008: vtable pointer
    void* m_vtable;

    // 0x00C: Primary kart physics (Kart::KartPhysics, 0x100 bytes)
    KartPhysics* m_kartPhysics;

    // 0x010: Previous frame position (saved for delta computation)
    EGG::Vector3f m_prevPos;

    // 0x01C: Frame counter for interpolation / airtime tracking
    u32 m_frameCount;

    // 0x020: Interpolation factor (dt-related)
    f32 m_interpFactor;

    // 0x024: unused / reserved
    u8 _024[0x004];

    // 0x028: Saved position for interpolation step 1
    EGG::Vector3f m_savedPos1;

    // 0x034: Saved position for interpolation step 2
    EGG::Vector3f m_savedPos2;

    // 0x040: Saved position for interpolation step 3
    EGG::Vector3f m_savedPos3;

    // 0x04C: Additional state
    u8 _04C[0x004];

    // 0x050: Delta position from previous frame
    EGG::Vector3f m_deltaPos;

    // 0x05C: unused / padding
    u8 _05C[0x004];

    // 0x060: Status flags
    u16 m_statusFlags;

    // 0x062: Padding
    u8 _062[0x002];

    // 0x064: Pointer to internal state buffer (stores pos, vel for sub-calls)
    void* m_stateBuffer;

    // 0x068: Current vehicle speed (scalar)
    f32 m_speed;

    // 0x06C: Previous X position (raw)
    f32 m_rawPosX;

    // 0x070: Previous Y position (raw)
    f32 m_rawPosY;

    // 0x074: Current frame X position
    f32 m_framePosX;

    // 0x078: Current frame Y position
    f32 m_framePosY;

    // 0x07C: Current frame Z position
    f32 m_framePosZ;

    // 0x080: Floor collision count
    u32 m_floorColCount;

    // 0x084: Any floor collision flag (set if at least one wheel touches ground)
    bool m_anyFloorCol;

    // 0x085: In-air timer overflow flag
    bool m_airTimerOverflow;

    // 0x086: Padding
    u8 _086[0x002];

    // 0x088: Sub-frame delta X (from position interpolation)
    f32 m_subDeltaX;

    // 0x08C: Sub-frame delta Y
    f32 m_subDeltaY;

    // 0x090: Sub-frame delta Z
    f32 m_subDeltaZ;

    // 0x094: Effective speed (after all factors)
    f32 m_effectiveSpeed;

    // 0x098: Speed norm (magnitude of velocity vector)
    f32 m_speedNorm;

    // 0x09C: Additional state
    u8 _09C[0x004];

    // 0x0A0: Last computed scale
    EGG::Vector3f m_scale;

    // 0x0AC: Scale interpolation factor
    f32 m_scaleFactor;

    // 0x0B0: Previous scale
    EGG::Vector3f m_prevScale;

    // 0x0BC: Padding
    u8 _0BC[0x004];

    // 0x0C0: State change flag
    u32 m_stateFlags;

    // 0x0C4: Internal use
    u8 _0C4[0x004];

    // 0x0C8: Collision group reference
    CollisionGroup* m_collisionGroup;

    // 0x0CC: Hitbox group (set during init, used for collision queries)
    HitboxGroup* m_hitboxGroup;

    // 0x0CC: Additional physics state flags (offsets approximate on 64-bit)
    u8 _0CC[0x004];

    // 0x0D0: Floor collision detection counter
    u32 m_floorDetectCounter;

    // 0x0D4: Wheel count
    u32 m_wheelCount;

    // 0x0D8: Internal flags for wall/OOB detection
    u32 m_wallOobFlags;

    // 0x0DC: Air time counter
    u32 m_airTime;

    // 0x0E0: Timer for physics state transitions
    u32 m_stateTimer;

    // 0x0E4: Speed at start of frame (for integration)
    EGG::Vector3f m_frameStartVel;

    // 0x0F0: Previous frame speed
    EGG::Vector3f m_prevSpeed;

    // 0x0FC: Saved floor normal
    EGG::Vector3f m_floorNormal;

    // 0x108: Position at start of update (before physics step)
    EGG::Vector3f m_updateStartPos;

    // 0x114: Position after physics step
    EGG::Vector3f m_updateEndPos;

    // 0x120: Velocity after physics step
    EGG::Vector3f m_updateEndVel;

    // 0x12C: Additional velocity component
    EGG::Vector3f m_extraVel;

    // 0x138: Ground contact normal
    EGG::Vector3f m_groundNormal;

    // 0x144: Position offset for wheel contact
    EGG::Vector3f m_contactOffset;

    // 0x150: Wheel rotation matrix data (stored per update)
    EGG::Vector3f m_wheelRotData[4];

    // 0x160: Cached vehicle stats
    VehicleStats m_cachedStats;
    f32 m_statTopSpeed;
    f32 m_statAcceleration;
    f32 m_statHandling;

    // --- Input state (set each frame before update()) ---
    f32 m_accelInput;      // 0.0..1.0 accelerator
    f32 m_brakeInput;      // 0.0..1.0 brake
    f32 m_steerInput;      // -1.0..+1.0 steering

    // --- Facing direction (radians) ---
    f32 m_yawRad;

    // 0x17C: End of class
};
// static_assert(sizeof(PlayerPhysics) == 0x160);

/// Interpolate between base and modified vehicle stats.
/// Used for smooth transitions when stats change (e.g., speed boosts).
/// @param base      Base (unmodified) stats
/// @param modified  Modified stats (e.g., with boost applied)
/// @param t         Interpolation factor [0, 1] (0 = base, 1 = modified)
/// @return Interpolated stats
VehicleStats PlayerPhysics_interpolateStats(const VehicleStats& base,
                                             const VehicleStats& modified,
                                             f32 t);
