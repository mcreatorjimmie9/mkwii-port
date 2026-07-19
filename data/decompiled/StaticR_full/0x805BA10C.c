/* Function at 0x805BA10C, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805BA10C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805BA11C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805BA124
    r30 = r3;
    if (==) goto 0x0x805ba148;
    /* li r4, 0 */ // 0x805BA130
    FUN_805BA308(r4); // bl 0x805BA308
    if (<=) goto 0x0x805ba148;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805BA14C
    r30 = *(8 + r1); // lwz @ 0x805BA150
    r0 = *(0x14 + r1); // lwz @ 0x805BA154
    return;
}