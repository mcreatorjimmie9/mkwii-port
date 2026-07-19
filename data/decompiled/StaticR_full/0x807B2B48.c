/* Function at 0x807B2B48, size=148 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807B2B48(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807B2B54
    r31 = r3;
    r0 = *(0x1fc + r3); // lwz @ 0x807B2B5C
    if (==) goto 0x0x807b2b90;
    r3 = r0;
    FUN_807B56CC(r3); // bl 0x807B56CC
    if (==) goto 0x0x807b2b90;
    r5 = *(0x1fc + r31); // lwz @ 0x807B2B78
    /* li r0, 0 */ // 0x807B2B7C
    r3 = r31 + 0x60; // 0x807B2B80
    r4 = r31 + 0x11c; // 0x807B2B84
    *(5 + r5) = r0; // stb @ 0x807B2B88
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    r3 = *(0x200 + r31); // lwz @ 0x807B2B90
    if (==) goto 0x0x807b2bac;
    r12 = *(0 + r3); // lwz @ 0x807B2B9C
    r12 = *(0x10 + r12); // lwz @ 0x807B2BA0
    /* mtctr r12 */ // 0x807B2BA4
    /* bctrl  */ // 0x807B2BA8
    r3 = *(0x204 + r31); // lwz @ 0x807B2BAC
    if (==) goto 0x0x807b2bc8;
    r12 = *(0 + r3); // lwz @ 0x807B2BB8
    r12 = *(0x10 + r12); // lwz @ 0x807B2BBC
    /* mtctr r12 */ // 0x807B2BC0
    /* bctrl  */ // 0x807B2BC4
    r0 = *(0x14 + r1); // lwz @ 0x807B2BC8
    r31 = *(0xc + r1); // lwz @ 0x807B2BCC
    return;
}