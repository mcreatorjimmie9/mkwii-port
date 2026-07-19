/* Function at 0x806DEA4C, size=160 bytes */
/* Stack frame: 16 bytes */

void FUN_806DEA4C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    r3 = *(0 + r3); // lwz @ 0x806DEA50
    r7 = *(0 + r4); // lwz @ 0x806DEA54
    /* lfs f1, 0x190(r3) */ // 0x806DEA58
    /* lfs f0, 0x190(r7) */ // 0x806DEA5C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x806DEA60
    if (<=) goto 0x0x806dea70;
    /* li r3, -1 */ // 0x806DEA68
    /* b 0x806deae4 */ // 0x806DEA6C
    if (>=) goto 0x0x806dea7c;
    /* li r3, 1 */ // 0x806DEA74
    /* b 0x806deae4 */ // 0x806DEA78
    r6 = *(0x184 + r3); // lwz @ 0x806DEA7C
    /* lis r0, 0x4330 */ // 0x806DEA80
    /* lis r5, 0 */ // 0x806DEA84
    /* lis r3, 0 */ // 0x806DEA88
    /* xoris r4, r6, 0x8000 */ // 0x806DEA8C
    *(0xc + r1) = r4; // stw @ 0x806DEA90
    /* lfd f2, 0(r5) */ // 0x806DEA94
    *(8 + r1) = r0; // stw @ 0x806DEA98
    /* lfs f1, 0(r3) */ // 0x806DEA9C
    /* lfd f0, 8(r1) */ // 0x806DEAA0
    /* fsubs f0, f0, f2 */ // 0x806DEAA4
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x806DEAA8
    if (>=) goto 0x0x806deab8;
    /* li r3, 1 */ // 0x806DEAB0
    /* b 0x806deae4 */ // 0x806DEAB4
    r3 = *(0x184 + r7); // lwz @ 0x806DEAB8
    *(8 + r1) = r0; // stw @ 0x806DEABC
    /* xoris r0, r3, 0x8000 */ // 0x806DEAC0
    *(0xc + r1) = r0; // stw @ 0x806DEAC4
    /* lfd f0, 8(r1) */ // 0x806DEAC8
    /* fsubs f0, f0, f2 */ // 0x806DEACC
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x806DEAD0
    if (>=) goto 0x0x806deae0;
    /* li r3, -1 */ // 0x806DEAD8
    /* b 0x806deae4 */ // 0x806DEADC
    /* subf r3, r3, r6 */ // 0x806DEAE0
    return;
}