/* Function at 0x8066C8A4, size=316 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 12 function(s) */

int FUN_8066C8A4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x8066C8AC
    /* li r5, 0 */ // 0x8066C8B0
    *(0x44 + r1) = r0; // stw @ 0x8066C8B4
    /* li r0, 0 */ // 0x8066C8B8
    *(0x3c + r1) = r31; // stw @ 0x8066C8BC
    *(0x38 + r1) = r30; // stw @ 0x8066C8C0
    r30 = r3;
    *(0x1a0 + r3) = r4; // stw @ 0x8066C8C8
    /* li r4, 1 */ // 0x8066C8CC
    *(0x1a4 + r3) = r0; // stb @ 0x8066C8D0
    r12 = *(0x44 + r3); // lwzu @ 0x8066C8D4
    r12 = *(0x10 + r12); // lwz @ 0x8066C8D8
    /* mtctr r12 */ // 0x8066C8DC
    /* bctrl  */ // 0x8066C8E0
    r3 = r30;
    r4 = r30 + 0x44; // 0x8066C8E8
    FUN_80671C34(r3, r4); // bl 0x80671C34
    r3 = r30 + 0x44; // 0x8066C8F0
    r5 = r30 + 0x18c; // 0x8066C8F4
    /* li r4, 0 */ // 0x8066C8F8
    /* li r6, 0 */ // 0x8066C8FC
    FUN_80668D34(r3, r5, r4, r6); // bl 0x80668D34
    r3 = r30;
    /* li r4, 3 */ // 0x8066C908
    FUN_80671C1C(r4, r6, r3, r4); // bl 0x80671C1C
    r3 = r30;
    r5 = r30 + 0x1a8; // 0x8066C914
    /* li r4, 0 */ // 0x8066C918
    /* li r6, 0 */ // 0x8066C91C
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r31, 0 */ // 0x8066C924
    r3 = r30 + 0x1a8; // 0x8066C928
    r4 = r31 + 0; // 0x8066C92C
    r5 = r4 + 0xf; // 0x8066C930
    r6 = r4 + 0x1d; // 0x8066C934
    FUN_8066CF50(r3, r4, r5, r6); // bl 0x8066CF50
    r3 = r30;
    r5 = r30 + 0x31c; // 0x8066C940
    /* li r4, 1 */ // 0x8066C944
    /* li r6, 0 */ // 0x8066C948
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r4 = r30 + 0x31c; // 0x8066C954
    FUN_8064E324(r4, r6, r3, r4); // bl 0x8064E324
    r31 = r31 + 0; // 0x8066C95C
    r4 = r31 + 0x30; // 0x8066C964
    /* li r7, 0 */ // 0x8066C968
    r5 = r31 + 0x3f; // 0x8066C96C
    r6 = r31 + 0x45; // 0x8066C970
    FUN_8064E36C(r3, r4, r7, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x8066C97C
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    r3 = r30;
    r5 = r30 + 0x490; // 0x8066C988
    /* li r4, 2 */ // 0x8066C98C
    /* li r6, 0 */ // 0x8066C990
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x490; // 0x8066C998
    r4 = r31 + 0x50; // 0x8066C99C
    r5 = r31 + 0x5f; // 0x8066C9A0
    r6 = r31 + 0x69; // 0x8066C9A4
    FUN_8066D30C(r3, r4, r5, r6); // bl 0x8066D30C
    /* lis r4, 0 */ // 0x8066C9AC
    r3 = r30;
    /* lfs f0, 0(r4) */ // 0x8066C9B4
    /* li r4, 5 */ // 0x8066C9B8
    /* stfs f0, 0x50c(r30) */ // 0x8066C9BC
    /* li r5, 0 */ // 0x8066C9C0
    FUN_806724E0(r3, r4, r5); // bl 0x806724E0
    r0 = *(0x44 + r1); // lwz @ 0x8066C9C8
    r31 = *(0x3c + r1); // lwz @ 0x8066C9CC
    r30 = *(0x38 + r1); // lwz @ 0x8066C9D0
    return;
}