/* Function at 0x80738B44, size=324 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80738B44(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x80738B4C
    *(0x3c + r1) = r31; // stw @ 0x80738B54
    r31 = r4;
    *(0x38 + r1) = r30; // stw @ 0x80738B5C
    r30 = r3;
    r5 = *(0 + r5); // lwz @ 0x80738B64
    r0 = *(0x10 + r5); // lbz @ 0x80738B68
    if (!=) goto 0x0x80738c70;
    r0 = *(4 + r3); // lbz @ 0x80738B74
    if (==) goto 0x0x80738b84;
    /* b 0x80738c70 */ // 0x80738B80
    r3 = *(0x208 + r3); // lwz @ 0x80738B84
    r12 = *(0 + r3); // lwz @ 0x80738B88
    r12 = *(0xc + r12); // lwz @ 0x80738B8C
    /* mtctr r12 */ // 0x80738B90
    /* bctrl  */ // 0x80738B94
    r3 = *(0x208 + r30); // lwz @ 0x80738B98
    r4 = r31;
    r12 = *(0 + r3); // lwz @ 0x80738BA0
    r12 = *(0x78 + r12); // lwz @ 0x80738BA4
    /* mtctr r12 */ // 0x80738BA8
    /* bctrl  */ // 0x80738BAC
    r0 = *(0x99c + r30); // lha @ 0x80738BB0
    if (==) goto 0x0x80738c24;
    /* lis r5, 0x4330 */ // 0x80738BBC
    /* xoris r3, r0, 0x8000 */ // 0x80738BC0
    *(0x24 + r1) = r3; // stw @ 0x80738BC4
    /* lis r4, 0 */ // 0x80738BC8
    r0 = *(0x99e + r30); // lha @ 0x80738BCC
    /* lis r3, 0 */ // 0x80738BD0
    *(0x20 + r1) = r5; // stw @ 0x80738BD4
    /* lfd f3, 0(r4) */ // 0x80738BD8
    /* xoris r0, r0, 0x8000 */ // 0x80738BDC
    /* lfd f1, 0x20(r1) */ // 0x80738BE0
    /* lis r4, 0 */ // 0x80738BE4
    /* lfs f0, 0(r3) */ // 0x80738BE8
    /* fsubs f2, f1, f3 */ // 0x80738BEC
    *(0x2c + r1) = r0; // stw @ 0x80738BF0
    r3 = *(0x208 + r30); // lwz @ 0x80738BF4
    *(0x28 + r1) = r5; // stw @ 0x80738BF8
    /* fmuls f2, f0, f2 */ // 0x80738BFC
    r12 = *(0 + r3); // lwz @ 0x80738C00
    /* lfd f1, 0x28(r1) */ // 0x80738C04
    /* lfs f0, 0(r4) */ // 0x80738C08
    /* fsubs f1, f1, f3 */ // 0x80738C0C
    r12 = *(0x2c + r12); // lwz @ 0x80738C10
    /* fdivs f1, f2, f1 */ // 0x80738C14
    /* fsubs f1, f0, f1 */ // 0x80738C18
    /* mtctr r12 */ // 0x80738C1C
    /* bctrl  */ // 0x80738C20
    r3 = *(0x208 + r30); // lwz @ 0x80738C24
    r12 = *(0 + r3); // lwz @ 0x80738C28
    r12 = *(0x80 + r12); // lwz @ 0x80738C2C
    /* mtctr r12 */ // 0x80738C30
    /* bctrl  */ // 0x80738C34
    /* li r0, 1 */ // 0x80738C38
    *(9 + r30) = r0; // stb @ 0x80738C3C
    r4 = r31;
    /* li r5, 3 */ // 0x80738C48
    FUN_805C70D8(r4, r3, r5); // bl 0x805C70D8
    r4 = r30 + 0x6f4; // 0x80738C54
    /* li r5, 3 */ // 0x80738C58
    FUN_805C70D8(r5, r3, r4, r5); // bl 0x805C70D8
    /* lfs f1, 0x18(r1) */ // 0x80738C60
    /* lfs f0, 0xc(r1) */ // 0x80738C64
    /* fsubs f0, f1, f0 */ // 0x80738C68
    /* stfs f0, 0xb4(r30) */ // 0x80738C6C
    r0 = *(0x44 + r1); // lwz @ 0x80738C70
    r31 = *(0x3c + r1); // lwz @ 0x80738C74
    r30 = *(0x38 + r1); // lwz @ 0x80738C78
    return;
}