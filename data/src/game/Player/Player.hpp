#pragma once
// Player.hpp — Per-player kart entity bridging decompiled and reimplemented layers
//
// The Player class is the central per-racer integration point. It ties together:
//   - KartEntity (src/game/) for working physics + OpenGL rendering
//   - KartMove / KartDynamics (decompiled) for architecture completeness (not used for physics)
//   - PlayerPhysics formulas for stat calculations
//   - AIController for CPU players
//   - CollisionSystem for KCL collision queries
//   - ItemSlot for item inventory

#include "rk_types.h"
#include "EGG/math.h"
#include "loaders/kmp_loader.hpp"

// Forward declarations — decompiled subsystems (architecture references only)
namespace Kart { class KartMove; class KartDynamics; }

// Forward declarations — reimplemented subsystems (actual usage)
namespace Game { class AIController; class CollisionSystem; }

// Forward declare ItemSlot (from game/ItemBox.hpp)
struct ItemSlot;

// Forward declare KartDynamicsKart for physics integration
namespace Kart { class KartDynamicsKart; }

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
    /// Sets up the internal KartEntity and allocates the item slot.
    void init(u32 playerId, bool isAI,
              const Loaders::KmpEntry::StartPosition& start);

    // -- Per-frame update ------------------------------------------------------

    /// Update kart physics and AI for one frame.
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

    // -- Race state (written by SceneRace, read by position calculation) --------
    u32  m_lap;
    bool m_finished;
    f32  m_finishTime;
    u32  m_finishPosition;
    f32  m_distance;

    // -- Item slot (allocated in init, freed in cleanup) ------------------------
    ItemSlot* m_itemSlot;

private:
    u32  m_playerId;
    bool m_isAI;
    bool m_active;

    // KartEntity* stored as void* to avoid heavy header dependency in this header.
    // The .cpp file includes game/KartEntity.hpp and casts appropriately.
    void* m_kartEntity;

    // AI controller (owned, null for human players)
    AIController* m_aiController;

    // Collision system reference (not owned)
    const CollisionSystem* m_collision;

    // KartDynamics rigid body (owned, for advanced physics)
    Kart::KartDynamicsKart* m_kartDynamics;
    bool m_useKartDynamics;
};

} // namespace Game