#pragma once
// Collision module - Mario Kart Wii PC Port
// StaticR.rel functions: 83
// main.dol Phase 3 functions: 47
// Total tracked functions: 130

#include "../types.h"

// === Named functions from main.dol Phase 3 ===

// 0x80570a54
void __ct__Q24Kart11KartCollideFv(void);  // TODO: proper signature

// 0x80570b0c
void init__Q24Kart11KartCollideFv(void);  // TODO: proper signature

// 0x80570bf4
void updateBbox__Q24Kart11KartCollideFv(void);  // TODO: proper signature

// 0x80570c4c
void processBody__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ24Kart6HitboxRCQ25Field7ColInfoPUl(void);  // TODO: proper signature

// 0x80570dbc
void processWheels__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ24Kart6HitboxRCQ25Field7ColInfoPUl(void);  // TODO: proper signature

// 0x80570e18
void processMovingWater__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoPUl(void);  // TODO: proper signature

// 0x80570eec
void processFloor__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ24Kart6HitboxRCQ25Field7ColInfoPUlb(void);  // TODO: proper signature

// 0x8057130c
void updateHitboxes__Q24Kart11KartCollideFv(void);  // TODO: proper signature

// 0x8057166c
void processWall__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ25Field7ColInfoPUl(void);  // TODO: proper signature

// 0x80571754
void checkNeighborhood__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ24Kart6HitboxRCQ25Field7ColInfo(void);  // TODO: proper signature

// 0x80571978
void processCannon__Q24Kart11KartCollideFPUl(void);  // TODO: proper signature

// 0x80571cd8
void PlayerSub18_checkPlayerCollision(void);  // TODO: proper signature

// 0x80574a64
void PlayerSub18_checkItemCollision(void);  // TODO: proper signature

// 0x80575108
void PlayerSub18_findCollision(void);  // TODO: proper signature

// 0x805755bc
void PlayerSub18_initHitboxes(void);  // TODO: proper signature

// 0x80575658
void PlayerSub18_handleNoopCollision(void);  // TODO: proper signature

// 0x80575660
void PlayerSub18_handleBananaCollision(void);  // TODO: proper signature

// 0x80575678
void PlayerSub18_handleShellCollision(void);  // TODO: proper signature

// 0x80575698
void PlayerSub18_handleBlueShellCollision(void);  // TODO: proper signature

// 0x805756b0
void PlayerSub18_handleBombCollision(void);  // TODO: proper signature

// 0x805756c8
void PlayerSub18_handleMushroomCollision(void);  // TODO: proper signature

// 0x8057570c
void PlayerSub18_handleStarCollision(void);  // TODO: proper signature

// 0x80575744
void PlayerSub18_handleFibCollision(void);  // TODO: proper signature

// 0x805764d8
void __dt__Q24Kart11KartCollideFv(void);  // TODO: proper signature

// 0x8057d5f0
void PlayerSub10_computeWallCollisionSpeedFactor(void);  // TODO: proper signature

// 0x8058681c
void PlayerSub10_doRespawn(void);  // TODO: proper signature

// 0x8059b9bc
void setBsp__Q24Kart16KartWheelPhysicsFv(void);  // TODO: proper signature

// 0x8059bb78
void calcCollision__Q24Kart16KartWheelPhysicsFRCQ23EGG8Vector3fRCQ23EGG8Vector3f(void);  // TODO: proper signature

// 0x8059c3bc
void __ct__Q24Kart14KartSusPhysicsFUlQ24Kart13KartWheelTypel(void);  // TODO: proper signature

// 0x8059c43c
void reset__Q24Kart14KartSusPhysicsFv(void);  // TODO: proper signature

// 0x8059c760
void calcCollision__Q24Kart14KartSusPhysicsFRCQ23EGG8Vector3fRCQ23EGG9Matrix34ff(void);  // TODO: proper signature

// 0x805b72ac
void setBspParams__Q24Kart12KartDynamicsFRCQ23EGG8Vector3fRCQ23EGG8Vector3fbf(void);  // TODO: proper signature

// 0x805b8c0c
void PlayerSub18_findCollisionInner(void);  // TODO: proper signature

// 0x805b9e10
void applySomeFloorMoment__Q24Kart11KartCollideFPQ24Kart12KartDynamicsPQ24Kart11HitboxGroupRCQ23EGG8Vector3fRCQ23EGG8Vector3fRCQ23EGG8Vector3fffbbb(void);  // TODO: proper signature

// 0x805ba430
void __ct__Q24Kart6HitboxFv(void);  // TODO: proper signature

// 0x805ba46c
void reset__Q24Kart6HitboxFv(void);  // TODO: proper signature

// 0x805ba4a4
void update__Q24Kart6HitboxFRCQ23EGG8Vector3fRCQ23EGG5QuatfRCQ23EGG8Vector3fff(void);  // TODO: proper signature

// 0x805ba640
void create__Q24Kart6HitboxFRCQ23EGG8Vector3ff(void);  // TODO: proper signature

// 0x805ba6b8
void setScale__Q24Kart6HitboxFf(void);  // TODO: proper signature

// 0x805ba7a4
void __ct__Q24Kart11HitboxGroupFv(void);  // TODO: proper signature

// 0x805ba818
void reset__Q24Kart11HitboxGroupFv(void);  // TODO: proper signature

// 0x805ba8c0
void setHitboxScale__Q24Kart11HitboxGroupFf(void);  // TODO: proper signature

// 0x805ba908
void createHitboxes__Q24Kart11HitboxGroupFl(void);  // TODO: proper signature

// 0x805ba9a8
void initHitboxes__Q24Kart11HitboxGroupFPQ24Kart9BspHitboxPvl(void);  // TODO: proper signature

// 0x805bab90
void setHitboxes__Q24Kart11HitboxGroupFPQ24Kart9BspHitbox(void);  // TODO: proper signature

// 0x805bac44
void createSingleHitbox__Q24Kart11HitboxGroupFRCQ23EGG8Vector3ff(void);  // TODO: proper signature

// 0x805bad24
void computeCollisionLimits__Q24Kart11HitboxGroupFv(void);  // TODO: proper signature


// === Unnamed functions from main.dol Phase 3 ===
// Total: 0
