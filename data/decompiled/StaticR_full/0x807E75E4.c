/* Function at 0x807E75E4, size=176 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807E75E4(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807E75F4
    r31 = r31 + 0; // 0x807E75F8
    *(0x48 + r1) = r30; // stw @ 0x807E75FC
    /* lis r30, 0 */ // 0x807E7600
    r30 = r30 + 0; // 0x807E7604
    *(0x44 + r1) = r29; // stw @ 0x807E7608
    r29 = r3;
    r0 = *(0xc0 + r3); // lwz @ 0x807E7610
    /* addic. r0, r0, -1 */ // 0x807E7614
    *(0xc0 + r3) = r0; // stw @ 0x807E7618
    if (!=) goto 0x0x807e7630;
    r12 = *(0 + r3); // lwz @ 0x807E7620
    r12 = *(0x10c + r12); // lwz @ 0x807E7624
    /* mtctr r12 */ // 0x807E7628
    /* bctrl  */ // 0x807E762C
    r3 = *(0xc0 + r29); // lwz @ 0x807E7630
    r0 = *(0x10c + r29); // lwz @ 0x807E7634
    if (>) goto 0x0x807e7724;
    r4 = *(0xc8 + r29); // lwz @ 0x807E7640
    /* lis r0, 0x4330 */ // 0x807E7644
    r3 = *(0x10 + r30); // lwz @ 0x807E7648
    *(0x20 + r1) = r0; // stw @ 0x807E764C
    r3 = r4 + r3; // 0x807E7650
    /* lfd f2, 0x60(r31) */ // 0x807E7654
    /* xoris r0, r3, 0x8000 */ // 0x807E7658
    *(0x24 + r1) = r0; // stw @ 0x807E765C
    /* lfs f0, 0x40(r31) */ // 0x807E7660
    /* lfd f1, 0x20(r1) */ // 0x807E7664
    *(0xc8 + r29) = r3; // stw @ 0x807E7668
    /* fsubs f1, f1, f2 */ // 0x807E766C
    /* fmuls f1, f1, f0 */ // 0x807E7670
    FUN_805E3430(); // bl 0x805E3430
    /* lfs f0, 0x2c(r31) */ // 0x807E7678
    r3 = r29;
    r0 = *(0x2c + r29); // lhz @ 0x807E7680
    /* li r4, 0x242 */ // 0x807E7684
    /* fmuls f2, f0, f1 */ // 0x807E7688
    /* lfs f0, 0xd8(r29) */ // 0x807E768C
    r0 = r0 | 1; // 0x807E7690
}