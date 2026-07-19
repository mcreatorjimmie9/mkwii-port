/* Function at 0x806D3B40, size=28 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_806D3B40(int r3, int r6)
{
    /* Stack frame: -16(r1) */
    r6 = r3;
    *(0x14 + r1) = r0; // stw @ 0x806D3B4C
    r3 = *(4 + r3); // lwz @ 0x806D3B54
    FUN_805E3430(r6); // bl 0x805E3430
}