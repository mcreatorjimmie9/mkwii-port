#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Warray-bounds"

#include "PlayerSub10Bike.hpp"
#include "PlayerBoost.hpp"
#include "PlayerTrick.hpp"
#include <cmath>

// EGG::Heap allocator stub
namespace EGG {
class Heap {
public:
    static void* alloc(u32 size) { return nullptr; /* Pluggable allocator — replace with real EGG::Heap implementation */ }
};
}

// PlayerZipper forward declaration (used in initSubObjects)
class PlayerZipper;

// =============================================================================
// PlayerSub10Bike — Bike-specific physics overrides
// Address range: 0x80587500 - 0x805897D8
// =============================================================================

extern "C" {
// External helpers from StaticR.rel
void sub_80590a9c();       // getPlayerId
void sub_805907bc();       // getKartPhysics
void sub_805907d4();       // getKartPhysics2
void sub_805907e0();       // getBodyCollInfo
void sub_805907f0();       // applyWheelieEffect
void sub_8059040c();       // getPlayerPos
void sub_8059045c();       // setSomeState
void sub_8059024c();       // getRawPos
void sub_80590434();       // getInputState
void sub_80590cfc();       // getUpVector
void sub_805906a4();       // getDriftInput
void sub_80590a50();       // getKartBodyType
void sub_80590adc();       // playSound
void sub_805907a4();       // getSomeState
void sub_80591084();       // setBodyEffect
void sub_80591498();       // checkWheelieInput
void sub_80590e98();       // resetDriftState
void sub_80591090();       // setDriftState
void sub_80555bf4();       // EGG::Heap::alloc
void sub_80537f4c();       // getRaceInfo
void sub_80577fc4();       // PlayerSub10 ctor
void sub_80575a44();       // PlayerTrick ctor
void sub_805766b8();       // PlayerTrick::end
void sub_8057829c();       // PlayerSub10::setTurnParams
void sub_805784d4();       // PlayerSub10::init
void sub_8057fd18();       // PlayerSub10::tryStartJumpPad
void sub_8057d1d4();       // PlayerSub10::updateStandstillBoostRot
void sub_80586a1c();       // PlayerSub10::someRotUpdate
void sub_805837cc();       // PlayerSub10::cancelAllEffects
void sub_80516c00();       // Vec3::cross
void sub_806a5d24();       // setModelEffect
void sub_806a5ea0();       // setModelEffect2
void sub_80708a6c();       // someEffect
void sub_80708c08();       // someEffect2
void sub_807cbb5c();       // bodyEffect
void sub_808677c4();       // startWheelieSound
void sub_805b5500();       // PlayerZipper ctor
void sub_805b4b24();       // somePhysicsInit
void sub_805b6c90();       // resetZipper
void sub_0x80591090();     // setDriftState (0x prefix variant)
void sub_0x805b6c90();     // resetZipper (0x prefix variant)
void sub_0x80591498();     // checkWheelieInput (0x prefix variant)
void sub_0x805914a8();     // someCheck — returns frame count/state
}

// =============================================================================
// Destructor — 0x80589704
// =============================================================================
PlayerSub10Bike::~PlayerSub10Bike() {
    // Just calls base check, no special cleanup
}

// =============================================================================
// Constructor — 0x80587b70
// =============================================================================
PlayerSub10Bike::PlayerSub10Bike() {
    // Call PlayerSub10 constructor (inlined)
    PlayerSub10::init(true, false);

    turnParams = nullptr;
    leanRot = 0.0f;
}

// =============================================================================
// initMath — 0x80587bb8
// Initializes math-related state for remote/local
// =============================================================================
void PlayerSub10Bike::initMath(bool isRemote) {
    if (isRemote) {
        // Remote path: set initial rotation
        // NOP for now — remote players receive state from network
    }
    // Common math init
}

