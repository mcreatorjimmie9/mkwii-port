#pragma once
// Runtime module - Mario Kart Wii PC Port
// Phase 6: 3827 reconstructed functions
// Address range: 0x804000f0 - 0x805ffff8

#include "../types.h"

#ifdef __cplusplus
extern "C" {
#endif

// 0x0x804000f0 (address_range)
u32 EGG_Runtime_validate_804000f0(u32);

// 0x0x80400188 (address_range)
int EGG_Runtime_validate_80400188(void);

// 0x0x80400230 (address_range)
void EGG_Runtime_assertFail_80400230(void);

// 0x0x804002f4 (address_range)
u32 * EGG_Runtime_validate_804002f4(u32, int);

// 0x0x80400390 (address_range)
u32 rt_EGG_Runtime_80400390(int, uint, u16, u16);

// 0x0x804003d0 (address_range)
void EGG_Runtime_validate_804003d0(u32, int);

// 0x0x804004f0 (address_range)
void EGG_Runtime_assertFail_804004f0(void);

// 0x0x804005ac (address_range)
void EGG_Runtime_validate_804005ac(u32, int, uint, int);

// 0x0x80400770 (address_range)
int EGG_Runtime_validate_80400770(int, int);

// 0x0x804009a8 (address_range)
u32 rt_EGG_Runtime_804009a8(int, float, float);

// 0x0x80400b44 (address_range)
int EGG_Runtime_validate_80400b44(int, int);

// 0x0x80400b84 (address_range)
u32 rt_EGG_Runtime_80400b84(u32, uint, u32, int, int, u32, u32, int);

// 0x0x80400c60 (address_range)
u32 rt_EGG_Runtime_80400c60(u32, uint, u32, int, int, u32, u32, int);

// 0x0x80400d3c (address_range)
void EGG_Runtime_assertFail_80400d3c(void);

// 0x0x8040112c (address_range)
void EGG_Runtime_assertFail_8040112c(void);

// 0x0x80401a2c (address_range)
void rt_EGG_Runtime_80401a2c(int);

// 0x0x80401aa8 (address_range)
void rt_EGG_Runtime_80401aa8(u32, u32, u32, u32);

// 0x0x80401af4 (address_range)
void rt_EGG_Runtime_80401af4(void);

// 0x0x80401c48 (address_range)
void rt_EGG_Runtime_80401c48(float, float, float);

// 0x0x80401c90 (address_range)
void rt_EGG_Runtime_80401c90(void);

// 0x0x80401f9c (address_range)
void rt_EGG_Runtime_80401f9c(void);

// 0x0x804022c0 (address_range)
int EGG_Runtime_validate_804022c0(void);

// 0x0x80402348 (address_range)
void rt_EGG_Runtime_80402348(void);

// 0x0x804023d8 (address_range)
int EGG_Runtime_validate_804023d8(int, int);

// 0x0x80402418 (address_range)
void EGG_Runtime_assertFail_80402418(void);

// 0x0x80402990 (address_range)
u32 EGG_Runtime_validate_80402990(int, int);

// 0x0x80402ab0 (address_range)
u32 EGG_Runtime_validate_80402ab0(int, int);

// 0x0x80402bd0 (address_range)
u32 EGG_Runtime_validate_80402bd0(int, int);

// 0x0x80402cf0 (address_range)
u32 EGG_Runtime_validate_80402cf0(int, int);

// 0x0x80402e10 (address_range)
u32 EGG_Runtime_validate_80402e10(int, int);

// 0x0x80402f30 (address_range)
u32 EGG_Runtime_validate_80402f30(int, int);

// 0x0x80402fc4 (address_range)
u32 EGG_Runtime_validate_80402fc4(int, int);

// 0x0x804030f4 (address_range)
u32 EGG_Runtime_validate_804030f4(int, int);

// 0x0x8040322c (address_range)
int EGG_Runtime_validate_8040322c(int, int);

// 0x0x8040326c (address_range)
u32 EGG_Runtime_validate_8040326c(int, int);

// 0x0x804033a8 (address_range)
void rt_EGG_Runtime_804033a8(void);

// 0x0x80403708 (address_range)
u32 EGG_Runtime_validate_80403708(int, int);

// 0x0x80403828 (address_range)
u32 EGG_Runtime_validate_80403828(int, int);

// 0x0x80403944 (address_range)
u32 EGG_Runtime_validate_80403944(int, int);

// 0x0x80403a6c (address_range)
u32 EGG_Runtime_validate_80403a6c(int, int);

// 0x0x80403b88 (address_range)
u32 EGG_Runtime_validate_80403b88(int, int);

// 0x0x80403d74 (address_range)
u32 rt_EGG_Runtime_80403d74(int, uint);

// 0x0x80403dc0 (address_range)
u32 rt_EGG_Runtime_80403dc0(int);

// 0x0x80403e84 (address_range)
u32 * EGG_Runtime_validate_80403e84(u32, int);

// 0x0x80403f94 (address_range)
void rt_EGG_Runtime_80403f94(void);

// 0x0x804043c0 (address_range)
int EGG_Runtime_validate_804043c0(int, int);

// 0x0x80404400 (address_range)
void rt_EGG_Runtime_80404400(float, float);

// 0x0x80404428 (address_range)
void EGG_Runtime_validate_80404428(u32, u32, u32);

// 0x0x8040443c (address_range)
void rt_EGG_Runtime_8040443c(double, float, float);

// 0x0x80404464 (address_range)
void rt_EGG_Runtime_80404464(float, float, float);

// 0x0x80404498 (address_range)
void rt_EGG_Runtime_80404498(float, float, float);

// 0x0x804044cc (address_range)
void rt_EGG_Runtime_804044cc(void);

// 0x0x8040475c (address_range)
u32 rt_EGG_Runtime_8040475c(int, uint);

// 0x0x804047a8 (address_range)
u32 rt_EGG_Runtime_804047a8(int, uint);

// 0x0x804047f4 (address_range)
u32 rt_EGG_Runtime_804047f4(int, uint);

// 0x0x80404968 (address_range)
u32 rt_EGG_Runtime_80404968(int, uint);

// 0x0x80404a1c (address_range)
void EGG_Runtime_assertFail_80404a1c(void);

// 0x0x80404cc4 (address_range)
void rt_EGG_Runtime_80404cc4(int, int);

// 0x0x80404d0c (address_range)
void rt_EGG_Runtime_80404d0c(int, char, int);

// 0x0x80404e70 (address_range)
void rt_EGG_Runtime_80404e70(int);

// 0x0x80405110 (address_range)
void EGG_Runtime_validate_80405110(u32, u32);

// 0x0x80405210 (address_range)
int EGG_Runtime_validate_80405210(int, int);

// 0x0x80405250 (address_range)
void rt_EGG_Runtime_80405250(void);

// 0x0x80405698 (address_range)
void rt_EGG_Runtime_80405698(int, u32);

// 0x0x80405850 (address_range)
u32 rt_EGG_Runtime_80405850(int, uint);

// 0x0x80405968 (address_range)
u32 * EGG_Runtime_validate_80405968(u32, int);

// 0x0x80405a30 (address_range)
u32 rt_EGG_Runtime_80405a30(int, uint);

// 0x0x80405a7c (address_range)
void EGG_Runtime_validate_80405a7c(u32, int);

// 0x0x80405cdc (address_range)
u32 rt_EGG_Runtime_80405cdc(int, float);

// 0x0x80405e4c (address_range)
void EGG_Runtime_validate_80405e4c(u32, int);

// 0x0x80405fe0 (address_range)
int EGG_Runtime_validate_80405fe0(int, int);

// 0x0x80406020 (address_range)
u32 rt_EGG_Runtime_80406020(int, float);

// 0x0x80406128 (address_range)
void EGG_Runtime_validate_80406128(u32, int);

// 0x0x804062b4 (address_range)
u32 rt_EGG_Runtime_804062b4(int, float);

// 0x0x80406394 (address_range)
u32 rt_EGG_Runtime_80406394(int, uint);

// 0x0x80406434 (address_range)
void EGG_Runtime_assertFail_80406434(void);

// 0x0x8040668c (address_range)
u32 rt_EGG_Runtime_8040668c(int, float, float);

// 0x0x80406828 (address_range)
u32 rt_EGG_Runtime_80406828(int, uint);

// 0x0x80406900 (address_range)
u32 rt_EGG_Runtime_80406900(int);

// 0x0x804069a0 (address_range)
void EGG_Runtime_validate_804069a0(int, uint);

// 0x0x804071bc (address_range)
u32 rt_EGG_Runtime_804071bc(int, byte, uint);

// 0x0x80407238 (address_range)
u32 rt_EGG_Runtime_80407238(int, byte);

// 0x0x8040737c (address_range)
void rt_EGG_Runtime_8040737c(int, u32, u32);

// 0x0x80407484 (address_range)
void rt_EGG_Runtime_80407484(u32, uint, int);

// 0x0x804079b8 (address_range)
void rt_EGG_Runtime_804079b8(int, uint);

// 0x0x80407ab4 (address_range)
void rt_EGG_Runtime_80407ab4(int, uint);

// 0x0x80407e1c (address_range)
u32 rt_EGG_Runtime_80407e1c(int, byte, uint);

// 0x0x80407ef8 (address_range)
u32 rt_EGG_Runtime_80407ef8(int, byte, uint);

// 0x0x80407fd4 (address_range)
void EGG_Runtime_validate_80407fd4(int, int);

// 0x0x80408128 (address_range)
void rt_EGG_Runtime_80408128(void);

// 0x0x8040854c (address_range)
u32 rt_EGG_Runtime_8040854c(int, uint);

// 0x0x80408598 (address_range)
void EGG_Runtime_assertFail_80408598(void);

// 0x0x804086e4 (address_range)
void rt_EGG_Runtime_804086e4(double, float, float);

// 0x0x8040870c (address_range)
u32 rt_EGG_Runtime_8040870c(int, uint);

// 0x0x804087a4 (address_range)
u32 rt_EGG_Runtime_804087a4(int);

// 0x0x80408808 (address_range)
u32 EGG_Runtime_validate_80408808(int);

// 0x0x8040886c (address_range)
u32 * EGG_Runtime_validate_8040886c(u32, int);

// 0x0x80408920 (address_range)
u32 * EGG_Runtime_validate_80408920(u32, int);

// 0x0x804089f8 (address_range)
void EGG_Runtime_validate_804089f8(int, u32);

// 0x0x80408a3c (address_range)
void EGG_Runtime_validate_80408a3c(int, u32, int, int, char, int, u32);

// 0x0x80408be8 (address_range)
void EGG_Runtime_validate_80408be8(int, u32, u32, u32, int);

// 0x0x80408c6c (address_range)
u32 EGG_Runtime_validate_80408c6c(u32, u32, int, u32, char);

// 0x0x80408d1c (address_range)
void EGG_Runtime_validate_80408d1c(int, u32, u32, char);

// 0x0x80408dd0 (address_range)
void EGG_Runtime_validate_80408dd0(int, u32, u32, char);

// 0x0x80408e6c (address_range)
void rt_EGG_Runtime_80408e6c(int);

// 0x0x80408ef8 (address_range)
void EGG_Runtime_validate_80408ef8(int);

// 0x0x80408f9c (address_range)
void rt_EGG_Runtime_80408f9c(int);

// 0x0x80408ff4 (address_range)
void rt_EGG_Runtime_80408ff4(int);

// 0x0x8040904c (address_range)
u32 EGG_Runtime_validate_8040904c(int, char);

// 0x0x80409134 (address_range)
void EGG_Runtime_validate_80409134(int);

// 0x0x80409204 (address_range)
void EGG_Runtime_validate_80409204(int, int, u32);

// 0x0x8040929c (address_range)
int EGG_Runtime_validate_8040929c(int, int);

// 0x0x804092dc (address_range)
u32 EGG_Runtime_validate_804092dc(int, int);

// 0x0x8040931c (address_range)
void EGG_Runtime_validate_8040931c(int, u32);

// 0x0x80409330 (address_range)
void EGG_Runtime_validate_80409330(int);

// 0x0x804093ac (address_range)
void rt_EGG_Runtime_804093ac(int, int, u32);

// 0x0x80409498 (address_range)
void rt_EGG_Runtime_80409498(int, int, u32);

// 0x0x804095ac (address_range)
void rt_EGG_Runtime_804095ac(int, int, u32, u16, u16, u32, u32, u32, u32);

// 0x0x8040962c (address_range)
u32 EGG_Runtime_validate_8040962c(int, u32);

// 0x0x80409748 (address_range)
u32 rt_EGG_Runtime_80409748(int, uint, int, uint);

// 0x0x80409960 (address_range)
void EGG_Runtime_assertFail_80409960(void);

// 0x0x80409a04 (address_range)
void EGG_Runtime_assertFail_80409a04(void);

// 0x0x80409be4 (address_range)
void EGG_Runtime_validate_80409be4(int, int, int);

// 0x0x80409ca8 (address_range)
void rt_EGG_Runtime_80409ca8(void);

// 0x0x80409d24 (address_range)
void EGG_Runtime_validate_80409d24(float);

// 0x0x80409e0c (address_range)
void EGG_Runtime_assertFail_80409e0c(void);

// 0x0x80409f94 (address_range)
u32 EGG_Runtime_validate_80409f94(int);

// 0x0x80409fec (address_range)
int EGG_Runtime_validate_80409fec(int, int);

// 0x0x8040a048 (address_range)
void EGG_Runtime_assertFail_8040a048(void);

// 0x0x8040a0ac (address_range)
void EGG_Runtime_assertFail_8040a0ac(void);

// 0x0x8040a108 (address_range)
void EGG_Runtime_validate_8040a108(int);

// 0x0x8040a684 (address_range)
void EGG_Runtime_assertFail_8040a684(void);

// 0x0x8040a714 (address_range)
void EGG_Runtime_validate_8040a714(int);

// 0x0x8040a784 (address_range)
void EGG_Runtime_validate_8040a784(int);

// 0x0x8040abb0 (address_range)
void EGG_Runtime_assertFail_8040abb0(void);

// 0x0x8040ac14 (address_range)
void EGG_Runtime_validate_8040ac14(u32, u32);

// 0x0x8040acc0 (address_range)
void EGG_Runtime_assertFail_8040acc0(void);

// 0x0x8040ad20 (address_range)
void rt_EGG_Runtime_8040ad20(int);

// 0x0x8040ae24 (address_range)
u32 EGG_Runtime_validate_8040ae24(int);

// 0x0x8040ae7c (address_range)
void EGG_Runtime_validate_8040ae7c(int);

// 0x0x8040afa0 (address_range)
void rt_EGG_Runtime_8040afa0(void);

// 0x0x8040aff4 (address_range)
void EGG_Runtime_validate_8040aff4(int);

// 0x0x8040b3dc (address_range)
void EGG_Runtime_validate_8040b3dc(int);

// 0x0x8040b510 (address_range)
void EGG_Runtime_validate_8040b510(u32, u32, int);

// 0x0x8040b5b4 (address_range)
void rt_EGG_Runtime_8040b5b4(int, int);

// 0x0x8040b600 (address_range)
void rt_EGG_Runtime_8040b600(void);

// 0x0x8040b8a4 (address_range)
void EGG_Runtime_validate_8040b8a4(int);

// 0x0x8040b960 (address_range)
void EGG_Runtime_assertFail_8040b960(void);

// 0x0x8040bafc (address_range)
int rt_EGG_Runtime_8040bafc(void);

// 0x0x8040bb2c (address_range)
void EGG_Runtime_validate_8040bb2c(int);

// 0x0x8040bc5c (address_range)
u32 EGG_Runtime_validate_8040bc5c(int);

// 0x0x8040bcb4 (address_range)
void EGG_Runtime_validate_8040bcb4(u32);

// 0x0x8040bd4c (address_range)
u32 EGG_Runtime_validate_8040bd4c(int);

// 0x0x8040be68 (address_range)
void EGG_Runtime_validate_8040be68(u32);

// 0x0x8040be9c (address_range)
void EGG_Runtime_validate_8040be9c(int);

// 0x0x8040bf60 (address_range)
int EGG_Runtime_validate_8040bf60(int, int);

// 0x0x8040bfc4 (address_range)
void EGG_Runtime_validate_8040bfc4(int);

// 0x0x8040c0cc (address_range)
void EGG_Runtime_validate_8040c0cc(u32);

// 0x0x8040c15c (address_range)
u32 EGG_Runtime_validate_8040c15c(u32, int);

// 0x0x8040c3bc (address_range)
u32 rt_EGG_Runtime_8040c3bc(u32, int);

// 0x0x8040c420 (address_range)
void EGG_Runtime_validate_8040c420(int, int);

// 0x0x8040c638 (address_range)
u32 EGG_Runtime_validate_8040c638(char, u32);

// 0x0x8040c6ac (address_range)
u32 EGG_Runtime_validate_8040c6ac(char, int);

// 0x0x8040c748 (address_range)
void EGG_Runtime_validate_8040c748(int, uint);

// 0x0x8040cac0 (address_range)
void EGG_Runtime_validate_8040cac0(u32, u32, int);

// 0x0x8040cbbc (address_range)
u32 EGG_Runtime_validate_8040cbbc(int);

// 0x0x8040cc24 (address_range)
u32 EGG_Runtime_validate_8040cc24(u32);

// 0x0x8040cc90 (address_range)
void rt_EGG_Runtime_8040cc90(int, uint);

// 0x0x8040ccb0 (address_range)
int rt_EGG_Runtime_8040ccb0(int, uint);

// 0x0x8040cce8 (address_range)
void rt_EGG_Runtime_8040cce8(int, uint, u32);

// 0x0x8040cd0c (address_range)
u32 EGG_Runtime_validate_8040cd0c(int, u32);

// 0x0x8040cde0 (address_range)
u32 EGG_Runtime_validate_8040cde0(int, u32);

// 0x0x8040cfb4 (address_range)
u32 EGG_Runtime_validate_8040cfb4(int);

// 0x0x8040d100 (address_range)
int EGG_Runtime_validate_8040d100(void);

// 0x0x8040d160 (address_range)
void rt_EGG_Runtime_8040d160(void);

// 0x0x8040d1b0 (address_range)
u32 EGG_Runtime_validate_8040d1b0(u32);

// 0x0x8040d214 (address_range)
void EGG_Runtime_validate_8040d214(u32, u32, u32);

// 0x0x8040d2cc (address_range)
void EGG_Runtime_assertFail_8040d2cc(void);

// 0x0x8040d4c0 (address_range)
void EGG_Runtime_validate_8040d4c0(int);

// 0x0x8040d544 (address_range)
void EGG_Runtime_validate_8040d544(int);

// 0x0x8040d620 (address_range)
void EGG_Runtime_assertFail_8040d620(void);

// 0x0x8040d99c (address_range)
void EGG_Runtime_assertFail_8040d99c(void);

// 0x0x8040dba4 (address_range)
void EGG_Runtime_validate_8040dba4(int);

// 0x0x8040dbec (address_range)
void EGG_Runtime_assertFail_8040dbec(void);

// 0x0x8040dd40 (address_range)
void EGG_Runtime_assertFail_8040dd40(void);

// 0x0x8040df8c (address_range)
void EGG_Runtime_validate_8040df8c(int);

// 0x0x8040e04c (address_range)
void EGG_Runtime_assertFail_8040e04c(void);

// 0x0x8040e1a0 (address_range)
void EGG_Runtime_assertFail_8040e1a0(void);

// 0x0x8040e414 (address_range)
void EGG_Runtime_validate_8040e414(int);

// 0x0x8040e488 (address_range)
void rt_EGG_Runtime_8040e488(int);

// 0x0x8040e58c (address_range)
void rt_EGG_Runtime_8040e58c(int, u32);

// 0x0x8040e614 (address_range)
void rt_EGG_Runtime_8040e614(int, u32);

// 0x0x8040e654 (address_range)
double rt_EGG_Runtime_8040e654(u32);

// 0x0x8040e68c (address_range)
void rt_EGG_Runtime_8040e68c(int, u32);

// 0x0x8040e6cc (address_range)
void rt_EGG_Runtime_8040e6cc(int, u32);

// 0x0x8040e754 (address_range)
void rt_EGG_Runtime_8040e754(int, u32);

// 0x0x8040e794 (address_range)
void rt_EGG_Runtime_8040e794(int, int);

// 0x0x8040e7d4 (address_range)
void rt_EGG_Runtime_8040e7d4(u32);

// 0x0x8040e8c0 (address_range)
int EGG_Runtime_validate_8040e8c0(int, int);

// 0x0x8040e900 (address_range)
int EGG_Runtime_validate_8040e900(int, int);

// 0x0x8040e940 (address_range)
void EGG_Runtime_assertFail_8040e940(void);

// 0x0x8040ec3c (address_range)
void rt_EGG_Runtime_8040ec3c(int);

// 0x0x8040ecb4 (address_range)
void EGG_Runtime_validate_8040ecb4(u32);

// 0x0x8040ee18 (address_range)
int EGG_Runtime_validate_8040ee18(int, int);

// 0x0x8040ee58 (address_range)
void EGG_Runtime_validate_8040ee58(int);

// 0x0x8040ef34 (address_range)
void rt_EGG_Runtime_8040ef34(int);

// 0x0x8040effc (address_range)
void EGG_Runtime_validate_8040effc(int);

// 0x0x8040f03c (address_range)
void EGG_Runtime_assertFail_8040f03c(void);

// 0x0x8040f6a8 (address_range)
void rt_EGG_Runtime_8040f6a8(u32, int, int);

// 0x0x8040f8b0 (address_range)
void EGG_Runtime_assertFail_8040f8b0(void);

// 0x0x8040fbfc (address_range)
u32 * rt_EGG_Runtime_8040fbfc(u32);

// 0x0x8040fd44 (address_range)
void EGG_Runtime_validate_8040fd44(int);

// 0x0x8040fddc (address_range)
void rt_EGG_Runtime_8040fddc(int, int, int);

// 0x0x8041035c (address_range)
void EGG_Runtime_validate_8041035c(u32);

// 0x0x80410550 (address_range)
u32 EGG_Runtime_validate_80410550(u32);

// 0x0x804105c4 (address_range)
void rt_EGG_Runtime_804105c4(int);

// 0x0x8041068c (address_range)
double rt_EGG_Runtime_8041068c(int);

// 0x0x80410744 (address_range)
void rt_EGG_Runtime_80410744(int, ushort, u32);

// 0x0x804107c8 (address_range)
void EGG_Runtime_assertFail_804107c8(void);

// 0x0x80410978 (address_range)
u32 rt_EGG_Runtime_80410978(int);

// 0x0x80410ae8 (address_range)
void EGG_Runtime_assertFail_80410ae8(void);

// 0x0x80410b58 (address_range)
void rt_EGG_Runtime_80410b58(int, ushort);

// 0x0x80410b90 (address_range)
void EGG_Runtime_validate_80410b90(u32);

// 0x0x80410d3c (address_range)
void rt_EGG_Runtime_80410d3c(int);

// 0x0x80410dc4 (address_range)
void rt_EGG_Runtime_80410dc4(int, int);

// 0x0x80411180 (address_range)
void rt_EGG_Runtime_80411180(int, int, int);

// 0x0x80411200 (address_range)
void rt_EGG_Runtime_80411200(int);

// 0x0x804112b4 (address_range)
void rt_EGG_Runtime_804112b4(int);

// 0x0x80411394 (address_range)
void rt_EGG_Runtime_80411394(int, int);

// 0x0x80411470 (address_range)
void EGG_Runtime_validate_80411470(int, int, int, u32);

// 0x0x8041155c (address_range)
void rt_EGG_Runtime_8041155c(int);

// 0x0x804115d8 (address_range)
void rt_EGG_Runtime_804115d8(int, int);

// 0x0x80411660 (address_range)
void rt_EGG_Runtime_80411660(u64, int, u32, u32);

// 0x0x804116f8 (address_range)
void rt_EGG_Runtime_804116f8(void);

// 0x0x804119b8 (address_range)
void rt_EGG_Runtime_804119b8(u64, int, u32, u32);

// 0x0x80411a74 (address_range)
void rt_EGG_Runtime_80411a74(u64, int, int, u32, u32);

// 0x0x80411afc (address_range)
void rt_EGG_Runtime_80411afc(u64, int, u32, u32);

// 0x0x80411bb8 (address_range)
void rt_EGG_Runtime_80411bb8(u64, int, int, u32, u32);

// 0x0x80411c40 (address_range)
void rt_EGG_Runtime_80411c40(int);

// 0x0x80411cbc (address_range)
void rt_EGG_Runtime_80411cbc(int);

// 0x0x80411ee0 (address_range)
int EGG_Runtime_validate_80411ee0(int, int);

// 0x0x80411f20 (address_range)
u32 EGG_Runtime_validate_80411f20(u32);

// 0x0x80411f90 (address_range)
void EGG_Runtime_validate_80411f90(u32, int);

// 0x0x804120c8 (address_range)
void EGG_Runtime_validate_804120c8(u32, u32);

// 0x0x804122bc (address_range)
void EGG_Runtime_assertFail_804122bc(void);

// 0x0x80412334 (address_range)
void rt_EGG_Runtime_80412334(int);

// 0x0x804123c8 (address_range)
int EGG_Runtime_validate_804123c8(int, int);

// 0x0x80412408 (address_range)
int EGG_Runtime_validate_80412408(int, int);

// 0x0x804124a0 (address_range)
int EGG_Runtime_validate_804124a0(int, int);

// 0x0x80412520 (address_range)
void EGG_Runtime_validate_80412520(int);

// 0x0x80412560 (address_range)
int EGG_Runtime_validate_80412560(int, int);

// 0x0x804125a0 (address_range)
void rt_EGG_Runtime_804125a0(int, u32);

// 0x0x80412714 (address_range)
void rt_EGG_Runtime_80412714(int, u32);

// 0x0x80412888 (address_range)
u32 rt_EGG_Runtime_80412888(int);

// 0x0x804129f8 (address_range)
void rt_EGG_Runtime_804129f8(int, u32);

// 0x0x80412b6c (address_range)
u32 rt_EGG_Runtime_80412b6c(int);

// 0x0x80412d68 (address_range)
int EGG_Runtime_validate_80412d68(void);

// 0x0x80412db8 (address_range)
void rt_EGG_Runtime_80412db8(void);

// 0x0x80412e08 (address_range)
u32 EGG_Runtime_validate_80412e08(int);

// 0x0x80412edc (address_range)
int EGG_Runtime_validate_80412edc(int, int);

// 0x0x80412f1c (address_range)
void EGG_Runtime_validate_80412f1c(u32);

// 0x0x804130cc (address_range)
u32 * rt_EGG_Runtime_804130cc(u32);

// 0x0x80413150 (address_range)
void EGG_Runtime_validate_80413150(int);

// 0x0x804131d8 (address_range)
void rt_EGG_Runtime_804131d8(int);

// 0x0x80413200 (address_range)
u32 rt_EGG_Runtime_80413200(int, int, uint, uint);

// 0x0x804132bc (address_range)
void EGG_Runtime_validate_804132bc(int);

// 0x0x80413350 (address_range)
void rt_EGG_Runtime_80413350(int);

// 0x0x804133d8 (address_range)
void EGG_Runtime_validate_804133d8(int);

// 0x0x80413414 (address_range)
void EGG_Runtime_validate_80413414(int, int);

// 0x0x8041351c (address_range)
void EGG_Runtime_validate_8041351c(int);

// 0x0x804135bc (address_range)
u32 rt_EGG_Runtime_804135bc(int, int, int, int, int);

// 0x0x804136ac (address_range)
u32 rt_EGG_Runtime_804136ac(int, int, int, int);

// 0x0x804137f4 (address_range)
int rt_EGG_Runtime_804137f4(int);

// 0x0x8041393c (address_range)
u32 rt_EGG_Runtime_8041393c(int, int);

// 0x0x80413ad8 (address_range)
void rt_EGG_Runtime_80413ad8(int);

// 0x0x80413ae8 (address_range)
int rt_EGG_Runtime_80413ae8(int, uint, int);

// 0x0x80413d18 (address_range)
u32 rt_EGG_Runtime_80413d18(int, int);

// 0x0x80413e90 (address_range)
void rt_EGG_Runtime_80413e90(int, int);

// 0x0x80413ea8 (address_range)
void rt_EGG_Runtime_80413ea8(int);

// 0x0x80413f04 (address_range)
uint rt_EGG_Runtime_80413f04(int);

// 0x0x80414064 (address_range)
void rt_EGG_Runtime_80414064(int, int, uint, int);

// 0x0x8041412c (address_range)
void rt_EGG_Runtime_8041412c(int, int);

// 0x0x80414168 (address_range)
void rt_EGG_Runtime_80414168(int, int);

// 0x0x80414184 (address_range)
void rt_EGG_Runtime_80414184(int, int);

// 0x0x80414194 (address_range)
void rt_EGG_Runtime_80414194(int);

// 0x0x804141ac (address_range)
void rt_EGG_Runtime_804141ac(int);

// 0x0x804141f8 (address_range)
void rt_EGG_Runtime_804141f8(int, int);

// 0x0x80414208 (address_range)
void rt_EGG_Runtime_80414208(int);

// 0x0x80414254 (address_range)
u32 rt_EGG_Runtime_80414254(int, int, u16);

// 0x0x804142ec (address_range)
void rt_EGG_Runtime_804142ec(int);

// 0x0x80414344 (address_range)
void rt_EGG_Runtime_80414344(int);

// 0x0x804143b4 (address_range)
u32 EGG_Runtime_validate_804143b4(int);

// 0x0x80414410 (address_range)
u32 EGG_Runtime_validate_80414410(int);

// 0x0x8041446c (address_range)
void rt_EGG_Runtime_8041446c(int, int);

// 0x0x80414504 (address_range)
void rt_EGG_Runtime_80414504(int, int);

// 0x0x80414570 (address_range)
void rt_EGG_Runtime_80414570(int, u32, u32);

// 0x0x804145f4 (address_range)
void rt_EGG_Runtime_804145f4(int);

// 0x0x804146f0 (address_range)
void EGG_Runtime_validate_804146f0(u32);

// 0x0x80414858 (address_range)
u32 EGG_Runtime_validate_80414858(u32);

// 0x0x804148d4 (address_range)
void EGG_Runtime_validate_804148d4(int);

// 0x0x8041494c (address_range)
void EGG_Runtime_validate_8041494c(u32, u32);

// 0x0x804149fc (address_range)
uint rt_EGG_Runtime_804149fc(int);

// 0x0x80414aa0 (address_range)
void rt_EGG_Runtime_80414aa0(int, u32, char, char, u32);

// 0x0x80414cf4 (address_range)
void EGG_Runtime_validate_80414cf4(int, int);

// 0x0x80414e30 (address_range)
u32 EGG_Runtime_validate_80414e30(u32);

// 0x0x804150c4 (address_range)
void EGG_Runtime_validate_804150c4(u32);

// 0x0x80415134 (address_range)
void rt_EGG_Runtime_80415134(void);

// 0x0x804151e8 (address_range)
void EGG_Runtime_validate_804151e8(int);

// 0x0x80415278 (address_range)
void EGG_Runtime_validate_80415278(int, int);

// 0x0x80415338 (address_range)
void rt_EGG_Runtime_80415338(void);

// 0x0x804155a0 (address_range)
u32 EGG_Runtime_validate_804155a0(int);

// 0x0x804156a0 (address_range)
void rt_EGG_Runtime_804156a0(void);

// 0x0x804157b8 (address_range)
void EGG_Runtime_validate_804157b8(int);

// 0x0x80415864 (address_range)
int EGG_Runtime_validate_80415864(int, int);

// 0x0x804158a4 (address_range)
int EGG_Runtime_validate_804158a4(int, int);

// 0x0x804158e4 (address_range)
void EGG_Runtime_assertFail_804158e4(void);

// 0x0x804159b4 (address_range)
void EGG_Runtime_validate_804159b4(int, int);

// 0x0x80415a2c (address_range)
void EGG_Runtime_validate_80415a2c(int);

// 0x0x80415bb4 (address_range)
void rt_EGG_Runtime_80415bb4(int, u32);

// 0x0x80415c4c (address_range)
void EGG_Runtime_validate_80415c4c(int);

// 0x0x80415fe8 (address_range)
void EGG_Runtime_validate_80415fe8(int, u32);

// 0x0x8041602c (address_range)
u32 EGG_Runtime_validate_8041602c(int, u32);

// 0x0x8041608c (address_range)
u32 EGG_Runtime_validate_8041608c(u32, int, uint, int, int, u32, short);

// 0x0x80416268 (address_range)
u32 EGG_Runtime_validate_80416268(int, u32, u32, u32, int, u32);

// 0x0x804163e0 (address_range)
u32 EGG_Runtime_validate_804163e0(int, u32, int);

// 0x0x80416520 (address_range)
u32 EGG_Runtime_validate_80416520(int, u32, u32, u32);

// 0x0x8041663c (address_range)
void EGG_Runtime_validate_8041663c(int, u32);

// 0x0x804166ac (address_range)
void EGG_Runtime_validate_804166ac(int, int);

// 0x0x80416790 (address_range)
u32 EGG_Runtime_validate_80416790(u32);

// 0x0x80416828 (address_range)
int EGG_Runtime_validate_80416828(void);

// 0x0x804168ac (address_range)
void EGG_Runtime_validate_804168ac(int);

// 0x0x80416980 (address_range)
int EGG_Runtime_validate_80416980(int, int);

// 0x0x804169c0 (address_range)
void EGG_Runtime_assertFail_804169c0(void);

// 0x0x80416d84 (address_range)
u32 EGG_Runtime_validate_80416d84(int);

// 0x0x80416ec4 (address_range)
void EGG_Runtime_validate_80416ec4(int);

// 0x0x804170c4 (address_range)
void EGG_Runtime_validate_804170c4(int);

// 0x0x80417148 (address_range)
void EGG_Runtime_validate_80417148(int);

// 0x0x804171b8 (address_range)
u32 EGG_Runtime_validate_804171b8(u32, u32);

// 0x0x80417218 (address_range)
u32 rt_EGG_Runtime_80417218(int);

// 0x0x80417230 (address_range)
u32 EGG_Runtime_validate_80417230(u32);

// 0x0x8041732c (address_range)
u32 EGG_Runtime_validate_8041732c(u32);

// 0x0x804173a4 (address_range)
u32 EGG_Runtime_validate_804173a4(u32, int, int);

// 0x0x80417738 (address_range)
u32 EGG_Runtime_validate_80417738(u32, u32, int);

// 0x0x8041798c (address_range)
u32 EGG_Runtime_validate_8041798c(int, int, int);

// 0x0x80417ab0 (address_range)
void EGG_Runtime_validate_80417ab0(u32, u32, int);

// 0x0x80417bb0 (address_range)
void EGG_Runtime_validate_80417bb0(u32, u32, int);

// 0x0x80417c94 (address_range)
void EGG_Runtime_validate_80417c94(u32, u32, int);

// 0x0x80417d98 (address_range)
u32 EGG_Runtime_validate_80417d98(u32, u32, u32, u32, u32, int);

// 0x0x80417edc (address_range)
u32 EGG_Runtime_validate_80417edc(int, u32, int, u32);

// 0x0x804181c4 (address_range)
void EGG_Runtime_validate_804181c4(u32, u32, int);

// 0x0x804183e8 (address_range)
int EGG_Runtime_validate_804183e8(int, int, int, int);

// 0x0x80418ad4 (address_range)
void EGG_Runtime_assertFail_80418ad4(void);

// 0x0x80418c60 (address_range)
int EGG_Runtime_validate_80418c60(int, int);

// 0x0x80418ca0 (address_range)
u32 EGG_Runtime_validate_80418ca0(u32, int, u32, int);

// 0x0x80418f5c (address_range)
void EGG_Runtime_validate_80418f5c(u32, u32, int);

// 0x0x8041904c (address_range)
void EGG_Runtime_validate_8041904c(u32, u32, u32, int);

// 0x0x8041915c (address_range)
void EGG_Runtime_validate_8041915c(u32, u32);

// 0x0x804191bc (address_range)
u32 EGG_Runtime_validate_804191bc(int);

// 0x0x8041926c (address_range)
void EGG_Runtime_assertFail_8041926c(void);

// 0x0x80419374 (address_range)
void EGG_Runtime_validate_80419374(int, u32, int);

// 0x0x804193c4 (address_range)
void EGG_Runtime_validate_804193c4(u32, u32, u32, u32, u32);

// 0x0x80419410 (address_range)
void rt_EGG_Runtime_80419410(int, u16, u32, u32, u32, u32, u32, u32);

// 0x0x80419450 (address_range)
void rt_EGG_Runtime_80419450(int);

// 0x0x804194c4 (address_range)
void EGG_Runtime_validate_804194c4(u32, u32);

// 0x0x80419568 (address_range)
void rt_EGG_Runtime_80419568(int, u16, u16, u16, u32);

// 0x0x804195a4 (address_range)
void rt_EGG_Runtime_804195a4(int);

// 0x0x8041960c (address_range)
void EGG_Runtime_validate_8041960c(u32, u32);

// 0x0x804196b0 (address_range)
void EGG_Runtime_validate_804196b0(u32, u32);

// 0x0x804196f0 (address_range)
void EGG_Runtime_assertFail_804196f0(void);

// 0x0x80419794 (address_range)
u32 EGG_Runtime_validate_80419794(u32);

// 0x0x80419838 (address_range)
void rt_EGG_Runtime_80419838(void);

// 0x0x80419878 (address_range)
void rt_EGG_Runtime_80419878(int);

// 0x0x804198fc (address_range)
void rt_EGG_Runtime_804198fc(int);

// 0x0x80419994 (address_range)
void rt_EGG_Runtime_80419994(int);

// 0x0x80419a2c (address_range)
void EGG_Runtime_validate_80419a2c(int, u32);

// 0x0x80419a88 (address_range)
void rt_EGG_Runtime_80419a88(int);

// 0x0x80419ad0 (address_range)
void rt_EGG_Runtime_80419ad0(int);

// 0x0x80419b18 (address_range)
void EGG_Runtime_validate_80419b18(int);

// 0x0x80419b30 (address_range)
void rt_EGG_Runtime_80419b30(int);

// 0x0x80419b70 (address_range)
void rt_EGG_Runtime_80419b70(int);

// 0x0x80419bb0 (address_range)
void EGG_Runtime_validate_80419bb0(int);

// 0x0x80419bc8 (address_range)
void rt_EGG_Runtime_80419bc8(int);

// 0x0x80419c0c (address_range)
void rt_EGG_Runtime_80419c0c(int);

// 0x0x80419c50 (address_range)
void EGG_Runtime_validate_80419c50(int);

// 0x0x80419c78 (address_range)
u32 rt_EGG_Runtime_80419c78(int, u32);

// 0x0x80419cc4 (address_range)
u32 EGG_Runtime_validate_80419cc4(int);

// 0x0x80419df4 (address_range)
int * rt_EGG_Runtime_80419df4(int);

// 0x0x80419e48 (address_range)
void EGG_Runtime_validate_80419e48(int);

// 0x0x80419ed4 (address_range)
int * rt_EGG_Runtime_80419ed4(int);

// 0x0x80419f28 (address_range)
void EGG_Runtime_validate_80419f28(int);

// 0x0x80419f98 (address_range)
int * rt_EGG_Runtime_80419f98(int);

// 0x0x80419fec (address_range)
void EGG_Runtime_validate_80419fec(int);

// 0x0x8041a05c (address_range)
int EGG_Runtime_validate_8041a05c(int, int);

// 0x0x8041a0b4 (address_range)
int EGG_Runtime_validate_8041a0b4(int, int);

// 0x0x8041a10c (address_range)
int EGG_Runtime_validate_8041a10c(int, int);

// 0x0x8041a164 (address_range)
void EGG_Runtime_validate_8041a164(u32, int);

// 0x0x8041a274 (address_range)
void EGG_Runtime_validate_8041a274(int);

// 0x0x8041a308 (address_range)
u32 EGG_Runtime_validate_8041a308(u32);

// 0x0x8041a38c (address_range)
int rt_EGG_Runtime_8041a38c(int, u32, u32);

// 0x0x8041a42c (address_range)
u32 rt_EGG_Runtime_8041a42c(int);

// 0x0x8041a490 (address_range)
u32 EGG_Runtime_validate_8041a490(int, u32);

// 0x0x8041a580 (address_range)
void EGG_Runtime_validate_8041a580(int, u32, u32);

// 0x0x8041a6b4 (address_range)
void rt_EGG_Runtime_8041a6b4(int);

// 0x0x8041a714 (address_range)
void rt_EGG_Runtime_8041a714(int, int, u32);

// 0x0x8041a798 (address_range)
void EGG_Runtime_validate_8041a798(int, u32);

// 0x0x8041a86c (address_range)
void rt_EGG_Runtime_8041a86c(int);

// 0x0x8041aa88 (address_range)
void EGG_Runtime_validate_8041aa88(u32, u32, u32, u32, u32);

// 0x0x8041ab90 (address_range)
void EGG_Runtime_validate_8041ab90(u32, u32, u32);

// 0x0x8041ac84 (address_range)
void EGG_Runtime_validate_8041ac84(u32);

// 0x0x8041ad70 (address_range)
void EGG_Runtime_validate_8041ad70(u32);

// 0x0x8041ae54 (address_range)
void EGG_Runtime_validate_8041ae54(u32, u32, u32, u32);

// 0x0x8041b024 (address_range)
void EGG_Runtime_validate_8041b024(u32, u32);

// 0x0x8041b100 (address_range)
void EGG_Runtime_validate_8041b100(u32, u32, u32, u32);

// 0x0x8041b2b0 (address_range)
void EGG_Runtime_validate_8041b2b0(u32, u32, u32);

// 0x0x8041b380 (address_range)
void EGG_Runtime_validate_8041b380(u32, u32);

// 0x0x8041b478 (address_range)
void EGG_Runtime_validate_8041b478(u32);

// 0x0x8041b588 (address_range)
void EGG_Runtime_validate_8041b588(u32, u32);

// 0x0x8041b680 (address_range)
void EGG_Runtime_validate_8041b680(u32);

// 0x0x8041b76c (address_range)
void EGG_Runtime_validate_8041b76c(u32, u32);

// 0x0x8041b868 (address_range)
void EGG_Runtime_validate_8041b868(u32, u32);

// 0x0x8041b964 (address_range)
void rt_EGG_Runtime_8041b964(u32);

// 0x0x8041b988 (address_range)
u32 EGG_Runtime_validate_8041b988(u32);

// 0x0x8041ba20 (address_range)
int EGG_Runtime_validate_8041ba20(void);

// 0x0x8041baf8 (address_range)
void EGG_Runtime_validate_8041baf8(int);

// 0x0x8041bb70 (address_range)
u32 EGG_Runtime_validate_8041bb70(int);

// 0x0x8041bc24 (address_range)
void EGG_Runtime_assertFail_8041bc24(void);

// 0x0x8041bcdc (address_range)
int rt_EGG_Runtime_8041bcdc(int, u32, u32, u32, int);

// 0x0x8041bd94 (address_range)
int rt_EGG_Runtime_8041bd94(u32, u32, u32, u32, u32);

// 0x0x8041be38 (address_range)
int rt_EGG_Runtime_8041be38(int, int);

// 0x0x8041befc (address_range)
int EGG_Runtime_validate_8041befc(int, u32, u32, u32, int);

// 0x0x8041c054 (address_range)
int rt_EGG_Runtime_8041c054(u32, u32, u32, u32, u32);

// 0x0x8041c118 (address_range)
int rt_EGG_Runtime_8041c118(int, u32, u32, u32, u32);

// 0x0x8041c1fc (address_range)
int rt_EGG_Runtime_8041c1fc(u32, u32, u32, u32, u32, u32);

// 0x0x8041c2b8 (address_range)
void EGG_Runtime_validate_8041c2b8(int);

// 0x0x8041c410 (address_range)
int rt_EGG_Runtime_8041c410(int, u32, int);

// 0x0x8041c73c (address_range)
void rt_EGG_Runtime_8041c73c(u32, u32);

// 0x0x8041c798 (address_range)
int rt_EGG_Runtime_8041c798(int, int, int, uint, int);

// 0x0x8041c8d0 (address_range)
int rt_EGG_Runtime_8041c8d0(int, int, int, uint, int);

// 0x0x8041c9f4 (address_range)
void rt_EGG_Runtime_8041c9f4(double, u32, int, u32, u32);

// 0x0x8041ca84 (address_range)
void rt_EGG_Runtime_8041ca84(uint, u32, int, u32, u32);

// 0x0x8041cb24 (address_range)
double rt_EGG_Runtime_8041cb24(double);

// 0x0x8041cc94 (address_range)
double rt_EGG_Runtime_8041cc94(int, int);

// 0x0x8041cd44 (address_range)
int rt_EGG_Runtime_8041cd44(int, int);

// 0x0x8041cdec (address_range)
int rt_EGG_Runtime_8041cdec(int, int);

// 0x0x8041cec4 (address_range)
u32 * rt_EGG_Runtime_8041cec4(u32);

// 0x0x8041cf68 (address_range)
int EGG_Runtime_validate_8041cf68(int, int);

// 0x0x8041cfa8 (address_range)
void EGG_Runtime_validate_8041cfa8(int, u32);

// 0x0x8041d048 (address_range)
uint rt_EGG_Runtime_8041d048(int);

// 0x0x8041d120 (address_range)
void EGG_Runtime_validate_8041d120(u32);

// 0x0x8041d1c0 (address_range)
int EGG_Runtime_validate_8041d1c0(int, int);

// 0x0x8041d200 (address_range)
uint rt_EGG_Runtime_8041d200(int);

// 0x0x8041d270 (address_range)
u32 rt_EGG_Runtime_8041d270(int);

// 0x0x8041d278 (address_range)
int rt_EGG_Runtime_8041d278(int, int);

// 0x0x8041d288 (address_range)
u32 rt_EGG_Runtime_8041d288(void);

// 0x0x8041d298 (address_range)
void EGG_Runtime_validate_8041d298(int);

// 0x0x8041d984 (address_range)
void rt_EGG_Runtime_8041d984(int, u32);

// 0x0x8041d98c (address_range)
int rt_EGG_Runtime_8041d98c(int, int);

// 0x0x8041d99c (address_range)
void rt_EGG_Runtime_8041d99c(int, u32);

// 0x0x8041d9a4 (address_range)
void rt_EGG_Runtime_8041d9a4(int, u32);

// 0x0x8041d9ac (address_range)
void rt_EGG_Runtime_8041d9ac(int);

// 0x0x8041dbb0 (address_range)
void rt_EGG_Runtime_8041dbb0(int, u32);

// 0x0x8041dbb8 (address_range)
void rt_EGG_Runtime_8041dbb8(int, u32);

// 0x0x8041ddc8 (address_range)
void rt_EGG_Runtime_8041ddc8(void);

// 0x0x8041dea8 (address_range)
void rt_EGG_Runtime_8041dea8(void);

// 0x0x8041e270 (address_range)
u32 rt_EGG_Runtime_8041e270(int);

// 0x0x8041e278 (address_range)
u32 rt_EGG_Runtime_8041e278(int);

// 0x0x8041e280 (address_range)
void rt_EGG_Runtime_8041e280(int, int);

// 0x0x8041e448 (address_range)
u32 EGG_Runtime_validate_8041e448(int, int, char);

// 0x0x8041e5bc (address_range)
void rt_EGG_Runtime_8041e5bc(int, uint);

// 0x0x8041e738 (address_range)
void rt_EGG_Runtime_8041e738(int);

// 0x0x8041ea40 (address_range)
void EGG_Runtime_validate_8041ea40(int, int);

// 0x0x8041ece0 (address_range)
void rt_EGG_Runtime_8041ece0(int, byte, byte, char);

// 0x0x8041ee7c (address_range)
void EGG_Runtime_validate_8041ee7c(int);

// 0x0x8041ef64 (address_range)
void EGG_Runtime_assertFail_8041ef64(void);

// 0x0x8041f0e8 (address_range)
void rt_EGG_Runtime_8041f0e8(int, u32);

// 0x0x8041f3b0 (address_range)
int EGG_Runtime_validate_8041f3b0(void);

// 0x0x8041f540 (address_range)
void rt_EGG_Runtime_8041f540(void);

// 0x0x8041f590 (address_range)
u32 EGG_Runtime_validate_8041f590(int);

// 0x0x8041f64c (address_range)
u32 EGG_Runtime_validate_8041f64c(int);

// 0x0x8041f6b4 (address_range)
void EGG_Runtime_validate_8041f6b4(u32);

// 0x0x8041f81c (address_range)
void rt_EGG_Runtime_8041f81c(int);

// 0x0x8041fb04 (address_range)
void rt_EGG_Runtime_8041fb04(int, int);

// 0x0x8041fdbc (address_range)
void rt_EGG_Runtime_8041fdbc(int);

// 0x0x80420464 (address_range)
uint rt_EGG_Runtime_80420464(int);

// 0x0x80420470 (address_range)
u32 rt_EGG_Runtime_80420470(int);

// 0x0x80420478 (address_range)
u32 rt_EGG_Runtime_80420478(int);

// 0x0x80420480 (address_range)
u32 rt_EGG_Runtime_80420480(int);

// 0x0x80420488 (address_range)
void rt_EGG_Runtime_80420488(int, int);

// 0x0x804205c0 (address_range)
int rt_EGG_Runtime_804205c0(int);

// 0x0x804205c8 (address_range)
void rt_EGG_Runtime_804205c8(int);

// 0x0x8042123c (address_range)
u32 rt_EGG_Runtime_8042123c(int);

// 0x0x8042133c (address_range)
void EGG_Runtime_validate_8042133c(int, u32);

// 0x0x80421470 (address_range)
int rt_EGG_Runtime_80421470(int, int);

// 0x0x80421484 (address_range)
void EGG_Runtime_validate_80421484(int, u32);

// 0x0x804214c8 (address_range)
int rt_EGG_Runtime_804214c8(int, int);

// 0x0x804214d8 (address_range)
void rt_EGG_Runtime_804214d8(int);

// 0x0x80421588 (address_range)
u32 rt_EGG_Runtime_80421588(int);

// 0x0x804215dc (address_range)
int EGG_Runtime_validate_804215dc(void);

// 0x0x8042162c (address_range)
void rt_EGG_Runtime_8042162c(void);

// 0x0x8042167c (address_range)
u32 * rt_EGG_Runtime_8042167c(u32, u32);

// 0x0x804216e0 (address_range)
void EGG_Runtime_validate_804216e0(u32, uint);

// 0x0x80421a04 (address_range)
int EGG_Runtime_validate_80421a04(int, int);

// 0x0x80421a44 (address_range)
int EGG_Runtime_validate_80421a44(int, int);

// 0x0x80421a84 (address_range)
int EGG_Runtime_validate_80421a84(int, int);

// 0x0x80421ac4 (address_range)
int EGG_Runtime_validate_80421ac4(int, int);

// 0x0x80421b04 (address_range)
int EGG_Runtime_validate_80421b04(int, int);

// 0x0x80421b44 (address_range)
int EGG_Runtime_validate_80421b44(int, int);

// 0x0x80421b84 (address_range)
int EGG_Runtime_validate_80421b84(int, int);

// 0x0x80421bc4 (address_range)
int EGG_Runtime_validate_80421bc4(int, int);

// 0x0x80421c04 (address_range)
int EGG_Runtime_validate_80421c04(int, int);

// 0x0x80421c44 (address_range)
u16 rt_EGG_Runtime_80421c44(int);

// 0x0x80421cf8 (address_range)
void EGG_Runtime_validate_80421cf8(u32);

// 0x0x8042229c (address_range)
void EGG_Runtime_validate_8042229c(int);

// 0x0x80422338 (address_range)
int EGG_Runtime_validate_80422338(int, int);

// 0x0x80422394 (address_range)
u32 EGG_Runtime_validate_80422394(u32);

// 0x0x804224a0 (address_range)
int EGG_Runtime_validate_804224a0(int, int);

// 0x0x804224e0 (address_range)
void rt_EGG_Runtime_804224e0(int);

// 0x0x804225e8 (address_range)
int rt_EGG_Runtime_804225e8(int);

// 0x0x80422618 (address_range)
void rt_EGG_Runtime_80422618(void);

// 0x0x8042270c (address_range)
void rt_EGG_Runtime_8042270c(void);

// 0x0x80422bfc (address_range)
char rt_EGG_Runtime_80422bfc(void);

// 0x0x80422c30 (address_range)
void EGG_Runtime_assertFail_80422c30(void);

// 0x0x80423054 (address_range)
void rt_EGG_Runtime_80423054(int);

// 0x0x80423144 (address_range)
void rt_EGG_Runtime_80423144(int);

// 0x0x8042318c (address_range)
u32 rt_EGG_Runtime_8042318c(int, uint, uint);

// 0x0x804231c4 (address_range)
void rt_EGG_Runtime_804231c4(int, int);

// 0x0x804232dc (address_range)
void rt_EGG_Runtime_804232dc(int, uint);

// 0x0x8042332c (address_range)
void rt_EGG_Runtime_8042332c(int, uint);

// 0x0x80423430 (address_range)
void EGG_Runtime_validate_80423430(u32, char, int);

// 0x0x804236ec (address_range)
void rt_EGG_Runtime_804236ec(int);

// 0x0x80423840 (address_range)
void rt_EGG_Runtime_80423840(int, u32, int);

// 0x0x80423bdc (address_range)
void rt_EGG_Runtime_80423bdc(void);

// 0x0x80423d4c (address_range)
void rt_EGG_Runtime_80423d4c(int, int, int, u32);

// 0x0x80423e8c (address_range)
void EGG_Runtime_validate_80423e8c(int);

// 0x0x80423f10 (address_range)
void EGG_Runtime_assertFail_80423f10(void);

// 0x0x804241d0 (address_range)
void rt_EGG_Runtime_804241d0(int);

// 0x0x80424224 (address_range)
void rt_EGG_Runtime_80424224(int, u32);

// 0x0x80424350 (address_range)
void rt_EGG_Runtime_80424350(void);

// 0x0x8042485c (address_range)
void rt_EGG_Runtime_8042485c(int);

// 0x0x80424c70 (address_range)
void rt_EGG_Runtime_80424c70(int);

// 0x0x80424c84 (address_range)
void rt_EGG_Runtime_80424c84(int, uint, int);

// 0x0x80424dbc (address_range)
void EGG_Runtime_validate_80424dbc(int);

// 0x0x80424e5c (address_range)
void EGG_Runtime_validate_80424e5c(int);

// 0x0x804251f8 (address_range)
void rt_EGG_Runtime_804251f8(int, int);

// 0x0x80425340 (address_range)
void rt_EGG_Runtime_80425340(int);

// 0x0x80425480 (address_range)
uint rt_EGG_Runtime_80425480(void);

// 0x0x804255ac (address_range)
uint rt_EGG_Runtime_804255ac(void);

// 0x0x80425788 (address_range)
int rt_EGG_Runtime_80425788(int, uint);

// 0x0x80425834 (address_range)
void EGG_Runtime_assertFail_80425834(void);

// 0x0x80425b20 (address_range)
void rt_EGG_Runtime_80425b20(void);

// 0x0x80425d80 (address_range)
u32 rt_EGG_Runtime_80425d80(void);

// 0x0x80425e50 (address_range)
void rt_EGG_Runtime_80425e50(int);

// 0x0x804261dc (address_range)
void EGG_Runtime_assertFail_804261dc(void);

// 0x0x80426700 (address_range)
int EGG_Runtime_validate_80426700(int, int);

// 0x0x80426740 (address_range)
void rt_EGG_Runtime_80426740(int, u32, u32);

// 0x0x804267a4 (address_range)
void rt_EGG_Runtime_804267a4(int, u32, u32);

// 0x0x80426814 (address_range)
void rt_EGG_Runtime_80426814(int, u32, u32);

// 0x0x80426878 (address_range)
void rt_EGG_Runtime_80426878(int, u32, u32);

// 0x0x804268e8 (address_range)
void rt_EGG_Runtime_804268e8(int, u32, u32);

// 0x0x8042694c (address_range)
void rt_EGG_Runtime_8042694c(int, u32, u32);

// 0x0x804269bc (address_range)
void rt_EGG_Runtime_804269bc(int, u32, u32);

// 0x0x80426a20 (address_range)
void rt_EGG_Runtime_80426a20(int, u32, u32);

// 0x0x80426a90 (address_range)
void rt_EGG_Runtime_80426a90(int, u32, u32);

// 0x0x80426af4 (address_range)
void rt_EGG_Runtime_80426af4(int, u32, u32);

// 0x0x80426b64 (address_range)
void rt_EGG_Runtime_80426b64(int, u32, u32);

// 0x0x80426bc8 (address_range)
void rt_EGG_Runtime_80426bc8(int, u32, u32);

// 0x0x80426c38 (address_range)
int EGG_Runtime_validate_80426c38(int, int);

// 0x0x80426c98 (address_range)
void EGG_Runtime_validate_80426c98(u32, u32);

// 0x0x80426d88 (address_range)
void rt_EGG_Runtime_80426d88(float, float, float);

// 0x0x80426dd4 (address_range)
void EGG_Runtime_assertFail_80426dd4(void);

// 0x0x804270d8 (address_range)
void rt_EGG_Runtime_804270d8(u32, int, int);

// 0x0x804270fc (address_range)
void rt_EGG_Runtime_804270fc(void);

// 0x0x804271ac (address_range)
int EGG_Runtime_validate_804271ac(int, int);

// 0x0x804271ec (address_range)
int EGG_Runtime_validate_804271ec(int, int);

// 0x0x8042722c (address_range)
void rt_EGG_Runtime_8042722c(void);

// 0x0x804274f0 (address_range)
void rt_EGG_Runtime_804274f0(void);

// 0x0x804275dc (address_range)
void rt_EGG_Runtime_804275dc(void);

// 0x0x804276fc (address_range)
void rt_EGG_Runtime_804276fc(u32, float, float);

// 0x0x80427778 (address_range)
void rt_EGG_Runtime_80427778(double, float, float, float);

// 0x0x8042789c (address_range)
u32 rt_EGG_Runtime_8042789c(u32, int);

// 0x0x80427970 (address_range)
void EGG_Runtime_assertFail_80427970(void);

// 0x0x80427cc8 (address_range)
void rt_EGG_Runtime_80427cc8(int, uint, uint);

// 0x0x80427eec (address_range)
void rt_EGG_Runtime_80427eec(int, uint, uint);

// 0x0x80428118 (address_range)
void rt_EGG_Runtime_80428118(int, uint);

// 0x0x80428238 (address_range)
void rt_EGG_Runtime_80428238(int, uint);

// 0x0x80428358 (address_range)
void rt_EGG_Runtime_80428358(u32, int);

// 0x0x8042840c (address_range)
int rt_EGG_Runtime_8042840c(int, uint);

// 0x0x80428544 (address_range)
void rt_EGG_Runtime_80428544(void);

// 0x0x8042873c (address_range)
int rt_EGG_Runtime_8042873c(int);

// 0x0x8042895c (address_range)
u32 rt_EGG_Runtime_8042895c(int);

// 0x0x80428acc (address_range)
void rt_EGG_Runtime_80428acc(int);

// 0x0x80428cc8 (address_range)
u32 rt_EGG_Runtime_80428cc8(void);

// 0x0x80428d7c (address_range)
void rt_EGG_Runtime_80428d7c(int);

// 0x0x80428fe8 (address_range)
void rt_EGG_Runtime_80428fe8(u32, u32, int);

// 0x0x80429088 (address_range)
void rt_EGG_Runtime_80429088(u32, int, int);

// 0x0x80429140 (address_range)
void rt_EGG_Runtime_80429140(u32, u32);

// 0x0x80429194 (address_range)
void rt_EGG_Runtime_80429194(int);

// 0x0x804294e0 (address_range)
void EGG_Runtime_validate_804294e0(u32, u32);

// 0x0x804296d8 (address_range)
int EGG_Runtime_validate_804296d8(int, int);

// 0x0x80429718 (address_range)
int EGG_Runtime_validate_80429718(int, int);

// 0x0x80429758 (address_range)
int EGG_Runtime_validate_80429758(int, int);

// 0x0x80429798 (address_range)
int EGG_Runtime_validate_80429798(int, int);

// 0x0x804297d8 (address_range)
int EGG_Runtime_validate_804297d8(int, int);

// 0x0x80429818 (address_range)
int EGG_Runtime_validate_80429818(int, int);

// 0x0x80429858 (address_range)
int EGG_Runtime_validate_80429858(int, int);

// 0x0x80429898 (address_range)
int EGG_Runtime_validate_80429898(int, int);

// 0x0x804298d8 (address_range)
int EGG_Runtime_validate_804298d8(int, int);

// 0x0x80429918 (address_range)
void rt_EGG_Runtime_80429918(int, u32);

// 0x0x80429c78 (address_range)
void rt_EGG_Runtime_80429c78(int, u32, u32);

// 0x0x80429ce4 (address_range)
void rt_EGG_Runtime_80429ce4(int, u32, u32);

// 0x0x80429d50 (address_range)
void rt_EGG_Runtime_80429d50(int, u32, u32);

// 0x0x80429dc8 (address_range)
void rt_EGG_Runtime_80429dc8(int, u32, u32);

// 0x0x80429e34 (address_range)
void rt_EGG_Runtime_80429e34(int, u32, u32);

// 0x0x80429ea0 (address_range)
void rt_EGG_Runtime_80429ea0(int, u32, u32);

// 0x0x80429f0c (address_range)
void rt_EGG_Runtime_80429f0c(int, u32, u32);

// 0x0x80429f78 (address_range)
void rt_EGG_Runtime_80429f78(u32, int, int, uint, uint, uint);

// 0x0x8042a174 (address_range)
void rt_EGG_Runtime_8042a174(int, uint, u32);

// 0x0x8042a600 (address_range)
void rt_EGG_Runtime_8042a600(int, u32, u32);

// 0x0x8042a668 (address_range)
void rt_EGG_Runtime_8042a668(int, u32, u32);

// 0x0x8042a6d0 (address_range)
void rt_EGG_Runtime_8042a6d0(int, u32, u32);

// 0x0x8042a750 (address_range)
void rt_EGG_Runtime_8042a750(int, u32, u32);

// 0x0x8042a7b8 (address_range)
void rt_EGG_Runtime_8042a7b8(int, u32, u32);

// 0x0x8042a820 (address_range)
void rt_EGG_Runtime_8042a820(int, u32, u32);

// 0x0x8042a888 (address_range)
void rt_EGG_Runtime_8042a888(int, u32, u32);

// 0x0x8042a924 (address_range)
u32 rt_EGG_Runtime_8042a924(int, u32, u32, u32);

// 0x0x8042aa24 (address_range)
void rt_EGG_Runtime_8042aa24(int, u32, uint);

// 0x0x8042aadc (address_range)
void rt_EGG_Runtime_8042aadc(int, u32, uint);

// 0x0x8042ab94 (address_range)
void rt_EGG_Runtime_8042ab94(int, uint);

// 0x0x8042ac50 (address_range)
void rt_EGG_Runtime_8042ac50(int, uint);

// 0x0x8042acfc (address_range)
void rt_EGG_Runtime_8042acfc(int, uint);

// 0x0x8042addc (address_range)
void rt_EGG_Runtime_8042addc(int, uint, u16);

// 0x0x8042aff8 (address_range)
void rt_EGG_Runtime_8042aff8(int, uint);

// 0x0x8042b14c (address_range)
void EGG_Runtime_assertFail_8042b14c(void);

// 0x0x8042c120 (address_range)
void rt_EGG_Runtime_8042c120(int, uint, uint);

// 0x0x8042c368 (address_range)
void rt_EGG_Runtime_8042c368(int, uint, uint);

// 0x0x8042c5b8 (address_range)
void rt_EGG_Runtime_8042c5b8(int, uint);

// 0x0x8042c6f8 (address_range)
void rt_EGG_Runtime_8042c6f8(int, int);

// 0x0x8042c7b8 (address_range)
void rt_EGG_Runtime_8042c7b8(int, uint);

// 0x0x8042c8f8 (address_range)
void rt_EGG_Runtime_8042c8f8(int);

// 0x0x8042c980 (address_range)
void rt_EGG_Runtime_8042c980(int);

// 0x0x8042cda0 (address_range)
u32 rt_EGG_Runtime_8042cda0(u32, u32, u16);

// 0x0x8042cfe0 (address_range)
void rt_EGG_Runtime_8042cfe0(int, uint);

// 0x0x8042d1e4 (address_range)
void rt_EGG_Runtime_8042d1e4(int);

// 0x0x8042d310 (address_range)
int rt_EGG_Runtime_8042d310(int);

// 0x0x8042d720 (address_range)
void rt_EGG_Runtime_8042d720(int, u32);

// 0x0x8042d7a4 (address_range)
u32 rt_EGG_Runtime_8042d7a4(int);

// 0x0x8042d8cc (address_range)
u32 rt_EGG_Runtime_8042d8cc(int);

// 0x0x8042d9b4 (address_range)
void rt_EGG_Runtime_8042d9b4(void);

// 0x0x8042db38 (address_range)
u32 rt_EGG_Runtime_8042db38(int);

// 0x0x8042dce8 (address_range)
u32 rt_EGG_Runtime_8042dce8(int);

// 0x0x8042de08 (address_range)
void rt_EGG_Runtime_8042de08(int);

// 0x0x8042e004 (address_range)
void EGG_Runtime_assertFail_8042e004(void);

// 0x0x8042e574 (address_range)
u32 rt_EGG_Runtime_8042e574(void);

// 0x0x8042e69c (address_range)
uint rt_EGG_Runtime_8042e69c(int, uint, uint);

// 0x0x8042e6fc (address_range)
void rt_EGG_Runtime_8042e6fc(int);

// 0x0x8042e7b0 (address_range)
int EGG_Runtime_validate_8042e7b0(void);

// 0x0x8042e800 (address_range)
void rt_EGG_Runtime_8042e800(void);

// 0x0x8042e850 (address_range)
void EGG_Runtime_validate_8042e850(u32);

// 0x0x8042e9f8 (address_range)
int EGG_Runtime_validate_8042e9f8(int, int);

// 0x0x8042ea38 (address_range)
int EGG_Runtime_validate_8042ea38(int, int);

// 0x0x8042ea80 (address_range)
u32 EGG_Runtime_validate_8042ea80(u32);

// 0x0x8042ec04 (address_range)
void EGG_Runtime_validate_8042ec04(int);

// 0x0x8042ee24 (address_range)
void EGG_Runtime_validate_8042ee24(int, int, u32, u32);

// 0x0x8042eef8 (address_range)
void EGG_Runtime_validate_8042eef8(int, int, u32, u32);

// 0x0x8042efb4 (address_range)
u32 EGG_Runtime_validate_8042efb4(int, int, u32, char);

// 0x0x8042f0bc (address_range)
int EGG_Runtime_validate_8042f0bc(int, int);

// 0x0x8042f1e4 (address_range)
u32 EGG_Runtime_validate_8042f1e4(int, int);

// 0x0x8042f2c4 (address_range)
u32 EGG_Runtime_validate_8042f2c4(int, int, u32, int);

// 0x0x8042f47c (address_range)
u32 EGG_Runtime_validate_8042f47c(int, u32, u32);

// 0x0x8042f678 (address_range)
u32 EGG_Runtime_validate_8042f678(int, int, u32, u32, u32, uint);

// 0x0x8042f860 (address_range)
void EGG_Runtime_assertFail_8042f860(void);

// 0x0x8042f9a0 (address_range)
int EGG_Runtime_validate_8042f9a0(int, int, int, int, int, int);

// 0x0x8042faf4 (address_range)
int EGG_Runtime_validate_8042faf4(int, int, int, int, int, int);

// 0x0x8042fc48 (address_range)
int EGG_Runtime_validate_8042fc48(int, int, int, int);

// 0x0x8042fd60 (address_range)
u32 rt_EGG_Runtime_8042fd60(int, int, u32, u32);

// 0x0x8042fddc (address_range)
u32 EGG_Runtime_validate_8042fddc(int, int);

// 0x0x8042fe84 (address_range)
u32 EGG_Runtime_validate_8042fe84(int, int, int);

// 0x0x8042ff2c (address_range)
u32 rt_EGG_Runtime_8042ff2c(int, int, u32, u32);

// 0x0x8042ff9c (address_range)
u32 rt_EGG_Runtime_8042ff9c(int, int, u32, u32);

// 0x0x8043000c (address_range)
void EGG_Runtime_validate_8043000c(u32, int);

// 0x0x80430178 (address_range)
u32 rt_EGG_Runtime_80430178(int, int, uint);

// 0x0x80430200 (address_range)
u32 EGG_Runtime_validate_80430200(int, int, uint, u32, u32);

// 0x0x8043029c (address_range)
u16 rt_EGG_Runtime_8043029c(int, int);

// 0x0x80430308 (address_range)
void EGG_Runtime_validate_80430308(int, u32, u32);

// 0x0x804303dc (address_range)
void EGG_Runtime_validate_804303dc(int, u32, u32, int, int);

// 0x0x80430510 (address_range)
void EGG_Runtime_validate_80430510(int, u32);

// 0x0x8043052c (address_range)
u32 rt_EGG_Runtime_8043052c(int);

// 0x0x80430550 (address_range)
u32 rt_EGG_Runtime_80430550(int);

// 0x0x80430574 (address_range)
void EGG_Runtime_assertFail_80430574(void);

// 0x0x804305d4 (address_range)
void EGG_Runtime_assertFail_804305d4(void);

// 0x0x80430628 (address_range)
u32 EGG_Runtime_validate_80430628(u32);

// 0x0x804306bc (address_range)
void EGG_Runtime_validate_804306bc(int, u32);

// 0x0x804307ac (address_range)
u32 EGG_Runtime_validate_804307ac(int, u32, u32);

// 0x0x80430844 (address_range)
void EGG_Runtime_validate_80430844(int);

// 0x0x804309a8 (address_range)
void EGG_Runtime_validate_804309a8(uint);

// 0x0x80430b94 (address_range)
void EGG_Runtime_validate_80430b94(int, int);

// 0x0x80430d74 (address_range)
u32 EGG_Runtime_validate_80430d74(int, int, u32, u32);

// 0x0x80430e30 (address_range)
void EGG_Runtime_validate_80430e30(u32, u32, int);

// 0x0x80430f20 (address_range)
void rt_EGG_Runtime_80430f20(int);

// 0x0x80430fe0 (address_range)
u32 rt_EGG_Runtime_80430fe0(int, int);

// 0x0x80430ff0 (address_range)
void EGG_Runtime_assertFail_80430ff0(void);

// 0x0x80431088 (address_range)
void EGG_Runtime_validate_80431088(u32, int, int);

// 0x0x804310e8 (address_range)
void rt_EGG_Runtime_804310e8(int);

// 0x0x80431134 (address_range)
void EGG_Runtime_assertFail_80431134(void);

// 0x0x804311f8 (address_range)
void EGG_Runtime_assertFail_804311f8(void);

// 0x0x804312b8 (address_range)
u32 EGG_Runtime_validate_804312b8(int, u32);

// 0x0x80431320 (address_range)
void EGG_Runtime_validate_80431320(int, u32);

// 0x0x804313dc (address_range)
void EGG_Runtime_assertFail_804313dc(void);

// 0x0x8043150c (address_range)
int EGG_Runtime_validate_8043150c(int, int);

// 0x0x8043157c (address_range)
void EGG_Runtime_validate_8043157c(int);

// 0x0x804315e4 (address_range)
void EGG_Runtime_validate_804315e4(int);

// 0x0x80431644 (address_range)
void EGG_Runtime_validate_80431644(int);

// 0x0x804316c0 (address_range)
void EGG_Runtime_validate_804316c0(int);

// 0x0x80431704 (address_range)
void EGG_Runtime_validate_80431704(int);

// 0x0x80431748 (address_range)
void EGG_Runtime_validate_80431748(int);

// 0x0x80431790 (address_range)
void EGG_Runtime_validate_80431790(int);

// 0x0x804317d8 (address_range)
void EGG_Runtime_validate_804317d8(int);

// 0x0x80431828 (address_range)
void EGG_Runtime_validate_80431828(int);

// 0x0x80431870 (address_range)
void EGG_Runtime_validate_80431870(int);

// 0x0x804318b0 (address_range)
void EGG_Runtime_validate_804318b0(int);

// 0x0x80432418 (address_range)
void EGG_Runtime_validate_80432418(int);

// 0x0x80432630 (address_range)
int EGG_Runtime_validate_80432630(int, int);

// 0x0x80432674 (address_range)
void EGG_Runtime_assertFail_80432674(void);

// 0x0x804326e8 (address_range)
void EGG_Runtime_validate_804326e8(int);

// 0x0x804327f4 (address_range)
void EGG_Runtime_validate_804327f4(u32);

// 0x0x8043287c (address_range)
u32 EGG_Runtime_validate_8043287c(u32);

// 0x0x80432914 (address_range)
int EGG_Runtime_validate_80432914(void);

// 0x0x80432a74 (address_range)
void EGG_Runtime_validate_80432a74(int);

// 0x0x80432b70 (address_range)
void EGG_Runtime_validate_80432b70(int);

// 0x0x80432e24 (address_range)
void rt_EGG_Runtime_80432e24(u32, int);

// 0x0x80432e74 (address_range)
void rt_EGG_Runtime_80432e74(int, u32);

// 0x0x80432e7c (address_range)
int EGG_Runtime_validate_80432e7c(int, int);

// 0x0x80432ee0 (address_range)
int EGG_Runtime_validate_80432ee0(int, int);

// 0x0x80432f44 (address_range)
int EGG_Runtime_validate_80432f44(int, int);

// 0x0x80432f84 (address_range)
int EGG_Runtime_validate_80432f84(int, int);

// 0x0x80432fe8 (address_range)
int EGG_Runtime_validate_80432fe8(int, int);

// 0x0x80433070 (address_range)
int EGG_Runtime_validate_80433070(int, int);

// 0x0x804330bc (address_range)
u32 EGG_Runtime_validate_804330bc(int);

// 0x0x80433170 (address_range)
u32 EGG_Runtime_validate_80433170(int);

// 0x0x8043324c (address_range)
void EGG_Runtime_validate_8043324c(int);

// 0x0x804333b0 (address_range)
void EGG_Runtime_validate_804333b0(int);

// 0x0x804335c0 (address_range)
void EGG_Runtime_assertFail_804335c0(void);

// 0x0x80433640 (address_range)
void EGG_Runtime_validate_80433640(int);

// 0x0x804336ac (address_range)
void EGG_Runtime_validate_804336ac(int);

// 0x0x80433728 (address_range)
void rt_EGG_Runtime_80433728(int);

// 0x0x80433790 (address_range)
void EGG_Runtime_validate_80433790(int);

// 0x0x8043383c (address_range)
void rt_EGG_Runtime_8043383c(int, int);

// 0x0x804338a4 (address_range)
void rt_EGG_Runtime_804338a4(void);

// 0x0x80434144 (address_range)
void EGG_Runtime_validate_80434144(u32, u32);

// 0x0x80434258 (address_range)
void rt_EGG_Runtime_80434258(int, u32, int);

// 0x0x804342fc (address_range)
void rt_EGG_Runtime_804342fc(int, u32);

// 0x0x80435334 (address_range)
void rt_EGG_Runtime_80435334(int, u32, u32);

// 0x0x80435b18 (address_range)
u32 rt_EGG_Runtime_80435b18(int);

// 0x0x80435b24 (address_range)
void EGG_Runtime_validate_80435b24(int, u32, int);

// 0x0x80435b40 (address_range)
void rt_EGG_Runtime_80435b40(void);

// 0x0x80435b44 (address_range)
void rt_EGG_Runtime_80435b44(int, u32, int);

// 0x0x80435b98 (address_range)
int rt_EGG_Runtime_80435b98(int);

// 0x0x80435ba0 (address_range)
void rt_EGG_Runtime_80435ba0(int, u32, int);

// 0x0x80435c34 (address_range)
int rt_EGG_Runtime_80435c34(int);

// 0x0x80435c40 (address_range)
void EGG_Runtime_validate_80435c40(int, int, int);

// 0x0x80435c60 (address_range)
int rt_EGG_Runtime_80435c60(int);

// 0x0x80435c68 (address_range)
void rt_EGG_Runtime_80435c68(int, u32, int, u32, u32);

// 0x0x80435c8c (address_range)
int rt_EGG_Runtime_80435c8c(int, int, int);

// 0x0x80435ca4 (address_range)
void rt_EGG_Runtime_80435ca4(int, int, int, int, int);

// 0x0x80435dd0 (address_range)
int rt_EGG_Runtime_80435dd0(int, int, int);

// 0x0x80435de8 (address_range)
void rt_EGG_Runtime_80435de8(int, int, int, int);

// 0x0x80435ed8 (address_range)
int rt_EGG_Runtime_80435ed8(int, int);

// 0x0x80435ee8 (address_range)
void rt_EGG_Runtime_80435ee8(int, int, int);

// 0x0x80435f1c (address_range)
int rt_EGG_Runtime_80435f1c(int);

// 0x0x80435f28 (address_range)
void rt_EGG_Runtime_80435f28(int, u32, int);

// 0x0x80435f40 (address_range)
u32 rt_EGG_Runtime_80435f40(int);

// 0x0x80435f4c (address_range)
void rt_EGG_Runtime_80435f4c(int, u32, int);

// 0x0x80435f64 (address_range)
u32 rt_EGG_Runtime_80435f64(int);

// 0x0x80435f70 (address_range)
void rt_EGG_Runtime_80435f70(int, int, int);

// 0x0x80435f90 (address_range)
u32 rt_EGG_Runtime_80435f90(int);

// 0x0x80435f9c (address_range)
void rt_EGG_Runtime_80435f9c(int, uint, int);

// 0x0x80435fbc (address_range)
u32 rt_EGG_Runtime_80435fbc(int);

// 0x0x80435fc8 (address_range)
void rt_EGG_Runtime_80435fc8(int, int, int);

// 0x0x80435fe4 (address_range)
int rt_EGG_Runtime_80435fe4(int);

// 0x0x80435ff0 (address_range)
void rt_EGG_Runtime_80435ff0(int, int, int);

// 0x0x8043600c (address_range)
int rt_EGG_Runtime_8043600c(int);

// 0x0x80436018 (address_range)
void rt_EGG_Runtime_80436018(int, u32, int);

// 0x0x80436030 (address_range)
u32 rt_EGG_Runtime_80436030(int);

// 0x0x8043603c (address_range)
void rt_EGG_Runtime_8043603c(int, u32, int);

// 0x0x80436054 (address_range)
u32 rt_EGG_Runtime_80436054(int);

// 0x0x80436060 (address_range)
void rt_EGG_Runtime_80436060(int, u32, int);

// 0x0x80436078 (address_range)
u32 rt_EGG_Runtime_80436078(int);

// 0x0x80436084 (address_range)
void rt_EGG_Runtime_80436084(int, u32, int);

// 0x0x8043609c (address_range)
u32 rt_EGG_Runtime_8043609c(int);

// 0x0x804360a8 (address_range)
void rt_EGG_Runtime_804360a8(int, u32, int);

// 0x0x804360c0 (address_range)
u32 rt_EGG_Runtime_804360c0(int);

// 0x0x804360cc (address_range)
void rt_EGG_Runtime_804360cc(int, u32, int);

// 0x0x804360e4 (address_range)
u32 rt_EGG_Runtime_804360e4(int);

// 0x0x804360f0 (address_range)
void rt_EGG_Runtime_804360f0(int, u32, int);

// 0x0x80436108 (address_range)
u32 rt_EGG_Runtime_80436108(int);

// 0x0x80436114 (address_range)
void rt_EGG_Runtime_80436114(int, u32, int);

// 0x0x8043612c (address_range)
u32 rt_EGG_Runtime_8043612c(int);

// 0x0x80436138 (address_range)
void rt_EGG_Runtime_80436138(int, u32, int);

// 0x0x80436150 (address_range)
u32 rt_EGG_Runtime_80436150(int);

// 0x0x8043615c (address_range)
void rt_EGG_Runtime_8043615c(int, u32, int);

// 0x0x80436174 (address_range)
u32 rt_EGG_Runtime_80436174(int);

// 0x0x80436180 (address_range)
void rt_EGG_Runtime_80436180(int, u32, int);

// 0x0x80436198 (address_range)
uint rt_EGG_Runtime_80436198(int);

// 0x0x804361b8 (address_range)
void rt_EGG_Runtime_804361b8(int, u32, int);

// 0x0x804361d0 (address_range)
uint rt_EGG_Runtime_804361d0(int);

// 0x0x804361f0 (address_range)
void rt_EGG_Runtime_804361f0(int, u32, int);

// 0x0x80436208 (address_range)
uint rt_EGG_Runtime_80436208(int);

// 0x0x80436228 (address_range)
void rt_EGG_Runtime_80436228(int, u32, int);

// 0x0x80436240 (address_range)
uint rt_EGG_Runtime_80436240(int);

// 0x0x80436260 (address_range)
void rt_EGG_Runtime_80436260(double, int, int);

// 0x0x80436278 (address_range)
double rt_EGG_Runtime_80436278(int);

// 0x0x80436298 (address_range)
void rt_EGG_Runtime_80436298(int, u32, int);

// 0x0x804362b0 (address_range)
uint rt_EGG_Runtime_804362b0(int);

// 0x0x804362d0 (address_range)
void rt_EGG_Runtime_804362d0(int, u32, int);

// 0x0x804362e8 (address_range)
uint rt_EGG_Runtime_804362e8(int);

// 0x0x80436308 (address_range)
void rt_EGG_Runtime_80436308(int, u32, int);

// 0x0x80436320 (address_range)
uint rt_EGG_Runtime_80436320(int);

// 0x0x80436340 (address_range)
void rt_EGG_Runtime_80436340(int, u32, int);

// 0x0x80436358 (address_range)
uint rt_EGG_Runtime_80436358(int);

// 0x0x80436378 (address_range)
void rt_EGG_Runtime_80436378(int, u32, int);

// 0x0x80436390 (address_range)
uint rt_EGG_Runtime_80436390(int);

// 0x0x804363b0 (address_range)
void rt_EGG_Runtime_804363b0(int, u32, int);

// 0x0x804363c8 (address_range)
uint rt_EGG_Runtime_804363c8(int);

// 0x0x804363e8 (address_range)
void rt_EGG_Runtime_804363e8(double, int, int);

// 0x0x80436400 (address_range)
double rt_EGG_Runtime_80436400(int);

// 0x0x80436420 (address_range)
void rt_EGG_Runtime_80436420(double, int, int);

// 0x0x80436438 (address_range)
double rt_EGG_Runtime_80436438(int);

// 0x0x80436458 (address_range)
void rt_EGG_Runtime_80436458(int, u16, int);

// 0x0x80436470 (address_range)
short rt_EGG_Runtime_80436470(int);

// 0x0x80436494 (address_range)
void rt_EGG_Runtime_80436494(int, uint, u16, int);

// 0x0x804364b4 (address_range)
short rt_EGG_Runtime_804364b4(int, int);

// 0x0x804364e0 (address_range)
void rt_EGG_Runtime_804364e0(int, uint, u16, int);

// 0x0x80436500 (address_range)
short rt_EGG_Runtime_80436500(int, int);

// 0x0x8043652c (address_range)
void rt_EGG_Runtime_8043652c(int, uint, u16, int);

// 0x0x8043654c (address_range)
short rt_EGG_Runtime_8043654c(int, int);

// 0x0x80436578 (address_range)
void rt_EGG_Runtime_80436578(int, uint, u16, int);

// 0x0x80436598 (address_range)
void rt_EGG_Runtime_80436598(int, int, int, uint, int);

// 0x0x804365c8 (address_range)
u32 rt_EGG_Runtime_804365c8(int, uint, uint);

// 0x0x804365e4 (address_range)
void rt_EGG_Runtime_804365e4(int, u32, int, int);

// 0x0x80436608 (address_range)
int rt_EGG_Runtime_80436608(int, int);

// 0x0x8043661c (address_range)
void rt_EGG_Runtime_8043661c(int, int, int);

// 0x0x8043663c (address_range)
u32 rt_EGG_Runtime_8043663c(int);

// 0x0x80436648 (address_range)
void rt_EGG_Runtime_80436648(int, int, int, int);

// 0x0x80436670 (address_range)
u32 rt_EGG_Runtime_80436670(int, int);

// 0x0x80436684 (address_range)
void rt_EGG_Runtime_80436684(int, int, int, int);

// 0x0x804366ac (address_range)
u32 rt_EGG_Runtime_804366ac(int, int);

// 0x0x804366c0 (address_range)
void rt_EGG_Runtime_804366c0(int, int, int, int);

// 0x0x804366e8 (address_range)
u32 rt_EGG_Runtime_804366e8(int, int);

// 0x0x804366fc (address_range)
void rt_EGG_Runtime_804366fc(int, int, int, int);

// 0x0x80436724 (address_range)
u32 rt_EGG_Runtime_80436724(int, int);

// 0x0x80436738 (address_range)
void rt_EGG_Runtime_80436738(int, int, int, int);

// 0x0x80436760 (address_range)
u32 rt_EGG_Runtime_80436760(int, int);

// 0x0x80436774 (address_range)
void rt_EGG_Runtime_80436774(int, int, int, int);

// 0x0x8043679c (address_range)
u32 rt_EGG_Runtime_8043679c(int, int);

// 0x0x804367b0 (address_range)
void rt_EGG_Runtime_804367b0(int, int, uint, int);

// 0x0x80436880 (address_range)
int rt_EGG_Runtime_80436880(int, int);

// 0x0x80436894 (address_range)
u32 rt_EGG_Runtime_80436894(int, int, u32);

// 0x0x804368d8 (address_range)
void rt_EGG_Runtime_804368d8(int, int, uint, int);

// 0x0x80436980 (address_range)
int rt_EGG_Runtime_80436980(int);

// 0x0x8043698c (address_range)
void rt_EGG_Runtime_8043698c(int, uint, uint, uint, int);

// 0x0x804369e8 (address_range)
u32 rt_EGG_Runtime_804369e8(u32);

// 0x0x804369f0 (address_range)
u32 rt_EGG_Runtime_804369f0(int);

// 0x0x804369f8 (address_range)
u32 rt_EGG_Runtime_804369f8(int);

// 0x0x80436a00 (address_range)
u32 rt_EGG_Runtime_80436a00(int, int);

// 0x0x80436a10 (address_range)
void rt_EGG_Runtime_80436a10(int, int, uint, int);

// 0x0x80436a6c (address_range)
void rt_EGG_Runtime_80436a6c(int, int, int);

// 0x0x80436aa4 (address_range)
int rt_EGG_Runtime_80436aa4(int);

// 0x0x80436ab0 (address_range)
void rt_EGG_Runtime_80436ab0(int, uint, int);

// 0x0x80436ad0 (address_range)
u32 rt_EGG_Runtime_80436ad0(int);

// 0x0x80436adc (address_range)
void rt_EGG_Runtime_80436adc(int, int);

// 0x0x80436afc (address_range)
void rt_EGG_Runtime_80436afc(u32, u32);

// 0x0x80436b20 (address_range)
void rt_EGG_Runtime_80436b20(int, int);

// 0x0x80436b94 (address_range)
void EGG_Runtime_validate_80436b94(int, int, u32, u32);

// 0x0x80436c68 (address_range)
void EGG_Runtime_validate_80436c68(int);

// 0x0x80436d88 (address_range)
void EGG_Runtime_validate_80436d88(u32);

// 0x0x80436dc4 (address_range)
void EGG_Runtime_validate_80436dc4(u32);

// 0x0x80436e64 (address_range)
void EGG_Runtime_validate_80436e64(u32);

// 0x0x80436fb8 (address_range)
void EGG_Runtime_validate_80436fb8(int, u32, u32);

// 0x0x80437278 (address_range)
void rt_EGG_Runtime_80437278(int, int, int, int);

// 0x0x80437660 (address_range)
void EGG_Runtime_validate_80437660(u32);

// 0x0x804376f0 (address_range)
uint rt_EGG_Runtime_804376f0(int, int);

// 0x0x804377bc (address_range)
u32 EGG_Runtime_validate_804377bc(int, u32, int, int);

// 0x0x80437994 (address_range)
int rt_EGG_Runtime_80437994(int, int, u32);

// 0x0x804379f4 (address_range)
void rt_EGG_Runtime_804379f4(int, int, int, u32);

// 0x0x80437ae8 (address_range)
void rt_EGG_Runtime_80437ae8(int, int, int, u32);

// 0x0x80437c58 (address_range)
int rt_EGG_Runtime_80437c58(int, int, u32);

// 0x0x80437f14 (address_range)
int rt_EGG_Runtime_80437f14(int);

// 0x0x80437fd4 (address_range)
int rt_EGG_Runtime_80437fd4(int);

// 0x0x804380b4 (address_range)
int rt_EGG_Runtime_804380b4(int);

// 0x0x804381d4 (address_range)
int rt_EGG_Runtime_804381d4(int);

// 0x0x80438284 (address_range)
void rt_EGG_Runtime_80438284(void);

// 0x0x80438374 (address_range)
double rt_EGG_Runtime_80438374(int);

// 0x0x804383dc (address_range)
void rt_EGG_Runtime_804383dc(int);

// 0x0x80438434 (address_range)
void rt_EGG_Runtime_80438434(int);

// 0x0x80438460 (address_range)
void rt_EGG_Runtime_80438460(int, uint);

// 0x0x804384b0 (address_range)
uint rt_EGG_Runtime_804384b0(int, uint);

// 0x0x80438520 (address_range)
void rt_EGG_Runtime_80438520(void);

// 0x0x80438578 (address_range)
void rt_EGG_Runtime_80438578(int);

// 0x0x804385cc (address_range)
void EGG_Runtime_validate_804385cc(int, int, int, uint, int);

// 0x0x804387b4 (address_range)
void EGG_Runtime_validate_804387b4(int);

// 0x0x80438910 (address_range)
void EGG_Runtime_validate_80438910(int, int, int);

// 0x0x80438a48 (address_range)
void EGG_Runtime_assertFail_80438a48(void);

// 0x0x80438afc (address_range)
void EGG_Runtime_validate_80438afc(int);

// 0x0x80438bac (address_range)
void EGG_Runtime_validate_80438bac(int, int, int, uint, int, char);

// 0x0x80438dec (address_range)
void EGG_Runtime_assertFail_80438dec(void);

// 0x0x80438e8c (address_range)
void EGG_Runtime_validate_80438e8c(int);

// 0x0x80438f28 (address_range)
void EGG_Runtime_validate_80438f28(int, int, int, uint, int);

// 0x0x804391bc (address_range)
void rt_EGG_Runtime_804391bc(int, int);

// 0x0x804392ac (address_range)
void EGG_Runtime_validate_804392ac(int);

// 0x0x804393cc (address_range)
void EGG_Runtime_validate_804393cc(int);

// 0x0x8043951c (address_range)
void EGG_Runtime_validate_8043951c(u32, u32);

// 0x0x80439544 (address_range)
void EGG_Runtime_validate_80439544(u32, u32);

// 0x0x8043956c (address_range)
void EGG_Runtime_validate_8043956c(u32, u32);

// 0x0x804395c8 (address_range)
u32 EGG_Runtime_validate_804395c8(u32, int);

// 0x0x80439690 (address_range)
void rt_EGG_Runtime_80439690(void);

// 0x0x80439918 (address_range)
u16 rt_EGG_Runtime_80439918(void);

// 0x0x80439934 (address_range)
u16 rt_EGG_Runtime_80439934(void);

// 0x0x80439954 (address_range)
void rt_EGG_Runtime_80439954(void);

// 0x0x80439b28 (address_range)
void EGG_Runtime_validate_80439b28(int);

// 0x0x80439bf8 (address_range)
void EGG_Runtime_assertFail_80439bf8(void);

// 0x0x80439cc8 (address_range)
void rt_EGG_Runtime_80439cc8(double, double, int);

// 0x0x80439e74 (address_range)
void EGG_Runtime_validate_80439e74(u32, u32, u32);

// 0x0x8043a078 (address_range)
u32 EGG_Runtime_validate_8043a078(u32);

// 0x0x8043a0dc (address_range)
u32 * EGG_Runtime_validate_8043a0dc(u32, int);

// 0x0x8043a1d0 (address_range)
void EGG_Runtime_validate_8043a1d0(int);

// 0x0x8043a32c (address_range)
void rt_EGG_Runtime_8043a32c(int);

// 0x0x8043a424 (address_range)
void rt_EGG_Runtime_8043a424(int);

// 0x0x8043a480 (address_range)
void rt_EGG_Runtime_8043a480(int);

// 0x0x8043a530 (address_range)
void EGG_Runtime_validate_8043a530(int);

// 0x0x8043a66c (address_range)
void rt_EGG_Runtime_8043a66c(void);

// 0x0x8043a974 (address_range)
void rt_EGG_Runtime_8043a974(double, float, float);

// 0x0x8043a990 (address_range)
void rt_EGG_Runtime_8043a990(int);

// 0x0x8043aa2c (address_range)
void EGG_Runtime_validate_8043aa2c(double);

// 0x0x8043aab4 (address_range)
void rt_EGG_Runtime_8043aab4(void);

// 0x0x8043aeb4 (address_range)
u32 EGG_Runtime_validate_8043aeb4(u32);

// 0x0x8043af80 (address_range)
void EGG_Runtime_validate_8043af80(int);

// 0x0x8043affc (address_range)
void EGG_Runtime_validate_8043affc(int);

// 0x0x8043b064 (address_range)
void EGG_Runtime_validate_8043b064(int);

// 0x0x8043b0cc (address_range)
void EGG_Runtime_validate_8043b0cc(int);

// 0x0x8043b158 (address_range)
void rt_EGG_Runtime_8043b158(int);

// 0x0x8043b1c4 (address_range)
void EGG_Runtime_assertFail_8043b1c4(void);

// 0x0x8043b314 (address_range)
void rt_EGG_Runtime_8043b314(int);

// 0x0x8043b398 (address_range)
void EGG_Runtime_validate_8043b398(int);

// 0x0x8043b454 (address_range)
void EGG_Runtime_assertFail_8043b454(void);

// 0x0x8043b4e0 (address_range)
void rt_EGG_Runtime_8043b4e0(void);

// 0x0x8043b7a8 (address_range)
u32 rt_EGG_Runtime_8043b7a8(int, int, float, u32);

// 0x0x8043b9f4 (address_range)
void EGG_Runtime_assertFail_8043b9f4(void);

// 0x0x8043bc14 (address_range)
u32 EGG_Runtime_validate_8043bc14(u32);

// 0x0x8043bca0 (address_range)
void EGG_Runtime_validate_8043bca0(int);

// 0x0x8043bd90 (address_range)
void rt_EGG_Runtime_8043bd90(int);

// 0x0x8043beec (address_range)
void EGG_Runtime_validate_8043beec(int);

// 0x0x8043bfec (address_range)
void rt_EGG_Runtime_8043bfec(void);

// 0x0x8043c258 (address_range)
u32 EGG_Runtime_validate_8043c258(u32);

// 0x0x8043c310 (address_range)
u32 * EGG_Runtime_validate_8043c310(u32, int);

// 0x0x8043c378 (address_range)
void EGG_Runtime_validate_8043c378(int);

// 0x0x8043c46c (address_range)
void rt_EGG_Runtime_8043c46c(void);

// 0x0x8043c608 (address_range)
void EGG_Runtime_assertFail_8043c608(void);

// 0x0x8043c7a8 (address_range)
void EGG_Runtime_assertFail_8043c7a8(void);

// 0x0x8043c988 (address_range)
u32 EGG_Runtime_validate_8043c988(u32);

// 0x0x8043c9ec (address_range)
void EGG_Runtime_validate_8043c9ec(int);

// 0x0x8043cbfc (address_range)
void EGG_Runtime_validate_8043cbfc(int);

// 0x0x8043ccfc (address_range)
void rt_EGG_Runtime_8043ccfc(void);

// 0x0x8043cf2c (address_range)
u32 EGG_Runtime_validate_8043cf2c(u32);

// 0x0x8043cfe4 (address_range)
u32 * EGG_Runtime_validate_8043cfe4(u32, int);

// 0x0x8043d04c (address_range)
void EGG_Runtime_validate_8043d04c(int);

// 0x0x8043d140 (address_range)
void EGG_Runtime_validate_8043d140(int, int);

// 0x0x8043d290 (address_range)
void EGG_Runtime_assertFail_8043d290(void);

// 0x0x8043d430 (address_range)
u32 * rt_EGG_Runtime_8043d430(u32);

// 0x0x8043d538 (address_range)
void EGG_Runtime_validate_8043d538(int);

// 0x0x8043d6b8 (address_range)
void rt_EGG_Runtime_8043d6b8(void);

// 0x0x8043dc84 (address_range)
u32 EGG_Runtime_validate_8043dc84(u32);

// 0x0x8043dd14 (address_range)
void EGG_Runtime_validate_8043dd14(int);

// 0x0x8043df2c (address_range)
void EGG_Runtime_assertFail_8043df2c(void);

// 0x0x8043df80 (address_range)
void rt_EGG_Runtime_8043df80(void);

// 0x0x8043e308 (address_range)
void EGG_Runtime_validate_8043e308(int, int);

// 0x0x8043e444 (address_range)
void EGG_Runtime_validate_8043e444(int);

// 0x0x8043e50c (address_range)
void EGG_Runtime_assertFail_8043e50c(void);

// 0x0x8043e574 (address_range)
void rt_EGG_Runtime_8043e574(int, u32);

// 0x0x8043e5f8 (address_range)
void rt_EGG_Runtime_8043e5f8(int, int);

// 0x0x8043e614 (address_range)
int EGG_Runtime_validate_8043e614(int, int);

// 0x0x8043e690 (address_range)
void EGG_Runtime_assertFail_8043e690(void);

// 0x0x8043e834 (address_range)
void rt_EGG_Runtime_8043e834(u32, int);

// 0x0x8043e87c (address_range)
void EGG_Runtime_assertFail_8043e87c(void);

// 0x0x8043e8f8 (address_range)
void EGG_Runtime_validate_8043e8f8(u32, int);

// 0x0x8043e9c8 (address_range)
void EGG_Runtime_assertFail_8043e9c8(void);

// 0x0x8043e9e8 (address_range)
void EGG_Runtime_assertFail_8043e9e8(void);

// 0x0x8043ea30 (address_range)
void rt_EGG_Runtime_8043ea30(void);

// 0x0x8043ea58 (address_range)
void EGG_Runtime_validate_8043ea58(int);

// 0x0x8043eb04 (address_range)
void EGG_Runtime_validate_8043eb04(u32);

// 0x0x8043ebf0 (address_range)
void EGG_Runtime_assertFail_8043ebf0(void);

// 0x0x8043ec24 (address_range)
void EGG_Runtime_validate_8043ec24(u32);

// 0x0x8043ec38 (address_range)
void EGG_Runtime_validate_8043ec38(u32);

// 0x0x8043ec90 (address_range)
void EGG_Runtime_assertFail_8043ec90(void);

// 0x0x8043edb0 (address_range)
void EGG_Runtime_assertFail_8043edb0(void);

// 0x0x8043ee08 (address_range)
void EGG_Runtime_assertFail_8043ee08(void);

// 0x0x8043f090 (address_range)
u32 EGG_Runtime_validate_8043f090(void);

// 0x0x8043f0e4 (address_range)
int rt_EGG_Runtime_8043f0e4(void);

// 0x0x8043f19c (address_range)
u32 EGG_Runtime_validate_8043f19c(int);

// 0x0x8043f3dc (address_range)
void EGG_Runtime_assertFail_8043f3dc(void);

// 0x0x8043f4ac (address_range)
void EGG_Runtime_validate_8043f4ac(u32);

// 0x0x8043f4c0 (address_range)
u32 EGG_Runtime_validate_8043f4c0(uint, byte, uint);

// 0x0x8043f740 (address_range)
u32 rt_EGG_Runtime_8043f740(void);

// 0x0x8043f7a0 (address_range)
void EGG_Runtime_assertFail_8043f7a0(void);

// 0x0x8043f87c (address_range)
u32 rt_EGG_Runtime_8043f87c(void);

// 0x0x8043f8b8 (address_range)
u32 EGG_Runtime_validate_8043f8b8(void);

// 0x0x8043fa88 (address_range)
void EGG_Runtime_assertFail_8043fa88(void);

// 0x0x8043fd4c (address_range)
void EGG_Runtime_assertFail_8043fd4c(void);

// 0x0x8043fe80 (address_range)
u32 EGG_Runtime_validate_8043fe80(u32);

// 0x0x8043fec8 (address_range)
u32 EGG_Runtime_validate_8043fec8(u32);

// 0x0x8043ff5c (address_range)
u32 rt_EGG_Runtime_8043ff5c(void);

// 0x0x8043ff6c (address_range)
void EGG_Runtime_assertFail_8043ff6c(void);

// 0x0x8043ffdc (address_range)
void EGG_Runtime_assertFail_8043ffdc(void);

// 0x0x80440048 (address_range)
void Memory_assertFail_80440048(void);

// 0x0x804401b4 (address_range)
void Memory_assertFail_804401b4(void);

// 0x0x80440580 (address_range)
u32 Memory_validate_80440580(void);

// 0x0x804406e4 (address_range)
void Memory_validate_804406e4(u32);

// 0x0x80440784 (address_range)
void Memory_assertFail_80440784(void);

// 0x0x804407a4 (address_range)
void Memory_assertFail_804407a4(void);

// 0x0x804407ec (address_range)
void Memory_assertFail_804407ec(void);

// 0x0x804408dc (address_range)
void Memory_assertFail_804408dc(void);

// 0x0x80440924 (address_range)
void Memory_assertFail_80440924(void);

// 0x0x80440958 (address_range)
void Memory_validate_80440958(u32);

// 0x0x8044096c (address_range)
void Memory_assertFail_8044096c(void);

// 0x0x804409a0 (address_range)
void Memory_validate_804409a0(u32);

// 0x0x804409b4 (address_range)
void Memory_validate_804409b4(u32, int);

// 0x0x80440a88 (address_range)
void Memory_assertFail_80440a88(void);

// 0x0x80440aa8 (address_range)
void Memory_assertFail_80440aa8(void);

// 0x0x80440af0 (address_range)
void rt_Memory_80440af0(void);

// 0x0x80440bbc (address_range)
void Memory_validate_80440bbc(int);

// 0x0x80440cec (address_range)
void Memory_assertFail_80440cec(void);

// 0x0x80440e38 (address_range)
void Memory_assertFail_80440e38(void);

// 0x0x80440e6c (address_range)
void Memory_validate_80440e6c(u32);

// 0x0x80440e80 (address_range)
void Memory_validate_80440e80(u32);

// 0x0x80440ed8 (address_range)
int rt_Memory_80440ed8(int);

// 0x0x80440fbc (address_range)
u32 rt_Memory_80440fbc(uint);

// 0x0x80440fe0 (address_range)
u32 Memory_validate_80440fe0(u32, u32);

// 0x0x80441180 (address_range)
u32 Memory_validate_80441180(u32);

// 0x0x804412c8 (address_range)
u32 Memory_validate_804412c8(u32, u32, u32, int);

// 0x0x8044145c (address_range)
u32 Memory_validate_8044145c(u32, u32, u32, u32, u32);

// 0x0x804416ac (address_range)
void Memory_validate_804416ac(u32, u32);

// 0x0x804417d4 (address_range)
u32 Memory_validate_804417d4(u32);

// 0x0x804418d0 (address_range)
u32 * rt_Memory_804418d0(u32);

// 0x0x80441914 (address_range)
int Memory_validate_80441914(int, int);

// 0x0x8044196c (address_range)
void rt_Memory_8044196c(u32);

// 0x0x80441a38 (address_range)
void Memory_assertFail_80441a38(void);

// 0x0x80441b08 (address_range)
void rt_Memory_80441b08(void);

// 0x0x80441b48 (address_range)
void rt_Memory_80441b48(void);

// 0x0x80441b90 (address_range)
void rt_Memory_80441b90(void);

// 0x0x80441c08 (address_range)
void Memory_validate_80441c08(u32);

// 0x0x80441c54 (address_range)
u32 Memory_validate_80441c54(u32);

// 0x0x80441cd0 (address_range)
void Memory_assertFail_80441cd0(void);

// 0x0x80442288 (address_range)
void Memory_validate_80442288(u32);

// 0x0x804427ac (address_range)
void Memory_assertFail_804427ac(void);

// 0x0x80442a30 (address_range)
void rt_Memory_80442a30(void);

// 0x0x80442b14 (address_range)
void rt_Memory_80442b14(u32);

// 0x0x80442b54 (address_range)
void rt_Memory_80442b54(void);

// 0x0x80442d90 (address_range)
void rt_Memory_80442d90(void);

// 0x0x80442e10 (address_range)
void rt_Memory_80442e10(void);

// 0x0x80442e94 (address_range)
u32 rt_Memory_80442e94(void);

// 0x0x80442eec (address_range)
void rt_Memory_80442eec(int);

// 0x0x80443024 (address_range)
u32 * rt_Memory_80443024(u32);

// 0x0x80443068 (address_range)
int Memory_validate_80443068(int, int);

// 0x0x804430c0 (address_range)
void rt_Memory_804430c0(u32);

// 0x0x804431d4 (address_range)
void Memory_assertFail_804431d4(void);

// 0x0x804432e4 (address_range)
void rt_Memory_804432e4(void);

// 0x0x80443318 (address_range)
void rt_Memory_80443318(void);

// 0x0x80443348 (address_range)
void rt_Memory_80443348(void);

// 0x0x8044339c (address_range)
void rt_Memory_8044339c(void);

// 0x0x804433e8 (address_range)
void rt_Memory_804433e8(void);

// 0x0x80443430 (address_range)
void Memory_assertFail_80443430(void);

// 0x0x804434e4 (address_range)
void Memory_validate_804434e4(u32);

// 0x0x80443550 (address_range)
void Memory_assertFail_80443550(void);

// 0x0x804435b8 (address_range)
int Memory_validate_804435b8(int, int);

// 0x0x804435f8 (address_range)
int rt_Memory_804435f8(int);

// 0x0x8044364c (address_range)
u32 rt_Memory_8044364c(int, uint);

// 0x0x804436a8 (address_range)
double rt_Memory_804436a8(int);

// 0x0x80443728 (address_range)
double rt_Memory_80443728(double, int);

// 0x0x804437ac (address_range)
void rt_Memory_804437ac(u32, int);

// 0x0x804437d4 (address_range)
void Memory_validate_804437d4(int, int);

// 0x0x804438a0 (address_range)
void rt_Memory_804438a0(u32, int);

// 0x0x80443918 (address_range)
void rt_Memory_80443918(u32, int, u32);

// 0x0x804439d8 (address_range)
u32 * rt_Memory_804439d8(u32, int);

// 0x0x80443a74 (address_range)
void rt_Memory_80443a74(void);

// 0x0x80443e90 (address_range)
void rt_Memory_80443e90(int);

// 0x0x80443f74 (address_range)
void Memory_assertFail_80443f74(void);

// 0x0x804440a4 (address_range)
void rt_Memory_804440a4(int);

// 0x0x8044412c (address_range)
void rt_Memory_8044412c(int, int);

// 0x0x80444610 (address_range)
void rt_Memory_80444610(int);

// 0x0x8044478c (address_range)
void rt_Memory_8044478c(int, uint, u32);

// 0x0x804448a8 (address_range)
int Memory_validate_804448a8(int, int);

// 0x0x804448e8 (address_range)
int Memory_validate_804448e8(int, int);

// 0x0x80444928 (address_range)
int Memory_validate_80444928(int, int);

// 0x0x80444968 (address_range)
void rt_Memory_80444968(u32, int);

// 0x0x80444a80 (address_range)
u32 rt_Memory_80444a80(int, int, int, int);

// 0x0x80444d14 (address_range)
u32 rt_Memory_80444d14(int);

// 0x0x80444f08 (address_range)
u32 rt_Memory_80444f08(int, int);

// 0x0x80445000 (address_range)
int rt_Memory_80445000(int, int, int, uint);

// 0x0x804452a4 (address_range)
u32 rt_Memory_804452a4(int);

// 0x0x80445384 (address_range)
u32 * rt_Memory_80445384(u32);

// 0x0x804453c8 (address_range)
int Memory_validate_804453c8(int, int);

// 0x0x80445470 (address_range)
void Memory_validate_80445470(u32, u32);

// 0x0x8044558c (address_range)
void rt_Memory_8044558c(double, int, int);

// 0x0x8044563c (address_range)
void Memory_validate_8044563c(int);

// 0x0x8044569c (address_range)
void Memory_assertFail_8044569c(void);

// 0x0x80446454 (address_range)
int Memory_validate_80446454(int, int);

// 0x0x80446494 (address_range)
int Memory_validate_80446494(int, int);

// 0x0x804464d4 (address_range)
void Memory_assertFail_804464d4(void);

// 0x0x80446c30 (address_range)
void Memory_validate_80446c30(int, u16);

// 0x0x80446e0c (address_range)
u32 rt_Memory_80446e0c(u32, int, u32, int, int, u32);

// 0x0x80446ec4 (address_range)
void Memory_validate_80446ec4(int);

// 0x0x80446f54 (address_range)
void Memory_validate_80446f54(int);

// 0x0x80446f5c (address_range)
void Memory_validate_80446f5c(int);

// 0x0x80446f84 (address_range)
void Memory_validate_80446f84(int);

// 0x0x80447060 (address_range)
u32 rt_Memory_80447060(int, int);

// 0x0x80447080 (address_range)
uint rt_Memory_80447080(int, int);

// 0x0x804470ec (address_range)
void Memory_validate_804470ec(int);

// 0x0x80447268 (address_range)
void Memory_validate_80447268(int);

// 0x0x804473a4 (address_range)
void Memory_validate_804473a4(int);

// 0x0x80447550 (address_range)
void rt_Memory_80447550(int, uint);

// 0x0x804475f8 (address_range)
void rt_Memory_804475f8(int);

// 0x0x80447680 (address_range)
void rt_Memory_80447680(void);

// 0x0x80447854 (address_range)
void Memory_validate_80447854(int, int);

// 0x0x804478d8 (address_range)
void rt_Memory_804478d8(int);

// 0x0x80447930 (address_range)
void Memory_validate_80447930(int, int);

// 0x0x80447a18 (address_range)
void Memory_validate_80447a18(u32, u32, u32);

// 0x0x80447ab0 (address_range)
int Memory_validate_80447ab0(int, int);

// 0x0x80447af0 (address_range)
void Memory_validate_80447af0(int);

// 0x0x80447c14 (address_range)
void Memory_validate_80447c14(int, int);

// 0x0x80447cec (address_range)
int Memory_validate_80447cec(int, int);

// 0x0x80447d2c (address_range)
void rt_Memory_80447d2c(int);

// 0x0x80447d74 (address_range)
double rt_Memory_80447d74(int);

// 0x0x80447dc4 (address_range)
void Memory_assertFail_80447dc4(void);

// 0x0x80448008 (address_range)
void rt_Memory_80448008(int, int, u32);

// 0x0x80448108 (address_range)
void rt_Memory_80448108(void);

// 0x0x80448258 (address_range)
void rt_Memory_80448258(void);

// 0x0x80448424 (address_range)
void rt_Memory_80448424(int);

// 0x0x804484b4 (address_range)
int Memory_validate_804484b4(int, int);

// 0x0x804484f4 (address_range)
void rt_Memory_804484f4(int);

// 0x0x8044853c (address_range)
double rt_Memory_8044853c(int);

// 0x0x8044858c (address_range)
void Memory_assertFail_8044858c(void);

// 0x0x804487d0 (address_range)
void rt_Memory_804487d0(int, int, u32);

// 0x0x804488d0 (address_range)
void rt_Memory_804488d0(void);

// 0x0x80448a20 (address_range)
void rt_Memory_80448a20(void);

// 0x0x80448bec (address_range)
void rt_Memory_80448bec(int);

// 0x0x80448c7c (address_range)
int Memory_validate_80448c7c(int, int);

// 0x0x80448cbc (address_range)
void rt_Memory_80448cbc(int);

// 0x0x80448d04 (address_range)
double rt_Memory_80448d04(int);

// 0x0x80448d54 (address_range)
void Memory_assertFail_80448d54(void);

// 0x0x80448f98 (address_range)
void rt_Memory_80448f98(int, int, u32);

// 0x0x80449098 (address_range)
void rt_Memory_80449098(void);

// 0x0x804491e8 (address_range)
void rt_Memory_804491e8(void);

// 0x0x804493b4 (address_range)
void rt_Memory_804493b4(int);

// 0x0x80449444 (address_range)
int Memory_validate_80449444(int, int);

// 0x0x80449484 (address_range)
void rt_Memory_80449484(int);

// 0x0x804494cc (address_range)
double rt_Memory_804494cc(int);

// 0x0x8044951c (address_range)
void Memory_assertFail_8044951c(void);

// 0x0x80449760 (address_range)
void rt_Memory_80449760(int, int, u32);

// 0x0x80449860 (address_range)
void rt_Memory_80449860(void);

// 0x0x804499b0 (address_range)
void rt_Memory_804499b0(void);

// 0x0x80449b7c (address_range)
void rt_Memory_80449b7c(int);

// 0x0x80449c0c (address_range)
int Memory_validate_80449c0c(int, int);

// 0x0x80449c4c (address_range)
void rt_Memory_80449c4c(u64, int, u32);

// 0x0x80449cfc (address_range)
void rt_Memory_80449cfc(int, u32);

// 0x0x80449d9c (address_range)
void Memory_assertFail_80449d9c(void);

// 0x0x80449fe0 (address_range)
void rt_Memory_80449fe0(int, int, u32);

// 0x0x8044a0e0 (address_range)
void rt_Memory_8044a0e0(void);

// 0x0x8044a230 (address_range)
void rt_Memory_8044a230(void);

// 0x0x8044a3fc (address_range)
void rt_Memory_8044a3fc(int);

// 0x0x8044a520 (address_range)
double Memory_validate_8044a520(int);

// 0x0x8044a5a4 (address_range)
u32 Memory_validate_8044a5a4(int);

// 0x0x8044a6c4 (address_range)
double Memory_validate_8044a6c4(int);

// 0x0x8044a748 (address_range)
u32 Memory_validate_8044a748(int);

// 0x0x8044a868 (address_range)
double Memory_validate_8044a868(int);

// 0x0x8044a8ec (address_range)
u32 Memory_validate_8044a8ec(int);

// 0x0x8044aa0c (address_range)
double Memory_validate_8044aa0c(int);

// 0x0x8044aa90 (address_range)
u32 Memory_validate_8044aa90(int);

// 0x0x8044abb0 (address_range)
double Memory_validate_8044abb0(int);

// 0x0x8044ac34 (address_range)
u32 Memory_validate_8044ac34(int);

// 0x0x8044acf0 (address_range)
void rt_Memory_8044acf0(double, int);

// 0x0x8044ad10 (address_range)
void rt_Memory_8044ad10(int, u32);

// 0x0x8044add0 (address_range)
void Memory_validate_8044add0(int, u32);

// 0x0x8044ae48 (address_range)
void rt_Memory_8044ae48(int, u32);

// 0x0x8044af18 (address_range)
void rt_Memory_8044af18(int, u32);

// 0x0x8044af78 (address_range)
int Memory_validate_8044af78(int, int);

// 0x0x8044afb8 (address_range)
u32 * Memory_validate_8044afb8(u32, u32, int, uint);

// 0x0x8044b22c (address_range)
void rt_Memory_8044b22c(u32, u32, uint);

// 0x0x8044b278 (address_range)
void rt_Memory_8044b278(u32, int, u32, uint);

// 0x0x8044b2dc (address_range)
int Memory_validate_8044b2dc(int, int);

// 0x0x8044b338 (address_range)
void Memory_validate_8044b338(uint, u32, u32);

// 0x0x8044b3c4 (address_range)
void Memory_validate_8044b3c4(uint, u32, u32);

// 0x0x8044b474 (address_range)
void Memory_validate_8044b474(u32, u32, int, u32);

// 0x0x8044b518 (address_range)
void Memory_assertFail_8044b518(void);

// 0x0x8044b720 (address_range)
uint rt_Memory_8044b720(u32, u32);

// 0x0x8044b784 (address_range)
void Memory_validate_8044b784(u32, u32);

// 0x0x8044b7c0 (address_range)
void Memory_validate_8044b7c0(int, int, uint, int, int, u32, u32);

// 0x0x8044ba20 (address_range)
void Memory_validate_8044ba20(int, u32, u32, u32, u32, u32, u32, u32);

// 0x0x8044bbf4 (address_range)
void rt_Memory_8044bbf4(int);

// 0x0x8044bc30 (address_range)
u32 Memory_validate_8044bc30(int, int, u32, u32, int, u32, int, int);

// 0x0x8044be08 (address_range)
void Memory_validate_8044be08(u32, u32, u32);

// 0x0x8044bef0 (address_range)
void Memory_validate_8044bef0(u32, u32, u32);

// 0x0x8044bfd8 (address_range)
void Memory_validate_8044bfd8(u32, u32, u32);

// 0x0x8044c038 (address_range)
void Memory_validate_8044c038(u32, u32, u32);

// 0x0x8044c098 (address_range)
void Memory_validate_8044c098(u32, u32, u32);

// 0x0x8044c16c (address_range)
void Memory_validate_8044c16c(u32, u32, u32);

// 0x0x8044c240 (address_range)
void Memory_validate_8044c240(u32, u32, u32);

// 0x0x8044c2a0 (address_range)
void Memory_validate_8044c2a0(int, u32, u32, u32, u32);

// 0x0x8044c514 (address_range)
void rt_Memory_8044c514(int, u32);

// 0x0x8044c5e4 (address_range)
void Memory_validate_8044c5e4(int);

// 0x0x8044c65c (address_range)
void Memory_validate_8044c65c(u32, u32);

// 0x0x8044c710 (address_range)
void rt_Memory_8044c710(int, uint);

// 0x0x8044c828 (address_range)
void rt_Memory_8044c828(int, uint);

// 0x0x8044c92c (address_range)
void rt_Memory_8044c92c(int, uint);

// 0x0x8044ca00 (address_range)
void rt_Memory_8044ca00(int, uint);

// 0x0x8044ca18 (address_range)
void rt_Memory_8044ca18(int, uint);

// 0x0x8044ca50 (address_range)
void rt_Memory_8044ca50(int, uint);

// 0x0x8044ca88 (address_range)
void rt_Memory_8044ca88(int, int, int, int);

// 0x0x8044cba4 (address_range)
void rt_Memory_8044cba4(int);

// 0x0x8044cc28 (address_range)
void rt_Memory_8044cc28(int);

// 0x0x8044ccb0 (address_range)
void Memory_validate_8044ccb0(u32, u32);

// 0x0x8044cd5c (address_range)
void Memory_validate_8044cd5c(u32, u32);

// 0x0x8044ce14 (address_range)
void Memory_validate_8044ce14(u32, u32, u32);

// 0x0x8044cf5c (address_range)
void rt_Memory_8044cf5c(int, int);

// 0x0x8044d168 (address_range)
void rt_Memory_8044d168(int);

// 0x0x8044d274 (address_range)
void rt_Memory_8044d274(int, uint);

// 0x0x8044d3dc (address_range)
void Memory_validate_8044d3dc(int);

// 0x0x8044d54c (address_range)
void Memory_validate_8044d54c(int);

// 0x0x8044d640 (address_range)
void Memory_validate_8044d640(int, u32);

// 0x0x8044d710 (address_range)
void Memory_validate_8044d710(int);

// 0x0x8044d810 (address_range)
void Memory_validate_8044d810(int, int);

// 0x0x8044d920 (address_range)
void Memory_validate_8044d920(int);

// 0x0x8044da04 (address_range)
void Memory_validate_8044da04(int, u32);

// 0x0x8044db0c (address_range)
void Memory_validate_8044db0c(int, u32, u32, u32, u32, u32, u32, u32, u32);

// 0x0x8044dca0 (address_range)
void Memory_validate_8044dca0(int, u32, u32, u32, u32);

// 0x0x8044de14 (address_range)
void Memory_validate_8044de14(int, u32, u32, u32, u32, u32);

// 0x0x8044df94 (address_range)
void Memory_validate_8044df94(int, u32);

// 0x0x8044e0a8 (address_range)
void Memory_validate_8044e0a8(u32, u32, u32);

// 0x0x8044e800 (address_range)
void Memory_validate_8044e800(u32, u32);

// 0x0x8044ef04 (address_range)
void Memory_assertFail_8044ef04(void);

// 0x0x8044ef9c (address_range)
ushort rt_Memory_8044ef9c(int);

// 0x0x8044efd4 (address_range)
void rt_Memory_8044efd4(int, int);

// 0x0x8044efe4 (address_range)
u32 rt_Memory_8044efe4(int);

// 0x0x8044f01c (address_range)
void Memory_validate_8044f01c(int);

// 0x0x8044f06c (address_range)
void rt_Memory_8044f06c(int, int);

// 0x0x8044f108 (address_range)
void Memory_validate_8044f108(int, u32, u32);

// 0x0x8044f13c (address_range)
void Memory_validate_8044f13c(u32);

// 0x0x8044f1e4 (address_range)
void rt_Memory_8044f1e4(int, u32);

// 0x0x8044f228 (address_range)
void Memory_validate_8044f228(int);

// 0x0x8044f304 (address_range)
void Memory_validate_8044f304(int);

// 0x0x8044f3c8 (address_range)
void Memory_validate_8044f3c8(int);

// 0x0x8044f474 (address_range)
void rt_Memory_8044f474(int);

// 0x0x8044f4f8 (address_range)
void rt_Memory_8044f4f8(int, u32, int);

// 0x0x8044f5b4 (address_range)
void rt_Memory_8044f5b4(double, int);

// 0x0x8044f5f0 (address_range)
void rt_Memory_8044f5f0(u32, u32, u32);

// 0x0x8044f5fc (address_range)
void Memory_validate_8044f5fc(int, u32, u32, u32);

// 0x0x8044f6dc (address_range)
void Memory_validate_8044f6dc(int, u32, u32);

// 0x0x8044f7b0 (address_range)
void Memory_validate_8044f7b0(int, u32, u32);

// 0x0x8044f884 (address_range)
void Memory_validate_8044f884(int, u32, u32, u32);

// 0x0x8044f964 (address_range)
void Memory_validate_8044f964(int, u32, u32);

// 0x0x8044fa38 (address_range)
void Memory_validate_8044fa38(int, u32, u32);

// 0x0x8044fb54 (address_range)
void Memory_validate_8044fb54(int, int, int, int);

// 0x0x8044fc08 (address_range)
int Memory_validate_8044fc08(int, int);

// 0x0x8044fc6c (address_range)
void Memory_validate_8044fc6c(int, int, int);

// 0x0x8044fd30 (address_range)
int Memory_validate_8044fd30(int, int);

// 0x0x8044fd70 (address_range)
void rt_Memory_8044fd70(void);

// 0x0x8044ff4c (address_range)
void Memory_validate_8044ff4c(int, int, int);

// 0x0x80450014 (address_range)
int HeapAllocator_validate_80450014(int, int);

// 0x0x80450068 (address_range)
int HeapAllocator_validate_80450068(int, int);

// 0x0x804500c8 (address_range)
void HeapAllocator_validate_804500c8(u32, u32, u32, char);

// 0x0x80450368 (address_range)
void HeapAllocator_validate_80450368(int, byte, int);

// 0x0x8045051c (address_range)
void HeapAllocator_validate_8045051c(int, int);

// 0x0x804506c4 (address_range)
void HeapAllocator_validate_804506c4(int);

// 0x0x8045081c (address_range)
void HeapAllocator_validate_8045081c(int, uint);

// 0x0x804509b0 (address_range)
void rt_HeapAllocator_804509b0(int, uint);

// 0x0x80450a40 (address_range)
void HeapAllocator_validate_80450a40(int);

// 0x0x80450d44 (address_range)
void HeapAllocator_validate_80450d44(u32);

// 0x0x80450e08 (address_range)
void HeapAllocator_validate_80450e08(int, int);

// 0x0x80450f2c (address_range)
void HeapAllocator_validate_80450f2c(u32, int);

// 0x0x8045100c (address_range)
void HeapAllocator_validate_8045100c(int);

// 0x0x804510b8 (address_range)
void HeapAllocator_validate_804510b8(int);

// 0x0x80451124 (address_range)
void HeapAllocator_assertFail_80451124(void);

// 0x0x80451170 (address_range)
void rt_HeapAllocator_80451170(void);

// 0x0x8045128c (address_range)
void rt_HeapAllocator_8045128c(void);

// 0x0x804513a8 (address_range)
void HeapAllocator_assertFail_804513a8(void);

// 0x0x80451668 (address_range)
int HeapAllocator_validate_80451668(int, int);

// 0x0x804516a8 (address_range)
void HeapAllocator_validate_804516a8(int);

// 0x0x804517a8 (address_range)
void rt_HeapAllocator_804517a8(int);

// 0x0x80451838 (address_range)
void HeapAllocator_validate_80451838(u32);

// 0x0x80451908 (address_range)
void rt_HeapAllocator_80451908(int);

// 0x0x80451960 (address_range)
void rt_HeapAllocator_80451960(int);

// 0x0x804519bc (address_range)
void HeapAllocator_validate_804519bc(u32);

// 0x0x80451a8c (address_range)
void rt_HeapAllocator_80451a8c(int);

// 0x0x80451af4 (address_range)
void rt_HeapAllocator_80451af4(int);

// 0x0x80451b60 (address_range)
int HeapAllocator_validate_80451b60(int, int);

// 0x0x80451ba0 (address_range)
int HeapAllocator_validate_80451ba0(int, int);

// 0x0x80451be0 (address_range)
int HeapAllocator_validate_80451be0(int, int);

// 0x0x80451c20 (address_range)
int HeapAllocator_validate_80451c20(int, int);

// 0x0x80451c60 (address_range)
void HeapAllocator_assertFail_80451c60(void);

// 0x0x80451d84 (address_range)
u32 HeapAllocator_validate_80451d84(int);

// 0x0x80451ddc (address_range)
int * HeapAllocator_validate_80451ddc(int, int);

// 0x0x80451e64 (address_range)
void HeapAllocator_assertFail_80451e64(void);

// 0x0x80451ea0 (address_range)
void HeapAllocator_validate_80451ea0(int, int);

// 0x0x80452078 (address_range)
void HeapAllocator_validate_80452078(int);

// 0x0x80452164 (address_range)
void HeapAllocator_validate_80452164(int);

// 0x0x80452190 (address_range)
void HeapAllocator_validate_80452190(int);

// 0x0x804521ec (address_range)
void HeapAllocator_validate_804521ec(int);

// 0x0x80452240 (address_range)
void HeapAllocator_validate_80452240(int);

// 0x0x804522c8 (address_range)
void HeapAllocator_validate_804522c8(int, int);

// 0x0x804525a8 (address_range)
void HeapAllocator_validate_804525a8(int);

// 0x0x80452854 (address_range)
void HeapAllocator_validate_80452854(int, u32);

// 0x0x804529dc (address_range)
void HeapAllocator_validate_804529dc(int, int);

// 0x0x80452bb0 (address_range)
void HeapAllocator_validate_80452bb0(int, int, int);

// 0x0x80452ca0 (address_range)
void rt_HeapAllocator_80452ca0(int, int);

// 0x0x80452d88 (address_range)
void rt_HeapAllocator_80452d88(u32, int, int);

// 0x0x80452e0c (address_range)
int * rt_HeapAllocator_80452e0c(int, u32, int, int, uint);

// 0x0x80453130 (address_range)
void HeapAllocator_validate_80453130(u32, u32, u32, u32);

// 0x0x804532dc (address_range)
void HeapAllocator_validate_804532dc(int);

// 0x0x804532e4 (address_range)
void HeapAllocator_validate_804532e4(int);

// 0x0x804532ec (address_range)
void HeapAllocator_validate_804532ec(int);

// 0x0x804532f4 (address_range)
void HeapAllocator_validate_804532f4(int);

// 0x0x80453304 (address_range)
void HeapAllocator_validate_80453304(int);

// 0x0x80453394 (address_range)
void HeapAllocator_validate_80453394(int);

// 0x0x804533fc (address_range)
void HeapAllocator_validate_804533fc(int, int);

// 0x0x80453514 (address_range)
void HeapAllocator_validate_80453514(int);

// 0x0x8045361c (address_range)
void HeapAllocator_validate_8045361c(int);

// 0x0x80453798 (address_range)
void HeapAllocator_validate_80453798(int);

// 0x0x804538bc (address_range)
void HeapAllocator_validate_804538bc(int);

// 0x0x80453908 (address_range)
void HeapAllocator_validate_80453908(int, int);

// 0x0x80453958 (address_range)
void HeapAllocator_validate_80453958(int, int);

// 0x0x804539a4 (address_range)
void HeapAllocator_validate_804539a4(u32, int, u32, u32);

// 0x0x80453a04 (address_range)
void HeapAllocator_validate_80453a04(u32);

// 0x0x80453ad0 (address_range)
void HeapAllocator_validate_80453ad0(int, u32, u32, u32, int, int);

// 0x0x80453c08 (address_range)
void rt_HeapAllocator_80453c08(void);

// 0x0x80453d94 (address_range)
void HeapAllocator_validate_80453d94(int, int, int);

// 0x0x80453ef8 (address_range)
int HeapAllocator_validate_80453ef8(int, int);

// 0x0x80453f58 (address_range)
int HeapAllocator_validate_80453f58(int, int);

// 0x0x80453f98 (address_range)
int HeapAllocator_validate_80453f98(int, int);

// 0x0x80453fd8 (address_range)
void HeapAllocator_assertFail_80453fd8(void);

// 0x0x8045402c (address_range)
u32 HeapAllocator_validate_8045402c(u32);

// 0x0x80454098 (address_range)
void HeapAllocator_assertFail_80454098(void);

// 0x0x804540ec (address_range)
u32 * HeapAllocator_validate_804540ec(u32, int);

// 0x0x804541c8 (address_range)
void rt_HeapAllocator_804541c8(int);

// 0x0x8045420c (address_range)
void rt_HeapAllocator_8045420c(int);

// 0x0x80454338 (address_range)
void HeapAllocator_assertFail_80454338(void);

// 0x0x80454404 (address_range)
u32 * HeapAllocator_validate_80454404(u32, int);

// 0x0x80454480 (address_range)
void rt_HeapAllocator_80454480(int);

// 0x0x804544dc (address_range)
u32 * HeapAllocator_validate_804544dc(u32, int);

// 0x0x8045455c (address_range)
void HeapAllocator_assertFail_8045455c(void);

// 0x0x804546c0 (address_range)
void HeapAllocator_assertFail_804546c0(void);

// 0x0x80454708 (address_range)
void HeapAllocator_assertFail_80454708(void);

// 0x0x80454734 (address_range)
void HeapAllocator_assertFail_80454734(void);

// 0x0x804547fc (address_range)
void HeapAllocator_assertFail_804547fc(void);

// 0x0x8045489c (address_range)
void HeapAllocator_validate_8045489c(int);

// 0x0x80454984 (address_range)
void HeapAllocator_assertFail_80454984(void);

// 0x0x80454a80 (address_range)
void HeapAllocator_assertFail_80454a80(void);

// 0x0x80454b58 (address_range)
void HeapAllocator_assertFail_80454b58(void);

// 0x0x80454cdc (address_range)
void HeapAllocator_validate_80454cdc(int);

// 0x0x80454d14 (address_range)
void rt_HeapAllocator_80454d14(uint);

// 0x0x80454d50 (address_range)
void HeapAllocator_assertFail_80454d50(void);

// 0x0x80454dd0 (address_range)
void rt_HeapAllocator_80454dd0(void);

// 0x0x80454e34 (address_range)
void HeapAllocator_validate_80454e34(u32, int);

// 0x0x80454e84 (address_range)
void HeapAllocator_validate_80454e84(int);

// 0x0x80454f88 (address_range)
void HeapAllocator_validate_80454f88(u32);

// 0x0x80455008 (address_range)
void HeapAllocator_validate_80455008(u32);

// 0x0x804550f0 (address_range)
void HeapAllocator_assertFail_804550f0(void);

// 0x0x8045515c (address_range)
void HeapAllocator_assertFail_8045515c(void);

// 0x0x804551b4 (address_range)
void HeapAllocator_assertFail_804551b4(void);

// 0x0x8045520c (address_range)
void HeapAllocator_validate_8045520c(int);

// 0x0x80455350 (address_range)
void rt_HeapAllocator_80455350(void);

// 0x0x80455360 (address_range)
void rt_HeapAllocator_80455360(u32);

// 0x0x80455394 (address_range)
void HeapAllocator_validate_80455394(int, int);

// 0x0x804553e8 (address_range)
void rt_HeapAllocator_804553e8(void);

// 0x0x8045544c (address_range)
u32 * HeapAllocator_validate_8045544c(u32, int);

// 0x0x804554c4 (address_range)
void HeapAllocator_validate_804554c4(int, u32, int);

// 0x0x8045553c (address_range)
void HeapAllocator_assertFail_8045553c(void);

// 0x0x804557e8 (address_range)
int HeapAllocator_validate_804557e8(int, int);

// 0x0x80455828 (address_range)
int HeapAllocator_validate_80455828(int, int);

// 0x0x80455868 (address_range)
int HeapAllocator_validate_80455868(int, int);

// 0x0x804558a8 (address_range)
int HeapAllocator_validate_804558a8(int, int);

// 0x0x804558e8 (address_range)
void rt_HeapAllocator_804558e8(void);

// 0x0x804559d8 (address_range)
void rt_HeapAllocator_804559d8(void);

// 0x0x80455ac0 (address_range)
void rt_HeapAllocator_80455ac0(void);

// 0x0x80455ba8 (address_range)
void rt_HeapAllocator_80455ba8(void);

// 0x0x80455c90 (address_range)
void rt_HeapAllocator_80455c90(u32, u32, int, u32);

// 0x0x80455d40 (address_range)
void rt_HeapAllocator_80455d40(u32, u32, int);

// 0x0x80455df0 (address_range)
void rt_HeapAllocator_80455df0(u32, u32, int);

// 0x0x80455ea0 (address_range)
void rt_HeapAllocator_80455ea0(u32, u32, int, u32);

// 0x0x80455f08 (address_range)
void rt_HeapAllocator_80455f08(u32, u32, int);

// 0x0x80455f98 (address_range)
void rt_HeapAllocator_80455f98(u32, int, u32, int);

// 0x0x80456050 (address_range)
void rt_HeapAllocator_80456050(u32, u32, int);

// 0x0x804560d8 (address_range)
void rt_HeapAllocator_804560d8(u32, u32, int);

// 0x0x8045617c (address_range)
void rt_HeapAllocator_8045617c(u32, int);

// 0x0x80456204 (address_range)
void rt_HeapAllocator_80456204(void);

// 0x0x804562a4 (address_range)
void HeapAllocator_assertFail_804562a4(void);

// 0x0x80456390 (address_range)
int HeapAllocator_validate_80456390(int, int);

// 0x0x804563d0 (address_range)
int HeapAllocator_validate_804563d0(int, int);

// 0x0x80456410 (address_range)
void HeapAllocator_assertFail_80456410(void);

// 0x0x80456544 (address_range)
void HeapAllocator_assertFail_80456544(void);

// 0x0x80456678 (address_range)
void HeapAllocator_assertFail_80456678(void);

// 0x0x804568d8 (address_range)
void rt_HeapAllocator_804568d8(int);

// 0x0x80456940 (address_range)
void rt_HeapAllocator_80456940(int);

// 0x0x804569c0 (address_range)
void rt_HeapAllocator_804569c0(int);

// 0x0x80456adc (address_range)
void rt_HeapAllocator_80456adc(int);

// 0x0x80456b58 (address_range)
void rt_HeapAllocator_80456b58(int, int);

// 0x0x80456c8c (address_range)
void HeapAllocator_validate_80456c8c(int, u32, u32);

// 0x0x80456ce4 (address_range)
void HeapAllocator_validate_80456ce4(u32, u32, u32);

// 0x0x80456d64 (address_range)
void rt_HeapAllocator_80456d64(int, u32, u32);

// 0x0x80456dd4 (address_range)
void rt_HeapAllocator_80456dd4(float, float, float);

// 0x0x80456e50 (address_range)
int HeapAllocator_validate_80456e50(int, int);

// 0x0x80456e90 (address_range)
u32 * rt_HeapAllocator_80456e90(u32);

// 0x0x80456ecc (address_range)
int HeapAllocator_validate_80456ecc(int, int);

// 0x0x80456f2c (address_range)
int HeapAllocator_validate_80456f2c(int, int);

// 0x0x80456f88 (address_range)
int HeapAllocator_validate_80456f88(int, int);

// 0x0x80456fec (address_range)
int rt_HeapAllocator_80456fec(int);

// 0x0x8045707c (address_range)
int HeapAllocator_validate_8045707c(int, int);

// 0x0x804570bc (address_range)
void rt_HeapAllocator_804570bc(int);

// 0x0x804570d0 (address_range)
void HeapAllocator_validate_804570d0(int);

// 0x0x8045726c (address_range)
u32 rt_HeapAllocator_8045726c(int);

// 0x0x80457298 (address_range)
void rt_HeapAllocator_80457298(void);

// 0x0x804572fc (address_range)
void rt_HeapAllocator_804572fc(void);

// 0x0x80457774 (address_range)
void HeapAllocator_validate_80457774(int);

// 0x0x804577a8 (address_range)
void HeapAllocator_validate_804577a8(int);

// 0x0x804578b8 (address_range)
void rt_HeapAllocator_804578b8(int);

// 0x0x80457988 (address_range)
void rt_HeapAllocator_80457988(void);

// 0x0x80457a04 (address_range)
void rt_HeapAllocator_80457a04(void);

// 0x0x80457a5c (address_range)
void HeapAllocator_validate_80457a5c(int, u32);

// 0x0x80457c88 (address_range)
void rt_HeapAllocator_80457c88(u32, u32);

// 0x0x80457cd4 (address_range)
void rt_HeapAllocator_80457cd4(u32, u32);

// 0x0x80457d20 (address_range)
void rt_HeapAllocator_80457d20(u32, u32);

// 0x0x80457d84 (address_range)
void rt_HeapAllocator_80457d84(int, u32);

// 0x0x80457eb8 (address_range)
void rt_HeapAllocator_80457eb8(void);

// 0x0x80457f24 (address_range)
void HeapAllocator_validate_80457f24(int);

// 0x0x8045809c (address_range)
void rt_HeapAllocator_8045809c(int, int);

// 0x0x804580d8 (address_range)
void HeapAllocator_validate_804580d8(int);

// 0x0x80458278 (address_range)
u32 rt_HeapAllocator_80458278(int);

// 0x0x80458340 (address_range)
void rt_HeapAllocator_80458340(int, int);

// 0x0x8045837c (address_range)
void rt_HeapAllocator_8045837c(u32, u32);

// 0x0x804583fc (address_range)
void rt_HeapAllocator_804583fc(int, int);

// 0x0x80458438 (address_range)
void rt_HeapAllocator_80458438(u32, u32);

// 0x0x804584b4 (address_range)
void rt_HeapAllocator_804584b4(void);

// 0x0x804587c8 (address_range)
u32 HeapAllocator_validate_804587c8(int);

// 0x0x80458960 (address_range)
void rt_HeapAllocator_80458960(int, int);

// 0x0x8045899c (address_range)
void rt_HeapAllocator_8045899c(int, int);

// 0x0x804589d8 (address_range)
void rt_HeapAllocator_804589d8(u32, u32);

// 0x0x80458a54 (address_range)
u32 HeapAllocator_validate_80458a54(int);

// 0x0x80458c88 (address_range)
void rt_HeapAllocator_80458c88(int, int);

// 0x0x80458cc4 (address_range)
void rt_HeapAllocator_80458cc4(u32, u32);

// 0x0x80458d44 (address_range)
void rt_HeapAllocator_80458d44(u32, u32);

// 0x0x80458dc0 (address_range)
void rt_HeapAllocator_80458dc0(int);

// 0x0x80458fd4 (address_range)
void HeapAllocator_assertFail_80458fd4(void);

// 0x0x804593ec (address_range)
void rt_HeapAllocator_804593ec(int, short, u32);

// 0x0x80459494 (address_range)
void rt_HeapAllocator_80459494(int, u32);

// 0x0x80459538 (address_range)
void rt_HeapAllocator_80459538(int, u32);

// 0x0x804595dc (address_range)
void rt_HeapAllocator_804595dc(int, u32);

// 0x0x80459698 (address_range)
void rt_HeapAllocator_80459698(int, u32);

// 0x0x8045973c (address_range)
bool rt_HeapAllocator_8045973c(int);

// 0x0x80459808 (address_range)
void HeapAllocator_validate_80459808(int);

// 0x0x804598b4 (address_range)
void rt_HeapAllocator_804598b4(void);

// 0x0x80459a6c (address_range)
void HeapAllocator_validate_80459a6c(int, u32);

// 0x0x80459ac4 (address_range)
void HeapAllocator_validate_80459ac4(u32, u32);

// 0x0x80459bbc (address_range)
void HeapAllocator_validate_80459bbc(int);

// 0x0x80459c4c (address_range)
int rt_HeapAllocator_80459c4c(u32, int);

// 0x0x80459cd0 (address_range)
int rt_HeapAllocator_80459cd0(u32, int, int);

// 0x0x80459d6c (address_range)
u32 rt_HeapAllocator_80459d6c(int);

// 0x0x80459e88 (address_range)
int HeapAllocator_validate_80459e88(int, int);

// 0x0x80459ec8 (address_range)
int HeapAllocator_validate_80459ec8(int, int);

// 0x0x80459f08 (address_range)
int HeapAllocator_validate_80459f08(int, int);

// 0x0x80459f84 (address_range)
int rt_HeapAllocator_80459f84(int);

// 0x0x80459fd0 (address_range)
int HeapAllocator_validate_80459fd0(int, int);

// 0x0x8045a010 (address_range)
void rt_HeapAllocator_8045a010(int);

// 0x0x8045a020 (address_range)
void rt_HeapAllocator_8045a020(int, int);

// 0x0x8045a190 (address_range)
void rt_HeapAllocator_8045a190(int);

// 0x0x8045a350 (address_range)
void rt_HeapAllocator_8045a350(int, int);

// 0x0x8045a3f8 (address_range)
void rt_HeapAllocator_8045a3f8(int, int);

// 0x0x8045a4a0 (address_range)
void HeapAllocator_validate_8045a4a0(u32, int, int);

// 0x0x8045a5bc (address_range)
void HeapAllocator_validate_8045a5bc(u32, int);

// 0x0x8045a6b8 (address_range)
void rt_HeapAllocator_8045a6b8(int);

// 0x0x8045a748 (address_range)
void HeapAllocator_validate_8045a748(u32, int);

// 0x0x8045a84c (address_range)
int HeapAllocator_validate_8045a84c(int, int);

// 0x0x8045a88c (address_range)
void HeapAllocator_assertFail_8045a88c(void);

// 0x0x8045aaf8 (address_range)
int rt_HeapAllocator_8045aaf8(int);

// 0x0x8045ab3c (address_range)
void rt_HeapAllocator_8045ab3c(int);

// 0x0x8045ab60 (address_range)
void rt_HeapAllocator_8045ab60(void);

// 0x0x8045ae1c (address_range)
void rt_HeapAllocator_8045ae1c(int);

// 0x0x8045af58 (address_range)
void rt_HeapAllocator_8045af58(int, u32);

// 0x0x8045b070 (address_range)
void HeapAllocator_validate_8045b070(u32, int);

// 0x0x8045b170 (address_range)
void rt_HeapAllocator_8045b170(int);

// 0x0x8045b284 (address_range)
int HeapAllocator_validate_8045b284(int, int);

// 0x0x8045b2c4 (address_range)
int rt_HeapAllocator_8045b2c4(int, u32, u32);

// 0x0x8045b31c (address_range)
int HeapAllocator_validate_8045b31c(int, int);

// 0x0x8045b374 (address_range)
void HeapAllocator_validate_8045b374(int);

// 0x0x8045b5e4 (address_range)
int rt_HeapAllocator_8045b5e4(int, u32, u32);

// 0x0x8045b660 (address_range)
void rt_HeapAllocator_8045b660(u32, u32);

// 0x0x8045b6a8 (address_range)
void rt_HeapAllocator_8045b6a8(int, u32, u32, u32);

// 0x0x8045b704 (address_range)
void rt_HeapAllocator_8045b704(int);

// 0x0x8045b750 (address_range)
void rt_HeapAllocator_8045b750(int);

// 0x0x8045b794 (address_range)
void rt_HeapAllocator_8045b794(int);

// 0x0x8045b7d8 (address_range)
void rt_HeapAllocator_8045b7d8(int);

// 0x0x8045b854 (address_range)
void HeapAllocator_validate_8045b854(u32, u32);

// 0x0x8045b8b4 (address_range)
void rt_HeapAllocator_8045b8b4(int, int);

// 0x0x8045b950 (address_range)
void rt_HeapAllocator_8045b950(int);

// 0x0x8045ba08 (address_range)
void rt_HeapAllocator_8045ba08(void);

// 0x0x8045bac4 (address_range)
void rt_HeapAllocator_8045bac4(int);

// 0x0x8045bb40 (address_range)
void rt_HeapAllocator_8045bb40(int);

// 0x0x8045bbb4 (address_range)
void rt_HeapAllocator_8045bbb4(int);

// 0x0x8045bc38 (address_range)
void rt_HeapAllocator_8045bc38(int);

// 0x0x8045bc98 (address_range)
void HeapAllocator_assertFail_8045bc98(void);

// 0x0x8045bdac (address_range)
void HeapAllocator_assertFail_8045bdac(void);

// 0x0x8045bf10 (address_range)
void HeapAllocator_validate_8045bf10(int, int);

// 0x0x8045bfd4 (address_range)
int HeapAllocator_validate_8045bfd4(int, int);

// 0x0x8045c054 (address_range)
void rt_HeapAllocator_8045c054(int, u32);

// 0x0x8045c0e8 (address_range)
void rt_HeapAllocator_8045c0e8(void);

// 0x0x8045c368 (address_range)
void rt_HeapAllocator_8045c368(int, u32);

// 0x0x8045c3fc (address_range)
void rt_HeapAllocator_8045c3fc(int);

// 0x0x8045c548 (address_range)
void rt_HeapAllocator_8045c548(int);

// 0x0x8045c5c0 (address_range)
void rt_HeapAllocator_8045c5c0(int);

// 0x0x8045c638 (address_range)
void rt_HeapAllocator_8045c638(int, u32);

// 0x0x8045c6c0 (address_range)
int rt_HeapAllocator_8045c6c0(int, u32);

// 0x0x8045c710 (address_range)
void HeapAllocator_validate_8045c710(int);

// 0x0x8045c890 (address_range)
int rt_HeapAllocator_8045c890(int, u32);

// 0x0x8045c8e0 (address_range)
void HeapAllocator_validate_8045c8e0(int);

// 0x0x8045caa8 (address_range)
int rt_HeapAllocator_8045caa8(int, u32);

// 0x0x8045cb40 (address_range)
int HeapAllocator_validate_8045cb40(int, int);

// 0x0x8045cb80 (address_range)
int HeapAllocator_validate_8045cb80(int, int);

// 0x0x8045cbe8 (address_range)
void rt_HeapAllocator_8045cbe8(int, u32);

// 0x0x8045cc5c (address_range)
void rt_HeapAllocator_8045cc5c(int);

// 0x0x8045ccd8 (address_range)
void rt_HeapAllocator_8045ccd8(void);

// 0x0x8045cfa4 (address_range)
void HeapAllocator_validate_8045cfa4(u32, u32);

// 0x0x8045d0e4 (address_range)
void HeapAllocator_validate_8045d0e4(int, int, int);

// 0x0x8045d210 (address_range)
void rt_HeapAllocator_8045d210(int, u32);

// 0x0x8045d284 (address_range)
void rt_HeapAllocator_8045d284(int);

// 0x0x8045d358 (address_range)
void rt_HeapAllocator_8045d358(int);

// 0x0x8045d3ac (address_range)
void rt_HeapAllocator_8045d3ac(int);

// 0x0x8045d400 (address_range)
void rt_HeapAllocator_8045d400(int, u32);

// 0x0x8045d468 (address_range)
int rt_HeapAllocator_8045d468(int, u32);

// 0x0x8045d50c (address_range)
int HeapAllocator_validate_8045d50c(int, int);

// 0x0x8045d54c (address_range)
void HeapAllocator_validate_8045d54c(u32, u32);

// 0x0x8045d5ac (address_range)
void HeapAllocator_validate_8045d5ac(u32);

// 0x0x8045d67c (address_range)
int HeapAllocator_validate_8045d67c(int, int);

// 0x0x8045d6e4 (address_range)
int HeapAllocator_validate_8045d6e4(int, int);

// 0x0x8045d724 (address_range)
int HeapAllocator_validate_8045d724(int, int);

// 0x0x8045d7bc (address_range)
void HeapAllocator_validate_8045d7bc(u32);

// 0x0x8045d834 (address_range)
int HeapAllocator_validate_8045d834(int, int);

// 0x0x8045d874 (address_range)
void rt_HeapAllocator_8045d874(void);

// 0x0x8045d95c (address_range)
void rt_HeapAllocator_8045d95c(void);

// 0x0x8045d9b4 (address_range)
void rt_HeapAllocator_8045d9b4(int, uint, u32, u32, uint);

// 0x0x8045db24 (address_range)
void rt_HeapAllocator_8045db24(u32, u32, u32, u32, u32);

// 0x0x8045db80 (address_range)
void rt_HeapAllocator_8045db80(int, uint, uint);

// 0x0x8045dc54 (address_range)
void HeapAllocator_assertFail_8045dc54(void);

// 0x0x8045e074 (address_range)
void rt_HeapAllocator_8045e074(void);

// 0x0x8045e144 (address_range)
void rt_HeapAllocator_8045e144(void);

// 0x0x8045e3d4 (address_range)
u32 rt_HeapAllocator_8045e3d4(u32, uint, u32, uint);

// 0x0x8045e4bc (address_range)
void rt_HeapAllocator_8045e4bc(void);

// 0x0x8045e6e0 (address_range)
void rt_HeapAllocator_8045e6e0(int, uint);

// 0x0x8045e760 (address_range)
void rt_HeapAllocator_8045e760(int, uint);

// 0x0x8045e98c (address_range)
void rt_HeapAllocator_8045e98c(int, uint);

// 0x0x8045ea40 (address_range)
void rt_HeapAllocator_8045ea40(void);

// 0x0x8045ff74 (address_range)
void HeapAllocator_validate_8045ff74(u32, u32, u32, u32);

// 0x0x8045fff8 (address_range)
void rt_HeapAllocator_8045fff8(void);

// 0x0x80460484 (address_range)
void rt_MathUtil_80460484(void);

// 0x0x8046064c (address_range)
void rt_MathUtil_8046064c(int);

// 0x0x804606d4 (address_range)
void rt_MathUtil_804606d4(int, int, int);

// 0x0x804607c0 (address_range)
u32 rt_MathUtil_804607c0(u32, u32, u32, int);

// 0x0x80460844 (address_range)
int MathUtil_validate_80460844(int, int);

// 0x0x80460884 (address_range)
void rt_MathUtil_80460884(void);

// 0x0x80460b24 (address_range)
void rt_MathUtil_80460b24(void);

// 0x0x80460eac (address_range)
void rt_MathUtil_80460eac(void);

// 0x0x80460f54 (address_range)
void rt_MathUtil_80460f54(int);

// 0x0x80460fe8 (address_range)
void rt_MathUtil_80460fe8(int, uint, int);

// 0x0x80461160 (address_range)
void rt_MathUtil_80461160(void);

// 0x0x80461794 (address_range)
void MathUtil_validate_80461794(u32, u32, int);

// 0x0x804617cc (address_range)
void MathUtil_assertFail_804617cc(void);

// 0x0x80461de4 (address_range)
void rt_MathUtil_80461de4(int, int, int);

// 0x0x80461e70 (address_range)
void rt_MathUtil_80461e70(void);

// 0x0x8046219c (address_range)
void rt_MathUtil_8046219c(void);

// 0x0x80462324 (address_range)
void rt_MathUtil_80462324(int);

// 0x0x80462430 (address_range)
u32 rt_MathUtil_80462430(int);

// 0x0x80462474 (address_range)
u32 rt_MathUtil_80462474(int);

// 0x0x804624ac (address_range)
u32 rt_MathUtil_804624ac(int, int);

// 0x0x80462644 (address_range)
u32 rt_MathUtil_80462644(int, u32);

// 0x0x804626b4 (address_range)
void rt_MathUtil_804626b4(u32, u32, int);

// 0x0x80462770 (address_range)
void rt_MathUtil_80462770(u32, int);

// 0x0x8046278c (address_range)
u32 rt_MathUtil_8046278c(int, u32);

// 0x0x8046283c (address_range)
u32 rt_MathUtil_8046283c(int);

// 0x0x8046288c (address_range)
u32 rt_MathUtil_8046288c(int, u32);

// 0x0x80462918 (address_range)
u32 rt_MathUtil_80462918(int, u32);

// 0x0x804629a4 (address_range)
u32 rt_MathUtil_804629a4(int);

// 0x0x80462a08 (address_range)
u32 rt_MathUtil_80462a08(int, u32);

// 0x0x80462a74 (address_range)
void rt_MathUtil_80462a74(void);

// 0x0x80462c7c (address_range)
void rt_MathUtil_80462c7c(void);

// 0x0x80462d50 (address_range)
void MathUtil_assertFail_80462d50(void);

// 0x0x80463114 (address_range)
void rt_MathUtil_80463114(u32, u32, u32, u32);

// 0x0x80463124 (address_range)
void rt_MathUtil_80463124(int);

// 0x0x80463240 (address_range)
int MathUtil_validate_80463240(int, int);

// 0x0x80463280 (address_range)
void MathUtil_validate_80463280(int);

// 0x0x804632e4 (address_range)
int MathUtil_validate_804632e4(int, int);

// 0x0x80463324 (address_range)
void MathUtil_validate_80463324(int);

// 0x0x80463374 (address_range)
void rt_MathUtil_80463374(int);

// 0x0x804634a8 (address_range)
void rt_MathUtil_804634a8(int);

// 0x0x8046358c (address_range)
u32 rt_MathUtil_8046358c(u32, int);

// 0x0x804635b8 (address_range)
void rt_MathUtil_804635b8(int, u32);

// 0x0x80463724 (address_range)
void rt_MathUtil_80463724(int, u32);

// 0x0x80463854 (address_range)
void rt_MathUtil_80463854(int);

// 0x0x804638b4 (address_range)
void rt_MathUtil_804638b4(int, u32);

// 0x0x804639a8 (address_range)
void rt_MathUtil_804639a8(int, int);

// 0x0x80463a6c (address_range)
void rt_MathUtil_80463a6c(void);

// 0x0x80463c20 (address_range)
void rt_MathUtil_80463c20(int);

// 0x0x80463c9c (address_range)
void MathUtil_validate_80463c9c(int);

// 0x0x80463d38 (address_range)
void MathUtil_validate_80463d38(int);

// 0x0x80463ec0 (address_range)
void rt_MathUtil_80463ec0(int);

// 0x0x80463ef4 (address_range)
void rt_MathUtil_80463ef4(int);

// 0x0x80463f94 (address_range)
void rt_MathUtil_80463f94(int, u32);

// 0x0x804640d8 (address_range)
void rt_MathUtil_804640d8(int, int);

// 0x0x804641d0 (address_range)
void MathUtil_validate_804641d0(int);

// 0x0x80464338 (address_range)
int MathUtil_validate_80464338(int, int);

// 0x0x80464378 (address_range)
u32 * rt_MathUtil_80464378(u32, u32, u32, uint);

// 0x0x80464490 (address_range)
int MathUtil_validate_80464490(int, int);

// 0x0x804644d0 (address_range)
void MathUtil_validate_804644d0(uint, uint, u32);

// 0x0x8046454c (address_range)
void MathUtil_validate_8046454c(int, uint, u32);

// 0x0x804645c8 (address_range)
void MathUtil_validate_804645c8(uint, u32);

// 0x0x804646cc (address_range)
void MathUtil_validate_804646cc(uint, u32, uint);

// 0x0x80464768 (address_range)
u32 rt_MathUtil_80464768(int, u32, int, int);

// 0x0x80464824 (address_range)
bool rt_MathUtil_80464824(u32, u32, u32);

// 0x0x804648a0 (address_range)
int MathUtil_validate_804648a0(int, int, u32);

// 0x0x80464a5c (address_range)
u32 rt_MathUtil_80464a5c(int, int);

// 0x0x80464b2c (address_range)
u32 rt_MathUtil_80464b2c(int, int);

// 0x0x80464be4 (address_range)
u32 rt_MathUtil_80464be4(int, int);

// 0x0x80464c9c (address_range)
u32 rt_MathUtil_80464c9c(int, int);

// 0x0x80464d54 (address_range)
u32 rt_MathUtil_80464d54(int, int);

// 0x0x80464e0c (address_range)
u32 rt_MathUtil_80464e0c(int, int);

// 0x0x80464f10 (address_range)
u32 rt_MathUtil_80464f10(int, int, int, u32);

// 0x0x804650e8 (address_range)
void rt_MathUtil_804650e8(int, u32, int, u32);

// 0x0x80465158 (address_range)
u32 rt_MathUtil_80465158(int, int);

// 0x0x80465220 (address_range)
u32 rt_MathUtil_80465220(int, int);

// 0x0x804652d8 (address_range)
u32 rt_MathUtil_804652d8(int, int);

// 0x0x80465390 (address_range)
u32 rt_MathUtil_80465390(int, int);

// 0x0x80465448 (address_range)
u32 rt_MathUtil_80465448(int, int);

// 0x0x80465500 (address_range)
u32 rt_MathUtil_80465500(int, int);

// 0x0x804655b8 (address_range)
bool rt_MathUtil_804655b8(u32, u32);

// 0x0x8046563c (address_range)
void MathUtil_validate_8046563c(u32, u32, u32);

// 0x0x8046573c (address_range)
void MathUtil_validate_8046573c(u32);

// 0x0x80465800 (address_range)
int rt_MathUtil_80465800(int);

// 0x0x80465958 (address_range)
int MathUtil_validate_80465958(int, int);

// 0x0x80465998 (address_range)
int MathUtil_validate_80465998(int, int);

// 0x0x804659d8 (address_range)
int MathUtil_validate_804659d8(int, int);

// 0x0x80465a18 (address_range)
int MathUtil_validate_80465a18(int, int);

// 0x0x80465a58 (address_range)
void MathUtil_assertFail_80465a58(void);

// 0x0x80465ad8 (address_range)
void rt_MathUtil_80465ad8(int);

// 0x0x80465d10 (address_range)
void MathUtil_validate_80465d10(int, int, int);

// 0x0x80466118 (address_range)
void MathUtil_assertFail_80466118(void);

// 0x0x804671e8 (address_range)
void rt_MathUtil_804671e8(int);

// 0x0x8046728c (address_range)
void rt_MathUtil_8046728c(int);

// 0x0x80467520 (address_range)
void rt_MathUtil_80467520(int, int);

// 0x0x804675e4 (address_range)
void rt_MathUtil_804675e4(int);

// 0x0x8046775c (address_range)
void rt_MathUtil_8046775c(int);

// 0x0x804677a8 (address_range)
void rt_MathUtil_804677a8(int, u32);

// 0x0x80467820 (address_range)
void rt_MathUtil_80467820(void);

// 0x0x8046797c (address_range)
void rt_MathUtil_8046797c(void);

// 0x0x804680f0 (address_range)
void rt_MathUtil_804680f0(int);

// 0x0x804683a4 (address_range)
void rt_MathUtil_804683a4(void);

// 0x0x80468864 (address_range)
void rt_MathUtil_80468864(void);

// 0x0x80468944 (address_range)
void rt_MathUtil_80468944(void);

// 0x0x80468adc (address_range)
void rt_MathUtil_80468adc(void);

// 0x0x80468fb8 (address_range)
void rt_MathUtil_80468fb8(void);

// 0x0x804690a4 (address_range)
void rt_MathUtil_804690a4(void);

// 0x0x804691f8 (address_range)
void rt_MathUtil_804691f8(void);

// 0x0x80469c10 (address_range)
void rt_MathUtil_80469c10(int);

// 0x0x80469e24 (address_range)
void rt_MathUtil_80469e24(void);

// 0x0x80469ed8 (address_range)
void rt_MathUtil_80469ed8(void);

// 0x0x8046a610 (address_range)
void rt_MathUtil_8046a610(void);

// 0x0x8046a748 (address_range)
void rt_MathUtil_8046a748(void);

// 0x0x8046aa10 (address_range)
void rt_MathUtil_8046aa10(void);

// 0x0x8046abd4 (address_range)
void rt_MathUtil_8046abd4(void);

// 0x0x8046b0c4 (address_range)
void MathUtil_validate_8046b0c4(int);

// 0x0x8046b298 (address_range)
void MathUtil_validate_8046b298(int);

// 0x0x8046b480 (address_range)
void rt_MathUtil_8046b480(void);

// 0x0x8046b918 (address_range)
void MathUtil_validate_8046b918(int);

// 0x0x8046bb84 (address_range)
void rt_MathUtil_8046bb84(int);

// 0x0x8046bc30 (address_range)
void rt_MathUtil_8046bc30(void);

// 0x0x8046be74 (address_range)
void rt_MathUtil_8046be74(void);

// 0x0x8046bf30 (address_range)
void rt_MathUtil_8046bf30(void);

// 0x0x8046bfb8 (address_range)
void rt_MathUtil_8046bfb8(int, int);

// 0x0x8046c040 (address_range)
u32 rt_MathUtil_8046c040(int);

// 0x0x8046c1d8 (address_range)
void rt_MathUtil_8046c1d8(void);

// 0x0x8046c2f4 (address_range)
void rt_MathUtil_8046c2f4(void);

// 0x0x8046c464 (address_range)
void rt_MathUtil_8046c464(void);

// 0x0x8046c81c (address_range)
int rt_MathUtil_8046c81c(void);

// 0x0x8046c828 (address_range)
int rt_MathUtil_8046c828(void);

// 0x0x8046c834 (address_range)
u32 rt_MathUtil_8046c834(int);

// 0x0x8046c898 (address_range)
int rt_MathUtil_8046c898(int);

// 0x0x8046c8cc (address_range)
void rt_MathUtil_8046c8cc(int, uint, uint);

// 0x0x8046ca0c (address_range)
void rt_MathUtil_8046ca0c(int);

// 0x0x8046cc14 (address_range)
void rt_MathUtil_8046cc14(int);

// 0x0x8046ce6c (address_range)
void rt_MathUtil_8046ce6c(int);

// 0x0x8046cfe4 (address_range)
void rt_MathUtil_8046cfe4(int);

// 0x0x8046d1a8 (address_range)
void rt_MathUtil_8046d1a8(int);

// 0x0x8046d3a8 (address_range)
void rt_MathUtil_8046d3a8(int);

// 0x0x8046d554 (address_range)
void MathUtil_validate_8046d554(int, int);

// 0x0x8046d8f8 (address_range)
void rt_MathUtil_8046d8f8(int);

// 0x0x8046daa4 (address_range)
void rt_MathUtil_8046daa4(int);

// 0x0x8046dc74 (address_range)
u32 rt_MathUtil_8046dc74(u32);

// 0x0x8046dd58 (address_range)
u32 rt_MathUtil_8046dd58(u32);

// 0x0x8046de28 (address_range)
void rt_MathUtil_8046de28(u32);

// 0x0x8046de84 (address_range)
void rt_MathUtil_8046de84(u32);

// 0x0x8046dee0 (address_range)
u32 rt_MathUtil_8046dee0(u32, u32, u32, uint);

// 0x0x8046dfa4 (address_range)
void rt_MathUtil_8046dfa4(u32);

// 0x0x8046dfb4 (address_range)
u32 rt_MathUtil_8046dfb4(int, int, int, int);

// 0x0x8046e1d4 (address_range)
void rt_MathUtil_8046e1d4(int);

// 0x0x8046e2c0 (address_range)
void rt_MathUtil_8046e2c0(int, int);

// 0x0x8046e350 (address_range)
void rt_MathUtil_8046e350(void);

// 0x0x8046e518 (address_range)
void rt_MathUtil_8046e518(int, int);

// 0x0x8046e5fc (address_range)
void rt_MathUtil_8046e5fc(int);

// 0x0x8046e764 (address_range)
void rt_MathUtil_8046e764(int, u16);

// 0x0x8046e7d8 (address_range)
void rt_MathUtil_8046e7d8(int);

// 0x0x8046e870 (address_range)
void rt_MathUtil_8046e870(int);

// 0x0x8046e8e4 (address_range)
void rt_MathUtil_8046e8e4(int);

// 0x0x8046ebe0 (address_range)
void rt_MathUtil_8046ebe0(int, int);

// 0x0x8046ec24 (address_range)
void rt_MathUtil_8046ec24(int);

// 0x0x8046ee48 (address_range)
void rt_MathUtil_8046ee48(int);

// 0x0x8046ef5c (address_range)
void rt_MathUtil_8046ef5c(int, u32);

// 0x0x8046ef78 (address_range)
void rt_MathUtil_8046ef78(int, u16);

// 0x0x8046efb4 (address_range)
void rt_MathUtil_8046efb4(int);

// 0x0x8046f060 (address_range)
void rt_MathUtil_8046f060(int);

// 0x0x8046f1a8 (address_range)
void rt_MathUtil_8046f1a8(int);

// 0x0x8046f1e4 (address_range)
void rt_MathUtil_8046f1e4(int);

// 0x0x8046f264 (address_range)
void rt_MathUtil_8046f264(int);

// 0x0x8046f27c (address_range)
void rt_MathUtil_8046f27c(int);

// 0x0x8046f294 (address_range)
void rt_MathUtil_8046f294(int, int);

// 0x0x8046f358 (address_range)
void rt_MathUtil_8046f358(void);

// 0x0x8046f4cc (address_range)
void rt_MathUtil_8046f4cc(int);

// 0x0x8046f968 (address_range)
void rt_MathUtil_8046f968(int, uint);

// 0x0x8046fab4 (address_range)
void rt_MathUtil_8046fab4(int);

// 0x0x8046fbe0 (address_range)
void rt_MathUtil_8046fbe0(int);

// 0x0x8046fd6c (address_range)
void rt_MathUtil_8046fd6c(int);

// 0x0x8046fed0 (address_range)
void rt_MathUtil_8046fed0(int);

// 0x0x80470040 (address_range)
u32 rt_MathUtil_80470040(int);

// 0x0x80470108 (address_range)
void rt_MathUtil_80470108(int);

// 0x0x80470614 (address_range)
void rt_MathUtil_80470614(int);

// 0x0x80470670 (address_range)
void rt_MathUtil_80470670(int);

// 0x0x804707d8 (address_range)
void rt_MathUtil_804707d8(int, int, int);

// 0x0x80470b20 (address_range)
void rt_MathUtil_80470b20(int);

// 0x0x80470c60 (address_range)
void rt_MathUtil_80470c60(int);

// 0x0x80470cc8 (address_range)
void rt_MathUtil_80470cc8(int);

// 0x0x80470e94 (address_range)
void rt_MathUtil_80470e94(int);

// 0x0x80471008 (address_range)
void rt_MathUtil_80471008(int);

// 0x0x804713c4 (address_range)
void rt_MathUtil_804713c4(void);

// 0x0x80471768 (address_range)
int MathUtil_validate_80471768(int, int);

// 0x0x804717a8 (address_range)
void rt_MathUtil_804717a8(void);

// 0x0x804718c0 (address_range)
void rt_MathUtil_804718c0(void);

// 0x0x80471bb0 (address_range)
void MathUtil_assertFail_80471bb0(void);

// 0x0x80471ec4 (address_range)
void rt_MathUtil_80471ec4(u32, u32);

// 0x0x80471fb8 (address_range)
void MathUtil_assertFail_80471fb8(void);

// 0x0x804721ac (address_range)
void rt_MathUtil_804721ac(u32);

// 0x0x80472208 (address_range)
void rt_MathUtil_80472208(int);

// 0x0x804725d4 (address_range)
void rt_MathUtil_804725d4(void);

// 0x0x80472b44 (address_range)
void rt_MathUtil_80472b44(int);

// 0x0x80472c18 (address_range)
void MathUtil_validate_80472c18(int, u32, float);

// 0x0x80472e38 (address_range)
void rt_MathUtil_80472e38(void);

// 0x0x80473128 (address_range)
void MathUtil_assertFail_80473128(void);

// 0x0x80473280 (address_range)
void rt_MathUtil_80473280(void);

// 0x0x804732a4 (address_range)
void rt_MathUtil_804732a4(int);

// 0x0x8047331c (address_range)
int rt_MathUtil_8047331c(int);

// 0x0x80473374 (address_range)
void rt_MathUtil_80473374(void);

// 0x0x80473938 (address_range)
void rt_MathUtil_80473938(void);

// 0x0x80473ff8 (address_range)
void rt_MathUtil_80473ff8(void);

// 0x0x80474258 (address_range)
void rt_MathUtil_80474258(void);

// 0x0x80474630 (address_range)
void rt_MathUtil_80474630(void);

// 0x0x8047470c (address_range)
void rt_MathUtil_8047470c(void);

// 0x0x80474824 (address_range)
void rt_MathUtil_80474824(void);

// 0x0x80474d3c (address_range)
void rt_MathUtil_80474d3c(int);

// 0x0x80474e0c (address_range)
void rt_MathUtil_80474e0c(int);

// 0x0x80475220 (address_range)
void rt_MathUtil_80475220(void);

// 0x0x804753ac (address_range)
int rt_MathUtil_804753ac(int);

// 0x0x804753f4 (address_range)
int MathUtil_validate_804753f4(int, int);

// 0x0x80475434 (address_range)
void MathUtil_assertFail_80475434(void);

// 0x0x804754d0 (address_range)
void rt_MathUtil_804754d0(int);

// 0x0x8047557c (address_range)
void rt_MathUtil_8047557c(int);

// 0x0x804755e4 (address_range)
void rt_MathUtil_804755e4(void);

// 0x0x80475bcc (address_range)
void rt_MathUtil_80475bcc(int);

// 0x0x80475c70 (address_range)
void rt_MathUtil_80475c70(int);

// 0x0x80476014 (address_range)
void rt_MathUtil_80476014(int);

// 0x0x804761cc (address_range)
void rt_MathUtil_804761cc(int);

// 0x0x804763d4 (address_range)
void rt_MathUtil_804763d4(int);

// 0x0x80476528 (address_range)
void rt_MathUtil_80476528(int);

// 0x0x804766a0 (address_range)
u32 rt_MathUtil_804766a0(int, u32);

// 0x0x804768d8 (address_range)
void rt_MathUtil_804768d8(int);

// 0x0x8047692c (address_range)
void rt_MathUtil_8047692c(int);

// 0x0x80476994 (address_range)
void rt_MathUtil_80476994(int, u32);

// 0x0x80476a3c (address_range)
void rt_MathUtil_80476a3c(int);

// 0x0x80476ae8 (address_range)
void rt_MathUtil_80476ae8(u32);

// 0x0x80476b84 (address_range)
void rt_MathUtil_80476b84(int);

// 0x0x80476c7c (address_range)
void rt_MathUtil_80476c7c(u32);

// 0x0x80476cbc (address_range)
void rt_MathUtil_80476cbc(u32);

// 0x0x80476cfc (address_range)
void rt_MathUtil_80476cfc(int);

// 0x0x80476d90 (address_range)
void rt_MathUtil_80476d90(int);

// 0x0x80476de8 (address_range)
u32 rt_MathUtil_80476de8(int);

// 0x0x80476e48 (address_range)
u32 rt_MathUtil_80476e48(int);

// 0x0x80476ea8 (address_range)
void rt_MathUtil_80476ea8(int);

// 0x0x80476f40 (address_range)
int MathUtil_validate_80476f40(int, int);

// 0x0x80476f80 (address_range)
int MathUtil_validate_80476f80(int, int);

// 0x0x80476fd4 (address_range)
int MathUtil_validate_80476fd4(int, int);

// 0x0x80477014 (address_range)
int MathUtil_validate_80477014(int, int);

// 0x0x80477054 (address_range)
int MathUtil_validate_80477054(int, int);

// 0x0x804770d8 (address_range)
int rt_MathUtil_804770d8(int, u32);

// 0x0x80477160 (address_range)
int MathUtil_validate_80477160(int, int);

// 0x0x804771a0 (address_range)
int MathUtil_validate_804771a0(int, int);

// 0x0x80477208 (address_range)
void rt_MathUtil_80477208(void);

// 0x0x804777e0 (address_range)
void MathUtil_assertFail_804777e0(void);

// 0x0x80477ff0 (address_range)
int MathUtil_validate_80477ff0(int, int);

// 0x0x80478030 (address_range)
int MathUtil_validate_80478030(int, int);

// 0x0x80478070 (address_range)
int MathUtil_validate_80478070(int, int);

// 0x0x804780b0 (address_range)
int MathUtil_validate_804780b0(int, int);

// 0x0x804780f0 (address_range)
int MathUtil_validate_804780f0(int, int);

// 0x0x80478130 (address_range)
int MathUtil_validate_80478130(int, int);

// 0x0x80478170 (address_range)
int MathUtil_validate_80478170(int, int);

// 0x0x804781b0 (address_range)
int MathUtil_validate_804781b0(int, int);

// 0x0x804781f0 (address_range)
int MathUtil_validate_804781f0(int, int);

// 0x0x80478230 (address_range)
int MathUtil_validate_80478230(int, int);

// 0x0x80478270 (address_range)
int MathUtil_validate_80478270(int, int);

// 0x0x804782b0 (address_range)
int MathUtil_validate_804782b0(int, int);

// 0x0x804782f0 (address_range)
int MathUtil_validate_804782f0(int, int);

// 0x0x80478330 (address_range)
int MathUtil_validate_80478330(int, int);

// 0x0x80478370 (address_range)
int MathUtil_validate_80478370(int, int);

// 0x0x804783b0 (address_range)
int MathUtil_validate_804783b0(int, int);

// 0x0x804783f0 (address_range)
int MathUtil_validate_804783f0(int, int);

// 0x0x80478430 (address_range)
void rt_MathUtil_80478430(int, u32, u32);

// 0x0x80478484 (address_range)
void rt_MathUtil_80478484(int, u32, u32);

// 0x0x804784d8 (address_range)
void rt_MathUtil_804784d8(int, u32, u32);

// 0x0x8047852c (address_range)
void rt_MathUtil_8047852c(int, u32, u32);

// 0x0x80478580 (address_range)
void rt_MathUtil_80478580(int, u32, u32);

// 0x0x804785d4 (address_range)
void rt_MathUtil_804785d4(int, u32, u32);

// 0x0x8047865c (address_range)
void rt_MathUtil_8047865c(int, u32, u32);

// 0x0x804786cc (address_range)
void rt_MathUtil_804786cc(int, u32, u32);

// 0x0x8047873c (address_range)
void rt_MathUtil_8047873c(int, u32, u32);

// 0x0x804787ac (address_range)
void rt_MathUtil_804787ac(int, u32, u32);

// 0x0x8047881c (address_range)
void rt_MathUtil_8047881c(int, u32, u32);

// 0x0x8047888c (address_range)
void rt_MathUtil_8047888c(int, u32, u32);

// 0x0x804788fc (address_range)
void rt_MathUtil_804788fc(int, u32, u32);

// 0x0x804789c0 (address_range)
void rt_MathUtil_804789c0(int, u32);

// 0x0x80478a14 (address_range)
void rt_MathUtil_80478a14(void);

// 0x0x80478d10 (address_range)
void rt_MathUtil_80478d10(void);

// 0x0x80479124 (address_range)
void rt_MathUtil_80479124(void);

// 0x0x80479274 (address_range)
void rt_MathUtil_80479274(void);

// 0x0x8047965c (address_range)
void MathUtil_validate_8047965c(int);

// 0x0x8047969c (address_range)
void rt_MathUtil_8047969c(int);

// 0x0x80479908 (address_range)
void rt_MathUtil_80479908(void);

// 0x0x80479958 (address_range)
void rt_MathUtil_80479958(void);

// 0x0x80479c54 (address_range)
void rt_MathUtil_80479c54(int);

// 0x0x80479d3c (address_range)
void rt_MathUtil_80479d3c(void);

// 0x0x80479f78 (address_range)
void rt_MathUtil_80479f78(int, u32, u32);

// 0x0x80479fdc (address_range)
void rt_MathUtil_80479fdc(int, u32, u32);

// 0x0x8047a040 (address_range)
void rt_MathUtil_8047a040(int, u32, u32);

// 0x0x8047a0a4 (address_range)
void rt_MathUtil_8047a0a4(int, u32, u32);

// 0x0x8047a108 (address_range)
void rt_MathUtil_8047a108(int, u32, u32);

// 0x0x8047a16c (address_range)
void rt_MathUtil_8047a16c(int, u32, u32);

// 0x0x8047a1d0 (address_range)
void rt_MathUtil_8047a1d0(int, u32, u32);

// 0x0x8047a234 (address_range)
void rt_MathUtil_8047a234(int, u32, u32);

// 0x0x8047a2a4 (address_range)
int rt_MathUtil_8047a2a4(int, u32);

// 0x0x8047a2f0 (address_range)
int MathUtil_validate_8047a2f0(int, int);

// 0x0x8047a338 (address_range)
void rt_MathUtil_8047a338(int);

// 0x0x8047a3ac (address_range)
void rt_MathUtil_8047a3ac(void);

// 0x0x8047ac48 (address_range)
int rt_MathUtil_8047ac48(int);

// 0x0x8047ac90 (address_range)
int MathUtil_validate_8047ac90(int, int);

// 0x0x8047ace0 (address_range)
void rt_MathUtil_8047ace0(int, uint);

// 0x0x8047acf8 (address_range)
void rt_MathUtil_8047acf8(int, uint, int);

// 0x0x8047ad1c (address_range)
int rt_MathUtil_8047ad1c(int);

// 0x0x8047ad58 (address_range)
int MathUtil_validate_8047ad58(int, int);

// 0x0x8047adec (address_range)
void MathUtil_validate_8047adec(int);

// 0x0x8047aec0 (address_range)
void MathUtil_validate_8047aec0(int);

// 0x0x8047b054 (address_range)
void MathUtil_validate_8047b054(int);

// 0x0x8047b124 (address_range)
void rt_MathUtil_8047b124(void);

// 0x0x8047b154 (address_range)
void rt_MathUtil_8047b154(void);

// 0x0x8047b184 (address_range)
void rt_MathUtil_8047b184(void);

// 0x0x8047b1b8 (address_range)
void rt_MathUtil_8047b1b8(void);

// 0x0x8047b1dc (address_range)
void rt_MathUtil_8047b1dc(void);

// 0x0x8047b200 (address_range)
void rt_MathUtil_8047b200(void);

// 0x0x8047b224 (address_range)
void rt_MathUtil_8047b224(u32);

// 0x0x8047b2a8 (address_range)
void rt_MathUtil_8047b2a8(void);

// 0x0x8047b2cc (address_range)
void rt_MathUtil_8047b2cc(int);

// 0x0x8047b320 (address_range)
void rt_MathUtil_8047b320(int);

// 0x0x8047b35c (address_range)
void rt_MathUtil_8047b35c(u32);

// 0x0x8047b3ac (address_range)
void rt_MathUtil_8047b3ac(void);

// 0x0x8047b3d0 (address_range)
void rt_MathUtil_8047b3d0(u32);

// 0x0x8047b458 (address_range)
void rt_MathUtil_8047b458(void);

// 0x0x8047b488 (address_range)
void rt_MathUtil_8047b488(u32, u32);

// 0x0x8047b4d4 (address_range)
void rt_MathUtil_8047b4d4(int);

// 0x0x8047b518 (address_range)
void rt_MathUtil_8047b518(int);

// 0x0x8047b55c (address_range)
void rt_MathUtil_8047b55c(int);

// 0x0x8047b5a0 (address_range)
void rt_MathUtil_8047b5a0(int);

// 0x0x8047b5dc (address_range)
void rt_MathUtil_8047b5dc(u32);

// 0x0x8047b638 (address_range)
void MathUtil_validate_8047b638(int);

// 0x0x8047b72c (address_range)
int MathUtil_validate_8047b72c(int, int);

// 0x0x8047b76c (address_range)
int MathUtil_validate_8047b76c(int, int);

// 0x0x8047b890 (address_range)
void rt_MathUtil_8047b890(u32);

// 0x0x8047ba04 (address_range)
void rt_MathUtil_8047ba04(int);

// 0x0x8047baa8 (address_range)
void MathUtil_assertFail_8047baa8(void);

// 0x0x8047be74 (address_range)
void MathUtil_assertFail_8047be74(void);

// 0x0x8047bec4 (address_range)
void rt_MathUtil_8047bec4(int, u32);

// 0x0x8047bfa0 (address_range)
void MathUtil_assertFail_8047bfa0(void);

// 0x0x8047c040 (address_range)
int MathUtil_validate_8047c040(int, int);

// 0x0x8047c080 (address_range)
void MathUtil_validate_8047c080(int);

// 0x0x8047c20c (address_range)
void rt_MathUtil_8047c20c(int, u32);

// 0x0x8047c288 (address_range)
void MathUtil_validate_8047c288(int);

// 0x0x8047c484 (address_range)
int MathUtil_validate_8047c484(int, int);

// 0x0x8047c4c4 (address_range)
void MathUtil_assertFail_8047c4c4(void);

// 0x0x8047c55c (address_range)
void MathUtil_assertFail_8047c55c(void);

// 0x0x8047c5a4 (address_range)
void MathUtil_assertFail_8047c5a4(void);

// 0x0x8047c5e4 (address_range)
void MathUtil_validate_8047c5e4(int);

// 0x0x8047c6c4 (address_range)
void rt_MathUtil_8047c6c4(u32);

// 0x0x8047c738 (address_range)
void rt_MathUtil_8047c738(int);

// 0x0x8047c8c8 (address_range)
void rt_MathUtil_8047c8c8(void);

// 0x0x8047cadc (address_range)
void MathUtil_validate_8047cadc(int);

// 0x0x8047cb64 (address_range)
void MathUtil_validate_8047cb64(int);

// 0x0x8047cd28 (address_range)
int MathUtil_validate_8047cd28(int, int);

// 0x0x8047cd68 (address_range)
int MathUtil_validate_8047cd68(int, int);

// 0x0x8047cda8 (address_range)
int MathUtil_validate_8047cda8(int, int);

// 0x0x8047cde8 (address_range)
void MathUtil_assertFail_8047cde8(void);

// 0x0x8047ce30 (address_range)
void MathUtil_validate_8047ce30(int);

// 0x0x8047d09c (address_range)
void MathUtil_validate_8047d09c(u32);

// 0x0x8047d12c (address_range)
int MathUtil_validate_8047d12c(int, int);

// 0x0x8047d1a0 (address_range)
void rt_MathUtil_8047d1a0(void);

// 0x0x8047d20c (address_range)
int MathUtil_validate_8047d20c(int, int);

// 0x0x8047d24c (address_range)
int MathUtil_validate_8047d24c(int, int);

// 0x0x8047d28c (address_range)
u32 MathUtil_validate_8047d28c(u32);

// 0x0x8047d324 (address_range)
int MathUtil_validate_8047d324(void);

// 0x0x8047d374 (address_range)
void rt_MathUtil_8047d374(void);

// 0x0x8047d3a8 (address_range)
void MathUtil_assertFail_8047d3a8(void);

// 0x0x8047d650 (address_range)
u32 MathUtil_validate_8047d650(u32);

// 0x0x8047d75c (address_range)
void rt_MathUtil_8047d75c(int);

// 0x0x8047d864 (address_range)
void rt_MathUtil_8047d864(void);

// 0x0x8047d97c (address_range)
u32 rt_MathUtil_8047d97c(int, int);

// 0x0x8047d98c (address_range)
void rt_MathUtil_8047d98c(int);

// 0x0x8047d9a4 (address_range)
void MathUtil_assertFail_8047d9a4(void);

// 0x0x8047d9b4 (address_range)
void MathUtil_assertFail_8047d9b4(void);

// 0x0x8047da08 (address_range)
void MathUtil_validate_8047da08(u32);

// 0x0x8047da4c (address_range)
void rt_MathUtil_8047da4c(u32);

// 0x0x8047da88 (address_range)
int rt_MathUtil_8047da88(int);

// 0x0x8047dae0 (address_range)
int rt_MathUtil_8047dae0(int);

// 0x0x8047daf4 (address_range)
int rt_MathUtil_8047daf4(int);

// 0x0x8047db58 (address_range)
u16 rt_MathUtil_8047db58(u32);

// 0x0x8047db68 (address_range)
u16 rt_MathUtil_8047db68(u32);

// 0x0x8047dbb4 (address_range)
void rt_MathUtil_8047dbb4(int, int);

// 0x0x8047dbfc (address_range)
void rt_MathUtil_8047dbfc(int, u32);

// 0x0x8047dc28 (address_range)
u32 rt_MathUtil_8047dc28(int);

// 0x0x8047dc48 (address_range)
u32 rt_MathUtil_8047dc48(int);

// 0x0x8047dc70 (address_range)
u32 rt_MathUtil_8047dc70(u32);

// 0x0x8047dc98 (address_range)
void rt_MathUtil_8047dc98(int);

// 0x0x8047dcf4 (address_range)
void rt_MathUtil_8047dcf4(int, int);

// 0x0x8047decc (address_range)
uint rt_MathUtil_8047decc(int);

// 0x0x8047dee0 (address_range)
uint rt_MathUtil_8047dee0(int);

// 0x0x8047def4 (address_range)
uint rt_MathUtil_8047def4(int);

// 0x0x8047df08 (address_range)
void rt_MathUtil_8047df08(u32);

// 0x0x8047df18 (address_range)
u32 rt_MathUtil_8047df18(int);

// 0x0x8047df30 (address_range)
u32 rt_MathUtil_8047df30(int, int);

// 0x0x8047df58 (address_range)
u32 rt_MathUtil_8047df58(int, int);

// 0x0x8047dfb0 (address_range)
u32 rt_MathUtil_8047dfb0(int, int);

// 0x0x8047dfe0 (address_range)
u32 rt_MathUtil_8047dfe0(int);

// 0x0x8047dff8 (address_range)
u32 rt_MathUtil_8047dff8(int);

// 0x0x8047e010 (address_range)
u32 rt_MathUtil_8047e010(int);

// 0x0x8047e01c (address_range)
u32 rt_MathUtil_8047e01c(int);

// 0x0x8047e02c (address_range)
void rt_MathUtil_8047e02c(int);

// 0x0x8047e03c (address_range)
u32 rt_MathUtil_8047e03c(int);

// 0x0x8047e048 (address_range)
u32 rt_MathUtil_8047e048(int);

// 0x0x8047e098 (address_range)
int rt_MathUtil_8047e098(int);

// 0x0x8047e0b0 (address_range)
void rt_MathUtil_8047e0b0(int, int);

// 0x0x8047e0c8 (address_range)
u32 rt_MathUtil_8047e0c8(int);

// 0x0x8047e0f0 (address_range)
u32 rt_MathUtil_8047e0f0(u32);

// 0x0x8047e130 (address_range)
int rt_MathUtil_8047e130(u32, int);

// 0x0x8047e160 (address_range)
u32 rt_MathUtil_8047e160(u32);

// 0x0x8047e170 (address_range)
int rt_MathUtil_8047e170(u32);

// 0x0x8047e188 (address_range)
u32 rt_MathUtil_8047e188(u32);

// 0x0x8047e198 (address_range)
u32 rt_MathUtil_8047e198(u32);

// 0x0x8047e28c (address_range)
u32 rt_MathUtil_8047e28c(u32);

// 0x0x8047e2a4 (address_range)
u32 rt_MathUtil_8047e2a4(u32);

// 0x0x8047e2bc (address_range)
u32 rt_MathUtil_8047e2bc(int);

// 0x0x8047e2d8 (address_range)
u32 rt_MathUtil_8047e2d8(u32);

// 0x0x8047e2e8 (address_range)
u32 rt_MathUtil_8047e2e8(u32);

// 0x0x8047e2f8 (address_range)
u32 rt_MathUtil_8047e2f8(u32);

// 0x0x8047e308 (address_range)
void rt_MathUtil_8047e308(u32, u32);

// 0x0x8047e318 (address_range)
void rt_MathUtil_8047e318(int, u32, u32, int, int);

// 0x0x8047e4c0 (address_range)
void rt_MathUtil_8047e4c0(int, u32);

// 0x0x8047e4e8 (address_range)
void rt_MathUtil_8047e4e8(int, u32);

// 0x0x8047e510 (address_range)
void rt_MathUtil_8047e510(int, u32);

// 0x0x8047e538 (address_range)
int rt_MathUtil_8047e538(int);

// 0x0x8047e560 (address_range)
int rt_MathUtil_8047e560(int);

// 0x0x8047e574 (address_range)
double rt_MathUtil_8047e574(int);

// 0x0x8047e584 (address_range)
int rt_MathUtil_8047e584(int);

// 0x0x8047e59c (address_range)
u32 rt_MathUtil_8047e59c(int);

// 0x0x8047e5d8 (address_range)
void rt_MathUtil_8047e5d8(int, u32);

// 0x0x8047e620 (address_range)
u32 rt_MathUtil_8047e620(int);

// 0x0x8047e63c (address_range)
double rt_MathUtil_8047e63c(int);

// 0x0x8047e65c (address_range)
uint rt_MathUtil_8047e65c(int);

// 0x0x8047e674 (address_range)
void rt_MathUtil_8047e674(int, u32);

// 0x0x8047e680 (address_range)
u32 rt_MathUtil_8047e680(int);

// 0x0x8047e6a4 (address_range)
void rt_MathUtil_8047e6a4(int);

// 0x0x8047e6bc (address_range)
void rt_MathUtil_8047e6bc(int);

// 0x0x8047e6d4 (address_range)
void rt_MathUtil_8047e6d4(int);

// 0x0x8047e704 (address_range)
void rt_MathUtil_8047e704(void);

// 0x0x8047e708 (address_range)
void rt_MathUtil_8047e708(int);

// 0x0x8047e720 (address_range)
void rt_MathUtil_8047e720(int);

// 0x0x8047e754 (address_range)
void rt_MathUtil_8047e754(int);

// 0x0x8047e774 (address_range)
void rt_MathUtil_8047e774(int);

// 0x0x8047e794 (address_range)
void rt_MathUtil_8047e794(int);

// 0x0x8047e80c (address_range)
void rt_MathUtil_8047e80c(int);

// 0x0x8047e818 (address_range)
void rt_MathUtil_8047e818(int, uint);

// 0x0x8047e8b4 (address_range)
void rt_MathUtil_8047e8b4(int);

// 0x0x8047e8c0 (address_range)
void rt_MathUtil_8047e8c0(int);

// 0x0x8047e8cc (address_range)
void rt_MathUtil_8047e8cc(int, u32, u32, u32);

// 0x0x8047e8ec (address_range)
u32 rt_MathUtil_8047e8ec(int);

// 0x0x8047e908 (address_range)
u32 rt_MathUtil_8047e908(int);

// 0x0x8047e920 (address_range)
u32 rt_MathUtil_8047e920(int);

// 0x0x8047e92c (address_range)
double rt_MathUtil_8047e92c(int);

// 0x0x8047e93c (address_range)
u32 rt_MathUtil_8047e93c(int);

// 0x0x8047e978 (address_range)
uint rt_MathUtil_8047e978(int, int);

// 0x0x8047e9b4 (address_range)
u32 rt_MathUtil_8047e9b4(int, int);

// 0x0x8047e9ec (address_range)
u32 rt_MathUtil_8047e9ec(int, int);

// 0x0x8047ea24 (address_range)
u32 rt_MathUtil_8047ea24(int);

// 0x0x8047ea3c (address_range)
u32 rt_MathUtil_8047ea3c(int);

// 0x0x8047ea54 (address_range)
int rt_MathUtil_8047ea54(int);

// 0x0x8047ea64 (address_range)
int rt_MathUtil_8047ea64(int);

// 0x0x8047ea74 (address_range)
int rt_MathUtil_8047ea74(int);

// 0x0x8047ea84 (address_range)
void rt_MathUtil_8047ea84(int);

// 0x0x8047ea90 (address_range)
void rt_MathUtil_8047ea90(int);

// 0x0x8047eb90 (address_range)
u32 rt_MathUtil_8047eb90(int);

// 0x0x8047ebf4 (address_range)
u32 rt_MathUtil_8047ebf4(int);

// 0x0x8047eca4 (address_range)
u32 rt_MathUtil_8047eca4(int);

// 0x0x8047ecb0 (address_range)
u32 rt_MathUtil_8047ecb0(int);

// 0x0x8047ecbc (address_range)
u32 rt_MathUtil_8047ecbc(int);

// 0x0x8047ecc8 (address_range)
u32 rt_MathUtil_8047ecc8(int);

// 0x0x8047ecd4 (address_range)
u32 rt_MathUtil_8047ecd4(int);

// 0x0x8047ece4 (address_range)
u32 rt_MathUtil_8047ece4(int);

// 0x0x8047ecf4 (address_range)
void rt_MathUtil_8047ecf4(int, u32);

// 0x0x8047ed38 (address_range)
int rt_MathUtil_8047ed38(int);

// 0x0x8047ed48 (address_range)
void rt_MathUtil_8047ed48(int);

// 0x0x8047ed60 (address_range)
double rt_MathUtil_8047ed60(int);

// 0x0x8047edb4 (address_range)
void rt_MathUtil_8047edb4(int, code);

// 0x0x8047ee94 (address_range)
u32 rt_MathUtil_8047ee94(int);

// 0x0x8047eee0 (address_range)
void rt_MathUtil_8047eee0(int, float);

// 0x0x8047ef88 (address_range)
void rt_MathUtil_8047ef88(int, int);

// 0x0x8047f000 (address_range)
void rt_MathUtil_8047f000(int);

// 0x0x8047f01c (address_range)
u32 rt_MathUtil_8047f01c(int);

// 0x0x8047f03c (address_range)
void rt_MathUtil_8047f03c(int, uint);

// 0x0x8047f070 (address_range)
void rt_MathUtil_8047f070(int, uint);

// 0x0x8047f0c8 (address_range)
void rt_MathUtil_8047f0c8(u32);

// 0x0x8047f114 (address_range)
void rt_MathUtil_8047f114(u32, short);

// 0x0x8047f138 (address_range)
void rt_MathUtil_8047f138(u32);

// 0x0x8047f15c (address_range)
void rt_MathUtil_8047f15c(u32);

// 0x0x8047f180 (address_range)
u32 rt_MathUtil_8047f180(int);

// 0x0x8047f1a0 (address_range)
void rt_MathUtil_8047f1a0(int, u32);

// 0x0x8047f1f8 (address_range)
void rt_MathUtil_8047f1f8(int, u32);

// 0x0x8047f214 (address_range)
void rt_MathUtil_8047f214(int);

// 0x0x8047f264 (address_range)
void rt_MathUtil_8047f264(int);

// 0x0x8047f270 (address_range)
void rt_MathUtil_8047f270(void);

// 0x0x8047f3f0 (address_range)
void rt_MathUtil_8047f3f0(void);

// 0x0x8047f518 (address_range)
void rt_MathUtil_8047f518(void);

// 0x0x8047f57c (address_range)
void rt_MathUtil_8047f57c(u32);

// 0x0x8047f5c8 (address_range)
void rt_MathUtil_8047f5c8(u32, int);

// 0x0x8047f64c (address_range)
void rt_MathUtil_8047f64c(void);

// 0x0x8047f6d4 (address_range)
void rt_MathUtil_8047f6d4(void);

// 0x0x8047f724 (address_range)
void rt_MathUtil_8047f724(void);

// 0x0x8047f774 (address_range)
void rt_MathUtil_8047f774(int, int, u32);

// 0x0x8047f820 (address_range)
void MathUtil_assertFail_8047f820(void);

// 0x0x8047fc88 (address_range)
void rt_MathUtil_8047fc88(int);

// 0x0x8047fd14 (address_range)
int rt_MathUtil_8047fd14(int, int);

// 0x0x8047fd48 (address_range)
void rt_MathUtil_8047fd48(int);

// 0x0x8047fe10 (address_range)
void rt_MathUtil_8047fe10(int);

// 0x0x8047fef4 (address_range)
void rt_MathUtil_8047fef4(void);

// 0x0x8047ff44 (address_range)
void rt_MathUtil_8047ff44(void);

// 0x0x8047ff94 (address_range)
void rt_MathUtil_8047ff94(void);

// 0x0x8047ffd8 (address_range)
void rt_MathUtil_8047ffd8(void);

// 0x0x80480050 (address_range)
int rt_EGG_Core_80480050(int, int);

// 0x0x804800c4 (address_range)
void EGG_Core_validate_804800c4(int, u32, u32);

// 0x0x8048019c (address_range)
void EGG_Core_assertFail_8048019c(void);

// 0x0x804802ac (address_range)
void EGG_Core_validate_804802ac(u32, int);

// 0x0x80480474 (address_range)
void EGG_Core_validate_80480474(u32, u32, u32, u32);

// 0x0x80480660 (address_range)
double rt_EGG_Core_80480660(int);

// 0x0x80480674 (address_range)
void rt_EGG_Core_80480674(int);

// 0x0x804806d8 (address_range)
void rt_EGG_Core_804806d8(int);

// 0x0x8048075c (address_range)
void rt_EGG_Core_8048075c(int);

// 0x0x804807c8 (address_range)
void rt_EGG_Core_804807c8(int, u32);

// 0x0x80480824 (address_range)
void rt_EGG_Core_80480824(void);

// 0x0x8048083c (address_range)
u32 * EGG_Core_validate_8048083c(u32, byte, u32, u32, u32, u32, u32, u32, u32, u32, u32);

// 0x0x80480908 (address_range)
int rt_EGG_Core_80480908(int, u32);

// 0x0x80480960 (address_range)
int EGG_Core_validate_80480960(int, int);

// 0x0x80480b8c (address_range)
void rt_EGG_Core_80480b8c(void);

// 0x0x80480cd8 (address_range)
void EGG_Core_assertFail_80480cd8(void);

// 0x0x80480ff8 (address_range)
int rt_EGG_Core_80480ff8(int, u32);

// 0x0x80481050 (address_range)
int EGG_Core_validate_80481050(int, int);

// 0x0x80481090 (address_range)
void rt_EGG_Core_80481090(void);

// 0x0x8048149c (address_range)
void EGG_Core_validate_8048149c(int, byte);

// 0x0x804814f4 (address_range)
int EGG_Core_validate_804814f4(int, int);

// 0x0x804815d0 (address_range)
void rt_EGG_Core_804815d0(int);

// 0x0x80481694 (address_range)
void EGG_Core_validate_80481694(int);

// 0x0x80481820 (address_range)
void EGG_Core_validate_80481820(int);

// 0x0x80481910 (address_range)
int EGG_Core_validate_80481910(int, int);

// 0x0x804819b0 (address_range)
void rt_EGG_Core_804819b0(int);

// 0x0x80481a38 (address_range)
void rt_EGG_Core_80481a38(void);

// 0x0x80481c30 (address_range)
void EGG_Core_validate_80481c30(u32);

// 0x0x80481dd8 (address_range)
void rt_EGG_Core_80481dd8(int);

// 0x0x80481e10 (address_range)
void rt_EGG_Core_80481e10(int);

// 0x0x80481ec0 (address_range)
void rt_EGG_Core_80481ec0(int);

// 0x0x80481f70 (address_range)
void rt_EGG_Core_80481f70(int, u32);

// 0x0x80481fc8 (address_range)
void rt_EGG_Core_80481fc8(int);

// 0x0x804820f8 (address_range)
void rt_EGG_Core_804820f8(void);

// 0x0x80482450 (address_range)
void rt_EGG_Core_80482450(void);

// 0x0x80483194 (address_range)
void rt_EGG_Core_80483194(void);

// 0x0x80483250 (address_range)
void rt_EGG_Core_80483250(int);

// 0x0x80483374 (address_range)
void rt_EGG_Core_80483374(int, int);

// 0x0x804834d8 (address_range)
void rt_EGG_Core_804834d8(int, int);

// 0x0x80483520 (address_range)
void rt_EGG_Core_80483520(int);

// 0x0x80483530 (address_range)
void rt_EGG_Core_80483530(int);

// 0x0x80483540 (address_range)
int EGG_Core_validate_80483540(int, int);

// 0x0x804835c4 (address_range)
void EGG_Core_validate_804835c4(u32, int);

// 0x0x804837f4 (address_range)
void rt_EGG_Core_804837f4(int);

// 0x0x80483978 (address_range)
void rt_EGG_Core_80483978(int);

// 0x0x804839f8 (address_range)
void rt_EGG_Core_804839f8(void);

// 0x0x80483c60 (address_range)
void rt_EGG_Core_80483c60(u32);

// 0x0x80483cfc (address_range)
void rt_EGG_Core_80483cfc(void);

// 0x0x80484578 (address_range)
void rt_EGG_Core_80484578(void);

// 0x0x804850b8 (address_range)
void rt_EGG_Core_804850b8(u32);

// 0x0x804851b0 (address_range)
void rt_EGG_Core_804851b0(u32);

// 0x0x80485268 (address_range)
void EGG_Core_validate_80485268(int, u32);

// 0x0x804852bc (address_range)
void rt_EGG_Core_804852bc(int);

// 0x0x80485304 (address_range)
void rt_EGG_Core_80485304(void);

// 0x0x804855c8 (address_range)
void rt_EGG_Core_804855c8(void);

// 0x0x80485b08 (address_range)
void rt_EGG_Core_80485b08(void);

// 0x0x80485bb4 (address_range)
void rt_EGG_Core_80485bb4(void);

// 0x0x80485c58 (address_range)
void rt_EGG_Core_80485c58(int);

// 0x0x80485c70 (address_range)
void rt_EGG_Core_80485c70(int);

// 0x0x80485c88 (address_range)
void EGG_Core_assertFail_80485c88(void);

// 0x0x80485eac (address_range)
void rt_EGG_Core_80485eac(int);

// 0x0x80485fc0 (address_range)
void rt_EGG_Core_80485fc0(int);

// 0x0x8048610c (address_range)
void rt_EGG_Core_8048610c(void);

// 0x0x80486344 (address_range)
int EGG_Core_validate_80486344(int, int);

// 0x0x80486384 (address_range)
int rt_EGG_Core_80486384(int, u32);

// 0x0x804863dc (address_range)
void EGG_Core_assertFail_804863dc(void);

// 0x0x80486450 (address_range)
void rt_EGG_Core_80486450(int);

// 0x0x80486468 (address_range)
void rt_EGG_Core_80486468(void);

// 0x0x80486874 (address_range)
void EGG_Core_validate_80486874(int);

// 0x0x804869b0 (address_range)
void rt_EGG_Core_804869b0(void);

// 0x0x80486c08 (address_range)
int EGG_Core_validate_80486c08(int, int);

// 0x0x80486c48 (address_range)
int EGG_Core_validate_80486c48(int, int);

// 0x0x80486c88 (address_range)
int rt_EGG_Core_80486c88(int, u32, u32);

// 0x0x80486cec (address_range)
void EGG_Core_assertFail_80486cec(void);

// 0x0x80486d50 (address_range)
void rt_EGG_Core_80486d50(int);

// 0x0x80486d84 (address_range)
void rt_EGG_Core_80486d84(int);

// 0x0x80486e3c (address_range)
void rt_EGG_Core_80486e3c(void);

// 0x0x80486f0c (address_range)
void rt_EGG_Core_80486f0c(void);

// 0x0x8048734c (address_range)
void rt_EGG_Core_8048734c(int, float, float);

// 0x0x8048763c (address_range)
void rt_EGG_Core_8048763c(void);

// 0x0x80487728 (address_range)
uint rt_EGG_Core_80487728(int);

// 0x0x80487744 (address_range)
int rt_EGG_Core_80487744(int);

// 0x0x80487750 (address_range)
int rt_EGG_Core_80487750(int, u32, u32, u32);

// 0x0x8048781c (address_range)
void rt_EGG_Core_8048781c(int);

// 0x0x804878a8 (address_range)
void EGG_Core_validate_804878a8(int);

// 0x0x80487af4 (address_range)
void rt_EGG_Core_80487af4(void);

// 0x0x80487df0 (address_range)
void rt_EGG_Core_80487df0(void);

// 0x0x80488240 (address_range)
int EGG_Core_validate_80488240(int, int);

// 0x0x80488280 (address_range)
int EGG_Core_validate_80488280(int, int);

// 0x0x804882c0 (address_range)
int rt_EGG_Core_804882c0(int, u32, u32, u32);

// 0x0x8048832c (address_range)
void rt_EGG_Core_8048832c(int, u32, u32);

// 0x0x80488390 (address_range)
void EGG_Core_assertFail_80488390(void);

// 0x0x804883e4 (address_range)
void rt_EGG_Core_804883e4(int);

// 0x0x804883ec (address_range)
void rt_EGG_Core_804883ec(int, u32);

// 0x0x80488498 (address_range)
void EGG_Core_assertFail_80488498(void);

// 0x0x804884ec (address_range)
void EGG_Core_validate_804884ec(int);

// 0x0x804886b8 (address_range)
void rt_EGG_Core_804886b8(int);

// 0x0x80488748 (address_range)
void EGG_Core_validate_80488748(int);

// 0x0x804888b4 (address_range)
void EGG_Core_assertFail_804888b4(void);

// 0x0x80488918 (address_range)
void EGG_Core_validate_80488918(int);

// 0x0x80488a78 (address_range)
void EGG_Core_assertFail_80488a78(void);

// 0x0x80488adc (address_range)
void EGG_Core_validate_80488adc(int);

// 0x0x80488c34 (address_range)
void EGG_Core_validate_80488c34(int);

// 0x0x80488da0 (address_range)
int EGG_Core_validate_80488da0(int, int);

// 0x0x80488de0 (address_range)
int EGG_Core_validate_80488de0(int, int);

// 0x0x80488e20 (address_range)
u32 * rt_EGG_Core_80488e20(u32);

// 0x0x80488e60 (address_range)
void rt_EGG_Core_80488e60(int);

// 0x0x80488f10 (address_range)
void rt_EGG_Core_80488f10(int);

// 0x0x80488f74 (address_range)
void rt_EGG_Core_80488f74(int);

// 0x0x80488fcc (address_range)
void rt_EGG_Core_80488fcc(int);

// 0x0x80489024 (address_range)
void EGG_Core_validate_80489024(u32, u32);

// 0x0x804890e4 (address_range)
void rt_EGG_Core_804890e4(void);

// 0x0x80489884 (address_range)
void rt_EGG_Core_80489884(int);

// 0x0x80489938 (address_range)
void EGG_Core_validate_80489938(u32);

// 0x0x804899f4 (address_range)
int EGG_Core_validate_804899f4(int, int);

// 0x0x80489a34 (address_range)
int EGG_Core_validate_80489a34(int, int);

// 0x0x80489a74 (address_range)
u32 * EGG_Core_validate_80489a74(u32, int);

// 0x0x80489b04 (address_range)
int EGG_Core_validate_80489b04(int, int);

// 0x0x80489b44 (address_range)
void EGG_Core_validate_80489b44(int);

// 0x0x80489ce4 (address_range)
void rt_EGG_Core_80489ce4(void);

// 0x0x80489fc4 (address_range)
void rt_EGG_Core_80489fc4(void);

// 0x0x8048a088 (address_range)
void rt_EGG_Core_8048a088(void);

// 0x0x8048a14c (address_range)
void rt_EGG_Core_8048a14c(void);

// 0x0x8048a210 (address_range)
void rt_EGG_Core_8048a210(void);

// 0x0x8048a2d4 (address_range)
void rt_EGG_Core_8048a2d4(void);

// 0x0x8048a3cc (address_range)
void rt_EGG_Core_8048a3cc(double, int, float);

// 0x0x8048a4c8 (address_range)
void rt_EGG_Core_8048a4c8(double, int, float);

// 0x0x8048a548 (address_range)
void rt_EGG_Core_8048a548(void);

// 0x0x8048a6bc (address_range)
void EGG_Core_validate_8048a6bc(int);

// 0x0x8048a78c (address_range)
void EGG_Core_validate_8048a78c(int);

// 0x0x8048a81c (address_range)
void EGG_Core_assertFail_8048a81c(void);

// 0x0x8048a8cc (address_range)
u32 * EGG_Core_validate_8048a8cc(u32, u32, u32, int);

// 0x0x8048a924 (address_range)
int * EGG_Core_validate_8048a924(int, int, int);

// 0x0x8048aa40 (address_range)
int EGG_Core_validate_8048aa40(int, int);

// 0x0x8048aa9c (address_range)
void rt_EGG_Core_8048aa9c(u32);

// 0x0x8048aaf4 (address_range)
void EGG_Core_assertFail_8048aaf4(void);

// 0x0x8048ab58 (address_range)
void EGG_Core_assertFail_8048ab58(void);

// 0x0x8048abe4 (address_range)
int EGG_Core_validate_8048abe4(int, int);

// 0x0x8048ac24 (address_range)
int EGG_Core_validate_8048ac24(int, int);

// 0x0x8048ad78 (address_range)
void EGG_Core_assertFail_8048ad78(void);

// 0x0x8048b01c (address_range)
int EGG_Core_validate_8048b01c(int, int);

// 0x0x8048b05c (address_range)
int EGG_Core_validate_8048b05c(int, int);

// 0x0x8048b09c (address_range)
void EGG_Core_validate_8048b09c(int);

// 0x0x8048b238 (address_range)
void rt_EGG_Core_8048b238(int, int);

// 0x0x8048bbec (address_range)
void rt_EGG_Core_8048bbec(void);

// 0x0x8048bc9c (address_range)
void rt_EGG_Core_8048bc9c(double, float, float);

// 0x0x8048bd64 (address_range)
void rt_EGG_Core_8048bd64(void);

// 0x0x8048c0d8 (address_range)
void rt_EGG_Core_8048c0d8(void);

// 0x0x8048c3e4 (address_range)
void rt_EGG_Core_8048c3e4(void);

// 0x0x8048c518 (address_range)
void rt_EGG_Core_8048c518(void);

// 0x0x8048cf48 (address_range)
void rt_EGG_Core_8048cf48(void);

// 0x0x8048d100 (address_range)
void EGG_Core_validate_8048d100(u32, u32);

// 0x0x8048d138 (address_range)
void rt_EGG_Core_8048d138(void);

// 0x0x8048d6a4 (address_range)
void rt_EGG_Core_8048d6a4(void);

// 0x0x8048d80c (address_range)
void rt_EGG_Core_8048d80c(void);

// 0x0x8048d998 (address_range)
void rt_EGG_Core_8048d998(void);

// 0x0x8048da24 (address_range)
void EGG_Core_assertFail_8048da24(void);

// 0x0x8048dc70 (address_range)
void rt_EGG_Core_8048dc70(int);

// 0x0x8048dd78 (address_range)
void EGG_Core_validate_8048dd78(int);

// 0x0x8048de24 (address_range)
void rt_EGG_Core_8048de24(double, int);

// 0x0x8048de44 (address_range)
void rt_EGG_Core_8048de44(int);

// 0x0x8048de88 (address_range)
void rt_EGG_Core_8048de88(int);

// 0x0x8048de9c (address_range)
void EGG_Core_assertFail_8048de9c(void);

// 0x0x8048e5b0 (address_range)
void EGG_Core_assertFail_8048e5b0(void);

// 0x0x8048e834 (address_range)
void rt_EGG_Core_8048e834(void);

// 0x0x8048ed98 (address_range)
int EGG_Core_validate_8048ed98(int, int);

// 0x0x8048edd8 (address_range)
void rt_EGG_Core_8048edd8(void);

// 0x0x8048f690 (address_range)
void rt_EGG_Core_8048f690(int);

// 0x0x8048f740 (address_range)
void rt_EGG_Core_8048f740(int, int);

// 0x0x8048f8e8 (address_range)
void rt_EGG_Core_8048f8e8(void);

// 0x0x8048f960 (address_range)
void rt_EGG_Core_8048f960(void);

// 0x0x8048fb20 (address_range)
void rt_EGG_Core_8048fb20(void);

// 0x0x8048fc00 (address_range)
void rt_EGG_Core_8048fc00(double, int);

// 0x0x8048fc6c (address_range)
void rt_EGG_Core_8048fc6c(int);

// 0x0x8048fcc0 (address_range)
void EGG_Core_validate_8048fcc0(double, int, u32, float);

// 0x0x8048fea8 (address_range)
void rt_EGG_Core_8048fea8(u32, u32);

// 0x0x8048ff1c (address_range)
u32 * rt_EGG_Core_8048ff1c(u32, u32, u32);

// 0x0x8048ff6c (address_range)
int EGG_Core_validate_8048ff6c(int, int);

// 0x0x8048ffac (address_range)
void EGG_Core_validate_8048ffac(int, int);

// 0x0x80490108 (address_range)
void EGG_Core_validate_80490108(int);

// 0x0x80490344 (address_range)
void rt_EGG_Core_80490344(int);

// 0x0x804903c0 (address_range)
void EGG_Core_validate_804903c0(int, int);

// 0x0x80490634 (address_range)
void EGG_Core_validate_80490634(int);

// 0x0x80490738 (address_range)
void EGG_Core_validate_80490738(int);

// 0x0x80490794 (address_range)
void EGG_Core_validate_80490794(int);

// 0x0x80490888 (address_range)
void rt_EGG_Core_80490888(void);

// 0x0x804913b4 (address_range)
u32 EGG_Core_validate_804913b4(u32);

// 0x0x8049144c (address_range)
int EGG_Core_validate_8049144c(void);

// 0x0x8049149c (address_range)
void rt_EGG_Core_8049149c(void);

// 0x0x804914d0 (address_range)
void EGG_Core_validate_804914d0(u32);

// 0x0x80491d44 (address_range)
u32 * EGG_Core_validate_80491d44(u32, int);

// 0x0x80491dfc (address_range)
void EGG_Core_assertFail_80491dfc(void);

// 0x0x80491fe4 (address_range)
int EGG_Core_validate_80491fe4(int, int);

// 0x0x80492074 (address_range)
void rt_EGG_Core_80492074(int);

// 0x0x804920d4 (address_range)
void rt_EGG_Core_804920d4(void);

// 0x0x8049231c (address_range)
void rt_EGG_Core_8049231c(void);

// 0x0x80492598 (address_range)
void rt_EGG_Core_80492598(void);

// 0x0x80492770 (address_range)
void rt_EGG_Core_80492770(void);

// 0x0x80492a18 (address_range)
void rt_EGG_Core_80492a18(int);

// 0x0x80492aa8 (address_range)
void rt_EGG_Core_80492aa8(char);

// 0x0x80492bcc (address_range)
int EGG_Core_validate_80492bcc(int, int);

// 0x0x80492c0c (address_range)
int EGG_Core_validate_80492c0c(int, int);

// 0x0x80492c6c (address_range)
void EGG_Core_validate_80492c6c(u32, u32);

// 0x0x80492d20 (address_range)
void rt_EGG_Core_80492d20(int);

// 0x0x80492da8 (address_range)
u32 rt_EGG_Core_80492da8(void);

// 0x0x80492db8 (address_range)
void EGG_Core_validate_80492db8(int);

// 0x0x80492f4c (address_range)
void rt_EGG_Core_80492f4c(int);

// 0x0x80492fc4 (address_range)
void rt_EGG_Core_80492fc4(void);

// 0x0x804931b0 (address_range)
void rt_EGG_Core_804931b0(int);

// 0x0x8049329c (address_range)
void EGG_Core_assertFail_8049329c(void);

// 0x0x80493780 (address_range)
void rt_EGG_Core_80493780(int);

// 0x0x80493858 (address_range)
void rt_EGG_Core_80493858(int);

// 0x0x80493908 (address_range)
void rt_EGG_Core_80493908(int);

// 0x0x80493954 (address_range)
void rt_EGG_Core_80493954(int);

// 0x0x804939b0 (address_range)
void EGG_Core_validate_804939b0(int);

// 0x0x80493a6c (address_range)
void EGG_Core_validate_80493a6c(int);

// 0x0x80493c54 (address_range)
bool rt_EGG_Core_80493c54(int);

// 0x0x80493cd4 (address_range)
void rt_EGG_Core_80493cd4(int, uint);

// 0x0x80493d78 (address_range)
void EGG_Core_validate_80493d78(int);

// 0x0x80493fd4 (address_range)
u32 * rt_EGG_Core_80493fd4(u32);

// 0x0x804945e4 (address_range)
int EGG_Core_validate_804945e4(int, int);

// 0x0x80494624 (address_range)
int EGG_Core_validate_80494624(int, int);

// 0x0x80494664 (address_range)
int EGG_Core_validate_80494664(int, int);

// 0x0x804946a4 (address_range)
void rt_EGG_Core_804946a4(int);

// 0x0x804946ac (address_range)
void rt_EGG_Core_804946ac(int);

// 0x0x80494c00 (address_range)
void rt_EGG_Core_80494c00(int);

// 0x0x80494dc8 (address_range)
void rt_EGG_Core_80494dc8(int);

// 0x0x80494ecc (address_range)
void rt_EGG_Core_80494ecc(int);

// 0x0x80495008 (address_range)
void rt_EGG_Core_80495008(int);

// 0x0x80495118 (address_range)
void rt_EGG_Core_80495118(int);

// 0x0x80495250 (address_range)
void rt_EGG_Core_80495250(int);

// 0x0x80495328 (address_range)
void rt_EGG_Core_80495328(int);

// 0x0x80495460 (address_range)
void rt_EGG_Core_80495460(int);

// 0x0x804954bc (address_range)
void rt_EGG_Core_804954bc(int);

// 0x0x804955dc (address_range)
void EGG_Core_validate_804955dc(int);

// 0x0x80495698 (address_range)
void rt_EGG_Core_80495698(int);

// 0x0x804957a4 (address_range)
void rt_EGG_Core_804957a4(int);

// 0x0x8049587c (address_range)
void rt_EGG_Core_8049587c(int);

// 0x0x804959f4 (address_range)
void EGG_Core_validate_804959f4(int);

// 0x0x80495b64 (address_range)
void rt_EGG_Core_80495b64(int);

// 0x0x80495c54 (address_range)
void rt_EGG_Core_80495c54(int);

// 0x0x80495d6c (address_range)
void rt_EGG_Core_80495d6c(int);

// 0x0x80495fc4 (address_range)
void rt_EGG_Core_80495fc4(int);

// 0x0x80496094 (address_range)
void rt_EGG_Core_80496094(void);

// 0x0x804962e8 (address_range)
void rt_EGG_Core_804962e8(int);

// 0x0x80496360 (address_range)
u32 * rt_EGG_Core_80496360(u32);

// 0x0x80496558 (address_range)
int EGG_Core_validate_80496558(int, int);

// 0x0x80496598 (address_range)
void rt_EGG_Core_80496598(int);

// 0x0x80496700 (address_range)
void rt_EGG_Core_80496700(int);

// 0x0x80496954 (address_range)
void rt_EGG_Core_80496954(int);

// 0x0x804969e4 (address_range)
void rt_EGG_Core_804969e4(int);

// 0x0x80496a5c (address_range)
void rt_EGG_Core_80496a5c(int);

// 0x0x80496b60 (address_range)
void EGG_Core_validate_80496b60(int);

// 0x0x80496c1c (address_range)
void rt_EGG_Core_80496c1c(int);

// 0x0x80496c78 (address_range)
void EGG_Core_validate_80496c78(int);

// 0x0x80496de8 (address_range)
void rt_EGG_Core_80496de8(int);

// 0x0x80496ed0 (address_range)
int EGG_Core_validate_80496ed0(int, int);

// 0x0x80496f10 (address_range)
int EGG_Core_validate_80496f10(int, int);

// 0x0x80496f50 (address_range)
void EGG_Core_validate_80496f50(int);

// 0x0x80496f98 (address_range)
void EGG_Core_validate_80496f98(int);

// 0x0x80496fc8 (address_range)
void EGG_Core_validate_80496fc8(int);

// 0x0x80497010 (address_range)
void EGG_Core_validate_80497010(int);

// 0x0x80497058 (address_range)
void EGG_Core_validate_80497058(int);

// 0x0x80497088 (address_range)
void EGG_Core_validate_80497088(int);

// 0x0x804970d0 (address_range)
void rt_EGG_Core_804970d0(void);

// 0x0x80497270 (address_range)
void rt_EGG_Core_80497270(double, int, int);

// 0x0x80497534 (address_range)
void rt_EGG_Core_80497534(int, int);

// 0x0x804975b8 (address_range)
void EGG_Core_validate_804975b8(u32, u32);

// 0x0x804976b4 (address_range)
void rt_EGG_Core_804976b4(int, uint);

// 0x0x8049776c (address_range)
void rt_EGG_Core_8049776c(int, uint);

// 0x0x804978ac (address_range)
int EGG_Core_validate_804978ac(int, int);

// 0x0x804978ec (address_range)
int EGG_Core_validate_804978ec(int, int);

// 0x0x8049792c (address_range)
void EGG_Core_validate_8049792c(u32, float, float);

// 0x0x80497a48 (address_range)
void EGG_Core_validate_80497a48(u32, float, float);

// 0x0x80497b64 (address_range)
u32 EGG_Core_validate_80497b64(float, float, float, int);

// 0x0x80497c50 (address_range)
u32 EGG_Core_validate_80497c50(float, float, float);

// 0x0x80497d00 (address_range)
void rt_EGG_Core_80497d00(float, float, float);

// 0x0x80497d9c (address_range)
void rt_EGG_Core_80497d9c(float, float, float, float);

// 0x0x80497e04 (address_range)
void rt_EGG_Core_80497e04(double, float, float, float);

// 0x0x80497e20 (address_range)
void rt_EGG_Core_80497e20(double, float, float, float);

// 0x0x80497e8c (address_range)
void rt_EGG_Core_80497e8c(double, byte, byte, byte);

// 0x0x80497f8c (address_range)
void rt_EGG_Core_80497f8c(double, u32, byte);

// 0x0x8049803c (address_range)
void EGG_Core_validate_8049803c(u64, u64, u64, u64, u64, u64, u64, u64, u32, u32, u32, u32, u32, u32, u32, u32);

// 0x0x804980e4 (address_range)
void EGG_Core_validate_804980e4(u32, u32, float);

// 0x0x804981c0 (address_range)
void EGG_Core_validate_804981c0(u32, u32, float);

// 0x0x80498268 (address_range)
bool rt_EGG_Core_80498268(int, float);

// 0x0x804983a0 (address_range)
u32 rt_EGG_Core_804983a0(int, float, float, float);

// 0x0x804984a8 (address_range)
int EGG_Core_validate_804984a8(int, int);

// 0x0x804984e8 (address_range)
u32 EGG_Core_validate_804984e8(u32);

// 0x0x80498580 (address_range)
int EGG_Core_validate_80498580(void);

// 0x0x80498604 (address_range)
int EGG_Core_validate_80498604(int, int);

// 0x0x80498678 (address_range)
int EGG_Core_validate_80498678(int, int);

// 0x0x80498720 (address_range)
void EGG_Core_validate_80498720(u32, int);

// 0x0x804988ec (address_range)
void EGG_Core_assertFail_804988ec(void);

// 0x0x80498ac0 (address_range)
void EGG_Core_assertFail_80498ac0(void);

// 0x0x80498b60 (address_range)
void EGG_Core_assertFail_80498b60(void);

// 0x0x80498c28 (address_range)
void EGG_Core_assertFail_80498c28(void);

// 0x0x80498cf0 (address_range)
void EGG_Core_assertFail_80498cf0(void);

// 0x0x80498dd0 (address_range)
int EGG_Core_validate_80498dd0(int, int);

// 0x0x80498e10 (address_range)
void EGG_Core_assertFail_80498e10(void);

// 0x0x80498e8c (address_range)
void rt_EGG_Core_80498e8c(void);

// 0x0x80498f98 (address_range)
void EGG_Core_assertFail_80498f98(void);

// 0x0x80499000 (address_range)
void EGG_Core_assertFail_80499000(void);

// 0x0x8049922c (address_range)
void EGG_Core_assertFail_8049922c(void);

// 0x0x80499414 (address_range)
void EGG_Core_assertFail_80499414(void);

// 0x0x8049960c (address_range)
void EGG_Core_validate_8049960c(int);

// 0x0x804996a4 (address_range)
void EGG_Core_validate_804996a4(u32, u32, u32);

// 0x0x80499ca0 (address_range)
void EGG_Core_validate_80499ca0(u32, u32);

// 0x0x80499fb8 (address_range)
void EGG_Core_assertFail_80499fb8(void);

// 0x0x8049a478 (address_range)
u32 * rt_EGG_Core_8049a478(u32);

// 0x0x8049a4cc (address_range)
int EGG_Core_validate_8049a4cc(int, int);

// 0x0x8049a524 (address_range)
void EGG_Core_validate_8049a524(u32, u32, u32);

// 0x0x8049a658 (address_range)
void EGG_Core_assertFail_8049a658(void);

// 0x0x8049ab90 (address_range)
void EGG_Core_validate_8049ab90(int);

// 0x0x8049abec (address_range)
void rt_EGG_Core_8049abec(int);

// 0x0x8049adf0 (address_range)
void EGG_Core_assertFail_8049adf0(void);

// 0x0x8049ae50 (address_range)
void rt_EGG_Core_8049ae50(int);

// 0x0x8049aed4 (address_range)
void rt_EGG_Core_8049aed4(void);

// 0x0x8049b0a4 (address_range)
void rt_EGG_Core_8049b0a4(void);

// 0x0x8049b288 (address_range)
void rt_EGG_Core_8049b288(u32, int);

// 0x0x8049b2e0 (address_range)
u32 * rt_EGG_Core_8049b2e0(u32);

// 0x0x8049b360 (address_range)
int EGG_Core_validate_8049b360(int, int);

// 0x0x8049b3bc (address_range)
void rt_EGG_Core_8049b3bc(void);

// 0x0x8049b4f4 (address_range)
void EGG_Core_validate_8049b4f4(int);

// 0x0x8049b6e0 (address_range)
void EGG_Core_validate_8049b6e0(u32, short, int, int, int, int, int);

// 0x0x8049b7cc (address_range)
void rt_EGG_Core_8049b7cc(void);

// 0x0x8049b8b8 (address_range)
void EGG_Core_validate_8049b8b8(int);

// 0x0x8049c404 (address_range)
void EGG_Core_assertFail_8049c404(void);

// 0x0x8049c4a8 (address_range)
void rt_EGG_Core_8049c4a8(void);

// 0x0x8049c5e8 (address_range)
void EGG_Core_assertFail_8049c5e8(void);

// 0x0x8049c6c4 (address_range)
void EGG_Core_assertFail_8049c6c4(void);

// 0x0x8049c7e8 (address_range)
void EGG_Core_validate_8049c7e8(int, byte);

// 0x0x8049c860 (address_range)
void EGG_Core_validate_8049c860(int);

// 0x0x8049cc14 (address_range)
void rt_EGG_Core_8049cc14(void);

// 0x0x8049cc78 (address_range)
void EGG_Core_validate_8049cc78(int, u32);

// 0x0x8049d020 (address_range)
u32 EGG_Core_validate_8049d020(int);

// 0x0x8049d078 (address_range)
u32 EGG_Core_validate_8049d078(int);

// 0x0x8049d0d0 (address_range)
u32 EGG_Core_validate_8049d0d0(int);

// 0x0x8049d128 (address_range)
u32 EGG_Core_validate_8049d128(int);

// 0x0x8049d180 (address_range)
u32 EGG_Core_validate_8049d180(int);

// 0x0x8049d1d8 (address_range)
u32 EGG_Core_validate_8049d1d8(int);

// 0x0x8049d230 (address_range)
u32 EGG_Core_validate_8049d230(int);

// 0x0x8049d288 (address_range)
u32 * rt_EGG_Core_8049d288(u32);

// 0x0x8049d2cc (address_range)
int EGG_Core_validate_8049d2cc(int, int);

// 0x0x8049d324 (address_range)
void rt_EGG_Core_8049d324(int);

// 0x0x8049d3b4 (address_range)
u32 * rt_EGG_Core_8049d3b4(u32);

// 0x0x8049d3f8 (address_range)
int EGG_Core_validate_8049d3f8(int, int);

// 0x0x8049d450 (address_range)
void rt_EGG_Core_8049d450(int);

// 0x0x8049d494 (address_range)
u32 * rt_EGG_Core_8049d494(u32, u32, u32);

// 0x0x8049d4e0 (address_range)
void rt_EGG_Core_8049d4e0(int);

// 0x0x8049d534 (address_range)
void rt_EGG_Core_8049d534(int);

// 0x0x8049d600 (address_range)
void rt_EGG_Core_8049d600(int);

// 0x0x8049d684 (address_range)
void EGG_Core_validate_8049d684(u32, u32, u32);

// 0x0x8049d7fc (address_range)
int EGG_Core_validate_8049d7fc(int, int);

// 0x0x8049d860 (address_range)
void EGG_Core_assertFail_8049d860(void);

// 0x0x8049da24 (address_range)
void EGG_Core_validate_8049da24(u32, u32, u32);

// 0x0x8049dba8 (address_range)
int EGG_Core_validate_8049dba8(int, int);

// 0x0x8049dc10 (address_range)
int EGG_Core_validate_8049dc10(int, int);

// 0x0x8049dc70 (address_range)
void EGG_Core_validate_8049dc70(u32);

// 0x0x8049dccc (address_range)
void EGG_Core_validate_8049dccc(int);

// 0x0x8049de9c (address_range)
void rt_EGG_Core_8049de9c(int);

// 0x0x8049dffc (address_range)
void EGG_Core_validate_8049dffc(int, float, float);

// 0x0x8049e2e8 (address_range)
void rt_EGG_Core_8049e2e8(void);

// 0x0x8049ece0 (address_range)
void rt_EGG_Core_8049ece0(void);

// 0x0x8049ee60 (address_range)
void rt_EGG_Core_8049ee60(void);

// 0x0x8049efb8 (address_range)
void EGG_Core_validate_8049efb8(int, u32, u32);

// 0x0x8049f0f0 (address_range)
void EGG_Core_validate_8049f0f0(int, u32, float);

// 0x0x8049f2c8 (address_range)
void EGG_Core_validate_8049f2c8(int, u32, int, u32);

// 0x0x8049f414 (address_range)
void EGG_Core_validate_8049f414(int, u32, u32);

// 0x0x8049f5c0 (address_range)
void rt_EGG_Core_8049f5c0(void);

// 0x0x8049f85c (address_range)
int EGG_Core_validate_8049f85c(int, int);

// 0x0x8049f89c (address_range)
void rt_EGG_Core_8049f89c(void);

// 0x0x8049fc14 (address_range)
void EGG_Core_assertFail_8049fc14(void);

// 0x0x8049fec0 (address_range)
void EGG_Core_validate_8049fec0(u32, int, uint, float, float, u32);

// 0x0x804a00c4 (address_range)
void EGG_Gfx_assertFail_804a00c4(void);

// 0x0x804a0430 (address_range)
void rt_EGG_Gfx_804a0430(void);

// 0x0x804a0aa0 (address_range)
void rt_EGG_Gfx_804a0aa0(void);

// 0x0x804a1134 (address_range)
void EGG_Gfx_validate_804a1134(double, double, int, float, u32);

// 0x0x804a1220 (address_range)
void EGG_Gfx_validate_804a1220(int, float, u32);

// 0x0x804a12d0 (address_range)
void rt_EGG_Gfx_804a12d0(void);

// 0x0x804a135c (address_range)
u32 * rt_EGG_Gfx_804a135c(u32);

// 0x0x804a1394 (address_range)
void rt_EGG_Gfx_804a1394(u32);

// 0x0x804a1434 (address_range)
u16 * rt_EGG_Gfx_804a1434(u16);

// 0x0x804a14a8 (address_range)
void rt_EGG_Gfx_804a14a8(short);

// 0x0x804a1598 (address_range)
void EGG_Gfx_validate_804a1598(u32, int);

// 0x0x804a15f8 (address_range)
int EGG_Gfx_validate_804a15f8(int, int);

// 0x0x804a1638 (address_range)
void EGG_Gfx_validate_804a1638(short, short);

// 0x0x804a18d4 (address_range)
void rt_EGG_Gfx_804a18d4(void);

// 0x0x804a1afc (address_range)
u32 * rt_EGG_Gfx_804a1afc(u32, u32, uint, uint);

// 0x0x804a1b6c (address_range)
u32 * rt_EGG_Gfx_804a1b6c(u32, uint);

// 0x0x804a1bc0 (address_range)
int EGG_Gfx_validate_804a1bc0(int, int);

// 0x0x804a1c18 (address_range)
void rt_EGG_Gfx_804a1c18(u32, int, int, int);

// 0x0x804a1d1c (address_range)
u32 EGG_Gfx_validate_804a1d1c(u32);

// 0x0x804a1db4 (address_range)
int EGG_Gfx_validate_804a1db4(void);

// 0x0x804a1e74 (address_range)
void rt_EGG_Gfx_804a1e74(void);

// 0x0x804a1ea8 (address_range)
void EGG_Gfx_validate_804a1ea8(int);

// 0x0x804a1f3c (address_range)
u32 * EGG_Gfx_validate_804a1f3c(u32, int);

// 0x0x804a1fd8 (address_range)
void EGG_Gfx_validate_804a1fd8(int);

// 0x0x804a1fe0 (address_range)
void EGG_Gfx_validate_804a1fe0(int);

// 0x0x804a1fe8 (address_range)
void EGG_Gfx_validate_804a1fe8(int);

// 0x0x804a20b8 (address_range)
void EGG_Gfx_validate_804a20b8(int);

// 0x0x804a2188 (address_range)
void rt_EGG_Gfx_804a2188(void);

// 0x0x804a22b8 (address_range)
void EGG_Gfx_validate_804a22b8(u32, u32, uint);

// 0x0x804a2310 (address_range)
void EGG_Gfx_assertFail_804a2310(void);

// 0x0x804a2360 (address_range)
int rt_EGG_Gfx_804a2360(int, int);

// 0x0x804a24ac (address_range)
int EGG_Gfx_validate_804a24ac(int, int);

// 0x0x804a24ec (address_range)
int EGG_Gfx_validate_804a24ec(int, int);

// 0x0x804a252c (address_range)
void rt_EGG_Gfx_804a252c(int);

// 0x0x804a25d0 (address_range)
void rt_EGG_Gfx_804a25d0(int, int);

// 0x0x804a267c (address_range)
void rt_EGG_Gfx_804a267c(int);

// 0x0x804a26b0 (address_range)
void rt_EGG_Gfx_804a26b0(int);

// 0x0x804a2784 (address_range)
void rt_EGG_Gfx_804a2784(int, int);

// 0x0x804a2834 (address_range)
void EGG_Gfx_validate_804a2834(int);

// 0x0x804a2a78 (address_range)
void EGG_Gfx_validate_804a2a78(int);

// 0x0x804a2bc4 (address_range)
int EGG_Gfx_validate_804a2bc4(int, int);

// 0x0x804a2c04 (address_range)
void EGG_Gfx_assertFail_804a2c04(void);

// 0x0x804a2d3c (address_range)
void EGG_Gfx_validate_804a2d3c(int);

// 0x0x804a2d98 (address_range)
int EGG_Gfx_validate_804a2d98(int, int);

// 0x0x804a2df0 (address_range)
void rt_EGG_Gfx_804a2df0(int);

// 0x0x804a2e38 (address_range)
void rt_EGG_Gfx_804a2e38(int);

// 0x0x804a2f1c (address_range)
void rt_EGG_Gfx_804a2f1c(int);

// 0x0x804a2f68 (address_range)
void rt_EGG_Gfx_804a2f68(void);

// 0x0x804a38b8 (address_range)
void rt_EGG_Gfx_804a38b8(int);

// 0x0x804a3a88 (address_range)
void EGG_Gfx_validate_804a3a88(int, uint, char);

// 0x0x804a3cf4 (address_range)
void rt_EGG_Gfx_804a3cf4(void);

// 0x0x804a3f10 (address_range)
void rt_EGG_Gfx_804a3f10(void);

// 0x0x804a44cc (address_range)
void EGG_Gfx_validate_804a44cc(int, int);

// 0x0x804a462c (address_range)
int rt_EGG_Gfx_804a462c(int, u32, u32);

// 0x0x804a4688 (address_range)
void rt_EGG_Gfx_804a4688(int);

// 0x0x804a46e0 (address_range)
void EGG_Gfx_validate_804a46e0(int);

// 0x0x804a4840 (address_range)
void rt_EGG_Gfx_804a4840(void);

// 0x0x804a4ccc (address_range)
void rt_EGG_Gfx_804a4ccc(int);

// 0x0x804a4f14 (address_range)
void rt_EGG_Gfx_804a4f14(void);

// 0x0x804a5140 (address_range)
void rt_EGG_Gfx_804a5140(int, u32);

// 0x0x804a51a0 (address_range)
void rt_EGG_Gfx_804a51a0(void);

// 0x0x804a5324 (address_range)
void rt_EGG_Gfx_804a5324(void);

// 0x0x804a54d4 (address_range)
void rt_EGG_Gfx_804a54d4(void);

// 0x0x804a5820 (address_range)
void rt_EGG_Gfx_804a5820(u32, float, float);

// 0x0x804a58f0 (address_range)
void rt_EGG_Gfx_804a58f0(double, u32, u32);

// 0x0x804a5910 (address_range)
u32 rt_EGG_Gfx_804a5910(int);

// 0x0x804a59dc (address_range)
void rt_EGG_Gfx_804a59dc(void);

// 0x0x804a5b3c (address_range)
void rt_EGG_Gfx_804a5b3c(void);

// 0x0x804a5bdc (address_range)
u32 rt_EGG_Gfx_804a5bdc(u32, u32, float);

// 0x0x804a5ce8 (address_range)
void EGG_Gfx_assertFail_804a5ce8(void);

// 0x0x804a5eac (address_range)
void rt_EGG_Gfx_804a5eac(u32, int, int, float);

// 0x0x804a5f8c (address_range)
void rt_EGG_Gfx_804a5f8c(u32, int, int, float);

// 0x0x804a604c (address_range)
void EGG_Gfx_assertFail_804a604c(void);

// 0x0x804a610c (address_range)
double rt_EGG_Gfx_804a610c(void);

// 0x0x804a6148 (address_range)
void rt_EGG_Gfx_804a6148(void);

// 0x0x804a635c (address_range)
void rt_EGG_Gfx_804a635c(int, u32);

// 0x0x804a64d4 (address_range)
void rt_EGG_Gfx_804a64d4(int);

// 0x0x804a6624 (address_range)
void rt_EGG_Gfx_804a6624(int);

// 0x0x804a66e0 (address_range)
void rt_EGG_Gfx_804a66e0(int);

// 0x0x804a6968 (address_range)
void rt_EGG_Gfx_804a6968(int);

// 0x0x804a6a04 (address_range)
void EGG_Gfx_assertFail_804a6a04(void);

// 0x0x804a6b6c (address_range)
void rt_EGG_Gfx_804a6b6c(void);

// 0x0x804a6d64 (address_range)
void rt_EGG_Gfx_804a6d64(void);

// 0x0x804a6f24 (address_range)
int EGG_Gfx_validate_804a6f24(int, int);

// 0x0x804a6f64 (address_range)
int EGG_Gfx_validate_804a6f64(int, int);

// 0x0x804a6fac (address_range)
u32 EGG_Gfx_validate_804a6fac(u32);

// 0x0x804a7044 (address_range)
int EGG_Gfx_validate_804a7044(void);

// 0x0x804a70d4 (address_range)
void rt_EGG_Gfx_804a70d4(void);

// 0x0x804a7108 (address_range)
void EGG_Gfx_validate_804a7108(int);

// 0x0x804a716c (address_range)
u32 * EGG_Gfx_validate_804a716c(u32, int);

// 0x0x804a7284 (address_range)
void rt_EGG_Gfx_804a7284(int);

// 0x0x804a72d8 (address_range)
void EGG_Gfx_validate_804a72d8(int, u32);

// 0x0x804a7530 (address_range)
void rt_EGG_Gfx_804a7530(int);

// 0x0x804a7584 (address_range)
void rt_EGG_Gfx_804a7584(int, u32);

// 0x0x804a75d8 (address_range)
void rt_EGG_Gfx_804a75d8(int);

// 0x0x804a75f0 (address_range)
void rt_EGG_Gfx_804a75f0(int);

// 0x0x804a7608 (address_range)
void rt_EGG_Gfx_804a7608(int);

// 0x0x804a7620 (address_range)
void rt_EGG_Gfx_804a7620(int, u32);

// 0x0x804a762c (address_range)
void rt_EGG_Gfx_804a762c(int);

// 0x0x804a7644 (address_range)
void rt_EGG_Gfx_804a7644(int);

// 0x0x804a765c (address_range)
void rt_EGG_Gfx_804a765c(int);

// 0x0x804a7664 (address_range)
int rt_EGG_Gfx_804a7664(int, uint);

// 0x0x804a76cc (address_range)
u32 rt_EGG_Gfx_804a76cc(int);

// 0x0x804a7724 (address_range)
u32 rt_EGG_Gfx_804a7724(int, uint);

// 0x0x804a7734 (address_range)
uint rt_EGG_Gfx_804a7734(void);

// 0x0x804a77f4 (address_range)
u32 * rt_EGG_Gfx_804a77f4(u32);

// 0x0x804a7850 (address_range)
int EGG_Gfx_validate_804a7850(int, int);

// 0x0x804a78a8 (address_range)
void EGG_Gfx_validate_804a78a8(int);

// 0x0x804a794c (address_range)
void EGG_Gfx_validate_804a794c(int);

// 0x0x804a79a8 (address_range)
void EGG_Gfx_validate_804a79a8(int, int);

// 0x0x804a7a14 (address_range)
u32 * rt_EGG_Gfx_804a7a14(u32, u32);

// 0x0x804a7a6c (address_range)
int EGG_Gfx_validate_804a7a6c(int, int);

// 0x0x804a7ac4 (address_range)
void EGG_Gfx_validate_804a7ac4(int);

// 0x0x804a7b2c (address_range)
u32 * rt_EGG_Gfx_804a7b2c(u32);

// 0x0x804a7b7c (address_range)
void rt_EGG_Gfx_804a7b7c(int);

// 0x0x804a7bbc (address_range)
void rt_EGG_Gfx_804a7bbc(int);

// 0x0x804a7d44 (address_range)
u32 * rt_EGG_Gfx_804a7d44(u32);

// 0x0x804a7d88 (address_range)
void rt_EGG_Gfx_804a7d88(int);

// 0x0x804a7dcc (address_range)
u32 EGG_Gfx_validate_804a7dcc(u32);

// 0x0x804a7ef8 (address_range)
int EGG_Gfx_validate_804a7ef8(void);

// 0x0x804a7f98 (address_range)
void EGG_Gfx_assertFail_804a7f98(void);

// 0x0x804a804c (address_range)
u32 * EGG_Gfx_validate_804a804c(u32, int);

// 0x0x804a80f0 (address_range)
void EGG_Gfx_assertFail_804a80f0(void);

// 0x0x804a8164 (address_range)
void EGG_Gfx_validate_804a8164(int, char);

// 0x0x804a82dc (address_range)
void EGG_Gfx_assertFail_804a82dc(void);

// 0x0x804a83a8 (address_range)
void EGG_Gfx_assertFail_804a83a8(void);

// 0x0x804a847c (address_range)
void EGG_Gfx_validate_804a847c(int, int);

// 0x0x804a8694 (address_range)
void EGG_Gfx_validate_804a8694(int, int);

// 0x0x804a87f8 (address_range)
void EGG_Gfx_validate_804a87f8(int);

// 0x0x804a889c (address_range)
void rt_EGG_Gfx_804a889c(void);

// 0x0x804a8900 (address_range)
u32 rt_EGG_Gfx_804a8900(int);

// 0x0x804a8954 (address_range)
int EGG_Gfx_validate_804a8954(int, int);

// 0x0x804a8994 (address_range)
int EGG_Gfx_validate_804a8994(int, int);

// 0x0x804a8aac (address_range)
void rt_EGG_Gfx_804a8aac(int);

// 0x0x804a8b1c (address_range)
void rt_EGG_Gfx_804a8b1c(void);

// 0x0x804a8c1c (address_range)
void rt_EGG_Gfx_804a8c1c(int, int);

// 0x0x804a8cac (address_range)
int EGG_Gfx_validate_804a8cac(int, int);

// 0x0x804a8cec (address_range)
int EGG_Gfx_validate_804a8cec(int, int);

// 0x0x804a8d30 (address_range)
void EGG_Gfx_validate_804a8d30(int);

// 0x0x804a8d8c (address_range)
void EGG_Gfx_validate_804a8d8c(int);

// 0x0x804a8de8 (address_range)
void EGG_Gfx_validate_804a8de8(int);

// 0x0x804a8e44 (address_range)
u32 EGG_Gfx_validate_804a8e44(int);

// 0x0x804a8eac (address_range)
void rt_EGG_Gfx_804a8eac(u32);

// 0x0x804a8f00 (address_range)
void EGG_Gfx_validate_804a8f00(int);

// 0x0x804a8fe8 (address_range)
void rt_EGG_Gfx_804a8fe8(int, int);

// 0x0x804a9020 (address_range)
u32 * rt_EGG_Gfx_804a9020(u32);

// 0x0x804a9064 (address_range)
int EGG_Gfx_validate_804a9064(int, int);

// 0x0x804a90cc (address_range)
void rt_EGG_Gfx_804a90cc(int);

// 0x0x804a9164 (address_range)
void rt_EGG_Gfx_804a9164(int);

// 0x0x804a9170 (address_range)
u32 * rt_EGG_Gfx_804a9170(u32);

// 0x0x804a91d8 (address_range)
int EGG_Gfx_validate_804a91d8(int, int);

// 0x0x804a926c (address_range)
void rt_EGG_Gfx_804a926c(int);

// 0x0x804a9378 (address_range)
u32 * rt_EGG_Gfx_804a9378(u32);

// 0x0x804a93f0 (address_range)
int EGG_Gfx_validate_804a93f0(int, int);

// 0x0x804a9448 (address_range)
u32 * EGG_Gfx_validate_804a9448(u32, int);

// 0x0x804a9504 (address_range)
void EGG_Gfx_validate_804a9504(int);

// 0x0x804a96a0 (address_range)
void rt_EGG_Gfx_804a96a0(int);

// 0x0x804a96f0 (address_range)
void rt_EGG_Gfx_804a96f0(int);

// 0x0x804a97a4 (address_range)
u32 * rt_EGG_Gfx_804a97a4(u32);

// 0x0x804a98ac (address_range)
int EGG_Gfx_validate_804a98ac(int, int);

// 0x0x804a9914 (address_range)
void rt_EGG_Gfx_804a9914(int, u32, u32, u32, int, u32, u32);

// 0x0x804a9b1c (address_range)
void EGG_Gfx_validate_804a9b1c(int, int);

// 0x0x804a9ec4 (address_range)
void rt_EGG_Gfx_804a9ec4(int, u32, u32);

// 0x0x804a9edc (address_range)
void rt_EGG_Gfx_804a9edc(int, u32);

// 0x0x804a9ee4 (address_range)
void rt_EGG_Gfx_804a9ee4(int, u32);

// 0x0x804a9eec (address_range)
void rt_EGG_Gfx_804a9eec(int, u32);

// 0x0x804a9f40 (address_range)
void rt_EGG_Gfx_804a9f40(int, u32);

// 0x0x804a9f54 (address_range)
void rt_EGG_Gfx_804a9f54(int);

// 0x0x804a9fd0 (address_range)
void rt_EGG_Gfx_804a9fd0(int, u32);

// 0x0x804a9fdc (address_range)
void rt_EGG_Gfx_804a9fdc(int);

// 0x0x804aa194 (address_range)
void rt_EGG_Gfx_804aa194(int);

// 0x0x804aa340 (address_range)
u32 rt_EGG_Gfx_804aa340(int);

// 0x0x804aa384 (address_range)
void EGG_Gfx_validate_804aa384(int);

// 0x0x804aa3f8 (address_range)
void EGG_Gfx_validate_804aa3f8(int, u32);

// 0x0x804aa52c (address_range)
void EGG_Gfx_validate_804aa52c(int, int);

// 0x0x804aa754 (address_range)
void rt_EGG_Gfx_804aa754(int, u32, u32);

// 0x0x804aa82c (address_range)
void rt_EGG_Gfx_804aa82c(int, u32);

// 0x0x804aa844 (address_range)
u32 * rt_EGG_Gfx_804aa844(u32);

// 0x0x804aa958 (address_range)
int EGG_Gfx_validate_804aa958(int, int);

// 0x0x804aaa24 (address_range)
void EGG_Gfx_validate_804aaa24(int, u32, u32);

// 0x0x804aaa80 (address_range)
u32 * rt_EGG_Gfx_804aaa80(u32);

// 0x0x804aaabc (address_range)
int EGG_Gfx_validate_804aaabc(int, int);

// 0x0x804aab14 (address_range)
void rt_EGG_Gfx_804aab14(int);

// 0x0x804aabd0 (address_range)
void rt_EGG_Gfx_804aabd0(int);

// 0x0x804aaca4 (address_range)
void rt_EGG_Gfx_804aaca4(int);

// 0x0x804ab03c (address_range)
void rt_EGG_Gfx_804ab03c(int);

// 0x0x804ab298 (address_range)
void rt_EGG_Gfx_804ab298(int);

// 0x0x804ab4cc (address_range)
void rt_EGG_Gfx_804ab4cc(int);

// 0x0x804ab5c8 (address_range)
u32 * rt_EGG_Gfx_804ab5c8(u32);

// 0x0x804ab770 (address_range)
int EGG_Gfx_validate_804ab770(int, int);

// 0x0x804ab7c8 (address_range)
int EGG_Gfx_validate_804ab7c8(int, int);

// 0x0x804ab820 (address_range)
int EGG_Gfx_validate_804ab820(int, int);

// 0x0x804ab904 (address_range)
void EGG_Gfx_assertFail_804ab904(void);

// 0x0x804abf90 (address_range)
void rt_EGG_Gfx_804abf90(int);

// 0x0x804abfe8 (address_range)
void rt_EGG_Gfx_804abfe8(int, int);

// 0x0x804ac540 (address_range)
int EGG_Gfx_validate_804ac540(int, int);

// 0x0x804ac5f0 (address_range)
void rt_EGG_Gfx_804ac5f0(int);

// 0x0x804ac908 (address_range)
void rt_EGG_Gfx_804ac908(int);

// 0x0x804ac960 (address_range)
void rt_EGG_Gfx_804ac960(int, int);

// 0x0x804acab4 (address_range)
u32 * rt_EGG_Gfx_804acab4(u32);

// 0x0x804acc24 (address_range)
int EGG_Gfx_validate_804acc24(int, int);

// 0x0x804accd4 (address_range)
void rt_EGG_Gfx_804accd4(int);

// 0x0x804acf44 (address_range)
void rt_EGG_Gfx_804acf44(int);

// 0x0x804acfac (address_range)
void rt_EGG_Gfx_804acfac(int, int);

// 0x0x804ad280 (address_range)
void EGG_Gfx_validate_804ad280(int, u32, u32);

// 0x0x804ad2b0 (address_range)
void EGG_Gfx_validate_804ad2b0(int, u32, u32);

// 0x0x804ad2e0 (address_range)
void EGG_Gfx_validate_804ad2e0(int, u32, u32);

// 0x0x804ad310 (address_range)
void EGG_Gfx_validate_804ad310(int, u32);

// 0x0x804ad340 (address_range)
void EGG_Gfx_validate_804ad340(int, u32);

// 0x0x804ad370 (address_range)
void EGG_Gfx_validate_804ad370(int, u32);

// 0x0x804ad3cc (address_range)
u32 * rt_EGG_Gfx_804ad3cc(u32);

// 0x0x804ad524 (address_range)
int EGG_Gfx_validate_804ad524(int, int);

// 0x0x804ad5c4 (address_range)
void rt_EGG_Gfx_804ad5c4(int);

// 0x0x804ad798 (address_range)
void rt_EGG_Gfx_804ad798(int);

// 0x0x804ad828 (address_range)
void rt_EGG_Gfx_804ad828(int);

// 0x0x804ad8b4 (address_range)
void rt_EGG_Gfx_804ad8b4(int);

// 0x0x804ad8bc (address_range)
void rt_EGG_Gfx_804ad8bc(int);

// 0x0x804ad8c4 (address_range)
void rt_EGG_Gfx_804ad8c4(int);

// 0x0x804ad8cc (address_range)
void rt_EGG_Gfx_804ad8cc(int, u32);

// 0x0x804ad948 (address_range)
void rt_EGG_Gfx_804ad948(int, u32);

// 0x0x804ad9c4 (address_range)
void rt_EGG_Gfx_804ad9c4(int);

// 0x0x804ada7c (address_range)
void EGG_Gfx_validate_804ada7c(int, u32, u32);

// 0x0x804adaac (address_range)
void EGG_Gfx_validate_804adaac(int, u32);

// 0x0x804adaf0 (address_range)
void rt_EGG_Gfx_804adaf0(u32);

// 0x0x804adb0c (address_range)
u32 EGG_Gfx_validate_804adb0c(int);

// 0x0x804adb6c (address_range)
void EGG_Gfx_validate_804adb6c(int, int, int);

// 0x0x804add2c (address_range)
void EGG_Gfx_validate_804add2c(int, u32, int);

// 0x0x804adee8 (address_range)
void rt_EGG_Gfx_804adee8(int, int, u32, u32);

// 0x0x804adf10 (address_range)
void rt_EGG_Gfx_804adf10(int);

// 0x0x804adf74 (address_range)
void rt_EGG_Gfx_804adf74(int);

// 0x0x804adfe4 (address_range)
void rt_EGG_Gfx_804adfe4(int);

// 0x0x804ae054 (address_range)
void rt_EGG_Gfx_804ae054(int, u32);

// 0x0x804ae168 (address_range)
void rt_EGG_Gfx_804ae168(int);

// 0x0x804ae1cc (address_range)
u32 rt_EGG_Gfx_804ae1cc(int, int);

// 0x0x804ae1dc (address_range)
void rt_EGG_Gfx_804ae1dc(int, int);

// 0x0x804ae324 (address_range)
void rt_EGG_Gfx_804ae324(u32, u32);

// 0x0x804ae32c (address_range)
int EGG_Gfx_validate_804ae32c(int, int);

// 0x0x804ae36c (address_range)
void EGG_Gfx_validate_804ae36c(int, u32, u32);

// 0x0x804ae58c (address_range)
void rt_EGG_Gfx_804ae58c(int, u32);

// 0x0x804ae640 (address_range)
void EGG_Gfx_assertFail_804ae640(void);

// 0x0x804ae924 (address_range)
u32 EGG_Gfx_validate_804ae924(u32, int);

// 0x0x804ae9bc (address_range)
u32 EGG_Gfx_validate_804ae9bc(u32, int);

// 0x0x804aea34 (address_range)
u32 EGG_Gfx_validate_804aea34(int, u32);

// 0x0x804aeab4 (address_range)
void rt_EGG_Gfx_804aeab4(int, int);

// 0x0x804aeb7c (address_range)
void rt_EGG_Gfx_804aeb7c(int, int);

// 0x0x804aec5c (address_range)
void rt_EGG_Gfx_804aec5c(u32, u32, int);

// 0x0x804aed04 (address_range)
void rt_EGG_Gfx_804aed04(u32);

// 0x0x804aed24 (address_range)
int EGG_Gfx_validate_804aed24(int, int);

// 0x0x804aed64 (address_range)
void rt_EGG_Gfx_804aed64(double, float);

// 0x0x804aed7c (address_range)
void rt_EGG_Gfx_804aed7c(float);

// 0x0x804aee0c (address_range)
u32 * rt_EGG_Gfx_804aee0c(u32);

// 0x0x804aee50 (address_range)
int EGG_Gfx_validate_804aee50(int, int);

// 0x0x804aeea8 (address_range)
void rt_EGG_Gfx_804aeea8(int, u32);

// 0x0x804aef34 (address_range)
void rt_EGG_Gfx_804aef34(void);

// 0x0x804af1b4 (address_range)
void rt_EGG_Gfx_804af1b4(void);

// 0x0x804af4b8 (address_range)
void EGG_Gfx_validate_804af4b8(int);

// 0x0x804af568 (address_range)
void EGG_Gfx_validate_804af568(int);

// 0x0x804af618 (address_range)
void rt_EGG_Gfx_804af618(void);

// 0x0x804af8a0 (address_range)
u32 * rt_EGG_Gfx_804af8a0(u32);

// 0x0x804af924 (address_range)
int EGG_Gfx_validate_804af924(int, int);

// 0x0x804af98c (address_range)
void rt_EGG_Gfx_804af98c(int);

// 0x0x804afa08 (address_range)
void rt_EGG_Gfx_804afa08(int);

// 0x0x804afbd0 (address_range)
void EGG_Gfx_validate_804afbd0(int);

// 0x0x804b0248 (address_range)
void rt_EGG_Gfx_804b0248(int);

// 0x0x804b0918 (address_range)
void rt_EGG_Gfx_804b0918(int);

// 0x0x804b0b38 (address_range)
void rt_EGG_Gfx_804b0b38(int);

// 0x0x804b0cf8 (address_range)
void rt_EGG_Gfx_804b0cf8(void);

// 0x0x804b0d68 (address_range)
void EGG_Gfx_assertFail_804b0d68(void);

// 0x0x804b0fa8 (address_range)
int EGG_Gfx_validate_804b0fa8(int, int);

// 0x0x804b1084 (address_range)
void rt_EGG_Gfx_804b1084(int);

// 0x0x804b1358 (address_range)
void rt_EGG_Gfx_804b1358(int);

// 0x0x804b14a8 (address_range)
void rt_EGG_Gfx_804b14a8(int);

// 0x0x804b14e8 (address_range)
void rt_EGG_Gfx_804b14e8(int);

// 0x0x804b1828 (address_range)
void rt_EGG_Gfx_804b1828(int);

// 0x0x804b1914 (address_range)
void rt_EGG_Gfx_804b1914(int);

// 0x0x804b19f8 (address_range)
void rt_EGG_Gfx_804b19f8(int);

// 0x0x804b1ad8 (address_range)
void rt_EGG_Gfx_804b1ad8(int, u32);

// 0x0x804b1ca4 (address_range)
void rt_EGG_Gfx_804b1ca4(int, u32);

// 0x0x804b1ffc (address_range)
void rt_EGG_Gfx_804b1ffc(int);

// 0x0x804b20f8 (address_range)
void rt_EGG_Gfx_804b20f8(int, u32);

// 0x0x804b2208 (address_range)
void rt_EGG_Gfx_804b2208(void);

// 0x0x804b23d8 (address_range)
u32 rt_EGG_Gfx_804b23d8(u32, int);

// 0x0x804b2488 (address_range)
void rt_EGG_Gfx_804b2488(int);

// 0x0x804b2580 (address_range)
u32 * rt_EGG_Gfx_804b2580(u32);

// 0x0x804b2654 (address_range)
int EGG_Gfx_validate_804b2654(int, int);

// 0x0x804b26f8 (address_range)
void rt_EGG_Gfx_804b26f8(int);

// 0x0x804b2898 (address_range)
void rt_EGG_Gfx_804b2898(int);

// 0x0x804b28dc (address_range)
void rt_EGG_Gfx_804b28dc(int, u32);

// 0x0x804b2920 (address_range)
void rt_EGG_Gfx_804b2920(int, u32);

// 0x0x804b2998 (address_range)
void EGG_Gfx_validate_804b2998(int, u32, u32);

// 0x0x804b29c8 (address_range)
void EGG_Gfx_validate_804b29c8(int, u32, u32);

// 0x0x804b29f8 (address_range)
void EGG_Gfx_validate_804b29f8(int, u32, u32);

// 0x0x804b2a28 (address_range)
void EGG_Gfx_validate_804b2a28(int, u32);

// 0x0x804b2a58 (address_range)
void EGG_Gfx_validate_804b2a58(int, u32);

// 0x0x804b2ab4 (address_range)
u32 * rt_EGG_Gfx_804b2ab4(u32);

// 0x0x804b2af8 (address_range)
int EGG_Gfx_validate_804b2af8(int, int);

// 0x0x804b2b50 (address_range)
void EGG_Gfx_assertFail_804b2b50(void);

// 0x0x804b2e5c (address_range)
void rt_EGG_Gfx_804b2e5c(int);

// 0x0x804b2fac (address_range)
void EGG_Gfx_assertFail_804b2fac(void);

// 0x0x804b3624 (address_range)
void EGG_Gfx_validate_804b3624(u32);

// 0x0x804b3688 (address_range)
u32 EGG_Gfx_validate_804b3688(int);

// 0x0x804b36fc (address_range)
void rt_EGG_Gfx_804b36fc(int);

// 0x0x804b3794 (address_range)
void rt_EGG_Gfx_804b3794(int);

// 0x0x804b3864 (address_range)
u32 * rt_EGG_Gfx_804b3864(u32);

// 0x0x804b38a8 (address_range)
int EGG_Gfx_validate_804b38a8(int, int);

// 0x0x804b3910 (address_range)
void rt_EGG_Gfx_804b3910(int);

// 0x0x804b3990 (address_range)
u32 * rt_EGG_Gfx_804b3990(u32);

// 0x0x804b3ae8 (address_range)
u32 EGG_Gfx_validate_804b3ae8(u32);

// 0x0x804b3b6c (address_range)
void EGG_Gfx_validate_804b3b6c(int, int);

// 0x0x804b3fb0 (address_range)
void rt_EGG_Gfx_804b3fb0(int, u32);

// 0x0x804b4024 (address_range)
void rt_EGG_Gfx_804b4024(int);

// 0x0x804b40d8 (address_range)
u32 rt_EGG_Gfx_804b40d8(int);

// 0x0x804b4118 (address_range)
u32 rt_EGG_Gfx_804b4118(int);

// 0x0x804b4158 (address_range)
int rt_EGG_Gfx_804b4158(int);

// 0x0x804b41b8 (address_range)
void EGG_Gfx_assertFail_804b41b8(void);

// 0x0x804b4340 (address_range)
void rt_EGG_Gfx_804b4340(int);

// 0x0x804b4528 (address_range)
void rt_EGG_Gfx_804b4528(int);

// 0x0x804b462c (address_range)
void rt_EGG_Gfx_804b462c(int);

// 0x0x804b47d8 (address_range)
void EGG_Gfx_validate_804b47d8(int, u32);

// 0x0x804b48b0 (address_range)
void EGG_Gfx_validate_804b48b0(int);

// 0x0x804b4960 (address_range)
void rt_EGG_Gfx_804b4960(int, u32, int);

// 0x0x804b4a3c (address_range)
void rt_EGG_Gfx_804b4a3c(int, u32);

// 0x0x804b4b14 (address_range)
void rt_EGG_Gfx_804b4b14(int, u32);

// 0x0x804b4be0 (address_range)
u32 * rt_EGG_Gfx_804b4be0(u32);

// 0x0x804b4c1c (address_range)
int EGG_Gfx_validate_804b4c1c(int, int);

// 0x0x804b4c74 (address_range)
void rt_EGG_Gfx_804b4c74(int, u32, u32, u32);

// 0x0x804b4cfc (address_range)
void rt_EGG_Gfx_804b4cfc(int);

// 0x0x804b4d80 (address_range)
void rt_EGG_Gfx_804b4d80(int, u32);

// 0x0x804b4de0 (address_range)
void rt_EGG_Gfx_804b4de0(int, byte);

// 0x0x804b4e2c (address_range)
void rt_EGG_Gfx_804b4e2c(int);

// 0x0x804b4e80 (address_range)
void EGG_Gfx_validate_804b4e80(int, u32, u32);

// 0x0x804b4ecc (address_range)
void rt_EGG_Gfx_804b4ecc(u32);

// 0x0x804b4fd0 (address_range)
u32 EGG_Gfx_validate_804b4fd0(int);

// 0x0x804b5040 (address_range)
void EGG_Gfx_assertFail_804b5040(void);

// 0x0x804b50e8 (address_range)
void EGG_Gfx_assertFail_804b50e8(void);

// 0x0x804b5164 (address_range)
void EGG_Gfx_validate_804b5164(u32, u32);

// 0x0x804b5280 (address_range)
void rt_EGG_Gfx_804b5280(void);

// 0x0x804b634c (address_range)
void rt_EGG_Gfx_804b634c(u32);

// 0x0x804b6388 (address_range)
void rt_EGG_Gfx_804b6388(u32);

// 0x0x804b6490 (address_range)
bool rt_EGG_Gfx_804b6490(int, int, u32, u32, uint);

// 0x0x804b65ec (address_range)
int EGG_Gfx_validate_804b65ec(int, int);

// 0x0x804b662c (address_range)
void rt_EGG_Gfx_804b662c(int, u32, int, u16);

// 0x0x804b6694 (address_range)
int EGG_Gfx_validate_804b6694(int, int);

// 0x0x804b66d4 (address_range)
void rt_EGG_Gfx_804b66d4(int, int, int, int, u16);

// 0x0x804b67fc (address_range)
int EGG_Gfx_validate_804b67fc(int, int);

// 0x0x804b683c (address_range)
void EGG_Gfx_validate_804b683c(int);

// 0x0x804b6b18 (address_range)
void EGG_Gfx_validate_804b6b18(int, short);

// 0x0x804b6c00 (address_range)
void EGG_Gfx_validate_804b6c00(int, short);

// 0x0x804b6d64 (address_range)
void EGG_Gfx_validate_804b6d64(u32, int, int);

// 0x0x804b7164 (address_range)
int EGG_Gfx_validate_804b7164(int, int);

// 0x0x804b71a4 (address_range)
void EGG_Gfx_assertFail_804b71a4(void);

// 0x0x804b74f4 (address_range)
void rt_EGG_Gfx_804b74f4(u32, int);

// 0x0x804b7630 (address_range)
void EGG_Gfx_assertFail_804b7630(void);

// 0x0x804b78a4 (address_range)
void rt_EGG_Gfx_804b78a4(int, short);

// 0x0x804b7b04 (address_range)
void rt_EGG_Gfx_804b7b04(int);

// 0x0x804b7b9c (address_range)
void rt_EGG_Gfx_804b7b9c(int, u32);

// 0x0x804b7bf4 (address_range)
void rt_EGG_Gfx_804b7bf4(void);

// 0x0x804b8254 (address_range)
void rt_EGG_Gfx_804b8254(int);

// 0x0x804b8388 (address_range)
void rt_EGG_Gfx_804b8388(u32, int, int);

// 0x0x804b84b4 (address_range)
void EGG_Gfx_assertFail_804b84b4(void);

// 0x0x804b8500 (address_range)
u32 EGG_Gfx_validate_804b8500(u32);

// 0x0x804b8570 (address_range)
void EGG_Gfx_validate_804b8570(u32, u32);

// 0x0x804b85c4 (address_range)
void EGG_Gfx_validate_804b85c4(u32, u32, u32);

// 0x0x804b86b4 (address_range)
void EGG_Gfx_validate_804b86b4(int, u32, uint);

// 0x0x804b8794 (address_range)
void EGG_Gfx_assertFail_804b8794(void);

// 0x0x804b88ac (address_range)
int * EGG_Gfx_validate_804b88ac(int, int);

// 0x0x804b8944 (address_range)
void EGG_Gfx_assertFail_804b8944(void);

// 0x0x804b8994 (address_range)
void EGG_Gfx_assertFail_804b8994(void);

// 0x0x804b8a24 (address_range)
void EGG_Gfx_assertFail_804b8a24(void);

// 0x0x804b8cd8 (address_range)
void EGG_Gfx_assertFail_804b8cd8(void);

// 0x0x804b8d84 (address_range)
void EGG_Gfx_validate_804b8d84(u32, u32);

// 0x0x804b8e08 (address_range)
void EGG_Gfx_validate_804b8e08(u32);

// 0x0x804b8e7c (address_range)
int EGG_Gfx_validate_804b8e7c(int, int);

// 0x0x804b8ebc (address_range)
void EGG_Gfx_validate_804b8ebc(int);

// 0x0x804b8f04 (address_range)
int EGG_Gfx_validate_804b8f04(int, int);

// 0x0x804b8f44 (address_range)
int EGG_Gfx_validate_804b8f44(int, int);

// 0x0x804b8f84 (address_range)
int EGG_Gfx_validate_804b8f84(int, int);

// 0x0x804b8fc4 (address_range)
u32 EGG_Gfx_validate_804b8fc4(int);

// 0x0x804b9028 (address_range)
void EGG_Gfx_validate_804b9028(u32);

// 0x0x804b9138 (address_range)
void rt_EGG_Gfx_804b9138(int);

// 0x0x804b91e8 (address_range)
void rt_EGG_Gfx_804b91e8(int);

// 0x0x804b924c (address_range)
u32 rt_EGG_Gfx_804b924c(int);

// 0x0x804b935c (address_range)
u32 rt_EGG_Gfx_804b935c(int, int);

// 0x0x804b9444 (address_range)
int rt_EGG_Gfx_804b9444(int);

// 0x0x804b94e0 (address_range)
uint rt_EGG_Gfx_804b94e0(int, int);

// 0x0x804b9684 (address_range)
void EGG_Gfx_validate_804b9684(int, uint);

// 0x0x804b96fc (address_range)
int rt_EGG_Gfx_804b96fc(int, int);

// 0x0x804b97f8 (address_range)
int rt_EGG_Gfx_804b97f8(int, uint);

// 0x0x804b9814 (address_range)
int rt_EGG_Gfx_804b9814(int, uint);

// 0x0x804b984c (address_range)
u32 rt_EGG_Gfx_804b984c(int, uint);

// 0x0x804b9884 (address_range)
uint rt_EGG_Gfx_804b9884(int, uint);

// 0x0x804b98d0 (address_range)
u32 rt_EGG_Gfx_804b98d0(int);

// 0x0x804b98ec (address_range)
void rt_EGG_Gfx_804b98ec(int);

// 0x0x804b9914 (address_range)
void rt_EGG_Gfx_804b9914(int);

// 0x0x804b9960 (address_range)
void rt_EGG_Gfx_804b9960(int);

// 0x0x804b9988 (address_range)
void rt_EGG_Gfx_804b9988(int);

// 0x0x804b99d4 (address_range)
void rt_EGG_Gfx_804b99d4(int);

// 0x0x804b9cc8 (address_range)
uint rt_EGG_Gfx_804b9cc8(int, uint);

// 0x0x804ba0e0 (address_range)
void rt_EGG_Gfx_804ba0e0(int);

// 0x0x804ba130 (address_range)
void rt_EGG_Gfx_804ba130(int);

// 0x0x804ba23c (address_range)
void rt_EGG_Gfx_804ba23c(int);

// 0x0x804ba2a0 (address_range)
void EGG_Gfx_assertFail_804ba2a0(void);

// 0x0x804ba3e4 (address_range)
void rt_EGG_Gfx_804ba3e4(int);

// 0x0x804ba458 (address_range)
void rt_EGG_Gfx_804ba458(int);

// 0x0x804ba640 (address_range)
void rt_EGG_Gfx_804ba640(int);

// 0x0x804ba6f0 (address_range)
void EGG_Gfx_assertFail_804ba6f0(void);

// 0x0x804ba790 (address_range)
u32 * rt_EGG_Gfx_804ba790(u32);

// 0x0x804ba7d4 (address_range)
int EGG_Gfx_validate_804ba7d4(int, int);

// 0x0x804ba82c (address_range)
void EGG_Gfx_assertFail_804ba82c(void);

// 0x0x804ba904 (address_range)
void rt_EGG_Gfx_804ba904(int, u32);

// 0x0x804baae0 (address_range)
void rt_EGG_Gfx_804baae0(int);

// 0x0x804babdc (address_range)
void EGG_Gfx_assertFail_804babdc(void);

// 0x0x804bafac (address_range)
void rt_EGG_Gfx_804bafac(int);

// 0x0x804bb0a4 (address_range)
void rt_EGG_Gfx_804bb0a4(void);

// 0x0x804bb14c (address_range)
void EGG_Gfx_assertFail_804bb14c(void);

// 0x0x804bb32c (address_range)
u32 EGG_Gfx_validate_804bb32c(int);

// 0x0x804bb3f0 (address_range)
void EGG_Gfx_assertFail_804bb3f0(void);

// 0x0x804bb7b8 (address_range)
void EGG_Gfx_validate_804bb7b8(int);

// 0x0x804bb9d8 (address_range)
void rt_EGG_Gfx_804bb9d8(int);

// 0x0x804bbaf4 (address_range)
void EGG_Gfx_assertFail_804bbaf4(void);

// 0x0x804bbb94 (address_range)
void rt_EGG_Gfx_804bbb94(int);

// 0x0x804bbc10 (address_range)
void rt_EGG_Gfx_804bbc10(int, u32);

// 0x0x804bbc8c (address_range)
void rt_EGG_Gfx_804bbc8c(int, int);

// 0x0x804bbdd4 (address_range)
void rt_EGG_Gfx_804bbdd4(int, u32);

// 0x0x804bbe68 (address_range)
void rt_EGG_Gfx_804bbe68(int);

// 0x0x804bbf98 (address_range)
void rt_EGG_Gfx_804bbf98(int);

// 0x0x804bc110 (address_range)
int rt_EGG_Gfx_804bc110(int, int);

// 0x0x804bc1a0 (address_range)
u32 rt_EGG_Gfx_804bc1a0(int);

// 0x0x804bc2b4 (address_range)
void rt_EGG_Gfx_804bc2b4(int, int);

// 0x0x804bc37c (address_range)
void rt_EGG_Gfx_804bc37c(int);

// 0x0x804bc494 (address_range)
u32 * rt_EGG_Gfx_804bc494(u32);

// 0x0x804bc4d0 (address_range)
int EGG_Gfx_validate_804bc4d0(int, int);

// 0x0x804bc528 (address_range)
void EGG_Gfx_assertFail_804bc528(void);

// 0x0x804bc630 (address_range)
void rt_EGG_Gfx_804bc630(int, int);

// 0x0x804bc79c (address_range)
void rt_EGG_Gfx_804bc79c(u32);

// 0x0x804bc7e0 (address_range)
void EGG_Gfx_assertFail_804bc7e0(void);

// 0x0x804bc998 (address_range)
int EGG_Gfx_validate_804bc998(int, int);

// 0x0x804bca78 (address_range)
void EGG_Gfx_assertFail_804bca78(void);

// 0x0x804bcf84 (address_range)
void rt_EGG_Gfx_804bcf84(int);

// 0x0x804bd0ac (address_range)
void rt_EGG_Gfx_804bd0ac(int);

// 0x0x804bd3f4 (address_range)
void rt_EGG_Gfx_804bd3f4(int, u32, u32);

// 0x0x804bd5fc (address_range)
void rt_EGG_Gfx_804bd5fc(int, u32);

// 0x0x804bd890 (address_range)
void rt_EGG_Gfx_804bd890(int, u32);

// 0x0x804bd8d4 (address_range)
void rt_EGG_Gfx_804bd8d4(int, u32);

// 0x0x804bd930 (address_range)
u32 * rt_EGG_Gfx_804bd930(u32);

// 0x0x804bda88 (address_range)
int EGG_Gfx_validate_804bda88(int, int);

// 0x0x804bdb28 (address_range)
void rt_EGG_Gfx_804bdb28(int);

// 0x0x804bdcc4 (address_range)
void rt_EGG_Gfx_804bdcc4(int);

// 0x0x804bdd94 (address_range)
void rt_EGG_Gfx_804bdd94(int);

// 0x0x804bde4c (address_range)
void rt_EGG_Gfx_804bde4c(int);

// 0x0x804bdf20 (address_range)
void rt_EGG_Gfx_804bdf20(int, u32);

// 0x0x804be114 (address_range)
void rt_EGG_Gfx_804be114(int, u32);

// 0x0x804be188 (address_range)
u32 * rt_EGG_Gfx_804be188(u32);

// 0x0x804be1fc (address_range)
int EGG_Gfx_validate_804be1fc(int, int);

// 0x0x804be28c (address_range)
void rt_EGG_Gfx_804be28c(int);

// 0x0x804be388 (address_range)
void rt_EGG_Gfx_804be388(int);

// 0x0x804be478 (address_range)
void rt_EGG_Gfx_804be478(void);

// 0x0x804be5dc (address_range)
void EGG_Gfx_assertFail_804be5dc(void);

// 0x0x804be8f0 (address_range)
u32 * rt_EGG_Gfx_804be8f0(u32);

// 0x0x804be934 (address_range)
int EGG_Gfx_validate_804be934(int, int);

// 0x0x804be99c (address_range)
void rt_EGG_Gfx_804be99c(int);

// 0x0x804bea08 (address_range)
void rt_EGG_Gfx_804bea08(int);

// 0x0x804bed74 (address_range)
void EGG_Gfx_validate_804bed74(int, u32, u32);

// 0x0x804beda4 (address_range)
void EGG_Gfx_validate_804beda4(int, u32, u32);

// 0x0x804bedd4 (address_range)
void EGG_Gfx_validate_804bedd4(int, u32, u32);

// 0x0x804bee04 (address_range)
void EGG_Gfx_validate_804bee04(int, u32, u32);

// 0x0x804bee34 (address_range)
void EGG_Gfx_validate_804bee34(int, u32);

// 0x0x804bee64 (address_range)
void EGG_Gfx_validate_804bee64(int, u32);

// 0x0x804bee94 (address_range)
void EGG_Gfx_validate_804bee94(int, u32);

// 0x0x804beefc (address_range)
void EGG_Gfx_validate_804beefc(u32);

// 0x0x804bef7c (address_range)
u32 EGG_Gfx_validate_804bef7c(u32);

// 0x0x804bf048 (address_range)
void EGG_Gfx_validate_804bf048(int);

// 0x0x804bf2c0 (address_range)
void rt_EGG_Gfx_804bf2c0(int);

// 0x0x804bf3cc (address_range)
void EGG_Gfx_validate_804bf3cc(int);

// 0x0x804bf4d8 (address_range)
void rt_EGG_Gfx_804bf4d8(int);

// 0x0x804bf900 (address_range)
char * rt_EGG_Gfx_804bf900(int, int, int, int);

// 0x0x804bfa0c (address_range)
void rt_EGG_Gfx_804bfa0c(int, int, int);

// 0x0x804bfa90 (address_range)
void rt_EGG_Gfx_804bfa90(int);

// 0x0x804bfac4 (address_range)
void rt_EGG_Gfx_804bfac4(int, int);

// 0x0x804bfae4 (address_range)
u32 rt_EGG_Gfx_804bfae4(int);

// 0x0x804bfb58 (address_range)
void EGG_Gfx_validate_804bfb58(int, u32, u32);

// 0x0x804bfc5c (address_range)
void rt_EGG_Gfx_804bfc5c(int, u32);

// 0x0x804bfdc8 (address_range)
void EGG_Gfx_validate_804bfdc8(int, int, int, int);

// 0x0x804c0020 (address_range)
void EGG_Archive_validate_804c0020(int, int);

// 0x0x804c01bc (address_range)
void rt_EGG_Archive_804c01bc(int, uint, ushort);

// 0x0x804c0294 (address_range)
void EGG_Archive_validate_804c0294(int);

// 0x0x804c0360 (address_range)
int EGG_Archive_validate_804c0360(int, int);

// 0x0x804c03a0 (address_range)
void EGG_Archive_validate_804c03a0(int);

// 0x0x804c045c (address_range)
void EGG_Archive_validate_804c045c(int);

// 0x0x804c04c4 (address_range)
void EGG_Archive_validate_804c04c4(int, u32);

// 0x0x804c0598 (address_range)
void rt_EGG_Archive_804c0598(int, int, int, int, char);

// 0x0x804c06f4 (address_range)
int rt_EGG_Archive_804c06f4(int, int);

// 0x0x804c07c4 (address_range)
u32 rt_EGG_Archive_804c07c4(int, int);

// 0x0x804c07ec (address_range)
u32 rt_EGG_Archive_804c07ec(int, int);

// 0x0x804c0818 (address_range)
u32 rt_EGG_Archive_804c0818(int);

// 0x0x804c084c (address_range)
void rt_EGG_Archive_804c084c(int, int);

// 0x0x804c08d4 (address_range)
void rt_EGG_Archive_804c08d4(int, int);

// 0x0x804c0a10 (address_range)
u32 * rt_EGG_Archive_804c0a10(u32);

// 0x0x804c0aa0 (address_range)
int EGG_Archive_validate_804c0aa0(int, int);

// 0x0x804c0b08 (address_range)
void rt_EGG_Archive_804c0b08(int, u32);

// 0x0x804c0c30 (address_range)
void EGG_Archive_validate_804c0c30(int, char);

// 0x0x804c0f44 (address_range)
void rt_EGG_Archive_804c0f44(int);

// 0x0x804c1004 (address_range)
void rt_EGG_Archive_804c1004(int, u32, u32, uint);

// 0x0x804c1064 (address_range)
void rt_EGG_Archive_804c1064(int, int);

// 0x0x804c10b4 (address_range)
void rt_EGG_Archive_804c10b4(int);

// 0x0x804c10ec (address_range)
void rt_EGG_Archive_804c10ec(int);

// 0x0x804c1124 (address_range)
void rt_EGG_Archive_804c1124(int);

// 0x0x804c115c (address_range)
void rt_EGG_Archive_804c115c(int);

// 0x0x804c1194 (address_range)
bool rt_EGG_Archive_804c1194(int);

// 0x0x804c11cc (address_range)
bool rt_EGG_Archive_804c11cc(int);

// 0x0x804c1224 (address_range)
int rt_EGG_Archive_804c1224(int);

// 0x0x804c12bc (address_range)
int EGG_Archive_validate_804c12bc(int, int);

// 0x0x804c1344 (address_range)
void EGG_Archive_validate_804c1344(u32);

// 0x0x804c14e8 (address_range)
void rt_EGG_Archive_804c14e8(int);

// 0x0x804c1570 (address_range)
void rt_EGG_Archive_804c1570(int);

// 0x0x804c15b0 (address_range)
void rt_EGG_Archive_804c15b0(int);

// 0x0x804c1730 (address_range)
void rt_EGG_Archive_804c1730(int, int);

// 0x0x804c1964 (address_range)
u32 rt_EGG_Archive_804c1964(int);

// 0x0x804c1a74 (address_range)
u32 rt_EGG_Archive_804c1a74(u32);

// 0x0x804c1b1c (address_range)
void rt_EGG_Archive_804c1b1c(int);

// 0x0x804c1bc0 (address_range)
void rt_EGG_Archive_804c1bc0(int, int);

// 0x0x804c1c9c (address_range)
void rt_EGG_Archive_804c1c9c(int);

// 0x0x804c1e5c (address_range)
void rt_EGG_Archive_804c1e5c(u32);

// 0x0x804c1e6c (address_range)
void rt_EGG_Archive_804c1e6c(u32);

// 0x0x804c200c (address_range)
void rt_EGG_Archive_804c200c(int, uint, uint);

// 0x0x804c21cc (address_range)
void EGG_Archive_validate_804c21cc(u32);

// 0x0x804c2210 (address_range)
void rt_EGG_Archive_804c2210(u32);

// 0x0x804c2264 (address_range)
int rt_EGG_Archive_804c2264(int);

// 0x0x804c22bc (address_range)
int rt_EGG_Archive_804c22bc(int);

// 0x0x804c2338 (address_range)
u32 rt_EGG_Archive_804c2338(int);

// 0x0x804c236c (address_range)
void rt_EGG_Archive_804c236c(int);

// 0x0x804c24f0 (address_range)
u32 * rt_EGG_Archive_804c24f0(u32);

// 0x0x804c2584 (address_range)
int EGG_Archive_validate_804c2584(int, int);

// 0x0x804c25dc (address_range)
int EGG_Archive_validate_804c25dc(int, int);

// 0x0x804c2660 (address_range)
void EGG_Archive_validate_804c2660(int);

// 0x0x804c2880 (address_range)
void EGG_Archive_validate_804c2880(int);

// 0x0x804c298c (address_range)
void EGG_Archive_validate_804c298c(int);

// 0x0x804c3378 (address_range)
void EGG_Archive_validate_804c3378(int, u32);

// 0x0x804c3518 (address_range)
void EGG_Archive_assertFail_804c3518(void);

// 0x0x804c37f4 (address_range)
void EGG_Archive_validate_804c37f4(int, int, u32, u32);

// 0x0x804c3ab4 (address_range)
void EGG_Archive_validate_804c3ab4(int, int);

// 0x0x804c3bc8 (address_range)
void EGG_Archive_validate_804c3bc8(int, u32);

// 0x0x804c3cd0 (address_range)
void EGG_Archive_assertFail_804c3cd0(void);

// 0x0x804c40a4 (address_range)
void EGG_Archive_validate_804c40a4(int);

// 0x0x804c41a8 (address_range)
void EGG_Archive_validate_804c41a8(int);

// 0x0x804c42ac (address_range)
void EGG_Archive_validate_804c42ac(int);

// 0x0x804c43b0 (address_range)
void EGG_Archive_assertFail_804c43b0(void);

// 0x0x804c44fc (address_range)
void EGG_Archive_assertFail_804c44fc(void);

// 0x0x804c4648 (address_range)
void EGG_Archive_validate_804c4648(int);

// 0x0x804c4730 (address_range)
void rt_EGG_Archive_804c4730(int, u32);

// 0x0x804c47a8 (address_range)
void EGG_Archive_validate_804c47a8(u32, u32);

// 0x0x804c4878 (address_range)
void rt_EGG_Archive_804c4878(int, uint);

// 0x0x804c48e8 (address_range)
void EGG_Archive_validate_804c48e8(u32, uint);

// 0x0x804c497c (address_range)
void rt_EGG_Archive_804c497c(int);

// 0x0x804c49cc (address_range)
double rt_EGG_Archive_804c49cc(short);

// 0x0x804c4a08 (address_range)
u32 rt_EGG_Archive_804c4a08(uint);

// 0x0x804c4b10 (address_range)
void rt_EGG_Archive_804c4b10(u32, u32, u32, u32);

// 0x0x804c4bf4 (address_range)
void rt_EGG_Archive_804c4bf4(int);

// 0x0x804c4c58 (address_range)
void rt_EGG_Archive_804c4c58(int, u32, u32, u32);

// 0x0x804c4cf4 (address_range)
void EGG_Archive_validate_804c4cf4(int);

// 0x0x804c4da4 (address_range)
bool rt_EGG_Archive_804c4da4(int);

// 0x0x804c4eac (address_range)
u32 rt_EGG_Archive_804c4eac(int);

// 0x0x804c4eb4 (address_range)
void EGG_Archive_validate_804c4eb4(u32, int, int);

// 0x0x804c50b4 (address_range)
u32 rt_EGG_Archive_804c50b4(int);

// 0x0x804c51ac (address_range)
byte rt_EGG_Archive_804c51ac(int);

// 0x0x804c51b8 (address_range)
void rt_EGG_Archive_804c51b8(int, int, int, u32);

// 0x0x804c52a4 (address_range)
void EGG_Archive_validate_804c52a4(int, int);

// 0x0x804c5420 (address_range)
u32 rt_EGG_Archive_804c5420(int, int);

// 0x0x804c54f4 (address_range)
void rt_EGG_Archive_804c54f4(u32, short);

// 0x0x804c55d0 (address_range)
int EGG_Archive_validate_804c55d0(int, int);

// 0x0x804c565c (address_range)
void EGG_Archive_validate_804c565c(int, int, int, int);

// 0x0x804c5890 (address_range)
void rt_EGG_Archive_804c5890(u32, u32);

// 0x0x804c58ec (address_range)
void rt_EGG_Archive_804c58ec(int, u32);

// 0x0x804c5a10 (address_range)
void rt_EGG_Archive_804c5a10(int, u32);

// 0x0x804c5b2c (address_range)
void rt_EGG_Archive_804c5b2c(int, u32);

// 0x0x804c5c78 (address_range)
void EGG_Archive_validate_804c5c78(u32);

// 0x0x804c5cc0 (address_range)
u32 EGG_Archive_validate_804c5cc0(int);

// 0x0x804c5d1c (address_range)
void rt_EGG_Archive_804c5d1c(int, u32);

// 0x0x804c5d34 (address_range)
void EGG_Archive_validate_804c5d34(u32, u32);

// 0x0x804c5edc (address_range)
void EGG_Archive_validate_804c5edc(u32, u32);

// 0x0x804c5f5c (address_range)
void EGG_Archive_validate_804c5f5c(u32);

// 0x0x804c5fe4 (address_range)
u32 EGG_Archive_validate_804c5fe4(u32);

// 0x0x804c60a8 (address_range)
void EGG_Archive_validate_804c60a8(u32, u32);

// 0x0x804c6250 (address_range)
void EGG_Archive_validate_804c6250(u32, u32);

// 0x0x804c69dc (address_range)
u32 EGG_Archive_validate_804c69dc(int, u32);

// 0x0x804c6a54 (address_range)
int rt_EGG_Archive_804c6a54(int, int);

// 0x0x804c6a9c (address_range)
u32 EGG_Archive_validate_804c6a9c(int, u32);

// 0x0x804c6b5c (address_range)
void rt_EGG_Archive_804c6b5c(int);

// 0x0x804c6b70 (address_range)
void EGG_Archive_validate_804c6b70(int, int);

// 0x0x804c6c1c (address_range)
void rt_EGG_Archive_804c6c1c(int);

// 0x0x804c6c84 (address_range)
void rt_EGG_Archive_804c6c84(int, int);

// 0x0x804c6d88 (address_range)
void rt_EGG_Archive_804c6d88(int, int);

// 0x0x804c6e8c (address_range)
void rt_EGG_Archive_804c6e8c(int, int);

// 0x0x804c70bc (address_range)
void rt_EGG_Archive_804c70bc(int, int);

// 0x0x804c74dc (address_range)
void EGG_Archive_validate_804c74dc(u32);

// 0x0x804c7574 (address_range)
int EGG_Archive_validate_804c7574(int, int);

// 0x0x804c75d4 (address_range)
void EGG_Archive_validate_804c75d4(u32, u32);

// 0x0x804c778c (address_range)
void EGG_Archive_validate_804c778c(u32, u32);

// 0x0x804c7834 (address_range)
void EGG_Archive_validate_804c7834(int);

// 0x0x804c78ac (address_range)
u32 * EGG_Archive_validate_804c78ac(u32, int);

// 0x0x804c7934 (address_range)
void EGG_Archive_validate_804c7934(int, u32);

// 0x0x804c7c4c (address_range)
int * EGG_Archive_validate_804c7c4c(int, int);

// 0x0x804c7d0c (address_range)
int EGG_Archive_validate_804c7d0c(int, int);

// 0x0x804c7d4c (address_range)
int EGG_Archive_validate_804c7d4c(int, int);

// 0x0x804c7d8c (address_range)
int EGG_Archive_validate_804c7d8c(int, int);

// 0x0x804c7dcc (address_range)
u32 * EGG_Archive_validate_804c7dcc(u32, int);

// 0x0x804c7e44 (address_range)
int EGG_Archive_validate_804c7e44(int, int);

// 0x0x804c7e84 (address_range)
void EGG_Archive_validate_804c7e84(int, u32);

// 0x0x804c8020 (address_range)
void EGG_Archive_validate_804c8020(int, u32);

// 0x0x804c8134 (address_range)
void rt_EGG_Archive_804c8134(u32);

// 0x0x804c8158 (address_range)
int EGG_Archive_validate_804c8158(int, int);

// 0x0x804c821c (address_range)
void rt_EGG_Archive_804c821c(int, u32);

// 0x0x804c833c (address_range)
void rt_EGG_Archive_804c833c(int);

// 0x0x804c849c (address_range)
int EGG_Archive_validate_804c849c(int, int);

// 0x0x804c84ec (address_range)
void rt_EGG_Archive_804c84ec(int, int);

// 0x0x804c880c (address_range)
void EGG_Archive_validate_804c880c(u32);

// 0x0x804c88c8 (address_range)
u32 EGG_Archive_validate_804c88c8(int);

// 0x0x804c8930 (address_range)
void rt_EGG_Archive_804c8930(int, uint, u32);

// 0x0x804c8a08 (address_range)
void rt_EGG_Archive_804c8a08(int);

// 0x0x804c8b74 (address_range)
void rt_EGG_Archive_804c8b74(int, uint, u32, u32);

// 0x0x804c8c54 (address_range)
void rt_EGG_Archive_804c8c54(int);

// 0x0x804c8d34 (address_range)
void rt_EGG_Archive_804c8d34(int, int, u32, u32);

// 0x0x804c8e14 (address_range)
int EGG_Archive_validate_804c8e14(int, int);

// 0x0x804c90c4 (address_range)
void EGG_Archive_assertFail_804c90c4(void);

// 0x0x804c91a0 (address_range)
u32 EGG_Archive_validate_804c91a0(int);

// 0x0x804c9214 (address_range)
void EGG_Archive_validate_804c9214(u32, int);

// 0x0x804c92c4 (address_range)
void rt_EGG_Archive_804c92c4(int, int, u32, u32);

// 0x0x804c92e0 (address_range)
void rt_EGG_Archive_804c92e0(int, u32);

// 0x0x804c940c (address_range)
bool rt_EGG_Archive_804c940c(int, int, u32, u32);

// 0x0x804c99a8 (address_range)
void rt_EGG_Archive_804c99a8(int, u16, u16);

// 0x0x804c9a0c (address_range)
void rt_EGG_Archive_804c9a0c(int, u16, u16);

// 0x0x804c9aa4 (address_range)
void rt_EGG_Archive_804c9aa4(int, u16);

// 0x0x804c9b98 (address_range)
int EGG_Archive_validate_804c9b98(int, int);

// 0x0x804c9be4 (address_range)
void EGG_Archive_validate_804c9be4(int);

// 0x0x804c9e6c (address_range)
bool rt_EGG_Archive_804c9e6c(int, u32);

// 0x0x804c9ebc (address_range)
bool rt_EGG_Archive_804c9ebc(int, u32);

// 0x0x804c9f74 (address_range)
void EGG_Archive_validate_804c9f74(u32);

// 0x0x804ca160 (address_range)
int EGG_Archive_validate_804ca160(int, int);

// 0x0x804ca1a0 (address_range)
u32 EGG_Archive_validate_804ca1a0(int);

// 0x0x804ca214 (address_range)
void rt_EGG_Archive_804ca214(int, uint, u32);

// 0x0x804ca310 (address_range)
void EGG_Archive_validate_804ca310(int);

// 0x0x804ca350 (address_range)
void rt_EGG_Archive_804ca350(int, int, u32, u32, u32);

// 0x0x804ca36c (address_range)
void rt_EGG_Archive_804ca36c(int, int, u32, u32);

// 0x0x804ca380 (address_range)
void rt_EGG_Archive_804ca380(int, int);

// 0x0x804ca3fc (address_range)
void EGG_Archive_validate_804ca3fc(int);

// 0x0x804ca460 (address_range)
void rt_EGG_Archive_804ca460(void);

// 0x0x804cb18c (address_range)
void EGG_Archive_validate_804cb18c(int, uint, u32, u32);

// 0x0x804cb2c0 (address_range)
void EGG_Archive_validate_804cb2c0(int, u32);

// 0x0x804cb3e0 (address_range)
void EGG_Archive_validate_804cb3e0(int);

// 0x0x804cb50c (address_range)
void rt_EGG_Archive_804cb50c(void);

// 0x0x804cb6b8 (address_range)
void rt_EGG_Archive_804cb6b8(int, int, u32, u32);

// 0x0x804cb6cc (address_range)
void rt_EGG_Archive_804cb6cc(int, uint, u32);

// 0x0x804cb700 (address_range)
uint rt_EGG_Archive_804cb700(int, int);

// 0x0x804cb950 (address_range)
void EGG_Archive_assertFail_804cb950(void);

// 0x0x804cbf14 (address_range)
u32 rt_EGG_Archive_804cbf14(int, int, uint);

// 0x0x804cc2f0 (address_range)
void rt_EGG_Archive_804cc2f0(u32);

// 0x0x804cc30c (address_range)
int EGG_Archive_validate_804cc30c(int, int);

// 0x0x804cc34c (address_range)
void EGG_Archive_validate_804cc34c(u32, u32);

// 0x0x804cc444 (address_range)
int rt_EGG_Archive_804cc444(int, uint);

// 0x0x804cc4ac (address_range)
int rt_EGG_Archive_804cc4ac(int, int);

// 0x0x804cc4e8 (address_range)
ushort * rt_EGG_Archive_804cc4e8(int, int);

// 0x0x804cc518 (address_range)
u32 * rt_EGG_Archive_804cc518(u32);

// 0x0x804cc59c (address_range)
int EGG_Archive_validate_804cc59c(int, int);

// 0x0x804cc604 (address_range)
void rt_EGG_Archive_804cc604(int);

// 0x0x804cc710 (address_range)
void rt_EGG_Archive_804cc710(int);

// 0x0x804cc768 (address_range)
u32 * rt_EGG_Archive_804cc768(u32);

// 0x0x804cc810 (address_range)
int EGG_Archive_validate_804cc810(int, int);

// 0x0x804cc8a4 (address_range)
void rt_EGG_Archive_804cc8a4(int);

// 0x0x804cca08 (address_range)
void rt_EGG_Archive_804cca08(u32);

// 0x0x804cca4c (address_range)
void rt_EGG_Archive_804cca4c(u32);

// 0x0x804cca90 (address_range)
void rt_EGG_Archive_804cca90(int);

// 0x0x804ccad8 (address_range)
u32 * rt_EGG_Archive_804ccad8(u32);

// 0x0x804ccb98 (address_range)
int EGG_Archive_validate_804ccb98(int, int);

// 0x0x804ccc30 (address_range)
void rt_EGG_Archive_804ccc30(int);

// 0x0x804ccd7c (address_range)
void rt_EGG_Archive_804ccd7c(int);

// 0x0x804ccddc (address_range)
void rt_EGG_Archive_804ccddc(int);

// 0x0x804ccdec (address_range)
void rt_EGG_Archive_804ccdec(int);

// 0x0x804cce60 (address_range)
void EGG_Archive_validate_804cce60(int, u32);

// 0x0x804ccebc (address_range)
u32 * rt_EGG_Archive_804ccebc(u32);

// 0x0x804ccef8 (address_range)
int EGG_Archive_validate_804ccef8(int, int);

// 0x0x804ccf50 (address_range)
void rt_EGG_Archive_804ccf50(u32, u32, u32, u32);

// 0x0x804ccfdc (address_range)
u32 * rt_EGG_Archive_804ccfdc(u32);

// 0x0x804cd018 (address_range)
int EGG_Archive_validate_804cd018(int, int);

// 0x0x804cd0bc (address_range)
u32 * rt_EGG_Archive_804cd0bc(u32);

// 0x0x804cd0f8 (address_range)
int EGG_Archive_validate_804cd0f8(int, int);

// 0x0x804cd150 (address_range)
void rt_EGG_Archive_804cd150(u32, u32, u32, u32);

// 0x0x804cd204 (address_range)
void rt_EGG_Archive_804cd204(int);

// 0x0x804cd278 (address_range)
u32 * rt_EGG_Archive_804cd278(u32);

// 0x0x804cd2b4 (address_range)
int EGG_Archive_validate_804cd2b4(int, int);

// 0x0x804cd30c (address_range)
void rt_EGG_Archive_804cd30c(u32, u32, u32, u32);

// 0x0x804cd380 (address_range)
void rt_EGG_Archive_804cd380(double, u32, int);

// 0x0x804cd3f0 (address_range)
u32 * rt_EGG_Archive_804cd3f0(u32);

// 0x0x804cd42c (address_range)
int EGG_Archive_validate_804cd42c(int, int);

// 0x0x804cd484 (address_range)
void rt_EGG_Archive_804cd484(u32, u32, u32, u32);

// 0x0x804cd518 (address_range)
void rt_EGG_Archive_804cd518(int);

// 0x0x804cd550 (address_range)
void rt_EGG_Archive_804cd550(double, u32, int);

// 0x0x804cd634 (address_range)
u32 * rt_EGG_Archive_804cd634(u32);

// 0x0x804cd6d4 (address_range)
int EGG_Archive_validate_804cd6d4(int, int);

// 0x0x804cd714 (address_range)
u32 EGG_Archive_validate_804cd714(u32);

// 0x0x804cd808 (address_range)
void EGG_Archive_assertFail_804cd808(void);

// 0x0x804cdb2c (address_range)
void rt_EGG_Archive_804cdb2c(int);

// 0x0x804cdb80 (address_range)
void rt_EGG_Archive_804cdb80(int);

// 0x0x804cdbb8 (address_range)
void EGG_Archive_validate_804cdbb8(int, int, int);

// 0x0x804cdd3c (address_range)
void rt_EGG_Archive_804cdd3c(int, u32, int);

// 0x0x804cddcc (address_range)
void rt_EGG_Archive_804cddcc(int, u32, u32);

// 0x0x804cde34 (address_range)
void rt_EGG_Archive_804cde34(int, u32, u32);

// 0x0x804cde9c (address_range)
void rt_EGG_Archive_804cde9c(int, u32, u32);

// 0x0x804cdf04 (address_range)
void rt_EGG_Archive_804cdf04(int, u32, u32);

// 0x0x804cdf6c (address_range)
void rt_EGG_Archive_804cdf6c(int, int, u32, u32);

// 0x0x804ce074 (address_range)
void rt_EGG_Archive_804ce074(int, u32, u32, u32);

// 0x0x804ce0ec (address_range)
u32 rt_EGG_Archive_804ce0ec(int, int);

// 0x0x804ce0fc (address_range)
void rt_EGG_Archive_804ce0fc(int, int, u32);

// 0x0x804ce138 (address_range)
u32 rt_EGG_Archive_804ce138(int, int);

// 0x0x804ce240 (address_range)
void EGG_Archive_validate_804ce240(int, int);

// 0x0x804ce364 (address_range)
void rt_EGG_Archive_804ce364(u32, int, int);

// 0x0x804ce3b0 (address_range)
void EGG_Archive_validate_804ce3b0(int, int, int);

// 0x0x804ce6f0 (address_range)
void EGG_Archive_validate_804ce6f0(int, int, int, int);

// 0x0x804ceb48 (address_range)
void rt_EGG_Archive_804ceb48(int, int, int, int);

// 0x0x804cec88 (address_range)
void EGG_Archive_validate_804cec88(int, int, int);

// 0x0x804cecc0 (address_range)
void EGG_Archive_validate_804cecc0(int, int, int);

// 0x0x804ced14 (address_range)
u32 rt_EGG_Archive_804ced14(int, int);

// 0x0x804ceda8 (address_range)
int EGG_Archive_validate_804ceda8(int, int);

// 0x0x804cede8 (address_range)
void rt_EGG_Archive_804cede8(u32, u32);

// 0x0x804ceef4 (address_range)
void rt_EGG_Archive_804ceef4(int, float);

// 0x0x804cf0b8 (address_range)
void EGG_Archive_assertFail_804cf0b8(void);

// 0x0x804d0298 (address_range)
int rt_EGG_Archive_804d0298(int);

// 0x0x804d02e8 (address_range)
int EGG_Archive_validate_804d02e8(int, int);

// 0x0x804d0344 (address_range)
void EGG_Archive_validate_804d0344(int);

// 0x0x804d03d4 (address_range)
void rt_EGG_Archive_804d03d4(int);

// 0x0x804d0600 (address_range)
void rt_EGG_Archive_804d0600(int, u32, int, u32, char);

// 0x0x804d0874 (address_range)
void EGG_Archive_validate_804d0874(int);

// 0x0x804d08f0 (address_range)
void rt_EGG_Archive_804d08f0(int);

// 0x0x804d0954 (address_range)
bool rt_EGG_Archive_804d0954(int);

// 0x0x804d0990 (address_range)
void rt_EGG_Archive_804d0990(int);

// 0x0x804d09ac (address_range)
void rt_EGG_Archive_804d09ac(int);

// 0x0x804d09c8 (address_range)
u32 rt_EGG_Archive_804d09c8(int);

// 0x0x804d0a7c (address_range)
u32 * rt_EGG_Archive_804d0a7c(u32);

// 0x0x804d0ab8 (address_range)
int EGG_Archive_validate_804d0ab8(int, int);

// 0x0x804d0b10 (address_range)
void rt_EGG_Archive_804d0b10(int, u32, u32, u32, u32, u32, u32, u32);

// 0x0x804d0bd0 (address_range)
void rt_EGG_Archive_804d0bd0(int);

// 0x0x804d0c3c (address_range)
void rt_EGG_Archive_804d0c3c(int);

// 0x0x804d0d14 (address_range)
void rt_EGG_Archive_804d0d14(int, u32, u32, u32);

// 0x0x804d0d24 (address_range)
void rt_EGG_Archive_804d0d24(int, u32);

// 0x0x804d0d2c (address_range)
void rt_EGG_Archive_804d0d2c(int);

// 0x0x804d0d64 (address_range)
void rt_EGG_Archive_804d0d64(int);

// 0x0x804d0ecc (address_range)
u32 * rt_EGG_Archive_804d0ecc(u32);

// 0x0x804d0f08 (address_range)
int EGG_Archive_validate_804d0f08(int, int);

// 0x0x804d0fa4 (address_range)
u32 * rt_EGG_Archive_804d0fa4(u32);

// 0x0x804d0fe0 (address_range)
int EGG_Archive_validate_804d0fe0(int, int);

// 0x0x804d1038 (address_range)
void rt_EGG_Archive_804d1038(u32, u32, u32, u32);

// 0x0x804d113c (address_range)
u32 * rt_EGG_Archive_804d113c(u32);

// 0x0x804d11c4 (address_range)
int EGG_Archive_validate_804d11c4(int, int);

// 0x0x804d1220 (address_range)
void rt_EGG_Archive_804d1220(int, int);

// 0x0x804d129c (address_range)
void rt_EGG_Archive_804d129c(int);

// 0x0x804d12ac (address_range)
void rt_EGG_Archive_804d12ac(int);

// 0x0x804d13c8 (address_range)
void rt_EGG_Archive_804d13c8(int);

// 0x0x804d1408 (address_range)
void rt_EGG_Archive_804d1408(int);

// 0x0x804d1424 (address_range)
void rt_EGG_Archive_804d1424(int);

// 0x0x804d14e4 (address_range)
void rt_EGG_Archive_804d14e4(void);

// 0x0x804d1704 (address_range)
void rt_EGG_Archive_804d1704(int);

// 0x0x804d1904 (address_range)
void rt_EGG_Archive_804d1904(int);

// 0x0x804d1a8c (address_range)
void rt_EGG_Archive_804d1a8c(int);

// 0x0x804d1af8 (address_range)
void rt_EGG_Archive_804d1af8(int);

// 0x0x804d1b38 (address_range)
void rt_EGG_Archive_804d1b38(int);

// 0x0x804d1b4c (address_range)
void rt_EGG_Archive_804d1b4c(void);

// 0x0x804d1b50 (address_range)
void rt_EGG_Archive_804d1b50(int);

// 0x0x804d1be8 (address_range)
void rt_EGG_Archive_804d1be8(int);

// 0x0x804d1c0c (address_range)
void rt_EGG_Archive_804d1c0c(int, int);

// 0x0x804d1c1c (address_range)
void rt_EGG_Archive_804d1c1c(int, u32);

// 0x0x804d1c2c (address_range)
void rt_EGG_Archive_804d1c2c(int);

// 0x0x804d1c34 (address_range)
void rt_EGG_Archive_804d1c34(int, u32);

// 0x0x804d1c3c (address_range)
void rt_EGG_Archive_804d1c3c(int);

// 0x0x804d1c48 (address_range)
void rt_EGG_Archive_804d1c48(double, int, int);

// 0x0x804d1c64 (address_range)
void rt_EGG_Archive_804d1c64(int);

// 0x0x804d1c70 (address_range)
void rt_EGG_Archive_804d1c70(double, int, u32, int);

// 0x0x804d1cf0 (address_range)
void rt_EGG_Archive_804d1cf0(double, int, u32, int);

// 0x0x804d1d70 (address_range)
void rt_EGG_Archive_804d1d70(int, u32, u32);

// 0x0x804d1e1c (address_range)
void rt_EGG_Archive_804d1e1c(int);

// 0x0x804d1f6c (address_range)
void rt_EGG_Archive_804d1f6c(void);

// 0x0x804d208c (address_range)
void rt_EGG_Archive_804d208c(int);

// 0x0x804d20e0 (address_range)
void rt_EGG_Archive_804d20e0(int, u32);

// 0x0x804d2130 (address_range)
void rt_EGG_Archive_804d2130(int);

// 0x0x804d21b4 (address_range)
void rt_EGG_Archive_804d21b4(int);

// 0x0x804d22c4 (address_range)
void rt_EGG_Archive_804d22c4(int);

// 0x0x804d2420 (address_range)
void rt_EGG_Archive_804d2420(int);

// 0x0x804d24b8 (address_range)
void rt_EGG_Archive_804d24b8(u32, u32, u32);

// 0x0x804d24e0 (address_range)
void rt_EGG_Archive_804d24e0(int, u32, u32);

// 0x0x804d24ec (address_range)
u32 * rt_EGG_Archive_804d24ec(u32);

// 0x0x804d2580 (address_range)
u32 * EGG_Archive_validate_804d2580(u32, int);

// 0x0x804d2614 (address_range)
void EGG_Archive_validate_804d2614(int);

// 0x0x804d26c4 (address_range)
void EGG_Archive_validate_804d26c4(u32);

// 0x0x804d2728 (address_range)
u32 EGG_Archive_validate_804d2728(int);

// 0x0x804d27a8 (address_range)
void EGG_Archive_validate_804d27a8(int);

// 0x0x804d289c (address_range)
void EGG_Archive_assertFail_804d289c(void);

// 0x0x804d2a18 (address_range)
void rt_EGG_Archive_804d2a18(int);

// 0x0x804d2b10 (address_range)
void rt_EGG_Archive_804d2b10(int, int);

// 0x0x804d2b88 (address_range)
u32 * rt_EGG_Archive_804d2b88(u32);

// 0x0x804d2bc4 (address_range)
int EGG_Archive_validate_804d2bc4(int, int);

// 0x0x804d2c1c (address_range)
void EGG_Archive_assertFail_804d2c1c(void);

// 0x0x804d2d98 (address_range)
void rt_EGG_Archive_804d2d98(int);

// 0x0x804d2e50 (address_range)
void rt_EGG_Archive_804d2e50(int);

// 0x0x804d2f24 (address_range)
void EGG_Archive_validate_804d2f24(u32);

// 0x0x804d3050 (address_range)
int EGG_Archive_validate_804d3050(int, int);

// 0x0x804d30a8 (address_range)
u32 EGG_Archive_validate_804d30a8(int);

// 0x0x804d3164 (address_range)
void rt_EGG_Archive_804d3164(int);

// 0x0x804d3364 (address_range)
void EGG_Archive_assertFail_804d3364(void);

// 0x0x804d36e8 (address_range)
uint rt_EGG_Archive_804d36e8(int);

// 0x0x804d3730 (address_range)
void rt_EGG_Archive_804d3730(int);

// 0x0x804d377c (address_range)
void rt_EGG_Archive_804d377c(int);

// 0x0x804d3844 (address_range)
u32 * rt_EGG_Archive_804d3844(u32);

// 0x0x804d3880 (address_range)
int EGG_Archive_validate_804d3880(int, int);

// 0x0x804d38d8 (address_range)
void EGG_Archive_assertFail_804d38d8(void);

// 0x0x804d3a68 (address_range)
void rt_EGG_Archive_804d3a68(int);

// 0x0x804d3b78 (address_range)
void rt_EGG_Archive_804d3b78(int);

// 0x0x804d3cd8 (address_range)
void EGG_Archive_validate_804d3cd8(int);

// 0x0x804d3d44 (address_range)
void EGG_Archive_validate_804d3d44(u32);

// 0x0x804d3df8 (address_range)
u32 EGG_Archive_validate_804d3df8(int);

// 0x0x804d3e9c (address_range)
void EGG_Archive_assertFail_804d3e9c(void);

// 0x0x804d4100 (address_range)
void rt_EGG_Archive_804d4100(int);

// 0x0x804d41a4 (address_range)
void EGG_Archive_validate_804d41a4(int);

// 0x0x804d4248 (address_range)
void rt_EGG_Archive_804d4248(int);

// 0x0x804d42c0 (address_range)
void EGG_Archive_validate_804d42c0(int);

// 0x0x804d4444 (address_range)
void rt_EGG_Archive_804d4444(int);

// 0x0x804d4498 (address_range)
void EGG_Archive_assertFail_804d4498(void);

// 0x0x804d4660 (address_range)
int EGG_Archive_validate_804d4660(int, int);

// 0x0x804d4710 (address_range)
void rt_EGG_Archive_804d4710(int);

// 0x0x804d4958 (address_range)
void rt_EGG_Archive_804d4958(int);

// 0x0x804d49c4 (address_range)
void rt_EGG_Archive_804d49c4(int, u32);

// 0x0x804d4a20 (address_range)
void rt_EGG_Archive_804d4a20(u32, u32);

// 0x0x804d4b00 (address_range)
void rt_EGG_Archive_804d4b00(u32, u32);

// 0x0x804d4c84 (address_range)
void rt_EGG_Archive_804d4c84(u32);

// 0x0x804d4de4 (address_range)
void EGG_Archive_validate_804d4de4(int, u32, u32);

// 0x0x804d4e14 (address_range)
void EGG_Archive_validate_804d4e14(int, u32);

// 0x0x804d4e44 (address_range)
void EGG_Archive_validate_804d4e44(int, u32);

// 0x0x804d4e74 (address_range)
void EGG_Archive_validate_804d4e74(int, u32);

// 0x0x804d4ee4 (address_range)
u32 * rt_EGG_Archive_804d4ee4(u32);

// 0x0x804d5088 (address_range)
u32 EGG_Archive_validate_804d5088(u32);

// 0x0x804d510c (address_range)
void EGG_Archive_assertFail_804d510c(void);

// 0x0x804d5514 (address_range)
void rt_EGG_Archive_804d5514(int, u32);

// 0x0x804d552c (address_range)
void rt_EGG_Archive_804d552c(int, u32);

// 0x0x804d5534 (address_range)
void rt_EGG_Archive_804d5534(int, u32);

// 0x0x804d55bc (address_range)
void rt_EGG_Archive_804d55bc(int, u32);

// 0x0x804d55dc (address_range)
void rt_EGG_Archive_804d55dc(int, int);

// 0x0x804d5674 (address_range)
void rt_EGG_Archive_804d5674(int, int);

// 0x0x804d56e4 (address_range)
void EGG_Archive_assertFail_804d56e4(void);

// 0x0x804d58c0 (address_range)
void EGG_Archive_assertFail_804d58c0(void);

// 0x0x804d5a98 (address_range)
void EGG_Archive_validate_804d5a98(int, u32);

// 0x0x804d5bf4 (address_range)
void EGG_Archive_validate_804d5bf4(int, u32);

// 0x0x804d5d28 (address_range)
void rt_EGG_Archive_804d5d28(int, u32, int);

// 0x0x804d5de0 (address_range)
void rt_EGG_Archive_804d5de0(int, u32);

// 0x0x804d5e94 (address_range)
void rt_EGG_Archive_804d5e94(int, u32);

// 0x0x804d5f50 (address_range)
void rt_EGG_Archive_804d5f50(int, u32);

// 0x0x804d6018 (address_range)
u32 * rt_EGG_Archive_804d6018(u32);

// 0x0x804d6054 (address_range)
int EGG_Archive_validate_804d6054(int, int);

// 0x0x804d60ac (address_range)
void rt_EGG_Archive_804d60ac(int, u32, u32, u32);

// 0x0x804d6154 (address_range)
void rt_EGG_Archive_804d6154(int);

// 0x0x804d61d4 (address_range)
void rt_EGG_Archive_804d61d4(int);

// 0x0x804d6290 (address_range)
int * rt_EGG_Archive_804d6290(int);

// 0x0x804d63a8 (address_range)
void rt_EGG_Archive_804d63a8(int, int);

// 0x0x804d6408 (address_range)
void EGG_Archive_validate_804d6408(int, int);

// 0x0x804d6584 (address_range)
void rt_EGG_Archive_804d6584(int, int);

// 0x0x804d65e4 (address_range)
void EGG_Archive_validate_804d65e4(int, int);

// 0x0x804d6748 (address_range)
void rt_EGG_Archive_804d6748(int, u16, u16);

// 0x0x804d67fc (address_range)
void rt_EGG_Archive_804d67fc(int, u16);

// 0x0x804d68c0 (address_range)
void EGG_Archive_validate_804d68c0(int, u32, u32);

// 0x0x804d6918 (address_range)
u32 * rt_EGG_Archive_804d6918(u32);

// 0x0x804d698c (address_range)
int EGG_Archive_validate_804d698c(int, int);

// 0x0x804d69e4 (address_range)
void EGG_Archive_validate_804d69e4(int, u32);

// 0x0x804d6b28 (address_range)
void EGG_Archive_validate_804d6b28(int);

// 0x0x804d6c80 (address_range)
void rt_EGG_Archive_804d6c80(void);

// 0x0x804d6ef0 (address_range)
void EGG_Archive_validate_804d6ef0(int);

// 0x0x804d702c (address_range)
void EGG_Archive_validate_804d702c(int);

// 0x0x804d70e4 (address_range)
void rt_EGG_Archive_804d70e4(int, int);

// 0x0x804d717c (address_range)
void rt_EGG_Archive_804d717c(int);

// 0x0x804d7318 (address_range)
void rt_EGG_Archive_804d7318(int);

// 0x0x804d73a4 (address_range)
bool rt_EGG_Archive_804d73a4(int);

// 0x0x804d73dc (address_range)
void rt_EGG_Archive_804d73dc(int);

// 0x0x804d749c (address_range)
void rt_EGG_Archive_804d749c(int);

// 0x0x804d74ec (address_range)
void EGG_Archive_validate_804d74ec(int);

// 0x0x804d7558 (address_range)
u32 * rt_EGG_Archive_804d7558(u32);

// 0x0x804d7594 (address_range)
int EGG_Archive_validate_804d7594(int, int);

// 0x0x804d75ec (address_range)
void rt_EGG_Archive_804d75ec(u32, u32);

// 0x0x804d7650 (address_range)
void rt_EGG_Archive_804d7650(int);

// 0x0x804d76b8 (address_range)
void EGG_Archive_validate_804d76b8(int);

// 0x0x804d7770 (address_range)
void EGG_Archive_validate_804d7770(int);

// 0x0x804d7820 (address_range)
void EGG_Archive_validate_804d7820(u32);

// 0x0x804d7954 (address_range)
u32 EGG_Archive_validate_804d7954(int);

// 0x0x804d7a28 (address_range)
void rt_EGG_Archive_804d7a28(int);

// 0x0x804d7c54 (address_range)
void rt_EGG_Archive_804d7c54(int);

// 0x0x804d84e8 (address_range)
void rt_EGG_Archive_804d84e8(int);

// 0x0x804d8538 (address_range)
void rt_EGG_Archive_804d8538(void);

// 0x0x804d8a8c (address_range)
void EGG_Archive_assertFail_804d8a8c(void);

// 0x0x804d91fc (address_range)
void EGG_Archive_validate_804d91fc(int);

// 0x0x804d9484 (address_range)
void rt_EGG_Archive_804d9484(int, int);

// 0x0x804d94c4 (address_range)
void rt_EGG_Archive_804d94c4(int);

// 0x0x804d9650 (address_range)
void rt_EGG_Archive_804d9650(int);

// 0x0x804d9bd8 (address_range)
void rt_EGG_Archive_804d9bd8(void);

// 0x0x804d9e70 (address_range)
void EGG_Archive_validate_804d9e70(int, u32);

// 0x0x804d9ea0 (address_range)
void EGG_Archive_validate_804d9ea0(int, u32);

// 0x0x804d9f04 (address_range)
void EGG_Archive_validate_804d9f04(u32);

// 0x0x804d9f7c (address_range)
u32 EGG_Archive_validate_804d9f7c(u32);

// 0x0x804da01c (address_range)
void rt_EGG_Archive_804da01c(int);

// 0x0x804da7d8 (address_range)
int * rt_EGG_Archive_804da7d8(int);

// 0x0x804da874 (address_range)
void rt_EGG_Archive_804da874(int);

// 0x0x804da8ec (address_range)
void rt_EGG_Archive_804da8ec(int);

// 0x0x804daa54 (address_range)
void EGG_Archive_validate_804daa54(u32);

// 0x0x804dab98 (address_range)
u32 EGG_Archive_validate_804dab98(int);

// 0x0x804dad08 (address_range)
void EGG_Archive_validate_804dad08(int);

// 0x0x804db188 (address_range)
void EGG_Archive_validate_804db188(int, int, int, u32);

// 0x0x804db2c8 (address_range)
void rt_EGG_Archive_804db2c8(int);

// 0x0x804db328 (address_range)
void rt_EGG_Archive_804db328(int);

// 0x0x804db448 (address_range)
void EGG_Archive_assertFail_804db448(void);

// 0x0x804dbef0 (address_range)
int EGG_Archive_validate_804dbef0(int, int);

// 0x0x804dbf30 (address_range)
void EGG_Archive_assertFail_804dbf30(void);

// 0x0x804dc32c (address_range)
void EGG_Archive_validate_804dc32c(u32);

// 0x0x804dc44c (address_range)
u32 EGG_Archive_validate_804dc44c(int);

// 0x0x804dc588 (address_range)
void EGG_Archive_validate_804dc588(int);

// 0x0x804dc924 (address_range)
void rt_EGG_Archive_804dc924(int);

// 0x0x804dc984 (address_range)
void rt_EGG_Archive_804dc984(int);

// 0x0x804dca68 (address_range)
void EGG_Archive_assertFail_804dca68(void);

// 0x0x804dd2e8 (address_range)
void rt_EGG_Archive_804dd2e8(int);

// 0x0x804dd6d0 (address_range)
u32 * rt_EGG_Archive_804dd6d0(u32);

// 0x0x804dd73c (address_range)
int EGG_Archive_validate_804dd73c(int, int);

// 0x0x804dd7c0 (address_range)
void rt_EGG_Archive_804dd7c0(int);

// 0x0x804dd8f8 (address_range)
u32 * rt_EGG_Archive_804dd8f8(u32);

// 0x0x804dd934 (address_range)
int EGG_Archive_validate_804dd934(int, int);

// 0x0x804dd98c (address_range)
void rt_EGG_Archive_804dd98c(u32);

// 0x0x804dda04 (address_range)
void rt_EGG_Archive_804dda04(int);

// 0x0x804dda40 (address_range)
void EGG_Archive_assertFail_804dda40(void);

// 0x0x804ddcdc (address_range)
u32 * EGG_Archive_validate_804ddcdc(u32, int);

// 0x0x804dddc4 (address_range)
void EGG_Archive_assertFail_804dddc4(void);

// 0x0x804de264 (address_range)
void rt_EGG_Archive_804de264(int);

// 0x0x804de318 (address_range)
void rt_EGG_Archive_804de318(int);

// 0x0x804de4dc (address_range)
void rt_EGG_Archive_804de4dc(int);

// 0x0x804de5f4 (address_range)
void rt_EGG_Archive_804de5f4(int);

// 0x0x804de640 (address_range)
void EGG_Archive_validate_804de640(int, u32, int);

// 0x0x804de6e0 (address_range)
void EGG_Archive_validate_804de6e0(int, u32, int);

// 0x0x804de80c (address_range)
void rt_EGG_Archive_804de80c(int, u32, u32, u32);

// 0x0x804de940 (address_range)
void rt_EGG_Archive_804de940(int, u32);

// 0x0x804de9ac (address_range)
void rt_EGG_Archive_804de9ac(int);

// 0x0x804de9b4 (address_range)
void rt_EGG_Archive_804de9b4(u64, int, u32, u32, int);

// 0x0x804deae4 (address_range)
void rt_EGG_Archive_804deae4(u64, int);

// 0x0x804debc4 (address_range)
void rt_EGG_Archive_804debc4(int, uint);

// 0x0x804dec68 (address_range)
void rt_EGG_Archive_804dec68(int, u32);

// 0x0x804dedb8 (address_range)
void EGG_Archive_validate_804dedb8(int);

// 0x0x804dede8 (address_range)
void EGG_Archive_validate_804dede8(int, u32, u32);

// 0x0x804dee18 (address_range)
void EGG_Archive_validate_804dee18(int, u32, u32);

// 0x0x804dee48 (address_range)
void EGG_Archive_validate_804dee48(int, u32, u32);

// 0x0x804dee78 (address_range)
void EGG_Archive_validate_804dee78(int, u32);

// 0x0x804deed0 (address_range)
void rt_EGG_Archive_804deed0(u32);

// 0x0x804deee0 (address_range)
int EGG_Archive_validate_804deee0(int, int);

// 0x0x804def84 (address_range)
void rt_EGG_Archive_804def84(int);

// 0x0x804df39c (address_range)
void rt_EGG_Archive_804df39c(int, u32);

// 0x0x804df3bc (address_range)
u32 rt_EGG_Archive_804df3bc(int, int);

// 0x0x804df3dc (address_range)
u32 rt_EGG_Archive_804df3dc(int, int);

// 0x0x804df3fc (address_range)
u32 rt_EGG_Archive_804df3fc(int, int);

// 0x0x804df430 (address_range)
u32 rt_EGG_Archive_804df430(int, int);

// 0x0x804df484 (address_range)
void rt_EGG_Archive_804df484(u32, uint, u32);

// 0x0x804df4d4 (address_range)
void rt_EGG_Archive_804df4d4(u32, uint);

// 0x0x804df4f4 (address_range)
void rt_EGG_Archive_804df4f4(int, int, u32);

// 0x0x804df50c (address_range)
void rt_EGG_Archive_804df50c(int);

// 0x0x804df608 (address_range)
void rt_EGG_Archive_804df608(int);

// 0x0x804df750 (address_range)
void rt_EGG_Archive_804df750(int, int);

// 0x0x804df828 (address_range)
void rt_EGG_Archive_804df828(int, int);

// 0x0x804df914 (address_range)
void rt_EGG_Archive_804df914(int, int);

// 0x0x804dfa04 (address_range)
void rt_EGG_Archive_804dfa04(int);

// 0x0x804dfa20 (address_range)
uint rt_EGG_Archive_804dfa20(int);

// 0x0x804dfaac (address_range)
bool rt_EGG_Archive_804dfaac(uint, uint);

// 0x0x804dfae4 (address_range)
uint rt_EGG_Archive_804dfae4(u32, int);

// 0x0x804dfcb8 (address_range)
u32 rt_EGG_Archive_804dfcb8(void);

// 0x0x804dfd2c (address_range)
void rt_EGG_Archive_804dfd2c(u32);

// 0x0x804dfd78 (address_range)
void rt_EGG_Archive_804dfd78(u32, int);

// 0x0x804dfea4 (address_range)
uint rt_EGG_Archive_804dfea4(int);

// 0x0x805e0044 (address_range)
void rt_EGG_System_805e0044(void);

// 0x0x805e02a0 (address_range)
int EGG_System_validate_805e02a0(int, int);

// 0x0x805e02e8 (address_range)
void EGG_System_validate_805e02e8(u32);

// 0x0x805e0494 (address_range)
u32 EGG_System_validate_805e0494(u32);

// 0x0x805e0510 (address_range)
void rt_EGG_System_805e0510(void);

// 0x0x805e07e8 (address_range)
void rt_EGG_System_805e07e8(int);

// 0x0x805e0888 (address_range)
void EGG_System_validate_805e0888(u32, u32);

// 0x0x805e0960 (address_range)
void rt_EGG_System_805e0960(int);

// 0x0x805e0aac (address_range)
int EGG_System_validate_805e0aac(int, int);

// 0x0x805e0af8 (address_range)
void EGG_System_validate_805e0af8(u32, int);

// 0x0x805e0c28 (address_range)
void rt_EGG_System_805e0c28(int);

// 0x0x805e0d40 (address_range)
void EGG_System_validate_805e0d40(int);

// 0x0x805e10f4 (address_range)
void rt_EGG_System_805e10f4(int);

// 0x0x805e119c (address_range)
void EGG_System_validate_805e119c(int);

// 0x0x805e12f8 (address_range)
int EGG_System_validate_805e12f8(int, int);

// 0x0x805e1368 (address_range)
u32 * rt_EGG_System_805e1368(u32);

// 0x0x805e13d8 (address_range)
int EGG_System_validate_805e13d8(int, int);

// 0x0x805e1418 (address_range)
void rt_EGG_System_805e1418(int);

// 0x0x805e1528 (address_range)
void rt_EGG_System_805e1528(int);

// 0x0x805e1594 (address_range)
void EGG_System_validate_805e1594(u32, int);

// 0x0x805e1604 (address_range)
u32 * EGG_System_validate_805e1604(u32, int);

// 0x0x805e16bc (address_range)
void EGG_System_assertFail_805e16bc(void);

// 0x0x805e17e8 (address_range)
u32 EGG_System_validate_805e17e8(u32);

// 0x0x805e184c (address_range)
int EGG_System_validate_805e184c(int, int);

// 0x0x805e1920 (address_range)
void EGG_System_validate_805e1920(int);

// 0x0x805e1cec (address_range)
void rt_EGG_System_805e1cec(int);

// 0x0x805e1d3c (address_range)
void rt_EGG_System_805e1d3c(int);

// 0x0x805e1eb4 (address_range)
void rt_EGG_System_805e1eb4(u32);

// 0x0x805e1f08 (address_range)
void EGG_System_validate_805e1f08(u32);

// 0x0x805e2064 (address_range)
u32 EGG_System_validate_805e2064(u32);

// 0x0x805e20e0 (address_range)
void EGG_System_validate_805e20e0(u32, u32);

// 0x0x805e21f8 (address_range)
u32 * EGG_System_validate_805e21f8(u32, int);

// 0x0x805e2294 (address_range)
void rt_EGG_System_805e2294(int);

// 0x0x805e2300 (address_range)
void rt_EGG_System_805e2300(int);

// 0x0x805e2424 (address_range)
u32 * EGG_System_validate_805e2424(u32, int);

// 0x0x805e25b4 (address_range)
void rt_EGG_System_805e25b4(int);

// 0x0x805e2620 (address_range)
void rt_EGG_System_805e2620(int, int);

// 0x0x805e26b8 (address_range)
void rt_EGG_System_805e26b8(int);

// 0x0x805e276c (address_range)
void rt_EGG_System_805e276c(int);

// 0x0x805e2920 (address_range)
int EGG_System_validate_805e2920(int, int);

// 0x0x805e2968 (address_range)
void EGG_System_validate_805e2968(u32, u32);

// 0x0x805e2a68 (address_range)
void rt_EGG_System_805e2a68(int);

// 0x0x805e2aa4 (address_range)
void EGG_System_validate_805e2aa4(int);

// 0x0x805e2cbc (address_range)
int EGG_System_validate_805e2cbc(int, int);

// 0x0x805e2cfc (address_range)
void EGG_System_validate_805e2cfc(u32, u32);

// 0x0x805e2e0c (address_range)
u32 EGG_System_validate_805e2e0c(u32);

// 0x0x805e2e70 (address_range)
void rt_EGG_System_805e2e70(void);

// 0x0x805e31c4 (address_range)
void EGG_System_validate_805e31c4(int);

// 0x0x805e33f8 (address_range)
u32 rt_EGG_System_805e33f8(int, u32, u32, int);

// 0x0x805e355c (address_range)
void rt_EGG_System_805e355c(int);

// 0x0x805e3730 (address_range)
void rt_EGG_System_805e3730(void);

// 0x0x805e3a48 (address_range)
void rt_EGG_System_805e3a48(void);

// 0x0x805e3e10 (address_range)
void rt_EGG_System_805e3e10(int);

// 0x0x805e3ed0 (address_range)
void EGG_System_validate_805e3ed0(int);

// 0x0x805e4234 (address_range)
void EGG_System_validate_805e4234(int);

// 0x0x805e4398 (address_range)
void rt_EGG_System_805e4398(u64, u32, u32, u32);

// 0x0x805e4420 (address_range)
void rt_EGG_System_805e4420(void);

// 0x0x805e47f4 (address_range)
void rt_EGG_System_805e47f4(int);

// 0x0x805e48d0 (address_range)
void EGG_System_assertFail_805e48d0(void);

// 0x0x805e4bac (address_range)
void rt_EGG_System_805e4bac(void);

// 0x0x805e4d9c (address_range)
void rt_EGG_System_805e4d9c(void);

// 0x0x805e4fb8 (address_range)
void rt_EGG_System_805e4fb8(void);

// 0x0x805e54a4 (address_range)
void rt_EGG_System_805e54a4(void);

// 0x0x805e55dc (address_range)
void EGG_System_validate_805e55dc(int);

// 0x0x805e56d8 (address_range)
void rt_EGG_System_805e56d8(int);

// 0x0x805e577c (address_range)
void rt_EGG_System_805e577c(int);

// 0x0x805e583c (address_range)
void EGG_System_validate_805e583c(int);

// 0x0x805e59cc (address_range)
void rt_EGG_System_805e59cc(int);

// 0x0x805e5a48 (address_range)
void rt_EGG_System_805e5a48(int);

// 0x0x805e5b98 (address_range)
void rt_EGG_System_805e5b98(int);

// 0x0x805e5c6c (address_range)
void rt_EGG_System_805e5c6c(int);

// 0x0x805e5d34 (address_range)
void rt_EGG_System_805e5d34(int);

// 0x0x805e5e2c (address_range)
int EGG_System_validate_805e5e2c(int, int);

// 0x0x805e5e9c (address_range)
void rt_EGG_System_805e5e9c(u32);

// 0x0x805e5f14 (address_range)
void rt_EGG_System_805e5f14(void);

// 0x0x805e60c4 (address_range)
void rt_EGG_System_805e60c4(void);

// 0x0x805e6234 (address_range)
void rt_EGG_System_805e6234(void);

// 0x0x805e6450 (address_range)
void rt_EGG_System_805e6450(void);

// 0x0x805e6584 (address_range)
u32 EGG_System_validate_805e6584(u32);

// 0x0x805e661c (address_range)
int EGG_System_validate_805e661c(void);

// 0x0x805e66ec (address_range)
void EGG_System_assertFail_805e66ec(void);

// 0x0x805e6804 (address_range)
double rt_EGG_System_805e6804(u32, char, uint);

// 0x0x805e6880 (address_range)
void EGG_System_assertFail_805e6880(void);

// 0x0x805e68e4 (address_range)
int EGG_System_validate_805e68e4(int, int);

// 0x0x805e6924 (address_range)
int EGG_System_validate_805e6924(int, int);

// 0x0x805e6964 (address_range)
int EGG_System_validate_805e6964(int, int);

// 0x0x805e6a0c (address_range)
void rt_EGG_System_805e6a0c(void);

// 0x0x805e7228 (address_range)
void rt_EGG_System_805e7228(void);

// 0x0x805e72b0 (address_range)
int rt_EGG_System_805e72b0(uint, u32, u32, int);

// 0x0x805e7538 (address_range)
u32 EGG_System_validate_805e7538(u32);

// 0x0x805e76d8 (address_range)
int EGG_System_validate_805e76d8(void);

// 0x0x805e7780 (address_range)
void EGG_System_assertFail_805e7780(void);

// 0x0x805e78fc (address_range)
void EGG_System_assertFail_805e78fc(void);

// 0x0x805e7984 (address_range)
int EGG_System_validate_805e7984(int, int);

// 0x0x805e79c4 (address_range)
u32 EGG_System_validate_805e79c4(int);

// 0x0x805e7a18 (address_range)
u32 EGG_System_validate_805e7a18(int);

// 0x0x805e7b48 (address_range)
void EGG_System_validate_805e7b48(int);

// 0x0x805e7c60 (address_range)
u32 EGG_System_validate_805e7c60(int, int, short);

// 0x0x805e7e7c (address_range)
void EGG_System_validate_805e7e7c(int, u32, u32);

// 0x0x805e7eb0 (address_range)
u32 EGG_System_validate_805e7eb0(int, u32, int);

// 0x0x805e7fbc (address_range)
u32 EGG_System_validate_805e7fbc(int, int, int);

// 0x0x805e8118 (address_range)
u32 EGG_System_validate_805e8118(int, u16);

// 0x0x805e819c (address_range)
void rt_EGG_System_805e819c(int);

// 0x0x805e81a8 (address_range)
void EGG_System_validate_805e81a8(int);

// 0x0x805e8220 (address_range)
u32 EGG_System_validate_805e8220(u32, int);

// 0x0x805e8420 (address_range)
void EGG_System_validate_805e8420(u32, int);

// 0x0x805e85c4 (address_range)
void EGG_System_validate_805e85c4(int);

// 0x0x805e86bc (address_range)
void EGG_System_validate_805e86bc(int);

// 0x0x805e877c (address_range)
int EGG_System_validate_805e877c(int);

// 0x0x805e8808 (address_range)
void rt_EGG_System_805e8808(void);

// 0x0x805e880c (address_range)
void rt_EGG_System_805e880c(void);

// 0x0x805e8990 (address_range)
u32 EGG_System_validate_805e8990(int);

// 0x0x805e89e4 (address_range)
void EGG_System_validate_805e89e4(int);

// 0x0x805e8a74 (address_range)
u32 EGG_System_validate_805e8a74(u32);

// 0x0x805e8ba0 (address_range)
int EGG_System_validate_805e8ba0(void);

// 0x0x805e8c48 (address_range)
void EGG_System_assertFail_805e8c48(void);

// 0x0x805e8cfc (address_range)
u32 * EGG_System_validate_805e8cfc(u32, int);

// 0x0x805e8dc4 (address_range)
void rt_EGG_System_805e8dc4(void);

// 0x0x805e8f04 (address_range)
void rt_EGG_System_805e8f04(int);

// 0x0x805e8f5c (address_range)
void EGG_System_validate_805e8f5c(double, int, int, u32);

// 0x0x805e8fa0 (address_range)
void rt_EGG_System_805e8fa0(void);

// 0x0x805e9064 (address_range)
u32 EGG_System_validate_805e9064(u32);

// 0x0x805e9190 (address_range)
int EGG_System_validate_805e9190(void);

// 0x0x805e9238 (address_range)
void EGG_System_assertFail_805e9238(void);

// 0x0x805e92ec (address_range)
u32 * EGG_System_validate_805e92ec(u32, int);

// 0x0x805e9390 (address_range)
void EGG_System_validate_805e9390(int, int, u32, u32);

// 0x0x805e94e0 (address_range)
u32 EGG_System_validate_805e94e0(int);

// 0x0x805e9558 (address_range)
void EGG_System_assertFail_805e9558(void);

// 0x0x805e96e4 (address_range)
void rt_EGG_System_805e96e4(int);

// 0x0x805e973c (address_range)
void rt_EGG_System_805e973c(u32, int);

// 0x0x805e97b0 (address_range)
void EGG_System_validate_805e97b0(int);

// 0x0x805e981c (address_range)
u32 EGG_System_validate_805e981c(int);

// 0x0x805e9870 (address_range)
void EGG_System_validate_805e9870(int);

// 0x0x805e9bec (address_range)
void EGG_System_assertFail_805e9bec(void);

// 0x0x805e9c64 (address_range)
void EGG_System_assertFail_805e9c64(void);

// 0x0x805e9f98 (address_range)
void rt_EGG_System_805e9f98(uint, uint);

// 0x0x805ea0ec (address_range)
void rt_EGG_System_805ea0ec(void);

// 0x0x805ea434 (address_range)
void rt_EGG_System_805ea434(int);

// 0x0x805ea4cc (address_range)
void rt_EGG_System_805ea4cc(double, int);

// 0x0x805ea57c (address_range)
void rt_EGG_System_805ea57c(void);

// 0x0x805ea690 (address_range)
void rt_EGG_System_805ea690(double, int);

// 0x0x805ea778 (address_range)
void rt_EGG_System_805ea778(double, double, int);

// 0x0x805ea858 (address_range)
u32 EGG_System_validate_805ea858(u32);

// 0x0x805ea9f0 (address_range)
int EGG_System_validate_805ea9f0(void);

// 0x0x805eaa9c (address_range)
void EGG_System_assertFail_805eaa9c(void);

// 0x0x805eabe8 (address_range)
void EGG_System_assertFail_805eabe8(void);

// 0x0x805eac68 (address_range)
int EGG_System_validate_805eac68(int, int);

// 0x0x805eaca8 (address_range)
u32 EGG_System_validate_805eaca8(int);

// 0x0x805eadc8 (address_range)
void rt_EGG_System_805eadc8(int, u32);

// 0x0x805eadfc (address_range)
void EGG_System_validate_805eadfc(int);

// 0x0x805eae14 (address_range)
void rt_EGG_System_805eae14(int);

// 0x0x805eaf4c (address_range)
void EGG_System_validate_805eaf4c(int);

// 0x0x805eaf68 (address_range)
void rt_EGG_System_805eaf68(int);

// 0x0x805ebcd8 (address_range)
u32 EGG_System_validate_805ebcd8(int, int);

// 0x0x805ebeac (address_range)
void EGG_System_validate_805ebeac(int, int, u32);

// 0x0x805ebee0 (address_range)
void rt_EGG_System_805ebee0(int, int, int);

// 0x0x805ec0d8 (address_range)
void EGG_System_assertFail_805ec0d8(void);

// 0x0x805ec174 (address_range)
void rt_EGG_System_805ec174(int);

// 0x0x805ec1e4 (address_range)
void rt_EGG_System_805ec1e4(void);

// 0x0x805ec694 (address_range)
void rt_EGG_System_805ec694(int);

// 0x0x805ec75c (address_range)
void EGG_System_validate_805ec75c(u32);

// 0x0x805ec7e8 (address_range)
int * EGG_System_validate_805ec7e8(int, int);

// 0x0x805ec8a8 (address_range)
void rt_EGG_System_805ec8a8(int, int);

// 0x0x805ec950 (address_range)
void rt_EGG_System_805ec950(void);

// 0x0x805ecb18 (address_range)
int EGG_System_validate_805ecb18(int, int, int);

// 0x0x805ecc1c (address_range)
u32 EGG_System_validate_805ecc1c(u32);

// 0x0x805ecd54 (address_range)
int EGG_System_validate_805ecd54(void);

// 0x0x805ece24 (address_range)
void EGG_System_assertFail_805ece24(void);

// 0x0x805ecf40 (address_range)
void EGG_System_validate_805ecf40(u32);

// 0x0x805ecfe4 (address_range)
u32 EGG_System_validate_805ecfe4(u32);

// 0x0x805ed050 (address_range)
u32 * EGG_System_validate_805ed050(u32, int);

// 0x0x805ed134 (address_range)
void EGG_System_validate_805ed134(int, u32);

// 0x0x805ed17c (address_range)
void EGG_System_validate_805ed17c(int);

// 0x0x805ed1d8 (address_range)
int EGG_System_validate_805ed1d8(int, int);

// 0x0x805ed218 (address_range)
void EGG_System_validate_805ed218(int);

// 0x0x805ed2ec (address_range)
void EGG_System_validate_805ed2ec(int);

// 0x0x805ed378 (address_range)
u32 EGG_System_validate_805ed378(u32);

// 0x0x805ed3d0 (address_range)
void EGG_System_validate_805ed3d0(int);

// 0x0x805ed448 (address_range)
u32 EGG_System_validate_805ed448(u32);

// 0x0x805ed574 (address_range)
void EGG_System_assertFail_805ed574(void);

// 0x0x805ed660 (address_range)
void EGG_System_assertFail_805ed660(void);

// 0x0x805ed714 (address_range)
void EGG_System_assertFail_805ed714(void);

// 0x0x805ed7e4 (address_range)
u32 * EGG_System_validate_805ed7e4(u32, int);

// 0x0x805ed8ac (address_range)
void EGG_System_assertFail_805ed8ac(void);

// 0x0x805ed9fc (address_range)
int EGG_System_validate_805ed9fc(int, int);

// 0x0x805eda3c (address_range)
void EGG_System_validate_805eda3c(int, u32);

// 0x0x805edad4 (address_range)
void EGG_System_assertFail_805edad4(void);

// 0x0x805edb4c (address_range)
void rt_EGG_System_805edb4c(int);

// 0x0x805edb70 (address_range)
void EGG_System_validate_805edb70(u32);

// 0x0x805edc74 (address_range)
int EGG_System_validate_805edc74(int, int);

// 0x0x805edcb4 (address_range)
u32 EGG_System_validate_805edcb4(int);

// 0x0x805edd28 (address_range)
int EGG_System_validate_805edd28(int, int);

// 0x0x805eddb0 (address_range)
u32 EGG_System_validate_805eddb0(int);

// 0x0x805ede50 (address_range)
void EGG_System_validate_805ede50(double, int);

// 0x0x805edec8 (address_range)
void rt_EGG_System_805edec8(int);

// 0x0x805edf14 (address_range)
u32 EGG_System_validate_805edf14(int, u32, u32, u32, u32);

// 0x0x805edf90 (address_range)
void EGG_System_validate_805edf90(u32);

// 0x0x805ee0b8 (address_range)
u32 EGG_System_validate_805ee0b8(int);

// 0x0x805ee17c (address_range)
void rt_EGG_System_805ee17c(int);

// 0x0x805ee1c4 (address_range)
void rt_EGG_System_805ee1c4(int, int, uint);

// 0x0x805ee2d8 (address_range)
u32 EGG_System_validate_805ee2d8(int, u32);

// 0x0x805ee448 (address_range)
u32 EGG_System_validate_805ee448(int, u32);

// 0x0x805ee5a4 (address_range)
u32 EGG_System_validate_805ee5a4(int, u32);

// 0x0x805ee714 (address_range)
void EGG_System_validate_805ee714(u32);

// 0x0x805ee83c (address_range)
void rt_EGG_System_805ee83c(int, u32);

// 0x0x805ee850 (address_range)
u32 EGG_System_validate_805ee850(int, u32, u32);

// 0x0x805ee8c4 (address_range)
void rt_EGG_System_805ee8c4(int, u32, u32);

// 0x0x805ee8dc (address_range)
u32 EGG_System_validate_805ee8dc(int, u32, u32, u32);

// 0x0x805eeaa4 (address_range)
u32 rt_EGG_System_805eeaa4(u64, int, int);

// 0x0x805eebe4 (address_range)
u32 EGG_System_validate_805eebe4(int, int);

// 0x0x805eedf8 (address_range)
void EGG_System_validate_805eedf8(int, u32);

// 0x0x805eee90 (address_range)
void EGG_System_validate_805eee90(int, u32, u32);

// 0x0x805eeef4 (address_range)
u32 EGG_System_validate_805eeef4(int, u32);

// 0x0x805eef80 (address_range)
u32 EGG_System_validate_805eef80(int, u32);

// 0x0x805ef00c (address_range)
void EGG_System_assertFail_805ef00c(void);

// 0x0x805ef0cc (address_range)
u32 EGG_System_validate_805ef0cc(int, u32, int);

// 0x0x805ef160 (address_range)
u32 EGG_System_validate_805ef160(int, u32, int);

// 0x0x805ef1f4 (address_range)
void EGG_System_assertFail_805ef1f4(void);

// 0x0x805ef2b0 (address_range)
u32 EGG_System_validate_805ef2b0(int, int);

// 0x0x805ef398 (address_range)
u32 EGG_System_validate_805ef398(int, int);

// 0x0x805ef480 (address_range)
void EGG_System_assertFail_805ef480(void);

// 0x0x805ef59c (address_range)
u32 EGG_System_validate_805ef59c(int, u32, int);

// 0x0x805ef604 (address_range)
u32 EGG_System_validate_805ef604(int, u32, int);

// 0x0x805ef66c (address_range)
void EGG_System_assertFail_805ef66c(void);

// 0x0x805ef710 (address_range)
u32 EGG_System_validate_805ef710(int, u32);

// 0x0x805ef79c (address_range)
u32 EGG_System_validate_805ef79c(int, u32);

// 0x0x805ef828 (address_range)
void EGG_System_assertFail_805ef828(void);

// 0x0x805ef8e8 (address_range)
u32 EGG_System_validate_805ef8e8(int, u32, int);

// 0x0x805ef97c (address_range)
u32 EGG_System_validate_805ef97c(int, u32, int);

// 0x0x805efa10 (address_range)
void EGG_System_assertFail_805efa10(void);

// 0x0x805efacc (address_range)
int EGG_System_validate_805efacc(int, int);

// 0x0x805efb94 (address_range)
u32 EGG_System_validate_805efb94(int);

// 0x0x805efdc8 (address_range)
int EGG_System_validate_805efdc8(int, int);

// 0x0x805efe10 (address_range)
void EGG_System_validate_805efe10(int);

// 0x0x805efecc (address_range)
void EGG_System_validate_805efecc(int);

// 0x0x805eff44 (address_range)
void EGG_System_validate_805eff44(u32, u32);

// 0x0x805effe0 (address_range)
u32 rt_EGG_System_805effe0(void);

// 0x0x805f0068 (address_range)
void rt_EGG_System_805f0068(void);

// 0x0x805f006c (address_range)
void rt_EGG_System_805f006c(int, int);

// 0x0x805f00c8 (address_range)
void rt_EGG_System_805f00c8(int);

// 0x0x805f00d0 (address_range)
int rt_EGG_System_805f00d0(int);

// 0x0x805f00ec (address_range)
u32 * rt_EGG_System_805f00ec(u32);

// 0x0x805f0140 (address_range)
int EGG_System_validate_805f0140(int, int);

// 0x0x805f0180 (address_range)
void rt_EGG_System_805f0180(int, int, uint);

// 0x0x805f01fc (address_range)
void rt_EGG_System_805f01fc(void);

// 0x0x805f07a0 (address_range)
void rt_EGG_System_805f07a0(void);

// 0x0x805f0bc0 (address_range)
void rt_EGG_System_805f0bc0(void);

// 0x0x805f0dc8 (address_range)
u32 EGG_System_validate_805f0dc8(int, int);

// 0x0x805f11c4 (address_range)
void EGG_System_assertFail_805f11c4(void);

// 0x0x805f16ac (address_range)
int EGG_System_validate_805f16ac(int, int);

// 0x0x805f17d8 (address_range)
void EGG_System_validate_805f17d8(u32);

// 0x0x805f1880 (address_range)
int EGG_System_validate_805f1880(int, int);

// 0x0x805f18c0 (address_range)
u32 EGG_System_validate_805f18c0(int);

// 0x0x805f1934 (address_range)
int EGG_System_validate_805f1934(int, int);

// 0x0x805f1a60 (address_range)
u32 EGG_System_validate_805f1a60(int, int);

// 0x0x805f1c90 (address_range)
u32 EGG_System_validate_805f1c90(int, u32);

// 0x0x805f1d9c (address_range)
u32 EGG_System_validate_805f1d9c(int, int);

// 0x0x805f1f28 (address_range)
u32 EGG_System_validate_805f1f28(int, int);

// 0x0x805f2094 (address_range)
u32 rt_EGG_System_805f2094(u64, int, int);

// 0x0x805f2190 (address_range)
u32 rt_EGG_System_805f2190(u64, int, int);

// 0x0x805f22d0 (address_range)
void EGG_System_validate_805f22d0(u32);

// 0x0x805f2378 (address_range)
u32 EGG_System_validate_805f2378(int);

// 0x0x805f23ec (address_range)
int EGG_System_validate_805f23ec(int, int);

// 0x0x805f2494 (address_range)
u32 EGG_System_validate_805f2494(int, u32);

// 0x0x805f258c (address_range)
u32 EGG_System_validate_805f258c(int, u32);

// 0x0x805f2680 (address_range)
u32 rt_EGG_System_805f2680(u64, int, int);

// 0x0x805f273c (address_range)
u32 EGG_System_validate_805f273c(int, int);

// 0x0x805f2868 (address_range)
u32 EGG_System_validate_805f2868(int, u32, u32);

// 0x0x805f28dc (address_range)
u32 EGG_System_validate_805f28dc(int, u32, u32, u32);

// 0x0x805f295c (address_range)
u32 EGG_System_validate_805f295c(int, u32, u32);

// 0x0x805f29d0 (address_range)
u32 EGG_System_validate_805f29d0(int, u32, u32, u32);

// 0x0x805f2a50 (address_range)
void EGG_System_validate_805f2a50(int);

// 0x0x805f2b00 (address_range)
void EGG_System_validate_805f2b00(int, u32, u32);

// 0x0x805f2b64 (address_range)
void EGG_System_validate_805f2b64(int, u32);

// 0x0x805f2bc8 (address_range)
u32 EGG_System_validate_805f2bc8(int, u32, u32);

// 0x0x805f2c3c (address_range)
u32 EGG_System_validate_805f2c3c(int, u32, u32, u32);

// 0x0x805f2cbc (address_range)
u32 EGG_System_validate_805f2cbc(int, u32, u32);

// 0x0x805f2d30 (address_range)
u32 EGG_System_validate_805f2d30(int, u32, u32, u32);

// 0x0x805f2db0 (address_range)
void EGG_System_validate_805f2db0(int);

// 0x0x805f2e24 (address_range)
void EGG_System_validate_805f2e24(int, u32, u32);

// 0x0x805f2e88 (address_range)
u32 EGG_System_validate_805f2e88(int, u32);

// 0x0x805f2f14 (address_range)
u32 EGG_System_validate_805f2f14(int, u32);

// 0x0x805f2fa0 (address_range)
void EGG_System_assertFail_805f2fa0(void);

// 0x0x805f3060 (address_range)
u32 EGG_System_validate_805f3060(int, u32, int);

// 0x0x805f30f4 (address_range)
u32 EGG_System_validate_805f30f4(int, u32, int);

// 0x0x805f3188 (address_range)
void EGG_System_assertFail_805f3188(void);

// 0x0x805f3244 (address_range)
u32 EGG_System_validate_805f3244(int, int);

// 0x0x805f332c (address_range)
u32 EGG_System_validate_805f332c(int, int);

// 0x0x805f3414 (address_range)
void EGG_System_assertFail_805f3414(void);

// 0x0x805f3530 (address_range)
u32 EGG_System_validate_805f3530(int, u32, int);

// 0x0x805f3598 (address_range)
u32 EGG_System_validate_805f3598(int, u32, int);

// 0x0x805f3600 (address_range)
void EGG_System_assertFail_805f3600(void);

// 0x0x805f36a4 (address_range)
u32 EGG_System_validate_805f36a4(int, u32);

// 0x0x805f3730 (address_range)
u32 EGG_System_validate_805f3730(int, u32);

// 0x0x805f37bc (address_range)
void EGG_System_assertFail_805f37bc(void);

// 0x0x805f387c (address_range)
u32 EGG_System_validate_805f387c(int, u32, int);

// 0x0x805f3910 (address_range)
u32 EGG_System_validate_805f3910(int, u32, int);

// 0x0x805f39a4 (address_range)
void EGG_System_assertFail_805f39a4(void);

// 0x0x805f3a60 (address_range)
u32 EGG_System_validate_805f3a60(int, u32);

// 0x0x805f3aec (address_range)
u32 EGG_System_validate_805f3aec(int, u32);

// 0x0x805f3b78 (address_range)
void EGG_System_assertFail_805f3b78(void);

// 0x0x805f3c38 (address_range)
u32 EGG_System_validate_805f3c38(int, u32, int);

// 0x0x805f3ccc (address_range)
u32 EGG_System_validate_805f3ccc(int, u32, int);

// 0x0x805f3d60 (address_range)
void EGG_System_assertFail_805f3d60(void);

// 0x0x805f3e1c (address_range)
u32 EGG_System_validate_805f3e1c(int, int);

// 0x0x805f3f04 (address_range)
u32 EGG_System_validate_805f3f04(int, int);

// 0x0x805f3fec (address_range)
void EGG_System_assertFail_805f3fec(void);

// 0x0x805f4108 (address_range)
u32 EGG_System_validate_805f4108(int, u32, int);

// 0x0x805f4170 (address_range)
u32 EGG_System_validate_805f4170(int, u32, int);

// 0x0x805f41d8 (address_range)
void EGG_System_assertFail_805f41d8(void);

// 0x0x805f427c (address_range)
u32 EGG_System_validate_805f427c(int, u32);

// 0x0x805f4308 (address_range)
u32 EGG_System_validate_805f4308(int, u32);

// 0x0x805f4394 (address_range)
void EGG_System_assertFail_805f4394(void);

// 0x0x805f4454 (address_range)
u32 EGG_System_validate_805f4454(int, u32, int);

// 0x0x805f44e8 (address_range)
u32 EGG_System_validate_805f44e8(int, u32, int);

// 0x0x805f457c (address_range)
void EGG_System_assertFail_805f457c(void);

// 0x0x805f4638 (address_range)
int EGG_System_validate_805f4638(int, int);

// 0x0x805f46c4 (address_range)
int EGG_System_validate_805f46c4(int, int);

// 0x0x805f48e8 (address_range)
int EGG_System_validate_805f48e8(int, int);

// 0x0x805f4928 (address_range)
void EGG_System_validate_805f4928(u32);

// 0x0x805f4a5c (address_range)
int EGG_System_validate_805f4a5c(int, int);

// 0x0x805f4ae8 (address_range)
u32 EGG_System_validate_805f4ae8(int);

// 0x0x805f4c30 (address_range)
void rt_EGG_System_805f4c30(int);

// 0x0x805f4d44 (address_range)
void EGG_System_validate_805f4d44(int);

// 0x0x805f4dcc (address_range)
void EGG_System_validate_805f4dcc(int);

// 0x0x805f5540 (address_range)
void rt_EGG_System_805f5540(int);

// 0x0x805f5678 (address_range)
void EGG_System_validate_805f5678(int, u32);

// 0x0x805f573c (address_range)
u32 EGG_System_validate_805f573c(int, int);

// 0x0x805f59d4 (address_range)
void rt_EGG_System_805f59d4(void);

// 0x0x805f6240 (address_range)
void rt_EGG_System_805f6240(int, uint);

// 0x0x805f62a8 (address_range)
void EGG_System_validate_805f62a8(int);

// 0x0x805f6444 (address_range)
void EGG_System_validate_805f6444(int);

// 0x0x805f65e0 (address_range)
void rt_EGG_System_805f65e0(void);

// 0x0x805f68a8 (address_range)
void EGG_System_validate_805f68a8(int, int);

// 0x0x805f69b0 (address_range)
u32 EGG_System_validate_805f69b0(int, int, u32);

// 0x0x805f6a34 (address_range)
u32 EGG_System_validate_805f6a34(int, int, u32);

// 0x0x805f6ac0 (address_range)
void rt_EGG_System_805f6ac0(int);

// 0x0x805f6d0c (address_range)
void rt_EGG_System_805f6d0c(int);

// 0x0x805f6f20 (address_range)
void rt_EGG_System_805f6f20(int);

// 0x0x805f6fd4 (address_range)
void rt_EGG_System_805f6fd4(int);

// 0x0x805f707c (address_range)
void rt_EGG_System_805f707c(void);

// 0x0x805f7204 (address_range)
void rt_EGG_System_805f7204(int, int);

// 0x0x805f73a0 (address_range)
void rt_EGG_System_805f73a0(int, int);

// 0x0x805f74f4 (address_range)
void rt_EGG_System_805f74f4(int, int, int, int, int);

// 0x0x805f86c8 (address_range)
void rt_EGG_System_805f86c8(int);

// 0x0x805f8798 (address_range)
void rt_EGG_System_805f8798(int);

// 0x0x805f87f8 (address_range)
void rt_EGG_System_805f87f8(int);

// 0x0x805f894c (address_range)
void rt_EGG_System_805f894c(int);

// 0x0x805f8b8c (address_range)
void rt_EGG_System_805f8b8c(int);

// 0x0x805f8f14 (address_range)
void EGG_System_validate_805f8f14(int);

// 0x0x805f9508 (address_range)
void rt_EGG_System_805f9508(void);

// 0x0x805f9b64 (address_range)
void EGG_System_validate_805f9b64(u32, int);

// 0x0x805f9c60 (address_range)
void rt_EGG_System_805f9c60(void);

// 0x0x805f9f64 (address_range)
void rt_EGG_System_805f9f64(int);

// 0x0x805f9fe0 (address_range)
void rt_EGG_System_805f9fe0(int);

// 0x0x805fa084 (address_range)
void rt_EGG_System_805fa084(int, int);

// 0x0x805fa188 (address_range)
void EGG_System_validate_805fa188(u32);

// 0x0x805fa234 (address_range)
int EGG_System_validate_805fa234(int, int);

// 0x0x805fa274 (address_range)
int EGG_System_validate_805fa274(int, int);

// 0x0x805fa304 (address_range)
void rt_EGG_System_805fa304(int);

// 0x0x805fa434 (address_range)
void rt_EGG_System_805fa434(int, int, uint);

// 0x0x805fa4a4 (address_range)
void rt_EGG_System_805fa4a4(int, u32);

// 0x0x805fa4fc (address_range)
void rt_EGG_System_805fa4fc(void);

// 0x0x805fb074 (address_range)
void rt_EGG_System_805fb074(void);

// 0x0x805fb388 (address_range)
void rt_EGG_System_805fb388(void);

// 0x0x805fb544 (address_range)
void rt_EGG_System_805fb544(int);

// 0x0x805fbd70 (address_range)
u32 EGG_System_validate_805fbd70(int, u32, u32, u32, u32);

// 0x0x805fbeb4 (address_range)
u32 EGG_System_validate_805fbeb4(u32);

// 0x0x805fc004 (address_range)
int EGG_System_validate_805fc004(void);

// 0x0x805fc078 (address_range)
int EGG_System_validate_805fc078(int, int);

// 0x0x805fc0b8 (address_range)
void EGG_System_assertFail_805fc0b8(void);

// 0x0x805fc1bc (address_range)
u32 EGG_System_validate_805fc1bc(int);

// 0x0x805fc294 (address_range)
void rt_EGG_System_805fc294(int);

// 0x0x805fc2ec (address_range)
void rt_EGG_System_805fc2ec(void);

// 0x0x805fc30c (address_range)
void EGG_System_validate_805fc30c(int);

// 0x0x805fc4ac (address_range)
void rt_EGG_System_805fc4ac(int, int);

// 0x0x805fc4c4 (address_range)
void rt_EGG_System_805fc4c4(int);

// 0x0x805fc678 (address_range)
void EGG_System_validate_805fc678(int);

// 0x0x805fc7f0 (address_range)
u32 rt_EGG_System_805fc7f0(void);

// 0x0x805fc810 (address_range)
void EGG_System_validate_805fc810(int, int);

// 0x0x805fcacc (address_range)
int EGG_System_validate_805fcacc(void);

// 0x0x805fcb1c (address_range)
void EGG_System_assertFail_805fcb1c(void);

// 0x0x805fcc84 (address_range)
void EGG_System_assertFail_805fcc84(void);

// 0x0x805fcea4 (address_range)
int EGG_System_validate_805fcea4(int, int);

// 0x0x805fcee4 (address_range)
u32 EGG_System_validate_805fcee4(int);

// 0x0x805fcffc (address_range)
void rt_EGG_System_805fcffc(int);

// 0x0x805fd1a8 (address_range)
void EGG_System_validate_805fd1a8(int);

// 0x0x805fd29c (address_range)
void rt_EGG_System_805fd29c(void);

// 0x0x805fd69c (address_range)
void EGG_System_validate_805fd69c(int, int);

// 0x0x805fd794 (address_range)
void EGG_System_assertFail_805fd794(void);

// 0x0x805fd8f8 (address_range)
void EGG_System_assertFail_805fd8f8(void);

// 0x0x805fda14 (address_range)
void rt_EGG_System_805fda14(u32);

// 0x0x805fdaa0 (address_range)
void EGG_System_validate_805fdaa0(int);

// 0x0x805fdb10 (address_range)
void rt_EGG_System_805fdb10(int);

// 0x0x805fdc64 (address_range)
u32 rt_EGG_System_805fdc64(int);

// 0x0x805fdd28 (address_range)
u32 rt_EGG_System_805fdd28(int);

// 0x0x805fdd9c (address_range)
u32 rt_EGG_System_805fdd9c(int);

// 0x0x805fde58 (address_range)
void rt_EGG_System_805fde58(void);

// 0x0x805fdf5c (address_range)
void EGG_System_assertFail_805fdf5c(void);

// 0x0x805fe010 (address_range)
void EGG_System_validate_805fe010(double, int);

// 0x0x805fe0c0 (address_range)
void EGG_System_validate_805fe0c0(int, int);

// 0x0x805fe7bc (address_range)
int rt_EGG_System_805fe7bc(int);

// 0x0x805feaa4 (address_range)
u32 rt_EGG_System_805feaa4(int);

// 0x0x805feb3c (address_range)
void rt_EGG_System_805feb3c(int);

// 0x0x805febd0 (address_range)
void rt_EGG_System_805febd0(int);

// 0x0x805ff0d8 (address_range)
void EGG_System_validate_805ff0d8(int);

// 0x0x805ff154 (address_range)
void rt_EGG_System_805ff154(void);

// 0x0x805ffd50 (address_range)
void rt_EGG_System_805ffd50(int, u32);

// 0x0x805ffdf0 (address_range)
void rt_EGG_System_805ffdf0(int);

// 0x0x805ffecc (address_range)
u32 EGG_System_validate_805ffecc(u32);

// 0x0x805ffff8 (address_range)
int EGG_System_validate_805ffff8(void);

#ifdef __cplusplus
}
#endif
