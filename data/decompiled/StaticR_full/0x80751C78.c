/* Function at 0x80751C78, size=172 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

void FUN_80751C78(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x3c + r1) = r31; // stw @ 0x80751C8C
    *(0x38 + r1) = r30; // stw @ 0x80751C90
    *(0x34 + r1) = r29; // stw @ 0x80751C94
    /* lis r29, 0 */ // 0x80751C98
    r29 = r29 + 0; // 0x80751C9C
    r6 = r29 + 0x80; // 0x80751CA0
    r7 = *(0x80 + r29); // lwz @ 0x80751CA4
    r10 = *(4 + r6); // lwz @ 0x80751CA8
    r9 = r29 + 0x8c; // 0x80751CAC
    r0 = *(8 + r6); // lwz @ 0x80751CB0
    r8 = r29 + 0x98; // 0x80751CB4
    *(0x18 + r1) = r7; // stw @ 0x80751CB8
    r31 = *(0x8c + r29); // lwz @ 0x80751CC0
    /* li r6, 3 */ // 0x80751CC4
    *(0x1c + r1) = r10; // stw @ 0x80751CC8
    r12 = *(4 + r9); // lwz @ 0x80751CCC
    *(0x20 + r1) = r0; // stw @ 0x80751CD0
    r11 = *(8 + r9); // lwz @ 0x80751CD4
    r30 = *(0xe4 + r3); // lwz @ 0x80751CD8
    r10 = *(0x98 + r29); // lbz @ 0x80751CDC
    r9 = *(1 + r8); // lbz @ 0x80751CE0
    r0 = *(2 + r8); // lbz @ 0x80751CE4
    *(0x20 + r1) = r30; // stw @ 0x80751CE8
    *(0xc + r1) = r31; // stw @ 0x80751CEC
    *(0x10 + r1) = r12; // stw @ 0x80751CF0
    *(0x14 + r1) = r11; // stw @ 0x80751CF4
    *(8 + r1) = r10; // stb @ 0x80751CF8
    *(9 + r1) = r9; // stb @ 0x80751CFC
    *(0xa + r1) = r0; // stb @ 0x80751D00
    FUN_808A1444(); // bl 0x808A1444
    r0 = *(0x44 + r1); // lwz @ 0x80751D08
    r31 = *(0x3c + r1); // lwz @ 0x80751D0C
    r30 = *(0x38 + r1); // lwz @ 0x80751D10
    r29 = *(0x34 + r1); // lwz @ 0x80751D14
    return;
}