/* Function at 0x80632AA8, size=196 bytes */
/* Stack frame: 0 bytes */

void FUN_80632AA8(int r3, int r4, int r5)
{
    r0 = *(0 + r3); // lbz @ 0x80632AA8
    /* lis r5, 0 */ // 0x80632AAC
    r5 = r5 + 0; // 0x80632AB0
    /* beqlr  */ // 0x80632AB8
    r4 = *(0x14 + r3); // lwz @ 0x80632ABC
    /* lfs f4, 0xc(r3) */ // 0x80632AC0
    /* lfs f1, 4(r4) */ // 0x80632AC4
    /* lfs f0, 4(r3) */ // 0x80632AC8
    /* fmuls f1, f1, f4 */ // 0x80632ACC
    /* lfs f3, 0xf8(r5) */ // 0x80632AD0
    /* fadds f0, f0, f1 */ // 0x80632AD4
    /* stfs f0, 4(r3) */ // 0x80632AD8
    /* .byte 0xfc, 0x00, 0x18, 0x40 */ // 0x80632ADC
    if (<=) goto 0x0x80632b00;
    /* fsubs f2, f3, f0 */ // 0x80632AE4
    /* lfs f0, 0x14c(r5) */ // 0x80632AE8
    /* fmuls f1, f4, f0 */ // 0x80632AEC
    /* fadds f0, f3, f2 */ // 0x80632AF0
    /* stfs f1, 0xc(r3) */ // 0x80632AF4
    /* stfs f0, 4(r3) */ // 0x80632AF8
    /* b 0x80632b24 */ // 0x80632AFC
    /* lfs f2, 0x14c(r5) */ // 0x80632B00
    /* .byte 0xfc, 0x00, 0x10, 0x40 */ // 0x80632B04
    if (>=) goto 0x0x80632b24;
    /* fadds f0, f3, f0 */ // 0x80632B0C
    /* fmuls f1, f4, f2 */ // 0x80632B10
    /* fneg f0, f0 */ // 0x80632B14
    /* stfs f1, 0xc(r3) */ // 0x80632B18
    /* fadds f0, f2, f0 */ // 0x80632B1C
    /* stfs f0, 4(r3) */ // 0x80632B20
    r4 = *(0x14 + r3); // lwz @ 0x80632B24
    /* lfs f1, 8(r3) */ // 0x80632B28
    /* lfs f0, 8(r4) */ // 0x80632B2C
    /* lfs f2, 0x214(r5) */ // 0x80632B30
    /* fmuls f3, f1, f0 */ // 0x80632B34
    /* lfs f1, 4(r3) */ // 0x80632B38
    /* lfs f0, 0(r5) */ // 0x80632B3C
    /* fsubs f2, f3, f2 */ // 0x80632B40
    /* stfs f2, 8(r3) */ // 0x80632B44
    /* fmuls f1, f1, f2 */ // 0x80632B48
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x80632B4C
    /* stfs f1, 0x10(r3) */ // 0x80632B50
    /* cror cr0eq, cr0lt, cr0eq */ // 0x80632B54
    /* bnelr  */ // 0x80632B58
    /* li r0, 0 */ // 0x80632B5C
    /* stfs f0, 0x10(r3) */ // 0x80632B60
    *(0 + r3) = r0; // stb @ 0x80632B64
    return;
}