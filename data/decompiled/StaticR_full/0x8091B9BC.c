/* Function at 0x8091B9BC, size=116 bytes */
/* Stack frame: 32 bytes */

int FUN_8091B9BC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x8091B9C4
    r0 = *(0x10 + r3); // lwz @ 0x8091B9C8
    if (==) goto 0x0x8091ba20;
    /* lis r4, 0 */ // 0x8091B9D4
    /* lfs f2, 0x44(r3) */ // 0x8091B9D8
    /* lfs f3, 0(r4) */ // 0x8091B9DC
    /* lis r5, 0 */ // 0x8091B9E0
    /* lfs f0, 0x3c(r3) */ // 0x8091B9E4
    /* lfs f1, 0x40(r3) */ // 0x8091B9EC
    /* fmuls f4, f3, f2 */ // 0x8091B9F0
    /* lfs f2, 0(r5) */ // 0x8091B9F4
    /* fmuls f0, f3, f0 */ // 0x8091B9F8
    /* stfs f4, 0x10(r1) */ // 0x8091B9FC
    r3 = r0;
    /* fmuls f1, f2, f1 */ // 0x8091BA04
    /* stfs f0, 8(r1) */ // 0x8091BA08
    /* stfs f1, 0xc(r1) */ // 0x8091BA0C
    r12 = *(0 + r3); // lwz @ 0x8091BA10
    r12 = *(0x14 + r12); // lwz @ 0x8091BA14
    /* mtctr r12 */ // 0x8091BA18
    /* bctrl  */ // 0x8091BA1C
    r0 = *(0x24 + r1); // lwz @ 0x8091BA20
    return;
}