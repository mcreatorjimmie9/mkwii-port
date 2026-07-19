/* Function at 0x806BDE90, size=280 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_806BDE90(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    r0 = r5 + -1; // 0x806BDE9C
    /* lis r5, 0x4330 */ // 0x806BDEA0
    *(0x3c + r1) = r31; // stw @ 0x806BDEA4
    /* xoris r0, r0, 0x8000 */ // 0x806BDEA8
    /* lis r31, 0 */ // 0x806BDEAC
    r31 = r31 + 0; // 0x806BDEB0
    *(0x24 + r1) = r0; // stw @ 0x806BDEB4
    /* xoris r0, r4, 0x8000 */ // 0x806BDEB8
    /* lfd f5, 0x130(r31) */ // 0x806BDEBC
    *(0x20 + r1) = r5; // stw @ 0x806BDEC0
    /* li r4, 4 */ // 0x806BDEC4
    /* lfs f2, 0x128(r31) */ // 0x806BDEC8
    /* lfd f0, 0x20(r1) */ // 0x806BDECC
    *(0x2c + r1) = r0; // stw @ 0x806BDED0
    /* fsubs f4, f0, f5 */ // 0x806BDED4
    /* lfs f1, 0x124(r31) */ // 0x806BDED8
    *(0x28 + r1) = r5; // stw @ 0x806BDEDC
    /* lfs f0, 0(r31) */ // 0x806BDEE0
    /* lfd f3, 0x28(r1) */ // 0x806BDEE4
    /* fmuls f4, f2, f4 */ // 0x806BDEE8
    *(0x38 + r1) = r30; // stw @ 0x806BDEEC
    r30 = r3;
    /* fsubs f3, f3, f5 */ // 0x806BDEF4
    /* lfs f2, 0x12c(r31) */ // 0x806BDEF8
    r5 = *(0x194 + r3); // lwz @ 0x806BDEFC
    /* stfs f1, 0xc(r1) */ // 0x806BDF00
    /* fsubs f3, f3, f4 */ // 0x806BDF04
    /* stfs f1, 0x14(r1) */ // 0x806BDF08
    /* fmuls f2, f2, f3 */ // 0x806BDF0C
    /* stfs f0, 0x18(r1) */ // 0x806BDF10
    /* stfs f2, 0x198(r3) */ // 0x806BDF14
    r3 = r3 + 0x98; // 0x806BDF18
    /* stfs f2, 0x2c(r5) */ // 0x806BDF1C
    /* stfs f1, 0x30(r5) */ // 0x806BDF20
    /* stfs f2, 8(r1) */ // 0x806BDF24
    /* stfs f2, 0x10(r1) */ // 0x806BDF28
    /* stfs f0, 0x34(r5) */ // 0x806BDF2C
    FUN_8069F4A0(); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806BDF34
    /* li r4, 1 */ // 0x806BDF38
    FUN_8069F59C(r4); // bl 0x8069F59C
    /* lis r31, 0 */ // 0x806BDF40
    r3 = r30;
    r31 = r31 + 0; // 0x806BDF48
    r4 = r31 + 0x11b; // 0x806BDF4C
    r5 = r31 + 0x121; // 0x806BDF50
    FUN_806A0D70(r3, r4, r5); // bl 0x806A0D70
    r3 = r30;
    r4 = r31 + 0x12c; // 0x806BDF5C
    r5 = r31 + 0x13b; // 0x806BDF60
    FUN_806A0D70(r5, r3, r4, r5); // bl 0x806A0D70
    r3 = r30;
    r4 = r31 + 0x146; // 0x806BDF6C
    r5 = r31 + 0x155; // 0x806BDF70
    FUN_806A0D70(r5, r3, r4, r5); // bl 0x806A0D70
    /* li r0, 0 */ // 0x806BDF78
    *(0x19c + r30) = r0; // stb @ 0x806BDF7C
    r3 = r30;
    /* li r4, 0x3a */ // 0x806BDF84
    /* li r5, -1 */ // 0x806BDF88
    FUN_806A03CC(r3, r4, r5); // bl 0x806A03CC
    r0 = *(0x44 + r1); // lwz @ 0x806BDF90
    r31 = *(0x3c + r1); // lwz @ 0x806BDF94
    r30 = *(0x38 + r1); // lwz @ 0x806BDF98
    return;
}