// =============================================================================
// initSubObjects — 0x80587bf8
// Creates trick and zipper sub-objects for the bike
// =============================================================================
void PlayerSub10Bike::initSubObjects(bool isRemote) {
    // Create PlayerTrickBike for bike-specific trick handling.
    // Placement new into heap-allocated memory at offset 0x258.
    // The actual size of PlayerTrickBike is determined by the vtable at 0x808b5e78.
    // trick = new (EGG::Heap::alloc(sizeof(PlayerTrickBike))) PlayerTrickBike();
    // trick->pointers = playerPointers;
    // For now, leave trick as the base-class default (set by PlayerSub10::init)

    // Create PlayerZipper for boost pad / mushroom speed management.
    // PlayerZipper is 0x78 bytes — allocated at offset 0x25C.
    // zipper = new (EGG::Heap::alloc(sizeof(PlayerZipper))) PlayerZipper();
    // For now, leave zipper as null until PlayerZipper is fully defined.

    // Allocate internal physics sub-object (0x50 bytes) at offset 0x260.
    // This holds bike-specific collision response data.
    // void* subObj = EGG::Heap::alloc(0x50);
    // *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x260) = subObj;

    // Bike physics sub-init (0x50 bytes)
    sub_805b4b24();
}

// =============================================================================
// setTurnParams — 0x80587c94
// Sets bike-specific turning parameters from KartParam tables
// =============================================================================
void PlayerSub10Bike::setTurnParams() {
    // Call base kart version first
    PlayerSub10::setTurnParams();

    // Determine vehicle body type
    // sub_80590a50 returns: 1 = small bike, 2 = large bike
    u32 bodyType = 0; // placeholder for getKartBodyType

    if (bodyType == 1) {
        // Small bike: use small bike turn params
        turnParams = reinterpret_cast<void*>(0x00000000); // loaded from global table
    } else if (bodyType == 2) {
        // Large bike: use large bike turn params
        turnParams = reinterpret_cast<void*>(0x00000030); // offset into table
    } else {
        // Default / unknown
        turnParams = nullptr;
    }

    // Load turn params from KartParam
    // For small bike: turnParams[0].leanRotCap, turnParams[0].leanRotInc
    // For large bike: turnParams[0x30/4].field_18, turnParams[0x30/4].field_1c
    if (turnParams != nullptr) {
        if (bodyType == 2) {
            leanRotCap = *reinterpret_cast<f32*>(reinterpret_cast<uintptr_t>(turnParams) + 0x18);
            leanRotInc = *reinterpret_cast<f32*>(reinterpret_cast<uintptr_t>(turnParams) + 0x1C);
        } else {
            leanRotCap = *reinterpret_cast<f32*>(reinterpret_cast<uintptr_t>(turnParams) + 0x04);
            leanRotInc = *reinterpret_cast<f32*>(reinterpret_cast<uintptr_t>(turnParams) + 0x08);
        }
    }
}

// =============================================================================
// init — 0x80587d40
// Initializes the bike physics state to defaults
// =============================================================================
// init() is handled by the base PlayerSub10::init(true, false) call in the
// constructor, followed by zeroing bike-specific fields in the ctor body.
// The method is not separately declared in PlayerSub10Bike.hpp because the
// bike init is split between the ctor (0x80587b70) and initMath (0x80587bb8).
/*
void PlayerSub10Bike::init() {
    // Call base init
    PlayerSub10::init(true, false);

    f32 zero = 0.0f;
    leanRot = zero;
    leanRotCap = zero;
    leanRotInc = zero;
    wheelieRot = zero;
    maxWheelieRot = zero;
    wheelieTimer = 0;
    isInWheelie = false;
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x2B0) = 0;
    wheelieCounter = 0;
    wheelieCooldown = 0;
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x2BC) = 0;
}
*/

// =============================================================================
// updateSpecialFloor — 0x80587500
// Bike-specific special floor handling (boost panel, ramp, jump pad)
// =============================================================================
// updateSpecialFloor() is inlined into PlayerSub10::updateSpecialFloor() at
// 0x80587590 for the bike override. The bike version additionally handles
// wheelie cancellation on boost panels and applies a bike-specific speed
// multiplier from the floor data. The method is not separately declared in
// PlayerSub10Bike.hpp because it overrides the base via virtual dispatch.
/*
void PlayerSub10Bike::updateSpecialFloor() {
    sub_80590a9c();

    // Increment ghost vanish timer
    ghostVanishTimer++;

    // Multiply vehicle speed by special floor factor
    vehicleSpeed *= 1.0f; // placeholder: loaded from floor data table

    // Clear special floor flags and set appropriate body flags
    // This handles boost panels, trickable surfaces, etc.
    sub_805907bc();
}
*/ // end updateSpecialFloor()

