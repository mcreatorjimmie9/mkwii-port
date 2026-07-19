/* Function at 0x805E38A0, size=120 bytes */
/* Stack frame: 32 bytes */

void FUN_805E38A0(int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* li r8, 0 */ // 0x805E38A4
    /* li r7, 0xff */ // 0x805E38A8
    /* lis r5, 0 */ // 0x805E38AC
    *(4 + r3) = r8; // stw @ 0x805E38B0
    /* lis r0, 0x4330 */ // 0x805E38B4
    /* lfd f1, 0(r5) */ // 0x805E38B8
    /* lis r6, 0 */ // 0x805E38BC
    *(8 + r3) = r8; // sth @ 0x805E38C0
    *(0xa + r3) = r7; // stb @ 0x805E38C4
    *(0 + r3) = r4; // stw @ 0x805E38C8
    r5 = *(0 + r4); // lwz @ 0x805E38CC
    r6 = *(0 + r6); // lwz @ 0x805E38D0
    r5 = *(0x2c + r5); // lha @ 0x805E38D4
    *(8 + r1) = r0; // stw @ 0x805E38D8
    /* xoris r0, r5, 0x8000 */ // 0x805E38DC
    /* lfs f2, 0x74(r6) */ // 0x805E38E0
    *(0xc + r1) = r0; // stw @ 0x805E38E4
    /* lfd f0, 8(r1) */ // 0x805E38E8
    /* fsubs f0, f0, f1 */ // 0x805E38EC
    /* fmuls f0, f0, f2 */ // 0x805E38F0
    /* fctiwz f0, f0 */ // 0x805E38F4
    /* stfd f0, 0x10(r1) */ // 0x805E38F8
    r0 = *(0x14 + r1); // lwz @ 0x805E38FC
    *(0xc + r3) = r0; // sth @ 0x805E3900
    r4 = *(0 + r4); // lwz @ 0x805E3904
    r0 = *(0x38 + r4); // lha @ 0x805E3908
    *(0xa + r3) = r0; // stb @ 0x805E390C
    return;
}