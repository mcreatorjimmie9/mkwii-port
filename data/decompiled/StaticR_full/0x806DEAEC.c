/* Function at 0x806DEAEC, size=160 bytes */
/* Stack frame: 16 bytes */

void FUN_806DEAEC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    r3 = *(0 + r3); // lwz @ 0x806DEAF0
    r7 = *(0 + r4); // lwz @ 0x806DEAF4
    /* lfs f1, 0x190(r3) */ // 0x806DEAF8
    /* lfs f0, 0x190(r7) */ // 0x806DEAFC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x806DEB00
    if (<=) goto 0x0x806deb10;
    /* li r3, -1 */ // 0x806DEB08
    /* b 0x806deb84 */ // 0x806DEB0C
    if (>=) goto 0x0x806deb1c;
    /* li r3, 1 */ // 0x806DEB14
    /* b 0x806deb84 */ // 0x806DEB18
    r6 = *(0x184 + r3); // lwz @ 0x806DEB1C
    /* lis r0, 0x4330 */ // 0x806DEB20
    /* lis r5, 0 */ // 0x806DEB24
    /* lis r3, 0 */ // 0x806DEB28
    /* xoris r4, r6, 0x8000 */ // 0x806DEB2C
    *(0xc + r1) = r4; // stw @ 0x806DEB30
    /* lfd f2, 0(r5) */ // 0x806DEB34
    *(8 + r1) = r0; // stw @ 0x806DEB38
    /* lfs f1, 0(r3) */ // 0x806DEB3C
    /* lfd f0, 8(r1) */ // 0x806DEB40
    /* fsubs f0, f0, f2 */ // 0x806DEB44
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x806DEB48
    if (>=) goto 0x0x806deb58;
    /* li r3, 1 */ // 0x806DEB50
    /* b 0x806deb84 */ // 0x806DEB54
    r3 = *(0x184 + r7); // lwz @ 0x806DEB58
    *(8 + r1) = r0; // stw @ 0x806DEB5C
    /* xoris r0, r3, 0x8000 */ // 0x806DEB60
    *(0xc + r1) = r0; // stw @ 0x806DEB64
    /* lfd f0, 8(r1) */ // 0x806DEB68
    /* fsubs f0, f0, f2 */ // 0x806DEB6C
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x806DEB70
    if (>=) goto 0x0x806deb80;
    /* li r3, -1 */ // 0x806DEB78
    /* b 0x806deb84 */ // 0x806DEB7C
    /* subf r3, r6, r3 */ // 0x806DEB80
    return;
}