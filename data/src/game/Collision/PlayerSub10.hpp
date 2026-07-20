#pragma once
#include <rk_types.h>
#include <game/kart/KartObjectProxy.hpp>  // For PlayerPointers

class PlayerPointers;

#include <egg/math/eggVector.hpp>

namespace Kart {

class KartObjectProxy;
class KartDynamics;

/// PlayerSub10 handles player movement, driving physics, and respawn logic.
/// It is a large class (0x294 bytes) that manages speed, turning, drifting,
/// boosting, and vehicle state transitions.
class PlayerSub10 {
public:
    virtual ~PlayerSub10();

    // Virtual functions (key ones documented):
    virtual void setTurnParams();
    virtual void activateStar();
    virtual void activateMega();
    virtual void applyInk(s32 frames);
    virtual void cancelWheelie();
    virtual bool checkWheelie();
    virtual void updateTurn();
    virtual void updateVehicleSpeed();
    virtual void updateUpsWhileAirborne();
    virtual void updateVehicleRotationVector(f32 turn);
    virtual f32 getWheelieSoftSpeedLimitBonus();
    virtual void updateWheelie();
    virtual bool canHop();
    virtual void hop();
    virtual void updateMtCharge();
    // ... more virtual functions ...

    PlayerSub10();

    /// Compute the speed reduction factor when colliding with a wall.
    /// Takes the wall normal and the player's forward direction,
    /// computes the dot product to determine how head-on the collision is,
    /// and reduces speed proportionally. A more head-on collision reduces
    /// speed more than a glancing one.
    f32 computeWallCollisionSpeedFactor(const EGG::Vector3f& wallNrm);

    /// Handle respawning the player after falling off-course or being
    /// eliminated. Resets position to the last valid track position,
    /// zeroes velocity, and applies respawn invincibility frames.
    void doRespawn();

    /// Compute the speed reduction factor when driving off-road.
    /// Base penalty is 0.5 (half speed), modified by vehicle type,
    /// KCL surface type, and active power-ups (star/mega bypass, trick boost reduces).
    /// @addr 0x80570A54
    f32 computeOffroadSpeedFactor();

    /// Combine all active speed boosts into a single multiplier.
    /// Mushroom/MT: +0.5, Star: x2, Bullet Bill: 3.0 (constant override).
    /// @addr 0x80570B0C
    f32 computeBoostSpeedMultiplier();

    /// Push the kart out of a collision and reflect its velocity
    /// component along the collision normal.
    /// @addr 0x80570BF4
    void applyCollisionResponse(const EGG::Vector3f& collisionNormal, f32 penetration);

    /// Check if the kart is out of bounds and trigger respawn if needed.
    /// Detects: Y position below threshold (fell off), and lateral OOB
    /// (too far from track center).
    /// @addr 0x80570C4C
    void checkAndResetOOB();

    // ... many more methods (update, acceleration, turning, etc.) ...

    PlayerPointers* playerPointers;
    u8 _04[0x0C - 0x04];
    // vtable at 0x0C
    f32 speedMultiplier;
    f32 baseSpeed;
    f32 softSpeedLimit;
    f32 vehicleSpeed;
    f32 lastSpeed;
    f32 hardSpeedLimit;
    f32 acceleration;
    f32 speedDragMultiplier;
    EGG::Vector3f smoothedUp;
    EGG::Vector3f up;
    EGG::Vector3f landingDir;
    EGG::Vector3f dir;
    EGG::Vector3f lastDir;
    EGG::Vector3f vel1Dir;
    // ... more fields up to 0x294 ...
};

} // namespace Kart