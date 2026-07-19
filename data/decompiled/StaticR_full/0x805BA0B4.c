/* Function at 0x805BA0B4, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805BA0B4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805BA0C4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805BA0CC
    r30 = r3;
    if (==) goto 0x0x805ba0f0;
    /* li r4, 0 */ // 0x805BA0D8
    FUN_805BA308(r4); // bl 0x805BA308
    if (<=) goto 0x0x805ba0f0;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805BA0F4
    r30 = *(8 + r1); // lwz @ 0x805BA0F8
    r0 = *(0x14 + r1); // lwz @ 0x805BA0FC
    return;
}