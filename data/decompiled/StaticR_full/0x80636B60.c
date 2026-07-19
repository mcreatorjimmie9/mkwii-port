/* Function at 0x80636B60, size=144 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80636B60(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    *(0x3c + r1) = r31; // stw @ 0x80636B6C
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x80636B74
    r12 = *(0x14 + r12); // lwz @ 0x80636B78
    /* mtctr r12 */ // 0x80636B7C
    /* bctrl  */ // 0x80636B80
    r6 = *(0 + r3); // lwz @ 0x80636B84
    /* lfs f2, 0x34(r6) */ // 0x80636B90
    /* lfs f1, 0x30(r6) */ // 0x80636B94
    /* lfs f0, 0x2c(r6) */ // 0x80636B98
    /* stfs f0, 8(r1) */ // 0x80636B9C
    /* stfs f1, 0xc(r1) */ // 0x80636BA0
    /* stfs f2, 0x10(r1) */ // 0x80636BA4
    r6 = *(0 + r3); // lwz @ 0x80636BA8
    /* lfs f2, 0x40(r6) */ // 0x80636BB0
    /* lfs f1, 0x3c(r6) */ // 0x80636BB4
    /* lfs f0, 0x38(r6) */ // 0x80636BB8
    /* stfs f0, 0x14(r1) */ // 0x80636BBC
    /* stfs f1, 0x18(r1) */ // 0x80636BC0
    /* stfs f2, 0x1c(r1) */ // 0x80636BC4
    FUN_805A4498(); // bl 0x805A4498
    /* lfs f1, 0x20(r1) */ // 0x80636BCC
    /* lfs f0, 0x24(r1) */ // 0x80636BD0
    /* fmuls f1, f1, f1 */ // 0x80636BD4
    /* lfs f2, 0x28(r1) */ // 0x80636BD8
    /* fmuls f0, f0, f0 */ // 0x80636BDC
    /* fmuls f2, f2, f2 */ // 0x80636BE0
    /* fadds f0, f1, f0 */ // 0x80636BE4
    /* fadds f1, f2, f0 */ // 0x80636BE8
    FUN_805E3430(); // bl 0x805E3430
}