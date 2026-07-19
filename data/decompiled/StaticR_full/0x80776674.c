/* Function at 0x80776674, size=224 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80776674(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8077667C
    *(0x14 + r1) = r0; // stw @ 0x80776680
    *(0xc + r1) = r31; // stw @ 0x80776684
    r31 = r3;
    r4 = *(0 + r4); // lwz @ 0x8077668C
    r0 = *(0x28 + r4); // lwz @ 0x80776690
    if (>=) goto 0x0x807766ec;
    r0 = *(0x25 + r4); // lbz @ 0x8077669C
    if (==) goto 0x0x807766bc;
    r3 = *(0xb0 + r3); // lwz @ 0x807766A8
    r12 = *(0 + r3); // lwz @ 0x807766AC
    r12 = *(0xc + r12); // lwz @ 0x807766B0
    /* mtctr r12 */ // 0x807766B4
    /* bctrl  */ // 0x807766B8
    r3 = *(0xb0 + r31); // lwz @ 0x807766BC
    r4 = r31 + 0x30; // 0x807766C0
    r12 = *(0 + r3); // lwz @ 0x807766C4
    r12 = *(0x74 + r12); // lwz @ 0x807766C8
    /* mtctr r12 */ // 0x807766CC
    /* bctrl  */ // 0x807766D0
    r3 = *(0xb0 + r31); // lwz @ 0x807766D4
    r12 = *(0 + r3); // lwz @ 0x807766D8
    r12 = *(0x80 + r12); // lwz @ 0x807766DC
    /* mtctr r12 */ // 0x807766E0
    /* bctrl  */ // 0x807766E4
    /* b 0x80776740 */ // 0x807766E8
    r3 = *(0xb0 + r3); // lwz @ 0x807766EC
    r12 = *(0 + r3); // lwz @ 0x807766F0
    r12 = *(0x10 + r12); // lwz @ 0x807766F4
    /* mtctr r12 */ // 0x807766F8
    /* bctrl  */ // 0x807766FC
    r3 = *(0xb4 + r31); // lwz @ 0x80776700
    r12 = *(0 + r3); // lwz @ 0x80776704
    r12 = *(0xc + r12); // lwz @ 0x80776708
    /* mtctr r12 */ // 0x8077670C
    /* bctrl  */ // 0x80776710
    r3 = *(0xb4 + r31); // lwz @ 0x80776714
    r4 = r31 + 0x30; // 0x80776718
    r12 = *(0 + r3); // lwz @ 0x8077671C
    r12 = *(0x74 + r12); // lwz @ 0x80776720
    /* mtctr r12 */ // 0x80776724
    /* bctrl  */ // 0x80776728
    r3 = *(0xb4 + r31); // lwz @ 0x8077672C
    r12 = *(0 + r3); // lwz @ 0x80776730
    r12 = *(0x80 + r12); // lwz @ 0x80776734
    /* mtctr r12 */ // 0x80776738
    /* bctrl  */ // 0x8077673C
    r0 = *(0x14 + r1); // lwz @ 0x80776740
    r31 = *(0xc + r1); // lwz @ 0x80776744
    return;
}