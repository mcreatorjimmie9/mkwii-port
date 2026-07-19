/* Function at 0x807946C4, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_807946C4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807946D4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807946DC
    r30 = r3;
    if (==) goto 0x0x80794734;
    if (==) goto 0x0x80794724;
    /* li r4, 0 */ // 0x807946EC
    r3 = r3 + 0x88; // 0x807946F0
    FUN_8078FDC8(r4, r3); // bl 0x8078FDC8
    if (==) goto 0x0x80794724;
    /* lis r4, 0 */ // 0x80794700
    r3 = r30 + 0x80; // 0x80794704
    r4 = r4 + 0; // 0x80794708
    /* li r5, 4 */ // 0x8079470C
    /* li r6, 1 */ // 0x80794710
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x8079471C
    FUN_805E3430(r5, r6, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x80794734;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80794738
    r30 = *(8 + r1); // lwz @ 0x8079473C
    r0 = *(0x14 + r1); // lwz @ 0x80794740
}