// =============================================================================
// activateMega — 0x805875d0
// Bike-specific mega mushroom activation
// =============================================================================
void PlayerSub10Bike::activateMega() {
    // Check if already in mega or certain conditions
    // (reads from bitfield1 / bitfield2)

    // Store current offroad invincibility frames
    offroadInvincibilityFrames = *reinterpret_cast<s16*>(0x00000000); // global

    // Check driving direction and conditions for mega
    u32 drivingDir = drivingDirection;

    // Scale up vehicle
    // Set mega-related flags
    // Reset wheelie state during mega

    // If currently in wheelie, cancel it
    if (isInWheelie) {
        cancelWheelie();
    }

    // Apply mega effects
    // Set body scale flags

    // Reset special floor
    specialFloor = 0;
}

// =============================================================================
// computeWheelieParams — 0x805879e4
// Computes wheelie lean parameters from the turn params table
// =============================================================================
void PlayerSub10Bike::computeWheelieParams() {
    f32 speed = vehicleSpeed;

    // Load turn params and compute dot product for direction
    f32 turnParamDot = 0.0f; // dir dot turnParams.direction
    // ... (simplified from decompiled)

    // Clamp and apply bounds
    f32 minBound = -1.0f;
    f32 maxBound = 1.0f;

    if (turnParamDot < minBound) {
        turnParamDot = minBound;
    }
    if (turnParamDot > maxBound) {
        turnParamDot = maxBound;
    }

    // Compute lean rotation from speed
    f32 leanSpeedFactor = 0.0f;
    if (speed >= 0.0f) {
        leanSpeedFactor = speed;
    } else {
        leanSpeedFactor = 0.0f;
    }

    // Assert-like check on leanRotInc
    f32 absLeanRotInc = fabsf(leanRotInc);
    if (absLeanRotInc < 0.0f || absLeanRotInc > 100.0f) {
        // Debug assertion — log warning
    }

    // Compute final lean rotation
    if (turnParamDot != 0.0f) {
        leanRot = speed / turnParamDot;
        // Clamp to max wheelie rot
        if (leanRot > maxWheelieRot) {
            leanRot = maxWheelieRot;
        }
    } else {
        leanRot = 0.0f;
    }
}

// =============================================================================
// getSoftSpeedLimit — 0x80588390
// Helper to set soft speed limit during wheelie
// =============================================================================
void PlayerSub10Bike::getWheelieSoftSpeedLimitBonusHelper() {
    // Set body flag for wheelie state
    u32 bodyFlags = *reinterpret_cast<u32*>(playerPointers); // simplified
    bodyFlags |= 0x2000; // wheelie flag
    *reinterpret_cast<u32*>(playerPointers) = bodyFlags;

    // Reset wheelie timer and set state
    wheelieTimer = 0;
    isInWheelie = true;
    maxWheelieRot = *reinterpret_cast<f32*>(0x00000000); // global table
    wheelieCounter = *reinterpret_cast<s16*>(0x00000000); // global max
    wheelieCooldown = *reinterpret_cast<s16*>(0x00000000); // global cooldown
    wheelieRotSpeed = 0.0f;

    sub_805907e0();  // getBodyCollInfo
    sub_808677c4();  // startWheelieSound

    // After sound call, reset some flags
    bodyFlags = *reinterpret_cast<u32*>(playerPointers);
    bodyFlags &= ~0x0004; // clear bit 2
    *reinterpret_cast<u32*>(playerPointers) = bodyFlags;
    isInWheelie = false;
    wheelieRotSpeed = 0.0f;
    wheelieCounter = 0;
}

