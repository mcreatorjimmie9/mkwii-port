#pragma once
// ============================================================================
// Gfx.hpp — EGG Graphics Subsystem
// Address range: 0x804a0000 - 0x804c0000
// Function count: 483
//
// GX wrappers, display lists, draw commands
//
// Categorization: GENESIS Phase 5 (Runtime Module)
// ============================================================================

#include "rk_common.h"

namespace EGG {
namespace Gfx {

// --- Non-void functions ---
// @addr 0x804a15f8
s32 fn_804a15f8(s32, s32);
// @addr 0x804a1bc0
s32 fn_804a1bc0(s32, s32);
// @addr 0x804a1d1c
u32 fn_804a1d1c(u32*);
// @addr 0x804a1db4
s32 fn_804a1db4(void);
// @addr 0x804a2360
s32 fn_804a2360(s32, s32);
// @addr 0x804a24ac
s32 fn_804a24ac(s32, s32);
// @addr 0x804a24ec
s32 fn_804a24ec(s32, s32);
// @addr 0x804a2bc4
s32 fn_804a2bc4(s32, s32);
// @addr 0x804a2d98
s32 fn_804a2d98(s32, s32);
// @addr 0x804a462c
s32 fn_804a462c(s32, u32, u8);
// @addr 0x804a5910
u32 fn_804a5910(s32*);
// @addr 0x804a5bdc
u32 fn_804a5bdc(u32, u32, f32*);
// @addr 0x804a610c
f64 fn_804a610c(void);
// @addr 0x804a6f24
s32 fn_804a6f24(s32, s32);
// @addr 0x804a6f64
s32 fn_804a6f64(s32, s32);
// @addr 0x804a6fac
u32 fn_804a6fac(u32*);
// @addr 0x804a7044
s32 fn_804a7044(void);
// @addr 0x804a7664
s32 fn_804a7664(s32, u32);
// @addr 0x804a76cc
u32 fn_804a76cc(s32);
// @addr 0x804a7724
u32 fn_804a7724(s32, u32);
// @addr 0x804a7734
u32 fn_804a7734(void);
// @addr 0x804a7850
s32 fn_804a7850(s32, s32);
// @addr 0x804a7a6c
s32 fn_804a7a6c(s32, s32);
// @addr 0x804a7dcc
u32 fn_804a7dcc(u32*);
// @addr 0x804a7ef8
s32 fn_804a7ef8(void);
// @addr 0x804a8900
u32 fn_804a8900(s32);
// @addr 0x804a8954
s32 fn_804a8954(s32, s32);
// @addr 0x804a8994
s32 fn_804a8994(s32, s32);
// @addr 0x804a8cac
s32 fn_804a8cac(s32, s32);
// @addr 0x804a8cec
s32 fn_804a8cec(s32, s32);
// @addr 0x804a8e44
u32 fn_804a8e44(s32);
// @addr 0x804a9064
s32 fn_804a9064(s32, s32);
// @addr 0x804a91d8
s32 fn_804a91d8(s32, s32);
// @addr 0x804a93f0
s32 fn_804a93f0(s32, s32);
// @addr 0x804a98ac
s32 fn_804a98ac(s32, s32);
// @addr 0x804aa340
u32 fn_804aa340(s32);
// @addr 0x804aa958
s32 fn_804aa958(s32, s32);
// @addr 0x804aaabc
s32 fn_804aaabc(s32, s32);
// @addr 0x804ab770
s32 fn_804ab770(s32, s32);
// @addr 0x804ab7c8
s32 fn_804ab7c8(s32, s32);
// @addr 0x804ab820
s32 fn_804ab820(s32, s32);
// @addr 0x804ac540
s32 fn_804ac540(s32, s32);
// @addr 0x804acc24
s32 fn_804acc24(s32, s32);
// @addr 0x804ad524
s32 fn_804ad524(s32, s32);
// @addr 0x804adb0c
u32 fn_804adb0c(s32);
// @addr 0x804ae1cc
u32 fn_804ae1cc(s32*, s32);
// @addr 0x804ae32c
s32 fn_804ae32c(s32, s32);
// @addr 0x804ae9bc
u32 fn_804ae9bc(u32, s32*);
// @addr 0x804aea34
u32 fn_804aea34(s32, u32);
// @addr 0x804aed24
s32 fn_804aed24(s32, s32);
// @addr 0x804aee50
s32 fn_804aee50(s32, s32);
// @addr 0x804af924
s32 fn_804af924(s32, s32);
// @addr 0x804b0fa8
s32 fn_804b0fa8(s32, s32);
// @addr 0x804b23d8
u32 fn_804b23d8(u32, s32);
// @addr 0x804b2654
s32 fn_804b2654(s32, s32);
// @addr 0x804b2af8
s32 fn_804b2af8(s32, s32);
// @addr 0x804b3688
u32 fn_804b3688(s32);
// @addr 0x804b38a8
s32 fn_804b38a8(s32, s32);
// @addr 0x804b3ae8
u32 fn_804b3ae8(u32*);
// @addr 0x804b40d8
u32 fn_804b40d8(s32);
// @addr 0x804b4118
u32 fn_804b4118(s32);
// @addr 0x804b4158
s32 fn_804b4158(s32);
// @addr 0x804b4c1c
s32 fn_804b4c1c(s32, s32);
// @addr 0x804b4fd0
u32 fn_804b4fd0(s32);
// @addr 0x804b65ec
s32 fn_804b65ec(s32, s32);
// @addr 0x804b6694
s32 fn_804b6694(s32, s32);
// @addr 0x804b67fc
s32 fn_804b67fc(s32, s32);
// @addr 0x804b7164
s32 fn_804b7164(s32, s32);
// @addr 0x804b8500
u32 fn_804b8500(u32*);
// @addr 0x804b8e7c
s32 fn_804b8e7c(s32, s32);
// @addr 0x804b8f04
s32 fn_804b8f04(s32, s32);
// @addr 0x804b8f44
s32 fn_804b8f44(s32, s32);
// @addr 0x804b8f84
s32 fn_804b8f84(s32, s32);
// @addr 0x804b8fc4
u32 fn_804b8fc4(s32);
// @addr 0x804b924c
u32 fn_804b924c(s32*);
// @addr 0x804b935c
u32 fn_804b935c(s32*, s32*);
// @addr 0x804b9444
s32 fn_804b9444(s32*);
// @addr 0x804b94e0
u32 fn_804b94e0(s32*, s32*);
// @addr 0x804b96fc
s32 fn_804b96fc(s32*, s32*);
// @addr 0x804b97f8
s32 fn_804b97f8(s32, u32);
// @addr 0x804b9814
s32 fn_804b9814(s32, u32);
// @addr 0x804b984c
u32 fn_804b984c(s32, u32);
// @addr 0x804b9884
u32 fn_804b9884(s32, u32);
// @addr 0x804b98d0
u8 fn_804b98d0(s32);
// @addr 0x804b9cc8
u32 fn_804b9cc8(s32*, u32);
// @addr 0x804ba7d4
s32 fn_804ba7d4(s32, s32);
// @addr 0x804bb32c
u32 fn_804bb32c(s32);
// @addr 0x804bc110
s32 fn_804bc110(s32*, s32*);
// @addr 0x804bc1a0
u32 fn_804bc1a0(s32);
// @addr 0x804bc4d0
s32 fn_804bc4d0(s32, s32);
// @addr 0x804bc998
s32 fn_804bc998(s32, s32);
// @addr 0x804bda88
s32 fn_804bda88(s32, s32);
// @addr 0x804be1fc
s32 fn_804be1fc(s32, s32);
// @addr 0x804be934
s32 fn_804be934(s32, s32);
// @addr 0x804bef7c
u32 fn_804bef7c(u32*);
// @addr 0x804bfae4
u32 fn_804bfae4(s32);

// --- Void functions ---
// @addr 0x804a00c4
void fn_804a00c4(void);
// @addr 0x804a0430
void fn_804a0430();
// @addr 0x804a0aa0
void fn_804a0aa0();
// @addr 0x804a1134
void fn_804a1134();
// @addr 0x804a1220
void fn_804a1220(s32*, f32*, u32);
// @addr 0x804a12d0
void fn_804a12d0();
// @addr 0x804a135c
void fn_804a135c();
// @addr 0x804a1394
void fn_804a1394(u32*);
// @addr 0x804a1434
void fn_804a1434();
// @addr 0x804a14a8
void fn_804a14a8(void);
// @addr 0x804a1598
void fn_804a1598(u32, s32);
// @addr 0x804a1638
void fn_804a1638(void, void);
// @addr 0x804a18d4
void fn_804a18d4();
// @addr 0x804a1afc
void fn_804a1afc();
// @addr 0x804a1b6c
void fn_804a1b6c();
// @addr 0x804a1c18
void fn_804a1c18(u32, s32*, s32, s32);
// @addr 0x804a1e74
void fn_804a1e74(void);
// @addr 0x804a1ea8
void fn_804a1ea8(s32);
// @addr 0x804a1f3c
void fn_804a1f3c();
// @addr 0x804a1fd8
void fn_804a1fd8(s32);
// @addr 0x804a1fe0
void fn_804a1fe0(s32);
// @addr 0x804a1fe8
void fn_804a1fe8(s32);
// @addr 0x804a20b8
void fn_804a20b8(s32);
// @addr 0x804a2188
void fn_804a2188();
// @addr 0x804a22b8
void fn_804a22b8(u32, u32, u32);
// @addr 0x804a2310
void fn_804a2310(void);
// @addr 0x804a252c
void fn_804a252c(s32);
// @addr 0x804a25d0
void fn_804a25d0(s32, s32);
// @addr 0x804a267c
void fn_804a267c(s32);
// @addr 0x804a26b0
void fn_804a26b0(s32);
// @addr 0x804a2784
void fn_804a2784(s32, s32);
// @addr 0x804a2834
void fn_804a2834(s32);
// @addr 0x804a2a78
void fn_804a2a78(s32);
// @addr 0x804a2c04
void fn_804a2c04(void);
// @addr 0x804a2d3c
void fn_804a2d3c(s32);
// @addr 0x804a2df0
void fn_804a2df0(s32);
// @addr 0x804a2e38
void fn_804a2e38(s32*);
// @addr 0x804a2f1c
void fn_804a2f1c(s32*);
// @addr 0x804a2f68
void fn_804a2f68();
// @addr 0x804a38b8
void fn_804a38b8(s32*);
// @addr 0x804a3a88
void fn_804a3a88(s32*, u32, s8);
// @addr 0x804a3cf4
void fn_804a3cf4();
// @addr 0x804a3f10
void fn_804a3f10();
// @addr 0x804a44cc
void fn_804a44cc(s32*, s32);
// @addr 0x804a4688
void fn_804a4688(s32);
// @addr 0x804a46e0
void fn_804a46e0(s32);
// @addr 0x804a4840
void fn_804a4840();
// @addr 0x804a4ccc
void fn_804a4ccc(s32*);
// @addr 0x804a4f14
void fn_804a4f14();
// @addr 0x804a5140
void fn_804a5140(s32, u32);
// @addr 0x804a51a0
void fn_804a51a0();
// @addr 0x804a5324
void fn_804a5324();
// @addr 0x804a54d4
void fn_804a54d4();
// @addr 0x804a5820
void fn_804a5820(u32, f32*, f32*);
// @addr 0x804a58f0
void fn_804a58f0(f64, u32*, u32*);
// @addr 0x804a59dc
void fn_804a59dc();
// @addr 0x804a5b3c
void fn_804a5b3c();
// @addr 0x804a5ce8
void fn_804a5ce8(void);
// @addr 0x804a5eac
void fn_804a5eac(u32*, s32, s32, f32*);
// @addr 0x804a5f8c
void fn_804a5f8c(u32*, s32, s32, f32*);
// @addr 0x804a604c
void fn_804a604c(void);
// @addr 0x804a6148
void fn_804a6148();
// @addr 0x804a635c
void fn_804a635c(s32, u32);
// @addr 0x804a64d4
void fn_804a64d4(s32*);
// @addr 0x804a6624
void fn_804a6624(s32);
// @addr 0x804a66e0
void fn_804a66e0(s32);
// @addr 0x804a6968
void fn_804a6968(s32);
// @addr 0x804a6a04
void fn_804a6a04(void);
// @addr 0x804a6b6c
void fn_804a6b6c();
// @addr 0x804a6d64
void fn_804a6d64(void);
// @addr 0x804a70d4
void fn_804a70d4(void);
// @addr 0x804a7108
void fn_804a7108(s32);
// @addr 0x804a716c
void fn_804a716c();
// @addr 0x804a7284
void fn_804a7284(s32);
// @addr 0x804a72d8
void fn_804a72d8(s32, u8);
// @addr 0x804a7530
void fn_804a7530(s32);
// @addr 0x804a7584
void fn_804a7584(s32, u32);
// @addr 0x804a75d8
void fn_804a75d8(s32);
// @addr 0x804a75f0
void fn_804a75f0(s32);
// @addr 0x804a7608
void fn_804a7608(s32);
// @addr 0x804a7620
void fn_804a7620(s32, u32);
// @addr 0x804a762c
void fn_804a762c(s32);
// @addr 0x804a7644
void fn_804a7644(s32);
// @addr 0x804a765c
void fn_804a765c(s32);
// @addr 0x804a77f4
void fn_804a77f4();
// @addr 0x804a78a8
void fn_804a78a8(s32);
// @addr 0x804a794c
void fn_804a794c(s32);
// @addr 0x804a79a8
void fn_804a79a8(s32, s32);
// @addr 0x804a7a14
void fn_804a7a14();
// @addr 0x804a7ac4
void fn_804a7ac4(s32);
// @addr 0x804a7b2c
void fn_804a7b2c();
// @addr 0x804a7b7c
void fn_804a7b7c(s32);
// @addr 0x804a7bbc
void fn_804a7bbc(s32);
// @addr 0x804a7d44
void fn_804a7d44();
// @addr 0x804a7d88
void fn_804a7d88(s32);
// @addr 0x804a7f98
void fn_804a7f98(void);
// @addr 0x804a804c
void fn_804a804c();
// @addr 0x804a80f0
void fn_804a80f0(void);
// @addr 0x804a8164
void fn_804a8164(s32, s8);
// @addr 0x804a82dc
void fn_804a82dc(void);
// @addr 0x804a83a8
void fn_804a83a8(void);
// @addr 0x804a847c
void fn_804a847c(s32, s32);
// @addr 0x804a8694
void fn_804a8694(s32, s32);
// @addr 0x804a87f8
void fn_804a87f8(s32);
// @addr 0x804a889c
void fn_804a889c(void);
// @addr 0x804a8aac
void fn_804a8aac(s32);
// @addr 0x804a8b1c
void fn_804a8b1c();
// @addr 0x804a8c1c
void fn_804a8c1c(s32, s32);
// @addr 0x804a8d30
void fn_804a8d30(s32);
// @addr 0x804a8d8c
void fn_804a8d8c(s32);
// @addr 0x804a8de8
void fn_804a8de8(s32);
// @addr 0x804a8eac
void fn_804a8eac(u32);
// @addr 0x804a8f00
void fn_804a8f00(s32);
// @addr 0x804a8fe8
void fn_804a8fe8(s32, s32);
// @addr 0x804a9020
void fn_804a9020();
// @addr 0x804a90cc
void fn_804a90cc(s32);
// @addr 0x804a9164
void fn_804a9164(s32);
// @addr 0x804a9170
void fn_804a9170();
// @addr 0x804a926c
void fn_804a926c(s32);
// @addr 0x804a9378
void fn_804a9378();
// @addr 0x804a9448
void fn_804a9448();
// @addr 0x804a9504
void fn_804a9504(s32);
// @addr 0x804a96a0
void fn_804a96a0(s32);
// @addr 0x804a96f0
void fn_804a96f0(s32);
// @addr 0x804a97a4
void fn_804a97a4();
// @addr 0x804a9914
void fn_804a9914();
// @addr 0x804a9b1c
void fn_804a9b1c(s32, s32*);
// @addr 0x804a9ec4
void fn_804a9ec4(s32, u32, u32);
// @addr 0x804a9edc
void fn_804a9edc(s32, u32);
// @addr 0x804a9ee4
void fn_804a9ee4(s32, u32);
// @addr 0x804a9eec
void fn_804a9eec(s32, u32);
// @addr 0x804a9f40
void fn_804a9f40(s32, u32);
// @addr 0x804a9f54
void fn_804a9f54(s32);
// @addr 0x804a9fd0
void fn_804a9fd0(s32, u32);
// @addr 0x804a9fdc
void fn_804a9fdc(s32);
// @addr 0x804aa194
void fn_804aa194(s32);
// @addr 0x804aa384
void fn_804aa384(s32);
// @addr 0x804aa3f8
void fn_804aa3f8(s32*, u32);
// @addr 0x804aa52c
void fn_804aa52c(s32*, s32);
// @addr 0x804aa754
void fn_804aa754(s32*, u32, u32);
// @addr 0x804aa82c
void fn_804aa82c(s32, u32);
// @addr 0x804aa844
void fn_804aa844();
// @addr 0x804aaa24
void fn_804aaa24(s32, u32, u32);
// @addr 0x804aaa80
void fn_804aaa80();
// @addr 0x804aab14
void fn_804aab14(s32);
// @addr 0x804aabd0
void fn_804aabd0(s32);
// @addr 0x804aaca4
void fn_804aaca4(s32);
// @addr 0x804ab03c
void fn_804ab03c(s32);
// @addr 0x804ab298
void fn_804ab298(s32);
// @addr 0x804ab4cc
void fn_804ab4cc(s32);
// @addr 0x804ab5c8
void fn_804ab5c8();
// @addr 0x804ab904
void fn_804ab904(void);
// @addr 0x804abf90
void fn_804abf90(s32);
// @addr 0x804abfe8
void fn_804abfe8(s32*, s32);
// @addr 0x804ac5f0
void fn_804ac5f0(s32);
// @addr 0x804ac908
void fn_804ac908(s32);
// @addr 0x804ac960
void fn_804ac960(s32*, s32);
// @addr 0x804acab4
void fn_804acab4();
// @addr 0x804accd4
void fn_804accd4(s32);
// @addr 0x804acf44
void fn_804acf44(s32);
// @addr 0x804acfac
void fn_804acfac(s32*, s32);
// @addr 0x804ad280
void fn_804ad280(s32, u32, u32);
// @addr 0x804ad2b0
void fn_804ad2b0(s32, u32, u32);
// @addr 0x804ad2e0
void fn_804ad2e0(s32, u32, u32);
// @addr 0x804ad310
void fn_804ad310(s32, u32);
// @addr 0x804ad340
void fn_804ad340(s32, u32);
// @addr 0x804ad370
void fn_804ad370(s32, u32);
// @addr 0x804ad3cc
void fn_804ad3cc();
// @addr 0x804ad5c4
void fn_804ad5c4(s32);
// @addr 0x804ad798
void fn_804ad798(s32);
// @addr 0x804ad828
void fn_804ad828(s32);
// @addr 0x804ad8b4
void fn_804ad8b4(s32);
// @addr 0x804ad8bc
void fn_804ad8bc(s32);
// @addr 0x804ad8c4
void fn_804ad8c4(s32);
// @addr 0x804ad8cc
void fn_804ad8cc(s32, u32);
// @addr 0x804ad948
void fn_804ad948(s32, u32);
// @addr 0x804ad9c4
void fn_804ad9c4(s32);
// @addr 0x804ada7c
void fn_804ada7c(s32, u32, u32);
// @addr 0x804adaac
void fn_804adaac(s32, u32);
// @addr 0x804adaf0
void fn_804adaf0(u32*);
// @addr 0x804adb6c
void fn_804adb6c(s32, s32, s32);
// @addr 0x804add2c
void fn_804add2c(s32, u32, s32);
// @addr 0x804adee8
void fn_804adee8(s32*, s32, u32, u32);
// @addr 0x804adf10
void fn_804adf10(s32*);
// @addr 0x804adf74
void fn_804adf74(s32*);
// @addr 0x804adfe4
void fn_804adfe4(s32*);
// @addr 0x804ae054
void fn_804ae054(s32, u32);
// @addr 0x804ae168
void fn_804ae168(s32*);
// @addr 0x804ae1dc
void fn_804ae1dc(s32*, s32*);
// @addr 0x804ae324
void fn_804ae324(u32*, u32);
// @addr 0x804ae36c
void fn_804ae36c(s32*, u32, u32);
// @addr 0x804ae58c
void fn_804ae58c(s32*, u32);
// @addr 0x804ae640
void fn_804ae640(void);
// @addr 0x804ae924
void fn_804ae924();
// @addr 0x804aeab4
void fn_804aeab4(s32*, s32);
// @addr 0x804aeb7c
void fn_804aeb7c(s32*, s32);
// @addr 0x804aec5c
void fn_804aec5c(u32*, u32, s32);
// @addr 0x804aed04
void fn_804aed04(u32*);
// @addr 0x804aed64
void fn_804aed64(f64, f32*);
// @addr 0x804aed7c
void fn_804aed7c(f32*);
// @addr 0x804aee0c
void fn_804aee0c();
// @addr 0x804aeea8
void fn_804aeea8(s32, u32);
// @addr 0x804aef34
void fn_804aef34();
// @addr 0x804af1b4
void fn_804af1b4();
// @addr 0x804af4b8
void fn_804af4b8(s32);
// @addr 0x804af568
void fn_804af568(s32);
// @addr 0x804af618
void fn_804af618();
// @addr 0x804af8a0
void fn_804af8a0();
// @addr 0x804af98c
void fn_804af98c(s32);
// @addr 0x804afa08
void fn_804afa08(s32*);
// @addr 0x804afbd0
void fn_804afbd0(s32);
// @addr 0x804b0248
void fn_804b0248(s32*);
// @addr 0x804b0918
void fn_804b0918(s32);
// @addr 0x804b0b38
void fn_804b0b38(s32*);
// @addr 0x804b0cf8
void fn_804b0cf8(void);
// @addr 0x804b0d68
void fn_804b0d68(void);
// @addr 0x804b1084
void fn_804b1084(s32);
// @addr 0x804b1358
void fn_804b1358(s32);
// @addr 0x804b14a8
void fn_804b14a8(s32);
// @addr 0x804b14e8
void fn_804b14e8(s32);
// @addr 0x804b1828
void fn_804b1828(s32);
// @addr 0x804b1914
void fn_804b1914(s32);
// @addr 0x804b19f8
void fn_804b19f8(s32);
// @addr 0x804b1ad8
void fn_804b1ad8(s32*, u32);
// @addr 0x804b1ca4
void fn_804b1ca4(s32*, u32);
// @addr 0x804b1ffc
void fn_804b1ffc(s32*);
// @addr 0x804b20f8
void fn_804b20f8(s32*, u32);
// @addr 0x804b2208
void fn_804b2208(void);
// @addr 0x804b2488
void fn_804b2488(s32*);
// @addr 0x804b2580
void fn_804b2580();
// @addr 0x804b26f8
void fn_804b26f8(s32);
// @addr 0x804b2898
void fn_804b2898(s32);
// @addr 0x804b28dc
void fn_804b28dc(s32, u32);
// @addr 0x804b2920
void fn_804b2920(s32, u32);
// @addr 0x804b2998
void fn_804b2998(s32, u32, u32);
// @addr 0x804b29c8
void fn_804b29c8(s32, u32, u32);
// @addr 0x804b29f8
void fn_804b29f8(s32, u32, u32);
// @addr 0x804b2a28
void fn_804b2a28(s32, u32);
// @addr 0x804b2a58
void fn_804b2a58(s32, u32);
// @addr 0x804b2ab4
void fn_804b2ab4();
// @addr 0x804b2b50
void fn_804b2b50(void);
// @addr 0x804b2e5c
void fn_804b2e5c(s32);
// @addr 0x804b2fac
void fn_804b2fac(void);
// @addr 0x804b3624
void fn_804b3624(u32*);
// @addr 0x804b36fc
void fn_804b36fc(s32);
// @addr 0x804b3794
void fn_804b3794(s32);
// @addr 0x804b3864
void fn_804b3864();
// @addr 0x804b3910
void fn_804b3910(s32);
// @addr 0x804b3990
void fn_804b3990();
// @addr 0x804b3b6c
void fn_804b3b6c(s32, s32);
// @addr 0x804b3fb0
void fn_804b3fb0(s32, u32);
// @addr 0x804b4024
void fn_804b4024(s32);
// @addr 0x804b41b8
void fn_804b41b8(void);
// @addr 0x804b4340
void fn_804b4340(s32);
// @addr 0x804b4528
void fn_804b4528(s32);
// @addr 0x804b462c
void fn_804b462c(s32);
// @addr 0x804b47d8
void fn_804b47d8(s32, u32);
// @addr 0x804b48b0
void fn_804b48b0(s32);
// @addr 0x804b4960
void fn_804b4960(s32, u32, s32);
// @addr 0x804b4a3c
void fn_804b4a3c(s32, u32);
// @addr 0x804b4b14
void fn_804b4b14(s32, u32);
// @addr 0x804b4be0
void fn_804b4be0();
// @addr 0x804b4c74
void fn_804b4c74(s32, u32, u32, u32);
// @addr 0x804b4cfc
void fn_804b4cfc(s32);
// @addr 0x804b4d80
void fn_804b4d80(s32, u32);
// @addr 0x804b4de0
void fn_804b4de0(s32, u8);
// @addr 0x804b4e2c
void fn_804b4e2c(s32);
// @addr 0x804b4e80
void fn_804b4e80(s32, u32, u32);
// @addr 0x804b4ecc
void fn_804b4ecc(u32*);
// @addr 0x804b5040
void fn_804b5040(void);
// @addr 0x804b50e8
void fn_804b50e8(void);
// @addr 0x804b5164
void fn_804b5164(u32*, u32);
// @addr 0x804b5280
void fn_804b5280();
// @addr 0x804b634c
void fn_804b634c(u32);
// @addr 0x804b6388
void fn_804b6388(u32*);
// @addr 0x804b6490
void fn_804b6490();
// @addr 0x804b662c
void fn_804b662c(s32, u32, s32, u16);
// @addr 0x804b66d4
void fn_804b66d4(s32, s32, s32, s32, u16);
// @addr 0x804b683c
void fn_804b683c(s32);
// @addr 0x804b6b18
void fn_804b6b18(s32, void);
// @addr 0x804b6c00
void fn_804b6c00(s32, void);
// @addr 0x804b6d64
void fn_804b6d64(u32*, s32, s32);
// @addr 0x804b71a4
void fn_804b71a4(void);
// @addr 0x804b74f4
void fn_804b74f4(u32*, s32);
// @addr 0x804b7630
void fn_804b7630(void);
// @addr 0x804b78a4
void fn_804b78a4(s32*, void);
// @addr 0x804b7b04
void fn_804b7b04(s32);
// @addr 0x804b7b9c
void fn_804b7b9c(s32, u32);
// @addr 0x804b7bf4
void fn_804b7bf4();
// @addr 0x804b8254
void fn_804b8254(s32);
// @addr 0x804b8388
void fn_804b8388(u32*, s32*, s32);
// @addr 0x804b84b4
void fn_804b84b4(void);
// @addr 0x804b8570
void fn_804b8570(u32, u32);
// @addr 0x804b85c4
void fn_804b85c4(u32, u32, u32);
// @addr 0x804b86b4
void fn_804b86b4(s32, u32, u32);
// @addr 0x804b8794
void fn_804b8794(void);
// @addr 0x804b88ac
void fn_804b88ac();
// @addr 0x804b8944
void fn_804b8944(void);
// @addr 0x804b8994
void fn_804b8994(void);
// @addr 0x804b8a24
void fn_804b8a24(void);
// @addr 0x804b8cd8
void fn_804b8cd8(void);
// @addr 0x804b8d84
void fn_804b8d84(u32, u32);
// @addr 0x804b8e08
void fn_804b8e08(u32);
// @addr 0x804b8ebc
void fn_804b8ebc(s32);
// @addr 0x804b9028
void fn_804b9028(u32*);
// @addr 0x804b9138
void fn_804b9138(s32);
// @addr 0x804b91e8
void fn_804b91e8(s32);
// @addr 0x804b9684
void fn_804b9684(s32, u32);
// @addr 0x804b98ec
void fn_804b98ec(s32);
// @addr 0x804b9914
void fn_804b9914(s32);
// @addr 0x804b9960
void fn_804b9960(s32);
// @addr 0x804b9988
void fn_804b9988(s32);
// @addr 0x804b99d4
void fn_804b99d4(s32*);
// @addr 0x804ba0e0
void fn_804ba0e0(s32*);
// @addr 0x804ba130
void fn_804ba130(s32*);
// @addr 0x804ba23c
void fn_804ba23c(s32*);
// @addr 0x804ba2a0
void fn_804ba2a0(void);
// @addr 0x804ba3e4
void fn_804ba3e4(s32*);
// @addr 0x804ba458
void fn_804ba458(s32*);
// @addr 0x804ba640
void fn_804ba640(s32);
// @addr 0x804ba6f0
void fn_804ba6f0();
// @addr 0x804ba790
void fn_804ba790();
// @addr 0x804ba82c
void fn_804ba82c(void);
// @addr 0x804ba904
void fn_804ba904(s32, u32);
// @addr 0x804baae0
void fn_804baae0(s32);
// @addr 0x804babdc
void fn_804babdc(void);
// @addr 0x804bafac
void fn_804bafac(s32);
// @addr 0x804bb0a4
void fn_804bb0a4(void);
// @addr 0x804bb14c
void fn_804bb14c(void);
// @addr 0x804bb3f0
void fn_804bb3f0(void);
// @addr 0x804bb7b8
void fn_804bb7b8(s32);
// @addr 0x804bb9d8
void fn_804bb9d8(s32);
// @addr 0x804bbaf4
void fn_804bbaf4(void);
// @addr 0x804bbb94
void fn_804bbb94(s32);
// @addr 0x804bbc10
void fn_804bbc10(s32, u32);
// @addr 0x804bbc8c
void fn_804bbc8c(s32, s32*);
// @addr 0x804bbdd4
void fn_804bbdd4(s32, u32);
// @addr 0x804bbe68
void fn_804bbe68(s32);
// @addr 0x804bbf98
void fn_804bbf98(s32);
// @addr 0x804bc2b4
void fn_804bc2b4(s32, s32);
// @addr 0x804bc37c
void fn_804bc37c(s32);
// @addr 0x804bc494
void fn_804bc494();
// @addr 0x804bc528
void fn_804bc528(void);
// @addr 0x804bc630
void fn_804bc630(s32, s32);
// @addr 0x804bc79c
void fn_804bc79c(u32);
// @addr 0x804bc7e0
void fn_804bc7e0(void);
// @addr 0x804bca78
void fn_804bca78(void);
// @addr 0x804bcf84
void fn_804bcf84(s32);
// @addr 0x804bd0ac
void fn_804bd0ac(s32);
// @addr 0x804bd3f4
void fn_804bd3f4(s32, u32, u32);
// @addr 0x804bd5fc
void fn_804bd5fc(s32, u32);
// @addr 0x804bd890
void fn_804bd890(s32, u32);
// @addr 0x804bd8d4
void fn_804bd8d4(s32, u32);
// @addr 0x804bd930
void fn_804bd930();
// @addr 0x804bdb28
void fn_804bdb28(s32);
// @addr 0x804bdcc4
void fn_804bdcc4(s32);
// @addr 0x804bdd94
void fn_804bdd94(s32);
// @addr 0x804bde4c
void fn_804bde4c(s32);
// @addr 0x804bdf20
void fn_804bdf20(s32*, u32);
// @addr 0x804be114
void fn_804be114(s32, u32);
// @addr 0x804be188
void fn_804be188();
// @addr 0x804be28c
void fn_804be28c(s32);
// @addr 0x804be388
void fn_804be388(s32);
// @addr 0x804be478
void fn_804be478(void);
// @addr 0x804be5dc
void fn_804be5dc(void);
// @addr 0x804be8f0
void fn_804be8f0();
// @addr 0x804be99c
void fn_804be99c(s32);
// @addr 0x804bea08
void fn_804bea08(s32);
// @addr 0x804bed74
void fn_804bed74(s32, u32, u32);
// @addr 0x804beda4
void fn_804beda4(s32, u32, u32);
// @addr 0x804bedd4
void fn_804bedd4(s32, u32, u32);
// @addr 0x804bee04
void fn_804bee04(s32, u32, u32);
// @addr 0x804bee34
void fn_804bee34(s32, u32);
// @addr 0x804bee64
void fn_804bee64(s32, u32);
// @addr 0x804bee94
void fn_804bee94(s32, u32);
// @addr 0x804beefc
void fn_804beefc(u32*);
// @addr 0x804bf048
void fn_804bf048(s32);
// @addr 0x804bf2c0
void fn_804bf2c0();
// @addr 0x804bf3cc
void fn_804bf3cc();
// @addr 0x804bf4d8
void fn_804bf4d8(s32);
// @addr 0x804bf900
void fn_804bf900();
// @addr 0x804bfa0c
void fn_804bfa0c(s32, s32, s32);
// @addr 0x804bfa90
void fn_804bfa90(s32);
// @addr 0x804bfac4
void fn_804bfac4(s32, s32);
// @addr 0x804bfb58
void fn_804bfb58(s32, u32, u8);
// @addr 0x804bfc5c
void fn_804bfc5c(s32, u32);
// @addr 0x804bfdc8
void fn_804bfdc8(s32, s32, s32, s32);

} // namespace Gfx
} // namespace EGG
