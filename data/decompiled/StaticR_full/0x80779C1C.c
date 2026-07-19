/* Function at 0x80779C1C, size=316 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80779C1C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x80779C2C
    r31 = r31 + 0; // 0x80779C30
    *(8 + r1) = r30; // stw @ 0x80779C34
    r30 = r3;
    /* lfs f1, 0(r31) */ // 0x80779C3C
    r4 = *(8 + r3); // lwz @ 0x80779C40
    /* lfs f2, 0x38(r31) */ // 0x80779C44
    r3 = *(0x28 + r4); // lwz @ 0x80779C48
    /* li r4, 0 */ // 0x80779C4C
    FUN_805E70EC(r4); // bl 0x805E70EC
    r3 = *(8 + r30); // lwz @ 0x80779C54
    /* li r4, 1 */ // 0x80779C58
    /* lfs f1, 0(r31) */ // 0x80779C5C
    r3 = *(0x28 + r3); // lwz @ 0x80779C60
    /* lfs f2, 0x38(r31) */ // 0x80779C64
    FUN_805E70EC(r4); // bl 0x805E70EC
    /* li r0, 0 */ // 0x80779C6C
    *(0xb8 + r30) = r0; // stw @ 0x80779C70
    r3 = r30;
    /* li r4, 0 */ // 0x80779C78
    r12 = *(0 + r30); // lwz @ 0x80779C7C
    r12 = *(0x68 + r12); // lwz @ 0x80779C80
    /* mtctr r12 */ // 0x80779C84
    /* bctrl  */ // 0x80779C88
    r12 = *(0 + r30); // lwz @ 0x80779C8C
    r3 = r30;
    r12 = *(0x90 + r12); // lwz @ 0x80779C94
    /* mtctr r12 */ // 0x80779C98
    /* bctrl  */ // 0x80779C9C
    /* lfs f1, 0(r31) */ // 0x80779CA0
    /* lfs f0, 0xec(r30) */ // 0x80779CA4
    /* fcmpu cr0, f1, f0 */ // 0x80779CA8
    if (==) goto 0x0x80779cc8;
    r0 = *(0x2c + r30); // lhz @ 0x80779CB0
    /* stfs f0, 0x3c(r30) */ // 0x80779CB4
    r0 = r0 | 8; // 0x80779CB8
    *(0x2c + r30) = r0; // sth @ 0x80779CBC
    /* stfs f0, 0x40(r30) */ // 0x80779CC0
    /* stfs f0, 0x44(r30) */ // 0x80779CC4
    r0 = *(0x108 + r30); // lbz @ 0x80779CC8
    if (==) goto 0x0x80779cf4;
    r0 = *(0x2c + r30); // lhz @ 0x80779CD4
    /* lfs f1, 0x58(r31) */ // 0x80779CD8
    /* lfs f0, 0x48(r31) */ // 0x80779CDC
    r0 = r0 | 8; // 0x80779CE0
    *(0x2c + r30) = r0; // sth @ 0x80779CE4
    /* stfs f1, 0x3c(r30) */ // 0x80779CE8
    /* stfs f0, 0x40(r30) */ // 0x80779CEC
    /* stfs f1, 0x44(r30) */ // 0x80779CF0
    r12 = *(0 + r30); // lwz @ 0x80779CF4
    r3 = r30;
    /* lfs f1, 0x40(r30) */ // 0x80779CFC
    /* lfs f0, 0xdc(r30) */ // 0x80779D00
    r12 = *(0x88 + r12); // lwz @ 0x80779D04
    /* fmuls f1, f0, f1 */ // 0x80779D08
    /* lfs f2, 0(r31) */ // 0x80779D0C
    /* mtctr r12 */ // 0x80779D10
    /* bctrl  */ // 0x80779D14
    /* lfs f0, 0(r31) */ // 0x80779D18
    /* lis r5, 0 */ // 0x80779D1C
    /* stfs f0, 0x10c(r30) */ // 0x80779D20
    r3 = r30;
    /* lfs f1, 0xf8(r30) */ // 0x80779D28
    /* li r4, 0 */ // 0x80779D2C
    /* lfs f0, 0(r5) */ // 0x80779D30
    /* fdivs f0, f1, f0 */ // 0x80779D34
    /* stfs f0, 0x104(r30) */ // 0x80779D38
    FUN_808A0A44(r4); // bl 0x808A0A44
    r0 = *(0x14 + r1); // lwz @ 0x80779D40
    r31 = *(0xc + r1); // lwz @ 0x80779D44
    r30 = *(8 + r1); // lwz @ 0x80779D48
    return;
}