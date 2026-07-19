/* Function at 0x807BCCC8, size=384 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_807BCCC8(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x807BCCD0
    /* lfs f0, 0(r4) */ // 0x807BCCD8
    *(0x2c + r1) = r31; // stw @ 0x807BCCDC
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x807BCCE4
    /* li r30, 0 */ // 0x807BCCE8
    *(0x24 + r1) = r29; // stw @ 0x807BCCEC
    r5 = *(0x140 + r3); // lwz @ 0x807BCCF0
    *(0xc + r5) = r30; // sth @ 0x807BCCF4
    /* stfs f0, 0x10(r5) */ // 0x807BCCF8
    r3 = *(0x150 + r3); // lwz @ 0x807BCCFC
    FUN_805AE488(); // bl 0x805AE488
    r0 = *(0x160 + r31); // lbz @ 0x807BCD04
    if (==) goto 0x0x807bcd6c;
    r0 = *(0x161 + r31); // lbz @ 0x807BCD10
    if (!=) goto 0x0x807bcd70;
    r0 = *(0x162 + r31); // lbz @ 0x807BCD1C
    if (==) goto 0x0x807bcd3c;
    r3 = *(0x140 + r31); // lwz @ 0x807BCD28
    r3 = *(0 + r3); // lwz @ 0x807BCD2C
    FUN_807B6158(); // bl 0x807B6158
    if (!=) goto 0x0x807bcd70;
    r3 = *(0x140 + r31); // lwz @ 0x807BCD3C
    r3 = *(0 + r3); // lwz @ 0x807BCD40
    FUN_8061DA88(); // bl 0x8061DA88
    r4 = r3;
    r3 = *(0x144 + r31); // lwz @ 0x807BCD4C
    r12 = *(0x34 + r3); // lwz @ 0x807BCD50
    r12 = *(0x30 + r12); // lwz @ 0x807BCD54
    /* mtctr r12 */ // 0x807BCD58
    /* bctrl  */ // 0x807BCD5C
    /* li r0, 1 */ // 0x807BCD60
    *(0x161 + r31) = r0; // stb @ 0x807BCD64
    /* b 0x807bcd70 */ // 0x807BCD68
    *(0x161 + r31) = r30; // stb @ 0x807BCD6C
    /* li r0, 0 */ // 0x807BCD70
    *(0x160 + r31) = r0; // stb @ 0x807BCD74
    r3 = *(0x154 + r31); // lwz @ 0x807BCD78
    r12 = *(0 + r3); // lwz @ 0x807BCD7C
    r12 = *(0x10 + r12); // lwz @ 0x807BCD80
    /* mtctr r12 */ // 0x807BCD84
    /* bctrl  */ // 0x807BCD88
    r3 = *(0x148 + r31); // lwz @ 0x807BCD8C
    r12 = *(0 + r3); // lwz @ 0x807BCD90
    r12 = *(0x14 + r12); // lwz @ 0x807BCD94
    /* mtctr r12 */ // 0x807BCD98
    /* bctrl  */ // 0x807BCD9C
    r3 = *(0x144 + r31); // lwz @ 0x807BCDA0
    r12 = *(0x34 + r3); // lwz @ 0x807BCDA4
    r12 = *(0x1c + r12); // lwz @ 0x807BCDA8
    /* mtctr r12 */ // 0x807BCDAC
    /* bctrl  */ // 0x807BCDB0
    r3 = *(0x14c + r31); // lwz @ 0x807BCDB4
    r12 = *(0x34 + r3); // lwz @ 0x807BCDB8
    r12 = *(0x1c + r12); // lwz @ 0x807BCDBC
    /* mtctr r12 */ // 0x807BCDC0
    /* bctrl  */ // 0x807BCDC4
    r3 = *(0x158 + r31); // lwz @ 0x807BCDC8
    r12 = *(0x34 + r3); // lwz @ 0x807BCDCC
    r12 = *(0x1c + r12); // lwz @ 0x807BCDD0
    /* mtctr r12 */ // 0x807BCDD4
    /* bctrl  */ // 0x807BCDD8
    r4 = *(0x140 + r31); // lwz @ 0x807BCDDC
    /* lis r3, 0 */ // 0x807BCDE0
    /* lfs f2, 0(r3) */ // 0x807BCDE4
    r29 = *(0 + r4); // lwz @ 0x807BCDE8
    r3 = *(0x150 + r31); // lwz @ 0x807BCDEC
    /* fctiwz f1, f2 */ // 0x807BCDF0
    r0 = *(0xc + r4); // lhz @ 0x807BCDF4
    *(4 + r3) = r0; // sth @ 0x807BCDF8
    /* lfs f0, 0x10(r4) */ // 0x807BCDFC
    /* stfd f1, 8(r1) */ // 0x807BCE00
    /* fmuls f0, f2, f0 */ // 0x807BCE04
    r3 = *(0x150 + r31); // lwz @ 0x807BCE08
    r4 = *(0xc + r1); // lwz @ 0x807BCE0C
    /* fctiwz f0, f0 */ // 0x807BCE10
    /* stfd f0, 0x10(r1) */ // 0x807BCE14
    r0 = *(0x14 + r1); // lwz @ 0x807BCE18
    r4 = r4 + r0; // 0x807BCE1C
    /* clrlwi r4, r4, 0x18 */ // 0x807BCE20
    FUN_805AE614(); // bl 0x805AE614
    r30 = *(0x150 + r31); // lwz @ 0x807BCE28
    r3 = r29;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807BCE34
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x807BCE3C
    r4 = r30;
    r3 = *(0xc + r3); // lwz @ 0x807BCE44
}