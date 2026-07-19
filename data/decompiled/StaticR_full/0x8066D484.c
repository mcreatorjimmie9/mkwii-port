/* Function at 0x8066D484, size=148 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8066D484(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r6;
    *(0x48 + r1) = r30; // stw @ 0x8066D498
    r30 = r5;
    *(0x44 + r1) = r29; // stw @ 0x8066D4A0
    r29 = r4;
    r4 = r3;
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r11, 0 */ // 0x8066D4B4
    r10 = *(0 + r11); // lwzu @ 0x8066D4B8
    *(8 + r1) = r10; // stw @ 0x8066D4BC
    r4 = r29;
    r9 = *(4 + r11); // lwz @ 0x8066D4C4
    r5 = r30;
    r8 = *(8 + r11); // lwz @ 0x8066D4CC
    r6 = r31;
    r0 = *(0xc + r11); // lwz @ 0x8066D4D4
    *(0xc + r1) = r9; // stw @ 0x8066D4DC
    *(0x10 + r1) = r8; // stw @ 0x8066D4E4
    *(0x14 + r1) = r0; // stw @ 0x8066D4E8
    FUN_8064E36C(r3, r7); // bl 0x8064E36C
    /* li r4, -1 */ // 0x8066D4F4
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    r0 = *(0x54 + r1); // lwz @ 0x8066D4FC
    r31 = *(0x4c + r1); // lwz @ 0x8066D500
    r30 = *(0x48 + r1); // lwz @ 0x8066D504
    r29 = *(0x44 + r1); // lwz @ 0x8066D508
    return;
}