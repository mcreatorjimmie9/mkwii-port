/* Function at 0x8078D9FC, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8078D9FC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x8078DA08
    *(0xc + r1) = r31; // stw @ 0x8078DA0C
    r31 = r3;
    if (==) goto 0x0x8078da24;
    if (<=) goto 0x0x8078da24;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x8078DA28
    r0 = *(0x14 + r1); // lwz @ 0x8078DA2C
    return;
}