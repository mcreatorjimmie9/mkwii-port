/* Function at 0x805AE654, size=56 bytes */
/* Stack frame: 16 bytes */

void FUN_805AE654(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r0, 0x4330 */ // 0x805AE658
    /* lis r4, 0 */ // 0x805AE65C
    *(0xc + r1) = r3; // stw @ 0x805AE660
    /* lis r3, 0 */ // 0x805AE664
    /* lfd f2, 0(r4) */ // 0x805AE668
    *(8 + r1) = r0; // stw @ 0x805AE66C
    /* lfs f1, 0(r3) */ // 0x805AE670
    /* lfd f0, 8(r1) */ // 0x805AE674
    /* fsubs f0, f0, f2 */ // 0x805AE678
    /* fsubs f0, f0, f1 */ // 0x805AE67C
    /* fdivs f1, f0, f1 */ // 0x805AE680
    return;
}