// =============================================================================
// updateWheelie — 0x80588434
// Updates wheelie state each frame (bike wheelie mechanics)
// =============================================================================
void PlayerSub10Bike::updateWheelie() {
    // Get drift input state via vtable
    // (vtable[0x74/4] indirect call)
    bool someInput = false;

    // Decrement wheelie cooldown
    wheelieCooldown--;
    if (wheelieCooldown < 0) {
        wheelieCooldown = 0;
    }

    // Check if in a valid state for wheelie
    // Read bitfield1 for drift/wheelie flags
    u32 bf1 = *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 4);
    if ((bf1 & 0x0004) != 0) {
        // Check bitfield2 for wheelie-related states
        u32 bf2 = *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 8);
        u32 masked = bf2 & 0x00180000;

        if (masked != 0) {
            // Start wheelie boost ramp down
            getWheelieSoftSpeedLimitBonusHelper();

            // Check if speed is above threshold
            f32 absSpeed = fabsf(speedRatio); // kclWheelSpeedFactor
            if (absSpeed < *reinterpret_cast<f32*>(0x00000000 + 0x04)) {
                // Speed below wheelie threshold
            }

            // Increment wheelie counter
            wheelieCounter++;
            s16 maxCounter = *reinterpret_cast<s16*>(0x00000000 + 0x100);
            if (wheelieCounter > maxCounter) {
                wheelieCounter = 0;
            }
        }
    }

    // Check if should cancel wheelie
    if (wheelieTimer > 0) {
        // vtable call to get soft speed limit
        // (vtable[0x70/4] indirect call)
        s16 someMax = *reinterpret_cast<s16*>(0x00000000 + 0x1F4);
        if (wheelieTimer > someMax) {
            // vtable call to cancel
        }
    }

    // Update wheelie rotation
    // Check if vehicle is on the ground and in appropriate state
    u32 bf3 = *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 0x0C);
    if ((bf3 & 0x000C0000) != 0) {
        // On ground — apply wheelie rotation increment
        f32 rotInc = wheelieRot + *reinterpret_cast<f32*>(0x00000000 + 0x1D0);
        wheelieRot = rotInc;
    } else {
        // In air or off ground
        f32 rotDec = wheelieRot - *reinterpret_cast<f32*>(0x00000000 + 0x1D4);
        wheelieRot = rotDec;
    }

    // Decay wheelie rotation speed
    wheelieRotSpeed -= *reinterpret_cast<f32*>(0x00000000 + 0x1DC);
    if (wheelieRotSpeed < -*reinterpret_cast<f32*>(0x00000000 + 0x1E0)) {
        wheelieRotSpeed = -*reinterpret_cast<f32*>(0x00000000 + 0x1E0);
    }

    // Apply wheelie rot to wheelieRot
    wheelieRot += wheelieRotSpeed;

    // Clamp wheelieRot
    if (wheelieRot < 0.0f) {
        wheelieRot = 0.0f;
    }
    if (wheelieRot > maxWheelieRot) {
        wheelieRot = maxWheelieRot;
    }

    // Apply torque from wheelie to vehicle rotation
    // Cross product of up vector with direction, scaled by wheelieRot
    f32 crossMag = 0.0f; // |up x dir| computed inline
    f32 torqueFactor = maxWheelieRot - fabsf(wheelieRot);
    f32 torqueScale = 0.0f;

    if (crossMag > *reinterpret_cast<f32*>(0x00000000 + 0x1F8)) {
        // Apply normal torque
        f32 dot = /* direction dot up */ 0.0f;
        if (dot < 0.0f) {
            dot = -dot;
        }
        torqueScale = dot * torqueFactor;
    }

    // Apply to vehicle angular velocity
    // (modifies vel at offset 0xE4, 0xE8, 0xEC)

    // Check if wheelie should end
    if (isInWheelie) {
        wheelieCounter++;
        s16 wheelieMax = *reinterpret_cast<s16*>(0x00000000 + 0x1E4);
        if (wheelieCounter >= wheelieMax) {
            // End wheelie
            isInWheelie = false;
            // Clear wheelie body flag
            u32 bf = *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 4);
            bf |= 0x0010; // set bit 4
            *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 4) = bf;
            return;
        }
        // Clear wheelie active flag
        u32 bf = *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 4);
        bf &= ~0x001C; // clear bits 2-4
        *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 4) = bf;
    }
}

