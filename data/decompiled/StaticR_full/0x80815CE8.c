/* Function at 0x80815CE8, size=168 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_80815CE8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    /* stfd f31, 0x28(r1) */ // 0x80815CF4
    /* fmr f31, f2 */ // 0x80815CF8
    /* stfd f30, 0x20(r1) */ // 0x80815CFC
    /* fmr f30, f1 */ // 0x80815D00
    /* stmw r27, 0xc(r1) */ // 0x80815D04
    r30 = r6;
    /* lis r6, 0 */ // 0x80815D0C
    r27 = r3;
    r3 = r30;
    r28 = r4;
    r29 = r5;
    r12 = *(0 + r30); // lwz @ 0x80815D20
    r31 = *(0 + r6); // lwz @ 0x80815D24
    r12 = *(0x24 + r12); // lwz @ 0x80815D28
    /* mtctr r12 */ // 0x80815D2C
    /* bctrl  */ // 0x80815D30
    /* clrlwi r4, r3, 0x10 */ // 0x80815D34
    r3 = r31;
    FUN_807BFD98(r3); // bl 0x807BFD98
    /* li r5, 8 */ // 0x80815D44
    if (==) goto 0x0x80815d50;
    /* li r5, 4 */ // 0x80815D4C
    if (==) goto 0x0x80815d5c;
    r5 = r5 | 0x100; // 0x80815D58
    /* fmr f1, f30 */ // 0x80815D5C
    r3 = r27;
    /* fmr f2, f31 */ // 0x80815D64
    r4 = r28;
    r6 = r30;
    FUN_80815DA4(r3, r4, r6); // bl 0x80815DA4
    /* lfd f31, 0x28(r1) */ // 0x80815D74
    /* lfd f30, 0x20(r1) */ // 0x80815D78
    r0 = *(0x34 + r1); // lwz @ 0x80815D80
    return;
}