/* Function at 0x808CEB1C, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808CEB1C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808CEB28
    r31 = r3;
    r4 = *(0x18c0 + r3); // lwz @ 0x808CEB30
    if (==) goto 0x0x808ceb5c;
    r0 = *(0x20 + r3); // lwz @ 0x808CEB3C
    if (!=) goto 0x0x808ceb5c;
    r12 = *(0 + r4); // lwz @ 0x808CEB48
    r3 = r4;
    r12 = *(0x54 + r12); // lwz @ 0x808CEB50
    /* mtctr r12 */ // 0x808CEB54
    /* bctrl  */ // 0x808CEB58
    r3 = r31;
    FUN_808CE6D4(r3, r3); // bl 0x808CE6D4
    r0 = *(0x14 + r1); // lwz @ 0x808CEB64
    r31 = *(0xc + r1); // lwz @ 0x808CEB68
    return;
}