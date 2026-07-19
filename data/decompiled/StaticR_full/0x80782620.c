/* Function at 0x80782620, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */

int FUN_80782620(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8078262C
    r31 = r3;
    r3 = r4;
    r12 = *(0 + r4); // lwz @ 0x80782638
    r12 = *(0x24 + r12); // lwz @ 0x8078263C
    /* mtctr r12 */ // 0x80782640
    /* bctrl  */ // 0x80782644
    /* lis r4, 0 */ // 0x80782648
    /* lis r0, 0x4330 */ // 0x8078264C
    r6 = *(0 + r4); // lwz @ 0x80782650
    /* lis r5, 0 */ // 0x80782654
    /* lis r4, 0 */ // 0x80782658
    r3 = r3 rlwinm 1; // rlwinm
    r7 = *(4 + r6); // lwz @ 0x80782660
    *(8 + r1) = r0; // stw @ 0x80782664
    r6 = *(0xc + r7); // lwz @ 0x80782668
    r7 = *(8 + r7); // lwz @ 0x8078266C
    /* lhax r0, r6, r3 */ // 0x80782670
    /* lfd f2, 0(r5) */ // 0x80782674
    /* mulli r0, r0, 0x74 */ // 0x80782678
    /* lfs f0, 0(r4) */ // 0x8078267C
    r3 = r7 + r0; // 0x80782680
    r0 = *(0x6e + r3); // lha @ 0x80782684
    /* xoris r0, r0, 0x8000 */ // 0x80782688
    *(0xc + r1) = r0; // stw @ 0x8078268C
    /* lfd f1, 8(r1) */ // 0x80782690
    /* stfs f0, 0(r31) */ // 0x80782694
    /* fsubs f1, f1, f2 */ // 0x80782698
    /* stfs f0, 8(r31) */ // 0x8078269C
    /* stfs f1, 4(r31) */ // 0x807826A0
    r31 = *(0x1c + r1); // lwz @ 0x807826A4
    r0 = *(0x24 + r1); // lwz @ 0x807826A8
    return;
}