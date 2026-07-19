/* Function at 0x806355DC, size=144 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806355DC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    *(0x3c + r1) = r31; // stw @ 0x806355E8
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x806355F0
    r12 = *(0x14 + r12); // lwz @ 0x806355F4
    /* mtctr r12 */ // 0x806355F8
    /* bctrl  */ // 0x806355FC
    r6 = *(0 + r3); // lwz @ 0x80635600
    /* lfs f2, 0x34(r6) */ // 0x8063560C
    /* lfs f1, 0x30(r6) */ // 0x80635610
    /* lfs f0, 0x2c(r6) */ // 0x80635614
    /* stfs f0, 8(r1) */ // 0x80635618
    /* stfs f1, 0xc(r1) */ // 0x8063561C
    /* stfs f2, 0x10(r1) */ // 0x80635620
    r6 = *(0 + r3); // lwz @ 0x80635624
    /* lfs f2, 0x40(r6) */ // 0x8063562C
    /* lfs f1, 0x3c(r6) */ // 0x80635630
    /* lfs f0, 0x38(r6) */ // 0x80635634
    /* stfs f0, 0x14(r1) */ // 0x80635638
    /* stfs f1, 0x18(r1) */ // 0x8063563C
    /* stfs f2, 0x1c(r1) */ // 0x80635640
    FUN_805A4498(); // bl 0x805A4498
    /* lfs f1, 0x20(r1) */ // 0x80635648
    /* lfs f0, 0x24(r1) */ // 0x8063564C
    /* fmuls f1, f1, f1 */ // 0x80635650
    /* lfs f2, 0x28(r1) */ // 0x80635654
    /* fmuls f0, f0, f0 */ // 0x80635658
    /* fmuls f2, f2, f2 */ // 0x8063565C
    /* fadds f0, f1, f0 */ // 0x80635660
    /* fadds f1, f2, f0 */ // 0x80635664
    FUN_805E3430(); // bl 0x805E3430
}