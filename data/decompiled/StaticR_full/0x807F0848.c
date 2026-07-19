/* Function at 0x807F0848, size=472 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_807F0848(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    *(0x4c + r1) = r31; // stw @ 0x807F0854
    r31 = r3;
    r0 = *(0xb0 + r3); // lwz @ 0x807F085C
    if (==) goto 0x0x807f0874;
    if (==) goto 0x0x807f0950;
    /* b 0x807f09dc */ // 0x807F0870
    r3 = *(0x20 + r3); // lwz @ 0x807F0874
    r12 = *(0 + r3); // lwz @ 0x807F0878
    r12 = *(0x14 + r12); // lwz @ 0x807F087C
    /* mtctr r12 */ // 0x807F0880
    /* bctrl  */ // 0x807F0884
    if (!=) goto 0x0x807f08b8;
    /* lis r7, 0 */ // 0x807F0890
    r6 = *(0 + r7); // lwzu @ 0x807F0894
    *(8 + r1) = r6; // stw @ 0x807F0898
    r3 = r31;
    r5 = *(4 + r7); // lwz @ 0x807F08A0
    r0 = *(8 + r7); // lwz @ 0x807F08A8
    *(0xc + r1) = r5; // stw @ 0x807F08AC
    *(0x10 + r1) = r0; // stw @ 0x807F08B0
    FUN_807F1048(r4); // bl 0x807F1048
    r5 = *(0x20 + r31); // lwz @ 0x807F08B8
    /* lis r6, 0 */ // 0x807F08BC
    r0 = *(0x2c + r31); // lhz @ 0x807F08C0
    r9 = *(0x18 + r5); // lwz @ 0x807F08C8
    r4 = r31 + 0x30; // 0x807F08CC
    r7 = *(0x20 + r5); // lwz @ 0x807F08D0
    r0 = r0 | 1; // 0x807F08D4
    r8 = *(0x1c + r5); // lwz @ 0x807F08D8
    r5 = r31 + 0xb8; // 0x807F08DC
    *(0x1c + r1) = r7; // stw @ 0x807F08E0
    /* lfs f1, 0xbc(r31) */ // 0x807F08E4
    /* lfs f0, 0(r6) */ // 0x807F08E8
    *(0x2c + r31) = r0; // sth @ 0x807F08EC
    /* fsubs f0, f1, f0 */ // 0x807F08F0
    /* lfs f2, 0x1c(r1) */ // 0x807F08F4
    *(0x14 + r1) = r9; // stw @ 0x807F08F8
    /* lfs f1, 0x14(r1) */ // 0x807F08FC
    *(0x18 + r1) = r8; // stw @ 0x807F0900
    /* stfs f1, 0x30(r31) */ // 0x807F0904
    *(0x2c + r31) = r0; // sth @ 0x807F0908
    /* stfs f2, 0x38(r31) */ // 0x807F090C
    /* stfs f0, 0xbc(r31) */ // 0x807F0910
    FUN_805A4464(); // bl 0x805A4464
    r0 = *(0x2c + r31); // lhz @ 0x807F0918
    r3 = r31;
    /* lfs f0, 0x28(r1) */ // 0x807F0920
    /* lfs f1, 0x24(r1) */ // 0x807F0924
    r0 = r0 | 1; // 0x807F0928
    /* lfs f2, 0x20(r1) */ // 0x807F092C
    /* stfs f2, 0x30(r31) */ // 0x807F0930
    *(0x2c + r31) = r0; // sth @ 0x807F0934
    /* stfs f1, 0x34(r31) */ // 0x807F0938
    /* stfs f0, 0x38(r31) */ // 0x807F093C
    FUN_807F0D18(); // bl 0x807F0D18
    r3 = r31;
    FUN_807F0BD4(r3); // bl 0x807F0BD4
    /* b 0x807f09dc */ // 0x807F094C
    r0 = *(0xcc + r3); // lwz @ 0x807F0950
    if (>=) goto 0x0x807f09dc;
    /* li r0, 0 */ // 0x807F095C
    *(0xb0 + r3) = r0; // stw @ 0x807F0960
    /* lis r4, 0 */ // 0x807F0964
    /* lis r5, 0 */ // 0x807F0968
    /* lfs f0, 0(r4) */ // 0x807F096C
    /* lis r0, 0x4330 */ // 0x807F0970
    /* stfs f0, 0xc4(r3) */ // 0x807F0974
    /* li r4, 1 */ // 0x807F0978
    r7 = *(0xa0 + r3); // lwz @ 0x807F097C
    *(0x38 + r1) = r0; // stw @ 0x807F0980
    r6 = *(0 + r7); // lwz @ 0x807F0984
    /* lfd f1, 0(r5) */ // 0x807F0988
    r0 = *(0x30 + r6); // lha @ 0x807F098C
    /* xoris r0, r0, 0x8000 */ // 0x807F0990
    *(0x3c + r1) = r0; // stw @ 0x807F0994
    /* lfd f0, 0x38(r1) */ // 0x807F0998
    /* fsubs f0, f0, f1 */ // 0x807F099C
    /* stfs f0, 0xbc(r3) */ // 0x807F09A0
    r5 = *(0 + r7); // lwz @ 0x807F09A4
    r0 = *(0x2c + r5); // lha @ 0x807F09A8
    *(0xcc + r3) = r0; // stw @ 0x807F09AC
    r12 = *(0 + r3); // lwz @ 0x807F09B0
    r12 = *(0x68 + r12); // lwz @ 0x807F09B4
    /* mtctr r12 */ // 0x807F09B8
    /* bctrl  */ // 0x807F09BC
    r12 = *(0 + r31); // lwz @ 0x807F09C0
    r3 = r31;
    r12 = *(0x94 + r12); // lwz @ 0x807F09C8
    /* mtctr r12 */ // 0x807F09CC
    /* bctrl  */ // 0x807F09D0
    /* li r0, 1 */ // 0x807F09D4
    *(0x10c + r31) = r0; // stb @ 0x807F09D8
    r4 = *(0xcc + r31); // lwz @ 0x807F09DC
    r5 = *(0x20 + r31); // lwz @ 0x807F09E4
    r0 = r4 + -1; // 0x807F09E8
    *(0xcc + r31) = r0; // stw @ 0x807F09EC
    r4 = r5 + 0x24; // 0x807F09F0
    /* lfs f1, 0x30(r5) */ // 0x807F09F4
    FUN_805A443C(r4); // bl 0x805A443C
    /* lfs f2, 0x34(r1) */ // 0x807F09FC
    /* lfs f0, 0x2c(r1) */ // 0x807F0A00
    /* stfs f0, 0xb8(r31) */ // 0x807F0A04
    /* stfs f2, 0xc0(r31) */ // 0x807F0A08
    r31 = *(0x4c + r1); // lwz @ 0x807F0A0C
    r0 = *(0x54 + r1); // lwz @ 0x807F0A10
    return;
}