// =============================================================================
// updateMtCharge — 0x805887d8
// Bike-specific MT charge update (different from kart)
// =============================================================================
void PlayerSub10Bike::updateMtCharge() {
    sub_80590434(); // getInputState

    // Read input state
    u8 inputState = *reinterpret_cast<u8*>(reinterpret_cast<char*>(this) + 0x3A);
    u32 bf = *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 4);
    bool isDrifting = (bf & 0x0004) != 0;

    if (!isDrifting) {
        // Not drifting — check if we should start charging
        if (inputState == 1) {
            // Drift input held, start MT charge
            // vtable[0x6C/4] call
        }
    }

    // Check MT charge states
    if (driftState == 1) {
        // Charging MT
        if (wheelieCooldown == 0) {
            // Can charge — vtable[0x70/4] call
        }
    } else if (driftState == 2) {
        // MT charged
        if (wheelieCooldown == 0) {
            // Can release — vtable[0x70/4] call
        }

        // Load MT charge frames from global table
        wheelieCooldown = *reinterpret_cast<s16*>(0x00000000); // global max
        // Reset counter
    }

    // Check if should end MT charge
    // (drift state 3 = SMT charged)
    if (driftState == 3) {
        // Already in SMT, just update
    }

    // Update MT charge timer based on speed direction
    s16 direction = *reinterpret_cast<s16*>(playerPointers);
    f32 lateralSpeed = *reinterpret_cast<f32*>(reinterpret_cast<char*>(playerPointers) + 4 + 0x88);

    f32 speedThreshold = *reinterpret_cast<f32*>(0x00000000 + 0x3DC);
    bool isForward = lateralSpeed >= 0.0f;

    s16 chargeIncrement = isForward ? 1 : -1;
    mtCharge += chargeIncrement;

    // Clamp MT charge
    s16 mtMax = *reinterpret_cast<s16*>(0x00000000 + 0x3D2);
    s16 mtMin = *reinterpret_cast<s16*>(0x00000000 + 0x3D0);
    if (mtCharge > mtMax) {
        mtCharge = mtMax;
    }
    if (mtCharge < mtMin) {
        mtCharge = mtMin;
    }

    // Check if MT is fully charged
    bool mtFull = (mtCharge >= mtMax);
    if (mtFull) {
        mtCharge = mtMax;
    }

    // Transition from charging to charged
    if (!mtFull) {
        // Still charging
        if (driftState == 1) {
            // vtable[0x6C/4] call — update charge visual
        }
    }
}

