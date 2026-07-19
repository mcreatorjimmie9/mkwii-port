/* Function at 0x80717A3C, size=244 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80717A3C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r5, 0 */ // 0x80717A44
    /* lis r31, 0 */ // 0x80717A50
    r31 = r31 + 0; // 0x80717A54
    *(0x28 + r1) = r30; // stw @ 0x80717A58
    *(0x24 + r1) = r29; // stw @ 0x80717A5C
    r29 = r3;
    *(0x20 + r1) = r28; // stw @ 0x80717A64
    FUN_8089B9C4(); // bl 0x8089B9C4
    /* li r6, 0x1e0 */ // 0x80717A6C
    /* li r5, 8 */ // 0x80717A70
    r0 = r6 / r5; // 0x80717A74
    /* lis r4, 0x4330 */ // 0x80717A78
    /* xoris r3, r6, 0x8000 */ // 0x80717A7C
    *(0x14 + r1) = r3; // stw @ 0x80717A80
    /* lfd f2, 0x18(r31) */ // 0x80717A84
    r7 = r31 + 4; // 0x80717A88
    *(0x10 + r1) = r4; // stw @ 0x80717A8C
    /* li r3, 9 */ // 0x80717A90
    r30 = r3 * r3; // 0x80717A94
    /* lfs f0, 0xc(r31) */ // 0x80717A98
    /* lfd f1, 0x10(r1) */ // 0x80717A9C
    /* lis r3, 0 */ // 0x80717AA0
    /* fsubs f1, f1, f2 */ // 0x80717AA4
    r3 = r3 + 0; // 0x80717AA8
    *(0 + r29) = r3; // stw @ 0x80717AAC
    r4 = r5 * r5; // 0x80717AB0
    /* fmuls f0, f1, f0 */ // 0x80717AB4
    /* lfs f2, 8(r31) */ // 0x80717AB8
    r10 = *(4 + r31); // lbz @ 0x80717ABC
    r9 = *(1 + r7); // lbz @ 0x80717AC0
    r8 = *(2 + r7); // lbz @ 0x80717AC4
    r7 = *(3 + r7); // lbz @ 0x80717AC8
    /* fmuls f1, f0, f2 */ // 0x80717ACC
    /* mulli r3, r30, 0xc */ // 0x80717AD0
    /* lfs f0, 0x10(r31) */ // 0x80717AD4
    /* slwi r4, r4, 1 */ // 0x80717AD8
    *(8 + r1) = r10; // stb @ 0x80717ADC
    *(9 + r1) = r9; // stb @ 0x80717AE0
    r3 = r3 + 0x10; // 0x80717AE4
    *(0xa + r1) = r8; // stb @ 0x80717AE8
    *(0xb + r1) = r7; // stb @ 0x80717AEC
    *(0xf4 + r29) = r10; // stb @ 0x80717AF0
    *(0xf5 + r29) = r9; // stb @ 0x80717AF4
    *(0xf6 + r29) = r8; // stb @ 0x80717AF8
    *(0xf7 + r29) = r7; // stb @ 0x80717AFC
    *(0xc0 + r29) = r6; // stw @ 0x80717B00
    *(0xc4 + r29) = r6; // stw @ 0x80717B04
    /* stfs f2, 0xcc(r29) */ // 0x80717B08
    /* stfs f1, 0xc8(r29) */ // 0x80717B0C
    /* stfs f0, 0xd0(r29) */ // 0x80717B10
    *(0xd8 + r29) = r5; // stw @ 0x80717B14
    *(0xdc + r29) = r5; // stw @ 0x80717B18
    *(0xe8 + r29) = r4; // stw @ 0x80717B1C
    *(0xec + r29) = r30; // stw @ 0x80717B20
    *(0xe0 + r29) = r0; // stw @ 0x80717B24
    *(0xe4 + r29) = r0; // stw @ 0x80717B28
    FUN_805E3430(); // bl 0x805E3430
}