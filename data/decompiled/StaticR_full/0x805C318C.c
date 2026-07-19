/* Function at 0x805C318C, size=56 bytes */
/* Stack frame: 16 bytes */

void FUN_805C318C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x805C3198
    if (>=) goto 0x0x805c31b0;
    r12 = *(0 + r3); // lwz @ 0x805C31A0
    r12 = *(0xc + r12); // lwz @ 0x805C31A4
    /* mtctr r12 */ // 0x805C31A8
    /* bctrl  */ // 0x805C31AC
    r0 = *(0x14 + r1); // lwz @ 0x805C31B0
    /* li r3, 1 */ // 0x805C31B4
    return;
}