/* Function at 0x808E3860, size=412 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_808E3860(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x808E3868
    /* li r6, 0 */ // 0x808E386C
    *(0x24 + r1) = r0; // stw @ 0x808E3870
    /* li r0, 0x10 */ // 0x808E3874
    r5 = r5 + 0; // 0x808E3878
    *(0x1c + r1) = r31; // stw @ 0x808E387C
    r31 = r3;
    *(0 + r3) = r5; // stw @ 0x808E3884
    /* lis r5, 0 */ // 0x808E3888
    *(5 + r3) = r4; // stb @ 0x808E388C
    *(0x4c + r3) = r6; // stw @ 0x808E3890
    *(0x48 + r3) = r0; // sth @ 0x808E3894
    *(0x4a + r3) = r0; // sth @ 0x808E3898
    r3 = *(0 + r5); // lwz @ 0x808E389C
    r3 = *(0 + r3); // lwz @ 0x808E38A0
    r0 = *(0x1b8 + r3); // lwz @ 0x808E38A4
    if (==) goto 0x0x808e38e8;
    /* li r3, 0x6c */ // 0x808E38B0
    FUN_808BB994(r3); // bl 0x808BB994
    /* lfs f0, 0xa00(r3) */ // 0x808E38B8
    /* li r3, 0x6c */ // 0x808E38BC
    /* fctiwz f0, f0 */ // 0x808E38C0
    /* stfd f0, 8(r1) */ // 0x808E38C4
    r0 = *(0xc + r1); // lwz @ 0x808E38C8
    *(0x48 + r31) = r0; // sth @ 0x808E38CC
    FUN_808BB994(r3); // bl 0x808BB994
    /* lfs f0, 0xa04(r3) */ // 0x808E38D4
    /* fctiwz f0, f0 */ // 0x808E38D8
    /* stfd f0, 0x10(r1) */ // 0x808E38DC
    r0 = *(0x14 + r1); // lwz @ 0x808E38E0
    *(0x4a + r31) = r0; // sth @ 0x808E38E4
    r3 = *(0x48 + r31); // lhz @ 0x808E38E8
    /* lis r4, 0 */ // 0x808E38EC
    /* lis r0, 0x4330 */ // 0x808E38F0
    *(0x14 + r1) = r3; // stw @ 0x808E38F4
    r4 = *(0 + r4); // lwz @ 0x808E38F8
    /* lis r3, 0 */ // 0x808E38FC
    *(0x10 + r1) = r0; // stw @ 0x808E3900
    /* li r7, 0xc */ // 0x808E3904
    /* lfd f1, 0(r3) */ // 0x808E3908
    /* li r6, 0 */ // 0x808E390C
    /* lfd f0, 0x10(r1) */ // 0x808E3910
    /* li r5, -1 */ // 0x808E3914
    r4 = *(0 + r4); // lwz @ 0x808E3918
    /* li r0, 2 */ // 0x808E391C
    /* fsubs f0, f0, f1 */ // 0x808E3920
    r8 = *(0x4a + r31); // lhz @ 0x808E3924
    /* lfs f2, 0x3fc(r4) */ // 0x808E3928
    /* li r4, 1 */ // 0x808E392C
    /* li r3, 0x160 */ // 0x808E3930
    /* fmuls f0, f0, f2 */ // 0x808E3934
    *(4 + r31) = r7; // stb @ 0x808E3938
    /* fctiwz f0, f0 */ // 0x808E393C
    *(8 + r31) = r6; // stw @ 0x808E3940
    /* stfd f0, 8(r1) */ // 0x808E3944
    r7 = *(0xc + r1); // lwz @ 0x808E3948
    *(0xc + r31) = r5; // stw @ 0x808E394C
    /* clrlwi r10, r7, 0x10 */ // 0x808E3950
    /* slwi r7, r7, 0x1e */ // 0x808E3954
    /* srwi r9, r10, 0x1f */ // 0x808E3958
    *(0x10 + r31) = r6; // stb @ 0x808E395C
    /* subf r7, r9, r7 */ // 0x808E3960
    /* rotlwi r7, r7, 2 */ // 0x808E3964
    *(0x11 + r31) = r6; // stb @ 0x808E3968
    r7 = r7 + r9; // 0x808E396C
    /* subf r7, r7, r10 */ // 0x808E3970
    *(0x48 + r31) = r7; // sth @ 0x808E3974
    /* clrlwi r9, r7, 0x10 */ // 0x808E3978
    /* slwi r7, r7, 0x1e */ // 0x808E397C
    *(0x12 + r31) = r4; // stb @ 0x808E3980
    /* srwi r9, r9, 0x1f */ // 0x808E3984
    /* subf r7, r9, r7 */ // 0x808E3988
    *(0x13 + r31) = r6; // stb @ 0x808E398C
    /* rotlwi r7, r7, 2 */ // 0x808E3990
    r7 = r7 + r9; // 0x808E3994
    *(0x14 + r31) = r0; // stw @ 0x808E3998
    /* subf r7, r7, r8 */ // 0x808E399C
    *(0x18 + r31) = r6; // stw @ 0x808E39A0
    *(0x1c + r31) = r5; // stw @ 0x808E39A4
    *(0x4a + r31) = r7; // sth @ 0x808E39A8
    *(0x20 + r31) = r6; // stb @ 0x808E39AC
    *(0x21 + r31) = r6; // stb @ 0x808E39B0
    *(0x22 + r31) = r4; // stb @ 0x808E39B4
    *(0x23 + r31) = r6; // stb @ 0x808E39B8
    *(0x24 + r31) = r0; // stw @ 0x808E39BC
    *(0x28 + r31) = r6; // stw @ 0x808E39C0
    *(0x2c + r31) = r5; // stw @ 0x808E39C4
    *(0x30 + r31) = r6; // stb @ 0x808E39C8
    *(0x31 + r31) = r6; // stb @ 0x808E39CC
    *(0x32 + r31) = r4; // stb @ 0x808E39D0
    *(0x33 + r31) = r6; // stb @ 0x808E39D4
    *(0x34 + r31) = r0; // stw @ 0x808E39D8
    *(0x38 + r31) = r6; // stw @ 0x808E39DC
    *(0x3c + r31) = r5; // stw @ 0x808E39E0
    *(0x40 + r31) = r6; // stb @ 0x808E39E4
    *(0x41 + r31) = r6; // stb @ 0x808E39E8
    *(0x42 + r31) = r4; // stb @ 0x808E39EC
    *(0x43 + r31) = r6; // stb @ 0x808E39F0
    *(0x44 + r31) = r0; // stw @ 0x808E39F4
    FUN_805E3430(); // bl 0x805E3430
}