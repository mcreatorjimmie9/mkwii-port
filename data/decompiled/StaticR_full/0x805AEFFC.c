/* Function at 0x805AEFFC, size=36 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_805AEFFC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    r4 = r3;
    /* lis r5, 0 */ // 0x805AF008
    *(0x14 + r1) = r0; // stw @ 0x805AF00C
    r4 = r4 + 0x8e0; // 0x805AF010
    r5 = r5 + 0; // 0x805AF014
    r3 = *(0x8d4 + r3); // lwz @ 0x805AF018
    FUN_805E3430(r5, r4, r5); // bl 0x805E3430
}