/* Function at 0x805BA86C, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805BA86C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x805BA87C
    *(8 + r1) = r30; // stw @ 0x805BA880
    r30 = r3;
    /* b 0x805ba8a4 */ // 0x805BA888
    /* clrlwi r0, r31, 0x10 */ // 0x805BA88C
    r3 = *(4 + r30); // lwz @ 0x805BA890
    /* mulli r0, r0, 0x24 */ // 0x805BA894
    r3 = r3 + r0; // 0x805BA898
    FUN_805A8E6C(); // bl 0x805A8E6C
    r31 = r31 + 1; // 0x805BA8A0
    r0 = *(8 + r30); // lhz @ 0x805BA8A4
    /* clrlwi r3, r31, 0x10 */ // 0x805BA8A8
    if (<) goto 0x0x805ba88c;
    r0 = *(0x14 + r1); // lwz @ 0x805BA8B4
    r31 = *(0xc + r1); // lwz @ 0x805BA8B8
    r30 = *(8 + r1); // lwz @ 0x805BA8BC
    return;
}