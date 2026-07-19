/* Function at 0x805C162C, size=80 bytes */
/* Stack frame: 16 bytes */

void FUN_805C162C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x805C1634
    *(0x14 + r1) = r0; // stw @ 0x805C1638
    r3 = *(0 + r3); // lwz @ 0x805C163C
    if (==) goto 0x0x805c1660;
    if (==) goto 0x0x805c1660;
    r12 = *(0 + r3); // lwz @ 0x805C164C
    /* li r4, 1 */ // 0x805C1650
    r12 = *(8 + r12); // lwz @ 0x805C1654
    /* mtctr r12 */ // 0x805C1658
    /* bctrl  */ // 0x805C165C
    /* lis r3, 0 */ // 0x805C1660
    /* li r0, 0 */ // 0x805C1664
    *(0 + r3) = r0; // stw @ 0x805C1668
    r0 = *(0x14 + r1); // lwz @ 0x805C166C
    return;
}