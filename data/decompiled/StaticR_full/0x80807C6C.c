/* Function at 0x80807C6C, size=348 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_80807C6C(int r3, int r4, int r5)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x80807C74
    /* lfs f0, 0(r5) */ // 0x80807C7C
    *(0x8c + r1) = r31; // stw @ 0x80807C80
    r31 = r3;
    *(0x88 + r1) = r30; // stw @ 0x80807C88
    /* lis r30, 0 */ // 0x80807C8C
    r30 = r30 + 0; // 0x80807C90
    /* lfs f1, 0x38(r4) */ // 0x80807C94
    /* lfs f2, 0x30(r4) */ // 0x80807C98
    /* stfs f2, 0x74(r1) */ // 0x80807C9C
    /* stfs f0, 0x78(r1) */ // 0x80807CA0
    /* stfs f1, 0x7c(r1) */ // 0x80807CA4
    r5 = *(0x108 + r3); // lwz @ 0x80807CA8
    if (>) goto 0x0x80807d3c;
    /* lis r4, 0x5555 */ // 0x80807CB4
    r0 = r4 + 0x5556; // 0x80807CB8
    /* mulhw r4, r0, r5 */ // 0x80807CBC
    /* srwi r0, r4, 0x1f */ // 0x80807CC0
    r0 = r4 + r0; // 0x80807CC4
    /* mulli r0, r0, 3 */ // 0x80807CC8
    /* subf. r0, r0, r5 */ // 0x80807CCC
    if (!=) goto 0x0x80807d3c;
    r4 = *(0xb0 + r31); // lwz @ 0x80807CD4
    FUN_80807E5C(r3); // bl 0x80807E5C
    r5 = r31 + 0x30; // 0x80807CE8
    FUN_805A4498(r3, r3, r4, r5); // bl 0x805A4498
    FUN_805E3430(r3, r4, r5, r3); // bl 0x805E3430
    /* lfs f1, 0x2c(r30) */ // 0x80807CF8
    FUN_805A443C(r3, r3, r4); // bl 0x805A443C
    /* lfs f0, 0x2c(r1) */ // 0x80807D08
    r3 = r31;
    /* stfs f0, 0xc4(r31) */ // 0x80807D10
    r4 = r31 + 0xc4; // 0x80807D14
    /* lfs f0, 0x30(r1) */ // 0x80807D18
    /* stfs f0, 0xc8(r31) */ // 0x80807D1C
    /* lfs f0, 0x34(r1) */ // 0x80807D20
    /* stfs f0, 0xcc(r31) */ // 0x80807D24
    r12 = *(0 + r31); // lwz @ 0x80807D28
    r12 = *(0x130 + r12); // lwz @ 0x80807D2C
    /* mtctr r12 */ // 0x80807D30
    /* bctrl  */ // 0x80807D34
    /* b 0x80807e44 */ // 0x80807D38
    r4 = *(0x10c + r3); // lwz @ 0x80807D3C
    r5 = *(0x34 + r30); // lwz @ 0x80807D40
    if (>=) goto 0x0x80807dc8;
    r0 = *(0x38 + r30); // lwz @ 0x80807D4C
    r0 = r5 + r0; // 0x80807D50
    if (>=) goto 0x0x80807dc8;
    r0 = *(0x170 + r3); // lbz @ 0x80807D5C
    if (!=) goto 0x0x80807dc8;
    r12 = *(0 + r31); // lwz @ 0x80807D68
    r4 = r31;
    r12 = *(0x128 + r12); // lwz @ 0x80807D74
    /* mtctr r12 */ // 0x80807D78
    /* bctrl  */ // 0x80807D7C
    /* lfs f1, 0x2c(r30) */ // 0x80807D80
    FUN_805A443C(r3, r4); // bl 0x805A443C
    /* lfs f0, 0x14(r1) */ // 0x80807D90
    /* stfs f0, 0xc4(r31) */ // 0x80807D94
    r3 = *(0x174 + r31); // lwz @ 0x80807D98
    /* lfs f0, 0x18(r1) */ // 0x80807D9C
    /* stfs f0, 0xc8(r31) */ // 0x80807DA0
    r0 = r3 + 1; // 0x80807DA4
    /* lfs f0, 0x1c(r1) */ // 0x80807DAC
    /* stfs f0, 0xcc(r31) */ // 0x80807DB0
    *(0x174 + r31) = r0; // stw @ 0x80807DB4
    if (<=) goto 0x0x80807e44;
    /* li r0, 1 */ // 0x80807DBC
    *(0x170 + r31) = r0; // stb @ 0x80807DC0
    /* b 0x80807e44 */ // 0x80807DC4
}