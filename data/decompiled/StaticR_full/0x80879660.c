/* Function at 0x80879660, size=172 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80879660(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    r0 = r3;
    *(0x5c + r1) = r31; // stw @ 0x80879670
    r31 = r4;
    r4 = r0;
    *(0x58 + r1) = r30; // stw @ 0x8087967C
    *(0x190 + r3) = r5; // stb @ 0x80879680
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r30, 0 */ // 0x8087968C
    r6 = r31;
    r31 = *(0 + r30); // lwzu @ 0x80879694
    /* lis r5, 0 */ // 0x80879698
    r5 = r5 + 0; // 0x8087969C
    *(8 + r1) = r31; // stw @ 0x808796A0
    r12 = *(4 + r30); // lwz @ 0x808796A4
    r4 = r5 + 0x30; // 0x808796A8
    r11 = *(8 + r30); // lwz @ 0x808796AC
    r10 = *(0xc + r30); // lwz @ 0x808796B4
    r5 = r5 + 0x3b; // 0x808796B8
    r9 = *(0x10 + r30); // lwz @ 0x808796BC
    r8 = *(0x14 + r30); // lwz @ 0x808796C4
    r0 = *(0x18 + r30); // lwz @ 0x808796C8
    *(0xc + r1) = r12; // stw @ 0x808796CC
    *(0x10 + r1) = r11; // stw @ 0x808796D0
    *(0x14 + r1) = r10; // stw @ 0x808796D4
    *(0x18 + r1) = r9; // stw @ 0x808796D8
    *(0x1c + r1) = r8; // stw @ 0x808796DC
    *(0x20 + r1) = r0; // stw @ 0x808796E0
    FUN_8064E36C(); // bl 0x8064E36C
    /* li r4, -1 */ // 0x808796EC
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    r0 = *(0x64 + r1); // lwz @ 0x808796F4
    r31 = *(0x5c + r1); // lwz @ 0x808796F8
    r30 = *(0x58 + r1); // lwz @ 0x808796FC
    return;
}