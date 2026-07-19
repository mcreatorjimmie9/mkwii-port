/* Function at 0x807D2318, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_807D2318(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807D2320
    *(0x14 + r1) = r0; // stw @ 0x807D2324
    *(0xc + r1) = r31; // stw @ 0x807D2328
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x807D2330
    /* li r4, 2 */ // 0x807D2334
    FUN_805C5788(r4); // bl 0x805C5788
    if (==) goto 0x0x807d2378;
    FUN_807C01D8(r4); // bl 0x807C01D8
    if (==) goto 0x0x807d2360;
    r3 = r31;
    r4 = r31 + 0x64; // 0x807D2354
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807d2378 */ // 0x807D235C
    FUN_807C01F0(r3, r4); // bl 0x807C01F0
    if (==) goto 0x0x807d2378;
    r3 = r31;
    r4 = r31 + 0x90; // 0x807D2370
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    r0 = *(0x14 + r1); // lwz @ 0x807D2378
    r31 = *(0xc + r1); // lwz @ 0x807D237C
    return;
}