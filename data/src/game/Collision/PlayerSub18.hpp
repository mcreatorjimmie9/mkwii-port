#include "KartHitbox.hpp"
#pragma once

#include <rk_types.h>

#include <egg/math/eggVector.hpp>
#include <egg/math/eggQuat.hpp>
#include <egg/math/eggMatrix.hpp>

namespace Kart {

class KartObjectProxy;
class HitboxGroup;
class KartDynamics;
class KartCollisionInfo;
class BspHitbox;

// Forward declarations for Field and Item systems
namespace Field { struct ColInfo; }

/// PlayerSub18 handles player-specific collision processing:
/// kart-kart collisions, item collisions, and collision response handlers.
/// This is the per-player collision subsystem that extends KartCollide.
class PlayerSub18 {
public:
    virtual ~PlayerSub18();

    virtual void processVehicleBodyCollision(KartCollisionInfo* colInfo, Hitbox* hitbox, void* unk, u32* kclFlags);
    virtual void processWheelCollision(KartCollisionInfo* colInfo, Hitbox* hitbox, void* unk, u32* kclFlags);

    PlayerSub18();

    /// Check for collisions between this player and all other players.
    /// Handles kart-kart bump collisions with a 10-frame cooldown.
    void checkPlayerCollision(s32 playerCount, void* playerArray);

    /// Check for item collisions (bananas, shells, mushrooms, stars, etc.)
    void checkItemCollision();

    /// Find a collision between this player's hitbox and items in the world.
    /// Returns -1 if no collision found, otherwise the collided item index.
    s32 findCollision();

    /// Initialize hitboxes from BSP data for this player.
    void initHitboxes(BspHitbox* bspHitboxes);

    // Item collision handlers - each returns 0 if not handled, non-zero if handled
    s32 handleNoopCollision();
    s32 handleBananaCollision(s32 itemId);
    s32 handleShellCollision(s32 itemId, s32 someFlag);
    s32 handleBlueShellCollision(s32 itemId, s32 someFlag, s32 racePhase);
    s32 handleBombCollision(s32 itemId, s32 someFlag);
    s32 handleMushroomCollision(s32 itemId, s32 someFlag);
    s32 handleStarCollision(s32 itemId, s32 someFlag, s32 racePhase);
    s32 handleFibCollision(s32 itemId, s32 someFlag);

    /// Inner collision detection between hitbox and world items.
    /// Checks sphere-sphere collision and returns collision info.
    static void findCollisionInner(f32 distSq, u32 distThreshold, void* colInfo);

    PlayerPointers* playerPointers;
    u8 _08[0x2C - 0x08];
    u32 surfaceProperties;
    u8 _30[0x4C - 0x30];
    s16 preRespawnTimer;
    s16 solidOobTimer;
    u8 _4C[0x74 - 0x4C];
};

} // namespace Kart