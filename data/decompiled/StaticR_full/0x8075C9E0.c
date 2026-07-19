/* Function at 0x8075C9E0, size=888 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8075C9E0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8075C9F4
    r31 = r31 + 0; // 0x8075C9F8
    *(0x18 + r1) = r30; // stw @ 0x8075C9FC
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x8075CA04
    r29 = r3;
    if (==) goto 0x0x8075ca2c;
    if (==) goto 0x0x8075caf0;
    if (==) goto 0x0x8075cbb4;
    if (==) goto 0x0x8075cc78;
    /* b 0x8075cd38 */ // 0x8075CA28
    r0 = *(0x1bd + r3); // lbz @ 0x8075CA2C
    if (!=) goto 0x0x8075cd38;
    if (==) goto 0x0x8075ca54;
    r0 = *(4 + r4); // lwz @ 0x8075CA40
    if (!=) goto 0x0x8075ca54;
    /* li r0, 1 */ // 0x8075CA4C
    *(0x218 + r3) = r0; // stb @ 0x8075CA50
    r0 = *(0x154 + r3); // lwz @ 0x8075CA54
    if (!=) goto 0x0x8075ca6c;
    r3 = r29;
    FUN_8075D1B8(r3); // bl 0x8075D1B8
    /* b 0x8075cd38 */ // 0x8075CA68
    /* li r0, 0 */ // 0x8075CA6C
    /* li r4, 1 */ // 0x8075CA70
    *(0x1bd + r3) = r4; // stb @ 0x8075CA74
    *(0x220 + r3) = r0; // stb @ 0x8075CA78
    *(0x221 + r3) = r0; // stb @ 0x8075CA7C
    *(0x1c0 + r3) = r0; // stw @ 0x8075CA80
    r3 = r29;
    r12 = *(0 + r29); // lwz @ 0x8075CA88
    r12 = *(0x90 + r12); // lwz @ 0x8075CA8C
    /* mtctr r12 */ // 0x8075CA90
    /* bctrl  */ // 0x8075CA94
    /* lfs f0, 0x14(r31) */ // 0x8075CA98
    /* lis r4, 0 */ // 0x8075CA9C
    /* stfs f0, 0x200(r29) */ // 0x8075CAA0
    /* lis r3, 0 */ // 0x8075CAA4
    /* lfs f1, 0x74(r31) */ // 0x8075CAA8
    /* lfs f0, 0(r4) */ // 0x8075CAAC
    /* lfs f3, 0(r3) */ // 0x8075CAB0
    /* fmuls f4, f1, f0 */ // 0x8075CAB4
    /* lfs f0, 0x180(r29) */ // 0x8075CAB8
    /* lfs f2, 0x178(r29) */ // 0x8075CABC
    /* lfs f1, 0x17c(r29) */ // 0x8075CAC0
    /* fdivs f4, f4, f3 */ // 0x8075CAC4
    /* lfs f5, 0x34(r29) */ // 0x8075CAC8
    /* lfs f3, 0x78(r31) */ // 0x8075CACC
    /* stfs f0, 0x214(r29) */ // 0x8075CAD0
    /* stfs f2, 0x20c(r29) */ // 0x8075CAD4
    /* stfs f1, 0x210(r29) */ // 0x8075CAD8
    /* fdivs f0, f3, f4 */ // 0x8075CADC
    /* stfs f4, 0x208(r29) */ // 0x8075CAE0
    /* stfs f5, 0x1c4(r29) */ // 0x8075CAE4
    /* stfs f0, 0x204(r29) */ // 0x8075CAE8
    /* b 0x8075cd38 */ // 0x8075CAEC
    r0 = *(0x1bd + r3); // lbz @ 0x8075CAF0
    if (!=) goto 0x0x8075cd38;
    if (==) goto 0x0x8075cb18;
    r0 = *(4 + r4); // lwz @ 0x8075CB04
    if (!=) goto 0x0x8075cb18;
    /* li r0, 1 */ // 0x8075CB10
    *(0x218 + r3) = r0; // stb @ 0x8075CB14
    r0 = *(0x154 + r3); // lwz @ 0x8075CB18
    if (!=) goto 0x0x8075cb30;
    r3 = r29;
    FUN_8075D1B8(r3); // bl 0x8075D1B8
    /* b 0x8075cd38 */ // 0x8075CB2C
    /* li r0, 0 */ // 0x8075CB30
    /* li r4, 1 */ // 0x8075CB34
    *(0x1bd + r3) = r4; // stb @ 0x8075CB38
    *(0x220 + r3) = r0; // stb @ 0x8075CB3C
    *(0x221 + r3) = r0; // stb @ 0x8075CB40
    *(0x1c0 + r3) = r0; // stw @ 0x8075CB44
    r3 = r29;
    r12 = *(0 + r29); // lwz @ 0x8075CB4C
    r12 = *(0x90 + r12); // lwz @ 0x8075CB50
    /* mtctr r12 */ // 0x8075CB54
    /* bctrl  */ // 0x8075CB58
    /* lfs f0, 0x14(r31) */ // 0x8075CB5C
    /* lis r4, 0 */ // 0x8075CB60
    /* stfs f0, 0x200(r29) */ // 0x8075CB64
    /* lis r3, 0 */ // 0x8075CB68
    /* lfs f1, 0x74(r31) */ // 0x8075CB6C
    /* lfs f0, 0(r4) */ // 0x8075CB70
    /* lfs f3, 0(r3) */ // 0x8075CB74
    /* fmuls f4, f1, f0 */ // 0x8075CB78
    /* lfs f0, 0x180(r29) */ // 0x8075CB7C
    /* lfs f2, 0x178(r29) */ // 0x8075CB80
    /* lfs f1, 0x17c(r29) */ // 0x8075CB84
    /* fdivs f4, f4, f3 */ // 0x8075CB88
    /* lfs f5, 0x34(r29) */ // 0x8075CB8C
    /* lfs f3, 0x78(r31) */ // 0x8075CB90
    /* stfs f0, 0x214(r29) */ // 0x8075CB94
    /* stfs f2, 0x20c(r29) */ // 0x8075CB98
    /* stfs f1, 0x210(r29) */ // 0x8075CB9C
    /* fdivs f0, f3, f4 */ // 0x8075CBA0
    /* stfs f4, 0x208(r29) */ // 0x8075CBA4
    /* stfs f5, 0x1c4(r29) */ // 0x8075CBA8
    /* stfs f0, 0x204(r29) */ // 0x8075CBAC
    /* b 0x8075cd38 */ // 0x8075CBB0
    r0 = *(0x1bd + r3); // lbz @ 0x8075CBB4
    if (!=) goto 0x0x8075cd38;
    if (==) goto 0x0x8075cbdc;
    r0 = *(4 + r4); // lwz @ 0x8075CBC8
    if (!=) goto 0x0x8075cbdc;
    /* li r0, 1 */ // 0x8075CBD4
    *(0x218 + r3) = r0; // stb @ 0x8075CBD8
    r0 = *(0x154 + r3); // lwz @ 0x8075CBDC
    if (!=) goto 0x0x8075cbf4;
    r3 = r29;
    FUN_8075D1B8(r3); // bl 0x8075D1B8
    /* b 0x8075cd38 */ // 0x8075CBF0
    /* li r0, 0 */ // 0x8075CBF4
    /* li r4, 1 */ // 0x8075CBF8
    *(0x1bd + r3) = r4; // stb @ 0x8075CBFC
    *(0x220 + r3) = r0; // stb @ 0x8075CC00
    *(0x221 + r3) = r0; // stb @ 0x8075CC04
    *(0x1c0 + r3) = r0; // stw @ 0x8075CC08
    r3 = r29;
    r12 = *(0 + r29); // lwz @ 0x8075CC10
    r12 = *(0x90 + r12); // lwz @ 0x8075CC14
    /* mtctr r12 */ // 0x8075CC18
    /* bctrl  */ // 0x8075CC1C
    /* lfs f0, 0x14(r31) */ // 0x8075CC20
    /* lis r4, 0 */ // 0x8075CC24
    /* stfs f0, 0x200(r29) */ // 0x8075CC28
    /* lis r3, 0 */ // 0x8075CC2C
    /* lfs f1, 0x74(r31) */ // 0x8075CC30
    /* lfs f0, 0(r4) */ // 0x8075CC34
    /* lfs f3, 0(r3) */ // 0x8075CC38
    /* fmuls f4, f1, f0 */ // 0x8075CC3C
    /* lfs f0, 0x180(r29) */ // 0x8075CC40
    /* lfs f2, 0x178(r29) */ // 0x8075CC44
    /* lfs f1, 0x17c(r29) */ // 0x8075CC48
    /* fdivs f4, f4, f3 */ // 0x8075CC4C
    /* lfs f5, 0x34(r29) */ // 0x8075CC50
    /* lfs f3, 0x78(r31) */ // 0x8075CC54
    /* stfs f0, 0x214(r29) */ // 0x8075CC58
    /* stfs f2, 0x20c(r29) */ // 0x8075CC5C
    /* stfs f1, 0x210(r29) */ // 0x8075CC60
    /* fdivs f0, f3, f4 */ // 0x8075CC64
    /* stfs f4, 0x208(r29) */ // 0x8075CC68
    /* stfs f5, 0x1c4(r29) */ // 0x8075CC6C
    /* stfs f0, 0x204(r29) */ // 0x8075CC70
    /* b 0x8075cd38 */ // 0x8075CC74
    r0 = *(0x1bd + r3); // lbz @ 0x8075CC78
    if (!=) goto 0x0x8075cd38;
    if (==) goto 0x0x8075cca0;
    r0 = *(4 + r4); // lwz @ 0x8075CC8C
    if (!=) goto 0x0x8075cca0;
    /* li r0, 1 */ // 0x8075CC98
    *(0x218 + r3) = r0; // stb @ 0x8075CC9C
    r0 = *(0x154 + r3); // lwz @ 0x8075CCA0
    if (!=) goto 0x0x8075ccb8;
    r3 = r29;
    FUN_8075D1B8(r3); // bl 0x8075D1B8
    /* b 0x8075cd38 */ // 0x8075CCB4
    /* li r0, 0 */ // 0x8075CCB8
    /* li r4, 1 */ // 0x8075CCBC
    *(0x1bd + r3) = r4; // stb @ 0x8075CCC0
    *(0x220 + r3) = r0; // stb @ 0x8075CCC4
    *(0x221 + r3) = r0; // stb @ 0x8075CCC8
    *(0x1c0 + r3) = r0; // stw @ 0x8075CCCC
    r3 = r29;
    r12 = *(0 + r29); // lwz @ 0x8075CCD4
    r12 = *(0x90 + r12); // lwz @ 0x8075CCD8
    /* mtctr r12 */ // 0x8075CCDC
    /* bctrl  */ // 0x8075CCE0
    /* lfs f0, 0x14(r31) */ // 0x8075CCE4
    /* lis r4, 0 */ // 0x8075CCE8
    /* stfs f0, 0x200(r29) */ // 0x8075CCEC
    /* lis r3, 0 */ // 0x8075CCF0
    /* lfs f1, 0x74(r31) */ // 0x8075CCF4
    /* lfs f0, 0(r4) */ // 0x8075CCF8
    /* lfs f3, 0(r3) */ // 0x8075CCFC
    /* fmuls f4, f1, f0 */ // 0x8075CD00
    /* lfs f0, 0x180(r29) */ // 0x8075CD04
    /* lfs f2, 0x178(r29) */ // 0x8075CD08
    /* lfs f1, 0x17c(r29) */ // 0x8075CD0C
    /* fdivs f4, f4, f3 */ // 0x8075CD10
    /* lfs f5, 0x34(r29) */ // 0x8075CD14
    /* lfs f3, 0x78(r31) */ // 0x8075CD18
    /* stfs f0, 0x214(r29) */ // 0x8075CD1C
    /* stfs f2, 0x20c(r29) */ // 0x8075CD20
    /* stfs f1, 0x210(r29) */ // 0x8075CD24
    /* fdivs f0, f3, f4 */ // 0x8075CD28
    /* stfs f4, 0x208(r29) */ // 0x8075CD2C
    /* stfs f5, 0x1c4(r29) */ // 0x8075CD30
    /* stfs f0, 0x204(r29) */ // 0x8075CD34
    r3 = r30;
    r31 = *(0x1c + r1); // lwz @ 0x8075CD3C
    r30 = *(0x18 + r1); // lwz @ 0x8075CD40
    r29 = *(0x14 + r1); // lwz @ 0x8075CD44
    r0 = *(0x24 + r1); // lwz @ 0x8075CD48
    return;
}