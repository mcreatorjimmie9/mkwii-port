/* Function at 0x8077F458, size=152 bytes */
/* Stack frame: 32 bytes */

void FUN_8077F458(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* lis r0, 0x4330 */ // 0x8077F45C
    /* lis r5, 0 */ // 0x8077F460
    /* lis r4, 0 */ // 0x8077F464
    r7 = *(0xc0 + r3); // lwz @ 0x8077F468
    /* lis r6, 0 */ // 0x8077F46C
    /* lfs f0, 0x11c(r3) */ // 0x8077F470
    *(0xc + r1) = r7; // stw @ 0x8077F474
    /* lfd f3, 0(r5) */ // 0x8077F478
    /* fneg f4, f0 */ // 0x8077F47C
    *(8 + r1) = r0; // stw @ 0x8077F480
    /* lfs f2, 0(r4) */ // 0x8077F484
    /* lfd f0, 8(r1) */ // 0x8077F488
    *(0x14 + r1) = r7; // stw @ 0x8077F48C
    /* fsubs f1, f0, f3 */ // 0x8077F490
    /* lfs f6, 0(r6) */ // 0x8077F494
    *(0x10 + r1) = r0; // stw @ 0x8077F498
    /* lfs f5, 0x118(r3) */ // 0x8077F49C
    /* lfd f0, 0x10(r1) */ // 0x8077F4A0
    /* fsubs f1, f1, f2 */ // 0x8077F4A4
    /* fsubs f0, f0, f3 */ // 0x8077F4A8
    /* fmuls f1, f4, f1 */ // 0x8077F4AC
    /* fmuls f3, f6, f5 */ // 0x8077F4B0
    /* fsubs f0, f0, f2 */ // 0x8077F4B4
    /* fmuls f0, f1, f0 */ // 0x8077F4B8
    /* fadds f0, f3, f0 */ // 0x8077F4BC
    /* .byte 0xfc, 0x00, 0x28, 0x40 */ // 0x8077F4C0
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8077F4C4
    if (!=) goto 0x0x8077f4d0;
    /* fmr f0, f5 */ // 0x8077F4CC
    r0 = *(0x2c + r3); // lhz @ 0x8077F4D0
    /* stfs f0, 0x3c(r3) */ // 0x8077F4D4
    r0 = r0 | 8; // 0x8077F4D8
    *(0x2c + r3) = r0; // sth @ 0x8077F4DC
    /* stfs f0, 0x40(r3) */ // 0x8077F4E0
    /* stfs f0, 0x44(r3) */ // 0x8077F4E4
    return;
}