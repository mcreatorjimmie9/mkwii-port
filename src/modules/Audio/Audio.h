#pragma once
// Audio module - Mario Kart Wii PC Port
// Phase 6: 942 functions
#include "../types.h"

#ifdef __cplusplus
extern "C" {
#endif

// 0x0x805100ac (address_range)
void snd_EGG_Sound_805100ac(int);

// 0x0x80510100 (address_range)
void snd_EGG_Sound_80510100(int);

// 0x0x805103e8 (address_range)
void snd_EGG_Sound_805103e8(void);

// 0x0x80510764 (address_range)
u32 * snd_EGG_Sound_80510764(u32);

// 0x0x805107a8 (address_range)
int EGG_Sound_validate_805107a8(int, int);

// 0x0x80510810 (address_range)
void snd_EGG_Sound_80510810(int);

// 0x0x805108d4 (address_range)
void EGG_Sound_validate_805108d4(int, u32, u32);

// 0x0x80510904 (address_range)
void EGG_Sound_validate_80510904(int, u32, u32);

// 0x0x80510968 (address_range)
u32 * snd_EGG_Sound_80510968(u32);

// 0x0x805109fc (address_range)
int EGG_Sound_validate_805109fc(int, int);

// 0x0x80510a88 (address_range)
void snd_EGG_Sound_80510a88(int);

// 0x0x80510bc0 (address_range)
void snd_EGG_Sound_80510bc0(int);

// 0x0x80510fa4 (address_range)
void snd_EGG_Sound_80510fa4(int);

// 0x0x80511000 (address_range)
void snd_EGG_Sound_80511000(int);

// 0x0x8051152c (address_range)
void snd_EGG_Sound_8051152c(int, u32);

// 0x0x80511880 (address_range)
u32 snd_EGG_Sound_80511880(void);

// 0x0x805118cc (address_range)
u32 snd_EGG_Sound_805118cc(int);

// 0x0x8051196c (address_range)
u32 snd_EGG_Sound_8051196c(void);

// 0x0x80511b68 (address_range)
int snd_EGG_Sound_80511b68(int, uint, uint);

// 0x0x80511bb0 (address_range)
void snd_EGG_Sound_80511bb0(int);

// 0x0x80512358 (address_range)
void snd_EGG_Sound_80512358(void);

// 0x0x8051253c (address_range)
void snd_EGG_Sound_8051253c(void);

// 0x0x805125e0 (address_range)
void snd_EGG_Sound_805125e0(int);

// 0x0x80512948 (address_range)
void EGG_Sound_validate_80512948(int, u32);

// 0x0x8051298c (address_range)
void EGG_Sound_validate_8051298c(u32);

// 0x0x80512a30 (address_range)
u32 EGG_Sound_validate_80512a30(int);

// 0x0x80512abc (address_range)
void snd_EGG_Sound_80512abc(int);

// 0x0x80512b50 (address_range)
void snd_EGG_Sound_80512b50(int);

// 0x0x80512c2c (address_range)
void snd_EGG_Sound_80512c2c(int);

// 0x0x80512c88 (address_range)
void snd_EGG_Sound_80512c88(int);

// 0x0x80512c90 (address_range)
void snd_EGG_Sound_80512c90(int, int, u32, u32, u32, u32);

// 0x0x80512d04 (address_range)
void snd_EGG_Sound_80512d04(int, int);

// 0x0x80512d8c (address_range)
void snd_EGG_Sound_80512d8c(int);

// 0x0x80512e00 (address_range)
void EGG_Sound_validate_80512e00(u32);

// 0x0x80512ed8 (address_range)
int EGG_Sound_validate_80512ed8(int, int);

// 0x0x80512f88 (address_range)
void EGG_Sound_assertFail_80512f88(void);

// 0x0x805131d4 (address_range)
void snd_EGG_Sound_805131d4(u32);

// 0x0x80513218 (address_range)
void snd_EGG_Sound_80513218(u32);

// 0x0x8051326c (address_range)
u32 * snd_EGG_Sound_8051326c(u32);

// 0x0x805132a8 (address_range)
int EGG_Sound_validate_805132a8(int, int);

// 0x0x80513300 (address_range)
void snd_EGG_Sound_80513300(u32, u32, u32, u32);

// 0x0x80513374 (address_range)
void snd_EGG_Sound_80513374(int);

// 0x0x80513408 (address_range)
void EGG_Sound_validate_80513408(u32);

// 0x0x805134d8 (address_range)
int EGG_Sound_validate_805134d8(int, int);

// 0x0x8051357c (address_range)
void snd_EGG_Sound_8051357c(int);

// 0x0x8051375c (address_range)
void snd_EGG_Sound_8051375c(int);

// 0x0x80513838 (address_range)
void EGG_Sound_validate_80513838(int, u32, u32);

// 0x0x80513898 (address_range)
int EGG_Sound_validate_80513898(int, int);

// 0x0x805138d8 (address_range)
u32 EGG_Sound_validate_805138d8(void);

// 0x0x80514620 (address_range)
u32 EGG_Sound_validate_80514620(void);

// 0x0x80514718 (address_range)
u32 EGG_Sound_validate_80514718(void);

// 0x0x80514808 (address_range)
u32 EGG_Sound_validate_80514808(void);

// 0x0x8051496c (address_range)
u32 EGG_Sound_validate_8051496c(void);

// 0x0x80514a5c (address_range)
u32 EGG_Sound_validate_80514a5c(void);

// 0x0x80514b4c (address_range)
u32 EGG_Sound_validate_80514b4c(void);

// 0x0x80514c74 (address_range)
uint EGG_Sound_validate_80514c74(void);

// 0x0x80514d2c (address_range)
u64 EGG_Sound_validate_80514d2c(void);

// 0x0x80514e20 (address_range)
u64 EGG_Sound_validate_80514e20(void);

// 0x0x80514f20 (address_range)
u32 EGG_Sound_validate_80514f20(u32, u32);

// 0x0x80514ff4 (address_range)
u32 EGG_Sound_validate_80514ff4(u32, u32);

// 0x0x805150e0 (address_range)
u32 * snd_EGG_Sound_805150e0(u32);

// 0x0x80515164 (address_range)
int EGG_Sound_validate_80515164(int, int);

// 0x0x805151d8 (address_range)
void snd_EGG_Sound_805151d8(int);

// 0x0x805152f8 (address_range)
void snd_EGG_Sound_805152f8(int);

// 0x0x8051534c (address_range)
void snd_EGG_Sound_8051534c(int);

// 0x0x80515494 (address_range)
void snd_EGG_Sound_80515494(int);

// 0x0x80515550 (address_range)
u32 * snd_EGG_Sound_80515550(u32);

// 0x0x8051558c (address_range)
int EGG_Sound_validate_8051558c(int, int);

// 0x0x805155e4 (address_range)
void snd_EGG_Sound_805155e4(u32, int, int);

// 0x0x805156bc (address_range)
void snd_EGG_Sound_805156bc(int);

// 0x0x805156f4 (address_range)
void snd_EGG_Sound_805156f4(int);

// 0x0x8051572c (address_range)
void snd_EGG_Sound_8051572c(int);

// 0x0x80515774 (address_range)
u32 * snd_EGG_Sound_80515774(u32);

// 0x0x805157b0 (address_range)
int EGG_Sound_validate_805157b0(int, int);

// 0x0x80515808 (address_range)
void EGG_Sound_validate_80515808(u32, int, u32, int);

// 0x0x805159b4 (address_range)
void snd_EGG_Sound_805159b4(int);

// 0x0x805159ec (address_range)
void EGG_Sound_assertFail_805159ec(void);

// 0x0x80515e58 (address_range)
void EGG_Sound_validate_80515e58(u32);

// 0x0x80515f24 (address_range)
u32 EGG_Sound_validate_80515f24(int);

// 0x0x80515fcc (address_range)
void EGG_Sound_assertFail_80515fcc(void);

// 0x0x8051647c (address_range)
void snd_EGG_Sound_8051647c(int);

// 0x0x80516558 (address_range)
void snd_EGG_Sound_80516558(int);

// 0x0x805167f8 (address_range)
void snd_EGG_Sound_805167f8(int);

// 0x0x805169bc (address_range)
void snd_EGG_Sound_805169bc(int);

// 0x0x80516a40 (address_range)
void snd_EGG_Sound_80516a40(int);

// 0x0x80516be0 (address_range)
void snd_EGG_Sound_80516be0(int);

// 0x0x80516e6c (address_range)
void snd_EGG_Sound_80516e6c(void);

// 0x0x80517120 (address_range)
void EGG_Sound_validate_80517120(int, u32);

// 0x0x80517150 (address_range)
void EGG_Sound_validate_80517150(int, u32);

// 0x0x805171ac (address_range)
void EGG_Sound_assertFail_805171ac(void);

// 0x0x80517334 (address_range)
int EGG_Sound_validate_80517334(int, int);

// 0x0x805173e0 (address_range)
void snd_EGG_Sound_805173e0(int);

// 0x0x80517634 (address_range)
void snd_EGG_Sound_80517634(int, u32);

// 0x0x80517850 (address_range)
void snd_EGG_Sound_80517850(int, u32);

// 0x0x805178dc (address_range)
void snd_EGG_Sound_805178dc(u32, u32);

// 0x0x80517928 (address_range)
u32 * snd_EGG_Sound_80517928(u32);

// 0x0x80517a40 (address_range)
int EGG_Sound_validate_80517a40(int, int);

// 0x0x80517ae0 (address_range)
void snd_EGG_Sound_80517ae0(int);

// 0x0x80517cc0 (address_range)
void snd_EGG_Sound_80517cc0(int, int);

// 0x0x80517dcc (address_range)
void EGG_Sound_validate_80517dcc(int, u32, u32);

// 0x0x80517dfc (address_range)
void EGG_Sound_validate_80517dfc(int, u32, u32);

// 0x0x80517e2c (address_range)
void EGG_Sound_validate_80517e2c(int, u32);

// 0x0x80517e5c (address_range)
void EGG_Sound_validate_80517e5c(int, u32);

// 0x0x80517ea8 (address_range)
u32 * snd_EGG_Sound_80517ea8(u32);

// 0x0x80517eec (address_range)
int EGG_Sound_validate_80517eec(int, int);

// 0x0x80517f54 (address_range)
void snd_EGG_Sound_80517f54(int);

// 0x0x80517fb0 (address_range)
void snd_EGG_Sound_80517fb0(int);

// 0x0x80518090 (address_range)
u32 * snd_EGG_Sound_80518090(u32);

// 0x0x80518124 (address_range)
int EGG_Sound_validate_80518124(int, int);

// 0x0x805181b0 (address_range)
void snd_EGG_Sound_805181b0(int);

// 0x0x805182d8 (address_range)
void snd_EGG_Sound_805182d8(int);

// 0x0x80518388 (address_range)
void snd_EGG_Sound_80518388(u32);

// 0x0x805183cc (address_range)
void snd_EGG_Sound_805183cc(u32);

// 0x0x80518430 (address_range)
void EGG_Sound_validate_80518430(int, u32);

// 0x0x8051847c (address_range)
u32 * snd_EGG_Sound_8051847c(u32);

// 0x0x80518530 (address_range)
int EGG_Sound_validate_80518530(int, int);

// 0x0x80518598 (address_range)
void snd_EGG_Sound_80518598(int);

// 0x0x80518604 (address_range)
void snd_EGG_Sound_80518604(int);

// 0x0x80518a24 (address_range)
void snd_EGG_Sound_80518a24(int);

// 0x0x80518b94 (address_range)
void snd_EGG_Sound_80518b94(int);

// 0x0x8051909c (address_range)
void snd_EGG_Sound_8051909c(int);

// 0x0x805192a0 (address_range)
void snd_EGG_Sound_805192a0(int);

// 0x0x80519450 (address_range)
void EGG_Sound_validate_80519450(int, u32);

// 0x0x80519480 (address_range)
void EGG_Sound_validate_80519480(int, u32);

// 0x0x805194d0 (address_range)
u32 * snd_EGG_Sound_805194d0(u32);

// 0x0x8051950c (address_range)
int EGG_Sound_validate_8051950c(int, int);

// 0x0x80519564 (address_range)
void snd_EGG_Sound_80519564(u32, u32, u32);

// 0x0x80519618 (address_range)
void snd_EGG_Sound_80519618(int);

// 0x0x80519650 (address_range)
void snd_EGG_Sound_80519650(int);

// 0x0x80519688 (address_range)
void snd_EGG_Sound_80519688(int);

// 0x0x805196c0 (address_range)
void EGG_Sound_validate_805196c0(u32);

// 0x0x8051975c (address_range)
u32 * snd_EGG_Sound_8051975c(u32);

// 0x0x805197b8 (address_range)
int EGG_Sound_validate_805197b8(int, int);

// 0x0x8051982c (address_range)
u32 EGG_Sound_validate_8051982c(int);

// 0x0x805198ac (address_range)
void snd_EGG_Sound_805198ac(int);

// 0x0x80519e44 (address_range)
void EGG_Sound_assertFail_80519e44(void);

// 0x0x8051a1f4 (address_range)
u32 * snd_EGG_Sound_8051a1f4(u32);

// 0x0x8051a230 (address_range)
int EGG_Sound_validate_8051a230(int, int);

// 0x0x8051a288 (address_range)
void snd_EGG_Sound_8051a288(int, u32);

// 0x0x8051a380 (address_range)
void snd_EGG_Sound_8051a380(int);

// 0x0x8051a3b8 (address_range)
void snd_EGG_Sound_8051a3b8(int);

// 0x0x8051a3f0 (address_range)
void snd_EGG_Sound_8051a3f0(int);

// 0x0x8051a428 (address_range)
uint snd_EGG_Sound_8051a428(int);

// 0x0x8051a470 (address_range)
void EGG_Sound_validate_8051a470(u32);

// 0x0x8051a50c (address_range)
u32 EGG_Sound_validate_8051a50c(int);

// 0x0x8051a58c (address_range)
void EGG_Sound_assertFail_8051a58c(void);

// 0x0x8051a800 (address_range)
void snd_EGG_Sound_8051a800(int);

// 0x0x8051a930 (address_range)
void snd_EGG_Sound_8051a930(int);

// 0x0x8051a9fc (address_range)
u32 * snd_EGG_Sound_8051a9fc(u32);

// 0x0x8051aa90 (address_range)
u32 EGG_Sound_validate_8051aa90(u32);

// 0x0x8051ab40 (address_range)
void EGG_Sound_validate_8051ab40(int);

// 0x0x8051ad2c (address_range)
void snd_EGG_Sound_8051ad2c(int);

// 0x0x8051aea8 (address_range)
void EGG_Sound_validate_8051aea8(int);

// 0x0x8051b248 (address_range)
void snd_EGG_Sound_8051b248(int);

// 0x0x8051b7fc (address_range)
void snd_EGG_Sound_8051b7fc(int);

// 0x0x8051b92c (address_range)
void snd_EGG_Sound_8051b92c(int);

// 0x0x8051ba2c (address_range)
void snd_EGG_Sound_8051ba2c(int);

// 0x0x8051bb2c (address_range)
void snd_EGG_Sound_8051bb2c(int);

// 0x0x8051bc2c (address_range)
void snd_EGG_Sound_8051bc2c(int);

// 0x0x8051bdc8 (address_range)
void snd_EGG_Sound_8051bdc8(int);

// 0x0x8051bed0 (address_range)
void EGG_Sound_validate_8051bed0(int, u32);

// 0x0x8051bf00 (address_range)
void EGG_Sound_validate_8051bf00(int, u32);

// 0x0x8051bf30 (address_range)
void EGG_Sound_validate_8051bf30(int, u32);

// 0x0x8051bf9c (address_range)
u32 * snd_EGG_Sound_8051bf9c(u32);

// 0x0x8051bfd8 (address_range)
int EGG_Sound_validate_8051bfd8(int, int);

// 0x0x8051c030 (address_range)
void snd_EGG_Sound_8051c030(u32);

// 0x0x8051c0b0 (address_range)
void snd_EGG_Sound_8051c0b0(int);

// 0x0x8051c114 (address_range)
void snd_EGG_Sound_8051c114(int);

// 0x0x8051c1c0 (address_range)
u32 * snd_EGG_Sound_8051c1c0(u32);

// 0x0x8051c22c (address_range)
int EGG_Sound_validate_8051c22c(int, int);

// 0x0x8051c2b0 (address_range)
void snd_EGG_Sound_8051c2b0(int);

// 0x0x8051c400 (address_range)
void snd_EGG_Sound_8051c400(int);

// 0x0x8051c58c (address_range)
void EGG_Sound_assertFail_8051c58c(void);

// 0x0x8051c774 (address_range)
int EGG_Sound_validate_8051c774(int, int);

// 0x0x8051c820 (address_range)
void snd_EGG_Sound_8051c820(int);

// 0x0x8051ca58 (address_range)
void snd_EGG_Sound_8051ca58(int);

// 0x0x8051cb1c (address_range)
void EGG_Sound_assertFail_8051cb1c(void);

// 0x0x8051d2ac (address_range)
void snd_EGG_Sound_8051d2ac(int);

// 0x0x8051d55c (address_range)
void snd_EGG_Sound_8051d55c(int);

// 0x0x8051d598 (address_range)
void snd_EGG_Sound_8051d598(int);

// 0x0x8051d680 (address_range)
void snd_EGG_Sound_8051d680(int);

// 0x0x8051d774 (address_range)
void snd_EGG_Sound_8051d774(int);

// 0x0x8051d920 (address_range)
void snd_EGG_Sound_8051d920(int);

// 0x0x8051da70 (address_range)
u32 * snd_EGG_Sound_8051da70(u32);

// 0x0x8051dae4 (address_range)
int EGG_Sound_validate_8051dae4(int, int);

// 0x0x8051db3c (address_range)
void snd_EGG_Sound_8051db3c(int, u32, byte, byte);

// 0x0x8051dc28 (address_range)
void snd_EGG_Sound_8051dc28(int);

// 0x0x8051dd14 (address_range)
void snd_EGG_Sound_8051dd14(int);

// 0x0x8051de90 (address_range)
void snd_EGG_Sound_8051de90(int, uint, int);

// 0x0x8051dfa8 (address_range)
void snd_EGG_Sound_8051dfa8(int, uint, int);

// 0x0x8051e00c (address_range)
void EGG_Sound_validate_8051e00c(int);

// 0x0x8051e0bc (address_range)
void snd_EGG_Sound_8051e0bc(int);

// 0x0x8051e14c (address_range)
void EGG_Sound_validate_8051e14c(u32);

// 0x0x8051e1e0 (address_range)
u32 EGG_Sound_validate_8051e1e0(int);

// 0x0x8051e288 (address_range)
void snd_EGG_Sound_8051e288(int);

// 0x0x8051e3c4 (address_range)
void snd_EGG_Sound_8051e3c4(int);

// 0x0x8051e534 (address_range)
void snd_EGG_Sound_8051e534(int);

// 0x0x8051e63c (address_range)
void snd_EGG_Sound_8051e63c(int);

// 0x0x8051e708 (address_range)
void snd_EGG_Sound_8051e708(void);

// 0x0x8051e754 (address_range)
void snd_EGG_Sound_8051e754(void);

// 0x0x8051f2c4 (address_range)
u32 snd_EGG_Sound_8051f2c4(uint, int);

// 0x0x8051f494 (address_range)
int EGG_Sound_validate_8051f494(int, int);

// 0x0x8051f54c (address_range)
void snd_EGG_Sound_8051f54c(uint);

// 0x0x8051f96c (address_range)
void snd_EGG_Sound_8051f96c(uint, u32, u32, uint);

// 0x0x8051fcdc (address_range)
void EGG_Sound_validate_8051fcdc(u32);

// 0x0x8051fd38 (address_range)
u32 EGG_Sound_validate_8051fd38(int);

// 0x0x8051fdac (address_range)
void EGG_Sound_assertFail_8051fdac(void);

// 0x0x8051ff04 (address_range)
void snd_EGG_Sound_8051ff04(int);

// 0x0x80520034 (address_range)
void snd_EGG_Sound_80520034(int);

// 0x0x805200cc (address_range)
void snd_EGG_Sound_805200cc(int);

// 0x0x8052013c (address_range)
void snd_EGG_Sound_8052013c(int, int);

// 0x0x8052019c (address_range)
void snd_EGG_Sound_8052019c(int, int);

// 0x0x80520234 (address_range)
bool snd_EGG_Sound_80520234(int);

// 0x0x8052026c (address_range)
bool snd_EGG_Sound_8052026c(int);

// 0x0x805202d8 (address_range)
void snd_EGG_Sound_805202d8(int, u32);

// 0x0x80520348 (address_range)
int snd_EGG_Sound_80520348(int);

// 0x0x805203a8 (address_range)
void EGG_Sound_assertFail_805203a8(void);

// 0x0x805205f0 (address_range)
u32 EGG_Sound_validate_805205f0(int);

// 0x0x805206c0 (address_range)
void snd_EGG_Sound_805206c0(int);

// 0x0x80520934 (address_range)
void snd_EGG_Sound_80520934(int);

// 0x0x80520cd8 (address_range)
void snd_EGG_Sound_80520cd8(int);

// 0x0x80520d74 (address_range)
void snd_EGG_Sound_80520d74(int);

// 0x0x80520dfc (address_range)
u32 snd_EGG_Sound_80520dfc(int);

// 0x0x80521070 (address_range)
void snd_EGG_Sound_80521070(int);

// 0x0x8052122c (address_range)
void snd_EGG_Sound_8052122c(u32, int);

// 0x0x80521334 (address_range)
void snd_EGG_Sound_80521334(u32, int);

// 0x0x8052143c (address_range)
void snd_EGG_Sound_8052143c(int, int);

// 0x0x80521684 (address_range)
void snd_EGG_Sound_80521684(int);

// 0x0x80521790 (address_range)
void snd_EGG_Sound_80521790(int);

// 0x0x80521898 (address_range)
void snd_EGG_Sound_80521898(int, u32);

// 0x0x805218ec (address_range)
u32 * snd_EGG_Sound_805218ec(u32);

// 0x0x80521948 (address_range)
int EGG_Sound_validate_80521948(int, int);

// 0x0x805219d4 (address_range)
void snd_EGG_Sound_805219d4(int);

// 0x0x80521b68 (address_range)
void snd_EGG_Sound_80521b68(int);

// 0x0x80521cf0 (address_range)
void snd_EGG_Sound_80521cf0(int);

// 0x0x80521d80 (address_range)
void EGG_Sound_assertFail_80521d80(void);

// 0x0x80522284 (address_range)
void snd_EGG_Sound_80522284(int);

// 0x0x80522644 (address_range)
void snd_EGG_Sound_80522644(int, u32);

// 0x0x8052264c (address_range)
void EGG_Sound_assertFail_8052264c(void);

// 0x0x80522e4c (address_range)
void EGG_Sound_validate_80522e4c(int, u32, u32);

// 0x0x80522e7c (address_range)
void EGG_Sound_validate_80522e7c(int, u32, u32);

// 0x0x80522eac (address_range)
void EGG_Sound_validate_80522eac(int, u32, u32);

// 0x0x80522edc (address_range)
void EGG_Sound_validate_80522edc(int, u32);

// 0x0x80522f0c (address_range)
void EGG_Sound_validate_80522f0c(int, u32);

// 0x0x80522f3c (address_range)
void EGG_Sound_validate_80522f3c(int, u32);

// 0x0x80522fa0 (address_range)
u32 * snd_EGG_Sound_80522fa0(u32);

// 0x0x805401ac (address_range)
void snd_EGG_Sound_805401ac(int);

// 0x0x80540260 (address_range)
void EGG_Sound_validate_80540260(int, u32);

// 0x0x805402a4 (address_range)
u32 * snd_EGG_Sound_805402a4(u32);

// 0x0x805402f0 (address_range)
int EGG_Sound_validate_805402f0(int, int);

// 0x0x80540364 (address_range)
void snd_EGG_Sound_80540364(int);

// 0x0x80540408 (address_range)
void snd_EGG_Sound_80540408(int);

// 0x0x80540478 (address_range)
u32 * snd_EGG_Sound_80540478(u32);

// 0x0x805404c4 (address_range)
int EGG_Sound_validate_805404c4(int, int);

// 0x0x80540538 (address_range)
void snd_EGG_Sound_80540538(int);

// 0x0x805405e0 (address_range)
void snd_EGG_Sound_805405e0(int);

// 0x0x8054062c (address_range)
void snd_EGG_Sound_8054062c(int);

// 0x0x80540728 (address_range)
u32 snd_EGG_Sound_80540728(u32);

// 0x0x80540758 (address_range)
int EGG_Sound_validate_80540758(int, int);

// 0x0x805407f4 (address_range)
void snd_EGG_Sound_805407f4(u32);

// 0x0x80540838 (address_range)
u32 * snd_EGG_Sound_80540838(u32);

// 0x0x80540874 (address_range)
int EGG_Sound_validate_80540874(int, int);

// 0x0x805408cc (address_range)
void snd_EGG_Sound_805408cc(u32);

// 0x0x8054096c (address_range)
void snd_EGG_Sound_8054096c(int);

// 0x0x805409a4 (address_range)
void snd_EGG_Sound_805409a4(int);

// 0x0x805409dc (address_range)
void snd_EGG_Sound_805409dc(int);

// 0x0x80540a24 (address_range)
u32 * snd_EGG_Sound_80540a24(u32);

// 0x0x80540a60 (address_range)
int EGG_Sound_validate_80540a60(int, int);

// 0x0x80540ab8 (address_range)
void EGG_Sound_validate_80540ab8(u32, int, int);

// 0x0x80540c30 (address_range)
void snd_EGG_Sound_80540c30(int);

// 0x0x80540c68 (address_range)
void EGG_Sound_assertFail_80540c68(void);

// 0x0x80541010 (address_range)
void EGG_Sound_validate_80541010(u32);

// 0x0x805410d4 (address_range)
u32 EGG_Sound_validate_805410d4(int);

// 0x0x80541170 (address_range)
void EGG_Sound_assertFail_80541170(void);

// 0x0x805414a4 (address_range)
void snd_EGG_Sound_805414a4(int);

// 0x0x805415a4 (address_range)
void snd_EGG_Sound_805415a4(int);

// 0x0x805416c0 (address_range)
void snd_EGG_Sound_805416c0(int);

// 0x0x805417e8 (address_range)
void snd_EGG_Sound_805417e8(int);

// 0x0x80541a28 (address_range)
void snd_EGG_Sound_80541a28(int);

// 0x0x80541bc4 (address_range)
void EGG_Sound_validate_80541bc4(int, u32);

// 0x0x80541c1c (address_range)
void EGG_Sound_validate_80541c1c(u32);

// 0x0x80541d08 (address_range)
u32 EGG_Sound_validate_80541d08(int);

// 0x0x80541db4 (address_range)
void EGG_Sound_assertFail_80541db4(void);

// 0x0x80542074 (address_range)
void snd_EGG_Sound_80542074(int);

// 0x0x80542330 (address_range)
void EGG_Sound_assertFail_80542330(void);

// 0x0x80542694 (address_range)
void snd_EGG_Sound_80542694(u32, u32);

// 0x0x805426dc (address_range)
void EGG_Sound_validate_805426dc(int, u32, u32);

// 0x0x8054272c (address_range)
u32 * snd_EGG_Sound_8054272c(u32);

// 0x0x80542768 (address_range)
int EGG_Sound_validate_80542768(int, int);

// 0x0x805427c0 (address_range)
void EGG_Sound_validate_805427c0(int, int, u32);

// 0x0x80542874 (address_range)
void snd_EGG_Sound_80542874(int);

// 0x0x805428ac (address_range)
void snd_EGG_Sound_805428ac(void);

// 0x0x805429a0 (address_range)
void EGG_Sound_validate_805429a0(u32);

// 0x0x80542a0c (address_range)
u32 EGG_Sound_validate_80542a0c(int);

// 0x0x80542a98 (address_range)
void EGG_Sound_validate_80542a98(int);

// 0x0x80542e20 (address_range)
void EGG_Sound_assertFail_80542e20(void);

// 0x0x80542e9c (address_range)
void EGG_Sound_assertFail_80542e9c(void);

// 0x0x80542ef0 (address_range)
void EGG_Sound_validate_80542ef0(int);

// 0x0x80543340 (address_range)
void EGG_Sound_validate_80543340(char);

// 0x0x80543578 (address_range)
void EGG_Sound_validate_80543578(int, u32, int, int);

// 0x0x80543820 (address_range)
void snd_EGG_Sound_80543820(u32, u32);

// 0x0x805438d0 (address_range)
u32 snd_EGG_Sound_805438d0(u32, int);

// 0x0x8054392c (address_range)
void snd_EGG_Sound_8054392c(void);

// 0x0x80543990 (address_range)
void snd_EGG_Sound_80543990(void);

// 0x0x80543a0c (address_range)
u32 * snd_EGG_Sound_80543a0c(u32);

// 0x0x80543a64 (address_range)
int EGG_Sound_validate_80543a64(int, int);

// 0x0x80543aa4 (address_range)
int EGG_Sound_validate_80543aa4(int, int);

// 0x0x80543ae4 (address_range)
int EGG_Sound_validate_80543ae4(int, int);

// 0x0x80543b3c (address_range)
void snd_EGG_Sound_80543b3c(int);

// 0x0x80543c50 (address_range)
bool snd_EGG_Sound_80543c50(int);

// 0x0x80543d68 (address_range)
void EGG_Sound_assertFail_80543d68(void);

// 0x0x805440c0 (address_range)
int snd_EGG_Sound_805440c0(int, int);

// 0x0x80544364 (address_range)
void snd_EGG_Sound_80544364(void);

// 0x0x80544370 (address_range)
void snd_EGG_Sound_80544370(void);

// 0x0x80544428 (address_range)
u32 snd_EGG_Sound_80544428(void);

// 0x0x80544438 (address_range)
u32 snd_EGG_Sound_80544438(u32, uint);

// 0x0x805444c0 (address_range)
u32 snd_EGG_Sound_805444c0(u32, int);

// 0x0x80544530 (address_range)
uint snd_EGG_Sound_80544530(u32, int);

// 0x0x8054459c (address_range)
void snd_EGG_Sound_8054459c(void);

// 0x0x8054464c (address_range)
void snd_EGG_Sound_8054464c(int);

// 0x0x80544718 (address_range)
void EGG_Sound_assertFail_80544718(void);

// 0x0x80544920 (address_range)
void snd_EGG_Sound_80544920(int);

// 0x0x80544d7c (address_range)
void snd_EGG_Sound_80544d7c(int);

// 0x0x805450b8 (address_range)
void snd_EGG_Sound_805450b8(int);

// 0x0x80545364 (address_range)
void snd_EGG_Sound_80545364(int);

// 0x0x80545470 (address_range)
void snd_EGG_Sound_80545470(short);

// 0x0x8054573c (address_range)
void EGG_Sound_validate_8054573c(u32);

// 0x0x805457c4 (address_range)
void EGG_Sound_assertFail_805457c4(void);

// 0x0x80545828 (address_range)
void EGG_Sound_assertFail_80545828(void);

// 0x0x80545dc0 (address_range)
void snd_EGG_Sound_80545dc0(int);

// 0x0x80545dcc (address_range)
void EGG_Sound_assertFail_80545dcc(void);

// 0x0x80545e88 (address_range)
void EGG_Sound_assertFail_80545e88(void);

// 0x0x80545f44 (address_range)
void EGG_Sound_assertFail_80545f44(void);

// 0x0x80546000 (address_range)
void EGG_Sound_assertFail_80546000(void);

// 0x0x805460bc (address_range)
void EGG_Sound_assertFail_805460bc(void);

// 0x0x805461ec (address_range)
void EGG_Sound_assertFail_805461ec(void);

// 0x0x8054631c (address_range)
void EGG_Sound_assertFail_8054631c(void);

// 0x0x805463f0 (address_range)
void EGG_Sound_assertFail_805463f0(void);

// 0x0x805464b0 (address_range)
void snd_EGG_Sound_805464b0(int);

// 0x0x80546508 (address_range)
void snd_EGG_Sound_80546508(int);

// 0x0x80546520 (address_range)
void snd_EGG_Sound_80546520(int);

// 0x0x80546538 (address_range)
void EGG_Sound_validate_80546538(int);

// 0x0x805465cc (address_range)
void EGG_Sound_validate_805465cc(int);

// 0x0x80546648 (address_range)
void EGG_Sound_validate_80546648(int);

// 0x0x805466a4 (address_range)
u32 EGG_Sound_validate_805466a4(int);

// 0x0x80546704 (address_range)
void EGG_Sound_validate_80546704(u32);

// 0x0x8054675c (address_range)
void EGG_Sound_validate_8054675c(u32);

// 0x0x80546784 (address_range)
void EGG_Sound_assertFail_80546784(void);

// 0x0x805468b8 (address_range)
void EGG_Sound_validate_805468b8(u32, u32, int);

// 0x0x805469b4 (address_range)
void EGG_Sound_assertFail_805469b4(void);

// 0x0x80546a5c (address_range)
void EGG_Sound_validate_80546a5c(int);

// 0x0x80546a88 (address_range)
void EGG_Sound_assertFail_80546a88(void);

// 0x0x80546b18 (address_range)
u32 snd_EGG_Sound_80546b18(int);

// 0x0x80546b58 (address_range)
void EGG_Sound_validate_80546b58(int);

// 0x0x80546c1c (address_range)
void EGG_Sound_validate_80546c1c(u32);

// 0x0x80546ff4 (address_range)
int EGG_Sound_validate_80546ff4(int, int);

// 0x0x80547034 (address_range)
u32 EGG_Sound_validate_80547034(u32);

// 0x0x8054711c (address_range)
void EGG_Sound_validate_8054711c(int);

// 0x0x80547688 (address_range)
void snd_EGG_Sound_80547688(u32);

// 0x0x805476c8 (address_range)
void EGG_Sound_validate_805476c8(int);

// 0x0x80547a48 (address_range)
void EGG_Sound_validate_80547a48(int);

// 0x0x80547bfc (address_range)
u32 EGG_Sound_validate_80547bfc(int, uint);

// 0x0x80547d60 (address_range)
void EGG_Sound_assertFail_80547d60(void);

// 0x0x80547de4 (address_range)
void EGG_Sound_assertFail_80547de4(void);

// 0x0x80547f44 (address_range)
u32 EGG_Sound_validate_80547f44(int, int);

// 0x0x80547fcc (address_range)
void EGG_Sound_validate_80547fcc(int, int);

// 0x0x80548030 (address_range)
u32 EGG_Sound_validate_80548030(u32, int);

// 0x0x805480b0 (address_range)
void EGG_Sound_validate_805480b0(u32, int);

// 0x0x80548118 (address_range)
u32 EGG_Sound_validate_80548118(u32, int);

// 0x0x805481a4 (address_range)
void EGG_Sound_validate_805481a4(u32, int);

// 0x0x8054822c (address_range)
void EGG_Sound_validate_8054822c(int);

// 0x0x80548330 (address_range)
void EGG_Sound_assertFail_80548330(void);

// 0x0x80548380 (address_range)
void EGG_Sound_assertFail_80548380(void);

// 0x0x8054843c (address_range)
void EGG_Sound_assertFail_8054843c(void);

// 0x0x80548540 (address_range)
void EGG_Sound_validate_80548540(int);

// 0x0x805485a8 (address_range)
void EGG_Sound_validate_805485a8(int, uint);

// 0x0x805487b4 (address_range)
void EGG_Sound_assertFail_805487b4(void);

// 0x0x80548954 (address_range)
void EGG_Sound_validate_80548954(int);

// 0x0x805489f8 (address_range)
void EGG_Sound_validate_805489f8(int);

// 0x0x80548c5c (address_range)
void EGG_Sound_validate_80548c5c(int);

// 0x0x80548d88 (address_range)
void EGG_Sound_assertFail_80548d88(void);

// 0x0x805491d0 (address_range)
void EGG_Sound_validate_805491d0(int);

// 0x0x80549234 (address_range)
void EGG_Sound_validate_80549234(int);

// 0x0x80549298 (address_range)
void EGG_Sound_assertFail_80549298(void);

// 0x0x805494dc (address_range)
void EGG_Sound_assertFail_805494dc(void);

// 0x0x80549654 (address_range)
void EGG_Sound_validate_80549654(int, uint);

// 0x0x8054969c (address_range)
void EGG_Sound_validate_8054969c(u32, u32, int, u32);

// 0x0x805497d8 (address_range)
void snd_EGG_Sound_805497d8(int);

// 0x0x80549938 (address_range)
void snd_EGG_Sound_80549938(int);

// 0x0x80549970 (address_range)
uint snd_EGG_Sound_80549970(int, int);

// 0x0x80549bbc (address_range)
uint snd_EGG_Sound_80549bbc(int, int);

// 0x0x80549ccc (address_range)
void EGG_Sound_validate_80549ccc(int);

// 0x0x80549e64 (address_range)
void EGG_Sound_validate_80549e64(u32, u32);

// 0x0x80549ec4 (address_range)
u32 EGG_Sound_validate_80549ec4(u32);

// 0x0x80549f24 (address_range)
void EGG_Sound_validate_80549f24(u32);

// 0x0x80549f64 (address_range)
void EGG_Sound_validate_80549f64(u32);

// 0x0x80549fa4 (address_range)
void EGG_Sound_validate_80549fa4(int);

// 0x0x80549ff4 (address_range)
void EGG_Sound_assertFail_80549ff4(void);

// 0x0x8054a08c (address_range)
u32 * EGG_Sound_validate_8054a08c(u32, int);

// 0x0x8054a110 (address_range)
void snd_EGG_Sound_8054a110(u16);

// 0x0x8054a1f8 (address_range)
uint snd_EGG_Sound_8054a1f8(int, int, int);

// 0x0x8054a264 (address_range)
uint snd_EGG_Sound_8054a264(int, int, int);

// 0x0x8054a380 (address_range)
u32 snd_EGG_Sound_8054a380(u32, uint, int);

// 0x0x8054a4ec (address_range)
void snd_EGG_Sound_8054a4ec(u32, int, int);

// 0x0x8054a58c (address_range)
void EGG_Sound_validate_8054a58c(int);

// 0x0x8054a6a0 (address_range)
void EGG_Sound_assertFail_8054a6a0(void);

// 0x0x8054a764 (address_range)
void EGG_Sound_assertFail_8054a764(void);

// 0x0x8054a8ac (address_range)
void snd_EGG_Sound_8054a8ac(u32);

// 0x0x8054a930 (address_range)
void EGG_Sound_validate_8054a930(char);

// 0x0x8054aa88 (address_range)
void snd_EGG_Sound_8054aa88(int, u32);

// 0x0x8054ab7c (address_range)
u32 snd_EGG_Sound_8054ab7c(int, int);

// 0x0x8054ab8c (address_range)
void snd_EGG_Sound_8054ab8c(int, int, u32);

// 0x0x8054ac20 (address_range)
int EGG_Sound_validate_8054ac20(int, int);

// 0x0x8054ac60 (address_range)
void EGG_Sound_assertFail_8054ac60(void);

// 0x0x8054adac (address_range)
void EGG_Sound_validate_8054adac(int);

// 0x0x8054af6c (address_range)
void EGG_Sound_assertFail_8054af6c(void);

// 0x0x8054b084 (address_range)
void EGG_Sound_assertFail_8054b084(void);

// 0x0x8054b0c4 (address_range)
void EGG_Sound_validate_8054b0c4(int);

// 0x0x8054b1b4 (address_range)
void snd_EGG_Sound_8054b1b4(char);

// 0x0x8054b204 (address_range)
void EGG_Sound_validate_8054b204(int, u32, u32);

// 0x0x8054b358 (address_range)
ulonglong snd_EGG_Sound_8054b358(int);

// 0x0x8054b41c (address_range)
void EGG_Sound_validate_8054b41c(u32);

// 0x0x8054b510 (address_range)
int EGG_Sound_validate_8054b510(int, int);

// 0x0x8054b550 (address_range)
void EGG_Sound_validate_8054b550(int);

// 0x0x8054b618 (address_range)
void EGG_Sound_assertFail_8054b618(void);

// 0x0x8054b768 (address_range)
void EGG_Sound_validate_8054b768(int);

// 0x0x8054b8c4 (address_range)
void snd_EGG_Sound_8054b8c4(int);

// 0x0x8054bb70 (address_range)
void snd_EGG_Sound_8054bb70(int, uint);

// 0x0x8054bc90 (address_range)
void EGG_Sound_assertFail_8054bc90(void);

// 0x0x8054bf70 (address_range)
int EGG_Sound_validate_8054bf70(int, int);

// 0x0x8054bfb0 (address_range)
int EGG_Sound_validate_8054bfb0(int, int);

// 0x0x8054bff0 (address_range)
void EGG_Sound_assertFail_8054bff0(void);

// 0x0x8054c0c4 (address_range)
void snd_EGG_Sound_8054c0c4(void);

// 0x0x8054c108 (address_range)
void EGG_Sound_validate_8054c108(int);

// 0x0x8054c460 (address_range)
void snd_EGG_Sound_8054c460(int);

// 0x0x8054c5b4 (address_range)
int snd_EGG_Sound_8054c5b4(int);

// 0x0x8054c5d4 (address_range)
u32 snd_EGG_Sound_8054c5d4(int);

// 0x0x8054c630 (address_range)
int snd_EGG_Sound_8054c630(int);

// 0x0x8054c638 (address_range)
int snd_EGG_Sound_8054c638(int, uint, int);

// 0x0x8054c688 (address_range)
int snd_EGG_Sound_8054c688(int, uint, int);

// 0x0x8054c6d8 (address_range)
int snd_EGG_Sound_8054c6d8(int, uint, int);

// 0x0x8054c728 (address_range)
int snd_EGG_Sound_8054c728(int, uint, int);

// 0x0x8054c770 (address_range)
u32 snd_EGG_Sound_8054c770(int, uint, int);

// 0x0x8054c7f0 (address_range)
bool snd_EGG_Sound_8054c7f0(int);

// 0x0x8054c874 (address_range)
uint snd_EGG_Sound_8054c874(int);

// 0x0x8054c958 (address_range)
int EGG_Sound_validate_8054c958(int, int);

// 0x0x8054ca18 (address_range)
void EGG_Sound_validate_8054ca18(int);

// 0x0x8054cb64 (address_range)
void EGG_Sound_validate_8054cb64(int);

// 0x0x8054cc58 (address_range)
void EGG_Sound_validate_8054cc58(u32, int);

// 0x0x8054cd34 (address_range)
void EGG_Sound_validate_8054cd34(u32, u32);

// 0x0x8054cda0 (address_range)
void EGG_Sound_assertFail_8054cda0(void);

// 0x0x8054d014 (address_range)
void snd_EGG_Sound_8054d014(void);

// 0x0x8054d080 (address_range)
void EGG_Sound_assertFail_8054d080(void);

// 0x0x8054d1dc (address_range)
void EGG_Sound_validate_8054d1dc(int);

// 0x0x8054d3ec (address_range)
void EGG_Sound_validate_8054d3ec(int, u32, u32, u32);

// 0x0x8054d614 (address_range)
void EGG_Sound_validate_8054d614(int);

// 0x0x8054da98 (address_range)
void snd_EGG_Sound_8054da98(int);

// 0x0x8054db78 (address_range)
void snd_EGG_Sound_8054db78(int);

// 0x0x8054dbc0 (address_range)
void snd_EGG_Sound_8054dbc0(int);

// 0x0x8054de4c (address_range)
void snd_EGG_Sound_8054de4c(int);

// 0x0x8054e198 (address_range)
void snd_EGG_Sound_8054e198(int);

// 0x0x8054e3f4 (address_range)
void snd_EGG_Sound_8054e3f4(int, uint);

// 0x0x8054e6ec (address_range)
void snd_EGG_Sound_8054e6ec(u32, uint);

// 0x0x8054e8dc (address_range)
void EGG_Sound_assertFail_8054e8dc(void);

// 0x0x8054ea04 (address_range)
void EGG_Sound_assertFail_8054ea04(void);

// 0x0x8054ea44 (address_range)
void EGG_Sound_validate_8054ea44(int);

// 0x0x8054eb8c (address_range)
void EGG_Sound_validate_8054eb8c(int);

// 0x0x8054ecf8 (address_range)
void EGG_Sound_validate_8054ecf8(int);

// 0x0x8054ed28 (address_range)
void EGG_Sound_validate_8054ed28(int);

// 0x0x8054ed58 (address_range)
void EGG_Sound_validate_8054ed58(int);

// 0x0x8054ed60 (address_range)
void EGG_Sound_assertFail_8054ed60(void);

// 0x0x8054ed8c (address_range)
void EGG_Sound_validate_8054ed8c(int, int);

// 0x0x8054ee94 (address_range)
bool snd_EGG_Sound_8054ee94(int);

// 0x0x8054eea4 (address_range)
void EGG_Sound_validate_8054eea4(int, int);

// 0x0x8054eedc (address_range)
void EGG_Sound_validate_8054eedc(u32, u32);

// 0x0x8054ef0c (address_range)
void EGG_Sound_validate_8054ef0c(int, u32);

// 0x0x8054ef44 (address_range)
void EGG_Sound_validate_8054ef44(u32, u32);

// 0x0x8054efbc (address_range)
u32 EGG_Sound_validate_8054efbc(void);

// 0x0x8054f088 (address_range)
void EGG_Sound_validate_8054f088(int);

// 0x0x8054f0e8 (address_range)
void EGG_Sound_validate_8054f0e8(u32);

// 0x0x8054f1ec (address_range)
void EGG_Sound_assertFail_8054f1ec(void);

// 0x0x8054f380 (address_range)
void snd_EGG_Sound_8054f380(void);

// 0x0x8054f3d0 (address_range)
void snd_EGG_Sound_8054f3d0(u32);

// 0x0x8054f51c (address_range)
void snd_EGG_Sound_8054f51c(char);

// 0x0x8054f8f8 (address_range)
uint snd_EGG_Sound_8054f8f8(int);

// 0x0x8054fb08 (address_range)
u32 snd_EGG_Sound_8054fb08(int, int, int);

// 0x0x8054fb20 (address_range)
u32 snd_EGG_Sound_8054fb20(int, int, int);

// 0x0x8054fb38 (address_range)
bool snd_EGG_Sound_8054fb38(int, uint, int);

// 0x0x8054fc94 (address_range)
u32 snd_EGG_Sound_8054fc94(int, int, int);

// 0x0x8054fca8 (address_range)
u32 snd_EGG_Sound_8054fca8(int);

// 0x0x8054fe10 (address_range)
uint snd_EGG_Sound_8054fe10(int);

// 0x0x8056020c (address_range)
void EGG_Sound_validate_8056020c(int, u32, u32, u32);

// 0x0x8056037c (address_range)
void snd_EGG_Sound_8056037c(int);

// 0x0x805603d8 (address_range)
bool snd_EGG_Sound_805603d8(int, u32, u32, u32);

// 0x0x80560528 (address_range)
bool snd_EGG_Sound_80560528(int, int, u32, u32);

// 0x0x80560678 (address_range)
bool snd_EGG_Sound_80560678(int, u32, u32, u32);

// 0x0x805607c8 (address_range)
void EGG_Sound_validate_805607c8(int, u32, int, u32);

// 0x0x8056093c (address_range)
void EGG_Sound_validate_8056093c(int, int, u32);

// 0x0x80560a90 (address_range)
void EGG_Sound_validate_80560a90(int, u32, u32, u32);

// 0x0x80560c10 (address_range)
void EGG_Sound_assertFail_80560c10(void);

// 0x0x80560e54 (address_range)
u32 snd_EGG_Sound_80560e54(int, u32);

// 0x0x80560f94 (address_range)
u32 snd_EGG_Sound_80560f94(int, int, int, u32);

// 0x0x805610d0 (address_range)
void EGG_Sound_assertFail_805610d0(void);

// 0x0x80561168 (address_range)
void EGG_Sound_assertFail_80561168(void);

// 0x0x80561298 (address_range)
u32 EGG_Sound_validate_80561298(u32, u32, int);

// 0x0x80561374 (address_range)
u32 EGG_Sound_validate_80561374(u32, int, u32, int);

// 0x0x80561420 (address_range)
u32 EGG_Sound_validate_80561420(int);

// 0x0x8056149c (address_range)
u32 EGG_Sound_validate_8056149c(int);

// 0x0x80561508 (address_range)
void EGG_Sound_validate_80561508(u32, u32);

// 0x0x80561574 (address_range)
void EGG_Sound_assertFail_80561574(void);

// 0x0x805615c4 (address_range)
void EGG_Sound_validate_805615c4(int, u32);

// 0x0x8056170c (address_range)
void EGG_Sound_validate_8056170c(int, u32);

// 0x0x80561844 (address_range)
u32 EGG_Sound_validate_80561844(int, u32);

// 0x0x80561a68 (address_range)
u32 EGG_Sound_validate_80561a68(u32, u32, u32);

// 0x0x80561b6c (address_range)
u32 EGG_Sound_validate_80561b6c(int);

// 0x0x80561d90 (address_range)
void EGG_Sound_assertFail_80561d90(void);

// 0x0x80561e68 (address_range)
void snd_EGG_Sound_80561e68(int);

// 0x0x8056200c (address_range)
void EGG_Sound_validate_8056200c(u32, u32);

// 0x0x80562060 (address_range)
void EGG_Sound_validate_80562060(u32, u32);

// 0x0x80562184 (address_range)
void snd_EGG_Sound_80562184(void);

// 0x0x80562410 (address_range)
u32 snd_EGG_Sound_80562410(void);

// 0x0x805624bc (address_range)
u32 snd_EGG_Sound_805624bc(int, u32);

// 0x0x80562784 (address_range)
void EGG_Sound_validate_80562784(u32, u32);

// 0x0x805628a8 (address_range)
void EGG_Sound_validate_805628a8(int, int);

// 0x0x80562a18 (address_range)
void EGG_Sound_assertFail_80562a18(void);

// 0x0x80562a6c (address_range)
void EGG_Sound_assertFail_80562a6c(void);

// 0x0x80562b84 (address_range)
u32 snd_EGG_Sound_80562b84(void);

// 0x0x80562bc4 (address_range)
void EGG_Sound_assertFail_80562bc4(void);

// 0x0x80562c10 (address_range)
u32 EGG_Sound_validate_80562c10(u32, int);

// 0x0x80562d20 (address_range)
u32 EGG_Sound_validate_80562d20(int);

// 0x0x80562e84 (address_range)
int snd_EGG_Sound_80562e84(int, int);

// 0x0x80562ff0 (address_range)
void EGG_Sound_validate_80562ff0(int, int, int);

// 0x0x8056319c (address_range)
u32 snd_EGG_Sound_8056319c(int);

// 0x0x805631a8 (address_range)
u32 snd_EGG_Sound_805631a8(int, u16);

// 0x0x80563240 (address_range)
void EGG_Sound_assertFail_80563240(void);

// 0x0x805632ac (address_range)
u32 snd_EGG_Sound_805632ac(int);

// 0x0x805632b8 (address_range)
u32 snd_EGG_Sound_805632b8(int);

// 0x0x805632cc (address_range)
void EGG_Sound_validate_805632cc(int, int, uint);

// 0x0x80563b58 (address_range)
void EGG_Sound_validate_80563b58(u32);

// 0x0x80563b64 (address_range)
u32 snd_EGG_Sound_80563b64(u32);

// 0x0x80563b6c (address_range)
u32 snd_EGG_Sound_80563b6c(int);

// 0x0x80563b74 (address_range)
u32 snd_EGG_Sound_80563b74(int);

// 0x0x80563b7c (address_range)
void EGG_Sound_validate_80563b7c(int);

// 0x0x80563cbc (address_range)
void EGG_Sound_validate_80563cbc(u32, u32);

// 0x0x80563d04 (address_range)
void EGG_Sound_validate_80563d04(u32, int, u32, u32);

// 0x0x80563d80 (address_range)
void EGG_Sound_assertFail_80563d80(void);

// 0x0x80563f20 (address_range)
u32 EGG_Sound_validate_80563f20(u32, int, u32);

// 0x0x80563fec (address_range)
u32 EGG_Sound_validate_80563fec(u32, u32, u32, int, u32);

// 0x0x80564094 (address_range)
void EGG_Sound_validate_80564094(int, u32, int, u32, u32);

// 0x0x805641bc (address_range)
void EGG_Sound_validate_805641bc(int, u32, u32, u32);

// 0x0x80564248 (address_range)
void EGG_Sound_validate_80564248(int, u32, u32);

// 0x0x805642cc (address_range)
void EGG_Sound_validate_805642cc(int, u32, u32, u32, u32);

// 0x0x805643c8 (address_range)
void EGG_Sound_validate_805643c8(int, u32, u32, u32, u32);

// 0x0x805644a0 (address_range)
void EGG_Sound_validate_805644a0(int, u32);

// 0x0x80564530 (address_range)
void EGG_Sound_validate_80564530(int, u32, u32);

// 0x0x80564624 (address_range)
void EGG_Sound_validate_80564624(u32, u32, int, int);

// 0x0x805646bc (address_range)
void EGG_Sound_validate_805646bc(u32, u32, int, int);

// 0x0x805647a0 (address_range)
void EGG_Sound_validate_805647a0(int, int, int);

// 0x0x805648ec (address_range)
void EGG_Sound_validate_805648ec(int, int, int);

// 0x0x80564998 (address_range)
void EGG_Sound_validate_80564998(int, int, int);

// 0x0x80564b18 (address_range)
void EGG_Sound_validate_80564b18(u32, u32);

// 0x0x80564bd4 (address_range)
void EGG_Sound_validate_80564bd4(int, int, int);

// 0x0x80564c54 (address_range)
void EGG_Sound_validate_80564c54(u32, int, int);

// 0x0x80564cc0 (address_range)
void EGG_Sound_validate_80564cc0(u32, int, int);

// 0x0x80564d38 (address_range)
void snd_EGG_Sound_80564d38(u32, u32, int);

// 0x0x80564de0 (address_range)
void EGG_Sound_validate_80564de0(int, int, int);

// 0x0x80564ec8 (address_range)
void EGG_Sound_assertFail_80564ec8(void);

// 0x0x80564fb4 (address_range)
u32 snd_EGG_Sound_80564fb4(u32);

// 0x0x80564fbc (address_range)
void EGG_Sound_assertFail_80564fbc(void);

// 0x0x8056507c (address_range)
void EGG_Sound_validate_8056507c(u32, u32, u32, u32);

// 0x0x8056518c (address_range)
void EGG_Sound_assertFail_8056518c(void);

// 0x0x805652f0 (address_range)
void EGG_Sound_assertFail_805652f0(void);

// 0x0x80565364 (address_range)
void EGG_Sound_assertFail_80565364(void);

// 0x0x805653e8 (address_range)
void EGG_Sound_assertFail_805653e8(void);

// 0x0x805654b4 (address_range)
void EGG_Sound_validate_805654b4(u32, int, u32, u32, int);

// 0x0x805657d0 (address_range)
void EGG_Sound_assertFail_805657d0(void);

// 0x0x80565888 (address_range)
void EGG_Sound_assertFail_80565888(void);

// 0x0x80565908 (address_range)
void EGG_Sound_validate_80565908(u32, u32, u32);

// 0x0x80565960 (address_range)
void EGG_Sound_assertFail_80565960(void);

// 0x0x805659b8 (address_range)
void EGG_Sound_assertFail_805659b8(void);

// 0x0x80565b90 (address_range)
u32 EGG_Sound_validate_80565b90(void);

// 0x0x80565d48 (address_range)
void EGG_Sound_assertFail_80565d48(void);

// 0x0x805660d0 (address_range)
u32 EGG_Sound_validate_805660d0(void);

// 0x0x80566294 (address_range)
void EGG_Sound_assertFail_80566294(void);

// 0x0x8056651c (address_range)
u32 EGG_Sound_validate_8056651c(void);

// 0x0x805666e0 (address_range)
u32 EGG_Sound_validate_805666e0(void);

// 0x0x805668c4 (address_range)
u32 EGG_Sound_validate_805668c4(void);

// 0x0x80566aa8 (address_range)
void EGG_Sound_assertFail_80566aa8(void);

// 0x0x80566bb4 (address_range)
u32 EGG_Sound_validate_80566bb4(void);

// 0x0x80566dd8 (address_range)
void EGG_Sound_assertFail_80566dd8(void);

// 0x0x80566ee4 (address_range)
u32 EGG_Sound_validate_80566ee4(void);

// 0x0x80567228 (address_range)
u32 * snd_EGG_Sound_80567228(u32);

// 0x0x805691a4 (address_range)
u32 EGG_Sound_validate_805691a4(int);

// 0x0x80569288 (address_range)
void snd_EGG_Sound_80569288(int);

// 0x0x80569560 (address_range)
void snd_EGG_Sound_80569560(int);

// 0x0x80569740 (address_range)
void snd_EGG_Sound_80569740(int);

// 0x0x805698a4 (address_range)
void snd_EGG_Sound_805698a4(int, int);

// 0x0x8056999c (address_range)
void snd_EGG_Sound_8056999c(int);

// 0x0x80569aa8 (address_range)
void snd_EGG_Sound_80569aa8(int);

// 0x0x80569bb0 (address_range)
void snd_EGG_Sound_80569bb0(u32, u32);

// 0x0x80569c14 (address_range)
u32 * snd_EGG_Sound_80569c14(u32);

// 0x0x80569c60 (address_range)
int EGG_Sound_validate_80569c60(int, int);

// 0x0x80569cd4 (address_range)
void EGG_Sound_validate_80569cd4(int);

// 0x0x80569d70 (address_range)
void snd_EGG_Sound_80569d70(int);

// 0x0x80569eac (address_range)
void snd_EGG_Sound_80569eac(int);

// 0x0x8056a2c8 (address_range)
void snd_EGG_Sound_8056a2c8(int);

// 0x0x8056a3e8 (address_range)
void EGG_Sound_validate_8056a3e8(int, u32, u32);

// 0x0x8056a418 (address_range)
void EGG_Sound_validate_8056a418(int, u32, u32);

// 0x0x8056a448 (address_range)
void EGG_Sound_validate_8056a448(int, u32, u32);

// 0x0x8056a478 (address_range)
void EGG_Sound_validate_8056a478(int, u32);

// 0x0x8056a4a8 (address_range)
void EGG_Sound_validate_8056a4a8(int, u32);

// 0x0x8056a504 (address_range)
void snd_EGG_Sound_8056a504(u32);

// 0x0x8056a510 (address_range)
u32 snd_EGG_Sound_8056a510(u32);

// 0x0x8056a520 (address_range)
void EGG_Sound_assertFail_8056a520(void);

// 0x0x8056a714 (address_range)
void EGG_Sound_validate_8056a714(u32, u32);

// 0x0x8056a818 (address_range)
u32 * snd_EGG_Sound_8056a818(u32);

// 0x0x8056a85c (address_range)
int EGG_Sound_validate_8056a85c(int, int);

// 0x0x8056a8c4 (address_range)
void EGG_Sound_validate_8056a8c4(int);

// 0x0x8056a954 (address_range)
void snd_EGG_Sound_8056a954(int);

// 0x0x8056aa60 (address_range)
void snd_EGG_Sound_8056aa60(int);

// 0x0x8056ae28 (address_range)
void snd_EGG_Sound_8056ae28(int);

// 0x0x8056af30 (address_range)
u32 * EGG_Sound_validate_8056af30(u32);

// 0x0x8056afa0 (address_range)
int EGG_Sound_validate_8056afa0(int, int);

// 0x0x8056afe0 (address_range)
void snd_EGG_Sound_8056afe0(int);

// 0x0x8056b060 (address_range)
void snd_EGG_Sound_8056b060(int);

// 0x0x8056b198 (address_range)
void EGG_Sound_assertFail_8056b198(void);

// 0x0x8056b508 (address_range)
void EGG_Sound_assertFail_8056b508(void);

// 0x0x8056b70c (address_range)
int EGG_Sound_validate_8056b70c(int, int);

// 0x0x8056b74c (address_range)
void EGG_Sound_assertFail_8056b74c(void);

// 0x0x8056c10c (address_range)
void EGG_Sound_assertFail_8056c10c(void);

// 0x0x8056c198 (address_range)
void EGG_Sound_assertFail_8056c198(void);

// 0x0x8056c1d8 (address_range)
void EGG_Sound_assertFail_8056c1d8(void);

// 0x0x8056c664 (address_range)
void snd_EGG_Sound_8056c664(int);

// 0x0x8056c7a0 (address_range)
void snd_EGG_Sound_8056c7a0(int);

// 0x0x8056c83c (address_range)
void snd_EGG_Sound_8056c83c(int);

// 0x0x8056c8b8 (address_range)
void EGG_Sound_assertFail_8056c8b8(void);

// 0x0x8056ca5c (address_range)
void snd_EGG_Sound_8056ca5c(int);

// 0x0x8056cb8c (address_range)
void EGG_Sound_assertFail_8056cb8c(void);

// 0x0x8056d30c (address_range)
void EGG_Sound_assertFail_8056d30c(void);

// 0x0x8056d524 (address_range)
void EGG_Sound_validate_8056d524(int);

// 0x0x8056d6c8 (address_range)
void EGG_Sound_validate_8056d6c8(int);

// 0x0x8056d70c (address_range)
void EGG_Sound_assertFail_8056d70c(void);

// 0x0x8056d8d8 (address_range)
void snd_EGG_Sound_8056d8d8(int);

// 0x0x8056d934 (address_range)
u32 snd_EGG_Sound_8056d934(int, char);

// 0x0x8056d970 (address_range)
void EGG_Sound_validate_8056d970(int);

// 0x0x8056da2c (address_range)
void snd_EGG_Sound_8056da2c(void);

// 0x0x8056de48 (address_range)
int EGG_Sound_validate_8056de48(int, int);

// 0x0x8056de98 (address_range)
void EGG_Sound_validate_8056de98(u32, u32, u32, u32);

// 0x0x8056df9c (address_range)
int EGG_Sound_validate_8056df9c(int, int);

// 0x0x8056dfdc (address_range)
int EGG_Sound_validate_8056dfdc(int, int);

// 0x0x8056e028 (address_range)
void snd_EGG_Sound_8056e028(int);

// 0x0x8056e1e0 (address_range)
void snd_EGG_Sound_8056e1e0(int);

// 0x0x8056e288 (address_range)
void snd_EGG_Sound_8056e288(int, int);

// 0x0x8056e30c (address_range)
void EGG_Sound_assertFail_8056e30c(void);

// 0x0x8056e704 (address_range)
void EGG_Sound_validate_8056e704(u32, u32);

// 0x0x8056e714 (address_range)
int EGG_Sound_validate_8056e714(int, int);

// 0x0x8056e754 (address_range)
int EGG_Sound_validate_8056e754(int, int);

// 0x0x8056e794 (address_range)
u32 EGG_Sound_validate_8056e794(u32);

// 0x0x8056e7f8 (address_range)
int EGG_Sound_validate_8056e7f8(int, int);

// 0x0x8056e8ac (address_range)
void snd_EGG_Sound_8056e8ac(int);

// 0x0x8056eb88 (address_range)
void snd_EGG_Sound_8056eb88(void);

// 0x0x8056ee58 (address_range)
void EGG_Sound_assertFail_8056ee58(void);

// 0x0x8056ef0c (address_range)
void EGG_Sound_validate_8056ef0c(int);

// 0x0x8056f09c (address_range)
void snd_EGG_Sound_8056f09c(int);

// 0x0x8056f15c (address_range)
void EGG_Sound_validate_8056f15c(int);

// 0x0x8056f268 (address_range)
void snd_EGG_Sound_8056f268(int);

// 0x0x8056f3e0 (address_range)
void snd_EGG_Sound_8056f3e0(int);

// 0x0x8056f480 (address_range)
void snd_EGG_Sound_8056f480(int);

// 0x0x8056f4fc (address_range)
void EGG_Sound_validate_8056f4fc(int);

// 0x0x8056f6a4 (address_range)
void snd_EGG_Sound_8056f6a4(void);

// 0x0x8056f7d0 (address_range)
int snd_EGG_Sound_8056f7d0(int);

// 0x0x8056f868 (address_range)
double snd_EGG_Sound_8056f868(int, int);

// 0x0x8056faa0 (address_range)
void snd_EGG_Sound_8056faa0(void);

// 0x0x8056fe30 (address_range)
void snd_EGG_Sound_8056fe30(void);

// 0x0x8057738c (address_range)
void snd_EGG_Sound_8057738c(int);

// 0x0x80577418 (address_range)
int snd_EGG_Sound_80577418(int, int);

// 0x0x80577644 (address_range)
void snd_EGG_Sound_80577644(void);

// 0x0x805778d8 (address_range)
void snd_EGG_Sound_805778d8(u64, int, u32, u32, u32, u32, u32, u32);

// 0x0x80577988 (address_range)
double snd_EGG_Sound_80577988(int);

// 0x0x805779d8 (address_range)
void snd_EGG_Sound_805779d8(u32);

// 0x0x80577a3c (address_range)
void EGG_Sound_validate_80577a3c(u32, u32);

// 0x0x80577c1c (address_range)
u32 EGG_Sound_validate_80577c1c(u32);

// 0x0x80577cc0 (address_range)
void snd_EGG_Sound_80577cc0(void);

// 0x0x80577eb8 (address_range)
void EGG_Sound_assertFail_80577eb8(void);

// 0x0x805a70dc (address_range)
void snd_EGG_Sound_805a70dc(int);

// 0x0x805a7248 (address_range)
int EGG_Sound_validate_805a7248(int, int);

// 0x0x805a72bc (address_range)
void snd_EGG_Sound_805a72bc(u32);

// 0x0x805a7328 (address_range)
void EGG_Sound_assertFail_805a7328(void);

// 0x0x805a7480 (address_range)
u32 EGG_Sound_validate_805a7480(u32);

// 0x0x805a74e4 (address_range)
int EGG_Sound_validate_805a74e4(int, int);

// 0x0x805a755c (address_range)
void EGG_Sound_validate_805a755c(int);

// 0x0x805a775c (address_range)
void EGG_Sound_assertFail_805a775c(void);

// 0x0x805a77dc (address_range)
void snd_EGG_Sound_805a77dc(int);

// 0x0x805a78f8 (address_range)
void EGG_Sound_validate_805a78f8(int);

// 0x0x805a7a78 (address_range)
u32 snd_EGG_Sound_805a7a78(int, u32, u32, int);

// 0x0x805a7ee4 (address_range)
void snd_EGG_Sound_805a7ee4(void);

// 0x0x805a8114 (address_range)
void snd_EGG_Sound_805a8114(void);

// 0x0x805a81c4 (address_range)
void snd_EGG_Sound_805a81c4(int);

// 0x0x805a8308 (address_range)
void snd_EGG_Sound_805a8308(int);

// 0x0x805a845c (address_range)
void snd_EGG_Sound_805a845c(int);

// 0x0x805a85c0 (address_range)
void snd_EGG_Sound_805a85c0(void);

// 0x0x805a88e4 (address_range)
void snd_EGG_Sound_805a88e4(int);

// 0x0x805a8954 (address_range)
void snd_EGG_Sound_805a8954(void);

// 0x0x805a8a6c (address_range)
void snd_EGG_Sound_805a8a6c(u64, u32, u32, u32);

// 0x0x805a8afc (address_range)
void snd_EGG_Sound_805a8afc(int);

// 0x0x805a8b64 (address_range)
int EGG_Sound_validate_805a8b64(int, int);

// 0x0x805a8bac (address_range)
void EGG_Sound_validate_805a8bac(u32, u32, u32, u32);

// 0x0x805a8c8c (address_range)
int EGG_Sound_validate_805a8c8c(int, int);

// 0x0x805a8cfc (address_range)
void snd_EGG_Sound_805a8cfc(int);

// 0x0x805a8d7c (address_range)
void EGG_Sound_assertFail_805a8d7c(void);

// 0x0x805a8e8c (address_range)
void snd_EGG_Sound_805a8e8c(void);

// 0x0x805a8fe4 (address_range)
void EGG_Sound_validate_805a8fe4(u32, u32);

// 0x0x805a9040 (address_range)
void EGG_Sound_assertFail_805a9040(void);

// 0x0x805a90b8 (address_range)
void snd_EGG_Sound_805a90b8(int);

// 0x0x805a912c (address_range)
void snd_EGG_Sound_805a912c(int);

// 0x0x805a91ac (address_range)
void EGG_Sound_assertFail_805a91ac(void);

// 0x0x805a92b8 (address_range)
void snd_EGG_Sound_805a92b8(void);

// 0x0x805a9740 (address_range)
u32 EGG_Sound_validate_805a9740(u32);

// 0x0x805a97a4 (address_range)
int EGG_Sound_validate_805a97a4(int, int);

// 0x0x805a9810 (address_range)
void snd_EGG_Sound_805a9810(int);

// 0x0x805a9a78 (address_range)
void snd_EGG_Sound_805a9a78(void);

// 0x0x805a9d5c (address_range)
u32 snd_EGG_Sound_805a9d5c(int, u32, u32, int);

// 0x0x805a9f90 (address_range)
u32 snd_EGG_Sound_805a9f90(int, u32, u32, int);

// 0x0x805aa2f0 (address_range)
void snd_EGG_Sound_805aa2f0(int);

// 0x0x805aa414 (address_range)
void snd_EGG_Sound_805aa414(void);

// 0x0x805aa804 (address_range)
void snd_EGG_Sound_805aa804(void);

// 0x0x805aad5c (address_range)
void snd_EGG_Sound_805aad5c(void);

// 0x0x805aafb4 (address_range)
void snd_EGG_Sound_805aafb4(void);

// 0x0x805ab208 (address_range)
void snd_EGG_Sound_805ab208(void);

// 0x0x805ab458 (address_range)
void snd_EGG_Sound_805ab458(void);

// 0x0x805ab694 (address_range)
void snd_EGG_Sound_805ab694(int);

// 0x0x805ab798 (address_range)
void snd_EGG_Sound_805ab798(void);

// 0x0x805ab8b4 (address_range)
void snd_EGG_Sound_805ab8b4(int);

// 0x0x805ab9fc (address_range)
void snd_EGG_Sound_805ab9fc(u32);

// 0x0x805aba84 (address_range)
int EGG_Sound_validate_805aba84(int, int);

// 0x0x805abad8 (address_range)
u32 * snd_EGG_Sound_805abad8(u32, int);

// 0x0x805abb3c (address_range)
int EGG_Sound_validate_805abb3c(int, int);

// 0x0x805abb7c (address_range)
void snd_EGG_Sound_805abb7c(int);

// 0x0x805abd3c (address_range)
void EGG_Sound_validate_805abd3c(int);

// 0x0x805abec4 (address_range)
u32 snd_EGG_Sound_805abec4(int, u32, u32, int);

// 0x0x805ac008 (address_range)
u32 snd_EGG_Sound_805ac008(int, u32, u32, int);

// 0x0x805ac1d8 (address_range)
void EGG_Sound_validate_805ac1d8(int);

// 0x0x805ac2f0 (address_range)
void EGG_Sound_validate_805ac2f0(int);

// 0x0x805ac494 (address_range)
void snd_EGG_Sound_805ac494(int);

// 0x0x805ac5ec (address_range)
void EGG_Sound_validate_805ac5ec(int);

// 0x0x805ac740 (address_range)
void snd_EGG_Sound_805ac740(int);

// 0x0x805ac7bc (address_range)
void snd_EGG_Sound_805ac7bc(int);

// 0x0x805ac8d8 (address_range)
void EGG_Sound_validate_805ac8d8(int);

// 0x0x805ac9dc (address_range)
void snd_EGG_Sound_805ac9dc(void);

// 0x0x805acaa0 (address_range)
void EGG_Sound_validate_805acaa0(int);

// 0x0x805acb64 (address_range)
void snd_EGG_Sound_805acb64(u64, u32, u32, u32);

// 0x0x805acbec (address_range)
void EGG_Sound_validate_805acbec(int);

// 0x0x805acc98 (address_range)
void EGG_Sound_validate_805acc98(u32, int);

// 0x0x805acdac (address_range)
u32 EGG_Sound_validate_805acdac(u32);

// 0x0x805ace10 (address_range)
int EGG_Sound_validate_805ace10(int, int);

// 0x0x805ace7c (address_range)
void snd_EGG_Sound_805ace7c(int);

// 0x0x805acfa0 (address_range)
void EGG_Sound_validate_805acfa0(int);

// 0x0x805ad2c8 (address_range)
void snd_EGG_Sound_805ad2c8(int);

// 0x0x805ad350 (address_range)
void snd_EGG_Sound_805ad350(int);

// 0x0x805ad3f0 (address_range)
void snd_EGG_Sound_805ad3f0(int);

// 0x0x805ad464 (address_range)
void snd_EGG_Sound_805ad464(int);

// 0x0x805ad634 (address_range)
void snd_EGG_Sound_805ad634(int);

// 0x0x805ad688 (address_range)
void snd_EGG_Sound_805ad688(void);

// 0x0x805ad8f0 (address_range)
void snd_EGG_Sound_805ad8f0(int);

// 0x0x805ad960 (address_range)
void snd_EGG_Sound_805ad960(void);

// 0x0x805adba8 (address_range)
u32 EGG_Sound_validate_805adba8(u32);

// 0x0x805adc0c (address_range)
int EGG_Sound_validate_805adc0c(int, int);

// 0x0x805adc78 (address_range)
void EGG_Sound_validate_805adc78(int);

// 0x0x805addc0 (address_range)
void EGG_Sound_validate_805addc0(int);

// 0x0x805ae100 (address_range)
void snd_EGG_Sound_805ae100(int);

// 0x0x805ae198 (address_range)
void snd_EGG_Sound_805ae198(int);

// 0x0x805ae244 (address_range)
void snd_EGG_Sound_805ae244(void);

// 0x0x805ae3ac (address_range)
void snd_EGG_Sound_805ae3ac(void);

// 0x0x805ae548 (address_range)
void snd_EGG_Sound_805ae548(int);

// 0x0x805ae5e4 (address_range)
void snd_EGG_Sound_805ae5e4(void);

// 0x0x805ae76c (address_range)
void snd_EGG_Sound_805ae76c(void);

// 0x0x805aec04 (address_range)
int EGG_Sound_validate_805aec04(int, int);

// 0x0x805aec7c (address_range)
void snd_EGG_Sound_805aec7c(int);

// 0x0x805aed2c (address_range)
void snd_EGG_Sound_805aed2c(void);

// 0x0x805aef7c (address_range)
void snd_EGG_Sound_805aef7c(u32);

// 0x0x805af060 (address_range)
void snd_EGG_Sound_805af060(int);

// 0x0x805af0e0 (address_range)
void EGG_Sound_validate_805af0e0(int, u32);

// 0x0x805af214 (address_range)
void snd_EGG_Sound_805af214(int);

// 0x0x805af35c (address_range)
int EGG_Sound_validate_805af35c(int, int);

// 0x0x805af3a8 (address_range)
void snd_EGG_Sound_805af3a8(int);

// 0x0x805af49c (address_range)
void snd_EGG_Sound_805af49c(void);

// 0x0x805af9d8 (address_range)
void snd_EGG_Sound_805af9d8(int);

// 0x0x805afad8 (address_range)
void EGG_Sound_validate_805afad8(u32, u32);

// 0x0x805afbcc (address_range)
int EGG_Sound_validate_805afbcc(int, int);

// 0x0x805afc0c (address_range)
void snd_EGG_Sound_805afc0c(int);

// 0x0x805afc8c (address_range)
void EGG_Sound_validate_805afc8c(int);

// 0x0x805afd20 (address_range)
void snd_EGG_Sound_805afd20(int);

// 0x0x805afd98 (address_range)
void snd_EGG_Sound_805afd98(int);

// 0x0x805afe74 (address_range)
u32 * snd_EGG_Sound_805afe74(u32, u32);

// 0x0x805afeb8 (address_range)
int EGG_Sound_validate_805afeb8(int, int);

// 0x0x805afef8 (address_range)
void snd_EGG_Sound_805afef8(int);

// 0x0x805aff7c (address_range)
void snd_EGG_Sound_805aff7c(u32);

// 0x0x805afff0 (address_range)
void snd_EGG_Sound_805afff0(u32);

// 0x0x8072000c (address_range)
void snd_EGG_Sound_8072000c(int, u32, u32, u32);

// 0x0x8072015c (address_range)
void snd_EGG_Sound_8072015c(int, int);

// 0x0x8072044c (address_range)
void EGG_Sound_assertFail_8072044c(void);

// 0x0x80720618 (address_range)
int EGG_Sound_validate_80720618(int, int);

// 0x0x807206d8 (address_range)
void EGG_Sound_validate_807206d8(int);

// 0x0x80720708 (address_range)
void EGG_Sound_validate_80720708(int, u32, u32);

// 0x0x8072075c (address_range)
int * snd_EGG_Sound_8072075c(int);

// 0x0x8072086c (address_range)
void EGG_Sound_validate_8072086c(int);

// 0x0x80720b10 (address_range)
int EGG_Sound_validate_80720b10(int, int);

// 0x0x80720dec (address_range)
void snd_EGG_Sound_80720dec(int);

// 0x0x80720f48 (address_range)
void EGG_Sound_assertFail_80720f48(void);

// 0x0x80721034 (address_range)
void snd_EGG_Sound_80721034(u32, int, int);

// 0x0x80721130 (address_range)
void EGG_Sound_assertFail_80721130(void);

// 0x0x807212c8 (address_range)
void snd_EGG_Sound_807212c8(int, int, uint);

// 0x0x80721470 (address_range)
void snd_EGG_Sound_80721470(int, int, int);

// 0x0x807215c0 (address_range)
int snd_EGG_Sound_807215c0(int, int);

// 0x0x8072178c (address_range)
int snd_EGG_Sound_8072178c(u32, int, u32);

// 0x0x80721830 (address_range)
void snd_EGG_Sound_80721830(int);

// 0x0x807218d8 (address_range)
void snd_EGG_Sound_807218d8(int);

// 0x0x80721990 (address_range)
void snd_EGG_Sound_80721990(int, u32);

// 0x0x807219ec (address_range)
u32 EGG_Sound_validate_807219ec(int);

// 0x0x80721ad8 (address_range)
void EGG_Sound_validate_80721ad8(int);

// 0x0x80721b08 (address_range)
void EGG_Sound_validate_80721b08(int, u32, u32);

// 0x0x80721b38 (address_range)
void EGG_Sound_validate_80721b38(int, u32, u32);

// 0x0x80721b7c (address_range)
int * snd_EGG_Sound_80721b7c(int);

// 0x0x80721c8c (address_range)
void snd_EGG_Sound_80721c8c(int);

// 0x0x80721cec (address_range)
void EGG_Sound_assertFail_80721cec(void);

// 0x0x80721e3c (address_range)
void snd_EGG_Sound_80721e3c(u32);

// 0x0x80721f68 (address_range)
void snd_EGG_Sound_80721f68(u32, int);

// 0x0x80722188 (address_range)
void snd_EGG_Sound_80722188(void);

// 0x0x8072260c (address_range)
void snd_EGG_Sound_8072260c(u32);

// 0x0x80722674 (address_range)
void snd_EGG_Sound_80722674(int, u32);

// 0x0x807226d8 (address_range)
int EGG_Sound_validate_807226d8(int, int);

// 0x0x80722778 (address_range)
int * snd_EGG_Sound_80722778(int);

// 0x0x80722888 (address_range)
void snd_EGG_Sound_80722888(int);

// 0x0x80722974 (address_range)
void EGG_Sound_assertFail_80722974(void);

// 0x0x80722bc8 (address_range)
void snd_EGG_Sound_80722bc8(int);

// 0x0x80722ce8 (address_range)
void snd_EGG_Sound_80722ce8(int);

// 0x0x80722e14 (address_range)
void snd_EGG_Sound_80722e14(int, int);

// 0x0x80723190 (address_range)
void snd_EGG_Sound_80723190(u32);

// 0x0x807231ec (address_range)
void snd_EGG_Sound_807231ec(int, u32);

// 0x0x80723248 (address_range)
int EGG_Sound_validate_80723248(int, int);

// 0x0x807232e8 (address_range)
int * snd_EGG_Sound_807232e8(int);

// 0x0x807233f8 (address_range)
u32 EGG_Sound_validate_807233f8(u32, int);

// 0x0x807237f8 (address_range)
int EGG_Sound_validate_807237f8(int, int);

// 0x0x80723898 (address_range)
int * snd_EGG_Sound_80723898(int);

// 0x0x807239a8 (address_range)
void snd_EGG_Sound_807239a8(int);

// 0x0x80723a50 (address_range)
void EGG_Sound_assertFail_80723a50(void);

// 0x0x80723b9c (address_range)
void snd_EGG_Sound_80723b9c(int);

// 0x0x80723d24 (address_range)
void snd_EGG_Sound_80723d24(int, int);

// 0x0x80724114 (address_range)
void snd_EGG_Sound_80724114(void);

// 0x0x807245c4 (address_range)
void snd_EGG_Sound_807245c4(u32);

// 0x0x8072462c (address_range)
void snd_EGG_Sound_8072462c(int, u32);

// 0x0x80724688 (address_range)
int EGG_Sound_validate_80724688(int, int);

// 0x0x80724728 (address_range)
int * snd_EGG_Sound_80724728(int);

// 0x0x8072483c (address_range)
void EGG_Sound_assertFail_8072483c(void);

// 0x0x807248cc (address_range)
int snd_EGG_Sound_807248cc(int, int);

// 0x0x8072493c (address_range)
void snd_EGG_Sound_8072493c(u32, int);

// 0x0x80724a54 (address_range)
void snd_EGG_Sound_80724a54(int);

// 0x0x80724c3c (address_range)
void snd_EGG_Sound_80724c3c(int, u32);

// 0x0x80724ca0 (address_range)
u32 EGG_Sound_validate_80724ca0(int);

// 0x0x80724d58 (address_range)
int * snd_EGG_Sound_80724d58(int);

// 0x0x80724e68 (address_range)
void EGG_Sound_validate_80724e68(int);

// 0x0x80724f70 (address_range)
void EGG_Sound_assertFail_80724f70(void);

// 0x0x8072500c (address_range)
void EGG_Sound_assertFail_8072500c(void);

// 0x0x807257e0 (address_range)
void snd_EGG_Sound_807257e0(int, u32);

// 0x0x8072583c (address_range)
void snd_EGG_Sound_8072583c(int);

// 0x0x80725b98 (address_range)
void snd_EGG_Sound_80725b98(int, int);

// 0x0x80725fa8 (address_range)
void snd_EGG_Sound_80725fa8(int, int);

// 0x0x8072602c (address_range)
void EGG_Sound_validate_8072602c(int, int);

// 0x0x80726148 (address_range)
void snd_EGG_Sound_80726148(u32, int);

// 0x0x80726618 (address_range)
void snd_EGG_Sound_80726618(int);

// 0x0x80726720 (address_range)
u32 EGG_Sound_validate_80726720(int);

// 0x0x807267d8 (address_range)
int * snd_EGG_Sound_807267d8(int);

// 0x0x807268e8 (address_range)
void EGG_Sound_assertFail_807268e8(void);

// 0x0x80726b80 (address_range)
void EGG_Sound_assertFail_80726b80(void);

// 0x0x80726c10 (address_range)
u32 EGG_Sound_validate_80726c10(int, int);

// 0x0x807270a4 (address_range)
void snd_EGG_Sound_807270a4(int);

// 0x0x807271ac (address_range)
void snd_EGG_Sound_807271ac(void);

// 0x0x8072720c (address_range)
void snd_EGG_Sound_8072720c(int);

// 0x0x8072726c (address_range)
void snd_EGG_Sound_8072726c(int, int, u32, u32);

// 0x0x807273f4 (address_range)
void snd_EGG_Sound_807273f4(int, int, u32, int);

// 0x0x80727474 (address_range)
void snd_EGG_Sound_80727474(int);

// 0x0x807274f0 (address_range)
void snd_EGG_Sound_807274f0(void);

// 0x0x80727568 (address_range)
void snd_EGG_Sound_80727568(u32, u32, int);

// 0x0x80727604 (address_range)
void snd_EGG_Sound_80727604(int, u32);

// 0x0x80727668 (address_range)
u32 EGG_Sound_validate_80727668(int);

// 0x0x8072773c (address_range)
void EGG_Sound_validate_8072773c(int);

// 0x0x8072776c (address_range)
void EGG_Sound_validate_8072776c(int);

// 0x0x8072779c (address_range)
void EGG_Sound_validate_8072779c(int, u32, u32);

// 0x0x807277cc (address_range)
void EGG_Sound_validate_807277cc(int, u32, u32);

// 0x0x80727810 (address_range)
void EGG_Sound_validate_80727810(int);

// 0x0x80727c54 (address_range)
int EGG_Sound_validate_80727c54(int, int);

// 0x0x80727cf4 (address_range)
void EGG_Sound_validate_80727cf4(u32);

// 0x0x80727e74 (address_range)
u32 EGG_Sound_validate_80727e74(u32);

// 0x0x80727f34 (address_range)
void EGG_Sound_validate_80727f34(int);

// 0x0x8073a0a8 (address_range)
void snd_EGG_Sound_8073a0a8(void);

// 0x0x8073a2e8 (address_range)
void snd_EGG_Sound_8073a2e8(void);

// 0x0x8073a3c8 (address_range)
void snd_EGG_Sound_8073a3c8(void);

// 0x0x8073a558 (address_range)
void snd_EGG_Sound_8073a558(void);

// 0x0x8073a6ec (address_range)
void snd_EGG_Sound_8073a6ec(void);

// 0x0x8073a998 (address_range)
int EGG_Sound_validate_8073a998(int, int);

// 0x0x8073a9d8 (address_range)
void snd_EGG_Sound_8073a9d8(void);

// 0x0x8073ad24 (address_range)
void snd_EGG_Sound_8073ad24(void);

// 0x0x8073b0a8 (address_range)
void snd_EGG_Sound_8073b0a8(void);

// 0x0x8073b594 (address_range)
void snd_EGG_Sound_8073b594(void);

// 0x0x8073baa0 (address_range)
u32 * snd_EGG_Sound_8073baa0(u32, int);

// 0x0x8073bc10 (address_range)
void EGG_Sound_validate_8073bc10(int);

// 0x0x8073bdcc (address_range)
void snd_EGG_Sound_8073bdcc(void);

// 0x0x8073c334 (address_range)
double snd_EGG_Sound_8073c334(int, int);

// 0x0x8073c674 (address_range)
double snd_EGG_Sound_8073c674(int, int);

// 0x0x8073c748 (address_range)
void EGG_Sound_validate_8073c748(int);

// 0x0x8073cb04 (address_range)
void EGG_Sound_validate_8073cb04(int);

// 0x0x8073cf34 (address_range)
void snd_EGG_Sound_8073cf34(int);

// 0x0x8073cfbc (address_range)
void EGG_Sound_validate_8073cfbc(int, int);

// 0x0x8073d338 (address_range)
int EGG_Sound_validate_8073d338(int, int);

// 0x0x8073d378 (address_range)
void EGG_Sound_validate_8073d378(u32, int);

// 0x0x8073d4b8 (address_range)
void EGG_Sound_validate_8073d4b8(int);

// 0x0x8073d6b8 (address_range)
void EGG_Sound_validate_8073d6b8(int);

// 0x0x8073d82c (address_range)
void EGG_Sound_validate_8073d82c(int);

// 0x0x8073d8b4 (address_range)
void snd_EGG_Sound_8073d8b4(int);

// 0x0x8073d9ac (address_range)
void EGG_Sound_validate_8073d9ac(int);

// 0x0x8073dd80 (address_range)
void EGG_Sound_validate_8073dd80(int, int);

// 0x0x8073e0b0 (address_range)
void EGG_Sound_validate_8073e0b0(int);

// 0x0x8073e378 (address_range)
void snd_EGG_Sound_8073e378(void);

// 0x0x8073e728 (address_range)
void snd_EGG_Sound_8073e728(void);

// 0x0x8073eb24 (address_range)
void snd_EGG_Sound_8073eb24(u64, int, u32, u32, u32);

// 0x0x8073ec1c (address_range)
void snd_EGG_Sound_8073ec1c(void);

// 0x0x8073f020 (address_range)
void snd_EGG_Sound_8073f020(int);

// 0x0x8073f0c4 (address_range)
int EGG_Sound_validate_8073f0c4(int, int);

// 0x0x8073f104 (address_range)
void snd_EGG_Sound_8073f104(u32);

// 0x0x8073f11c (address_range)
int EGG_Sound_validate_8073f11c(int, int);

// 0x0x8073f15c (address_range)
void EGG_Sound_validate_8073f15c(int, uint, u32);

// 0x0x8073f1d8 (address_range)
u32 EGG_Sound_validate_8073f1d8(int, int);

// 0x0x8073f3c8 (address_range)
u32 EGG_Sound_validate_8073f3c8(int, u32, u32, int);

// 0x0x8073f4d8 (address_range)
u32 EGG_Sound_validate_8073f4d8(int, uint);

// 0x0x8073f5cc (address_range)
int EGG_Sound_validate_8073f5cc(int, int);

// 0x0x8073f60c (address_range)
void EGG_Sound_assertFail_8073f60c(void);

// 0x0x8073f944 (address_range)
void EGG_Sound_validate_8073f944(int, u32);

// 0x0x8073fc40 (address_range)
void EGG_Sound_assertFail_8073fc40(void);

// 0x0x8073fd94 (address_range)
u32 EGG_Sound_validate_8073fd94(int, u32);

// 0x0x8073fe6c (address_range)
u32 * EGG_Sound_validate_8073fe6c(u32, u32);

// 0x0x8073ff34 (address_range)
u32 * EGG_Sound_validate_8073ff34(u32, int);

// 0x0x8073ffd4 (address_range)
void EGG_Sound_validate_8073ffd4(int);

#ifdef __cplusplus
}
#endif
