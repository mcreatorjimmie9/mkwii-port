/* Function at 0x806EA764, size=64 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_806EA764(int r3)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x806EA76C
    *(0x14 + r1) = r0; // stw @ 0x806EA770
    r3 = *(0 + r3); // lwz @ 0x806EA774
    if (==) goto 0x0x806ea794;
    if (==) goto 0x0x806ea788;
    FUN_805E3430(); // bl 0x805E3430
    /* lis r3, 0 */ // 0x806EA788
    /* li r0, 0 */ // 0x806EA78C
    *(0 + r3) = r0; // stw @ 0x806EA790
    r0 = *(0x14 + r1); // lwz @ 0x806EA794
    return;
}