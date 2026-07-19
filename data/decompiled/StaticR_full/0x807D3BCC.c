/* Function at 0x807D3BCC, size=28 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_807D3BCC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    r4 = r3;
    *(0x14 + r1) = r0; // stw @ 0x807D3BD8
    r3 = *(4 + r3); // lwz @ 0x807D3BE0
    FUN_805E3430(r4); // bl 0x805E3430
}