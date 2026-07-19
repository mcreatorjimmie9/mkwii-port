/* Function at 0x805E3348, size=84 bytes */
/* Stack frame: 16 bytes */
/* Calls: 4 function(s) */

void FUN_805E3348(int r3)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x805E3350
    *(0x14 + r1) = r0; // stw @ 0x805E3354
    r3 = *(0 + r3); // lwz @ 0x805E3358
    FUN_806F5BA0(r3); // bl 0x806F5BA0
    /* lis r3, 0 */ // 0x805E3360
    r3 = *(0 + r3); // lwz @ 0x805E3364
    FUN_80698A44(r3); // bl 0x80698A44
    /* lis r3, 0 */ // 0x805E336C
    r3 = *(0 + r3); // lwz @ 0x805E3370
    if (==) goto 0x0x805e3380;
    FUN_806EC460(r3); // bl 0x806EC460
    /* lis r3, 0 */ // 0x805E3380
    r3 = *(0 + r3); // lwz @ 0x805E3384
    FUN_80647530(r3); // bl 0x80647530
    r0 = *(0x14 + r1); // lwz @ 0x805E338C
    return;
}