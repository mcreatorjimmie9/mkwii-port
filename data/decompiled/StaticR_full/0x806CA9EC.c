/* Function at 0x806CA9EC, size=380 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806CA9EC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806CA9F4
    *(0x38 + r1) = r30; // stw @ 0x806CAA00
    *(0x34 + r1) = r29; // stw @ 0x806CAA04
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806CAA0C
    r3 = *(0 + r3); // lwz @ 0x806CAA10
    r31 = *(0x204 + r3); // lwz @ 0x806CAA14
    if (!=) goto 0x0x806caa28;
    /* li r31, 0 */ // 0x806CAA20
    /* b 0x806caa7c */ // 0x806CAA24
    /* lis r30, 0 */ // 0x806CAA28
    r30 = r30 + 0; // 0x806CAA2C
    if (==) goto 0x0x806caa78;
    r12 = *(0 + r31); // lwz @ 0x806CAA34
    r3 = r31;
    r12 = *(0x60 + r12); // lwz @ 0x806CAA3C
    /* mtctr r12 */ // 0x806CAA40
    /* bctrl  */ // 0x806CAA44
    /* b 0x806caa60 */ // 0x806CAA48
    if (!=) goto 0x0x806caa5c;
    /* li r0, 1 */ // 0x806CAA54
    /* b 0x806caa6c */ // 0x806CAA58
    r3 = *(0 + r3); // lwz @ 0x806CAA5C
    if (!=) goto 0x0x806caa4c;
    /* li r0, 0 */ // 0x806CAA68
    if (==) goto 0x0x806caa78;
    /* b 0x806caa7c */ // 0x806CAA74
    /* li r31, 0 */ // 0x806CAA78
    if (==) goto 0x0x806cab4c;
    r4 = *(0x17c + r29); // lwz @ 0x806CAA84
    r3 = r31 + 0x94; // 0x806CAA88
    r5 = *(0x178 + r29); // lwz @ 0x806CAA8C
    /* li r6, 0 */ // 0x806CAA90
    FUN_806CD160(r3, r6); // bl 0x806CD160
    r4 = *(0x17c + r29); // lwz @ 0x806CAA98
    r30 = r3;
    r5 = *(0x178 + r29); // lwz @ 0x806CAAA0
    r3 = r31 + 0x94; // 0x806CAAA4
    /* li r6, 2 */ // 0x806CAAA8
    FUN_806CD160(r3, r6); // bl 0x806CD160
    /* lis r4, 0 */ // 0x806CAAB0
    r31 = r3;
    r4 = r4 + 0; // 0x806CAAB8
    r3 = r29 + 0xa8; // 0x806CAABC
    r4 = r4 + 0x6e; // 0x806CAAC0
    FUN_80665D1C(r4, r4, r3, r4); // bl 0x80665D1C
    /* lis r5, 0 */ // 0x806CAAC8
    /* lfs f8, 0x184(r29) */ // 0x806CAACC
    /* lfs f1, 0(r5) */ // 0x806CAAD0
    /* lis r4, 0 */ // 0x806CAAD4
    /* lfs f0, 0(r31) */ // 0x806CAAD8
    /* fsubs f7, f1, f8 */ // 0x806CAADC
    /* lfs f2, 0(r30) */ // 0x806CAAE0
    /* lfs f1, 4(r30) */ // 0x806CAAE4
    /* fmuls f5, f0, f8 */ // 0x806CAAE8
    /* lfs f0, 4(r31) */ // 0x806CAAEC
    /* fmuls f6, f2, f7 */ // 0x806CAAF0
    /* fmuls f4, f1, f7 */ // 0x806CAAF4
    /* lfs f2, 8(r30) */ // 0x806CAAF8
    /* fmuls f3, f0, f8 */ // 0x806CAAFC
    /* lfs f1, 8(r31) */ // 0x806CAB00
    /* fadds f5, f6, f5 */ // 0x806CAB04
    /* lfs f0, 0(r4) */ // 0x806CAB08
    /* fadds f3, f4, f3 */ // 0x806CAB0C
    /* stfs f5, 0x2c(r3) */ // 0x806CAB10
    /* fmuls f2, f2, f7 */ // 0x806CAB14
    /* fmuls f1, f1, f8 */ // 0x806CAB18
    /* stfs f3, 0x30(r3) */ // 0x806CAB1C
    /* stfs f0, 0x34(r3) */ // 0x806CAB20
    /* fadds f1, f2, f1 */ // 0x806CAB24
    /* stfs f5, 0x10(r1) */ // 0x806CAB28
    /* stfs f1, 0x44(r3) */ // 0x806CAB2C
    /* stfs f3, 0x14(r1) */ // 0x806CAB30
    /* stfs f5, 0x18(r1) */ // 0x806CAB34
    /* stfs f3, 0x1c(r1) */ // 0x806CAB38
    /* stfs f0, 0x20(r1) */ // 0x806CAB3C
    /* stfs f1, 8(r1) */ // 0x806CAB40
    /* stfs f1, 0xc(r1) */ // 0x806CAB44
    /* stfs f1, 0x48(r3) */ // 0x806CAB48
    r0 = *(0x44 + r1); // lwz @ 0x806CAB4C
    r31 = *(0x3c + r1); // lwz @ 0x806CAB50
    r30 = *(0x38 + r1); // lwz @ 0x806CAB54
    r29 = *(0x34 + r1); // lwz @ 0x806CAB58
    return;
}