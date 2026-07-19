/* Function at 0x806AABBC, size=28 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_806AABBC(int r3, int r6)
{
    /* Stack frame: -16(r1) */
    r6 = r3;
    *(0x14 + r1) = r0; // stw @ 0x806AABC8
    r3 = *(4 + r3); // lwz @ 0x806AABD0
    FUN_805E3430(r6); // bl 0x805E3430
}