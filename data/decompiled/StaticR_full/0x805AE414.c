/* Function at 0x805AE414, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_805AE414(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x805AE41C
    *(0x14 + r1) = r0; // stw @ 0x805AE420
    *(0xc + r1) = r31; // stw @ 0x805AE424
    r31 = r3;
    r0 = *(0x4c + r3); // lbz @ 0x805AE42C
    if (==) goto 0x0x805ae444;
    FUN_805AE04C(); // bl 0x805AE04C
    FUN_805E3430(); // bl 0x805E3430
    /* li r4, 1 */ // 0x805AE440
    r0 = *(0x58 + r31); // lwz @ 0x805AE444
    if (==) goto 0x0x805ae474;
    r0 = *(0x48 + r31); // lwz @ 0x805AE450
    if (==) goto 0x0x805ae474;
    if (!=) goto 0x0x805ae46c;
    r3 = r31;
    FUN_805AE04C(r3); // bl 0x805AE04C
    r3 = r31;
    FUN_805AE1A0(r3, r3); // bl 0x805AE1A0
    r0 = *(0x14 + r1); // lwz @ 0x805AE474
    r31 = *(0xc + r1); // lwz @ 0x805AE478
}