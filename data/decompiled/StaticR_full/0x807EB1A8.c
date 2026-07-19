/* Function at 0x807EB1A8, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807EB1A8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x807EB1B4
    r31 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x807EB1BC
    r12 = *(0 + r3); // lwz @ 0x807EB1C0
    r12 = *(0x14 + r12); // lwz @ 0x807EB1C4
    /* mtctr r12 */ // 0x807EB1C8
    /* bctrl  */ // 0x807EB1CC
    if (!=) goto 0x0x807eb1e8;
    /* li r3, 0 */ // 0x807EB1D8
    /* li r0, 1 */ // 0x807EB1DC
    *(0x124 + r31) = r3; // stw @ 0x807EB1E0
    *(0x101 + r31) = r0; // stb @ 0x807EB1E4
    r3 = *(0x13c + r31); // lwz @ 0x807EB1E8
    r0 = r3 + 1; // 0x807EB1F0
    *(0x13c + r31) = r0; // stw @ 0x807EB1F4
    if (>=) goto 0x0x807eb230;
    r4 = r31 + 0x30; // 0x807EB200
    r5 = r31 + 0x130; // 0x807EB204
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    r0 = *(0x2c + r31); // lhz @ 0x807EB20C
    /* lfs f0, 0x10(r1) */ // 0x807EB210
    /* lfs f1, 0xc(r1) */ // 0x807EB214
    r0 = r0 | 1; // 0x807EB218
    /* lfs f2, 8(r1) */ // 0x807EB21C
    /* stfs f2, 0x30(r31) */ // 0x807EB220
    *(0x2c + r31) = r0; // sth @ 0x807EB224
    /* stfs f1, 0x34(r31) */ // 0x807EB228
    /* stfs f0, 0x38(r31) */ // 0x807EB22C
    r0 = *(0x24 + r1); // lwz @ 0x807EB230
    r31 = *(0x1c + r1); // lwz @ 0x807EB234
    return;
}