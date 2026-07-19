/* Function at 0x808C06D8, size=28 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_808C06D8(int r3, int r7)
{
    /* Stack frame: -16(r1) */
    r7 = r3;
    *(0x14 + r1) = r0; // stw @ 0x808C06E4
    r3 = *(4 + r3); // lwz @ 0x808C06EC
    FUN_805E3430(r7); // bl 0x805E3430
}