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