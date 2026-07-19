/* Function at 0x805D029C, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805D029C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* slwi r31, r4, 2 */ // 0x805D02AC
    *(8 + r1) = r30; // stw @ 0x805D02B0
    r30 = r3;
    r5 = *(4 + r3); // lwz @ 0x805D02B8
    /* lwzx r3, r5, r31 */ // 0x805D02BC
    FUN_805BA42C(); // bl 0x805BA42C
    if (==) goto 0x0x805d02dc;
    r3 = *(4 + r30); // lwz @ 0x805D02CC
    /* lwzx r3, r3, r31 */ // 0x805D02D0
    r3 = *(8 + r3); // lhz @ 0x805D02D4
    /* b 0x805d02e0 */ // 0x805D02D8
    /* li r3, 0 */ // 0x805D02DC
    r0 = *(0x14 + r1); // lwz @ 0x805D02E0
    r31 = *(0xc + r1); // lwz @ 0x805D02E4
    r30 = *(8 + r1); // lwz @ 0x805D02E8
    return;
}