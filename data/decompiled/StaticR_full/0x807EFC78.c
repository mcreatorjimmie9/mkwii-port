/* Function at 0x807EFC78, size=320 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_807EFC78(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807EFC88
    r30 = r3;
    r4 = *(0xb0 + r3); // lwz @ 0x807EFC90
    r0 = r4 + -1; // 0x807EFC94
    if (<=) goto 0x0x807efcc0;
    if (!=) goto 0x0x807efda0;
    r12 = *(0 + r3); // lwz @ 0x807EFCA8
    /* li r4, 0 */ // 0x807EFCAC
    r12 = *(0x68 + r12); // lwz @ 0x807EFCB0
    /* mtctr r12 */ // 0x807EFCB4
    /* bctrl  */ // 0x807EFCB8
    /* b 0x807efda0 */ // 0x807EFCBC
    r3 = *(0x20 + r3); // lwz @ 0x807EFCC0
    r12 = *(0 + r3); // lwz @ 0x807EFCC4
    r12 = *(0x14 + r12); // lwz @ 0x807EFCC8
    /* mtctr r12 */ // 0x807EFCCC
    /* bctrl  */ // 0x807EFCD0
    if (==) goto 0x0x807efce8;
    if (==) goto 0x0x807efd40;
    /* b 0x807efd78 */ // 0x807EFCE4
    r3 = *(0x20 + r30); // lwz @ 0x807EFCE8
    r0 = *(0x46 + r3); // lha @ 0x807EFCEC
    r3 = *(8 + r3); // lwz @ 0x807EFCF0
    /* slwi r0, r0, 4 */ // 0x807EFCF4
    r3 = r3 + r0; // 0x807EFCF8
    r0 = *(0xe + r3); // lhz @ 0x807EFCFC
    if (!=) goto 0x0x807efd78;
    /* li r0, 2 */ // 0x807EFD08
    *(0xb0 + r30) = r0; // stw @ 0x807EFD0C
    r3 = r30;
    /* li r4, 0 */ // 0x807EFD14
    r12 = *(0 + r30); // lwz @ 0x807EFD18
    r12 = *(0x68 + r12); // lwz @ 0x807EFD1C
    /* mtctr r12 */ // 0x807EFD20
    /* bctrl  */ // 0x807EFD24
    r12 = *(0 + r30); // lwz @ 0x807EFD28
    r3 = r30;
    r12 = *(0x90 + r12); // lwz @ 0x807EFD30
    /* mtctr r12 */ // 0x807EFD34
    /* bctrl  */ // 0x807EFD38
    /* b 0x807efd78 */ // 0x807EFD3C
    /* li r31, 0 */ // 0x807EFD40
    *(0xb0 + r30) = r31; // stw @ 0x807EFD44
    r3 = r30;
    /* li r4, 0 */ // 0x807EFD4C
    r12 = *(0 + r30); // lwz @ 0x807EFD50
    r12 = *(0x68 + r12); // lwz @ 0x807EFD54
    /* mtctr r12 */ // 0x807EFD58
    /* bctrl  */ // 0x807EFD5C
    r12 = *(0 + r30); // lwz @ 0x807EFD60
    r3 = r30;
    r12 = *(0x90 + r12); // lwz @ 0x807EFD68
    /* mtctr r12 */ // 0x807EFD6C
    /* bctrl  */ // 0x807EFD70
    *(0xb5 + r30) = r31; // stb @ 0x807EFD74
    r3 = *(0x20 + r30); // lwz @ 0x807EFD78
    r0 = *(0x2c + r30); // lhz @ 0x807EFD7C
    /* lfs f2, 0x20(r3) */ // 0x807EFD80
    /* lfs f1, 0x1c(r3) */ // 0x807EFD84
    r0 = r0 | 1; // 0x807EFD88
    /* lfs f0, 0x18(r3) */ // 0x807EFD8C
    /* stfs f0, 0x30(r30) */ // 0x807EFD90
    *(0x2c + r30) = r0; // sth @ 0x807EFD94
    /* stfs f1, 0x34(r30) */ // 0x807EFD98
    /* stfs f2, 0x38(r30) */ // 0x807EFD9C
    r0 = *(0x14 + r1); // lwz @ 0x807EFDA0
    r31 = *(0xc + r1); // lwz @ 0x807EFDA4
    r30 = *(8 + r1); // lwz @ 0x807EFDA8
    return;
}