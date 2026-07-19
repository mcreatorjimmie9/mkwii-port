/* Function at 0x8078EAA4, size=320 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8078EAA4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* stfd f31, 0x18(r1) */ // 0x8078EAB0
    /* fmr f31, f1 */ // 0x8078EAB4
    *(0x14 + r1) = r31; // stw @ 0x8078EAB8
    /* li r31, 0 */ // 0x8078EABC
    *(0x10 + r1) = r30; // stw @ 0x8078EAC0
    r30 = r4;
    *(0xc + r1) = r29; // stw @ 0x8078EAC8
    r29 = r3;
    r3 = r3 + 0x94; // 0x8078EAD0
    FUN_8078FFE0(r3); // bl 0x8078FFE0
    if (==) goto 0x0x8078eae8;
    /* li r3, 0 */ // 0x8078EAE0
    /* b 0x8078ebc4 */ // 0x8078EAE4
    r4 = *(0x80 + r29); // lwz @ 0x8078EAE8
    /* li r3, 0 */ // 0x8078EAEC
    if (==) goto 0x0x8078eb18;
    if (==) goto 0x0x8078eb04;
    r0 = *(0x90 + r4); // lwz @ 0x8078EAFC
    /* b 0x8078eb08 */ // 0x8078EB00
    /* li r0, -1 */ // 0x8078EB04
    if (!=) goto 0x0x8078eb18;
    r3 = r29 + 0x80; // 0x8078EB10
    /* b 0x8078eb98 */ // 0x8078EB14
    r4 = *(0x84 + r29); // lwz @ 0x8078EB18
    if (==) goto 0x0x8078eb44;
    if (==) goto 0x0x8078eb30;
    r0 = *(0x90 + r4); // lwz @ 0x8078EB28
    /* b 0x8078eb34 */ // 0x8078EB2C
    /* li r0, -1 */ // 0x8078EB30
    if (!=) goto 0x0x8078eb44;
    r3 = r29 + 0x84; // 0x8078EB3C
    /* b 0x8078eb98 */ // 0x8078EB40
    r4 = *(0x88 + r29); // lwz @ 0x8078EB44
    if (==) goto 0x0x8078eb70;
    if (==) goto 0x0x8078eb5c;
    r0 = *(0x90 + r4); // lwz @ 0x8078EB54
    /* b 0x8078eb60 */ // 0x8078EB58
    /* li r0, -1 */ // 0x8078EB5C
    if (!=) goto 0x0x8078eb70;
    r3 = r29 + 0x88; // 0x8078EB68
    /* b 0x8078eb98 */ // 0x8078EB6C
    r4 = *(0x8c + r29); // lwz @ 0x8078EB70
    if (==) goto 0x0x8078eb98;
    if (==) goto 0x0x8078eb88;
    r0 = *(0x90 + r4); // lwz @ 0x8078EB80
    /* b 0x8078eb8c */ // 0x8078EB84
    /* li r0, -1 */ // 0x8078EB88
    if (!=) goto 0x0x8078eb98;
    r3 = r29 + 0x8c; // 0x8078EB94
    if (!=) goto 0x0x8078ebc0;
    r12 = *(0 + r29); // lwz @ 0x8078EBA0
    /* fmr f1, f31 */ // 0x8078EBA4
    r3 = r29;
    r4 = r30;
    r12 = *(0xe0 + r12); // lwz @ 0x8078EBB0
    /* mtctr r12 */ // 0x8078EBB4
    /* bctrl  */ // 0x8078EBB8
    r31 = r3;
    r3 = r31;
    r0 = *(0x24 + r1); // lwz @ 0x8078EBC4
    /* lfd f31, 0x18(r1) */ // 0x8078EBC8
    r31 = *(0x14 + r1); // lwz @ 0x8078EBCC
    r30 = *(0x10 + r1); // lwz @ 0x8078EBD0
    r29 = *(0xc + r1); // lwz @ 0x8078EBD4
    return;
}