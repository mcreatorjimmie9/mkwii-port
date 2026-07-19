#pragma once
// ============================================================================
// System.hpp — EGG System Manager Subsystem
// Address range: 0x805e0000 - 0x80600000
// Function count: 411
//
// System init, OS config, global state
//
// Categorization: GENESIS Phase 5 (Runtime Module)
// ============================================================================

#include "rk_common.h"

namespace EGG {
namespace System {

// --- Non-void functions ---
// @addr 0x805e02a0
s32 fn_805e02a0(s32, s32);
// @addr 0x805e0494
u32 fn_805e0494(u32*);
// @addr 0x805e0aac
s32 fn_805e0aac(s32, s32);
// @addr 0x805e12f8
s32 fn_805e12f8(s32, s32);
// @addr 0x805e13d8
s32 fn_805e13d8(s32, s32);
// @addr 0x805e17e8
u32 fn_805e17e8(u32*);
// @addr 0x805e184c
s32 fn_805e184c(s32, s32);
// @addr 0x805e2064
u32 fn_805e2064(u32*);
// @addr 0x805e2920
s32 fn_805e2920(s32, s32);
// @addr 0x805e2cbc
s32 fn_805e2cbc(s32, s32);
// @addr 0x805e2e0c
u32 fn_805e2e0c(u32*);
// @addr 0x805e33f8
u32 fn_805e33f8(s32, u32, u32, s32);
// @addr 0x805e5e2c
s32 fn_805e5e2c(s32, s32);
// @addr 0x805e6584
u32 fn_805e6584(u32*);
// @addr 0x805e661c
s32 fn_805e661c(void);
// @addr 0x805e6804
f64 fn_805e6804(u32, s8, u32);
// @addr 0x805e68e4
s32 fn_805e68e4(s32, s32);
// @addr 0x805e6924
s32 fn_805e6924(s32, s32);
// @addr 0x805e6964
s32 fn_805e6964(s32, s32);
// @addr 0x805e72b0
s32 fn_805e72b0(u32, u32*, u32*, s32);
// @addr 0x805e7538
u32 fn_805e7538(u32*);
// @addr 0x805e76d8
s32 fn_805e76d8(void);
// @addr 0x805e7984
s32 fn_805e7984(s32, s32);
// @addr 0x805e79c4
u32 fn_805e79c4(s32);
// @addr 0x805e7a18
u32 fn_805e7a18(s32);
// @addr 0x805e7c60
u32 fn_805e7c60(s32, s32, void);
// @addr 0x805e7eb0
u32 fn_805e7eb0(s32, u32, s32);
// @addr 0x805e7fbc
u32 fn_805e7fbc(s32, s32, s32);
// @addr 0x805e8118
u32 fn_805e8118(s32, u16);
// @addr 0x805e8220
u32 fn_805e8220(u32, s32*);
// @addr 0x805e877c
s32 fn_805e877c(s32);
// @addr 0x805e8990
u32 fn_805e8990(s32);
// @addr 0x805e8a74
u32 fn_805e8a74(u32*);
// @addr 0x805e8ba0
s32 fn_805e8ba0(void);
// @addr 0x805e9064
u32 fn_805e9064(u32*);
// @addr 0x805e9190
s32 fn_805e9190(void);
// @addr 0x805e94e0
u32 fn_805e94e0(s32);
// @addr 0x805e981c
u32 fn_805e981c(s32);
// @addr 0x805ea9f0
s32 fn_805ea9f0(void);
// @addr 0x805eac68
s32 fn_805eac68(s32, s32);
// @addr 0x805ebcd8
u32 fn_805ebcd8(s32, s32);
// @addr 0x805ecb18
s32 fn_805ecb18(s32, s32, s32);
// @addr 0x805ecc1c
u32 fn_805ecc1c(u32*);
// @addr 0x805ecd54
s32 fn_805ecd54(void);
// @addr 0x805ecfe4
u32 fn_805ecfe4(u32*);
// @addr 0x805ed1d8
s32 fn_805ed1d8(s32, s32);
// @addr 0x805ed378
u32 fn_805ed378(u32*);
// @addr 0x805ed448
u32 fn_805ed448(u32*);
// @addr 0x805ed9fc
s32 fn_805ed9fc(s32, s32);
// @addr 0x805edc74
s32 fn_805edc74(s32, s32);
// @addr 0x805edcb4
u32 fn_805edcb4(s32);
// @addr 0x805edd28
s32 fn_805edd28(s32, s32);
// @addr 0x805eddb0
u32 fn_805eddb0(s32);
// @addr 0x805ee2d8
u32 fn_805ee2d8(s32, u32);
// @addr 0x805ee448
u32 fn_805ee448(s32, u32);
// @addr 0x805ee5a4
u32 fn_805ee5a4(s32, u32);
// @addr 0x805ee850
u32 fn_805ee850(s32, u32, u32);
// @addr 0x805eeaa4
u32 fn_805eeaa4(u64, s32*, s32);
// @addr 0x805eebe4
u32 fn_805eebe4(s32, s32);
// @addr 0x805eeef4
u32 fn_805eeef4(s32, u32);
// @addr 0x805eef80
u32 fn_805eef80(s32, u32);
// @addr 0x805ef0cc
u32 fn_805ef0cc(s32, u32, s32);
// @addr 0x805ef160
u32 fn_805ef160(s32, u32, s32);
// @addr 0x805ef2b0
u32 fn_805ef2b0(s32, s32);
// @addr 0x805ef398
u32 fn_805ef398(s32, s32);
// @addr 0x805ef59c
u32 fn_805ef59c(s32, u32, s32);
// @addr 0x805ef604
u32 fn_805ef604(s32, u32, s32);
// @addr 0x805ef710
u32 fn_805ef710(s32, u32);
// @addr 0x805ef79c
u32 fn_805ef79c(s32, u32);
// @addr 0x805ef8e8
u32 fn_805ef8e8(s32, u32, s32);
// @addr 0x805ef97c
u32 fn_805ef97c(s32, u32, s32);
// @addr 0x805efacc
s32 fn_805efacc(s32, s32);
// @addr 0x805efdc8
s32 fn_805efdc8(s32, s32);
// @addr 0x805effe0
u32 fn_805effe0(void);
// @addr 0x805f00d0
s32 fn_805f00d0(s32);
// @addr 0x805f0140
s32 fn_805f0140(s32, s32);
// @addr 0x805f0dc8
u32 fn_805f0dc8(s32*, s32);
// @addr 0x805f1880
s32 fn_805f1880(s32, s32);
// @addr 0x805f18c0
u32 fn_805f18c0(s32);
// @addr 0x805f1934
s32 fn_805f1934(s32, s32);
// @addr 0x805f1a60
u32 fn_805f1a60(s32, s32);
// @addr 0x805f1c90
u32 fn_805f1c90(s32, u32);
// @addr 0x805f1d9c
u32 fn_805f1d9c(s32, s32);
// @addr 0x805f1f28
u32 fn_805f1f28(s32, s32);
// @addr 0x805f2094
u32 fn_805f2094(u64, s32*, s32);
// @addr 0x805f2190
u32 fn_805f2190(u64, s32*, s32);
// @addr 0x805f2378
u32 fn_805f2378(s32);
// @addr 0x805f23ec
s32 fn_805f23ec(s32, s32);
// @addr 0x805f2494
u32 fn_805f2494(s32, u32);
// @addr 0x805f258c
u32 fn_805f258c(s32, u32);
// @addr 0x805f2680
u32 fn_805f2680(u64, s32*, s32);
// @addr 0x805f273c
u32 fn_805f273c(s32, s32);
// @addr 0x805f2868
u32 fn_805f2868(s32, u32, u32);
// @addr 0x805f295c
u32 fn_805f295c(s32, u32, u32);
// @addr 0x805f2bc8
u32 fn_805f2bc8(s32, u32, u32);
// @addr 0x805f2cbc
u32 fn_805f2cbc(s32, u32, u32);
// @addr 0x805f2e88
u32 fn_805f2e88(s32, u32);
// @addr 0x805f2f14
u32 fn_805f2f14(s32, u32);
// @addr 0x805f3060
u32 fn_805f3060(s32, u32, s32);
// @addr 0x805f30f4
u32 fn_805f30f4(s32, u32, s32);
// @addr 0x805f3244
u32 fn_805f3244(s32, s32);
// @addr 0x805f332c
u32 fn_805f332c(s32, s32);
// @addr 0x805f3530
u32 fn_805f3530(s32, u32, s32);
// @addr 0x805f3598
u32 fn_805f3598(s32, u32, s32);
// @addr 0x805f36a4
u32 fn_805f36a4(s32, u32);
// @addr 0x805f3730
u32 fn_805f3730(s32, u32);
// @addr 0x805f387c
u32 fn_805f387c(s32, u32, s32);
// @addr 0x805f3910
u32 fn_805f3910(s32, u32, s32);
// @addr 0x805f3a60
u32 fn_805f3a60(s32, u32);
// @addr 0x805f3aec
u32 fn_805f3aec(s32, u32);
// @addr 0x805f3c38
u32 fn_805f3c38(s32, u32, s32);
// @addr 0x805f3ccc
u32 fn_805f3ccc(s32, u32, s32);
// @addr 0x805f3e1c
u32 fn_805f3e1c(s32, s32);
// @addr 0x805f3f04
u32 fn_805f3f04(s32, s32);
// @addr 0x805f4108
u32 fn_805f4108(s32, u32, s32);
// @addr 0x805f4170
u32 fn_805f4170(s32, u32, s32);
// @addr 0x805f427c
u32 fn_805f427c(s32, u32);
// @addr 0x805f4308
u32 fn_805f4308(s32, u32);
// @addr 0x805f4454
u32 fn_805f4454(s32, u32, s32);
// @addr 0x805f44e8
u32 fn_805f44e8(s32, u32, s32);
// @addr 0x805f4638
s32 fn_805f4638(s32, s32);
// @addr 0x805f46c4
s32 fn_805f46c4(s32, s32);
// @addr 0x805f48e8
s32 fn_805f48e8(s32, s32);
// @addr 0x805f4a5c
s32 fn_805f4a5c(s32, s32);
// @addr 0x805f573c
u32 fn_805f573c(s32, s32);
// @addr 0x805f69b0
u32 fn_805f69b0(s32, s32, u32);
// @addr 0x805f6a34
u32 fn_805f6a34(s32, s32, u32);
// @addr 0x805fa234
s32 fn_805fa234(s32, s32);
// @addr 0x805fa274
s32 fn_805fa274(s32, s32);
// @addr 0x805fc004
s32 fn_805fc004(void);
// @addr 0x805fc078
s32 fn_805fc078(s32, s32);
// @addr 0x805fc7f0
u32 fn_805fc7f0(void);
// @addr 0x805fcacc
s32 fn_805fcacc(void);
// @addr 0x805fcea4
s32 fn_805fcea4(s32, s32);
// @addr 0x805fcee4
u32 fn_805fcee4(s32);
// @addr 0x805fdc64
u32 fn_805fdc64(s32);
// @addr 0x805fdd28
u32 fn_805fdd28(s32);
// @addr 0x805fdd9c
u32 fn_805fdd9c(s32);
// @addr 0x805fe7bc
s32 fn_805fe7bc(s32);
// @addr 0x805feaa4
u8 fn_805feaa4(s32);
// @addr 0x805ffecc
u32 fn_805ffecc(u32*);
// @addr 0x805ffff8
s32 fn_805ffff8(void);

// --- Void functions ---
// @addr 0x805e0044
void fn_805e0044();
// @addr 0x805e02e8
void fn_805e02e8(u32*);
// @addr 0x805e0510
void fn_805e0510();
// @addr 0x805e07e8
void fn_805e07e8(s32);
// @addr 0x805e0888
void fn_805e0888(u32*, u32);
// @addr 0x805e0960
void fn_805e0960(s32);
// @addr 0x805e0af8
void fn_805e0af8(u32*, s32*);
// @addr 0x805e0c28
void fn_805e0c28(s32*);
// @addr 0x805e0d40
void fn_805e0d40(s32*);
// @addr 0x805e10f4
void fn_805e10f4(s32);
// @addr 0x805e119c
void fn_805e119c(s32);
// @addr 0x805e1368
void fn_805e1368();
// @addr 0x805e1418
void fn_805e1418(s32);
// @addr 0x805e1528
void fn_805e1528(s32);
// @addr 0x805e1594
void fn_805e1594(u32*, s32*);
// @addr 0x805e1604
void fn_805e1604();
// @addr 0x805e16bc
void fn_805e16bc(void);
// @addr 0x805e1920
void fn_805e1920(s32);
// @addr 0x805e1cec
void fn_805e1cec(s32);
// @addr 0x805e1d3c
void fn_805e1d3c(s32);
// @addr 0x805e1eb4
void fn_805e1eb4(u32);
// @addr 0x805e1f08
void fn_805e1f08(u32*);
// @addr 0x805e20e0
void fn_805e20e0(u32*, u32);
// @addr 0x805e21f8
void fn_805e21f8();
// @addr 0x805e2294
void fn_805e2294(s32);
// @addr 0x805e2300
void fn_805e2300(s32*);
// @addr 0x805e2424
void fn_805e2424();
// @addr 0x805e25b4
void fn_805e25b4(s32);
// @addr 0x805e2620
void fn_805e2620(s32*, s32*);
// @addr 0x805e26b8
void fn_805e26b8(s32);
// @addr 0x805e276c
void fn_805e276c(s32*);
// @addr 0x805e2968
void fn_805e2968(u32*, u32);
// @addr 0x805e2a68
void fn_805e2a68(s32*);
// @addr 0x805e2aa4
void fn_805e2aa4(s32*);
// @addr 0x805e2cfc
void fn_805e2cfc(u32*, u32);
// @addr 0x805e2e70
void fn_805e2e70();
// @addr 0x805e31c4
void fn_805e31c4(s32);
// @addr 0x805e355c
void fn_805e355c();
// @addr 0x805e3730
void fn_805e3730();
// @addr 0x805e3a48
void fn_805e3a48();
// @addr 0x805e3e10
void fn_805e3e10(s32);
// @addr 0x805e3ed0
void fn_805e3ed0(s32);
// @addr 0x805e4234
void fn_805e4234(s32);
// @addr 0x805e4398
void fn_805e4398();
// @addr 0x805e4420
void fn_805e4420();
// @addr 0x805e47f4
void fn_805e47f4(s32);
// @addr 0x805e48d0
void fn_805e48d0(void);
// @addr 0x805e4bac
void fn_805e4bac();
// @addr 0x805e4d9c
void fn_805e4d9c();
// @addr 0x805e4fb8
void fn_805e4fb8();
// @addr 0x805e54a4
void fn_805e54a4();
// @addr 0x805e55dc
void fn_805e55dc(s32);
// @addr 0x805e56d8
void fn_805e56d8();
// @addr 0x805e577c
void fn_805e577c();
// @addr 0x805e583c
void fn_805e583c(s32);
// @addr 0x805e59cc
void fn_805e59cc(s32);
// @addr 0x805e5a48
void fn_805e5a48();
// @addr 0x805e5b98
void fn_805e5b98();
// @addr 0x805e5c6c
void fn_805e5c6c(s32);
// @addr 0x805e5d34
void fn_805e5d34(s32);
// @addr 0x805e5e9c
void fn_805e5e9c(u32);
// @addr 0x805e5f14
void fn_805e5f14();
// @addr 0x805e60c4
void fn_805e60c4();
// @addr 0x805e6234
void fn_805e6234();
// @addr 0x805e6450
void fn_805e6450();
// @addr 0x805e66ec
void fn_805e66ec(void);
// @addr 0x805e6880
void fn_805e6880(void);
// @addr 0x805e6a0c
void fn_805e6a0c();
// @addr 0x805e7228
void fn_805e7228();
// @addr 0x805e7780
void fn_805e7780(void);
// @addr 0x805e78fc
void fn_805e78fc(void);
// @addr 0x805e7b48
void fn_805e7b48();
// @addr 0x805e7e7c
void fn_805e7e7c(s32, u32, u32);
// @addr 0x805e819c
void fn_805e819c(s32);
// @addr 0x805e81a8
void fn_805e81a8(s32);
// @addr 0x805e8420
void fn_805e8420();
// @addr 0x805e85c4
void fn_805e85c4();
// @addr 0x805e86bc
void fn_805e86bc();
// @addr 0x805e8808
void fn_805e8808(void);
// @addr 0x805e880c
void fn_805e880c();
// @addr 0x805e89e4
void fn_805e89e4(s32);
// @addr 0x805e8c48
void fn_805e8c48(void);
// @addr 0x805e8cfc
void fn_805e8cfc();
// @addr 0x805e8dc4
void fn_805e8dc4();
// @addr 0x805e8f04
void fn_805e8f04(s32);
// @addr 0x805e8f5c
void fn_805e8f5c(f64, s32, s32, u32);
// @addr 0x805e8fa0
void fn_805e8fa0();
// @addr 0x805e9238
void fn_805e9238(void);
// @addr 0x805e92ec
void fn_805e92ec();
// @addr 0x805e9390
void fn_805e9390(s32, s32*, u32, u8);
// @addr 0x805e9558
void fn_805e9558(void);
// @addr 0x805e96e4
void fn_805e96e4(s32);
// @addr 0x805e973c
void fn_805e973c(u32, s32);
// @addr 0x805e97b0
void fn_805e97b0(s32);
// @addr 0x805e9870
void fn_805e9870(s32);
// @addr 0x805e9bec
void fn_805e9bec(void);
// @addr 0x805e9c64
void fn_805e9c64(void);
// @addr 0x805e9f98
void fn_805e9f98(u32*, u32);
// @addr 0x805ea0ec
void fn_805ea0ec();
// @addr 0x805ea434
void fn_805ea434(s32*);
// @addr 0x805ea4cc
void fn_805ea4cc(f64, s32);
// @addr 0x805ea57c
void fn_805ea57c();
// @addr 0x805ea690
void fn_805ea690(f64, s32*);
// @addr 0x805ea778
void fn_805ea778(f64, f64, s32);
// @addr 0x805ea858
void fn_805ea858();
// @addr 0x805eaa9c
void fn_805eaa9c();
// @addr 0x805eabe8
void fn_805eabe8(void);
// @addr 0x805eaca8
void fn_805eaca8();
// @addr 0x805eadc8
void fn_805eadc8(s32, u32);
// @addr 0x805eadfc
void fn_805eadfc(s32);
// @addr 0x805eae14
void fn_805eae14(s32);
// @addr 0x805eaf4c
void fn_805eaf4c(s32);
// @addr 0x805eaf68
void fn_805eaf68(s32);
// @addr 0x805ebeac
void fn_805ebeac(s32, s32, u32);
// @addr 0x805ebee0
void fn_805ebee0(s32, s32, s32);
// @addr 0x805ec0d8
void fn_805ec0d8(void);
// @addr 0x805ec174
void fn_805ec174(s32);
// @addr 0x805ec1e4
void fn_805ec1e4();
// @addr 0x805ec694
void fn_805ec694(s32);
// @addr 0x805ec75c
void fn_805ec75c(u32*);
// @addr 0x805ec7e8
void fn_805ec7e8();
// @addr 0x805ec8a8
void fn_805ec8a8(s32, s32);
// @addr 0x805ec950
void fn_805ec950();
// @addr 0x805ece24
void fn_805ece24(void);
// @addr 0x805ecf40
void fn_805ecf40(u32*);
// @addr 0x805ed050
void fn_805ed050();
// @addr 0x805ed134
void fn_805ed134(s32, u32);
// @addr 0x805ed17c
void fn_805ed17c(s32);
// @addr 0x805ed218
void fn_805ed218(s32);
// @addr 0x805ed2ec
void fn_805ed2ec(s32);
// @addr 0x805ed3d0
void fn_805ed3d0(s32);
// @addr 0x805ed574
void fn_805ed574(void);
// @addr 0x805ed660
void fn_805ed660(void);
// @addr 0x805ed714
void fn_805ed714(void);
// @addr 0x805ed7e4
void fn_805ed7e4();
// @addr 0x805ed8ac
void fn_805ed8ac(void);
// @addr 0x805eda3c
void fn_805eda3c(s32, u32*);
// @addr 0x805edad4
void fn_805edad4(void);
// @addr 0x805edb4c
void fn_805edb4c(s32);
// @addr 0x805edb70
void fn_805edb70(u32);
// @addr 0x805ede50
void fn_805ede50(f64, s32);
// @addr 0x805edec8
void fn_805edec8(s32*);
// @addr 0x805edf14
void fn_805edf14();
// @addr 0x805edf90
void fn_805edf90(u32);
// @addr 0x805ee0b8
void fn_805ee0b8();
// @addr 0x805ee17c
void fn_805ee17c(s32*);
// @addr 0x805ee1c4
void fn_805ee1c4(s32, s32*, u32);
// @addr 0x805ee714
void fn_805ee714(u32);
// @addr 0x805ee83c
void fn_805ee83c(s32*, u32);
// @addr 0x805ee8c4
void fn_805ee8c4(s32*, u32, u32);
// @addr 0x805ee8dc
void fn_805ee8dc();
// @addr 0x805eedf8
void fn_805eedf8(s32, u32);
// @addr 0x805eee90
void fn_805eee90(s32, u32, u32);
// @addr 0x805ef00c
void fn_805ef00c(void);
// @addr 0x805ef1f4
void fn_805ef1f4(void);
// @addr 0x805ef480
void fn_805ef480(void);
// @addr 0x805ef66c
void fn_805ef66c(void);
// @addr 0x805ef828
void fn_805ef828(void);
// @addr 0x805efa10
void fn_805efa10(void);
// @addr 0x805efb94
void fn_805efb94();
// @addr 0x805efe10
void fn_805efe10(s32);
// @addr 0x805efecc
void fn_805efecc(s32);
// @addr 0x805eff44
void fn_805eff44(u32, u32);
// @addr 0x805f0068
void fn_805f0068(void);
// @addr 0x805f006c
void fn_805f006c(s32*, s32);
// @addr 0x805f00c8
void fn_805f00c8(s32);
// @addr 0x805f00ec
void fn_805f00ec();
// @addr 0x805f0180
void fn_805f0180(s32, s32*, u32);
// @addr 0x805f01fc
void fn_805f01fc();
// @addr 0x805f07a0
void fn_805f07a0();
// @addr 0x805f0bc0
void fn_805f0bc0();
// @addr 0x805f11c4
void fn_805f11c4(void);
// @addr 0x805f16ac
void fn_805f16ac();
// @addr 0x805f17d8
void fn_805f17d8(u32);
// @addr 0x805f22d0
void fn_805f22d0(u32);
// @addr 0x805f28dc
void fn_805f28dc();
// @addr 0x805f29d0
void fn_805f29d0();
// @addr 0x805f2a50
void fn_805f2a50(s32);
// @addr 0x805f2b00
void fn_805f2b00(s32, u32, u32);
// @addr 0x805f2b64
void fn_805f2b64(s32, u32);
// @addr 0x805f2c3c
void fn_805f2c3c();
// @addr 0x805f2d30
void fn_805f2d30();
// @addr 0x805f2db0
void fn_805f2db0(s32);
// @addr 0x805f2e24
void fn_805f2e24(s32, u32, u32);
// @addr 0x805f2fa0
void fn_805f2fa0(void);
// @addr 0x805f3188
void fn_805f3188(void);
// @addr 0x805f3414
void fn_805f3414(void);
// @addr 0x805f3600
void fn_805f3600(void);
// @addr 0x805f37bc
void fn_805f37bc(void);
// @addr 0x805f39a4
void fn_805f39a4(void);
// @addr 0x805f3b78
void fn_805f3b78(void);
// @addr 0x805f3d60
void fn_805f3d60(void);
// @addr 0x805f3fec
void fn_805f3fec(void);
// @addr 0x805f41d8
void fn_805f41d8(void);
// @addr 0x805f4394
void fn_805f4394(void);
// @addr 0x805f457c
void fn_805f457c(void);
// @addr 0x805f4928
void fn_805f4928(u32);
// @addr 0x805f4ae8
void fn_805f4ae8();
// @addr 0x805f4c30
void fn_805f4c30(s32);
// @addr 0x805f4d44
void fn_805f4d44(s32);
// @addr 0x805f4dcc
void fn_805f4dcc(s32*);
// @addr 0x805f5540
void fn_805f5540(s32*);
// @addr 0x805f5678
void fn_805f5678(s32, u32);
// @addr 0x805f59d4
void fn_805f59d4();
// @addr 0x805f6240
void fn_805f6240(s32, u32);
// @addr 0x805f62a8
void fn_805f62a8(s32*);
// @addr 0x805f6444
void fn_805f6444(s32*);
// @addr 0x805f65e0
void fn_805f65e0();
// @addr 0x805f68a8
void fn_805f68a8(s32*, s32);
// @addr 0x805f6ac0
void fn_805f6ac0(s32*);
// @addr 0x805f6d0c
void fn_805f6d0c(s32*);
// @addr 0x805f6f20
void fn_805f6f20(s32*);
// @addr 0x805f6fd4
void fn_805f6fd4(s32*);
// @addr 0x805f707c
void fn_805f707c();
// @addr 0x805f7204
void fn_805f7204(s32*, s32*);
// @addr 0x805f73a0
void fn_805f73a0(s32*, s32*);
// @addr 0x805f74f4
void fn_805f74f4(s32*, s32, s32, s32, s32);
// @addr 0x805f86c8
void fn_805f86c8(s32*);
// @addr 0x805f8798
void fn_805f8798(s32*);
// @addr 0x805f87f8
void fn_805f87f8(s32*);
// @addr 0x805f894c
void fn_805f894c(s32*);
// @addr 0x805f8b8c
void fn_805f8b8c(s32);
// @addr 0x805f8f14
void fn_805f8f14(s32);
// @addr 0x805f9508
void fn_805f9508();
// @addr 0x805f9b64
void fn_805f9b64(u32, s32*);
// @addr 0x805f9c60
void fn_805f9c60();
// @addr 0x805f9f64
void fn_805f9f64(s32);
// @addr 0x805f9fe0
void fn_805f9fe0(s32*);
// @addr 0x805fa084
void fn_805fa084(s32*, s32);
// @addr 0x805fa188
void fn_805fa188(u32);
// @addr 0x805fa304
void fn_805fa304(s32*);
// @addr 0x805fa434
void fn_805fa434(s32, s32*, u32);
// @addr 0x805fa4a4
void fn_805fa4a4(s32, u32);
// @addr 0x805fa4fc
void fn_805fa4fc();
// @addr 0x805fb074
void fn_805fb074();
// @addr 0x805fb388
void fn_805fb388();
// @addr 0x805fb544
void fn_805fb544(s32*);
// @addr 0x805fbd70
void fn_805fbd70();
// @addr 0x805fbeb4
void fn_805fbeb4();
// @addr 0x805fc0b8
void fn_805fc0b8();
// @addr 0x805fc1bc
void fn_805fc1bc();
// @addr 0x805fc294
void fn_805fc294(s32);
// @addr 0x805fc2ec
void fn_805fc2ec(void);
// @addr 0x805fc30c
void fn_805fc30c(s32);
// @addr 0x805fc4ac
void fn_805fc4ac(s32, s32);
// @addr 0x805fc4c4
void fn_805fc4c4(s32);
// @addr 0x805fc678
void fn_805fc678(s32);
// @addr 0x805fc810
void fn_805fc810(s32, s32);
// @addr 0x805fcb1c
void fn_805fcb1c(void);
// @addr 0x805fcc84
void fn_805fcc84(void);
// @addr 0x805fcffc
void fn_805fcffc(s32);
// @addr 0x805fd1a8
void fn_805fd1a8(s32);
// @addr 0x805fd29c
void fn_805fd29c();
// @addr 0x805fd69c
void fn_805fd69c(s32, s32*);
// @addr 0x805fd794
void fn_805fd794(void);
// @addr 0x805fd8f8
void fn_805fd8f8(void);
// @addr 0x805fda14
void fn_805fda14(u32);
// @addr 0x805fdaa0
void fn_805fdaa0(s32);
// @addr 0x805fdb10
void fn_805fdb10(s32);
// @addr 0x805fde58
void fn_805fde58();
// @addr 0x805fdf5c
void fn_805fdf5c(void);
// @addr 0x805fe010
void fn_805fe010(f64, s32);
// @addr 0x805fe0c0
void fn_805fe0c0(s32, s32);
// @addr 0x805feb3c
void fn_805feb3c(s32);
// @addr 0x805febd0
void fn_805febd0();
// @addr 0x805ff0d8
void fn_805ff0d8(s32);
// @addr 0x805ff154
void fn_805ff154();
// @addr 0x805ffd50
void fn_805ffd50(s32, u32);
// @addr 0x805ffdf0
void fn_805ffdf0(s32);

} // namespace System
} // namespace EGG
