/* Function at 0x805E7D2C, size=72 bytes */
/* Stack frame: 16 bytes */

void FUN_805E7D2C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x805E7D34
    r3 = *(0xc + r3); // lwz @ 0x805E7D38
    if (==) goto 0x0x805e7d64;
    /* lis r4, 0 */ // 0x805E7D44
    r4 = r4 + 0; // 0x805E7D48
    *(8 + r1) = r4; // stw @ 0x805E7D4C
    r12 = *(0 + r3); // lwz @ 0x805E7D54
    r12 = *(8 + r12); // lwz @ 0x805E7D58
    /* mtctr r12 */ // 0x805E7D5C
    /* bctrl  */ // 0x805E7D60
    r0 = *(0x14 + r1); // lwz @ 0x805E7D64
    return;
}