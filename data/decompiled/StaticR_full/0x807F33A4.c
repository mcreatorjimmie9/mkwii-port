/* Function at 0x807F33A4, size=80 bytes */
/* Stack frame: 32 bytes */

void FUN_807F33A4(int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* lis r4, 0 */ // 0x807F33A8
    /* lis r0, 0x4330 */ // 0x807F33AC
    /* lis r5, 0 */ // 0x807F33B0
    r6 = *(0 + r4); // lwz @ 0x807F33B4
    /* lis r4, 0 */ // 0x807F33B8
    *(8 + r1) = r0; // stw @ 0x807F33BC
    /* xoris r0, r6, 0x8000 */ // 0x807F33C0
    /* lfd f2, 0(r5) */ // 0x807F33C4
    *(0xc + r1) = r0; // stw @ 0x807F33C8
    /* lfs f0, 0(r4) */ // 0x807F33CC
    /* lfd f1, 8(r1) */ // 0x807F33D0
    /* fsubs f1, f1, f2 */ // 0x807F33D4
    /* fsubs f0, f1, f0 */ // 0x807F33D8
    /* fctiwz f0, f0 */ // 0x807F33DC
    /* stfd f0, 0x10(r1) */ // 0x807F33E0
    r0 = *(0x14 + r1); // lwz @ 0x807F33E4
    *(0xb4 + r3) = r0; // stw @ 0x807F33E8
    return;
}