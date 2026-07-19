/* Function at 0x806359F4, size=148 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806359F4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x38 + r1) = r30; // stw @ 0x80635A04
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x80635A0C
    r12 = *(0x14 + r12); // lwz @ 0x80635A10
    /* mtctr r12 */ // 0x80635A14
    /* bctrl  */ // 0x80635A18
    r6 = *(0 + r3); // lwz @ 0x80635A1C
    /* lfs f2, 0x34(r6) */ // 0x80635A28
    /* lfs f1, 0x30(r6) */ // 0x80635A2C
    /* lfs f0, 0x2c(r6) */ // 0x80635A30
    /* stfs f0, 8(r1) */ // 0x80635A34
    /* stfs f1, 0xc(r1) */ // 0x80635A38
    /* stfs f2, 0x10(r1) */ // 0x80635A3C
    r6 = *(0 + r3); // lwz @ 0x80635A40
    /* lfs f2, 0x40(r6) */ // 0x80635A48
    /* lfs f1, 0x3c(r6) */ // 0x80635A4C
    /* lfs f0, 0x38(r6) */ // 0x80635A50
    /* stfs f0, 0x14(r1) */ // 0x80635A54
    /* stfs f1, 0x18(r1) */ // 0x80635A58
    /* stfs f2, 0x1c(r1) */ // 0x80635A5C
    FUN_805A4498(); // bl 0x805A4498
    /* lfs f1, 0x20(r1) */ // 0x80635A64
    /* lfs f0, 0x24(r1) */ // 0x80635A68
    /* fmuls f1, f1, f1 */ // 0x80635A6C
    /* lfs f2, 0x28(r1) */ // 0x80635A70
    /* fmuls f0, f0, f0 */ // 0x80635A74
    /* fmuls f2, f2, f2 */ // 0x80635A78
    /* fadds f0, f1, f0 */ // 0x80635A7C
    /* fadds f1, f2, f0 */ // 0x80635A80
    FUN_805E3430(); // bl 0x805E3430
}