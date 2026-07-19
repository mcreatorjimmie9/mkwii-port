/* Function at 0x8077EEA4, size=384 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8077EEA4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8077EEAC
    *(0x24 + r1) = r0; // stw @ 0x8077EEB0
    *(0x1c + r1) = r31; // stw @ 0x8077EEB4
    r31 = r3;
    r7 = *(0xc0 + r3); // lwz @ 0x8077EEBC
    r0 = *(0 + r4); // lhz @ 0x8077EEC0
    if (<) goto 0x0x8077ef44;
    r0 = *(0x2c + r3); // lhz @ 0x8077EECC
    /* lis r4, 0 */ // 0x8077EED0
    /* lfs f0, 0(r4) */ // 0x8077EED4
    /* li r4, 0 */ // 0x8077EED8
    r0 = r0 | 8; // 0x8077EEDC
    *(0x2c + r3) = r0; // sth @ 0x8077EEE0
    /* stfs f0, 0x3c(r3) */ // 0x8077EEE4
    /* stfs f0, 0x40(r3) */ // 0x8077EEE8
    /* stfs f0, 0x44(r3) */ // 0x8077EEEC
    r3 = *(0xd4 + r3); // lwz @ 0x8077EEF0
    r12 = *(0 + r3); // lwz @ 0x8077EEF4
    r12 = *(0xc + r12); // lwz @ 0x8077EEF8
    /* mtctr r12 */ // 0x8077EEFC
    /* bctrl  */ // 0x8077EF00
    r12 = *(0 + r31); // lwz @ 0x8077EF04
    r3 = r31;
    r12 = *(0x98 + r12); // lwz @ 0x8077EF0C
    /* mtctr r12 */ // 0x8077EF10
    /* bctrl  */ // 0x8077EF14
    if (==) goto 0x0x8077ef34;
    r12 = *(0 + r31); // lwz @ 0x8077EF20
    r3 = r31;
    r12 = *(0x8c + r12); // lwz @ 0x8077EF28
    /* mtctr r12 */ // 0x8077EF2C
    /* bctrl  */ // 0x8077EF30
    /* li r0, 0 */ // 0x8077EF34
    *(0xbc + r31) = r0; // stw @ 0x8077EF38
    *(0x12c + r31) = r0; // stw @ 0x8077EF3C
    /* b 0x8077f010 */ // 0x8077EF40
    /* lis r0, 0x4330 */ // 0x8077EF44
    *(0xc + r1) = r7; // stw @ 0x8077EF48
    /* lis r5, 0 */ // 0x8077EF4C
    /* lis r4, 0 */ // 0x8077EF50
    *(8 + r1) = r0; // stw @ 0x8077EF54
    /* lis r6, 0 */ // 0x8077EF58
    /* lfd f3, 0(r5) */ // 0x8077EF5C
    /* lfd f0, 8(r1) */ // 0x8077EF60
    /* lfs f1, 0x11c(r3) */ // 0x8077EF64
    /* fsubs f0, f0, f3 */ // 0x8077EF68
    *(0x14 + r1) = r7; // stw @ 0x8077EF6C
    /* lfs f2, 0(r4) */ // 0x8077EF70
    /* fneg f4, f1 */ // 0x8077EF74
    *(0x10 + r1) = r0; // stw @ 0x8077EF78
    /* fsubs f1, f0, f2 */ // 0x8077EF7C
    /* lfd f0, 0x10(r1) */ // 0x8077EF80
    /* lfs f6, 0(r6) */ // 0x8077EF84
    /* fsubs f0, f0, f3 */ // 0x8077EF88
    /* lfs f5, 0x118(r3) */ // 0x8077EF8C
    /* fmuls f1, f4, f1 */ // 0x8077EF90
    /* fmuls f3, f6, f5 */ // 0x8077EF94
    /* fsubs f0, f0, f2 */ // 0x8077EF98
    /* fmuls f0, f1, f0 */ // 0x8077EF9C
    /* fadds f0, f3, f0 */ // 0x8077EFA0
    /* .byte 0xfc, 0x00, 0x28, 0x40 */ // 0x8077EFA4
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8077EFA8
    if (!=) goto 0x0x8077efb4;
    /* fmr f0, f5 */ // 0x8077EFB0
    r0 = *(0x2c + r3); // lhz @ 0x8077EFB4
    /* lis r4, 0 */ // 0x8077EFB8
    /* stfs f0, 0x3c(r3) */ // 0x8077EFBC
    r0 = r0 | 8; // 0x8077EFC0
    r5 = *(0xc0 + r3); // lwz @ 0x8077EFC4
    *(0x2c + r3) = r0; // sth @ 0x8077EFC8
    /* stfs f0, 0x40(r3) */ // 0x8077EFCC
    /* stfs f0, 0x44(r3) */ // 0x8077EFD0
    r0 = *(0 + r4); // lhz @ 0x8077EFD4
    if (<) goto 0x0x8077efec;
    /* li r0, 1 */ // 0x8077EFE0
    *(0x12c + r3) = r0; // stw @ 0x8077EFE4
    /* b 0x8077eff4 */ // 0x8077EFE8
    /* li r0, 0 */ // 0x8077EFEC
    *(0x12c + r3) = r0; // stw @ 0x8077EFF0
    /* lis r4, 0 */ // 0x8077EFF4
    /* lis r3, 0 */ // 0x8077EFF8
    /* lfs f1, 0(r4) */ // 0x8077EFFC
    r4 = r31 + 0x30; // 0x8077F000
    r3 = *(0 + r3); // lwz @ 0x8077F004
    /* li r5, 9 */ // 0x8077F008
    FUN_808256E8(r3, r4, r5); // bl 0x808256E8
    r0 = *(0x24 + r1); // lwz @ 0x8077F010
    r31 = *(0x1c + r1); // lwz @ 0x8077F014
    return;
}