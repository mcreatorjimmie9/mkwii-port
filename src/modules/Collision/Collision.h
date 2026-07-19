#pragma once
// Collision module - Mario Kart Wii PC Port
// Phase 6: 130 functions
#include "../types.h"

#ifdef __cplusplus
extern "C" {
#endif

// 0x0x805701c0 (address_range)
u32 KartCollide_validate_805701c0(int);

// 0x0x80570274 (address_range)
void col_KartCollide_80570274(int);

// 0x0x805702f4 (address_range)
int col_KartCollide_805702f4(int);

// 0x0x80570348 (address_range)
int col_KartCollide_80570348(int);

// 0x0x8057039c (address_range)
int col_KartCollide_8057039c(int);

// 0x0x80570408 (address_range)
u32 col_KartCollide_80570408(u64, int, u32, u32, u32, u32, u32, u32);

// 0x0x80570514 (address_range)
u32 col_KartCollide_80570514(u64, int, u32, u32, u32, u32, u32, u32);

// 0x0x80570620 (address_range)
u32 col_KartCollide_80570620(u64, int, u32, u32, u32, u32, u32, u32);

// 0x0x805707e4 (address_range)
u32 col_KartCollide_805707e4(int, u32, u32, u32, u32, u32);

// 0x0x8057089c (address_range)
u32 col_KartCollide_8057089c(int, u32, u32, u32, u32, u32);

// 0x0x80570954 (address_range)
u32 col_KartCollide_80570954(int, u32, u32, u32, u32, u32);

// 0x0x80570a0c (address_range)
u32 col_KartCollide_80570a0c(u64, int, u32, u32, u32, u32, u32, u32);

// 0x0x80570b08 (address_range)
u32 col_KartCollide_80570b08(u64, int, u32, u32, u32, u32, u32, u32);

// 0x0x80570c04 (address_range)
u32 col_KartCollide_80570c04(u64, int, u32, u32, u32, u32, u32, u32);

// 0x0x80570dc8 (address_range)
u32 col_KartCollide_80570dc8(int, u32, u32, u32, u32, u32);

// 0x0x80570e80 (address_range)
u32 col_KartCollide_80570e80(int, u32, u32, u32, u32, u32);

// 0x0x80570f38 (address_range)
u32 col_KartCollide_80570f38(int, u32, u32, u32, u32, u32);

// 0x0x80570ff0 (address_range)
void col_KartCollide_80570ff0(int, int, u32);

// 0x0x805710dc (address_range)
double col_KartCollide_805710dc(int);

// 0x0x80571120 (address_range)
void KartCollide_validate_80571120(int);

// 0x0x805711b8 (address_range)
void col_KartCollide_805711b8(void);

// 0x0x805712f0 (address_range)
void col_KartCollide_805712f0(u64, int);

// 0x0x80571360 (address_range)
void col_KartCollide_80571360(int, u32, u32);

// 0x0x805713cc (address_range)
void col_KartCollide_805713cc(u32);

// 0x0x80571440 (address_range)
int KartCollide_validate_80571440(int, int);

// 0x0x80571568 (address_range)
void KartCollide_assertFail_80571568(void);

// 0x0x80571a3c (address_range)
void KartCollide_validate_80571a3c(u32, u32, u32, u32, u32);

// 0x0x80571ab0 (address_range)
void KartCollide_assertFail_80571ab0(void);

// 0x0x80571d78 (address_range)
void KartCollide_validate_80571d78(int);

// 0x0x80572354 (address_range)
void KartCollide_validate_80572354(int);

// 0x0x805725b8 (address_range)
int KartCollide_validate_805725b8(int, int);

// 0x0x805725f8 (address_range)
void col_KartCollide_805725f8(void);

// 0x0x805733d4 (address_range)
void col_KartCollide_805733d4(void);

// 0x0x805741b0 (address_range)
void col_KartCollide_805741b0(void);

// 0x0x80574f8c (address_range)
void col_KartCollide_80574f8c(void);

// 0x0x805b7240 (address_range)
void Hitbox_validate_805b7240(int);

// 0x0x805b75d4 (address_range)
void col_Hitbox_805b75d4(int);

// 0x0x805b764c (address_range)
void Hitbox_calc_805b764c(int);

// 0x0x805b78c4 (address_range)
void col_Hitbox_805b78c4(void);

// 0x0x805b7ac4 (address_range)
void Hitbox_validate_805b7ac4(int);

// 0x0x805b7b3c (address_range)
void col_Hitbox_805b7b3c(u64, u32, u32, u32);

// 0x0x805b7c50 (address_range)
void col_Hitbox_805b7c50(u32);

// 0x0x805b7ce8 (address_range)
void Hitbox_validate_805b7ce8(int);

// 0x0x805b7dd8 (address_range)
void Hitbox_assertFail_805b7dd8(void);

// 0x0x805b84b8 (address_range)
u32 Hitbox_validate_805b84b8(u32);

// 0x0x805b858c (address_range)
void col_Hitbox_805b858c(void);

// 0x0x805b87fc (address_range)
void col_Hitbox_805b87fc(int);

// 0x0x805b892c (address_range)
void col_Hitbox_805b892c(void);

// 0x0x805b8e1c (address_range)
void col_Hitbox_805b8e1c(void);

// 0x0x805b916c (address_range)
void col_Hitbox_805b916c(void);

// 0x0x805b932c (address_range)
void col_Hitbox_805b932c(void);

// 0x0x805b94ec (address_range)
void col_Hitbox_805b94ec(void);

// 0x0x805b982c (address_range)
void col_Hitbox_805b982c(void);

// 0x0x805b9b6c (address_range)
void Hitbox_assertFail_805b9b6c(void);

// 0x0x805b9e00 (address_range)
void Hitbox_assertFail_805b9e00(void);

// 0x0x805ba094 (address_range)
void col_Hitbox_805ba094(int, int);

// 0x0x805ba1e8 (address_range)
void col_Hitbox_805ba1e8(int, int);

// 0x0x805ba57c (address_range)
void col_Hitbox_805ba57c(int);

// 0x0x805ba698 (address_range)
void col_Hitbox_805ba698(int);

// 0x0x805ba7b0 (address_range)
void col_Hitbox_805ba7b0(void);

// 0x0x805ba98c (address_range)
void col_Hitbox_805ba98c(int, int);

// 0x0x805baabc (address_range)
void col_Hitbox_805baabc(void);

// 0x0x805babd0 (address_range)
u32 col_Hitbox_805babd0(int, int, int);

// 0x0x805bad9c (address_range)
void col_Hitbox_805bad9c(u32);

// 0x0x805bae5c (address_range)
int Hitbox_validate_805bae5c(int, int);

// 0x0x805baea4 (address_range)
void col_Hitbox_805baea4(u32);

// 0x0x805baf64 (address_range)
int Hitbox_validate_805baf64(int, int);

// 0x0x805bafac (address_range)
void col_Hitbox_805bafac(u32);

// 0x0x805bb028 (address_range)
int CollisionDetection_validate_805bb028(int, int);

// 0x0x805bb070 (address_range)
void col_CollisionDetection_805bb070(u32);

// 0x0x805bb0ec (address_range)
int CollisionDetection_validate_805bb0ec(int, int);

// 0x0x805bb144 (address_range)
void col_CollisionDetection_805bb144(void);

// 0x0x805bbb18 (address_range)
u32 CollisionDetection_validate_805bbb18(u32);

// 0x0x805bbb7c (address_range)
int CollisionDetection_validate_805bbb7c(int, int);

// 0x0x805bbbe8 (address_range)
void col_CollisionDetection_805bbbe8(u32);

// 0x0x805bbc20 (address_range)
void col_CollisionDetection_805bbc20(void);

// 0x0x805bbd74 (address_range)
void CollisionDetection_assertFail_805bbd74(void);

// 0x0x805bc12c (address_range)
void CollisionDetection_validate_805bc12c(int);

// 0x0x805bc588 (address_range)
void CollisionDetection_assertFail_805bc588(void);

// 0x0x805bc9e0 (address_range)
u32 CollisionDetection_calc_805bc9e0(int, int, u32, int);

// 0x0x805bcd58 (address_range)
void CollisionDetection_validate_805bcd58(int);

// 0x0x805bce58 (address_range)
void col_CollisionDetection_805bce58(int);

// 0x0x805bcfd0 (address_range)
void col_CollisionDetection_805bcfd0(int);

// 0x0x80570a54 (main.dol_phase3)
void __ct__Q24Kart11KartCollideFv(void);

// 0x0x80570b0c (main.dol_phase3)
void init__Q24Kart11KartCollideFv(void);

// 0x0x80570bf4 (main.dol_phase3)
void updateBbox__Q24Kart11KartCollideFv(void);

// 0x0x80570c4c (main.dol_phase3)
void processBody__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ24Kart6HitboxRCQ25Field7ColInfoPUl(void);

// 0x0x80570dbc (main.dol_phase3)
void processWheels__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ24Kart6HitboxRCQ25Field7ColInfoPUl(void);

// 0x0x80570e18 (main.dol_phase3)
void processMovingWater__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoPUl(void);

// 0x0x80570eec (main.dol_phase3)
void processFloor__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ24Kart6HitboxRCQ25Field7ColInfoPUlb(void);

// 0x0x8057130c (main.dol_phase3)
void updateHitboxes__Q24Kart11KartCollideFv(void);

// 0x0x8057166c (main.dol_phase3)
void processWall__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ25Field7ColInfoPUl(void);

// 0x0x80571754 (main.dol_phase3)
void checkNeighborhood__Q24Kart11KartCollideFRQ24Kart17KartCollisionInfoRCQ24Kart6HitboxRCQ25Field7ColInfo(void);

// 0x0x80571978 (main.dol_phase3)
void processCannon__Q24Kart11KartCollideFPUl(void);

// 0x0x80571cd8 (main.dol_phase3)
void PlayerSub18_checkPlayerCollision(void);

// 0x0x80574a64 (main.dol_phase3)
void PlayerSub18_checkItemCollision(void);

// 0x0x80575108 (main.dol_phase3)
void PlayerSub18_findCollision(void);

// 0x0x805755bc (main.dol_phase3)
void PlayerSub18_initHitboxes(void);

// 0x0x80575658 (main.dol_phase3)
void PlayerSub18_handleNoopCollision(void);

// 0x0x80575660 (main.dol_phase3)
void PlayerSub18_handleBananaCollision(void);

// 0x0x80575678 (main.dol_phase3)
void PlayerSub18_handleShellCollision(void);

// 0x0x80575698 (main.dol_phase3)
void PlayerSub18_handleBlueShellCollision(void);

// 0x0x805756b0 (main.dol_phase3)
void PlayerSub18_handleBombCollision(void);

// 0x0x805756c8 (main.dol_phase3)
void PlayerSub18_handleMushroomCollision(void);

// 0x0x8057570c (main.dol_phase3)
void PlayerSub18_handleStarCollision(void);

// 0x0x80575744 (main.dol_phase3)
void PlayerSub18_handleFibCollision(void);

// 0x0x805764d8 (main.dol_phase3)
void __dt__Q24Kart11KartCollideFv(void);

// 0x0x8057d5f0 (main.dol_phase3)
void PlayerSub10_computeWallCollisionSpeedFactor(void);

// 0x0x8058681c (main.dol_phase3)
void PlayerSub10_doRespawn(void);

// 0x0x8059b9bc (main.dol_phase3)
void setBsp__Q24Kart16KartWheelPhysicsFv(void);

// 0x0x8059bb78 (main.dol_phase3)
void calcCollision__Q24Kart16KartWheelPhysicsFRCQ23EGG8Vector3fRCQ23EGG8Vector3f(void);

// 0x0x8059c3bc (main.dol_phase3)
void __ct__Q24Kart14KartSusPhysicsFUlQ24Kart13KartWheelTypel(void);

// 0x0x8059c43c (main.dol_phase3)
void reset__Q24Kart14KartSusPhysicsFv(void);

// 0x0x8059c760 (main.dol_phase3)
void calcCollision__Q24Kart14KartSusPhysicsFRCQ23EGG8Vector3fRCQ23EGG9Matrix34ff(void);

// 0x0x805b72ac (main.dol_phase3)
void setBspParams__Q24Kart12KartDynamicsFRCQ23EGG8Vector3fRCQ23EGG8Vector3fbf(void);

// 0x0x805b8c0c (main.dol_phase3)
void PlayerSub18_findCollisionInner(void);

// 0x0x805b9e10 (main.dol_phase3)
void applySomeFloorMoment__Q24Kart11KartCollideFPQ24Kart12KartDynamicsPQ24Kart11HitboxGroupRCQ23EGG8Vector3fRCQ23EGG8Vector3fRCQ23EGG8Vector3fffbbb(void);

// 0x0x805ba430 (main.dol_phase3)
void __ct__Q24Kart6HitboxFv(void);

// 0x0x805ba46c (main.dol_phase3)
void reset__Q24Kart6HitboxFv(void);

// 0x0x805ba4a4 (main.dol_phase3)
void update__Q24Kart6HitboxFRCQ23EGG8Vector3fRCQ23EGG5QuatfRCQ23EGG8Vector3fff(void);

// 0x0x805ba640 (main.dol_phase3)
void create__Q24Kart6HitboxFRCQ23EGG8Vector3ff(void);

// 0x0x805ba6b8 (main.dol_phase3)
void setScale__Q24Kart6HitboxFf(void);

// 0x0x805ba7a4 (main.dol_phase3)
void __ct__Q24Kart11HitboxGroupFv(void);

// 0x0x805ba818 (main.dol_phase3)
void reset__Q24Kart11HitboxGroupFv(void);

// 0x0x805ba8c0 (main.dol_phase3)
void setHitboxScale__Q24Kart11HitboxGroupFf(void);

// 0x0x805ba908 (main.dol_phase3)
void createHitboxes__Q24Kart11HitboxGroupFl(void);

// 0x0x805ba9a8 (main.dol_phase3)
void initHitboxes__Q24Kart11HitboxGroupFPQ24Kart9BspHitboxPvl(void);

// 0x0x805bab90 (main.dol_phase3)
void setHitboxes__Q24Kart11HitboxGroupFPQ24Kart9BspHitbox(void);

// 0x0x805bac44 (main.dol_phase3)
void createSingleHitbox__Q24Kart11HitboxGroupFRCQ23EGG8Vector3ff(void);

// 0x0x805bad24 (main.dol_phase3)
void computeCollisionLimits__Q24Kart11HitboxGroupFv(void);

#ifdef __cplusplus
}
#endif
