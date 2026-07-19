/* Function at 0x807D1818, size=28 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_807D1818(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    r4 = r3;
    *(0x14 + r1) = r0; // stw @ 0x807D1824
    r3 = *(4 + r3); // lwz @ 0x807D182C
    FUN_805E3430(r4); // bl 0x805E3430
}