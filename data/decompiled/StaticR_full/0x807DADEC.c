/* Function at 0x807DADEC, size=264 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807DADEC(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x807DADF4
    /* li r0, 0 */ // 0x807DADFC
    /* lfs f0, 0(r5) */ // 0x807DAE00
    /* lis r5, 0 */ // 0x807DAE04
    *(0x4c + r1) = r31; // stw @ 0x807DAE08
    /* li r31, 0 */ // 0x807DAE0C
    *(0x48 + r1) = r30; // stw @ 0x807DAE10
    r30 = r4;
    *(0x44 + r1) = r29; // stw @ 0x807DAE18
    r29 = r3;
    *(0xc + r1) = r0; // stb @ 0x807DAE20
    r3 = *(0 + r5); // lwz @ 0x807DAE24
    *(0x1d + r1) = r0; // stb @ 0x807DAE28
    *(0x20 + r1) = r0; // stw @ 0x807DAE2C
    *(0x24 + r1) = r0; // stw @ 0x807DAE30
    *(0x28 + r1) = r0; // stb @ 0x807DAE34
    *(0x29 + r1) = r0; // stb @ 0x807DAE38
    *(0x2a + r1) = r0; // stb @ 0x807DAE3C
    *(0x2c + r1) = r0; // stw @ 0x807DAE40
    *(0x30 + r1) = r0; // stb @ 0x807DAE44
    /* stfs f0, 0x34(r1) */ // 0x807DAE48
    /* stfs f0, 0x18(r1) */ // 0x807DAE4C
    /* stfs f0, 0x14(r1) */ // 0x807DAE50
    /* stfs f0, 0x10(r1) */ // 0x807DAE54
    *(0x1c + r1) = r4; // stb @ 0x807DAE58
    *(8 + r1) = r4; // stb @ 0x807DAE5C
    FUN_805A7238(r4); // bl 0x805A7238
    /* clrlwi r0, r3, 0x18 */ // 0x807DAE68
    *(0x20 + r1) = r0; // stw @ 0x807DAE6C
    if (<=) goto 0x0x807daea0;
    r0 = *(0x2a + r1); // lbz @ 0x807DAE78
    if (!=) goto 0x0x807daea0;
    r12 = *(0 + r29); // lwz @ 0x807DAE84
    r3 = r29;
    r12 = *(0x18 + r12); // lwz @ 0x807DAE90
    /* mtctr r12 */ // 0x807DAE94
    /* bctrl  */ // 0x807DAE98
    r31 = r3;
    /* lis r3, 0 */ // 0x807DAEA0
    r3 = *(0 + r3); // lwz @ 0x807DAEA8
    /* clrlwi r5, r31, 0x18 */ // 0x807DAEAC
    FUN_805A71BC(r3, r4); // bl 0x805A71BC
    /* clrlwi r0, r31, 0x18 */ // 0x807DAEB4
    *(0x24 + r1) = r0; // stw @ 0x807DAEB8
    *(9 + r29) = r3; // stb @ 0x807DAEBC
    r0 = *(0x24 + r1); // lwz @ 0x807DAEC0
    *(0x10 + r29) = r0; // stw @ 0x807DAEC4
    *(0xa + r29) = r30; // stb @ 0x807DAEC8
    *(0xb + r29) = r30; // stb @ 0x807DAECC
    *(0xc + r29) = r30; // stb @ 0x807DAED0
    *(0xd + r29) = r30; // stb @ 0x807DAED4
    r31 = *(0x4c + r1); // lwz @ 0x807DAED8
    r30 = *(0x48 + r1); // lwz @ 0x807DAEDC
    r29 = *(0x44 + r1); // lwz @ 0x807DAEE0
    r0 = *(0x54 + r1); // lwz @ 0x807DAEE4
    return;
}