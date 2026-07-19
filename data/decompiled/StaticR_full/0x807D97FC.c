/* Function at 0x807D97FC, size=28 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_807D97FC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    r4 = r3;
    *(0x14 + r1) = r0; // stw @ 0x807D9808
    r3 = *(4 + r3); // lwz @ 0x807D9810
    FUN_805E3430(r4); // bl 0x805E3430
}