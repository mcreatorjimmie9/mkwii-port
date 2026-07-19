/* Function at 0x808433FC, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808433FC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x80843408
    *(0xc + r1) = r31; // stw @ 0x8084340C
    r31 = r3;
    if (==) goto 0x0x80843424;
    if (<=) goto 0x0x80843424;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x80843428
    r0 = *(0x14 + r1); // lwz @ 0x8084342C
    return;
}