// =============================================================================
// cancelWheelie_v1 (cancelWheelieAlt) — 0x80588990
// Full wheelie cancel with state reset
// =============================================================================
void PlayerSub10Bike::cancelWheelieAlt() {
    f32 zero = 0.0f;
    u16 zero16 = 0;

    // Reset wheelie visual state
    *reinterpret_cast<u16*>(reinterpret_cast<char*>(this) + 0x118) = zero16;

    // Clear drift body flags
    u32 bf = *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 4);
    bf &= ~0x0F00; // clear bits 8-11
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 4) = bf;
    bf = *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 8);
    bf &= ~0x0F00; // clear bits 8-11
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 8) = bf;

    // Reset drift-related timers
    mtBoost = zero16;
    *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0x1B0) = zero;

    // Clear more body flags
    bf = *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 4);
    bf &= ~0x0007; // clear bits 0-2
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 4) = bf;

    // Reset drift visual effects
    sub_80590e98(); // resetDriftState
    *reinterpret_cast<u16*>(reinterpret_cast<char*>(this) + 0x1C4) = zero16;

    // Set drift state flags
    sub_0x80591090(); // setDriftState(4, 0, 1) — forced end
    *reinterpret_cast<u16*>(reinterpret_cast<char*>(this) + 0x12C) = zero16;

    // Clear additional body flags
    bf = *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 8);
    bf &= ~0x1800; // clear bits 11-12
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 8) = bf;

    // Reset trickable and related flags
    u16 flags254 = *reinterpret_cast<u16*>(reinterpret_cast<char*>(this) + 0x254);
    flags254 &= ~0x0030; // clear bits 4-5
    *reinterpret_cast<u16*>(reinterpret_cast<char*>(this) + 0x254) = flags254;
    *reinterpret_cast<u16*>(reinterpret_cast<char*>(this) + 0x14C) = zero16;
    *reinterpret_cast<u16*>(reinterpret_cast<char*>(this) + 0x14E) = zero16;
    *reinterpret_cast<u16*>(reinterpret_cast<char*>(this) + 0x150) = zero16;

    // Zero out more state
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0xEC) = 0;
    *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0xF0) = zero;

    bf = *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 0x0C);
    bf &= ~0xF800; // clear bits 11-15
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 0x0C) = bf;
    bf = *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 0x0C);
    bf &= ~0x0007; // clear bits 0-2
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 0x0C) = bf;

    sub_80590e98(); // resetDriftState
    *reinterpret_cast<u16*>(reinterpret_cast<char*>(this) + 0x148) = zero16;

    // Clear more flags
    bf = *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 8);
    bf &= ~0x0380; // clear bits 7-9
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 8) = bf;
    bf = *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 0x0C);
    bf &= ~0x0700; // clear bits 8-10
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 0x0C) = bf;

    // Reset zipper trick and related
    sub_0x805b6c90(); // resetZipper
    trick->end(); // PlayerTrick::end

    // Clear additional body flags
    bf = *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 8);
    bf &= ~0x001C; // clear bits 2-4
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 8) = bf;
    bf = *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 0x0C);
    bf &= ~0x0038; // clear bits 3-5
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 0x0C) = bf;
    bf = *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 0x0C);
    bf &= ~0x0070; // clear bits 4-6
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 0x0C) = bf;

    // vtable[0x70/4] — final state update call
    // (indirect call to some end-drift handler)
}

// =============================================================================
// cancelWheelie_v2 (cancelWheelie) — 0x80588b98
// Simplified wheelie cancel (no full drift reset)
// =============================================================================
void PlayerSub10Bike::cancelWheelie() {
    f32 zero = 0.0f;
    u16 zero16 = 0;

    *reinterpret_cast<u16*>(reinterpret_cast<char*>(this) + 0x118) = zero16;

    u32 bf = *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 4);
    bf &= ~0x0F00; // clear bits 8-11
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 4) = bf;
    bf = *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 8);
    bf &= ~0x0F00; // clear bits 8-11
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 8) = bf;

    mtBoost = zero16;
    *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0x1B0) = zero;

    bf = *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 4);
    bf &= ~0x0007;
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 4) = bf;

    sub_80590e98(); // resetDriftState
    *reinterpret_cast<u16*>(reinterpret_cast<char*>(this) + 0x1C4) = zero16;

    sub_0x80591090(); // setDriftState(4, 0, 1)
    *reinterpret_cast<u16*>(reinterpret_cast<char*>(this) + 0x12C) = zero16;

    bf = *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 8);
    bf &= ~0x1800;
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 8) = bf;

    u16 flags254 = *reinterpret_cast<u16*>(reinterpret_cast<char*>(this) + 0x254);
    flags254 &= ~0x0030;
    *reinterpret_cast<u16*>(reinterpret_cast<char*>(this) + 0x254) = flags254;
    *reinterpret_cast<u16*>(reinterpret_cast<char*>(this) + 0x14C) = zero16;
    *reinterpret_cast<u16*>(reinterpret_cast<char*>(this) + 0x14E) = zero16;
    *reinterpret_cast<u16*>(reinterpret_cast<char*>(this) + 0x150) = zero16;

    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0xEC) = 0;
    *reinterpret_cast<f32*>(reinterpret_cast<char*>(this) + 0xF0) = zero;

    bf = *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 0x0C);
    bf &= ~0xF800;
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 0x0C) = bf;
    bf = *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 0x0C);
    bf &= ~0x0007;
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 0x0C) = bf;

    sub_80590e98(); // resetDriftState
    *reinterpret_cast<u16*>(reinterpret_cast<char*>(this) + 0x148) = zero16;

    bf = *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 8);
    bf &= ~0x0380;
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 8) = bf;
    bf = *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 0x0C);
    bf &= ~0x0700;
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(playerPointers) + 0x0C) = bf;

    sub_80590e98(); // resetDriftState

    // vtable[0x70/4] — final update
}

