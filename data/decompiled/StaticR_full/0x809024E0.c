/* Function at 0x809024E0, size=116 bytes */
/* Stack frame: 32 bytes */

int FUN_809024E0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x809024E8
    r0 = *(0x10 + r3); // lwz @ 0x809024EC
    if (==) goto 0x0x80902544;
    /* lis r6, 0 */ // 0x809024F8
    /* lfs f0, 0x44(r3) */ // 0x809024FC
    /* lfs f1, 0(r6) */ // 0x80902500
    /* lis r5, 0 */ // 0x80902504
    /* lfs f4, 0x3c(r3) */ // 0x80902508
    /* fmuls f2, f1, f0 */ // 0x80902510
    /* lfs f3, 0x40(r3) */ // 0x80902514
    /* lfs f0, 0(r5) */ // 0x80902518
    /* fmuls f1, f1, f4 */ // 0x8090251C
    /* stfs f2, 0x10(r1) */ // 0x80902520
    r3 = r0;
    /* fmuls f0, f0, f3 */ // 0x80902528
    /* stfs f1, 8(r1) */ // 0x8090252C
    /* stfs f0, 0xc(r1) */ // 0x80902530
    r12 = *(0 + r3); // lwz @ 0x80902534
    r12 = *(0x14 + r12); // lwz @ 0x80902538
    /* mtctr r12 */ // 0x8090253C
    /* bctrl  */ // 0x80902540
    r0 = *(0x24 + r1); // lwz @ 0x80902544
    return;
}