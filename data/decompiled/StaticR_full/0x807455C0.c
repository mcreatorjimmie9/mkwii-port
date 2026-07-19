/* Function at 0x807455C0, size=100 bytes */
/* Stack frame: 32 bytes */

void FUN_807455C0(int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* lis r0, 0x4330 */ // 0x807455C4
    /* lis r5, 0 */ // 0x807455C8
    /* lis r4, 0 */ // 0x807455CC
    *(0x1c + r1) = r3; // stw @ 0x807455D0
    /* lfs f3, 0(r4) */ // 0x807455D4
    *(0x18 + r1) = r0; // stw @ 0x807455D8
    /* lfd f4, 0(r5) */ // 0x807455DC
    /* fmuls f2, f3, f2 */ // 0x807455E0
    /* lfd f0, 0x18(r1) */ // 0x807455E4
    *(0xc + r1) = r3; // stw @ 0x807455E8
    /* fsubs f0, f0, f4 */ // 0x807455EC
    *(8 + r1) = r0; // stw @ 0x807455F0
    /* lfd f3, 8(r1) */ // 0x807455F4
    /* fmuls f0, f2, f0 */ // 0x807455F8
    *(0x14 + r1) = r3; // stw @ 0x807455FC
    /* fsubs f3, f3, f4 */ // 0x80745600
    *(0x10 + r1) = r0; // stw @ 0x80745604
    /* lfd f2, 0x10(r1) */ // 0x80745608
    /* fmuls f3, f1, f3 */ // 0x8074560C
    /* fsubs f1, f2, f4 */ // 0x80745610
    /* fmuls f0, f1, f0 */ // 0x80745614
    /* fsubs f1, f3, f0 */ // 0x80745618
    return;
}