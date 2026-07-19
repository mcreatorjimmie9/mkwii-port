/* Function at 0x807F993C, size=556 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_807F993C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x807F9950
    *(0x14 + r1) = r29; // stw @ 0x807F9954
    r0 = *(0xc4 + r3); // lwz @ 0x807F9958
    if (!=) goto 0x0x807f99f4;
    r3 = *(0x20 + r3); // lwz @ 0x807F9964
    r12 = *(0 + r3); // lwz @ 0x807F9968
    r12 = *(0x14 + r12); // lwz @ 0x807F996C
    /* mtctr r12 */ // 0x807F9970
    /* bctrl  */ // 0x807F9974
    if (!=) goto 0x0x807f99a4;
    /* li r0, 1 */ // 0x807F9980
    *(0xc4 + r31) = r0; // stw @ 0x807F9984
    r3 = *(0x20 + r31); // lwz @ 0x807F9988
    r0 = *(0x46 + r3); // lha @ 0x807F998C
    r3 = *(8 + r3); // lwz @ 0x807F9990
    /* slwi r0, r0, 4 */ // 0x807F9994
    r3 = r3 + r0; // 0x807F9998
    r0 = *(0xc + r3); // lhz @ 0x807F999C
    *(0xc8 + r31) = r0; // stw @ 0x807F99A0
    r5 = *(0x20 + r31); // lwz @ 0x807F99A4
    /* lis r4, 0 */ // 0x807F99A8
    /* lfs f1, 0xd0(r31) */ // 0x807F99AC
    r3 = r31;
    /* lfs f0, 0(r4) */ // 0x807F99B4
    r0 = *(0x2c + r31); // lhz @ 0x807F99B8
    /* lfs f2, 0x18(r5) */ // 0x807F99BC
    /* fsubs f0, f1, f0 */ // 0x807F99C0
    r0 = r0 | 1; // 0x807F99C4
    /* lfs f1, 0x34(r31) */ // 0x807F99C8
    *(0x2c + r31) = r0; // sth @ 0x807F99CC
    /* fadds f1, f0, f1 */ // 0x807F99D0
    /* stfs f2, 0x30(r31) */ // 0x807F99D4
    /* lfs f2, 0x20(r5) */ // 0x807F99D8
    /* stfs f2, 0x38(r31) */ // 0x807F99DC
    /* stfs f0, 0xd0(r31) */ // 0x807F99E0
    *(0x2c + r31) = r0; // sth @ 0x807F99E4
    /* stfs f1, 0x34(r31) */ // 0x807F99E8
    FUN_807F9E88(); // bl 0x807F9E88
    /* b 0x807f9a0c */ // 0x807F99F0
    r0 = *(0xc8 + r3); // lwz @ 0x807F99F4
    /* addic. r0, r0, -1 */ // 0x807F99F8
    *(0xc8 + r3) = r0; // stw @ 0x807F99FC
    if (!=) goto 0x0x807f9a0c;
    /* li r0, 0 */ // 0x807F9A04
    *(0xc4 + r3) = r0; // stw @ 0x807F9A08
    r3 = r31;
    FUN_807F9CA4(r3); // bl 0x807F9CA4
    /* lis r3, 0 */ // 0x807F9A14
    r3 = *(0 + r3); // lwz @ 0x807F9A18
    r0 = *(0x25 + r3); // lbz @ 0x807F9A1C
    if (!=) goto 0x0x807f9b48;
    r12 = *(0 + r31); // lwz @ 0x807F9A28
    r3 = r31;
    /* li r30, 0 */ // 0x807F9A30
    r12 = *(0x30 + r12); // lwz @ 0x807F9A34
    /* mtctr r12 */ // 0x807F9A38
    /* bctrl  */ // 0x807F9A3C
    /* lis r4, 0x101 */ // 0x807F9A40
    r0 = *(0x20 + r3); // lwz @ 0x807F9A44
    r3 = r4 + 0x101; // 0x807F9A48
    /* andc. r0, r3, r0 */ // 0x807F9A4C
    if (!=) goto 0x0x807f9a6c;
    /* lis r3, 0 */ // 0x807F9A54
    r3 = *(0 + r3); // lwz @ 0x807F9A58
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x807f9a6c;
    /* li r30, 1 */ // 0x807F9A68
    r4 = *(0xc0 + r31); // lwz @ 0x807F9A6C
    /* li r3, 1 */ // 0x807F9A70
    if (==) goto 0x0x807f9a88;
    if (==) goto 0x0x807f9a88;
    /* li r3, 0 */ // 0x807F9A84
    r0 = r4 + -1; // 0x807F9A88
    /* cntlzw r0, r0 */ // 0x807F9A90
    /* srwi r29, r0, 5 */ // 0x807F9A94
    if (==) goto 0x0x807f9ab8;
    if (!=) goto 0x0x807f9ab8;
    r3 = *(0x100 + r31); // lwz @ 0x807F9AA4
    r12 = *(0 + r3); // lwz @ 0x807F9AA8
    r12 = *(0xc + r12); // lwz @ 0x807F9AAC
    /* mtctr r12 */ // 0x807F9AB0
    /* bctrl  */ // 0x807F9AB4
    if (!=) goto 0x0x807f9ac8;
    if (==) goto 0x0x807f9adc;
    r3 = *(0x100 + r31); // lwz @ 0x807F9AC8
    r12 = *(0 + r3); // lwz @ 0x807F9ACC
    r12 = *(0x10 + r12); // lwz @ 0x807F9AD0
    /* mtctr r12 */ // 0x807F9AD4
    /* bctrl  */ // 0x807F9AD8
    r3 = *(0x100 + r31); // lwz @ 0x807F9ADC
    r3 = r3 + 0x74; // 0x807F9AE0
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x807f9af8;
    /* li r3, 0 */ // 0x807F9AF0
    /* b 0x807f9afc */ // 0x807F9AF4
    r3 = *(0xc + r3); // lwz @ 0x807F9AF8
    /* li r0, 0 */ // 0x807F9B00
    if (==) goto 0x0x807f9b10;
    if (!=) goto 0x0x807f9b14;
    /* li r0, 1 */ // 0x807F9B10
    if (==) goto 0x0x807f9b48;
    r3 = *(0x100 + r31); // lwz @ 0x807F9B1C
    r4 = r31 + 0x30; // 0x807F9B20
    r12 = *(0 + r3); // lwz @ 0x807F9B24
    r12 = *(0x74 + r12); // lwz @ 0x807F9B28
    /* mtctr r12 */ // 0x807F9B2C
    /* bctrl  */ // 0x807F9B30
    r3 = *(0x100 + r31); // lwz @ 0x807F9B34
    r12 = *(0 + r3); // lwz @ 0x807F9B38
    r12 = *(0x80 + r12); // lwz @ 0x807F9B3C
    /* mtctr r12 */ // 0x807F9B40
    /* bctrl  */ // 0x807F9B44
    r3 = *(0xb0 + r31); // lwz @ 0x807F9B48
    r12 = *(0 + r3); // lwz @ 0x807F9B4C
    r12 = *(0x14 + r12); // lwz @ 0x807F9B50
    /* mtctr r12 */ // 0x807F9B54
    /* bctrl  */ // 0x807F9B58
    r3 = *(0xb0 + r31); // lwz @ 0x807F9B5C
    r12 = *(0 + r3); // lwz @ 0x807F9B60
    r12 = *(0x1c + r12); // lwz @ 0x807F9B64
}