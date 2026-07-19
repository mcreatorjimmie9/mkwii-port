/* Function at 0x805F2240, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805F2240(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x805F2250
    r3 = *(0x30 + r3); // lwz @ 0x805F2254
    r12 = *(0xb4 + r3); // lwz @ 0x805F2258
    r12 = *(0x14 + r12); // lwz @ 0x805F225C
    /* mtctr r12 */ // 0x805F2260
    /* bctrl  */ // 0x805F2264
    /* lis r31, 0 */ // 0x805F2268
    r3 = *(0 + r31); // lwz @ 0x805F226C
    r12 = *(0 + r3); // lwz @ 0x805F2270
    r12 = *(8 + r12); // lwz @ 0x805F2274
    /* mtctr r12 */ // 0x805F2278
    /* bctrl  */ // 0x805F227C
    r30 = *(0 + r3); // lwz @ 0x805F2280
    r3 = *(0 + r31); // lwz @ 0x805F2284
    r12 = *(0 + r3); // lwz @ 0x805F2288
    r12 = *(8 + r12); // lwz @ 0x805F228C
    /* mtctr r12 */ // 0x805F2290
    /* bctrl  */ // 0x805F2294
    r4 = *(0 + r3); // lwz @ 0x805F2298
    r6 = r30 + 0x32; // 0x805F229C
    /* li r3, 0 */ // 0x805F22A0
    /* li r5, 1 */ // 0x805F22A4
    r4 = r4 + 0x1a; // 0x805F22A8
    FUN_805E3430(r6, r3, r5, r4); // bl 0x805E3430
}