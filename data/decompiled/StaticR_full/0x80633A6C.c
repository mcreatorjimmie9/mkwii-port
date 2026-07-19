/* Function at 0x80633A6C, size=300 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80633A6C(int r3, int r4, int r5)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x58 + r1) = r30; // stw @ 0x80633A80
    r12 = *(0 + r3); // lwz @ 0x80633A84
    r12 = *(0x14 + r12); // lwz @ 0x80633A88
    /* mtctr r12 */ // 0x80633A8C
    /* bctrl  */ // 0x80633A90
    r5 = *(0 + r3); // lwz @ 0x80633A94
    r30 = r3;
    r0 = *(8 + r5); // lhz @ 0x80633A9C
    if (==) goto 0x0x80633c3c;
    /* lfs f2, 0x34(r5) */ // 0x80633AA8
    /* lis r3, 0 */ // 0x80633AAC
    /* lfs f3, 0x30(r5) */ // 0x80633AB0
    /* lfs f4, 0x2c(r5) */ // 0x80633AB4
    /* stfs f4, 0x38(r1) */ // 0x80633AB8
    /* lfs f1, 0x44(r31) */ // 0x80633ABC
    /* lfs f0, 0(r3) */ // 0x80633AC0
    /* stfs f3, 0x3c(r1) */ // 0x80633AC4
    r4 = *(0x38 + r1); // lwz @ 0x80633AC8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80633ACC
    /* stfs f2, 0x40(r1) */ // 0x80633AD0
    r3 = *(0x3c + r1); // lwz @ 0x80633AD4
    r0 = *(0x40 + r1); // lwz @ 0x80633AD8
    *(0x2c + r1) = r4; // stw @ 0x80633ADC
    *(0x30 + r1) = r3; // stw @ 0x80633AE0
    *(0x34 + r1) = r0; // stw @ 0x80633AE4
    if (<=) goto 0x0x80633bf8;
    /* lfs f5, 0x40(r5) */ // 0x80633AEC
    /* lfs f6, 0x3c(r5) */ // 0x80633AF4
    /* lfs f7, 0x38(r5) */ // 0x80633AF8
    /* fsubs f0, f5, f2 */ // 0x80633AFC
    /* fsubs f1, f6, f3 */ // 0x80633B00
    /* stfs f7, 0x20(r1) */ // 0x80633B04
    /* fsubs f2, f7, f4 */ // 0x80633B08
    /* stfs f1, 0x18(r1) */ // 0x80633B0C
    /* stfs f2, 0x14(r1) */ // 0x80633B10
    r4 = *(0x18 + r1); // lwz @ 0x80633B14
    /* stfs f0, 0x1c(r1) */ // 0x80633B18
    r5 = *(0x14 + r1); // lwz @ 0x80633B1C
    r0 = *(0x1c + r1); // lwz @ 0x80633B20
    /* stfs f6, 0x24(r1) */ // 0x80633B24
    /* stfs f5, 0x28(r1) */ // 0x80633B28
    *(8 + r1) = r5; // stw @ 0x80633B2C
    *(0xc + r1) = r4; // stw @ 0x80633B30
    *(0x10 + r1) = r0; // stw @ 0x80633B34
    FUN_805E3430(); // bl 0x805E3430
    r5 = *(0 + r30); // lwz @ 0x80633B3C
    /* lis r0, 0x4330 */ // 0x80633B40
    /* lis r4, 0 */ // 0x80633B44
    /* lis r3, 0 */ // 0x80633B48
    r5 = *(8 + r5); // lhz @ 0x80633B4C
    *(0x4c + r1) = r5; // stw @ 0x80633B50
    /* lfd f1, 0(r4) */ // 0x80633B54
    *(0x48 + r1) = r0; // stw @ 0x80633B58
    /* lfs f4, 0(r3) */ // 0x80633B5C
    /* lfd f0, 0x48(r1) */ // 0x80633B60
    /* lfs f3, 8(r1) */ // 0x80633B64
    /* fsubs f5, f0, f1 */ // 0x80633B68
    /* lfs f1, 0x38(r31) */ // 0x80633B6C
    /* lfs f0, 0x3c(r31) */ // 0x80633B70
    /* lfs f2, 0x40(r31) */ // 0x80633B74
    /* fmuls f4, f4, f5 */ // 0x80633B78
    /* fmuls f3, f4, f3 */ // 0x80633B7C
    /* fadds f1, f1, f3 */ // 0x80633B80
    /* stfs f1, 0x38(r31) */ // 0x80633B84
    /* fmuls f1, f1, f1 */ // 0x80633B88
    /* lfs f3, 0xc(r1) */ // 0x80633B8C
    /* fmuls f3, f4, f3 */ // 0x80633B90
    /* fadds f0, f0, f3 */ // 0x80633B94
}