#pragma once

// KartMovement module - 100 functions
// Covers: KartDynamics, KartPhysicsSub, KartWheelPhysics, PlayerSub10,
//          KartSus, KartMove, KartBody, KartTire, KartState, KartSub,
//          KartSettings, KartCollide, KartHitbox, KartInput

// Core physics
#include "KartDynamics.hpp"
#include "KartPhysicsSub.hpp"
#include "KartWheelPhysics.hpp"

// Player-specific movement
#include "PlayerSub10.hpp"

// Kart high-level movement
#include "KartMove.hpp"

// Sub-components
#include "KartSub.hpp"
#include "KartState.hpp"
#include "KartSettings.hpp"
#include "KartBody.hpp"
#include "KartTire.hpp"
#include "KartHitbox.hpp"
#include "KartInput.hpp"