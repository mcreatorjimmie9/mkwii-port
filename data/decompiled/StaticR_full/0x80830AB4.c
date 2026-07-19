/* Function at 0x80830AB4, size=176 bytes */
/* Stack frame: 16 bytes */

void FUN_80830AB4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r5, 0 */ // 0x80830AB8
    r5 = r5 + 0; // 0x80830ABC
    /* lis r0, 0x4330 */ // 0x80830AC0
    r4 = *(0x1dc + r3); // lwz @ 0x80830AC4
    /* lfs f4, 0xc0(r5) */ // 0x80830AC8
    /* lfs f0, 0xc8(r5) */ // 0x80830ACC
    /* xoris r4, r4, 0x8000 */ // 0x80830AD0
    *(0xc + r1) = r4; // stw @ 0x80830AD4
    /* fsubs f4, f4, f0 */ // 0x80830AD8
    /* lfs f1, 0(r5) */ // 0x80830ADC
    *(8 + r1) = r0; // stw @ 0x80830AE0
    /* lfd f3, 0x168(r5) */ // 0x80830AE4
    /* lfd f2, 8(r1) */ // 0x80830AE8
    /* fcmpu cr0, f1, f4 */ // 0x80830AEC
    /* fsubs f1, f2, f3 */ // 0x80830AF0
    if (!=) goto 0x0x80830b00;
    /* lfs f0, 0xf0(r5) */ // 0x80830AF8
    /* b 0x80830b18 */ // 0x80830AFC
    /* fsubs f2, f1, f0 */ // 0x80830B00
    /* lfs f1, 0x13c(r5) */ // 0x80830B04
    /* lfs f0, 0xf0(r5) */ // 0x80830B08
    /* fmuls f1, f1, f2 */ // 0x80830B0C
    /* fdivs f1, f1, f4 */ // 0x80830B10
    /* fadds f0, f0, f1 */ // 0x80830B14
    /* lfs f1, 0xf0(r5) */ // 0x80830B18
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x80830B1C
    if (>=) goto 0x0x80830b28;
    /* b 0x80830b3c */ // 0x80830B24
    /* lfs f1, 0xc0(r5) */ // 0x80830B28
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x80830B2C
    if (<=) goto 0x0x80830b38;
    /* b 0x80830b3c */ // 0x80830B34
    /* fmr f1, f0 */ // 0x80830B38
    /* lfs f0, 0x1c8(r3) */ // 0x80830B3C
    /* lfs f2, 0x144(r5) */ // 0x80830B40
    /* fadds f0, f0, f1 */ // 0x80830B44
    /* .byte 0xfc, 0x00, 0x10, 0x40 */ // 0x80830B48
    if (<=) goto 0x0x80830b54;
    /* b 0x80830b58 */ // 0x80830B50
    /* fmr f2, f0 */ // 0x80830B54
    /* stfs f2, 0x1c8(r3) */ // 0x80830B58
    return;
}