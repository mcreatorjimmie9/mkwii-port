/* Function at 0x807C2564, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807C2564(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807C256C
    /* li r4, 1 */ // 0x807C2570
    *(0x14 + r1) = r0; // stw @ 0x807C2574
    /* lfs f1, 0(r5) */ // 0x807C2578
    *(0xc + r1) = r31; // stw @ 0x807C257C
    r31 = r3;
    r3 = *(0x14 + r3); // lwz @ 0x807C2584
    r12 = *(0 + r3); // lwz @ 0x807C2588
    r12 = *(0xc + r12); // lwz @ 0x807C258C
    /* mtctr r12 */ // 0x807C2590
    /* bctrl  */ // 0x807C2594
    /* li r0, 0 */ // 0x807C2598
    *(0x18 + r31) = r0; // stw @ 0x807C259C
    *(0x1c + r31) = r0; // stb @ 0x807C25A0
    r31 = *(0xc + r1); // lwz @ 0x807C25A4
    r0 = *(0x14 + r1); // lwz @ 0x807C25A8
    return;
}