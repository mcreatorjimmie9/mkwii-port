/* Function at 0x80778B94, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */

int FUN_80778B94(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* stfd f31, 0x18(r1) */ // 0x80778BA0
    /* fmr f31, f1 */ // 0x80778BA4
    *(0x14 + r1) = r31; // stw @ 0x80778BA8
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x80778BB0
    r12 = *(0xa0 + r12); // lwz @ 0x80778BB4
    /* mtctr r12 */ // 0x80778BB8
    /* bctrl  */ // 0x80778BBC
    r12 = *(0 + r31); // lwz @ 0x80778BC0
    /* fmr f2, f31 */ // 0x80778BC4
    r3 = r31;
    r12 = *(0xe4 + r12); // lwz @ 0x80778BCC
    /* mtctr r12 */ // 0x80778BD0
    /* bctrl  */ // 0x80778BD4
    r0 = *(0x24 + r1); // lwz @ 0x80778BD8
    /* lfd f31, 0x18(r1) */ // 0x80778BDC
    r31 = *(0x14 + r1); // lwz @ 0x80778BE0
    return;
}