/* Function at 0x80763184, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80763184(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80763190
    r31 = r3;
    r0 = *(0xb0 + r3); // lbz @ 0x80763198
    if (==) goto 0x0x80763210;
    r3 = *(0x20 + r3); // lwz @ 0x807631A4
    r12 = *(0 + r3); // lwz @ 0x807631A8
    r12 = *(0x14 + r12); // lwz @ 0x807631AC
    /* mtctr r12 */ // 0x807631B0
    /* bctrl  */ // 0x807631B4
    if (!=) goto 0x0x807631d8;
    r12 = *(0 + r31); // lwz @ 0x807631C0
    r3 = r31;
    r12 = *(0xf4 + r12); // lwz @ 0x807631C8
    /* mtctr r12 */ // 0x807631CC
    /* bctrl  */ // 0x807631D0
    /* b 0x80763210 */ // 0x807631D4
    r4 = *(0x20 + r31); // lwz @ 0x807631D8
    r3 = r31;
    r4 = r4 + 0x24; // 0x807631E0
    FUN_808A1E3C(r3, r4); // bl 0x808A1E3C
    r3 = *(0x20 + r31); // lwz @ 0x807631E8
    r0 = *(0x2c + r31); // lhz @ 0x807631EC
    /* lfs f0, 0x20(r3) */ // 0x807631F0
    /* lfs f1, 0x1c(r3) */ // 0x807631F4
    r0 = r0 | 1; // 0x807631F8
    /* lfs f2, 0x18(r3) */ // 0x807631FC
    /* stfs f2, 0x30(r31) */ // 0x80763200
    *(0x2c + r31) = r0; // sth @ 0x80763204
    /* stfs f1, 0x34(r31) */ // 0x80763208
    /* stfs f0, 0x38(r31) */ // 0x8076320C
    r0 = *(0x14 + r1); // lwz @ 0x80763210
    r31 = *(0xc + r1); // lwz @ 0x80763214
    return;
}