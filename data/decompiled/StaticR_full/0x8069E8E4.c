/* Function at 0x8069E8E4, size=276 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 8 function(s) */

int FUN_8069E8E4(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0 */ // 0x8069E8EC
    /* li r5, 0 */ // 0x8069E8F0
    *(0x5c + r1) = r31; // stw @ 0x8069E8F8
    *(0x58 + r1) = r30; // stw @ 0x8069E8FC
    *(0x54 + r1) = r29; // stw @ 0x8069E900
    r29 = r3;
    r12 = *(0x1b8 + r3); // lwz @ 0x8069E908
    r12 = *(0x10 + r12); // lwz @ 0x8069E90C
    /* mtctr r12 */ // 0x8069E910
    r3 = r3 + 0x1b8; // 0x8069E914
    /* bctrl  */ // 0x8069E918
    r3 = r29;
    r4 = r29 + 0x1b8; // 0x8069E920
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r29;
    /* li r4, 1 */ // 0x8069E92C
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r29;
    r5 = r29 + 0x44; // 0x8069E938
    /* li r4, 0 */ // 0x8069E93C
    /* li r6, 0 */ // 0x8069E940
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r4 = r29 + 0x44; // 0x8069E94C
    FUN_8064E324(r4, r6, r3, r4); // bl 0x8064E324
    /* lis r30, 0 */ // 0x8069E954
    r31 = *(0 + r30); // lwzu @ 0x8069E958
    /* lis r6, 0 */ // 0x8069E95C
    *(8 + r1) = r31; // stw @ 0x8069E960
    r12 = *(4 + r30); // lwz @ 0x8069E964
    r6 = r6 + 0; // 0x8069E968
    r11 = *(8 + r30); // lwz @ 0x8069E96C
    r10 = *(0xc + r30); // lwz @ 0x8069E974
    r4 = r6 + 0x114; // 0x8069E978
    r9 = *(0x10 + r30); // lwz @ 0x8069E97C
    r5 = r6 + 0x11a; // 0x8069E980
    r8 = *(0x14 + r30); // lwz @ 0x8069E984
    r6 = r6 + 0x125; // 0x8069E988
    r0 = *(0x18 + r30); // lwz @ 0x8069E98C
    *(0xc + r1) = r12; // stw @ 0x8069E994
    *(0x10 + r1) = r11; // stw @ 0x8069E998
    *(0x14 + r1) = r10; // stw @ 0x8069E99C
    *(0x18 + r1) = r9; // stw @ 0x8069E9A0
    *(0x1c + r1) = r8; // stw @ 0x8069E9A4
    *(0x20 + r1) = r0; // stw @ 0x8069E9A8
    FUN_8064E36C(); // bl 0x8064E36C
    /* li r4, -1 */ // 0x8069E9B4
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    /* lis r3, 0 */ // 0x8069E9BC
    r3 = *(0 + r3); // lwz @ 0x8069E9C0
    r3 = *(0 + r3); // lwz @ 0x8069E9C4
    FUN_80685E54(r4, r3); // bl 0x80685E54
    r3 = r29;
    /* li r4, 0 */ // 0x8069E9D0
    /* li r5, 0 */ // 0x8069E9D4
    FUN_806724E0(r3, r4, r5); // bl 0x806724E0
    r0 = *(0x64 + r1); // lwz @ 0x8069E9DC
    r31 = *(0x5c + r1); // lwz @ 0x8069E9E0
    r30 = *(0x58 + r1); // lwz @ 0x8069E9E4
    r29 = *(0x54 + r1); // lwz @ 0x8069E9E8
    return;
}