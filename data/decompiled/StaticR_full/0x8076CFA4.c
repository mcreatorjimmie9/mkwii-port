/* Function at 0x8076CFA4, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8076CFA4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x8076CFAC
    r5 = r5 + 0; // 0x8076CFB4
    /* stfd f31, 0x18(r1) */ // 0x8076CFB8
    /* fmr f31, f1 */ // 0x8076CFBC
    *(0x14 + r1) = r31; // stw @ 0x8076CFC0
    /* lis r31, 0 */ // 0x8076CFC4
    *(0x10 + r1) = r30; // stw @ 0x8076CFC8
    r30 = r4;
    *(0xc + r1) = r29; // stw @ 0x8076CFD0
    r29 = r3;
    *(4 + r3) = r4; // sth @ 0x8076CFD8
    *(0 + r3) = r5; // stw @ 0x8076CFDC
    r3 = *(0 + r31); // lwz @ 0x8076CFE0
    FUN_80770F48(); // bl 0x80770F48
    r0 = *(8 + r3); // lhz @ 0x8076CFE8
    r4 = r30;
    *(6 + r29) = r0; // sth @ 0x8076CFF0
    r3 = *(0 + r31); // lwz @ 0x8076CFF4
    FUN_80770F48(r4); // bl 0x80770F48
    r0 = *(0xc + r3); // lwz @ 0x8076CFFC
    r4 = r30;
    *(8 + r29) = r0; // stw @ 0x8076D004
    r3 = *(0 + r31); // lwz @ 0x8076D008
    FUN_80770F48(r4); // bl 0x80770F48
    r3 = *(0xa + r3); // lbz @ 0x8076D010
    /* li r0, 0 */ // 0x8076D014
    *(0xc + r29) = r3; // stb @ 0x8076D018
    r3 = r29;
    /* stfs f31, 0x10(r29) */ // 0x8076D020
    *(0x16 + r29) = r0; // stb @ 0x8076D024
    /* lfd f31, 0x18(r1) */ // 0x8076D028
    r31 = *(0x14 + r1); // lwz @ 0x8076D02C
    r30 = *(0x10 + r1); // lwz @ 0x8076D030
    r29 = *(0xc + r1); // lwz @ 0x8076D034
    r0 = *(0x24 + r1); // lwz @ 0x8076D038
    return;
}