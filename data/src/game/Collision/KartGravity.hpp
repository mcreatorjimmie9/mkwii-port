#pragma once

#include <rk_types.h>
#include <egg/math/eggVector.hpp>

namespace Kart {

class KartDynamics;

/// KartGravity — Gravity, slope, moving road, and water current physics
/// Handles all gravity-related forces applied to the kart:
/// - Standard downward gravity
/// - Slope normal computation and slope factor
/// - Moving road surface velocity
/// - Moving water current velocity
/// Address range: 0x804Cxxxx
class KartGravity {
public:
    KartGravity();
    ~KartGravity();

    /// Calculate the floor/slope normal at a given world position.
    /// Casts a ray downward from (pos) and returns the surface normal.
    /// @param pos       World position to check (XZ used, Y is ray start)
    /// @param outNormal Output normal vector (3 floats)
    void calcSlopeNormal(const EGG::Vector3f& pos, EGG::Vector3f& outNormal);

    /// Calculate a slope steepness factor from a surface normal.
    /// Returns a value from 0.0 (flat) to 1.0 (vertical wall).
    /// @param normal  Surface normal vector
    /// @return Slope factor in [0, 1]
    f32 calcSlopeFactor(const EGG::Vector3f& normal);

    /// Apply gravity force to kart dynamics, accounting for slope.
    /// Decomposes gravity into normal and tangential components relative
    /// to the surface the kart is on.
    /// @param dyn  Kart dynamics to apply forces to
    /// @param dt   Frame delta time
    void applyGravity(KartDynamics* dyn, f32 dt);

    /// Apply moving road surface velocity to the kart.
    /// Moving roads (conveyors, moving platforms) impart their velocity
    /// to karts standing on them.
    /// @param dyn  Kart dynamics to apply velocity to
    /// @param dt   Frame delta time
    void applyMovingRoad(KartDynamics* dyn, f32 dt);

    /// Apply moving water current velocity to the kart.
    /// Water currents push the kart in the current direction.
    /// Stronger currents disable acceleration.
    /// @param dyn  Kart dynamics to apply velocity to
    /// @param dt   Frame delta time
    void applyMovingWater(KartDynamics* dyn, f32 dt);

    /// Set the current floor normal (from collision system).
    void setFloorNormal(const EGG::Vector3f& nrm) { m_floorNormal = nrm; m_hasFloorNormal = true; }

    /// Set moving road velocity (from collision system).
    void setMovingRoadVel(const EGG::Vector3f& vel) { m_movingRoadVel = vel; }

    /// Set moving water velocity (from collision system).
    void setMovingWaterVel(const EGG::Vector3f& vel) { m_movingWaterVel = vel; }

    /// Set whether the kart is on a moving road surface.
    void setOnMovingRoad(bool on) { m_onMovingRoad = on; }

    /// Set whether the kart is in moving water.
    void setInMovingWater(bool in, s32 variant) { m_inMovingWater = in; m_waterVariant = variant; }

    /// Set the water variant independently with validation.
    /// @param variant  Water KCL variant (0-3)
    void setWaterVariant(s32 variant);

    /// Get the KCL type of the current floor surface.
    /// @return KCL attribute type, or 0 if no floor.
    u32 getFloorKclType() const { return m_floorKclType; }

    /// Set the KCL type of the current floor (from collision system).
    void setFloorKclType(u32 kclType) { m_floorKclType = kclType; }

    /// Check if the kart is currently in water (any variant).
    bool isInWater() const { return m_inMovingWater || m_waterVariant > 0; }

    /// Check if the kart is on a road surface (KCL type indicates road).
    bool isOnRoad() const;

    /// Get the current drowning timer (counts up while submerged).
    f32 getDrowningTimer() const { return m_drowningTimer; }

    /// Reset the drowning timer (e.g. when kart exits water).
    void resetDrowningTimer() { m_drowningTimer = 0.0f; }

    /// Get the current slope factor.
    f32 getSlopeFactor() const { return m_slopeFactor; }

    /// Initialize gravity system.
    void init();

    /// Compute the effective gravity vector for the current frame,
    /// incorporating slope influence and world gravity.
    /// @param pos  Kart position (for slope queries)
    /// @param outGravity  Output gravity vector
    void calcGravityVector(const EGG::Vector3f& pos, EGG::Vector3f& outGravity);

    /// Apply speed-dependent downforce (aerodynamic push toward ground).
    /// @param dyn  Kart dynamics to apply force to
    /// @param dt   Frame delta time
    void applyDownforce(KartDynamics* dyn, f32 dt);

    /// Compute slope acceleration/deceleration effect.
    /// Returns tangential force along the slope surface.
    /// @param normal  Surface normal at kart position
    /// @param kartSpeed  Current kart speed (for friction scaling)
    /// @return Tangential slope force vector
    EGG::Vector3f calcSlopeEffect(const EGG::Vector3f& normal, f32 kartSpeed) const;

    /// Reduce gravity near track edges to allow edge-riding tricks.
    /// @param pos  Kart position
    /// @param dyn  Kart dynamics
    void handleEdgeGravity(const EGG::Vector3f& pos, KartDynamics* dyn);

    /// Override gravity during cannon flight (parabolic trajectory).
    /// @param dyn  Kart dynamics
    /// @param cannonDir  Cannon launch direction
    /// @param dt   Frame delta time
    void handleCannon(KartDynamics* dyn, const EGG::Vector3f& cannonDir, f32 dt);

    /// Per-frame gravity accumulation — calls applyGravity, applyDownforce,
    /// applyMovingRoad, applyMovingWater in sequence.
    /// @param dyn  Kart dynamics
    /// @param dt   Frame delta time
    void update(KartDynamics* dyn, f32 dt);

    /// Get the gravity vector influenced by floor normal.
    /// @return Gravity vector adjusted for current floor slope
    EGG::Vector3f getGravityNormal() const;

private:
    static const f32 GRAVITY_ACCEL;        // Standard gravity acceleration (units/frame^2)
    static const f32 MAX_SLOPE_FORCE;      // Maximum tangential slope force
    static const f32 ROAD_VEL_TRANSFER;    // How much road velocity transfers to kart
    static const f32 WATER_VEL_TRANSFER;   // How much water current transfers to kart

    EGG::Vector3f m_floorNormal;       // Current floor surface normal
    bool m_hasFloorNormal;             // Whether floor normal is valid
    f32 m_slopeFactor;                 // Current slope steepness [0,1]
    u32 m_floorKclType;                // KCL attribute type of current floor

    EGG::Vector3f m_movingRoadVel;     // Moving road surface velocity
    bool m_onMovingRoad;               // Currently on a moving road

    EGG::Vector3f m_movingWaterVel;    // Moving water current velocity
    bool m_inMovingWater;              // Currently in moving water
    s32 m_waterVariant;                // Water KCL variant (affects behavior)
    f32 m_drowningTimer;               // Time spent underwater (drowning check)
};

/// Check if fall speed exceeds threshold for fall damage/rescue.
/// @param fallSpeed  Current downward velocity (positive = downward)
/// @return true if fall speed exceeds the rescue threshold
bool KartGravity_calcFallDamage(f32 fallSpeed);

} // namespace Kart