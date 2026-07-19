/* Function at 0x8060B918, size=604 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_8060B918(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8060B928
    r31 = r31 + 0; // 0x8060B92C
    *(8 + r1) = r30; // stw @ 0x8060B930
    r30 = r3;
    r5 = *(0 + r3); // lwz @ 0x8060B938
    r6 = *(4 + r5); // lwz @ 0x8060B93C
    r0 = *(0x14 + r6); // lwz @ 0x8060B940
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x8060B944
    if (==) goto 0x0x8060bb6c;
    r0 = *(0xc + r6); // lwz @ 0x8060B94C
    /* rlwinm. r0, r0, 0, 4, 4 */ // 0x8060B950
    if (!=) goto 0x0x8060bb6c;
    /* lfs f1, 0x14(r3) */ // 0x8060B958
    /* lfs f0, 0x22c(r31) */ // 0x8060B95C
    /* lfs f2, 0x20(r3) */ // 0x8060B960
    /* fmuls f0, f0, f1 */ // 0x8060B964
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x8060B968
    if (<) goto 0x0x8060b9c8;
    r4 = *(8 + r6); // lwz @ 0x8060B970
    r0 = r4 rlwinm 0; // rlwinm
    /* rlwimi. r0, r4, 0, 0x15, 0x15 */ // 0x8060B978
    if (!=) goto 0x0x8060b9c8;
    r0 = *(4 + r6); // lwz @ 0x8060B980
    /* rlwinm. r0, r0, 0, 2, 2 */ // 0x8060B984
    if (!=) goto 0x0x8060b9c8;
    r4 = *(4 + r5); // lwz @ 0x8060B98C
    /* lfs f0, 0xb8(r31) */ // 0x8060B990
    /* lfs f1, 0x88(r4) */ // 0x8060B994
    /* fabs f1, f1 */ // 0x8060B998
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8060B99C
    if (<=) goto 0x0x8060b9c8;
    r4 = *(0x1cc + r3); // lha @ 0x8060B9A4
    r5 = *(0xcc + r31); // lha @ 0x8060B9A8
    r4 = r4 + 1; // 0x8060B9AC
    /* extsh r0, r4 */ // 0x8060B9B0
    *(0x1cc + r3) = r4; // sth @ 0x8060B9B4
    if (>=) goto 0x0x8060b9d0;
    *(0x1cc + r3) = r5; // sth @ 0x8060B9C0
    /* b 0x8060b9d0 */ // 0x8060B9C4
    /* li r0, 0 */ // 0x8060B9C8
    *(0x1cc + r3) = r0; // sth @ 0x8060B9CC
    r4 = *(0x1cc + r3); // lha @ 0x8060B9D0
    r0 = *(0xcc + r31); // lha @ 0x8060B9D4
    if (<) goto 0x0x8060bac4;
    r12 = *(0xc + r30); // lwz @ 0x8060B9E0
    r3 = r30;
    r12 = *(0x34 + r12); // lwz @ 0x8060B9E8
    /* mtctr r12 */ // 0x8060B9EC
    /* bctrl  */ // 0x8060B9F0
    r3 = *(0 + r30); // lwz @ 0x8060B9F4
    r3 = *(4 + r3); // lwz @ 0x8060B9F8
    r0 = *(4 + r3); // lwz @ 0x8060B9FC
    r0 = r0 | 0x1000; // 0x8060BA00
    *(4 + r3) = r0; // stw @ 0x8060BA04
    r4 = *(0 + r30); // lwz @ 0x8060BA08
    r3 = *(4 + r4); // lwz @ 0x8060BA0C
    r4 = *(4 + r4); // lwz @ 0x8060BA10
    r0 = *(4 + r3); // lwz @ 0x8060BA14
    /* lfs f1, 0x88(r4) */ // 0x8060BA18
    /* rlwinm. r0, r0, 0, 0xd, 0xd */ // 0x8060BA1C
    if (==) goto 0x0x8060ba88;
    /* lis r3, 0 */ // 0x8060BA24
    /* lfs f0, 0(r3) */ // 0x8060BA28
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8060BA2C
    if (>=) goto 0x0x8060ba60;
    /* li r0, 1 */ // 0x8060BA34
    *(0xcc + r30) = r0; // stw @ 0x8060BA38
    r3 = r30;
    FUN_8061E0F0(r3); // bl 0x8061E0F0
    /* lfs f2, 0x5c(r3) */ // 0x8060BA44
    /* lfs f1, 0xc8(r31) */ // 0x8060BA48
    /* lfs f0, 0x1c8(r30) */ // 0x8060BA4C
    /* fmuls f1, f1, f2 */ // 0x8060BA50
    /* fsubs f0, f0, f1 */ // 0x8060BA54
    /* stfs f0, 0x1c8(r30) */ // 0x8060BA58
    /* b 0x8060ba88 */ // 0x8060BA5C
    /* li r0, -1 */ // 0x8060BA60
    *(0xcc + r30) = r0; // stw @ 0x8060BA64
    r3 = r30;
    FUN_8061E0F0(r3); // bl 0x8061E0F0
    /* lfs f2, 0x5c(r3) */ // 0x8060BA70
    /* lfs f1, 0xc8(r31) */ // 0x8060BA74
    /* lfs f0, 0x1c8(r30) */ // 0x8060BA78
    /* fmuls f1, f1, f2 */ // 0x8060BA7C
    /* fadds f0, f0, f1 */ // 0x8060BA80
    /* stfs f0, 0x1c8(r30) */ // 0x8060BA84
    r3 = r30;
    FUN_8061E0F0(r3); // bl 0x8061E0F0
    /* lfs f2, 0x64(r3) */ // 0x8060BA90
    /* lfs f1, 0xc4(r31) */ // 0x8060BA94
    /* lfs f0, 0x1c8(r30) */ // 0x8060BA98
    /* fmuls f2, f1, f2 */ // 0x8060BA9C
    /* fneg f1, f2 */ // 0x8060BAA0
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8060BAA4
    if (<=) goto 0x0x8060bab4;
    /* stfs f1, 0x1c8(r30) */ // 0x8060BAAC
    /* b 0x8060bb3c */ // 0x8060BAB0
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x8060BAB4
    if (>=) goto 0x0x8060bb3c;
    /* stfs f2, 0x1c8(r30) */ // 0x8060BABC
    /* b 0x8060bb3c */ // 0x8060BAC0
    r4 = *(0 + r3); // lwz @ 0x8060BAC4
    /* li r0, 0 */ // 0x8060BAC8
    r5 = *(4 + r4); // lwz @ 0x8060BACC
    r4 = *(4 + r5); // lwz @ 0x8060BAD0
    r4 = r4 rlwinm 0; // rlwinm
    *(4 + r5) = r4; // stw @ 0x8060BAD8
    *(0xcc + r3) = r0; // stw @ 0x8060BADC
    r3 = r30;
    FUN_8061E0F0(r3); // bl 0x8061E0F0
    /* lis r4, 0 */ // 0x8060BAE8
    /* lfs f0, 0x1c8(r30) */ // 0x8060BAEC
    /* lfs f1, 0(r4) */ // 0x8060BAF0
    /* lfs f2, 0x68(r3) */ // 0x8060BAF4
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x8060BAF8
    if (<=) goto 0x0x8060bb14;
    /* fsubs f0, f0, f2 */ // 0x8060BB00
    /* stfs f0, 0x1c8(r30) */ // 0x8060BB04
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x8060BB08
    if (>=) goto 0x0x8060bb14;
    /* stfs f1, 0x1c8(r30) */ // 0x8060BB10
    /* lis r3, 0 */ // 0x8060BB14
    /* lfs f0, 0x1c8(r30) */ // 0x8060BB18
    /* lfs f1, 0(r3) */ // 0x8060BB1C
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x8060BB20
    if (>=) goto 0x0x8060bb3c;
    /* fadds f0, f0, f2 */ // 0x8060BB28
    /* stfs f0, 0x1c8(r30) */ // 0x8060BB2C
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x8060BB30
    if (<=) goto 0x0x8060bb3c;
    /* stfs f1, 0x1c8(r30) */ // 0x8060BB38
    /* lfs f1, 0x1c8(r30) */ // 0x8060BB3C
    /* lis r3, 0 */ // 0x8060BB40
    /* lfs f0, 0(r3) */ // 0x8060BB44
    r3 = r30 + 0x1d0; // 0x8060BB48
    /* fneg f1, f1 */ // 0x8060BB4C
    r4 = r30 + 0x44; // 0x8060BB50
    /* fmuls f1, f0, f1 */ // 0x8060BB54
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_8061DC28(r4, r3); // bl 0x8061DC28
    r4 = r30 + 0x1d0; // 0x8060BB64
    FUN_8062A088(r3, r4); // bl 0x8062A088
    r0 = *(0x14 + r1); // lwz @ 0x8060BB6C
    r31 = *(0xc + r1); // lwz @ 0x8060BB70
}