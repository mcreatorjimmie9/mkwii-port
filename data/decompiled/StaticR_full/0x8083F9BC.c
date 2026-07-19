/* Function at 0x8083F9BC, size=496 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8083F9BC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x8083F9C4
    r5 = r5 + 0; // 0x8083F9CC
    *(0x1c + r1) = r31; // stw @ 0x8083F9D0
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8083F9D8
    *(0x14 + r1) = r29; // stw @ 0x8083F9DC
    r0 = *(0x1c + r3); // lwz @ 0x8083F9E0
    r4 = *(8 + r3); // lwz @ 0x8083F9E4
    r0 = r4 + 1; // 0x8083F9EC
    *(8 + r3) = r0; // stw @ 0x8083F9F0
    if (==) goto 0x0x8083fa1c;
    /* lfs f2, 0x10(r3) */ // 0x8083F9F8
    /* lfs f0, 0xc(r5) */ // 0x8083F9FC
    /* lfs f1, 0x10(r5) */ // 0x8083FA00
    /* fmuls f2, f2, f0 */ // 0x8083FA04
    /* lfs f0, 0x14(r3) */ // 0x8083FA08
    /* fadds f1, f2, f1 */ // 0x8083FA0C
    /* stfs f1, 0x10(r3) */ // 0x8083FA10
    /* fadds f0, f0, f1 */ // 0x8083FA14
    /* stfs f0, 0x14(r3) */ // 0x8083FA18
    r0 = *(4 + r3); // lwz @ 0x8083FA1C
    if (==) goto 0x0x8083fa34;
    if (==) goto 0x0x8083fb38;
    /* b 0x8083fb8c */ // 0x8083FA30
    /* lfs f1, 0x14(r3) */ // 0x8083FA34
    /* lfs f0, 0x14(r5) */ // 0x8083FA38
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8083FA3C
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8083FA40
    if (!=) goto 0x0x8083fa78;
    /* fsubs f0, f1, f0 */ // 0x8083FA48
    /* lis r6, 0 */ // 0x8083FA4C
    r4 = *(0x28 + r31); // lhz @ 0x8083FA50
    /* stfs f0, 0x14(r3) */ // 0x8083FA54
    r5 = *(0x2a + r31); // lbz @ 0x8083FA58
    r3 = *(0 + r6); // lwz @ 0x8083FA5C
    r6 = *(0x1c + r31); // lwz @ 0x8083FA60
    r7 = *(0x2b + r31); // lbz @ 0x8083FA64
    FUN_80840F10(); // bl 0x80840F10
    r0 = *(0x1c + r31); // lwz @ 0x8083FA6C
    *(0x18 + r31) = r0; // stw @ 0x8083FA70
    *(0x1c + r31) = r3; // stw @ 0x8083FA74
    r0 = *(0x2d + r31); // lbz @ 0x8083FA78
    if (==) goto 0x0x8083fae4;
    r4 = *(0 + r31); // lwz @ 0x8083FA84
    /* lis r30, 0 */ // 0x8083FA88
    r3 = *(0 + r30); // lwz @ 0x8083FA8C
    r29 = *(0x18 + r4); // lbz @ 0x8083FA90
    r4 = r29;
    FUN_806F2290(r4); // bl 0x806F2290
    if (!=) goto 0x0x8083fadc;
    /* li r0, 0 */ // 0x8083FAA4
    *(0x2d + r31) = r0; // stb @ 0x8083FAA8
    r4 = r29;
    r3 = *(0 + r30); // lwz @ 0x8083FAB0
    FUN_806F1F44(r4); // bl 0x806F1F44
    if (!=) goto 0x0x8083fadc;
    r0 = *(0x20 + r31); // lwz @ 0x8083FAC0
    if (==) goto 0x0x8083fad4;
    /* li r0, 4 */ // 0x8083FACC
    *(0x20 + r31) = r0; // stw @ 0x8083FAD0
    /* li r0, 1 */ // 0x8083FAD4
    *(0x2e + r31) = r0; // stb @ 0x8083FAD8
    /* li r3, 0 */ // 0x8083FADC
    /* b 0x8083fb90 */ // 0x8083FAE0
    r5 = *(8 + r31); // lwz @ 0x8083FAE4
    r0 = *(0xc + r31); // lwz @ 0x8083FAE8
    if (>) goto 0x0x8083fb2c;
    r3 = *(0 + r31); // lwz @ 0x8083FAF4
    /* li r4, 0 */ // 0x8083FAF8
    r0 = *(0xc + r3); // lhz @ 0x8083FAFC
    /* andi. r0, r0, 0x241 */ // 0x8083FB00
    if (!=) goto 0x0x8083fb24;
    if (<) goto 0x0x8083fb24;
    r0 = *(0x2c + r31); // lbz @ 0x8083FB14
    if (!=) goto 0x0x8083fb24;
    /* li r4, 1 */ // 0x8083FB20
    if (==) goto 0x0x8083fb8c;
    /* li r0, 2 */ // 0x8083FB2C
    *(4 + r31) = r0; // stw @ 0x8083FB30
    /* b 0x8083fb8c */ // 0x8083FB34
    /* lfs f1, 0x14(r3) */ // 0x8083FB38
    /* lfs f0, 0x14(r5) */ // 0x8083FB3C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8083FB40
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8083FB44
    if (!=) goto 0x0x8083fb8c;
    r4 = *(0x1c + r3); // lwz @ 0x8083FB4C
    r0 = *(0x20 + r3); // lwz @ 0x8083FB50
    if (==) goto 0x0x8083fb70;
    /* fsubs f0, f1, f0 */ // 0x8083FB5C
    *(0x18 + r3) = r4; // stw @ 0x8083FB60
    /* stfs f0, 0x14(r3) */ // 0x8083FB64
    *(0x1c + r3) = r0; // stw @ 0x8083FB68
    /* b 0x8083fb8c */ // 0x8083FB6C
    /* lfs f0, 0(r5) */ // 0x8083FB70
    /* li r0, 0x14 */ // 0x8083FB74
    /* stfs f0, 0x14(r3) */ // 0x8083FB78
    *(0x18 + r3) = r4; // stw @ 0x8083FB7C
    *(0x1c + r3) = r0; // stw @ 0x8083FB80
    /* li r3, 1 */ // 0x8083FB84
    /* b 0x8083fb90 */ // 0x8083FB88
    /* li r3, 0 */ // 0x8083FB8C
    r0 = *(0x24 + r1); // lwz @ 0x8083FB90
    r31 = *(0x1c + r1); // lwz @ 0x8083FB94
    r30 = *(0x18 + r1); // lwz @ 0x8083FB98
    r29 = *(0x14 + r1); // lwz @ 0x8083FB9C
    return;
}