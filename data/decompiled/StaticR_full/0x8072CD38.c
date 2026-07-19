/* Function at 0x8072CD38, size=660 bytes */
/* Stack frame: 272 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_8072CD38(int r3, int r4)
{
    /* Stack frame: -272(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8072CD48
    r31 = r31 + 0; // 0x8072CD4C
    *(0x108 + r1) = r30; // stw @ 0x8072CD50
    r30 = r3;
    *(0x104 + r1) = r29; // stw @ 0x8072CD58
    r0 = *(0x7d + r3); // lbz @ 0x8072CD5C
    if (==) goto 0x0x8072cd7c;
    r0 = *(0x7e + r3); // lbz @ 0x8072CD68
    if (!=) goto 0x0x8072cd7c;
    /* li r4, 1 */ // 0x8072CD74
    FUN_8072550C(r4); // bl 0x8072550C
    r0 = *(0x7d + r30); // lbz @ 0x8072CD7C
    if (==) goto 0x0x8072d4e8;
    r0 = *(0x724 + r30); // lwz @ 0x8072CD88
    if (==) goto 0x0x8072cd9c;
    r3 = r30;
    FUN_8072F908(r3); // bl 0x8072F908
    r0 = *(0xad + r30); // lbz @ 0x8072CD9C
    if (==) goto 0x0x8072ce34;
    r3 = *(0x27c + r30); // lwz @ 0x8072CDA8
    r3 = r3 + 0x74; // 0x8072CDAC
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8072cdc4;
    /* li r3, 0 */ // 0x8072CDBC
    /* b 0x8072cdc8 */ // 0x8072CDC0
    r3 = *(0xc + r3); // lwz @ 0x8072CDC4
    /* li r0, 0 */ // 0x8072CDCC
    if (==) goto 0x0x8072cddc;
    if (!=) goto 0x0x8072cde0;
    /* li r0, 1 */ // 0x8072CDDC
    if (==) goto 0x0x8072cdfc;
    r3 = *(0x27c + r30); // lwz @ 0x8072CDE8
    r12 = *(0 + r3); // lwz @ 0x8072CDEC
    r12 = *(0x18 + r12); // lwz @ 0x8072CDF0
    /* mtctr r12 */ // 0x8072CDF4
    /* bctrl  */ // 0x8072CDF8
    r3 = *(0x27c + r30); // lwz @ 0x8072CDFC
    r12 = *(0 + r3); // lwz @ 0x8072CE00
    r12 = *(0xc + r12); // lwz @ 0x8072CE04
    /* mtctr r12 */ // 0x8072CE08
    /* bctrl  */ // 0x8072CE0C
    /* lfs f0, 0x6f0(r30) */ // 0x8072CE10
    /* lfs f1, 0x6e8(r30) */ // 0x8072CE14
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8072CE18
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8072CE1C
    if (!=) goto 0x0x8072ce28;
    /* b 0x8072ce34 */ // 0x8072CE24
    /* lfs f0, 0(r31) */ // 0x8072CE28
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8072CE2C
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8072CE30
    r3 = *(0x27c + r30); // lwz @ 0x8072CE34
    r3 = r3 + 0x74; // 0x8072CE38
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8072ce50;
    /* li r3, 0 */ // 0x8072CE48
    /* b 0x8072ce54 */ // 0x8072CE4C
    r3 = *(0xc + r3); // lwz @ 0x8072CE50
    /* li r0, 0 */ // 0x8072CE58
    if (==) goto 0x0x8072ce68;
    if (!=) goto 0x0x8072ce6c;
    /* li r0, 1 */ // 0x8072CE68
    if (==) goto 0x0x8072cf08;
    /* lfs f3, 0x6f0(r30) */ // 0x8072CE74
    /* lfs f0, 0x6e8(r30) */ // 0x8072CE78
    /* .byte 0xfc, 0x00, 0x18, 0x40 */ // 0x8072CE7C
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8072CE80
    if (!=) goto 0x0x8072ce8c;
    /* b 0x8072cea4 */ // 0x8072CE88
    /* lfs f3, 0(r31) */ // 0x8072CE8C
    /* .byte 0xfc, 0x00, 0x18, 0x40 */ // 0x8072CE90
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8072CE94
    if (!=) goto 0x0x8072cea0;
    /* b 0x8072cea4 */ // 0x8072CE9C
    /* fmr f3, f0 */ // 0x8072CEA0
    /* lfs f0, 0xaac(r30) */ // 0x8072CEA4
    /* lfs f1, 0xab0(r30) */ // 0x8072CEA8
    r3 = *(0x27c + r30); // lwz @ 0x8072CEAC
    /* fsubs f0, f0, f1 */ // 0x8072CEB0
    /* lfs f2, 0x6f0(r30) */ // 0x8072CEB4
    r12 = *(0 + r3); // lwz @ 0x8072CEB8
    /* fdivs f0, f0, f2 */ // 0x8072CEBC
    r12 = *(0x3c + r12); // lwz @ 0x8072CEC0
    /* fmuls f0, f3, f0 */ // 0x8072CEC4
    /* fadds f1, f1, f0 */ // 0x8072CEC8
    /* mtctr r12 */ // 0x8072CECC
    /* bctrl  */ // 0x8072CED0
    r3 = *(0x27c + r30); // lwz @ 0x8072CED4
    r4 = r30 + 0x6f4; // 0x8072CED8
    r12 = *(0 + r3); // lwz @ 0x8072CEDC
    r12 = *(0x78 + r12); // lwz @ 0x8072CEE0
    /* mtctr r12 */ // 0x8072CEE4
    /* bctrl  */ // 0x8072CEE8
    r3 = *(0x27c + r30); // lwz @ 0x8072CEEC
    r12 = *(0 + r3); // lwz @ 0x8072CEF0
    r12 = *(0x80 + r12); // lwz @ 0x8072CEF4
    /* mtctr r12 */ // 0x8072CEF8
    /* bctrl  */ // 0x8072CEFC
    /* li r0, 1 */ // 0x8072CF00
    *(9 + r30) = r0; // stb @ 0x8072CF04
    /* li r0, 0 */ // 0x8072CF08
    *(0xad + r30) = r0; // stb @ 0x8072CF0C
    r3 = r30;
    FUN_8073AB1C(r3); // bl 0x8073AB1C
    r3 = *(0x248 + r30); // lwz @ 0x8072CF18
    r3 = r3 + 0x74; // 0x8072CF1C
    FUN_805E3430(r3, r3); // bl 0x805E3430
    if (!=) goto 0x0x8072cf34;
    /* li r3, 0 */ // 0x8072CF2C
    /* b 0x8072cf38 */ // 0x8072CF30
    r3 = *(0xc + r3); // lwz @ 0x8072CF34
    /* li r0, 0 */ // 0x8072CF3C
    if (==) goto 0x0x8072cf4c;
    if (!=) goto 0x0x8072cf50;
    /* li r0, 1 */ // 0x8072CF4C
    if (==) goto 0x0x8072cfec;
    /* lfs f3, 0x6f0(r30) */ // 0x8072CF58
    /* lfs f0, 0x6e8(r30) */ // 0x8072CF5C
    /* .byte 0xfc, 0x00, 0x18, 0x40 */ // 0x8072CF60
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8072CF64
    if (!=) goto 0x0x8072cf70;
    /* b 0x8072cf88 */ // 0x8072CF6C
    /* lfs f3, 0(r31) */ // 0x8072CF70
    /* .byte 0xfc, 0x00, 0x18, 0x40 */ // 0x8072CF74
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8072CF78
    if (!=) goto 0x0x8072cf84;
    /* b 0x8072cf88 */ // 0x8072CF80
    /* fmr f3, f0 */ // 0x8072CF84
    /* lfs f0, 0xaac(r30) */ // 0x8072CF88
    /* lfs f1, 0xab0(r30) */ // 0x8072CF8C
    r3 = *(0x248 + r30); // lwz @ 0x8072CF90
    /* fsubs f0, f0, f1 */ // 0x8072CF94
    /* lfs f2, 0x6f0(r30) */ // 0x8072CF98
    r12 = *(0 + r3); // lwz @ 0x8072CF9C
    /* fdivs f0, f0, f2 */ // 0x8072CFA0
    r12 = *(0x3c + r12); // lwz @ 0x8072CFA4
    /* fmuls f0, f3, f0 */ // 0x8072CFA8
    /* fadds f1, f1, f0 */ // 0x8072CFAC
    /* mtctr r12 */ // 0x8072CFB0
    /* bctrl  */ // 0x8072CFB4
    r3 = *(0x248 + r30); // lwz @ 0x8072CFB8
    r4 = r30 + 0x6f4; // 0x8072CFBC
    r12 = *(0 + r3); // lwz @ 0x8072CFC0
    r12 = *(0x78 + r12); // lwz @ 0x8072CFC4
    /* mtctr r12 */ // 0x8072CFC8
}