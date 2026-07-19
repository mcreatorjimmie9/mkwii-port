/* Function at 0x8077A540, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8077A540(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8077A550
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8077A558
    r30 = r3;
    if (==) goto 0x0x8077a590;
    /* addic. r0, r3, 0xb0 */ // 0x8077A564
    if (==) goto 0x0x8077a580;
    /* lis r4, 0 */ // 0x8077A56C
    r4 = r4 + 0; // 0x8077A570
    *(0xb0 + r3) = r4; // stw @ 0x8077A574
    r3 = *(0xc4 + r3); // lwz @ 0x8077A578
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x8077a590;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8077A594
    r30 = *(8 + r1); // lwz @ 0x8077A598
    r0 = *(0x14 + r1); // lwz @ 0x8077A59C
    return;
}