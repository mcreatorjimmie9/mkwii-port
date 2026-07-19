/* Function at 0x807EF450, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807EF450(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807EF458
    /* li r4, 0 */ // 0x807EF45C
    *(0x14 + r1) = r0; // stw @ 0x807EF460
    /* li r0, 2 */ // 0x807EF464
    /* lfs f1, 0(r5) */ // 0x807EF468
    *(0xc + r1) = r31; // stw @ 0x807EF46C
    r31 = r3;
    *(0xc8 + r3) = r0; // stw @ 0x807EF474
    r3 = *(0x20 + r3); // lwz @ 0x807EF478
    r12 = *(0 + r3); // lwz @ 0x807EF47C
    r12 = *(0x10 + r12); // lwz @ 0x807EF480
    /* mtctr r12 */ // 0x807EF484
    /* bctrl  */ // 0x807EF488
    r3 = *(0x20 + r31); // lwz @ 0x807EF48C
    /* li r0, 1 */ // 0x807EF490
    *(0x17 + r3) = r0; // stb @ 0x807EF494
    r31 = *(0xc + r1); // lwz @ 0x807EF498
    r0 = *(0x14 + r1); // lwz @ 0x807EF49C
    return;
}