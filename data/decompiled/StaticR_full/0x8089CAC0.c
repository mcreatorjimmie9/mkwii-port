/* Function at 0x8089CAC0, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8089CAC0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* stfd f31, 0x18(r1) */ // 0x8089CACC
    /* fmr f31, f1 */ // 0x8089CAD0
    *(0x14 + r1) = r31; // stw @ 0x8089CAD4
    *(0x10 + r1) = r30; // stw @ 0x8089CAD8
    r30 = r6;
    *(0xc + r1) = r29; // stw @ 0x8089CAE0
    r29 = r5;
    *(8 + r1) = r28; // stw @ 0x8089CAE8
    r28 = r4;
    r0 = *(4 + r3); // lhz @ 0x8089CAF0
    if (==) goto 0x0x8089cb40;
    /* lis r31, 0 */ // 0x8089CAFC
    /* li r5, 0x10 */ // 0x8089CB00
    r3 = *(0 + r31); // lwz @ 0x8089CB04
    FUN_80816784(r5); // bl 0x80816784
    /* b 0x8089cb30 */ // 0x8089CB0C
    r12 = *(0 + r3); // lwz @ 0x8089CB10
    /* fmr f1, f31 */ // 0x8089CB14
    r4 = r28;
    r5 = r29;
    r12 = *(0xe0 + r12); // lwz @ 0x8089CB20
    r6 = r30;
    /* mtctr r12 */ // 0x8089CB28
    /* bctrl  */ // 0x8089CB2C
    r3 = *(0 + r31); // lwz @ 0x8089CB30
    FUN_80815B34(r6); // bl 0x80815B34
    if (!=) goto 0x0x8089cb10;
    r0 = *(0x24 + r1); // lwz @ 0x8089CB40
    /* lfd f31, 0x18(r1) */ // 0x8089CB44
    r31 = *(0x14 + r1); // lwz @ 0x8089CB48
    r30 = *(0x10 + r1); // lwz @ 0x8089CB4C
    r29 = *(0xc + r1); // lwz @ 0x8089CB50
    r28 = *(8 + r1); // lwz @ 0x8089CB54
    return;
}