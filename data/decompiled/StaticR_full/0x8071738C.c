/* Function at 0x8071738C, size=76 bytes */
/* Stack frame: 16 bytes */

void FUN_8071738C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r0, 0x4330 */ // 0x80717390
    r4 = *(0x110 + r3); // lwz @ 0x80717394
    *(0xc + r1) = r4; // stw @ 0x80717398
    /* lis r4, 0 */ // 0x8071739C
    /* lfd f3, 0(r4) */ // 0x807173A0
    *(8 + r1) = r0; // stw @ 0x807173A4
    /* lfs f1, 0x128(r3) */ // 0x807173A8
    /* lfd f2, 8(r1) */ // 0x807173AC
    /* lfs f0, 0x12c(r3) */ // 0x807173B0
    /* fsubs f2, f2, f3 */ // 0x807173B4
    /* fmuls f1, f1, f2 */ // 0x807173B8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807173BC
    /* cror cr0eq, cr0gt, cr0eq */ // 0x807173C0
    if (!=) goto 0x0x807173d0;
    /* li r0, 0 */ // 0x807173C8
    *(0x10c + r3) = r0; // stw @ 0x807173CC
    return;
}