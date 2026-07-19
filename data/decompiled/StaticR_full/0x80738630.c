/* Function at 0x80738630, size=188 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80738630(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80738644
    r30 = r3;
    r3 = *(0x200 + r3); // lwz @ 0x8073864C
    r12 = *(0 + r3); // lwz @ 0x80738650
    r12 = *(0xc + r12); // lwz @ 0x80738654
    /* mtctr r12 */ // 0x80738658
    /* bctrl  */ // 0x8073865C
    r3 = *(0x200 + r30); // lwz @ 0x80738660
    r4 = r30 + 0xc4; // 0x80738664
    r12 = *(0 + r3); // lwz @ 0x80738668
    r12 = *(0x78 + r12); // lwz @ 0x8073866C
    /* mtctr r12 */ // 0x80738670
    /* bctrl  */ // 0x80738674
    r3 = *(0x200 + r30); // lwz @ 0x80738678
    r7 = r31;
    /* li r4, 0xff */ // 0x80738680
    /* li r5, 0xff */ // 0x80738684
    r12 = *(0 + r3); // lwz @ 0x80738688
    /* li r6, 0xff */ // 0x8073868C
    r12 = *(0x50 + r12); // lwz @ 0x80738690
    /* mtctr r12 */ // 0x80738694
    /* bctrl  */ // 0x80738698
    r0 = *(0xb0 + r30); // lbz @ 0x8073869C
    if (==) goto 0x0x807386c0;
    r3 = *(0x200 + r30); // lwz @ 0x807386A8
    r4 = r30 + 0x72c; // 0x807386AC
    r12 = *(0 + r3); // lwz @ 0x807386B0
    r12 = *(0x70 + r12); // lwz @ 0x807386B4
    /* mtctr r12 */ // 0x807386B8
    /* bctrl  */ // 0x807386BC
    r3 = *(0x200 + r30); // lwz @ 0x807386C0
    r12 = *(0 + r3); // lwz @ 0x807386C4
    r12 = *(0x80 + r12); // lwz @ 0x807386C8
    /* mtctr r12 */ // 0x807386CC
    /* bctrl  */ // 0x807386D0
    r0 = *(0x14 + r1); // lwz @ 0x807386D4
    r31 = *(0xc + r1); // lwz @ 0x807386D8
    r30 = *(8 + r1); // lwz @ 0x807386DC
    return;
}