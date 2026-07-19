/* Function at 0x807C90B8, size=148 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807C90B8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807C90C4
    r31 = r3;
    r5 = *(0xbc + r3); // lwz @ 0x807C90CC
    r4 = *(0 + r5); // lwz @ 0x807C90D0
    r4 = *(0 + r4); // lwz @ 0x807C90D4
    r4 = *(4 + r4); // lwz @ 0x807C90D8
    r0 = *(8 + r4); // lwz @ 0x807C90DC
    /* clrlwi. r0, r0, 0x1f */ // 0x807C90E0
    if (==) goto 0x0x807c90f0;
    /* li r3, 0 */ // 0x807C90E8
    /* b 0x807c9138 */ // 0x807C90EC
    r4 = *(0xec + r3); // lwz @ 0x807C90F0
    r0 = r4 + 1; // 0x807C90F4
    *(0xec + r3) = r0; // stw @ 0x807C90F8
    r3 = *(8 + r5); // lwz @ 0x807C90FC
    FUN_807C24E8(); // bl 0x807C24E8
    if (==) goto 0x0x807c9114;
    /* li r0, 0 */ // 0x807C910C
    *(0xec + r31) = r0; // stw @ 0x807C9110
    /* lis r3, 0 */ // 0x807C9114
    r0 = *(0xec + r31); // lwz @ 0x807C9118
    r3 = *(0 + r3); // lha @ 0x807C911C
    if (<=) goto 0x0x807c9134;
    *(0xec + r31) = r3; // stw @ 0x807C9128
    /* li r3, 1 */ // 0x807C912C
    /* b 0x807c9138 */ // 0x807C9130
    /* li r3, 0 */ // 0x807C9134
    r0 = *(0x14 + r1); // lwz @ 0x807C9138
    r31 = *(0xc + r1); // lwz @ 0x807C913C
    return;
}