/* Function at 0x806299F4, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806299F4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x80629A00
    *(0xc + r1) = r31; // stw @ 0x80629A04
    r31 = r3;
    if (==) goto 0x0x80629a1c;
    if (<=) goto 0x0x80629a1c;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x80629A20
    r0 = *(0x14 + r1); // lwz @ 0x80629A24
    return;
}