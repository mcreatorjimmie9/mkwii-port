/* Function at 0x805AE614, size=64 bytes */
/* Stack frame: 16 bytes */

void FUN_805AE614(int r3, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* lis r0, 0x4330 */ // 0x805AE618
    /* lis r6, 0 */ // 0x805AE61C
    /* lis r5, 0 */ // 0x805AE620
    *(0xc + r1) = r4; // stw @ 0x805AE624
    /* lfd f2, 0(r6) */ // 0x805AE628
    *(8 + r1) = r0; // stw @ 0x805AE62C
    /* lfs f1, 0(r5) */ // 0x805AE630
    /* lfd f0, 8(r1) */ // 0x805AE634
    *(0x10 + r3) = r4; // stb @ 0x805AE638
    /* fsubs f0, f0, f2 */ // 0x805AE63C
    /* fsubs f0, f0, f1 */ // 0x805AE640
    /* fdivs f0, f0, f1 */ // 0x805AE644
    /* stfs f0, 8(r3) */ // 0x805AE648
    return;
}