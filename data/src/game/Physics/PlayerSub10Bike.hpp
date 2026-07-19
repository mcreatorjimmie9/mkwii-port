#pragma once
#include "PlayerSub10.hpp"
#include <types.h>

class PlayerSub10Bike : public PlayerSub10 {
public:
    // --- Virtual overrides (vtable 0x808b5ee8) ---
    virtual ~PlayerSub10Bike();                                // 0x80589704
    virtual void setTurnParams() override;                     // 0x80587c94
    virtual void activateMega() override;                      // 0x805875d0
    virtual void cancelWheelie() override;                     // 0x80588b98
    virtual bool checkWheelie() override;                      // 0x80589744
    virtual void updateVehicleRotationVector(f32 turn) override; // 0x80587da8
    virtual f32 getWheelieSoftSpeedLimitBonus() override;      // 0x805894c0
    virtual void updateWheelie() override;                     // 0x80588434
    virtual void updateMtCharge() override;                    // 0x805887d8
    virtual void updateSpecialFloor() override;                // 0x80587500
    virtual void startWheelie();                               // 0x8058966c
    virtual void cancelWheelieAlt();                           // 0x80588990

    // --- Non-virtual ---
    PlayerSub10Bike();                                         // 0x80587b70
    void initMath(bool isRemote);                              // 0x80587bb8
    void initSubObjects(bool isRemote);                        // 0x80587bf8
    void computeWheelieParams();                               // 0x805879e4
    void handleCrushEffect();                                  // 0x80588cec
    void getWheelieSoftSpeedLimitBonusHelper();                // 0x80588390

    // --- Bike-specific fields (0x294 - 0x2C3) ---
    f32 leanRot;                     // 0x294: Current lean rotation angle
    f32 leanRotCap;                  // 0x298: Maximum lean rotation allowed
    f32 leanRotInc;                  // 0x29C: Lean rotation increment rate
    f32 wheelieRot;                  // 0x2A0: Current wheelie rotation angle
    f32 maxWheelieRot;               // 0x2A4: Maximum wheelie rotation angle
    u32 wheelieTimer;                // 0x2A8: Frames since wheelie started
    u8 isInWheelie;                  // 0x2AC: Wheelie active flag
    u8 _2AD[0x007];                  // 0x2AD: padding
    u16 wheelieCounter;              // 0x2B4: Wheelie hold counter
    u16 wheelieCooldown;             // 0x2B6: Wheelie cooldown counter
    f32 wheelieRotSpeed;             // 0x2B8: Wheelie rotation speed per frame
    void* turnParams;                // 0x2C0: Pointer to bike turn parameter table
};
// static_assert(sizeof(PlayerSub10Bike) == 0x2C4);