/* Function at 0x808F5E08, size=148 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808F5E08(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808F5E14
    r31 = r3;
    r0 = *(0x6fb + r3); // lbz @ 0x808F5E1C
    if (==) goto 0x0x808f5e88;
    if (==) goto 0x0x808f5e88;
    r0 = *(0 + r4); // lwz @ 0x808F5E30
    *(0x120 + r3) = r0; // stw @ 0x808F5E34
    r0 = *(4 + r4); // lwz @ 0x808F5E38
    *(0x124 + r3) = r0; // stw @ 0x808F5E3C
    r0 = *(8 + r4); // lwz @ 0x808F5E40
    *(0x128 + r3) = r0; // stw @ 0x808F5E44
    /* lfs f0, 0xc(r4) */ // 0x808F5E48
    r4 = r31 + 0x120; // 0x808F5E4C
    /* stfs f0, 0x12c(r3) */ // 0x808F5E50
    r3 = r3 + 0x11c; // 0x808F5E54
    FUN_808F5E9C(r4, r3); // bl 0x808F5E9C
    r0 = *(0x130 + r31); // lbz @ 0x808F5E5C
    if (!=) goto 0x0x808f5e80;
    /* lfs f1, 0x6e4(r31) */ // 0x808F5E68
    /* li r0, 1 */ // 0x808F5E6C
    /* lfs f0, 0x12c(r31) */ // 0x808F5E70
    *(0x130 + r31) = r0; // stb @ 0x808F5E74
    /* fmuls f0, f1, f0 */ // 0x808F5E78
    /* stfs f0, 0x6e4(r31) */ // 0x808F5E7C
    r3 = r31;
    FUN_808F3B28(r3); // bl 0x808F3B28
    r0 = *(0x14 + r1); // lwz @ 0x808F5E88
    r31 = *(0xc + r1); // lwz @ 0x808F5E8C
    return;
}