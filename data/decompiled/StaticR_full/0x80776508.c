/* Function at 0x80776508, size=144 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80776508(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80776510
    *(0x14 + r1) = r0; // stw @ 0x80776514
    *(0xc + r1) = r31; // stw @ 0x80776518
    r31 = r3;
    r4 = *(0 + r4); // lwz @ 0x80776520
    r0 = *(0x20 + r4); // lwz @ 0x80776524
    if (<) goto 0x0x80776584;
    r3 = *(0xb0 + r3); // lwz @ 0x80776530
    r12 = *(0 + r3); // lwz @ 0x80776534
    r12 = *(0xc + r12); // lwz @ 0x80776538
    /* mtctr r12 */ // 0x8077653C
    /* bctrl  */ // 0x80776540
    r3 = *(0xb0 + r31); // lwz @ 0x80776544
    r4 = r31 + 0x30; // 0x80776548
    r12 = *(0 + r3); // lwz @ 0x8077654C
    r12 = *(0x74 + r12); // lwz @ 0x80776550
    /* mtctr r12 */ // 0x80776554
    /* bctrl  */ // 0x80776558
    r3 = *(0xb0 + r31); // lwz @ 0x8077655C
    r12 = *(0 + r3); // lwz @ 0x80776560
    r12 = *(0x80 + r12); // lwz @ 0x80776564
    /* mtctr r12 */ // 0x80776568
    /* bctrl  */ // 0x8077656C
    /* lis r4, 0 */ // 0x80776570
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x80776578
    /* li r4, 0x215 */ // 0x8077657C
    FUN_808A0AA8(r4, r3, r4); // bl 0x808A0AA8
    r0 = *(0x14 + r1); // lwz @ 0x80776584
    r31 = *(0xc + r1); // lwz @ 0x80776588
    return;
}