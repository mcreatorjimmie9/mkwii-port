/* Function at 0x8089B8C4, size=60 bytes */
/* Stack frame: 16 bytes */

void FUN_8089B8C4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r0, 0x4330 */ // 0x8089B8C8
    /* lis r5, 0 */ // 0x8089B8CC
    r4 = *(0x12e + r3); // lha @ 0x8089B8D0
    /* lis r3, 0 */ // 0x8089B8D4
    *(8 + r1) = r0; // stw @ 0x8089B8D8
    /* xoris r4, r4, 0x8000 */ // 0x8089B8DC
    /* lfd f2, 0(r5) */ // 0x8089B8E0
    *(0xc + r1) = r4; // stw @ 0x8089B8E4
    /* lfs f0, 0(r3) */ // 0x8089B8E8
    /* lfd f1, 8(r1) */ // 0x8089B8EC
    /* fsubs f1, f1, f2 */ // 0x8089B8F0
    /* fadds f1, f0, f1 */ // 0x8089B8F4
    return;
}