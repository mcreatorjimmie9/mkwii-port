/* Function at 0x8077FB1C, size=200 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8077FB1C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8077FB28
    r31 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x8077FB30
    r12 = *(0 + r3); // lwz @ 0x8077FB34
    r12 = *(0x14 + r12); // lwz @ 0x8077FB38
    /* mtctr r12 */ // 0x8077FB3C
    /* bctrl  */ // 0x8077FB40
    if (!=) goto 0x0x8077fb60;
    /* lfs f0, 0xec(r31) */ // 0x8077FB4C
    /* li r0, 0 */ // 0x8077FB50
    *(0xe8 + r31) = r0; // stw @ 0x8077FB54
    /* stfs f0, 0xf0(r31) */ // 0x8077FB58
    /* b 0x8077fb6c */ // 0x8077FB5C
    r3 = *(0xe8 + r31); // lwz @ 0x8077FB60
    r0 = r3 + 1; // 0x8077FB64
    *(0xe8 + r31) = r0; // stw @ 0x8077FB68
    r3 = r31;
    FUN_8077FD54(r3); // bl 0x8077FD54
    r3 = *(0xe4 + r31); // lwz @ 0x8077FB74
    /* lis r0, 0x4330 */ // 0x8077FB78
    *(8 + r1) = r0; // stw @ 0x8077FB7C
    /* lis r5, 0 */ // 0x8077FB80
    /* xoris r3, r3, 0x8000 */ // 0x8077FB84
    /* lis r4, 0 */ // 0x8077FB88
    *(0xc + r1) = r3; // stw @ 0x8077FB8C
    /* lis r3, 0 */ // 0x8077FB90
    /* lfd f1, 0(r5) */ // 0x8077FB94
    /* lfd f0, 8(r1) */ // 0x8077FB98
    r6 = *(0x20 + r31); // lwz @ 0x8077FB9C
    /* fsubs f3, f0, f1 */ // 0x8077FBA0
    /* lfs f2, 0(r4) */ // 0x8077FBA4
    r0 = *(0x2c + r31); // lhz @ 0x8077FBA8
    /* lfs f1, 0xe0(r31) */ // 0x8077FBAC
    /* fmuls f2, f2, f3 */ // 0x8077FBB0
    /* lfs f0, 0(r3) */ // 0x8077FBB4
    /* lfs f4, 0x20(r6) */ // 0x8077FBB8
    r0 = r0 | 1; // 0x8077FBBC
    /* lfs f3, 0x1c(r6) */ // 0x8077FBC0
    /* fdivs f1, f2, f1 */ // 0x8077FBC4
    /* lfs f2, 0x18(r6) */ // 0x8077FBC8
    /* stfs f2, 0x30(r31) */ // 0x8077FBCC
    *(0x2c + r31) = r0; // sth @ 0x8077FBD0
    /* stfs f3, 0x34(r31) */ // 0x8077FBD4
    /* stfs f4, 0x38(r31) */ // 0x8077FBD8
    /* fmuls f1, f0, f1 */ // 0x8077FBDC
    FUN_805E3430(); // bl 0x805E3430
}