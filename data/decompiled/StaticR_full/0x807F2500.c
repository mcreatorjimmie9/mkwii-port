/* Function at 0x807F2500, size=220 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_807F2500(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x807F2510
    r31 = r31 + 0; // 0x807F2514
    *(8 + r1) = r30; // stw @ 0x807F2518
    r30 = r3;
    r0 = *(0xe0 + r3); // lwz @ 0x807F2520
    if (>=) goto 0x0x807f25c4;
    /* li r0, 0 */ // 0x807F252C
    *(0xb4 + r3) = r0; // stw @ 0x807F2530
    r3 = *(0x20 + r3); // lwz @ 0x807F2534
    /* lfs f1, 0(r31) */ // 0x807F2538
    r12 = *(0 + r3); // lwz @ 0x807F253C
    r12 = *(0x18 + r12); // lwz @ 0x807F2540
    /* mtctr r12 */ // 0x807F2544
    /* bctrl  */ // 0x807F2548
    /* lfs f0, 0x10(r31) */ // 0x807F254C
    /* lis r3, 0 */ // 0x807F2550
    /* stfs f0, 0xd8(r30) */ // 0x807F2554
    /* lfs f0, 4(r31) */ // 0x807F2558
    /* stfs f0, 0xcc(r30) */ // 0x807F255C
    r3 = *(0 + r3); // lwz @ 0x807F2560
    r0 = *(0x55 + r3); // lbz @ 0x807F2564
    if (==) goto 0x0x807f257c;
    r0 = *(0x24 + r31); // lwz @ 0x807F2570
    *(0xe0 + r30) = r0; // stw @ 0x807F2574
    /* b 0x807f2584 */ // 0x807F2578
    r0 = *(0x20 + r31); // lwz @ 0x807F257C
    *(0xe0 + r30) = r0; // stw @ 0x807F2580
    r12 = *(0 + r30); // lwz @ 0x807F2584
    r3 = r30;
    /* li r4, 1 */ // 0x807F258C
    r12 = *(0x68 + r12); // lwz @ 0x807F2590
    /* mtctr r12 */ // 0x807F2594
    /* bctrl  */ // 0x807F2598
    r3 = *(0xb0 + r30); // lwz @ 0x807F259C
    /* li r4, 1 */ // 0x807F25A0
    r12 = *(0 + r3); // lwz @ 0x807F25A4
    r12 = *(0xc + r12); // lwz @ 0x807F25A8
    /* mtctr r12 */ // 0x807F25AC
    /* bctrl  */ // 0x807F25B0
    /* li r3, 1 */ // 0x807F25B4
    /* li r0, 0 */ // 0x807F25B8
    *(0x124 + r30) = r3; // stb @ 0x807F25BC
    *(0xd4 + r30) = r0; // stb @ 0x807F25C0
    r0 = *(0x14 + r1); // lwz @ 0x807F25C4
    r31 = *(0xc + r1); // lwz @ 0x807F25C8
    r30 = *(8 + r1); // lwz @ 0x807F25CC
    return;
}