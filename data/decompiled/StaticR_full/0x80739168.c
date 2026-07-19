/* Function at 0x80739168, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80739168(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80739178
    r30 = r3;
    r31 = *(0x224 + r3); // lwz @ 0x80739180
    if (==) goto 0x0x807391f0;
    r12 = *(0 + r31); // lwz @ 0x8073918C
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x80739194
    /* mtctr r12 */ // 0x80739198
    /* bctrl  */ // 0x8073919C
    r12 = *(0 + r31); // lwz @ 0x807391A0
    r3 = r31;
    r4 = r30 + 0x6d0; // 0x807391A8
    r12 = *(0x74 + r12); // lwz @ 0x807391AC
    /* mtctr r12 */ // 0x807391B0
    /* bctrl  */ // 0x807391B4
    r0 = *(0xb0 + r30); // lbz @ 0x807391B8
    if (==) goto 0x0x807391dc;
    r12 = *(0 + r31); // lwz @ 0x807391C4
    r3 = r31;
    r4 = r30 + 0x72c; // 0x807391CC
    r12 = *(0x70 + r12); // lwz @ 0x807391D0
    /* mtctr r12 */ // 0x807391D4
    /* bctrl  */ // 0x807391D8
    r12 = *(0 + r31); // lwz @ 0x807391DC
    r3 = r31;
    r12 = *(0x80 + r12); // lwz @ 0x807391E4
    /* mtctr r12 */ // 0x807391E8
    /* bctrl  */ // 0x807391EC
    r0 = *(0x14 + r1); // lwz @ 0x807391F0
    r31 = *(0xc + r1); // lwz @ 0x807391F4
    r30 = *(8 + r1); // lwz @ 0x807391F8
    return;
}