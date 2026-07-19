/* Function at 0x807F863C, size=260 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_807F863C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r0, -1 */ // 0x807F8648
    *(0x14 + r1) = r29; // stw @ 0x807F8654
    /* li r29, 1 */ // 0x807F8658
    *(0x10 + r1) = r28; // stw @ 0x807F865C
    r28 = r3;
    *(0xd0 + r3) = r29; // stb @ 0x807F8664
    r4 = *(0xa0 + r3); // lwz @ 0x807F8668
    *(0xc8 + r3) = r0; // stw @ 0x807F866C
    r4 = *(0 + r4); // lwz @ 0x807F8670
    r0 = *(0x2a + r4); // lha @ 0x807F8674
    if (!=) goto 0x0x807f86c0;
    r3 = *(8 + r3); // lwz @ 0x807F8680
    /* lis r31, 0 */ // 0x807F8684
    /* lis r30, 0 */ // 0x807F8688
    /* lfs f1, 0(r31) */ // 0x807F868C
    r3 = *(0x28 + r3); // lwz @ 0x807F8690
    /* li r4, 1 */ // 0x807F8694
    /* lfs f2, 0(r30) */ // 0x807F8698
    FUN_805E70EC(r4); // bl 0x805E70EC
    r3 = *(0x10 + r28); // lwz @ 0x807F86A0
    /* li r4, 1 */ // 0x807F86A4
    /* lfs f1, 0(r31) */ // 0x807F86A8
    r3 = *(0x28 + r3); // lwz @ 0x807F86AC
    /* lfs f2, 0(r30) */ // 0x807F86B0
    FUN_805E70EC(r4); // bl 0x805E70EC
    *(0xb0 + r28) = r29; // stw @ 0x807F86B8
    /* b 0x807f8700 */ // 0x807F86BC
    r3 = *(8 + r3); // lwz @ 0x807F86C0
    /* lis r30, 0 */ // 0x807F86C4
    /* lis r31, 0 */ // 0x807F86C8
    /* lfs f1, 0(r30) */ // 0x807F86CC
    r3 = *(0x28 + r3); // lwz @ 0x807F86D0
    /* li r4, 0 */ // 0x807F86D4
    /* lfs f2, 0(r31) */ // 0x807F86D8
    FUN_805E70EC(r4); // bl 0x805E70EC
    r3 = *(0x10 + r28); // lwz @ 0x807F86E0
    /* li r4, 0 */ // 0x807F86E4
    /* lfs f1, 0(r30) */ // 0x807F86E8
    r3 = *(0x28 + r3); // lwz @ 0x807F86EC
    /* lfs f2, 0(r31) */ // 0x807F86F0
    FUN_805E70EC(r4); // bl 0x805E70EC
    /* li r0, 0 */ // 0x807F86F8
    *(0xb0 + r28) = r0; // stw @ 0x807F86FC
    r3 = r28;
    /* li r4, 0 */ // 0x807F8704
    FUN_808A0A44(r3, r4); // bl 0x808A0A44
    /* li r3, 0 */ // 0x807F870C
    /* li r0, 1 */ // 0x807F8710
    *(0xb4 + r28) = r3; // stb @ 0x807F8714
    *(0xd1 + r28) = r0; // stb @ 0x807F8718
    *(0xd4 + r28) = r3; // stw @ 0x807F871C
    r31 = *(0x1c + r1); // lwz @ 0x807F8720
    r30 = *(0x18 + r1); // lwz @ 0x807F8724
    r29 = *(0x14 + r1); // lwz @ 0x807F8728
    r28 = *(0x10 + r1); // lwz @ 0x807F872C
    r0 = *(0x24 + r1); // lwz @ 0x807F8730
    return;
}