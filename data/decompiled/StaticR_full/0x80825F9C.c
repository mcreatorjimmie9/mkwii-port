/* Function at 0x80825F9C, size=296 bytes */
/* Stack frame: 32 bytes */

int FUN_80825F9C(int r3, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    if (==) goto 0x0x80826100;
    if (==) goto 0x0x80825fd4;
    /* .byte 0xe0, 0x45, 0x00, 0x00 */ // 0x80825FB0
    /* .byte 0xe0, 0x24, 0x00, 0x00 */ // 0x80825FB8
    /* vmsumshm v0, v2, v1, v0 */ // 0x80825FBC
    /* .byte 0xe0, 0x45, 0x80, 0x08 */ // 0x80825FC0
    /* .byte 0xe0, 0x24, 0x80, 0x08 */ // 0x80825FC4
    /* xsaddsp f0, f7, f0 */ // 0x80825FC8
    /* vmsumshm v0, v2, v1, v0 */ // 0x80825FCC
    /* xsmaddasp f0, f7, f16 */ // 0x80825FD0
    if (==) goto 0x0x80825ff8;
    /* lfs f0, 8(r1) */ // 0x80825FDC
    /* fctiwz f0, f0 */ // 0x80825FE0
    /* stfd f0, 0x18(r1) */ // 0x80825FE4
    r0 = *(0x1c + r1); // lwz @ 0x80825FE8
    r0 = r0 >> 1; // srawi
    *(0 + r3) = r0; // stb @ 0x80825FF0
    /* b 0x80826028 */ // 0x80825FF4
    r8 = *(0 + r3); // lbz @ 0x80825FF8
    /* lis r0, 0x4330 */ // 0x80825FFC
    *(0x18 + r1) = r0; // stw @ 0x80826000
    /* lis r7, 0 */ // 0x80826004
    /* extsb r0, r8 */ // 0x80826008
    /* lfd f1, 0(r7) */ // 0x8082600C
    /* slwi r0, r0, 1 */ // 0x80826010
    /* xoris r0, r0, 0x8000 */ // 0x80826014
    *(0x1c + r1) = r0; // stw @ 0x80826018
    /* lfd f0, 0x18(r1) */ // 0x8082601C
    /* fsubs f0, f0, f1 */ // 0x80826020
    /* stfs f0, 8(r1) */ // 0x80826024
    if (==) goto 0x0x80826048;
    /* lfs f0, 0xc(r1) */ // 0x80826030
    /* fctiwz f0, f0 */ // 0x80826034
    /* stfd f0, 0x18(r1) */ // 0x80826038
    r0 = *(0x1c + r1); // lwz @ 0x8082603C
    *(1 + r3) = r0; // stb @ 0x80826040
    /* b 0x80826074 */ // 0x80826044
    r8 = *(1 + r3); // lbz @ 0x80826048
    /* lis r0, 0x4330 */ // 0x8082604C
    *(0x18 + r1) = r0; // stw @ 0x80826050
    /* lis r7, 0 */ // 0x80826054
    /* extsb r0, r8 */ // 0x80826058
    /* lfd f1, 0(r7) */ // 0x8082605C
    /* xoris r0, r0, 0x8000 */ // 0x80826060
    *(0x1c + r1) = r0; // stw @ 0x80826064
    /* lfd f0, 0x18(r1) */ // 0x80826068
    /* fsubs f0, f0, f1 */ // 0x8082606C
    /* stfs f0, 0xc(r1) */ // 0x80826070
    r8 = r3 + 2; // 0x80826078
    if (==) goto 0x0x8082609c;
    /* lfs f0, 0x10(r1) */ // 0x80826080
    /* fctiwz f0, f0 */ // 0x80826084
    /* stfd f0, 0x18(r1) */ // 0x80826088
    r0 = *(0x1c + r1); // lwz @ 0x8082608C
    r0 = r0 >> 1; // srawi
    *(0 + r8) = r0; // stb @ 0x80826094
    /* b 0x808260cc */ // 0x80826098
    r7 = *(0 + r8); // lbz @ 0x8082609C
    /* lis r0, 0x4330 */ // 0x808260A0
    *(0x18 + r1) = r0; // stw @ 0x808260A4
    /* lis r3, 0 */ // 0x808260A8
    /* extsb r0, r7 */ // 0x808260AC
    /* lfd f1, 0(r3) */ // 0x808260B0
    /* slwi r0, r0, 1 */ // 0x808260B4
    /* xoris r0, r0, 0x8000 */ // 0x808260B8
    *(0x1c + r1) = r0; // stw @ 0x808260BC
    /* lfd f0, 0x18(r1) */ // 0x808260C0
}