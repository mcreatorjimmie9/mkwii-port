/* Function at 0x807E5164, size=416 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_807E5164(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807E5174
    r30 = r3;
    r0 = *(0xb0 + r3); // lwz @ 0x807E517C
    if (==) goto 0x0x807e5194;
    if (==) goto 0x0x807e51dc;
    /* b 0x807e51e0 */ // 0x807E5190
    r3 = *(0x20 + r3); // lwz @ 0x807E5194
    r12 = *(0 + r3); // lwz @ 0x807E5198
    r12 = *(0x14 + r12); // lwz @ 0x807E519C
    /* mtctr r12 */ // 0x807E51A0
    /* bctrl  */ // 0x807E51A4
    r4 = *(0x20 + r30); // lwz @ 0x807E51A8
    r3 = r30;
    r0 = *(0x2c + r30); // lhz @ 0x807E51B0
    /* lfs f0, 0x20(r4) */ // 0x807E51B4
    /* lfs f1, 0x1c(r4) */ // 0x807E51B8
    r0 = r0 | 1; // 0x807E51BC
    /* lfs f2, 0x18(r4) */ // 0x807E51C0
    /* stfs f2, 0x30(r30) */ // 0x807E51C4
    *(0x2c + r30) = r0; // sth @ 0x807E51C8
    /* stfs f1, 0x34(r30) */ // 0x807E51CC
    /* stfs f0, 0x38(r30) */ // 0x807E51D0
    FUN_807E5534(); // bl 0x807E5534
    /* b 0x807e51e0 */ // 0x807E51D8
    FUN_807E5370(); // bl 0x807E5370
    /* lis r3, 0 */ // 0x807E51E0
    /* lfs f0, 0x34(r30) */ // 0x807E51E4
    r3 = *(0 + r3); // lwz @ 0x807E51E8
    /* lfs f1, 0x20(r3) */ // 0x807E51EC
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x807E51F0
    /* cror cr0eq, cr0gt, cr0eq */ // 0x807E51F4
    if (!=) goto 0x0x807e5238;
    /* lis r31, 0 */ // 0x807E51FC
    r3 = r30;
    /* lfs f1, 0(r31) */ // 0x807E5204
    /* li r4, 0x1df */ // 0x807E5208
    FUN_808A0AA8(r3, r4); // bl 0x808A0AA8
    r0 = *(0xd4 + r30); // lbz @ 0x807E5210
    if (==) goto 0x0x807e5240;
    /* lfs f1, 0(r31) */ // 0x807E521C
    r3 = r30;
    /* li r4, 0x1de */ // 0x807E5224
    FUN_808A0AC8(r3, r4); // bl 0x808A0AC8
    /* li r0, 0 */ // 0x807E522C
    *(0xd4 + r30) = r0; // stb @ 0x807E5230
    /* b 0x807e5240 */ // 0x807E5234
    /* li r0, 1 */ // 0x807E5238
    *(0xd4 + r30) = r0; // stb @ 0x807E523C
    r12 = *(0 + r30); // lwz @ 0x807E5240
    r3 = r30;
    /* li r31, 0 */ // 0x807E5248
    r12 = *(0x30 + r12); // lwz @ 0x807E524C
    /* mtctr r12 */ // 0x807E5250
    /* bctrl  */ // 0x807E5254
    /* lis r4, 0x101 */ // 0x807E5258
    r0 = *(0x20 + r3); // lwz @ 0x807E525C
    r3 = r4 + 0x101; // 0x807E5260
    /* andc. r0, r3, r0 */ // 0x807E5264
    if (!=) goto 0x0x807e5284;
    /* lis r3, 0 */ // 0x807E526C
    r3 = *(0 + r3); // lwz @ 0x807E5270
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x807e5284;
    /* li r31, 1 */ // 0x807E5280
    if (!=) goto 0x0x807e52ec;
    r3 = *(0xd8 + r30); // lwz @ 0x807E528C
    r12 = *(0 + r3); // lwz @ 0x807E5290
    r12 = *(0xc + r12); // lwz @ 0x807E5294
    /* mtctr r12 */ // 0x807E5298
    /* bctrl  */ // 0x807E529C
    r3 = r30;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r3 = *(0xd8 + r30); // lwz @ 0x807E52A8
    r4 = r30 + 0x58; // 0x807E52AC
    r12 = *(0 + r3); // lwz @ 0x807E52B0
    r12 = *(0x78 + r12); // lwz @ 0x807E52B4
    /* mtctr r12 */ // 0x807E52B8
    /* bctrl  */ // 0x807E52BC
    r3 = *(0xd8 + r30); // lwz @ 0x807E52C0
    r4 = r30 + 0x3c; // 0x807E52C4
    r12 = *(0 + r3); // lwz @ 0x807E52C8
    r12 = *(0x70 + r12); // lwz @ 0x807E52CC
    /* mtctr r12 */ // 0x807E52D0
    /* bctrl  */ // 0x807E52D4
    r3 = *(0xd8 + r30); // lwz @ 0x807E52D8
    r12 = *(0 + r3); // lwz @ 0x807E52DC
    r12 = *(0x80 + r12); // lwz @ 0x807E52E0
    /* mtctr r12 */ // 0x807E52E4
    /* bctrl  */ // 0x807E52E8
    r0 = *(0x14 + r1); // lwz @ 0x807E52EC
    r31 = *(0xc + r1); // lwz @ 0x807E52F0
    r30 = *(8 + r1); // lwz @ 0x807E52F4
    return;
}