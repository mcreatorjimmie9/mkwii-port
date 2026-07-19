/* Function at 0x807112F0, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */

int FUN_807112F0(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* stfd f31, 0x18(r1) */ // 0x807112FC
    /* fmr f31, f1 */ // 0x80711300
    *(0x14 + r1) = r31; // stw @ 0x80711304
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x8071130C
    r12 = *(0xa0 + r12); // lwz @ 0x80711310
    /* mtctr r12 */ // 0x80711314
    /* bctrl  */ // 0x80711318
    r12 = *(0 + r31); // lwz @ 0x8071131C
    /* fmr f2, f31 */ // 0x80711320
    r3 = r31;
    r12 = *(0xe4 + r12); // lwz @ 0x80711328
    /* mtctr r12 */ // 0x8071132C
    /* bctrl  */ // 0x80711330
    r0 = *(0x24 + r1); // lwz @ 0x80711334
    /* lfd f31, 0x18(r1) */ // 0x80711338
    r31 = *(0x14 + r1); // lwz @ 0x8071133C
    return;
}