// =============================================================================
// handleCrushEffect — 0x80588cec
// Handles being crushed (by Mega or Thwomp) for bikes
// =============================================================================
void PlayerSub10Bike::handleCrushEffect() {
    // Call base crush handler first
    sub_805837cc(); // cancelAllEffects or similar

    // vtable[0x70/4] call — some cancel
    // vtable[0x70/4] call again

    // Reset all wheelie/bike-specific state
    leanRot = 0.0f;
    leanRotCap = 0.0f;
    leanRotInc = 0.0f;
    wheelieRot = 0.0f;
    maxWheelieRot = 0.0f;
    wheelieTimer = 0;
    isInWheelie = false;
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x2B0) = 0;
    wheelieCounter = 0;
    wheelieCooldown = 0;
    wheelieRotSpeed = 0.0f;
    wheelieCounter = 0;
}

// =============================================================================
// getWheelieSoftSpeedLimitBonus — 0x805894c0
// Bike wheelie gives a soft speed limit bonus
// =============================================================================
f32 PlayerSub10Bike::getWheelieSoftSpeedLimitBonus() {
    // Set body flag for wheelie state
    u32 bodyFlags = *reinterpret_cast<u32*>(playerPointers);
    bodyFlags |= 0x2000; // wheelie flag
    *reinterpret_cast<u32*>(playerPointers) = bodyFlags;

    // Reset wheelie state
    wheelieTimer = 0;
    isInWheelie = true;
    maxWheelieRot = *reinterpret_cast<f32*>(0x00000000); // global table
    wheelieCounter = 0;
    wheelieCooldown = *reinterpret_cast<s16*>(0x00000000); // global
    wheelieRotSpeed = 0.0f;

    sub_805907e0();  // getBodyCollInfo
    sub_808677c4();  // startWheelieSound

    // Check for wheelie input
    sub_0x80591498(); // checkWheelieInput

    // Toggle some flag
    u32 flags14 = *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x14);
    flags14 ^= 0x800; // toggle bit 11
    *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x14) = flags14;

    return 0.0f; // Bike soft speed limit bonus (applied differently)
}

// =============================================================================
// startWheelie — 0x8058966c
// Initiates a wheelie (check conditions and begin)
// =============================================================================
void PlayerSub10Bike::startWheelie() {
    sub_0x805914a8(); // someCheck — returns frame count/state

    u32 state1 = *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x1C);
    u32 state2 = *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x18);
    u16 val1 = (state2 >> 27) & 0x1F;
    u16 val2 = (state1 >> 27) & 0x1F;

    if (val1 < val2) {
        // Condition met — start wheelie
        // vtable[0x6C/4] call
    }

    sub_0x805914a8(); // second check
    state1 = *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x1C);
    state2 = *reinterpret_cast<u32*>(reinterpret_cast<char*>(this) + 0x18);
    val1 = (state2 >> 28) & 0x1F;
    val2 = (state1 >> 28) & 0x1F;

    if (val1 < val2) {
        // Second condition met
        // vtable[0x70/4] call
    }
}

// =============================================================================
// checkWheelie — 0x80589744
// Returns false (bikes always allow wheelie check)
// =============================================================================
bool PlayerSub10Bike::checkWheelie() {
    // Bikes don't have the same restriction as karts
    // The decompiled version is essentially: return false;
    // (this makes the caller skip kart-specific wheelie logic)
    return false;
}

#pragma GCC diagnostic pop