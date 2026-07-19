/* Function at 0x805E3318, size=48 bytes */
/* Stack frame: 16 bytes */
/* Calls: 3 function(s) */

void FUN_805E3318(int r3)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x805E3320
    *(0x14 + r1) = r0; // stw @ 0x805E3324
    r3 = *(0 + r3); // lwz @ 0x805E3328
    FUN_806983A4(r3); // bl 0x806983A4
    FUN_806470D4(r3); // bl 0x806470D4
    FUN_807FD584(r3); // bl 0x807FD584
    r0 = *(0x14 + r1); // lwz @ 0x805E3338
    return;
}