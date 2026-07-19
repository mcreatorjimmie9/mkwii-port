/* Function at 0x805E3918, size=116 bytes */
/* Stack frame: 32 bytes */

void FUN_805E3918(int r4, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* li r9, 0 */ // 0x805E391C
    /* li r8, 0xff */ // 0x805E3920
    /* lis r0, 0x4330 */ // 0x805E3924
    *(4 + r3) = r9; // stw @ 0x805E3928
    /* lis r6, 0 */ // 0x805E392C
    /* lis r7, 0 */ // 0x805E3930
    /* lfd f1, 0(r6) */ // 0x805E3934
    *(8 + r3) = r9; // sth @ 0x805E3938
    *(0xa + r3) = r8; // stb @ 0x805E393C
    *(0xe + r3) = r9; // stb @ 0x805E3940
    *(0 + r3) = r4; // stw @ 0x805E3944
    r4 = *(0 + r4); // lwz @ 0x805E3948
    r6 = *(0 + r7); // lwz @ 0x805E394C
    r4 = *(0x2c + r4); // lha @ 0x805E3950
    /* lfs f2, 0x74(r6) */ // 0x805E3954
    /* xoris r4, r4, 0x8000 */ // 0x805E3958
    *(0xc + r1) = r4; // stw @ 0x805E395C
    *(8 + r1) = r0; // stw @ 0x805E3960
    /* lfd f0, 8(r1) */ // 0x805E3964
    *(0xa + r3) = r5; // stb @ 0x805E3968
    /* fsubs f0, f0, f1 */ // 0x805E396C
    /* fmuls f0, f0, f2 */ // 0x805E3970
    /* fctiwz f0, f0 */ // 0x805E3974
    /* stfd f0, 0x10(r1) */ // 0x805E3978
    r0 = *(0x14 + r1); // lwz @ 0x805E397C
    *(0xc + r3) = r0; // sth @ 0x805E3980
    return;
}