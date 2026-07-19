/* Function at 0x808D9DE4, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808D9DE4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x808D9DF0
    *(0xc + r1) = r31; // stw @ 0x808D9DF4
    r31 = r3;
    if (==) goto 0x0x808d9e0c;
    if (<=) goto 0x0x808d9e0c;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x808D9E10
    r0 = *(0x14 + r1); // lwz @ 0x808D9E14
    return;
}