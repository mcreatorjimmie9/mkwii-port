/* Function at 0x80884A80, size=204 bytes */
/* Stack frame: 48 bytes */

int FUN_80884A80(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* lis r6, 0x4330 */ // 0x80884A84
    r5 = *(0xb8 + r3); // lwz @ 0x80884A88
    r0 = *(0xbc + r3); // lwz @ 0x80884A8C
    /* lis r3, 0 */ // 0x80884A90
    /* subf r5, r5, r4 */ // 0x80884A94
    /* lfd f1, 0(r3) */ // 0x80884A98
    /* xoris r3, r5, 0x8000 */ // 0x80884A9C
    *(8 + r1) = r6; // stw @ 0x80884AA0
    /* subf r0, r0, r4 */ // 0x80884AA4
    *(0xc + r1) = r3; // stw @ 0x80884AA8
    /* xoris r0, r0, 0x8000 */ // 0x80884AAC
    /* lfd f0, 8(r1) */ // 0x80884AB0
    *(0x10 + r1) = r6; // stw @ 0x80884AB4
    /* fsubs f2, f0, f1 */ // 0x80884AB8
    *(0x14 + r1) = r0; // stw @ 0x80884ABC
    /* lfd f0, 0x10(r1) */ // 0x80884AC0
    /* fabs f2, f2 */ // 0x80884AC4
    /* fsubs f1, f0, f1 */ // 0x80884AC8
    /* fctiwz f0, f2 */ // 0x80884ACC
    /* stfd f0, 0x20(r1) */ // 0x80884AD0
    /* fabs f1, f1 */ // 0x80884AD4
    r0 = *(0x24 + r1); // lwz @ 0x80884AD8
    /* fctiwz f0, f1 */ // 0x80884ADC
    /* stfd f0, 0x18(r1) */ // 0x80884AE0
    r3 = *(0x1c + r1); // lwz @ 0x80884AE4
    if (>=) goto 0x0x80884af4;
    r3 = r0;
    /* xoris r0, r3, 0x8000 */ // 0x80884AF4
    *(0xc + r1) = r0; // stw @ 0x80884AF8
    /* lis r4, 0 */ // 0x80884AFC
    /* lis r3, 0 */ // 0x80884B00
    /* lfd f3, 0(r4) */ // 0x80884B04
    /* lfd f0, 8(r1) */ // 0x80884B08
    /* lfs f2, 0(r3) */ // 0x80884B0C
    /* fsubs f0, f0, f3 */ // 0x80884B10
    /* .byte 0xfc, 0x00, 0x10, 0x40 */ // 0x80884B14
    if (<=) goto 0x0x80884b28;
    /* lis r3, 0 */ // 0x80884B1C
    /* lfs f1, 0(r3) */ // 0x80884B20
    /* b 0x80884b44 */ // 0x80884B24
    *(0x14 + r1) = r0; // stw @ 0x80884B28
    /* lis r3, 0 */ // 0x80884B2C
    /* lfs f0, 0(r3) */ // 0x80884B30
    /* lfd f1, 0x10(r1) */ // 0x80884B34
    /* fsubs f1, f1, f3 */ // 0x80884B38
    /* fmuls f0, f0, f1 */ // 0x80884B3C
    /* fdivs f1, f0, f2 */ // 0x80884B40
    return;
}