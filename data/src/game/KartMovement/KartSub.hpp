#pragma once

#include <rk_types.h>
#include <decomp.h>

namespace Kart {

class KartSettings;
class KartDynamics;
class KartDynamicsKart;
class KartDynamicsBike;
class KartPhysics;
class KartState;
class KartInput;
class KartMove;
class KartSus;
class KartSusPhysics;
class KartWheelPhysics;
class KartTire;

// ===== KartSub =====
// Top-level kart component creation/initialization
// These functions orchestrate the construction and wiring of all
// kart sub-components: physics, collision, input, state, etc.
//
// The MKW kart system uses a flat component model where each kart
// owns a set of sub-objects (settings, dynamics, physics, state,
// input, movement, body, suspension ×4, wheel physics ×4, tires).
// KartSub functions handle the factory and lifecycle of these parts.

// 0x80598230 - KartSub_createComponents
// Size: 560 bytes
// Creates all kart sub-components via heap allocation + constructor calls.
// Does NOT initialize — call KartSub_init() afterwards.
// Calls: 0x805907bc, 0x8059088c, 0x8059024c, 0x80788484, 0x80590818,
//         0x805907bc, 0x8059156c, 0x805907bc, 0x80591560, 0x80555bf4
void KartSub_createComponents();

// 0x80598460 - KartSub_init
// Size: 388 bytes
// Initializes all kart sub-components after creation.
// Reads player/vehicle config from RaceConfig and sets up physics.
// Calls: 0x80590a9c, 0x80590690, 0x805916a4, 0x805961bc, 0x805945d4,
//         indirect, 0x80569880, 0x80591658, 0x805b7904, 0x805907bc,
//         0x8058496c, 0x805917c4, 0x8059174c, 0x80590e98, indirect
void KartSub_init();

// 0x80598600 - KartSub_reset
// Resets all kart sub-components to their initial state.
// Called when respawning or restarting a race.
void KartSub_reset();

// 0x80598700 - KartSub_calc
// Per-frame update: updates input, physics, state, and movement.
// Called every frame during the race.
void KartSub_calc();

// 0x80598800 - KartSub_destroy
// Destroys all kart sub-components and nulls global pointers.
// Called when a kart is removed from the race.
void KartSub_destroy();

} // namespace Kart