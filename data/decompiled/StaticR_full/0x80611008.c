/* Function at 0x80611008, size=952 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 21 function(s) */

int FUN_80611008(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x80611018
    /* lfs f0, 0(r31) */ // 0x8061101C
    *(0x28 + r1) = r30; // stw @ 0x80611020
    /* li r30, 0 */ // 0x80611024
    *(0x24 + r1) = r29; // stw @ 0x80611028
    r29 = r3;
    *(0x118 + r3) = r30; // sth @ 0x80611030
    r4 = *(0 + r3); // lwz @ 0x80611034
    r4 = *(4 + r4); // lwz @ 0x80611038
    r0 = *(4 + r4); // lwz @ 0x8061103C
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r4) = r0; // stw @ 0x80611044
    r4 = *(0 + r3); // lwz @ 0x80611048
    r4 = *(4 + r4); // lwz @ 0x8061104C
    r0 = *(8 + r4); // lwz @ 0x80611050
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r4) = r0; // stw @ 0x80611058
    *(0x102 + r3) = r30; // sth @ 0x8061105C
    r4 = *(0 + r3); // lwz @ 0x80611060
    /* stfs f0, 0x1b0(r3) */ // 0x80611064
    r4 = *(4 + r4); // lwz @ 0x80611068
    r0 = *(4 + r4); // lwz @ 0x8061106C
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r4) = r0; // stw @ 0x80611074
    FUN_8061E6D4(); // bl 0x8061E6D4
    *(0x1c4 + r29) = r30; // sth @ 0x8061107C
    r3 = r29;
    r6 = *(0 + r29); // lwz @ 0x80611084
    /* li r4, 4 */ // 0x80611088
    /* li r5, 0 */ // 0x8061108C
    r7 = *(4 + r6); // lwz @ 0x80611090
    /* li r6, 1 */ // 0x80611094
    r0 = *(4 + r7); // lwz @ 0x80611098
    /* clrlwi r0, r0, 1 */ // 0x8061109C
    *(4 + r7) = r0; // stw @ 0x806110A0
    FUN_8061E8CC(r6); // bl 0x8061E8CC
    *(0x12c + r29) = r30; // sth @ 0x806110A8
    /* lis r3, 0 */ // 0x806110AC
    r4 = *(0 + r29); // lwz @ 0x806110B0
    /* lfs f0, 0(r3) */ // 0x806110B4
    r3 = r29;
    r4 = *(4 + r4); // lwz @ 0x806110BC
    r0 = *(8 + r4); // lwz @ 0x806110C0
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r4) = r0; // stw @ 0x806110C8
    r0 = *(0x254 + r29); // lhz @ 0x806110CC
    *(0x14c + r29) = r30; // sth @ 0x806110D0
    r0 = r0 rlwinm 0; // rlwinm
    r4 = *(0 + r29); // lwz @ 0x806110D8
    r0 = r0 rlwinm 0; // rlwinm
    *(0x14e + r29) = r30; // sth @ 0x806110E0
    *(0x150 + r29) = r30; // sth @ 0x806110E4
    *(0x254 + r29) = r0; // sth @ 0x806110E8
    *(0xec + r29) = r30; // stw @ 0x806110EC
    /* stfs f0, 0xf0(r29) */ // 0x806110F0
    r4 = *(4 + r4); // lwz @ 0x806110F4
    r0 = *(0xc + r4); // lwz @ 0x806110F8
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x80611100
    r4 = *(0 + r29); // lwz @ 0x80611104
    r4 = *(4 + r4); // lwz @ 0x80611108
    r0 = *(0xc + r4); // lwz @ 0x8061110C
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x80611114
    FUN_8061E6D4(); // bl 0x8061E6D4
    *(0x148 + r29) = r30; // sth @ 0x8061111C
    r3 = *(0 + r29); // lwz @ 0x80611120
    r3 = *(4 + r3); // lwz @ 0x80611124
    r0 = *(8 + r3); // lwz @ 0x80611128
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r3) = r0; // stw @ 0x80611130
    r3 = *(0 + r29); // lwz @ 0x80611134
    r3 = *(4 + r3); // lwz @ 0x80611138
    r0 = *(0xc + r3); // lwz @ 0x8061113C
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r3) = r0; // stw @ 0x80611144
    r4 = *(0 + r29); // lwz @ 0x80611148
    r3 = *(4 + r4); // lwz @ 0x8061114C
    r0 = *(0xc + r3); // lwz @ 0x80611150
    /* rlwinm. r0, r0, 0, 0xf, 0xf */ // 0x80611154
    if (==) goto 0x0x80611194;
    r4 = *(4 + r4); // lwz @ 0x8061115C
    r3 = r29;
    r0 = *(0xc + r4); // lwz @ 0x80611164
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x8061116C
    FUN_8061E010(r3); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x80611174
    /* li r4, 0x1a5 */ // 0x80611178
    /* lfs f1, 0(r31) */ // 0x8061117C
    r12 = *(0xe0 + r12); // lwz @ 0x80611180
    /* mtctr r12 */ // 0x80611184
    /* bctrl  */ // 0x80611188
    r3 = *(0x260 + r29); // lwz @ 0x8061118C
    FUN_806426B0(); // bl 0x806426B0
    r4 = *(0 + r29); // lwz @ 0x80611194
    r3 = r29;
    r4 = *(4 + r4); // lwz @ 0x8061119C
    r0 = *(0xc + r4); // lwz @ 0x806111A0
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x806111A8
    FUN_8061E010(r3); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x806111B0
    /* lis r4, 0 */ // 0x806111B4
    /* lfs f1, 0(r4) */ // 0x806111B8
    /* li r4, 0x116 */ // 0x806111BC
    r12 = *(0xe0 + r12); // lwz @ 0x806111C0
    /* mtctr r12 */ // 0x806111C4
    /* bctrl  */ // 0x806111C8
    /* li r31, 0 */ // 0x806111CC
    *(0x18c + r29) = r31; // sth @ 0x806111D0
    r3 = *(0x260 + r29); // lwz @ 0x806111D4
    /* li r4, 0 */ // 0x806111D8
    FUN_80642784(r4); // bl 0x80642784
    /* lis r30, 0 */ // 0x806111E0
    r4 = *(0 + r29); // lwz @ 0x806111E4
    /* lfs f0, 0(r30) */ // 0x806111E8
    r3 = r29;
    /* stfs f0, 0x178(r29) */ // 0x806111F0
    r4 = *(4 + r4); // lwz @ 0x806111F4
    r0 = *(0xc + r4); // lwz @ 0x806111F8
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x80611200
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x80611208
    /* clrlwi r0, r3, 0x18 */ // 0x8061120C
    r3 = *(0 + r4); // lwz @ 0x80611210
    /* mulli r0, r0, 0x248 */ // 0x80611214
    r3 = *(0x14 + r3); // lwz @ 0x80611218
    r3 = r3 + r0; // 0x8061121C
    FUN_808237A0(); // bl 0x808237A0
    *(0x194 + r29) = r31; // sth @ 0x80611224
    r3 = r29;
    FUN_8061DFE0(r3); // bl 0x8061DFE0
    /* lfs f1, 0(r30) */ // 0x80611230
    FUN_80625BB4(r3); // bl 0x80625BB4
    r0 = *(0x196 + r29); // lbz @ 0x80611238
    if (!=) goto 0x0x80611258;
    r3 = *(0x260 + r29); // lwz @ 0x80611244
    /* li r4, 1 */ // 0x80611248
    FUN_80642784(r4); // bl 0x80642784
    /* li r0, 1 */ // 0x80611250
    *(0x196 + r29) = r0; // stb @ 0x80611254
    /* lis r4, 0 */ // 0x80611258
    r3 = *(0x260 + r29); // lwz @ 0x8061125C
    /* lfs f0, 0(r4) */ // 0x80611260
    /* stfs f0, 0x17c(r29) */ // 0x80611264
    FUN_8064252C(r4); // bl 0x8064252C
    r4 = *(0 + r29); // lwz @ 0x8061126C
    r3 = *(4 + r4); // lwz @ 0x80611270
    r0 = *(8 + r3); // lwz @ 0x80611274
    /* rlwinm. r0, r0, 0, 0, 0 */ // 0x80611278
    if (==) goto 0x0x80611298;
    r4 = *(4 + r4); // lwz @ 0x80611280
    r3 = r29;
    r0 = *(8 + r4); // lwz @ 0x80611288
    /* clrlwi r0, r0, 1 */ // 0x8061128C
    *(8 + r4) = r0; // stw @ 0x80611290
    FUN_8061E8B4(r3); // bl 0x8061E8B4
    r3 = *(0x25c + r29); // lwz @ 0x80611298
    /* li r4, 0 */ // 0x8061129C
    FUN_806444CC(r4); // bl 0x806444CC
    r3 = r29;
    FUN_8061DFF8(r4, r3); // bl 0x8061DFF8
    r4 = *(0 + r3); // lwz @ 0x806112AC
    r4 = *(4 + r4); // lwz @ 0x806112B0
    r0 = *(8 + r4); // lwz @ 0x806112B4
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r4) = r0; // stw @ 0x806112BC
    r4 = *(0 + r3); // lwz @ 0x806112C0
    r4 = *(4 + r4); // lwz @ 0x806112C4
    r0 = *(0xc + r4); // lwz @ 0x806112C8
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x806112D0
    r3 = *(0 + r3); // lwz @ 0x806112D4
    r3 = *(4 + r3); // lwz @ 0x806112D8
    r0 = *(0xc + r3); // lwz @ 0x806112DC
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r3) = r0; // stw @ 0x806112E4
    r3 = *(0 + r29); // lwz @ 0x806112E8
    r3 = *(4 + r3); // lwz @ 0x806112EC
    r0 = *(8 + r3); // lwz @ 0x806112F0
    /* rlwinm. r0, r0, 0, 0x19, 0x19 */ // 0x806112F4
    if (==) goto 0x0x80611304;
    r3 = *(0x258 + r29); // lwz @ 0x806112FC
    FUN_80603EF4(); // bl 0x80603EF4
    r3 = r29;
    FUN_8060BB84(r3); // bl 0x8060BB84
    r4 = *(0 + r29); // lwz @ 0x8061130C
    r3 = *(4 + r4); // lwz @ 0x80611310
    r0 = *(0xc + r3); // lwz @ 0x80611314
    /* rlwinm. r0, r0, 0, 3, 3 */ // 0x80611318
    if (==) goto 0x0x8061135c;
    r5 = *(4 + r4); // lwz @ 0x80611320
    /* li r0, 0 */ // 0x80611324
    r3 = r29;
    r4 = *(0xc + r5); // lwz @ 0x8061132C
    r4 = r4 rlwinm 0; // rlwinm
    *(0xc + r5) = r4; // stw @ 0x80611334
    *(0x18e + r29) = r0; // sth @ 0x80611338
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x80611340
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x80611348
    /* li r4, 1 */ // 0x8061134C
    r3 = *(0x68 + r3); // lwz @ 0x80611350
    /* lwzx r3, r3, r0 */ // 0x80611354
    *(0x10d + r3) = r4; // stb @ 0x80611358
    r4 = *(0 + r29); // lwz @ 0x8061135C
    /* lis r3, 0 */ // 0x80611360
    /* lfs f0, 0(r3) */ // 0x80611364
    r3 = r29;
    r5 = *(4 + r4); // lwz @ 0x8061136C
    r0 = *(8 + r5); // lwz @ 0x80611374
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r5) = r0; // stw @ 0x8061137C
    /* stfs f0, 8(r1) */ // 0x80611380
    /* stfs f0, 0xc(r1) */ // 0x80611384
    /* stfs f0, 0x10(r1) */ // 0x80611388
    FUN_8061EEE0(); // bl 0x8061EEE0
    r3 = r29;
    /* li r4, 9 */ // 0x80611394
    /* li r5, 1 */ // 0x80611398
    /* li r6, 0 */ // 0x8061139C
    FUN_8061E8CC(r3, r4, r5, r6); // bl 0x8061E8CC
    r0 = *(0x34 + r1); // lwz @ 0x806113A4
    r31 = *(0x2c + r1); // lwz @ 0x806113A8
    r30 = *(0x28 + r1); // lwz @ 0x806113AC
    r29 = *(0x24 + r1); // lwz @ 0x806113B0
    return;
}