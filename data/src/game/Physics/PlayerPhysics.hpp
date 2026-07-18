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

// Forward declarations for kart subsystems
class KartWheelPhysics;
class KartSusPhysics;
class HitboxGroup;

// =============================================================================
// PlayerPhysics — The main per-player physics orchestrator
// Address: 0x805899cc (update), size: 0x160
//
// This class wraps the lower-level KartPhysics and coordinates all per-player
// physics updates every frame. It is NOT the same as Kart::KartPhysics; it is
// the player-specific layer that drives the kart physics engine.
// =============================================================================
class PlayerPhysics {
public:
    PlayerPhysics();
    ~PlayerPhysics();

    // Main update — 0x805899cc, 1496 bytes
    // Called every frame to update all physics subsystems:
    // 1. Check race state / game mode
    // 2. Update KartDynamics (gravity, collision response, integration)
    // 3. Update KartWheelPhysics for each wheel (contact, suspension)
    // 4. Update KartSusPhysics (suspension travel, bounce)
    // 5. Update collision response forces
    // 6. Apply moving road/water velocities
    // 7. Compute final speed and position
    // 8. Update sub-object (wheel matrices, effects)
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

private:
    void updateWheelPhysics(f32 dt);
    void updateSuspensionPhysics(f32 dt);
    void updateCollisionState();
    void computeSpeed(f32 dt);
    void updateSubObject();
    void integratePosition(f32 dt);

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

    // 0x0CC: Additional physics state flags
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

    // 0x160: End of class
};
static_assert(sizeof(PlayerPhysics) == 0x160);