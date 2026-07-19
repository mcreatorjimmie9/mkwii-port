/* Function at 0x805E8D04, size=80 bytes */
/* Stack frame: 16 bytes */

void FUN_805E8D04(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x805E8D0C
    r3 = *(0xc + r3); // lwz @ 0x805E8D10
    if (==) goto 0x0x805e8d3c;
    /* lis r4, 0 */ // 0x805E8D1C
    r4 = r4 + 0; // 0x805E8D20
    *(8 + r1) = r4; // stw @ 0x805E8D24
    r12 = *(0 + r3); // lwz @ 0x805E8D2C
    r12 = *(8 + r12); // lwz @ 0x805E8D30
    /* mtctr r12 */ // 0x805E8D34
    /* bctrl  */ // 0x805E8D38
    r0 = *(0x14 + r1); // lwz @ 0x805E8D3C
    /* lis r3, 0 */ // 0x805E8D40
    /* lfs f1, 0(r3) */ // 0x805E8D44
    return;
}