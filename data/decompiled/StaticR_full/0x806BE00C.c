/* Function at 0x806BE00C, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806BE00C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r4, 4 */ // 0x806BE014
    r3 = r3 + 0x98; // 0x806BE018
    *(0x24 + r1) = r0; // stw @ 0x806BE01C
    *(0x1c + r1) = r31; // stw @ 0x806BE020
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x806BE028
    r31 = r3;
    if (==) goto 0x0x806be044;
    if (==) goto 0x0x806be098;
    /* b 0x806be0a8 */ // 0x806BE040
    r3 = *(0 + r3); // lwz @ 0x806BE044
    /* slwi r0, r0, 4 */ // 0x806BE048
    /* lwzx r3, r3, r0 */ // 0x806BE04C
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x806BE054
    /* lis r0, 0x4330 */ // 0x806BE058
    *(0xc + r1) = r4; // stw @ 0x806BE05C
    /* lis r3, 0 */ // 0x806BE060
    /* lfd f3, 0(r3) */ // 0x806BE064
    /* lis r5, 0 */ // 0x806BE068
    *(8 + r1) = r0; // stw @ 0x806BE06C
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x806BE074
}