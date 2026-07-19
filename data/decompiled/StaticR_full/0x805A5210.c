/* Function at 0x805A5210, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805A5210(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x805A521C
    *(0xc + r1) = r31; // stw @ 0x805A5220
    r31 = r3;
    if (==) goto 0x0x805a5238;
    if (<=) goto 0x0x805a5238;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x805A523C
    r0 = *(0x14 + r1); // lwz @ 0x805A5240
    return;
}