/* Function at 0x805F2164, size=28 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_805F2164(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* li r5, 0x300 */ // 0x805F216C
    *(0x14 + r1) = r0; // stw @ 0x805F2170
    r3 = *(0x18 + r3); // lwz @ 0x805F2178
    FUN_805E3430(r5, r4); // bl 0x805E3430
}