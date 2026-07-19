/* Function at 0x807DCB90, size=448 bytes */
/* Stack frame: 32 bytes */

void FUN_807DCB90(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* lis r7, 0 */ // 0x807DCB98
    /* lfs f1, 0(r4) */ // 0x807DCB9C
    r7 = r7 + 0; // 0x807DCBA0
    *(0x24 + r1) = r0; // stw @ 0x807DCBA4
    /* lfs f0, 0x288(r7) */ // 0x807DCBA8
    /* lfs f5, 0xcc(r3) */ // 0x807DCBB0
    /* fsubs f3, f1, f0 */ // 0x807DCBB4
    /* lfs f2, 0xcc(r3) */ // 0x807DCBB8
    /* lfs f1, 4(r4) */ // 0x807DCBBC
    /* lfs f0, 0xd0(r3) */ // 0x807DCBC0
    /* stfs f5, 0xe0(r3) */ // 0x807DCBC4
    /* fsubs f2, f3, f2 */ // 0x807DCBC8
    /* fsubs f5, f1, f0 */ // 0x807DCBCC
    /* lfs f4, 0xd0(r3) */ // 0x807DCBD0
    /* stfs f4, 0xe4(r3) */ // 0x807DCBD4
    /* stfs f2, 0xd8(r3) */ // 0x807DCBD8
    /* stfs f5, 0xdc(r3) */ // 0x807DCBDC
    if (==) goto 0x0x807dccac;
    /* lfs f0, 0x270(r7) */ // 0x807DCBE4
    /* fcmpu cr0, f0, f2 */ // 0x807DCBE8
    if (!=) goto 0x0x807dcc54;
    /* fcmpu cr0, f0, f5 */ // 0x807DCBF0
    if (!=) goto 0x0x807dcc54;
    r4 = *(0x108 + r3); // lwz @ 0x807DCBF8
    /* lis r0, 0x4330 */ // 0x807DCBFC
    *(0x10 + r1) = r0; // stw @ 0x807DCC00
    /* xoris r4, r4, 0x8000 */ // 0x807DCC04
    /* lfd f4, 0x298(r7) */ // 0x807DCC08
    *(0x14 + r1) = r4; // stw @ 0x807DCC0C
    /* lfs f0, 0x278(r7) */ // 0x807DCC10
    /* lfd f1, 0x10(r1) */ // 0x807DCC14
    *(0xc + r1) = r4; // stw @ 0x807DCC18
    /* fsubs f1, f1, f4 */ // 0x807DCC1C
    /* lfs f2, 0x280(r7) */ // 0x807DCC20
    *(8 + r1) = r0; // stw @ 0x807DCC24
    /* fmuls f0, f1, f0 */ // 0x807DCC28
    /* lfd f3, 8(r1) */ // 0x807DCC2C
    /* fsubs f1, f3, f4 */ // 0x807DCC30
    /* fctiwz f0, f0 */ // 0x807DCC34
    /* stfd f0, 0x18(r1) */ // 0x807DCC38
    /* fmuls f1, f2, f1 */ // 0x807DCC3C
    r0 = *(0x1c + r1); // lwz @ 0x807DCC40
    /* fadds f0, f5, f1 */ // 0x807DCC44
    *(0x108 + r3) = r0; // stw @ 0x807DCC48
    /* stfs f0, 0xdc(r3) */ // 0x807DCC4C
    /* b 0x807dcce0 */ // 0x807DCC50
    /* lfs f0, 0x27c(r7) */ // 0x807DCC54
    /* lfs f1, 0xdc(r3) */ // 0x807DCC58
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x807DCC5C
    if (>=) goto 0x0x807dcc80;
    /* lfs f0, 0x270(r7) */ // 0x807DCC64
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807DCC68
    if (>=) goto 0x0x807dcc80;
    /* lfs f0, 0x280(r7) */ // 0x807DCC70
    /* fadds f0, f1, f0 */ // 0x807DCC74
    /* stfs f0, 0xdc(r3) */ // 0x807DCC78
    /* b 0x807dcce0 */ // 0x807DCC7C
    /* lfs f0, 0x270(r7) */ // 0x807DCC80
    /* lfs f1, 0xdc(r3) */ // 0x807DCC84
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x807DCC88
    if (>=) goto 0x0x807dcce0;
    /* lfs f0, 0x28c(r7) */ // 0x807DCC90
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807DCC94
    if (>=) goto 0x0x807dcce0;
    /* lfs f0, 0x290(r7) */ // 0x807DCC9C
    /* fadds f0, f1, f0 */ // 0x807DCCA0
    /* stfs f0, 0xdc(r3) */ // 0x807DCCA4
    /* b 0x807dcce0 */ // 0x807DCCA8
    /* lfs f0, 0x27c(r7) */ // 0x807DCCAC
    /* .byte 0xfc, 0x05, 0x00, 0x40 */ // 0x807DCCB0
    if (>=) goto 0x0x807dccc8;
    /* lfs f0, 0x280(r7) */ // 0x807DCCB8
    /* fadds f0, f5, f0 */ // 0x807DCCBC
    /* stfs f0, 0xdc(r3) */ // 0x807DCCC0
    /* b 0x807dcce0 */ // 0x807DCCC4
    /* lfs f0, 0x28c(r7) */ // 0x807DCCC8
    /* .byte 0xfc, 0x00, 0x28, 0x40 */ // 0x807DCCCC
    if (>=) goto 0x0x807dcce0;
    /* lfs f0, 0x290(r7) */ // 0x807DCCD4
    /* fadds f0, f5, f0 */ // 0x807DCCD8
    /* stfs f0, 0xdc(r3) */ // 0x807DCCDC
    r0 = *(0xf8 + r3); // lbz @ 0x807DCCE0
    if (==) goto 0x0x807dcd40;
    if (==) goto 0x0x807dcd40;
    /* lfs f1, 0xdc(r3) */ // 0x807DCCF4
    /* lfs f0, 0x294(r7) */ // 0x807DCCF8
    /* fabs f1, f1 */ // 0x807DCCFC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807DCD00
    if (>) goto 0x0x807dcd18;
    /* lfs f1, 0xd8(r3) */ // 0x807DCD08
    /* fabs f1, f1 */ // 0x807DCD0C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807DCD10
    if (<=) goto 0x0x807dcd40;
    /* lis r3, 0 */ // 0x807DCD18
    r3 = *(0 + r3); // lwz @ 0x807DCD1C
    if (==) goto 0x0x807dcd40;
    r12 = *(0 + r3); // lwz @ 0x807DCD28
    /* li r4, 0x49 */ // 0x807DCD2C
    /* li r5, 0 */ // 0x807DCD30
    r12 = *(0x20 + r12); // lwz @ 0x807DCD34
    /* mtctr r12 */ // 0x807DCD38
    /* bctrl  */ // 0x807DCD3C
    r0 = *(0x24 + r1); // lwz @ 0x807DCD40
    return;
}