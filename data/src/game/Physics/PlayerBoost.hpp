#pragma once

#include <types.h>

// ============================================================================
// PlayerBoost — Boost State Machine
// Size: 0x24 bytes
// ============================================================================
// Manages up to 6 independent boost slots that stack and decay.
// Each slot has a frame counter and the slots are grouped into 3 type
// categories via the `types` bitfield.
//
// Boost type bit assignments (in `types` u16):
//   Bit 0 (slot 0): MT, SSMT, start boost
//   Bit 1 (slot 1): unused (intended for star)
//   Bit 2 (slot 2): mushroom, boost panel
//   Bit 3 (slot 3): unused (intended for bullet)
//   Bit 4 (slot 4): trick, zipper
//   Bit 5 (slot 5): unused (intended for mega and TC)
//
// vtable: 0x808b5fd8
// ============================================================================

class PlayerBoost {
public:
    virtual ~PlayerBoost();                // 0x8057811c
    // vtable[1]: reset_vtableStub         // 0x80588d74
    virtual bool activate(u32 type, s16 frames); // 0x80588db0
    virtual void cancelAll();              // 0x80588e18
    // vtable[4]: getter_vtableStub         // 0x80588e50
    virtual bool update(bool* outActive);  // 0x80588e24 (actual impl at 0x80588e64)

    // Non-virtual helpers
    PlayerBoost();                         // 0x80588d28
    void reset();                          // 0x80588d74

    // Accessors
    f32 getMultiplier() const { return multiplier; }
    f32 getAcceleration() const { return acceleration; }
    f32 getSpeedLimit() const { return speedLimit; }
    u16 getTypes() const { return types; }
    bool isActive() const { return types != 0; }

    // === Field layout (from player.h) ===
    // vtable pointer at offset 0x00 (inherited)
    s16 frames[6];         // 0x04: remaining frames per slot
    u16 types;             // 0x10: active boost type bits
    u8 _012[0x02];         // 0x12: unknown padding
    f32 multiplier;        // 0x14: current speed multiplier (sum of active boosts)
    f32 acceleration;      // 0x18: current acceleration bonus
    f32 _1c;               // 0x1C: unknown float (possibly max multiplier)
    f32 speedLimit;        // 0x20: current speed limit
}; // Total size 0x24
static_assert(sizeof(PlayerBoost) == 0x24);