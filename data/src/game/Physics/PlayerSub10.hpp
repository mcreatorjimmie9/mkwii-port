#pragma once
#include <types.h>
#include <EGG/math.h>

class KartMove;
class KartBody;
class KartPhysics;
class ItemHandler;
#include "PlayerBoost.hpp"
#include "PlayerTrick.hpp"
class PlayerZipper;
class PlayerPointers;

// Forward declaration for JumpPadProperties struct
struct JumpPadProperties {
    f32 minSpeed;
    f32 maxSpeed;
    f32 velY;
};

class PlayerSub10 {
public:
    virtual ~PlayerSub10();                                    // 0x80587b78
    virtual void setTurnParams();                             // 0x8057829c
    virtual void activateStar();                              // 0x80580268
    virtual void activateMega();                              // 0x80580b14
    virtual void applyInk(int unk);                           // 0x80581a58
    virtual void cancelWheelie();                             // 0x8057dc40
    virtual bool checkWheelie();                              // 0x80589744
    virtual void updateTurn();                                // 0x8057a8b4
    virtual void updateVehicleSpeed();                        // 0x8057ab68
    virtual void updateUpsWhileAirborne();                    // 0x8057d888
    virtual void updateVehicleRotationVector(f32 turn);       // 0x8057cf0c
    virtual f32 getWheelieSoftSpeedLimitBonus();              // 0x8057c3c8
    virtual void updateWheelie();                             // 0x8058758c
    virtual bool canHop();                                    // 0x8057da18
    virtual void hop();                                       // 0x8057da5c
    virtual void updateMtCharge();                            // 0x8057ee50

    PlayerSub10();                                            // 0x80577fc4
    void init(bool isBike, bool isRemote);                    // 0x805784d4

    // Main update chain
    void update();                                            // 0x805788dc
    void updateHopPhysics();                                  // 0x80579968
    void updateDir();                                         // 0x8057a140
    void updateAcceleration();                                // 0x8057b9bc
    void updateOffroad();                                     // 0x8057c3d4
    void updateRotation();                                    // 0x8057c69c
    void updateStandstillBoostRot();                          // 0x8057d1d4
    void updateUps();                                         // 0x8057d398
    void updateManualDrift();                                 // 0x8057dc44
    void updateAutoDrift();                                   // 0x8057e0dc
    void updateHopAndSlipdrift();                             // 0x8057e804
    void updateAutoDriftAngle();                              // 0x8057e3f4
    void initDriftAuto();                                     // 0x8057e638
    void initDriftForced();                                   // 0x8057e6f4
    void endDrift();                                          // 0x8057e77c
    f32 vec3CrossMagnitude();                                 // 0x8057e99c
    void updateDriftAngle();                                  // 0x8057eab8
    void initDriftAngle();                                    // 0x8057ec28
    void applyWheelSlipToSpeed();                             // 0x8057c5e8

    // Boost system
    void activateBoostSlot(u32 type, s16 frames);             // 0x8057f090
    void activateBoostMushroomClean();                        // 0x8057f1d0
    void activateMushroom();                                  // 0x8057f3d8
    void activateBoostStart();                                // 0x8057f630
    void endTrick();                                          // 0x8057f7a8
    void activateZipperBoost();                               // 0x8057f96c
    void activateBoostZipperInternal();                       // 0x8057fb6c
    void clearBoost();                                        // inline

    // Status effects
    void applyLightning();                                    // 0x80580438
    void applyLightningByCharacter();                         // 0x8058051c
    void resetLightningEffect();                              // 0x805805ec
    void resetLightningEffect2();                             // 0x80580648
    void applyLightningWithDuration(s16 duration, u8 unk0, u8 unk1); // 0x805806a4
    void applyLightningEffect(s16 frames, u8 unk0, u8 unk1);  // 0x80580778
    void updateStar();                                        // 0x80580998
    void deactivateStar(u8 resetScale);                       // 0x80580a84
    void activateMegaVirtual();                               // 0x80580b14 (virtual impl)
    void startMega(u8 resetScale);                            // 0x80580cdc
    void updateMega();                                        // 0x80580dc0
    void startCrush(s16 frames);                              // 0x80580f28
    void updateCrush();                                       // 0x80580f9c
    void endCrush();                                          // 0x80581034
    void updateInvincibility();                               // 0x805813e8
    void updatePlayerScale();                                 // 0x8058160c
    void startSquish(s16 frames);                             // 0x8058173c
    void tryStartSquish();                                    // 0x80581778
    void updateSquish();                                      // 0x80581824
    void cancelSquish();                                      // 0x8058196c
    void applySquish();                                       // 0x805819a8

    // Other systems
    void tryStartJumpPad();                                   // 0x8057fd18
    void tryEndJumpPad();                                     // 0x80582530
    void activateTc();                                        // 0x80581a28
    void deactivateTc();                                      // 0x80581a40
    void updateInk();                                         // 0x80581b1c
    void applyStartBoost(s16 frames);                         // 0x8058212c
    void updateBoost();                                       // 0x80582694 (inlined)
    void releaseMt(u8 unk0, u8 unk1);                         // 0x80582f9c
    void updateStickyRoad();                                  // 0x80583b88
    void setInitialPhysicsValues(const Vec3* position, const Vec3* angles); // 0x80584044
    void doRespawn();                                         // 0x80584334
    void enterCannon();                                       // 0x8058498c
    void updateCannon();                                      // 0x80584d58
    void activateBullet(int unk);                             // 0x805858ac
    void updateDiving();                                      // 0x805869dc
    void updateSlipstream();                                  // 0x80586fa8
    void updateSpecialFloor();                                // 0x80587590 (inlined)

