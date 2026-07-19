/* Function at 0x8078DE50, size=120 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_8078DE50(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x8078DE58
    r0 = *(0xf4 + r3); // lwz @ 0x8078DE5C
    if (==) goto 0x0x8078deb8;
    r0 = *(0xb8 + r3); // lwz @ 0x8078DE68
    if (==) goto 0x0x8078de80;
    r4 = *(0xbc + r3); // lwz @ 0x8078DE74
    r4 = *(8 + r4); // lwz @ 0x8078DE78
    /* b 0x8078de84 */ // 0x8078DE7C
    /* li r4, 0 */ // 0x8078DE80
    /* lis r0, 0x4330 */ // 0x8078DE84
    *(0xc + r1) = r4; // stw @ 0x8078DE88
    /* lis r4, 0 */ // 0x8078DE8C
    *(8 + r1) = r0; // stw @ 0x8078DE90
    /* lfd f2, 0(r4) */ // 0x8078DE94
    /* lfd f0, 8(r1) */ // 0x8078DE98
    /* fsubs f0, f0, f2 */ // 0x8078DE9C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8078DEA0
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8078DEA4
    if (==) goto 0x0x8078deb8;
    /* li r4, 0 */ // 0x8078DEAC
    r3 = r3 + 0xb4; // 0x8078DEB0
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r0 = *(0x14 + r1); // lwz @ 0x8078DEB8
    return;
}