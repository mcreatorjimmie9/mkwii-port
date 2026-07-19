/* Function at 0x807BC248, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807BC248(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x807BC254
    *(0xc + r1) = r31; // stw @ 0x807BC258
    r31 = r3;
    if (==) goto 0x0x807bc270;
    if (<=) goto 0x0x807bc270;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x807BC274
    r0 = *(0x14 + r1); // lwz @ 0x807BC278
    return;
}