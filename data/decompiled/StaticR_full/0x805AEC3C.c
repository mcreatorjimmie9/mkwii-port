/* Function at 0x805AEC3C, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_805AEC3C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805AEC48
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x805AEC50
    r12 = *(0x40 + r12); // lwz @ 0x805AEC54
    /* mtctr r12 */ // 0x805AEC58
    /* bctrl  */ // 0x805AEC5C
    /* li r4, 6 */ // 0x805AEC64
    /* li r0, 0 */ // 0x805AEC68
    *(0x54 + r31) = r4; // stw @ 0x805AEC6C
    *(0x58 + r31) = r0; // stb @ 0x805AEC70
    if (!=) goto 0x0x805aec84;
    /* li r0, 1 */ // 0x805AEC78
    *(0x58 + r31) = r0; // stb @ 0x805AEC7C
    /* b 0x805aec8c */ // 0x805AEC80
    /* li r0, 7 */ // 0x805AEC84
    *(0x54 + r31) = r0; // stw @ 0x805AEC88
    r0 = *(0x14 + r1); // lwz @ 0x805AEC8C
    r31 = *(0xc + r1); // lwz @ 0x805AEC90
    return;
}