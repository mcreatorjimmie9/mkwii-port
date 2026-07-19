/* Function at 0x808C776C, size=28 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_808C776C(int r3, int r7)
{
    /* Stack frame: -16(r1) */
    r7 = r3;
    *(0x14 + r1) = r0; // stw @ 0x808C7778
    r3 = *(4 + r3); // lwz @ 0x808C7780
    FUN_805E3430(r7); // bl 0x805E3430
}