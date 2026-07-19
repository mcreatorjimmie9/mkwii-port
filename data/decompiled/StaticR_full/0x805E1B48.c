/* Function at 0x805E1B48, size=72 bytes */
/* Stack frame: 16 bytes */
/* Calls: 5 function(s) */

void FUN_805E1B48(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x805E1B50
    FUN_806470D4(); // bl 0x806470D4
    /* lis r3, 0 */ // 0x805E1B58
    r3 = *(0 + r3); // lwz @ 0x805E1B5C
    FUN_806983A4(r3); // bl 0x806983A4
    FUN_807FD584(r3); // bl 0x807FD584
    FUN_807DC22C(r3); // bl 0x807DC22C
    /* lis r3, 0 */ // 0x805E1B6C
    r0 = *(0 + r3); // lwz @ 0x805E1B70
    if (==) goto 0x0x805e1b80;
    FUN_806F0CE4(r3); // bl 0x806F0CE4
    r0 = *(0x14 + r1); // lwz @ 0x805E1B80
    return;
}