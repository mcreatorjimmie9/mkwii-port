/* Function at 0x807C05A0, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */

int FUN_807C05A0(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x807C05AC
    r27 = r3;
    /* li r28, 0 */ // 0x807C05B4
    r29 = r27;
    /* b 0x807c0628 */ // 0x807C05BC
    r3 = *(0x24 + r29); // lwz @ 0x807C05C0
    r3 = *(0x10 + r3); // lwz @ 0x807C05C4
    r30 = *(0x144 + r3); // lwz @ 0x807C05C8
    r12 = *(0x34 + r30); // lwz @ 0x807C05CC
    r3 = r30;
    r12 = *(0x3c + r12); // lwz @ 0x807C05D4
    /* mtctr r12 */ // 0x807C05D8
    /* bctrl  */ // 0x807C05DC
    r3 = *(8 + r3); // lwz @ 0x807C05E0
    if (==) goto 0x0x807c0604;
    r12 = *(0 + r3); // lwz @ 0x807C05EC
    r12 = *(0x10 + r12); // lwz @ 0x807C05F0
    /* mtctr r12 */ // 0x807C05F4
    /* bctrl  */ // 0x807C05F8
    r31 = r3;
    /* b 0x807c0608 */ // 0x807C0600
    /* li r31, 0 */ // 0x807C0604
    r12 = *(0x34 + r30); // lwz @ 0x807C0608
    r3 = r30;
    r12 = *(0x44 + r12); // lwz @ 0x807C0610
    /* mtctr r12 */ // 0x807C0614
    /* bctrl  */ // 0x807C0618
    *(4 + r3) = r31; // stw @ 0x807C061C
    r29 = r29 + 4; // 0x807C0620
    r28 = r28 + 1; // 0x807C0624
    r0 = *(0x14 + r27); // lwz @ 0x807C0628
    if (<) goto 0x0x807c05c0;
    r0 = *(0x24 + r1); // lwz @ 0x807C0638
    return;
}