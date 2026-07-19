/* Function at 0x8089BE40, size=148 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8089BE40(int r3, int r4)
{
    /* Stack frame: -160(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8089BE48
    *(0xa4 + r1) = r0; // stw @ 0x8089BE4C
    *(0x9c + r1) = r31; // stw @ 0x8089BE50
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x8089BE58
    r12 = *(0x12c + r12); // lwz @ 0x8089BE5C
    /* mtctr r12 */ // 0x8089BE60
    /* bctrl  */ // 0x8089BE64
    /* lfs f0, 0(r3) */ // 0x8089BE68
    /* stfs f0, 0x68(r1) */ // 0x8089BE70
    /* lfs f0, 4(r3) */ // 0x8089BE74
    /* stfs f0, 0x6c(r1) */ // 0x8089BE78
    /* lfs f0, 8(r3) */ // 0x8089BE7C
    /* stfs f0, 0x70(r1) */ // 0x8089BE80
    /* lfs f0, 0xc(r3) */ // 0x8089BE84
    /* stfs f0, 0x74(r1) */ // 0x8089BE88
    /* lfs f0, 0x10(r3) */ // 0x8089BE8C
    /* stfs f0, 0x78(r1) */ // 0x8089BE90
    /* lfs f0, 0x14(r3) */ // 0x8089BE94
    /* stfs f0, 0x7c(r1) */ // 0x8089BE98
    /* lfs f0, 0x18(r3) */ // 0x8089BE9C
    /* stfs f0, 0x80(r1) */ // 0x8089BEA0
    /* lfs f0, 0x1c(r3) */ // 0x8089BEA4
    /* stfs f0, 0x84(r1) */ // 0x8089BEA8
    /* lfs f0, 0x20(r3) */ // 0x8089BEAC
    /* stfs f0, 0x88(r1) */ // 0x8089BEB0
    /* lfs f0, 0x24(r3) */ // 0x8089BEB4
    /* stfs f0, 0x8c(r1) */ // 0x8089BEB8
    /* lfs f0, 0x28(r3) */ // 0x8089BEBC
    /* stfs f0, 0x90(r1) */ // 0x8089BEC0
    /* lfs f0, 0x2c(r3) */ // 0x8089BEC4
    /* stfs f0, 0x94(r1) */ // 0x8089BECC
    FUN_805E3430(r3); // bl 0x805E3430
}