/* Function at 0x80659914, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80659914(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80659920
    r31 = r3;
    r0 = *(0x3758 + r3); // lbz @ 0x80659928
    if (==) goto 0x0x8065994c;
    r12 = *(0x3750 + r3); // lwzu @ 0x80659934
    r12 = *(0x10 + r12); // lwz @ 0x80659938
    /* mtctr r12 */ // 0x8065993C
    /* bctrl  */ // 0x80659940
    /* li r0, 0 */ // 0x80659944
    *(0x3758 + r31) = r0; // stb @ 0x80659948
    r0 = *(0x14 + r1); // lwz @ 0x8065994C
    r31 = *(0xc + r1); // lwz @ 0x80659950
    return;
}