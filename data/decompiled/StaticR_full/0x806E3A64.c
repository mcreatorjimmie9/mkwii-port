/* Function at 0x806E3A64, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806E3A64(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x806E3A70
    *(0xc + r1) = r31; // stw @ 0x806E3A74
    r31 = r3;
    if (==) goto 0x0x806e3a8c;
    if (<=) goto 0x0x806e3a8c;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x806E3A90
    r0 = *(0x14 + r1); // lwz @ 0x806E3A94
    return;
}