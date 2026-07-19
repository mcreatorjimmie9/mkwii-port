/* Function at 0x805EB784, size=28 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_805EB784(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x805EB78C
    r0 = r3;
    r3 = r4;
    r4 = r0;
    FUN_805E3430(r3, r4); // bl 0x805E3430
}