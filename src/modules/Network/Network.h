#pragma once
// Network module - Mario Kart Wii PC Port
// Phase 6: 171 functions
#include "../types.h"

#ifdef __cplusplus
extern "C" {
#endif

// 0x0x8055008c (address_range)
u32 net_RKNet_8055008c(int);

// 0x0x80550184 (address_range)
u32 net_RKNet_80550184(int);

// 0x0x8055027c (address_range)
int net_RKNet_8055027c(int);

// 0x0x80550374 (address_range)
u32 * net_RKNet_80550374(u32);

// 0x0x805504e4 (address_range)
int RKNet_validate_805504e4(int, int);

// 0x0x805507b4 (address_range)
void RKNet_assertFail_805507b4(void);

// 0x0x805508fc (address_range)
void RKNet_validate_805508fc(int);

// 0x0x80550a7c (address_range)
bool net_RKNet_80550a7c(int);

// 0x0x80550b10 (address_range)
void net_RKNet_80550b10(u32, uint);

// 0x0x80550bc8 (address_range)
void net_RKNet_80550bc8(u32, uint);

// 0x0x80550c80 (address_range)
void RKNet_assertFail_80550c80(void);

// 0x0x80550ce4 (address_range)
void RKNet_assertFail_80550ce4(void);

// 0x0x80550d38 (address_range)
void net_RKNet_80550d38(void);

// 0x0x80550d7c (address_range)
u32 net_RKNet_80550d7c(u32);

// 0x0x80550dbc (address_range)
int RKNet_validate_80550dbc(int, int);

// 0x0x80550e14 (address_range)
void RKNet_assertFail_80550e14(void);

// 0x0x80551090 (address_range)
void RKNet_assertFail_80551090(void);

// 0x0x80551310 (address_range)
void net_RKNet_80551310(u32);

// 0x0x805513e8 (address_range)
void net_RKNet_805513e8(int, int, u32);

// 0x0x80551474 (address_range)
void net_RKNet_80551474(int, u32);

// 0x0x80551508 (address_range)
void net_RKNet_80551508(int, int);

// 0x0x805515f4 (address_range)
u32 net_RKNet_805515f4(int, int, int);

// 0x0x8055178c (address_range)
u32 net_RKNet_8055178c(int, int);

// 0x0x80551954 (address_range)
u32 net_RKNet_80551954(int, int);

// 0x0x80551b1c (address_range)
u32 net_RKNet_80551b1c(int, int);

// 0x0x80551be8 (address_range)
u32 net_RKNet_80551be8(int, int);

// 0x0x80551cec (address_range)
void net_RKNet_80551cec(int, u32, u32, u32);

// 0x0x80551d48 (address_range)
void net_RKNet_80551d48(int, int, u32);

// 0x0x80551e08 (address_range)
void net_RKNet_80551e08(int, u32, u32, u32);

// 0x0x80551e64 (address_range)
void net_RKNet_80551e64(int, int, u32);

// 0x0x80551f44 (address_range)
u32 net_RKNet_80551f44(int, int);

// 0x0x80551fd8 (address_range)
u32 net_RKNet_80551fd8(int, int);

// 0x0x8055208c (address_range)
u32 net_RKNet_8055208c(int, int);

// 0x0x80552120 (address_range)
u32 net_RKNet_80552120(int, int);

// 0x0x805521d4 (address_range)
u32 net_RKNet_805521d4(int, int);

// 0x0x80552290 (address_range)
bool net_RKNet_80552290(int, int);

// 0x0x80552330 (address_range)
u32 net_RKNet_80552330(int, int);

// 0x0x8055240c (address_range)
uint net_RKNet_8055240c(int, uint, int);

// 0x0x80552954 (address_range)
int RKNet_validate_80552954(int, int);

// 0x0x80552994 (address_range)
void net_RKNet_80552994(u32);

// 0x0x80552a64 (address_range)
void RKNet_validate_80552a64(int);

// 0x0x80552dc8 (address_range)
void net_RKNet_80552dc8(int);

// 0x0x8055336c (address_range)
void net_RKNet_8055336c(int, int, uint);

// 0x0x805535d0 (address_range)
void net_RKNet_805535d0(u32);

// 0x0x80553660 (address_range)
void net_RKNet_80553660(int, uint);

// 0x0x80553a9c (address_range)
void net_RKNet_80553a9c(int, uint);

// 0x0x80553d90 (address_range)
void net_RKNet_80553d90(int);

// 0x0x80554404 (address_range)
void RKNet_assertFail_80554404(void);

// 0x0x805546f4 (address_range)
int RKNet_validate_805546f4(int, int);

// 0x0x80554734 (address_range)
void RKNet_assertFail_80554734(void);

// 0x0x805547b4 (address_range)
void RKNet_assertFail_805547b4(void);

// 0x0x80554808 (address_range)
void RKNet_validate_80554808(char);

// 0x0x80554900 (address_range)
void RKNet_validate_80554900(u32);

// 0x0x8055497c (address_range)
void RKNet_validate_8055497c(char);

// 0x0x80554a78 (address_range)
void net_RKNet_80554a78(char, uint);

// 0x0x80554abc (address_range)
void RKNet_validate_80554abc(char, uint);

// 0x0x80554ba8 (address_range)
void RKNet_validate_80554ba8(int);

// 0x0x80554c14 (address_range)
bool net_RKNet_80554c14(int);

// 0x0x80554c24 (address_range)
uint net_RKNet_80554c24(int, uint);

// 0x0x80554c44 (address_range)
bool net_RKNet_80554c44(char);

// 0x0x80554cdc (address_range)
bool net_RKNet_80554cdc(char);

// 0x0x80554dc4 (address_range)
void RKNet_validate_80554dc4(u32);

// 0x0x80554e20 (address_range)
u32 RKNet_validate_80554e20(int);

// 0x0x80554e78 (address_range)
void RKNet_validate_80554e78(int);

// 0x0x80554f74 (address_range)
void RKNet_validate_80554f74(int);

// 0x0x80554fc8 (address_range)
void RKNet_validate_80554fc8(int);

// 0x0x80555150 (address_range)
u32 RKNet_validate_80555150(u32);

// 0x0x80555298 (address_range)
int RKNet_validate_80555298(void);

// 0x0x805552f4 (address_range)
void RKNet_assertFail_805552f4(void);

// 0x0x805553f0 (address_range)
int RKNet_validate_805553f0(u32);

// 0x0x80555454 (address_range)
void RKNet_assertFail_80555454(void);

// 0x0x80555610 (address_range)
int RKNet_validate_80555610(int, int);

// 0x0x80555650 (address_range)
u32 RKNet_validate_80555650(int);

// 0x0x805556b8 (address_range)
u32 RKNet_validate_805556b8(int);

// 0x0x8055589c (address_range)
void net_RKNet_8055589c(int);

// 0x0x805558e0 (address_range)
u32 net_RKNet_805558e0(int);

// 0x0x805558e8 (address_range)
u32 net_RKNet_805558e8(int);

// 0x0x805558f0 (address_range)
int net_RKNet_805558f0(int);

// 0x0x8055590c (address_range)
int net_RKNet_8055590c(int);

// 0x0x80555918 (address_range)
u32 net_RKNet_80555918(int);

// 0x0x80555920 (address_range)
u32 RKNet_validate_80555920(int);

// 0x0x80555a34 (address_range)
u32 net_RKNet_80555a34(int);

// 0x0x80555a3c (address_range)
int net_RKNet_80555a3c(int);

// 0x0x80555a44 (address_range)
void RKNet_assertFail_80555a44(void);

// 0x0x80555ba0 (address_range)
void net_RKNet_80555ba0(int);

// 0x0x80556070 (address_range)
void RKNet_validate_80556070(int);

// 0x0x80556194 (address_range)
void RKNet_assertFail_80556194(void);

// 0x0x805565b0 (address_range)
int RKNet_validate_805565b0(int, int);

// 0x0x805565f0 (address_range)
int RKNet_validate_805565f0(int, int);

// 0x0x80556648 (address_range)
void net_RKNet_80556648(int);

// 0x0x805576d8 (address_range)
void RKNet_assertFail_805576d8(void);

// 0x0x805578e8 (address_range)
void RKNet_validate_805578e8(int);

// 0x0x80557d54 (address_range)
u32 net_RKNet_80557d54(int);

// 0x0x80557df8 (address_range)
u32 RKNet_validate_80557df8(int, u32, int);

// 0x0x80557f2c (address_range)
u32 RKNet_validate_80557f2c(int, int, int);

// 0x0x80558188 (address_range)
u32 RKNet_validate_80558188(int);

// 0x0x805581f4 (address_range)
void RKNet_assertFail_805581f4(void);

// 0x0x805585fc (address_range)
int net_RKNet_805585fc(int, int);

// 0x0x805586f0 (address_range)
void net_RKNet_805586f0(u32);

// 0x0x80558718 (address_range)
u32 net_RKNet_80558718(int, int);

// 0x0x805589a8 (address_range)
int net_RKNet_805589a8(int, int);

// 0x0x80558ab8 (address_range)
u32 net_RKNet_80558ab8(int);

// 0x0x80558ac4 (address_range)
u32 net_RKNet_80558ac4(int, int, int);

// 0x0x80558c24 (address_range)
u32 net_RKNet_80558c24(int, u32, uint);

// 0x0x80558ccc (address_range)
int net_RKNet_80558ccc(int, u32);

// 0x0x80558d5c (address_range)
u32 net_RKNet_80558d5c(int, int, int);

// 0x0x80558e64 (address_range)
u32 net_RKNet_80558e64(int, uint);

// 0x0x80558fa8 (address_range)
void RKNet_validate_80558fa8(u32, u32);

// 0x0x805591b0 (address_range)
void RKNet_validate_805591b0(u32, u32, u32);

// 0x0x80559214 (address_range)
u32 RKNet_validate_80559214(int, int);

// 0x0x805593a0 (address_range)
u32 RKNet_validate_805593a0(int);

// 0x0x8055946c (address_range)
int net_RKNet_8055946c(int);

// 0x0x80559488 (address_range)
void RKNet_validate_80559488(int);

// 0x0x80559508 (address_range)
void RKNet_validate_80559508(int);

// 0x0x80559c98 (address_range)
void RKNet_validate_80559c98(u32, u32);

// 0x0x80559fa4 (address_range)
void RKNet_assertFail_80559fa4(void);

// 0x0x8055a070 (address_range)
u32 Packets_validate_8055a070(int);

// 0x0x8055a130 (address_range)
void Packets_validate_8055a130(int);

// 0x0x8055a40c (address_range)
u32 Packets_validate_8055a40c(void);

// 0x0x8055a4f8 (address_range)
void Packets_assertFail_8055a4f8(void);

// 0x0x8055a684 (address_range)
void Packets_validate_8055a684(int, u32);

// 0x0x8055a6d0 (address_range)
u32 Packets_validate_8055a6d0(int);

// 0x0x8055a984 (address_range)
void Packets_validate_8055a984(int, u32);

// 0x0x8055aa9c (address_range)
void Packets_assertFail_8055aa9c(void);

// 0x0x8055ac98 (address_range)
void Packets_validate_8055ac98(u32, u32, u32, u32);

// 0x0x8055adec (address_range)
u32 Packets_validate_8055adec(u32, int);

// 0x0x8055af90 (address_range)
void Packets_assertFail_8055af90(void);

// 0x0x8055b180 (address_range)
u32 Packets_validate_8055b180(int);

// 0x0x8055b24c (address_range)
void Packets_validate_8055b24c(int);

// 0x0x8055b3bc (address_range)
u32 Packets_validate_8055b3bc(int);

// 0x0x8055b498 (address_range)
u32 Packets_validate_8055b498(int);

// 0x0x8055b568 (address_range)
void Packets_validate_8055b568(int);

// 0x0x8055b7f0 (address_range)
u32 Packets_validate_8055b7f0(int);

// 0x0x8055b8a0 (address_range)
void Packets_validate_8055b8a0(int);

// 0x0x8055ba08 (address_range)
u32 Packets_validate_8055ba08(int);

// 0x0x8055baa8 (address_range)
void Packets_validate_8055baa8(int);

// 0x0x8055bc00 (address_range)
void Packets_assertFail_8055bc00(void);

// 0x0x8055bde8 (address_range)
u32 Packets_validate_8055bde8(int);

// 0x0x8055c384 (address_range)
void Packets_assertFail_8055c384(void);

// 0x0x8055c504 (address_range)
void Packets_assertFail_8055c504(void);

// 0x0x8055c748 (address_range)
void Packets_assertFail_8055c748(void);

// 0x0x8055c8e0 (address_range)
void Packets_validate_8055c8e0(u32, u32);

// 0x0x8055cb84 (address_range)
void Packets_validate_8055cb84(u32, u32);

// 0x0x8055cfe8 (address_range)
void Packets_validate_8055cfe8(u32, u32);

// 0x0x8055d544 (address_range)
void Packets_validate_8055d544(u32, u32);

// 0x0x8055d93c (address_range)
void Packets_validate_8055d93c(u32, u32, u32, u32, u32);

// 0x0x8055db48 (address_range)
void Packets_assertFail_8055db48(void);

// 0x0x8055dc50 (address_range)
u32 Packets_validate_8055dc50(u32, int, int);

// 0x0x8055dccc (address_range)
u32 Packets_validate_8055dccc(int);

// 0x0x8055dd7c (address_range)
void Packets_validate_8055dd7c(int);

// 0x0x8055dec4 (address_range)
void Packets_validate_8055dec4(int);

// 0x0x8055df48 (address_range)
void Packets_validate_8055df48(int);

// 0x0x8055e0ac (address_range)
u32 Packets_validate_8055e0ac(int);

// 0x0x8055e184 (address_range)
void Packets_validate_8055e184(int);

// 0x0x8055e488 (address_range)
u32 Packets_validate_8055e488(int);

// 0x0x8055e5b8 (address_range)
void Packets_validate_8055e5b8(int);

// 0x0x8055e734 (address_range)
void Packets_validate_8055e734(int, u32, int, int);

// 0x0x8055ea0c (address_range)
void Packets_validate_8055ea0c(u32, int);

// 0x0x8055ec8c (address_range)
u32 Packets_validate_8055ec8c(int);

// 0x0x8055ef5c (address_range)
void Packets_validate_8055ef5c(u32, int);

// 0x0x8055efc8 (address_range)
u32 Packets_validate_8055efc8(int);

// 0x0x8055f17c (address_range)
void Packets_validate_8055f17c(int);

// 0x0x8055f33c (address_range)
void Packets_assertFail_8055f33c(void);

// 0x0x8055f478 (address_range)
void Packets_assertFail_8055f478(void);

// 0x0x8055f604 (address_range)
u32 Packets_validate_8055f604(int);

// 0x0x8055f750 (address_range)
void Packets_validate_8055f750(int, u32);

// 0x0x8055fa20 (address_range)
u32 Packets_validate_8055fa20(int, u32);

// 0x0x8055faac (address_range)
void Packets_validate_8055faac(u32, int);

// 0x0x8055fb54 (address_range)
void Packets_assertFail_8055fb54(void);

// 0x0x8055fc04 (address_range)
void Packets_validate_8055fc04(u32, u32, int);

// 0x0x8055fea4 (address_range)
void Packets_assertFail_8055fea4(void);

#ifdef __cplusplus
}
#endif
