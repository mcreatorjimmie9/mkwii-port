/* Function at 0x80636C1C, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80636C1C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80636C28
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x80636C30
    r12 = *(0x14 + r12); // lwz @ 0x80636C34
    /* mtctr r12 */ // 0x80636C38
    /* bctrl  */ // 0x80636C3C
    r4 = *(0 + r3); // lwz @ 0x80636C40
    r3 = *(4 + r31); // lwz @ 0x80636C44
    /* lfs f2, 0x14(r4) */ // 0x80636C48
    r3 = *(0x90 + r3); // lwz @ 0x80636C4C
    /* lfs f1, 0x10(r4) */ // 0x80636C50
    /* lfs f0, 0xc(r4) */ // 0x80636C54
    /* stfs f0, 0x64(r3) */ // 0x80636C58
    /* stfs f1, 0x68(r3) */ // 0x80636C5C
    /* stfs f2, 0x6c(r3) */ // 0x80636C60
    r31 = *(0xc + r1); // lwz @ 0x80636C64
    r0 = *(0x14 + r1); // lwz @ 0x80636C68
    return;
}