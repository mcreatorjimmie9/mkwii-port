/* Function at 0x8067EDB8, size=28 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_8067EDB8(int r3, int r7)
{
    /* Stack frame: -16(r1) */
    r7 = r3;
    *(0x14 + r1) = r0; // stw @ 0x8067EDC4
    r3 = *(4 + r3); // lwz @ 0x8067EDCC
    FUN_805E3430(r7); // bl 0x805E3430
}