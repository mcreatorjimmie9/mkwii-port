/* Function at 0x80898BD8, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80898BD8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x80898BE4
    *(0xc + r1) = r31; // stw @ 0x80898BE8
    r31 = r3;
    if (==) goto 0x0x80898c00;
    if (<=) goto 0x0x80898c00;
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x80898C04
    r0 = *(0x14 + r1); // lwz @ 0x80898C08
    return;
}