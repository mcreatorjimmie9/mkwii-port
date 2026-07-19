/* Function at 0x80710274, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80710274(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80710280
    r31 = r3;
    r0 = *(8 + r3); // lwz @ 0x80710288
    if (==) goto 0x0x807102ac;
    r3 = r0;
    r4 = r31 + 0x3c; // 0x80710298
    r12 = *(0 + r3); // lwz @ 0x8071029C
    r12 = *(0x14 + r12); // lwz @ 0x807102A0
    /* mtctr r12 */ // 0x807102A4
    /* bctrl  */ // 0x807102A8
    r0 = *(0x90 + r31); // lbz @ 0x807102AC
    if (==) goto 0x0x807102d0;
    r3 = *(0xc + r31); // lwz @ 0x807102B8
    r4 = r31 + 0x3c; // 0x807102BC
    r12 = *(0 + r3); // lwz @ 0x807102C0
    r12 = *(0x14 + r12); // lwz @ 0x807102C4
    /* mtctr r12 */ // 0x807102C8
    /* bctrl  */ // 0x807102CC
    r0 = *(0x14 + r1); // lwz @ 0x807102D0
    r31 = *(0xc + r1); // lwz @ 0x807102D4
    return;
}