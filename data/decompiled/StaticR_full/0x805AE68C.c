/* Function at 0x805AE68C, size=64 bytes */
/* Stack frame: 16 bytes */

void FUN_805AE68C(int r3, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* lis r0, 0x4330 */ // 0x805AE690
    /* lis r6, 0 */ // 0x805AE694
    /* lis r5, 0 */ // 0x805AE698
    *(0xc + r1) = r4; // stw @ 0x805AE69C
    /* lfd f2, 0(r6) */ // 0x805AE6A0
    *(8 + r1) = r0; // stw @ 0x805AE6A4
    /* lfs f1, 0(r5) */ // 0x805AE6A8
    /* lfd f0, 8(r1) */ // 0x805AE6AC
    *(0x11 + r3) = r4; // stb @ 0x805AE6B0
    /* fsubs f0, f0, f2 */ // 0x805AE6B4
    /* fsubs f0, f0, f1 */ // 0x805AE6B8
    /* fdivs f0, f0, f1 */ // 0x805AE6BC
    /* stfs f0, 0xc(r3) */ // 0x805AE6C0
    return;
}