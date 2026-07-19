#pragma once
// ============================================================================
// ArchiveExt.hpp — EGG Extended Archive Subsystem
// Address range: 0x804e0000 - 0x80500000
// Function count: 525
//
// Archive data processing, type-specific loaders
//
// Categorization: GENESIS Phase 5 (Runtime Module)
// ============================================================================

#include "rk_common.h"

namespace EGG {
namespace ArchiveExt {

// --- Non-void functions ---
// @addr 0x804e0010
u32 fn_804e0010(u32);
// @addr 0x804e00bc
s32 fn_804e00bc(s32, s32);
// @addr 0x804e0470
u32 fn_804e0470(void);
// @addr 0x804e0608
s32 fn_804e0608(s32, s32);
// @addr 0x804e094c
s32 fn_804e094c(s32, s32);
// @addr 0x804e0e0c
s32 fn_804e0e0c(s32, s32);
// @addr 0x804e12ec
s32 fn_804e12ec(s32, s32);
// @addr 0x804e1f54
u32 fn_804e1f54(s32);
// @addr 0x804e2978
s32 fn_804e2978(s32, s32);
// @addr 0x804e334c
s32 fn_804e334c(s32, s32);
// @addr 0x804e36a0
s32 fn_804e36a0(s32, s32);
// @addr 0x804e38d8
s32 fn_804e38d8(s32, s32);
// @addr 0x804e3bfc
s32 fn_804e3bfc(s32);
// @addr 0x804e3c30
s32 fn_804e3c30(s32, s32);
// @addr 0x804e3ca0
s32 fn_804e3ca0(s32, s32);
// @addr 0x804e44e8
u32 fn_804e44e8(s8*);
// @addr 0x804e4590
u32 fn_804e4590(s32);
// @addr 0x804e4f70
u32 fn_804e4f70(s32);
// @addr 0x804e5fec
u32 fn_804e5fec(s32, s32, u32);
// @addr 0x804e6058
bool fn_804e6058(s32, s32);
// @addr 0x804e608c
u32 fn_804e608c(s32);
// @addr 0x804e60b4
u32 fn_804e60b4(s32);
// @addr 0x804e6174
u32 fn_804e6174(s32);
// @addr 0x804e657c
u32 fn_804e657c(u32);
// @addr 0x804e7950
s32 fn_804e7950(s32, s32);
// @addr 0x804e7d24
s32 fn_804e7d24(s32, s32);
// @addr 0x804e8384
s32 fn_804e8384(s32, s32);
// @addr 0x804e83ec
s32 fn_804e83ec(s32, s32);
// @addr 0x804e85d8
u32 fn_804e85d8(s32);
// @addr 0x804e864c
u32 fn_804e864c(s32);
// @addr 0x804e8f1c
s32 fn_804e8f1c(s32, s32);
// @addr 0x804e982c
s32 fn_804e982c(s32, s32);
// @addr 0x804ea1f4
s32 fn_804ea1f4(s32, s32);
// @addr 0x804ea560
s32 fn_804ea560(s32, s32);
// @addr 0x804eac2c
s32 fn_804eac2c(s32, s32);
// @addr 0x804eac6c
s32 fn_804eac6c(s32, s32);
// @addr 0x804eacc8
u32 fn_804eacc8(s32);
// @addr 0x804ead50
u32 fn_804ead50(s32);
// @addr 0x804eb194
s32 fn_804eb194(s32, s32);
// @addr 0x804eb1ec
u32 fn_804eb1ec(s32);
// @addr 0x804eb2c0
s32 fn_804eb2c0(s32, s32);
// @addr 0x804eb31c
s32 fn_804eb31c(s32, s32);
// @addr 0x804eb37c
u32 fn_804eb37c(s32);
// @addr 0x804ebcfc
u32 fn_804ebcfc(s32);
// @addr 0x804ec318
s32 fn_804ec318(s32, s32);
// @addr 0x804eca44
u32 fn_804eca44(s32);
// @addr 0x804ecacc
u32 fn_804ecacc(s32);
// @addr 0x804ecf10
s32 fn_804ecf10(s32, s32);
// @addr 0x804ecf68
u32 fn_804ecf68(s32);
// @addr 0x804ed03c
s32 fn_804ed03c(s32, s32);
// @addr 0x804ed09c
u32 fn_804ed09c(s32);
// @addr 0x804ed4d8
u32 fn_804ed4d8(s32);
// @addr 0x804ed560
u32 fn_804ed560(s32);
// @addr 0x804ed9a4
s32 fn_804ed9a4(s32, s32);
// @addr 0x804ed9fc
u32 fn_804ed9fc(s32);
// @addr 0x804edad0
s32 fn_804edad0(s32, s32);
// @addr 0x804edb30
u32 fn_804edb30(s32);
// @addr 0x804eea50
s32 fn_804eea50(s32, s32);
// @addr 0x804f4774
u32 fn_804f4774(s32);
// @addr 0x804f4c44
u32 fn_804f4c44(s32);
// @addr 0x804f4ce4
u32 fn_804f4ce4(s32);
// @addr 0x804f4dfc
u32 fn_804f4dfc(s32);
// @addr 0x804f4e54
u32 fn_804f4e54(s32);
// @addr 0x804f50e4
u32 fn_804f50e4(s32);
// @addr 0x804f526c
u32 fn_804f526c(s32);
// @addr 0x804f53a0
u32 fn_804f53a0(u32);
// @addr 0x804f5638
s32 fn_804f5638(s32, s32);
// @addr 0x804f56e0
s32 fn_804f56e0(s32, s32);
// @addr 0x804f5788
s32 fn_804f5788(s32, s32);
// @addr 0x804f5830
s32 fn_804f5830(s32, s32);
// @addr 0x804f58d8
s32 fn_804f58d8(s32, s32);
// @addr 0x804f5980
s32 fn_804f5980(s32, s32);
// @addr 0x804f5a28
s32 fn_804f5a28(s32, s32);
// @addr 0x804f5ad0
s32 fn_804f5ad0(s32, s32);
// @addr 0x804f5b78
s32 fn_804f5b78(s32, s32);
// @addr 0x804f5c20
s32 fn_804f5c20(s32, s32);
// @addr 0x804f5ca8
u32 fn_804f5ca8(void);
// @addr 0x804f5cec
s32 fn_804f5cec(void);
// @addr 0x804f5d1c
s32 fn_804f5d1c(s32, s32);
// @addr 0x804f5da4
u32 fn_804f5da4(void);
// @addr 0x804f5de8
s32 fn_804f5de8(void);
// @addr 0x804f5e18
s32 fn_804f5e18(s32, s32);
// @addr 0x804f5ec0
s32 fn_804f5ec0(s32, s32);
// @addr 0x804f5f68
s32 fn_804f5f68(s32, s32);
// @addr 0x804f6010
s32 fn_804f6010(s32, s32);
// @addr 0x804f60b8
s32 fn_804f60b8(s32, s32);
// @addr 0x804f6160
s32 fn_804f6160(s32, s32);
// @addr 0x804f61e8
u32 fn_804f61e8(void);
// @addr 0x804f622c
s32 fn_804f622c(void);
// @addr 0x804f625c
s32 fn_804f625c(s32, s32);
// @addr 0x804f6304
s32 fn_804f6304(s32, s32);
// @addr 0x804f63ac
s32 fn_804f63ac(s32, s32);
// @addr 0x804f6470
s32 fn_804f6470(s32, s32);
// @addr 0x804f6534
s32 fn_804f6534(s32, s32);
// @addr 0x804f65dc
s32 fn_804f65dc(s32, s32);
// @addr 0x804f6684
s32 fn_804f6684(s32, s32);
// @addr 0x804f671c
s32 fn_804f671c(s32, s32);
// @addr 0x804f67ac
s32 fn_804f67ac(s32, s32);
// @addr 0x804f683c
s32 fn_804f683c(s32, s32);
// @addr 0x804f68cc
s32 fn_804f68cc(s32, s32);
// @addr 0x804f695c
s32 fn_804f695c(s32, s32);
// @addr 0x804f69ec
s32 fn_804f69ec(s32, s32);
// @addr 0x804f6aac
s32 fn_804f6aac(s32, s32);
// @addr 0x804f6b6c
s32 fn_804f6b6c(s32, s32);
// @addr 0x804f6bfc
s32 fn_804f6bfc(s32, s32);
// @addr 0x804f6c8c
s32 fn_804f6c8c(s32, s32);
// @addr 0x804f6d1c
s32 fn_804f6d1c(s32, s32);
// @addr 0x804f6df0
s32 fn_804f6df0(s32, s32);
// @addr 0x804f6eb8
s32 fn_804f6eb8(s32, s32);
// @addr 0x804f6f48
s32 fn_804f6f48(s32, s32);
// @addr 0x804f7c50
u32 fn_804f7c50(s32, s32);
// @addr 0x804f7d6c
u32 fn_804f7d6c(u32);
// @addr 0x804f7fb0
s32 fn_804f7fb0(s32, s32);
// @addr 0x804f9284
s32 fn_804f9284(s32, s32);
// @addr 0x804f976c
s32 fn_804f976c(s32, s32);
// @addr 0x804fa69c
s32 fn_804fa69c(s32, s32);
// @addr 0x804fa82c
u32 fn_804fa82c(u32*);
// @addr 0x804fae3c
s32 fn_804fae3c(s32, s32);
// @addr 0x804fbbcc
s32 fn_804fbbcc(s32, s32);
// @addr 0x804fc52c
s32 fn_804fc52c(s32, s32);
// @addr 0x804fd15c
u32 fn_804fd15c(s32);
// @addr 0x804fd2d4
s32 fn_804fd2d4(s32, s32);
// @addr 0x804fd78c
s32 fn_804fd78c(s32, s32);
// @addr 0x804fd7e4
s32 fn_804fd7e4(s32, s32);
// @addr 0x804fe260
s32 fn_804fe260(s32, s32);
// @addr 0x804fe540
s32 fn_804fe540(s32, s32);
// @addr 0x804fe7d4
bool fn_804fe7d4(s32);
// @addr 0x804fe86c
s32 fn_804fe86c(s32, s32);
// @addr 0x804fed90
s32 fn_804fed90(s32, s32);
// @addr 0x804ff084
u32 fn_804ff084(u32*);
// @addr 0x804ff4a0
s32 fn_804ff4a0(s32*, s32);
// @addr 0x804ff4b0
s32 fn_804ff4b0(s32*, s32);
// @addr 0x804ff52c
u32 fn_804ff52c(s32*);
// @addr 0x804ffbe0
s32 fn_804ffbe0(s32, s32);
// @addr 0x804ffc20
s32 fn_804ffc20(s32, s32);

// --- Void functions ---
// @addr 0x804e0060
void fn_804e0060();
// @addr 0x804e013c
void fn_804e013c(s32);
// @addr 0x804e0224
void fn_804e0224(s32);
// @addr 0x804e02ec
void fn_804e02ec(void);
// @addr 0x804e0348
void fn_804e0348(s32);
// @addr 0x804e03e8
void fn_804e03e8(u32);
// @addr 0x804e042c
void fn_804e042c(u32);
// @addr 0x804e05a0
void fn_804e05a0();
// @addr 0x804e068c
void fn_804e068c(s32);
// @addr 0x804e07e4
void fn_804e07e4(u32);
// @addr 0x804e0828
void fn_804e0828(s32);
// @addr 0x804e08e4
void fn_804e08e4();
// @addr 0x804e09d0
void fn_804e09d0(s32);
// @addr 0x804e0aa4
void fn_804e0aa4(void);
// @addr 0x804e0b0c
void fn_804e0b0c(s32);
// @addr 0x804e0c58
void fn_804e0c58(u32);
// @addr 0x804e0c9c
void fn_804e0c9c(s32);
// @addr 0x804e0da4
void fn_804e0da4();
// @addr 0x804e0e90
void fn_804e0e90(s32);
// @addr 0x804e0f64
void fn_804e0f64(s32);
// @addr 0x804e10b0
void fn_804e10b0(u32);
// @addr 0x804e10f4
void fn_804e10f4(s32);
// @addr 0x804e1278
void fn_804e1278();
// @addr 0x804e1364
void fn_804e1364(s32);
// @addr 0x804e140c
void fn_804e140c(s32*);
// @addr 0x804e1534
void fn_804e1534(s32);
// @addr 0x804e168c
void fn_804e168c(s32*);
// @addr 0x804e1d1c
void fn_804e1d1c(void);
// @addr 0x804e2018
void fn_804e2018(s32);
// @addr 0x804e22d4
void fn_804e22d4(s32);
// @addr 0x804e234c
void fn_804e234c(s32);
// @addr 0x804e23ac
void fn_804e23ac(s32, s32);
// @addr 0x804e2418
void fn_804e2418(s32);
// @addr 0x804e2464
void fn_804e2464(s32);
// @addr 0x804e2750
void fn_804e2750(s32, u32);
// @addr 0x804e27e0
void fn_804e27e0(s32);
// @addr 0x804e2880
void fn_804e2880(s32, u32, u32);
// @addr 0x804e28b0
void fn_804e28b0(s32, u32);
// @addr 0x804e28fc
void fn_804e28fc();
// @addr 0x804e29e0
void fn_804e29e0(s32);
// @addr 0x804e2a3c
void fn_804e2a3c(s32*);
// @addr 0x804e2bc8
void fn_804e2bc8(s32*);
// @addr 0x804e2e00
void fn_804e2e00(s32*);
// @addr 0x804e2fb0
void fn_804e2fb0(s32*);
// @addr 0x804e3154
void fn_804e3154(s32*);
// @addr 0x804e3260
void fn_804e3260(u32, s32, u32);
// @addr 0x804e32d0
void fn_804e32d0();
// @addr 0x804e33b4
void fn_804e33b4(s32);
// @addr 0x804e3410
void fn_804e3410(s32*);
// @addr 0x804e35b4
void fn_804e35b4(u32, s32, u32);
// @addr 0x804e3654
void fn_804e3654();
// @addr 0x804e3714
void fn_804e3714(s32);
// @addr 0x804e37d8
void fn_804e37d8(void);
// @addr 0x804e384c
void fn_804e384c();
// @addr 0x804e3958
void fn_804e3958(s32);
// @addr 0x804e3a5c
void fn_804e3a5c(void);
// @addr 0x804e3ab4
void fn_804e3ab4(s32*, u32);
// @addr 0x804e3b48
void fn_804e3b48(s32, u32, u32);
// @addr 0x804e3b78
void fn_804e3b78(s32, u32, u32);
// @addr 0x804e3ba8
void fn_804e3ba8(s32, u32, u32);
// @addr 0x804e3d54
void fn_804e3d54(s8*);
// @addr 0x804e3e70
void fn_804e3e70();
// @addr 0x804e3f90
void fn_804e3f90(u8*);
// @addr 0x804e3fc4
void fn_804e3fc4(s8*);
// @addr 0x804e43c8
void fn_804e43c8(s8*);
// @addr 0x804e45a4
void fn_804e45a4(s32);
// @addr 0x804e45b8
void fn_804e45b8(u8*);
// @addr 0x804e45d0
void fn_804e45d0(s32);
// @addr 0x804e45fc
void fn_804e45fc(s32);
// @addr 0x804e4620
void fn_804e4620(s32);
// @addr 0x804e4670
void fn_804e4670(s32, u32, u8, u8*);
// @addr 0x804e4a18
void fn_804e4a18();
// @addr 0x804e4dbc
void fn_804e4dbc(s32, u32, u8, u32);
// @addr 0x804e4df4
void fn_804e4df4();
// @addr 0x804e4e28
void fn_804e4e28();
// @addr 0x804e4e64
void fn_804e4e64();
// @addr 0x804e4e9c
void fn_804e4e9c(s32, u32);
// @addr 0x804e4ecc
void fn_804e4ecc(s32, u32, u32);
// @addr 0x804e4ef8
void fn_804e4ef8(u32*);
// @addr 0x804e4fec
void fn_804e4fec(u32*, u32);
// @addr 0x804e529c
void fn_804e529c(u32*, u32);
// @addr 0x804e53c4
void fn_804e53c4();
// @addr 0x804e558c
void fn_804e558c(u32*);
// @addr 0x804e56e4
void fn_804e56e4(s32);
// @addr 0x804e5950
void fn_804e5950();
// @addr 0x804e5ccc
void fn_804e5ccc(s32);
// @addr 0x804e5d38
void fn_804e5d38(s32);
// @addr 0x804e5df4
void fn_804e5df4(s32);
// @addr 0x804e5e54
void fn_804e5e54(s32);
// @addr 0x804e5ea4
void fn_804e5ea4(s32);
// @addr 0x804e5ef4
void fn_804e5ef4(s32, s32);
// @addr 0x804e5f40
void fn_804e5f40(u32*, s32);
// @addr 0x804e5f8c
void fn_804e5f8c(s32, s32);
// @addr 0x804e6240
void fn_804e6240(s32);
// @addr 0x804e6254
void fn_804e6254(s32);
// @addr 0x804e6414
void fn_804e6414(s32, s32, u32);
// @addr 0x804e6474
void fn_804e6474(s32);
// @addr 0x804e64d4
void fn_804e64d4(s32, s32);
// @addr 0x804e787c
void fn_804e787c();
// @addr 0x804e78d0
void fn_804e78d0();
// @addr 0x804e79b8
void fn_804e79b8();
// @addr 0x804e7a60
void fn_804e7a60();
// @addr 0x804e7ae0
void fn_804e7ae0();
// @addr 0x804e7b60
void fn_804e7b60();
// @addr 0x804e7be0
void fn_804e7be0();
// @addr 0x804e7c60
void fn_804e7c60();
// @addr 0x804e7ce0
void fn_804e7ce0();
// @addr 0x804e7d8c
void fn_804e7d8c();
// @addr 0x804e7dd0
void fn_804e7dd0();
// @addr 0x804e7e14
void fn_804e7e14();
// @addr 0x804e7e58
void fn_804e7e58();
// @addr 0x804e7e9c
void fn_804e7e9c();
// @addr 0x804e7ee0
void fn_804e7ee0();
// @addr 0x804e7f24
void fn_804e7f24();
// @addr 0x804e7f68
void fn_804e7f68();
// @addr 0x804e7fac
void fn_804e7fac();
// @addr 0x804e7ff0
void fn_804e7ff0();
// @addr 0x804e8034
void fn_804e8034();
// @addr 0x804e8078
void fn_804e8078();
// @addr 0x804e80bc
void fn_804e80bc();
// @addr 0x804e8100
void fn_804e8100();
// @addr 0x804e8144
void fn_804e8144();
// @addr 0x804e8188
void fn_804e8188();
// @addr 0x804e81cc
void fn_804e81cc();
// @addr 0x804e8210
void fn_804e8210();
// @addr 0x804e8254
void fn_804e8254();
// @addr 0x804e8298
void fn_804e8298();
// @addr 0x804e82dc
void fn_804e82dc();
// @addr 0x804e8320
void fn_804e8320();
// @addr 0x804e8458
void fn_804e8458();
// @addr 0x804e8494
void fn_804e8494();
// @addr 0x804e84d0
void fn_804e84d0();
// @addr 0x804e850c
void fn_804e850c(u32*);
// @addr 0x804e8574
void fn_804e8574(u32*);
// @addr 0x804e86d4
void fn_804e86d4(u32*);
// @addr 0x804e873c
void fn_804e873c(u32*);
// @addr 0x804e87a4
void fn_804e87a4();
// @addr 0x804e87e0
void fn_804e87e0();
// @addr 0x804e8860
void fn_804e8860();
// @addr 0x804e88e0
void fn_804e88e0();
// @addr 0x804e8924
void fn_804e8924();
// @addr 0x804e8968
void fn_804e8968();
// @addr 0x804e89e8
void fn_804e89e8();
// @addr 0x804e8a68
void fn_804e8a68();
// @addr 0x804e8ae8
void fn_804e8ae8();
// @addr 0x804e8b68
void fn_804e8b68();
// @addr 0x804e8be8
void fn_804e8be8();
// @addr 0x804e8c68
void fn_804e8c68(void);
// @addr 0x804e8f8c
void fn_804e8f8c(void);
// @addr 0x804e9264
void fn_804e9264();
// @addr 0x804e93d4
void fn_804e93d4();
// @addr 0x804e9548
void fn_804e9548(void);
// @addr 0x804e9884
void fn_804e9884(void);
// @addr 0x804e9b3c
void fn_804e9b3c(void);
// @addr 0x804e9dfc
void fn_804e9dfc(void);
// @addr 0x804ea24c
void fn_804ea24c(void);
// @addr 0x804ea524
void fn_804ea524();
// @addr 0x804ea5b8
void fn_804ea5b8(void);
// @addr 0x804ea870
void fn_804ea870(void);
// @addr 0x804eadc4
void fn_804eadc4(void);
// @addr 0x804eb158
void fn_804eb158();
// @addr 0x804eb260
void fn_804eb260();
// @addr 0x804eb3fc
void fn_804eb3fc(void);
// @addr 0x804eb6b4
void fn_804eb6b4(void);
// @addr 0x804eb9cc
void fn_804eb9cc(void);
// @addr 0x804ebca0
void fn_804ebca0(u32*);
// @addr 0x804ebd70
void fn_804ebd70(void);
// @addr 0x804ec028
void fn_804ec028(void);
// @addr 0x804ec370
void fn_804ec370(void);
// @addr 0x804ec688
void fn_804ec688(void);
// @addr 0x804ecb40
void fn_804ecb40(void);
// @addr 0x804eced4
void fn_804eced4();
// @addr 0x804ecfdc
void fn_804ecfdc();
// @addr 0x804ed11c
void fn_804ed11c(void);
// @addr 0x804ed5d4
void fn_804ed5d4(void);
// @addr 0x804ed968
void fn_804ed968();
// @addr 0x804eda70
void fn_804eda70();
// @addr 0x804edbb0
void fn_804edbb0(void);
// @addr 0x804ede88
void fn_804ede88(void);
// @addr 0x804ee174
void fn_804ee174(void);
// @addr 0x804ee42c
void fn_804ee42c(void);
// @addr 0x804ee6e0
void fn_804ee6e0(void);
// @addr 0x804eea14
void fn_804eea14();
// @addr 0x804eeaa8
void fn_804eeaa8(void);
// @addr 0x804eed5c
void fn_804eed5c(void);
// @addr 0x804ef010
void fn_804ef010(void);
// @addr 0x804ef2e0
void fn_804ef2e0(void);
// @addr 0x804ef590
void fn_804ef590(u32, s32);
// @addr 0x804f3280
void fn_804f3280(u32, s32);
// @addr 0x804f6fc0
void fn_804f6fc0(s32, u32, u32);
// @addr 0x804f6ff0
void fn_804f6ff0(s32, u32, u32);
// @addr 0x804f7020
void fn_804f7020(s32, u32, u32);
// @addr 0x804f7050
void fn_804f7050(s32, u32, u32);
// @addr 0x804f7080
void fn_804f7080(s32, u32, u32);
// @addr 0x804f70b0
void fn_804f70b0(s32, u32, u32);
// @addr 0x804f70e0
void fn_804f70e0(s32, u32, u32);
// @addr 0x804f7110
void fn_804f7110(s32, u32, u32);
// @addr 0x804f7140
void fn_804f7140(s32, u32, u32);
// @addr 0x804f7170
void fn_804f7170(s32, u32, u32);
// @addr 0x804f71a0
void fn_804f71a0(s32, u32, u32);
// @addr 0x804f71d0
void fn_804f71d0(s32, u32, u32);
// @addr 0x804f7200
void fn_804f7200(s32, u32, u32);
// @addr 0x804f7230
void fn_804f7230(s32, u32, u32);
// @addr 0x804f7260
void fn_804f7260(s32, u32, u32);
// @addr 0x804f7290
void fn_804f7290(s32, u32, u32);
// @addr 0x804f72c0
void fn_804f72c0(s32, u32, u32);
// @addr 0x804f72f0
void fn_804f72f0(s32, u32, u32);
// @addr 0x804f7320
void fn_804f7320(s32, u32, u32);
// @addr 0x804f7350
void fn_804f7350(s32, u32, u32);
// @addr 0x804f7380
void fn_804f7380(s32, u32, u32);
// @addr 0x804f73b0
void fn_804f73b0(s32, u32, u32);
// @addr 0x804f73e0
void fn_804f73e0(s32, u32, u32);
// @addr 0x804f7410
void fn_804f7410(s32, u32, u32);
// @addr 0x804f7440
void fn_804f7440(s32, u32, u32);
// @addr 0x804f7470
void fn_804f7470(s32, u32, u32);
// @addr 0x804f74a0
void fn_804f74a0(s32, u32, u32);
// @addr 0x804f74d0
void fn_804f74d0(s32, u32, u32);
// @addr 0x804f7500
void fn_804f7500(s32, u32, u32);
// @addr 0x804f7530
void fn_804f7530(s32, u32, u32);
// @addr 0x804f7560
void fn_804f7560(s32, u32, u32);
// @addr 0x804f7590
void fn_804f7590(s32, u32, u32);
// @addr 0x804f75c0
void fn_804f75c0(s32, u32, u32);
// @addr 0x804f75f0
void fn_804f75f0(s32, u32, u32);
// @addr 0x804f7620
void fn_804f7620(s32, u32, u32);
// @addr 0x804f7650
void fn_804f7650(s32, u32, u32);
// @addr 0x804f7680
void fn_804f7680(s32, u32);
// @addr 0x804f76b0
void fn_804f76b0(s32, u32);
// @addr 0x804f76e0
void fn_804f76e0(s32, u32);
// @addr 0x804f7710
void fn_804f7710(s32, u32);
// @addr 0x804f7740
void fn_804f7740(s32, u32);
// @addr 0x804f7770
void fn_804f7770(s32, u32);
// @addr 0x804f77a0
void fn_804f77a0(s32, u32);
// @addr 0x804f77d0
void fn_804f77d0(s32, u32);
// @addr 0x804f7800
void fn_804f7800(s32, u32);
// @addr 0x804f7830
void fn_804f7830(s32, u32);
// @addr 0x804f7860
void fn_804f7860(s32, u32);
// @addr 0x804f7890
void fn_804f7890(s32, u32);
// @addr 0x804f78c0
void fn_804f78c0(s32, u32);
// @addr 0x804f78f0
void fn_804f78f0(s32, u32);
// @addr 0x804f7920
void fn_804f7920(s32, u32);
// @addr 0x804f7950
void fn_804f7950(s32, u32);
// @addr 0x804f7980
void fn_804f7980(s32, u32);
// @addr 0x804f79b0
void fn_804f79b0(s32, u32);
// @addr 0x804f79e0
void fn_804f79e0(s32, u32);
// @addr 0x804f7a10
void fn_804f7a10(s32, u32);
// @addr 0x804f7a40
void fn_804f7a40(s32, u32);
// @addr 0x804f7a70
void fn_804f7a70(s32, u32);
// @addr 0x804f7aa0
void fn_804f7aa0(s32, u32);
// @addr 0x804f7ad0
void fn_804f7ad0(s32, u32);
// @addr 0x804f7b00
void fn_804f7b00(s32, u32);
// @addr 0x804f7b30
void fn_804f7b30(s32, u32);
// @addr 0x804f7b60
void fn_804f7b60(s32, u32);
// @addr 0x804f7b90
void fn_804f7b90(s32, u32);
// @addr 0x804f7bc0
void fn_804f7bc0(s32, u32);
// @addr 0x804f7bf0
void fn_804f7bf0(s32, u32);
// @addr 0x804f7c20
void fn_804f7c20(s32, u32);
// @addr 0x804f7e7c
void fn_804f7e7c(void);
// @addr 0x804f7eb4
void fn_804f7eb4(void);
// @addr 0x804f7f2c
void fn_804f7f2c();
// @addr 0x804f8030
void fn_804f8030(u32*);
// @addr 0x804f81c4
void fn_804f81c4(s32);
// @addr 0x804f8288
void fn_804f8288(s32*);
// @addr 0x804f83a4
void fn_804f83a4(void);
// @addr 0x804f86c8
void fn_804f86c8(u32*);
// @addr 0x804f8714
void fn_804f8714(s32*);
// @addr 0x804f8a44
void fn_804f8a44(u32*);
// @addr 0x804f8a98
void fn_804f8a98(s32*);
// @addr 0x804f8c44
void fn_804f8c44(s32, s32, u32);
// @addr 0x804f8cd0
void fn_804f8cd0(s32, s32, u32);
// @addr 0x804f8d34
void fn_804f8d34(s32, s32, u32);
// @addr 0x804f8d78
void fn_804f8d78(s32);
// @addr 0x804f8e14
void fn_804f8e14(u32);
// @addr 0x804f8e7c
void fn_804f8e7c(u32);
// @addr 0x804f8eec
void fn_804f8eec(s32);
// @addr 0x804f8ef4
void fn_804f8ef4(s32);
// @addr 0x804f8efc
void fn_804f8efc(s32*);
// @addr 0x804f9010
void fn_804f9010(u32*, s32);
// @addr 0x804f90cc
void fn_804f90cc();
// @addr 0x804f9328
void fn_804f9328();
// @addr 0x804f93f0
void fn_804f93f0(s32, u32);
// @addr 0x804f93f8
void fn_804f93f8(s32, u32);
// @addr 0x804f9400
void fn_804f9400(s32, u32);
// @addr 0x804f946c
void fn_804f946c(s32, s8, s8);
// @addr 0x804f94f0
void fn_804f94f0(s32);
// @addr 0x804f9558
void fn_804f9558(s32*, u32);
// @addr 0x804f95e0
void fn_804f95e0(s32*, u32);
// @addr 0x804f9678
void fn_804f9678();
// @addr 0x804f97d4
void fn_804f97d4();
// @addr 0x804f9a00
void fn_804f9a00(s32);
// @addr 0x804f9bec
void fn_804f9bec(s32);
// @addr 0x804f9e74
void fn_804f9e74();
// @addr 0x804f9f10
void fn_804f9f10(s32, u32);
// @addr 0x804fa1cc
void fn_804fa1cc(s32, s32);
// @addr 0x804fa3b4
void fn_804fa3b4(s32, u32);
// @addr 0x804fa54c
void fn_804fa54c();
// @addr 0x804fa768
void fn_804fa768(s32, u32, u32);
// @addr 0x804fa7d0
void fn_804fa7d0();
// @addr 0x804fa8a4
void fn_804fa8a4(void);
// @addr 0x804faa24
void fn_804faa24(s32, u32);
// @addr 0x804faa2c
void fn_804faa2c(s32, u32);
// @addr 0x804faaa8
void fn_804faaa8(void);
// @addr 0x804fab48
void fn_804fab48(s32, u32);
// @addr 0x804fabc0
void fn_804fabc0(void);
// @addr 0x804fac98
void fn_804fac98(s32, u32, s32);
// @addr 0x804fad48
void fn_804fad48();
// @addr 0x804faea4
void fn_804faea4();
// @addr 0x804fb070
void fn_804fb070(s32);
// @addr 0x804fb21c
void fn_804fb21c(s32);
// @addr 0x804fb3d0
void fn_804fb3d0();
// @addr 0x804fb4d0
void fn_804fb4d0(s32, s32);
// @addr 0x804fb530
void fn_804fb530(s32, s32);
// @addr 0x804fb688
void fn_804fb688(s32, u32);
// @addr 0x804fb77c
void fn_804fb77c(s32, s32);
// @addr 0x804fb964
void fn_804fb964(s32, u32);
// @addr 0x804fbb3c
void fn_804fbb3c(s32, u32, u32);
// @addr 0x804fbb88
void fn_804fbb88();
// @addr 0x804fbc34
void fn_804fbc34(s32);
// @addr 0x804fbca0
void fn_804fbca0(s32*);
// @addr 0x804fbe4c
void fn_804fbe4c(s32);
// @addr 0x804fbf60
void fn_804fbf60(s32*);
// @addr 0x804fc0c8
void fn_804fc0c8(s32*);
// @addr 0x804fc2ec
void fn_804fc2ec(void);
// @addr 0x804fc608
void fn_804fc608(s32);
// @addr 0x804fc8d0
void fn_804fc8d0(s32);
// @addr 0x804fca34
void fn_804fca34(s32);
// @addr 0x804fca6c
void fn_804fca6c(s32*);
// @addr 0x804fcea4
void fn_804fcea4(s32);
// @addr 0x804fcfa4
void fn_804fcfa4(s32);
// @addr 0x804fd1e0
void fn_804fd1e0(s32, u32, u32);
// @addr 0x804fd210
void fn_804fd210(s32, u32, u32);
// @addr 0x804fd240
void fn_804fd240(s32, u32);
// @addr 0x804fd298
void fn_804fd298();
// @addr 0x804fd32c
void fn_804fd32c(u32);
// @addr 0x804fd3cc
void fn_804fd3cc(s32);
// @addr 0x804fd404
void fn_804fd404(s32);
// @addr 0x804fd4b4
void fn_804fd4b4(s32);
// @addr 0x804fd4ec
void fn_804fd4ec(s32);
// @addr 0x804fd59c
void fn_804fd59c(s32);
// @addr 0x804fd5d4
void fn_804fd5d4(u32, s32, s32);
// @addr 0x804fd708
void fn_804fd708();
// @addr 0x804fd86c
void fn_804fd86c(s32);
// @addr 0x804fda64
void fn_804fda64(s32);
// @addr 0x804fdae4
void fn_804fdae4(s32);
// @addr 0x804fdb94
void fn_804fdb94(s32);
// @addr 0x804fdbe0
void fn_804fdbe0(s32);
// @addr 0x804fdc90
void fn_804fdc90(s32);
// @addr 0x804fdcc8
void fn_804fdcc8(s32*);
// @addr 0x804fde30
void fn_804fde30(void);
// @addr 0x804fe214
void fn_804fe214();
// @addr 0x804fe2d4
void fn_804fe2d4(s32);
// @addr 0x804fe398
void fn_804fe398(s32);
// @addr 0x804fe504
void fn_804fe504();
// @addr 0x804fe598
void fn_804fe598(u32);
// @addr 0x804fe638
void fn_804fe638(s32);
// @addr 0x804fe674
void fn_804fe674(s32);
// @addr 0x804fe724
void fn_804fe724(s32);
// @addr 0x804fe808
void fn_804fe808();
// @addr 0x804fe8e4
void fn_804fe8e4(s32);
// @addr 0x804fe9f8
void fn_804fe9f8(s32);
// @addr 0x804feac4
void fn_804feac4(void);
// @addr 0x804feb1c
void fn_804feb1c(s32);
// @addr 0x804fec4c
void fn_804fec4c(s32);
// @addr 0x804fed2c
void fn_804fed2c();
// @addr 0x804fee08
void fn_804fee08(s32);
// @addr 0x804fee90
void fn_804fee90(s32);
// @addr 0x804feefc
void fn_804feefc(s32);
// @addr 0x804ff06c
void fn_804ff06c(u32*);
// @addr 0x804ff0e4
void fn_804ff0e4(s32, u32, u32);
// @addr 0x804ff0f0
void fn_804ff0f0(s32, s32);
// @addr 0x804ff154
void fn_804ff154(s32*, s32, s32);
// @addr 0x804ff1e0
void fn_804ff1e0(s32*, s32, s8*);
// @addr 0x804ff2d0
void fn_804ff2d0(s32);
// @addr 0x804ff394
void fn_804ff394();
// @addr 0x804ff43c
void fn_804ff43c(s32*);
// @addr 0x804ff4c0
void fn_804ff4c0(void);
// @addr 0x804ff4c4
void fn_804ff4c4(u32*);
// @addr 0x804ff59c
void fn_804ff59c();
// @addr 0x804ff718
void fn_804ff718();
// @addr 0x804ff7a0
void fn_804ff7a0(s32);
// @addr 0x804ff7d4
void fn_804ff7d4();
// @addr 0x804ff864
void fn_804ff864();
// @addr 0x804ffa5c
void fn_804ffa5c(s32*);
// @addr 0x804ffaec
void fn_804ffaec();
// @addr 0x804ffc7c
void fn_804ffc7c(s32);
// @addr 0x804ffc84
void fn_804ffc84(s32*);
// @addr 0x804ffcc4
void fn_804ffcc4(s32*);
// @addr 0x804ffe14
void fn_804ffe14(f64, s32, f32*);
// @addr 0x804ffee8
void fn_804ffee8(s32, u32);
// @addr 0x804ffef8
void fn_804ffef8(s32, u32, u32);
// @addr 0x804fff04
void fn_804fff04();

} // namespace ArchiveExt
} // namespace EGG
