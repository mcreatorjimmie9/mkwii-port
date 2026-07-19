/* Function at 0x8091BA70, size=52 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_8091BA70(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x8091BA78
    *(0x14 + r1) = r0; // stw @ 0x8091BA7C
    r0 = *(0 + r3); // lwz @ 0x8091BA80
    if (!=) goto 0x0x8091baa8;
    /* li r3, 0x1c20 */ // 0x8091BA8C
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x8091baa0;
    FUN_8091BB24(r3); // bl 0x8091BB24
    /* lis r4, 0 */ // 0x8091BAA0
}