/* Function at 0x8071EC5C, size=916 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 22 function(s) */

int FUN_8071EC5C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 0 */ // 0x8071EC68
    *(0xc + r1) = r31; // stw @ 0x8071EC6C
    *(8 + r1) = r30; // stw @ 0x8071EC70
    r30 = r3;
    r4 = *(0x12e + r3); // lbz @ 0x8071EC78
    r4 = r4 + 2; // 0x8071EC7C
    *(0x134 + r3) = r4; // stw @ 0x8071EC80
    *(0x1f0 + r3) = r0; // stw @ 0x8071EC84
    *(0x1f4 + r3) = r0; // stw @ 0x8071EC88
    *(0x1f8 + r3) = r0; // stw @ 0x8071EC8C
    *(0x1fc + r3) = r0; // stw @ 0x8071EC90
    *(0x200 + r3) = r0; // stw @ 0x8071EC94
    *(0x204 + r3) = r0; // stw @ 0x8071EC98
    *(0x208 + r3) = r0; // stw @ 0x8071EC9C
    *(0x20c + r3) = r0; // stw @ 0x8071ECA0
    *(0x210 + r3) = r0; // stw @ 0x8071ECA4
    *(0x214 + r3) = r0; // stw @ 0x8071ECA8
    *(0x218 + r3) = r0; // stw @ 0x8071ECAC
    *(0x21c + r3) = r0; // stw @ 0x8071ECB0
    *(0x220 + r3) = r0; // stw @ 0x8071ECB4
    *(0x224 + r3) = r0; // stw @ 0x8071ECB8
    *(0x228 + r3) = r0; // stw @ 0x8071ECBC
    *(0x22c + r3) = r0; // stw @ 0x8071ECC0
    *(0x230 + r3) = r0; // stw @ 0x8071ECC4
    *(0x234 + r3) = r0; // stw @ 0x8071ECC8
    *(0x238 + r3) = r0; // stw @ 0x8071ECCC
    *(0x23c + r3) = r0; // stw @ 0x8071ECD0
    *(0x240 + r3) = r0; // stw @ 0x8071ECD4
    *(0x244 + r3) = r0; // stw @ 0x8071ECD8
    *(0x248 + r3) = r0; // stw @ 0x8071ECDC
    *(0x24c + r3) = r0; // stw @ 0x8071ECE0
    *(0x250 + r3) = r0; // stw @ 0x8071ECE4
    *(0x254 + r3) = r0; // stw @ 0x8071ECE8
    *(0x258 + r3) = r0; // stw @ 0x8071ECEC
    *(0x25c + r3) = r0; // stw @ 0x8071ECF0
    *(0x260 + r3) = r0; // stw @ 0x8071ECF4
    *(0x264 + r3) = r0; // stw @ 0x8071ECF8
    *(0x268 + r3) = r0; // stw @ 0x8071ECFC
    *(0x26c + r3) = r0; // stw @ 0x8071ED00
    *(0x270 + r3) = r0; // stw @ 0x8071ED04
    *(0x274 + r3) = r0; // stw @ 0x8071ED08
    *(0x278 + r3) = r0; // stw @ 0x8071ED0C
    *(0x27c + r3) = r0; // stw @ 0x8071ED10
    *(0x280 + r3) = r0; // stw @ 0x8071ED14
    *(0x284 + r3) = r0; // stw @ 0x8071ED18
    *(0x288 + r3) = r0; // stw @ 0x8071ED1C
    *(0x28c + r3) = r0; // stw @ 0x8071ED20
    *(0x290 + r3) = r0; // stw @ 0x8071ED24
    *(0x294 + r3) = r0; // stw @ 0x8071ED28
    *(0x298 + r3) = r0; // stw @ 0x8071ED2C
    *(0x29c + r3) = r0; // stw @ 0x8071ED30
    *(0x2a0 + r3) = r0; // stw @ 0x8071ED34
    *(0x2a4 + r3) = r0; // stw @ 0x8071ED38
    *(0x2a8 + r3) = r0; // stw @ 0x8071ED3C
    *(0x2ac + r3) = r0; // stw @ 0x8071ED40
    *(0x2b0 + r3) = r0; // stw @ 0x8071ED44
    *(0x2b4 + r3) = r0; // stw @ 0x8071ED48
    *(0x2b8 + r3) = r0; // stw @ 0x8071ED4C
    *(0x2bc + r3) = r0; // stw @ 0x8071ED50
    *(0x2c0 + r3) = r0; // stw @ 0x8071ED54
    *(0x2c4 + r3) = r0; // stw @ 0x8071ED58
    *(0x2c8 + r3) = r0; // stw @ 0x8071ED5C
    *(0x2cc + r3) = r0; // stw @ 0x8071ED60
    *(0x2d0 + r3) = r0; // stw @ 0x8071ED64
    *(0x2d4 + r3) = r0; // stw @ 0x8071ED68
    *(0x2d8 + r3) = r0; // stw @ 0x8071ED6C
    *(0x2dc + r3) = r0; // stw @ 0x8071ED70
    *(0x2e0 + r3) = r0; // stw @ 0x8071ED74
    *(0x2e4 + r3) = r0; // stw @ 0x8071ED78
    *(0x2e8 + r3) = r0; // stw @ 0x8071ED7C
    *(0x2ec + r3) = r0; // stw @ 0x8071ED80
    *(0x2f0 + r3) = r0; // stw @ 0x8071ED84
    *(0x2f4 + r3) = r0; // stw @ 0x8071ED88
    *(0x2f8 + r3) = r0; // stw @ 0x8071ED8C
    *(0x2fc + r3) = r0; // stw @ 0x8071ED90
    *(0x300 + r3) = r0; // stw @ 0x8071ED94
    *(0x304 + r3) = r0; // stw @ 0x8071ED98
    *(0x308 + r3) = r0; // stw @ 0x8071ED9C
    *(0x30c + r3) = r0; // stw @ 0x8071EDA0
    *(0x310 + r3) = r0; // stw @ 0x8071EDA4
    *(0x314 + r3) = r0; // stw @ 0x8071EDA8
    *(0x318 + r3) = r0; // stw @ 0x8071EDAC
    *(0x31c + r3) = r0; // stw @ 0x8071EDB0
    *(0x320 + r3) = r0; // stw @ 0x8071EDB4
    *(0x324 + r3) = r0; // stw @ 0x8071EDB8
    *(0x328 + r3) = r0; // stw @ 0x8071EDBC
    *(0x32c + r3) = r0; // stw @ 0x8071EDC0
    *(0x330 + r3) = r0; // stw @ 0x8071EDC4
    *(0x334 + r3) = r0; // stw @ 0x8071EDC8
    *(0x338 + r3) = r0; // stw @ 0x8071EDCC
    *(0x33c + r3) = r0; // stw @ 0x8071EDD0
    *(0x340 + r3) = r0; // stw @ 0x8071EDD4
    *(0x344 + r3) = r0; // stw @ 0x8071EDD8
    *(0x348 + r3) = r0; // stw @ 0x8071EDDC
    *(0x34c + r3) = r0; // stw @ 0x8071EDE0
    *(0x350 + r3) = r0; // stw @ 0x8071EDE4
    *(0x354 + r3) = r0; // stw @ 0x8071EDE8
    *(0x358 + r3) = r0; // stw @ 0x8071EDEC
    *(0x35c + r3) = r0; // stw @ 0x8071EDF0
    r0 = *(0x12b + r3); // lbz @ 0x8071EDF4
    if (!=) goto 0x0x8071f20c;
    r0 = *(0xf + r3); // lbz @ 0x8071EE00
    if (!=) goto 0x0x8071ee30;
    r0 = *(0x11 + r3); // lbz @ 0x8071EE0C
    if (!=) goto 0x0x8071ee30;
    r0 = *(0x10 + r3); // lbz @ 0x8071EE18
    if (!=) goto 0x0x8071ee30;
    r0 = *(0x13 + r3); // lbz @ 0x8071EE24
    if (==) goto 0x0x8071f0d0;
    /* li r3, 0x7c */ // 0x8071EE30
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x8071ee54;
    /* lis r4, 0 */ // 0x8071EE40
    r5 = *(0x134 + r30); // lwz @ 0x8071EE44
    r4 = r4 + 0; // 0x8071EE48
    r4 = r4 + 0x78; // 0x8071EE4C
    FUN_805E3430(r4, r4, r4); // bl 0x805E3430
    *(0x318 + r30) = r3; // stw @ 0x8071EE54
    /* li r3, 0x7c */ // 0x8071EE58
    FUN_805E3430(r4, r4, r3); // bl 0x805E3430
    if (==) goto 0x0x8071ee7c;
    /* lis r4, 0 */ // 0x8071EE68
    r5 = *(0x134 + r30); // lwz @ 0x8071EE6C
    r4 = r4 + 0; // 0x8071EE70
    r4 = r4 + 0x86; // 0x8071EE74
    FUN_805E3430(r4, r4, r4); // bl 0x805E3430
    *(0x31c + r30) = r3; // stw @ 0x8071EE7C
    /* li r3, 0x7c */ // 0x8071EE80
    FUN_805E3430(r4, r4, r3); // bl 0x805E3430
    if (==) goto 0x0x8071eea4;
    /* lis r4, 0 */ // 0x8071EE90
    r5 = *(0x134 + r30); // lwz @ 0x8071EE94
    r4 = r4 + 0; // 0x8071EE98
    r4 = r4 + 0x94; // 0x8071EE9C
    FUN_805E3430(r4, r4, r4); // bl 0x805E3430
    *(0x320 + r30) = r3; // stw @ 0x8071EEA4
    /* li r3, 0x7c */ // 0x8071EEA8
    FUN_805E3430(r4, r4, r3); // bl 0x805E3430
    if (==) goto 0x0x8071eecc;
    /* lis r4, 0 */ // 0x8071EEB8
    r5 = *(0x134 + r30); // lwz @ 0x8071EEBC
    r4 = r4 + 0; // 0x8071EEC0
    r4 = r4 + 0x9c; // 0x8071EEC4
    FUN_805E3430(r4, r4, r4); // bl 0x805E3430
    *(0x324 + r30) = r3; // stw @ 0x8071EECC
    /* li r3, 0x7c */ // 0x8071EED0
    FUN_805E3430(r4, r4, r3); // bl 0x805E3430
    if (==) goto 0x0x8071eef4;
    /* lis r4, 0 */ // 0x8071EEE0
    r5 = *(0x134 + r30); // lwz @ 0x8071EEE4
    r4 = r4 + 0; // 0x8071EEE8
    r4 = r4 + 0xa4; // 0x8071EEEC
    FUN_805E3430(r4, r4, r4); // bl 0x805E3430
    *(0x330 + r30) = r3; // stw @ 0x8071EEF4
    /* li r3, 0x7c */ // 0x8071EEF8
    FUN_805E3430(r4, r4, r3); // bl 0x805E3430
    if (==) goto 0x0x8071ef1c;
    /* lis r4, 0 */ // 0x8071EF08
    r5 = *(0x134 + r30); // lwz @ 0x8071EF0C
    r4 = r4 + 0; // 0x8071EF10
    r4 = r4 + 0xad; // 0x8071EF14
    FUN_805E3430(r4, r4, r4); // bl 0x805E3430
    *(0x334 + r30) = r3; // stw @ 0x8071EF1C
    /* li r3, 0x7c */ // 0x8071EF20
    FUN_805E3430(r4, r4, r3); // bl 0x805E3430
    if (==) goto 0x0x8071ef44;
    /* lis r4, 0 */ // 0x8071EF30
    r5 = *(0x134 + r30); // lwz @ 0x8071EF34
    r4 = r4 + 0; // 0x8071EF38
    r4 = r4 + 0xb6; // 0x8071EF3C
    FUN_805E3430(r4, r4, r4); // bl 0x805E3430
    *(0x348 + r30) = r3; // stw @ 0x8071EF44
    /* li r3, 0x7c */ // 0x8071EF48
    FUN_805E3430(r4, r4, r3); // bl 0x805E3430
    if (==) goto 0x0x8071ef6c;
    /* lis r4, 0 */ // 0x8071EF58
    r5 = *(0x134 + r30); // lwz @ 0x8071EF5C
    r4 = r4 + 0; // 0x8071EF60
    r4 = r4 + 0xbd; // 0x8071EF64
    FUN_805E3430(r4, r4, r4); // bl 0x805E3430
    *(0x34c + r30) = r3; // stw @ 0x8071EF6C
    /* li r3, 0x7c */ // 0x8071EF70
    FUN_805E3430(r4, r4, r3); // bl 0x805E3430
    if (==) goto 0x0x8071ef94;
    /* lis r4, 0 */ // 0x8071EF80
    r5 = *(0x134 + r30); // lwz @ 0x8071EF84
    r4 = r4 + 0; // 0x8071EF88
    r4 = r4 + 0xc4; // 0x8071EF8C
    FUN_805E3430(r4, r4, r4); // bl 0x805E3430
    *(0x350 + r30) = r3; // stw @ 0x8071EF94
    /* li r3, 0x7c */ // 0x8071EF98
    FUN_805E3430(r4, r4, r3); // bl 0x805E3430
    if (==) goto 0x0x8071efbc;
    /* lis r4, 0 */ // 0x8071EFA8
    r5 = *(0x134 + r30); // lwz @ 0x8071EFAC
    r4 = r4 + 0; // 0x8071EFB0
    r4 = r4 + 0xce; // 0x8071EFB4
    FUN_805E3430(r4, r4, r4); // bl 0x805E3430
    r0 = *(0x144 + r30); // lbz @ 0x8071EFBC
    *(0x354 + r30) = r3; // stw @ 0x8071EFC0
    if (==) goto 0x0x8071f020;
    /* li r3, 0x7c */ // 0x8071EFCC
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x8071eff0;
    /* lis r4, 0 */ // 0x8071EFDC
    r5 = *(0x134 + r30); // lwz @ 0x8071EFE0
    r4 = r4 + 0; // 0x8071EFE4
    r4 = r4 + 0xd8; // 0x8071EFE8
    FUN_805E3430(r4, r4, r4); // bl 0x805E3430
}