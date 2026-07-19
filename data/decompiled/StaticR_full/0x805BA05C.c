/* Function at 0x805BA05C, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805BA05C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805BA06C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805BA074
    r30 = r3;
    if (==) goto 0x0x805ba098;
    /* li r4, 0 */ // 0x805BA080
    FUN_805BA308(r4); // bl 0x805BA308
    if (<=) goto 0x0x805ba098;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805BA09C
    r30 = *(8 + r1); // lwz @ 0x805BA0A0
    r0 = *(0x14 + r1); // lwz @ 0x805BA0A4
    return;
}