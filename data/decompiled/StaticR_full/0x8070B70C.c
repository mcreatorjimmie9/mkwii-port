/* Function at 0x8070B70C, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8070B70C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x8070B718
    *(0xc + r1) = r31; // stw @ 0x8070B71C
    r31 = r3;
    if (==) goto 0x0x8070b734;
    if (<=) goto 0x0x8070b734;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x8070B738
    r0 = *(0x14 + r1); // lwz @ 0x8070B73C
    return;
}