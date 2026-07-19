/* Function at 0x807F54BC, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807F54BC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0 */ // 0x807F54C4
    /* li r31, 0 */ // 0x807F54D0
    *(0x18 + r1) = r30; // stw @ 0x807F54D4
    /* lis r30, 0 */ // 0x807F54D8
    /* lfs f1, 0(r30) */ // 0x807F54DC
    *(0x14 + r1) = r29; // stw @ 0x807F54E0
    r29 = r3;
    *(0xc0 + r3) = r31; // stw @ 0x807F54E8
    r3 = *(0x20 + r3); // lwz @ 0x807F54EC
    r12 = *(0 + r3); // lwz @ 0x807F54F0
    r12 = *(0x10 + r12); // lwz @ 0x807F54F4
    /* mtctr r12 */ // 0x807F54F8
    /* bctrl  */ // 0x807F54FC
    *(0xb0 + r29) = r31; // stw @ 0x807F5500
    /* lis r31, 0 */ // 0x807F5504
    r3 = *(8 + r29); // lwz @ 0x807F5508
    /* li r4, 0 */ // 0x807F550C
    /* lfs f1, 0(r30) */ // 0x807F5510
    r3 = *(0x28 + r3); // lwz @ 0x807F5514
    /* lfs f2, 0(r31) */ // 0x807F5518
    FUN_805E70EC(r4); // bl 0x805E70EC
    /* lfs f1, 0(r30) */ // 0x807F5520
    r3 = r29;
    /* lfs f0, 0(r31) */ // 0x807F5528
    /* li r4, 0 */ // 0x807F552C
    /* stfs f1, 0xb4(r29) */ // 0x807F5530
    /* stfs f1, 0xb8(r29) */ // 0x807F5534
    /* stfs f0, 0xbc(r29) */ // 0x807F5538
    FUN_808A0A44(r4); // bl 0x808A0A44
    /* li r0, 1 */ // 0x807F5540
    *(0xd4 + r29) = r0; // stb @ 0x807F5544
    r31 = *(0x1c + r1); // lwz @ 0x807F5548
    r30 = *(0x18 + r1); // lwz @ 0x807F554C
    r29 = *(0x14 + r1); // lwz @ 0x807F5550
    r0 = *(0x24 + r1); // lwz @ 0x807F5554
    return;
}