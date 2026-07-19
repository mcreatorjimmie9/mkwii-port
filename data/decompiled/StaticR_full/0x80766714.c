/* Function at 0x80766714, size=296 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80766714(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8076671C
    *(0x14 + r1) = r0; // stw @ 0x80766720
    *(0xc + r1) = r31; // stw @ 0x80766724
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x8076672C
    r12 = *(0x68 + r12); // lwz @ 0x80766730
    /* mtctr r12 */ // 0x80766734
    /* bctrl  */ // 0x80766738
    r3 = *(0xbc + r31); // lwz @ 0x8076673C
    r0 = *(0xe0 + r31); // lha @ 0x80766740
    if (>=) goto 0x0x807667d8;
    r0 = *(0xf8 + r31); // lbz @ 0x8076674C
    if (!=) goto 0x0x807667ac;
    r0 = *(0xf9 + r31); // lbz @ 0x80766758
    if (!=) goto 0x0x807667ac;
    r3 = *(0xd4 + r31); // lwz @ 0x80766764
    r12 = *(0 + r3); // lwz @ 0x80766768
    r12 = *(0xc + r12); // lwz @ 0x8076676C
    /* mtctr r12 */ // 0x80766770
    /* bctrl  */ // 0x80766774
    r3 = *(0xd4 + r31); // lwz @ 0x80766778
    r4 = r31 + 0x30; // 0x8076677C
    r12 = *(0 + r3); // lwz @ 0x80766780
    r12 = *(0x74 + r12); // lwz @ 0x80766784
    /* mtctr r12 */ // 0x80766788
    /* bctrl  */ // 0x8076678C
    r3 = *(0xd4 + r31); // lwz @ 0x80766790
    /* lfs f1, 0x3c(r31) */ // 0x80766794
    r12 = *(0 + r3); // lwz @ 0x80766798
    r12 = *(0x6c + r12); // lwz @ 0x8076679C
    /* mtctr r12 */ // 0x807667A0
    /* bctrl  */ // 0x807667A4
    /* b 0x807667c0 */ // 0x807667A8
    r3 = *(0xd4 + r31); // lwz @ 0x807667AC
    r12 = *(0 + r3); // lwz @ 0x807667B0
    r12 = *(0x10 + r12); // lwz @ 0x807667B4
    /* mtctr r12 */ // 0x807667B8
    /* bctrl  */ // 0x807667BC
    r3 = *(0xd4 + r31); // lwz @ 0x807667C0
    r12 = *(0 + r3); // lwz @ 0x807667C4
    r12 = *(0x80 + r12); // lwz @ 0x807667C8
    /* mtctr r12 */ // 0x807667CC
    /* bctrl  */ // 0x807667D0
    /* b 0x807667f4 */ // 0x807667D4
    r3 = *(0xd4 + r31); // lwz @ 0x807667D8
    r12 = *(0 + r3); // lwz @ 0x807667DC
    r12 = *(0x10 + r12); // lwz @ 0x807667E0
    /* mtctr r12 */ // 0x807667E4
    /* bctrl  */ // 0x807667E8
    /* li r0, 0 */ // 0x807667EC
    *(0xb8 + r31) = r0; // stw @ 0x807667F0
    r0 = *(0xf9 + r31); // lbz @ 0x807667F4
    if (==) goto 0x0x80766814;
    r12 = *(0 + r31); // lwz @ 0x80766800
    r3 = r31;
    r12 = *(0x90 + r12); // lwz @ 0x80766808
    /* mtctr r12 */ // 0x8076680C
    /* bctrl  */ // 0x80766810
    /* lis r4, 0 */ // 0x80766814
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x8076681C
    /* li r4, 0x2d7 */ // 0x80766820
    FUN_808A0AA8(r4, r3, r4); // bl 0x808A0AA8
    r0 = *(0x14 + r1); // lwz @ 0x80766828
    r31 = *(0xc + r1); // lwz @ 0x8076682C
    return;
}