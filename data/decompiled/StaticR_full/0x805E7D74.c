/* Function at 0x805E7D74, size=80 bytes */
/* Stack frame: 16 bytes */

void FUN_805E7D74(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x805E7D7C
    r3 = *(0xc + r3); // lwz @ 0x805E7D80
    if (==) goto 0x0x805e7dac;
    /* lis r4, 0 */ // 0x805E7D8C
    r4 = r4 + 0; // 0x805E7D90
    *(8 + r1) = r4; // stw @ 0x805E7D94
    r12 = *(0 + r3); // lwz @ 0x805E7D9C
    r12 = *(8 + r12); // lwz @ 0x805E7DA0
    /* mtctr r12 */ // 0x805E7DA4
    /* bctrl  */ // 0x805E7DA8
    r0 = *(0x14 + r1); // lwz @ 0x805E7DAC
    /* lis r3, 0 */ // 0x805E7DB0
    /* lfs f1, 0(r3) */ // 0x805E7DB4
    return;
}