/* Function at 0x807F5610, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807F5610(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807F561C
    r31 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x807F5624
    r12 = *(0 + r3); // lwz @ 0x807F5628
    r12 = *(0x14 + r12); // lwz @ 0x807F562C
    /* mtctr r12 */ // 0x807F5630
    /* bctrl  */ // 0x807F5634
    r12 = *(0 + r31); // lwz @ 0x807F5638
    r3 = r31;
    r12 = *(0x100 + r12); // lwz @ 0x807F5640
    /* mtctr r12 */ // 0x807F5644
    /* bctrl  */ // 0x807F5648
    r12 = *(0 + r31); // lwz @ 0x807F564C
    r3 = r31;
    r12 = *(0xf8 + r12); // lwz @ 0x807F5654
    /* mtctr r12 */ // 0x807F5658
    /* bctrl  */ // 0x807F565C
    r0 = *(0xc0 + r31); // lwz @ 0x807F5660
    /* addic. r0, r0, -1 */ // 0x807F5664
    *(0xc0 + r31) = r0; // stw @ 0x807F5668
    if (!=) goto 0x0x807f5684;
    r12 = *(0 + r31); // lwz @ 0x807F5670
    r3 = r31;
    r12 = *(0x104 + r12); // lwz @ 0x807F5678
    /* mtctr r12 */ // 0x807F567C
    /* bctrl  */ // 0x807F5680
    r0 = *(0x14 + r1); // lwz @ 0x807F5684
    r31 = *(0xc + r1); // lwz @ 0x807F5688
    return;
}