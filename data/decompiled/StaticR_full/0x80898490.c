/* Function at 0x80898490, size=148 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80898490(int r3, int r4)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x80898498
    *(0x74 + r1) = r0; // stw @ 0x8089849C
    *(0x6c + r1) = r31; // stw @ 0x808984A0
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x808984A8
    r12 = *(0x12c + r12); // lwz @ 0x808984AC
    /* mtctr r12 */ // 0x808984B0
    /* bctrl  */ // 0x808984B4
    /* lfs f0, 0(r3) */ // 0x808984B8
    /* stfs f0, 0x38(r1) */ // 0x808984C0
    /* lfs f0, 4(r3) */ // 0x808984C4
    /* stfs f0, 0x3c(r1) */ // 0x808984C8
    /* lfs f0, 8(r3) */ // 0x808984CC
    /* stfs f0, 0x40(r1) */ // 0x808984D0
    /* lfs f0, 0xc(r3) */ // 0x808984D4
    /* stfs f0, 0x44(r1) */ // 0x808984D8
    /* lfs f0, 0x10(r3) */ // 0x808984DC
    /* stfs f0, 0x48(r1) */ // 0x808984E0
    /* lfs f0, 0x14(r3) */ // 0x808984E4
    /* stfs f0, 0x4c(r1) */ // 0x808984E8
    /* lfs f0, 0x18(r3) */ // 0x808984EC
    /* stfs f0, 0x50(r1) */ // 0x808984F0
    /* lfs f0, 0x1c(r3) */ // 0x808984F4
    /* stfs f0, 0x54(r1) */ // 0x808984F8
    /* lfs f0, 0x20(r3) */ // 0x808984FC
    /* stfs f0, 0x58(r1) */ // 0x80898500
    /* lfs f0, 0x24(r3) */ // 0x80898504
    /* stfs f0, 0x5c(r1) */ // 0x80898508
    /* lfs f0, 0x28(r3) */ // 0x8089850C
    /* stfs f0, 0x60(r1) */ // 0x80898510
    /* lfs f0, 0x2c(r3) */ // 0x80898514
    /* stfs f0, 0x64(r1) */ // 0x8089851C
    FUN_805E3430(r3); // bl 0x805E3430
}