/* Function at 0x806B9564, size=180 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806B9564(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r0 = r3;
    *(0x5c + r1) = r31; // stw @ 0x806B9578
    r31 = r4;
    r4 = r0;
    *(0x58 + r1) = r30; // stw @ 0x806B9584
    *(0x54 + r1) = r29; // stw @ 0x806B9588
    r29 = r5;
    FUN_8064E324(r4); // bl 0x8064E324
    /* lis r30, 0 */ // 0x806B9594
    r5 = r31;
    r31 = *(0 + r30); // lwzu @ 0x806B959C
    /* lis r4, 0 */ // 0x806B95A0
    r4 = r4 + 0; // 0x806B95A4
    *(8 + r1) = r31; // stw @ 0x806B95A8
    r12 = *(4 + r30); // lwz @ 0x806B95AC
    r6 = r29;
    r11 = *(8 + r30); // lwz @ 0x806B95B4
    r10 = *(0xc + r30); // lwz @ 0x806B95BC
    r4 = r4 + 0x11; // 0x806B95C0
    r9 = *(0x10 + r30); // lwz @ 0x806B95C4
    r8 = *(0x14 + r30); // lwz @ 0x806B95CC
    r0 = *(0x18 + r30); // lwz @ 0x806B95D0
    *(0xc + r1) = r12; // stw @ 0x806B95D4
    *(0x10 + r1) = r11; // stw @ 0x806B95D8
    *(0x14 + r1) = r10; // stw @ 0x806B95DC
    *(0x18 + r1) = r9; // stw @ 0x806B95E0
    *(0x1c + r1) = r8; // stw @ 0x806B95E4
    *(0x20 + r1) = r0; // stw @ 0x806B95E8
    FUN_8064E36C(); // bl 0x8064E36C
    /* li r4, -1 */ // 0x806B95F4
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    r0 = *(0x64 + r1); // lwz @ 0x806B95FC
    r31 = *(0x5c + r1); // lwz @ 0x806B9600
    r30 = *(0x58 + r1); // lwz @ 0x806B9604
    r29 = *(0x54 + r1); // lwz @ 0x806B9608
    return;
}