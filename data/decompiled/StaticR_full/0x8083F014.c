/* Function at 0x8083F014, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8083F014(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* clrlwi r0, r4, 0x18 */ // 0x8083F020
    *(0xc + r1) = r31; // stw @ 0x8083F028
    r31 = r3;
    *(0 + r3) = r4; // stb @ 0x8083F030
    *(1 + r3) = r5; // stb @ 0x8083F034
    if (==) goto 0x0x8083f064;
    /* lis r3, 0 */ // 0x8083F03C
    r3 = *(0 + r3); // lwz @ 0x8083F040
    FUN_805A4968(r3); // bl 0x805A4968
    r3 = *(0 + r3); // lwz @ 0x8083F048
    /* lfs f2, 8(r3) */ // 0x8083F04C
    /* lfs f1, 4(r3) */ // 0x8083F050
    /* lfs f0, 0(r3) */ // 0x8083F054
    /* stfs f0, 4(r31) */ // 0x8083F058
    /* stfs f1, 8(r31) */ // 0x8083F05C
    /* stfs f2, 0xc(r31) */ // 0x8083F060
    r0 = *(0x14 + r1); // lwz @ 0x8083F064
    r31 = *(0xc + r1); // lwz @ 0x8083F068
    return;
}