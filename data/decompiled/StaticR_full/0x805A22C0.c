/* Function at 0x805A22C0, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_805A22C0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x805A22C8
    *(0x14 + r1) = r0; // stw @ 0x805A22CC
    r0 = *(0 + r3); // lwz @ 0x805A22D0
    if (!=) goto 0x0x805a2330;
    /* li r3, 0x54 */ // 0x805A22DC
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x805a2328;
    /* lis r4, 0 */ // 0x805A22EC
    /* li r0, 0 */ // 0x805A22F0
    r4 = r4 + 0; // 0x805A22F4
    *(0 + r3) = r4; // stw @ 0x805A22F8
}