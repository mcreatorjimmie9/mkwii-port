/* Function at 0x807F5348, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807F5348(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x807F5354
    *(0xc + r1) = r31; // stw @ 0x807F5358
    r31 = r3;
    if (==) goto 0x0x807f5370;
    if (<=) goto 0x0x807f5370;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x807F5374
    r0 = *(0x14 + r1); // lwz @ 0x807F5378
    return;
}