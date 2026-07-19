/* Function at 0x805E84F4, size=72 bytes */
/* Stack frame: 16 bytes */

void FUN_805E84F4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x805E84FC
    r3 = *(0xc + r3); // lwz @ 0x805E8500
    if (==) goto 0x0x805e852c;
    /* lis r4, 0 */ // 0x805E850C
    r4 = r4 + 0; // 0x805E8510
    *(8 + r1) = r4; // stw @ 0x805E8514
    r12 = *(0 + r3); // lwz @ 0x805E851C
    r12 = *(8 + r12); // lwz @ 0x805E8520
    /* mtctr r12 */ // 0x805E8524
    /* bctrl  */ // 0x805E8528
    r0 = *(0x14 + r1); // lwz @ 0x805E852C
    return;
}