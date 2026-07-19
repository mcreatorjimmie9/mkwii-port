/* Function at 0x805ABF60, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805ABF60(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x805ABF6C
    *(0xc + r1) = r31; // stw @ 0x805ABF70
    r31 = r3;
    if (==) goto 0x0x805abf88;
    if (<=) goto 0x0x805abf88;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x805ABF8C
    r0 = *(0x14 + r1); // lwz @ 0x805ABF90
    return;
}