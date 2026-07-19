/* Function at 0x807807E8, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807807E8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807807F4
    r31 = r3;
    r3 = *(0xb4 + r3); // lwz @ 0x807807FC
    r12 = *(0 + r3); // lwz @ 0x80780800
    r12 = *(0xec + r12); // lwz @ 0x80780804
    /* mtctr r12 */ // 0x80780808
    /* bctrl  */ // 0x8078080C
    /* subfic r4, r3, -1 */ // 0x80780810
    r0 = r3 + 1; // 0x80780814
    r0 = r4 | r0; // 0x80780818
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x8078081C
    *(0xc8 + r31) = r0; // stb @ 0x80780820
    if (==) goto 0x0x80780858;
    r4 = *(0xbc + r31); // lwz @ 0x80780828
    /* slwi r0, r3, 1 */ // 0x8078082C
    /* lhax r0, r4, r0 */ // 0x80780830
    if (==) goto 0x0x80780858;
    r3 = *(0xb0 + r31); // lwz @ 0x8078083C
    /* slwi r0, r0, 2 */ // 0x80780840
    /* lwzx r3, r3, r0 */ // 0x80780844
    r12 = *(0 + r3); // lwz @ 0x80780848
    r12 = *(0xf0 + r12); // lwz @ 0x8078084C
    /* mtctr r12 */ // 0x80780850
    /* bctrl  */ // 0x80780854
    r0 = *(0x14 + r1); // lwz @ 0x80780858
    r31 = *(0xc + r1); // lwz @ 0x8078085C
    return;
}