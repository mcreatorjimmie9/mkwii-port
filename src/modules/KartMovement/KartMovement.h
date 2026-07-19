#pragma once
// KartMovement module - Mario Kart Wii PC Port
// StaticR.rel functions: 268
// main.dol Phase 3 functions: 98
// Total tracked functions: 366

#include "../types.h"

// === Named functions from main.dol Phase 3 ===

// 0x80580128
void PlayerSub10_cancelWheelie(void);  // TODO: proper signature

// 0x805814c8
void getMaxMtCharge__Q24Kart8KartMoveFv(void);  // TODO: proper signature

// 0x805814d4
void getMaxSmtCharge__Q24Kart8KartMoveFv(void);  // TODO: proper signature

// 0x805814e0
void getAppliedHopStickX__Q24Kart8KartMoveFv(void);  // TODO: proper signature

// 0x80583c08
void setScale__Q24Kart8KartMoveFQ23EGG8Vector3f(void);  // TODO: proper signature

// 0x80583f0c
void empty__Q24Kart8KartMoveFl(void);  // TODO: proper signature

// 0x805857cc
void clearBoost__Q24Kart8KartMoveFv(void);  // TODO: proper signature

// 0x80589a74
void PlayerSub10_updateWheelie(void);  // TODO: proper signature

// 0x8058a24c
void PlayerSub10Bike_updateWheelie(void);  // TODO: proper signature

// 0x8058a838
void PlayerSub10Bike_startWheelie(void);  // TODO: proper signature

// 0x8058a8ac
void PlayerSub10Bike_cancelWheelie(void);  // TODO: proper signature

// 0x8058ac80
void PlayerSub10Bike_tryStartWheelie(void);  // TODO: proper signature

// 0x8058b4c8
void PlayerSub10Bike_checkWheelieSpeed(void);  // TODO: proper signature

// 0x8058bc2c
void PlayerSub10_checkWheelie(void);  // TODO: proper signature

// 0x80590ef4
void PlayerKart_createTires(void);  // TODO: proper signature

// 0x805954a8
void __ct__Q24Kart12KartSettingsFv(void);  // TODO: proper signature

// 0x8059648c
void __ct__Q24Kart15KartCollideAreaFv(void);  // TODO: proper signature

// 0x8059689c
void __ct__Q24Kart9KartStateFPQ24Kart12KartSettings(void);  // TODO: proper signature

// 0x80596a44
void init__Q24Kart9KartStateFv(void);  // TODO: proper signature

// 0x80596a7c
void reset__Q24Kart9KartStateFv(void);  // TODO: proper signature

// 0x80596b1c
void resetOob__Q24Kart9KartStateFv(void);  // TODO: proper signature

// 0x80598230
void KartSub_createComponents(void);  // TODO: proper signature

// 0x80598460
void KartSub_init(void);  // TODO: proper signature

// 0x8059aff0
void KartSus_ct(void);  // TODO: proper signature

// 0x8059b048
void KartSus_init(void);  // TODO: proper signature

// 0x8059b0bc
void KartSus_initPhysics(void);  // TODO: proper signature

// 0x8059b8f4
void __ct__Q24Kart16KartWheelPhysicsFUll(void);  // TODO: proper signature

// 0x8059b958
void init__Q24Kart16KartWheelPhysicsFv(void);  // TODO: proper signature

// 0x8059b9bc
void setBsp__Q24Kart16KartWheelPhysicsFv(void);  // TODO: proper signature

// 0x8059b9f0
void reset__Q24Kart16KartWheelPhysicsFv(void);  // TODO: proper signature

// 0x8059baa8
void setColState__Q24Kart16KartWheelPhysicsFffRCQ23EGG8Vector3f(void);  // TODO: proper signature

// 0x8059bb78
void calcCollision__Q24Kart16KartWheelPhysicsFRCQ23EGG8Vector3fRCQ23EGG8Vector3f(void);  // TODO: proper signature

// 0x8059bfb8
void calc__Q24Kart16KartWheelPhysicsFRCQ23EGG8Vector3fRCQ23EGG8Vector3f(void);  // TODO: proper signature

// 0x8059c284
void updateEffectiveRadius__Q24Kart16KartWheelPhysicsFv(void);  // TODO: proper signature

