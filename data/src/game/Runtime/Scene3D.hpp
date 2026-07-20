#pragma once
// ============================================================================
// Scene3D.hpp — EGG 3D Scene Math Subsystem
// Address range: 0x80500000 - 0x80520000
// Function count: 458
//
// 3D transforms, bounding volumes, spatial ops
//
// Categorization: GENESIS Phase 5 (Runtime Module)
// ============================================================================

#include "rk_common.h"

namespace EGG {
namespace Scene3D {

// --- Non-void functions ---
// @addr 0x80500540
s32 fn_80500540(s32, s32);
// @addr 0x80500fa8
u32 fn_80500fa8(s32);
// @addr 0x80501428
s32 fn_80501428(s32, s32);
// @addr 0x805017dc
u32 fn_805017dc(s32);
// @addr 0x80502a7c
s32 fn_80502a7c(s32, s32);
// @addr 0x805032bc
u32 fn_805032bc(s32);
// @addr 0x80503ae8
u32 fn_80503ae8(s32);
// @addr 0x80503d9c
s32 fn_80503d9c(s32, s32);
// @addr 0x805042a4
s32 fn_805042a4(s32, s32);
// @addr 0x8050553c
s32 fn_8050553c(s32, s32);
// @addr 0x80505768
s32 fn_80505768(s32, s32);
// @addr 0x80505bd8
bool fn_80505bd8(s32);
// @addr 0x80505d3c
u32 fn_80505d3c(s32);
// @addr 0x80506c0c
u32 fn_80506c0c(s32, s32);
// @addr 0x8050737c
s32 fn_8050737c(s32, s32);
// @addr 0x805077d0
s32 fn_805077d0(s32, s32);
// @addr 0x805080e0
s32 fn_805080e0(s32, s32);
// @addr 0x80509874
s32 fn_80509874(s32, s32);
// @addr 0x80509ea0
s32 fn_80509ea0(s32, s32);
// @addr 0x8050a6f4
s32 fn_8050a6f4(s32, s32);
// @addr 0x8050ad4c
s32 fn_8050ad4c(s32, s32);
// @addr 0x8050b2a4
s32 fn_8050b2a4(s32, s32);
// @addr 0x8050b634
u32 fn_8050b634(s32);
// @addr 0x8050b99c
s32 fn_8050b99c(s32, s32);
// @addr 0x8050bd00
s32 fn_8050bd00(s32, s32);
// @addr 0x8050c088
s32 fn_8050c088(s32, s32);
// @addr 0x8050c5dc
s32 fn_8050c5dc(s32, s32);
// @addr 0x8050cefc
s32 fn_8050cefc(s32, s32);
// @addr 0x8050d764
s32 fn_8050d764(s32, s32);
// @addr 0x8050e614
s32 fn_8050e614(s32, s32);
// @addr 0x8050e930
s32 fn_8050e930(s32, s32);
// @addr 0x8050eda0
s32 fn_8050eda0(s32, s32);
// @addr 0x8050f820
s32 fn_8050f820(s32, s32);
// @addr 0x8050ff40
s32 fn_8050ff40(s32, s32);
// @addr 0x805107a8
s32 fn_805107a8(s32, s32);
// @addr 0x805109fc
s32 fn_805109fc(s32, s32);
// @addr 0x80511880
u32 fn_80511880(void);
// @addr 0x805118cc
u32 fn_805118cc(s32);
// @addr 0x8051196c
u32 fn_8051196c(void);
// @addr 0x80511b68
s32 fn_80511b68(s32, u32, u32);
// @addr 0x80512a30
u32 fn_80512a30(s32);
// @addr 0x80512ed8
s32 fn_80512ed8(s32, s32);
// @addr 0x805132a8
s32 fn_805132a8(s32, s32);
// @addr 0x805134d8
s32 fn_805134d8(s32, s32);
// @addr 0x80513898
s32 fn_80513898(s32, s32);
// @addr 0x80514c74
u32 fn_80514c74(void);
// @addr 0x80514f20
u32 fn_80514f20(u32, u8);
// @addr 0x80514ff4
u32 fn_80514ff4(u32, u8);
// @addr 0x80515164
s32 fn_80515164(s32, s32);
// @addr 0x8051558c
s32 fn_8051558c(s32, s32);
// @addr 0x805157b0
s32 fn_805157b0(s32, s32);
// @addr 0x80515f24
u32 fn_80515f24(s32);
// @addr 0x80517334
s32 fn_80517334(s32, s32);
// @addr 0x80517a40
s32 fn_80517a40(s32, s32);
// @addr 0x80517eec
s32 fn_80517eec(s32, s32);
// @addr 0x80518124
s32 fn_80518124(s32, s32);
// @addr 0x80518530
s32 fn_80518530(s32, s32);
// @addr 0x8051950c
s32 fn_8051950c(s32, s32);
// @addr 0x805197b8
s32 fn_805197b8(s32, s32);
// @addr 0x8051982c
u32 fn_8051982c(s32);
// @addr 0x8051a230
s32 fn_8051a230(s32, s32);
// @addr 0x8051a428
u32 fn_8051a428(s32);
// @addr 0x8051a50c
u32 fn_8051a50c(s32);
// @addr 0x8051aa90
u32 fn_8051aa90(u32*);
// @addr 0x8051bfd8
s32 fn_8051bfd8(s32, s32);
// @addr 0x8051c22c
s32 fn_8051c22c(s32, s32);
// @addr 0x8051c774
s32 fn_8051c774(s32, s32);
// @addr 0x8051dae4
s32 fn_8051dae4(s32, s32);
// @addr 0x8051e1e0
u32 fn_8051e1e0(s32);
// @addr 0x8051f2c4
u32 fn_8051f2c4(u32*, s32);
// @addr 0x8051f494
s32 fn_8051f494(s32, s32);
// @addr 0x8051fd38
u32 fn_8051fd38(s32);

// --- Void functions ---
// @addr 0x80500018
void fn_80500018(s32, u32, u32);
// @addr 0x80500024
void fn_80500024(s32, u32, u32);
// @addr 0x8050004c
void fn_8050004c(s32);
// @addr 0x805001d0
void fn_805001d0(s32);
// @addr 0x80500288
void fn_80500288(s32*);
// @addr 0x805002c8
void fn_805002c8(s32);
// @addr 0x805003cc
void fn_805003cc(s32, u32, u32);
// @addr 0x805003f0
void fn_805003f0(s32, u32, u32);
// @addr 0x80500418
void fn_80500418();
// @addr 0x805005d4
void fn_805005d4(s32, u32, u32);
// @addr 0x80500640
void fn_80500640(s32);
// @addr 0x80500680
void fn_80500680(s32, u32);
// @addr 0x80500740
void fn_80500740(s32*);
// @addr 0x80500780
void fn_80500780(s32*);
// @addr 0x80500804
void fn_80500804(s32, s32);
// @addr 0x8050093c
void fn_8050093c(s32, u32, u32, u32);
// @addr 0x80500a34
void fn_80500a34(s32, u32, u32);
// @addr 0x80500a74
void fn_80500a74(s32, s32*);
// @addr 0x80500b6c
void fn_80500b6c(s32, u32);
// @addr 0x80500c48
void fn_80500c48(s32);
// @addr 0x80500c80
void fn_80500c80(s32, s32*);
// @addr 0x80500d70
void fn_80500d70(void);
// @addr 0x8050105c
void fn_8050105c(void);
// @addr 0x805011cc
void fn_805011cc(s32, u32, u8);
// @addr 0x8050120c
void fn_8050120c(s32, u32, u32);
// @addr 0x80501244
void fn_80501244(void);
// @addr 0x8050129c
void fn_8050129c(s32*);
// @addr 0x805012f4
void fn_805012f4();
// @addr 0x805015e0
void fn_805015e0();
// @addr 0x8050185c
void fn_8050185c();
// @addr 0x80501cc0
void fn_80501cc0(s32, u32);
// @addr 0x80501d2c
void fn_80501d2c(s32, u32);
// @addr 0x80501d40
void fn_80501d40(s32, u32, u32);
// @addr 0x80501d78
void fn_80501d78(s32, u32);
// @addr 0x80501de0
void fn_80501de0(s32, u32);
// @addr 0x80501dec
void fn_80501dec(s32);
// @addr 0x80501f28
void fn_80501f28(void);
// @addr 0x80502314
void fn_80502314(s32, u32);
// @addr 0x80502444
void fn_80502444(s32, u32);
// @addr 0x80502578
void fn_80502578(s32, u32, s32);
// @addr 0x805027e4
void fn_805027e4(s32, u32);
// @addr 0x80502910
void fn_80502910(s32, u32);
// @addr 0x80502a40
void fn_80502a40();
// @addr 0x80502ad4
void fn_80502ad4();
// @addr 0x80502b98
void fn_80502b98(s32);
// @addr 0x80502c30
void fn_80502c30(s32);
// @addr 0x80502d1c
void fn_80502d1c();
// @addr 0x80502e1c
void fn_80502e1c(s32, s32, u32);
// @addr 0x80502fe0
void fn_80502fe0(s32);
// @addr 0x80503044
void fn_80503044(s32, u16*, u16*);
// @addr 0x80503188
void fn_80503188(s32, u16*);
// @addr 0x80503250
void fn_80503250(u32*);
// @addr 0x80503330
void fn_80503330();
// @addr 0x8050345c
void fn_8050345c(s32);
// @addr 0x8050357c
void fn_8050357c(s32);
// @addr 0x80503620
void fn_80503620();
// @addr 0x80503720
void fn_80503720(s32, s32);
// @addr 0x805037e8
void fn_805037e8(s32, s32);
// @addr 0x8050398c
void fn_8050398c(s32, u32, s32);
// @addr 0x80503a7c
void fn_80503a7c(s32);
// @addr 0x80503b80
void fn_80503b80(s32);
// @addr 0x80503bf4
void fn_80503bf4(s32, u16*, u16*);
// @addr 0x80503ca8
void fn_80503ca8(s32, u16*);
// @addr 0x80503d60
void fn_80503d60();
// @addr 0x80503df4
void fn_80503df4();
// @addr 0x80503e68
void fn_80503e68(s32);
// @addr 0x80503f18
void fn_80503f18(s32, s32);
// @addr 0x80503f78
void fn_80503f78(s32, s32);
// @addr 0x805040ec
void fn_805040ec();
// @addr 0x8050430c
void fn_8050430c();
// @addr 0x8050465c
void fn_8050465c(s32, u32);
// @addr 0x80504740
void fn_80504740(s32);
// @addr 0x80504928
void fn_80504928(s32*, u32);
// @addr 0x80504a0c
void fn_80504a0c(s32*, s32);
// @addr 0x80504c10
void fn_80504c10(s32, u32, s32);
// @addr 0x80504cf0
void fn_80504cf0(void);
// @addr 0x80504f38
void fn_80504f38(s32*, u32);
// @addr 0x80504ff0
void fn_80504ff0(s32*, u32);
// @addr 0x805050a4
void fn_805050a4(s32*, u32, s32);
// @addr 0x805051f4
void fn_805051f4(s32*, u32);
// @addr 0x805052b0
void fn_805052b0(s32*, u32);
// @addr 0x80505378
void fn_80505378();
// @addr 0x805055a8
void fn_805055a8(s32);
// @addr 0x80505640
void fn_80505640(s32, u32, u32);
// @addr 0x80505670
void fn_80505670(s32, u32, u32);
// @addr 0x8050572c
void fn_8050572c();
// @addr 0x805057c0
void fn_805057c0(u32, u32);
// @addr 0x8050586c
void fn_8050586c(s32);
// @addr 0x80505924
void fn_80505924(void);
// @addr 0x80505a94
void fn_80505a94(s32);
// @addr 0x80505ae8
void fn_80505ae8(s32);
// @addr 0x80505b20
void fn_80505b20(s32, u32);
// @addr 0x80505b7c
void fn_80505b7c(s32);
// @addr 0x80505c10
void fn_80505c10(u32*);
// @addr 0x80505de8
void fn_80505de8(s32);
// @addr 0x8050604c
void fn_8050604c(void);
// @addr 0x80506468
void fn_80506468(s32*);
// @addr 0x80506b18
void fn_80506b18(s32);
// @addr 0x80506bc8
void fn_80506bc8(void);
// @addr 0x80506e68
void fn_80506e68(void);
// @addr 0x805070b0
void fn_805070b0(s32);
// @addr 0x80507228
void fn_80507228(void);
// @addr 0x805072e4
void fn_805072e4(s32, u32);
// @addr 0x80507338
void fn_80507338();
// @addr 0x805073e4
void fn_805073e4(s32);
// @addr 0x80507440
void fn_80507440(s32*);
// @addr 0x80507540
void fn_80507540(void);
// @addr 0x80507678
void fn_80507678();
// @addr 0x80507870
void fn_80507870(s32);
// @addr 0x805079d8
void fn_805079d8(s32);
// @addr 0x80507ac0
void fn_80507ac0(s32*, u32);
// @addr 0x80507cf8
void fn_80507cf8(s32*, u32);
// @addr 0x80507df8
void fn_80507df8(void);
// @addr 0x80507fe8
void fn_80507fe8(s32, u32, u32);
// @addr 0x80508018
void fn_80508018(s32, u32);
// @addr 0x80508064
void fn_80508064();
// @addr 0x80508148
void fn_80508148(s32);
// @addr 0x805081b4
void fn_805081b4(s32*);
// @addr 0x80508690
void fn_80508690(void);
// @addr 0x80508740
void fn_80508740(s32);
// @addr 0x80508d78
void fn_80508d78(s32*);
// @addr 0x8050926c
void fn_8050926c(s32*);
// @addr 0x80509648
void fn_80509648(void);
// @addr 0x8050975c
void fn_8050975c();
// @addr 0x80509914
void fn_80509914(s32);
// @addr 0x80509ab0
void fn_80509ab0(s32);
// @addr 0x80509c94
void fn_80509c94(s32, s32);
// @addr 0x80509d38
void fn_80509d38();
// @addr 0x80509f4c
void fn_80509f4c(s32);
// @addr 0x8050a144
void fn_8050a144(s32);
// @addr 0x8050a2b4
void fn_8050a2b4(s32);
// @addr 0x8050a38c
void fn_8050a38c(s32*, s32);
// @addr 0x8050a544
void fn_8050a544(u32, u32, u32);
// @addr 0x8050a678
void fn_8050a678();
// @addr 0x8050a75c
void fn_8050a75c(s32);
// @addr 0x8050a7b8
void fn_8050a7b8(s32*);
// @addr 0x8050a9bc
void fn_8050a9bc(void);
// @addr 0x8050aa7c
void fn_8050aa7c(u32, u32, u32);
// @addr 0x8050ab8c
void fn_8050ab8c(s32, u32, u32);
// @addr 0x8050abbc
void fn_8050abbc(s32, u32, u32);
// @addr 0x8050abec
void fn_8050abec(s32, u32, u32);
// @addr 0x8050ac1c
void fn_8050ac1c(s32, u32, u32);
// @addr 0x8050ac4c
void fn_8050ac4c(s32, u32);
// @addr 0x8050ac7c
void fn_8050ac7c(s32, u32);
// @addr 0x8050acac
void fn_8050acac(s32, u32);
// @addr 0x8050ad00
void fn_8050ad00();
// @addr 0x8050adb4
void fn_8050adb4(s32);
// @addr 0x8050ae20
void fn_8050ae20(s32*);
// @addr 0x8050b218
void fn_8050b218();
// @addr 0x8050b324
void fn_8050b324(s32);
// @addr 0x8050b420
void fn_8050b420(s32);
// @addr 0x8050b5a8
void fn_8050b5a8(s32);
// @addr 0x8050b8f4
void fn_8050b8f4(s32, u32);
// @addr 0x8050b940
void fn_8050b940();
// @addr 0x8050ba28
void fn_8050ba28(s32);
// @addr 0x8050bbb4
void fn_8050bbb4(void);
// @addr 0x8050bc00
void fn_8050bc00(u32);
// @addr 0x8050bc84
void fn_8050bc84();
// @addr 0x8050bd68
void fn_8050bd68(s32);
// @addr 0x8050bdd4
void fn_8050bdd4(s32*);
// @addr 0x8050bef0
void fn_8050bef0(u32);
// @addr 0x8050bfc8
void fn_8050bfc8(f64);
// @addr 0x8050c04c
void fn_8050c04c();
// @addr 0x8050c0e0
void fn_8050c0e0(void);
// @addr 0x8050c1dc
void fn_8050c1dc(s32);
// @addr 0x8050c254
void fn_8050c254(void);
// @addr 0x8050c3cc
void fn_8050c3cc(void);
// @addr 0x8050c69c
void fn_8050c69c(void);
// @addr 0x8050ca1c
void fn_8050ca1c(s32);
// @addr 0x8050ca74
void fn_8050ca74(s32, u32);
// @addr 0x8050cb50
void fn_8050cb50(s32, u32);
// @addr 0x8050cc2c
void fn_8050cc2c(s32, u32);
// @addr 0x8050cc70
void fn_8050cc70(s32*, u32);
// @addr 0x8050cfac
void fn_8050cfac(s32);
// @addr 0x8050d284
void fn_8050d284(s32);
// @addr 0x8050d39c
void fn_8050d39c(s32, s32);
// @addr 0x8050d4a4
void fn_8050d4a4(s32, u32);
// @addr 0x8050d554
void fn_8050d554(void);
// @addr 0x8050d824
void fn_8050d824(void);
// @addr 0x8050dca4
void fn_8050dca4(s32);
// @addr 0x8050dd84
void fn_8050dd84(void);
// @addr 0x8050de2c
void fn_8050de2c(s32*, u32);
// @addr 0x8050df74
void fn_8050df74(s32*, u32);
// @addr 0x8050e0bc
void fn_8050e0bc(s32*, u32);
// @addr 0x8050e280
void fn_8050e280(s32*, u32);
// @addr 0x8050e440
void fn_8050e440(s32, u32, u32);
// @addr 0x8050e470
void fn_8050e470(s32, u32, u32);
// @addr 0x8050e4a0
void fn_8050e4a0(s32, u32, u32);
// @addr 0x8050e4d0
void fn_8050e4d0(s32, u32);
// @addr 0x8050e500
void fn_8050e500(s32, u32);
// @addr 0x8050e530
void fn_8050e530(s32, u32);
// @addr 0x8050e560
void fn_8050e560(s32, u32);
// @addr 0x8050e5c0
void fn_8050e5c0();
// @addr 0x8050e694
void fn_8050e694(s32);
// @addr 0x8050e720
void fn_8050e720(s32*);
// @addr 0x8050e88c
void fn_8050e88c(s32);
// @addr 0x8050e8f4
void fn_8050e8f4();
// @addr 0x8050e988
void fn_8050e988(s32);
// @addr 0x8050eac8
void fn_8050eac8(s32);
// @addr 0x8050eb28
void fn_8050eb28(void);
// @addr 0x8050ec74
void fn_8050ec74();
// @addr 0x8050ee3c
void fn_8050ee3c(s32);
// @addr 0x8050f164
void fn_8050f164(s32);
// @addr 0x8050f27c
void fn_8050f27c(s32*);
// @addr 0x8050f41c
void fn_8050f41c(s32*, u32);
// @addr 0x8050f598
void fn_8050f598(s32, u32);
// @addr 0x8050f678
void fn_8050f678(s32, u32);
// @addr 0x8050f75c
void fn_8050f75c();
// @addr 0x8050f8ac
void fn_8050f8ac(s32);
// @addr 0x8050fa40
void fn_8050fa40();
// @addr 0x8050fac0
void fn_8050fac0(s32);
// @addr 0x8050fb90
void fn_8050fb90(s32*);
// @addr 0x8050fd30
void fn_8050fd30(s32*, u32);
// @addr 0x8050feb0
void fn_8050feb0(s32, u32);
// @addr 0x8050fef4
void fn_8050fef4();
// @addr 0x8050ffb4
void fn_8050ffb4(s32);
// @addr 0x805100ac
void fn_805100ac(s32);
// @addr 0x80510100
void fn_80510100(s32);
// @addr 0x805103e8
void fn_805103e8(void);
// @addr 0x80510764
void fn_80510764();
// @addr 0x80510810
void fn_80510810(s32);
// @addr 0x805108d4
void fn_805108d4(s32, u32, u32);
// @addr 0x80510904
void fn_80510904(s32, u32, u32);
// @addr 0x80510968
void fn_80510968();
// @addr 0x80510a88
void fn_80510a88(s32);
// @addr 0x80510bc0
void fn_80510bc0(s32*);
// @addr 0x80510fa4
void fn_80510fa4(s32);
// @addr 0x80511000
void fn_80511000(s32);
// @addr 0x8051152c
void fn_8051152c(s32*, u32);
// @addr 0x80511bb0
void fn_80511bb0(s32);
// @addr 0x80512358
void fn_80512358(void);
// @addr 0x8051253c
void fn_8051253c(void);
// @addr 0x805125e0
void fn_805125e0(s32);
// @addr 0x80512948
void fn_80512948(s32, u32);
// @addr 0x8051298c
void fn_8051298c(u32*);
// @addr 0x80512abc
void fn_80512abc(s32);
// @addr 0x80512b50
void fn_80512b50(s32);
// @addr 0x80512c2c
void fn_80512c2c(s32);
// @addr 0x80512c88
void fn_80512c88(s32);
// @addr 0x80512c90
void fn_80512c90();
// @addr 0x80512d04
void fn_80512d04(s32, s32);
// @addr 0x80512d8c
void fn_80512d8c(s32);
// @addr 0x80512e00
void fn_80512e00(u32*);
// @addr 0x80512f88
void fn_80512f88(void);
// @addr 0x805131d4
void fn_805131d4(u32);
// @addr 0x80513218
void fn_80513218(u32);
// @addr 0x8051326c
void fn_8051326c();
// @addr 0x80513300
void fn_80513300();
// @addr 0x80513374
void fn_80513374(s32);
// @addr 0x80513408
void fn_80513408(u32*);
// @addr 0x8051357c
void fn_8051357c(s32);
// @addr 0x8051375c
void fn_8051375c(s32);
// @addr 0x80513838
void fn_80513838(s32, u32, u32);
// @addr 0x805138d8
void fn_805138d8();
// @addr 0x80514620
void fn_80514620();
// @addr 0x80514718
void fn_80514718();
// @addr 0x80514808
void fn_80514808();
// @addr 0x8051496c
void fn_8051496c();
// @addr 0x80514a5c
void fn_80514a5c();
// @addr 0x80514b4c
void fn_80514b4c();
// @addr 0x80514d2c
void fn_80514d2c();
// @addr 0x80514e20
void fn_80514e20();
// @addr 0x805150e0
void fn_805150e0();
// @addr 0x805151d8
void fn_805151d8(s32);
// @addr 0x805152f8
void fn_805152f8(s32);
// @addr 0x8051534c
void fn_8051534c(s32);
// @addr 0x80515494
void fn_80515494(s32);
// @addr 0x80515550
void fn_80515550();
// @addr 0x805155e4
void fn_805155e4(u32, s32, s32);
// @addr 0x805156bc
void fn_805156bc(s32);
// @addr 0x805156f4
void fn_805156f4(s32);
// @addr 0x8051572c
void fn_8051572c(s32);
// @addr 0x80515774
void fn_80515774();
// @addr 0x80515808
void fn_80515808(u32, s32, u32, s32);
// @addr 0x805159b4
void fn_805159b4(s32);
// @addr 0x805159ec
void fn_805159ec(void);
// @addr 0x80515e58
void fn_80515e58(u32*);
// @addr 0x80515fcc
void fn_80515fcc(void);
// @addr 0x8051647c
void fn_8051647c(s32);
// @addr 0x80516558
void fn_80516558(s32*);
// @addr 0x805167f8
void fn_805167f8(s32);
// @addr 0x805169bc
void fn_805169bc(s32);
// @addr 0x80516a40
void fn_80516a40(s32);
// @addr 0x80516be0
void fn_80516be0(s32);
// @addr 0x80516e6c
void fn_80516e6c(void);
// @addr 0x80517120
void fn_80517120(s32, u32);
// @addr 0x80517150
void fn_80517150(s32, u32);
// @addr 0x805171ac
void fn_805171ac(void);
// @addr 0x805173e0
void fn_805173e0(s32);
// @addr 0x80517634
void fn_80517634(s32*, u32);
// @addr 0x80517850
void fn_80517850(s32*, u32);
// @addr 0x805178dc
void fn_805178dc(u32, u32);
// @addr 0x80517928
void fn_80517928();
// @addr 0x80517ae0
void fn_80517ae0(s32);
// @addr 0x80517cc0
void fn_80517cc0(s32*, s32);
// @addr 0x80517dcc
void fn_80517dcc(s32, u32, u32);
// @addr 0x80517dfc
void fn_80517dfc(s32, u32, u32);
// @addr 0x80517e2c
void fn_80517e2c(s32, u32);
// @addr 0x80517e5c
void fn_80517e5c(s32, u32);
// @addr 0x80517ea8
void fn_80517ea8();
// @addr 0x80517f54
void fn_80517f54(s32);
// @addr 0x80517fb0
void fn_80517fb0(s32);
// @addr 0x80518090
void fn_80518090();
// @addr 0x805181b0
void fn_805181b0(s32);
// @addr 0x805182d8
void fn_805182d8(s32);
// @addr 0x80518388
void fn_80518388(u32);
// @addr 0x805183cc
void fn_805183cc(u32);
// @addr 0x80518430
void fn_80518430(s32, u32);
// @addr 0x8051847c
void fn_8051847c();
// @addr 0x80518598
void fn_80518598(s32);
// @addr 0x80518604
void fn_80518604(s32*);
// @addr 0x80518a24
void fn_80518a24(s32);
// @addr 0x80518b94
void fn_80518b94(s32*);
// @addr 0x8051909c
void fn_8051909c(s32*);
// @addr 0x805192a0
void fn_805192a0(s32*);
// @addr 0x80519450
void fn_80519450(s32, u32);
// @addr 0x80519480
void fn_80519480(s32, u32);
// @addr 0x805194d0
void fn_805194d0();
// @addr 0x80519564
void fn_80519564(u32, u32, u32);
// @addr 0x80519618
void fn_80519618(s32);
// @addr 0x80519650
void fn_80519650(s32);
// @addr 0x80519688
void fn_80519688(s32);
// @addr 0x805196c0
void fn_805196c0(u32*);
// @addr 0x8051975c
void fn_8051975c();
// @addr 0x805198ac
void fn_805198ac();
// @addr 0x80519e44
void fn_80519e44(void);
// @addr 0x8051a1f4
void fn_8051a1f4();
// @addr 0x8051a288
void fn_8051a288(s32, u32);
// @addr 0x8051a380
void fn_8051a380(s32);
// @addr 0x8051a3b8
void fn_8051a3b8(s32);
// @addr 0x8051a3f0
void fn_8051a3f0(s32);
// @addr 0x8051a470
void fn_8051a470(u32*);
// @addr 0x8051a58c
void fn_8051a58c(void);
// @addr 0x8051a800
void fn_8051a800(s32);
// @addr 0x8051a930
void fn_8051a930(s32);
// @addr 0x8051a9fc
void fn_8051a9fc();
// @addr 0x8051ab40
void fn_8051ab40(s32);
// @addr 0x8051ad2c
void fn_8051ad2c(s32);
// @addr 0x8051aea8
void fn_8051aea8(s32*);
// @addr 0x8051b248
void fn_8051b248(s32*);
// @addr 0x8051b7fc
void fn_8051b7fc(s32*);
// @addr 0x8051b92c
void fn_8051b92c(s32*);
// @addr 0x8051ba2c
void fn_8051ba2c(s32*);
// @addr 0x8051bb2c
void fn_8051bb2c(s32*);
// @addr 0x8051bc2c
void fn_8051bc2c(s32*);
// @addr 0x8051bdc8
void fn_8051bdc8(s32);
// @addr 0x8051bed0
void fn_8051bed0(s32, u32);
// @addr 0x8051bf00
void fn_8051bf00(s32, u32);
// @addr 0x8051bf30
void fn_8051bf30(s32, u32);
// @addr 0x8051bf9c
void fn_8051bf9c();
// @addr 0x8051c030
void fn_8051c030(u32);
// @addr 0x8051c0b0
void fn_8051c0b0(s32);
// @addr 0x8051c114
void fn_8051c114(s32);
// @addr 0x8051c1c0
void fn_8051c1c0();
// @addr 0x8051c2b0
void fn_8051c2b0(s32);
// @addr 0x8051c400
void fn_8051c400(s32*);
// @addr 0x8051c58c
void fn_8051c58c(void);
// @addr 0x8051c820
void fn_8051c820(s32);
// @addr 0x8051ca58
void fn_8051ca58(s32);
// @addr 0x8051cb1c
void fn_8051cb1c(void);
// @addr 0x8051d2ac
void fn_8051d2ac(s32);
// @addr 0x8051d55c
void fn_8051d55c(s32);
// @addr 0x8051d598
void fn_8051d598(s32*);
// @addr 0x8051d680
void fn_8051d680(s32*);
// @addr 0x8051d774
void fn_8051d774(s32*);
// @addr 0x8051d920
void fn_8051d920(s32*);
// @addr 0x8051da70
void fn_8051da70();
// @addr 0x8051db3c
void fn_8051db3c(s32, u32, u8, u8);
// @addr 0x8051dc28
void fn_8051dc28(s32);
// @addr 0x8051dd14
void fn_8051dd14(s32);
// @addr 0x8051de90
void fn_8051de90(s32, u32, s32);
// @addr 0x8051dfa8
void fn_8051dfa8(s32, u32, s32);
// @addr 0x8051e00c
void fn_8051e00c(s32);
// @addr 0x8051e0bc
void fn_8051e0bc(s32);
// @addr 0x8051e14c
void fn_8051e14c(u32*);
// @addr 0x8051e288
void fn_8051e288(s32);
// @addr 0x8051e3c4
void fn_8051e3c4(s32*);
// @addr 0x8051e534
void fn_8051e534(s32);
// @addr 0x8051e63c
void fn_8051e63c(s32);
// @addr 0x8051e708
void fn_8051e708(void);
// @addr 0x8051e754
void fn_8051e754();
// @addr 0x8051f54c
void fn_8051f54c(u32*);
// @addr 0x8051f96c
void fn_8051f96c(u32*, u8, u8, u32*);
// @addr 0x8051fcdc
void fn_8051fcdc(u32*);
// @addr 0x8051fdac
void fn_8051fdac(void);
// @addr 0x8051ff04
void fn_8051ff04(s32);

} // namespace Scene3D
} // namespace EGG
