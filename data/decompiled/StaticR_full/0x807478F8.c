/* Function at 0x807478F8, size=288 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_807478F8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0 */ // 0x80747900
    *(0x28 + r1) = r30; // stw @ 0x8074790C
    /* lis r30, 0 */ // 0x80747910
    r30 = r30 + 0; // 0x80747914
    *(0x24 + r1) = r29; // stw @ 0x80747918
    r29 = r3;
    /* lfs f1, 0(r30) */ // 0x80747920
    r3 = *(0x20 + r3); // lwz @ 0x80747924
    r12 = *(0 + r3); // lwz @ 0x80747928
    r12 = *(0x10 + r12); // lwz @ 0x8074792C
    /* mtctr r12 */ // 0x80747930
    /* bctrl  */ // 0x80747934
    r3 = *(0x20 + r29); // lwz @ 0x80747938
    FUN_8076D150(); // bl 0x8076D150
    /* lfs f2, 0xd0(r29) */ // 0x80747940
    r3 = r29;
    /* lfs f0, 0xd4(r29) */ // 0x80747948
    r4 = *(0x20 + r29); // lwz @ 0x8074794C
    /* fdivs f3, f2, f0 */ // 0x80747950
    r4 = r4 + 0x24; // 0x80747954
    /* fmuls f0, f0, f3 */ // 0x80747958
    /* fmuls f0, f3, f0 */ // 0x8074795C
    /* fsubs f0, f1, f0 */ // 0x80747960
    /* fdivs f0, f0, f2 */ // 0x80747964
    /* stfs f0, 0xdc(r29) */ // 0x80747968
    FUN_808A1E3C(); // bl 0x808A1E3C
    r7 = *(0x20 + r29); // lwz @ 0x80747970
    /* lis r6, 0 */ // 0x80747974
    r0 = *(0x2c + r29); // lhz @ 0x80747978
    /* li r31, 0 */ // 0x8074797C
    /* lfs f1, 0x20(r7) */ // 0x80747980
    r4 = r6 + 0; // 0x80747984
    /* lfs f2, 0x1c(r7) */ // 0x80747988
    r3 = r0 | 1; // 0x8074798C
    /* lfs f3, 0x18(r7) */ // 0x80747990
    /* li r0, -1 */ // 0x80747994
    /* lfs f0, 0(r30) */ // 0x80747998
    r5 = r29 + 0xe0; // 0x8074799C
    *(0x2c + r29) = r3; // sth @ 0x807479A0
    /* stfs f3, 0x30(r29) */ // 0x807479A8
    /* stfs f2, 0x34(r29) */ // 0x807479AC
    /* stfs f1, 0x38(r29) */ // 0x807479B0
    /* stfs f0, 0x104(r29) */ // 0x807479B4
    *(0x108 + r29) = r31; // stw @ 0x807479B8
    *(0x10c + r29) = r31; // stb @ 0x807479BC
    *(0x110 + r29) = r0; // stw @ 0x807479C0
    /* lfs f0, 0(r6) */ // 0x807479C4
    /* stfs f0, 0xf8(r29) */ // 0x807479C8
    /* lfs f0, 4(r4) */ // 0x807479CC
    /* stfs f0, 0xfc(r29) */ // 0x807479D0
    /* lfs f0, 8(r4) */ // 0x807479D4
    /* stfs f0, 0x100(r29) */ // 0x807479D8
    /* lfs f0, 0x24(r7) */ // 0x807479DC
    /* stfs f0, 0xe0(r29) */ // 0x807479E0
    /* lfs f0, 0x28(r7) */ // 0x807479E4
    /* stfs f0, 0xe4(r29) */ // 0x807479E8
    /* lfs f0, 0x2c(r7) */ // 0x807479EC
    /* stfs f0, 0xe8(r29) */ // 0x807479F0
    FUN_805C6D88(); // bl 0x805C6D88
    /* lfs f0, 8(r1) */ // 0x807479F8
    r3 = r29 + 0xec; // 0x807479FC
    /* stfs f0, 0xec(r29) */ // 0x80747A00
    /* lfs f0, 0xc(r1) */ // 0x80747A04
    /* stfs f0, 0xf0(r29) */ // 0x80747A08
    /* lfs f0, 0x10(r1) */ // 0x80747A0C
    /* stfs f0, 0xf4(r29) */ // 0x80747A10
    FUN_805E3430(); // bl 0x805E3430
}