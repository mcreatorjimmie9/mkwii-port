/* Function at 0x80618370, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80618370(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x8061837C
    *(0xc + r1) = r31; // stw @ 0x80618380
    r31 = r3;
    if (==) goto 0x0x80618398;
    if (<=) goto 0x0x80618398;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x8061839C
    r0 = *(0x14 + r1); // lwz @ 0x806183A0
    return;
}