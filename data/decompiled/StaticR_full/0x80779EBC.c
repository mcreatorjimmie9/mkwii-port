/* Function at 0x80779EBC, size=72 bytes */
/* Stack frame: 16 bytes */

void FUN_80779EBC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r0, 0x4330 */ // 0x80779EC0
    /* lis r5, 0 */ // 0x80779EC4
    r4 = *(0xbc + r3); // lwz @ 0x80779EC8
    *(0xc + r1) = r4; // stw @ 0x80779ECC
    /* lis r4, 0 */ // 0x80779ED0
    /* lfd f2, 0(r5) */ // 0x80779ED4
    *(8 + r1) = r0; // stw @ 0x80779ED8
    /* lfs f0, 0(r4) */ // 0x80779EDC
    /* lfd f1, 8(r1) */ // 0x80779EE0
    /* fsubs f1, f1, f2 */ // 0x80779EE4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80779EE8
    /* cror cr0eq, cr0gt, cr0eq */ // 0x80779EEC
    if (!=) goto 0x0x80779efc;
    /* li r0, 1 */ // 0x80779EF4
    *(0xb8 + r3) = r0; // stw @ 0x80779EF8
    return;
}