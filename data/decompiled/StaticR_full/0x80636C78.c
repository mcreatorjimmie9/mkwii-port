/* Function at 0x80636C78, size=148 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80636C78(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x38 + r1) = r30; // stw @ 0x80636C88
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x80636C90
    r12 = *(0x14 + r12); // lwz @ 0x80636C94
    /* mtctr r12 */ // 0x80636C98
    /* bctrl  */ // 0x80636C9C
    r6 = *(0 + r3); // lwz @ 0x80636CA0
    /* lfs f2, 0x34(r6) */ // 0x80636CAC
    /* lfs f1, 0x30(r6) */ // 0x80636CB0
    /* lfs f0, 0x2c(r6) */ // 0x80636CB4
    /* stfs f0, 8(r1) */ // 0x80636CB8
    /* stfs f1, 0xc(r1) */ // 0x80636CBC
    /* stfs f2, 0x10(r1) */ // 0x80636CC0
    r6 = *(0 + r3); // lwz @ 0x80636CC4
    /* lfs f2, 0x40(r6) */ // 0x80636CCC
    /* lfs f1, 0x3c(r6) */ // 0x80636CD0
    /* lfs f0, 0x38(r6) */ // 0x80636CD4
    /* stfs f0, 0x14(r1) */ // 0x80636CD8
    /* stfs f1, 0x18(r1) */ // 0x80636CDC
    /* stfs f2, 0x1c(r1) */ // 0x80636CE0
    FUN_805A4498(); // bl 0x805A4498
    /* lfs f1, 0x20(r1) */ // 0x80636CE8
    /* lfs f0, 0x24(r1) */ // 0x80636CEC
    /* fmuls f1, f1, f1 */ // 0x80636CF0
    /* lfs f2, 0x28(r1) */ // 0x80636CF4
    /* fmuls f0, f0, f0 */ // 0x80636CF8
    /* fmuls f2, f2, f2 */ // 0x80636CFC
    /* fadds f0, f1, f0 */ // 0x80636D00
    /* fadds f1, f2, f0 */ // 0x80636D04
    FUN_805E3430(); // bl 0x805E3430
}