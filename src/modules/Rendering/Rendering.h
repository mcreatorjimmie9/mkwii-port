#pragma once
// Rendering module - Mario Kart Wii PC Port
// Phase 6: 1130 reconstructed functions
// Address range: 0x804e0010 - 0x806fff48

#include "../types.h"

#ifdef __cplusplus
extern "C" {
#endif

// 0x0x804e0010 (address_range)
u32 gfx_EGG_Display_804e0010(uint);

// 0x0x804e0060 (address_range)
u32 * gfx_EGG_Display_804e0060(u32);

// 0x0x804e00bc (address_range)
int EGG_Display_validate_804e00bc(int, int);

// 0x0x804e013c (address_range)
void gfx_EGG_Display_804e013c(int);

// 0x0x804e0224 (address_range)
void gfx_EGG_Display_804e0224(int);

// 0x0x804e02ec (address_range)
void gfx_EGG_Display_804e02ec(void);

// 0x0x804e0348 (address_range)
void gfx_EGG_Display_804e0348(int);

// 0x0x804e03e8 (address_range)
void gfx_EGG_Display_804e03e8(u32);

// 0x0x804e042c (address_range)
void gfx_EGG_Display_804e042c(u32);

// 0x0x804e0470 (address_range)
u32 gfx_EGG_Display_804e0470(void);

// 0x0x804e05a0 (address_range)
u32 * gfx_EGG_Display_804e05a0(u32);

// 0x0x804e0608 (address_range)
int EGG_Display_validate_804e0608(int, int);

// 0x0x804e068c (address_range)
void gfx_EGG_Display_804e068c(int);

// 0x0x804e07e4 (address_range)
void gfx_EGG_Display_804e07e4(u32);

// 0x0x804e0828 (address_range)
void gfx_EGG_Display_804e0828(int);

// 0x0x804e08e4 (address_range)
u32 * gfx_EGG_Display_804e08e4(u32);

// 0x0x804e094c (address_range)
int EGG_Display_validate_804e094c(int, int);

// 0x0x804e09d0 (address_range)
void gfx_EGG_Display_804e09d0(int);

// 0x0x804e0aa4 (address_range)
void gfx_EGG_Display_804e0aa4(void);

// 0x0x804e0b0c (address_range)
void gfx_EGG_Display_804e0b0c(int);

// 0x0x804e0c58 (address_range)
void gfx_EGG_Display_804e0c58(u32);

// 0x0x804e0c9c (address_range)
void gfx_EGG_Display_804e0c9c(int);

// 0x0x804e0da4 (address_range)
u32 * gfx_EGG_Display_804e0da4(u32);

// 0x0x804e0e0c (address_range)
int EGG_Display_validate_804e0e0c(int, int);

// 0x0x804e0e90 (address_range)
void gfx_EGG_Display_804e0e90(int);

// 0x0x804e0f64 (address_range)
void gfx_EGG_Display_804e0f64(int);

// 0x0x804e10b0 (address_range)
void gfx_EGG_Display_804e10b0(u32);

// 0x0x804e10f4 (address_range)
void gfx_EGG_Display_804e10f4(int);

// 0x0x804e1278 (address_range)
u32 * gfx_EGG_Display_804e1278(u32);

// 0x0x804e12ec (address_range)
int EGG_Display_validate_804e12ec(int, int);

// 0x0x804e1364 (address_range)
void gfx_EGG_Display_804e1364(int);

// 0x0x804e140c (address_range)
void gfx_EGG_Display_804e140c(int);

// 0x0x804e1534 (address_range)
void EGG_Display_validate_804e1534(int);

// 0x0x804e168c (address_range)
void EGG_Display_validate_804e168c(int);

// 0x0x804e1d1c (address_range)
void EGG_Display_assertFail_804e1d1c(void);

// 0x0x804e1f54 (address_range)
u32 EGG_Display_validate_804e1f54(int);

// 0x0x804e2018 (address_range)
void EGG_Display_validate_804e2018(int);

// 0x0x804e22d4 (address_range)
void gfx_EGG_Display_804e22d4(int);

// 0x0x804e234c (address_range)
void gfx_EGG_Display_804e234c(int);

// 0x0x804e23ac (address_range)
void gfx_EGG_Display_804e23ac(int, int);

// 0x0x804e2418 (address_range)
void gfx_EGG_Display_804e2418(int);

// 0x0x804e2464 (address_range)
void EGG_Display_validate_804e2464(int);

// 0x0x804e2750 (address_range)
void gfx_EGG_Display_804e2750(int, u32);

// 0x0x804e27e0 (address_range)
void gfx_EGG_Display_804e27e0(int);

// 0x0x804e2880 (address_range)
void EGG_Display_validate_804e2880(int, u32, u32);

// 0x0x804e28b0 (address_range)
void EGG_Display_validate_804e28b0(int, u32);

// 0x0x804e28fc (address_range)
u32 * gfx_EGG_Display_804e28fc(u32);

// 0x0x804e2978 (address_range)
int EGG_Display_validate_804e2978(int, int);

// 0x0x804e29e0 (address_range)
void gfx_EGG_Display_804e29e0(int);

// 0x0x804e2a3c (address_range)
void gfx_EGG_Display_804e2a3c(int);

// 0x0x804e2bc8 (address_range)
void gfx_EGG_Display_804e2bc8(int);

// 0x0x804e2e00 (address_range)
void gfx_EGG_Display_804e2e00(int);

// 0x0x804e2fb0 (address_range)
void gfx_EGG_Display_804e2fb0(int);

// 0x0x804e3154 (address_range)
void gfx_EGG_Display_804e3154(int);

// 0x0x804e3260 (address_range)
void gfx_EGG_Display_804e3260(u32, int, u32);

// 0x0x804e32d0 (address_range)
u32 * gfx_EGG_Display_804e32d0(u32);

// 0x0x804e334c (address_range)
int EGG_Display_validate_804e334c(int, int);

// 0x0x804e33b4 (address_range)
void gfx_EGG_Display_804e33b4(int);

// 0x0x804e3410 (address_range)
void gfx_EGG_Display_804e3410(int);

// 0x0x804e35b4 (address_range)
void gfx_EGG_Display_804e35b4(u32, int, u32);

// 0x0x804e3654 (address_range)
u32 * gfx_EGG_Display_804e3654(u32);

// 0x0x804e36a0 (address_range)
int EGG_Display_validate_804e36a0(int, int);

// 0x0x804e3714 (address_range)
void gfx_EGG_Display_804e3714(int);

// 0x0x804e37d8 (address_range)
void gfx_EGG_Display_804e37d8(void);

// 0x0x804e384c (address_range)
u32 * gfx_EGG_Display_804e384c(u32);

// 0x0x804e38d8 (address_range)
int EGG_Display_validate_804e38d8(int, int);

// 0x0x804e3958 (address_range)
void gfx_EGG_Display_804e3958(int);

// 0x0x804e3a5c (address_range)
void gfx_EGG_Display_804e3a5c(void);

// 0x0x804e3ab4 (address_range)
void gfx_EGG_Display_804e3ab4(int, u32);

// 0x0x804e3b48 (address_range)
void EGG_Display_validate_804e3b48(int, u32, u32);

// 0x0x804e3b78 (address_range)
void EGG_Display_validate_804e3b78(int, u32, u32);

// 0x0x804e3ba8 (address_range)
void EGG_Display_validate_804e3ba8(int, u32, u32);

// 0x0x804e3bfc (address_range)
int gfx_EGG_Display_804e3bfc(int);

// 0x0x804e3c30 (address_range)
int EGG_Display_validate_804e3c30(int, int);

// 0x0x804e3ca0 (address_range)
int EGG_Display_validate_804e3ca0(int, int);

// 0x0x804e3d54 (address_range)
void gfx_EGG_Display_804e3d54(char);

// 0x0x804e3e70 (address_range)
u32 EGG_Display_validate_804e3e70(int);

// 0x0x804e3f90 (address_range)
void gfx_EGG_Display_804e3f90(u32);

// 0x0x804e3fc4 (address_range)
void gfx_EGG_Display_804e3fc4(char);

// 0x0x804e43c8 (address_range)
void EGG_Display_validate_804e43c8(char);

// 0x0x804e44e8 (address_range)
u32 gfx_EGG_Display_804e44e8(char);

// 0x0x804e4590 (address_range)
uint gfx_EGG_Display_804e4590(int);

// 0x0x804e45a4 (address_range)
void gfx_EGG_Display_804e45a4(int);

// 0x0x804e45b8 (address_range)
void gfx_EGG_Display_804e45b8(u32);

// 0x0x804e45d0 (address_range)
void gfx_EGG_Display_804e45d0(int);

// 0x0x804e45fc (address_range)
void gfx_EGG_Display_804e45fc(int);

// 0x0x804e4620 (address_range)
void gfx_EGG_Display_804e4620(int);

// 0x0x804e4670 (address_range)
void gfx_EGG_Display_804e4670(int, u32, u32, u32);

// 0x0x804e4a18 (address_range)
void gfx_EGG_Display_804e4a18(int, u32, u32, u32, u32);

// 0x0x804e4dbc (address_range)
void gfx_EGG_Display_804e4dbc(int, u32, u32, u32);

// 0x0x804e4df4 (address_range)
void gfx_EGG_Display_804e4df4(int, u32, u32, u32, u32);

// 0x0x804e4e28 (address_range)
void gfx_EGG_Display_804e4e28(int, u32, u32, u32, u32);

// 0x0x804e4e64 (address_range)
void gfx_EGG_Display_804e4e64(int, u32, u32, u32, u32, u32);

// 0x0x804e4e9c (address_range)
void gfx_EGG_Display_804e4e9c(int, u32);

// 0x0x804e4ecc (address_range)
void gfx_EGG_Display_804e4ecc(int, u32, u32);

// 0x0x804e4ef8 (address_range)
void EGG_Display_validate_804e4ef8(u32);

// 0x0x804e4f70 (address_range)
u32 EGG_Display_validate_804e4f70(int);

// 0x0x804e4fec (address_range)
void EGG_Display_validate_804e4fec(u32, u32);

// 0x0x804e529c (address_range)
void gfx_EGG_Display_804e529c(u32, u32);

// 0x0x804e53c4 (address_range)
void EGG_Display_validate_804e53c4(int);

// 0x0x804e558c (address_range)
void gfx_EGG_Display_804e558c(u32);

// 0x0x804e56e4 (address_range)
void gfx_EGG_Display_804e56e4(int);

// 0x0x804e5950 (address_range)
void gfx_EGG_Display_804e5950(void);

// 0x0x804e5ccc (address_range)
void gfx_EGG_Display_804e5ccc(int);

// 0x0x804e5d38 (address_range)
void gfx_EGG_Display_804e5d38(int);

// 0x0x804e5df4 (address_range)
void gfx_EGG_Display_804e5df4(int);

// 0x0x804e5e54 (address_range)
void EGG_Display_validate_804e5e54(int);

// 0x0x804e5ea4 (address_range)
void EGG_Display_validate_804e5ea4(int);

// 0x0x804e5ef4 (address_range)
void gfx_EGG_Display_804e5ef4(int, int);

// 0x0x804e5f40 (address_range)
void gfx_EGG_Display_804e5f40(u32, int);

// 0x0x804e5f8c (address_range)
void gfx_EGG_Display_804e5f8c(int, int);

// 0x0x804e5fec (address_range)
u32 gfx_EGG_Display_804e5fec(int, int, u32);

// 0x0x804e6058 (address_range)
bool gfx_EGG_Display_804e6058(int, int);

// 0x0x804e608c (address_range)
u32 gfx_EGG_Display_804e608c(int);

// 0x0x804e60b4 (address_range)
uint gfx_EGG_Display_804e60b4(int);

// 0x0x804e6174 (address_range)
u32 gfx_EGG_Display_804e6174(int);

// 0x0x804e6240 (address_range)
void gfx_EGG_Display_804e6240(int);

// 0x0x804e6254 (address_range)
void gfx_EGG_Display_804e6254(int);

// 0x0x804e6414 (address_range)
void gfx_EGG_Display_804e6414(int, int, u32);

// 0x0x804e6474 (address_range)
void gfx_EGG_Display_804e6474(int);

// 0x0x804e64d4 (address_range)
void gfx_EGG_Display_804e64d4(int, int);

// 0x0x804e657c (address_range)
u32 gfx_EGG_Display_804e657c(uint);

// 0x0x804e787c (address_range)
u32 * gfx_EGG_Display_804e787c(u32);

// 0x0x804e78d0 (address_range)
u32 * gfx_EGG_Display_804e78d0(u32);

// 0x0x804e7950 (address_range)
int EGG_Display_validate_804e7950(int, int);

// 0x0x804e79b8 (address_range)
u32 * gfx_EGG_Display_804e79b8(u32);

// 0x0x804e7a60 (address_range)
u32 * gfx_EGG_Display_804e7a60(u32);

// 0x0x804e7ae0 (address_range)
u32 * gfx_EGG_Display_804e7ae0(u32);

// 0x0x804e7b60 (address_range)
u32 * gfx_EGG_Display_804e7b60(u32);

// 0x0x804e7be0 (address_range)
u32 * gfx_EGG_Display_804e7be0(u32);

// 0x0x804e7c60 (address_range)
u32 * gfx_EGG_Display_804e7c60(u32);

// 0x0x804e7ce0 (address_range)
u32 * gfx_EGG_Display_804e7ce0(u32);

// 0x0x804e7d24 (address_range)
int EGG_Display_validate_804e7d24(int, int);

// 0x0x804e7d8c (address_range)
u32 * gfx_EGG_Display_804e7d8c(u32);

// 0x0x804e7dd0 (address_range)
u32 * gfx_EGG_Display_804e7dd0(u32);

// 0x0x804e7e14 (address_range)
u32 * gfx_EGG_Display_804e7e14(u32);

// 0x0x804e7e58 (address_range)
u32 * gfx_EGG_Display_804e7e58(u32);

// 0x0x804e7e9c (address_range)
u32 * gfx_EGG_Display_804e7e9c(u32);

// 0x0x804e7ee0 (address_range)
u32 * gfx_EGG_Display_804e7ee0(u32);

// 0x0x804e7f24 (address_range)
u32 * gfx_EGG_Display_804e7f24(u32);

// 0x0x804e7f68 (address_range)
u32 * gfx_EGG_Display_804e7f68(u32);

// 0x0x804e7fac (address_range)
u32 * gfx_EGG_Display_804e7fac(u32);

// 0x0x804e7ff0 (address_range)
u32 * gfx_EGG_Display_804e7ff0(u32);

// 0x0x804e8034 (address_range)
u32 * gfx_EGG_Display_804e8034(u32);

// 0x0x804e8078 (address_range)
u32 * gfx_EGG_Display_804e8078(u32);

// 0x0x804e80bc (address_range)
u32 * gfx_EGG_Display_804e80bc(u32);

// 0x0x804e8100 (address_range)
u32 * gfx_EGG_Display_804e8100(u32);

// 0x0x804e8144 (address_range)
u32 * gfx_EGG_Display_804e8144(u32);

// 0x0x804e8188 (address_range)
u32 * gfx_EGG_Display_804e8188(u32);

// 0x0x804e81cc (address_range)
u32 * gfx_EGG_Display_804e81cc(u32);

// 0x0x804e8210 (address_range)
u32 * gfx_EGG_Display_804e8210(u32);

// 0x0x804e8254 (address_range)
u32 * gfx_EGG_Display_804e8254(u32);

// 0x0x804e8298 (address_range)
u32 * gfx_EGG_Display_804e8298(u32);

// 0x0x804e82dc (address_range)
u32 * gfx_EGG_Display_804e82dc(u32);

// 0x0x804e8320 (address_range)
u32 * gfx_EGG_Display_804e8320(u32);

// 0x0x804e8384 (address_range)
int EGG_Display_validate_804e8384(int, int);

// 0x0x804e83ec (address_range)
int EGG_Display_validate_804e83ec(int, int);

// 0x0x804e8458 (address_range)
u32 * gfx_EGG_Display_804e8458(u32);

// 0x0x804e8494 (address_range)
u32 * gfx_EGG_Display_804e8494(u32);

// 0x0x804e84d0 (address_range)
u32 * gfx_EGG_Display_804e84d0(u32);

// 0x0x804e850c (address_range)
void EGG_Display_validate_804e850c(u32);

// 0x0x804e8574 (address_range)
void EGG_Display_validate_804e8574(u32);

// 0x0x804e85d8 (address_range)
u32 EGG_Display_validate_804e85d8(int);

// 0x0x804e864c (address_range)
u32 EGG_Display_validate_804e864c(int);

// 0x0x804e86d4 (address_range)
void EGG_Display_validate_804e86d4(u32);

// 0x0x804e873c (address_range)
void EGG_Display_validate_804e873c(u32);

// 0x0x804e87a4 (address_range)
u32 * gfx_EGG_Display_804e87a4(u32);

// 0x0x804e87e0 (address_range)
u32 * gfx_EGG_Display_804e87e0(u32);

// 0x0x804e8860 (address_range)
u32 * gfx_EGG_Display_804e8860(u32);

// 0x0x804e88e0 (address_range)
u32 * gfx_EGG_Display_804e88e0(u32);

// 0x0x804e8924 (address_range)
u32 * gfx_EGG_Display_804e8924(u32);

// 0x0x804e8968 (address_range)
u32 * gfx_EGG_Display_804e8968(u32);

// 0x0x804e89e8 (address_range)
u32 * gfx_EGG_Display_804e89e8(u32);

// 0x0x804e8a68 (address_range)
u32 * gfx_EGG_Display_804e8a68(u32);

// 0x0x804e8ae8 (address_range)
u32 * gfx_EGG_Display_804e8ae8(u32);

// 0x0x804e8b68 (address_range)
u32 * gfx_EGG_Display_804e8b68(u32);

// 0x0x804e8be8 (address_range)
u32 * gfx_EGG_Display_804e8be8(u32);

// 0x0x804e8c68 (address_range)
void EGG_Display_assertFail_804e8c68(void);

// 0x0x804e8f1c (address_range)
int EGG_Display_validate_804e8f1c(int, int);

// 0x0x804e8f8c (address_range)
void EGG_Display_assertFail_804e8f8c(void);

// 0x0x804e9264 (address_range)
u32 * gfx_EGG_Display_804e9264(u32);

// 0x0x804e93d4 (address_range)
u32 * gfx_EGG_Display_804e93d4(u32);

// 0x0x804e9548 (address_range)
void EGG_Display_assertFail_804e9548(void);

// 0x0x804e982c (address_range)
int EGG_Display_validate_804e982c(int, int);

// 0x0x804e9884 (address_range)
void EGG_Display_assertFail_804e9884(void);

// 0x0x804e9b3c (address_range)
void EGG_Display_assertFail_804e9b3c(void);

// 0x0x804e9dfc (address_range)
void EGG_Display_assertFail_804e9dfc(void);

// 0x0x804ea1f4 (address_range)
int EGG_Display_validate_804ea1f4(int, int);

// 0x0x804ea24c (address_range)
void EGG_Display_assertFail_804ea24c(void);

// 0x0x804ea524 (address_range)
u32 * gfx_EGG_Display_804ea524(u32);

// 0x0x804ea560 (address_range)
int EGG_Display_validate_804ea560(int, int);

// 0x0x804ea5b8 (address_range)
void EGG_Display_assertFail_804ea5b8(void);

// 0x0x804ea870 (address_range)
void EGG_Display_assertFail_804ea870(void);

// 0x0x804eac2c (address_range)
int EGG_Display_validate_804eac2c(int, int);

// 0x0x804eac6c (address_range)
int EGG_Display_validate_804eac6c(int, int);

// 0x0x804eacc8 (address_range)
u32 EGG_Display_validate_804eacc8(int);

// 0x0x804ead50 (address_range)
u32 EGG_Display_validate_804ead50(int);

// 0x0x804eadc4 (address_range)
void EGG_Display_assertFail_804eadc4(void);

// 0x0x804eb158 (address_range)
u32 * gfx_EGG_Display_804eb158(u32);

// 0x0x804eb194 (address_range)
int EGG_Display_validate_804eb194(int, int);

// 0x0x804eb1ec (address_range)
u32 EGG_Display_validate_804eb1ec(int);

// 0x0x804eb260 (address_range)
u32 * gfx_EGG_Display_804eb260(u32);

// 0x0x804eb2c0 (address_range)
int EGG_Display_validate_804eb2c0(int, int);

// 0x0x804eb31c (address_range)
int EGG_Display_validate_804eb31c(int, int);

// 0x0x804eb37c (address_range)
u32 EGG_Display_validate_804eb37c(int);

// 0x0x804eb3fc (address_range)
void EGG_Display_assertFail_804eb3fc(void);

// 0x0x804eb6b4 (address_range)
void EGG_Display_assertFail_804eb6b4(void);

// 0x0x804eb9cc (address_range)
void EGG_Display_assertFail_804eb9cc(void);

// 0x0x804ebca0 (address_range)
void EGG_Display_validate_804ebca0(u32);

// 0x0x804ebcfc (address_range)
u32 EGG_Display_validate_804ebcfc(int);

// 0x0x804ebd70 (address_range)
void EGG_Display_assertFail_804ebd70(void);

// 0x0x804ec028 (address_range)
void EGG_Display_assertFail_804ec028(void);

// 0x0x804ec318 (address_range)
int EGG_Display_validate_804ec318(int, int);

// 0x0x804ec370 (address_range)
void EGG_Display_assertFail_804ec370(void);

// 0x0x804ec688 (address_range)
void EGG_Display_assertFail_804ec688(void);

// 0x0x804eca44 (address_range)
u32 EGG_Display_validate_804eca44(int);

// 0x0x804ecacc (address_range)
u32 EGG_Display_validate_804ecacc(int);

// 0x0x804ecb40 (address_range)
void EGG_Display_assertFail_804ecb40(void);

// 0x0x804eced4 (address_range)
u32 * gfx_EGG_Display_804eced4(u32);

// 0x0x804ecf10 (address_range)
int EGG_Display_validate_804ecf10(int, int);

// 0x0x804ecf68 (address_range)
u32 EGG_Display_validate_804ecf68(int);

// 0x0x804ecfdc (address_range)
u32 * gfx_EGG_Display_804ecfdc(u32);

// 0x0x804ed03c (address_range)
int EGG_Display_validate_804ed03c(int, int);

// 0x0x804ed09c (address_range)
u32 EGG_Display_validate_804ed09c(int);

// 0x0x804ed11c (address_range)
void EGG_Display_assertFail_804ed11c(void);

// 0x0x804ed4d8 (address_range)
u32 EGG_Display_validate_804ed4d8(int);

// 0x0x804ed560 (address_range)
u32 EGG_Display_validate_804ed560(int);

// 0x0x804ed5d4 (address_range)
void EGG_Display_assertFail_804ed5d4(void);

// 0x0x804ed968 (address_range)
u32 * gfx_EGG_Display_804ed968(u32);

// 0x0x804ed9a4 (address_range)
int EGG_Display_validate_804ed9a4(int, int);

// 0x0x804ed9fc (address_range)
u32 EGG_Display_validate_804ed9fc(int);

// 0x0x804eda70 (address_range)
u32 * gfx_EGG_Display_804eda70(u32);

// 0x0x804edad0 (address_range)
int EGG_Display_validate_804edad0(int, int);

// 0x0x804edb30 (address_range)
u32 EGG_Display_validate_804edb30(int);

// 0x0x804edbb0 (address_range)
void EGG_Display_assertFail_804edbb0(void);

// 0x0x804ede88 (address_range)
void EGG_Display_assertFail_804ede88(void);

// 0x0x804ee174 (address_range)
void EGG_Display_assertFail_804ee174(void);

// 0x0x804ee42c (address_range)
void EGG_Display_assertFail_804ee42c(void);

// 0x0x804ee6e0 (address_range)
void EGG_Display_assertFail_804ee6e0(void);

// 0x0x804eea14 (address_range)
u32 * gfx_EGG_Display_804eea14(u32);

// 0x0x804eea50 (address_range)
int EGG_Display_validate_804eea50(int, int);

// 0x0x804eeaa8 (address_range)
void EGG_Display_assertFail_804eeaa8(void);

// 0x0x804eed5c (address_range)
void EGG_Display_assertFail_804eed5c(void);

// 0x0x804ef010 (address_range)
void EGG_Display_assertFail_804ef010(void);

// 0x0x804ef2e0 (address_range)
void EGG_Display_assertFail_804ef2e0(void);

// 0x0x804ef590 (address_range)
void gfx_EGG_Display_804ef590(u32, int);

// 0x0x804f3280 (address_range)
void gfx_EGG_Display_804f3280(u32, int);

// 0x0x804f4774 (address_range)
u32 gfx_EGG_Display_804f4774(int);

// 0x0x804f4c44 (address_range)
u32 gfx_EGG_Display_804f4c44(int);

// 0x0x804f4ce4 (address_range)
u32 gfx_EGG_Display_804f4ce4(int);

// 0x0x804f4dfc (address_range)
u32 gfx_EGG_Display_804f4dfc(int);

// 0x0x804f4e54 (address_range)
u32 gfx_EGG_Display_804f4e54(int);

// 0x0x804f50e4 (address_range)
u32 gfx_EGG_Display_804f50e4(int);

// 0x0x804f526c (address_range)
u32 gfx_EGG_Display_804f526c(int);

// 0x0x804f53a0 (address_range)
u32 gfx_EGG_Display_804f53a0(uint);

// 0x0x804f5638 (address_range)
int EGG_Display_validate_804f5638(int, int);

// 0x0x804f56e0 (address_range)
int EGG_Display_validate_804f56e0(int, int);

// 0x0x804f5788 (address_range)
int EGG_Display_validate_804f5788(int, int);

// 0x0x804f5830 (address_range)
int EGG_Display_validate_804f5830(int, int);

// 0x0x804f58d8 (address_range)
int EGG_Display_validate_804f58d8(int, int);

// 0x0x804f5980 (address_range)
int EGG_Display_validate_804f5980(int, int);

// 0x0x804f5a28 (address_range)
int EGG_Display_validate_804f5a28(int, int);

// 0x0x804f5ad0 (address_range)
int EGG_Display_validate_804f5ad0(int, int);

// 0x0x804f5b78 (address_range)
int EGG_Display_validate_804f5b78(int, int);

// 0x0x804f5c20 (address_range)
int EGG_Display_validate_804f5c20(int, int);

// 0x0x804f5ca8 (address_range)
u32 gfx_EGG_Display_804f5ca8(void);

// 0x0x804f5cec (address_range)
int gfx_EGG_Display_804f5cec(void);

// 0x0x804f5d1c (address_range)
int EGG_Display_validate_804f5d1c(int, int);

// 0x0x804f5da4 (address_range)
u32 gfx_EGG_Display_804f5da4(void);

// 0x0x804f5de8 (address_range)
int gfx_EGG_Display_804f5de8(void);

// 0x0x804f5e18 (address_range)
int EGG_Display_validate_804f5e18(int, int);

// 0x0x804f5ec0 (address_range)
int EGG_Display_validate_804f5ec0(int, int);

// 0x0x804f5f68 (address_range)
int EGG_Display_validate_804f5f68(int, int);

// 0x0x804f6010 (address_range)
int EGG_Display_validate_804f6010(int, int);

// 0x0x804f60b8 (address_range)
int EGG_Display_validate_804f60b8(int, int);

// 0x0x804f6160 (address_range)
int EGG_Display_validate_804f6160(int, int);

// 0x0x804f61e8 (address_range)
u32 gfx_EGG_Display_804f61e8(void);

// 0x0x804f622c (address_range)
int gfx_EGG_Display_804f622c(void);

// 0x0x804f625c (address_range)
int EGG_Display_validate_804f625c(int, int);

// 0x0x804f6304 (address_range)
int EGG_Display_validate_804f6304(int, int);

// 0x0x804f63ac (address_range)
int EGG_Display_validate_804f63ac(int, int);

// 0x0x804f6470 (address_range)
int EGG_Display_validate_804f6470(int, int);

// 0x0x804f6534 (address_range)
int EGG_Display_validate_804f6534(int, int);

// 0x0x804f65dc (address_range)
int EGG_Display_validate_804f65dc(int, int);

// 0x0x804f6684 (address_range)
int EGG_Display_validate_804f6684(int, int);

// 0x0x804f671c (address_range)
int EGG_Display_validate_804f671c(int, int);

// 0x0x804f67ac (address_range)
int EGG_Display_validate_804f67ac(int, int);

// 0x0x804f683c (address_range)
int EGG_Display_validate_804f683c(int, int);

// 0x0x804f68cc (address_range)
int EGG_Display_validate_804f68cc(int, int);

// 0x0x804f695c (address_range)
int EGG_Display_validate_804f695c(int, int);

// 0x0x804f69ec (address_range)
int EGG_Display_validate_804f69ec(int, int);

// 0x0x804f6aac (address_range)
int EGG_Display_validate_804f6aac(int, int);

// 0x0x804f6b6c (address_range)
int EGG_Display_validate_804f6b6c(int, int);

// 0x0x804f6bfc (address_range)
int EGG_Display_validate_804f6bfc(int, int);

// 0x0x804f6c8c (address_range)
int EGG_Display_validate_804f6c8c(int, int);

// 0x0x804f6d1c (address_range)
int EGG_Display_validate_804f6d1c(int, int);

// 0x0x804f6df0 (address_range)
int EGG_Display_validate_804f6df0(int, int);

// 0x0x804f6eb8 (address_range)
int EGG_Display_validate_804f6eb8(int, int);

// 0x0x804f6f48 (address_range)
int EGG_Display_validate_804f6f48(int, int);

// 0x0x804f6fc0 (address_range)
void EGG_Display_validate_804f6fc0(int, u32, u32);

// 0x0x804f6ff0 (address_range)
void EGG_Display_validate_804f6ff0(int, u32, u32);

// 0x0x804f7020 (address_range)
void EGG_Display_validate_804f7020(int, u32, u32);

// 0x0x804f7050 (address_range)
void EGG_Display_validate_804f7050(int, u32, u32);

// 0x0x804f7080 (address_range)
void EGG_Display_validate_804f7080(int, u32, u32);

// 0x0x804f70b0 (address_range)
void EGG_Display_validate_804f70b0(int, u32, u32);

// 0x0x804f70e0 (address_range)
void EGG_Display_validate_804f70e0(int, u32, u32);

// 0x0x804f7110 (address_range)
void EGG_Display_validate_804f7110(int, u32, u32);

// 0x0x804f7140 (address_range)
void EGG_Display_validate_804f7140(int, u32, u32);

// 0x0x804f7170 (address_range)
void EGG_Display_validate_804f7170(int, u32, u32);

// 0x0x804f71a0 (address_range)
void EGG_Display_validate_804f71a0(int, u32, u32);

// 0x0x804f71d0 (address_range)
void EGG_Display_validate_804f71d0(int, u32, u32);

// 0x0x804f7200 (address_range)
void EGG_Display_validate_804f7200(int, u32, u32);

// 0x0x804f7230 (address_range)
void EGG_Display_validate_804f7230(int, u32, u32);

// 0x0x804f7260 (address_range)
void EGG_Display_validate_804f7260(int, u32, u32);

// 0x0x804f7290 (address_range)
void EGG_Display_validate_804f7290(int, u32, u32);

// 0x0x804f72c0 (address_range)
void EGG_Display_validate_804f72c0(int, u32, u32);

// 0x0x804f72f0 (address_range)
void EGG_Display_validate_804f72f0(int, u32, u32);

// 0x0x804f7320 (address_range)
void EGG_Display_validate_804f7320(int, u32, u32);

// 0x0x804f7350 (address_range)
void EGG_Display_validate_804f7350(int, u32, u32);

// 0x0x804f7380 (address_range)
void EGG_Display_validate_804f7380(int, u32, u32);

// 0x0x804f73b0 (address_range)
void EGG_Display_validate_804f73b0(int, u32, u32);

// 0x0x804f73e0 (address_range)
void EGG_Display_validate_804f73e0(int, u32, u32);

// 0x0x804f7410 (address_range)
void EGG_Display_validate_804f7410(int, u32, u32);

// 0x0x804f7440 (address_range)
void EGG_Display_validate_804f7440(int, u32, u32);

// 0x0x804f7470 (address_range)
void EGG_Display_validate_804f7470(int, u32, u32);

// 0x0x804f74a0 (address_range)
void EGG_Display_validate_804f74a0(int, u32, u32);

// 0x0x804f74d0 (address_range)
void EGG_Display_validate_804f74d0(int, u32, u32);

// 0x0x804f7500 (address_range)
void EGG_Display_validate_804f7500(int, u32, u32);

// 0x0x804f7530 (address_range)
void EGG_Display_validate_804f7530(int, u32, u32);

// 0x0x804f7560 (address_range)
void EGG_Display_validate_804f7560(int, u32, u32);

// 0x0x804f7590 (address_range)
void EGG_Display_validate_804f7590(int, u32, u32);

// 0x0x804f75c0 (address_range)
void EGG_Display_validate_804f75c0(int, u32, u32);

// 0x0x804f75f0 (address_range)
void EGG_Display_validate_804f75f0(int, u32, u32);

// 0x0x804f7620 (address_range)
void EGG_Display_validate_804f7620(int, u32, u32);

// 0x0x804f7650 (address_range)
void EGG_Display_validate_804f7650(int, u32, u32);

// 0x0x804f7680 (address_range)
void EGG_Display_validate_804f7680(int, u32);

// 0x0x804f76b0 (address_range)
void EGG_Display_validate_804f76b0(int, u32);

// 0x0x804f76e0 (address_range)
void EGG_Display_validate_804f76e0(int, u32);

// 0x0x804f7710 (address_range)
void EGG_Display_validate_804f7710(int, u32);

// 0x0x804f7740 (address_range)
void EGG_Display_validate_804f7740(int, u32);

// 0x0x804f7770 (address_range)
void EGG_Display_validate_804f7770(int, u32);

// 0x0x804f77a0 (address_range)
void EGG_Display_validate_804f77a0(int, u32);

// 0x0x804f77d0 (address_range)
void EGG_Display_validate_804f77d0(int, u32);

// 0x0x804f7800 (address_range)
void EGG_Display_validate_804f7800(int, u32);

// 0x0x804f7830 (address_range)
void EGG_Display_validate_804f7830(int, u32);

// 0x0x804f7860 (address_range)
void EGG_Display_validate_804f7860(int, u32);

// 0x0x804f7890 (address_range)
void EGG_Display_validate_804f7890(int, u32);

// 0x0x804f78c0 (address_range)
void EGG_Display_validate_804f78c0(int, u32);

// 0x0x804f78f0 (address_range)
void EGG_Display_validate_804f78f0(int, u32);

// 0x0x804f7920 (address_range)
void EGG_Display_validate_804f7920(int, u32);

// 0x0x804f7950 (address_range)
void EGG_Display_validate_804f7950(int, u32);

// 0x0x804f7980 (address_range)
void EGG_Display_validate_804f7980(int, u32);

// 0x0x804f79b0 (address_range)
void EGG_Display_validate_804f79b0(int, u32);

// 0x0x804f79e0 (address_range)
void EGG_Display_validate_804f79e0(int, u32);

// 0x0x804f7a10 (address_range)
void EGG_Display_validate_804f7a10(int, u32);

// 0x0x804f7a40 (address_range)
void EGG_Display_validate_804f7a40(int, u32);

// 0x0x804f7a70 (address_range)
void EGG_Display_validate_804f7a70(int, u32);

// 0x0x804f7aa0 (address_range)
void EGG_Display_validate_804f7aa0(int, u32);

// 0x0x804f7ad0 (address_range)
void EGG_Display_validate_804f7ad0(int, u32);

// 0x0x804f7b00 (address_range)
void EGG_Display_validate_804f7b00(int, u32);

// 0x0x804f7b30 (address_range)
void EGG_Display_validate_804f7b30(int, u32);

// 0x0x804f7b60 (address_range)
void EGG_Display_validate_804f7b60(int, u32);

// 0x0x804f7b90 (address_range)
void EGG_Display_validate_804f7b90(int, u32);

// 0x0x804f7bc0 (address_range)
void EGG_Display_validate_804f7bc0(int, u32);

// 0x0x804f7bf0 (address_range)
void EGG_Display_validate_804f7bf0(int, u32);

// 0x0x804f7c20 (address_range)
void EGG_Display_validate_804f7c20(int, u32);

// 0x0x804f7c50 (address_range)
u32 EGG_Display_validate_804f7c50(int, int);

// 0x0x804f7d6c (address_range)
u32 gfx_EGG_Display_804f7d6c(uint);

// 0x0x804f7e7c (address_range)
void EGG_Display_assertFail_804f7e7c(void);

// 0x0x804f7eb4 (address_range)
void EGG_Display_assertFail_804f7eb4(void);

// 0x0x804f7f2c (address_range)
u32 * gfx_EGG_Display_804f7f2c(u32);

// 0x0x804f7fb0 (address_range)
int EGG_Display_validate_804f7fb0(int, int);

// 0x0x804f8030 (address_range)
void EGG_Display_validate_804f8030(u32);

// 0x0x804f81c4 (address_range)
void EGG_Display_validate_804f81c4(int);

// 0x0x804f8288 (address_range)
void gfx_EGG_Display_804f8288(int);

// 0x0x804f83a4 (address_range)
void EGG_Display_assertFail_804f83a4(void);

// 0x0x804f86c8 (address_range)
void gfx_EGG_Display_804f86c8(u32);

// 0x0x804f8714 (address_range)
void EGG_Display_validate_804f8714(int);

// 0x0x804f8a44 (address_range)
void gfx_EGG_Display_804f8a44(u32);

// 0x0x804f8a98 (address_range)
void EGG_Display_validate_804f8a98(int);

// 0x0x804f8c44 (address_range)
void gfx_EGG_Display_804f8c44(int, int, u32);

// 0x0x804f8cd0 (address_range)
void gfx_EGG_Display_804f8cd0(int, int, u32);

// 0x0x804f8d34 (address_range)
void gfx_EGG_Display_804f8d34(int, int, u32);

// 0x0x804f8d78 (address_range)
void EGG_Display_validate_804f8d78(int);

// 0x0x804f8e14 (address_range)
void EGG_Display_validate_804f8e14(u32);

// 0x0x804f8e7c (address_range)
void EGG_Display_validate_804f8e7c(u32);

// 0x0x804f8eec (address_range)
void gfx_EGG_Display_804f8eec(int);

// 0x0x804f8ef4 (address_range)
void gfx_EGG_Display_804f8ef4(int);

// 0x0x804f8efc (address_range)
void gfx_EGG_Display_804f8efc(int);

// 0x0x804f9010 (address_range)
void EGG_Display_validate_804f9010(u32, int);

// 0x0x804f90cc (address_range)
u32 * gfx_EGG_Display_804f90cc(u32);

// 0x0x804f9284 (address_range)
int EGG_Display_validate_804f9284(int, int);

// 0x0x804f9328 (address_range)
void gfx_EGG_Display_804f9328(int, u32, u32, u32, u32, u32, int, u32, u32);

// 0x0x804f93f0 (address_range)
void gfx_EGG_Display_804f93f0(int, u32);

// 0x0x804f93f8 (address_range)
void gfx_EGG_Display_804f93f8(int, u32);

// 0x0x804f9400 (address_range)
void gfx_EGG_Display_804f9400(int, u32);

// 0x0x804f946c (address_range)
void gfx_EGG_Display_804f946c(int, char, char);

// 0x0x804f94f0 (address_range)
void gfx_EGG_Display_804f94f0(int);

// 0x0x804f9558 (address_range)
void gfx_EGG_Display_804f9558(int, u32);

// 0x0x804f95e0 (address_range)
void gfx_EGG_Display_804f95e0(int, u32);

// 0x0x804f9678 (address_range)
u32 * gfx_EGG_Display_804f9678(u32);

// 0x0x804f976c (address_range)
int EGG_Display_validate_804f976c(int, int);

// 0x0x804f97d4 (address_range)
void gfx_EGG_Display_804f97d4(int, int, u32, u32, u32, u32, u32);

// 0x0x804f9a00 (address_range)
void gfx_EGG_Display_804f9a00(int);

// 0x0x804f9bec (address_range)
void gfx_EGG_Display_804f9bec(int);

// 0x0x804f9e74 (address_range)
int * gfx_EGG_Display_804f9e74(int);

// 0x0x804f9f10 (address_range)
void EGG_Display_validate_804f9f10(int, u32);

// 0x0x804fa1cc (address_range)
void EGG_Display_validate_804fa1cc(int, int);

// 0x0x804fa3b4 (address_range)
void gfx_EGG_Display_804fa3b4(int, u32);

// 0x0x804fa54c (address_range)
void gfx_EGG_Display_804fa54c(void);

// 0x0x804fa69c (address_range)
int EGG_Display_validate_804fa69c(int, int);

// 0x0x804fa768 (address_range)
void EGG_Display_validate_804fa768(int, u32, u32);

// 0x0x804fa7d0 (address_range)
u32 * gfx_EGG_Display_804fa7d0(u32);

// 0x0x804fa82c (address_range)
u32 EGG_Display_validate_804fa82c(u32);

// 0x0x804fa8a4 (address_range)
void EGG_Display_assertFail_804fa8a4(void);

// 0x0x804faa24 (address_range)
void gfx_EGG_Display_804faa24(int, u32);

// 0x0x804faa2c (address_range)
void gfx_EGG_Display_804faa2c(int, u32);

// 0x0x804faaa8 (address_range)
void EGG_Display_assertFail_804faaa8(void);

// 0x0x804fab48 (address_range)
void gfx_EGG_Display_804fab48(int, u32);

// 0x0x804fabc0 (address_range)
void EGG_Display_assertFail_804fabc0(void);

// 0x0x804fac98 (address_range)
void gfx_EGG_Display_804fac98(int, u32, int);

// 0x0x804fad48 (address_range)
u32 * gfx_EGG_Display_804fad48(u32);

// 0x0x804fae3c (address_range)
int EGG_Display_validate_804fae3c(int, int);

// 0x0x804faea4 (address_range)
void gfx_EGG_Display_804faea4(int, u32, u32, u32, u32, u32, u32);

// 0x0x804fb070 (address_range)
void gfx_EGG_Display_804fb070(int);

// 0x0x804fb21c (address_range)
void gfx_EGG_Display_804fb21c(int);

// 0x0x804fb3d0 (address_range)
int * gfx_EGG_Display_804fb3d0(int);

// 0x0x804fb4d0 (address_range)
void gfx_EGG_Display_804fb4d0(int, int);

// 0x0x804fb530 (address_range)
void EGG_Display_validate_804fb530(int, int);

// 0x0x804fb688 (address_range)
void EGG_Display_validate_804fb688(int, u32);

// 0x0x804fb77c (address_range)
void EGG_Display_validate_804fb77c(int, int);

// 0x0x804fb964 (address_range)
void gfx_EGG_Display_804fb964(int, u32);

// 0x0x804fbb3c (address_range)
void EGG_Display_validate_804fbb3c(int, u32, u32);

// 0x0x804fbb88 (address_range)
u32 * gfx_EGG_Display_804fbb88(u32);

// 0x0x804fbbcc (address_range)
int EGG_Display_validate_804fbbcc(int, int);

// 0x0x804fbc34 (address_range)
void gfx_EGG_Display_804fbc34(int);

// 0x0x804fbca0 (address_range)
void gfx_EGG_Display_804fbca0(int);

// 0x0x804fbe4c (address_range)
void gfx_EGG_Display_804fbe4c(int);

// 0x0x804fbf60 (address_range)
void gfx_EGG_Display_804fbf60(int);

// 0x0x804fc0c8 (address_range)
void gfx_EGG_Display_804fc0c8(int);

// 0x0x804fc2ec (address_range)
void EGG_Display_assertFail_804fc2ec(void);

// 0x0x804fc52c (address_range)
int EGG_Display_validate_804fc52c(int, int);

// 0x0x804fc608 (address_range)
void gfx_EGG_Display_804fc608(int);

// 0x0x804fc8d0 (address_range)
void gfx_EGG_Display_804fc8d0(int);

// 0x0x804fca34 (address_range)
void gfx_EGG_Display_804fca34(int);

// 0x0x804fca6c (address_range)
void gfx_EGG_Display_804fca6c(int);

// 0x0x804fcea4 (address_range)
void gfx_EGG_Display_804fcea4(int);

// 0x0x804fcfa4 (address_range)
void gfx_EGG_Display_804fcfa4(int);

// 0x0x804fd15c (address_range)
u32 gfx_EGG_Display_804fd15c(int);

// 0x0x804fd1e0 (address_range)
void EGG_Display_validate_804fd1e0(int, u32, u32);

// 0x0x804fd210 (address_range)
void EGG_Display_validate_804fd210(int, u32, u32);

// 0x0x804fd240 (address_range)
void EGG_Display_validate_804fd240(int, u32);

// 0x0x804fd298 (address_range)
u32 * gfx_EGG_Display_804fd298(u32);

// 0x0x804fd2d4 (address_range)
int EGG_Display_validate_804fd2d4(int, int);

// 0x0x804fd32c (address_range)
void gfx_EGG_Display_804fd32c(u32);

// 0x0x804fd3cc (address_range)
void gfx_EGG_Display_804fd3cc(int);

// 0x0x804fd404 (address_range)
void EGG_Display_validate_804fd404(int);

// 0x0x804fd4b4 (address_range)
void gfx_EGG_Display_804fd4b4(int);

// 0x0x804fd4ec (address_range)
void EGG_Display_validate_804fd4ec(int);

// 0x0x804fd59c (address_range)
void gfx_EGG_Display_804fd59c(int);

// 0x0x804fd5d4 (address_range)
void gfx_EGG_Display_804fd5d4(u32, int, int);

// 0x0x804fd708 (address_range)
u32 * gfx_EGG_Display_804fd708(u32);

// 0x0x804fd78c (address_range)
int EGG_Display_validate_804fd78c(int, int);

// 0x0x804fd7e4 (address_range)
int EGG_Display_validate_804fd7e4(int, int);

// 0x0x804fd86c (address_range)
void gfx_EGG_Display_804fd86c(int);

// 0x0x804fda64 (address_range)
void gfx_EGG_Display_804fda64(int);

// 0x0x804fdae4 (address_range)
void EGG_Display_validate_804fdae4(int);

// 0x0x804fdb94 (address_range)
void gfx_EGG_Display_804fdb94(int);

// 0x0x804fdbe0 (address_range)
void EGG_Display_validate_804fdbe0(int);

// 0x0x804fdc90 (address_range)
void gfx_EGG_Display_804fdc90(int);

// 0x0x804fdcc8 (address_range)
void gfx_EGG_Display_804fdcc8(int);

// 0x0x804fde30 (address_range)
void gfx_EGG_Display_804fde30(void);

// 0x0x804fe214 (address_range)
u32 * gfx_EGG_Display_804fe214(u32);

// 0x0x804fe260 (address_range)
int EGG_Display_validate_804fe260(int, int);

// 0x0x804fe2d4 (address_range)
void gfx_EGG_Display_804fe2d4(int);

// 0x0x804fe398 (address_range)
void gfx_EGG_Display_804fe398(int);

// 0x0x804fe504 (address_range)
u32 * gfx_EGG_Display_804fe504(u32);

// 0x0x804fe540 (address_range)
int EGG_Display_validate_804fe540(int, int);

// 0x0x804fe598 (address_range)
void gfx_EGG_Display_804fe598(u32);

// 0x0x804fe638 (address_range)
void gfx_EGG_Display_804fe638(int);

// 0x0x804fe674 (address_range)
void EGG_Display_validate_804fe674(int);

// 0x0x804fe724 (address_range)
void EGG_Display_validate_804fe724(int);

// 0x0x804fe7d4 (address_range)
bool gfx_EGG_Display_804fe7d4(int);

// 0x0x804fe808 (address_range)
u32 * gfx_EGG_Display_804fe808(u32);

// 0x0x804fe86c (address_range)
int EGG_Display_validate_804fe86c(int, int);

// 0x0x804fe8e4 (address_range)
void gfx_EGG_Display_804fe8e4(int);

// 0x0x804fe9f8 (address_range)
void gfx_EGG_Display_804fe9f8(int);

// 0x0x804feac4 (address_range)
void gfx_EGG_Display_804feac4(void);

// 0x0x804feb1c (address_range)
void EGG_Display_validate_804feb1c(int);

// 0x0x804fec4c (address_range)
void gfx_EGG_Display_804fec4c(int);

// 0x0x804fed2c (address_range)
u32 * gfx_EGG_Display_804fed2c(u32);

// 0x0x804fed90 (address_range)
int EGG_Display_validate_804fed90(int, int);

// 0x0x804fee08 (address_range)
void gfx_EGG_Display_804fee08(int);

// 0x0x804fee90 (address_range)
void gfx_EGG_Display_804fee90(int);

// 0x0x804feefc (address_range)
void gfx_EGG_Display_804feefc(int);

// 0x0x804ff06c (address_range)
void gfx_EGG_Display_804ff06c(u32);

// 0x0x804ff084 (address_range)
u32 EGG_Display_validate_804ff084(u32);

// 0x0x804ff0e4 (address_range)
void gfx_EGG_Display_804ff0e4(int, u32, u32);

// 0x0x804ff0f0 (address_range)
void EGG_Display_validate_804ff0f0(int, int);

// 0x0x804ff154 (address_range)
void EGG_Display_validate_804ff154(int, int, int);

// 0x0x804ff1e0 (address_range)
void EGG_Display_validate_804ff1e0(int, int, char);

// 0x0x804ff2d0 (address_range)
void EGG_Display_validate_804ff2d0(int);

// 0x0x804ff394 (address_range)
void gfx_EGG_Display_804ff394(double, int, int, int, u32, u32, u32);

// 0x0x804ff43c (address_range)
void gfx_EGG_Display_804ff43c(int);

// 0x0x804ff4a0 (address_range)
int gfx_EGG_Display_804ff4a0(int, int);

// 0x0x804ff4b0 (address_range)
int gfx_EGG_Display_804ff4b0(int, int);

// 0x0x804ff4c0 (address_range)
void gfx_EGG_Display_804ff4c0(void);

// 0x0x804ff4c4 (address_range)
void EGG_Display_validate_804ff4c4(u32);

// 0x0x804ff52c (address_range)
u32 EGG_Display_validate_804ff52c(int);

// 0x0x804ff59c (address_range)
void gfx_EGG_Display_804ff59c(void);

// 0x0x804ff718 (address_range)
void gfx_EGG_Display_804ff718(void);

// 0x0x804ff7a0 (address_range)
void gfx_EGG_Display_804ff7a0(int);

// 0x0x804ff7d4 (address_range)
void gfx_EGG_Display_804ff7d4(void);

// 0x0x804ff864 (address_range)
void gfx_EGG_Display_804ff864(void);

// 0x0x804ffa5c (address_range)
void EGG_Display_validate_804ffa5c(int);

// 0x0x804ffaec (address_range)
u32 * gfx_EGG_Display_804ffaec(u32);

// 0x0x804ffbe0 (address_range)
int EGG_Display_validate_804ffbe0(int, int);

// 0x0x804ffc20 (address_range)
int EGG_Display_validate_804ffc20(int, int);

// 0x0x804ffc7c (address_range)
void gfx_EGG_Display_804ffc7c(int);

// 0x0x804ffc84 (address_range)
void gfx_EGG_Display_804ffc84(int);

// 0x0x804ffcc4 (address_range)
void gfx_EGG_Display_804ffcc4(int);

// 0x0x804ffe14 (address_range)
void gfx_EGG_Display_804ffe14(double, int, float);

// 0x0x804ffee8 (address_range)
void gfx_EGG_Display_804ffee8(int, u32);

// 0x0x804ffef8 (address_range)
void gfx_EGG_Display_804ffef8(int, u32, u32);

// 0x0x804fff04 (address_range)
void gfx_EGG_Display_804fff04(void);

// 0x0x80500018 (address_range)
void gfx_nw4r_g3d_80500018(int, u32, u32);

// 0x0x80500024 (address_range)
void gfx_nw4r_g3d_80500024(int, u32, u32);

// 0x0x8050004c (address_range)
void gfx_nw4r_g3d_8050004c(int);

// 0x0x805001d0 (address_range)
void gfx_nw4r_g3d_805001d0(int);

// 0x0x80500288 (address_range)
void gfx_nw4r_g3d_80500288(int);

// 0x0x805002c8 (address_range)
void gfx_nw4r_g3d_805002c8(int);

// 0x0x805003cc (address_range)
void gfx_nw4r_g3d_805003cc(int, u32, u32);

// 0x0x805003f0 (address_range)
void gfx_nw4r_g3d_805003f0(int, u32, u32);

// 0x0x80500418 (address_range)
u32 * gfx_nw4r_g3d_80500418(u32);

// 0x0x80500540 (address_range)
int nw4r_g3d_validate_80500540(int, int);

// 0x0x805005d4 (address_range)
void gfx_nw4r_g3d_805005d4(int, u32, u32);

// 0x0x80500640 (address_range)
void gfx_nw4r_g3d_80500640(int);

// 0x0x80500680 (address_range)
void gfx_nw4r_g3d_80500680(int, u32);

// 0x0x80500740 (address_range)
void gfx_nw4r_g3d_80500740(int);

// 0x0x80500780 (address_range)
void gfx_nw4r_g3d_80500780(int);

// 0x0x80500804 (address_range)
void gfx_nw4r_g3d_80500804(int, int);

// 0x0x8050093c (address_range)
void gfx_nw4r_g3d_8050093c(int, u32, u32, u32);

// 0x0x80500a34 (address_range)
void gfx_nw4r_g3d_80500a34(int, u32, u32);

// 0x0x80500a74 (address_range)
void gfx_nw4r_g3d_80500a74(int, int);

// 0x0x80500b6c (address_range)
void gfx_nw4r_g3d_80500b6c(int, u32);

// 0x0x80500c48 (address_range)
void gfx_nw4r_g3d_80500c48(int);

// 0x0x80500c80 (address_range)
void gfx_nw4r_g3d_80500c80(int, int);

// 0x0x80500d70 (address_range)
void nw4r_g3d_assertFail_80500d70(void);

// 0x0x80500fa8 (address_range)
uint gfx_nw4r_g3d_80500fa8(int);

// 0x0x8050105c (address_range)
void nw4r_g3d_assertFail_8050105c(void);

// 0x0x805011cc (address_range)
void gfx_nw4r_g3d_805011cc(int, u32, byte);

// 0x0x8050120c (address_range)
void gfx_nw4r_g3d_8050120c(int, u32, u32);

// 0x0x80501244 (address_range)
void nw4r_g3d_assertFail_80501244(void);

// 0x0x8050129c (address_range)
void gfx_nw4r_g3d_8050129c(int);

// 0x0x805012f4 (address_range)
u32 * gfx_nw4r_g3d_805012f4(u32);

// 0x0x80501428 (address_range)
int nw4r_g3d_validate_80501428(int, int);

// 0x0x805015e0 (address_range)
void nw4r_g3d_validate_805015e0(u32);

// 0x0x805017dc (address_range)
u32 nw4r_g3d_validate_805017dc(int);

// 0x0x8050185c (address_range)
void gfx_nw4r_g3d_8050185c(int, int, int, u32, u32, u32, u32, u32, u32, u32, int, int, u32, u32, u32, u32);

// 0x0x80501cc0 (address_range)
void gfx_nw4r_g3d_80501cc0(int, u32);

// 0x0x80501d2c (address_range)
void gfx_nw4r_g3d_80501d2c(int, u32);

// 0x0x80501d40 (address_range)
void gfx_nw4r_g3d_80501d40(int, u32, u32);

// 0x0x80501d78 (address_range)
void gfx_nw4r_g3d_80501d78(int, u32);

// 0x0x80501de0 (address_range)
void gfx_nw4r_g3d_80501de0(int, u32);

// 0x0x80501dec (address_range)
void gfx_nw4r_g3d_80501dec(int);

// 0x0x80501f28 (address_range)
void nw4r_g3d_assertFail_80501f28(void);

// 0x0x80502314 (address_range)
void nw4r_g3d_validate_80502314(int, u32);

// 0x0x80502444 (address_range)
void nw4r_g3d_validate_80502444(int, u32);

// 0x0x80502578 (address_range)
void gfx_nw4r_g3d_80502578(int, u32, int);

// 0x0x805027e4 (address_range)
void gfx_nw4r_g3d_805027e4(int, u32);

// 0x0x80502910 (address_range)
void gfx_nw4r_g3d_80502910(int, u32);

// 0x0x80502a40 (address_range)
u32 * gfx_nw4r_g3d_80502a40(u32);

// 0x0x80502a7c (address_range)
int nw4r_g3d_validate_80502a7c(int, int);

// 0x0x80502ad4 (address_range)
void gfx_nw4r_g3d_80502ad4(int, u32, u32, u32, u32);

// 0x0x80502b98 (address_range)
void gfx_nw4r_g3d_80502b98(int);

// 0x0x80502c30 (address_range)
void gfx_nw4r_g3d_80502c30(int);

// 0x0x80502d1c (address_range)
int * gfx_nw4r_g3d_80502d1c(int);

// 0x0x80502e1c (address_range)
void nw4r_g3d_validate_80502e1c(int, int, u32);

// 0x0x80502fe0 (address_range)
void gfx_nw4r_g3d_80502fe0(int);

// 0x0x80503044 (address_range)
void gfx_nw4r_g3d_80503044(int, u16, u16);

// 0x0x80503188 (address_range)
void gfx_nw4r_g3d_80503188(int, u16);

// 0x0x80503250 (address_range)
void nw4r_g3d_validate_80503250(u32);

// 0x0x805032bc (address_range)
u32 nw4r_g3d_validate_805032bc(int);

// 0x0x80503330 (address_range)
void gfx_nw4r_g3d_80503330(int, u32, u32, u32, u32, u32);

// 0x0x8050345c (address_range)
void gfx_nw4r_g3d_8050345c(int);

// 0x0x8050357c (address_range)
void gfx_nw4r_g3d_8050357c(int);

// 0x0x80503620 (address_range)
int * gfx_nw4r_g3d_80503620(int);

// 0x0x80503720 (address_range)
void gfx_nw4r_g3d_80503720(int, int);

// 0x0x805037e8 (address_range)
void nw4r_g3d_validate_805037e8(int, int);

// 0x0x8050398c (address_range)
void gfx_nw4r_g3d_8050398c(int, u32, int);

// 0x0x80503a7c (address_range)
void gfx_nw4r_g3d_80503a7c(int);

// 0x0x80503ae8 (address_range)
u32 gfx_nw4r_g3d_80503ae8(int);

// 0x0x80503b80 (address_range)
void nw4r_g3d_validate_80503b80(int);

// 0x0x80503bf4 (address_range)
void gfx_nw4r_g3d_80503bf4(int, u16, u16);

// 0x0x80503ca8 (address_range)
void gfx_nw4r_g3d_80503ca8(int, u16);

// 0x0x80503d60 (address_range)
u32 * gfx_nw4r_g3d_80503d60(u32);

// 0x0x80503d9c (address_range)
int nw4r_g3d_validate_80503d9c(int, int);

// 0x0x80503df4 (address_range)
void gfx_nw4r_g3d_80503df4(u32, u32, u32, u32);

// 0x0x80503e68 (address_range)
void gfx_nw4r_g3d_80503e68(int);

// 0x0x80503f18 (address_range)
void gfx_nw4r_g3d_80503f18(int, int);

// 0x0x80503f78 (address_range)
void nw4r_g3d_validate_80503f78(int, int);

// 0x0x805040ec (address_range)
u32 * gfx_nw4r_g3d_805040ec(u32);

// 0x0x805042a4 (address_range)
int nw4r_g3d_validate_805042a4(int, int);

// 0x0x8050430c (address_range)
void gfx_nw4r_g3d_8050430c(int, int, u32, u32, u32, u32, u32, u32);

// 0x0x8050465c (address_range)
void gfx_nw4r_g3d_8050465c(int, u32);

// 0x0x80504740 (address_range)
void gfx_nw4r_g3d_80504740(int);

// 0x0x80504928 (address_range)
void nw4r_g3d_validate_80504928(int, u32);

// 0x0x80504a0c (address_range)
void nw4r_g3d_validate_80504a0c(int, int);

// 0x0x80504c10 (address_range)
void nw4r_g3d_validate_80504c10(int, u32, int);

// 0x0x80504cf0 (address_range)
void nw4r_g3d_assertFail_80504cf0(void);

// 0x0x80504f38 (address_range)
void gfx_nw4r_g3d_80504f38(int, u32);

// 0x0x80504ff0 (address_range)
void gfx_nw4r_g3d_80504ff0(int, u32);

// 0x0x805050a4 (address_range)
void gfx_nw4r_g3d_805050a4(int, u32, int);

// 0x0x805051f4 (address_range)
void gfx_nw4r_g3d_805051f4(int, u32);

// 0x0x805052b0 (address_range)
void gfx_nw4r_g3d_805052b0(int, u32);

// 0x0x80505378 (address_range)
u32 * gfx_nw4r_g3d_80505378(u32);

// 0x0x8050553c (address_range)
int nw4r_g3d_validate_8050553c(int, int);

// 0x0x805055a8 (address_range)
void gfx_nw4r_g3d_805055a8(int);

// 0x0x80505640 (address_range)
void nw4r_g3d_validate_80505640(int, u32, u32);

// 0x0x80505670 (address_range)
void nw4r_g3d_validate_80505670(int, u32, u32);

// 0x0x8050572c (address_range)
u32 * gfx_nw4r_g3d_8050572c(u32);

// 0x0x80505768 (address_range)
int nw4r_g3d_validate_80505768(int, int);

// 0x0x805057c0 (address_range)
void nw4r_g3d_validate_805057c0(u32, u32);

// 0x0x8050586c (address_range)
void gfx_nw4r_g3d_8050586c(int);

// 0x0x80505924 (address_range)
void nw4r_g3d_assertFail_80505924(void);

// 0x0x80505a94 (address_range)
void gfx_nw4r_g3d_80505a94(int);

// 0x0x80505ae8 (address_range)
void gfx_nw4r_g3d_80505ae8(int);

// 0x0x80505b20 (address_range)
void gfx_nw4r_g3d_80505b20(int, u32);

// 0x0x80505b7c (address_range)
void gfx_nw4r_g3d_80505b7c(int);

// 0x0x80505bd8 (address_range)
bool gfx_nw4r_g3d_80505bd8(int);

// 0x0x80505c10 (address_range)
void nw4r_g3d_validate_80505c10(u32);

// 0x0x80505d3c (address_range)
u32 nw4r_g3d_validate_80505d3c(int);

// 0x0x80505de8 (address_range)
void nw4r_g3d_validate_80505de8(int);

// 0x0x8050604c (address_range)
void nw4r_g3d_assertFail_8050604c(void);

// 0x0x80506468 (address_range)
void gfx_nw4r_g3d_80506468(int);

// 0x0x80506b18 (address_range)
void gfx_nw4r_g3d_80506b18(int);

// 0x0x80506bc8 (address_range)
void gfx_nw4r_g3d_80506bc8(void);

// 0x0x80506c0c (address_range)
u32 gfx_nw4r_g3d_80506c0c(int, int);

// 0x0x80506e68 (address_range)
void nw4r_g3d_assertFail_80506e68(void);

// 0x0x805070b0 (address_range)
void gfx_nw4r_g3d_805070b0(int);

// 0x0x80507228 (address_range)
void gfx_nw4r_g3d_80507228(void);

// 0x0x805072e4 (address_range)
void nw4r_g3d_validate_805072e4(int, u32);

// 0x0x80507338 (address_range)
u32 * gfx_nw4r_g3d_80507338(u32);

// 0x0x8050737c (address_range)
int nw4r_g3d_validate_8050737c(int, int);

// 0x0x805073e4 (address_range)
void gfx_nw4r_g3d_805073e4(int);

// 0x0x80507440 (address_range)
void gfx_nw4r_g3d_80507440(int);

// 0x0x80507540 (address_range)
void gfx_nw4r_g3d_80507540(void);

// 0x0x80507678 (address_range)
u32 * gfx_nw4r_g3d_80507678(u32);

// 0x0x805077d0 (address_range)
int nw4r_g3d_validate_805077d0(int, int);

// 0x0x80507870 (address_range)
void gfx_nw4r_g3d_80507870(int);

// 0x0x805079d8 (address_range)
void gfx_nw4r_g3d_805079d8(int);

// 0x0x80507ac0 (address_range)
void gfx_nw4r_g3d_80507ac0(int, u32);

// 0x0x80507cf8 (address_range)
void gfx_nw4r_g3d_80507cf8(int, u32);

// 0x0x80507df8 (address_range)
void gfx_nw4r_g3d_80507df8(void);

// 0x0x80507fe8 (address_range)
void nw4r_g3d_validate_80507fe8(int, u32, u32);

// 0x0x80508018 (address_range)
void nw4r_g3d_validate_80508018(int, u32);

// 0x0x80508064 (address_range)
u32 * gfx_nw4r_g3d_80508064(u32);

// 0x0x805080e0 (address_range)
int nw4r_g3d_validate_805080e0(int, int);

// 0x0x80508148 (address_range)
void gfx_nw4r_g3d_80508148(int);

// 0x0x805081b4 (address_range)
void nw4r_g3d_validate_805081b4(int);

// 0x0x80508690 (address_range)
void gfx_nw4r_g3d_80508690(void);

// 0x0x80508740 (address_range)
void nw4r_g3d_validate_80508740(int);

// 0x0x80508d78 (address_range)
void gfx_nw4r_g3d_80508d78(int);

// 0x0x8050926c (address_range)
void gfx_nw4r_g3d_8050926c(int);

// 0x0x80509648 (address_range)
void gfx_nw4r_g3d_80509648(void);

// 0x0x8050975c (address_range)
u32 * gfx_nw4r_g3d_8050975c(u32);

// 0x0x80509874 (address_range)
int nw4r_g3d_validate_80509874(int, int);

// 0x0x80509914 (address_range)
void gfx_nw4r_g3d_80509914(int);

// 0x0x80509ab0 (address_range)
void gfx_nw4r_g3d_80509ab0(int);

// 0x0x80509c94 (address_range)
void gfx_nw4r_g3d_80509c94(int, int);

// 0x0x80509d38 (address_range)
u32 * gfx_nw4r_g3d_80509d38(u32);

// 0x0x80509ea0 (address_range)
int nw4r_g3d_validate_80509ea0(int, int);

// 0x0x80509f4c (address_range)
void gfx_nw4r_g3d_80509f4c(int);

// 0x0x806d047c (address_range)
int EGG_Video_validate_806d047c(int, int);

// 0x0x806d04d4 (address_range)
int EGG_Video_validate_806d04d4(int, int);

// 0x0x806d0524 (address_range)
void EGG_Video_validate_806d0524(int, int);

// 0x0x806d05b8 (address_range)
void EGG_Video_validate_806d05b8(int, int);

// 0x0x806d0818 (address_range)
u32 * gfx_EGG_Video_806d0818(u32);

// 0x0x806d0854 (address_range)
int EGG_Video_validate_806d0854(int, int);

// 0x0x806d08ac (address_range)
void gfx_EGG_Video_806d08ac(int);

// 0x0x806d0938 (address_range)
void EGG_Video_validate_806d0938(int, int);

// 0x0x806d0d28 (address_range)
void gfx_EGG_Video_806d0d28(void);

// 0x0x806d10bc (address_range)
void EGG_Video_assertFail_806d10bc(void);

// 0x0x806d160c (address_range)
void gfx_EGG_Video_806d160c(u32, int, int);

// 0x0x806d1704 (address_range)
void gfx_EGG_Video_806d1704(int, int, int);

// 0x0x806d17e4 (address_range)
void gfx_EGG_Video_806d17e4(u32, int, u32);

// 0x0x806d1890 (address_range)
void gfx_EGG_Video_806d1890(int, int, int);

// 0x0x806d19dc (address_range)
void gfx_EGG_Video_806d19dc(int, int, int);

// 0x0x806d1abc (address_range)
void gfx_EGG_Video_806d1abc(u32, int, u32);

// 0x0x806d1b68 (address_range)
void EGG_Video_validate_806d1b68(int, int);

// 0x0x806d1bfc (address_range)
char gfx_EGG_Video_806d1bfc(int, int);

// 0x0x806d1cbc (address_range)
int gfx_EGG_Video_806d1cbc(int, int, int);

// 0x0x806d1e20 (address_range)
void gfx_EGG_Video_806d1e20(int);

// 0x0x806d1ebc (address_range)
void gfx_EGG_Video_806d1ebc(int, float);

// 0x0x806d1f0c (address_range)
void gfx_EGG_Video_806d1f0c(int, int);

// 0x0x806d2140 (address_range)
void gfx_EGG_Video_806d2140(int, int);

// 0x0x806d245c (address_range)
void EGG_Video_validate_806d245c(u32);

// 0x0x806d25d0 (address_range)
void EGG_Video_assertFail_806d25d0(void);

// 0x0x806d2754 (address_range)
void gfx_EGG_Video_806d2754(int, float);

// 0x0x806d27d8 (address_range)
void gfx_EGG_Video_806d27d8(int);

// 0x0x806d2874 (address_range)
void gfx_EGG_Video_806d2874(void);

// 0x0x806d2f8c (address_range)
void gfx_EGG_Video_806d2f8c(void);

// 0x0x806d3128 (address_range)
void gfx_EGG_Video_806d3128(void);

// 0x0x806d3444 (address_range)
void gfx_EGG_Video_806d3444(u32, u32, u32);

// 0x0x806d349c (address_range)
void gfx_EGG_Video_806d349c(void);

// 0x0x806d36b8 (address_range)
void EGG_Video_assertFail_806d36b8(void);

// 0x0x806d38c4 (address_range)
void gfx_EGG_Video_806d38c4(void);

// 0x0x806d3c88 (address_range)
void gfx_EGG_Video_806d3c88(int, int, u32);

// 0x0x806d3d98 (address_range)
void gfx_EGG_Video_806d3d98(int, int, u32);

// 0x0x806d3df8 (address_range)
u32 gfx_EGG_Video_806d3df8(u32);

// 0x0x806d3efc (address_range)
void EGG_Video_validate_806d3efc(u32);

// 0x0x806d4020 (address_range)
void EGG_Video_assertFail_806d4020(void);

// 0x0x806d410c (address_range)
void EGG_Video_assertFail_806d410c(void);

// 0x0x806d4210 (address_range)
void gfx_EGG_Video_806d4210(int);

// 0x0x806d4444 (address_range)
void gfx_EGG_Video_806d4444(int);

// 0x0x806d44c4 (address_range)
void gfx_EGG_Video_806d44c4(u32);

// 0x0x806d45b4 (address_range)
void EGG_Video_validate_806d45b4(int, u32);

// 0x0x806d4750 (address_range)
void EGG_Video_assertFail_806d4750(void);

// 0x0x806d4a70 (address_range)
void EGG_Video_assertFail_806d4a70(void);

// 0x0x806d5090 (address_range)
u32 * gfx_EGG_Video_806d5090(u32);

// 0x0x806d50cc (address_range)
int EGG_Video_validate_806d50cc(int, int);

// 0x0x806d5124 (address_range)
int EGG_Video_validate_806d5124(int, int);

// 0x0x806d5180 (address_range)
int EGG_Video_validate_806d5180(int, int);

// 0x0x806d51e0 (address_range)
u32 * gfx_EGG_Video_806d51e0(u32);

// 0x0x806d521c (address_range)
int EGG_Video_validate_806d521c(int, int);

// 0x0x806d52b4 (address_range)
void gfx_EGG_Video_806d52b4(u32);

// 0x0x806d5420 (address_range)
void gfx_EGG_Video_806d5420(int);

// 0x0x806d547c (address_range)
void gfx_EGG_Video_806d547c(int);

// 0x0x806d54f0 (address_range)
void gfx_EGG_Video_806d54f0(int, u32, int, u32);

// 0x0x806d55f4 (address_range)
void gfx_EGG_Video_806d55f4(int, u32);

// 0x0x806d56c0 (address_range)
void EGG_Video_validate_806d56c0(int);

// 0x0x806d5a44 (address_range)
void gfx_EGG_Video_806d5a44(int);

// 0x0x806d5bc0 (address_range)
void gfx_EGG_Video_806d5bc0(void);

// 0x0x806d61fc (address_range)
void gfx_EGG_Video_806d61fc(int, u32);

// 0x0x806d6254 (address_range)
void gfx_EGG_Video_806d6254(int);

// 0x0x806d6544 (address_range)
void gfx_EGG_Video_806d6544(int);

// 0x0x806d6678 (address_range)
int EGG_Video_validate_806d6678(int, int);

// 0x0x806d6714 (address_range)
void gfx_EGG_Video_806d6714(int, u32, int);

// 0x0x806d6a00 (address_range)
void gfx_EGG_Video_806d6a00(void);

// 0x0x806d6b00 (address_range)
void gfx_EGG_Video_806d6b00(int);

// 0x0x806d6bd4 (address_range)
void gfx_EGG_Video_806d6bd4(void);

// 0x0x806d6edc (address_range)
void EGG_Video_validate_806d6edc(int);

// 0x0x806d6fec (address_range)
uint gfx_EGG_Video_806d6fec(int);

// 0x0x806d710c (address_range)
void gfx_EGG_Video_806d710c(int, u32, u32);

// 0x0x806d71a0 (address_range)
void gfx_EGG_Video_806d71a0(int);

// 0x0x806d7280 (address_range)
void gfx_EGG_Video_806d7280(void);

// 0x0x806d758c (address_range)
void gfx_EGG_Video_806d758c(double, int);

// 0x0x806d7750 (address_range)
void gfx_EGG_Video_806d7750(int, char, u32);

// 0x0x806d77a0 (address_range)
void gfx_EGG_Video_806d77a0(int);

// 0x0x806d788c (address_range)
void gfx_EGG_Video_806d788c(int);

// 0x0x806d7928 (address_range)
void gfx_EGG_Video_806d7928(int);

// 0x0x806d79e4 (address_range)
void gfx_EGG_Video_806d79e4(int, u32, u32);

// 0x0x806d7a5c (address_range)
void gfx_EGG_Video_806d7a5c(int);

// 0x0x806d7b58 (address_range)
void EGG_Video_assertFail_806d7b58(void);

// 0x0x806d81dc (address_range)
void EGG_Video_validate_806d81dc(u32);

// 0x0x806d8378 (address_range)
int EGG_Video_validate_806d8378(int, int);

// 0x0x806d83e0 (address_range)
int EGG_Video_validate_806d83e0(int, int);

// 0x0x806d8454 (address_range)
int EGG_Video_validate_806d8454(int, int);

// 0x0x806d84b0 (address_range)
void gfx_EGG_Video_806d84b0(void);

// 0x0x806d8598 (address_range)
void gfx_EGG_Video_806d8598(int, u32, u32);

// 0x0x806d8648 (address_range)
void gfx_EGG_Video_806d8648(int);

// 0x0x806d8694 (address_range)
void gfx_EGG_Video_806d8694(int);

// 0x0x806d86d8 (address_range)
bool gfx_EGG_Video_806d86d8(int);

// 0x0x806d8710 (address_range)
void gfx_EGG_Video_806d8710(int);

// 0x0x806d8748 (address_range)
int EGG_Video_validate_806d8748(int, int);

// 0x0x806d87d0 (address_range)
void gfx_EGG_Video_806d87d0(int);

// 0x0x806d8b9c (address_range)
u32 gfx_EGG_Video_806d8b9c(void);

// 0x0x806d8c64 (address_range)
uint gfx_EGG_Video_806d8c64(void);

// 0x0x806d8cf4 (address_range)
void gfx_EGG_Video_806d8cf4(void);

// 0x0x806d9258 (address_range)
void gfx_EGG_Video_806d9258(int, u32, u32);

// 0x0x806d92c0 (address_range)
void gfx_EGG_Video_806d92c0(int, uint);

// 0x0x806d93f0 (address_range)
int EGG_Video_validate_806d93f0(int, int);

// 0x0x806d9478 (address_range)
void gfx_EGG_Video_806d9478(int);

// 0x0x806d95a0 (address_range)
void gfx_EGG_Video_806d95a0(int);

// 0x0x806d9660 (address_range)
void gfx_EGG_Video_806d9660(int, u32, u32);

// 0x0x806d970c (address_range)
int EGG_Video_validate_806d970c(int, int);

// 0x0x806d9790 (address_range)
void EGG_Video_assertFail_806d9790(void);

// 0x0x806d9940 (address_range)
void gfx_EGG_Video_806d9940(int);

// 0x0x806d9abc (address_range)
void EGG_Video_assertFail_806d9abc(void);

// 0x0x806da160 (address_range)
void gfx_EGG_Video_806da160(void);

// 0x0x806da7a8 (address_range)
void gfx_EGG_Video_806da7a8(void);

// 0x0x806da94c (address_range)
void gfx_EGG_Video_806da94c(int);

// 0x0x806daa10 (address_range)
void gfx_EGG_Video_806daa10(void);

// 0x0x806dab0c (address_range)
void EGG_Video_assertFail_806dab0c(void);

// 0x0x806dada4 (address_range)
void gfx_EGG_Video_806dada4(void);

// 0x0x806db6d0 (address_range)
void EGG_Video_validate_806db6d0(int);

// 0x0x806db7bc (address_range)
void gfx_EGG_Video_806db7bc(u32, u32);

// 0x0x806db82c (address_range)
void gfx_EGG_Video_806db82c(int, int);

// 0x0x806db9c8 (address_range)
void EGG_Video_assertFail_806db9c8(void);

// 0x0x806dbb90 (address_range)
void EGG_Video_assertFail_806dbb90(void);

// 0x0x806dbd34 (address_range)
void gfx_EGG_Video_806dbd34(void);

// 0x0x806dc5ec (address_range)
void gfx_EGG_Video_806dc5ec(int, int);

// 0x0x806dc6fc (address_range)
void gfx_EGG_Video_806dc6fc(void);

// 0x0x806dcf64 (address_range)
void gfx_EGG_Video_806dcf64(int, int, u32);

// 0x0x806dd104 (address_range)
void gfx_EGG_Video_806dd104(void);

// 0x0x806dd7e0 (address_range)
void gfx_EGG_Video_806dd7e0(void);

// 0x0x806ddfc8 (address_range)
void gfx_EGG_Video_806ddfc8(void);

// 0x0x806de0f8 (address_range)
void gfx_EGG_Video_806de0f8(int);

// 0x0x806de138 (address_range)
void gfx_EGG_Video_806de138(void);

// 0x0x806de234 (address_range)
int EGG_Video_validate_806de234(int, int);

// 0x0x806de298 (address_range)
int EGG_Video_validate_806de298(int, int);

// 0x0x806de2fc (address_range)
void gfx_EGG_Video_806de2fc(void);

// 0x0x806de374 (address_range)
void gfx_EGG_Video_806de374(int);

// 0x0x806de480 (address_range)
void gfx_EGG_Video_806de480(int);

// 0x0x806de62c (address_range)
void gfx_EGG_Video_806de62c(int, u32, u32);

// 0x0x806de7b8 (address_range)
u32 gfx_EGG_Video_806de7b8(void);

// 0x0x806de858 (address_range)
int EGG_Video_validate_806de858(int, int);

// 0x0x806de8e0 (address_range)
void EGG_Video_validate_806de8e0(u32);

// 0x0x806dea44 (address_range)
void gfx_EGG_Video_806dea44(int, int);

// 0x0x806dec4c (address_range)
void gfx_EGG_Video_806dec4c(u32, uint);

// 0x0x806ded6c (address_range)
void gfx_EGG_Video_806ded6c(u32, int);

// 0x0x806deec4 (address_range)
void gfx_EGG_Video_806deec4(int, u32);

// 0x0x806df14c (address_range)
void gfx_EGG_Video_806df14c(int, int, u32);

// 0x0x806df214 (address_range)
void gfx_EGG_Video_806df214(int, uint, u32);

// 0x0x806df3d4 (address_range)
void gfx_EGG_Video_806df3d4(u32, uint);

// 0x0x806df4c8 (address_range)
void gfx_EGG_Video_806df4c8(int);

// 0x0x806df79c (address_range)
void gfx_EGG_Video_806df79c(int, byte);

// 0x0x806df8a4 (address_range)
void gfx_EGG_Video_806df8a4(int, uint);

// 0x0x806dfa64 (address_range)
void EGG_Video_assertFail_806dfa64(void);

// 0x0x806dff08 (address_range)
int EGG_Video_validate_806dff08(int, int);

// 0x0x806dff94 (address_range)
void EGG_Video_assertFail_806dff94(void);

// 0x0x806e045c (address_range)
void gfx_EGG_Video_806e045c(void);

// 0x0x806e0a30 (address_range)
void gfx_EGG_Video_806e0a30(void);

// 0x0x806e0c9c (address_range)
u32 gfx_EGG_Video_806e0c9c(int);

// 0x0x806e0ee0 (address_range)
void EGG_Video_validate_806e0ee0(int, u32, u32);

// 0x0x806e1008 (address_range)
void gfx_EGG_Video_806e1008(int);

// 0x0x806e1078 (address_range)
u32 gfx_EGG_Video_806e1078(int);

// 0x0x806e10e4 (address_range)
int EGG_Video_validate_806e10e4(int, int);

// 0x0x806e1170 (address_range)
u32 * gfx_EGG_Video_806e1170(u32, uint, u32);

// 0x0x806e120c (address_range)
void gfx_EGG_Video_806e120c(int);

// 0x0x806e1404 (address_range)
u32 gfx_EGG_Video_806e1404(uint);

// 0x0x806e1420 (address_range)
u32 gfx_EGG_Video_806e1420(int);

// 0x0x806e1454 (address_range)
u32 gfx_EGG_Video_806e1454(void);

// 0x0x806e1460 (address_range)
void gfx_EGG_Video_806e1460(int);

// 0x0x806e180c (address_range)
u32 gfx_EGG_Video_806e180c(int);

// 0x0x806e1814 (address_range)
u32 gfx_EGG_Video_806e1814(int);

// 0x0x806e1820 (address_range)
u32 gfx_EGG_Video_806e1820(int);

// 0x0x806e1828 (address_range)
u32 gfx_EGG_Video_806e1828(void);

// 0x0x806e1838 (address_range)
u32 gfx_EGG_Video_806e1838(void);

// 0x0x806e184c (address_range)
void gfx_EGG_Video_806e184c(u32);

// 0x0x806e185c (address_range)
uint gfx_EGG_Video_806e185c(uint);

// 0x0x806e187c (address_range)
void gfx_EGG_Video_806e187c(uint);

// 0x0x806e1894 (address_range)
u32 gfx_EGG_Video_806e1894(int);

// 0x0x806e18c0 (address_range)
void gfx_EGG_Video_806e18c0(int, u32, u32, u16);

// 0x0x806e1900 (address_range)
uint gfx_EGG_Video_806e1900(int);

// 0x0x806e1920 (address_range)
void gfx_EGG_Video_806e1920(u32, u16, u32, u16);

// 0x0x806e1944 (address_range)
u32 gfx_EGG_Video_806e1944(int);

// 0x0x806e1964 (address_range)
uint gfx_EGG_Video_806e1964(int);

// 0x0x806e1970 (address_range)
uint gfx_EGG_Video_806e1970(uint);

// 0x0x806e1990 (address_range)
void gfx_EGG_Video_806e1990(uint, int);

// 0x0x806e19cc (address_range)
void gfx_EGG_Video_806e19cc(int, u32, u32);

// 0x0x806e1a60 (address_range)
void EGG_Video_assertFail_806e1a60(void);

// 0x0x806e1d08 (address_range)
void gfx_EGG_Video_806e1d08(double, int, int);

// 0x0x806e1de0 (address_range)
void gfx_EGG_Video_806e1de0(int);

// 0x0x806e1e18 (address_range)
void gfx_EGG_Video_806e1e18(int);

// 0x0x806e1eac (address_range)
int EGG_Video_validate_806e1eac(int, int);

// 0x0x806e1f28 (address_range)
void EGG_Video_validate_806e1f28(u32, u32);

// 0x0x806e1ff8 (address_range)
int EGG_Video_validate_806e1ff8(int, int);

// 0x0x806e2038 (address_range)
u32 * gfx_EGG_Video_806e2038(u32, u32);

// 0x0x806e20a4 (address_range)
void EGG_Video_assertFail_806e20a4(void);

// 0x0x806e2164 (address_range)
void gfx_EGG_Video_806e2164(void);

// 0x0x806e23f0 (address_range)
void gfx_EGG_Video_806e23f0(void);

// 0x0x806e24dc (address_range)
double gfx_EGG_Video_806e24dc(u32, uint);

// 0x0x806e2540 (address_range)
void gfx_EGG_Video_806e2540(void);

// 0x0x806e281c (address_range)
void gfx_EGG_Video_806e281c(int, uint, u32);

// 0x0x806e287c (address_range)
void gfx_EGG_Video_806e287c(void);

// 0x0x806e2ad0 (address_range)
void gfx_EGG_Video_806e2ad0(int);

// 0x0x806e2b70 (address_range)
int EGG_Video_validate_806e2b70(int, int);

// 0x0x806e2bb0 (address_range)
void gfx_EGG_Video_806e2bb0(void);

// 0x0x806e2d90 (address_range)
void gfx_EGG_Video_806e2d90(void);

// 0x0x806e2fa0 (address_range)
void gfx_EGG_Video_806e2fa0(void);

// 0x0x806e334c (address_range)
void gfx_EGG_Video_806e334c(void);

// 0x0x806e3728 (address_range)
u32 * gfx_EGG_Video_806e3728(u32, u32);

// 0x0x806e3774 (address_range)
void EGG_Video_assertFail_806e3774(void);

// 0x0x806e3a58 (address_range)
u32 * gfx_EGG_Video_806e3a58(u32, u32);

// 0x0x806e3acc (address_range)
int EGG_Video_validate_806e3acc(int, int);

// 0x0x806e3b0c (address_range)
void gfx_EGG_Video_806e3b0c(u32, int, int);

// 0x0x806e3c44 (address_range)
u32 * gfx_EGG_Video_806e3c44(u32, u32);

// 0x0x806e3cb8 (address_range)
void gfx_EGG_Video_806e3cb8(u32, int, int);

// 0x0x806e3dec (address_range)
void EGG_Video_validate_806e3dec(u32, int);

// 0x0x806e3eb4 (address_range)
void EGG_Video_validate_806e3eb4(u32, int, u32, u32);

// 0x0x806e41dc (address_range)
void EGG_Video_assertFail_806e41dc(void);

// 0x0x806e42c8 (address_range)
void gfx_EGG_Video_806e42c8(int);

// 0x0x806e45c8 (address_range)
void EGG_Video_validate_806e45c8(int);

// 0x0x806e4694 (address_range)
void gfx_EGG_Video_806e4694(int);

// 0x0x806e486c (address_range)
void gfx_EGG_Video_806e486c(void);

// 0x0x806e4a80 (address_range)
double gfx_EGG_Video_806e4a80(int, int);

// 0x0x806e4c9c (address_range)
int EGG_Video_validate_806e4c9c(int, int);

// 0x0x806e4cec (address_range)
void gfx_EGG_Video_806e4cec(void);

// 0x0x806e4d40 (address_range)
void gfx_EGG_Video_806e4d40(int);

// 0x0x806e4d88 (address_range)
int EGG_Video_validate_806e4d88(int, int);

// 0x0x806e4dd0 (address_range)
int EGG_Video_validate_806e4dd0(int, int);

// 0x0x806e4e18 (address_range)
void EGG_Video_validate_806e4e18(int, int);

// 0x0x806e4fc4 (address_range)
void gfx_EGG_Video_806e4fc4(int);

// 0x0x806e5130 (address_range)
void gfx_EGG_Video_806e5130(void);

// 0x0x806e533c (address_range)
void EGG_Video_validate_806e533c(int, int);

// 0x0x806e551c (address_range)
void gfx_EGG_Video_806e551c(void);

// 0x0x806e57ac (address_range)
void gfx_EGG_Video_806e57ac(u64, int, u32, u32, u32, u32, u32, u32);

// 0x0x806e5844 (address_range)
void EGG_Video_validate_806e5844(int);

// 0x0x806e59dc (address_range)
double gfx_EGG_Video_806e59dc(int);

// 0x0x806e5a14 (address_range)
void EGG_Video_validate_806e5a14(int, int);

// 0x0x806e5ad0 (address_range)
int EGG_Video_validate_806e5ad0(int, int);

// 0x0x806e5b38 (address_range)
u32 * gfx_EGG_Video_806e5b38(u32, int);

// 0x0x806e5ccc (address_range)
void EGG_Video_validate_806e5ccc(int);

// 0x0x806e5f40 (address_range)
void gfx_EGG_Video_806e5f40(int, uint, u32);

// 0x0x806e5fa0 (address_range)
int gfx_EGG_Video_806e5fa0(int);

// 0x0x806e5fd0 (address_range)
double gfx_EGG_Video_806e5fd0(int);

// 0x0x806e6008 (address_range)
int EGG_Video_validate_806e6008(int, int);

// 0x0x806e6048 (address_range)
void EGG_Video_validate_806e6048(u32, int, int);

// 0x0x806e62fc (address_range)
void EGG_Video_assertFail_806e62fc(void);

// 0x0x806e6628 (address_range)
void EGG_Video_validate_806e6628(int);

// 0x0x806e6d00 (address_range)
void EGG_Video_validate_806e6d00(int);

// 0x0x806e6e24 (address_range)
void gfx_EGG_Video_806e6e24(int);

// 0x0x806e6f38 (address_range)
void EGG_Video_validate_806e6f38(int, int);

// 0x0x806e6fe4 (address_range)
void gfx_EGG_Video_806e6fe4(void);

// 0x0x806e74e4 (address_range)
double gfx_EGG_Video_806e74e4(int, uint);

// 0x0x806e76f4 (address_range)
void gfx_EGG_Video_806e76f4(void);

// 0x0x806e79d4 (address_range)
void gfx_EGG_Video_806e79d4(void);

// 0x0x806e7cb4 (address_range)
void EGG_Video_validate_806e7cb4(u32, int);

// 0x0x806e7f20 (address_range)
void gfx_EGG_Video_806e7f20(void);

// 0x0x806e80dc (address_range)
void gfx_EGG_Video_806e80dc(void);

// 0x0x806e8ccc (address_range)
void gfx_EGG_Video_806e8ccc(void);

// 0x0x806e8ed4 (address_range)
void gfx_EGG_Video_806e8ed4(void);

// 0x0x806e91a0 (address_range)
void gfx_EGG_Video_806e91a0(u32);

// 0x0x806e9248 (address_range)
int EGG_Video_validate_806e9248(int, int);

// 0x0x806e92c8 (address_range)
void gfx_EGG_Video_806e92c8(void);

// 0x0x806e9408 (address_range)
void gfx_EGG_Video_806e9408(void);

// 0x0x806e9548 (address_range)
void gfx_EGG_Video_806e9548(void);

// 0x0x806e978c (address_range)
void EGG_Video_assertFail_806e978c(void);

// 0x0x806e9880 (address_range)
void EGG_Video_assertFail_806e9880(void);

// 0x0x806e9974 (address_range)
void EGG_Video_assertFail_806e9974(void);

// 0x0x806e9a68 (address_range)
void gfx_EGG_Video_806e9a68(void);

// 0x0x806e9ba8 (address_range)
void gfx_EGG_Video_806e9ba8(void);

// 0x0x806e9ce8 (address_range)
void gfx_EGG_Video_806e9ce8(void);

// 0x0x806e9f2c (address_range)
void EGG_Video_assertFail_806e9f2c(void);

// 0x0x806ea020 (address_range)
void EGG_Video_assertFail_806ea020(void);

// 0x0x806ea114 (address_range)
void EGG_Video_assertFail_806ea114(void);

// 0x0x806ea228 (address_range)
int EGG_Video_validate_806ea228(int, int);

// 0x0x806ea268 (address_range)
void EGG_Video_validate_806ea268(u32, int);

// 0x0x806ea2d0 (address_range)
int EGG_Video_validate_806ea2d0(int, int);

// 0x0x806ea310 (address_range)
void EGG_Video_validate_806ea310(int);

// 0x0x806ea49c (address_range)
void gfx_EGG_Video_806ea49c(int);

// 0x0x806ea4f4 (address_range)
void EGG_Video_validate_806ea4f4(int);

// 0x0x806ea57c (address_range)
void gfx_EGG_Video_806ea57c(int);

// 0x0x806ea630 (address_range)
void EGG_Video_validate_806ea630(int);

// 0x0x806ea9e8 (address_range)
void gfx_EGG_Video_806ea9e8(u64, int, u32, u32, u32);

// 0x0x806eaad4 (address_range)
u32 gfx_EGG_Video_806eaad4(u64, int, u32, u32, u32, u32, u32, int);

// 0x0x806eac58 (address_range)
u32 gfx_EGG_Video_806eac58(u64, int, u32, u32, u32, u32, u32, int);

// 0x0x806eaddc (address_range)
u32 gfx_EGG_Video_806eaddc(u64, int, u32, u32, u32, u32, u32, int);

// 0x0x806eb0b8 (address_range)
u32 gfx_EGG_Video_806eb0b8(int, u32, u32, u32, u32, u32);

// 0x0x806eb200 (address_range)
u32 gfx_EGG_Video_806eb200(int, u32, u32, u32, u32, u32);

// 0x0x806eb348 (address_range)
u32 gfx_EGG_Video_806eb348(int, u32, u32, u32, u32, u32);

// 0x0x806eb490 (address_range)
u32 gfx_EGG_Video_806eb490(u64, int, u32, u32, u32, u32, u32, int);

// 0x0x806eb614 (address_range)
u32 gfx_EGG_Video_806eb614(u64, int, u32, u32, u32, u32, u32, int);

// 0x0x806eb798 (address_range)
u32 gfx_EGG_Video_806eb798(u64, int, u32, u32, u32, u32, u32, int);

// 0x0x806eba74 (address_range)
u32 gfx_EGG_Video_806eba74(int, u32, u32, u32, u32, u32);

// 0x0x806ebbbc (address_range)
u32 gfx_EGG_Video_806ebbbc(int, u32, u32, u32, u32, u32);

// 0x0x806ebd04 (address_range)
u32 gfx_EGG_Video_806ebd04(int, u32, u32, u32, u32, u32);

// 0x0x806ebea4 (address_range)
void gfx_EGG_Video_806ebea4(int);

// 0x0x806ebf34 (address_range)
int EGG_Video_validate_806ebf34(int, int);

// 0x0x806ebf74 (address_range)
void EGG_Video_validate_806ebf74(u32, int);

// 0x0x806ec144 (address_range)
void gfx_EGG_Video_806ec144(int);

// 0x0x806ec184 (address_range)
void EGG_Video_validate_806ec184(int);

// 0x0x806ec2a8 (address_range)
u32 * gfx_EGG_Video_806ec2a8(u32, int);

// 0x0x806ec36c (address_range)
int EGG_Video_validate_806ec36c(int, int);

// 0x0x806ec3ac (address_range)
void EGG_Video_validate_806ec3ac(int);

// 0x0x806ec4d4 (address_range)
u32 * gfx_EGG_Video_806ec4d4(u32, int);

// 0x0x806ec5f0 (address_range)
void EGG_Video_validate_806ec5f0(int);

// 0x0x806ec70c (address_range)
int EGG_Video_validate_806ec70c(int, int);

// 0x0x806ec774 (address_range)
int EGG_Video_validate_806ec774(int, int);

// 0x0x806ec7e8 (address_range)
int EGG_Video_validate_806ec7e8(int, int);

// 0x0x806ec828 (address_range)
u32 * gfx_EGG_Video_806ec828(u32, u32);

// 0x0x806ec898 (address_range)
void EGG_Video_assertFail_806ec898(void);

// 0x0x806ec94c (address_range)
void gfx_EGG_Video_806ec94c(void);

// 0x0x806ecb78 (address_range)
void gfx_EGG_Video_806ecb78(void);

// 0x0x806ecc60 (address_range)
void gfx_EGG_Video_806ecc60(void);

// 0x0x806eced0 (address_range)
void EGG_Video_validate_806eced0(double);

// 0x0x806ecf14 (address_range)
void gfx_EGG_Video_806ecf14(int, uint, u32);

// 0x0x806ecf74 (address_range)
void gfx_EGG_Video_806ecf74(void);

// 0x0x806ed1b8 (address_range)
int EGG_Video_validate_806ed1b8(int, int);

// 0x0x806ed1f8 (address_range)
void gfx_EGG_Video_806ed1f8(void);

// 0x0x806ed3e4 (address_range)
void gfx_EGG_Video_806ed3e4(void);

// 0x0x806ed600 (address_range)
void gfx_EGG_Video_806ed600(void);

// 0x0x806ed9b8 (address_range)
void gfx_EGG_Video_806ed9b8(void);

// 0x0x806edda0 (address_range)
void EGG_Video_validate_806edda0(u32, u32);

// 0x0x806ee158 (address_range)
void EGG_Video_validate_806ee158(u32, u32);

// 0x0x806ee2c4 (address_range)
void EGG_Video_assertFail_806ee2c4(void);

// 0x0x806ee398 (address_range)
void EGG_Video_assertFail_806ee398(void);

// 0x0x806ee5f8 (address_range)
void EGG_Video_assertFail_806ee5f8(void);

// 0x0x806eeba8 (address_range)
void EGG_Video_assertFail_806eeba8(void);

// 0x0x806eece4 (address_range)
void gfx_EGG_Video_806eece4(int);

// 0x0x806eef24 (address_range)
int EGG_Video_validate_806eef24(int, int);

// 0x0x806eef64 (address_range)
void gfx_EGG_Video_806eef64(void);

// 0x0x806ef49c (address_range)
void gfx_EGG_Video_806ef49c(void);

// 0x0x806efa00 (address_range)
void gfx_EGG_Video_806efa00(void);

// 0x0x806f01ac (address_range)
void gfx_EGG_Video_806f01ac(void);

// 0x0x806f097c (address_range)
u32 EGG_Video_validate_806f097c(int);

// 0x0x806f0a28 (address_range)
void gfx_EGG_Video_806f0a28(u32);

// 0x0x806f0a34 (address_range)
u32 gfx_EGG_Video_806f0a34(void);

// 0x0x806f0a40 (address_range)
void gfx_EGG_Video_806f0a40(u32);

// 0x0x806f0b14 (address_range)
void gfx_EGG_Video_806f0b14(int);

// 0x0x806f0b88 (address_range)
void gfx_EGG_Video_806f0b88(int);

// 0x0x806f0df4 (address_range)
void gfx_EGG_Video_806f0df4(void);

// 0x0x806f0f50 (address_range)
void EGG_Video_validate_806f0f50(u32, int);

// 0x0x806f1168 (address_range)
void gfx_EGG_Video_806f1168(void);

// 0x0x806f16cc (address_range)
void gfx_EGG_Video_806f16cc(void);

// 0x0x806f1e2c (address_range)
void gfx_EGG_Video_806f1e2c(void);

// 0x0x806f20cc (address_range)
void EGG_Video_validate_806f20cc(u32, int);

// 0x0x806f22bc (address_range)
void gfx_EGG_Video_806f22bc(void);

// 0x0x806f28c0 (address_range)
void gfx_EGG_Video_806f28c0(void);

// 0x0x806f2ec4 (address_range)
void gfx_EGG_Video_806f2ec4(void);

// 0x0x806f31f0 (address_range)
void gfx_EGG_Video_806f31f0(void);

// 0x0x806f36a8 (address_range)
void gfx_EGG_Video_806f36a8(int);

// 0x0x806f373c (address_range)
int EGG_Video_validate_806f373c(int, int);

// 0x0x806f37a4 (address_range)
int EGG_Video_validate_806f37a4(int, int);

// 0x0x806f3800 (address_range)
void gfx_EGG_Video_806f3800(void);

// 0x0x806f3c3c (address_range)
void gfx_EGG_Video_806f3c3c(void);

// 0x0x806f40a4 (address_range)
void gfx_EGG_Video_806f40a4(void);

// 0x0x806f47a0 (address_range)
void gfx_EGG_Video_806f47a0(void);

// 0x0x806f4ec8 (address_range)
u32 * gfx_EGG_Video_806f4ec8(u32, u32);

// 0x0x806f4f34 (address_range)
void EGG_Video_assertFail_806f4f34(void);

// 0x0x806f4ff0 (address_range)
void gfx_EGG_Video_806f4ff0(void);

// 0x0x806f5234 (address_range)
void gfx_EGG_Video_806f5234(void);

// 0x0x806f5314 (address_range)
void gfx_EGG_Video_806f5314(void);

// 0x0x806f5424 (address_range)
void gfx_EGG_Video_806f5424(void);

// 0x0x806f5564 (address_range)
void gfx_EGG_Video_806f5564(void);

// 0x0x806f571c (address_range)
void gfx_EGG_Video_806f571c(void);

// 0x0x806f58cc (address_range)
void gfx_EGG_Video_806f58cc(void);

// 0x0x806f5a9c (address_range)
void gfx_EGG_Video_806f5a9c(void);

// 0x0x806f5c0c (address_range)
int EGG_Video_validate_806f5c0c(int, int);

// 0x0x806f5c4c (address_range)
void gfx_EGG_Video_806f5c4c(void);

// 0x0x806f619c (address_range)
void gfx_EGG_Video_806f619c(void);

// 0x0x806f6738 (address_range)
void gfx_EGG_Video_806f6738(void);

// 0x0x806f7058 (address_range)
void gfx_EGG_Video_806f7058(void);

// 0x0x806f79c4 (address_range)
u32 * EGG_Video_validate_806f79c4(u32, int);

// 0x0x806f7ba0 (address_range)
void gfx_EGG_Video_806f7ba0(int);

// 0x0x806f7cd4 (address_range)
void EGG_Video_validate_806f7cd4(int);

// 0x0x806f7dd8 (address_range)
void gfx_EGG_Video_806f7dd8(void);

// 0x0x806f822c (address_range)
void gfx_EGG_Video_806f822c(void);

// 0x0x806f8490 (address_range)
void EGG_Video_validate_806f8490(int);

// 0x0x806f86c0 (address_range)
void EGG_Video_validate_806f86c0(int, uint);

// 0x0x806f886c (address_range)
void EGG_Video_validate_806f886c(int);

// 0x0x806f89d4 (address_range)
void EGG_Video_validate_806f89d4(int);

// 0x0x806f8bd8 (address_range)
int EGG_Video_validate_806f8bd8(int, int);

// 0x0x806f8c18 (address_range)
u32 * gfx_EGG_Video_806f8c18(u32, int);

// 0x0x806f8cc0 (address_range)
void EGG_Video_validate_806f8cc0(int);

// 0x0x806f8f54 (address_range)
double EGG_Video_validate_806f8f54(int, int);

// 0x0x806f909c (address_range)
int EGG_Video_validate_806f909c(int, int);

// 0x0x806f90dc (address_range)
void EGG_Video_validate_806f90dc(u32, int);

// 0x0x806f9260 (address_range)
void EGG_Video_validate_806f9260(int);

// 0x0x806f9628 (address_range)
void EGG_Video_validate_806f9628(int, int);

// 0x0x806f9968 (address_range)
void gfx_EGG_Video_806f9968(int, int);

// 0x0x806f9aa8 (address_range)
void EGG_Video_validate_806f9aa8(int, float, int);

// 0x0x806fa2c0 (address_range)
u32 gfx_EGG_Video_806fa2c0(int, int);

// 0x0x806fa31c (address_range)
double gfx_EGG_Video_806fa31c(int, uint);

// 0x0x806fa408 (address_range)
double gfx_EGG_Video_806fa408(int, uint);

// 0x0x806fa6f4 (address_range)
void gfx_EGG_Video_806fa6f4(void);

// 0x0x806fac9c (address_range)
void gfx_EGG_Video_806fac9c(void);

// 0x0x806fb094 (address_range)
void gfx_EGG_Video_806fb094(void);

// 0x0x806fb48c (address_range)
u32 * gfx_EGG_Video_806fb48c(u32, int);

// 0x0x806fb664 (address_range)
void gfx_EGG_Video_806fb664(int);

// 0x0x806fb708 (address_range)
void gfx_EGG_Video_806fb708(void);

// 0x0x806fb8c4 (address_range)
double gfx_EGG_Video_806fb8c4(int);

// 0x0x806fb900 (address_range)
void EGG_Video_validate_806fb900(int, int);

// 0x0x806fb984 (address_range)
int EGG_Video_validate_806fb984(int, int);

// 0x0x806fb9c4 (address_range)
u32 * gfx_EGG_Video_806fb9c4(u32);

// 0x0x806fba08 (address_range)
u32 * gfx_EGG_Video_806fba08(u32);

// 0x0x806fba4c (address_range)
u32 * gfx_EGG_Video_806fba4c(u32);

// 0x0x806fba90 (address_range)
void gfx_EGG_Video_806fba90(int);

// 0x0x806fbb50 (address_range)
void gfx_EGG_Video_806fbb50(void);

// 0x0x806fbbc4 (address_range)
void gfx_EGG_Video_806fbbc4(int);

// 0x0x806fbc74 (address_range)
u32 * gfx_EGG_Video_806fbc74(u32);

// 0x0x806fbcbc (address_range)
u32 * gfx_EGG_Video_806fbcbc(u32);

// 0x0x806fbd04 (address_range)
u32 * gfx_EGG_Video_806fbd04(u32);

// 0x0x806fbd4c (address_range)
void EGG_Video_validate_806fbd4c(int);

// 0x0x806fbe40 (address_range)
void EGG_Video_validate_806fbe40(int);

// 0x0x806fc060 (address_range)
void EGG_Video_validate_806fc060(int, int);

// 0x0x806fc21c (address_range)
void gfx_EGG_Video_806fc21c(int, int);

// 0x0x806fc2a8 (address_range)
void gfx_EGG_Video_806fc2a8(void);

// 0x0x806fc460 (address_range)
void gfx_EGG_Video_806fc460(void);

// 0x0x806fc618 (address_range)
void EGG_Video_validate_806fc618(u32);

// 0x0x806fc674 (address_range)
u32 * EGG_Video_validate_806fc674(u32, int);

// 0x0x806fc71c (address_range)
int EGG_Video_validate_806fc71c(void);

// 0x0x806fc7a4 (address_range)
void gfx_EGG_Video_806fc7a4(void);

// 0x0x806fc7f4 (address_range)
void gfx_EGG_Video_806fc7f4(int);

// 0x0x806fc89c (address_range)
void gfx_EGG_Video_806fc89c(int);

// 0x0x806fc90c (address_range)
void gfx_EGG_Video_806fc90c(int);

// 0x0x806fc9bc (address_range)
int gfx_EGG_Video_806fc9bc(int, int);

// 0x0x806fcac0 (address_range)
void gfx_EGG_Video_806fcac0(u64, int, u32, u32, u32);

// 0x0x806fcb64 (address_range)
void EGG_Video_assertFail_806fcb64(void);

// 0x0x806fcc34 (address_range)
void EGG_Video_assertFail_806fcc34(void);

// 0x0x806fcd04 (address_range)
void EGG_Video_assertFail_806fcd04(void);

// 0x0x806fce48 (address_range)
void EGG_Video_assertFail_806fce48(void);

// 0x0x806fcf8c (address_range)
int gfx_EGG_Video_806fcf8c(u64, int, u32, u32, u32, u32, u32, u32);

// 0x0x806fd064 (address_range)
int gfx_EGG_Video_806fd064(u64, int, u32, u32, u32, u32, u32, u32);

// 0x0x806fd13c (address_range)
int gfx_EGG_Video_806fd13c(u64, int, u32, u32, u32, int, u32, u32);

// 0x0x806fd294 (address_range)
int gfx_EGG_Video_806fd294(u64, int, u32, u32, u32, int, u32, u32);

// 0x0x806fd3ec (address_range)
void EGG_Video_assertFail_806fd3ec(void);

// 0x0x806fd4dc (address_range)
void EGG_Video_assertFail_806fd4dc(void);

// 0x0x806fd5cc (address_range)
void EGG_Video_assertFail_806fd5cc(void);

// 0x0x806fd730 (address_range)
void EGG_Video_assertFail_806fd730(void);

// 0x0x806fd894 (address_range)
int gfx_EGG_Video_806fd894(u64, int, u32, u32, u32, u32, u32, u32);

// 0x0x806fd9a8 (address_range)
int gfx_EGG_Video_806fd9a8(u64, int, u32, u32, u32, u32, u32, u32);

// 0x0x806fdabc (address_range)
int gfx_EGG_Video_806fdabc(u64, int, u32, u32, u32, int, u32, u32);

// 0x0x806fdc4c (address_range)
int gfx_EGG_Video_806fdc4c(u64, int, u32, u32, u32, int, u32, u32);

// 0x0x806fdddc (address_range)
u32 gfx_EGG_Video_806fdddc(int);

// 0x0x806fde64 (address_range)
u32 gfx_EGG_Video_806fde64(int);

// 0x0x806fe030 (address_range)
u32 gfx_EGG_Video_806fe030(int);

// 0x0x806fe1a4 (address_range)
u32 gfx_EGG_Video_806fe1a4(int);

// 0x0x806fe1e8 (address_range)
u32 gfx_EGG_Video_806fe1e8(u32, uint);

// 0x0x806fe2a8 (address_range)
u32 gfx_EGG_Video_806fe2a8(uint, int);

// 0x0x806fe314 (address_range)
void gfx_EGG_Video_806fe314(u32);

// 0x0x806fe31c (address_range)
u32 gfx_EGG_Video_806fe31c(int);

// 0x0x806fe350 (address_range)
u32 gfx_EGG_Video_806fe350(int);

// 0x0x806fe384 (address_range)
void EGG_Video_validate_806fe384(int, u32);

// 0x0x806ff3d8 (address_range)
u32 * EGG_Video_validate_806ff3d8(u32, int);

// 0x0x806ff464 (address_range)
u32 gfx_EGG_Video_806ff464(int, u32, u32);

// 0x0x806ff550 (address_range)
void gfx_EGG_Video_806ff550(int, u32);

// 0x0x806ff578 (address_range)
u32 * gfx_EGG_Video_806ff578(u32);

// 0x0x806ff5b4 (address_range)
u32 * gfx_EGG_Video_806ff5b4(u32);

// 0x0x806ff5f0 (address_range)
u32 * gfx_EGG_Video_806ff5f0(u32);

// 0x0x806ff62c (address_range)
void gfx_EGG_Video_806ff62c(int);

// 0x0x806ff70c (address_range)
void gfx_EGG_Video_806ff70c(u64, u64, int);

// 0x0x806ff7b0 (address_range)
void EGG_Video_assertFail_806ff7b0(void);

// 0x0x806ffad4 (address_range)
void gfx_EGG_Video_806ffad4(int, u32);

// 0x0x806ffb64 (address_range)
void gfx_EGG_Video_806ffb64(int, u32, u32);

// 0x0x806ffbf8 (address_range)
void gfx_EGG_Video_806ffbf8(u32, u32, int, int);

// 0x0x806ffd54 (address_range)
void gfx_EGG_Video_806ffd54(int);

// 0x0x806ffdb4 (address_range)
void EGG_Video_validate_806ffdb4(u32, u32);

// 0x0x806fff48 (address_range)
void EGG_Video_assertFail_806fff48(void);

#ifdef __cplusplus
}
#endif
