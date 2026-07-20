#pragma once
// ============================================================================
// Animation.hpp — EGG Animation Subsystem
// Address range: 0x80560000 - 0x80580000
// Function count: 335
//
// Skeletal/vertex animation, anim blending
//
// Categorization: GENESIS Phase 5 (Runtime Module)
// ============================================================================

#include "rk_common.h"

namespace EGG {
namespace Animation {

// --- Non-void functions ---
// @addr 0x805603d8
bool fn_805603d8(s32, u32, u32, u32);
// @addr 0x80560528
bool fn_80560528(s32, s32, u32, u32);
// @addr 0x80560678
bool fn_80560678(s32, u32, u32, u32);
// @addr 0x80560e54
u32 fn_80560e54(s32, u8*);
// @addr 0x80560f94
u32 fn_80560f94(s32, s32, s32, u32);
// @addr 0x80561298
u32 fn_80561298(u32, u32, s32);
// @addr 0x80561374
u32 fn_80561374(u32, s32, u32, s32);
// @addr 0x80561420
u32 fn_80561420(s32);
// @addr 0x8056149c
u32 fn_8056149c(s32);
// @addr 0x80561844
u32 fn_80561844(s32, u32);
// @addr 0x80561a68
u32 fn_80561a68(u32, u32, u32);
// @addr 0x80561b6c
u32 fn_80561b6c(s32);
// @addr 0x80562410
u32 fn_80562410(void);
// @addr 0x805624bc
u32 fn_805624bc(s32, u32);
// @addr 0x80562b84
u32 fn_80562b84(void);
// @addr 0x80562d20
u32 fn_80562d20(s32);
// @addr 0x80562e84
s32 fn_80562e84(s32, s32);
// @addr 0x8056319c
u32 fn_8056319c(s32);
// @addr 0x805631a8
u32 fn_805631a8(s32, u16*);
// @addr 0x805632ac
u32 fn_805632ac(s32);
// @addr 0x805632b8
u32 fn_805632b8(s32);
// @addr 0x80563b64
u32 fn_80563b64(u32*);
// @addr 0x80563b6c
u32 fn_80563b6c(s32);
// @addr 0x80563b74
u32 fn_80563b74(s32);
// @addr 0x80563f20
u32 fn_80563f20(u32*, s32*, u32);
// @addr 0x80564fb4
u32 fn_80564fb4(u32*);
// @addr 0x80567350
s32 fn_80567350(s32, s32);
// @addr 0x80567780
s32 fn_80567780(s32, s32);
// @addr 0x80567dd0
s32 fn_80567dd0(s32, s32);
// @addr 0x80568570
s32 fn_80568570(s32, s32);
// @addr 0x80568910
u32 fn_80568910(s32);
// @addr 0x80568dd4
bool fn_80568dd4(s32);
// @addr 0x80568e0c
bool fn_80568e0c(s32);
// @addr 0x805691a4
u32 fn_805691a4(s32);
// @addr 0x80569c60
s32 fn_80569c60(s32, s32);
// @addr 0x8056a510
u32 fn_8056a510(u32*);
// @addr 0x8056a85c
s32 fn_8056a85c(s32, s32);
// @addr 0x8056afa0
s32 fn_8056afa0(s32, s32);
// @addr 0x8056b70c
s32 fn_8056b70c(s32, s32);
// @addr 0x8056d934
u8 fn_8056d934(s32, s8);
// @addr 0x8056de48
s32 fn_8056de48(s32, s32);
// @addr 0x8056df9c
s32 fn_8056df9c(s32, s32);
// @addr 0x8056dfdc
s32 fn_8056dfdc(s32, s32);
// @addr 0x8056e714
s32 fn_8056e714(s32, s32);
// @addr 0x8056e754
s32 fn_8056e754(s32, s32);
// @addr 0x8056e794
u32 fn_8056e794(u32*);
// @addr 0x8056e7f8
s32 fn_8056e7f8(s32, s32);
// @addr 0x8056f7d0
s32 fn_8056f7d0(s32);
// @addr 0x8056f868
f64 fn_8056f868(s32, s32);
// @addr 0x805701c0
u32 fn_805701c0(s32);
// @addr 0x805702f4
s32 fn_805702f4(s32*);
// @addr 0x80570348
s32 fn_80570348(s32*);
// @addr 0x8057039c
s32 fn_8057039c(s32*);
// @addr 0x805710dc
f64 fn_805710dc(s32);
// @addr 0x80571440
s32 fn_80571440(s32, s32);
// @addr 0x805725b8
s32 fn_805725b8(s32, s32);
// @addr 0x80576d94
u32 fn_80576d94(u32*);
// @addr 0x80577418
s32 fn_80577418(s32, s32);
// @addr 0x80577988
f64 fn_80577988(s32*);
// @addr 0x80577c1c
u32 fn_80577c1c(u32*);
// @addr 0x805780c4
s32 fn_805780c4(s32, s32);
// @addr 0x80578810
u32 fn_80578810(u32*);
// @addr 0x8057b780
u32 fn_8057b780(u32*);
// @addr 0x8057bbfc
u32 fn_8057bbfc(u32*);
// @addr 0x8057c07c
u32 fn_8057c07c(u32*);
// @addr 0x8057c7d0
u32 fn_8057c7d0(u32*);
// @addr 0x8057ce4c
s32 fn_8057ce4c(s32, s32);
// @addr 0x8057e448
u32 fn_8057e448(void);
// @addr 0x8057e454
u32 fn_8057e454(s32);
// @addr 0x8057e460
s32 fn_8057e460(s32, s32);
// @addr 0x8057e4a0
u32 fn_8057e4a0(s32);

// --- Void functions ---
// @addr 0x8056020c
void fn_8056020c(s32, u32, u32, u32);
// @addr 0x8056037c
void fn_8056037c(s32);
// @addr 0x805607c8
void fn_805607c8(s32, u32, s32, u32);
// @addr 0x8056093c
void fn_8056093c(s32, s32, u32);
// @addr 0x80560a90
void fn_80560a90(s32, u32, u32, u32);
// @addr 0x80560c10
void fn_80560c10(void);
// @addr 0x805610d0
void fn_805610d0(void);
// @addr 0x80561168
void fn_80561168(void);
// @addr 0x80561508
void fn_80561508(u32, u32);
// @addr 0x80561574
void fn_80561574(void);
// @addr 0x805615c4
void fn_805615c4();
// @addr 0x8056170c
void fn_8056170c();
// @addr 0x80561d90
void fn_80561d90(void);
// @addr 0x80561e68
void fn_80561e68(s32);
// @addr 0x8056200c
void fn_8056200c(u32, u32);
// @addr 0x80562060
void fn_80562060(u32, u32);
// @addr 0x80562184
void fn_80562184();
// @addr 0x80562784
void fn_80562784(u32, u32);
// @addr 0x805628a8
void fn_805628a8(s32*, s32);
// @addr 0x80562a18
void fn_80562a18(void);
// @addr 0x80562a6c
void fn_80562a6c(void);
// @addr 0x80562bc4
void fn_80562bc4(void);
// @addr 0x80562c10
void fn_80562c10();
// @addr 0x80562ff0
void fn_80562ff0(s32, s32, s32);
// @addr 0x80563240
void fn_80563240(void);
// @addr 0x805632cc
void fn_805632cc(s32, s32, u32);
// @addr 0x80563b58
void fn_80563b58(u32*);
// @addr 0x80563b7c
void fn_80563b7c(s32*);
// @addr 0x80563cbc
void fn_80563cbc(u32*, u32);
// @addr 0x80563d04
void fn_80563d04(u32*, s32, u8, u32);
// @addr 0x80563d80
void fn_80563d80(void);
// @addr 0x80563fec
void fn_80563fec();
// @addr 0x80564094
void fn_80564094();
// @addr 0x805641bc
void fn_805641bc(s32, u32, u32, u32);
// @addr 0x80564248
void fn_80564248(s32, u32, u32);
// @addr 0x805642cc
void fn_805642cc();
// @addr 0x805643c8
void fn_805643c8();
// @addr 0x805644a0
void fn_805644a0(s32, u32);
// @addr 0x80564530
void fn_80564530(s32, u32, u32);
// @addr 0x80564624
void fn_80564624(u32, u32, s32, s32);
// @addr 0x805646bc
void fn_805646bc(u32, u32, s32, s32);
// @addr 0x805647a0
void fn_805647a0(s32, s32*, s32*);
// @addr 0x805648ec
void fn_805648ec(s32, s32*, s32);
// @addr 0x80564998
void fn_80564998(s32, s32*, s32);
// @addr 0x80564b18
void fn_80564b18(u32, u32);
// @addr 0x80564bd4
void fn_80564bd4(s32, s32*, s32);
// @addr 0x80564c54
void fn_80564c54(u32, s32, s32);
// @addr 0x80564cc0
void fn_80564cc0(u32, s32, s32);
// @addr 0x80564d38
void fn_80564d38(u32, u32, s32);
// @addr 0x80564de0
void fn_80564de0(s32, s32, s32);
// @addr 0x80564ec8
void fn_80564ec8(void);
// @addr 0x80564fbc
void fn_80564fbc(void);
// @addr 0x8056507c
void fn_8056507c();
// @addr 0x8056518c
void fn_8056518c(void);
// @addr 0x805652f0
void fn_805652f0(void);
// @addr 0x80565364
void fn_80565364(void);
// @addr 0x805653e8
void fn_805653e8(void);
// @addr 0x805654b4
void fn_805654b4();
// @addr 0x805657d0
void fn_805657d0(void);
// @addr 0x80565888
void fn_80565888(void);
// @addr 0x80565908
void fn_80565908(u32, u32, u32);
// @addr 0x80565960
void fn_80565960(void);
// @addr 0x805659b8
void fn_805659b8(void);
// @addr 0x80565b90
void fn_80565b90();
// @addr 0x80565d48
void fn_80565d48(void);
// @addr 0x805660d0
void fn_805660d0();
// @addr 0x80566294
void fn_80566294(void);
// @addr 0x8056651c
void fn_8056651c();
// @addr 0x805666e0
void fn_805666e0();
// @addr 0x805668c4
void fn_805668c4();
// @addr 0x80566aa8
void fn_80566aa8(void);
// @addr 0x80566bb4
void fn_80566bb4();
// @addr 0x80566dd8
void fn_80566dd8(void);
// @addr 0x80566ee4
void fn_80566ee4();
// @addr 0x80567228
void fn_80567228();
// @addr 0x805673f0
void fn_805673f0(s32);
// @addr 0x8056757c
void fn_8056757c(s32);
// @addr 0x8056760c
void fn_8056760c(s32);
// @addr 0x805676a0
void fn_805676a0(s32*, s32);
// @addr 0x805677e8
void fn_805677e8(s32);
// @addr 0x8056785c
void fn_8056785c(u32);
// @addr 0x8056792c
void fn_8056792c(s32*);
// @addr 0x80567cdc
void fn_80567cdc();
// @addr 0x80567e6c
void fn_80567e6c(s32);
// @addr 0x80567f78
void fn_80567f78(s32);
// @addr 0x805680f8
void fn_805680f8(s32);
// @addr 0x805682d4
void fn_805682d4(s32);
// @addr 0x8056833c
void fn_8056833c(void);
// @addr 0x805683a8
void fn_805683a8(s32, u32, u32);
// @addr 0x805683d8
void fn_805683d8(s32, u32);
// @addr 0x80568408
void fn_80568408(s32, u32);
// @addr 0x80568458
void fn_80568458();
// @addr 0x80568610
void fn_80568610(s32);
// @addr 0x8056879c
void fn_8056879c(s32);
// @addr 0x80568808
void fn_80568808(s32*, s32);
// @addr 0x805688b4
void fn_805688b4(u32*);
// @addr 0x80568984
void fn_80568984(void);
// @addr 0x80568adc
void fn_80568adc(s32);
// @addr 0x80568bd4
void fn_80568bd4(s32);
// @addr 0x80568c6c
void fn_80568c6c(s32);
// @addr 0x80568cdc
void fn_80568cdc(s32, s32);
// @addr 0x80568d3c
void fn_80568d3c(s32, s32);
// @addr 0x80568e40
void fn_80568e40();
// @addr 0x80568f24
void fn_80568f24(s32, u32);
// @addr 0x80568f94
void fn_80568f94(void);
// @addr 0x80569288
void fn_80569288(s32);
// @addr 0x80569560
void fn_80569560(s32);
// @addr 0x80569740
void fn_80569740(s32);
// @addr 0x805698a4
void fn_805698a4(s32, s32);
// @addr 0x8056999c
void fn_8056999c(s32);
// @addr 0x80569aa8
void fn_80569aa8(s32);
// @addr 0x80569bb0
void fn_80569bb0(u32, u32);
// @addr 0x80569c14
void fn_80569c14();
// @addr 0x80569cd4
void fn_80569cd4(s32);
// @addr 0x80569d70
void fn_80569d70(s32*);
// @addr 0x80569eac
void fn_80569eac(s32*);
// @addr 0x8056a2c8
void fn_8056a2c8(s32);
// @addr 0x8056a3e8
void fn_8056a3e8(s32, u32, u32);
// @addr 0x8056a418
void fn_8056a418(s32, u32, u32);
// @addr 0x8056a448
void fn_8056a448(s32, u32, u32);
// @addr 0x8056a478
void fn_8056a478(s32, u32);
// @addr 0x8056a4a8
void fn_8056a4a8(s32, u32);
// @addr 0x8056a504
void fn_8056a504(u32*);
// @addr 0x8056a520
void fn_8056a520(void);
// @addr 0x8056a714
void fn_8056a714(u32, u32);
// @addr 0x8056a818
void fn_8056a818();
// @addr 0x8056a8c4
void fn_8056a8c4(s32);
// @addr 0x8056a954
void fn_8056a954(s32*);
// @addr 0x8056aa60
void fn_8056aa60(s32*);
// @addr 0x8056ae28
void fn_8056ae28(s32);
// @addr 0x8056af30
void fn_8056af30();
// @addr 0x8056afe0
void fn_8056afe0(s32);
// @addr 0x8056b060
void fn_8056b060(s32);
// @addr 0x8056b198
void fn_8056b198(void);
// @addr 0x8056b508
void fn_8056b508(void);
// @addr 0x8056b74c
void fn_8056b74c(void);
// @addr 0x8056c10c
void fn_8056c10c(void);
// @addr 0x8056c198
void fn_8056c198(void);
// @addr 0x8056c1d8
void fn_8056c1d8(void);
// @addr 0x8056c664
void fn_8056c664(s32*);
// @addr 0x8056c7a0
void fn_8056c7a0(s32*);
// @addr 0x8056c83c
void fn_8056c83c(s32*);
// @addr 0x8056c8b8
void fn_8056c8b8(void);
// @addr 0x8056ca5c
void fn_8056ca5c(s32*);
// @addr 0x8056cb8c
void fn_8056cb8c(void);
// @addr 0x8056d30c
void fn_8056d30c(void);
// @addr 0x8056d524
void fn_8056d524(s32);
// @addr 0x8056d6c8
void fn_8056d6c8(s32);
// @addr 0x8056d70c
void fn_8056d70c(void);
// @addr 0x8056d8d8
void fn_8056d8d8(s32);
// @addr 0x8056d970
void fn_8056d970(s32);
// @addr 0x8056da2c
void fn_8056da2c();
// @addr 0x8056de98
void fn_8056de98();
// @addr 0x8056e028
void fn_8056e028(s32*);
// @addr 0x8056e1e0
void fn_8056e1e0(s32);
// @addr 0x8056e288
void fn_8056e288(s32*, s32);
// @addr 0x8056e30c
void fn_8056e30c(void);
// @addr 0x8056e704
void fn_8056e704(u32, u32);
// @addr 0x8056e8ac
void fn_8056e8ac(s32);
// @addr 0x8056eb88
void fn_8056eb88();
// @addr 0x8056ee58
void fn_8056ee58(void);
// @addr 0x8056ef0c
void fn_8056ef0c(s32);
// @addr 0x8056f09c
void fn_8056f09c(s32);
// @addr 0x8056f15c
void fn_8056f15c(s32);
// @addr 0x8056f268
void fn_8056f268(s32);
// @addr 0x8056f3e0
void fn_8056f3e0(s32*);
// @addr 0x8056f480
void fn_8056f480(s32*);
// @addr 0x8056f4fc
void fn_8056f4fc(s32*);
// @addr 0x8056f6a4
void fn_8056f6a4();
// @addr 0x8056faa0
void fn_8056faa0();
// @addr 0x8056fe30
void fn_8056fe30();
// @addr 0x80570274
void fn_80570274(s32);
// @addr 0x80570408
void fn_80570408();
// @addr 0x80570514
void fn_80570514();
// @addr 0x80570620
void fn_80570620();
// @addr 0x805707e4
void fn_805707e4();
// @addr 0x8057089c
void fn_8057089c();
// @addr 0x80570954
void fn_80570954();
// @addr 0x80570a0c
void fn_80570a0c();
// @addr 0x80570b08
void fn_80570b08();
// @addr 0x80570c04
void fn_80570c04();
// @addr 0x80570dc8
void fn_80570dc8();
// @addr 0x80570e80
void fn_80570e80();
// @addr 0x80570f38
void fn_80570f38();
// @addr 0x80570ff0
void fn_80570ff0(s32, s32, u32*);
// @addr 0x80571120
void fn_80571120(s32*);
// @addr 0x805711b8
void fn_805711b8();
// @addr 0x805712f0
void fn_805712f0(u64, s32*);
// @addr 0x80571360
void fn_80571360(s32*, u32, u32);
// @addr 0x805713cc
void fn_805713cc(u32);
// @addr 0x80571568
void fn_80571568(void);
// @addr 0x80571a3c
void fn_80571a3c();
// @addr 0x80571ab0
void fn_80571ab0(void);
// @addr 0x80571d78
void fn_80571d78(s32);
// @addr 0x80572354
void fn_80572354(s32*);
// @addr 0x805725f8
void fn_805725f8();
// @addr 0x805733d4
void fn_805733d4();
// @addr 0x805741b0
void fn_805741b0();
// @addr 0x80574f8c
void fn_80574f8c();
// @addr 0x80575d68
void fn_80575d68();
// @addr 0x80576188
void fn_80576188();
// @addr 0x805765a0
void fn_805765a0();
// @addr 0x805768a4
void fn_805768a4();
// @addr 0x80576b9c
void fn_80576b9c(void);
// @addr 0x80576df8
void fn_80576df8();
// @addr 0x80576eb8
void fn_80576eb8(s32);
// @addr 0x80576fd4
void fn_80576fd4(s32*);
// @addr 0x8057738c
void fn_8057738c(s32);
// @addr 0x80577644
void fn_80577644();
// @addr 0x805778d8
void fn_805778d8();
// @addr 0x805779d8
void fn_805779d8(u32);
// @addr 0x80577a3c
void fn_80577a3c(u32*, u32);
// @addr 0x80577cc0
void fn_80577cc0();
// @addr 0x80577eb8
void fn_80577eb8(void);
// @addr 0x80578104
void fn_80578104(s32);
// @addr 0x80578428
void fn_80578428(void);
// @addr 0x805788b4
void fn_805788b4(s32);
// @addr 0x805789c4
void fn_805789c4();
// @addr 0x80578f18
void fn_80578f18();
// @addr 0x80579690
void fn_80579690(s32);
// @addr 0x80579814
void fn_80579814();
// @addr 0x80579e54
void fn_80579e54();
// @addr 0x8057a4a0
void fn_8057a4a0();
// @addr 0x8057ac00
void fn_8057ac00();
// @addr 0x8057b368
void fn_8057b368();
// @addr 0x8057b3dc
void fn_8057b3dc(s32*);
// @addr 0x8057b59c
void fn_8057b59c(u32*, u32);
// @addr 0x8057b824
void fn_8057b824();
// @addr 0x8057b9e4
void fn_8057b9e4(u32*, u32);
// @addr 0x8057bca0
void fn_8057bca0();
// @addr 0x8057be4c
void fn_8057be4c(void);
// @addr 0x8057c120
void fn_8057c120();
// @addr 0x8057c5f0
void fn_8057c5f0(u32*, u32);
// @addr 0x8057c874
void fn_8057c874();
// @addr 0x8057caf4
void fn_8057caf4(s32);
// @addr 0x8057ce8c
void fn_8057ce8c(s32);
// @addr 0x8057ce98
void fn_8057ce98(void);
// @addr 0x8057ce9c
void fn_8057ce9c(s32*, s32);
// @addr 0x8057cef0
void fn_8057cef0(s32, s32);
// @addr 0x8057cf44
void fn_8057cf44(s32, s32);
// @addr 0x8057d008
void fn_8057d008(s32*, s32);
// @addr 0x8057d034
void fn_8057d034(s32, s32);
// @addr 0x8057d060
void fn_8057d060(s32, s32);
// @addr 0x8057d08c
void fn_8057d08c(s32*, s32);
// @addr 0x8057d0b8
void fn_8057d0b8(s32, s32);
// @addr 0x8057d0e4
void fn_8057d0e4(s32, s32);
// @addr 0x8057d110
void fn_8057d110(f64, s32, u32);
// @addr 0x8057d188
void fn_8057d188(f64, s32, u32);
// @addr 0x8057d200
void fn_8057d200(s32);
// @addr 0x8057d220
void fn_8057d220(f64, s32, u32, s32);
// @addr 0x8057d360
void fn_8057d360(s32);
// @addr 0x8057d39c
void fn_8057d39c(s32, s32, u32);
// @addr 0x8057d434
void fn_8057d434(s32, s32);
// @addr 0x8057d460
void fn_8057d460();
// @addr 0x8057d56c
void fn_8057d56c(s32, u32, u32);
// @addr 0x8057d600
void fn_8057d600(s32, s32, u32, f32*);
// @addr 0x8057d6f0
void fn_8057d6f0(s32, s32);
// @addr 0x8057d70c
void fn_8057d70c(s32, s32, u32);
// @addr 0x8057d7a4
void fn_8057d7a4(s32, s32, u32, u32);
// @addr 0x8057d920
void fn_8057d920();
// @addr 0x8057dbb0
void fn_8057dbb0(u32*, s32*);
// @addr 0x8057e5c0
void fn_8057e5c0(s32);
// @addr 0x8057e670
void fn_8057e670();
// @addr 0x8057ec5c
void fn_8057ec5c(s32);

} // namespace Animation
} // namespace EGG
