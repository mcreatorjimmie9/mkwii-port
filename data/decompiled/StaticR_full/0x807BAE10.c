/* Function at 0x807BAE10, size=28 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_807BAE10(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    r4 = r3;
    *(0x14 + r1) = r0; // stw @ 0x807BAE1C
    r3 = *(4 + r3); // lwz @ 0x807BAE24
    FUN_805E3430(r4); // bl 0x805E3430
}