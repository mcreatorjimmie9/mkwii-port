/* Function at 0x805E37D4, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805E37D4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    r5 = *(4 + r3); // lwz @ 0x805E37DC
    *(0x24 + r1) = r0; // stw @ 0x805E37E0
    *(0x1c + r1) = r31; // stw @ 0x805E37E4
    r31 = r4;
    r0 = *(0x46 + r5); // lhz @ 0x805E37EC
    if (!=) goto 0x0x805e3800;
    /* li r0, 0 */ // 0x805E37F8
    *(0xa + r4) = r0; // stb @ 0x805E37FC
    r3 = *(4 + r3); // lwz @ 0x805E3800
    /* lis r0, 0x4330 */ // 0x805E3804
    /* lis r4, 0 */ // 0x805E3808
    *(8 + r1) = r0; // stw @ 0x805E380C
    r5 = *(0x46 + r3); // lhz @ 0x805E3810
    /* lis r6, 0 */ // 0x805E3814
    *(0xc + r1) = r5; // stw @ 0x805E3818
    /* lis r3, 0 */ // 0x805E381C
    r5 = *(0 + r6); // lwz @ 0x805E3820
    /* lfd f1, 0(r4) */ // 0x805E3824
    /* lfd f0, 8(r1) */ // 0x805E3828
    /* lfs f2, 0x7c(r5) */ // 0x805E382C
    /* fsubs f1, f0, f1 */ // 0x805E3830
    /* lfs f0, 0(r3) */ // 0x805E3834
    /* fmuls f1, f1, f2 */ // 0x805E3838
    /* fadds f1, f0, f1 */ // 0x805E383C
    FUN_805E3430(); // bl 0x805E3430
}