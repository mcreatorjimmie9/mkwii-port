/* Function at 0x8077FC90, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8077FC90(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x8077FC98
    /* lis r5, 0 */ // 0x8077FC9C
    *(0x24 + r1) = r0; // stw @ 0x8077FCA0
    /* lis r0, 0x4330 */ // 0x8077FCA4
    /* lfd f1, 0(r6) */ // 0x8077FCA8
    *(0x1c + r1) = r31; // stw @ 0x8077FCAC
    r31 = r3;
    /* lfs f2, 0(r5) */ // 0x8077FCB4
    r4 = *(0xe4 + r3); // lwz @ 0x8077FCB8
    *(8 + r1) = r0; // stw @ 0x8077FCBC
    /* xoris r4, r4, 0x8000 */ // 0x8077FCC0
    r7 = *(0x20 + r3); // lwz @ 0x8077FCC4
    *(0xc + r1) = r4; // stw @ 0x8077FCC8
    /* lis r4, 0 */ // 0x8077FCCC
    r0 = *(0x2c + r3); // lhz @ 0x8077FCD0
    /* lfd f0, 8(r1) */ // 0x8077FCD4
    /* lfs f4, 0x1c(r7) */ // 0x8077FCD8
    r0 = r0 | 1; // 0x8077FCDC
    /* fsubs f3, f0, f1 */ // 0x8077FCE0
    /* lfs f1, 0xe0(r3) */ // 0x8077FCE4
    /* lfs f0, 0(r4) */ // 0x8077FCE8
    /* fmuls f2, f2, f3 */ // 0x8077FCEC
    /* lfs f3, 0x20(r7) */ // 0x8077FCF0
    /* fdivs f2, f2, f1 */ // 0x8077FCF4
    /* lfs f1, 0x18(r7) */ // 0x8077FCF8
    /* stfs f1, 0x30(r3) */ // 0x8077FCFC
    *(0x2c + r3) = r0; // sth @ 0x8077FD00
    /* stfs f4, 0x34(r3) */ // 0x8077FD04
    /* stfs f3, 0x38(r3) */ // 0x8077FD08
    /* fmuls f1, f0, f2 */ // 0x8077FD0C
    FUN_805E3430(); // bl 0x805E3430
}