// 0x8059c2a8
void unk80599dc0__Q24Kart16KartWheelPhysicsFRCQ23EGG8Vector3f(void);  // TODO: proper signature

// 0x8059c394
void hasFloorCollision__Q24Kart16KartWheelPhysicsCFv(void);  // TODO: proper signature

// 0x8059c3a4
void getCollisionFloorNrm__Q24Kart16KartWheelPhysicsCFv(void);  // TODO: proper signature

// 0x8059c3b0
void getKartCollisionInfo__Q24Kart16KartWheelPhysicsCFv(void);  // TODO: proper signature

// 0x8059c3bc
void __ct__Q24Kart14KartSusPhysicsFUlQ24Kart13KartWheelTypel(void);  // TODO: proper signature

// 0x8059c43c
void reset__Q24Kart14KartSusPhysicsFv(void);  // TODO: proper signature

// 0x8059c488
void init__Q24Kart14KartSusPhysicsFv(void);  // TODO: proper signature

// 0x8059c514
void setInitialState__Q24Kart14KartSusPhysicsFv(void);  // TODO: proper signature

// 0x8059c760
void calcCollision__Q24Kart14KartSusPhysicsFRCQ23EGG8Vector3fRCQ23EGG9Matrix34ff(void);  // TODO: proper signature

// 0x8059ca5c
void WheelPhysicsHolder_applySuspensions(void);  // TODO: proper signature

// 0x8059cf2c
void KartTire_ct(void);  // TODO: proper signature

// 0x8059cf98
void KartTire_init(void);  // TODO: proper signature

// 0x8059cffc
void KartTire_createPhysics(void);  // TODO: proper signature

// 0x8059d050
void KartTire_initBsp(void);  // TODO: proper signature

// 0x805a1aa4
void __ct__Q24Kart11KartPhysicsFb(void);  // TODO: proper signature


// === Unnamed functions from main.dol Phase 3 ===
// Total: 49

// 0x805a1df0: sub_805a1df0
// 0x805a1e24: sub_805a1e24
// 0x805a1e54: sub_805a1e54
// 0x805a1f04: sub_805a1f04
// 0x805a20ac: sub_805a20ac
// 0x805a2124: sub_805a2124
// 0x805a22e4: sub_805a22e4
// 0x805a2484: sub_805a2484
// 0x805a26e0: sub_805a26e0
// 0x805a2730: sub_805a2730
// 0x805a2770: sub_805a2770
// 0x805a28cc: sub_805a28cc
// 0x805a2b08: sub_805a2b08
// 0x805a2b84: sub_805a2b84
// 0x805a2df8: sub_805a2df8
// 0x805a2efc: sub_805a2efc
// 0x805a2f58: sub_805a2f58
// 0x805a304c: sub_805a304c
// 0x805a3b78: sub_805a3b78
// 0x805a3c10: sub_805a3c10
// 0x805a3c94: sub_805a3c94
// 0x805a4508: sub_805a4508
// 0x805a45c0: sub_805a45c0
// 0x805a47a8: sub_805a47a8
// 0x805a4838: sub_805a4838
// 0x805a4898: sub_805a4898
// 0x805a4ae0: sub_805a4ae0
// 0x805a4d5c: sub_805a4d5c
// 0x805a4f34: sub_805a4f34
// 0x805a5390: sub_805a5390
// 0x805a53d0: sub_805a53d0
// 0x805a5430: sub_805a5430
// 0x805a54e4: sub_805a54e4
// 0x805a557c: sub_805a557c
// 0x805a5710: sub_805a5710
// 0x805a5788: sub_805a5788
// 0x805a5974: sub_805a5974
// 0x805a5a60: sub_805a5a60
// 0x805a5f44: sub_805a5f44
// 0x805a601c: sub_805a601c
// 0x805a60cc: sub_805a60cc
// 0x805a6118: sub_805a6118
// 0x805a6174: sub_805a6174
// 0x805a6230: sub_805a6230
// 0x805a6418: sub_805a6418
// 0x805a6498: sub_805a6498
// 0x805a653c: sub_805a653c
// 0x805a6798: sub_805a6798
// 0x805a6da8: sub_805a6da8