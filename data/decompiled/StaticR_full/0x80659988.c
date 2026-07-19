/* Function at 0x80659988, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80659988(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80659994
    r31 = r3;
    r0 = *(0x3858 + r3); // lbz @ 0x8065999C
    if (==) goto 0x0x806599c0;
    r12 = *(0x3850 + r3); // lwzu @ 0x806599A8
    r12 = *(0x10 + r12); // lwz @ 0x806599AC
    /* mtctr r12 */ // 0x806599B0
    /* bctrl  */ // 0x806599B4
    /* li r0, 0 */ // 0x806599B8
    *(0x3858 + r31) = r0; // stb @ 0x806599BC
    r0 = *(0x14 + r1); // lwz @ 0x806599C0
    r31 = *(0xc + r1); // lwz @ 0x806599C4
    return;
}