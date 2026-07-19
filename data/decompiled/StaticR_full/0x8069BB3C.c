/* Function at 0x8069BB3C, size=28 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_8069BB3C(int r3, int r6)
{
    /* Stack frame: -16(r1) */
    r6 = r3;
    *(0x14 + r1) = r0; // stw @ 0x8069BB48
    r3 = *(4 + r3); // lwz @ 0x8069BB50
    FUN_805E3430(r6); // bl 0x805E3430
}