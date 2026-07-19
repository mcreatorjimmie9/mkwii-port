/* Function at 0x80632DB8, size=360 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80632DB8(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x80632DC8
    r31 = r31 + 0; // 0x80632DCC
    *(0x28 + r1) = r30; // stw @ 0x80632DD0
    *(0x24 + r1) = r29; // stw @ 0x80632DD4
    r29 = r3;
    r12 = *(0 + r3); // lwz @ 0x80632DDC
    r12 = *(0x14 + r12); // lwz @ 0x80632DE0
    /* mtctr r12 */ // 0x80632DE4
    /* bctrl  */ // 0x80632DE8
    r0 = *(0x51 + r29); // lbz @ 0x80632DEC
    if (==) goto 0x0x80632ed0;
    r5 = *(0 + r3); // lwz @ 0x80632DF8
    r4 = *(6 + r5); // lhz @ 0x80632DFC
    if (==) goto 0x0x80632ed0;
    /* lfs f0, 0x24(r5) */ // 0x80632E08
    /* lfs f6, 0x28(r5) */ // 0x80632E0C
    /* fmr f5, f0 */ // 0x80632E10
    /* lfs f4, 4(r31) */ // 0x80632E14
    /* .byte 0xfc, 0x06, 0x00, 0x40 */ // 0x80632E18
    if (>=) goto 0x0x80632e2c;
    /* fmr f5, f6 */ // 0x80632E20
    /* lfs f4, 8(r31) */ // 0x80632E24
    /* fmr f6, f0 */ // 0x80632E28
    /* lis r0, 0x4330 */ // 0x80632E2C
    *(0x1c + r1) = r4; // stw @ 0x80632E30
    /* lfd f3, 0x18(r31) */ // 0x80632E34
    *(0x18 + r1) = r0; // stw @ 0x80632E38
    /* lfs f1, 0xc(r31) */ // 0x80632E3C
    /* lfd f2, 0x18(r1) */ // 0x80632E40
    /* lfs f0, 0x34(r29) */ // 0x80632E44
    /* fsubs f2, f2, f3 */ // 0x80632E48
    /* fmuls f2, f4, f2 */ // 0x80632E4C
    /* fmuls f1, f1, f2 */ // 0x80632E50
    /* fadds f0, f0, f1 */ // 0x80632E54
    /* stfs f0, 0x34(r29) */ // 0x80632E58
    /* .byte 0xfc, 0x05, 0x00, 0x40 */ // 0x80632E5C
    if (<=) goto 0x0x80632e6c;
    /* stfs f5, 0x34(r29) */ // 0x80632E64
    /* b 0x80632e78 */ // 0x80632E68
    /* .byte 0xfc, 0x06, 0x00, 0x40 */ // 0x80632E6C
    if (>=) goto 0x0x80632e78;
    /* stfs f6, 0x34(r29) */ // 0x80632E74
    r3 = *(4 + r29); // lwz @ 0x80632E78
    r0 = *(0x33e + r3); // lbz @ 0x80632E7C
    if (==) goto 0x0x80632f28;
    r30 = *(0x8c + r3); // lwz @ 0x80632E88
    /* lfs f2, 0x34(r29) */ // 0x80632E8C
    /* lfs f0, 0x10(r30) */ // 0x80632E90
    /* fcmpu cr0, f0, f2 */ // 0x80632E94
    if (==) goto 0x0x80632f28;
    /* lfs f1, 0x10(r31) */ // 0x80632E9C
    /* lfs f0, 0x14(r31) */ // 0x80632EA4
    /* fmuls f1, f2, f1 */ // 0x80632EAC
    /* stfs f2, 0x10(r30) */ // 0x80632EB0
    /* fmuls f1, f0, f1 */ // 0x80632EB4
    FUN_805E3430(r4); // bl 0x805E3430
    /* lfs f1, 0x10(r1) */ // 0x80632EBC
    /* lfs f0, 0x14(r1) */ // 0x80632EC0
    /* fdivs f0, f1, f0 */ // 0x80632EC4
    /* stfs f0, 0x14(r30) */ // 0x80632EC8
    /* b 0x80632f28 */ // 0x80632ECC
    r4 = *(4 + r29); // lwz @ 0x80632ED0
    r0 = *(0x33e + r4); // lbz @ 0x80632ED4
    if (==) goto 0x0x80632f28;
    r3 = *(0 + r3); // lwz @ 0x80632EE0
    r30 = *(0x8c + r4); // lwz @ 0x80632EE4
    /* lfs f2, 0x24(r3) */ // 0x80632EE8
    /* lfs f0, 0x10(r30) */ // 0x80632EEC
    /* fcmpu cr0, f0, f2 */ // 0x80632EF0
    if (==) goto 0x0x80632f28;
    /* lfs f1, 0x10(r31) */ // 0x80632EF8
    /* lfs f0, 0x14(r31) */ // 0x80632F00
    /* fmuls f1, f2, f1 */ // 0x80632F08
    /* stfs f2, 0x10(r30) */ // 0x80632F0C
    /* fmuls f1, f0, f1 */ // 0x80632F10
    FUN_805E3430(r4); // bl 0x805E3430
    /* lfs f1, 8(r1) */ // 0x80632F18
    /* lfs f0, 0xc(r1) */ // 0x80632F1C
}