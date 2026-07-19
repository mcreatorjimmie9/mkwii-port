/* Function at 0x806A0780, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806A0780(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806A078C
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x806A0794
    r12 = *(0x1c + r12); // lwz @ 0x806A0798
    /* mtctr r12 */ // 0x806A079C
    /* bctrl  */ // 0x806A07A0
    r3 = r31 + 0x68; // 0x806A07A4
    FUN_8064DFE4(r3); // bl 0x8064DFE4
    r3 = r31 + 0x98; // 0x806A07AC
    FUN_8069F43C(r3, r3); // bl 0x8069F43C
    r3 = *(0xbc + r31); // lwz @ 0x806A07B4
    /* lfs f0, 0x4c(r31) */ // 0x806A07B8
    /* stfs f0, 0x2c(r3) */ // 0x806A07BC
    /* lfs f0, 0x50(r31) */ // 0x806A07C0
    /* stfs f0, 0x30(r3) */ // 0x806A07C4
    /* lfs f0, 0x54(r31) */ // 0x806A07C8
    /* stfs f0, 0x34(r3) */ // 0x806A07CC
    r3 = *(0xbc + r31); // lwz @ 0x806A07D0
    /* lfs f0, 0x58(r31) */ // 0x806A07D4
    /* stfs f0, 0x44(r3) */ // 0x806A07D8
    /* lfs f0, 0x5c(r31) */ // 0x806A07DC
    /* stfs f0, 0x48(r3) */ // 0x806A07E0
    r3 = *(0xbc + r31); // lwz @ 0x806A07E4
    r0 = *(0x60 + r31); // lbz @ 0x806A07E8
    *(0xb8 + r3) = r0; // stb @ 0x806A07EC
    r31 = *(0xc + r1); // lwz @ 0x806A07F0
    r0 = *(0x14 + r1); // lwz @ 0x806A07F4
    return;
}