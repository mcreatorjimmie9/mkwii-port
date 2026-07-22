#pragma once
// PlayerPointers — per-player runtime pointer graph for decompiled subsystems
//
// In MKWii, PlayerSub10 and other subsystems access sibling components
// through this pointer table. Each kart has one PlayerPointers instance
// that links KartMove, KartState, KartDynamics, KartBody, etc.
//
// Layout verified against community player.h at offset 0x004.

#include "rk_types.h"

namespace Kart {
class KartMove;
class KartBody;
class KartState;
class KartDynamics;
class KartCollide;
} // namespace Kart

// Forward declaration — full definition in Physics/PlayerSub10.hpp
class PlayerSub10;

class PlayerPointers {
public:
    PlayerPointers()
        : raceData(nullptr)
        , kartMovement(nullptr)
        , kartBody(nullptr)
        , kartState(nullptr)
        , mDynamics(nullptr)
        , mCollide(nullptr)
        , playerSub10(nullptr)
        , mPlayerIdx(0) {}

    // Typed accessors
    Kart::KartMove*       getKartMove()    const { return reinterpret_cast<Kart::KartMove*>(kartMovement); }
    Kart::KartBody*       getKartBody()    const { return reinterpret_cast<Kart::KartBody*>(kartBody); }
    Kart::KartState*      getKartState()   const { return reinterpret_cast<Kart::KartState*>(kartState); }
    Kart::KartDynamics*   getDynamics()   const { return reinterpret_cast<Kart::KartDynamics*>(mDynamics); }
    Kart::KartCollide*     getKartCollide() const { return reinterpret_cast<Kart::KartCollide*>(mCollide); }
    PlayerSub10*           getPlayerSub10() const { return reinterpret_cast<PlayerSub10*>(playerSub10); }

    // Raw void* fields (layout matches binary)
    void* raceData;        // 0x00: RaceData or similar top-level context
    void* kartMovement;    // 0x04: Kart::KartMove (0x294 bytes)
    void* kartBody;        // 0x08: Kart::KartBody
    void* kartState;       // 0x0C: Kart::KartState
    void* mDynamics;        // 0x10: Kart::KartDynamics (rigid body)
    void* mCollide;        // 0x14: Kart::KartCollide (collision subsystem)
    void* playerSub10;     // 0x18: Kart::PlayerSub10 (main physics controller)
    u32  mPlayerIdx;       // 0x1C: player index (0-based)

    // Helper: populate all pointers from a created set of subsystems
    void wire(Kart::KartMove* move, Kart::KartState* state,
              Kart::KartDynamics* dynamics, PlayerSub10* sub10,
              u32 playerIdx) {
        kartMovement = move;
        kartState = state;
        mDynamics = dynamics;
        playerSub10 = sub10;
        mPlayerIdx = playerIdx;
    }
};
