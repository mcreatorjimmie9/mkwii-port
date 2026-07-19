/* Function at 0x805FD400, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805FD400(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805FD414
    r30 = r3;
    FUN_806207C8(); // bl 0x806207C8
    r12 = *(0x244 + r30); // lwz @ 0x805FD420
    r3 = r30 + 0x238; // 0x805FD424
    r4 = r31;
    r12 = *(0x34 + r12); // lwz @ 0x805FD42C
    /* mtctr r12 */ // 0x805FD430
    /* bctrl  */ // 0x805FD434
    r12 = *(0x2d8 + r30); // lwz @ 0x805FD438
    r3 = r30 + 0x2cc; // 0x805FD43C
    r4 = r31;
    r12 = *(0x34 + r12); // lwz @ 0x805FD444
    /* mtctr r12 */ // 0x805FD448
    /* bctrl  */ // 0x805FD44C
    r0 = *(0x14 + r1); // lwz @ 0x805FD450
    r31 = *(0xc + r1); // lwz @ 0x805FD454
    r30 = *(8 + r1); // lwz @ 0x805FD458
    return;
}