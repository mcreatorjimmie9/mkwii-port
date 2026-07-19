/* Function at 0x805AA0AC, size=28 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_805AA0AC(int r3)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x805AA0B4
    *(0x14 + r1) = r0; // stw @ 0x805AA0B8
    r3 = *(0 + r3); // lwz @ 0x805AA0BC
    r3 = *(0x54 + r3); // lwz @ 0x805AA0C0
    FUN_805E3430(r3); // bl 0x805E3430
}