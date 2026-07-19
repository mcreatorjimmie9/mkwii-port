/* Function at 0x808989D4, size=280 bytes */
/* Stack frame: 192 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808989D4(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -192(r1) */
    /* saved r31 */
    /* lis r9, 0x4330 */ // 0x808989DC
    /* lis r10, 0 */ // 0x808989E0
    *(0xc4 + r1) = r0; // stw @ 0x808989E4
    /* lis r7, 0 */ // 0x808989E8
    /* lis r8, 0 */ // 0x808989F0
    *(0xbc + r1) = r31; // stw @ 0x808989F4
    r11 = r3;
    /* lfd f3, 0(r7) */ // 0x808989FC
    r31 = r6;
    *(0xb8 + r1) = r30; // stw @ 0x80898A04
    r30 = r5;
    *(0xb4 + r1) = r29; // stw @ 0x80898A0C
    r29 = r4;
    r0 = *(8 + r10); // lwz @ 0x80898A14
    r8 = *(0 + r8); // lwz @ 0x80898A18
    /* xoris r0, r0, 0x8000 */ // 0x80898A1C
    *(0x9c + r1) = r0; // stw @ 0x80898A20
    r7 = *(0x20 + r8); // lwz @ 0x80898A24
    *(0x98 + r1) = r9; // stw @ 0x80898A28
    r4 = *(0x134 + r3); // lwz @ 0x80898A2C
    r0 = *(0x138 + r3); // lwz @ 0x80898A30
    /* lfd f0, 0x98(r1) */ // 0x80898A34
    r5 = *(0 + r10); // lha @ 0x80898A38
    /* fsubs f1, f0, f3 */ // 0x80898A3C
    /* lfs f0, 4(r10) */ // 0x80898A40
    *(0x2c + r1) = r4; // stw @ 0x80898A44
    *(0x30 + r1) = r0; // stw @ 0x80898A4C
    /* fmuls f4, f1, f0 */ // 0x80898A50
    r0 = *(0x13c + r3); // lwz @ 0x80898A54
    *(0xa0 + r1) = r9; // stw @ 0x80898A58
    *(0x34 + r1) = r0; // stw @ 0x80898A5C
    if (>) goto 0x0x80898a6c;
    /* lfs f0, 0x134(r3) */ // 0x80898A64
    /* b 0x80898ad8 */ // 0x80898A68
    if (>) goto 0x0x80898ad0;
    /* xoris r0, r5, 0x8000 */ // 0x80898A74
    *(0x9c + r1) = r0; // stw @ 0x80898A78
    /* xoris r0, r7, 0x8000 */ // 0x80898A7C
    /* lfd f0, 0x98(r1) */ // 0x80898A80
    *(0xa4 + r1) = r0; // stw @ 0x80898A84
    /* fsubs f0, f0, f3 */ // 0x80898A88
    /* lfd f1, 0xa0(r1) */ // 0x80898A8C
    /* fsubs f1, f1, f3 */ // 0x80898A90
    /* fadds f0, f0, f4 */ // 0x80898A94
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80898A98
    if (>=) goto 0x0x80898ad0;
    /* subf r0, r5, r7 */ // 0x80898AA0
    /* lis r4, 0 */ // 0x80898AA4
    /* xoris r0, r0, 0x8000 */ // 0x80898AA8
    *(0xa4 + r1) = r0; // stw @ 0x80898AAC
    /* lfs f1, 0(r4) */ // 0x80898AB0
    /* lfd f2, 0xa0(r1) */ // 0x80898AB4
    /* lfs f0, 0x134(r3) */ // 0x80898AB8
    /* fsubs f2, f2, f3 */ // 0x80898ABC
    /* fdivs f2, f2, f4 */ // 0x80898AC0
    /* fsubs f1, f1, f2 */ // 0x80898AC4
    /* fmuls f0, f0, f1 */ // 0x80898AC8
    /* b 0x80898ad8 */ // 0x80898ACC
    /* lis r3, 0 */ // 0x80898AD0
    /* lfs f0, 0(r3) */ // 0x80898AD4
    /* stfs f0, 0x2c(r1) */ // 0x80898AD8
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}