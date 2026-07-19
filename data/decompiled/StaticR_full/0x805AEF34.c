/* Function at 0x805AEF34, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_805AEF34(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805AEF40
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x805AEF48
    r12 = *(0x38 + r12); // lwz @ 0x805AEF4C
    /* mtctr r12 */ // 0x805AEF50
    /* bctrl  */ // 0x805AEF54
    r0 = *(0x18 + r31); // lbz @ 0x805AEF58
    /* lis r3, 0 */ // 0x805AEF5C
    /* lfs f0, 0(r3) */ // 0x805AEF60
    /* li r4, 0 */ // 0x805AEF64
    /* li r3, 7 */ // 0x805AEF68
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r31) = r4; // sth @ 0x805AEF70
    *(0xa + r31) = r4; // sth @ 0x805AEF74
    /* stfs f0, 0x10(r31) */ // 0x805AEF78
    /* stfs f0, 0xc(r31) */ // 0x805AEF7C
    *(0x14 + r31) = r3; // stb @ 0x805AEF80
    *(0x15 + r31) = r3; // stb @ 0x805AEF84
    *(0x16 + r31) = r4; // stb @ 0x805AEF88
    *(0x17 + r31) = r4; // stb @ 0x805AEF8C
    *(0x18 + r31) = r0; // stb @ 0x805AEF90
    r31 = *(0xc + r1); // lwz @ 0x805AEF94
    r0 = *(0x14 + r1); // lwz @ 0x805AEF98
    return;
}