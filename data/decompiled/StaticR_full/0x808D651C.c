/* Function at 0x808D651C, size=176 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_808D651C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x54 + r1) = r29; // stw @ 0x808D6534
    r29 = r3;
    r4 = r29;
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r31, 0 */ // 0x808D6548
    r12 = *(0 + r31); // lwzu @ 0x808D654C
    /* lis r5, 0 */ // 0x808D6550
    *(8 + r1) = r12; // stw @ 0x808D6554
    r11 = *(4 + r31); // lwz @ 0x808D6558
    r5 = r5 + 0; // 0x808D655C
    r10 = *(8 + r31); // lwz @ 0x808D6560
    r4 = r5 + 0x16; // 0x808D6564
    r9 = *(0xc + r31); // lwz @ 0x808D6568
    r6 = r30;
    r8 = *(0x10 + r31); // lwz @ 0x808D6570
    r0 = *(0x14 + r31); // lwz @ 0x808D6578
    r5 = r5 + 0x21; // 0x808D657C
    *(0xc + r1) = r11; // stw @ 0x808D6580
    *(0x10 + r1) = r10; // stw @ 0x808D6588
    *(0x14 + r1) = r9; // stw @ 0x808D658C
    *(0x18 + r1) = r8; // stw @ 0x808D6590
    *(0x1c + r1) = r0; // stw @ 0x808D6594
    FUN_8064E36C(r7); // bl 0x8064E36C
    /* li r0, 0 */ // 0x808D659C
    *(0x190 + r29) = r0; // stb @ 0x808D65A0
    /* li r4, -1 */ // 0x808D65A8
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    r0 = *(0x64 + r1); // lwz @ 0x808D65B0
    r31 = *(0x5c + r1); // lwz @ 0x808D65B4
    r30 = *(0x58 + r1); // lwz @ 0x808D65B8
    r29 = *(0x54 + r1); // lwz @ 0x808D65BC
    return;
}