/* Function at 0x8071B59C, size=248 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_8071B59C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r5, 0 */ // 0x8071B5A4
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x8071B5B8
    *(0x10 + r1) = r28; // stw @ 0x8071B5BC
    /* lis r28, 0 */ // 0x8071B5C0
    r28 = r28 + 0; // 0x8071B5C4
    FUN_8089B9C4(); // bl 0x8089B9C4
    /* li r0, 0xd */ // 0x8071B5CC
    /* li r6, 0xc */ // 0x8071B5D0
    r31 = r0 * r0; // 0x8071B5D4
    /* li r8, 0x1c20 */ // 0x8071B5D8
    /* lis r5, 0 */ // 0x8071B5DC
    r3 = *(0x2c + r30); // lhz @ 0x8071B5E0
    /* li r7, 0x960 */ // 0x8071B5E4
    /* lfs f0, 0x34(r30) */ // 0x8071B5E8
    r5 = r5 + 0; // 0x8071B5EC
    *(0 + r30) = r5; // stw @ 0x8071B5F0
    r0 = r6 * r6; // 0x8071B5F4
    /* lfs f3, 8(r28) */ // 0x8071B5F8
    r3 = r3 | 1; // 0x8071B5FC
    *(0x2c + r30) = r3; // sth @ 0x8071B600
    /* fadds f0, f3, f0 */ // 0x8071B604
    r9 = r28 + 4; // 0x8071B608
    /* slwi r5, r0, 1 */ // 0x8071B60C
    /* stfs f0, 0x34(r30) */ // 0x8071B610
    r4 = r8 / r6; // 0x8071B614
    /* lfs f2, 0xc(r28) */ // 0x8071B618
    r12 = *(4 + r28); // lbz @ 0x8071B61C
    r11 = *(1 + r9); // lbz @ 0x8071B620
    r10 = *(2 + r9); // lbz @ 0x8071B624
    r9 = *(3 + r9); // lbz @ 0x8071B628
    r0 = r7 / r6; // 0x8071B62C
    /* lfs f1, 0x10(r28) */ // 0x8071B630
    /* lfs f0, 0x14(r28) */ // 0x8071B634
    *(8 + r1) = r12; // stb @ 0x8071B638
    *(9 + r1) = r11; // stb @ 0x8071B63C
    *(0xa + r1) = r10; // stb @ 0x8071B640
    /* mulli r3, r31, 0xc */ // 0x8071B644
    *(0xb + r1) = r9; // stb @ 0x8071B648
    *(0xf4 + r30) = r12; // stb @ 0x8071B64C
    r3 = r3 + 0x10; // 0x8071B650
    *(0xf5 + r30) = r11; // stb @ 0x8071B654
    *(0xf6 + r30) = r10; // stb @ 0x8071B658
    *(0xf7 + r30) = r9; // stb @ 0x8071B65C
    *(0xc0 + r30) = r8; // stw @ 0x8071B660
    *(0xc4 + r30) = r7; // stw @ 0x8071B664
    /* stfs f2, 0xcc(r30) */ // 0x8071B668
    /* stfs f3, 0xc8(r30) */ // 0x8071B66C
    /* stfs f1, 0xd0(r30) */ // 0x8071B670
    /* stfs f0, 0xd4(r30) */ // 0x8071B674
    *(0xd8 + r30) = r6; // stw @ 0x8071B678
    *(0xdc + r30) = r6; // stw @ 0x8071B67C
    *(0xe8 + r30) = r5; // stw @ 0x8071B680
    *(0xec + r30) = r31; // stw @ 0x8071B684
    *(0xe0 + r30) = r4; // stw @ 0x8071B688
    *(0xe4 + r30) = r0; // stw @ 0x8071B68C
    FUN_805E3430(); // bl 0x805E3430
}