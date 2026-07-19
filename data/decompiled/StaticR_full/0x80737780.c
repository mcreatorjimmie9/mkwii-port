/* Function at 0x80737780, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80737780(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80737790
    r30 = r3;
    r31 = *(0x28c + r3); // lwz @ 0x80737798
    if (==) goto 0x0x80737808;
    r12 = *(0 + r31); // lwz @ 0x807377A4
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x807377AC
    /* mtctr r12 */ // 0x807377B0
    /* bctrl  */ // 0x807377B4
    r12 = *(0 + r31); // lwz @ 0x807377B8
    r3 = r31;
    r4 = r30 + 0x6d0; // 0x807377C0
    r12 = *(0x74 + r12); // lwz @ 0x807377C4
    /* mtctr r12 */ // 0x807377C8
    /* bctrl  */ // 0x807377CC
    r0 = *(0xb0 + r30); // lbz @ 0x807377D0
    if (==) goto 0x0x807377f4;
    r12 = *(0 + r31); // lwz @ 0x807377DC
    r3 = r31;
    r4 = r30 + 0x72c; // 0x807377E4
    r12 = *(0x70 + r12); // lwz @ 0x807377E8
    /* mtctr r12 */ // 0x807377EC
    /* bctrl  */ // 0x807377F0
    r12 = *(0 + r31); // lwz @ 0x807377F4
    r3 = r31;
    r12 = *(0x80 + r12); // lwz @ 0x807377FC
    /* mtctr r12 */ // 0x80737800
    /* bctrl  */ // 0x80737804
    r0 = *(0x14 + r1); // lwz @ 0x80737808
    r31 = *(0xc + r1); // lwz @ 0x8073780C
    r30 = *(8 + r1); // lwz @ 0x80737810
    return;
}