    // Field layout (from player.h, total size 0x294)
    PlayerPointers* playerPointers;   // 0x000
    u8 _004[0x004];                  // 0x004
    u8 _008[0x004];                  // 0x008
    void* vtable;                     // 0x00C
    f32 speedMultiplier;              // 0x010
    f32 baseSpeed;                    // 0x014
    f32 softSpeedLimit;               // 0x018
    f32 _01c;                         // 0x01C
    f32 vehicleSpeed;                 // 0x020
    f32 lastSpeed;                    // 0x024
    f32 _028;                         // 0x028
    f32 hardSpeedLimit;               // 0x02C
    f32 acceleration;                 // 0x030
    f32 speedDragMultiplier;          // 0x034
    Vec3 smoothedUp;                  // 0x038
    Vec3 up;                          // 0x044
    Vec3 landingDir;                  // 0x050
    Vec3 dir;                         // 0x05C
    Vec3 lastDir;                     // 0x068
    Vec3 vel1Dir;                     // 0x074
    Vec3 _080;                        // 0x080
    Vec3 dirDiff;                     // 0x08C
    bool hasLandingDir;               // 0x098
    u8 _099[0x003];                  // 0x099
    f32 outsideDriftAngle;            // 0x09C
    f32 landingAngle;                 // 0x0A0
    Vec3 outsideDriftLastDir;         // 0x0A4
    f32 speedRatioCapped;             // 0x0B0
    f32 speedRatio;                   // 0x0B4
    f32 kclSpeedFactor;               // 0x0B8
    f32 kclRotFactor;                 // 0x0BC
    f32 kclWheelSpeedFactor;          // 0x0C0
    f32 kclWheelRotFactor;            // 0x0C4
    s16 floorCollisionCount;          // 0x0C8
    u8 _0CA[0x002];                  // 0x0CA
    s32 hopStickX;                    // 0x0CC
    s16 hopFrame;                     // 0x0D0
    Vec3 hopUp;                       // 0x0D4
    Vec3 hopDir;                      // 0x0E0
    s32 slipstreamCharge;             // 0x0EC
    f32 _0F0;                         // 0x0F0
    f32 divingRot;                    // 0x0F4
    f32 boostRot;                     // 0x0F8
    s16 driftState;                   // 0x0FC
    s16 mtCharge;                     // 0x0FE
    s16 smtCharge;                    // 0x100
    s16 mtBoost;                      // 0x102
    f32 outsideDriftBonus;            // 0x104
    PlayerBoost boost;                // 0x108 (size 0x24)
    s16 zipperBoost;                  // 0x12C
    s16 zipperBoostMax;               // 0x12E
    u8 _130[0x018];                  // 0x130
    s16 offroadInvincibilityFrames;   // 0x148
    u16 _14A;                         // 0x14A
    u16 ssmtCharge;                   // 0x14C
    u8 _14E[0x00A];                  // 0x14E
    f32 effectiveTurn;                // 0x158
    f32 conservedTurn;                // 0x15C
    Vec3 scale;                       // 0x160
    f32 _170;                         // 0x170
    f32 someScale;                    // 0x174
    f32 shockSpeedMultiplier;         // 0x178
    f32 megaScale;                    // 0x17C
    u8 _180[0x008];                  // 0x180
    s16 mushroomBoost2;               // 0x188
    s16 starTimer;                    // 0x18A
    s16 shockTimer;                   // 0x18C
    s16 blooperCharacterInk;          // 0x18E
    u8 field_0x190;                   // 0x190
    u8 _191;                         // 0x191
    s16 crushTimer;                   // 0x192
    s16 MegaTimer;                    // 0x194
    u8 _196;                         // 0x196
    u8 _197[0x019];                  // 0x197
    f32 jumpPadMinSpeed;              // 0x1B0
    f32 jumpPadMaxSpeed;              // 0x1B4
    f32 _1B8;                         // 0x1B8
    f32 _1BC;                         // 0x1BC
    JumpPadProperties jumpPadProperties; // 0x1C0
    s16 rampBoost;                    // 0x1CC
    u8 _1CE[0x058];                  // 0x1CE
    f32 hopVelY;                      // 0x226
    f32 hopPosY;                      // 0x22A
    f32 hopGravity;                   // 0x22E
    u8 _232[0x016];                  // 0x232
    u32 drivingDirection;             // 0x248
    u16 backwardsAllowCounter;        // 0x24C
    u8 _24E;                         // 0x24E
    u8 _24F;                         // 0x24F
    u32 specialFloor;                 // 0x250
    u8 _254[0x004];                  // 0x254
    PlayerTrick* trick;               // 0x258
    PlayerZipper* zipper;             // 0x25C
    u8 _260[0x028];                  // 0x260
    f32 rawTurn;                      // 0x288
    f32 _28C;                         // 0x28C
    s16 ghostVanishTimer;             // 0x290
    u8 _292[0x002];                  // 0x292
};
// static_assert(sizeof(PlayerSub10) == 0x294);

class PlayerSub10Remote : public PlayerSub10 { /* vtable 0x808b5d90 */ };
class PlayerSub10RealLocal : public PlayerSub10 { /* vtable 0x808b5e78 */ };

// PlayerSub10Bike is defined in PlayerSub10Bike.hpp
// (included separately to avoid circular dependency)