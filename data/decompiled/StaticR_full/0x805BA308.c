/* Function at 0x805BA308, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_805BA308(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805BA318
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805BA320
    r30 = r3;
    if (==) goto 0x0x805ba370;
    /* lis r5, 0 */ // 0x805BA32C
    /* lis r4, 0 */ // 0x805BA330
    r5 = r5 + 0; // 0x805BA334
    *(0 + r3) = r5; // stw @ 0x805BA338
    r3 = *(4 + r3); // lwz @ 0x805BA33C
    r4 = r4 + 0; // 0x805BA340
    FUN_805E3430(r4, r5, r4); // bl 0x805E3430
    r3 = *(0x10 + r30); // lwz @ 0x805BA348
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = *(0x18 + r30); // lwz @ 0x805BA350
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = *(0xc + r30); // lwz @ 0x805BA358
    FUN_805E3430(); // bl 0x805E3430
}