/* Function at 0x8067749C, size=80 bytes */
/* Stack frame: 16 bytes */

void FUN_8067749C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r5, 0 */ // 0x806774A0
    r5 = r5 + 0; // 0x806774A4
    /* lis r0, 0x4330 */ // 0x806774A8
    r4 = *(0x190 + r3); // lwz @ 0x806774AC
    *(8 + r1) = r0; // stw @ 0x806774B0
    /* xoris r4, r4, 0x8000 */ // 0x806774B4
    /* lfd f3, 0x138(r5) */ // 0x806774B8
    *(0xc + r1) = r4; // stw @ 0x806774BC
    /* lfs f2, 0x128(r5) */ // 0x806774C0
    /* lfd f0, 8(r1) */ // 0x806774C4
    /* lfs f1, 0x12c(r5) */ // 0x806774C8
    /* fsubs f3, f0, f3 */ // 0x806774CC
    /* lfs f0, 0x124(r5) */ // 0x806774D0
    /* fmuls f2, f3, f2 */ // 0x806774D4
    /* fdivs f1, f2, f1 */ // 0x806774D8
    /* fsubs f0, f0, f1 */ // 0x806774DC
    /* stfs f0, 0x19c(r3) */ // 0x806774E0
    return;
}