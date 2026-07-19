/* Function at 0x8060728C, size=660 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 9 function(s) */

int FUN_8060728C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8060729C
    r31 = r31 + 0; // 0x806072A0
    *(0x18 + r1) = r30; // stw @ 0x806072A4
    r30 = r3;
    r4 = *(0 + r3); // lwz @ 0x806072AC
    r3 = *(4 + r4); // lwz @ 0x806072B0
    r0 = *(0x14 + r3); // lwz @ 0x806072B4
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x806072B8
    if (!=) goto 0x0x80607508;
    r0 = *(0xc + r3); // lwz @ 0x806072C0
    /* rlwinm. r0, r0, 0, 0x12, 0x12 */ // 0x806072C4
    if (==) goto 0x0x80607508;
    /* lis r3, 0 */ // 0x806072CC
    /* li r4, 0 */ // 0x806072D0
    r5 = *(0 + r3); // lwz @ 0x806072D4
    r3 = *(0xb70 + r5); // lwz @ 0x806072D8
    r3 = r3 + -3; // 0x806072DC
    if (>) goto 0x0x806072fc;
    /* li r0, 1 */ // 0x806072E8
    r0 = r0 << r3; // slw
    /* andi. r0, r0, 0xc1 */ // 0x806072F0
    if (==) goto 0x0x806072fc;
    /* li r4, 1 */ // 0x806072F8
    if (==) goto 0x0x806073c4;
    r0 = *(0xb78 + r5); // lwz @ 0x80607304
    if (!=) goto 0x0x806073c4;
    r3 = r30;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* clrlwi r0, r3, 0x18 */ // 0x80607318
    /* lis r3, 0 */ // 0x8060731C
    /* mulli r0, r0, 0x18 */ // 0x80607320
    r3 = *(0 + r3); // lwz @ 0x80607324
    r3 = r3 + r0; // 0x80607328
    r0 = *(0x3c4 + r3); // lbz @ 0x8060732C
    if (!=) goto 0x0x806073c4;
    r0 = *(0x234 + r30); // lhz @ 0x80607338
    if (!=) goto 0x0x806073c4;
    r4 = *(0 + r30); // lwz @ 0x80607344
    r3 = r30;
    r4 = *(4 + r4); // lwz @ 0x8060734C
    r0 = *(0x14 + r4); // lwz @ 0x80607350
    r0 = r0 | 0x80; // 0x80607354
    *(0x14 + r4) = r0; // stw @ 0x80607358
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x80607360
    /* lis r5, 0 */ // 0x80607364
    r4 = *(0 + r4); // lwz @ 0x80607368
    r0 = r3;
    r3 = *(0 + r5); // lwz @ 0x80607370
    r5 = *(0xb70 + r4); // lwz @ 0x80607374
    if (!=) goto 0x0x8060739c;
    r4 = *(0xb78 + r4); // lwz @ 0x80607380
    if (!=) goto 0x0x806073c4;
    r3 = *(0x10 + r3); // lwz @ 0x8060738C
    /* clrlwi r4, r0, 0x18 */ // 0x80607390
    FUN_805C8358(); // bl 0x805C8358
    /* b 0x806073c4 */ // 0x80607398
    if (==) goto 0x0x806073ac;
    if (!=) goto 0x0x806073c4;
    r4 = *(0xb78 + r4); // lwz @ 0x806073AC
    if (!=) goto 0x0x806073c4;
    r3 = *(0x10 + r3); // lwz @ 0x806073B8
    /* clrlwi r4, r0, 0x18 */ // 0x806073BC
    FUN_805CAC50(); // bl 0x805CAC50
    r3 = r30;
    FUN_8061DC48(r3); // bl 0x8061DC48
    r4 = *(0 + r30); // lwz @ 0x806073CC
    r6 = *(0x68 + r3); // lwz @ 0x806073D0
    r4 = *(4 + r4); // lwz @ 0x806073D4
    r5 = *(0x6c + r3); // lwz @ 0x806073D8
    r0 = *(0x14 + r4); // lwz @ 0x806073DC
    r3 = *(0x70 + r3); // lwz @ 0x806073E0
    /* rlwinm. r0, r0, 0, 0x18, 0x18 */ // 0x806073E4
    *(8 + r1) = r6; // stw @ 0x806073E8
    *(0xc + r1) = r5; // stw @ 0x806073EC
    *(0x10 + r1) = r3; // stw @ 0x806073F0
    if (==) goto 0x0x80607400;
    /* lfs f1, 0x2d0(r31) */ // 0x806073F8
    /* b 0x80607404 */ // 0x806073FC
    /* lfs f1, 0x2cc(r31) */ // 0x80607400
    /* lfs f0, 0xc(r1) */ // 0x80607404
    r3 = r30;
    /* fsubs f0, f0, f1 */ // 0x8060740C
    /* stfs f0, 0xc(r1) */ // 0x80607410
    FUN_8061DC48(r3); // bl 0x8061DC48
    /* lfs f0, 8(r1) */ // 0x80607418
    /* stfs f0, 0x68(r3) */ // 0x8060741C
    /* lfs f0, 0xc(r1) */ // 0x80607420
    /* stfs f0, 0x6c(r3) */ // 0x80607424
    /* lfs f0, 0x10(r1) */ // 0x80607428
    /* stfs f0, 0x70(r3) */ // 0x8060742C
    r3 = r30;
    FUN_8061DC48(r3); // bl 0x8061DC48
    /* li r0, 1 */ // 0x80607438
    *(0x171 + r3) = r0; // stb @ 0x8060743C
    r3 = *(0 + r30); // lwz @ 0x80607440
    r4 = *(0x2d4 + r31); // lha @ 0x80607444
    r3 = *(4 + r3); // lwz @ 0x80607448
    r0 = *(0x14 + r3); // lwz @ 0x8060744C
    /* rlwinm. r0, r0, 0, 0x18, 0x18 */ // 0x80607450
    if (==) goto 0x0x8060745c;
    r4 = *(0x2d6 + r31); // lha @ 0x80607458
    r3 = *(0x234 + r30); // lhz @ 0x8060745C
    r0 = r3 + 1; // 0x80607460
    *(0x234 + r30) = r0; // sth @ 0x80607464
    /* clrlwi r0, r0, 0x10 */ // 0x80607468
    if (<=) goto 0x0x80607508;
    r4 = *(0 + r30); // lwz @ 0x80607474
    r3 = r30;
    r4 = *(4 + r4); // lwz @ 0x8060747C
    r0 = *(0xc + r4); // lwz @ 0x80607480
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x80607488
    r4 = *(0 + r30); // lwz @ 0x8060748C
    r4 = *(4 + r4); // lwz @ 0x80607490
    r0 = *(0xc + r4); // lwz @ 0x80607494
    r0 = r0 | 0x4000; // 0x80607498
    *(0xc + r4) = r0; // stw @ 0x8060749C
    r4 = *(0 + r30); // lwz @ 0x806074A0
    r4 = *(4 + r4); // lwz @ 0x806074A4
    r0 = *(0x14 + r4); // lwz @ 0x806074A8
    r0 = r0 rlwinm 0; // rlwinm
    *(0x14 + r4) = r0; // stw @ 0x806074B0
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x806074B8
    r0 = r3 rlwinm 2; // rlwinm
    r4 = *(0 + r4); // lwz @ 0x806074C0
    /* li r5, 1 */ // 0x806074C4
    /* li r31, 0 */ // 0x806074C8
    r3 = r30;
    r4 = *(0x68 + r4); // lwz @ 0x806074D0
    /* lwzx r4, r4, r0 */ // 0x806074D4
    *(0x6a + r4) = r5; // stb @ 0x806074D8
    r4 = *(0 + r30); // lwz @ 0x806074DC
    r4 = *(4 + r4); // lwz @ 0x806074E0
    r0 = *(8 + r4); // lwz @ 0x806074E4
    r0 = r0 | 2; // 0x806074E8
    *(8 + r4) = r0; // stw @ 0x806074EC
    r0 = *(0x254 + r30); // lhz @ 0x806074F0
    *(0x234 + r30) = r31; // sth @ 0x806074F4
    r0 = r0 | 1; // 0x806074F8
    *(0x254 + r30) = r0; // sth @ 0x806074FC
    FUN_8061DC48(); // bl 0x8061DC48
    *(0x171 + r3) = r31; // stb @ 0x80607504
    r0 = *(0x24 + r1); // lwz @ 0x80607508
    r31 = *(0x1c + r1); // lwz @ 0x8060750C
    r30 = *(0x18 + r1); // lwz @ 0x80607510
    return;
}