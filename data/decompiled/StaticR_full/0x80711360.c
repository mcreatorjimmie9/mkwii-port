/* Function at 0x80711360, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80711360(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x80711374
    r30 = r4;
    r12 = *(0 + r3); // lwz @ 0x8071137C
    r12 = *(0xb4 + r12); // lwz @ 0x80711380
    /* mtctr r12 */ // 0x80711384
    /* bctrl  */ // 0x80711388
    r4 = r3;
    r3 = r30;
    r5 = r31;
    FUN_808B04F0(r4, r3, r5); // bl 0x808B04F0
    r0 = *(0x14 + r1); // lwz @ 0x8071139C
    r31 = *(0xc + r1); // lwz @ 0x807113A0
    r30 = *(8 + r1); // lwz @ 0x807113A4
    return;
}