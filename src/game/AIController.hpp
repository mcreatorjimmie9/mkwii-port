#pragma once
// =============================================================================
// AIController.hpp — Simple AI kart controller for M7
// MAESTRO Phase 7, Milestone M7: AI Opponent
// =============================================================================
//
// Drives a KartEntity along a predefined path (POTI waypoints from KMP).
// Each frame it steers the kart toward the next waypoint, advances when
// close enough, and loops the path for continuous racing.
//
// Multiple AI karts can share the same path with different starting
// offsets (startWaypoint) to spread them around the track.
//
// Dependencies: rk_types.h, EGG/math.h, KartEntity.hpp
// =============================================================================

#include "rk_types.h"
#include "EGG/math.h"          // EGG::Vector3f, EGG::DegToRad
#include "loaders/kmp_loader.hpp"  // Loaders::KmpEntry::Path, PathPoint
#include "platform/input.hpp"     // Platform::InputState

class KartEntity;  // Forward declaration (global namespace)

namespace Game {

// =============================================================================
// AIController — Steers a KartEntity along a path of waypoints
// =============================================================================
class AIController {
public:
    // -- Construction ----------------------------------------------------------

    /// Default constructor. AI starts inactive.
    AIController();

    /// Destructor.
    ~AIController();

    // Non-copyable
    AIController(const AIController&) = delete;
    AIController& operator=(const AIController&) = delete;

    // -- Initialization -------------------------------------------------------

    /// Initialize the AI controller with a path (from KMP POTI section).
    /// @param path           Array of waypoints defining the race line
    /// @param startWaypoint  Initial waypoint index (0-based, for spacing AIs)
    /// @param baseSpeed      Maximum speed the AI will drive (units/sec)
    /// @param steerAggro     How aggressively the AI steers (0.0-2.0, 1.0=normal)
    void init(const std::vector<Loaders::KmpEntry::PathPoint>& path,
              u32 startWaypoint = 0,
              f32 baseSpeed = 2500.0f,
              f32 steerAggro = 1.0f);

    // -- Per-frame update ------------------------------------------------------

    /// Generate an InputState that steers the kart toward the next waypoint.
    /// The caller should pass this to KartEntity::update().
    /// @param kartPos   Current kart world position
    /// @param kartYaw   Current kart facing yaw (degrees)
    /// @param dt        Delta time in seconds
    /// @return         An InputState with steer/accelerate/brake filled in
    Platform::InputState computeInput(const EGG::Vector3f& kartPos,
                                       f32 kartYaw,
                                       f32 dt);

    /// Convenience: update a KartEntity directly using computed input.
    /// Calls computeInput(), then kart.update().
    /// @param kart   The kart entity to drive
    /// @param dt     Delta time in seconds
    void updateKart(::KartEntity& kart, f32 dt);

    // -- Status ----------------------------------------------------------------

    bool isActive() const { return m_isActive; }
    u32  getCurrentWaypoint() const { return m_currentWaypoint; }
    u32  getWaypointCount() const { return static_cast<u32>(m_path.size()); }
    f32  getDistToNext() const { return m_distToNext; }

private:
    // -- Internal helpers ------------------------------------------------------

    /// Calculate the angle (degrees) and signed direction from the kart's
    /// current facing to the target waypoint.
    /// @return  Angle in degrees (always positive), and outSign is +1 or -1
    f32 angleToTarget(const EGG::Vector3f& kartPos, f32 kartYaw,
                      const EGG::Vector3f& target, int& outSign) const;

    /// Advance to the next waypoint. Wraps around if looping.
    void advanceWaypoint();

    // -- Path data -------------------------------------------------------------
    std::vector<Loaders::KmpEntry::PathPoint> m_path;  // Copy of waypoint path

    // -- State -----------------------------------------------------------------
    u32  m_currentWaypoint;   // Index of the current target waypoint
    f32  m_baseSpeed;         // Target cruising speed (units/sec)
    f32  m_steerAggro;        // Steering aggressiveness multiplier
    f32  m_arrivalDist;       // Distance threshold to advance waypoint
    f32  m_distToNext;        // Cached distance to current target waypoint
    bool m_isActive;          // True after init()
};

} // namespace Game
