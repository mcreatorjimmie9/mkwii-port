/* Function at 0x805BA164, size=64 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_805BA164(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* lis r6, 0 */ // 0x805BA16C
    *(0x24 + r1) = r0; // stw @ 0x805BA170
    /* mulli r5, r4, 0x24 */ // 0x805BA174
    r6 = r6 + 0; // 0x805BA178
    /* stmw r27, 0xc(r1) */ // 0x805BA17C
    /* li r31, 0 */ // 0x805BA180
    r28 = r4;
    r27 = r3;
    *(4 + r3) = r31; // stw @ 0x805BA18C
    *(0 + r3) = r6; // stw @ 0x805BA190
    *(8 + r3) = r4; // sth @ 0x805BA194
    *(0x10 + r3) = r31; // stw @ 0x805BA198
    r3 = r5 + 0x10; // 0x805BA19C
    FUN_805E3430(r3); // bl 0x805E3430
}