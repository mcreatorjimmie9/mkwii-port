/* Function at 0x806339B0, size=144 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806339B0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    *(0x3c + r1) = r31; // stw @ 0x806339BC
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x806339C4
    r12 = *(0x14 + r12); // lwz @ 0x806339C8
    /* mtctr r12 */ // 0x806339CC
    /* bctrl  */ // 0x806339D0
    r6 = *(0 + r3); // lwz @ 0x806339D4
    /* lfs f0, 0x34(r6) */ // 0x806339E0
    /* lfs f1, 0x30(r6) */ // 0x806339E4
    /* lfs f2, 0x2c(r6) */ // 0x806339E8
    /* stfs f2, 0x20(r1) */ // 0x806339EC
    /* stfs f1, 0x24(r1) */ // 0x806339F0
    /* stfs f0, 0x28(r1) */ // 0x806339F4
    r6 = *(0 + r3); // lwz @ 0x806339F8
    /* lfs f0, 0x40(r6) */ // 0x80633A00
    /* lfs f1, 0x3c(r6) */ // 0x80633A04
    /* lfs f2, 0x38(r6) */ // 0x80633A08
    /* stfs f2, 0x14(r1) */ // 0x80633A0C
    /* stfs f1, 0x18(r1) */ // 0x80633A10
    /* stfs f0, 0x1c(r1) */ // 0x80633A14
    FUN_805A4498(); // bl 0x805A4498
    /* lfs f1, 8(r1) */ // 0x80633A1C
    /* lfs f0, 0xc(r1) */ // 0x80633A20
    /* fmuls f1, f1, f1 */ // 0x80633A24
    /* lfs f2, 0x10(r1) */ // 0x80633A28
    /* fmuls f0, f0, f0 */ // 0x80633A2C
    /* fmuls f2, f2, f2 */ // 0x80633A30
    /* fadds f0, f1, f0 */ // 0x80633A34
    /* fadds f1, f2, f0 */ // 0x80633A38
    FUN_805E3430(); // bl 0x805E3430
}