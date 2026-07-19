#pragma once
// Physics module - Mario Kart Wii PC Port
// Phase 6: 462 functions
#include "../types.h"

#ifdef __cplusplus
extern "C" {
#endif

// 0x0x80567350 (address_range)
int EffectGroup_validate_80567350(int, int);

// 0x0x805673f0 (address_range)
void phys_EffectGroup_805673f0(int);

// 0x0x8056757c (address_range)
void phys_EffectGroup_8056757c(int);

// 0x0x8056760c (address_range)
void phys_EffectGroup_8056760c(int);

// 0x0x805676a0 (address_range)
void phys_EffectGroup_805676a0(int, int);

// 0x0x80567780 (address_range)
int EffectGroup_validate_80567780(int, int);

// 0x0x805677e8 (address_range)
void phys_EffectGroup_805677e8(int);

// 0x0x8056785c (address_range)
void phys_EffectGroup_8056785c(u32);

// 0x0x8056792c (address_range)
void phys_EffectGroup_8056792c(int);

// 0x0x80567cdc (address_range)
u32 * phys_EffectGroup_80567cdc(u32);

// 0x0x80567dd0 (address_range)
int EffectGroup_validate_80567dd0(int, int);

// 0x0x80567e6c (address_range)
void phys_EffectGroup_80567e6c(int);

// 0x0x80567f78 (address_range)
void phys_EffectGroup_80567f78(int);

// 0x0x805680f8 (address_range)
void phys_EffectGroup_805680f8(int);

// 0x0x805682d4 (address_range)
void phys_EffectGroup_805682d4(int);

// 0x0x8056833c (address_range)
void phys_EffectGroup_8056833c(void);

// 0x0x805683a8 (address_range)
void EffectGroup_validate_805683a8(int, u32, u32);

// 0x0x805683d8 (address_range)
void EffectGroup_validate_805683d8(int, u32);

// 0x0x80568408 (address_range)
void EffectGroup_validate_80568408(int, u32);

// 0x0x80568458 (address_range)
u32 * phys_EffectGroup_80568458(u32);

// 0x0x80568570 (address_range)
int EffectGroup_validate_80568570(int, int);

// 0x0x80568610 (address_range)
void phys_EffectGroup_80568610(int);

// 0x0x8056879c (address_range)
void phys_EffectGroup_8056879c(int);

// 0x0x80568808 (address_range)
void phys_EffectGroup_80568808(int, int);

// 0x0x805688b4 (address_range)
void EffectGroup_validate_805688b4(u32);

// 0x0x80568910 (address_range)
u32 EffectGroup_validate_80568910(int);

// 0x0x80568984 (address_range)
void EffectGroup_assertFail_80568984(void);

// 0x0x80568adc (address_range)
void phys_EffectGroup_80568adc(int);

// 0x0x80568bd4 (address_range)
void phys_EffectGroup_80568bd4(int);

// 0x0x80568c6c (address_range)
void phys_EffectGroup_80568c6c(int);

// 0x0x80568cdc (address_range)
void phys_EffectGroup_80568cdc(int, int);

// 0x0x80568d3c (address_range)
void phys_EffectGroup_80568d3c(int, int);

// 0x0x80568dd4 (address_range)
bool phys_EffectGroup_80568dd4(int);

// 0x0x80568e0c (address_range)
bool phys_EffectGroup_80568e0c(int);

// 0x0x80568e40 (address_range)
void phys_EffectGroup_80568e40(int, int, int, u32, u32, int, u32);

// 0x0x80568f24 (address_range)
void phys_EffectGroup_80568f24(int, u32);

// 0x0x80568f94 (address_range)
void EffectGroup_assertFail_80568f94(void);

// 0x0x80575d68 (address_range)
void phys_PlayerTrick_80575d68(void);

// 0x0x80576188 (address_range)
void phys_PlayerTrick_80576188(void);

// 0x0x805765a0 (address_range)
void phys_PlayerTrick_805765a0(void);

// 0x0x805768a4 (address_range)
void phys_PlayerTrick_805768a4(void);

// 0x0x80576b9c (address_range)
void PlayerTrick_assertFail_80576b9c(void);

// 0x0x80576d94 (address_range)
u32 PlayerTrick_validate_80576d94(u32);

// 0x0x80576df8 (address_range)
u32 * PlayerTrick_validate_80576df8(u32, int);

// 0x0x80576eb8 (address_range)
void phys_PlayerTrick_80576eb8(int);

// 0x0x80576fd4 (address_range)
void phys_PlayerTrick_80576fd4(int);

// 0x0x805780c4 (address_range)
int PlayerSub10_Core_validate_805780c4(int, int);

// 0x0x80578104 (address_range)
void PlayerSub10_Core_calc_80578104(int);

// 0x0x80578428 (address_range)
void PlayerSub10_Core_assertFail_80578428(void);

// 0x0x80578810 (address_range)
u32 PlayerSub10_Core_validate_80578810(u32);

// 0x0x805788b4 (address_range)
void PlayerSub10_Core_validate_805788b4(int);

// 0x0x805789c4 (address_range)
void phys_PlayerSub10_Core_805789c4(void);

// 0x0x80578f18 (address_range)
void PlayerSub10_Core_validate_80578f18(int);

// 0x0x80579690 (address_range)
void PlayerSub10_Core_validate_80579690(int);

// 0x0x80579814 (address_range)
void phys_PlayerSub10_Core_80579814(void);

// 0x0x80579e54 (address_range)
void phys_PlayerSub10_Core_80579e54(void);

// 0x0x8057a4a0 (address_range)
void phys_PlayerSub10_Core_8057a4a0(void);

// 0x0x8057ac00 (address_range)
void phys_PlayerSub10_Core_8057ac00(void);

// 0x0x8057b368 (address_range)
void PlayerSub10_Core_validate_8057b368(u32, u32, u32, u32, u32);

// 0x0x8057b3dc (address_range)
void PlayerSub10_Core_validate_8057b3dc(int);

// 0x0x8057b59c (address_range)
void PlayerSub10_Core_validate_8057b59c(u32, u32);

// 0x0x8057b780 (address_range)
u32 PlayerSub10_Core_validate_8057b780(u32);

// 0x0x8057b824 (address_range)
void phys_PlayerSub10_Core_8057b824(void);

// 0x0x8057b9e4 (address_range)
void PlayerSub10_Core_validate_8057b9e4(u32, u32);

// 0x0x8057bbfc (address_range)
u32 PlayerSub10_Core_validate_8057bbfc(u32);

// 0x0x8057bca0 (address_range)
void phys_PlayerSub10_Core_8057bca0(void);

// 0x0x8057be4c (address_range)
void PlayerSub10_Core_assertFail_8057be4c(void);

// 0x0x8057c07c (address_range)
u32 PlayerSub10_Core_validate_8057c07c(u32);

// 0x0x8057c120 (address_range)
void phys_PlayerSub10_Core_8057c120(void);

// 0x0x8057c5f0 (address_range)
void PlayerSub10_Core_validate_8057c5f0(u32, u32);

// 0x0x8057c7d0 (address_range)
u32 PlayerSub10_Core_validate_8057c7d0(u32);

// 0x0x8057c874 (address_range)
void phys_PlayerSub10_Core_8057c874(void);

// 0x0x8057caf4 (address_range)
void PlayerSub10_Core_validate_8057caf4(int);

// 0x0x8057ce4c (address_range)
int PlayerSub10_Core_validate_8057ce4c(int, int);

// 0x0x8057ce8c (address_range)
void phys_PlayerSub10_Core_8057ce8c(int);

// 0x0x8057ce98 (address_range)
void phys_PlayerSub10_Core_8057ce98(void);

// 0x0x8057ce9c (address_range)
void phys_PlayerSub10_Core_8057ce9c(int, int);

// 0x0x8057cef0 (address_range)
void phys_PlayerSub10_Core_8057cef0(int, int);

// 0x0x8057cf44 (address_range)
void phys_PlayerSub10_Core_8057cf44(int, int);

// 0x0x8057d008 (address_range)
void phys_PlayerSub10_Core_8057d008(int, int);

// 0x0x8057d034 (address_range)
void phys_PlayerSub10_Core_8057d034(int, int);

// 0x0x8057d060 (address_range)
void phys_PlayerSub10_Core_8057d060(int, int);

// 0x0x8057d08c (address_range)
void phys_PlayerSub10_Core_8057d08c(int, int);

// 0x0x8057d0b8 (address_range)
void phys_PlayerSub10_Core_8057d0b8(int, int);

// 0x0x8057d0e4 (address_range)
void phys_PlayerSub10_Core_8057d0e4(int, int);

// 0x0x8057d110 (address_range)
void phys_PlayerSub10_Core_8057d110(double, int, u32);

// 0x0x8057d188 (address_range)
void phys_PlayerSub10_Core_8057d188(double, int, u32);

// 0x0x8057d200 (address_range)
void phys_PlayerSub10_Core_8057d200(int);

// 0x0x8057d220 (address_range)
void phys_PlayerSub10_Core_8057d220(double, int, u32, int);

// 0x0x8057d360 (address_range)
void phys_PlayerSub10_Core_8057d360(int);

// 0x0x8057d39c (address_range)
void phys_PlayerSub10_Core_8057d39c(int, int, u32);

// 0x0x8057d434 (address_range)
void phys_PlayerSub10_Core_8057d434(int, int);

// 0x0x8057d460 (address_range)
void phys_PlayerSub10_Core_8057d460(void);

// 0x0x8057d56c (address_range)
void phys_PlayerSub10_Core_8057d56c(int, u32, u32);

// 0x0x8057d600 (address_range)
void phys_PlayerSub10_Core_8057d600(int, int, u32, float);

// 0x0x8057d6f0 (address_range)
void phys_PlayerSub10_Core_8057d6f0(int, int);

// 0x0x8057d70c (address_range)
void phys_PlayerSub10_Core_8057d70c(int, int, u32);

// 0x0x8057d7a4 (address_range)
void PlayerSub10_Core_validate_8057d7a4(int, int, u32, u32);

// 0x0x8057d920 (address_range)
void phys_PlayerSub10_Core_8057d920(void);

// 0x0x8057dbb0 (address_range)
void PlayerSub10_Core_validate_8057dbb0(u32, int);

// 0x0x8057e448 (address_range)
u32 phys_PlayerSub10_Core_8057e448(void);

// 0x0x8057e454 (address_range)
u32 phys_PlayerSub10_Core_8057e454(int);

// 0x0x8057e460 (address_range)
int PlayerSub10_Core_validate_8057e460(int, int);

// 0x0x8057e4a0 (address_range)
u32 PlayerSub10_Core_validate_8057e4a0(int);

// 0x0x8057e5c0 (address_range)
void phys_PlayerSub10_Core_8057e5c0(int);

// 0x0x8057e670 (address_range)
void phys_PlayerSub10_Core_8057e670(void);

// 0x0x8057ec5c (address_range)
void PlayerSub10_Core_validate_8057ec5c(int);

// 0x0x80583970 (address_range)
void phys_PlayerSub10_Misc_80583970(int, int);

// 0x0x8058399c (address_range)
void phys_PlayerSub10_Misc_8058399c(int);

// 0x0x80583aac (address_range)
void phys_PlayerSub10_Misc_80583aac(int);

// 0x0x805842d4 (address_range)
void phys_PlayerSub10_Misc_805842d4(void);

// 0x0x80584924 (address_range)
void PlayerSub10_Misc_validate_80584924(int);

// 0x0x8058521c (address_range)
void phys_PlayerSub10_Misc_8058521c(int);

// 0x0x80585284 (address_range)
void phys_PlayerSub10_Misc_80585284(int, u32);

// 0x0x8058550c (address_range)
void phys_PlayerSub10_Misc_8058550c(int, int);

// 0x0x805857c0 (address_range)
void PlayerSub10_Misc_calc_805857c0(int);

// 0x0x80586908 (address_range)
void phys_PlayerSub10_Misc_80586908(int);

// 0x0x80586b34 (address_range)
u32 phys_PlayerSub10_Misc_80586b34(int, int, int);

// 0x0x80586bd4 (address_range)
void PlayerSub10_Misc_validate_80586bd4(u32, int);

// 0x0x80586c54 (address_range)
u32 PlayerSub10_Misc_validate_80586c54(u32, int);

// 0x0x80586d50 (address_range)
u32 PlayerSub10_Misc_validate_80586d50(u32, int);

// 0x0x80586e4c (address_range)
void phys_PlayerSub10_Misc_80586e4c(int, int, u32, int);

// 0x0x80586f0c (address_range)
void phys_PlayerSub10_Misc_80586f0c(int, int, u32, int);

// 0x0x80586fcc (address_range)
u32 PlayerSub10_Misc_validate_80586fcc(u32, int);

// 0x0x805870dc (address_range)
u32 PlayerSub10Bike_validate_805870dc(u32, int);

// 0x0x805871ec (address_range)
void phys_PlayerSub10Bike_805871ec(int, int, int, int, u32, u32, int);

// 0x0x805873a0 (address_range)
void PlayerSub10Bike_validate_805873a0(u32, int, int, int);

// 0x0x80587594 (address_range)
void phys_PlayerSub10Bike_80587594(u32, int, int, int);

// 0x0x80587608 (address_range)
void PlayerSub10Bike_validate_80587608(u32, int, int, int);

// 0x0x80587744 (address_range)
void PlayerSub10Bike_validate_80587744(u32, int, int, int);

// 0x0x805877f8 (address_range)
void phys_PlayerSub10Bike_805877f8(int);

// 0x0x80587c40 (address_range)
void PlayerSub10Bike_validate_80587c40(int);

// 0x0x80588b88 (address_range)
void PlayerSub10Bike_assertFail_80588b88(void);

// 0x0x805898c8 (address_range)
void PlayerBoost_assertFail_805898c8(void);

// 0x0x8058a350 (address_range)
void PlayerPhysics_validate_8058a350(int);

// 0x0x8058a52c (address_range)
void phys_PlayerPhysics_8058a52c(void);

// 0x0x8058a958 (address_range)
void phys_PlayerPhysics_8058a958(void);

// 0x0x8058ad2c (address_range)
void PlayerPhysics_validate_8058ad2c(int);

// 0x0x8058afac (address_range)
void phys_PlayerPhysics_8058afac(int);

// 0x0x8058b360 (address_range)
void PlayerPhysics_validate_8058b360(int);

// 0x0x8058b710 (address_range)
void PlayerPhysics_validate_8058b710(int);

// 0x0x8058bc58 (address_range)
void phys_PlayerPhysics_8058bc58(int);

// 0x0x8058bdd4 (address_range)
void PlayerPhysics_validate_8058bdd4(int);

// 0x0x8058bf04 (address_range)
void PlayerPhysics_validate_8058bf04(int);

// 0x0x8058c260 (address_range)
void PlayerPhysics_calc_8058c260(int);

// 0x0x8058c408 (address_range)
void phys_PlayerPhysics_8058c408(void);

// 0x0x8058cb30 (address_range)
void PlayerPhysics_validate_8058cb30(int);

// 0x0x8058ccd4 (address_range)
void phys_PlayerPhysics_8058ccd4(int);

// 0x0x8058cd38 (address_range)
u32 PlayerPhysics_validate_8058cd38(int);

// 0x0x8058d754 (address_range)
bool phys_PlayerPhysics_8058d754(int);

// 0x0x8058d7bc (address_range)
void PlayerPhysics_validate_8058d7bc(int);

// 0x0x8058df1c (address_range)
void PlayerPhysics_validate_8058df1c(int);

// 0x0x8058e12c (address_range)
void WheelPhysics_validate_8058e12c(int);

// 0x0x8058e4c4 (address_range)
void WheelPhysics_validate_8058e4c4(int);

// 0x0x8058e774 (address_range)
void WheelPhysics_validate_8058e774(int);

// 0x0x8058f034 (address_range)
void phys_WheelPhysics_8058f034(int);

// 0x0x8058f2a8 (address_range)
void phys_WheelPhysics_8058f2a8(int);

// 0x0x8058f530 (address_range)
void phys_WheelPhysics_8058f530(void);

// 0x0x8058f908 (address_range)
void WheelPhysics_assertFail_8058f908(void);

// 0x0x8058fefc (address_range)
void phys_WheelPhysics_8058fefc(int);

// 0x0x8058ff88 (address_range)
void WheelPhysics_validate_8058ff88(int);

// 0x0x8056731c (main.dol_phase3)
void sub_8056731c(void);

// 0x0x80567514 (main.dol_phase3)
void sub_80567514(void);

// 0x0x80567594 (main.dol_phase3)
void sub_80567594(void);

// 0x0x805675f8 (main.dol_phase3)
void sub_805675f8(void);

// 0x0x80567648 (main.dol_phase3)
void sub_80567648(void);

// 0x0x8056774c (main.dol_phase3)
void sub_8056774c(void);

// 0x0x805677cc (main.dol_phase3)
void sub_805677cc(void);

// 0x0x805678b4 (main.dol_phase3)
void sub_805678b4(void);

// 0x0x80567920 (main.dol_phase3)
void sub_80567920(void);

// 0x0x80567978 (main.dol_phase3)
void sub_80567978(void);

// 0x0x805679d0 (main.dol_phase3)
void sub_805679d0(void);

// 0x0x80567b58 (main.dol_phase3)
void sub_80567b58(void);

// 0x0x80567bac (main.dol_phase3)
void sub_80567bac(void);

// 0x0x80567c10 (main.dol_phase3)
void sub_80567c10(void);

// 0x0x80567c88 (main.dol_phase3)
void sub_80567c88(void);

// 0x0x80567d00 (main.dol_phase3)
void sub_80567d00(void);

// 0x0x80567fac (main.dol_phase3)
void sub_80567fac(void);

// 0x0x80567fec (main.dol_phase3)
void sub_80567fec(void);

// 0x0x8056802c (main.dol_phase3)
void sub_8056802c(void);

// 0x0x8056806c (main.dol_phase3)
void sub_8056806c(void);

// 0x0x805680ac (main.dol_phase3)
void sub_805680ac(void);

// 0x0x8056819c (main.dol_phase3)
void sub_8056819c(void);

// 0x0x80568284 (main.dol_phase3)
void sub_80568284(void);

// 0x0x8056836c (main.dol_phase3)
void sub_8056836c(void);

// 0x0x80568454 (main.dol_phase3)
void sub_80568454(void);

// 0x0x80568504 (main.dol_phase3)
void sub_80568504(void);

// 0x0x805685b4 (main.dol_phase3)
void sub_805685b4(void);

// 0x0x80575a44 (main.dol_phase3)
void PlayerTrick_ctor(void);

// 0x0x80575aa8 (main.dol_phase3)
void PlayerTrick_dtor(void);

// 0x0x80575b38 (main.dol_phase3)
void PlayerTrick_updateNext(void);

// 0x0x80575d7c (main.dol_phase3)
void PlayerTrick_tryStart(void);

// 0x0x80575ee8 (main.dol_phase3)
void PlayerTrick_start(void);

// 0x0x8057616c (main.dol_phase3)
void PlayerTrick_startInner(void);

// 0x0x805763e4 (main.dol_phase3)
void PlayerTrick_update(void);

// 0x0x805764fc (main.dol_phase3)
void PlayerTrick_updateRot(void);

// 0x0x805766b8 (main.dol_phase3)
void PlayerTrick_end(void);

// 0x0x80576758 (main.dol_phase3)
void PlayerTrickBike_start(void);

// 0x0x8057689c (main.dol_phase3)
void PlayerTrickBike_startInner(void);

// 0x0x80576994 (main.dol_phase3)
void PlayerTrickBike_updateRot(void);

// 0x0x80576afc (main.dol_phase3)
void PlayerTrickBike_dtor(void);

// 0x0x80577fc4 (main.dol_phase3)
void PlayerSub10_ctor(void);

// 0x0x8057811c (main.dol_phase3)
void PlayerBoost_dtor(void);

// 0x0x8057829c (main.dol_phase3)
void setTurnParams(void);

// 0x0x805784d4 (main.dol_phase3)
void PlayerSub10_init(void);

// 0x0x805788dc (main.dol_phase3)
void PlayerSub10_update(void);

// 0x0x8057a140 (main.dol_phase3)
void updateDir(void);

// 0x0x8057a8b4 (main.dol_phase3)
void updateTurn(void);

// 0x0x8057ab68 (main.dol_phase3)
void updateVehicleSpeed(void);

// 0x0x8057b9bc (main.dol_phase3)
void updateAcceleration(void);

// 0x0x8057c3d4 (main.dol_phase3)
void updateOffroad(void);

// 0x0x8057c5e8 (main.dol_phase3)
void sub_8057c5e8(void);

// 0x0x8057c69c (main.dol_phase3)
void sub_8057c69c(void);

// 0x0x8057cdd4 (main.dol_phase3)
void sub_8057cdd4(void);

// 0x0x8057cf0c (main.dol_phase3)
void sub_8057cf0c(void);

// 0x0x8057d1d4 (main.dol_phase3)
void sub_8057d1d4(void);

// 0x0x8057d398 (main.dol_phase3)
void sub_8057d398(void);

// 0x0x8057d888 (main.dol_phase3)
void sub_8057d888(void);

// 0x0x8057da5c (main.dol_phase3)
void sub_8057da5c(void);

// 0x0x8057dc44 (main.dol_phase3)
void sub_8057dc44(void);

// 0x0x8057e0dc (main.dol_phase3)
void sub_8057e0dc(void);

// 0x0x8057e3f4 (main.dol_phase3)
void sub_8057e3f4(void);

// 0x0x8057e638 (main.dol_phase3)
void sub_8057e638(void);

// 0x0x8057e6f4 (main.dol_phase3)
void sub_8057e6f4(void);

// 0x0x8057e77c (main.dol_phase3)
void sub_8057e77c(void);

// 0x0x8057e804 (main.dol_phase3)
void sub_8057e804(void);

// 0x0x8057e99c (main.dol_phase3)
void sub_8057e99c(void);

// 0x0x8057eab8 (main.dol_phase3)
void sub_8057eab8(void);

// 0x0x8057ec28 (main.dol_phase3)
void sub_8057ec28(void);

// 0x0x8057f090 (main.dol_phase3)
void sub_8057f090(void);

// 0x0x8057f1d0 (main.dol_phase3)
void sub_8057f1d0(void);

// 0x0x8057f3d8 (main.dol_phase3)
void sub_8057f3d8(void);

// 0x0x8057f630 (main.dol_phase3)
void sub_8057f630(void);

// 0x0x8057f7a8 (main.dol_phase3)
void sub_8057f7a8(void);

// 0x0x8057f96c (main.dol_phase3)
void sub_8057f96c(void);

// 0x0x8057fb6c (main.dol_phase3)
void sub_8057fb6c(void);

// 0x0x8057fd18 (main.dol_phase3)
void sub_8057fd18(void);

// 0x0x805800bc (main.dol_phase3)
void sub_805800bc(void);

// 0x0x80580268 (main.dol_phase3)
void sub_80580268(void);

// 0x0x80580438 (main.dol_phase3)
void sub_80580438(void);

// 0x0x8058051c (main.dol_phase3)
void sub_8058051c(void);

// 0x0x805805ec (main.dol_phase3)
void sub_805805ec(void);

// 0x0x80580648 (main.dol_phase3)
void sub_80580648(void);

// 0x0x805806a4 (main.dol_phase3)
void sub_805806a4(void);

// 0x0x80580778 (main.dol_phase3)
void sub_80580778(void);

// 0x0x80580998 (main.dol_phase3)
void sub_80580998(void);

// 0x0x80580a84 (main.dol_phase3)
void sub_80580a84(void);

// 0x0x80580b14 (main.dol_phase3)
void sub_80580b14(void);

// 0x0x80580cdc (main.dol_phase3)
void sub_80580cdc(void);

// 0x0x80580dc0 (main.dol_phase3)
void sub_80580dc0(void);

// 0x0x80580f28 (main.dol_phase3)
void sub_80580f28(void);

// 0x0x80580f9c (main.dol_phase3)
void sub_80580f9c(void);

// 0x0x80581034 (main.dol_phase3)
void sub_80581034(void);

// 0x0x805810a8 (main.dol_phase3)
void sub_805810a8(void);

// 0x0x805813e8 (main.dol_phase3)
void sub_805813e8(void);

// 0x0x8058160c (main.dol_phase3)
void sub_8058160c(void);

// 0x0x8058173c (main.dol_phase3)
void sub_8058173c(void);

// 0x0x80581778 (main.dol_phase3)
void sub_80581778(void);

// 0x0x80581824 (main.dol_phase3)
void sub_80581824(void);

// 0x0x8058196c (main.dol_phase3)
void sub_8058196c(void);

// 0x0x805819a8 (main.dol_phase3)
void sub_805819a8(void);

// 0x0x80581a58 (main.dol_phase3)
void sub_80581a58(void);

// 0x0x80581b1c (main.dol_phase3)
void sub_80581b1c(void);

// 0x0x80581c90 (main.dol_phase3)
void sub_80581c90(void);

// 0x0x8058212c (main.dol_phase3)
void sub_8058212c(void);

// 0x0x80582278 (main.dol_phase3)
void sub_80582278(void);

// 0x0x805823a4 (main.dol_phase3)
void sub_805823a4(void);

// 0x0x80582530 (main.dol_phase3)
void sub_80582530(void);

// 0x0x80582694 (main.dol_phase3)
void sub_80582694(void);

// 0x0x80582804 (main.dol_phase3)
void sub_80582804(void);

// 0x0x805828cc (main.dol_phase3)
void sub_805828cc(void);

// 0x0x80582dd8 (main.dol_phase3)
void sub_80582dd8(void);

// 0x0x80582e34 (main.dol_phase3)
void sub_80582e34(void);

// 0x0x80582f9c (main.dol_phase3)
void sub_80582f9c(void);

// 0x0x805832e4 (main.dol_phase3)
void sub_805832e4(void);

// 0x0x80583424 (main.dol_phase3)
void sub_80583424(void);

// 0x0x8058348c (main.dol_phase3)
void sub_8058348c(void);

// 0x0x80583658 (main.dol_phase3)
void sub_80583658(void);

// 0x0x805837cc (main.dol_phase3)
void sub_805837cc(void);

// 0x0x80583b88 (main.dol_phase3)
void sub_80583b88(void);

// 0x0x80583f2c (main.dol_phase3)
void sub_80583f2c(void);

// 0x0x80583f6c (main.dol_phase3)
void sub_80583f6c(void);

// 0x0x80584084 (main.dol_phase3)
void sub_80584084(void);

// 0x0x80584374 (main.dol_phase3)
void sub_80584374(void);

// 0x0x80584688 (main.dol_phase3)
void sub_80584688(void);

// 0x0x8058477c (main.dol_phase3)
void sub_8058477c(void);

// 0x0x80584970 (main.dol_phase3)
void sub_80584970(void);

// 0x0x805849cc (main.dol_phase3)
void sub_805849cc(void);

// 0x0x80584d98 (main.dol_phase3)
void sub_80584d98(void);

// 0x0x80585308 (main.dol_phase3)
void sub_80585308(void);

// 0x0x805853dc (main.dol_phase3)
void sub_805853dc(void);

// 0x0x805855fc (main.dol_phase3)
void sub_805855fc(void);

// 0x0x805858ec (main.dol_phase3)
void sub_805858ec(void);

// 0x0x80585a44 (main.dol_phase3)
void sub_80585a44(void);

// 0x0x80585a68 (main.dol_phase3)
void sub_80585a68(void);

// 0x0x80585ae0 (main.dol_phase3)
void sub_80585ae0(void);

// 0x0x80585b38 (main.dol_phase3)
void sub_80585b38(void);

// 0x0x805860fc (main.dol_phase3)
void sub_805860fc(void);

// 0x0x805867bc (main.dol_phase3)
void sub_805867bc(void);

// 0x0x80586a1c (main.dol_phase3)
void sub_80586a1c(void);

// 0x0x80586df4 (main.dol_phase3)
void sub_80586df4(void);

// 0x0x80586ed0 (main.dol_phase3)
void sub_80586ed0(void);

// 0x0x80586fe8 (main.dol_phase3)
void sub_80586fe8(void);

// 0x0x80587500 (main.dol_phase3)
void sub_80587500(void);

// 0x0x805875d0 (main.dol_phase3)
void sub_805875d0(void);

// 0x0x805879e4 (main.dol_phase3)
void sub_805879e4(void);

// 0x0x80587b70 (main.dol_phase3)
void sub_80587b70(void);

// 0x0x80587bb8 (main.dol_phase3)
void sub_80587bb8(void);

// 0x0x80587bf8 (main.dol_phase3)
void sub_80587bf8(void);

// 0x0x80587c94 (main.dol_phase3)
void sub_80587c94(void);

// 0x0x80587d40 (main.dol_phase3)
void sub_80587d40(void);

// 0x0x80587da8 (main.dol_phase3)
void sub_80587da8(void);

// 0x0x80588390 (main.dol_phase3)
void sub_80588390(void);

// 0x0x80588434 (main.dol_phase3)
void sub_80588434(void);

// 0x0x805887d8 (main.dol_phase3)
void sub_805887d8(void);

// 0x0x80588990 (main.dol_phase3)
void sub_80588990(void);

// 0x0x80588b98 (main.dol_phase3)
void sub_80588b98(void);

// 0x0x80588cec (main.dol_phase3)
void sub_80588cec(void);

// 0x0x80588e64 (main.dol_phase3)
void sub_80588e64(void);

// 0x0x8058909c (main.dol_phase3)
void sub_8058909c(void);

// 0x0x805890f0 (main.dol_phase3)
void sub_805890f0(void);

// 0x0x80589158 (main.dol_phase3)
void sub_80589158(void);

// 0x0x80589200 (main.dol_phase3)
void sub_80589200(void);

// 0x0x805892ac (main.dol_phase3)
void sub_805892ac(void);

// 0x0x80589348 (main.dol_phase3)
void sub_80589348(void);

// 0x0x80589440 (main.dol_phase3)
void sub_80589440(void);

// 0x0x80589480 (main.dol_phase3)
void sub_80589480(void);

// 0x0x805894c0 (main.dol_phase3)
void sub_805894c0(void);

// 0x0x80589554 (main.dol_phase3)
void sub_80589554(void);

// 0x0x805895ac (main.dol_phase3)
void sub_805895ac(void);

// 0x0x8058960c (main.dol_phase3)
void sub_8058960c(void);

// 0x0x8058966c (main.dol_phase3)
void sub_8058966c(void);

// 0x0x80589704 (main.dol_phase3)
void sub_80589704(void);

// 0x0x80589744 (main.dol_phase3)
void sub_80589744(void);

// 0x0x80589798 (main.dol_phase3)
void sub_80589798(void);

// 0x0x805897d8 (main.dol_phase3)
void sub_805897d8(void);

// 0x0x80589818 (main.dol_phase3)
void sub_80589818(void);

// 0x0x8058989c (main.dol_phase3)
void sub_8058989c(void);

// 0x0x80589924 (main.dol_phase3)
void sub_80589924(void);

// 0x0x80589964 (main.dol_phase3)
void sub_80589964(void);

// 0x0x805899cc (main.dol_phase3)
void sub_805899cc(void);

// 0x0x80589fa4 (main.dol_phase3)
void sub_80589fa4(void);

// 0x0x8058a7b4 (main.dol_phase3)
void sub_8058a7b4(void);

// 0x0x8058a7f4 (main.dol_phase3)
void sub_8058a7f4(void);

// 0x0x8058a834 (main.dol_phase3)
void sub_8058a834(void);

// 0x0x8058a874 (main.dol_phase3)
void sub_8058a874(void);

// 0x0x8058a8b4 (main.dol_phase3)
void sub_8058a8b4(void);

// 0x0x8058a8f4 (main.dol_phase3)
void sub_8058a8f4(void);

// 0x0x8058a934 (main.dol_phase3)
void sub_8058a934(void);

// 0x0x8058a974 (main.dol_phase3)
void sub_8058a974(void);

// 0x0x8058a9b4 (main.dol_phase3)
void sub_8058a9b4(void);

// 0x0x8058a9f4 (main.dol_phase3)
void sub_8058a9f4(void);

// 0x0x8058aa34 (main.dol_phase3)
void sub_8058aa34(void);

// 0x0x8058aa74 (main.dol_phase3)
void sub_8058aa74(void);

// 0x0x8058aab4 (main.dol_phase3)
void sub_8058aab4(void);

// 0x0x8058aaf4 (main.dol_phase3)
void sub_8058aaf4(void);

// 0x0x8058ab34 (main.dol_phase3)
void sub_8058ab34(void);

// 0x0x8058ab74 (main.dol_phase3)
void sub_8058ab74(void);

// 0x0x8058abb4 (main.dol_phase3)
void sub_8058abb4(void);

// 0x0x8058abf4 (main.dol_phase3)
void sub_8058abf4(void);

// 0x0x8058ac48 (main.dol_phase3)
void sub_8058ac48(void);

// 0x0x8058ac9c (main.dol_phase3)
void sub_8058ac9c(void);

// 0x0x8058acf0 (main.dol_phase3)
void sub_8058acf0(void);

// 0x0x8058ad44 (main.dol_phase3)
void sub_8058ad44(void);

// 0x0x8058ad98 (main.dol_phase3)
void sub_8058ad98(void);

// 0x0x8058ae20 (main.dol_phase3)
void sub_8058ae20(void);

// 0x0x8058ae90 (main.dol_phase3)
void sub_8058ae90(void);

// 0x0x8058af00 (main.dol_phase3)
void sub_8058af00(void);

// 0x0x8058af70 (main.dol_phase3)
void sub_8058af70(void);

// 0x0x8058afe0 (main.dol_phase3)
void sub_8058afe0(void);

// 0x0x8058b050 (main.dol_phase3)
void sub_8058b050(void);

// 0x0x8058b0c0 (main.dol_phase3)
void sub_8058b0c0(void);

// 0x0x8058b184 (main.dol_phase3)
void sub_8058b184(void);

// 0x0x8058b1d8 (main.dol_phase3)
void sub_8058b1d8(void);

// 0x0x8058b4d4 (main.dol_phase3)
void sub_8058b4d4(void);

// 0x0x8058b8e8 (main.dol_phase3)
void sub_8058b8e8(void);

// 0x0x8058ba38 (main.dol_phase3)
void sub_8058ba38(void);

// 0x0x8058be20 (main.dol_phase3)
void sub_8058be20(void);

// 0x0x8058be60 (main.dol_phase3)
void sub_8058be60(void);

// 0x0x8058c0cc (main.dol_phase3)
void sub_8058c0cc(void);

// 0x0x8058c11c (main.dol_phase3)
void sub_8058c11c(void);

// 0x0x8058c418 (main.dol_phase3)
void sub_8058c418(void);

// 0x0x8058c500 (main.dol_phase3)
void sub_8058c500(void);

// 0x0x8058c73c (main.dol_phase3)
void sub_8058c73c(void);

// 0x0x8058c7a0 (main.dol_phase3)
void sub_8058c7a0(void);

// 0x0x8058c804 (main.dol_phase3)
void sub_8058c804(void);

// 0x0x8058c868 (main.dol_phase3)
void sub_8058c868(void);

// 0x0x8058c8cc (main.dol_phase3)
void sub_8058c8cc(void);

// 0x0x8058c930 (main.dol_phase3)
void sub_8058c930(void);

// 0x0x8058c994 (main.dol_phase3)
void sub_8058c994(void);

// 0x0x8058c9f8 (main.dol_phase3)
void sub_8058c9f8(void);

// 0x0x8058ca68 (main.dol_phase3)
void sub_8058ca68(void);

// 0x0x8058cab4 (main.dol_phase3)
void sub_8058cab4(void);

// 0x0x8058cafc (main.dol_phase3)
void sub_8058cafc(void);

// 0x0x8058cb70 (main.dol_phase3)
void sub_8058cb70(void);

// 0x0x8058d40c (main.dol_phase3)
void sub_8058d40c(void);

// 0x0x8058d454 (main.dol_phase3)
void sub_8058d454(void);

// 0x0x8058d4e0 (main.dol_phase3)
void sub_8058d4e0(void);

// 0x0x8058d51c (main.dol_phase3)
void sub_8058d51c(void);

// 0x0x8058d5b0 (main.dol_phase3)
void sub_8058d5b0(void);

// 0x0x8058d684 (main.dol_phase3)
void sub_8058d684(void);

// 0x0x8058d818 (main.dol_phase3)
void sub_8058d818(void);

// 0x0x8058d8e8 (main.dol_phase3)
void sub_8058d8e8(void);

// 0x0x8058d918 (main.dol_phase3)
void sub_8058d918(void);

// 0x0x8058d948 (main.dol_phase3)
void sub_8058d948(void);

// 0x0x8058d97c (main.dol_phase3)
void sub_8058d97c(void);

// 0x0x8058d9a0 (main.dol_phase3)
void sub_8058d9a0(void);

// 0x0x8058d9c4 (main.dol_phase3)
void sub_8058d9c4(void);

// 0x0x8058d9e8 (main.dol_phase3)
void sub_8058d9e8(void);

// 0x0x8058da6c (main.dol_phase3)
void sub_8058da6c(void);

// 0x0x8058da90 (main.dol_phase3)
void sub_8058da90(void);

// 0x0x8058dae4 (main.dol_phase3)
void sub_8058dae4(void);

// 0x0x8058db20 (main.dol_phase3)
void sub_8058db20(void);

// 0x0x8058db70 (main.dol_phase3)
void sub_8058db70(void);

// 0x0x8058db94 (main.dol_phase3)
void sub_8058db94(void);

// 0x0x8058dc1c (main.dol_phase3)
void sub_8058dc1c(void);

// 0x0x8058dc4c (main.dol_phase3)
void sub_8058dc4c(void);

// 0x0x8058dc98 (main.dol_phase3)
void sub_8058dc98(void);

// 0x0x8058dcdc (main.dol_phase3)
void sub_8058dcdc(void);

// 0x0x8058dd20 (main.dol_phase3)
void sub_8058dd20(void);

// 0x0x8058dd64 (main.dol_phase3)
void sub_8058dd64(void);

// 0x0x8058dda0 (main.dol_phase3)
void sub_8058dda0(void);

// 0x0x8058ddfc (main.dol_phase3)
void sub_8058ddfc(void);

// 0x0x8058def0 (main.dol_phase3)
void sub_8058def0(void);

// 0x0x8058df30 (main.dol_phase3)
void sub_8058df30(void);

// 0x0x8058dfbc (main.dol_phase3)
void sub_8058dfbc(void);

// 0x0x8058e054 (main.dol_phase3)
void sub_8058e054(void);

// 0x0x8058e1c8 (main.dol_phase3)
void sub_8058e1c8(void);

// 0x0x8058e26c (main.dol_phase3)
void sub_8058e26c(void);

// 0x0x8058e638 (main.dol_phase3)
void sub_8058e638(void);

// 0x0x8058e688 (main.dol_phase3)
void sub_8058e688(void);

// 0x0x8058e764 (main.dol_phase3)
void sub_8058e764(void);

// 0x0x8058e804 (main.dol_phase3)
void sub_8058e804(void);

// 0x0x8058e844 (main.dol_phase3)
void sub_8058e844(void);

// 0x0x8058e9d0 (main.dol_phase3)
void sub_8058e9d0(void);

// 0x0x8058ea4c (main.dol_phase3)
void sub_8058ea4c(void);

// 0x0x8058ec48 (main.dol_phase3)
void sub_8058ec48(void);

// 0x0x8058ec88 (main.dol_phase3)
void sub_8058ec88(void);

// 0x0x8058ed20 (main.dol_phase3)
void sub_8058ed20(void);

// 0x0x8058ed68 (main.dol_phase3)
void sub_8058ed68(void);

// 0x0x8058eda8 (main.dol_phase3)
void sub_8058eda8(void);

// 0x0x8058ee88 (main.dol_phase3)
void sub_8058ee88(void);

// 0x0x8058eefc (main.dol_phase3)
void sub_8058eefc(void);

// 0x0x8058f08c (main.dol_phase3)
void sub_8058f08c(void);

// 0x0x8058f24c (main.dol_phase3)
void sub_8058f24c(void);

// 0x0x8058f2a0 (main.dol_phase3)
void sub_8058f2a0(void);

// 0x0x8058f328 (main.dol_phase3)
void sub_8058f328(void);

// 0x0x8058f4ec (main.dol_phase3)
void sub_8058f4ec(void);

// 0x0x8058f52c (main.dol_phase3)
void sub_8058f52c(void);

// 0x0x8058f56c (main.dol_phase3)
void sub_8058f56c(void);

// 0x0x8058f5ac (main.dol_phase3)
void sub_8058f5ac(void);

// 0x0x8058f5f4 (main.dol_phase3)
void sub_8058f5f4(void);

// 0x0x8058f860 (main.dol_phase3)
void sub_8058f860(void);

// 0x0x8058f8f0 (main.dol_phase3)
void sub_8058f8f0(void);

// 0x0x8058f964 (main.dol_phase3)
void sub_8058f964(void);

// 0x0x8058f9d0 (main.dol_phase3)
void sub_8058f9d0(void);

// 0x0x8058fa10 (main.dol_phase3)
void sub_8058fa10(void);

// 0x0x8058fa50 (main.dol_phase3)
void sub_8058fa50(void);

// 0x0x8058fae8 (main.dol_phase3)
void sub_8058fae8(void);

// 0x0x8058fb6c (main.dol_phase3)
void sub_8058fb6c(void);

// 0x0x8058fe14 (main.dol_phase3)
void sub_8058fe14(void);

// 0x0x8058ff20 (main.dol_phase3)
void sub_8058ff20(void);

#ifdef __cplusplus
}
#endif
