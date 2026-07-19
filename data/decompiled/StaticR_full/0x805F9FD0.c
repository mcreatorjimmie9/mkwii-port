/* Function at 0x805F9FD0, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805F9FD0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x805F9FDC
    *(0xc + r1) = r31; // stw @ 0x805F9FE0
    r31 = r3;
    if (==) goto 0x0x805f9ff8;
    if (<=) goto 0x0x805f9ff8;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x805F9FFC
    r0 = *(0x14 + r1); // lwz @ 0x805FA000
    return;
}