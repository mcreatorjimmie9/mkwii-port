/* Function at 0x808B69DC, size=28 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_808B69DC(int r3, int r7)
{
    /* Stack frame: -16(r1) */
    r7 = r3;
    *(0x14 + r1) = r0; // stw @ 0x808B69E8
    r3 = *(4 + r3); // lwz @ 0x808B69F0
    FUN_805E3430(r7); // bl 0x805E3430
}