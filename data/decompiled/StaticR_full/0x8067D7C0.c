/* Function at 0x8067D7C0, size=296 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30 */
/* Calls: 11 function(s) */

int FUN_8067D7C0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x8067D7C8
    /* li r5, 0 */ // 0x8067D7CC
    *(0x74 + r1) = r0; // stw @ 0x8067D7D0
    *(0x6c + r1) = r31; // stw @ 0x8067D7D4
    *(0x68 + r1) = r30; // stw @ 0x8067D7D8
    r30 = r3;
    r12 = *(0x44 + r3); // lwz @ 0x8067D7E0
    r12 = *(0x10 + r12); // lwz @ 0x8067D7E4
    /* mtctr r12 */ // 0x8067D7E8
    r3 = r3 + 0x44; // 0x8067D7EC
    /* bctrl  */ // 0x8067D7F0
    r3 = r30;
    r4 = r30 + 0x44; // 0x8067D7F8
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r30;
    /* li r4, 2 */ // 0x8067D804
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r30;
    r5 = r30 + 0x54; // 0x8067D810
    /* li r4, 0 */ // 0x8067D814
    /* li r6, 0 */ // 0x8067D818
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r4 = r30 + 0x54; // 0x8067D824
    FUN_8064E324(r4, r6, r3, r4); // bl 0x8064E324
    /* lis r7, 0 */ // 0x8067D82C
    r10 = *(0 + r7); // lwzu @ 0x8067D830
    /* lis r31, 0 */ // 0x8067D834
    *(8 + r1) = r10; // stw @ 0x8067D838
    r9 = *(4 + r7); // lwz @ 0x8067D83C
    r4 = r31 + 0; // 0x8067D840
    r8 = *(8 + r7); // lwz @ 0x8067D844
    r0 = *(0xc + r7); // lwz @ 0x8067D84C
    r5 = r4 + 8; // 0x8067D850
    *(0xc + r1) = r9; // stw @ 0x8067D854
    r6 = r4 + 0x14; // 0x8067D858
    *(0x10 + r1) = r8; // stw @ 0x8067D860
    *(0x14 + r1) = r0; // stw @ 0x8067D864
    FUN_8064E36C(r6, r7); // bl 0x8064E36C
    /* li r4, -1 */ // 0x8067D870
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    r3 = r30;
    r5 = r30 + 0x1c8; // 0x8067D87C
    /* li r4, 1 */ // 0x8067D880
    /* li r6, 0 */ // 0x8067D884
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r4 = r30 + 0x1c8; // 0x8067D890
    FUN_8064E324(r4, r6, r3, r4); // bl 0x8064E324
    r6 = r31 + 0; // 0x8067D898
    r4 = r6 + 0x20; // 0x8067D8A0
    /* li r7, 0 */ // 0x8067D8A4
    r5 = r6 + 0x28; // 0x8067D8A8
    r6 = r6 + 0x34; // 0x8067D8AC
    FUN_8064E36C(r3, r4, r7, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x8067D8B8
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    r3 = r30;
    /* li r4, 0 */ // 0x8067D8C4
    /* li r5, 0 */ // 0x8067D8C8
    FUN_806724E0(r4, r3, r4, r5); // bl 0x806724E0
    r0 = *(0x74 + r1); // lwz @ 0x8067D8D0
    r31 = *(0x6c + r1); // lwz @ 0x8067D8D4
    r30 = *(0x68 + r1); // lwz @ 0x8067D8D8
    return;
}