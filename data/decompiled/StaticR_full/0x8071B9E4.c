/* Function at 0x8071B9E4, size=300 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8071B9E4(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r5, 0 */ // 0x8071B9EC
    /* lis r31, 0 */ // 0x8071B9F8
    r31 = r31 + 0; // 0x8071B9FC
    *(0x28 + r1) = r30; // stw @ 0x8071BA00
    *(0x24 + r1) = r29; // stw @ 0x8071BA04
    r29 = r3;
    *(0x20 + r1) = r28; // stw @ 0x8071BA0C
    FUN_8089B9C4(); // bl 0x8089B9C4
    /* li r0, 9 */ // 0x8071BA14
    /* li r6, 8 */ // 0x8071BA18
    r30 = r0 * r0; // 0x8071BA1C
    /* li r7, 0x960 */ // 0x8071BA20
    /* li r8, 0x23f0 */ // 0x8071BA24
    r9 = *(0x2c + r29); // lhz @ 0x8071BA28
    /* xoris r5, r7, 0x8000 */ // 0x8071BA2C
    *(0x14 + r1) = r5; // stw @ 0x8071BA30
    r0 = r6 * r6; // 0x8071BA34
    r10 = r9 | 1; // 0x8071BA38
    /* lis r3, 0x4330 */ // 0x8071BA3C
    *(0x10 + r1) = r3; // stw @ 0x8071BA40
    /* lis r11, 0 */ // 0x8071BA44
    /* lfs f1, 0x34(r29) */ // 0x8071BA48
    /* slwi r5, r0, 1 */ // 0x8071BA4C
    /* lfs f0, 8(r31) */ // 0x8071BA50
    r4 = r8 / r6; // 0x8071BA54
    /* fadds f2, f0, f1 */ // 0x8071BA5C
    /* lfd f1, 0x28(r31) */ // 0x8071BA60
    /* lfd f0, 0x10(r1) */ // 0x8071BA64
    r9 = r31 + 4; // 0x8071BA68
    /* fsubs f1, f0, f1 */ // 0x8071BA6C
    /* lfs f0, 0x1c(r31) */ // 0x8071BA70
    /* stfs f2, 0x34(r29) */ // 0x8071BA74
    /* mulli r3, r30, 0xc */ // 0x8071BA78
    /* lfs f5, 0xc(r31) */ // 0x8071BA7C
    /* fmuls f1, f0, f1 */ // 0x8071BA80
    r0 = r7 / r6; // 0x8071BA84
    *(0 + r29) = r11; // stw @ 0x8071BA88
    /* lfs f4, 0x10(r31) */ // 0x8071BA8C
    r3 = r3 + 0x10; // 0x8071BA90
    *(0x2c + r29) = r10; // sth @ 0x8071BA94
    /* lfs f3, 0x14(r31) */ // 0x8071BA98
    r12 = *(4 + r31); // lbz @ 0x8071BA9C
    r11 = *(1 + r9); // lbz @ 0x8071BAA0
    r10 = *(2 + r9); // lbz @ 0x8071BAA4
    r9 = *(3 + r9); // lbz @ 0x8071BAA8
    /* lfs f2, 0x18(r31) */ // 0x8071BAAC
    /* lfs f0, 0x20(r31) */ // 0x8071BAB0
    *(8 + r1) = r12; // stb @ 0x8071BAB4
    *(9 + r1) = r11; // stb @ 0x8071BAB8
    *(0xa + r1) = r10; // stb @ 0x8071BABC
    *(0xb + r1) = r9; // stb @ 0x8071BAC0
    *(0xf4 + r29) = r12; // stb @ 0x8071BAC4
    *(0xf5 + r29) = r11; // stb @ 0x8071BAC8
    *(0xf6 + r29) = r10; // stb @ 0x8071BACC
    *(0xf7 + r29) = r9; // stb @ 0x8071BAD0
    *(0xc0 + r29) = r8; // stw @ 0x8071BAD4
    *(0xc4 + r29) = r7; // stw @ 0x8071BAD8
    /* stfs f5, 0xcc(r29) */ // 0x8071BADC
    /* stfs f4, 0xc8(r29) */ // 0x8071BAE0
    /* stfs f3, 0xd0(r29) */ // 0x8071BAE4
    /* stfs f2, 0xd4(r29) */ // 0x8071BAE8
    /* stfs f1, 0xfc(r29) */ // 0x8071BAEC
    /* stfs f0, 0x100(r29) */ // 0x8071BAF0
    *(0xd8 + r29) = r6; // stw @ 0x8071BAF4
    *(0xdc + r29) = r6; // stw @ 0x8071BAF8
    *(0xe8 + r29) = r5; // stw @ 0x8071BAFC
    *(0xec + r29) = r30; // stw @ 0x8071BB00
    *(0xe0 + r29) = r4; // stw @ 0x8071BB04
    *(0xe4 + r29) = r0; // stw @ 0x8071BB08
    FUN_805E3430(); // bl 0x805E3430
}