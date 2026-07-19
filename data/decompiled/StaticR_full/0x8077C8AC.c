/* Function at 0x8077C8AC, size=260 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8077C8AC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r0, 0x4330 */ // 0x8077C8B8
    *(0x1c + r1) = r31; // stw @ 0x8077C8BC
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x8077C8C4
    r30 = r3;
    *(8 + r1) = r0; // stw @ 0x8077C8CC
    *(0x10 + r1) = r0; // stw @ 0x8077C8D0
    FUN_80751F08(); // bl 0x80751F08
    /* lis r5, 0 */ // 0x8077C8D8
    /* lis r4, 0 */ // 0x8077C8DC
    r5 = r5 + 0; // 0x8077C8E0
    /* lis r3, 0 */ // 0x8077C8E4
    r0 = r5 + 0xec; // 0x8077C8E8
    *(0 + r30) = r5; // stw @ 0x8077C8EC
    /* lfd f2, 0(r3) */ // 0x8077C8F0
    /* li r3, 0x7c */ // 0x8077C8F4
    *(0xb0 + r30) = r0; // stw @ 0x8077C8F8
    /* lfs f1, 0(r4) */ // 0x8077C8FC
    r4 = *(0 + r31); // lwz @ 0x8077C900
    r0 = *(0x2a + r4); // lha @ 0x8077C904
    /* xoris r0, r0, 0x8000 */ // 0x8077C908
    *(0xc + r1) = r0; // stw @ 0x8077C90C
    /* lfd f0, 8(r1) */ // 0x8077C910
    /* fsubs f0, f0, f2 */ // 0x8077C914
    /* stfs f0, 0x148(r30) */ // 0x8077C918
    r4 = *(0 + r31); // lwz @ 0x8077C91C
    r0 = *(0x2e + r4); // lha @ 0x8077C920
    /* xoris r0, r0, 0x8000 */ // 0x8077C924
    *(0x14 + r1) = r0; // stw @ 0x8077C928
    /* lfd f0, 0x10(r1) */ // 0x8077C92C
    /* fsubs f0, f0, f2 */ // 0x8077C930
    /* stfs f0, 0x14c(r30) */ // 0x8077C934
    r4 = *(0 + r31); // lwz @ 0x8077C938
    r0 = *(0x32 + r4); // lha @ 0x8077C93C
    /* xoris r0, r0, 0x8000 */ // 0x8077C940
    *(0xc + r1) = r0; // stw @ 0x8077C944
    /* lfd f0, 8(r1) */ // 0x8077C948
    /* fsubs f0, f0, f2 */ // 0x8077C94C
    /* stfs f0, 0x150(r30) */ // 0x8077C950
    r4 = *(0 + r31); // lwz @ 0x8077C954
    r0 = *(0x30 + r4); // lha @ 0x8077C958
    /* xoris r0, r0, 0x8000 */ // 0x8077C95C
    *(0x14 + r1) = r0; // stw @ 0x8077C960
    /* lfd f0, 0x10(r1) */ // 0x8077C964
    /* fsubs f0, f0, f2 */ // 0x8077C968
    /* fdivs f0, f0, f1 */ // 0x8077C96C
    /* stfs f0, 0x154(r30) */ // 0x8077C970
    r4 = *(0 + r31); // lwz @ 0x8077C974
    r0 = *(0x34 + r4); // lha @ 0x8077C978
    /* xoris r0, r0, 0x8000 */ // 0x8077C97C
    *(0xc + r1) = r0; // stw @ 0x8077C980
    /* lfd f0, 8(r1) */ // 0x8077C984
    /* fsubs f0, f0, f2 */ // 0x8077C988
    /* fdivs f0, f0, f1 */ // 0x8077C98C
    /* stfs f0, 0x158(r30) */ // 0x8077C990
    r4 = *(0 + r31); // lwz @ 0x8077C994
    r0 = *(0x2c + r4); // lha @ 0x8077C998
    *(0x15c + r30) = r0; // sth @ 0x8077C99C
    r4 = *(0 + r31); // lwz @ 0x8077C9A0
    r0 = *(0x36 + r4); // lha @ 0x8077C9A4
    *(0x15e + r30) = r0; // sth @ 0x8077C9A8
    FUN_805E3430(); // bl 0x805E3430
}