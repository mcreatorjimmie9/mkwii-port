/* Function at 0x8066EEF4, size=204 bytes */
/* Stack frame: 0 bytes */

void FUN_8066EEF4(int r3, int r4, int r5, int r6)
{
    r0 = *(0x14 + r3); // lbz @ 0x8066EEF4
    if (==) goto 0x0x8066ef9c;
    /* lis r5, 0 */ // 0x8066EF00
    /* lis r6, 0 */ // 0x8066EF04
    /* lfs f2, 0(r5) */ // 0x8066EF08
    /* lis r5, 0 */ // 0x8066EF0C
    /* lfs f1, 0(r6) */ // 0x8066EF10
    /* lfs f0, 0(r5) */ // 0x8066EF14
    /* fsubs f3, f2, f1 */ // 0x8066EF18
    /* lfs f2, 8(r4) */ // 0x8066EF1C
    /* lfs f1, 0(r4) */ // 0x8066EF20
    /* lfs f4, 0xc(r4) */ // 0x8066EF24
    /* fmuls f3, f0, f3 */ // 0x8066EF28
    /* lfs f5, 4(r4) */ // 0x8066EF2C
    /* fsubs f0, f2, f1 */ // 0x8066EF30
    /* fmuls f3, f3, f0 */ // 0x8066EF34
    /* fsubs f0, f2, f3 */ // 0x8066EF38
    /* fadds f2, f3, f1 */ // 0x8066EF3C
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x8066EF40
    if (>=) goto 0x0x8066ef50;
    /* fmr f1, f2 */ // 0x8066EF48
    /* b 0x8066ef54 */ // 0x8066EF4C
    /* fmr f1, f0 */ // 0x8066EF50
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x8066EF54
    /* stfs f1, 4(r3) */ // 0x8066EF58
    if (<=) goto 0x0x8066ef64;
    /* b 0x8066ef68 */ // 0x8066EF60
    /* fmr f2, f0 */ // 0x8066EF64
    /* .byte 0xfc, 0x05, 0x20, 0x40 */ // 0x8066EF68
    /* stfs f2, 0xc(r3) */ // 0x8066EF6C
    if (>=) goto 0x0x8066ef7c;
    /* fmr f0, f5 */ // 0x8066EF74
    /* b 0x8066ef80 */ // 0x8066EF78
    /* fmr f0, f4 */ // 0x8066EF7C
    /* .byte 0xfc, 0x05, 0x20, 0x40 */ // 0x8066EF80
    /* stfs f0, 8(r3) */ // 0x8066EF84
    if (<=) goto 0x0x8066ef90;
    /* b 0x8066ef94 */ // 0x8066EF8C
    /* fmr f5, f4 */ // 0x8066EF90
    /* stfs f5, 0x10(r3) */ // 0x8066EF94
    return;
    /* lfs f3, 0(r4) */ // 0x8066EF9C
    /* lfs f2, 4(r4) */ // 0x8066EFA0
    /* lfs f1, 8(r4) */ // 0x8066EFA4
    /* lfs f0, 0xc(r4) */ // 0x8066EFA8
    /* stfs f3, 4(r3) */ // 0x8066EFAC
    /* stfs f2, 8(r3) */ // 0x8066EFB0
    /* stfs f1, 0xc(r3) */ // 0x8066EFB4
    /* stfs f0, 0x10(r3) */ // 0x8066EFB8
    return;
}