#pragma once
// ============================================================================
// Memory.hpp — EGG Memory Mgmt Subsystem
// Address range: 0x80440000 - 0x80450000
// Function count: 253
//
// Memory allocation, block management, caching
//
// Categorization: GENESIS Phase 5 (Runtime Module)
// ============================================================================

#include "rk_common.h"

namespace EGG {
namespace Memory {

// --- Non-void functions ---
// @addr 0x80440580
u32 fn_80440580(void);
// @addr 0x80440ed8
s32 fn_80440ed8(s32);
// @addr 0x80440fbc
u32 fn_80440fbc(u32);
// @addr 0x80440fe0
u32 fn_80440fe0(u32, u32);
// @addr 0x80441180
u32 fn_80441180(u32);
// @addr 0x804417d4
u32 fn_804417d4(u32);
// @addr 0x80441914
s32 fn_80441914(s32, s32);
// @addr 0x80441c54
u32 fn_80441c54(u32*);
// @addr 0x80442e94
u8 fn_80442e94(void);
// @addr 0x80443068
s32 fn_80443068(s32, s32);
// @addr 0x804435b8
s32 fn_804435b8(s32, s32);
// @addr 0x804435f8
s32 fn_804435f8(s32);
// @addr 0x8044364c
u32 fn_8044364c(s32, u32);
// @addr 0x804436a8
f64 fn_804436a8(s32);
// @addr 0x80443728
f64 fn_80443728(f64, s32);
// @addr 0x804448a8
s32 fn_804448a8(s32, s32);
// @addr 0x804448e8
s32 fn_804448e8(s32, s32);
// @addr 0x80444928
s32 fn_80444928(s32, s32);
// @addr 0x80444a80
u32 fn_80444a80(s32, s32, s32, s32);
// @addr 0x80444d14
u32 fn_80444d14(s32);
// @addr 0x80444f08
u32 fn_80444f08(s32, s32);
// @addr 0x80445000
s32 fn_80445000(s32, s32, s32, u32);
// @addr 0x804452a4
u32 fn_804452a4(s32);
// @addr 0x804453c8
s32 fn_804453c8(s32, s32);
// @addr 0x80446454
s32 fn_80446454(s32, s32);
// @addr 0x80446494
s32 fn_80446494(s32, s32);
// @addr 0x80447060
u32 fn_80447060(s32, s32);
// @addr 0x80447080
u32 fn_80447080(s32, s32);
// @addr 0x80447ab0
s32 fn_80447ab0(s32, s32);
// @addr 0x80447cec
s32 fn_80447cec(s32, s32);
// @addr 0x80447d74
f64 fn_80447d74(s32);
// @addr 0x804484b4
s32 fn_804484b4(s32, s32);
// @addr 0x8044853c
f64 fn_8044853c(s32);
// @addr 0x80448c7c
s32 fn_80448c7c(s32, s32);
// @addr 0x80448d04
f64 fn_80448d04(s32);
// @addr 0x80449444
s32 fn_80449444(s32, s32);
// @addr 0x804494cc
f64 fn_804494cc(s32);
// @addr 0x80449c0c
s32 fn_80449c0c(s32, s32);
// @addr 0x8044a520
f64 fn_8044a520(s32);
// @addr 0x8044a5a4
u32 fn_8044a5a4(s32);
// @addr 0x8044a6c4
f64 fn_8044a6c4(s32);
// @addr 0x8044a748
u32 fn_8044a748(s32);
// @addr 0x8044a868
f64 fn_8044a868(s32);
// @addr 0x8044a8ec
u32 fn_8044a8ec(s32);
// @addr 0x8044aa0c
f64 fn_8044aa0c(s32);
// @addr 0x8044aa90
u32 fn_8044aa90(s32);
// @addr 0x8044abb0
f64 fn_8044abb0(s32);
// @addr 0x8044ac34
u32 fn_8044ac34(s32);
// @addr 0x8044af78
s32 fn_8044af78(s32, s32);
// @addr 0x8044b2dc
s32 fn_8044b2dc(s32, s32);
// @addr 0x8044b720
u32 fn_8044b720(u32, u32);
// @addr 0x8044ef9c
u16 fn_8044ef9c(s32);
// @addr 0x8044efe4
u32 fn_8044efe4(s32);
// @addr 0x8044fc08
s32 fn_8044fc08(s32, s32);
// @addr 0x8044fd30
s32 fn_8044fd30(s32, s32);

// --- Void functions ---
// @addr 0x80440048
void fn_80440048(void);
// @addr 0x804401b4
void fn_804401b4(void);
// @addr 0x804406e4
void fn_804406e4(u32);
// @addr 0x80440784
void fn_80440784(void);
// @addr 0x804407a4
void fn_804407a4(void);
// @addr 0x804407ec
void fn_804407ec(void);
// @addr 0x804408dc
void fn_804408dc(void);
// @addr 0x80440924
void fn_80440924(void);
// @addr 0x80440958
void fn_80440958(u32);
// @addr 0x8044096c
void fn_8044096c(void);
// @addr 0x804409a0
void fn_804409a0(u32);
// @addr 0x804409b4
void fn_804409b4(u32, s32);
// @addr 0x80440a88
void fn_80440a88(void);
// @addr 0x80440aa8
void fn_80440aa8(void);
// @addr 0x80440af0
void fn_80440af0(void);
// @addr 0x80440bbc
void fn_80440bbc(s32*);
// @addr 0x80440cec
void fn_80440cec(void);
// @addr 0x80440e38
void fn_80440e38(void);
// @addr 0x80440e6c
void fn_80440e6c(u32);
// @addr 0x80440e80
void fn_80440e80(u32);
// @addr 0x804412c8
void fn_804412c8();
// @addr 0x8044145c
void fn_8044145c();
// @addr 0x804416ac
void fn_804416ac(u32, u32);
// @addr 0x804418d0
void fn_804418d0();
// @addr 0x8044196c
void fn_8044196c(u32);
// @addr 0x80441a38
void fn_80441a38(void);
// @addr 0x80441b08
void fn_80441b08(void);
// @addr 0x80441b48
void fn_80441b48(void);
// @addr 0x80441b90
void fn_80441b90(void);
// @addr 0x80441c08
void fn_80441c08(u32*);
// @addr 0x80441cd0
void fn_80441cd0(void);
// @addr 0x80442288
void fn_80442288(u32);
// @addr 0x804427ac
void fn_804427ac(void);
// @addr 0x80442a30
void fn_80442a30(void);
// @addr 0x80442b14
void fn_80442b14(u32);
// @addr 0x80442b54
void fn_80442b54(void);
// @addr 0x80442d90
void fn_80442d90(void);
// @addr 0x80442e10
void fn_80442e10(void);
// @addr 0x80442eec
void fn_80442eec(s32);
// @addr 0x80443024
void fn_80443024();
// @addr 0x804430c0
void fn_804430c0(u32);
// @addr 0x804431d4
void fn_804431d4(void);
// @addr 0x804432e4
void fn_804432e4(void);
// @addr 0x80443318
void fn_80443318(void);
// @addr 0x80443348
void fn_80443348(void);
// @addr 0x8044339c
void fn_8044339c(void);
// @addr 0x804433e8
void fn_804433e8(void);
// @addr 0x80443430
void fn_80443430(void);
// @addr 0x804434e4
void fn_804434e4(u32*);
// @addr 0x80443550
void fn_80443550(void);
// @addr 0x804437ac
void fn_804437ac(u8*, s32*);
// @addr 0x804437d4
void fn_804437d4(s32, s32);
// @addr 0x804438a0
void fn_804438a0(u32*, s32*);
// @addr 0x80443918
void fn_80443918(u32*, s32*, u8);
// @addr 0x804439d8
void fn_804439d8();
// @addr 0x80443a74
void fn_80443a74();
// @addr 0x80443e90
void fn_80443e90(s32*);
// @addr 0x80443f74
void fn_80443f74(void);
// @addr 0x804440a4
void fn_804440a4(s32*);
// @addr 0x8044412c
void fn_8044412c(s32, s32);
// @addr 0x80444610
void fn_80444610(s32*);
// @addr 0x8044478c
void fn_8044478c(s32, u32, u32);
// @addr 0x80444968
void fn_80444968(u32, s32);
// @addr 0x80445384
void fn_80445384();
// @addr 0x80445470
void fn_80445470(u32*, u32);
// @addr 0x8044558c
void fn_8044558c(f64, s32, s32);
// @addr 0x8044563c
void fn_8044563c(s32);
// @addr 0x8044569c
void fn_8044569c(void);
// @addr 0x804464d4
void fn_804464d4(void);
// @addr 0x80446c30
void fn_80446c30(s32, u16);
// @addr 0x80446e0c
void fn_80446e0c();
// @addr 0x80446ec4
void fn_80446ec4(s32);
// @addr 0x80446f54
void fn_80446f54(s32);
// @addr 0x80446f5c
void fn_80446f5c(s32);
// @addr 0x80446f84
void fn_80446f84(s32);
// @addr 0x804470ec
void fn_804470ec(s32);
// @addr 0x80447268
void fn_80447268(s32);
// @addr 0x804473a4
void fn_804473a4(s32);
// @addr 0x80447550
void fn_80447550(s32*, u32);
// @addr 0x804475f8
void fn_804475f8(s32);
// @addr 0x80447680
void fn_80447680();
// @addr 0x80447854
void fn_80447854(s32, s32);
// @addr 0x804478d8
void fn_804478d8(s32);
// @addr 0x80447930
void fn_80447930(s32*, s32);
// @addr 0x80447a18
void fn_80447a18(u32*, u32, u8);
// @addr 0x80447af0
void fn_80447af0(s32);
// @addr 0x80447c14
void fn_80447c14(s32, s32);
// @addr 0x80447d2c
void fn_80447d2c(s32);
// @addr 0x80447dc4
void fn_80447dc4(void);
// @addr 0x80448008
void fn_80448008(s32, s32, u32);
// @addr 0x80448108
void fn_80448108();
// @addr 0x80448258
void fn_80448258();
// @addr 0x80448424
void fn_80448424(s32);
// @addr 0x804484f4
void fn_804484f4(s32);
// @addr 0x8044858c
void fn_8044858c(void);
// @addr 0x804487d0
void fn_804487d0(s32, s32, u32);
// @addr 0x804488d0
void fn_804488d0();
// @addr 0x80448a20
void fn_80448a20();
// @addr 0x80448bec
void fn_80448bec(s32);
// @addr 0x80448cbc
void fn_80448cbc(s32);
// @addr 0x80448d54
void fn_80448d54(void);
// @addr 0x80448f98
void fn_80448f98(s32, s32, u32);
// @addr 0x80449098
void fn_80449098();
// @addr 0x804491e8
void fn_804491e8();
// @addr 0x804493b4
void fn_804493b4(s32);
// @addr 0x80449484
void fn_80449484(s32);
// @addr 0x8044951c
void fn_8044951c(void);
// @addr 0x80449760
void fn_80449760(s32, s32, u32);
// @addr 0x80449860
void fn_80449860();
// @addr 0x804499b0
void fn_804499b0();
// @addr 0x80449b7c
void fn_80449b7c(s32);
// @addr 0x80449c4c
void fn_80449c4c(u64, s32, u32);
// @addr 0x80449cfc
void fn_80449cfc(s32, u32);
// @addr 0x80449d9c
void fn_80449d9c(void);
// @addr 0x80449fe0
void fn_80449fe0(s32, s32, u32);
// @addr 0x8044a0e0
void fn_8044a0e0();
// @addr 0x8044a230
void fn_8044a230();
// @addr 0x8044a3fc
void fn_8044a3fc(s32);
// @addr 0x8044acf0
void fn_8044acf0(f64, s32);
// @addr 0x8044ad10
void fn_8044ad10(s32, u32);
// @addr 0x8044add0
void fn_8044add0(s32, u32);
// @addr 0x8044ae48
void fn_8044ae48(s32, u32);
// @addr 0x8044af18
void fn_8044af18(s32, u32);
// @addr 0x8044afb8
void fn_8044afb8();
// @addr 0x8044b22c
void fn_8044b22c(u32*, u32, u32);
// @addr 0x8044b278
void fn_8044b278(u32*, s32, u32, u32);
// @addr 0x8044b338
void fn_8044b338(u32*, u32, u32);
// @addr 0x8044b3c4
void fn_8044b3c4(u32*, u32, u32);
// @addr 0x8044b474
void fn_8044b474(u32, u32, s32, u32);
// @addr 0x8044b518
void fn_8044b518(void);
// @addr 0x8044b784
void fn_8044b784(u32, u32);
// @addr 0x8044b7c0
void fn_8044b7c0();
// @addr 0x8044ba20
void fn_8044ba20();
// @addr 0x8044bbf4
void fn_8044bbf4(s32);
// @addr 0x8044bc30
void fn_8044bc30();
// @addr 0x8044be08
void fn_8044be08(u32, u32, u32);
// @addr 0x8044bef0
void fn_8044bef0(u32, u32, u32);
// @addr 0x8044bfd8
void fn_8044bfd8(u32, u32, u32);
// @addr 0x8044c038
void fn_8044c038(u32, u32, u32);
// @addr 0x8044c098
void fn_8044c098(u32, u32, u32);
// @addr 0x8044c16c
void fn_8044c16c(u32, u32, u32);
// @addr 0x8044c240
void fn_8044c240(u32, u32, u32);
// @addr 0x8044c2a0
void fn_8044c2a0();
// @addr 0x8044c514
void fn_8044c514(s32, u32);
// @addr 0x8044c5e4
void fn_8044c5e4(s32);
// @addr 0x8044c65c
void fn_8044c65c(u32, u32);
// @addr 0x8044c710
void fn_8044c710(s32, u32);
// @addr 0x8044c828
void fn_8044c828(s32, u32);
// @addr 0x8044c92c
void fn_8044c92c(s32*, u32);
// @addr 0x8044ca00
void fn_8044ca00(s32, u32);
// @addr 0x8044ca18
void fn_8044ca18(s32, u32);
// @addr 0x8044ca50
void fn_8044ca50(s32, u32);
// @addr 0x8044ca88
void fn_8044ca88(s32, s32*, s32, s32);
// @addr 0x8044cba4
void fn_8044cba4(s32);
// @addr 0x8044cc28
void fn_8044cc28(s32);
// @addr 0x8044ccb0
void fn_8044ccb0(u32, u32);
// @addr 0x8044cd5c
void fn_8044cd5c(u32, u32);
// @addr 0x8044ce14
void fn_8044ce14(u32, u32, u32);
// @addr 0x8044cf5c
void fn_8044cf5c(s32, s32);
// @addr 0x8044d168
void fn_8044d168(s32*);
// @addr 0x8044d274
void fn_8044d274(s32*, u32);
// @addr 0x8044d3dc
void fn_8044d3dc(s32*);
// @addr 0x8044d54c
void fn_8044d54c(s32);
// @addr 0x8044d640
void fn_8044d640(s32, u32);
// @addr 0x8044d710
void fn_8044d710(s32);
// @addr 0x8044d810
void fn_8044d810(s32, s32);
// @addr 0x8044d920
void fn_8044d920(s32);
// @addr 0x8044da04
void fn_8044da04(s32, u32);
// @addr 0x8044db0c
void fn_8044db0c();
// @addr 0x8044dca0
void fn_8044dca0();
// @addr 0x8044de14
void fn_8044de14();
// @addr 0x8044df94
void fn_8044df94(s32, u32);
// @addr 0x8044e0a8
void fn_8044e0a8(u32, u32, u32);
// @addr 0x8044e800
void fn_8044e800(u32, u32);
// @addr 0x8044ef04
void fn_8044ef04(void);
// @addr 0x8044efd4
void fn_8044efd4(s32, s32);
// @addr 0x8044f01c
void fn_8044f01c(s32);
// @addr 0x8044f06c
void fn_8044f06c(s32, s32);
// @addr 0x8044f108
void fn_8044f108(s32, u32, u32);
// @addr 0x8044f13c
void fn_8044f13c(u32);
// @addr 0x8044f1e4
void fn_8044f1e4(s32, u32);
// @addr 0x8044f228
void fn_8044f228(s32);
// @addr 0x8044f304
void fn_8044f304(s32);
// @addr 0x8044f3c8
void fn_8044f3c8(s32);
// @addr 0x8044f474
void fn_8044f474(s32*);
// @addr 0x8044f4f8
void fn_8044f4f8(s32, u32, s32);
// @addr 0x8044f5b4
void fn_8044f5b4(f64, s32*);
// @addr 0x8044f5f0
void fn_8044f5f0(u32*, u32, u32);
// @addr 0x8044f5fc
void fn_8044f5fc(s32*, u32, u32, u32);
// @addr 0x8044f6dc
void fn_8044f6dc(s32*, u32, u32);
// @addr 0x8044f7b0
void fn_8044f7b0(s32*, u32, u32);
// @addr 0x8044f884
void fn_8044f884(s32, u32, u32, u32);
// @addr 0x8044f964
void fn_8044f964(s32, u32, u32);
// @addr 0x8044fa38
void fn_8044fa38(s32, u32, u32);
// @addr 0x8044fb54
void fn_8044fb54(s32*, s32, s32, s32);
// @addr 0x8044fc6c
void fn_8044fc6c(s32*, s32, s32);
// @addr 0x8044fd70
void fn_8044fd70();
// @addr 0x8044ff4c
void fn_8044ff4c(s32*, s32, s32);

} // namespace Memory
} // namespace EGG
