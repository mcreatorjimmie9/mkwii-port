/* Function at 0x8074E198, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8074E198(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8074E1A4
    r31 = r3;
    r4 = *(0x134 + r3); // lwz @ 0x8074E1AC
    r0 = *(0x158 + r3); // lhz @ 0x8074E1B0
    if (<=) goto 0x0x8074e1c8;
    /* li r0, 1 */ // 0x8074E1BC
    *(0x130 + r3) = r0; // stw @ 0x8074E1C0
    *(0x160 + r3) = r0; // stb @ 0x8074E1C4
    r3 = *(8 + r3); // lwz @ 0x8074E1C8
    /* li r4, 0 */ // 0x8074E1CC
    r3 = *(0x28 + r3); // lwz @ 0x8074E1D0
    FUN_805E7060(r4); // bl 0x805E7060
    r0 = *(8 + r3); // lhz @ 0x8074E1D8
    if (==) goto 0x0x8074e214;
    r0 = *(0x120 + r31); // lwz @ 0x8074E1E4
    if (!=) goto 0x0x8074e214;
    r4 = *(8 + r31); // lwz @ 0x8074E1F0
    /* lis r3, 0 */ // 0x8074E1F4
    /* lis r5, 0 */ // 0x8074E1F8
    /* lfs f1, 0(r3) */ // 0x8074E1FC
    r3 = *(0x28 + r4); // lwz @ 0x8074E200
    /* li r4, 0 */ // 0x8074E204
    /* lfs f2, 0(r5) */ // 0x8074E208
    /* li r5, 1 */ // 0x8074E20C
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    r3 = *(0x154 + r31); // lwz @ 0x8074E214
    /* lfs f0, 0x180(r31) */ // 0x8074E218
    /* lfs f1, 0x40(r3) */ // 0x8074E21C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8074E220
    if (<=) goto 0x0x8074e230;
    /* li r0, 2 */ // 0x8074E228
    *(0x130 + r31) = r0; // stw @ 0x8074E22C
    r0 = *(0x14 + r1); // lwz @ 0x8074E230
    r31 = *(0xc + r1); // lwz @ 0x8074E234
    return;
}