/* Function at 0x8074EF7C, size=188 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r24 */
/* Calls: 1 function(s) */

void FUN_8074EF7C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -96(r1) */
    /* saved r24 */
    /* lis r8, 0 */ // 0x8074EF84
    /* li r6, 6 */ // 0x8074EF88
    *(0x64 + r1) = r0; // stw @ 0x8074EF8C
    /* stmw r24, 0x40(r1) */ // 0x8074EF9C
    /* li r30, 0 */ // 0x8074EFA0
    /* lis r31, 0 */ // 0x8074EFA4
    r24 = *(0 + r8); // lwzu @ 0x8074EFA8
    /* lbzu r12, 0(r31) */ // 0x8074EFAC
    r25 = *(4 + r8); // lwz @ 0x8074EFB0
    r26 = *(8 + r8); // lwz @ 0x8074EFB4
    r27 = *(0xc + r8); // lwz @ 0x8074EFB8
    r28 = *(0x10 + r8); // lwz @ 0x8074EFBC
    r29 = *(0x14 + r8); // lwz @ 0x8074EFC0
    r11 = *(1 + r31); // lbz @ 0x8074EFC4
    r10 = *(2 + r31); // lbz @ 0x8074EFC8
    r9 = *(3 + r31); // lbz @ 0x8074EFCC
    r8 = *(4 + r31); // lbz @ 0x8074EFD0
    r0 = *(5 + r31); // lbz @ 0x8074EFD4
    *(0x28 + r1) = r24; // stw @ 0x8074EFD8
    *(0x2c + r1) = r25; // stw @ 0x8074EFDC
    *(0x30 + r1) = r26; // stw @ 0x8074EFE0
    *(0x34 + r1) = r27; // stw @ 0x8074EFE4
    *(0x38 + r1) = r28; // stw @ 0x8074EFE8
    *(0x3c + r1) = r29; // stw @ 0x8074EFEC
    *(0x10 + r1) = r30; // stw @ 0x8074EFF0
    *(0x14 + r1) = r30; // stw @ 0x8074EFF4
    *(0x18 + r1) = r30; // stw @ 0x8074EFF8
    *(0x1c + r1) = r30; // stw @ 0x8074EFFC
    *(0x20 + r1) = r30; // stw @ 0x8074F000
    *(0x24 + r1) = r30; // stw @ 0x8074F004
    *(8 + r1) = r12; // stb @ 0x8074F008
    *(9 + r1) = r11; // stb @ 0x8074F00C
    *(0xa + r1) = r10; // stb @ 0x8074F010
    *(0xb + r1) = r9; // stb @ 0x8074F014
    *(0xc + r1) = r8; // stb @ 0x8074F018
    *(0xd + r1) = r0; // stb @ 0x8074F01C
    FUN_808A1444(); // bl 0x808A1444
    r0 = *(0x64 + r1); // lwz @ 0x8074F028
    return;
}