/* Function at 0x806DADE0, size=28 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_806DADE0(int r3, int r5)
{
    /* Stack frame: -16(r1) */
    r5 = r3;
    *(0x14 + r1) = r0; // stw @ 0x806DADEC
    r3 = *(4 + r3); // lwz @ 0x806DADF4
    FUN_805E3430(r5); // bl 0x805E3430
}