/* Function at 0x8069D86C, size=500 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r27 */
/* Calls: 14 function(s) */

int FUN_8069D86C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -128(r1) */
    /* saved r27 */
    /* li r4, 0 */ // 0x8069D874
    /* li r5, 0 */ // 0x8069D878
    *(0x84 + r1) = r0; // stw @ 0x8069D87C
    /* stmw r27, 0x6c(r1) */ // 0x8069D880
    /* li r30, 0 */ // 0x8069D884
    r31 = r3;
    *(0x344 + r3) = r30; // stw @ 0x8069D88C
    r12 = *(0x44 + r3); // lwzu @ 0x8069D890
    r12 = *(0x10 + r12); // lwz @ 0x8069D894
    /* mtctr r12 */ // 0x8069D898
    /* bctrl  */ // 0x8069D89C
    r3 = r31;
    r4 = r31 + 0x44; // 0x8069D8A4
    FUN_80671C34(r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 2 */ // 0x8069D8B0
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r31;
    r5 = r31 + 0x1c8; // 0x8069D8BC
    /* li r4, 0 */ // 0x8069D8C0
    /* li r6, 0 */ // 0x8069D8C4
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r31;
    r5 = r31 + 0x54; // 0x8069D8D0
    /* li r4, 1 */ // 0x8069D8D4
    /* li r6, 0 */ // 0x8069D8D8
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r4 = r31 + 0x1c8; // 0x8069D8E4
    FUN_8064E324(r4, r6, r3, r4); // bl 0x8064E324
    /* lis r29, 0 */ // 0x8069D8EC
    r28 = *(0 + r29); // lwzu @ 0x8069D8F0
    /* lis r6, 0 */ // 0x8069D8F4
    *(8 + r1) = r28; // stw @ 0x8069D8F8
    r12 = *(4 + r29); // lwz @ 0x8069D8FC
    r6 = r6 + 0; // 0x8069D900
    r11 = *(8 + r29); // lwz @ 0x8069D904
    r10 = *(0xc + r29); // lwz @ 0x8069D90C
    r4 = r6 + 0x60; // 0x8069D910
    r9 = *(0x10 + r29); // lwz @ 0x8069D914
    r5 = r6 + 0x66; // 0x8069D918
    r8 = *(0x14 + r29); // lwz @ 0x8069D91C
    r6 = r6 + 0x71; // 0x8069D920
    r0 = *(0x18 + r29); // lwz @ 0x8069D924
    *(0xc + r1) = r12; // stw @ 0x8069D92C
    *(0x10 + r1) = r11; // stw @ 0x8069D930
    *(0x14 + r1) = r10; // stw @ 0x8069D934
    *(0x18 + r1) = r9; // stw @ 0x8069D938
    *(0x1c + r1) = r8; // stw @ 0x8069D93C
    *(0x20 + r1) = r0; // stw @ 0x8069D940
    FUN_8064E36C(); // bl 0x8064E36C
    /* li r4, -1 */ // 0x8069D94C
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    r3 = r31 + 0x54; // 0x8069D954
    FUN_808744C4(r3, r4, r3); // bl 0x808744C4
    /* lis r3, 1 */ // 0x8069D95C
    *(0x348 + r31) = r30; // stb @ 0x8069D960
    /* li r27, 0 */ // 0x8069D964
    /* lis r28, 0 */ // 0x8069D968
    r29 = r3 + -0x7340; // 0x8069D96C
    r30 = r3 + -0x6c10; // 0x8069D970
    /* clrlwi r4, r27, 0x18 */ // 0x8069D974
    r5 = *(0 + r28); // lwz @ 0x8069D978
    r0 = r4 * r29; // 0x8069D97C
    r3 = *(0x14 + r5); // lwz @ 0x8069D980
    r3 = r3 + r0; // 0x8069D984
    r3 = *(8 + r3); // lwz @ 0x8069D988
    /* addis r0, r3, -0x524b */ // 0x8069D98C
    if (!=) goto 0x0x8069d9cc;
    r0 = r4 * r30; // 0x8069D998
    r0 = r5 + r0; // 0x8069D99C
    /* addic. r3, r0, 0x38 */ // 0x8069D9A0
    if (==) goto 0x0x8069d9cc;
    /* addis r3, r3, 1 */ // 0x8069D9A8
    /* li r4, 0x38 */ // 0x8069D9AC
    r3 = r3 + -0x7008; // 0x8069D9B0
    FUN_805D84B0(r4, r3); // bl 0x805D84B0
    if (==) goto 0x0x8069d9cc;
    /* li r0, 1 */ // 0x8069D9C0
    *(0x348 + r31) = r0; // stb @ 0x8069D9C4
    /* b 0x8069d9d8 */ // 0x8069D9C8
    r27 = r27 + 1; // 0x8069D9CC
    if (<) goto 0x0x8069d974;
    r0 = *(0x348 + r31); // lbz @ 0x8069D9D8
    if (==) goto 0x0x8069da28;
    FUN_805E34E4(r3); // bl 0x805E34E4
    /* lis r30, 0 */ // 0x8069D9EC
    /* li r4, 5 */ // 0x8069D9F4
    FUN_805E364C(r3, r3, r4); // bl 0x805E364C
    *(0x34c + r31) = r3; // stw @ 0x8069D9FC
    r4 = *(0 + r30); // lwz @ 0x8069DA00
    r4 = *(0x98 + r4); // lwz @ 0x8069DA04
    r0 = *(0x4c8 + r4); // lwz @ 0x8069DA08
    if (==) goto 0x0x8069d9f0;
    *(0x4c8 + r4) = r3; // stw @ 0x8069DA14
    /* li r4, -1 */ // 0x8069DA1C
    FUN_805E35B8(r3, r4); // bl 0x805E35B8
    /* b 0x8069da30 */ // 0x8069DA24
    /* li r0, 0 */ // 0x8069DA28
    *(0x34c + r31) = r0; // stw @ 0x8069DA2C
    r3 = r31;
    /* li r4, 0 */ // 0x8069DA34
    /* li r5, 0 */ // 0x8069DA38
    FUN_806724E0(r3, r4, r5); // bl 0x806724E0
    /* lis r3, 0 */ // 0x8069DA40
    r3 = *(0 + r3); // lwz @ 0x8069DA44
    FUN_806E6648(r4, r5, r3); // bl 0x806E6648
    r0 = *(0x84 + r1); // lwz @ 0x8069DA50
    return;
}