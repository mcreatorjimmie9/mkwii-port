#pragma once
// Player.hpp — Per-player kart entity bridging decompiled and reimplemented layers
//
// The Player class is the central per-racer integration point. It ties together:
//   - PlayerPhysics (decompiled, from 0x805899cc) — stat-based physics engine
//   - KartEntity (src/game/) for OpenGL rendering + collision queries
//   - KartDynamics (decompiled) for rigid body dynamics
//   - AIController for CPU players
//   - CollisionSystem for KCL collision queries
//   - ItemSlot for item inventory
//
// Physics pipeline (faithful to MKWii):
//   PlayerPhysics::update() → queryCollision() → sync to KartEntity
// KartEntity handles rendering and collision queries only.

#include "rk_types.h"
#include "EGG/math.h"
#include "loaders/kmp_loader.hpp"

// Forward declarations — decompiled subsystems
namespace Kart { class KartMove; class KartDynamics; class KartDynamicsKart; class KartState; }
class PlayerSub10;
class PlayerPhysics;
class PlayerPointers;

// Forward declarations — reimplemented subsystems (actual usage)
namespace Game { class AIController; class CollisionSystem; }

// Forward declare ItemSlot (from game/ItemBox.hpp)
struct ItemSlot;

namespace Game {

class Player {
public:
    Player();
    ~Player();

    // Non-copyable (owns GL resources via KartEntity)
    Player(const Player&) = delete;
    Player& operator=(const Player&) = delete;

    // -- Initialization -------------------------------------------------------

    /// Initialize this player from a KMP start-position entry.
    /// Sets up the internal KartEntity, PlayerPhysics, and allocates item slot.
    void init(u32 playerId, bool isAI,
              const Loaders::KmpEntry::StartPosition& start);

    // -- Per-frame update ------------------------------------------------------

    /// Update kart physics and AI for one frame.
    /// Uses PlayerPhysics (decompiled MKWii physics) as the primary engine,
    /// then syncs results to KartEntity for rendering.
    /// @param dt         Delta time in seconds
    /// @param inputState Pointer to Platform::InputState (null for AI players)
    void update(f32 dt, const void* inputState = nullptr);

    // -- Rendering -------------------------------------------------------------

    /// Render the kart using OpenGL.
    void render(const EGG::Matrix44f& viewProj) const;

    /// Release all resources (GL, AI, item slot).
    void cleanup();

    // -- Position / speed accessors ---------------------------------------------

    EGG::Vector3f getPosition() const;
    f32 getSpeed() const;
    f32 getYaw() const;
    EGG::Vector3f getChaseCamPos(f32 backDist, f32 upOffset) const;

    // -- Physics state queries (delegates to PlayerPhysics) --------------------

    /// True when a speed boost is active (boost pad, mushroom, star, etc.)
    bool isBoosting() const;

    /// True when kart is on an off-road surface
    bool isOffRoad() const;

    /// True when kart collided with a wall this frame
    bool isWallHit() const;

    // -- Identity --------------------------------------------------------------

    u32 getPlayerId() const { return m_playerId; }
    bool isAI() const { return m_isAI; }
    bool isActive() const { return m_active; }

    // -- AI setup --------------------------------------------------------------

    /// Initialize the AI controller with a path and parameters.
    /// Only valid when isAI() is true.
    void initAI(const std::vector<Loaders::KmpEntry::PathPoint>& path,
                u32 startWaypoint, f32 baseSpeed, f32 steerAggro);

    // -- Visual customization ---------------------------------------------------

    /// Set a tint color for the kart (used to distinguish AI karts).
    void setTintColor(f32 r, f32 g, f32 b);

    // -- Collision -------------------------------------------------------------

    /// Set the collision system reference for KCL queries.
    void setCollisionSystem(const CollisionSystem* cs) { m_collision = cs; }

    // -- PlayerPhysics access --------------------------------------------------

    /// Access the PlayerPhysics engine (decompiled MKWii physics).
    /// Returns nullptr if not initialized.
    PlayerPhysics* getPlayerPhysics() const { return m_playerPhysics; }

    /// Access the decompiled PlayerSub10 (full MKWii physics pipeline).
    PlayerSub10* getPlayerSub10() const { return m_playerSub10; }

    /// Access the decompiled KartMove (vehicle movement state).
    Kart::KartMove* getKartMove() const { return m_kartMove; }

    /// Access the decompiled KartState (driving state flags + timers).
    Kart::KartState* getKartState() const { return m_kartState; }

    /// Access the PlayerPointers bridge (wires decompiled subsystems).
    PlayerPointers* getPlayerPointers() const { return m_playerPointers; }

    // -- KartDynamics integration -----------------------------------------------

    /// Access the KartDynamics rigid body (for advanced physics).
    /// Returns nullptr if not initialized.
    Kart::KartDynamicsKart* getKartDynamics() const { return m_kartDynamics; }

    /// Initialize KartDynamics from BSP parameters.
    void initKartDynamics(f32 halfW, f32 halfH, f32 halfD, f32 mass);

    /// Step KartDynamics simulation for one frame.
    /// @param accelInput   Acceleration input (0..1)
    /// @param steerInput   Steering input (-1..1)
    /// @param dt           Delta time in seconds
    void stepKartDynamics(f32 accelInput, f32 steerInput, f32 dt);

    // -- Kart-kart collision (static, called by SceneRace) --------------------
    /// Resolve kart-kart collisions between all players.
    /// Uses bounding sphere test + impulse-based response.
    /// @param players  Array of player pointers
    /// @param count    Number of players
    static void resolveKartKartCollisions(Player** players, u32 count);

    // -- Race state (written by SceneRace, read by position calculation) --------
    u32  m_lap;
    bool m_finished;
    f32  m_finishTime;
    u32  m_finishPosition;
    f32  m_distance;

    // Phase 27: Start-boost speed bonus (rocket start)
    // Applied per-frame during the boost window (up to 60 frames).
    // Decays linearly from max bonus to zero. Added to the player's
    // effective speed cap during Player::updateWithKartEntity().
    f32  m_startBoostSpeedBonus;

    // -- Item slot (allocated in init, freed in cleanup) ------------------------
    ItemSlot* m_itemSlot;

private:
    void updateWithPlayerPhysics(f32 dt, const void* inputState);
    void updateWithFullPipeline(f32 dt, const void* inputState);
    void updateWithKartEntity(f32 dt, const void* inputState);
    void updateWithDecompiledPhysics(f32 dt, const void* inputState);
    void syncKartDynamicsToEntity();

    u32  m_playerId;
    bool m_isAI;
    bool m_active;

    // KartEntity* stored as void* to avoid heavy header dependency in this header.
    void* m_kartEntity;

    // PlayerPhysics — decompiled MKWii stat-based physics engine (primary)
    PlayerPhysics* m_playerPhysics;

    // AI controller (owned, null for human players)
    AIController* m_aiController;

    // Collision system reference (not owned)
    const CollisionSystem* m_collision;

    // KartDynamics rigid body (owned, for advanced physics)
    Kart::KartDynamicsKart* m_kartDynamics;
    bool m_useKartDynamics;

    // Physics mode: true = PlayerPhysics drives, false = KartEntity drives
    bool m_usePlayerPhysics;

    // Decompiled MKWii subsystems (full physics pipeline)
    PlayerPointers* m_playerPointers;
    class PlayerSub10* m_playerSub10;
    Kart::KartMove* m_kartMove;
    Kart::KartState* m_kartState;
    bool m_useDecompiledPhysics;
};

} // namespace Game
