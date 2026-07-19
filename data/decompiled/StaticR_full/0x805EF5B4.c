/* Function at 0x805EF5B4, size=60 bytes */
/* Stack frame: 32 bytes */

void FUN_805EF5B4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x805EF5BC
    /* stfs f1, 8(r1) */ // 0x805EF5C4
    /* stfs f1, 0xc(r1) */ // 0x805EF5C8
    /* stfs f1, 0x10(r1) */ // 0x805EF5CC
    r12 = *(0 + r3); // lwz @ 0x805EF5D0
    r12 = *(0x14 + r12); // lwz @ 0x805EF5D4
    /* mtctr r12 */ // 0x805EF5D8
    /* bctrl  */ // 0x805EF5DC
    r0 = *(0x24 + r1); // lwz @ 0x805EF5E0
    return;
}