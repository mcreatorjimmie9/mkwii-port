/* Function at 0x805AACC0, size=28 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_805AACC0(int r3)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x805AACC8
    *(0x14 + r1) = r0; // stw @ 0x805AACCC
    r3 = *(0 + r3); // lwz @ 0x805AACD0
    r3 = *(0x54 + r3); // lwz @ 0x805AACD4
    FUN_805E3430(r3); // bl 0x805E3430
}