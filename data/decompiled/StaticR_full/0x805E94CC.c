/* Function at 0x805E94CC, size=80 bytes */
/* Stack frame: 16 bytes */

void FUN_805E94CC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x805E94D4
    r3 = *(0xc + r3); // lwz @ 0x805E94D8
    if (==) goto 0x0x805e9504;
    /* lis r4, 0 */ // 0x805E94E4
    r4 = r4 + 0; // 0x805E94E8
    *(8 + r1) = r4; // stw @ 0x805E94EC
    r12 = *(0 + r3); // lwz @ 0x805E94F4
    r12 = *(8 + r12); // lwz @ 0x805E94F8
    /* mtctr r12 */ // 0x805E94FC
    /* bctrl  */ // 0x805E9500
    r0 = *(0x14 + r1); // lwz @ 0x805E9504
    /* lis r3, 0 */ // 0x805E9508
    /* lfs f1, 0(r3) */ // 0x805E950C
    return;
}