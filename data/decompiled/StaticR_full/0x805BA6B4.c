/* Function at 0x805BA6B4, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805BA6B4(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x805BA6C4
    *(8 + r1) = r30; // stw @ 0x805BA6C8
    r30 = r3;
    /* b 0x805ba6ec */ // 0x805BA6D0
    /* clrlwi r0, r31, 0x10 */ // 0x805BA6D4
    r3 = *(4 + r30); // lwz @ 0x805BA6D8
    /* mulli r0, r0, 0x24 */ // 0x805BA6DC
    r3 = r3 + r0; // 0x805BA6E0
    FUN_805A8EF8(); // bl 0x805A8EF8
    r31 = r31 + 1; // 0x805BA6E8
    r0 = *(8 + r30); // lhz @ 0x805BA6EC
    /* clrlwi r3, r31, 0x10 */ // 0x805BA6F0
    if (<) goto 0x0x805ba6d4;
    r0 = *(0x14 + r1); // lwz @ 0x805BA6FC
    r31 = *(0xc + r1); // lwz @ 0x805BA700
    r30 = *(8 + r1); // lwz @ 0x805BA704
    return;
}