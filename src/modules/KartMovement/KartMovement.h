#pragma once
// KartMovement module - Mario Kart Wii PC Port
// Phase 6: 366 functions
#include "../types.h"

#ifdef __cplusplus
extern "C" {
#endif

// 0x0x8058a80c (certain)
void PlayerSub10Bike_getWheelieSoftSpeedLimitBonus(int);

// 0x0x80590040 (address_range)
void KartPhysics_Wheel_validate_80590040(int);

// 0x0x80590764 (address_range)
void kart_KartPhysics_Wheel_80590764(void);

// 0x0x80590bf4 (address_range)
void kart_KartPhysics_Wheel_80590bf4(int, int, uint, uint);

// 0x0x80591278 (address_range)
void kart_KartPhysics_Wheel_80591278(int, uint, uint, int);

// 0x0x80591420 (address_range)
void kart_KartPhysics_Wheel_80591420(int, u16);

// 0x0x80591438 (address_range)
void kart_KartPhysics_Wheel_80591438(int);

// 0x0x80591550 (address_range)
void kart_KartPhysics_Wheel_80591550(int);

// 0x0x805915f0 (address_range)
void KartPhysics_Wheel_assertFail_805915f0(void);

// 0x0x80591780 (address_range)
void KartPhysics_Wheel_assertFail_80591780(void);

// 0x0x805918e0 (address_range)
void kart_KartPhysics_Wheel_805918e0(int);

// 0x0x80591934 (address_range)
void kart_KartPhysics_Wheel_80591934(int);

// 0x0x80591988 (address_range)
void kart_KartPhysics_Wheel_80591988(int);

// 0x0x80591a64 (address_range)
void kart_KartPhysics_Wheel_80591a64(int);

// 0x0x80591ac8 (address_range)
void KartPhysics_Wheel_validate_80591ac8(int);

// 0x0x80591bf0 (address_range)
void kart_KartPhysics_Wheel_80591bf0(int);

// 0x0x80591ccc (address_range)
void kart_KartPhysics_Wheel_80591ccc(int);

// 0x0x80591d30 (address_range)
void kart_KartPhysics_Wheel_80591d30(int);

// 0x0x80591e0c (address_range)
void kart_KartPhysics_Wheel_80591e0c(int);

// 0x0x80591e70 (address_range)
void KartPhysics_Wheel_validate_80591e70(int);

// 0x0x80591f60 (address_range)
void kart_KartPhysics_Wheel_80591f60(int);

// 0x0x8059203c (address_range)
void kart_KartPhysics_Wheel_8059203c(int);

// 0x0x805920a0 (address_range)
void KartPhysics_Wheel_validate_805920a0(int);

// 0x0x80592204 (address_range)
void KartPhysics_Wheel_validate_80592204(u32, int, int, int);

// 0x0x805922b8 (address_range)
void kart_KartPhysics_Wheel_805922b8(int);

// 0x0x80592398 (address_range)
void kart_KartPhysics_Wheel_80592398(int);

// 0x0x805923fc (address_range)
void KartPhysics_Wheel_validate_805923fc(int);

// 0x0x80592524 (address_range)
void kart_KartPhysics_Wheel_80592524(int);

// 0x0x80592604 (address_range)
void kart_KartPhysics_Wheel_80592604(int);

// 0x0x80592668 (address_range)
void KartPhysics_Wheel_validate_80592668(int);

// 0x0x80592790 (address_range)
void kart_KartPhysics_Wheel_80592790(int, int, int, int, uint);

// 0x0x80592848 (address_range)
void KartPhysics_Wheel_validate_80592848(u32, int, int, int);

// 0x0x805928fc (address_range)
void kart_KartPhysics_Wheel_805928fc(int, int);

// 0x0x80592a1c (address_range)
void kart_KartPhysics_Wheel_80592a1c(int);

// 0x0x80592b38 (address_range)
void kart_KartPhysics_Wheel_80592b38(int, int, u32, u32, u32, u32, u32);

// 0x0x80592d50 (address_range)
void kart_KartPhysics_Wheel_80592d50(int, u32);

// 0x0x80592d9c (address_range)
void kart_KartPhysics_Wheel_80592d9c(int, int);

// 0x0x80592e84 (address_range)
void kart_KartPhysics_Wheel_80592e84(int, int);

// 0x0x80592fcc (address_range)
void kart_KartPhysics_Wheel_80592fcc(int);

// 0x0x805930bc (address_range)
void KartPhysics_Wheel_validate_805930bc(int);

// 0x0x805931e4 (address_range)
void kart_KartPhysics_Wheel_805931e4(int, u32);

// 0x0x80593230 (address_range)
void kart_KartPhysics_Wheel_80593230(int);

// 0x0x805932e0 (address_range)
void KartPhysics_Wheel_validate_805932e0(int);

// 0x0x805933d0 (address_range)
void kart_KartPhysics_Wheel_805933d0(int, u32);

// 0x0x80593434 (address_range)
void kart_KartPhysics_Wheel_80593434(int);

// 0x0x805934b0 (address_range)
void kart_KartPhysics_Wheel_805934b0(int, u32);

// 0x0x805934fc (address_range)
void kart_KartPhysics_Wheel_805934fc(int);

// 0x0x80593560 (address_range)
void KartPhysics_Wheel_validate_80593560(int);

// 0x0x805936dc (address_range)
void KartPhysics_Wheel_validate_805936dc(int, u16);

// 0x0x80593960 (address_range)
void kart_KartPhysics_Wheel_80593960(void);

// 0x0x80593ba8 (address_range)
void kart_KartPhysics_Wheel_80593ba8(int);

// 0x0x80593c38 (address_range)
void kart_KartPhysics_Wheel_80593c38(int);

// 0x0x80593cc8 (address_range)
void kart_KartPhysics_Wheel_80593cc8(int);

// 0x0x80593d64 (address_range)
void KartPhysics_Wheel_validate_80593d64(int);

// 0x0x80593e60 (address_range)
void KartPhysics_Wheel_validate_80593e60(int);

// 0x0x80593f30 (address_range)
void kart_KartPhysics_Wheel_80593f30(int);

// 0x0x80593fcc (address_range)
void KartPhysics_Wheel_validate_80593fcc(int);

// 0x0x805940c8 (address_range)
void KartPhysics_Wheel_validate_805940c8(int);

// 0x0x80594198 (address_range)
void kart_KartPhysics_Wheel_80594198(int);

// 0x0x80594234 (address_range)
void KartPhysics_Wheel_validate_80594234(int);

// 0x0x80594330 (address_range)
void KartPhysics_Wheel_validate_80594330(int);

// 0x0x80594400 (address_range)
void kart_KartPhysics_Wheel_80594400(int);

// 0x0x80594488 (address_range)
void kart_KartPhysics_Wheel_80594488(int);

// 0x0x80594538 (address_range)
void KartPhysics_Wheel_validate_80594538(int);

// 0x0x805945e0 (address_range)
void kart_KartPhysics_Wheel_805945e0(int);

// 0x0x80594690 (address_range)
void KartPhysics_Wheel_validate_80594690(int);

// 0x0x80594738 (address_range)
void kart_KartPhysics_Wheel_80594738(int);

// 0x0x805947ac (address_range)
void KartPhysics_Wheel_validate_805947ac(int);

// 0x0x80594850 (address_range)
void kart_KartPhysics_Wheel_80594850(int);

// 0x0x80594900 (address_range)
void KartPhysics_Wheel_validate_80594900(int);

// 0x0x805949c4 (address_range)
void kart_KartPhysics_Wheel_805949c4(int);

// 0x0x80594a74 (address_range)
void KartPhysics_Wheel_validate_80594a74(int);

// 0x0x80594b38 (address_range)
void kart_KartPhysics_Wheel_80594b38(int);

// 0x0x80594be8 (address_range)
void KartPhysics_Wheel_validate_80594be8(int);

// 0x0x80594cac (address_range)
void kart_KartPhysics_Wheel_80594cac(int);

// 0x0x80594d5c (address_range)
void KartPhysics_Wheel_validate_80594d5c(int);

// 0x0x80594e20 (address_range)
void KartPhysics_Wheel_validate_80594e20(int);

// 0x0x80594ef0 (address_range)
void KartPhysics_Wheel_validate_80594ef0(int);

// 0x0x80594f94 (address_range)
void kart_KartPhysics_Wheel_80594f94(int);

// 0x0x805950e8 (address_range)
void KartPhysics_Wheel_validate_805950e8(int);

// 0x0x80595278 (address_range)
void KartPhysics_Wheel_validate_80595278(int);

// 0x0x80595594 (address_range)
void KartPhysics_Wheel_validate_80595594(int);

// 0x0x80595618 (address_range)
void KartPhysics_Wheel_validate_80595618(int);

// 0x0x805959c8 (address_range)
void KartPhysics_Wheel_validate_805959c8(int);

// 0x0x80595a4c (address_range)
void KartPhysics_Wheel_assertFail_80595a4c(void);

// 0x0x80595dc8 (address_range)
void KartPhysics_Wheel_validate_80595dc8(int);

// 0x0x80595e4c (address_range)
void kart_KartPhysics_Wheel_80595e4c(int);

// 0x0x80595ebc (address_range)
void KartPhysics_Wheel_calcVec3_80595ebc(double, float, float);

// 0x0x80595ef0 (address_range)
void kart_KartPhysics_Wheel_80595ef0(int);

// 0x0x80595f4c (address_range)
void KartPhysics_Wheel_calc_80595f4c(int);

// 0x0x80596040 (address_range)
void KartPhysics_Wheel_assertFail_80596040(void);

// 0x0x80596204 (address_range)
void kart_KartPhysics_Wheel_80596204(int, u32);

// 0x0x805962bc (address_range)
void KartPhysics_Wheel_validate_805962bc(int);

// 0x0x80596644 (address_range)
void kart_KartPhysics_Wheel_80596644(int);

// 0x0x805966f0 (address_range)
void KartPhysics_Wheel_validate_805966f0(int);

// 0x0x8059684c (address_range)
void kart_KartPhysics_Wheel_8059684c(int);

// 0x0x805968f8 (address_range)
void KartPhysics_Wheel_validate_805968f8(int);

// 0x0x80596a54 (address_range)
void kart_KartPhysics_Wheel_80596a54(int);

// 0x0x80596b00 (address_range)
void KartPhysics_Wheel_validate_80596b00(int);

// 0x0x80596c5c (address_range)
void kart_KartPhysics_Wheel_80596c5c(int);

// 0x0x80596d08 (address_range)
void KartPhysics_Wheel_validate_80596d08(int);

// 0x0x80596e64 (address_range)
void kart_KartPhysics_Wheel_80596e64(int);

// 0x0x80596ed8 (address_range)
void KartPhysics_Wheel_validate_80596ed8(int);

// 0x0x80596f7c (address_range)
void kart_KartPhysics_Wheel_80596f7c(int);

// 0x0x80596ff0 (address_range)
void KartPhysics_Wheel_validate_80596ff0(int);

// 0x0x80597094 (address_range)
void kart_KartSettings_80597094(int);

// 0x0x80597140 (address_range)
void KartSettings_validate_80597140(int);

// 0x0x805971e4 (address_range)
void kart_KartSettings_805971e4(int);

// 0x0x80597258 (address_range)
void KartSettings_validate_80597258(int);

// 0x0x805972fc (address_range)
void KartSettings_validate_805972fc(int);

// 0x0x805973cc (address_range)
void KartSettings_validate_805973cc(int);

// 0x0x80597470 (address_range)
void kart_KartSettings_80597470(void);

// 0x0x8059760c (address_range)
void KartSettings_validate_8059760c(int);

// 0x0x805976fc (address_range)
void KartSettings_validate_805976fc(int);

// 0x0x80597780 (address_range)
void kart_KartSettings_80597780(int);

// 0x0x80597820 (address_range)
void KartSettings_validate_80597820(int);

// 0x0x805978a4 (address_range)
void kart_KartSettings_805978a4(int);

// 0x0x80597948 (address_range)
void KartSettings_validate_80597948(int);

// 0x0x805979ec (address_range)
void kart_KartSettings_805979ec(int);

// 0x0x80597abc (address_range)
void kart_KartSettings_80597abc(int);

// 0x0x80597b20 (address_range)
void kart_KartSettings_80597b20(int);

// 0x0x80597bb8 (address_range)
void kart_KartSettings_80597bb8(int);

// 0x0x80597c64 (address_range)
void KartSettings_validate_80597c64(int);

// 0x0x80597d08 (address_range)
void kart_KartSettings_80597d08(int);

// 0x0x80597d6c (address_range)
void kart_KartSettings_80597d6c(int);

// 0x0x80597ddc (address_range)
void KartSettings_validate_80597ddc(int);

// 0x0x80597e80 (address_range)
void kart_KartSettings_80597e80(int);

// 0x0x80597f94 (address_range)
void kart_KartSettings_80597f94(int);

// 0x0x805980fc (address_range)
void KartSettings_validate_805980fc(int);

// 0x0x805981a0 (address_range)
void kart_KartSettings_805981a0(int);

// 0x0x80598294 (address_range)
void kart_KartSettings_80598294(int);

// 0x0x80598394 (address_range)
void kart_KartSettings_80598394(int);

// 0x0x80598434 (address_range)
void KartSettings_validate_80598434(int);

// 0x0x80598510 (address_range)
void kart_KartSettings_80598510(int);

// 0x0x805985b0 (address_range)
void KartSettings_validate_805985b0(int);

// 0x0x80598630 (address_range)
void kart_KartSettings_80598630(int, u32);

// 0x0x805986ec (address_range)
void kart_KartSettings_805986ec(int);

// 0x0x805988c8 (address_range)
void KartSettings_validate_805988c8(int);

// 0x0x80598b44 (address_range)
void kart_KartSettings_80598b44(int, u32);

// 0x0x80598c88 (address_range)
void KartSettings_validate_80598c88(int);

// 0x0x80598ebc (address_range)
void kart_KartSettings_80598ebc(int);

// 0x0x80598f40 (address_range)
void KartSettings_validate_80598f40(int);

// 0x0x80598fc0 (address_range)
void kart_KartSettings_80598fc0(int);

// 0x0x80599044 (address_range)
void KartSub_validate_80599044(int);

// 0x0x80599168 (address_range)
void kart_KartSub_80599168(int);

// 0x0x80599208 (address_range)
void KartSub_validate_80599208(int);

// 0x0x805992e4 (address_range)
void kart_KartSub_805992e4(int);

// 0x0x805994e4 (address_range)
void KartSub_validate_805994e4(int);

// 0x0x80599760 (address_range)
void kart_KartSub_80599760(int);

// 0x0x80599960 (address_range)
void KartSub_validate_80599960(int);

// 0x0x80599bdc (address_range)
void KartSub_validate_80599bdc(int);

// 0x0x80599de0 (address_range)
void kart_KartSub_80599de0(int);

// 0x0x80599e8c (address_range)
void KartSub_validate_80599e8c(int);

// 0x0x80599f54 (address_range)
void KartSub_validate_80599f54(int);

// 0x0x8059a0e4 (address_range)
void kart_KartSub_8059a0e4(int);

// 0x0x8059a148 (address_range)
void KartSub_validate_8059a148(int);

// 0x0x8059a39c (address_range)
void KartSub_validate_8059a39c(int);

// 0x0x8059a5a0 (address_range)
void kart_KartSub_8059a5a0(int);

// 0x0x8059a644 (address_range)
void KartSub_validate_8059a644(int);

// 0x0x8059a810 (address_range)
void KartSub_validate_8059a810(int);

// 0x0x8059a8fc (address_range)
void KartSub_validate_8059a8fc(int);

// 0x0x8059aa18 (address_range)
void KartSub_validate_8059aa18(int);

// 0x0x8059ab1c (address_range)
void KartSub_validate_8059ab1c(int);

// 0x0x8059acec (address_range)
void KartSub_validate_8059acec(int);

// 0x0x8059adec (address_range)
void KartSub_validate_8059adec(int);

// 0x0x8059aeb0 (address_range)
void KartSub_validate_8059aeb0(int);

// 0x0x8059af54 (address_range)
void KartSub_validate_8059af54(int);

// 0x0x8059b080 (address_range)
void KartDynamics_Wheel_validate_8059b080(int);

// 0x0x8059b124 (address_range)
void KartDynamics_Wheel_validate_8059b124(int);

// 0x0x8059b224 (address_range)
void KartDynamics_Wheel_validate_8059b224(int);

// 0x0x8059b2c8 (address_range)
void KartDynamics_Wheel_validate_8059b2c8(int, u32, int);

// 0x0x8059b4b8 (address_range)
void kart_KartDynamics_Wheel_8059b4b8(int);

// 0x0x8059b774 (address_range)
void kart_KartDynamics_Wheel_8059b774(void);

// 0x0x8059b954 (address_range)
void KartDynamics_Wheel_validate_8059b954(int, int);

// 0x0x8059bb28 (address_range)
void kart_KartDynamics_Wheel_8059bb28(int);

// 0x0x8059bbc0 (address_range)
void KartDynamics_Wheel_validate_8059bbc0(int);

// 0x0x8059bcd8 (address_range)
void KartDynamics_Wheel_validate_8059bcd8(int);

// 0x0x8059bd58 (address_range)
void kart_KartDynamics_Wheel_8059bd58(int, int, int);

// 0x0x8059be28 (address_range)
void kart_KartDynamics_Wheel_8059be28(int);

// 0x0x8059bed0 (address_range)
void KartDynamics_Wheel_validate_8059bed0(int);

// 0x0x8059c018 (address_range)
void kart_KartDynamics_Wheel_8059c018(void);

// 0x0x8059c230 (address_range)
void KartDynamics_Wheel_validate_8059c230(int);

// 0x0x8059c2b4 (address_range)
void KartDynamics_Wheel_validate_8059c2b4(int);

// 0x0x8059c354 (address_range)
void kart_KartDynamics_Wheel_8059c354(int);

// 0x0x8059c428 (address_range)
void KartDynamics_Wheel_validate_8059c428(int);

// 0x0x8059c53c (address_range)
void KartDynamics_Wheel_validate_8059c53c(int);

// 0x0x8059c734 (address_range)
void kart_KartDynamics_Wheel_8059c734(void);

// 0x0x8059cbd4 (address_range)
void kart_KartDynamics_Wheel_8059cbd4(int);

// 0x0x8059cca0 (address_range)
void kart_KartDynamics_Wheel_8059cca0(void);

// 0x0x8059d130 (address_range)
void kart_KartDynamics_Tire_8059d130(int);

// 0x0x8059d1fc (address_range)
void kart_KartDynamics_Tire_8059d1fc(void);

// 0x0x8059d68c (address_range)
void kart_KartDynamics_Tire_8059d68c(int);

// 0x0x8059d758 (address_range)
void kart_KartDynamics_Tire_8059d758(void);

// 0x0x8059db0c (address_range)
void kart_KartDynamics_Tire_8059db0c(void);

// 0x0x8059df84 (address_range)
void kart_KartDynamics_Tire_8059df84(u32, u32, u32, u32, u32);

// 0x0x8059df98 (address_range)
void kart_KartDynamics_Tire_8059df98(u32, u32);

// 0x0x8059dfbc (address_range)
void kart_KartDynamics_Tire_8059dfbc(int);

// 0x0x8059e1a4 (address_range)
void kart_KartDynamics_Tire_8059e1a4(void);

// 0x0x8059e504 (address_range)
void kart_KartDynamics_Tire_8059e504(int, int);

// 0x0x8059e6e0 (address_range)
void kart_KartDynamics_Tire_8059e6e0(void);

// 0x0x8059e9d4 (address_range)
void kart_KartDynamics_Tire_8059e9d4(int);

// 0x0x8059eba0 (address_range)
void kart_KartDynamics_Tire_8059eba0(int);

// 0x0x8059ec50 (address_range)
void kart_KartDynamics_Tire_8059ec50(void);

// 0x0x8059f0e8 (address_range)
void kart_KartDynamics_Tire_8059f0e8(int, int);

// 0x0x8059f380 (address_range)
void kart_KartDynamics_Tire_8059f380(void);

// 0x0x8059f604 (address_range)
void KartDynamics_Tire_validate_8059f604(int, int);

// 0x0x8059f81c (address_range)
void kart_KartDynamics_Tire_8059f81c(void);

// 0x0x8059fb28 (address_range)
void kart_KartDynamics_Tire_8059fb28(int, int);

// 0x0x8059fcb0 (address_range)
void kart_KartDynamics_Tire_8059fcb0(void);

// 0x0x8059ff4c (address_range)
void kart_KartDynamics_Tire_8059ff4c(int, int);

// 0x0x805a00d4 (address_range)
void kart_KartDynamics_Tire_805a00d4(void);

// 0x0x805a036c (address_range)
void kart_KartDynamics_Tire_805a036c(int);

// 0x0x805a04f0 (address_range)
void KartDynamics_Tire_assertFail_805a04f0(void);

// 0x0x805a07cc (address_range)
void kart_KartDynamics_Tire_805a07cc(int);

// 0x0x805a0a1c (address_range)
void kart_KartDynamics_Tire_805a0a1c(void);

// 0x0x805a1334 (address_range)
void kart_KartDynamics_805a1334(int);

// 0x0x805a21c4 (address_range)
void KartDynamics_assertFail_805a21c4(void);

// 0x0x805a2334 (address_range)
void kart_KartDynamics_805a2334(int);

// 0x0x805a237c (address_range)
void KartDynamics_assertFail_805a237c(void);

// 0x0x805a2498 (address_range)
void kart_KartDynamics_805a2498(int);

// 0x0x805a24e0 (address_range)
void KartDynamics_assertFail_805a24e0(void);

// 0x0x805a257c (address_range)
void KartDynamics_validate_805a257c(int);

// 0x0x805a2878 (address_range)
void kart_KartDynamics_805a2878(int);

// 0x0x805a29c4 (address_range)
void kart_KartDynamics_805a29c4(int);

// 0x0x805a2f14 (address_range)
void KartDynamics_validate_805a2f14(int);

// 0x0x805a2ff8 (address_range)
void kart_KartDynamics_805a2ff8(int);

// 0x0x805a3074 (address_range)
void kart_KartDynamics_805a3074(int);

// 0x0x805a32b0 (address_range)
void kart_KartDynamics_805a32b0(int, u32);

// 0x0x805a33e4 (address_range)
void kart_KartDynamics_805a33e4(int);

// 0x0x805a34c0 (address_range)
double kart_KartDynamics_805a34c0(float, float, float);

// 0x0x805a3518 (address_range)
void kart_KartDynamics_805a3518(void);

// 0x0x805a35f8 (address_range)
void kart_KartDynamics_805a35f8(void);

// 0x0x805a36dc (address_range)
void KartDynamics_validate_805a36dc(u32);

// 0x0x805a3758 (address_range)
void kart_KartDynamics_805a3758(void);

// 0x0x805a38bc (address_range)
void KartDynamics_validate_805a38bc(u32);

// 0x0x805a3a34 (address_range)
void kart_KartDynamics_805a3a34(void);

// 0x0x805a3b88 (address_range)
void kart_KartDynamics_805a3b88(void);

// 0x0x805a3d20 (address_range)
void KartDynamics_assertFail_805a3d20(void);

// 0x0x805a3df8 (address_range)
void KartDynamics_validate_805a3df8(float, float);

// 0x0x805a3ee0 (address_range)
void kart_KartDynamics_805a3ee0(void);

// 0x0x805a408c (address_range)
void KartDynamics_assertFail_805a408c(void);

// 0x0x805a41d0 (address_range)
void KartDynamics_validate_805a41d0(u32);

// 0x0x805a42bc (address_range)
void kart_KartDynamics_805a42bc(int, int);

// 0x0x805a4310 (address_range)
void kart_KartDynamics_805a4310(int, int);

// 0x0x805a4374 (address_range)
void kart_KartDynamics_805a4374(void);

// 0x0x805a5148 (address_range)
double kart_KartDynamics_805a5148(u32, u32, u32);

// 0x0x805a51dc (uncertain)
void KartDynamics_updateBothVelocities(void);

// 0x0x805a55c0 (address_range)
double kart_KartDynamics_805a55c0(double, double, u32);

// 0x0x805a5624 (address_range)
void kart_KartDynamics_805a5624(double, double, float, float);

// 0x0x805a5650 (address_range)
void kart_KartDynamics_805a5650(void);

// 0x0x805a5658 (address_range)
void kart_KartDynamics_805a5658(u32);

// 0x0x805a56e0 (address_range)
void KartDynamics_validate_805a56e0(u32);

// 0x0x805a5740 (address_range)
void KartDynamics_validate_805a5740(u32);

// 0x0x805a57a0 (address_range)
void KartDynamics_validate_805a57a0(u32);

// 0x0x805a581c (address_range)
void KartDynamics_validate_805a581c(u32);

// 0x0x805a589c (address_range)
void KartDynamics_validate_805a589c(u32, int, u32);

// 0x0x805a5a34 (address_range)
u32 KartDynamics_validate_805a5a34(u32);

// 0x0x805a5a98 (address_range)
void kart_KartDynamics_805a5a98(void);

// 0x0x805a5c44 (address_range)
void KartDynamics_validate_805a5c44(int);

// 0x0x805a5d18 (address_range)
void KartDynamics_validate_805a5d18(int);

// 0x0x805a5ea0 (address_range)
void kart_KartDynamics_805a5ea0(void);

// 0x0x805a6144 (address_range)
void kart_KartDynamics_805a6144(int);

// 0x0x805a648c (address_range)
int kart_KartDynamics_805a648c(int, u32, int, int);

// 0x0x805a6630 (address_range)
u32 KartDynamics_calc_805a6630(int, int, u32, int);

// 0x0x805a6ac4 (address_range)
void KartDynamics_validate_805a6ac4(int);

// 0x0x805a6ce8 (address_range)
void KartDynamics_validate_805a6ce8(u32, int);

// 0x0x805a6f0c (address_range)
int KartDynamics_validate_805a6f0c(int, int);

// 0x0x805a6f4c (address_range)
void kart_KartDynamics_805a6f4c(void);

// 0x0x80580128 (main.dol_phase3)
void PlayerSub10_cancelWheelie(void);

// 0x0x805814c8 (main.dol_phase3)
void getMaxMtCharge__Q24Kart8KartMoveFv(void);

// 0x0x805814d4 (main.dol_phase3)
void getMaxSmtCharge__Q24Kart8KartMoveFv(void);

// 0x0x805814e0 (main.dol_phase3)
void getAppliedHopStickX__Q24Kart8KartMoveFv(void);

// 0x0x80583c08 (main.dol_phase3)
void setScale__Q24Kart8KartMoveFQ23EGG8Vector3f(void);

// 0x0x80583f0c (main.dol_phase3)
void empty__Q24Kart8KartMoveFl(void);

// 0x0x805857cc (main.dol_phase3)
void clearBoost__Q24Kart8KartMoveFv(void);

// 0x0x80589a74 (main.dol_phase3)
void PlayerSub10_updateWheelie(void);

// 0x0x8058a24c (main.dol_phase3)
void PlayerSub10Bike_updateWheelie(void);

// 0x0x8058a838 (main.dol_phase3)
void PlayerSub10Bike_startWheelie(void);

// 0x0x8058a8ac (main.dol_phase3)
void PlayerSub10Bike_cancelWheelie(void);

// 0x0x8058ac80 (main.dol_phase3)
void PlayerSub10Bike_tryStartWheelie(void);

// 0x0x8058b4c8 (main.dol_phase3)
void PlayerSub10Bike_checkWheelieSpeed(void);

// 0x0x8058bc2c (main.dol_phase3)
void PlayerSub10_checkWheelie(void);

// 0x0x80590ef4 (main.dol_phase3)
void PlayerKart_createTires(void);

// 0x0x805954a8 (main.dol_phase3)
void __ct__Q24Kart12KartSettingsFv(void);

// 0x0x8059648c (main.dol_phase3)
void __ct__Q24Kart15KartCollideAreaFv(void);

// 0x0x8059689c (main.dol_phase3)
void __ct__Q24Kart9KartStateFPQ24Kart12KartSettings(void);

// 0x0x80596a44 (main.dol_phase3)
void init__Q24Kart9KartStateFv(void);

// 0x0x80596a7c (main.dol_phase3)
void reset__Q24Kart9KartStateFv(void);

// 0x0x80596b1c (main.dol_phase3)
void resetOob__Q24Kart9KartStateFv(void);

// 0x0x80598230 (main.dol_phase3)
void KartSub_createComponents(void);

// 0x0x80598460 (main.dol_phase3)
void KartSub_init(void);

// 0x0x8059aff0 (main.dol_phase3)
void KartSus_ct(void);

// 0x0x8059b048 (main.dol_phase3)
void KartSus_init(void);

// 0x0x8059b0bc (main.dol_phase3)
void KartSus_initPhysics(void);

// 0x0x8059b8f4 (main.dol_phase3)
void __ct__Q24Kart16KartWheelPhysicsFUll(void);

// 0x0x8059b958 (main.dol_phase3)
void init__Q24Kart16KartWheelPhysicsFv(void);

// 0x0x8059b9bc (main.dol_phase3)
void setBsp__Q24Kart16KartWheelPhysicsFv(void);

// 0x0x8059b9f0 (main.dol_phase3)
void reset__Q24Kart16KartWheelPhysicsFv(void);

// 0x0x8059baa8 (main.dol_phase3)
void setColState__Q24Kart16KartWheelPhysicsFffRCQ23EGG8Vector3f(void);

// 0x0x8059bb78 (main.dol_phase3)
void calcCollision__Q24Kart16KartWheelPhysicsFRCQ23EGG8Vector3fRCQ23EGG8Vector3f(void);

// 0x0x8059bfb8 (main.dol_phase3)
void calc__Q24Kart16KartWheelPhysicsFRCQ23EGG8Vector3fRCQ23EGG8Vector3f(void);

// 0x0x8059c284 (main.dol_phase3)
void updateEffectiveRadius__Q24Kart16KartWheelPhysicsFv(void);

// 0x0x8059c2a8 (main.dol_phase3)
void unk80599dc0__Q24Kart16KartWheelPhysicsFRCQ23EGG8Vector3f(void);

// 0x0x8059c394 (main.dol_phase3)
void hasFloorCollision__Q24Kart16KartWheelPhysicsCFv(void);

// 0x0x8059c3a4 (main.dol_phase3)
void getCollisionFloorNrm__Q24Kart16KartWheelPhysicsCFv(void);

// 0x0x8059c3b0 (main.dol_phase3)
void getKartCollisionInfo__Q24Kart16KartWheelPhysicsCFv(void);

// 0x0x8059c3bc (main.dol_phase3)
void __ct__Q24Kart14KartSusPhysicsFUlQ24Kart13KartWheelTypel(void);

// 0x0x8059c43c (main.dol_phase3)
void reset__Q24Kart14KartSusPhysicsFv(void);

// 0x0x8059c488 (main.dol_phase3)
void init__Q24Kart14KartSusPhysicsFv(void);

// 0x0x8059c514 (main.dol_phase3)
void setInitialState__Q24Kart14KartSusPhysicsFv(void);

// 0x0x8059c760 (main.dol_phase3)
void calcCollision__Q24Kart14KartSusPhysicsFRCQ23EGG8Vector3fRCQ23EGG9Matrix34ff(void);

// 0x0x8059ca5c (main.dol_phase3)
void WheelPhysicsHolder_applySuspensions(void);

// 0x0x8059cf2c (main.dol_phase3)
void KartTire_ct(void);

// 0x0x8059cf98 (main.dol_phase3)
void KartTire_init(void);

// 0x0x8059cffc (main.dol_phase3)
void KartTire_createPhysics(void);

// 0x0x8059d050 (main.dol_phase3)
void KartTire_initBsp(void);

// 0x0x805a1aa4 (main.dol_phase3)
void __ct__Q24Kart11KartPhysicsFb(void);

// 0x0x805a1df0 (main.dol_phase3)
void sub_805a1df0(void);

// 0x0x805a1e24 (main.dol_phase3)
void sub_805a1e24(void);

// 0x0x805a1e54 (main.dol_phase3)
void sub_805a1e54(void);

// 0x0x805a1f04 (main.dol_phase3)
void sub_805a1f04(void);

// 0x0x805a20ac (main.dol_phase3)
void sub_805a20ac(void);

// 0x0x805a2124 (main.dol_phase3)
void sub_805a2124(void);

// 0x0x805a22e4 (main.dol_phase3)
void sub_805a22e4(void);

// 0x0x805a2484 (main.dol_phase3)
void sub_805a2484(void);

// 0x0x805a26e0 (main.dol_phase3)
void sub_805a26e0(void);

// 0x0x805a2730 (main.dol_phase3)
void sub_805a2730(void);

// 0x0x805a2770 (main.dol_phase3)
void sub_805a2770(void);

// 0x0x805a28cc (main.dol_phase3)
void sub_805a28cc(void);

// 0x0x805a2b08 (main.dol_phase3)
void sub_805a2b08(void);

// 0x0x805a2b84 (main.dol_phase3)
void sub_805a2b84(void);

// 0x0x805a2df8 (main.dol_phase3)
void sub_805a2df8(void);

// 0x0x805a2efc (main.dol_phase3)
void sub_805a2efc(void);

// 0x0x805a2f58 (main.dol_phase3)
void sub_805a2f58(void);

// 0x0x805a304c (main.dol_phase3)
void sub_805a304c(void);

// 0x0x805a3b78 (main.dol_phase3)
void sub_805a3b78(void);

// 0x0x805a3c10 (main.dol_phase3)
void sub_805a3c10(void);

// 0x0x805a3c94 (main.dol_phase3)
void sub_805a3c94(void);

// 0x0x805a4508 (main.dol_phase3)
void sub_805a4508(void);

// 0x0x805a45c0 (main.dol_phase3)
void sub_805a45c0(void);

// 0x0x805a47a8 (main.dol_phase3)
void sub_805a47a8(void);

// 0x0x805a4838 (main.dol_phase3)
void sub_805a4838(void);

// 0x0x805a4898 (main.dol_phase3)
void sub_805a4898(void);

// 0x0x805a4ae0 (main.dol_phase3)
void sub_805a4ae0(void);

// 0x0x805a4d5c (main.dol_phase3)
void sub_805a4d5c(void);

// 0x0x805a4f34 (main.dol_phase3)
void sub_805a4f34(void);

// 0x0x805a5390 (main.dol_phase3)
void sub_805a5390(void);

// 0x0x805a53d0 (main.dol_phase3)
void sub_805a53d0(void);

// 0x0x805a5430 (main.dol_phase3)
void sub_805a5430(void);

// 0x0x805a54e4 (main.dol_phase3)
void sub_805a54e4(void);

// 0x0x805a557c (main.dol_phase3)
void sub_805a557c(void);

// 0x0x805a5710 (main.dol_phase3)
void sub_805a5710(void);

// 0x0x805a5788 (main.dol_phase3)
void sub_805a5788(void);

// 0x0x805a5974 (main.dol_phase3)
void sub_805a5974(void);

// 0x0x805a5a60 (main.dol_phase3)
void sub_805a5a60(void);

// 0x0x805a5f44 (main.dol_phase3)
void sub_805a5f44(void);

// 0x0x805a601c (main.dol_phase3)
void sub_805a601c(void);

// 0x0x805a60cc (main.dol_phase3)
void sub_805a60cc(void);

// 0x0x805a6118 (main.dol_phase3)
void sub_805a6118(void);

// 0x0x805a6174 (main.dol_phase3)
void sub_805a6174(void);

// 0x0x805a6230 (main.dol_phase3)
void sub_805a6230(void);

// 0x0x805a6418 (main.dol_phase3)
void sub_805a6418(void);

// 0x0x805a6498 (main.dol_phase3)
void sub_805a6498(void);

// 0x0x805a653c (main.dol_phase3)
void sub_805a653c(void);

// 0x0x805a6798 (main.dol_phase3)
void sub_805a6798(void);

// 0x0x805a6da8 (main.dol_phase3)
void sub_805a6da8(void);

#ifdef __cplusplus
}
#endif
